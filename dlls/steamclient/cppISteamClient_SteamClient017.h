#ifdef __cplusplus
extern "C" {
#endif
extern HSteamPipe cppISteamClient_SteamClient017_CreateSteamPipe(void *);
extern bool cppISteamClient_SteamClient017_BReleaseSteamPipe(void *, HSteamPipe);
extern HSteamUser cppISteamClient_SteamClient017_ConnectToGlobalUser(void *, HSteamPipe);
extern HSteamUser cppISteamClient_SteamClient017_CreateLocalUser(void *, HSteamPipe *, EAccountType);
extern void cppISteamClient_SteamClient017_ReleaseUser(void *, HSteamPipe, HSteamUser);
extern void *cppISteamClient_SteamClient017_GetISteamUser(void *, HSteamUser, HSteamPipe, const char *);
extern void *cppISteamClient_SteamClient017_GetISteamGameServer(void *, HSteamUser, HSteamPipe, const char *);
extern void cppISteamClient_SteamClient017_SetLocalIPBinding(void *, uint32, uint16);
extern void *cppISteamClient_SteamClient017_GetISteamFriends(void *, HSteamUser, HSteamPipe, const char *);
extern void *cppISteamClient_SteamClient017_GetISteamUtils(void *, HSteamPipe, const char *);
extern void *cppISteamClient_SteamClient017_GetISteamMatchmaking(void *, HSteamUser, HSteamPipe, const char *);
extern void *cppISteamClient_SteamClient017_GetISteamMatchmakingServers(void *, HSteamUser, HSteamPipe, const char *);
extern void * cppISteamClient_SteamClient017_GetISteamGenericInterface(void *, HSteamUser, HSteamPipe, const char *);
extern void *cppISteamClient_SteamClient017_GetISteamUserStats(void *, HSteamUser, HSteamPipe, const char *);
extern void *cppISteamClient_SteamClient017_GetISteamGameServerStats(void *, HSteamUser, HSteamPipe, const char *);
extern void *cppISteamClient_SteamClient017_GetISteamApps(void *, HSteamUser, HSteamPipe, const char *);
extern void *cppISteamClient_SteamClient017_GetISteamNetworking(void *, HSteamUser, HSteamPipe, const char *);
extern void *cppISteamClient_SteamClient017_GetISteamRemoteStorage(void *, HSteamUser, HSteamPipe, const char *);
extern void *cppISteamClient_SteamClient017_GetISteamScreenshots(void *, HSteamUser, HSteamPipe, const char *);
extern uint32 cppISteamClient_SteamClient017_GetIPCCallCount(void *);
extern void cppISteamClient_SteamClient017_SetWarningMessageHook(void *, SteamAPIWarningMessageHook_t);
extern bool cppISteamClient_SteamClient017_BShutdownIfAllPipesClosed(void *);
extern void *cppISteamClient_SteamClient017_GetISteamHTTP(void *, HSteamUser, HSteamPipe, const char *);
extern void *cppISteamClient_SteamClient017_GetISteamUnifiedMessages(void *, HSteamUser, HSteamPipe, const char *);
extern void *cppISteamClient_SteamClient017_GetISteamController(void *, HSteamUser, HSteamPipe, const char *);
extern void *cppISteamClient_SteamClient017_GetISteamUGC(void *, HSteamUser, HSteamPipe, const char *);
extern void *cppISteamClient_SteamClient017_GetISteamAppList(void *, HSteamUser, HSteamPipe, const char *);
extern void *cppISteamClient_SteamClient017_GetISteamMusic(void *, HSteamUser, HSteamPipe, const char *);
extern void *cppISteamClient_SteamClient017_GetISteamMusicRemote(void *, HSteamUser, HSteamPipe, const char *);
extern void *cppISteamClient_SteamClient017_GetISteamHTMLSurface(void *, HSteamUser, HSteamPipe, const char *);
extern void *cppISteamClient_SteamClient017_GetISteamInventory(void *, HSteamUser, HSteamPipe, const char *);
extern void *cppISteamClient_SteamClient017_GetISteamVideo(void *, HSteamUser, HSteamPipe, const char *);
#ifdef __cplusplus
}
#endif
