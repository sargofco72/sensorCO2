// Fill in  your WiFi networks SSID and password
#define SECRET_SSID "MiFibra-86C4"
#define SECRET_PASS "tUUECT79"

// Fill in the hostname of your AWS IoT broker
#define SECRET_BROKER "a13a30hq0wef9j-ats.iot.us-east-1.amazonaws.com"

// Fill in the boards public certificate
const char SECRET_CERTIFICATE[] = R"(
-----BEGIN CERTIFICATE-----
MIIC3DCCAcSgAwIBAgIUQrCowy0NT7csv7ewjDQcnQHnk/wwDQYJKoZIhvcNAQEL
BQAwTTFLMEkGA1UECwxCQW1hem9uIFdlYiBTZXJ2aWNlcyBPPUFtYXpvbi5jb20g
SW5jLiBMPVNlYXR0bGUgU1Q9V2FzaGluZ3RvbiBDPVVTMB4XDTIxMDQyMzEyMjcy
MFoXDTQ5MTIzMTIzNTk1OVowbDELMAkGA1UEBhMCU1AxDzANBgNVBAgTBk1hZHJp
ZDEPMA0GA1UEBxMGTWFkcmlkMREwDwYDVQQKEwhLbm9ja091dDELMAkGA1UECxMC
SVQxGzAZBgNVBAMTEjAxMjMzQzI3NEQ3MzM3N0ZFRTBZMBMGByqGSM49AgEGCCqG
SM49AwEHA0IABNXRBPfGo8qdFgXpF/kytdGxyH5niDZTaLDaTcvxfCTCb2IgGjgA
GOG7mOSy2aAx4zhapWzEwkWScfdHZedqX52jYDBeMB8GA1UdIwQYMBaAFFD3h0KL
dWf9wnM64LQRO59ZokBmMB0GA1UdDgQWBBQD3/Gikegi5IxHElIaxA86Oab9AjAM
BgNVHRMBAf8EAjAAMA4GA1UdDwEB/wQEAwIHgDANBgkqhkiG9w0BAQsFAAOCAQEA
IReKxMj9o3yI2Ks9Qanr+alp4q3eRUK2ISQFzNpYWqM+HC35GFSCfm7cJ/7h6nsp
eTzlX6RPPPkpyIqCokHPAOdXCOPK917yLGmFMVEg9Go1aPc2m+X6GLiVEYOkCcG5
hc0177DsphT4yDDCZjn+IoOE13Y3uieoT8gO4s4mJmkFLr5PupiGWnpIfEly9rSm
qDkhrgtc0e54osOJ6yepsL9e388rOSQTdhsaPW78UvOtW/W8JW88vrmMWyI6fCGU
eYLP4ZYYJcLZMGpUq2/0bmOP7KuVnKGVkhBwnUJjPJaKbb3BVw1sSVoktsg8LhXh
Kq6WGjvWwkHXind3RhBDiA==
-----END CERTIFICATE-----
)";
