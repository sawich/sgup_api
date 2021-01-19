#pragma once

#define WIN32_LEAN_AND_MEAN

#include <Windows.h>
#include <cstdio>
#include <iostream>

//
//   SGUPAPI_GetAuthToken
//

using SGUPAPI_GetAuthToken_t = int(*)(void);
SGUPAPI_GetAuthToken_t SGUPAPI_GetAuthToken_external;
__declspec(dllexport) int SGUPAPI_GetAuthToken(void)
{
  std::cout << "[SGUPAPI_GetAuthToken] call\n";
  return SGUPAPI_GetAuthToken_external();
}

//
//   SGUPAPI_GetCurrentAccessToken
//

using SGUPAPI_GetCurrentAccessToken_t = char* (*)(void);
SGUPAPI_GetCurrentAccessToken_t SGUPAPI_GetCurrentAccessToken_external;
__declspec(dllexport) char* SGUPAPI_GetCurrentAccessToken(void)
{
  std::cout << "[SGUPAPI_GetCurrentAccessToken] call\n";
  return SGUPAPI_GetCurrentAccessToken_external();
}

//
//   SGUPAPI_GetMessengerAuthToken
//

using SGUPAPI_GetMessengerAuthToken_t = int(*)(void);
SGUPAPI_GetMessengerAuthToken_t SGUPAPI_GetMessengerAuthToken_external;
__declspec(dllexport) int SGUPAPI_GetMessengerAuthToken(void)
{
  std::cout << "[SGUPAPI_GetMessengerAuthToken] call\n";
  return SGUPAPI_GetMessengerAuthToken_external();
}

//
//   SGUPAPI_Init
//

using SGUPAPI_Init_t = int(*)(void);
SGUPAPI_Init_t SGUPAPI_Init_external;
__declspec(dllexport) int SGUPAPI_Init(void)
{
  std::cout << "[SGUPAPI_Init] call\n";
  return SGUPAPI_Init_external();
}

//
//   SGUPAPI_RenewAuthToken
//

using SGUPAPI_RenewAuthToken_t = int(*)(void);
SGUPAPI_RenewAuthToken_t SGUPAPI_RenewAuthToken_external;
__declspec(dllexport) int SGUPAPI_RenewAuthToken(void)
{
  std::cout << "[SGUPAPI_RenewAuthToken] call\n";
  return SGUPAPI_RenewAuthToken_external();
}

//
//   SGUPAPI_RenewMessengerAuthToken
//

using SGUPAPI_RenewMessengerAuthToken_t = int(*)(void);
SGUPAPI_RenewMessengerAuthToken_t SGUPAPI_RenewMessengerAuthToken_external;
__declspec(dllexport) int SGUPAPI_RenewMessengerAuthToken(void)
{
  std::cout << "[SGUPAPI_RenewMessengerAuthToken] call\n";
  return SGUPAPI_RenewMessengerAuthToken_external();
}

//
//   SGUPAPI_RunCallback
//

using SGUPAPI_RunCallback_t = int(*)(void);
SGUPAPI_RunCallback_t SGUPAPI_RunCallback_external;
__declspec(dllexport) int SGUPAPI_RunCallback(void)
{
  std::cout << "[SGUPAPI_RunCallback] call\n";
  return SGUPAPI_RunCallback_external();
}

//
//   SGUPAPI_SetCallback
//

using SGUPAPI_SetCallback_t = int(*)(void);
SGUPAPI_SetCallback_t SGUPAPI_SetCallback_external;
__declspec(dllexport) int SGUPAPI_SetCallback(void)
{
  std::cout << "[SGUPAPI_SetCallback] call\n";
  return SGUPAPI_SetCallback_external();
}

//
//   SGUPAPI_Term
//

using SGUPAPI_Term_t = int(*)(void);
SGUPAPI_Term_t SGUPAPI_Term_external;
__declspec(dllexport) int SGUPAPI_Term(void)
{
  std::cout << "[SGUPAPI_Term] call\n";
  return SGUPAPI_Term_external();
}

//
//   SGUPFriends
//

using SGUPFriends_t = int(*)(void);
SGUPFriends_t SGUPFriends_external;
__declspec(dllexport) int SGUPFriends(void)
{
  std::cout << "[SGUPFriends] call\n";
  return SGUPFriends_external();
}

