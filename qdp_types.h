/* Structures that the reconstruction used to address as offsets into its stack frame.
   Every field offset is the one the stock code uses; the static asserts below pin them. */
#ifndef QDP_TYPES_H
#define QDP_TYPES_H

#include <stddef.h>
#include <stdint.h>

/* WDS create-profile request (0xc30 bytes), shared by qdp_3gpp_profile_create,
   qdp_3gpp2_profile_create and qdp_epc_profile_create. Each *_valid byte is the QMI
   optional-TLV flag of the field that follows it. Field groups: plain names are the
   3GPP set, the epc_ prefix is used only by EPC profiles, the cdma1_, cdma2_ and cdma_
   prefixes by 3GPP2 profiles (EPC fills the 3GPP, EPC and 3GPP2 sets). */
struct qdp_profile_req
{
  uint32_t profile_type;      /* 0x000  3GPP 0, 3GPP2 1, EPC 2 */
  uint8_t profile_name_valid; /* 0x004 */
  char profile_name[0x33];    /* 0x005 */
  uint8_t pdp_type_valid;     /* 0x038 */
  uint8_t _pad0[0x3];
  uint32_t pdp_type; /* 0x03c  0 IP, 2 IPV6, 3 IPV4V6 */
  uint8_t _pad1[0x10];
  uint8_t apn_name_valid; /* 0x050 */
  char apn_name[0x97];    /* 0x051 */
  uint8_t _pad2[0xa8];
  uint8_t username_valid;  /* 0x190 */
  char username[0x80];     /* 0x191 */
  uint8_t password_valid;  /* 0x211 */
  char password[0x80];     /* 0x212 */
  uint8_t auth_pref_valid; /* 0x292 */
  uint8_t auth_pref;       /* 0x293  0 none, 1 PAP, 2 CHAP, 3 both */
  uint8_t _pad3[0x148];
  uint8_t ril_param9_valid; /* 0x3dc */
  uint8_t ril_param9;       /* 0x3dd */
  uint8_t _pad4[0xa];
  uint8_t emergency_calls_valid; /* 0x3e8  set only for param_5 == 3 */
  uint8_t emergency_calls;       /* 0x3e9 */
  uint8_t _pad5[0x28];
  uint8_t roaming_ip1_valid; /* 0x412 */
  uint8_t _pad6[0x1];
  uint32_t roaming_ip1;      /* 0x414  0 IP, 1 IPV6, 2 IPV4V6 */
  uint8_t roaming_ip2_valid; /* 0x418 */
  uint8_t _pad7[0x3];
  uint32_t roaming_ip2; /* 0x41c  same value as roaming_ip1 */
  uint8_t _pad8[0x296];
  uint8_t epc_password_valid;  /* 0x6b6  EPC-only credential set */
  char epc_password[0x80];     /* 0x6b7 */
  uint8_t epc_username_valid;  /* 0x737 */
  char epc_username[0x80];     /* 0x738 */
  uint8_t epc_auth_pref_valid; /* 0x7b8 */
  uint8_t _pad9[0x3];
  uint32_t epc_auth_pref; /* 0x7bc  0 none, 1 PAP, 2 CHAP, 3 both */
  uint8_t _pad10[0x3c];
  uint8_t persistent_valid; /* 0x7fc */
  uint8_t persistent;       /* 0x7fd */
  uint8_t _pad11[0x26];
  uint8_t cdma1_auth_pref_valid; /* 0x824  3GPP2 credential set 1 */
  uint8_t _pad12[0x3];
  uint32_t cdma1_auth_pref;     /* 0x828  0 none, 1 PAP, 2 CHAP, 3 both */
  uint8_t cdma1_username_valid; /* 0x82c */
  char cdma1_username[0x80];    /* 0x82d */
  uint8_t cdma1_password_valid; /* 0x8ad */
  char cdma1_password[0x80];    /* 0x8ae */
  uint8_t _pad13[0x18];
  uint8_t cdma_apn_name_valid; /* 0x946 */
  char cdma_apn_name[0x97];    /* 0x947 */
  uint8_t cdma_pdn_type_valid; /* 0x9de */
  uint8_t _pad14[0x1];
  uint32_t cdma_pdn_type; /* 0x9e0  0 IP, 1 IPV6, 2 IPV4V6 */
  uint8_t _pad15[0x42];
  uint8_t cdma2_auth_pref_valid; /* 0xa26  3GPP2 credential set 2 */
  uint8_t _pad16[0x1];
  uint32_t cdma2_auth_pref;     /* 0xa28  0 none, 1 PAP, 2 CHAP, 3 both */
  uint8_t cdma2_username_valid; /* 0xa2c */
  char cdma2_username[0x80];    /* 0xa2d */
  uint8_t cdma2_password_valid; /* 0xaad */
  char cdma2_password[0x80];    /* 0xaae */
  uint8_t _pad17[0xea];
  uint8_t apn_type_mask_valid; /* 0xc18  only with isAPAssistMode */
  uint8_t _pad18[0x7];
  uint64_t apn_type_mask; /* 0xc20  WDS TLV 0xDD */
  uint8_t _pad19[0x8];
};

