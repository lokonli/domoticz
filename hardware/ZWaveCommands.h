#pragma once
#define COMMAND_CLASS_NO_OPERATION				0x00

#define COMMAND_CLASS_BASIC						0x20
#define COMMAND_CLASS_CONTROLLER_REPLICATION	0x21
#define COMMAND_CLASS_APPLICATION_STATUS		0x22
#define COMMAND_CLASS_ZIP_SERVICES				0x23
#define COMMAND_CLASS_ZIP_SERVER				0x24
#define COMMAND_CLASS_SWITCH_BINARY				0x25
#define COMMAND_CLASS_SWITCH_MULTILEVEL			0x26
#define COMMAND_CLASS_SWITCH_ALL				0x27
#define COMMAND_CLASS_SWITCH_TOGGLE_BINARY		0x28
#define COMMAND_CLASS_SWITCH_TOGGLE_MULTILEVEL	0x29
#define COMMAND_CLASS_CHIMNEY_FAN				0x2A
#define COMMAND_CLASS_SCENE_ACTIVATION			0x2B
#define COMMAND_CLASS_SCENE_ACTUATOR_CONF		0x2C
#define COMMAND_CLASS_SCENE_CONTROLLER_CONF		0x2D
#define COMMAND_CLASS_ZIP_CLIENT				0x2E
#define COMMAND_CLASS_ZIP_ADV_SERVICES			0x2F
#define COMMAND_CLASS_SENSOR_BINARY				0x30
#define COMMAND_CLASS_SENSOR_MULTILEVEL			0x31
#define COMMAND_CLASS_METER						0x32
#define COMMAND_CLASS_COLOR_CONTROL				0x33
#define COMMAND_CLASS_ZIP_ADV_CLIENT			0x34
#define COMMAND_CLASS_METER_PULSE				0x35
#define COMMAND_CLASS_THERMOSTAT_HEATING		0x38

#define COMMAND_CLASS_METER_TBL_CONFIG			0x3C
#define COMMAND_CLASS_METER_TBL_MONITOR			0x3D
#define COMMAND_CLASS_METER_TBL_PUSH			0x3E


#define COMMAND_CLASS_THERMOSTAT_MODE			0x40
#define COMMAND_CLASS_THERMOSTAT_OPERATING_STATE	0x42
#define COMMAND_CLASS_THERMOSTAT_SETPOINT		0x43
#define COMMAND_CLASS_THERMOSTAT_FAN_MODE		0x44
#define COMMAND_CLASS_THERMOSTAT_FAN_STATE		0x45
#define COMMAND_CLASS_CLIMATE_CONTROL_SCHEDULE	0x46
#define COMMAND_CLASS_THERMOSTAT_SETBACK		0x47

#define COMMAND_CLASS_BASIC_WINDOW_COVERING		0x50
#define COMMAND_CLASS_MTP_WINDOW_COVERING		0x51

#define COMMAND_CLASS_CRC16_ENCAP				0x56

#define COMMAND_CLASS_DEVICE_RESET_LOCALLY		0x5A
#define COMMAND_CLASS_CENTRAL_SCENE				0x5B

#define COMMAND_CLASS_ZWAVE_PLUS_INFO			0x5E

#define COMMAND_CLASS_MULTI_INSTANCE			0x60
#define COMMAND_CLASS_DOOR_LOCK					0x62
#define COMMAND_CLASS_USER_CODE					0x63

#define COMMAND_CLASS_CONFIGURATION				0x70
#define COMMAND_CLASS_ALARM						0x71
#define COMMAND_CLASS_MANUFACTURER_SPECIFIC		0x72
#define COMMAND_CLASS_POWERLEVEL				0x73
#define COMMAND_CLASS_PROTECTION				0x75
#define COMMAND_CLASS_LOCK						0x76
#define COMMAND_CLASS_NODE_NAMING				0x77
#define COMMAND_CLASS_SOUND_SWITCH				0x79
#define COMMAND_CLASS_FIRMWARE_UPDATE_MD		0x7A
#define COMMAND_CLASS_GROUPING_NAME				0x7B
#define COMMAND_CLASS_REMOTE_ASSOCIATION_ACTIVATE	0x7C
#define COMMAND_CLASS_REMOTE_ASSOCIATION		0x7D
#define COMMAND_CLASS_BATTERY					0x80
#define COMMAND_CLASS_CLOCK						0x81
#define COMMAND_CLASS_HAIL						0x82
#define COMMAND_CLASS_WAKE_UP					0x84
#define COMMAND_CLASS_ASSOCIATION				0x85
#define COMMAND_CLASS_VERSION					0x86
#define COMMAND_CLASS_INDICATOR					0x87
#define COMMAND_CLASS_PROPRIETARY				0x88
#define COMMAND_CLASS_LANGUAGE					0x89
#define COMMAND_CLASS_TIME						0x8A
#define COMMAND_CLASS_TIME_PARAMETERS			0x8B
#define COMMAND_CLASS_GEOGRAPHIC_LOCATION		0x8C
#define COMMAND_CLASS_COMPOSITE					0x8D
#define COMMAND_CLASS_MULTI_INSTANCE_ASSOCIATION	0x8E
#define COMMAND_CLASS_MULTI_CMD					0x8F
#define COMMAND_CLASS_ENERGY_PRODUCTION			0x90
#define COMMAND_CLASS_MANUFACTURER_PROPRIETARY	0x91
#define COMMAND_CLASS_SCREEN_MD					0x92
#define COMMAND_CLASS_SCREEN_ATTRIBUTES			0x93
#define COMMAND_CLASS_SIMPLE_AV_CONTROL			0x94
#define COMMAND_CLASS_AV_CONTENT_DIRECTORY_MD	0x95
#define COMMAND_CLASS_AV_RENDERER_STATUS		0x96
#define COMMAND_CLASS_AV_CONTENT_SEARCH_MD		0x97
#define COMMAND_CLASS_SECURITY					0x98
#define COMMAND_CLASS_AV_TAGGING_MD				0x99
#define COMMAND_CLASS_IP_CONFIGURATION			0x9A
#define COMMAND_CLASS_ASSOCIATION_COMMAND_CONFIGURATION	0x9B
#define COMMAND_CLASS_SENSOR_ALARM				0x9C
#define COMMAND_CLASS_SILENCE_ALARM				0x9D
#define COMMAND_CLASS_SENSOR_CONFIGURATION		0x9E
#define COMMAND_CLASS_NON_INTEROPERABLE			0xF0
