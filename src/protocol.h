/*
Protocol header for the SenseStack universal IoT hardware platform for sensor data collection.
This header contains the definitions required by all different modules of the system.

PLEASE DO NOT CHANGE THIS FILE UNLESS ABSOLUTELY NECESSARY.

*/

// Maximum number of connected sensors for a module.
#define MAX_SENSORS 10

// Max number of chars in a sensor module reply.
#define MAX_SENSOR_REPLY_LENGTH 32

// JSON max reply length
#define MAX_JSON_REPLY 2048

// Address range for sensor modules.
#define TOP_ADDRESS 127

// I2C addresses of sensor modules, please add new sensor types here appropriately.
#define SENSOR_TEMP_HUM 11
#define SENSOR_PM25 12
#define SENSOR_RAIN 13
#define SENSOR_CO2_NO2 14
#define SENSOR_GPS 15
#define SENSOR_LIGHT_UV 16
#define SENSOR_CO 17

// Data type macros
#define CH_MORE '@'
#define CH_TERMINATE '!'
#define CH_IS_KEY '$'
#define CH_IS_VALUE '#'