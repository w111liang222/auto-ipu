// THIS IS AN AUTOMATICALLY GENERATED FILE.
// DO NOT MODIFY BY HAND!!
//
// Generated by zcm-gen

#include <stdint.h>
#include <stdlib.h>
#include <zcm/zcm_coretypes.h>
#include <zcm/zcm.h>

#ifndef _geometry_msgs_Quaternion_h
#define _geometry_msgs_Quaternion_h

#ifdef __cplusplus
extern "C" {
#endif

#define GEOMETRY_MSGS_QUATERNION_IS_LITTLE_ENDIAN 0
typedef struct _geometry_msgs_Quaternion geometry_msgs_Quaternion;
struct _geometry_msgs_Quaternion
{
    double     x;
    double     y;
    double     z;
    double     w;
};

/**
 * Create a deep copy of a geometry_msgs_Quaternion.
 * When no longer needed, destroy it with geometry_msgs_Quaternion_destroy()
 */
geometry_msgs_Quaternion* geometry_msgs_Quaternion_copy(const geometry_msgs_Quaternion* to_copy);

/**
 * Destroy an instance of geometry_msgs_Quaternion created by geometry_msgs_Quaternion_copy()
 */
void geometry_msgs_Quaternion_destroy(geometry_msgs_Quaternion* to_destroy);

/**
 * Identifies a single subscription.  This is an opaque data type.
 */
typedef struct _geometry_msgs_Quaternion_subscription_t geometry_msgs_Quaternion_subscription_t;

/**
 * Prototype for a callback function invoked when a message of type
 * geometry_msgs_Quaternion is received.
 */
typedef void(*geometry_msgs_Quaternion_handler_t)(const zcm_recv_buf_t* rbuf,
             const char* channel, const geometry_msgs_Quaternion* msg, void* userdata);

/**
 * Publish a message of type geometry_msgs_Quaternion using ZCM.
 *
 * @param zcm The ZCM instance to publish with.
 * @param channel The channel to publish on.
 * @param msg The message to publish.
 * @return 0 on success, <0 on error.  Success means ZCM has transferred
 * responsibility of the message data to the OS.
 */
int geometry_msgs_Quaternion_publish(zcm_t* zcm, const char* channel, const geometry_msgs_Quaternion* msg);

/**
 * Subscribe to messages of type geometry_msgs_Quaternion using ZCM.
 *
 * @param zcm The ZCM instance to subscribe with.
 * @param channel The channel to subscribe to.
 * @param handler The callback function invoked by ZCM when a message is received.
 *                This function is invoked by ZCM during calls to zcm_handle() and
 *                zcm_handle_timeout().
 * @param userdata An opaque pointer passed to @p handler when it is invoked.
 * @return pointer to subscription type, NULL if failure. Must clean up
 *         dynamic memory by passing the pointer to geometry_msgs_Quaternion_unsubscribe.
 */
geometry_msgs_Quaternion_subscription_t* geometry_msgs_Quaternion_subscribe(zcm_t* zcm, const char* channel, geometry_msgs_Quaternion_handler_t handler, void* userdata);

/**
 * Removes and destroys a subscription created by geometry_msgs_Quaternion_subscribe()
 */
int geometry_msgs_Quaternion_unsubscribe(zcm_t* zcm, geometry_msgs_Quaternion_subscription_t* hid);
/**
 * Encode a message of type geometry_msgs_Quaternion into binary form.
 *
 * @param buf The output buffer.
 * @param offset Encoding starts at this byte offset into @p buf.
 * @param maxlen Maximum number of bytes to write.  This should generally
 *               be equal to geometry_msgs_Quaternion_encoded_size().
 * @param msg The message to encode.
 * @return The number of bytes encoded, or <0 if an error occured.
 */
int geometry_msgs_Quaternion_encode(void* buf, uint32_t offset, uint32_t maxlen, const geometry_msgs_Quaternion* p);

/**
 * Decode a message of type geometry_msgs_Quaternion from binary form.
 * When decoding messages containing strings or variable-length arrays, this
 * function may allocate memory.  When finished with the decoded message,
 * release allocated resources with geometry_msgs_Quaternion_decode_cleanup().
 *
 * @param buf The buffer containing the encoded message
 * @param offset The byte offset into @p buf where the encoded message starts.
 * @param maxlen The maximum number of bytes to read while decoding.
 * @param msg Output parameter where the decoded message is stored
 * @return The number of bytes decoded, or <0 if an error occured.
 */
int geometry_msgs_Quaternion_decode(const void* buf, uint32_t offset, uint32_t maxlen, geometry_msgs_Quaternion* msg);

/**
 * Release resources allocated by geometry_msgs_Quaternion_decode()
 * @return 0
 */
int geometry_msgs_Quaternion_decode_cleanup(geometry_msgs_Quaternion* p);

/**
 * Check how many bytes are required to encode a message of type geometry_msgs_Quaternion
 */
uint32_t geometry_msgs_Quaternion_encoded_size(const geometry_msgs_Quaternion* p);
uint32_t geometry_msgs_Quaternion_struct_size(void);
uint32_t geometry_msgs_Quaternion_num_fields(void);
int      geometry_msgs_Quaternion_get_field(const geometry_msgs_Quaternion* p, uint32_t i, zcm_field_t* f);
const zcm_type_info_t* geometry_msgs_Quaternion_get_type_info(void);

// ZCM support functions. Users should not call these
int64_t  __geometry_msgs_Quaternion_get_hash(void);
uint64_t __geometry_msgs_Quaternion_hash_recursive(const __zcm_hash_ptr* p);
int      __geometry_msgs_Quaternion_encode_array(void* buf, uint32_t offset, uint32_t maxlen, const geometry_msgs_Quaternion* p, uint32_t elements);
int      __geometry_msgs_Quaternion_decode_array(const void* buf, uint32_t offset, uint32_t maxlen, geometry_msgs_Quaternion* p, uint32_t elements);
int      __geometry_msgs_Quaternion_decode_array_cleanup(geometry_msgs_Quaternion* p, uint32_t elements);
uint32_t __geometry_msgs_Quaternion_encoded_array_size(const geometry_msgs_Quaternion* p, uint32_t elements);
uint32_t __geometry_msgs_Quaternion_clone_array(const geometry_msgs_Quaternion* p, geometry_msgs_Quaternion* q, uint32_t elements);

#ifdef __cplusplus
}
#endif

#endif