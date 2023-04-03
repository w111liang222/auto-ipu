// THIS IS AN AUTOMATICALLY GENERATED FILE.
// DO NOT MODIFY BY HAND!!
//
// Generated by zcm-gen

#include <stdint.h>
#include <stdlib.h>
#include <zcm/zcm_coretypes.h>
#include <zcm/zcm.h>

#ifndef _sensor_msgs_PointCloud_h
#define _sensor_msgs_PointCloud_h

#ifdef __cplusplus
extern "C" {
#endif

#include "std_msgs/std_msgs_Header.h"
#include "sensor_msgs/sensor_msgs_PointField.h"
#define SENSOR_MSGS_POINTCLOUD_IS_LITTLE_ENDIAN 0
typedef struct _sensor_msgs_PointCloud sensor_msgs_PointCloud;
struct _sensor_msgs_PointCloud
{
    std_msgs_Header header;
    int32_t    height;
    int32_t    width;
    int32_t    fields_num;
    sensor_msgs_PointField *fields;
    int8_t     is_bigendian;
    int32_t    point_step;
    int32_t    row_step;
    int64_t    data_num;
    uint8_t    *data;
    int8_t     is_dense;
};

/**
 * Create a deep copy of a sensor_msgs_PointCloud.
 * When no longer needed, destroy it with sensor_msgs_PointCloud_destroy()
 */
sensor_msgs_PointCloud* sensor_msgs_PointCloud_copy(const sensor_msgs_PointCloud* to_copy);

/**
 * Destroy an instance of sensor_msgs_PointCloud created by sensor_msgs_PointCloud_copy()
 */
void sensor_msgs_PointCloud_destroy(sensor_msgs_PointCloud* to_destroy);

/**
 * Identifies a single subscription.  This is an opaque data type.
 */
typedef struct _sensor_msgs_PointCloud_subscription_t sensor_msgs_PointCloud_subscription_t;

/**
 * Prototype for a callback function invoked when a message of type
 * sensor_msgs_PointCloud is received.
 */
typedef void(*sensor_msgs_PointCloud_handler_t)(const zcm_recv_buf_t* rbuf,
             const char* channel, const sensor_msgs_PointCloud* msg, void* userdata);

/**
 * Publish a message of type sensor_msgs_PointCloud using ZCM.
 *
 * @param zcm The ZCM instance to publish with.
 * @param channel The channel to publish on.
 * @param msg The message to publish.
 * @return 0 on success, <0 on error.  Success means ZCM has transferred
 * responsibility of the message data to the OS.
 */
int sensor_msgs_PointCloud_publish(zcm_t* zcm, const char* channel, const sensor_msgs_PointCloud* msg);

/**
 * Subscribe to messages of type sensor_msgs_PointCloud using ZCM.
 *
 * @param zcm The ZCM instance to subscribe with.
 * @param channel The channel to subscribe to.
 * @param handler The callback function invoked by ZCM when a message is received.
 *                This function is invoked by ZCM during calls to zcm_handle() and
 *                zcm_handle_timeout().
 * @param userdata An opaque pointer passed to @p handler when it is invoked.
 * @return pointer to subscription type, NULL if failure. Must clean up
 *         dynamic memory by passing the pointer to sensor_msgs_PointCloud_unsubscribe.
 */
sensor_msgs_PointCloud_subscription_t* sensor_msgs_PointCloud_subscribe(zcm_t* zcm, const char* channel, sensor_msgs_PointCloud_handler_t handler, void* userdata);

/**
 * Removes and destroys a subscription created by sensor_msgs_PointCloud_subscribe()
 */
int sensor_msgs_PointCloud_unsubscribe(zcm_t* zcm, sensor_msgs_PointCloud_subscription_t* hid);
/**
 * Encode a message of type sensor_msgs_PointCloud into binary form.
 *
 * @param buf The output buffer.
 * @param offset Encoding starts at this byte offset into @p buf.
 * @param maxlen Maximum number of bytes to write.  This should generally
 *               be equal to sensor_msgs_PointCloud_encoded_size().
 * @param msg The message to encode.
 * @return The number of bytes encoded, or <0 if an error occured.
 */
int sensor_msgs_PointCloud_encode(void* buf, uint32_t offset, uint32_t maxlen, const sensor_msgs_PointCloud* p);

/**
 * Decode a message of type sensor_msgs_PointCloud from binary form.
 * When decoding messages containing strings or variable-length arrays, this
 * function may allocate memory.  When finished with the decoded message,
 * release allocated resources with sensor_msgs_PointCloud_decode_cleanup().
 *
 * @param buf The buffer containing the encoded message
 * @param offset The byte offset into @p buf where the encoded message starts.
 * @param maxlen The maximum number of bytes to read while decoding.
 * @param msg Output parameter where the decoded message is stored
 * @return The number of bytes decoded, or <0 if an error occured.
 */
int sensor_msgs_PointCloud_decode(const void* buf, uint32_t offset, uint32_t maxlen, sensor_msgs_PointCloud* msg);

/**
 * Release resources allocated by sensor_msgs_PointCloud_decode()
 * @return 0
 */
int sensor_msgs_PointCloud_decode_cleanup(sensor_msgs_PointCloud* p);

/**
 * Check how many bytes are required to encode a message of type sensor_msgs_PointCloud
 */
uint32_t sensor_msgs_PointCloud_encoded_size(const sensor_msgs_PointCloud* p);
uint32_t sensor_msgs_PointCloud_struct_size(void);
uint32_t sensor_msgs_PointCloud_num_fields(void);
int      sensor_msgs_PointCloud_get_field(const sensor_msgs_PointCloud* p, uint32_t i, zcm_field_t* f);
const zcm_type_info_t* sensor_msgs_PointCloud_get_type_info(void);

// ZCM support functions. Users should not call these
int64_t  __sensor_msgs_PointCloud_get_hash(void);
uint64_t __sensor_msgs_PointCloud_hash_recursive(const __zcm_hash_ptr* p);
int      __sensor_msgs_PointCloud_encode_array(void* buf, uint32_t offset, uint32_t maxlen, const sensor_msgs_PointCloud* p, uint32_t elements);
int      __sensor_msgs_PointCloud_decode_array(const void* buf, uint32_t offset, uint32_t maxlen, sensor_msgs_PointCloud* p, uint32_t elements);
int      __sensor_msgs_PointCloud_decode_array_cleanup(sensor_msgs_PointCloud* p, uint32_t elements);
uint32_t __sensor_msgs_PointCloud_encoded_array_size(const sensor_msgs_PointCloud* p, uint32_t elements);
uint32_t __sensor_msgs_PointCloud_clone_array(const sensor_msgs_PointCloud* p, sensor_msgs_PointCloud* q, uint32_t elements);

#ifdef __cplusplus
}
#endif

#endif