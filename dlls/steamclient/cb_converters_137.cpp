#include "steamclient_private.h"
#include "steam_defs.h"
#include "steamworks_sdk_137/steam_api.h"
#include "steamworks_sdk_137/isteamgameserver.h"
#include "steamworks_sdk_137/isteamgameserverstats.h"
extern "C" {
struct winRemoteStorageConflictResolution_t_8 {
    AppId_t m_nAppID;
    EResult m_eResult;
}  __attribute__ ((ms_struct));
void cb_RemoteStorageConflictResolution_t_8(void *l, void *w)
{
    RemoteStorageConflictResolution_t *lin = (RemoteStorageConflictResolution_t *)l;
    struct winRemoteStorageConflictResolution_t_8 *win = (struct winRemoteStorageConflictResolution_t_8 *)w;
    win->m_nAppID = lin->m_nAppID;
    win->m_eResult = lin->m_eResult;
}


}
