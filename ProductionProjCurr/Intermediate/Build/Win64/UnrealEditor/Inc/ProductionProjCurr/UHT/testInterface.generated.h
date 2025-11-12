// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "testInterface.h"

#ifdef PRODUCTIONPROJCURR_testInterface_generated_h
#error "testInterface.generated.h already included, missing '#pragma once' in testInterface.h"
#endif
#define PRODUCTIONPROJCURR_testInterface_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UtestInterface *******************************************************
#define FID_Users_linda_Documents_GitHub_Production_Project_2_ProductionProjCurr_Source_ProductionProjCurr_testInterface_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Interact_Implementation() {}; \
	DECLARE_FUNCTION(execInteract);


#define FID_Users_linda_Documents_GitHub_Production_Project_2_ProductionProjCurr_Source_ProductionProjCurr_testInterface_h_14_CALLBACK_WRAPPERS
PRODUCTIONPROJCURR_API UClass* Z_Construct_UClass_UtestInterface_NoRegister();

#define FID_Users_linda_Documents_GitHub_Production_Project_2_ProductionProjCurr_Source_ProductionProjCurr_testInterface_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PRODUCTIONPROJCURR_API UtestInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UtestInterface(UtestInterface&&) = delete; \
	UtestInterface(const UtestInterface&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PRODUCTIONPROJCURR_API, UtestInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UtestInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UtestInterface) \
	virtual ~UtestInterface() = default;


#define FID_Users_linda_Documents_GitHub_Production_Project_2_ProductionProjCurr_Source_ProductionProjCurr_testInterface_h_14_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUtestInterface(); \
	friend struct Z_Construct_UClass_UtestInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PRODUCTIONPROJCURR_API UClass* Z_Construct_UClass_UtestInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(UtestInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/ProductionProjCurr"), Z_Construct_UClass_UtestInterface_NoRegister) \
	DECLARE_SERIALIZER(UtestInterface)


#define FID_Users_linda_Documents_GitHub_Production_Project_2_ProductionProjCurr_Source_ProductionProjCurr_testInterface_h_14_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Users_linda_Documents_GitHub_Production_Project_2_ProductionProjCurr_Source_ProductionProjCurr_testInterface_h_14_GENERATED_UINTERFACE_BODY() \
	FID_Users_linda_Documents_GitHub_Production_Project_2_ProductionProjCurr_Source_ProductionProjCurr_testInterface_h_14_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_linda_Documents_GitHub_Production_Project_2_ProductionProjCurr_Source_ProductionProjCurr_testInterface_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ItestInterface() {} \
public: \
	typedef UtestInterface UClassType; \
	typedef ItestInterface ThisClass; \
	static void Execute_Interact(UObject* O); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Users_linda_Documents_GitHub_Production_Project_2_ProductionProjCurr_Source_ProductionProjCurr_testInterface_h_11_PROLOG
#define FID_Users_linda_Documents_GitHub_Production_Project_2_ProductionProjCurr_Source_ProductionProjCurr_testInterface_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_linda_Documents_GitHub_Production_Project_2_ProductionProjCurr_Source_ProductionProjCurr_testInterface_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_linda_Documents_GitHub_Production_Project_2_ProductionProjCurr_Source_ProductionProjCurr_testInterface_h_14_CALLBACK_WRAPPERS \
	FID_Users_linda_Documents_GitHub_Production_Project_2_ProductionProjCurr_Source_ProductionProjCurr_testInterface_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UtestInterface;

// ********** End Interface UtestInterface *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_linda_Documents_GitHub_Production_Project_2_ProductionProjCurr_Source_ProductionProjCurr_testInterface_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
