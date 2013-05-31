#ifndef __CAPWAP_ELEMENT_80211_ADD_WLAN_HEADER__
#define __CAPWAP_ELEMENT_80211_ADD_WLAN_HEADER__

#define CAPWAP_ELEMENT_80211_ADD_WLAN				1024

#define CAPWAP_ADD_WLAN_GROUPTSC_LENGTH				4
#define CAPWAP_ADD_WLAN_SSID_LENGTH					32

#define CAPWAP_ADD_WLAN_CAPABILITY_ESS				0x8000
#define CAPWAP_ADD_WLAN_CAPABILITY_IBSS				0x4000
#define CAPWAP_ADD_WLAN_CAPABILITY_CFPOLLABLE		0x2000
#define CAPWAP_ADD_WLAN_CAPABILITY_CFPOLLREQUEST	0x1000
#define CAPWAP_ADD_WLAN_CAPABILITY_PRIVACY			0x0800
#define CAPWAP_ADD_WLAN_CAPABILITY_SHORTPREAMBLE	0x0400
#define CAPWAP_ADD_WLAN_CAPABILITY_PBCC				0x0200
#define CAPWAP_ADD_WLAN_CAPABILITY_CHANNELAGILITY	0x0100
#define CAPWAP_ADD_WLAN_CAPABILITY_SPECTRUMMAN		0x0080
#define CAPWAP_ADD_WLAN_CAPABILITY_QOS				0x0040
#define CAPWAP_ADD_WLAN_CAPABILITY_SHORTSLOTTIME	0x0020
#define CAPWAP_ADD_WLAN_CAPABILITY_APSD				0x0010
#define CAPWAP_ADD_WLAN_CAPABILITY_DSSS_OFDM		0x0004
#define CAPWAP_ADD_WLAN_CAPABILITY_DELAYEDACK		0x0002
#define CAPWAP_ADD_WLAN_CAPABILITY_IMMEDIATEACK		0x0001

#define CAPWAP_ADD_WLAN_KEY_STATUS_MULTICASTKEY		0
#define CAPWAP_ADD_WLAN_KEY_STATUS_WEP				1
#define CAPWAP_ADD_WLAN_KEY_STATUS_REKEYINGGTK		2
#define CAPWAP_ADD_WLAN_KEY_STATUS_COMPLETEGTK		3

#define CAPWAP_ADD_WLAN_QOS_BESTEFFORT				0
#define CAPWAP_ADD_WLAN_QOS_VIDEO					1
#define CAPWAP_ADD_WLAN_QOS_VOICE					2
#define CAPWAP_ADD_WLAN_QOS_BACKGROUND				3

#define CAPWAP_ADD_WLAN_AUTHTYPE_OPEN				0
#define CAPWAP_ADD_WLAN_AUTHTYPE_WEP				1

#define CAPWAP_ADD_WLAN_MACMODE_LOCAL				0
#define CAPWAP_ADD_WLAN_MACMODE_SPLIT				1

#define CAPWAP_ADD_WLAN_TUNNELMODE_LOCAL			0
#define CAPWAP_ADD_WLAN_TUNNELMODE_8023				1
#define CAPWAP_ADD_WLAN_TUNNELMODE_80211			2

struct capwap_80211_addwlan_element {
	uint8_t radioid;
	uint8_t wlanid;
	uint16_t capability;
	uint8_t keyindex;
	uint8_t keystatus;
	uint16_t keylength;
	uint8_t* key;
	uint8_t grouptsc[CAPWAP_ADD_WLAN_GROUPTSC_LENGTH];
	uint8_t qos;
	uint8_t authmode;
	uint8_t macmode;
	uint8_t tunnelmode;
	uint8_t suppressssid;
	uint16_t ssidlength;
	uint8_t* ssid;
};

extern struct capwap_message_elements_ops capwap_element_80211_addwlan_ops;

#endif /* __CAPWAP_ELEMENT_80211_ADD_WLAN_HEADER__ */
