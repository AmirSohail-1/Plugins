// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SplineCameraActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef INTERACTIONMODULE_SplineCameraActor_generated_h
#error "SplineCameraActor.generated.h already included, missing '#pragma once' in SplineCameraActor.h"
#endif
#define INTERACTIONMODULE_SplineCameraActor_generated_h

#define FID_TestCpp_Plugins_InteractionModule_Source_InteractionModule_Public_SplineCameraActor_h_12_SPARSE_DATA
#define FID_TestCpp_Plugins_InteractionModule_Source_InteractionModule_Public_SplineCameraActor_h_12_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_TestCpp_Plugins_InteractionModule_Source_InteractionModule_Public_SplineCameraActor_h_12_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_TestCpp_Plugins_InteractionModule_Source_InteractionModule_Public_SplineCameraActor_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool IsAtEndOfSpline_Implementation() const; \
 \
	DECLARE_FUNCTION(execSetCameraAsViewTarget); \
	DECLARE_FUNCTION(execIsAtEndOfSpline);


#define FID_TestCpp_Plugins_InteractionModule_Source_InteractionModule_Public_SplineCameraActor_h_12_ACCESSORS
#define FID_TestCpp_Plugins_InteractionModule_Source_InteractionModule_Public_SplineCameraActor_h_12_CALLBACK_WRAPPERS
#define FID_TestCpp_Plugins_InteractionModule_Source_InteractionModule_Public_SplineCameraActor_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASplineCameraActor(); \
	friend struct Z_Construct_UClass_ASplineCameraActor_Statics; \
public: \
	DECLARE_CLASS(ASplineCameraActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/InteractionModule"), NO_API) \
	DECLARE_SERIALIZER(ASplineCameraActor)


#define FID_TestCpp_Plugins_InteractionModule_Source_InteractionModule_Public_SplineCameraActor_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASplineCameraActor(ASplineCameraActor&&); \
	NO_API ASplineCameraActor(const ASplineCameraActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASplineCameraActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASplineCameraActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASplineCameraActor) \
	NO_API virtual ~ASplineCameraActor();


#define FID_TestCpp_Plugins_InteractionModule_Source_InteractionModule_Public_SplineCameraActor_h_9_PROLOG
#define FID_TestCpp_Plugins_InteractionModule_Source_InteractionModule_Public_SplineCameraActor_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_TestCpp_Plugins_InteractionModule_Source_InteractionModule_Public_SplineCameraActor_h_12_SPARSE_DATA \
	FID_TestCpp_Plugins_InteractionModule_Source_InteractionModule_Public_SplineCameraActor_h_12_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_TestCpp_Plugins_InteractionModule_Source_InteractionModule_Public_SplineCameraActor_h_12_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_TestCpp_Plugins_InteractionModule_Source_InteractionModule_Public_SplineCameraActor_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_TestCpp_Plugins_InteractionModule_Source_InteractionModule_Public_SplineCameraActor_h_12_ACCESSORS \
	FID_TestCpp_Plugins_InteractionModule_Source_InteractionModule_Public_SplineCameraActor_h_12_CALLBACK_WRAPPERS \
	FID_TestCpp_Plugins_InteractionModule_Source_InteractionModule_Public_SplineCameraActor_h_12_INCLASS_NO_PURE_DECLS \
	FID_TestCpp_Plugins_InteractionModule_Source_InteractionModule_Public_SplineCameraActor_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INTERACTIONMODULE_API UClass* StaticClass<class ASplineCameraActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_TestCpp_Plugins_InteractionModule_Source_InteractionModule_Public_SplineCameraActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
