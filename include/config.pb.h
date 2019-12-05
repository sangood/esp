/* Automatically generated nanopb header */
/* Generated by nanopb-0.3.9.4 at Thu Dec 05 21:22:03 2019. */

#ifndef PB_CONFIG_PB_H_INCLUDED
#define PB_CONFIG_PB_H_INCLUDED
#include <pb.h>

/* @@protoc_insertion_point(includes) */
#if PB_PROTO_HEADER_VERSION != 30
#error Regenerate this file with the current version of nanopb generator.
#endif

#ifdef __cplusplus
extern "C" {
#endif

/* Struct definitions */
typedef struct _CoverConfigMessage {
    uint8_t position;
    uint8_t direction;
    uint8_t hand_pull;
    uint8_t weak_switch;
    uint8_t power_switch;
/* @@protoc_insertion_point(struct:CoverConfigMessage) */
} CoverConfigMessage;

typedef struct _DebugConfigMessage {
    uint8_t type;
    char server[40];
    uint16_t port;
/* @@protoc_insertion_point(struct:DebugConfigMessage) */
} DebugConfigMessage;

typedef struct _HttpConfigMessage {
    uint16_t port;
    char user[15];
    char pass[15];
    char ota_url[150];
/* @@protoc_insertion_point(struct:HttpConfigMessage) */
} HttpConfigMessage;

typedef struct _MqttConfigMessage {
    char server[30];
    uint16_t port;
    char user[20];
    char pass[30];
    bool retain;
    char topic[50];
    bool discovery;
    char discovery_prefix[30];
/* @@protoc_insertion_point(struct:MqttConfigMessage) */
} MqttConfigMessage;

typedef struct _RelayConfigMessage {
    uint8_t led_type;
    uint16_t led_start;
    uint16_t led_end;
    uint8_t power_on_state;
    uint8_t last_state;
    uint32_t study_index[4];
    uint32_t study[40];
    uint8_t led_light;
    uint8_t led_time;
/* @@protoc_insertion_point(struct:RelayConfigMessage) */
} RelayConfigMessage;

typedef struct _WifiConfigMessage {
    char ssid[20];
    char pass[30];
    bool is_static;
    char ip[15];
    char sn[15];
    char gw[15];
/* @@protoc_insertion_point(struct:WifiConfigMessage) */
} WifiConfigMessage;

typedef struct _ZinguoConfigMessage {
    bool dual_motor;
    bool dual_warm;
    uint8_t delay_blow;
    uint8_t linkage;
    uint8_t max_temp;
    uint8_t close_warm;
    uint8_t close_ventilation;
    bool beep;
    bool reverse_led;
/* @@protoc_insertion_point(struct:ZinguoConfigMessage) */
} ZinguoConfigMessage;

typedef struct _ConfigMessage {
    WifiConfigMessage wifi;
    HttpConfigMessage http;
    MqttConfigMessage mqtt;
    DebugConfigMessage debug;
    RelayConfigMessage relay;
    CoverConfigMessage cover;
    ZinguoConfigMessage zinguo;
    uint8_t module_type;
/* @@protoc_insertion_point(struct:ConfigMessage) */
} ConfigMessage;

/* Struct field encoding specification for nanopb */
extern const pb_field_t ConfigMessage_fields[9];
extern const pb_field_t WifiConfigMessage_fields[7];
extern const pb_field_t HttpConfigMessage_fields[5];
extern const pb_field_t MqttConfigMessage_fields[9];
extern const pb_field_t DebugConfigMessage_fields[4];
extern const pb_field_t RelayConfigMessage_fields[10];
extern const pb_field_t CoverConfigMessage_fields[6];
extern const pb_field_t ZinguoConfigMessage_fields[10];

/* Maximum encoded size of messages (where known) */
#define ConfigMessage_size                       931
#define WifiConfigMessage_size                   107
#define HttpConfigMessage_size                   193
#define MqttConfigMessage_size                   180
#define DebugConfigMessage_size                  54
#define RelayConfigMessage_size                  306
#define CoverConfigMessage_size                  30
#define ZinguoConfigMessage_size                 38

/* Message IDs (where set with "msgid" option) */
#ifdef PB_MSGID

#define CONFIG_MESSAGES \


#endif

#ifdef __cplusplus
} /* extern "C" */
#endif
/* @@protoc_insertion_point(eof) */

#endif
