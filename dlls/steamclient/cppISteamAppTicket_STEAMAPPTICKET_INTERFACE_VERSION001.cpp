#include "steamclient_private.h"
#include "steam_defs.h"
#include "steamworks_sdk_139/steam_api.h"
#include "steamworks_sdk_139/isteamappticket.h"
#include "cppISteamAppTicket_STEAMAPPTICKET_INTERFACE_VERSION001.h"
#ifdef __cplusplus
extern "C" {
#endif
uint32 cppISteamAppTicket_STEAMAPPTICKET_INTERFACE_VERSION001_GetAppOwnershipTicketData(void *linux_side, uint32 nAppID, void * pvBuffer, uint32 cbBufferLength, uint32 * piAppId, uint32 * piSteamId, uint32 * piSignature, uint32 * pcbSignature)
{
    return ((ISteamAppTicket*)linux_side)->GetAppOwnershipTicketData((uint32)nAppID, (void *)pvBuffer, (uint32)cbBufferLength, (uint32 *)piAppId, (uint32 *)piSteamId, (uint32 *)piSignature, (uint32 *)pcbSignature);
}

#ifdef __cplusplus
}
#endif