/* WDS modify-profile request. Same fields as qdp_profile_req, but a profile index follows
   the profile type and the offsets differ: 3GPP and 3GPP2 fields sit 4 bytes later, the
   EPC credential set and the roaming fields 8 bytes later. Only the fields the
   fill_common_params functions write are named; the total size is not pinned here. The
   kept_* fields are copied unchanged from the queried profile. */
struct qdp_profile_modify_req
{
  uint32_t profile_type; /* 0x000  2 for EPC */
  uint8_t profile_index; /* 0x004 */
  uint8_t _pad0[0x37];
  uint8_t pdp_type_valid; /* 0x03c */
  uint8_t _pad1[0x3];
  uint32_t pdp_type; /* 0x040 */
  uint8_t _pad2[0x10];
  uint8_t apn_name_valid; /* 0x054 */
  char apn_name[0x97];    /* 0x055 */
  uint8_t _pad3[0xa8];
  uint8_t username_valid;  /* 0x194 */
  char username[0x80];     /* 0x195 */
  uint8_t password_valid;  /* 0x215 */
  char password[0x80];     /* 0x216 */
  uint8_t auth_pref_valid; /* 0x296 */
  uint8_t auth_pref;       /* 0x297 */
  uint8_t _pad4[0x140];
  uint8_t kept_3d8; /* 0x3d8  copied from the queried profile */
  uint8_t kept_3d9; /* 0x3d9 */
  uint8_t _pad5[0x26];
  uint8_t kept_400; /* 0x400 */
  uint8_t _pad6[0x1];
  uint16_t kept_402; /* 0x402 */
  uint8_t kept_404;  /* 0x404 */
  uint8_t _pad7[0x1];
  uint16_t kept_406; /* 0x406 */
  uint8_t kept_408;  /* 0x408 */
  uint8_t _pad8[0x1];
  uint16_t kept_40a; /* 0x40a */
  uint8_t _pad9[0xe];
  uint8_t roaming_ip1_valid; /* 0x41a */
  uint8_t _pad10[0x1];
  uint32_t roaming_ip1;      /* 0x41c  0 IP, 1 IPV6, 2 IPV4V6 */
  uint8_t roaming_ip2_valid; /* 0x420 */
  uint8_t _pad11[0x3];
  uint32_t roaming_ip2; /* 0x424 */
  uint8_t _pad12[0x296];
  uint8_t epc_password_valid;  /* 0x6be */
  char epc_password[0x80];     /* 0x6bf */
  uint8_t epc_username_valid;  /* 0x73f */
  char epc_username[0x80];     /* 0x740 */
  uint8_t epc_auth_pref_valid; /* 0x7c0 */
  uint8_t _pad13[0x3];
  uint32_t epc_auth_pref; /* 0x7c4 */
  uint8_t _pad14[0x60];
  uint8_t cdma1_auth_pref_valid; /* 0x828 */
  uint8_t _pad15[0x3];
  uint32_t cdma1_auth_pref;     /* 0x82c */
  uint8_t cdma1_username_valid; /* 0x830 */
  char cdma1_username[0x80];    /* 0x831 */
  uint8_t cdma1_password_valid; /* 0x8b1 */
  char cdma1_password[0x80];    /* 0x8b2 */
  uint8_t _pad16[0x18];
  uint8_t cdma_apn_name_valid; /* 0x94a */
  char cdma_apn_name[0x97];    /* 0x94b */
  uint8_t cdma_pdn_type_valid; /* 0x9e2 */
  uint8_t _pad17[0x1];
  uint32_t cdma_pdn_type; /* 0x9e4 */
  uint8_t _pad18[0x42];
  uint8_t cdma2_auth_pref_valid; /* 0xa2a */
  uint8_t _pad19[0x1];
  uint32_t cdma2_auth_pref;     /* 0xa2c */
  uint8_t cdma2_username_valid; /* 0xa30 */
  char cdma2_username[0x80];    /* 0xa31 */
  uint8_t cdma2_password_valid; /* 0xab1 */
  char cdma2_password[0x80];    /* 0xab2 */
  uint8_t _pad20[0xea];
  uint8_t apn_type_mask_valid; /* 0xc1c */
  uint8_t _pad21[0x3];
  uint64_t apn_type_mask; /* 0xc20  WDS TLV 0xDD */
};