//
//   SGUPIAPI_GetMemberInfo
//

using SGUPIAPI_GetMemberInfo_t = int(*)(void);
SGUPIAPI_GetMemberInfo_t SGUPIAPI_GetMemberInfo_external;
__declspec(dllexport) int SGUPIAPI_GetMemberInfo(void)
{
  std::cout << "[SGUPIAPI_GetMemberInfo] call\n";
  return SGUPIAPI_GetMemberInfo_external();
}

//
//   SGUPIAPI_InternalRenewAuthToken
//

using SGUPIAPI_InternalRenewAuthToken_t = int(*)(void);
SGUPIAPI_InternalRenewAuthToken_t SGUPIAPI_InternalRenewAuthToken_external;
__declspec(dllexport) int SGUPIAPI_InternalRenewAuthToken(void)
{
  std::cout << "[SGUPIAPI_InternalRenewAuthToken] call\n";
  return SGUPIAPI_InternalRenewAuthToken_external();
}

//
//   SGUPIAPI_MessengerInit
//

using SGUPIAPI_MessengerInit_t = int(*)(void);
SGUPIAPI_MessengerInit_t SGUPIAPI_MessengerInit_external;
__declspec(dllexport) int SGUPIAPI_MessengerInit(void)
{
  std::cout << "[SGUPIAPI_MessengerInit] call\n";
  return SGUPIAPI_MessengerInit_external();
}

//
//   SGUPIAPI_MessengerTerm
//

using SGUPIAPI_MessengerTerm_t = int(*)(void);
SGUPIAPI_MessengerTerm_t SGUPIAPI_MessengerTerm_external;
__declspec(dllexport) int SGUPIAPI_MessengerTerm(void)
{
  std::cout << "[SGUPIAPI_MessengerTerm] call\n";
  return SGUPIAPI_MessengerTerm_external();
}

//
//   SGUPIAPI_OverlayHostInit
//

using SGUPIAPI_OverlayHostInit_t = int(*)(void);
SGUPIAPI_OverlayHostInit_t SGUPIAPI_OverlayHostInit_external;
__declspec(dllexport) int SGUPIAPI_OverlayHostInit(void)
{
  std::cout << "[SGUPIAPI_OverlayHostInit] call\n";
  return SGUPIAPI_OverlayHostInit_external();
}

//
//   SGUPIAPI_OverlayHostTerm
//

using SGUPIAPI_OverlayHostTerm_t = int(*)(void);
SGUPIAPI_OverlayHostTerm_t SGUPIAPI_OverlayHostTerm_external;
__declspec(dllexport) int SGUPIAPI_OverlayHostTerm(void)
{
  std::cout << "[SGUPIAPI_OverlayHostTerm] call\n";
  return SGUPIAPI_OverlayHostTerm_external();
}

//
//   SGUPIAPI_SendDuplicateLoginEvent
//

using SGUPIAPI_SendDuplicateLoginEvent_t = int(*)(void);
SGUPIAPI_SendDuplicateLoginEvent_t SGUPIAPI_SendDuplicateLoginEvent_external;
__declspec(dllexport) int SGUPIAPI_SendDuplicateLoginEvent(void)
{
  std::cout << "[SGUPIAPI_SendDuplicateLoginEvent] call\n";
  return SGUPIAPI_SendDuplicateLoginEvent_external();
}

//
//   SGUPIAPI_SetCallback
//

using SGUPIAPI_SetCallback_t = int(*)(void);
SGUPIAPI_SetCallback_t SGUPIAPI_SetCallback_external;
__declspec(dllexport) int SGUPIAPI_SetCallback(void)
{
  std::cout << "[SGUPIAPI_SetCallback] call\n";
  return SGUPIAPI_SetCallback_external();
}

//
//   SGUPIAPI_SetCallbackDuplicateLoginResult
//

using SGUPIAPI_SetCallbackDuplicateLoginResult_t = int(*)(void);
SGUPIAPI_SetCallbackDuplicateLoginResult_t SGUPIAPI_SetCallbackDuplicateLoginResult_external;
__declspec(dllexport) int SGUPIAPI_SetCallbackDuplicateLoginResult(void)
{
  std::cout << "[SGUPIAPI_SetCallbackDuplicateLoginResult] call\n";
  return SGUPIAPI_SetCallbackDuplicateLoginResult_external();
}

