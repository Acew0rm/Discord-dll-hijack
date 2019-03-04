#pragma once
#pragma comment(linker,"/export:BCryptAddContextFunction=payload.BCryptAddContextFunction,@1")
#pragma comment(linker,"/export:BCryptAddContextFunctionProvider=payload.BCryptAddContextFunctionProvider,@2")
#pragma comment(linker,"/export:BCryptCloseAlgorithmProvider=payload.BCryptCloseAlgorithmProvider,@3")
#pragma comment(linker,"/export:BCryptConfigureContext=payload.BCryptConfigureContext,@4")
#pragma comment(linker,"/export:BCryptConfigureContextFunction=payload.BCryptConfigureContextFunction,@5")
#pragma comment(linker,"/export:BCryptCreateContext=payload.BCryptCreateContext,@6")
#pragma comment(linker,"/export:BCryptCreateHash=payload.BCryptCreateHash,@7")
#pragma comment(linker,"/export:BCryptCreateMultiHash=payload.BCryptCreateMultiHash,@8")
#pragma comment(linker,"/export:BCryptDecrypt=payload.BCryptDecrypt,@9")
#pragma comment(linker,"/export:BCryptDeleteContext=payload.BCryptDeleteContext,@10")
#pragma comment(linker,"/export:BCryptDeriveKey=payload.BCryptDeriveKey,@11")
#pragma comment(linker,"/export:BCryptDeriveKeyCapi=payload.BCryptDeriveKeyCapi,@12")
#pragma comment(linker,"/export:BCryptDeriveKeyPBKDF2=payload.BCryptDeriveKeyPBKDF2,@13")
#pragma comment(linker,"/export:BCryptDestroyHash=payload.BCryptDestroyHash,@14")
#pragma comment(linker,"/export:BCryptDestroyKey=payload.BCryptDestroyKey,@15")
#pragma comment(linker,"/export:BCryptDestroySecret=payload.BCryptDestroySecret,@16")
#pragma comment(linker,"/export:BCryptDuplicateHash=payload.BCryptDuplicateHash,@17")
#pragma comment(linker,"/export:BCryptDuplicateKey=payload.BCryptDuplicateKey,@18")
#pragma comment(linker,"/export:BCryptEncrypt=payload.BCryptEncrypt,@19")
#pragma comment(linker,"/export:BCryptEnumAlgorithms=payload.BCryptEnumAlgorithms,@20")
#pragma comment(linker,"/export:BCryptEnumContextFunctionProviders=payload.BCryptEnumContextFunctionProviders,@21")
#pragma comment(linker,"/export:BCryptEnumContextFunctions=payload.BCryptEnumContextFunctions,@22")
#pragma comment(linker,"/export:BCryptEnumContexts=payload.BCryptEnumContexts,@23")
#pragma comment(linker,"/export:BCryptEnumProviders=payload.BCryptEnumProviders,@24")
#pragma comment(linker,"/export:BCryptEnumRegisteredProviders=payload.BCryptEnumRegisteredProviders,@25")
#pragma comment(linker,"/export:BCryptExportKey=payload.BCryptExportKey,@26")
#pragma comment(linker,"/export:BCryptFinalizeKeyPair=payload.BCryptFinalizeKeyPair,@27")
#pragma comment(linker,"/export:BCryptFinishHash=payload.BCryptFinishHash,@28")
#pragma comment(linker,"/export:BCryptFreeBuffer=payload.BCryptFreeBuffer,@29")
#pragma comment(linker,"/export:BCryptGenerateKeyPair=payload.BCryptGenerateKeyPair,@30")
#pragma comment(linker,"/export:BCryptGenerateSymmetricKey=payload.BCryptGenerateSymmetricKey,@31")
#pragma comment(linker,"/export:BCryptGenRandom=payload.BCryptGenRandom,@32")
#pragma comment(linker,"/export:BCryptGetFipsAlgorithmMode=payload.BCryptGetFipsAlgorithmMode,@33")
#pragma comment(linker,"/export:BCryptGetProperty=payload.BCryptGetProperty,@34")
#pragma comment(linker,"/export:BCryptHash=payload.BCryptHash,@35")
#pragma comment(linker,"/export:BCryptHashData=payload.BCryptHashData,@36")
#pragma comment(linker,"/export:BCryptImportKey=payload.BCryptImportKey,@37")
#pragma comment(linker,"/export:BCryptImportKeyPair=payload.BCryptImportKeyPair,@38")
#pragma comment(linker,"/export:BCryptKeyDerivation=payload.BCryptKeyDerivation,@39")
#pragma comment(linker,"/export:BCryptOpenAlgorithmProvider=payload.BCryptOpenAlgorithmProvider,@40")
#pragma comment(linker,"/export:BCryptProcessMultiOperations=payload.BCryptProcessMultiOperations,@41")
#pragma comment(linker,"/export:BCryptQueryContextConfiguration=payload.BCryptQueryContextConfiguration,@42")
#pragma comment(linker,"/export:BCryptQueryContextFunctionConfiguration=payload.BCryptQueryContextFunctionConfiguration,@43")
#pragma comment(linker,"/export:BCryptQueryContextFunctionProperty=payload.BCryptQueryContextFunctionProperty,@44")
#pragma comment(linker,"/export:BCryptQueryProviderRegistration=payload.BCryptQueryProviderRegistration,@45")
#pragma comment(linker,"/export:BCryptRegisterConfigChangeNotify=payload.BCryptRegisterConfigChangeNotify,@46")
#pragma comment(linker,"/export:BCryptRegisterProvider=payload.BCryptRegisterProvider,@47")
#pragma comment(linker,"/export:BCryptRemoveContextFunction=payload.BCryptRemoveContextFunction,@48")
#pragma comment(linker,"/export:BCryptRemoveContextFunctionProvider=payload.BCryptRemoveContextFunctionProvider,@49")
#pragma comment(linker,"/export:BCryptResolveProviders=payload.BCryptResolveProviders,@50")
#pragma comment(linker,"/export:BCryptSecretAgreement=payload.BCryptSecretAgreement,@51")
#pragma comment(linker,"/export:BCryptSetAuditingInterface=payload.BCryptSetAuditingInterface,@52")
#pragma comment(linker,"/export:BCryptSetContextFunctionProperty=payload.BCryptSetContextFunctionProperty,@53")
#pragma comment(linker,"/export:BCryptSetProperty=payload.BCryptSetProperty,@54")
#pragma comment(linker,"/export:BCryptSignHash=payload.BCryptSignHash,@55")
#pragma comment(linker,"/export:BCryptUnregisterConfigChangeNotify=payload.BCryptUnregisterConfigChangeNotify,@56")
#pragma comment(linker,"/export:BCryptUnregisterProvider=payload.BCryptUnregisterProvider,@57")
#pragma comment(linker,"/export:BCryptVerifySignature=payload.BCryptVerifySignature,@58")

#include <windows.h>

BOOL WINAPI DllMain(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpReserved)
{
	switch (fdwReason)
	{
	
	case DLL_PROCESS_ATTACH:				
			MessageBox(NULL, TEXT("Hello!"),TEXT("I spawned from discord as bcrypt.dll"), MB_OK);		
			return TRUE;
		break;
	case DLL_THREAD_ATTACH:
		
		break;

	case DLL_THREAD_DETACH:
		break;

	case DLL_PROCESS_DETACH:
		break;
	}
	return TRUE;
}