/* WDS query-profile request: profile type and index. */
struct qdp_query_req
{
  uint32_t profile_type; /* 0x00 */
  uint8_t profile_index; /* 0x04 */
  uint8_t _pad[3];
};

/* WDS query-profile response (0xc40 bytes); only the fields the code reads are named. */
struct qdp_query_res
{
  int32_t qmi_rc;             /* 0x000 */
  int32_t qmi_err;            /* 0x004 */
  uint8_t profile_name_valid; /* 0x008 */
  char profile_name[0x33];    /* 0x009 */
  uint8_t pdp_type_valid;     /* 0x03c */
  uint8_t _pad0[0x3];
  uint32_t pdp_type; /* 0x040 */
  uint8_t _pad1[0x10];
  uint8_t apn_name_valid; /* 0x054 */
  char apn_name[0x97];    /* 0x055 */
  uint8_t _pad2[0xa9];
  char username[0x80];    /* 0x195 */
  uint8_t password_valid; /* 0x215 */
  char password[0x80];    /* 0x216 */
  uint8_t _pad3[0x1];
  uint8_t auth_pref; /* 0x297 */
  uint8_t _pad4[0x140];
  uint8_t kept_3d8; /* 0x3d8 */
  uint8_t kept_3d9; /* 0x3d9 */
  uint8_t _pad5[0x6];
  uint8_t profile_class_valid; /* 0x3e0 */
  uint8_t profile_class;       /* 0x3e1 */
  uint8_t _pad5b[0xe];
  uint8_t emergency_calls_valid; /* 0x3f0 */
  uint8_t emergency_calls;       /* 0x3f1 */
  uint8_t _pad6[0xe];
  uint8_t kept_400; /* 0x400 */
  uint8_t _pad7[0x1];
  uint16_t kept_402; /* 0x402 */
  uint8_t kept_404;  /* 0x404 */
  uint8_t _pad8[0x1];
  uint16_t kept_406; /* 0x406 */
  uint8_t kept_408;  /* 0x408 */
  uint8_t _pad9[0x1];
  uint16_t kept_40a; /* 0x40a */
  uint8_t _pad10[0x10];
  uint32_t roaming_ip1; /* 0x41c */
  uint8_t _pad11[0x4];
  uint32_t roaming_ip2; /* 0x424 */
  uint8_t _pad12[0x3d8];
  uint8_t epc_class_valid; /* 0x800 */
  uint8_t epc_class;       /* 0x801 */
  uint8_t _pad12d[0x2];
  uint8_t persistent_valid; /* 0x804 */
  uint8_t persistent;       /* 0x805 */
  uint8_t _pad12b[0x2e];
  uint8_t cdma1_username_valid; /* 0x834 */
  char cdma1_username[0x80];    /* 0x835 */
  uint8_t cdma1_password_valid; /* 0x8b5 */
  char cdma1_password[0x80];    /* 0x8b6 */
  uint8_t _pad12e[0x18];
  uint8_t cdma_apn_name_valid; /* 0x94e */
  char cdma_apn_name[0x97];    /* 0x94f */
  uint8_t cdma_pdn_type_valid; /* 0x9e6 */
  uint8_t _pad13[0x1];
  uint32_t cdma_pdn_type; /* 0x9e8 */
  uint8_t _pad14[0x40];
  uint8_t gpp2_class_valid; /* 0xa2c */
  uint8_t gpp2_class;       /* 0xa2d */
  uint8_t _pad14b[0x6];
  uint8_t cdma2_username_valid; /* 0xa34 */
  char cdma2_username[0x80];    /* 0xa35 */
  uint8_t _pad14c[0x16b];
  uint8_t apn_type_mask_valid; /* 0xc20 */
  uint8_t _pad15[0x7];
  uint64_t apn_type_mask; /* 0xc28 */
  uint8_t _pad16[0x10];
};

/* WDS get-profile-list request (0xb8 bytes): the profile technology to list. */
struct qdp_list_req
{
  uint8_t profile_type_valid; /* 0x00 */
  uint8_t _pad0[3];
  uint32_t profile_type; /* 0x04  0 3GPP, 1 3GPP2 */
  uint8_t _pad1[0xb0];
};

/* One entry of the profile list, 0x38 bytes. */
struct qdp_list_entry
{
  uint32_t profile_type;   /* 0x00  0 3GPP, 1 3GPP2 */
  uint8_t profile_index;   /* 0x04 */
  char profile_name[0x33]; /* 0x05 */
};