//
//   SGUPIAPI_SetCallbackGetMemberInfo
//

using SGUPIAPI_SetCallbackGetMemberInfo_t = int(*)(void);
SGUPIAPI_SetCallbackGetMemberInfo_t SGUPIAPI_SetCallbackGetMemberInfo_external;
__declspec(dllexport) int SGUPIAPI_SetCallbackGetMemberInfo(void)
{
  std::cout << "[SGUPIAPI_SetCallbackGetMemberInfo] call\n";
  return SGUPIAPI_SetCallbackGetMemberInfo_external();
}

//
//   SGUPIAPI_SetCallbackInternalRenewAuthToken
//

using SGUPIAPI_SetCallbackInternalRenewAuthToken_t = int(*)(void);
SGUPIAPI_SetCallbackInternalRenewAuthToken_t SGUPIAPI_SetCallbackInternalRenewAuthToken_external;
__declspec(dllexport) int SGUPIAPI_SetCallbackInternalRenewAuthToken(void)
{
  std::cout << "[SGUPIAPI_SetCallbackInternalRenewAuthToken] call\n";
  return SGUPIAPI_SetCallbackInternalRenewAuthToken_external();
}

//
//   SGUPIAPI_SetCallbackMessengerConfigUpdate
//

using SGUPIAPI_SetCallbackMessengerConfigUpdate_t = int(*)(void);
SGUPIAPI_SetCallbackMessengerConfigUpdate_t SGUPIAPI_SetCallbackMessengerConfigUpdate_external;
__declspec(dllexport) int SGUPIAPI_SetCallbackMessengerConfigUpdate(void)
{
  std::cout << "[SGUPIAPI_SetCallbackMessengerConfigUpdate] call\n";
  return SGUPIAPI_SetCallbackMessengerConfigUpdate_external();
}

//
//   SGUPIAPI_SetCallbackSubscriptReq
//

using SGUPIAPI_SetCallbackSubscriptReq_t = int(*)(void);
SGUPIAPI_SetCallbackSubscriptReq_t SGUPIAPI_SetCallbackSubscriptReq_external;
__declspec(dllexport) int SGUPIAPI_SetCallbackSubscriptReq(void)
{
  std::cout << "[SGUPIAPI_SetCallbackSubscriptReq] call\n";
  return SGUPIAPI_SetCallbackSubscriptReq_external();
}

//
//   SGUPIAPI_SetCallbackUpdateAuthToken
//

using SGUPIAPI_SetCallbackUpdateAuthToken_t = int(*)(void);
SGUPIAPI_SetCallbackUpdateAuthToken_t SGUPIAPI_SetCallbackUpdateAuthToken_external;
__declspec(dllexport) int SGUPIAPI_SetCallbackUpdateAuthToken(void)
{
  std::cout << "[SGUPIAPI_SetCallbackUpdateAuthToken] call\n";
  return SGUPIAPI_SetCallbackUpdateAuthToken_external();
}

//
//   SGUPMatchMaking
//

using SGUPMatchMaking_t = int(*)(void);
SGUPMatchMaking_t SGUPMatchMaking_external;
__declspec(dllexport) int SGUPMatchMaking(void)
{
  std::cout << "[SGUPMatchMaking] call\n";
  return SGUPMatchMaking_external();
}

//
//   SGUPOverlay
//

using SGUPOverlay_t = int(*)(void);
SGUPOverlay_t SGUPOverlay_external;
__declspec(dllexport) int SGUPOverlay(void)
{
  std::cout << "[SGUPOverlay] call\n";
  return SGUPOverlay_external();
}

//
//   SGUPPeerToPeer
//

using SGUPPeerToPeer_t = int(*)(void);
SGUPPeerToPeer_t SGUPPeerToPeer_external;
__declspec(dllexport) int SGUPPeerToPeer(void)
{
  std::cout << "[SGUPPeerToPeer] call\n";
  return SGUPPeerToPeer_external();
}

using SGUPUser_t = int(*)(void);

//
//   usin
//

using SGUPUser_t = int(*)(void);
SGUPUser_t SGUPUser_external;
__declspec(dllexport) int SGUPUser(void)
{
  std::cout << "[SGUPUser] call\n";
  return SGUPUser_external();
}