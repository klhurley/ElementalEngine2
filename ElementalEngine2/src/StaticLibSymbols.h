//Autogenerated Static Lib File:
//Generated on: 03/23/09 14:51:39

#ifndef INCLUDE_SYMBOLS_ELEMENTALENGINE
#define INCLUDE_SYMBOLS_ELEMENTALENGINE
#endif	//#ifndef INCLUDE_SYMBOLS_ELEMENTALENGINE
#ifdef _LIB

namespace ElementalEngine {
struct INITDLLINFO;
class CRegisterComponent;
class CRegisterMessage;
}

using namespace ElementalEngine;


extern void *ELEMENTALENGINE_LIBEXTERNS[];
//Singleton externs
extern "C" CRegisterComponent CArchiveFactoryRO;
extern "C" CRegisterComponent CCameraManagerRO;
extern "C" CRegisterComponent CEntityManagerRO;
extern "C" CRegisterComponent CFontManagerRO;
extern "C" CRegisterComponent CHierarchyManagerRO;
extern "C" CRegisterComponent CIndexBufferManagerRO;
extern "C" CRegisterComponent CInputManagerRO;
extern "C" CRegisterComponent CLightManagerRO;
extern "C" CRegisterComponent CListenerFactoryRO;
extern "C" CRegisterComponent CMemoryAllocatorRO;
extern "C" CRegisterComponent CNetManagerRO;
extern "C" CRegisterComponent CObjectFactoryRO;
extern "C" CRegisterComponent CParticleManagerRO;
extern "C" CRegisterComponent CPerfTimeManagerRO;
extern "C" CRegisterComponent CRenderManagerRO;
extern "C" CRegisterComponent CSceneObjectManagerRO;
extern "C" CRegisterComponent CSceneVisibilityManagerRO;
extern "C" CRegisterComponent CShaderManagerRO;
extern "C" CRegisterComponent CSoundManagerRO;
extern "C" CRegisterComponent CSpriteManagerRO;
extern "C" CRegisterComponent CVertexBufferManagerRO;
extern "C" CRegisterComponent CIndexBufferManagerRO;
extern "C" CRegisterComponent CTextureManagerRO;
extern "C" CRegisterComponent CTimerRO;
extern "C" CRegisterComponent CVertexBufferManagerRO;
extern "C" CRegisterComponent CDefaultLoggerRO;
extern "C" CRegisterComponent CJoystickManagerRO;
extern "C" CRegisterComponent CMathManagerRO;
extern "C" CRegisterComponent CPerformanceProfilerHandlerRO;
extern "C" CRegisterComponent CProxyManagerRO;
extern "C" CRegisterComponent CStreamFactoryRO;
//Component externs
extern "C" CRegisterComponent C2DLineRO;
extern "C" CRegisterComponent CAnimatedTextureObjectRO;
extern "C" CRegisterComponent CArchiveFactoryRO;
extern "C" CRegisterComponent CCameraRO;
extern "C" CRegisterComponent CCameraManagerRO;
extern "C" CRegisterComponent CEffectRO;
extern "C" CRegisterComponent CEntityRO;
extern "C" CRegisterComponent CEntityManagerRO;
extern "C" CRegisterComponent CFontManagerRO;
extern "C" CRegisterComponent CHierarchyManagerRO;
extern "C" CRegisterComponent CIndexBufferManagerRO;
extern "C" CRegisterComponent CInputManagerRO;
extern "C" CRegisterComponent CLightManagerRO;
extern "C" CRegisterComponent CLightObjectRO;
extern "C" CRegisterComponent CListenerFactoryRO;
extern "C" CRegisterComponent CMaterialRO;
extern "C" CRegisterComponent CMaterialTemplateRO;
extern "C" CRegisterComponent CMemoryAllocatorRO;
extern "C" CRegisterComponent CMeshObjectRO;
extern "C" CRegisterComponent CNetConnectionRO;
extern "C" CRegisterComponent CNetManagerRO;
extern "C" CRegisterComponent CObjectFactoryRO;
extern "C" CRegisterComponent CParticleBatchRenderObjectRO;
extern "C" CRegisterComponent CParticleEmitterRO;
extern "C" CRegisterComponent CParticleEmitterObjectRO;
extern "C" CRegisterComponent CParticleEmitterTypeRO;
extern "C" CRegisterComponent CParticleLineRenderObjectRO;
extern "C" CRegisterComponent CParticleLineTypeRO;
extern "C" CRegisterComponent CParticleManagerRO;
extern "C" CRegisterComponent CParticleRenderObjectRO;
extern "C" CRegisterComponent CParticleRibbonRenderObjectRO;
extern "C" CRegisterComponent CParticleRibbonTypeRO;
extern "C" CRegisterComponent CParticleSystemObjectRO;
extern "C" CRegisterComponent CParticleTypeRO;
extern "C" CRegisterComponent CPerfTimeManagerRO;
extern "C" CRegisterComponent CRenderManagerRO;
extern "C" CRegisterComponent CSceneObjectManagerRO;
extern "C" CRegisterComponent CSceneVisibilityManagerRO;
extern "C" CRegisterComponent CShaderManagerRO;
extern "C" CRegisterComponent CShaderPathRO;
extern "C" CRegisterComponent CSoundManagerRO;
extern "C" CRegisterComponent CSpriteManagerRO;
extern "C" CRegisterComponent CVertexBufferManagerRO;
extern "C" CRegisterComponent CIndexBufferManagerRO;
extern "C" CRegisterComponent CTextureManagerRO;
extern "C" CRegisterComponent CTimerRO;
extern "C" CRegisterComponent CVertexBufferManagerRO;
extern "C" CRegisterComponent CVertexFormatRO;
extern "C" CRegisterComponent CWorldRO;
extern "C" CRegisterComponent CDefaultLoggerRO;
extern "C" CRegisterComponent CJoystickManagerRO;
extern "C" CRegisterComponent CMathManagerRO;
extern "C" CRegisterComponent CPerformanceProfilerHandlerRO;
extern "C" CRegisterComponent CProxyManagerRO;
extern "C" CRegisterComponent CStreamFactoryRO;
//Message externs
extern "C" CRegisterMessage CreateXMLArchive_CArchiveFactoryRM;
extern "C" CRegisterMessage CreateArchive_CArchiveFactoryRM;
extern "C" CRegisterMessage CreateXMLArchiveStream_CArchiveFactoryRM;
extern "C" CRegisterMessage UpdateCamera_CCameraRM;
extern "C" CRegisterMessage ActivateCamera_CCameraRM;
extern "C" CRegisterMessage GetCameraFrustum_CCameraRM;
extern "C" CRegisterMessage MoveCamera_CCameraRM;
extern "C" CRegisterMessage RotateCamera_CCameraRM;
extern "C" CRegisterMessage SetLookAtPosition_CCameraRM;
extern "C" CRegisterMessage GetCameraVectors_CCameraRM;
extern "C" CRegisterMessage SetGlobalPosition_CCameraRM;
extern "C" CRegisterMessage GetGlobalPosition_CCameraRM;
extern "C" CRegisterMessage GetGlobalEuler_CCameraRM;
extern "C" CRegisterMessage SetGlobalEuler_CCameraRM;
extern "C" CRegisterMessage SetCameraHierarchyStatus_CCameraRM;
extern "C" CRegisterMessage SetProjection_CCameraRM;
extern "C" CRegisterMessage SetNearClip_CCameraRM;
extern "C" CRegisterMessage SetFarClip_CCameraRM;
extern "C" CRegisterMessage GetCameraProjectionMatrix_CCameraRM;
extern "C" CRegisterMessage GetCameraViewMatrix_CCameraRM;
extern "C" CRegisterMessage SetCameraUseBackBufferAspectRatio_CCameraRM;
extern "C" CRegisterMessage GetNearFarClip_CCameraRM;
extern "C" CRegisterMessage ObjectInCamera_CCameraRM;
extern "C" CRegisterMessage SetCameraZoom_CCameraRM;
extern "C" CRegisterMessage GetActiveCamera_CCameraManagerRM;
extern "C" CRegisterMessage SetActiveCamera_CCameraManagerRM;
extern "C" CRegisterMessage GetActiveCameraPosition_CCameraManagerRM;
extern "C" CRegisterMessage SetActiveCameraPosition_CCameraManagerRM;
extern "C" CRegisterMessage GetActiveCameraOrientation_CCameraManagerRM;
extern "C" CRegisterMessage SetActiveCameraOrientation_CCameraManagerRM;
extern "C" CRegisterMessage Start_CCameraManagerRM;
extern "C" CRegisterMessage Stop_CCameraManagerRM;
extern "C" CRegisterMessage CreateCamera_CCameraManagerRM;
extern "C" CRegisterMessage GetActiveCameraZMinMax_CCameraManagerRM;
extern "C" CRegisterMessage DestroyRenderer_CCameraManagerRM;
extern "C" CRegisterMessage SetActiveCameraZoom_CCameraManagerRM;
extern "C" CRegisterMessage GetLocalPosition_CEntityRM;
extern "C" CRegisterMessage GetLocalEuler_CEntityRM;
extern "C" CRegisterMessage GetLocalQuaternion_CEntityRM;
extern "C" CRegisterMessage GetLocalScale_CEntityRM;
extern "C" CRegisterMessage GetLocalTransform_CEntityRM;
extern "C" CRegisterMessage SetLocalPosition_CEntityRM;
extern "C" CRegisterMessage SetLocalEuler_CEntityRM;
extern "C" CRegisterMessage SetLocalQuaternion_CEntityRM;
extern "C" CRegisterMessage SetLocalScale_CEntityRM;
extern "C" CRegisterMessage SetLocalTransform_CEntityRM;
extern "C" CRegisterMessage GetGlobalPosition_CEntityRM;
extern "C" CRegisterMessage GetGlobalEuler_CEntityRM;
extern "C" CRegisterMessage GetGlobalQuaternion_CEntityRM;
extern "C" CRegisterMessage GetGlobalScale_CEntityRM;
extern "C" CRegisterMessage GetGlobalTransform_CEntityRM;
extern "C" CRegisterMessage SetGlobalPosition_CEntityRM;
extern "C" CRegisterMessage SetGlobalEuler_CEntityRM;
extern "C" CRegisterMessage SetGlobalQuaternion_CEntityRM;
extern "C" CRegisterMessage SetGlobalScale_CEntityRM;
extern "C" CRegisterMessage SetGlobalTransform_CEntityRM;
extern "C" CRegisterMessage GetEntityType_CEntityRM;
extern "C" CRegisterMessage GetParentName_CEntityRM;
extern "C" CRegisterMessage IsEntityTypeOf_CEntityRM;
extern "C" CRegisterMessage GetBoundingRadius_CEntityRM;
extern "C" CRegisterMessage AddChildObject_CEntityRM;
extern "C" CRegisterMessage RemoveChildObject_CEntityRM;
extern "C" CRegisterMessage AttachSceneObject_CEntityRM;
extern "C" CRegisterMessage AlignToSceneObject_CEntityRM;
extern "C" CRegisterMessage VisitEntities_CEntityManagerRM;
extern "C" CRegisterMessage Start_CEntityManagerRM;
extern "C" CRegisterMessage Stop_CEntityManagerRM;
extern "C" CRegisterMessage CreateFont_CFontManagerRM;
extern "C" CRegisterMessage DeleteFont_CFontManagerRM;
extern "C" CRegisterMessage GetFontPixWidth_CFontManagerRM;
extern "C" CRegisterMessage RenderUpdate_CFontManagerRM;
extern "C" CRegisterMessage SetFontImplementation_CFontManagerRM;
extern "C" CRegisterMessage DestroyRenderer_CFontManagerRM;
extern "C" CRegisterMessage AddFontGlyphTexFilename_CFontManagerRM;
extern "C" CRegisterMessage GetFontGlyphTexture_CFontManagerRM;
extern "C" CRegisterMessage VisitHierarchy_CHierarchyManagerRM;
extern "C" CRegisterMessage RemoveObject_CHierarchyManagerRM;
extern "C" CRegisterMessage ClearHierarchy_CHierarchyManagerRM;
extern "C" CRegisterMessage ChangeObjectName_CHierarchyManagerRM;
extern "C" CRegisterMessage ChangeObjectParent_CHierarchyManagerRM;
extern "C" CRegisterMessage SetActiveScene_CHierarchyManagerRM;
extern "C" CRegisterMessage GetActiveScene_CHierarchyManagerRM;
extern "C" CRegisterMessage AllocateIndices_CIndexBufferManagerRM;
extern "C" CRegisterMessage GetIndexAllocationInterface_CIndexBufferManagerRM;
extern "C" CRegisterMessage RemoveIndexAllocation_CIndexBufferManagerRM;
extern "C" CRegisterMessage DestroyRenderer_CIndexBufferManagerRM;
extern "C" CRegisterMessage SetKeyBinding_CInputManagerRM;
extern "C" CRegisterMessage GetKeyBinding_CInputManagerRM;
extern "C" CRegisterMessage SetInputHandler_CInputManagerRM;
extern "C" CRegisterMessage UnsetInputHandler_CInputManagerRM;
extern "C" CRegisterMessage Begin_CInputManagerRM;
extern "C" CRegisterMessage End_CInputManagerRM;
extern "C" CRegisterMessage Start_CInputManagerRM;
extern "C" CRegisterMessage Stop_CInputManagerRM;
extern "C" CRegisterMessage LoadKeyBinding_CInputManagerRM;
extern "C" CRegisterMessage SetActiveKeyBinding_CInputManagerRM;
extern "C" CRegisterMessage GetActiveKeyBinding_CInputManagerRM;
extern "C" CRegisterMessage GetCurrentInputMode_CInputManagerRM;
extern "C" CRegisterMessage GetMousePosition_CInputManagerRM;
extern "C" CRegisterMessage EnableDepthShadows_CLightManagerRM;
extern "C" CRegisterMessage RegisterLight_CLightManagerRM;
extern "C" CRegisterMessage UnregisterLight_CLightManagerRM;
extern "C" CRegisterMessage GetLightObjPtrByName_CLightManagerRM;
extern "C" CRegisterMessage GetLightShadowTexture_CLightManagerRM;
extern "C" CRegisterMessage GetGlobalLightArray_CLightManagerRM;
extern "C" CRegisterMessage GenerateLightPerspectiveMap_CLightManagerRM;
extern "C" CRegisterMessage SetColor_CLightObjectRM;
extern "C" CRegisterMessage SetAttenuation_CLightObjectRM;
extern "C" CRegisterMessage EnableLightShadows_CLightObjectRM;
extern "C" CRegisterMessage GlobalUpdateTick_CListenerFactoryRM;
extern "C" CRegisterMessage Start_CNetManagerRM;
extern "C" CRegisterMessage Stop_CNetManagerRM;
extern "C" CRegisterMessage AddObjectToFactory_CObjectFactoryRM;
extern "C" CRegisterMessage CreateObject_CObjectFactoryRM;
extern "C" CRegisterMessage DeleteObject_CObjectFactoryRM;
extern "C" CRegisterMessage DelayedDeleteObject_CObjectFactoryRM;
extern "C" CRegisterMessage InitObject_CObjectFactoryRM;
extern "C" CRegisterMessage SerializeObject_CObjectFactoryRM;
extern "C" CRegisterMessage FindObject_CObjectFactoryRM;
extern "C" CRegisterMessage RenameObject_CObjectFactoryRM;
extern "C" CRegisterMessage GetComponentType_CObjectFactoryRM;
extern "C" CRegisterMessage GenerateUniqueObjectName_CObjectFactoryRM;
extern "C" CRegisterMessage FlagDuplicateObjectChecking_CObjectFactoryRM;
extern "C" CRegisterMessage Disable_CParticleEmitterObjectRM;
extern "C" CRegisterMessage Enable_CParticleEmitterObjectRM;
extern "C" CRegisterMessage Reset_CParticleEmitterObjectRM;
extern "C" CRegisterMessage Pulse_CParticleEmitterObjectRM;
extern "C" CRegisterMessage SetGlobalPosition_CParticleEmitterObjectRM;
extern "C" CRegisterMessage SetGlobalEuler_CParticleEmitterObjectRM;
extern "C" CRegisterMessage SetGlobalQuaternion_CParticleEmitterObjectRM;
extern "C" CRegisterMessage SetGlobalScale_CParticleEmitterObjectRM;
extern "C" CRegisterMessage SetGlobalTransform_CParticleEmitterObjectRM;
extern "C" CRegisterMessage SetLocalPosition_CParticleEmitterObjectRM;
extern "C" CRegisterMessage SetLocalEuler_CParticleEmitterObjectRM;
extern "C" CRegisterMessage SetLocalQuaternion_CParticleEmitterObjectRM;
extern "C" CRegisterMessage SetLocalScale_CParticleEmitterObjectRM;
extern "C" CRegisterMessage SetLocalTransform_CParticleEmitterObjectRM;
extern "C" CRegisterMessage Disable_CParticleLineRenderObjectRM;
extern "C" CRegisterMessage Enable_CParticleLineRenderObjectRM;
extern "C" CRegisterMessage SetLength_CParticleLineRenderObjectRM;
extern "C" CRegisterMessage SetParticleLineSpeed_CParticleLineRenderObjectRM;
extern "C" CRegisterMessage GetParticleType_CParticleManagerRM;
extern "C" CRegisterMessage GetParticleTypeNoLoad_CParticleManagerRM;
extern "C" CRegisterMessage GetParticleEmitterType_CParticleManagerRM;
extern "C" CRegisterMessage ReloadParticle_CParticleManagerRM;
extern "C" CRegisterMessage ReloadAllParticles_CParticleManagerRM;
extern "C" CRegisterMessage RenameParticleBrush_CParticleManagerRM;
extern "C" CRegisterMessage RenameParticleEmitter_CParticleManagerRM;
extern "C" CRegisterMessage EditorDisplay_CParticleManagerRM;
extern "C" CRegisterMessage AddLoadedEmitter_CParticleManagerRM;
extern "C" CRegisterMessage AddLoadedBrush_CParticleManagerRM;
extern "C" CRegisterMessage Disable_CParticleRenderObjectRM;
extern "C" CRegisterMessage Enable_CParticleRenderObjectRM;
extern "C" CRegisterMessage Reset_CParticleRenderObjectRM;
extern "C" CRegisterMessage SetParticleTime_CParticleRenderObjectRM;
extern "C" CRegisterMessage GetParticleEmitterInterface_CParticleRenderObjectRM;
extern "C" CRegisterMessage SetParticleInitialVelocity_CParticleRenderObjectRM;
extern "C" CRegisterMessage ReloadTextures_CParticleRenderObjectRM;
extern "C" CRegisterMessage SetGlobalPosition_CParticleRenderObjectRM;
extern "C" CRegisterMessage SetGlobalEuler_CParticleRenderObjectRM;
extern "C" CRegisterMessage SetGlobalQuaternion_CParticleRenderObjectRM;
extern "C" CRegisterMessage SetGlobalScale_CParticleRenderObjectRM;
extern "C" CRegisterMessage SetGlobalTransform_CParticleRenderObjectRM;
extern "C" CRegisterMessage SetLocalPosition_CParticleRenderObjectRM;
extern "C" CRegisterMessage SetLocalEuler_CParticleRenderObjectRM;
extern "C" CRegisterMessage SetLocalQuaternion_CParticleRenderObjectRM;
extern "C" CRegisterMessage SetLocalScale_CParticleRenderObjectRM;
extern "C" CRegisterMessage SetLocalTransform_CParticleRenderObjectRM;
extern "C" CRegisterMessage AttachSceneObject_CParticleRenderObjectRM;
extern "C" CRegisterMessage Disable_CParticleRibbonRenderObjectRM;
extern "C" CRegisterMessage Enable_CParticleRibbonRenderObjectRM;
extern "C" CRegisterMessage SetColor_CParticleRibbonRenderObjectRM;
extern "C" CRegisterMessage RegisterChildEmitter_CParticleSystemObjectRM;
extern "C" CRegisterMessage DeRegisterChildEmitter_CParticleSystemObjectRM;
extern "C" CRegisterMessage AttachSceneObject_CParticleSystemObjectRM;
extern "C" CRegisterMessage AddChildObject_CParticleSystemObjectRM;
extern "C" CRegisterMessage RemoveChildObject_CParticleSystemObjectRM;
extern "C" CRegisterMessage SetGlobalPosition_CParticleSystemObjectRM;
extern "C" CRegisterMessage GetRealTime_CPerfTimeManagerRM;
extern "C" CRegisterMessage GetTime_CPerfTimeManagerRM;
extern "C" CRegisterMessage GetTimeDelta_CPerfTimeManagerRM;
extern "C" CRegisterMessage UpdateTime_CPerfTimeManagerRM;
extern "C" CRegisterMessage ResetTime_CPerfTimeManagerRM;
extern "C" CRegisterMessage InitTime_CPerfTimeManagerRM;
extern "C" CRegisterMessage PauseTime_CPerfTimeManagerRM;
extern "C" CRegisterMessage UnpauseTime_CPerfTimeManagerRM;
extern "C" CRegisterMessage GetCurrentFPS_CPerfTimeManagerRM;
extern "C" CRegisterMessage SetTimeScale_CPerfTimeManagerRM;
extern "C" CRegisterMessage SetMaxTick_CPerfTimeManagerRM;
extern "C" CRegisterMessage GetCurrentFrame_CPerfTimeManagerRM;
extern "C" CRegisterMessage AddRenderList_CRenderManagerRM;
extern "C" CRegisterMessage RenderListToTexture_CRenderManagerRM;
extern "C" CRegisterMessage CreateRenderContext_CRenderManagerRM;
extern "C" CRegisterMessage DeleteRenderContext_CRenderManagerRM;
extern "C" CRegisterMessage DrawToRenderContext_CRenderManagerRM;
extern "C" CRegisterMessage DestroyRenderer_CRenderManagerRM;
extern "C" CRegisterMessage GetVideoSize_CRenderManagerRM;
extern "C" CRegisterMessage SetWindowSize_CRenderManagerRM;
extern "C" CRegisterMessage GetWindowSize_CRenderManagerRM;
extern "C" CRegisterMessage SetViewPort_CRenderManagerRM;
extern "C" CRegisterMessage SetVideoSize_CRenderManagerRM;
extern "C" CRegisterMessage SetFullScreen_CRenderManagerRM;
extern "C" CRegisterMessage SetRendererMouse_CRenderManagerRM;
extern "C" CRegisterMessage GetRendererMouse_CRenderManagerRM;
extern "C" CRegisterMessage CreateMeshObject_CRenderManagerRM;
extern "C" CRegisterMessage GetRendererProfilingSnapshot_CRenderManagerRM;
extern "C" CRegisterMessage GetObjectCullDistance_CRenderManagerRM;
extern "C" CRegisterMessage SetObjectCullDistance_CRenderManagerRM;
extern "C" CRegisterMessage Start_CRenderManagerRM;
extern "C" CRegisterMessage Stop_CRenderManagerRM;
extern "C" CRegisterMessage SetWireFrameMode_CRenderManagerRM;
extern "C" CRegisterMessage CreateController_CRenderManagerRM;
extern "C" CRegisterMessage DestroyController_CRenderManagerRM;
extern "C" CRegisterMessage CreateSceneSettings_CRenderManagerRM;
extern "C" CRegisterMessage DestroySceneSettings_CRenderManagerRM;
extern "C" CRegisterMessage CreateGeometry_CRenderManagerRM;
extern "C" CRegisterMessage DestroyGeometry_CRenderManagerRM;
extern "C" CRegisterMessage AddPostProcessEffect_CRenderManagerRM;
extern "C" CRegisterMessage RemovePostProcessEffect_CRenderManagerRM;
extern "C" CRegisterMessage RenderUpdate_CRenderManagerRM;
extern "C" CRegisterMessage GetRenderFlagValue_CRenderManagerRM;
extern "C" CRegisterMessage SetNullRenderer_CRenderManagerRM;
extern "C" CRegisterMessage CreateMaterialOverride_CRenderManagerRM;
extern "C" CRegisterMessage AddVisibleEntitiesToScene_CRenderManagerRM;
extern "C" CRegisterMessage GetDepthTargetAsTexture_CRenderManagerRM;
extern "C" CRegisterMessage SetFogValue_CRenderManagerRM;
extern "C" CRegisterMessage GetFogValue_CRenderManagerRM;
extern "C" CRegisterMessage SetColorCorrection_CRenderManagerRM;
extern "C" CRegisterMessage RegisterSceneAttachObjects_CSceneObjectManagerRM;
extern "C" CRegisterMessage DetachSceneObject_CSceneObjectManagerRM;
extern "C" CRegisterMessage Start_CSceneVisibilityManagerRM;
extern "C" CRegisterMessage Stop_CSceneVisibilityManagerRM;
extern "C" CRegisterMessage SetActiveScene_CSceneVisibilityManagerRM;
extern "C" CRegisterMessage SetSceneRenderContext_CSceneVisibilityManagerRM;
extern "C" CRegisterMessage SetShaderCallBack_CShaderManagerRM;
extern "C" CRegisterMessage InitializeShaderManager_CShaderManagerRM;
extern "C" CRegisterMessage RemoveShaderCallBack_CShaderManagerRM;
extern "C" CRegisterMessage GetMaterialTemplate_CShaderManagerRM;
extern "C" CRegisterMessage GetEffectInterface_CShaderManagerRM;
extern "C" CRegisterMessage GetShader_CShaderManagerRM;
extern "C" CRegisterMessage GetShaderPath_CShaderManagerRM;
extern "C" CRegisterMessage AddShaderPath_CShaderManagerRM;
extern "C" CRegisterMessage RegisterShaderVarFunc_CShaderManagerRM;
extern "C" CRegisterMessage GetShaderVarFunc_CShaderManagerRM;
extern "C" CRegisterMessage ReloadAllShaders_CShaderManagerRM;
extern "C" CRegisterMessage AddEffect_CShaderManagerRM;
extern "C" CRegisterMessage AddMaterial_CShaderManagerRM;
extern "C" CRegisterMessage RemoveMaterial_CShaderManagerRM;
extern "C" CRegisterMessage AddMaterialTemplate_CShaderManagerRM;
extern "C" CRegisterMessage RemoveMaterialTemplate_CShaderManagerRM;
extern "C" CRegisterMessage AddShader_CShaderManagerRM;
extern "C" CRegisterMessage GetMaterialInterface_CShaderManagerRM;
extern "C" CRegisterMessage LoadShaderPaths_CShaderManagerRM;
extern "C" CRegisterMessage GetAllEffects_CShaderManagerRM;
extern "C" CRegisterMessage GetShaderDirectory_CShaderManagerRM;
extern "C" CRegisterMessage RegisterTextureCallback_CShaderManagerRM;
extern "C" CRegisterMessage GetCallbackTexture_CShaderManagerRM;
extern "C" CRegisterMessage DestroyRenderer_CShaderManagerRM;
extern "C" CRegisterMessage PlaySound_CSoundManagerRM;
extern "C" CRegisterMessage StopSound_CSoundManagerRM;
extern "C" CRegisterMessage LoadMusicPlaylist_CSoundManagerRM;
extern "C" CRegisterMessage RunPlaylist_CSoundManagerRM;
extern "C" CRegisterMessage StopPlaylist_CSoundManagerRM;
extern "C" CRegisterMessage Stop_CSoundManagerRM;
extern "C" CRegisterMessage Start_CSoundManagerRM;
extern "C" CRegisterMessage LoadingUpdate_CSoundManagerRM;
extern "C" CRegisterMessage MuteSounds_CSoundManagerRM;
extern "C" CRegisterMessage UnMuteSounds_CSoundManagerRM;
extern "C" CRegisterMessage MuteMusic_CSoundManagerRM;
extern "C" CRegisterMessage UnMuteMusic_CSoundManagerRM;
extern "C" CRegisterMessage GetGlobalSoundVolume_CSoundManagerRM;
extern "C" CRegisterMessage GetGlobalMusicVolume_CSoundManagerRM;
extern "C" CRegisterMessage SetGlobalSoundVolume_CSoundManagerRM;
extern "C" CRegisterMessage SetGlobalMusicVolume_CSoundManagerRM;
extern "C" CRegisterMessage ShutDownAudioEngine_CSoundManagerRM;
extern "C" CRegisterMessage AddSprite_CSpriteManagerRM;
extern "C" CRegisterMessage AllocateVertices_CVertexBufferManagerRM;
extern "C" CRegisterMessage GetVertexAllocationInterface_CVertexBufferManagerRM;
extern "C" CRegisterMessage RemoveVertexAllocation_CVertexBufferManagerRM;
extern "C" CRegisterMessage AllocateIndices_CIndexBufferManagerRM;
extern "C" CRegisterMessage GetIndexAllocationInterface_CIndexBufferManagerRM;
extern "C" CRegisterMessage RemoveIndexAllocation_CIndexBufferManagerRM;
extern "C" CRegisterMessage AddTexture_CTextureManagerRM;
extern "C" CRegisterMessage SetLoadParameters_CTextureManagerRM;
extern "C" CRegisterMessage GetLoadParameters_CTextureManagerRM;
extern "C" CRegisterMessage RemoveTexture_CTextureManagerRM;
extern "C" CRegisterMessage UnloadObject_CTextureManagerRM;
extern "C" CRegisterMessage GetTexture_CTextureManagerRM;
extern "C" CRegisterMessage CreateTexture_CTextureManagerRM;
extern "C" CRegisterMessage CreateCubeTexture_CTextureManagerRM;
extern "C" CRegisterMessage DestroyRenderer_CTextureManagerRM;
extern "C" CRegisterMessage GlobalUpdateTick_CTimerRM;
extern "C" CRegisterMessage AllocateVertices_CVertexBufferManagerRM;
extern "C" CRegisterMessage GetVertexAllocationInterface_CVertexBufferManagerRM;
extern "C" CRegisterMessage RemoveVertexAllocation_CVertexBufferManagerRM;
extern "C" CRegisterMessage DestroyRenderer_CVertexBufferManagerRM;
extern "C" CRegisterMessage GetGlobalPosition_CWorldRM;
extern "C" CRegisterMessage GetGlobalEuler_CWorldRM;
extern "C" CRegisterMessage GetGlobalQuaternion_CWorldRM;
extern "C" CRegisterMessage GetGlobalScale_CWorldRM;
extern "C" CRegisterMessage GetGlobalTransform_CWorldRM;
extern "C" CRegisterMessage LogMessage_CDefaultLoggerRM;
extern "C" CRegisterMessage SetLogLevel_CDefaultLoggerRM;
extern "C" CRegisterMessage SetJoystickHandler_CJoystickManagerRM;
extern "C" CRegisterMessage UnsetJoystickHandler_CJoystickManagerRM;
extern "C" CRegisterMessage SetJoystickKeyBinding_CJoystickManagerRM;
extern "C" CRegisterMessage Start_CJoystickManagerRM;
extern "C" CRegisterMessage Stop_CJoystickManagerRM;
extern "C" CRegisterMessage SetActiveJoystickKeyBinding_CJoystickManagerRM;
extern "C" CRegisterMessage SwapJoystickDeviceMapping_CJoystickManagerRM;
extern "C" CRegisterMessage EnableJoystickFaultDetection_CJoystickManagerRM;
extern "C" CRegisterMessage QueryJoystickFault_CJoystickManagerRM;
extern "C" CRegisterMessage GetJoystickDeviceMapping_CJoystickManagerRM;
extern "C" CRegisterMessage SetJoystickDeviceMapping_CJoystickManagerRM;
extern "C" CRegisterMessage GetJoystickCount_CJoystickManagerRM;
extern "C" CRegisterMessage RefreshJoysticks_CJoystickManagerRM;
extern "C" CRegisterMessage SetAutoDetectJoystickPlayer_CJoystickManagerRM;
extern "C" CRegisterMessage SetMotorSpeed_CJoystickManagerRM;
extern "C" CRegisterMessage GetActiveMathImplementation_CMathManagerRM;
extern "C" CRegisterMessage RegisterMathImplementation_CMathManagerRM;
extern "C" CRegisterMessage UpdatePerformanceProfiler_CPerformanceProfilerHandlerRM;
extern "C" CRegisterMessage GetPerformanceProfilers_CPerformanceProfilerHandlerRM;
extern "C" CRegisterMessage GetProcessMemoryUsage_CPerformanceProfilerHandlerRM;
extern "C" CRegisterMessage ClearProfilerSubMap_CPerformanceProfilerHandlerRM;
extern "C" CRegisterMessage CreateStream_File_CStreamFactoryRM;
extern "C" CRegisterMessage CreateStream_Memory_CStreamFactoryRM;
extern "C" CRegisterMessage CheckFileExists_CStreamFactoryRM;

#endif	//#ifdef _LIB