/* WDS get-profile-list response (0x37dc bytes). */
struct qdp_list_res
{
  int32_t qmi_rc;                      /* 0x000 */
  int32_t qmi_err;                     /* 0x004 */
  uint32_t profile_count;              /* 0x008 */
  struct qdp_list_entry profiles[255]; /* 0x00c */
  uint8_t _pad[8];
};

/* One RIL parameter as the callers pass them in a ten entry array: string and length. */
struct qdp_ril_param
{
  char *value;    /* 0x00 */
  int32_t length; /* 0x08 */
  uint32_t _pad;
};

/* Result block of qdp_qmi_wds_create_profile (0x18 bytes). */
struct qdp_create_res
{
  int32_t qmi_rc;  /* 0x00 */
  int32_t qmi_err; /* 0x04 */
  uint32_t _pad0;
  uint8_t profile_id; /* 0x0c */
  uint8_t _pad1[0xb];
};

_Static_assert(sizeof(struct qdp_profile_req) == 0xc30, "qdp_profile_req size");
_Static_assert(offsetof(struct qdp_profile_req, profile_type) == 0x000, "qdp_profile_req profile_type");
_Static_assert(offsetof(struct qdp_profile_req, profile_name_valid) == 0x004, "qdp_profile_req profile_name_valid");
_Static_assert(offsetof(struct qdp_profile_req, profile_name) == 0x005, "qdp_profile_req profile_name");
_Static_assert(offsetof(struct qdp_profile_req, pdp_type_valid) == 0x038, "qdp_profile_req pdp_type_valid");
_Static_assert(offsetof(struct qdp_profile_req, pdp_type) == 0x03c, "qdp_profile_req pdp_type");
_Static_assert(offsetof(struct qdp_profile_req, apn_name_valid) == 0x050, "qdp_profile_req apn_name_valid");
_Static_assert(offsetof(struct qdp_profile_req, apn_name) == 0x051, "qdp_profile_req apn_name");
_Static_assert(offsetof(struct qdp_profile_req, username_valid) == 0x190, "qdp_profile_req username_valid");
_Static_assert(offsetof(struct qdp_profile_req, username) == 0x191, "qdp_profile_req username");
_Static_assert(offsetof(struct qdp_profile_req, password_valid) == 0x211, "qdp_profile_req password_valid");
_Static_assert(offsetof(struct qdp_profile_req, password) == 0x212, "qdp_profile_req password");
_Static_assert(offsetof(struct qdp_profile_req, auth_pref_valid) == 0x292, "qdp_profile_req auth_pref_valid");
_Static_assert(offsetof(struct qdp_profile_req, auth_pref) == 0x293, "qdp_profile_req auth_pref");
_Static_assert(offsetof(struct qdp_profile_req, ril_param9_valid) == 0x3dc, "qdp_profile_req ril_param9_valid");
_Static_assert(offsetof(struct qdp_profile_req, ril_param9) == 0x3dd, "qdp_profile_req ril_param9");
_Static_assert(offsetof(struct qdp_profile_req, emergency_calls_valid) == 0x3e8, "qdp_profile_req emergency_calls_valid");
_Static_assert(offsetof(struct qdp_profile_req, emergency_calls) == 0x3e9, "qdp_profile_req emergency_calls");
_Static_assert(offsetof(struct qdp_profile_req, roaming_ip1_valid) == 0x412, "qdp_profile_req roaming_ip1_valid");
_Static_assert(offsetof(struct qdp_profile_req, roaming_ip1) == 0x414, "qdp_profile_req roaming_ip1");
_Static_assert(offsetof(struct qdp_profile_req, roaming_ip2_valid) == 0x418, "qdp_profile_req roaming_ip2_valid");
_Static_assert(offsetof(struct qdp_profile_req, roaming_ip2) == 0x41c, "qdp_profile_req roaming_ip2");
_Static_assert(offsetof(struct qdp_profile_req, epc_password_valid) == 0x6b6, "qdp_profile_req epc_password_valid");
_Static_assert(offsetof(struct qdp_profile_req, epc_password) == 0x6b7, "qdp_profile_req epc_password");
_Static_assert(offsetof(struct qdp_profile_req, epc_username_valid) == 0x737, "qdp_profile_req epc_username_valid");
_Static_assert(offsetof(struct qdp_profile_req, epc_username) == 0x738, "qdp_profile_req epc_username");
_Static_assert(offsetof(struct qdp_profile_req, epc_auth_pref_valid) == 0x7b8, "qdp_profile_req epc_auth_pref_valid");
_Static_assert(offsetof(struct qdp_profile_req, epc_auth_pref) == 0x7bc, "qdp_profile_req epc_auth_pref");
_Static_assert(offsetof(struct qdp_profile_req, persistent_valid) == 0x7fc, "qdp_profile_req persistent_valid");
_Static_assert(offsetof(struct qdp_profile_req, persistent) == 0x7fd, "qdp_profile_req persistent");
_Static_assert(offsetof(struct qdp_profile_req, cdma1_auth_pref_valid) == 0x824, "qdp_profile_req cdma1_auth_pref_valid");
_Static_assert(offsetof(struct qdp_profile_req, cdma1_auth_pref) == 0x828, "qdp_profile_req cdma1_auth_pref");
_Static_assert(offsetof(struct qdp_profile_req, cdma1_username_valid) == 0x82c, "qdp_profile_req cdma1_username_valid");
_Static_assert(offsetof(struct qdp_profile_req, cdma1_username) == 0x82d, "qdp_profile_req cdma1_username");
_Static_assert(offsetof(struct qdp_profile_req, cdma1_password_valid) == 0x8ad, "qdp_profile_req cdma1_password_valid");
_Static_assert(offsetof(struct qdp_profile_req, cdma1_password) == 0x8ae, "qdp_profile_req cdma1_password");
_Static_assert(offsetof(struct qdp_profile_req, cdma_apn_name_valid) == 0x946, "qdp_profile_req cdma_apn_name_valid");
_Static_assert(offsetof(struct qdp_profile_req, cdma_apn_name) == 0x947, "qdp_profile_req cdma_apn_name");
_Static_assert(offsetof(struct qdp_profile_req, cdma_pdn_type_valid) == 0x9de, "qdp_profile_req cdma_pdn_type_valid");
_Static_assert(offsetof(struct qdp_profile_req, cdma_pdn_type) == 0x9e0, "qdp_profile_req cdma_pdn_type");
_Static_assert(offsetof(struct qdp_profile_req, cdma2_auth_pref_valid) == 0xa26, "qdp_profile_req cdma2_auth_pref_valid");
_Static_assert(offsetof(struct qdp_profile_req, cdma2_auth_pref) == 0xa28, "qdp_profile_req cdma2_auth_pref");
_Static_assert(offsetof(struct qdp_profile_req, cdma2_username_valid) == 0xa2c, "qdp_profile_req cdma2_username_valid");
_Static_assert(offsetof(struct qdp_profile_req, cdma2_username) == 0xa2d, "qdp_profile_req cdma2_username");
_Static_assert(offsetof(struct qdp_profile_req, cdma2_password_valid) == 0xaad, "qdp_profile_req cdma2_password_valid");
_Static_assert(offsetof(struct qdp_profile_req, cdma2_password) == 0xaae, "qdp_profile_req cdma2_password");
_Static_assert(offsetof(struct qdp_profile_req, apn_type_mask_valid) == 0xc18, "qdp_profile_req apn_type_mask_valid");
_Static_assert(offsetof(struct qdp_profile_req, apn_type_mask) == 0xc20, "qdp_profile_req apn_type_mask");
_Static_assert(offsetof(struct qdp_profile_modify_req, profile_type) == 0x000, "qdp_profile_modify_req profile_type");
_Static_assert(offsetof(struct qdp_profile_modify_req, profile_index) == 0x004, "qdp_profile_modify_req profile_index");
_Static_assert(offsetof(struct qdp_profile_modify_req, pdp_type_valid) == 0x03c, "qdp_profile_modify_req pdp_type_valid");
_Static_assert(offsetof(struct qdp_profile_modify_req, pdp_type) == 0x040, "qdp_profile_modify_req pdp_type");
_Static_assert(offsetof(struct qdp_profile_modify_req, apn_name_valid) == 0x054, "qdp_profile_modify_req apn_name_valid");
_Static_assert(offsetof(struct qdp_profile_modify_req, apn_name) == 0x055, "qdp_profile_modify_req apn_name");
_Static_assert(offsetof(struct qdp_profile_modify_req, username_valid) == 0x194, "qdp_profile_modify_req username_valid");
_Static_assert(offsetof(struct qdp_profile_modify_req, username) == 0x195, "qdp_profile_modify_req username");
_Static_assert(offsetof(struct qdp_profile_modify_req, password_valid) == 0x215, "qdp_profile_modify_req password_valid");
_Static_assert(offsetof(struct qdp_profile_modify_req, password) == 0x216, "qdp_profile_modify_req password");
_Static_assert(offsetof(struct qdp_profile_modify_req, auth_pref_valid) == 0x296, "qdp_profile_modify_req auth_pref_valid");
_Static_assert(offsetof(struct qdp_profile_modify_req, auth_pref) == 0x297, "qdp_profile_modify_req auth_pref");
_Static_assert(offsetof(struct qdp_profile_modify_req, kept_3d8) == 0x3d8, "qdp_profile_modify_req kept_3d8");
_Static_assert(offsetof(struct qdp_profile_modify_req, kept_3d9) == 0x3d9, "qdp_profile_modify_req kept_3d9");
_Static_assert(offsetof(struct qdp_profile_modify_req, kept_400) == 0x400, "qdp_profile_modify_req kept_400");
_Static_assert(offsetof(struct qdp_profile_modify_req, kept_402) == 0x402, "qdp_profile_modify_req kept_402");
_Static_assert(offsetof(struct qdp_profile_modify_req, kept_404) == 0x404, "qdp_profile_modify_req kept_404");
_Static_assert(offsetof(struct qdp_profile_modify_req, kept_406) == 0x406, "qdp_profile_modify_req kept_406");
_Static_assert(offsetof(struct qdp_profile_modify_req, kept_408) == 0x408, "qdp_profile_modify_req kept_408");
_Static_assert(offsetof(struct qdp_profile_modify_req, kept_40a) == 0x40a, "qdp_profile_modify_req kept_40a");
_Static_assert(offsetof(struct qdp_profile_modify_req, roaming_ip1_valid) == 0x41a, "qdp_profile_modify_req roaming_ip1_valid");
_Static_assert(offsetof(struct qdp_profile_modify_req, roaming_ip1) == 0x41c, "qdp_profile_modify_req roaming_ip1");
_Static_assert(offsetof(struct qdp_profile_modify_req, roaming_ip2_valid) == 0x420, "qdp_profile_modify_req roaming_ip2_valid");
_Static_assert(offsetof(struct qdp_profile_modify_req, roaming_ip2) == 0x424, "qdp_profile_modify_req roaming_ip2");
_Static_assert(offsetof(struct qdp_profile_modify_req, epc_password_valid) == 0x6be, "qdp_profile_modify_req epc_password_valid");
_Static_assert(offsetof(struct qdp_profile_modify_req, epc_password) == 0x6bf, "qdp_profile_modify_req epc_password");
_Static_assert(offsetof(struct qdp_profile_modify_req, epc_username_valid) == 0x73f, "qdp_profile_modify_req epc_username_valid");
_Static_assert(offsetof(struct qdp_profile_modify_req, epc_username) == 0x740, "qdp_profile_modify_req epc_username");
_Static_assert(offsetof(struct qdp_profile_modify_req, epc_auth_pref_valid) == 0x7c0, "qdp_profile_modify_req epc_auth_pref_valid");
_Static_assert(offsetof(struct qdp_profile_modify_req, epc_auth_pref) == 0x7c4, "qdp_profile_modify_req epc_auth_pref");
_Static_assert(offsetof(struct qdp_profile_modify_req, cdma1_auth_pref_valid) == 0x828, "qdp_profile_modify_req cdma1_auth_pref_valid");
_Static_assert(offsetof(struct qdp_profile_modify_req, cdma1_auth_pref) == 0x82c, "qdp_profile_modify_req cdma1_auth_pref");
_Static_assert(offsetof(struct qdp_profile_modify_req, cdma1_username_valid) == 0x830, "qdp_profile_modify_req cdma1_username_valid");
_Static_assert(offsetof(struct qdp_profile_modify_req, cdma1_username) == 0x831, "qdp_profile_modify_req cdma1_username");
_Static_assert(offsetof(struct qdp_profile_modify_req, cdma1_password_valid) == 0x8b1, "qdp_profile_modify_req cdma1_password_valid");
_Static_assert(offsetof(struct qdp_profile_modify_req, cdma1_password) == 0x8b2, "qdp_profile_modify_req cdma1_password");
_Static_assert(offsetof(struct qdp_profile_modify_req, cdma_apn_name_valid) == 0x94a, "qdp_profile_modify_req cdma_apn_name_valid");
_Static_assert(offsetof(struct qdp_profile_modify_req, cdma_apn_name) == 0x94b, "qdp_profile_modify_req cdma_apn_name");
_Static_assert(offsetof(struct qdp_profile_modify_req, cdma_pdn_type_valid) == 0x9e2, "qdp_profile_modify_req cdma_pdn_type_valid");
_Static_assert(offsetof(struct qdp_profile_modify_req, cdma_pdn_type) == 0x9e4, "qdp_profile_modify_req cdma_pdn_type");
_Static_assert(offsetof(struct qdp_profile_modify_req, cdma2_auth_pref_valid) == 0xa2a, "qdp_profile_modify_req cdma2_auth_pref_valid");
_Static_assert(offsetof(struct qdp_profile_modify_req, cdma2_auth_pref) == 0xa2c, "qdp_profile_modify_req cdma2_auth_pref");
_Static_assert(offsetof(struct qdp_profile_modify_req, cdma2_username_valid) == 0xa30, "qdp_profile_modify_req cdma2_username_valid");
_Static_assert(offsetof(struct qdp_profile_modify_req, cdma2_username) == 0xa31, "qdp_profile_modify_req cdma2_username");
_Static_assert(offsetof(struct qdp_profile_modify_req, cdma2_password_valid) == 0xab1, "qdp_profile_modify_req cdma2_password_valid");
_Static_assert(offsetof(struct qdp_profile_modify_req, cdma2_password) == 0xab2, "qdp_profile_modify_req cdma2_password");
_Static_assert(offsetof(struct qdp_profile_modify_req, apn_type_mask_valid) == 0xc1c, "qdp_profile_modify_req apn_type_mask_valid");
_Static_assert(offsetof(struct qdp_profile_modify_req, apn_type_mask) == 0xc20, "qdp_profile_modify_req apn_type_mask");
_Static_assert(sizeof(struct qdp_query_res) == 0xc40, "qdp_query_res size");
_Static_assert(offsetof(struct qdp_query_res, qmi_rc) == 0x000, "qdp_query_res qmi_rc");
_Static_assert(offsetof(struct qdp_query_res, qmi_err) == 0x004, "qdp_query_res qmi_err");
_Static_assert(offsetof(struct qdp_query_res, profile_name_valid) == 0x008, "qdp_query_res profile_name_valid");
_Static_assert(offsetof(struct qdp_query_res, profile_name) == 0x009, "qdp_query_res profile_name");
_Static_assert(offsetof(struct qdp_query_res, pdp_type_valid) == 0x03c, "qdp_query_res pdp_type_valid");
_Static_assert(offsetof(struct qdp_query_res, pdp_type) == 0x040, "qdp_query_res pdp_type");
_Static_assert(offsetof(struct qdp_query_res, apn_name_valid) == 0x054, "qdp_query_res apn_name_valid");
_Static_assert(offsetof(struct qdp_query_res, apn_name) == 0x055, "qdp_query_res apn_name");
_Static_assert(offsetof(struct qdp_query_res, username) == 0x195, "qdp_query_res username");
_Static_assert(offsetof(struct qdp_query_res, password_valid) == 0x215, "qdp_query_res password_valid");
_Static_assert(offsetof(struct qdp_query_res, password) == 0x216, "qdp_query_res password");
_Static_assert(offsetof(struct qdp_query_res, auth_pref) == 0x297, "qdp_query_res auth_pref");
_Static_assert(offsetof(struct qdp_query_res, kept_3d8) == 0x3d8, "qdp_query_res kept_3d8");
_Static_assert(offsetof(struct qdp_query_res, kept_3d9) == 0x3d9, "qdp_query_res kept_3d9");
_Static_assert(offsetof(struct qdp_query_res, emergency_calls_valid) == 0x3f0, "qdp_query_res emergency_calls_valid");
_Static_assert(offsetof(struct qdp_query_res, emergency_calls) == 0x3f1, "qdp_query_res emergency_calls");
_Static_assert(offsetof(struct qdp_query_res, kept_400) == 0x400, "qdp_query_res kept_400");
_Static_assert(offsetof(struct qdp_query_res, kept_402) == 0x402, "qdp_query_res kept_402");
_Static_assert(offsetof(struct qdp_query_res, kept_404) == 0x404, "qdp_query_res kept_404");
_Static_assert(offsetof(struct qdp_query_res, kept_406) == 0x406, "qdp_query_res kept_406");
_Static_assert(offsetof(struct qdp_query_res, kept_408) == 0x408, "qdp_query_res kept_408");
_Static_assert(offsetof(struct qdp_query_res, kept_40a) == 0x40a, "qdp_query_res kept_40a");
_Static_assert(offsetof(struct qdp_query_res, roaming_ip1) == 0x41c, "qdp_query_res roaming_ip1");
_Static_assert(offsetof(struct qdp_query_res, roaming_ip2) == 0x424, "qdp_query_res roaming_ip2");
_Static_assert(offsetof(struct qdp_query_res, cdma_pdn_type_valid) == 0x9e6, "qdp_query_res cdma_pdn_type_valid");
_Static_assert(offsetof(struct qdp_query_res, cdma_pdn_type) == 0x9e8, "qdp_query_res cdma_pdn_type");
_Static_assert(offsetof(struct qdp_query_res, apn_type_mask_valid) == 0xc20, "qdp_query_res apn_type_mask_valid");
_Static_assert(offsetof(struct qdp_query_res, apn_type_mask) == 0xc28, "qdp_query_res apn_type_mask");
_Static_assert(offsetof(struct qdp_query_res, profile_class_valid) == 0x3e0, "qdp_query_res profile_class_valid");
_Static_assert(offsetof(struct qdp_query_res, profile_class) == 0x3e1, "qdp_query_res profile_class");
_Static_assert(offsetof(struct qdp_query_res, epc_class_valid) == 0x800, "qdp_query_res epc_class_valid");
_Static_assert(offsetof(struct qdp_query_res, epc_class) == 0x801, "qdp_query_res epc_class");
_Static_assert(offsetof(struct qdp_query_res, persistent_valid) == 0x804, "qdp_query_res persistent_valid");
_Static_assert(offsetof(struct qdp_query_res, persistent) == 0x805, "qdp_query_res persistent");
_Static_assert(offsetof(struct qdp_query_res, cdma1_username_valid) == 0x834, "qdp_query_res cdma1_username_valid");
_Static_assert(offsetof(struct qdp_query_res, cdma1_username) == 0x835, "qdp_query_res cdma1_username");
_Static_assert(offsetof(struct qdp_query_res, cdma_apn_name_valid) == 0x94e, "qdp_query_res cdma_apn_name_valid");
_Static_assert(offsetof(struct qdp_query_res, cdma_apn_name) == 0x94f, "qdp_query_res cdma_apn_name");
_Static_assert(offsetof(struct qdp_query_res, cdma1_password_valid) == 0x8b5, "qdp_query_res cdma1_password_valid");
_Static_assert(offsetof(struct qdp_query_res, cdma1_password) == 0x8b6, "qdp_query_res cdma1_password");
_Static_assert(offsetof(struct qdp_query_res, gpp2_class_valid) == 0xa2c, "qdp_query_res gpp2_class_valid");
_Static_assert(offsetof(struct qdp_query_res, gpp2_class) == 0xa2d, "qdp_query_res gpp2_class");
_Static_assert(offsetof(struct qdp_query_res, cdma2_username_valid) == 0xa34, "qdp_query_res cdma2_username_valid");
_Static_assert(offsetof(struct qdp_query_res, cdma2_username) == 0xa35, "qdp_query_res cdma2_username");
_Static_assert(sizeof(struct qdp_query_res) == 0xc40, "qdp_query_res size");
_Static_assert(sizeof(struct qdp_list_req) == 0xb8, "qdp_list_req size");
_Static_assert(offsetof(struct qdp_list_req, profile_type) == 0x04, "list profile_type");
_Static_assert(sizeof(struct qdp_list_entry) == 0x38, "qdp_list_entry size");
_Static_assert(offsetof(struct qdp_list_entry, profile_index) == 0x04, "list profile_index");
_Static_assert(sizeof(struct qdp_list_res) == 0x37dc, "qdp_list_res size");
_Static_assert(offsetof(struct qdp_list_res, profile_count) == 0x008, "list profile_count");
_Static_assert(offsetof(struct qdp_list_res, profiles) == 0x00c, "list profiles");
_Static_assert(sizeof(struct qdp_ril_param) == 0x10, "qdp_ril_param size");
_Static_assert(sizeof(struct qdp_query_req) == 8, "qdp_query_req size");
_Static_assert(offsetof(struct qdp_query_req, profile_index) == 0x04, "query profile_index");
_Static_assert(sizeof(struct qdp_create_res) == 0x18, "qdp_create_res size");
_Static_assert(offsetof(struct qdp_create_res, profile_id) == 0x0c, "profile_id");

/* Status words at the start of a QMI response buffer: the call result, then the QMI error. */
struct qdp_qmi_status
{
  int32_t qmi_rc;   /* 0x00 */
  uint32_t qmi_err; /* 0x04 */
};

/* Bind-subscription request payload (4 bytes). */
struct qdp_bind_req
{
  uint32_t subscription; /* 0x00 */
};

_Static_assert(sizeof(struct qdp_qmi_status) == 8, "qdp_qmi_status size");
_Static_assert(offsetof(struct qdp_qmi_status, qmi_err) == 0x004, "qdp_qmi_status qmi_err");
_Static_assert(sizeof(struct qdp_bind_req) == 4, "qdp_bind_req size");

#endif
