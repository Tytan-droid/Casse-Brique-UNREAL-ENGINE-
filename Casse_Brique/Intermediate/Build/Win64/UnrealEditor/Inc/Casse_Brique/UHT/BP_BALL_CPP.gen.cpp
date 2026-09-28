// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Casse_Brique/BP_BALL_CPP.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeBP_BALL_CPP() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_USphereComponent(ETypeConstructPhase);
PAPER2D_API UClass* Z_Construct_UClass_UPaperSpriteComponent(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_Casse_Brique(ETypeConstructPhase);
CASSE_BRIQUE_API UClass* Z_Construct_UClass_ABP_BALL_CPP(ETypeConstructPhase);
CASSE_BRIQUE_API UClass* Z_Construct_UClass_ABP_BALL_CPP(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Class ABP_BALL_CPP *************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_ABP_BALL_CPP_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "IncludePath", "BP_BALL_CPP.h" },
		{ "ModuleRelativePath", "BP_BALL_CPP.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SphereCollision_MetaData[] = {
		{ "Category", "BP_BALL_CPP" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- COMPONENTS ---\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BP_BALL_CPP.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- COMPONENTS ---" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Sprite_MetaData[] = {
		{ "Category", "BP_BALL_CPP" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BP_BALL_CPP.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class ABP_BALL_CPP constinit property declarations *****************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SphereCollision;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Sprite;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class ABP_BALL_CPP constinit property declarations *******************************
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABP_BALL_CPP>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class ABP_BALL_CPP Property Definitions ****************************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_SphereCollision = { "SphereCollision", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(ABP_BALL_CPP, SphereCollision), Z_Construct_UClass_USphereComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SphereCollision_MetaData), NewProp_SphereCollision_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Sprite = { "Sprite", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(ABP_BALL_CPP, Sprite), Z_Construct_UClass_UPaperSpriteComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Sprite_MetaData), NewProp_Sprite_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SphereCollision,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Sprite,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class ABP_BALL_CPP Property Definitions ******************************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_AActor,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_Casse_Brique,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_ABP_BALL_CPP,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	UHT_STATICS::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
FClassRegistrationInfo Z_Registration_Info_UClass_ABP_BALL_CPP;
UClass* Z_Construct_UClass_ABP_BALL_CPP(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = ABP_BALL_CPP;
		if (!Z_Registration_Info_UClass_ABP_BALL_CPP.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("BP_BALL_CPP"),
				Z_Registration_Info_UClass_ABP_BALL_CPP.InnerSingleton,
				nullptr,
				DataSizeOf<TClass>(),
				alignof(TClass),
				TClass::StaticClassFlags,
				TClass::StaticClassCastFlags(),
				TClass::StaticConfigName(),
				(UClass::ClassConstructorType)InternalConstructor<TClass>,
				(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
				UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
				&TClass::Super::StaticClass,
				&TClass::WithinClass::StaticClass
			);
		}
		return Z_Registration_Info_UClass_ABP_BALL_CPP.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_ABP_BALL_CPP.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABP_BALL_CPP.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_ABP_BALL_CPP.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, ABP_BALL_CPP);
ABP_BALL_CPP::~ABP_BALL_CPP() {}
// ********** End Class ABP_BALL_CPP ***************************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_Users_tryst_Documents_GitHub_Casse_Brique_UNREAL_ENGINE__Casse_Brique_Source_Casse_Brique_BP_BALL_CPP_h__Script_Casse_Brique_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABP_BALL_CPP, TEXT("ABP_BALL_CPP"), &Z_Registration_Info_UClass_ABP_BALL_CPP, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABP_BALL_CPP), 2175784320U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_tryst_Documents_GitHub_Casse_Brique_UNREAL_ENGINE__Casse_Brique_Source_Casse_Brique_BP_BALL_CPP_h__Script_Casse_Brique_c1b86980a0082e924559a91dd7276d1dbe2dea7c{
	TEXT("/Script/Casse_Brique"),
	UHT_STATICS::ClassInfo, UE_ARRAY_COUNT(UHT_STATICS::ClassInfo),
	nullptr, 0,
	nullptr, 0,
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
