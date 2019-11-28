// Onyx M2/SuperB firmware config

// For running in "production" mode, set both logging options to zero. The superb
// won't collaborate with the M2 in logging mode, as the serial interface is used
// for the serial monitor and not the communication channel to the M2.
#define WANT_LOGGING 0

// Wifi options. Set both home and mobile SSIDs and passwords here. If left to null,
// that ssid won't be used.
const char* WIFI_SSID_HOME = "{xxx}";
const char* WIFI_PASSWORD_HOME = "{xxx}";
const char* WIFI_SSID_MOBILE = "{xxx}";
const char* WIFI_PASSWORD_MOBILE = "{xxx}";

// Onyx M2 server URL.
// WARNINNG: DON'T USE WSS!!!
// While the ESP32 supports it, it requires most of its processing power
// to handle the crypto. This means that pings are really long and ws is
// deemed unresponsive at regular intervals, and of course throughput is terrible.
const char* WEBSOCKET_URL = "ws://{xxx}/m2device?pin={xxx}";