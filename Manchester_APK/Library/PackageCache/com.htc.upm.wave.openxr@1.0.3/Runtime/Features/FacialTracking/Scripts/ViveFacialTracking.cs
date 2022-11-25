// "Wave SDK 
// © 2020 HTC Corporation. All Rights Reserved.
//
// Unless otherwise required by copyright law and practice,
// upon the execution of HTC SDK license agreement,
// HTC grants you access to and use of the Wave SDK(s).
// You shall fully comply with all of HTC’s SDK license agreement terms and
// conditions signed by you and all SDK and API requirements,
// specifications, and documentation provided by HTC to You."

using UnityEngine.XR.OpenXR;
using UnityEngine.XR.OpenXR.Features;
using UnityEngine;
using System.Runtime.InteropServices;
using System;

#if UNITY_EDITOR
using UnityEditor;
using UnityEditor.XR.OpenXR.Features;
#endif

namespace Wave.OpenXR.FacialTracking
{
#if UNITY_EDITOR
    [OpenXRFeature(UiName = "VIVE Focus 3 Facial Tracking",
        BuildTargetGroups = new[] { BuildTargetGroup.Android },
        Company = "HTC",
        Desc = "VIVE Focus 3 Facial Tracking",
        DocumentationLink = "..\\Documentation",
        OpenxrExtensionStrings = kOpenxrExtensionString,
        Version = "1.0.0",
        FeatureId = featureId)]
#endif
    public class ViveFacialTracking : OpenXRFeature
	{
        const string LOG_TAG = "Wave.OpenXR.FacialTracking.ViveFacialTracking";
        void DEBUG(string msg) { Debug.Log(LOG_TAG + " " + msg); }
        void WARNING(string msg) { Debug.LogWarning(LOG_TAG + " " + msg); }
        void ERROR(string msg) { Debug.LogError(LOG_TAG + " " + msg); }

        /// <summary>
        /// OpenXR specification <see href="https://registry.khronos.org/OpenXR/specs/1.0/html/xrspec.html#XR_HTC_facial_tracking">12.68. XR_HTC_facial_tracking</see>.
        /// </summary>
        public const string kOpenxrExtensionString = "XR_HTC_facial_tracking";

        /// <summary>
        /// The feature id string. This is used to give the feature a well known id for reference.
        /// </summary>
        public const string featureId = "vive.wave.openxr.feature.facial.tracking";

        #region OpenXR Life Cycle
        private bool m_XrInstanceCreated = false;
        private XrInstance m_XrInstance = 0;
        /// <summary>
        /// Called when <see href="https://registry.khronos.org/OpenXR/specs/1.0/html/xrspec.html#xrCreateInstance">xrCreateInstance</see> is done.
        /// </summary>
        /// <param name="xrInstance">The created instance.</param>
        /// <returns>True for valid <see cref="XrInstance">XrInstance</see></returns>
        protected override bool OnInstanceCreate(ulong xrInstance)
        {
            if (!OpenXRRuntime.IsExtensionEnabled(kOpenxrExtensionString))
            {
                WARNING("OnInstanceCreate() " + kOpenxrExtensionString + " is NOT enabled.");
                return false;
            }

            m_XrInstanceCreated = true;
            m_XrInstance = xrInstance;
            DEBUG("OnInstanceCreate() " + m_XrInstance);

            return GetXrFunctionDelegates(m_XrInstance);
        }
        /// <summary>
        /// Called when <see href="https://registry.khronos.org/OpenXR/specs/1.0/html/xrspec.html#xrDestroyInstance">xrDestroyInstance</see> is done.
        /// </summary>
        /// <param name="xrInstance">The instance to destroy.</param>
        protected override void OnInstanceDestroy(ulong xrInstance)
        {
            m_XrInstanceCreated = false;
            m_XrInstance = 0;
            DEBUG("OnInstanceDestroy() " + xrInstance);
        }

        private XrSystemId m_XrSystemId = 0;
        /// <summary>
        /// Called when the <see cref="XrSystemId">XrSystemId</see> retrieved by <see href="https://registry.khronos.org/OpenXR/specs/1.0/html/xrspec.html#xrGetSystem">xrGetSystem</see> is changed.
        /// </summary>
        /// <param name="xrSystem">The system id.</param>
        protected override void OnSystemChange(ulong xrSystem)
        {
            m_XrSystemId = xrSystem;
            DEBUG("OnSystemChange() " + m_XrSystemId);
        }

