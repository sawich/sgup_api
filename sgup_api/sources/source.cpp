#include "../headers/header.hpp"

HMODULE library{ NULL };

BOOL enable_console(void) noexcept
{
  if (!AllocConsole()) { return FALSE; }

  FILE* dummy;

  if (0 != freopen_s(&dummy, "CONOUT$", "w", stdout)) { return FALSE; }
  if (0 != freopen_s(&dummy, "CONOUT$", "w", stderr)) { return FALSE; }
  if (0 != freopen_s(&dummy, "CONIN$", "r", stdin)) { return FALSE; }

  std::cout.clear();
  std::clog.clear();
  std::cerr.clear();
  std::cin.clear();

  return TRUE;
}

BOOL WINAPI DllMain(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpReserved)
{
  DisableThreadLibraryCalls(hinstDLL);

  switch (fdwReason) {
  case DLL_PROCESS_ATTACH:
  {
    if (FALSE == enable_console()) { return FALSE; }

    library = LoadLibrary(TEXT("_sgup_api.dll"));
    if (NULL == library) { return FALSE; }

    SGUPAPI_GetAuthToken_external = reinterpret_cast<SGUPAPI_GetAuthToken_t>(GetProcAddress(library, "SGUPAPI_GetAuthToken"));
    if (nullptr == SGUPAPI_GetAuthToken_external) { return FALSE; }

    SGUPAPI_GetCurrentAccessToken_external = reinterpret_cast<SGUPAPI_GetCurrentAccessToken_t>(GetProcAddress(library, "SGUPAPI_GetCurrentAccessToken"));
    if (nullptr == SGUPAPI_GetCurrentAccessToken_external) { return FALSE; }

    SGUPAPI_GetMessengerAuthToken_external = reinterpret_cast<SGUPAPI_GetMessengerAuthToken_t>(GetProcAddress(library, "SGUPAPI_GetMessengerAuthToken"));
    if (nullptr == SGUPAPI_GetMessengerAuthToken_external) { return FALSE; }

    SGUPAPI_Init_external = reinterpret_cast<SGUPAPI_Init_t>(GetProcAddress(library, "SGUPAPI_Init"));
    if (nullptr == SGUPAPI_Init_external) { return FALSE; }

    SGUPAPI_RenewAuthToken_external = reinterpret_cast<SGUPAPI_RenewAuthToken_t>(GetProcAddress(library, "SGUPAPI_RenewAuthToken"));
    if (nullptr == SGUPAPI_RenewAuthToken_external) { return FALSE; }

    SGUPAPI_RenewMessengerAuthToken_external = reinterpret_cast<SGUPAPI_RenewMessengerAuthToken_t>(GetProcAddress(library, "SGUPAPI_RenewMessengerAuthToken"));
    if (nullptr == SGUPAPI_RenewMessengerAuthToken_external) { return FALSE; }

    SGUPAPI_RunCallback_external = reinterpret_cast<SGUPAPI_RunCallback_t>(GetProcAddress(library, "SGUPAPI_RunCallback"));
    if (nullptr == SGUPAPI_RunCallback_external) { return FALSE; }

    SGUPAPI_SetCallback_external = reinterpret_cast<SGUPAPI_SetCallback_t>(GetProcAddress(library, "SGUPAPI_SetCallback"));
    if (nullptr == SGUPAPI_SetCallback_external) { return FALSE; }

    SGUPAPI_Term_external = reinterpret_cast<SGUPAPI_Term_t>(GetProcAddress(library, "SGUPAPI_Term"));
    if (nullptr == SGUPAPI_Term_external) { return FALSE; }

    SGUPFriends_external = reinterpret_cast<SGUPFriends_t>(GetProcAddress(library, "SGUPFriends"));
    if (nullptr == SGUPFriends_external) { return FALSE; }

    SGUPIAPI_GetMemberInfo_external = reinterpret_cast<SGUPIAPI_GetMemberInfo_t>(GetProcAddress(library, "SGUPIAPI_GetMemberInfo"));
    if (nullptr == SGUPIAPI_GetMemberInfo_external) { return FALSE; }

    SGUPIAPI_InternalRenewAuthToken_external = reinterpret_cast<SGUPIAPI_InternalRenewAuthToken_t>(GetProcAddress(library, "SGUPIAPI_InternalRenewAuthToken"));
    if (nullptr == SGUPIAPI_InternalRenewAuthToken_external) { return FALSE; }

    SGUPIAPI_MessengerInit_external = reinterpret_cast<SGUPIAPI_MessengerInit_t>(GetProcAddress(library, "SGUPIAPI_MessengerInit"));
    if (nullptr == SGUPIAPI_MessengerInit_external) { return FALSE; }

    SGUPIAPI_MessengerTerm_external = reinterpret_cast<SGUPIAPI_MessengerTerm_t>(GetProcAddress(library, "SGUPIAPI_MessengerTerm"));
    if (nullptr == SGUPIAPI_MessengerTerm_external) { return FALSE; }

    SGUPIAPI_OverlayHostInit_external = reinterpret_cast<SGUPIAPI_OverlayHostInit_t>(GetProcAddress(library, "SGUPIAPI_OverlayHostInit"));
    if (nullptr == SGUPIAPI_OverlayHostInit_external) { return FALSE; }

    SGUPIAPI_OverlayHostTerm_external = reinterpret_cast<SGUPIAPI_OverlayHostTerm_t>(GetProcAddress(library, "SGUPIAPI_OverlayHostTerm"));
    if (nullptr == SGUPIAPI_OverlayHostTerm_external) { return FALSE; }

    SGUPIAPI_SendDuplicateLoginEvent_external = reinterpret_cast<SGUPIAPI_SendDuplicateLoginEvent_t>(GetProcAddress(library, "SGUPIAPI_SendDuplicateLoginEvent"));
    if (nullptr == SGUPIAPI_SendDuplicateLoginEvent_external) { return FALSE; }

    SGUPIAPI_SetCallback_external = reinterpret_cast<SGUPIAPI_SetCallback_t>(GetProcAddress(library, "SGUPIAPI_SetCallback"));
    if (nullptr == SGUPIAPI_SetCallback_external) { return FALSE; }

    SGUPIAPI_SetCallbackDuplicateLoginResult_external = reinterpret_cast<SGUPIAPI_SetCallbackDuplicateLoginResult_t>(GetProcAddress(library, "SGUPIAPI_SetCallbackDuplicateLoginResult"));
    if (nullptr == SGUPIAPI_SetCallbackDuplicateLoginResult_external) { return FALSE; }

    SGUPIAPI_SetCallbackGetMemberInfo_external = reinterpret_cast<SGUPIAPI_SetCallbackGetMemberInfo_t>(GetProcAddress(library, "SGUPIAPI_SetCallbackGetMemberInfo"));
    if (nullptr == SGUPIAPI_SetCallbackGetMemberInfo_external) { return FALSE; }

    SGUPIAPI_SetCallbackInternalRenewAuthToken_external = reinterpret_cast<SGUPIAPI_SetCallbackInternalRenewAuthToken_t>(GetProcAddress(library, "SGUPIAPI_SetCallbackInternalRenewAuthToken"));
    if (nullptr == SGUPIAPI_SetCallbackInternalRenewAuthToken_external) { return FALSE; }

    SGUPIAPI_SetCallbackMessengerConfigUpdate_external = reinterpret_cast<SGUPIAPI_SetCallbackMessengerConfigUpdate_t>(GetProcAddress(library, "SGUPIAPI_SetCallbackMessengerConfigUpdate"));
    if (nullptr == SGUPIAPI_SetCallbackMessengerConfigUpdate_external) { return FALSE; }

    SGUPIAPI_SetCallbackSubscriptReq_external = reinterpret_cast<SGUPIAPI_SetCallbackSubscriptReq_t>(GetProcAddress(library, "SGUPIAPI_SetCallbackSubscriptReq"));
    if (nullptr == SGUPIAPI_SetCallbackSubscriptReq_external) { return FALSE; }

    SGUPIAPI_SetCallbackUpdateAuthToken_external = reinterpret_cast<SGUPIAPI_SetCallbackUpdateAuthToken_t>(GetProcAddress(library, "SGUPIAPI_SetCallbackUpdateAuthToken"));
    if (nullptr == SGUPIAPI_SetCallbackUpdateAuthToken_external) { return FALSE; }

    SGUPMatchMaking_external = reinterpret_cast<SGUPMatchMaking_t>(GetProcAddress(library, "SGUPMatchMaking"));
    if (nullptr == SGUPMatchMaking_external) { return FALSE; }

    SGUPOverlay_external = reinterpret_cast<SGUPOverlay_t>(GetProcAddress(library, "SGUPOverlay"));
    if (nullptr == SGUPOverlay_external) { return FALSE; }

    SGUPPeerToPeer_external = reinterpret_cast<SGUPPeerToPeer_t>(GetProcAddress(library, "SGUPPeerToPeer"));
    if (nullptr == SGUPPeerToPeer_external) { return FALSE; }

    SGUPUser_external = reinterpret_cast<SGUPUser_t>(GetProcAddress(library, "SGUPUser"));
    if (nullptr == SGUPUser_external) { return FALSE; }

    break;
  }

  case DLL_THREAD_ATTACH:
    if (NULL != library) { FreeLibrary(library); }
    break;

  case DLL_THREAD_DETACH:
    break;

  case DLL_PROCESS_DETACH:
    break;
  }

  return TRUE;
}