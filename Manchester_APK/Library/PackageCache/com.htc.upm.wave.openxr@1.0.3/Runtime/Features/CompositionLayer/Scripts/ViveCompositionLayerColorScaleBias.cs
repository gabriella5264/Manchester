﻿// "Wave SDK 
// © 2020 HTC Corporation. All Rights Reserved.
//
// Unless otherwise required by copyright law and practice,
// upon the execution of HTC SDK license agreement,
// HTC grants you access to and use of the Wave SDK(s).
// You shall fully comply with all of HTC’s SDK license agreement terms and
// conditions signed by you and all SDK and API requirements,
// specifications, and documentation provided by HTC to You."

using System.Collections.Generic;
using UnityEditor;
using UnityEngine.XR.OpenXR;
using UnityEngine.XR.OpenXR.Features;
using AOT;
using UnityEngine;
using System;
using System.Runtime.InteropServices;
using System.Linq;

#if UNITY_EDITOR
using UnityEditor.XR.OpenXR.Features;
#endif

namespace Wave.OpenXR.CompositionLayer
{
#if UNITY_EDITOR
	[OpenXRFeature(UiName = "VIVE Focus 3 Composition Layer (Color Scale Bias)",
		Desc = "Enable this feature to enable the Composition Layer Color Scale Bias Extension",
		Company = "HTC",
		DocumentationLink = "..\\Documentation",
		OpenxrExtensionStrings = kOpenXRColorScaleBiasExtensionString,
		Version = "1.0.0",
		BuildTargetGroups = new[] { BuildTargetGroup.Android },
		FeatureId = featureId
	)]
#endif
	public class ViveCompositionLayerColorScaleBias : OpenXRFeature
	{
		const string LOG_TAG = "Wave.OpenXR.ViveCompositionLayer.ColorScaleBias";
		static void DEBUG(string msg) { Debug.Log(LOG_TAG + " " + msg); }
		static void WARNING(string msg) { Debug.LogWarning(LOG_TAG + " " + msg); }
		static void ERROR(string msg) { Debug.LogError(LOG_TAG + " " + msg); }

		/// <summary>
		/// The feature id string. This is used to give the feature a well known id for reference.
		/// </summary>
		public const string featureId = "vive.wave.openxr.feature.compositionlayer.colorscalebias";

		private const string kOpenXRColorScaleBiasExtensionString = "XR_KHR_composition_layer_color_scale_bias";

		private bool m_ColorScaleBiasExtensionEnabled = true;
		public bool ColorScaleBiasExtensionEnabled
		{
			get { return m_ColorScaleBiasExtensionEnabled; }
		}


		#region OpenXR Life Cycle
		protected override bool OnInstanceCreate(ulong xrInstance)
		{
			if (!OpenXRRuntime.IsExtensionEnabled(kOpenXRColorScaleBiasExtensionString))
			{
				WARNING("OnInstanceCreate() " + kOpenXRColorScaleBiasExtensionString + " is NOT enabled.");

				m_ColorScaleBiasExtensionEnabled = false;
			}

			return true;
		}
		#endregion

		#region Wrapper Functions
		private const string ExtLib = "waveopenxr";

		[DllImportAttribute(ExtLib, EntryPoint = "submit_CompositionLayerColorBias")]
		public static extern void WaveOpenXR_Submit_CompositionLayerColorBias(XrCompositionLayerColorScaleBiasKHR colorBias, int layerID);
		public void Submit_CompositionLayerColorBias(XrCompositionLayerColorScaleBiasKHR colorBias, int layerID)
		{
			WaveOpenXR_Submit_CompositionLayerColorBias(colorBias, layerID);
			return;
		}
		#endregion
	}
}