        private bool m_XrSessionCreated = false;
        private XrSession m_XrSession = 0;
        private bool hasEyeTracker = false, hasLipTracker = false;
        private XrFacialTrackerHTC m_EyeTracker = 0, m_LipTracker = 0;
        /// <summary>
        /// Called when <see href="https://registry.khronos.org/OpenXR/specs/1.0/html/xrspec.html#xrCreateSession">xrCreateSession</see> is done.
        /// </summary>
        /// <param name="xrSession">The created session ID.</param>
        protected override void OnSessionCreate(ulong xrSession)
        {
            m_XrSession = xrSession;
            m_XrSessionCreated = true;
            DEBUG("OnSessionCreate() " + m_XrSession);

            if (CreateFacialTracker(XrFacialTrackingTypeHTC.XR_FACIAL_TRACKING_TYPE_EYE_DEFAULT_HTC)) { DEBUG("OnSessionCreate() m_EyeTracker " + m_EyeTracker); }
            if (CreateFacialTracker(XrFacialTrackingTypeHTC.XR_FACIAL_TRACKING_TYPE_LIP_DEFAULT_HTC)) { DEBUG("OnSessionCreate() m_LipTracker " + m_LipTracker); }
        }
        /// <summary>
        /// Called when <see href="https://registry.khronos.org/OpenXR/specs/1.0/html/xrspec.html#xrDestroySession">xrDestroySession</see> is done.
        /// </summary>
        /// <param name="xrSession">The session ID to destroy.</param>
        protected override void OnSessionDestroy(ulong xrSession)
        {
            DEBUG("OnSessionDestroy() " + xrSession);

            DestroyFacialTracker(XrFacialTrackingTypeHTC.XR_FACIAL_TRACKING_TYPE_EYE_DEFAULT_HTC);
            DestroyFacialTracker(XrFacialTrackingTypeHTC.XR_FACIAL_TRACKING_TYPE_LIP_DEFAULT_HTC);
        }
        #endregion

        #region OpenXR function delegates
        /// xrGetInstanceProcAddr
        OpenXRHelper.xrGetInstanceProcAddrDelegate XrGetInstanceProcAddr;

        /// xrGetSystemProperties
        OpenXRHelper.xrGetSystemPropertiesDelegate xrGetSystemProperties;
        private XrResult GetSystemProperties(ref XrSystemProperties properties)
        {
            if (m_XrInstanceCreated)
            {
                return xrGetSystemProperties(m_XrInstance, m_XrSystemId, ref properties);
            }

            return XrResult.XR_ERROR_INSTANCE_LOST;
        }

        /// xrDestroySpace
        OpenXRHelper.xrDestroySpaceDelegate xrDestroySpace;
        private XrResult DestroySpace(XrSpace space)
        {
            return xrDestroySpace(space);
        }

        ViveFacialTrackingHelper.xrCreateFacialTrackerHTCDelegate xrCreateFacialTrackerHTC;
        private XrResult CreateFacialTrackerHTC(ref XrFacialTrackerCreateInfoHTC createInfo, out XrFacialTrackerHTC facialTracker)
        {
            if (!m_XrSessionCreated)
            {
                facialTracker = 0;
                return XrResult.XR_ERROR_SESSION_LOST;
            }

            return xrCreateFacialTrackerHTC(m_XrSession, ref createInfo, out facialTracker);
        }

        ViveFacialTrackingHelper.xrDestroyFacialTrackerHTCDelegate xrDestroyFacialTrackerHTC;
        private XrResult DestroyFacialTrackerHTC(XrFacialTrackerHTC facialTracker) => xrDestroyFacialTrackerHTC(facialTracker);

        ViveFacialTrackingHelper.xrGetFacialExpressionsHTCDelegate xrGetFacialExpressionsHTC;
        private XrResult GetFacialExpressionsHTC(XrFacialTrackerHTC facialTracker, ref XrFacialExpressionsHTC facialExpressions) => xrGetFacialExpressionsHTC(facialTracker, ref facialExpressions);

