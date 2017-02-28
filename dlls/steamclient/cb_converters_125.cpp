#include "steamclient_private.h"
#include "steam_defs.h"
#include "steamworks_sdk_125/steam_api.h"
#include "steamworks_sdk_125/isteamgameserver.h"
#include "steamworks_sdk_125/isteamgameserverstats.h"
extern "C" {
struct winValidateAuthTicketResponse_t_12 {
    CSteamID m_SteamID;
    EAuthSessionResponse m_eAuthSessionResponse;
}  __attribute__ ((ms_struct));
void cb_ValidateAuthTicketResponse_t_12(void *l, void *w)
{
    ValidateAuthTicketResponse_t *lin = (ValidateAuthTicketResponse_t *)l;
    struct winValidateAuthTicketResponse_t_12 *win = (struct winValidateAuthTicketResponse_t_12 *)w;
    win->m_SteamID = lin->m_SteamID;
    win->m_eAuthSessionResponse = lin->m_eAuthSessionResponse;
}

struct winRemoteStorageGetPublishedFileDetailsResult_t_9744 {
    EResult m_eResult;
    PublishedFileId_t m_nPublishedFileId;
    AppId_t m_nCreatorAppID;
    AppId_t m_nConsumerAppID;
    char m_rgchTitle[129];
    char m_rgchDescription[8000];
    UGCHandle_t m_hFile;
    UGCHandle_t m_hPreviewFile;
    uint64 m_ulSteamIDOwner;
    uint32 m_rtimeCreated;
    uint32 m_rtimeUpdated;
    ERemoteStoragePublishedFileVisibility m_eVisibility;
    bool m_bBanned;
    char m_rgchTags[1025];
    bool m_bTagsTruncated;
    char m_pchFileName[260];
    int32 m_nFileSize;
    int32 m_nPreviewFileSize;
    char m_rgchURL[256];
    EWorkshopFileType m_eFileType;
}  __attribute__ ((ms_struct));
void cb_RemoteStorageGetPublishedFileDetailsResult_t_9744(void *l, void *w)
{
    RemoteStorageGetPublishedFileDetailsResult_t *lin = (RemoteStorageGetPublishedFileDetailsResult_t *)l;
    struct winRemoteStorageGetPublishedFileDetailsResult_t_9744 *win = (struct winRemoteStorageGetPublishedFileDetailsResult_t_9744 *)w;
    win->m_eResult = lin->m_eResult;
    win->m_nPublishedFileId = lin->m_nPublishedFileId;
    win->m_nCreatorAppID = lin->m_nCreatorAppID;
    win->m_nConsumerAppID = lin->m_nConsumerAppID;
    memcpy(win->m_rgchTitle, lin->m_rgchTitle, sizeof(win->m_rgchTitle));
    memcpy(win->m_rgchDescription, lin->m_rgchDescription, sizeof(win->m_rgchDescription));
    win->m_hFile = lin->m_hFile;
    win->m_hPreviewFile = lin->m_hPreviewFile;
    win->m_ulSteamIDOwner = lin->m_ulSteamIDOwner;
    win->m_rtimeCreated = lin->m_rtimeCreated;
    win->m_rtimeUpdated = lin->m_rtimeUpdated;
    win->m_eVisibility = lin->m_eVisibility;
    win->m_bBanned = lin->m_bBanned;
    memcpy(win->m_rgchTags, lin->m_rgchTags, sizeof(win->m_rgchTags));
    win->m_bTagsTruncated = lin->m_bTagsTruncated;
    memcpy(win->m_pchFileName, lin->m_pchFileName, sizeof(win->m_pchFileName));
    win->m_nFileSize = lin->m_nFileSize;
    win->m_nPreviewFileSize = lin->m_nPreviewFileSize;
    memcpy(win->m_rgchURL, lin->m_rgchURL, sizeof(win->m_rgchURL));
    win->m_eFileType = lin->m_eFileType;
}

struct winGSClientApprove_t_8 {
    CSteamID m_SteamID;
}  __attribute__ ((ms_struct));
void cb_GSClientApprove_t_8(void *l, void *w)
{
    GSClientApprove_t *lin = (GSClientApprove_t *)l;
    struct winGSClientApprove_t_8 *win = (struct winGSClientApprove_t_8 *)w;
    win->m_SteamID = lin->m_SteamID;
}


}
