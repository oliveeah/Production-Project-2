// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NPC_BaseClass.h"

#ifdef PRODUCTIONPROJCURR_NPC_BaseClass_generated_h
#error "NPC_BaseClass.generated.h already included, missing '#pragma once' in NPC_BaseClass.h"
#endif
#define PRODUCTIONPROJCURR_NPC_BaseClass_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ANPC_BaseClass ***********************************************************
PRODUCTIONPROJCURR_API UClass* Z_Construct_UClass_ANPC_BaseClass_NoRegister();

#define FID_Users_linda_Documents_GitHub_Production_Project_2_ProductionProjCurr_Source_ProductionProjCurr_NPC_BaseClass_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesANPC_BaseClass(); \
	friend struct Z_Construct_UClass_ANPC_BaseClass_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PRODUCTIONPROJCURR_API UClass* Z_Construct_UClass_ANPC_BaseClass_NoRegister(); \
public: \
	DECLARE_CLASS2(ANPC_BaseClass, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProductionProjCurr"), Z_Construct_UClass_ANPC_BaseClass_NoRegister) \
	DECLARE_SERIALIZER(ANPC_BaseClass) \
	virtual UObject* _getUObject() const override { return const_cast<ANPC_BaseClass*>(this); }


#define FID_Users_linda_Documents_GitHub_Production_Project_2_ProductionProjCurr_Source_ProductionProjCurr_NPC_BaseClass_h_14_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ANPC_BaseClass(ANPC_BaseClass&&) = delete; \
	ANPC_BaseClass(const ANPC_BaseClass&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANPC_BaseClass); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANPC_BaseClass); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ANPC_BaseClass) \
	NO_API virtual ~ANPC_BaseClass();


#define FID_Users_linda_Documents_GitHub_Production_Project_2_ProductionProjCurr_Source_ProductionProjCurr_NPC_BaseClass_h_11_PROLOG
#define FID_Users_linda_Documents_GitHub_Production_Project_2_ProductionProjCurr_Source_ProductionProjCurr_NPC_BaseClass_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_linda_Documents_GitHub_Production_Project_2_ProductionProjCurr_Source_ProductionProjCurr_NPC_BaseClass_h_14_INCLASS_NO_PURE_DECLS \
	FID_Users_linda_Documents_GitHub_Production_Project_2_ProductionProjCurr_Source_ProductionProjCurr_NPC_BaseClass_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ANPC_BaseClass;

// ********** End Class ANPC_BaseClass *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_linda_Documents_GitHub_Production_Project_2_ProductionProjCurr_Source_ProductionProjCurr_NPC_BaseClass_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