        private bool GetXrFunctionDelegates(XrInstance xrInstance)
        {
            /// xrGetInstanceProcAddr
            if (xrGetInstanceProcAddr != null && xrGetInstanceProcAddr != IntPtr.Zero)
            {
                DEBUG("Get function pointer of xrGetInstanceProcAddr.");
                XrGetInstanceProcAddr = Marshal.GetDelegateForFunctionPointer(
                    xrGetInstanceProcAddr,
                    typeof(OpenXRHelper.xrGetInstanceProcAddrDelegate)) as OpenXRHelper.xrGetInstanceProcAddrDelegate;
            }
            else
            {
                ERROR("xrGetInstanceProcAddr");
                return false;
            }

            IntPtr funcPtr = IntPtr.Zero;
            /// xrGetSystemProperties
            if (XrGetInstanceProcAddr(xrInstance, "xrGetSystemProperties", out funcPtr) == XrResult.XR_SUCCESS)
            {
                if (funcPtr != IntPtr.Zero)
                {
                    DEBUG("Get function pointer of xrGetSystemProperties.");
                    xrGetSystemProperties = Marshal.GetDelegateForFunctionPointer(
                        funcPtr,
                        typeof(OpenXRHelper.xrGetSystemPropertiesDelegate)) as OpenXRHelper.xrGetSystemPropertiesDelegate;
                }
            }
            else
            {
                ERROR("xrGetSystemProperties");
                return false;
            }
            /// xrDestroySpace
            if (XrGetInstanceProcAddr(xrInstance, "xrDestroySpace", out funcPtr) == XrResult.XR_SUCCESS)
            {
                if (funcPtr != IntPtr.Zero)
                {
                    DEBUG("Get function pointer of xrDestroySpace.");
                    xrDestroySpace = Marshal.GetDelegateForFunctionPointer(
                        funcPtr,
                        typeof(OpenXRHelper.xrDestroySpaceDelegate)) as OpenXRHelper.xrDestroySpaceDelegate;
                }
            }
            else
            {
                ERROR("xrDestroySpace");
                return false;
            }

            /// xrCreateFacialTrackerHTC
            if (XrGetInstanceProcAddr(xrInstance, "xrCreateFacialTrackerHTC", out funcPtr) == XrResult.XR_SUCCESS)
            {
                if (funcPtr != IntPtr.Zero)
                {
                    DEBUG("Get function pointer of xrCreateFacialTrackerHTC.");
                    xrCreateFacialTrackerHTC = Marshal.GetDelegateForFunctionPointer(
                        funcPtr,
                        typeof(ViveFacialTrackingHelper.xrCreateFacialTrackerHTCDelegate)) as ViveFacialTrackingHelper.xrCreateFacialTrackerHTCDelegate;
                }
            }
            else
            {
                ERROR("xrCreateFacialTrackerHTC");
                return false;
            }
            /// xrDestroyFacialTrackerHTC
            if (XrGetInstanceProcAddr(xrInstance, "xrDestroyFacialTrackerHTC", out funcPtr) == XrResult.XR_SUCCESS)
            {
                if (funcPtr != IntPtr.Zero)
                {
                    DEBUG("Get function pointer of xrDestroyFacialTrackerHTC.");
                    xrDestroyFacialTrackerHTC = Marshal.GetDelegateForFunctionPointer(
                        funcPtr,
                        typeof(ViveFacialTrackingHelper.xrDestroyFacialTrackerHTCDelegate)) as ViveFacialTrackingHelper.xrDestroyFacialTrackerHTCDelegate;
                }
            }
            else
            {
                ERROR("xrDestroyFacialTrackerHTC");
                return false;
            }
            /// xrGetFacialExpressionsHTC
            if (XrGetInstanceProcAddr(xrInstance, "xrGetFacialExpressionsHTC", out funcPtr) == XrResult.XR_SUCCESS)
            {
                if (funcPtr != IntPtr.Zero)
                {
                    DEBUG("Get function pointer of xrGetFacialExpressionsHTC.");
                    xrGetFacialExpressionsHTC = Marshal.GetDelegateForFunctionPointer(
                        funcPtr,
                        typeof(ViveFacialTrackingHelper.xrGetFacialExpressionsHTCDelegate)) as ViveFacialTrackingHelper.xrGetFacialExpressionsHTCDelegate;
                }
            }
            else
            {
                ERROR("xrGetFacialExpressionsHTC");
                return false;
            }

            return true;
        }
        #endregion

        XrSystemFacialTrackingPropertiesHTC facialTrackingSystemProperties;
        XrSystemProperties systemProperties;
        private bool IsFacialTrackingSupported(XrFacialTrackingTypeHTC facialTrackingType)
        {
            if (!m_XrSessionCreated)
            {
                ERROR("IsFacialTrackingSupported() session is not created.");
                return false;
            }

            facialTrackingSystemProperties.type = XrStructureType.XR_TYPE_SYSTEM_FACIAL_TRACKING_PROPERTIES_HTC;
            systemProperties.type = XrStructureType.XR_TYPE_SYSTEM_PROPERTIES;
            systemProperties.next = Marshal.AllocHGlobal(Marshal.SizeOf(facialTrackingSystemProperties));

            long offset = 0;
            if (IntPtr.Size == 4)
                offset = systemProperties.next.ToInt32();
            else
                offset = systemProperties.next.ToInt64();

            IntPtr sys_facial_tracking_prop_ptr = new IntPtr(offset);
            Marshal.StructureToPtr(facialTrackingSystemProperties, sys_facial_tracking_prop_ptr, false);

            if (GetSystemProperties(ref systemProperties) == XrResult.XR_SUCCESS)
            {
                if (IntPtr.Size == 4)
                    offset = systemProperties.next.ToInt32();
                else
                    offset = systemProperties.next.ToInt64();

                sys_facial_tracking_prop_ptr = new IntPtr(offset);
                facialTrackingSystemProperties = (XrSystemFacialTrackingPropertiesHTC)Marshal.PtrToStructure(sys_facial_tracking_prop_ptr, typeof(XrSystemFacialTrackingPropertiesHTC));

                DEBUG("IsFacialTrackingSupported() XrSystemFacialTrackingPropertiesHTC.supportEyeFacialTracking: "
                    + facialTrackingSystemProperties.supportEyeFacialTracking
                    + ", supportLipFacialTracking: "
                    + facialTrackingSystemProperties.supportLipFacialTracking);

                return (facialTrackingType == XrFacialTrackingTypeHTC.XR_FACIAL_TRACKING_TYPE_EYE_DEFAULT_HTC ?
                    (facialTrackingSystemProperties.supportEyeFacialTracking > 0) : (facialTrackingSystemProperties.supportLipFacialTracking > 0));
            }
            else
            {
                ERROR("IsFacialTrackingSupported() GetSystemProperties failed.");
            }

            return false;
        }

        /// <summary>
        /// This function is deprecated. Please use <see cref="ViveFacialTracking.CreateFacialTracker(XrFacialTrackingTypeHTC)">CreateFacialTracker(XrFacialTrackingTypeHTC)</see> instead.
        /// An application can create an <see cref="XrFacialTrackingTypeHTC">XrFacialTrackerHTC</see> handle using CreateFacialTracker.
        /// </summary>
        /// <param name="facialTrackingType">The XrFacialTrackingTypeHTC describes which type of tracking the <see cref="XrFacialTrackerHTC">XrFacialTrackerHTC</see> is using.</param>
        /// <param name="facialTracker">The returned XrFacialTrackerHTC handle.</param>
        /// <returns>True for success.</returns>
        [System.Obsolete("This function is deprecated. Please use \"bool CreateFacialTracker(XrFacialTrackingTypeHTC facialTrackingType)\" instead.")]
        public bool CreateFacialTracker(XrFacialTrackingTypeHTC facialTrackingType, out XrFacialTrackerHTC facialTracker)
        {
            if (facialTrackingType == XrFacialTrackingTypeHTC.XR_FACIAL_TRACKING_TYPE_EYE_DEFAULT_HTC && hasEyeTracker)
			{
                facialTracker = m_EyeTracker;
                DEBUG("CreateFacialTracker() " + facialTrackingType + " " + facialTracker + " already created before.");
                return true;
			}

            if (facialTrackingType == XrFacialTrackingTypeHTC.XR_FACIAL_TRACKING_TYPE_LIP_DEFAULT_HTC && hasLipTracker)
			{
                facialTracker = m_LipTracker;
                DEBUG("CreateFacialTracker() " + facialTrackingType + " " + facialTracker + " already created before.");
                return true;
            }

            if (!IsFacialTrackingSupported(facialTrackingType))
            {
                ERROR("CreateFacialTracker() " + facialTrackingType + " is NOT supported.");
                facialTracker = 0;
                return false;
            }

            XrFacialTrackerCreateInfoHTC createInfo = new XrFacialTrackerCreateInfoHTC(
                in_type: XrStructureType.XR_TYPE_FACIAL_TRACKER_CREATE_INFO_HTC,
                in_next: IntPtr.Zero,
                in_facialTrackingType: facialTrackingType);

            var ret = CreateFacialTrackerHTC(ref createInfo, out facialTracker);
            DEBUG("CreateFacialTracker() " + facialTrackingType + ", CreateFacialTrackerHTC = " + ret + ", facialTracker: " + facialTracker);

            return ret == XrResult.XR_SUCCESS;
        }
        /// <summary>
        /// An application can create an <see cref="XrFacialTrackingTypeHTC">XrFacialTrackerHTC</see> handle using CreateFacialTracker.
        /// </summary>
        /// <param name="facialTrackingType">The XrFacialTrackingTypeHTC describes which type of tracking the <see cref="XrFacialTrackerHTC">XrFacialTrackerHTC</see> is using.</param>
        /// <returns>True for success.</returns>
        public bool CreateFacialTracker(XrFacialTrackingTypeHTC facialTrackingType)
		{
            if (facialTrackingType == XrFacialTrackingTypeHTC.XR_FACIAL_TRACKING_TYPE_EYE_DEFAULT_HTC && hasEyeTracker ||
                facialTrackingType == XrFacialTrackingTypeHTC.XR_FACIAL_TRACKING_TYPE_LIP_DEFAULT_HTC && hasLipTracker)
			{
                DEBUG("CreateFacialTracker() " + facialTrackingType + " already created before.");
                return true;
            }

#pragma warning disable
            if (CreateFacialTracker(facialTrackingType, out XrFacialTrackerHTC value))
#pragma warning enable
            {
                if (facialTrackingType == XrFacialTrackingTypeHTC.XR_FACIAL_TRACKING_TYPE_EYE_DEFAULT_HTC)
				{
                    hasEyeTracker = true;
                    m_EyeTracker = value;
                    DEBUG("CreateFacialTracker() m_EyeTracker " + m_EyeTracker);
                }
                if (facialTrackingType == XrFacialTrackingTypeHTC.XR_FACIAL_TRACKING_TYPE_LIP_DEFAULT_HTC)
				{
                    hasLipTracker = true;
                    m_LipTracker = value;
                    DEBUG("CreateFacialTracker() m_LipTracker " + m_LipTracker);
                }
                return true;
			}
            return false;
		}
        /// <summary>
        /// Releases the facial tracker and the underlying resources of the <see cref="XrFacialTrackingTypeHTC">facial tracking type</see> when finished with facial tracking experiences.
        /// </summary>
        /// <param name="facialTrackingType">The XrFacialTrackingTypeHTC describes which type of tracking the <see cref="XrFacialTrackerHTC">XrFacialTrackerHTC</see> is using.</param>
        /// <returns>True for success.</returns>
        public bool DestroyFacialTracker(XrFacialTrackingTypeHTC facialTrackingType)
		{
            XrResult ret = XrResult.XR_ERROR_FEATURE_UNSUPPORTED;

            if (facialTrackingType == XrFacialTrackingTypeHTC.XR_FACIAL_TRACKING_TYPE_EYE_DEFAULT_HTC && hasEyeTracker)
			{
                ret = DestroyFacialTrackerHTC(m_EyeTracker);
                DEBUG("DestroyFacialTracker() Eye tracker:" + m_EyeTracker + ", DestroyFacialTrackerHTC = " + ret);
                hasEyeTracker = false;
                m_EyeTracker = 0;
			}
			else
			{
                DEBUG("DestroyFacialTracker() Eye tracker failed.");
			}
            if (facialTrackingType == XrFacialTrackingTypeHTC.XR_FACIAL_TRACKING_TYPE_LIP_DEFAULT_HTC && hasLipTracker)
            {
                ret = DestroyFacialTrackerHTC(m_LipTracker);
                DEBUG("DestroyFacialTracker() Lip tracker:" + m_LipTracker + ", DestroyFacialTrackerHTC = " + ret);
                hasLipTracker = false;
                m_LipTracker = 0;
            }
            {
                DEBUG("DestroyFacialTracker() Lip tracker failed.");
            }

            return ret == XrResult.XR_SUCCESS;
        }

        private int eyeUpdateFrame = -1, lipUpdateFrame = -1;
        private float[] s_EyeExpressionData = new float[(int)XrEyeExpressionHTC.XR_EYE_EXPRESSION_MAX_ENUM_HTC];
        private float[] s_LipExpressionData = new float[(int)XrLipExpressionHTC.XR_LIP_EXPRESSION_MAX_ENUM_HTC];
        XrFacialExpressionsHTC facialExpressions = new XrFacialExpressionsHTC();
        /// <summary>
        /// Retrieves an array of values of blend shapes for a facial expression on a given time.
        /// </summary>
        /// <param name="facialTrackingType">The XrFacialTrackingTypeHTC describes which type of tracking the <see cref="XrFacialTrackerHTC">XrFacialTrackerHTC</see> is using.</param>
        /// <param name="expressionWeightings">A float array filled in by the runtime, specifying the weightings for each blend shape. The array size is <see cref="XrEyeExpressionHTC.XR_EYE_EXPRESSION_MAX_ENUM_HTC">XR_EYE_EXPRESSION_MAX_ENUM_HTC</see> for eye expression and <see cref="XrLipExpressionHTC.XR_LIP_EXPRESSION_MAX_ENUM_HTC">XR_LIP_EXPRESSION_MAX_ENUM_HTC</see> for lip expression.</param>
        /// <returns>True for success.</returns>
        public bool GetFacialExpressions(XrFacialTrackingTypeHTC facialTrackingType, out float[] expressionWeightings)
		{
            expressionWeightings = (facialTrackingType == XrFacialTrackingTypeHTC.XR_FACIAL_TRACKING_TYPE_EYE_DEFAULT_HTC ?
                s_EyeExpressionData : s_LipExpressionData);

            if (facialTrackingType == XrFacialTrackingTypeHTC.XR_FACIAL_TRACKING_TYPE_EYE_DEFAULT_HTC)
            {
                if (!hasEyeTracker) { return false; }
                if (eyeUpdateFrame == Time.frameCount) { return true; }
                eyeUpdateFrame = Time.frameCount;
            }
            if (facialTrackingType == XrFacialTrackingTypeHTC.XR_FACIAL_TRACKING_TYPE_LIP_DEFAULT_HTC)
            {
                if (!hasLipTracker) { return false; }
                if (lipUpdateFrame == Time.frameCount) { return true; }
                lipUpdateFrame = Time.frameCount;
            }

            facialExpressions.type = XrStructureType.XR_TYPE_FACIAL_EXPRESSIONS_HTC;
            facialExpressions.next = IntPtr.Zero;
            facialExpressions.isActive = false;
            facialExpressions.sampleTime = 0;

            UInt32 expressionCount = (facialTrackingType == XrFacialTrackingTypeHTC.XR_FACIAL_TRACKING_TYPE_EYE_DEFAULT_HTC ?
                (UInt32)XrEyeExpressionHTC.XR_EYE_EXPRESSION_MAX_ENUM_HTC : (UInt32)XrLipExpressionHTC.XR_LIP_EXPRESSION_MAX_ENUM_HTC);

            facialExpressions.expressionCount = expressionCount;
            facialExpressions.expressionWeightings = Marshal.AllocHGlobal(Marshal.SizeOf(typeof(float)) * (int)expressionCount);

            var facialTracker = (facialTrackingType == XrFacialTrackingTypeHTC.XR_FACIAL_TRACKING_TYPE_EYE_DEFAULT_HTC ? m_EyeTracker : m_LipTracker);
            if (GetFacialExpressionsHTC(
                facialTracker: facialTracker,
                facialExpressions: ref facialExpressions) == XrResult.XR_SUCCESS)
            {
                if (facialExpressions.isActive)
                {
                    if (facialTrackingType == XrFacialTrackingTypeHTC.XR_FACIAL_TRACKING_TYPE_EYE_DEFAULT_HTC)
                    {
                        Marshal.Copy(facialExpressions.expressionWeightings, s_EyeExpressionData, 0, (int)expressionCount);
                        expressionWeightings = s_EyeExpressionData;
                    }
                    if (facialTrackingType == XrFacialTrackingTypeHTC.XR_FACIAL_TRACKING_TYPE_LIP_DEFAULT_HTC)
					{
                        Marshal.Copy(facialExpressions.expressionWeightings, s_LipExpressionData, 0, (int)expressionCount);
                        expressionWeightings = s_LipExpressionData;
                    }
                    Marshal.FreeHGlobal(facialExpressions.expressionWeightings);
                    return true;
                }
            }

            Marshal.FreeHGlobal(facialExpressions.expressionWeightings);
            return false;
		}
    }
}
