/* Ghidra 反編譯重建（libqdp.so, arm64）。自動產生的宣告與型別，行為以 Ghidra 輸出為準。 */
#include <stddef.h>
#include <stdint.h>
typedef uint8_t byte;
typedef unsigned int uint;
typedef unsigned long ulong;
typedef unsigned short ushort;
typedef unsigned char uchar;
typedef uint8_t bool;
typedef void code;
#include "qdp_layout.h"
#include "qdp_log.h"
#include "qdp_types.h"
#define true 1
#define false 0
#define CONCAT71(a, b) ((uint64_t)(a) << 8 | (uint8_t)(b))
#define CONCAT44(a, b) ((uint64_t)(uint32_t)(a) << 32 | (uint32_t)(b))
#define CONCAT31(a, b) ((uint32_t)(a) << 8 | (uint8_t)(b))
typedef uint64_t uint24_t;
typedef uint64_t uint40_t;
typedef uint64_t uint56_t;
typedef uint64_t uint7_t;
#define CONCAT14(a, b) ((uint64_t)(uint32_t)(a) << 32 | (uint32_t)(b))
#define SCARRY4(a, b) 0
#define SBORROW4(a, b) 0
typedef int32_t int3_t;
#define uint7 uint7_t
#define int3 int3_t
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
size_t __strlcpy_chk(char *, const char *, size_t, size_t);
size_t __strlen_chk(const char *, size_t);
void __cxa_finalize(void *);

long qdp_format_log_msg(char *param_1, int param_2, char *param_3, ...);

extern char *PTR_00129608;
extern char *PTR_LOOP_00125000;
extern uint64_t _DAT_0012b008;
extern uint64_t _DAT_0012b018;
extern uint64_t _DAT_0012b028;
extern uint64_t _DAT_0012b038;
extern uint64_t _DAT_0012b048;
extern uint64_t _DAT_0012b058;
extern uint64_t _DAT_0012b068;
extern uint64_t uRam000000000012b010;
extern uint64_t uRam000000000012b020;
extern uint64_t uRam000000000012b030;
extern uint64_t uRam000000000012b040;
extern uint64_t uRam000000000012b050;
extern uint64_t uRam000000000012b060;
extern uint64_t uRam000000000012b070;
static uint64_t stk_ffffffffffffb848;
extern long block();
extern long msg_sprintf();
extern long not();
extern long property_get();
extern long qmi_client_init_instance();
extern long qmi_client_release();
extern long qmi_client_send_msg_sync();
extern long qmi_client_wds_init_instance();
extern long s();
extern long wds_get_service_object_internal_v01();
extern long FUN_001244d0();
static uint64_t _local_47b8;
long __on_dlclose(void);
long __emutls_unregister_key(void);
long int_length(uint param_1);
long int_to_char_arr(uint param_1);
long qdp_cleanup_profile_ids(void);
long qdp_get_ia_type_profile_id(uint *param_1);
long qdp_3gpp_alt_multi_param_search(int param_1, uint param_2, int *param_3, byte *param_4, int *param_5, uint32_t *param_6);
long qdp_get_3gpp_profile_pdn_type(int param_1, char param_2);
long qdp_3gpp2_alt_multi_param_search(int param_1, uint param_2, int *param_3, byte *param_4, int *param_5, uint32_t *param_6);
long qdp_get_3gpp2_profile_pdn_type(uint param_1, char param_2);
long qdp_3gpp2_multi_param_search(long param_1, uint *param_2, int *param_3, uint8_t *param_4, uint32_t *param_5);
long qdp_epc_multi_param_search(long param_1, uint *param_2, int *param_3, int *param_4, uint8_t *param_5, uint32_t *param_6);
long qdp_epc_alt_multi_param_search(int param_1, char param_2, uint *param_3, int *param_4, int *param_5, uint32_t *param_6);
long qdp_profile_update_ex(uint64_t param_1, uint32_t *param_2);
long qdp_modify_profile(char *param_1, uint32_t *param_2);
long qdp_3gpp_profile_update_params(void);
long qdp_3gpp_profile_fill_common_params(struct qdp_ril_param *param_1, uint32_t param_2, uint32_t *param_3, uint param_4, uint8_t *param_5);
long qdp_epc_profile_update_params(long param_1, uint32_t param_2, long param_3);
long qdp_epc_profile_fill_common_params(struct qdp_ril_param *param_1, uint32_t param_2, uint32_t *param_3, int param_4);
long qdp_3gpp2_profile_update_params(long param_1, uint32_t param_2, long param_3);
long qdp_3gpp2_profile_fill_common_params(struct qdp_ril_param *param_1, uint32_t param_2, uint32_t *param_3);
long qdp_3gpp2_profile_create(struct qdp_ril_param *param_1, uint *param_2, uint32_t *param_3, int param_4, int param_5);
long qdp_epc_profile_create(struct qdp_ril_param *param_1, uint *param_2, int *param_3, int *param_4, int param_5, uint param_6);
long qdp_profile_ref_up(uint param_1);
long is_qdp_profile(uint32_t param_1);
long qdp_profile_release(uint param_1);
long qdp_delete_profile_id(uint param_1);
long qdp_profile_release_ex(uint32_t param_1);
long qdp_lte_attach_profile_lookup(long param_1, int *param_2, long param_3, long param_4, uint8_t *param_5, int *param_6);
long qdp_3gpp_multi_param_search(struct qdp_ril_param *param_1, uint *param_2, int *param_3, uint8_t *param_4, uint32_t *param_5, int param_6, uint8_t *param_7);
long qdp_epc_profile_update(long param_1, uint32_t param_2, uint32_t *param_3, uint32_t param_4);
long qdp_3gpp_profile_update(long param_1, uint32_t param_2, uint32_t *param_3, uint32_t param_4);
long qdp_3gpp_profile_create(struct qdp_ril_param *param_1, uint *param_2, int *param_3, int param_4, int param_5);
long qdp_insert_profile_id(long param_1, int param_2, uint32_t param_3);
long qdp_match_lte_attach_profile_params(uint32_t param_1, long param_2);
long qdp_profile_read_ril_params(char **param_1, int *param_2, long param_3, char *param_4, int *param_5, long param_6, char *param_7, uint8_t *param_8);
long hasMatchingApn(long param_1, long param_2);
long saveProfileParams(int *param_1, long param_2, uint *param_3, long param_4, uint32_t *param_5, uint32_t *param_6);
long getBestEmergencyProfile(long param_1, char *param_2, uint *param_3, long param_4, uint32_t *param_5, uint32_t *param_6);
long emergencyProfileLookup(long param_1, long param_2, long param_3, long param_4);
long emergencyProfileLookup2(long param_1, long param_2, long param_3, long param_4, long param_5);
long qdp_profile_look_up(long param_1, int *param_2, uint32_t *param_3, int *param_4, uint32_t *param_5, int *param_6);
long qdp_profile_needs_update(long param_1, char *param_2);
long qdp_3gpp2_profile_update(long param_1, uint32_t param_2, uint32_t *param_3);
long qdp_profile_look_up_by_param(long param_1, uint32_t param_2, uint param_3, int *param_4, byte *param_5, uint32_t *param_6, int *param_7, uint8_t *param_8, uint32_t *param_9, uint32_t *param_10, uint64_t *param_11);
long qdp_init(uint64_t param_1);
long qdp_init2(uint64_t param_1, uint64_t param_2);
long qdp_init3(uint64_t param_1, uint8_t param_2, uint8_t param_3);
long qdp_set_subscription(uint32_t param_1);
long qdp_deinit(void);
long qdp_compare_and_update(char *param_1, char *param_2);
long qdp_profiles_for_apntype(long param_1);
long qdp_allow_ip_update(void);
long get_carrier_config_enabled(void);
long qdp_pdn_type_from_string(char *param_1);
long qdp_signal_handler(int param_1);
long qdp_platform_init(void);
long qdp_qmi_wds_init_client(long param_1, long *param_2);
long qdp_qmi_wds_release_client(long param_1);
long qdp_qmi_wds_bind_subscription(long param_1, long param_2);
long qdp_qmi_wds_delete_profile(long param_1, long param_2);
long qdp_qmi_wds_get_profile_list(long param_1, long param_2, int *param_3);
long qdp_qmi_wds_query_profile(long param_1, long param_2, int *param_3);
long qdp_qmi_wds_modify_profile(long param_1, long param_2, int *param_3);
long qdp_qmi_wds_create_profile(long param_1, long param_2, int *param_3);
long qdp_qmi_wds_client_init(long *param_1);
long FUN_001244d0(void);
long qdp_3gpp_profile_update_params_v2();

long __on_dlclose(void)

{
  __cxa_finalize(&PTR_LOOP_00125000);
  return 0;
}

long __emutls_unregister_key(void)

{
  return 0;
}

long int_length(uint param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;

  if ((int)param_1 < 1)
  {
    return 0;
  }
  iVar3 = 0;
  do
  {
    iVar2 = iVar3 + 1;
    if (SCARRY4(iVar3, 1))
    {
      /* WARNING: Subroutine does not return */
      abort();
    }
    iVar3 = iVar3 + 1;
    bVar1 = 9 < param_1;
    param_1 = param_1 / 10;
  } while (bVar1);
  return iVar2;
}

long int_to_char_arr(uint param_1)

{
  bool bVar1;
  int iVar2;
  void *pvVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  int iVar7;

  if ((int)param_1 < 1)
  {
    iVar7 = 0;
    iVar4 = 1;
  }
  else
  {
    uVar6 = (ulong)param_1;
    iVar2 = 0;
    do
    {
      iVar4 = iVar2;
      iVar7 = iVar4 + 1;
      if (SCARRY4(iVar4, 1))
        goto LAB_00107130;
      uVar5 = (uint)uVar6;
      uVar6 = uVar6 / 10;
      iVar2 = iVar4 + 1;
    } while (9 < uVar5);
    iVar4 = iVar4 + 2;
    if (SCARRY4(iVar7, 1))
    {
    LAB_00107130:
      /* WARNING: Subroutine does not return */
      abort();
    }
  }
  pvVar3 = calloc((long)iVar4, 1);
  if (pvVar3 != (void *)0x0)
  {
    if (0 < (int)param_1)
    {
      iVar4 = 0;
      do
      {
        if (SBORROW4(iVar7 + -1, iVar4))
          goto LAB_00107130;
        *(byte *)((long)pvVar3 + (long)((iVar7 + -1) - iVar4)) =
            (char)param_1 + (char)(param_1 / 10) * -10 | 0x30;
        if (SCARRY4(iVar4, 1))
          goto LAB_00107130;
        iVar4 = iVar4 + 1;
        bVar1 = 9 < param_1;
        param_1 = param_1 / 10;
      } while (bVar1);
    }
    *(uint8_t *)((long)pvVar3 + (long)iVar7) = 0;
  }
  return (long)pvVar3;
}

/* WARNING: Type propagation algorithm not settling */

long qdp_cleanup_profile_ids(void)

{
  uint8_t *puVar2;
  int iVar3;
  long lVar4;
  uint8_t frame_store[1184] __attribute__((aligned(16)));
  uint8_t *const frame = frame_store + 1184;

  puVar2 = PTR_global_qmi_wds_hndl_001295b0;
  memset(frame_store, 0, sizeof frame_store);
  lVar4 = 0;
  do
  {
    if (((char *)DAT_0012a9a4)[lVar4] == '\x01')
    {
      ((ulong *)(frame - 0x278))[0] = (ulong) * (uint32_t *)((long)DAT_0012a9a8 + lVar4) | ((ulong) * (uint8_t *)((long)DAT_0012a9a8 + lVar4 + 4) << 32);
      iVar3 = qdp_qmi_wds_delete_profile(*(uint64_t *)puVar2, (long)(((ulong *)(frame - 0x278))));
      if (iVar3 == 1)
      {
        *(uint64_t *)((long)DAT_0012a9d8 + lVar4) = 0;
        *(uint64_t *)((long)DAT_0012a9d0 + lVar4) = 0;
        *(uint64_t *)(DAT_0012a9c8 + lVar4) = 0;
        *(uint64_t *)((long)DAT_0012a9c0 + lVar4) = 0;
        *(uint64_t *)(DAT_0012a9b8 + lVar4) = 0;
        *(uint64_t *)((long)DAT_0012a9b0 + lVar4) = 0;
        *(uint64_t *)((long)DAT_0012a9a8 + lVar4) = 0;
        *(uint32_t *)((long)DAT_0012a9e0 + lVar4) = 0;
        ((char *)DAT_0012a9a4)[lVar4] = 0;
      }
      else
      {
        QDP_LOG(frame - 0x270, DAT_00125008, "could not delete profile [%d]", ((char *)DAT_0012a9ac)[lVar4]);
      }
    }
    lVar4 = lVar4 + 0x44;
  } while (lVar4 != 0x660);
  return 0;
}

long qdp_get_ia_type_profile_id(uint *param_1)

{
  uint8_t *puVar2;
  uint8_t *puVar3;
  bool bVar4;
  int iVar5;
  uint8_t *puVar6;
  ulong uVar7;
  uint8_t frame_store[28928] __attribute__((aligned(16)));
  uint8_t *const frame = frame_store + 28928;

  memset(frame_store, 0, sizeof frame_store);
  memset(frame - 0x3910, 0, 0x37dc);
  memset(frame - 0x130, 0, 0xb8);
  if (*PTR_qdp_inited_001295b8 == '\0')
  {
    QDP_LOG(frame - 0x4550, DAT_00125020, DAT_001026d4, "qdp not inited");
    bVar4 = false;
  }
  else
  {
    QDP_LOG(frame - 0x4550, DAT_00125038, DAT_001026d4, "qdp_get_ia_type_profile_id ENTRY");
    memset(frame - 0x3910, 0, 0x37dc);
    memset(frame - 0x130, 0, 0xb8);
    puVar3 = PTR_qdp_modem_supports_epc_profile_001295c0;
    puVar2 = PTR_global_qmi_wds_hndl_001295b0;
    *(uint64_t *)(frame - 0x130) = CONCAT71((*(uint56_t *)((char *)(frame - 0x130) + 1)), 1);
    (((struct qdp_list_req *)(frame - 0x130))->profile_type) = (uint)(*PTR_qdp_modem_supports_epc_profile_001295c0 != '\0') << 1;
    iVar5 = qdp_qmi_wds_get_profile_list(*(uint64_t *)PTR_global_qmi_wds_hndl_001295b0, (long)((frame - 0x130)), (frame - 0x3910));
    if (iVar5 == 1)
    {
      QDP_LOG(frame - 0x4550, DAT_00125068, "get_profile_list for profile_tech [%d] returned [%d] profile ids", (((struct qdp_list_req *)(frame - 0x130))->profile_type), (((struct qdp_list_res *)(frame - 0x3910))->profile_count));
      if ((((struct qdp_list_res *)(frame - 0x3910))->profile_count) != 0)
      {
        uVar7 = 0;
        puVar6 = ((uint8_t *)&((struct qdp_list_res *)(frame - 0x3910))->profiles[0].profile_index);
        do
        {
          memset(frame - 0x4758, 0, 0x8);
          memset(frame - 0x4550, 0, 0xc40);
          (*(uint40_t *)((char *)(frame - 0x4758) + 0)) = CONCAT14(*puVar6, (uint)(*puVar3 != '\0') << 1);
          iVar5 = qdp_qmi_wds_query_profile(*(uint64_t *)puVar2, (long)((frame - 0x4758)), (frame - 0x4550));
          if (iVar5 != 1)
          {
            QDP_LOG(frame - 0x4750, DAT_00125080, "query_profile failed with error [%d] qmi_err_code [%d]", *(uint64_t *)(frame - 0x4550) & 0xffffffff, (((struct qdp_qmi_status *)(frame - 0x4550))->qmi_err));
            goto LAB_0010776c;
          }
          QDP_LOG(frame - 0x4750, DAT_00125098, "successfully queried profile [%d]", (((struct qdp_query_req *)(frame - 0x4758))->profile_index));
          if (((char)*(uint64_t *)(frame - 0x4548) != '\0') &&
              (iVar5 = strncasecmp((char *)((long)(frame - 0x4548) + 1), "qdp_profile_ia", 0xf), iVar5 == 0))
          {
            *param_1 = (uint)(((struct qdp_query_req *)(frame - 0x4758))->profile_index);
            QDP_LOG(frame - 0x4750, DAT_001250b0, "[%d] profile id is a qdp profile IA type profile");
            break;
          }
          uVar7 = uVar7 + 1;
          puVar6 = puVar6 + 0x38;
        } while (uVar7 < (((struct qdp_list_res *)(frame - 0x3910))->profile_count));
      }
      QDP_LOG(frame - 0x4550, DAT_001250e0, DAT_001026d4, "qdp_get_ia_type_profile_id EXIT success");
    }
    else
    {
      QDP_LOG(frame - 0x4550, DAT_00125050, "get_profile_list failed with error [%d] qmi_err_code [%d]", (*(uint32_t *)((frame - 0x3910))), (((struct qdp_qmi_status *)(frame - 0x3910))->qmi_err));
    LAB_0010776c:
      QDP_LOG(frame - 0x4550, DAT_001250c8, DAT_001026d4, "qdp_get_ia_type_profile_id EXIT failed");
    }
    bVar4 = *param_1 != 0xffffffff;
  }
  return bVar4;
}

long qdp_3gpp_alt_multi_param_search(int param_1, uint param_2, int *param_3, byte *param_4, int *param_5, uint32_t *param_6)

{
  int iVar2;
  uint8_t *puVar3;
  uint64_t uVar4 = 0;
  uint64_t *puVar5;
  ulong uVar6;
  uint8_t *puVar7;
  uint8_t frame_store[28928] __attribute__((aligned(16)));
  uint8_t *const frame = frame_store + 28928;

  memset(frame_store, 0, sizeof frame_store);
  memset(frame - 0x3910, 0, 0x37dc);
  memset(frame - 0x130, 0, 0xb8);
  if (*PTR_qdp_inited_001295b8 == '\0')
  {
    QDP_LOG_FMT(frame - 0x4550, DAT_001026d4, "qdp not inited");
    puVar3 = DAT_001250f8;
  }
  else
  {
    QDP_LOG(frame - 0x4550, DAT_00125110, DAT_001026d4, "qdp_3gpp_alt_multi_param_search ENTRY");
    QDP_LOG(frame - 0x4550, DAT_00125128, DAT_001026d4, "qdp_3gpp_alt_multi_param_search [%d] param_to_match and [%d] param_value", param_1, param_2);
    if ((((param_6 == (uint32_t *)0x0) || (param_4 == (byte *)0x0)) || (param_3 == (int *)0x0)) ||
        (param_5 == (int *)0x0))
    {
      QDP_LOG_FMT(frame - 0x4550, DAT_001026d4, "invalid params");
      puVar3 = DAT_00125140;
    }
    else if (*param_3 == -1)
    {
      if (*param_5 == -1)
      {
        *param_4 = 0;
        memset(frame - 0x3910, 0, 0x37dc);
        memset(frame - 0x130, 0, 0xb8);
        uVar6 = (ulong) * (uint64_t *)(frame - 0x130) >> 8;
        *(uint64_t *)(frame - 0x130) = CONCAT71((uint7)uVar6 & 0xffffff, 1);
        iVar2 = qdp_qmi_wds_get_profile_list(*(uint64_t *)PTR_global_qmi_wds_hndl_001295b0, (long)((frame - 0x130)), (frame - 0x3910));
        if (iVar2 == 1)
        {
          QDP_LOG(frame - 0x4550, DAT_001251a0, "get_profile_list for profile_tech [%d] returned [%d] profile ids", (((struct qdp_list_req *)(frame - 0x130))->profile_type), (((struct qdp_list_res *)(frame - 0x3910))->profile_count));
          if ((((struct qdp_list_res *)(frame - 0x3910))->profile_count) != 0)
          {
            uVar6 = 0;
            puVar7 = ((uint8_t *)&((struct qdp_list_res *)(frame - 0x3910))->profiles[0].profile_index);
            do
            {
              memset(frame - 0x4758, 0, 0x8);
              memset(frame - 0x4550, 0, 0xc40);
              (*(uint40_t *)((char *)(frame - 0x4758) + 0)) = CONCAT14(*puVar7, (uint32_t)*(uint64_t *)(frame - 0x4758));
              iVar2 = qdp_qmi_wds_query_profile(*(uint64_t *)PTR_global_qmi_wds_hndl_001295b0, (long)((frame - 0x4758)),
                                                (frame - 0x4550));
              if (iVar2 != 1)
              {
                QDP_LOG_FMT(frame - 0x4750, "query_profile failed with error [%d] qmi_err_code [%d]", *(uint64_t *)(frame - 0x4550) & 0xffffffff, (((struct qdp_qmi_status *)(frame - 0x4550))->qmi_err));
                puVar3 = DAT_001251b8;
                puVar5 = (frame - 0x4750);
                goto LAB_00107b78;
              }
              QDP_LOG(frame - 0x4750, DAT_001251d0, "successfully queried 3GPP profile [%d]", (((struct qdp_query_req *)(frame - 0x4758))->profile_index));
              QDP_LOG(frame - 0x4750, DAT_001251e8, "Profile CLASS of [%d] profile is [%d/%d]", (((struct qdp_query_req *)(frame - 0x4758))->profile_index), (((struct qdp_query_res *)(frame - 0x4550))->profile_class_valid), (((struct qdp_query_res *)(frame - 0x4550))->profile_class));
              if (((param_1 == 8) && ((((struct qdp_query_res *)(frame - 0x4550))->profile_class_valid) != '\0')) &&
                  (((((struct qdp_query_res *)(frame - 0x4550))->profile_class) == param_2 && ((ulong)*param_4 < 0x18))))
              {
                param_3[*param_4] = (uint)(((struct qdp_query_req *)(frame - 0x4758))->profile_index);
                iVar2 = qdp_get_3gpp_profile_pdn_type((*(ulong *)((frame - 0x4510))) & 0xffffffff, (((struct qdp_query_res *)(frame - 0x4550))->pdp_type_valid));
                *param_5 = iVar2;
                QDP_LOG(frame - 0x4750, DAT_00125200, "APN CLASS Matched with %d Profile, saved at index %d", (((struct qdp_query_req *)(frame - 0x4758))->profile_index), *param_4);
                *param_4 = *param_4 + 1;
              }
              uVar6 = uVar6 + 1;
              puVar7 = puVar7 + 0x38;
            } while (uVar6 < (((struct qdp_list_res *)(frame - 0x3910))->profile_count));
          }
          QDP_LOG(frame - 0x4550, DAT_00125230, DAT_001026d4, "qdp_3gpp_alt_multi_param_search EXIT success");
          uVar4 = 1;
          *param_6 = 0;
          goto LAB_00107bf0;
        }
        QDP_LOG_FMT(frame - 0x4550, "get_profile_list failed with error [%d] qmi_err_code [%d]", (*(uint32_t *)((frame - 0x3910))), (((struct qdp_qmi_status *)(frame - 0x3910))->qmi_err));
        puVar3 = DAT_00125188;
      }
      else
      {
        QDP_LOG_FMT(frame - 0x4550, "output placeholder [%d] is not [%d]", *param_5, 0xffffffff);
        puVar3 = DAT_00125170;
      }
    }
    else
    {
      QDP_LOG_FMT(frame - 0x4550, "output placeholder [%d] is not [%d]", *param_3, 0xffffffff);
      puVar3 = DAT_00125158;
    }
    puVar5 = (frame - 0x4550);
  LAB_00107b78:
    msg_sprintf(puVar3, puVar5);
    QDP_LOG_FMT(frame - 0x4550, DAT_001026d4, "qdp_3gpp_alt_multi_param_search EXIT failed");
    puVar3 = DAT_00125218;
  }
  msg_sprintf(puVar3, (frame - 0x4550));
  uVar4 = 0;
LAB_00107bf0:
  return (long)uVar4;
}

long qdp_get_3gpp_profile_pdn_type(int param_1, char param_2)

{
  uint32_t uVar2;
  uint8_t frame_store[1104] __attribute__((aligned(16)));
  uint8_t *const frame = frame_store + 1104;

  memset(frame_store, 0, sizeof frame_store);
  QDP_LOG(frame - 0x240, DAT_00127120, DAT_001026d4, "qdp_get_3gpp_profile_pdn_type ENTRY");
  if (param_2 != '\0')
  {
    uVar2 = 0;
    if (param_1 == 0)
    {
      uVar2 = 0;
      goto LAB_00108210;
    }
    if (param_1 == 3)
    {
      uVar2 = 2;
      goto LAB_00108210;
    }
    if (param_1 == 2)
    {
      uVar2 = 1;
      goto LAB_00108210;
    }
    QDP_LOG(frame - 0x240, DAT_00127138, "unknown umts pdp_type=%d\n", param_1);
  }
  uVar2 = 0xffffffff;
LAB_00108210:
  QDP_LOG(frame - 0x240, DAT_00127150, DAT_001026d4, "qdp_get_3gpp_profile_pdn_type EXIT success");
  return uVar2;
}

long qdp_3gpp2_alt_multi_param_search(int param_1, uint param_2, int *param_3, byte *param_4, int *param_5, uint32_t *param_6)

{
  int iVar2;
  uint8_t *puVar3;
  uint64_t uVar4 = 0;
  uint64_t *puVar5;
  ulong uVar6;
  uint8_t *puVar7;
  uint8_t frame_store[28928] __attribute__((aligned(16)));
  uint8_t *const frame = frame_store + 28928;

  memset(frame_store, 0, sizeof frame_store);
  memset(frame - 0x3910, 0, 0x37dc);
  memset(frame - 0x130, 0, 0xb8);
  if (*PTR_qdp_inited_001295b8 == '\0')
  {
    QDP_LOG_FMT(frame - 0x4550, DAT_001026d4, "qdp not inited");
    puVar3 = DAT_00125248;
  }
  else
  {
    QDP_LOG(frame - 0x4550, DAT_00125260, DAT_001026d4, "qdp_3gpp2_alt_multi_param_search ENTRY");
    QDP_LOG(frame - 0x4550, DAT_00125278, DAT_001026d4, "qdp_3gpp2_alt_multi_param_search [%d] param_to_match and [%d] param_value", param_1, param_2);
    if ((((param_6 == (uint32_t *)0x0) || (param_4 == (byte *)0x0)) || (param_3 == (int *)0x0)) ||
        (param_5 == (int *)0x0))
    {
      QDP_LOG_FMT(frame - 0x4550, DAT_001026d4, "invalid params");
      puVar3 = DAT_00125290;
    }
    else if (*param_3 == -1)
    {
      if (*param_5 == -1)
      {
        *param_4 = 0;
        memset(frame - 0x3910, 0, 0x37dc);
        memset(frame - 0x130, 0, 0xb8);
        *(uint64_t *)(frame - 0x130) = CONCAT71((*(uint56_t *)((char *)(frame - 0x130) + 1)), 1);
        (((struct qdp_list_req *)(frame - 0x130))->profile_type) = 1;
        iVar2 = qdp_qmi_wds_get_profile_list(*(uint64_t *)PTR_global_qmi_wds_hndl_001295b0, (long)((frame - 0x130)), (frame - 0x3910));
        if (iVar2 == 1)
        {
          QDP_LOG(frame - 0x4550, DAT_001252f0, "get_profile_list for profile_tech [%d] returned [%d] profile ids", (((struct qdp_list_req *)(frame - 0x130))->profile_type), (((struct qdp_list_res *)(frame - 0x3910))->profile_count));
          if ((((struct qdp_list_res *)(frame - 0x3910))->profile_count) != 0)
          {
            uVar6 = 0;
            puVar7 = ((uint8_t *)&((struct qdp_list_res *)(frame - 0x3910))->profiles[0].profile_index);
            do
            {
              *(uint64_t *)(frame - 0x4758) = 1;
              memset(frame - 0x4550, 0, 0xc40);
              (*(uint40_t *)((char *)(frame - 0x4758) + 0)) = CONCAT14(*puVar7, (uint32_t)*(uint64_t *)(frame - 0x4758));
              iVar2 = qdp_qmi_wds_query_profile(*(uint64_t *)PTR_global_qmi_wds_hndl_001295b0, (long)((frame - 0x4758)),
                                                (frame - 0x4550));
              if (iVar2 != 1)
              {
                QDP_LOG_FMT(frame - 0x4750, "query_profile failed with error [%d] qmi_err_code [%d]", *(uint64_t *)(frame - 0x4550) & 0xffffffff, (((struct qdp_qmi_status *)(frame - 0x4550))->qmi_err));
                puVar3 = DAT_00125308;
                puVar5 = (frame - 0x4750);
                goto LAB_00108590;
              }
              QDP_LOG(frame - 0x4750, DAT_00125320, "successfully queried 3GPP2 profile [%d]", (((struct qdp_query_req *)(frame - 0x4758))->profile_index));
              QDP_LOG(frame - 0x4750, DAT_00125338, "Profile CLASS of [%d] profile is [%d/%d]", (((struct qdp_query_req *)(frame - 0x4758))->profile_index), (*(char *)((frame - 0x3b24))), (*(byte *)((frame - 0x3b23))));
              if (((param_1 == 8) && ((*(char *)((frame - 0x3b24))) != '\0')) &&
                  (((*(byte *)((frame - 0x3b23))) == param_2 && ((ulong)*param_4 < 0x18))))
              {
                param_3[*param_4] = (uint)(((struct qdp_query_req *)(frame - 0x4758))->profile_index);
                iVar2 = qdp_get_3gpp2_profile_pdn_type((((struct qdp_query_res *)(frame - 0x4550))->cdma_pdn_type), (((struct qdp_query_res *)(frame - 0x4550))->cdma_pdn_type_valid));
                *param_5 = iVar2;
                QDP_LOG(frame - 0x4750, DAT_00125350, "APN CLASS Matched with %d Profile, saved at index %d", (((struct qdp_query_req *)(frame - 0x4758))->profile_index), *param_4);
                *param_4 = *param_4 + 1;
              }
              uVar6 = uVar6 + 1;
              puVar7 = puVar7 + 0x38;
            } while (uVar6 < (((struct qdp_list_res *)(frame - 0x3910))->profile_count));
          }
          QDP_LOG(frame - 0x4550, DAT_00125380, DAT_001026d4, "qdp_3gpp2_alt_multi_param_search EXIT success");
          uVar4 = 1;
          *param_6 = 0;
          goto LAB_00108608;
        }
        QDP_LOG_FMT(frame - 0x4550, "get_profile_list failed with error [%d] qmi_err_code [%d]", (*(uint32_t *)((frame - 0x3910))), (((struct qdp_qmi_status *)(frame - 0x3910))->qmi_err));
        puVar3 = DAT_001252d8;
      }
      else
      {
        QDP_LOG_FMT(frame - 0x4550, "output placeholder [%d] is not [%d]", *param_5, 0xffffffff);
        puVar3 = DAT_001252c0;
      }
    }
    else
    {
      QDP_LOG_FMT(frame - 0x4550, "output placeholder [%d] is not [%d]", *param_3, 0xffffffff);
      puVar3 = DAT_001252a8;
    }
    puVar5 = (frame - 0x4550);
  LAB_00108590:
    msg_sprintf(puVar3, puVar5);
    QDP_LOG_FMT(frame - 0x4550, DAT_001026d4, "qdp_3gpp2_alt_multi_param_search EXIT failed");
    puVar3 = DAT_00125368;
  }
  msg_sprintf(puVar3, (frame - 0x4550));
  uVar4 = 0;
LAB_00108608:
  return (long)uVar4;
}

long qdp_get_3gpp2_profile_pdn_type(uint param_1, char param_2)

{
  uint8_t frame_store[1104] __attribute__((aligned(16)));
  uint8_t *const frame = frame_store + 1104;

  memset(frame_store, 0, sizeof frame_store);
  QDP_LOG(frame - 0x240, DAT_00127168, DAT_001026d4, "qdp_get_3gpp2_profile_pdn_type ENTRY");
  if (param_2 != '\0')
  {
    if (param_1 < 3)
      goto LAB_00108c10;
    QDP_LOG(frame - 0x240, DAT_00127180, "unknown cdma pdp_type=%d\n", param_1);
  }
  param_1 = 0xffffffff;
LAB_00108c10:
  QDP_LOG(frame - 0x240, DAT_00127198, DAT_001026d4, "qdp_get_3gpp2_profile_pdn_type EXIT success");
  return param_1;
}

long qdp_3gpp2_multi_param_search(long param_1, uint *param_2, int *param_3, uint8_t *param_4, uint32_t *param_5)

{
  char cVar2;
  int iVar3;
  uint8_t *puVar4;
  uint64_t uVar5 = 0;
  size_t sVar6;
  uint64_t *puVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  ulong uVar11;
  char *pcVar12;
  uint8_t frame_store[29456] __attribute__((aligned(16)));
  uint8_t *const frame = frame_store + 29456;

  memset(frame_store, 0, sizeof frame_store);
  memset(frame - 0x3b20, 0, 0x37dc);
  memset(frame - 0x340, 0, 0xb8);
  if (*PTR_qdp_inited_001295b8 == '\0')
  {
    QDP_LOG_FMT(frame - 0x4760, DAT_001026d4, "qdp not inited");
    puVar4 = DAT_00125398;
  }
  else
  {
    QDP_LOG(frame - 0x4760, DAT_001253b0, DAT_001026d4, "qdp_3gpp2_multi_param_search ENTRY");
    if ((((param_1 == 0) || (param_2 == (uint *)0x0)) || (param_3 == (int *)0x0)) ||
        (param_5 == (uint32_t *)0x0))
    {
      QDP_LOG_FMT(frame - 0x4760, DAT_001026d4, "invalid params");
      puVar4 = DAT_001253c8;
    }
    else if (*param_2 == 0xffffffff)
    {
      if (*param_3 == -1)
      {
        if (param_4 != (uint8_t *)0x0)
        {
          *param_4 = 0;
        }
        memset(frame - 0x3b20, 0, 0x37dc);
        memset(frame - 0x340, 0, 0xb8);
        puVar7 = (uint64_t *)PTR_global_qmi_wds_hndl_001295b0;
        *(uint64_t *)(frame - 0x340) = CONCAT71((*(uint56_t *)((char *)(frame - 0x340) + 1)), 1);
        (((struct qdp_list_req *)(frame - 0x340))->profile_type) = 1;
        iVar3 = qdp_qmi_wds_get_profile_list(*(uint64_t *)PTR_global_qmi_wds_hndl_001295b0, (long)((frame - 0x340)), (frame - 0x3b20));
        if (iVar3 == 1)
        {
          QDP_LOG(frame - 0x4760, DAT_00125428, "get_profile_list for profile_tech [%d] returned [%d] profile ids", (((struct qdp_list_req *)(frame - 0x340))->profile_type), (((struct qdp_list_res *)(frame - 0x3b20))->profile_count));
          if ((((struct qdp_list_res *)(frame - 0x3b20))->profile_count) != 0)
          {
            uVar9 = 0;
          LAB_00109164:
            *(uint64_t *)(frame - 0x4768) = 1;
            memset(frame - 0x4760, 0, 0xc40);
            (*(uint40_t *)((char *)(frame - 0x4768) + 0)) = CONCAT14(((uint8_t *)&((struct qdp_list_res *)(frame - 0x3b20))->profiles[0].profile_index)[uVar9 * 0x38], (uint32_t)*(uint64_t *)(frame - 0x4768));
            iVar3 = qdp_qmi_wds_query_profile(*puVar7, (long)((frame - 0x4768)), (frame - 0x4760));
            if (iVar3 != 1)
            {
              QDP_LOG_FMT(frame - 0x280, "query_profile failed with error [%d] qmi_err_code [%d]", *(uint64_t *)(frame - 0x4760) & 0xffffffff, (((struct qdp_qmi_status *)(frame - 0x4760))->qmi_err));
              puVar4 = UNK_00125440;
            LAB_0010a538:
              puVar7 = (frame - 0x280);
              goto LAB_00108f14;
            }
            QDP_LOG(frame - 0x280, DAT_00125458, "successfully queried 3GPP2 profile [%d]", (((struct qdp_query_req *)(frame - 0x4768))->profile_index));
            cVar2 = (((struct qdp_query_req *)(frame - 0x4768))->profile_index);
            QDP_LOG(frame - 0x280, DAT_001271b0, DAT_001026d4, "qdp_match_3gpp2_profile_params ENTRY");
            uVar11 = 0;
            piVar10 = (int *)(param_1 + 8);
            do
            {
              if ((*piVar10 < 1) && ((uVar11 != 2 || (*piVar10 != 0))))
                goto LAB_00109324;
              pcVar12 = *(char **)(piVar10 + -2);
              if (pcVar12 == (char *)0x0)
              {
                QDP_LOG(frame - 0x280, DAT_001271c8, DAT_001026d4, "programming error: NULL buffer foundwhere length is non zero");
                QDP_LOG(frame - 0x280, DAT_00127450, DAT_001026d4, "qdp_match_3gpp2_profile_params EXIT failed");
                QDP_LOG_FMT(frame - 0x280, DAT_001026d4, "programming error");
                puVar4 = DAT_00125470;
                goto LAB_0010a538;
              }
              switch ((int)uVar11)
              {
              case 2:
                if ((((struct qdp_query_res *)(frame - 0x4760))->cdma_apn_name_valid) == '\0')
                {
                  QDP_LOG_FMT(frame - 0x280, DAT_001026d4, "modem profile parameter APN is invalid");
                  puVar4 = DAT_001271e0;
                }
                else
                {
                  sVar6 = __strlen_chk(((char *)&((struct qdp_query_res *)(frame - 0x4760))->cdma_apn_name), 0x2f1);
                  if (sVar6 == (long)*piVar10)
                  {
                    pcVar12 = *(char **)(piVar10 + -2);
                    iVar3 = strncasecmp(pcVar12, ((char *)&((struct qdp_query_res *)(frame - 0x4760))->cdma_apn_name), sVar6);
                    if (iVar3 == 0)
                    {
                      QDP_LOG(frame - 0x280, DAT_001271f8, "APN [%s] matched", pcVar12);
                      goto LAB_00109324;
                    }
                    QDP_LOG(frame - 0x280, DAT_00127210, "APN [%s] did not match", pcVar12);
                    QDP_LOG_FMT(frame - 0x280, "Modem contains [%s]", ((char *)&((struct qdp_query_res *)(frame - 0x4760))->cdma_apn_name));
                    puVar4 = DAT_00127228;
                  }
                  else
                  {
                    QDP_LOG(frame - 0x280, DAT_00127240, DAT_001026d4, "APN: Lengths did not match");
                    QDP_LOG_FMT(frame - 0x280, "Modem APN len [%d], Input APN len [%d]", sVar6, *piVar10);
                    puVar4 = DAT_00127258;
                  }
                }
                goto LAB_00109e64;
              case 3:
                if ((((struct qdp_query_res *)(frame - 0x4760))->cdma1_username_valid) == '\0')
                {
                  QDP_LOG_FMT(frame - 0x280, DAT_001026d4, "modem profile parameter NAI is NULL");
                  puVar4 = DAT_00127270;
                LAB_00109e64:
                  msg_sprintf(puVar4, (frame - 0x280));
                  puVar7 = (uint64_t *)PTR_global_qmi_wds_hndl_001295b0;
                }
                else
                {
                  sVar6 = __strlen_chk(((char *)&((struct qdp_query_res *)(frame - 0x4760))->cdma1_username), 0x40b);
                  if (sVar6 == (long)*piVar10)
                  {
                    pcVar12 = *(char **)(piVar10 + -2);
                    iVar3 = strncasecmp(pcVar12, ((char *)&((struct qdp_query_res *)(frame - 0x4760))->cdma1_username), sVar6);
                    if (iVar3 == 0)
                    {
                      QDP_LOG(frame - 0x280, DAT_00127288, "NAI [%s] matched", pcVar12);
                      goto LAB_00109324;
                    }
                    QDP_LOG(frame - 0x280, DAT_001272a0, "NAI [%s] did not match", pcVar12);
                    QDP_LOG_FMT(frame - 0x280, "Modem contains [%s]", ((char *)&((struct qdp_query_res *)(frame - 0x4760))->cdma1_username));
                    puVar4 = DAT_001272b8;
                  }
                  else
                  {
                    QDP_LOG(frame - 0x280, DAT_001272d0, DAT_001026d4, "NAI: Lengths did not match");
                    QDP_LOG_FMT(frame - 0x280, "Modem NAI len [%d], Input NAI len [%d]", sVar6, *piVar10);
                    puVar4 = DAT_001272e8;
                  }
                  msg_sprintf(puVar4, (frame - 0x280));
                  puVar7 = (uint64_t *)PTR_global_qmi_wds_hndl_001295b0;
                }
                goto LAB_00109e74;
              case 4:
                QDP_LOG_FMT(frame - 0x280, DAT_001026d4, "QDP_RIL_PASSWORD is not used for matching 3GPP2 profile");
                puVar4 = DAT_00127300;
                break;
              case 5:
                QDP_LOG_FMT(frame - 0x280, DAT_001026d4, "QDP_RIL_AUTH is not used for matching 3GPP2 profile");
                puVar4 = DAT_00127318;
                break;
              case 6:
                if (*PTR_carrier_config_flag_001295d0 != '\0' ||
                    *PTR_qdp_allow_update_modem_profile_001295c8 != '\0')
                {
                  QDP_LOG_FMT(frame - 0x280, DAT_001026d4, "QDP_RIL_IP_FAMILY is not used for matching 3GPP2 profile");
                  puVar4 = DAT_00127330;
                  break;
                }
                if ((((struct qdp_query_res *)(frame - 0x4760))->cdma_pdn_type_valid) == '\0')
                {
                  QDP_LOG_FMT(frame - 0x280, DAT_001026d4, "modem profile parameter PDN_TYPE not available");
                  puVar4 = DAT_00127348;
                  goto LAB_00109e64;
                }
                switch ((((struct qdp_query_res *)(frame - 0x4760))->cdma_pdn_type))
                {
                case 0:
                  iVar3 = strncasecmp(pcVar12, "IP", 3);
                  if ((iVar3 != 0) && (iVar3 = strncasecmp(pcVar12, "IPV4V6", 7), iVar3 != 0))
                  {
                    QDP_LOG(frame - 0x280, DAT_00127378, "ip_family [%s] did not match", pcVar12);
                    puVar7 = (uint64_t *)PTR_global_qmi_wds_hndl_001295b0;
                    lVar8 = 0;
                    goto LAB_00109fa8;
                  }
                  QDP_LOG_FMT(frame - 0x280, "ip_family [%s] matched", pcVar12);
                  puVar4 = DAT_00127360;
                  break;
                case 1:
                  iVar3 = strncasecmp(pcVar12, "IPV6", 5);
                  if ((iVar3 != 0) && (iVar3 = strncasecmp(pcVar12, "IPV4V6", 7), iVar3 != 0))
                  {
                    QDP_LOG(frame - 0x280, DAT_001273c0, "ip_family [%s] did not match", pcVar12);
                    puVar7 = (uint64_t *)PTR_global_qmi_wds_hndl_001295b0;
                    lVar8 = 0;
                    goto LAB_0010a070;
                  }
                  QDP_LOG_FMT(frame - 0x280, "ip_family [%s] matched", pcVar12);
                  puVar4 = DAT_001273a8;
                  break;
                case 2:
                  QDP_LOG_FMT(frame - 0x280, DAT_001026d4, "any ip_family supported");
                  puVar4 = DAT_001273f0;
                  break;
                case 3:
                  QDP_LOG_FMT(frame - 0x280, DAT_001026d4, "unspecified ip_family found in profile");
                  puVar4 = DAT_00127408;
                  goto LAB_00109e64;
                default:
                  QDP_LOG_FMT(frame - 0x280, "invalid ip family [%d] found in profile");
                  puVar4 = DAT_00127420;
                  goto LAB_00109e64;
                }
                break;
              default:
                QDP_LOG_FMT(frame - 0x280, "matching [%d] (qdp_ril_param_idx_t) not supported", uVar11 & 0xffffffff);
                puVar4 = DAT_00127438;
              }
              msg_sprintf(puVar4, (frame - 0x280));
            LAB_00109324:
              uVar11 = uVar11 + 1;
              piVar10 = piVar10 + 4;
            } while (uVar11 != 10);
            QDP_LOG(frame - 0x280, DAT_00127468, DAT_001026d4, "qdp_match_3gpp2_profile_params EXIT success");
            *param_2 = (uint)(((struct qdp_query_req *)(frame - 0x4768))->profile_index);
            iVar3 = qdp_get_3gpp2_profile_pdn_type((((struct qdp_query_res *)(frame - 0x4760))->cdma_pdn_type), (((struct qdp_query_res *)(frame - 0x4760))->cdma_pdn_type_valid));
            *param_3 = iVar3;
            if (param_4 != (uint8_t *)0x0)
            {
              *param_4 = 1;
              *(uint64_t *)(param_4 + 4) = *(uint64_t *)(frame - 0x4768);
              memcpy(param_4 + 0x10, (frame - 0x4760), 0xc40);
            }
            QDP_LOG(frame - 0x280, DAT_00125488, DAT_001026d4, "resetting lookup_error - if any");
            *param_5 = 0;
          }
        LAB_0010a368:
          QDP_LOG(frame - 0x4760, DAT_001254b8, DAT_001026d4, "qdp_3gpp2_multi_param_search EXIT success");
          uVar5 = 1;
          goto LAB_00108f8c;
        }
        QDP_LOG_FMT(frame - 0x4760, "get_profile_list failed with error [%d] qmi_err_code [%d]", (*(uint32_t *)((frame - 0x3b20))), (((struct qdp_qmi_status *)(frame - 0x3b20))->qmi_err));
        puVar4 = DAT_00125410;
      }
      else
      {
        QDP_LOG_FMT(frame - 0x4760, "output placeholder [%d] is not [%d]", *param_3, 0xffffffff);
        puVar4 = DAT_001253f8;
      }
    }
    else
    {
      QDP_LOG_FMT(frame - 0x4760, "output placeholder [%d] is not [%d]", *param_2, 0xffffffff);
      puVar4 = DAT_001253e0;
    }
    puVar7 = (frame - 0x4760);
  LAB_00108f14:
    msg_sprintf(puVar4, puVar7);
    QDP_LOG_FMT(frame - 0x4760, DAT_001026d4, "qdp_3gpp2_multi_param_search EXIT failed");
    puVar4 = DAT_001254a0;
  }
  msg_sprintf(puVar4, (frame - 0x4760));
  uVar5 = 0;
LAB_00108f8c:
  return (long)uVar5;
  while (lVar8 = lVar8 + 0x44, lVar8 != 0x660)
  {
  LAB_0010a070:
    if ((((char *)DAT_0012a9a4)[lVar8] == '\x01') && (((char *)DAT_0012a9ac)[lVar8] == cVar2))
      goto LAB_00109e74;
  }
  if ((byte)(cVar2 - 0x33U) < 10)
    goto LAB_00109e74;
  *param_5 = 2;
  QDP_LOG_FMT(frame - 0x280, "lookup_error updated to %d", 2);
  puVar4 = DAT_001273d8;
  goto LAB_0010a1bc;
  while (lVar8 = lVar8 + 0x44, lVar8 != 0x660)
  {
  LAB_00109fa8:
    if ((((char *)DAT_0012a9a4)[lVar8] == '\x01') && (((char *)DAT_0012a9ac)[lVar8] == cVar2))
      goto LAB_00109e74;
  }
  if ((byte)(cVar2 - 0x33U) < 10)
    goto LAB_00109e74;
  *param_5 = 1;
  QDP_LOG_FMT(frame - 0x280, "lookup_error updated to %d", 1);
  puVar4 = DAT_00127390;
LAB_0010a1bc:
  msg_sprintf(puVar4, (frame - 0x280));
LAB_00109e74:
  QDP_LOG(frame - 0x280, DAT_00127468, DAT_001026d4, "qdp_match_3gpp2_profile_params EXIT success");
  uVar9 = uVar9 + 1;
  if ((((struct qdp_list_res *)(frame - 0x3b20))->profile_count) <= uVar9)
    goto LAB_0010a368;
  goto LAB_00109164;
}

long qdp_epc_multi_param_search(long param_1, uint *param_2, int *param_3, int *param_4, uint8_t *param_5,
                                uint32_t *param_6)

{
  char *__s1;
  bool bVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  uint64_t uVar6 = 0;
  size_t __n;
  size_t sVar7;
  uint8_t *puVar8;
  uint64_t *puVar9;
  long lVar10;
  char *pcVar11;
  char *__s1_00;
  int *piVar12;
  ulong uVar13;
  ulong uVar14;
  uint8_t frame_store[29456] __attribute__((aligned(16)));
  uint8_t *const frame = frame_store + 29456;

  memset(frame_store, 0, sizeof frame_store);
  memset(frame - 0x3b20, 0, 0x37dc);
  memset(frame - 0x340, 0, 0xb8);
  if (*PTR_qdp_inited_001295b8 == '\0')
  {
    QDP_LOG_FMT(frame - 0x4760, DAT_001026d4, "qdp not inited");
    puVar8 = DAT_001254d0;
  }
  else
  {
    QDP_LOG(frame - 0x4760, DAT_001254e8, DAT_001026d4, "qdp_epc_multi_param_search ENTRY");
    if ((((param_1 == 0) || (param_2 == (uint *)0x0)) || (param_3 == (int *)0x0)) ||
        ((param_4 == (int *)0x0 || (param_6 == (uint32_t *)0x0))))
    {
      QDP_LOG_FMT(frame - 0x4760, DAT_001026d4, "invalid params");
      puVar8 = DAT_00125500;
    }
    else if (*param_2 == 0xffffffff)
    {
      if (*param_3 == -1)
      {
        if (*param_4 == -1)
        {
          if (param_5 != (uint8_t *)0x0)
          {
            *param_5 = 0;
          }
          memset(frame - 0x3b20, 0, 0x37dc);
          memset(frame - 0x340, 0, 0xb8);
          *(uint64_t *)(frame - 0x340) = CONCAT71((*(uint56_t *)((char *)(frame - 0x340) + 1)), 1);
          (((struct qdp_list_req *)(frame - 0x340))->profile_type) = 2;
          iVar5 = qdp_qmi_wds_get_profile_list(*(uint64_t *)PTR_global_qmi_wds_hndl_001295b0, (long)((frame - 0x340)), (frame - 0x3b20));
          if (iVar5 == 1)
          {
            QDP_LOG(frame - 0x4760, DAT_00125578, "get_profile_list for profile_tech [%d] returned [%d] profile ids", (((struct qdp_list_req *)(frame - 0x340))->profile_type), (((struct qdp_list_res *)(frame - 0x3b20))->profile_count));
            if ((((struct qdp_list_res *)(frame - 0x3b20))->profile_count) != 0)
            {
              __s1 = (char *)((long)(frame - 0x4710) + 5);
              uVar13 = 0;
            LAB_0010aaec:
              *(uint64_t *)(frame - 0x4768) = 2;
              memset(frame - 0x4760, 0, 0xc40);
              (*(uint40_t *)((char *)(frame - 0x4768) + 0)) = CONCAT14(((uint8_t *)&((struct qdp_list_res *)(frame - 0x3b20))->profiles[0].profile_index)[uVar13 * 0x38], (uint32_t)*(uint64_t *)(frame - 0x4768));
              iVar5 = qdp_qmi_wds_query_profile(*(uint64_t *)PTR_global_qmi_wds_hndl_001295b0, (long)((frame - 0x4768)),
                                                (frame - 0x4760));
              if (iVar5 == 1)
              {
                QDP_LOG(frame - 0x280, DAT_001255a8, "successfully queried EPC profile [%d]", (((struct qdp_query_req *)(frame - 0x4768))->profile_index));
                cVar3 = (((struct qdp_query_req *)(frame - 0x4768))->profile_index);
                QDP_LOG(frame - 0x280, DAT_00127480, DAT_001026d4, "qdp_match_epc_profile_params ENTRY");
                if (((char)*(uint64_t *)(frame - 0x4758) == '\0') ||
                    (iVar5 = strncasecmp((char *)((long)(frame - 0x4758) + 1), "qdp_profile", 0xb),
                     iVar5 != 0))
                {
                  bVar2 = true;
                }
                else
                {
                  QDP_LOG(frame - 0x280, DAT_00127498, DAT_001026d4, "Profile is a QDP profile.");
                  bVar2 = false;
                }
                uVar14 = 0;
                piVar12 = (int *)(param_1 + 8);
              LAB_0010ad5c:
                cVar4 = (((struct qdp_query_res *)(frame - 0x4760))->cdma_apn_name_valid);
                if ((*piVar12 < 1) && ((uVar14 != 2 || (*piVar12 != 0))))
                  goto LAB_0010ad4c;
                pcVar11 = *(char **)(piVar12 + -2);
                if (pcVar11 == (char *)0x0)
                {
                  QDP_LOG(frame - 0x280, DAT_001274b0, DAT_001026d4, "programming error: NULL buffer foundwhere length is non zero");
                  QDP_LOG(frame - 0x280, DAT_00127780, DAT_001026d4, "qdp_match_epc_profile_params EXIT failed");
                  QDP_LOG_FMT(frame - 0x280, DAT_001026d4, "programming error");
                  puVar8 = DAT_001255c0;
                  goto LAB_0010c180;
                }
                switch ((int)uVar14)
                {
                case 2:
                  if ((((struct qdp_query_res *)(frame - 0x4760))->apn_name_valid) == '\0')
                  {
                    if ((((struct qdp_query_res *)(frame - 0x4760))->cdma_apn_name_valid) != '\0')
                    {
                      __n = __strlen_chk(((char *)&((struct qdp_query_res *)(frame - 0x4760))->cdma_apn_name), 0x2f1);
                      pcVar11 = ((char *)&((struct qdp_query_res *)(frame - 0x4760))->cdma_apn_name);
                      goto LAB_0010b124;
                    }
                    QDP_LOG_FMT(frame - 0x280, DAT_001026d4, "modem profile parameter APN is invalid");
                    puVar8 = DAT_001274c8;
                  }
                  else
                  {
                    __n = __strlen_chk(__s1, 0xbeb);
                    pcVar11 = __s1;
                    if ((cVar4 == '\0') ||
                        ((sVar7 = __strlen_chk(((char *)&((struct qdp_query_res *)(frame - 0x4760))->cdma_apn_name), 0x2f1), __n == sVar7 &&
                                                                                                                                 (iVar5 = strncasecmp(__s1, ((char *)&((struct qdp_query_res *)(frame - 0x4760))->cdma_apn_name), __n), iVar5 == 0))))
                    {
                    LAB_0010b124:
                      if (__n == (long)*piVar12)
                      {
                        __s1_00 = *(char **)(piVar12 + -2);
                        iVar5 = strncasecmp(__s1_00, pcVar11, __n);
                        if (iVar5 == 0)
                        {
                          QDP_LOG_FMT(frame - 0x280, "APN [%s] matched", __s1_00);
                          puVar8 = DAT_00127558;
                          break;
                        }
                        QDP_LOG(frame - 0x280, DAT_00127528, "APN [%s] did not match", __s1_00);
                        QDP_LOG_FMT(frame - 0x280, "Modem contains [%s]", __s1);
                        puVar8 = DAT_00127540;
                      }
                      else
                      {
                        QDP_LOG(frame - 0x280, DAT_001274f8, DAT_001026d4, "APN: Lengths did not match");
                        QDP_LOG_FMT(frame - 0x280, "Modem APN len [%d], Input APN len [%d]", __n, *piVar12);
                        puVar8 = DAT_00127510;
                      }
                    }
                    else
                    {
                      QDP_LOG_FMT(frame - 0x280, "Invalid config UMTS_APN[%s] != CDMA_APN[%s]", __s1, ((char *)&((struct qdp_query_res *)(frame - 0x4760))->cdma_apn_name));
                      puVar8 = DAT_001274e0;
                    }
                  }
                  goto LAB_0010b87c;
                case 3:
                  QDP_LOG_FMT(frame - 0x280, DAT_001026d4, "QDP_RIL_NAI is not used for matching EPC profile for now");
                  puVar8 = DAT_00127570;
                  break;
                case 4:
                  QDP_LOG_FMT(frame - 0x280, DAT_001026d4, "QDP_RIL_PASSWORD is not used for matching EPC profile");
                  puVar8 = DAT_00127588;
                  break;
                case 5:
                  QDP_LOG_FMT(frame - 0x280, DAT_001026d4, "QDP_RIL_AUTH is not used for matching EPC profile");
                  puVar8 = DAT_001275a0;
                  break;
                case 6:
                  if ((((struct qdp_query_res *)(frame - 0x4760))->cdma_pdn_type_valid) != '\0')
                  {
                    switch ((((struct qdp_query_res *)(frame - 0x4760))->cdma_pdn_type))
                    {
                    case 0:
                      iVar5 = strncasecmp(pcVar11, "IP", 3);
                      if ((iVar5 != 0) && (iVar5 = strncasecmp(pcVar11, "IPV4V6", 7), iVar5 != 0))
                      {
                        QDP_LOG(frame - 0x280, DAT_001275d0, "ip_family [%s] did not match", pcVar11);
                        lVar10 = 0;
                        goto LAB_0010b9b4;
                      }
                      QDP_LOG_FMT(frame - 0x280, "ip_family [%s] matched", pcVar11);
                      puVar8 = DAT_001275b8;
                      break;
                    case 1:
                      iVar5 = strncasecmp(pcVar11, "IPV6", 5);
                      if ((iVar5 != 0) && (iVar5 = strncasecmp(pcVar11, "IPV4V6", 7), iVar5 != 0))
                      {
                        QDP_LOG(frame - 0x280, DAT_00127618, "ip_family [%s] did not match", pcVar11);
                        lVar10 = 0;
                        goto LAB_0010ba6c;
                      }
                      QDP_LOG_FMT(frame - 0x280, "ip_family [%s] matched", pcVar11);
                      puVar8 = DAT_00127600;
                      break;
                    case 2:
                      QDP_LOG_FMT(frame - 0x280, DAT_001026d4, "any ip_family supported");
                      puVar8 = DAT_00127648;
                      break;
                    case 3:
                      QDP_LOG_FMT(frame - 0x280, DAT_001026d4, "unspecified ip_family found in profile");
                      puVar8 = DAT_00127660;
                      goto LAB_0010b87c;
                    default:
                      QDP_LOG_FMT(frame - 0x280, "invalid ip family [%d] found in profile");
                      puVar8 = DAT_00127678;
                    LAB_0010b87c:
                      msg_sprintf(puVar8, (frame - 0x280));
                      goto LAB_0010b884;
                    }
                    break;
                  }
                  if ((((struct qdp_query_res *)(frame - 0x4760))->pdp_type_valid) == '\0')
                  {
                    QDP_LOG_FMT(frame - 0x280, DAT_001026d4, "modem profile parameter PDP_TYPE or PDN_TYPE not available");
                    puVar8 = DAT_00127750;
                    goto LAB_0010b87c;
                  }
                  if ((int)(*(ulong *)((frame - 0x4720))) == 3)
                  {
                    QDP_LOG_FMT(frame - 0x280, DAT_001026d4, "any ip_family supported");
                    puVar8 = DAT_00127720;
                    break;
                  }
                  if ((int)(*(ulong *)((frame - 0x4720))) == 2)
                  {
                    iVar5 = strncasecmp(pcVar11, "IPV6", 5);
                    if ((iVar5 != 0) && (iVar5 = strncasecmp(pcVar11, "IPV4V6", 7), iVar5 != 0))
                    {
                      QDP_LOG(frame - 0x280, DAT_001276f0, "ip_family [%s] did not match", pcVar11);
                      lVar10 = 0;
                      goto LAB_0010bcd4;
                    }
                    QDP_LOG_FMT(frame - 0x280, "ip_family [%s] matched", pcVar11);
                    puVar8 = DAT_001276d8;
                    break;
                  }
                  if ((int)(*(ulong *)((frame - 0x4720))) != 0)
                  {
                    QDP_LOG_FMT(frame - 0x280, "invalid ip family [%d] found in profile");
                    puVar8 = DAT_00127738;
                    goto LAB_0010b87c;
                  }
                  iVar5 = strncasecmp(pcVar11, "IP", 3);
                  if ((iVar5 == 0) || (iVar5 = strncasecmp(pcVar11, "IPV4V6", 7), iVar5 == 0))
                  {
                    QDP_LOG_FMT(frame - 0x280, "ip_family [%s] matched", pcVar11);
                    puVar8 = DAT_00127690;
                    break;
                  }
                  QDP_LOG(frame - 0x280, DAT_001276a8, "ip_family [%s] did not match", pcVar11);
                  lVar10 = 0;
                  do
                  {
                    if ((((char *)DAT_0012a9a4)[lVar10] == '\x01') && (((char *)DAT_0012a9ac)[lVar10] == cVar3))
                      goto LAB_0010b884;
                    lVar10 = lVar10 + 0x44;
                  } while (lVar10 != 0x660);
                  if (bVar2)
                  {
                    *param_6 = 1;
                    QDP_LOG_FMT(frame - 0x280, "lookup_error updated to %d", 1);
                    puVar8 = DAT_001276c0;
                    goto LAB_0010bdf8;
                  }
                  goto LAB_0010b884;
                default:
                  QDP_LOG_FMT(frame - 0x280, "matching [%d] (qdp_ril_param_idx_t) not supported", uVar14 & 0xffffffff);
                  puVar8 = DAT_00127768;
                }
                msg_sprintf(puVar8, (frame - 0x280));
              LAB_0010ad4c:
                uVar14 = uVar14 + 1;
                piVar12 = piVar12 + 4;
                if (uVar14 == 10)
                {
                  QDP_LOG(frame - 0x280, DAT_00127798, DAT_001026d4, "qdp_match_epc_profile_params EXIT success");
                  *param_2 = (uint)(((struct qdp_query_req *)(frame - 0x4768))->profile_index);
                  iVar5 = qdp_get_3gpp2_profile_pdn_type((((struct qdp_query_res *)(frame - 0x4760))->cdma_pdn_type), (((struct qdp_query_res *)(frame - 0x4760))->cdma_pdn_type_valid));
                  *param_3 = iVar5;
                  iVar5 = qdp_get_3gpp_profile_pdn_type((*(ulong *)((frame - 0x4720))) & 0xffffffff, (((struct qdp_query_res *)(frame - 0x4760))->pdp_type_valid));
                  *param_4 = iVar5;
                  if (param_5 != (uint8_t *)0x0)
                  {
                    *param_5 = 1;
                    *(uint64_t *)(param_5 + 4) = *(uint64_t *)(frame - 0x4768);
                    memcpy(param_5 + 0x10, (frame - 0x4760), 0xc40);
                  }
                  QDP_LOG(frame - 0x280, DAT_001255d8, DAT_001026d4, "resetting lookup_error - if any");
                  *param_6 = 0;
                  goto LAB_0010bfb0;
                }
                goto LAB_0010ad5c;
              }
              QDP_LOG_FMT(frame - 0x280, "query_profile failed with error [%d] qmi_err_code [%d]", *(uint64_t *)(frame - 0x4760) & 0xffffffff, (((struct qdp_qmi_status *)(frame - 0x4760))->qmi_err));
              puVar8 = UNK_00125590;
            LAB_0010c180:
              puVar9 = (frame - 0x280);
              goto LAB_0010a824;
            }
          LAB_0010bfb0:
            QDP_LOG(frame - 0x4760, DAT_00125608, DAT_001026d4, "qdp_epc_multi_param_search EXIT success");
            uVar6 = 1;
            goto LAB_0010a89c;
          }
          QDP_LOG_FMT(frame - 0x4760, "get_profile_list failed with error [%d] qmi_err_code [%d]", (*(uint32_t *)((frame - 0x3b20))), (((struct qdp_qmi_status *)(frame - 0x3b20))->qmi_err));
          puVar8 = DAT_00125560;
        }
        else
        {
          QDP_LOG_FMT(frame - 0x4760, "output placeholder [%d] is not [%d]", *param_4, 0xffffffff);
          puVar8 = DAT_00125548;
        }
      }
      else
      {
        QDP_LOG_FMT(frame - 0x4760, "output placeholder [%d] is not [%d]", *param_3, 0xffffffff);
        puVar8 = DAT_00125530;
      }
    }
    else
    {
      QDP_LOG_FMT(frame - 0x4760, "output placeholder [%d] is not [%d]", *param_2, 0xffffffff);
      puVar8 = DAT_00125518;
    }
    puVar9 = (frame - 0x4760);
  LAB_0010a824:
    msg_sprintf(puVar8, puVar9);
    QDP_LOG_FMT(frame - 0x4760, DAT_001026d4, "qdp_epc_multi_param_search EXIT failed");
    puVar8 = DAT_001255f0;
  }
  msg_sprintf(puVar8, (frame - 0x4760));
  uVar6 = 0;
LAB_0010a89c:
  return (long)uVar6;
  while (lVar10 = lVar10 + 0x44, lVar10 != 0x660)
  {
  LAB_0010ba6c:
    if ((((char *)DAT_0012a9a4)[lVar10] == '\x01') && (((char *)DAT_0012a9ac)[lVar10] == cVar3))
      goto LAB_0010b884;
  }
  *param_6 = 2;
  QDP_LOG_FMT(frame - 0x280, "lookup_error updated to %d", 2);
  puVar8 = DAT_00127630;
  goto LAB_0010bdf8;
  while (lVar10 = lVar10 + 0x44, lVar10 != 0x660)
  {
  LAB_0010b9b4:
    if ((((char *)DAT_0012a9a4)[lVar10] == '\x01') && (((char *)DAT_0012a9ac)[lVar10] == cVar3))
      goto LAB_0010b884;
  }
  *param_6 = 1;
  QDP_LOG_FMT(frame - 0x280, "lookup_error updated to %d", 1);
  puVar8 = DAT_001275e8;
  goto LAB_0010bdf8;
  while (lVar10 = lVar10 + 0x44, lVar10 != 0x660)
  {
  LAB_0010bcd4:
    if ((((char *)DAT_0012a9a4)[lVar10] == '\x01') && (((char *)DAT_0012a9ac)[lVar10] == cVar3))
      goto LAB_0010b884;
  }
  if (!bVar2)
    goto LAB_0010b884;
  *param_6 = 2;
  QDP_LOG_FMT(frame - 0x280, "lookup_error updated to %d", 2);
  puVar8 = DAT_00127708;
LAB_0010bdf8:
  msg_sprintf(puVar8, (frame - 0x280));
LAB_0010b884:
  QDP_LOG(frame - 0x280, DAT_00127798, DAT_001026d4, "qdp_match_epc_profile_params EXIT success");
  uVar13 = uVar13 + 1;
  if ((((struct qdp_list_res *)(frame - 0x3b20))->profile_count) <= uVar13)
    goto LAB_0010bfb0;
  goto LAB_0010aaec;
}

long qdp_epc_alt_multi_param_search(int param_1, char param_2, uint *param_3, int *param_4, int *param_5, uint32_t *param_6)

{
  int iVar2;
  uint64_t uVar3 = 0;
  uint8_t *puVar4;
  uint64_t *puVar5;
  ulong uVar6;
  uint8_t *puVar7;
  uint8_t frame_store[28928] __attribute__((aligned(16)));
  uint8_t *const frame = frame_store + 28928;

  memset(frame_store, 0, sizeof frame_store);
  memset(frame - 0x3910, 0, 0x37dc);
  memset(frame - 0x130, 0, 0xb8);
  if (*PTR_qdp_inited_001295b8 == '\0')
  {
    QDP_LOG_FMT(frame - 0x4550, DAT_001026d4, "qdp not inited");
    puVar4 = DAT_00125620;
  }
  else
  {
    QDP_LOG(frame - 0x4550, DAT_00125638, DAT_001026d4, "qdp_epc_alt_multi_param_search ENTRY");
    if ((((param_3 == (uint *)0x0) || (param_4 == (int *)0x0)) || (param_5 == (int *)0x0)) ||
        (param_6 == (uint32_t *)0x0))
    {
      QDP_LOG_FMT(frame - 0x4550, DAT_001026d4, "invalid params");
      puVar4 = DAT_00125650;
    }
    else if (*param_3 == 0xffffffff)
    {
      if (*param_4 == -1)
      {
        if (*param_5 == -1)
        {
          memset(frame - 0x3910, 0, 0x37dc);
          memset(frame - 0x130, 0, 0xb8);
          *(uint64_t *)(frame - 0x130) = CONCAT71((*(uint56_t *)((char *)(frame - 0x130) + 1)), 1);
          (((struct qdp_list_req *)(frame - 0x130))->profile_type) = 2;
          iVar2 = qdp_qmi_wds_get_profile_list(*(uint64_t *)PTR_global_qmi_wds_hndl_001295b0, (long)((frame - 0x130)), (frame - 0x3910));
          if (iVar2 == 1)
          {
            QDP_LOG(frame - 0x4550, DAT_001256c8, "get_profile_list for profile_tech [%d] returned [%d] profile ids", (((struct qdp_list_req *)(frame - 0x130))->profile_type), (((struct qdp_list_res *)(frame - 0x3910))->profile_count));
            if ((((struct qdp_list_res *)(frame - 0x3910))->profile_count) != 0)
            {
              uVar6 = 0;
              puVar7 = ((uint8_t *)&((struct qdp_list_res *)(frame - 0x3910))->profiles[0].profile_index);
              do
              {
                *(uint64_t *)(frame - 0x4758) = 2;
                memset(frame - 0x4550, 0, 0xc40);
                (*(uint40_t *)((char *)(frame - 0x4758) + 0)) = CONCAT14(*puVar7, (uint32_t)*(uint64_t *)(frame - 0x4758));
                iVar2 = qdp_qmi_wds_query_profile(*(uint64_t *)PTR_global_qmi_wds_hndl_001295b0, (long)((frame - 0x4758)),
                                                  (frame - 0x4550));
                if (iVar2 != 1)
                {
                  QDP_LOG_FMT(frame - 0x4750, "query_profile failed with error [%d] qmi_err_code [%d]", *(uint64_t *)(frame - 0x4550) & 0xffffffff, (((struct qdp_qmi_status *)(frame - 0x4550))->qmi_err));
                  puVar4 = DAT_001256e0;
                  puVar5 = (frame - 0x4750);
                  goto LAB_0010c464;
                }
                QDP_LOG(frame - 0x4750, DAT_001256f8, "successfully queried EPC profile [%d]", (((struct qdp_query_req *)(frame - 0x4758))->profile_index));
                if (((param_1 == 8) && ((*(char *)((frame - 0x3d50))) != '\0')) && ((*(char *)((frame - 0x3d4f))) == param_2))
                {
                  QDP_LOG(frame - 0x4750, DAT_00125710, "APN CLASS Matched with %d Profile", (((struct qdp_query_req *)(frame - 0x4758))->profile_index));
                  *param_3 = (uint)(((struct qdp_query_req *)(frame - 0x4758))->profile_index);
                  iVar2 = qdp_get_3gpp2_profile_pdn_type((((struct qdp_query_res *)(frame - 0x4550))->cdma_pdn_type), (((struct qdp_query_res *)(frame - 0x4550))->cdma_pdn_type_valid));
                  *param_4 = iVar2;
                  iVar2 = qdp_get_3gpp_profile_pdn_type((*(ulong *)((frame - 0x4510))) & 0xffffffff, (((struct qdp_query_res *)(frame - 0x4550))->pdp_type_valid));
                  *param_5 = iVar2;
                  QDP_LOG(frame - 0x4750, DAT_00125728, DAT_001026d4, "resetting lookup_error - if any");
                  *param_6 = 0;
                  break;
                }
                uVar6 = uVar6 + 1;
                puVar7 = puVar7 + 0x38;
              } while (uVar6 < (((struct qdp_list_res *)(frame - 0x3910))->profile_count));
            }
            QDP_LOG(frame - 0x4550, DAT_00125758, DAT_001026d4, "qdp_epc_alt_multi_param_search EXIT success");
            uVar3 = 1;
            goto LAB_0010c4dc;
          }
          QDP_LOG_FMT(frame - 0x4550, "get_profile_list failed with error [%d] qmi_err_code [%d]", (*(uint32_t *)((frame - 0x3910))), (((struct qdp_qmi_status *)(frame - 0x3910))->qmi_err));
          puVar4 = DAT_001256b0;
        }
        else
        {
          QDP_LOG_FMT(frame - 0x4550, "output placeholder [%d] is not [%d]", *param_5, 0xffffffff);
          puVar4 = DAT_00125698;
        }
      }
      else
      {
        QDP_LOG_FMT(frame - 0x4550, "output placeholder [%d] is not [%d]", *param_4, 0xffffffff);
        puVar4 = DAT_00125680;
      }
    }
    else
    {
      QDP_LOG_FMT(frame - 0x4550, "output placeholder [%d] is not [%d]", *param_3, 0xffffffff);
      puVar4 = DAT_00125668;
    }
    puVar5 = (frame - 0x4550);
  LAB_0010c464:
    msg_sprintf(puVar4, puVar5);
    QDP_LOG_FMT(frame - 0x4550, DAT_001026d4, "qdp_epc_alt_multi_param_search EXIT failed");
    puVar4 = DAT_00125740;
  }
  msg_sprintf(puVar4, (frame - 0x4550));
  uVar3 = 0;
LAB_0010c4dc:
  return (long)uVar3;
}

long qdp_profile_update_ex(uint64_t param_1, uint32_t *param_2)

{
  uint32_t uVar1;
  int iVar3;
  uint8_t frame_store[1104] __attribute__((aligned(16)));
  uint8_t *const frame = frame_store + 1104;

  memset(frame_store, 0, sizeof frame_store);
  memset(frame - 0x250, 0, 0x210);
  qdp_format_log_msg((frame - 0x240), 0x200, DAT_001026d4, "qdp_profile_update_ex ENTRY");
  msg_sprintf(DAT_00125770, (frame - 0x240));
  if (*PTR_qdp_inited_001295b8 == '\0')
  {
    QDP_LOG(frame - 0x240, DAT_00125788, DAT_001026d4, "qdp not inited");
    iVar3 = 0;
  }
  else
  {
    memset(frame - 0x250, 0, 0x10);
    iVar3 = qdp_qmi_wds_modify_profile(*(uint64_t *)PTR_global_qmi_wds_hndl_001295b0, param_1, (frame - 0x250));
    if (param_2 != (uint32_t *)0x0)
    {
      uVar1 = 0;
      if (iVar3 != 1)
      {
        uVar1 = (((struct qdp_qmi_status *)(frame - 0x250))->qmi_err);
      }
      *param_2 = uVar1;
    }
    QDP_LOG(frame - 0x240, DAT_001257a0, DAT_001026d4, "qdp_profile_update_ex EXIT");
  }
  return iVar3;
}

#define MODIFY_STR(f, off, n)                                  \
  if (param_1[off] != '\0')                                    \
  {                                                            \
    req->f##_valid = 1;                                        \
    __strlcpy_chk((char *)&req->f, param_1 + (off) + 1, n, n); \
  }

long qdp_modify_profile(char *param_1, uint32_t *param_2)
{
  uint32_t uVar1;
  int iVar3;
  uint8_t frame_store[6320] __attribute__((aligned(16)));
  uint8_t *const frame = frame_store + 6320;
  struct qdp_profile_modify_req *req = (struct qdp_profile_modify_req *)(frame - 0xc68);

  memset(frame_store, 0, sizeof frame_store);
  memset(frame - 0xe80, 0, 0x210);
  memset(frame - 0xc68, 0, 0xc30);
  qdp_format_log_msg((frame - 0xe70), 0x200, DAT_001026d4, "qdp_modify_profile ENTRY");
  msg_sprintf(DAT_001257b8, (frame - 0xe70));
  if (*PTR_qdp_inited_001295b8 == '\0')
  {
    QDP_LOG(frame - 0xe70, DAT_001257d0, DAT_001026d4, "qdp not inited");
    iVar3 = 0;
  }
  else
  {
    if ((param_1 == (char *)0x0) || (*param_1 == '\0'))
    {
      QDP_LOG(frame - 0xe70, DAT_001257e8, DAT_001026d4, "Invalid input params for profile");
      iVar3 = 0;
    }
    else
    {
      memset(frame - 0xe80, 0, 0x10);
      memset(frame - 0xc68, 0, 0xc30);
      req->profile_index = param_1[8];
      req->profile_type = *(uint *)(param_1 + 4);
      if ((req->profile_type | 2) == 2)
      {
        MODIFY_STR(apn_name, 0x64, 0x97)
        MODIFY_STR(username, 0x1a4, 0x80)
        MODIFY_STR(password, 0x225, 0x80)
        if (param_1[0x2a6] != '\0')
        {
          req->auth_pref_valid = 1;
          req->auth_pref = param_1[0x2a7];
        }
        if (param_1[0x4c] != '\0')
        {
          req->pdp_type_valid = 1;
          req->pdp_type = *(uint32_t *)(param_1 + 0x50);
        }
      }
      if (*(int *)(param_1 + 4) - 1U < 2)
      {
        MODIFY_STR(cdma_apn_name, 0x95e, 0x97)
        MODIFY_STR(cdma1_username, 0x844, 0x80)
        MODIFY_STR(cdma2_username, 0xa44, 0x80)
        MODIFY_STR(cdma1_password, 0x8c5, 0x80)
        MODIFY_STR(cdma2_password, 0xac5, 0x80)
        if (param_1[0x83c] != '\0')
        {
          req->cdma1_auth_pref_valid = 1;
          req->cdma1_auth_pref = *(uint32_t *)(param_1 + 0x840);
        }
        if (param_1[0xa3e] != '\0')
        {
          req->cdma2_auth_pref_valid = 1;
          req->cdma2_auth_pref = *(uint32_t *)(param_1 + 0xa40);
        }
        if (param_1[0x9f6] != '\0')
        {
          req->cdma_pdn_type_valid = 1;
          req->cdma_pdn_type = *(uint32_t *)(param_1 + 0x9f8);
        }
        if (*(int *)(param_1 + 4) == 2)
        {
          MODIFY_STR(epc_username, 0x74f, 0x80)
          MODIFY_STR(epc_password, 0x6ce, 0x80)
          if (param_1[2000] != '\0')
          {
            req->epc_auth_pref_valid = 1;
            req->epc_auth_pref = *(uint32_t *)(param_1 + 0x7d4);
          }
        }
      }
      iVar3 = qdp_qmi_wds_modify_profile(*(uint64_t *)PTR_global_qmi_wds_hndl_001295b0, (long)req, (frame - 0xe80));
      if (param_2 != (uint32_t *)0x0)
      {
        uVar1 = 0;
        if (iVar3 != 1)
        {
          uVar1 = ((struct qdp_qmi_status *)(frame - 0xe80))->qmi_err;
        }
        *param_2 = uVar1;
      }
    }
    QDP_LOG(frame - 0xe70, DAT_00125800, DAT_001026d4, "qdp_modify_profile EXIT");
  }
  return iVar3;
}
#undef MODIFY_STR

long qdp_3gpp_profile_update_params(void)

{
  qdp_3gpp_profile_update_params_v2();
  return 0;
}

long qdp_3gpp_profile_update_params_v2(long param_1, uint32_t param_2, long param_3, uint8_t *param_4)

{
  uint uVar1;
  bool bVar3;
  int iVar4;
  int iVar5;
  uint8_t *puVar6;
  size_t sVar7;
  void *__s;
  char *pcVar8;
  uint32_t uVar9;
  long lVar10;
  ulong uVar11;
  uint *puVar12;
  long *plVar13;
  uint8_t frame_store[1152] __attribute__((aligned(16)));
  uint8_t *const frame = frame_store + 1152;

  memset(frame_store, 0, sizeof frame_store);
  memset(frame - 0x310, 0, 0xa0);
  QDP_LOG(frame - 0x270, DAT_00125818, DAT_001026d4, "qdp_3gpp_profile_update_params ENTRY");
  if (*PTR_qdp_inited_001295b8 == '\0')
  {
    QDP_LOG(frame - 0x270, DAT_00125830, DAT_001026d4, "qdp not inited");
    uVar9 = 0;
  }
  else
  {
    if (((param_1 == 0) || (param_3 == 0)) || (param_4 == (uint8_t *)0x0))
    {
      QDP_LOG(frame - 0x270, DAT_00125848, DAT_001026d4, "NULL params rcvd");
      bVar3 = false;
    }
    else
    {
      uVar11 = 0;
      plVar13 = (frame - 0x310);
      puVar12 = (uint *)PTR_param_tech_map_tbl_001295d8;
      do
      {
        pcVar8 = *(char **)(param_1 + (ulong)*puVar12 * 8);
        if ((pcVar8 != (char *)0x0) && (*pcVar8 != '\0'))
        {
          sVar7 = strlen(*(char **)(param_1 + (ulong)*puVar12 * 8));
          iVar4 = (int)sVar7;
          iVar5 = iVar4 + 1;
          if (SCARRY4(iVar4, 1))
            goto LAB_0010d810;
          if ((int)puVar12[2] < iVar5)
          {
            QDP_LOG_FMT(frame - 0x270, "RIL param length too long [%d] for ril index [%d]", iVar5, uVar11 & 0xffffffff);
            puVar6 = DAT_00125860;
          LAB_0010d418:
            msg_sprintf(puVar6, (frame - 0x270));
          }
          else
          {
            __s = malloc((long)iVar5);
            *plVar13 = (long)__s;
            if (__s != (void *)0x0)
            {
              memset(__s, 0, (long)iVar5);
              QDP_LOG_FMT(frame - 0x270, "QDP: malloc\'ed [%p]", *plVar13);
              puVar6 = DAT_00125878;
              goto LAB_0010d418;
            }
          }
          if (*plVar13 == 0)
          {
            QDP_LOG_FMT(frame - 0x270, "memory error while trying to allocate 3gpp param for [%s]", *(uint64_t *)(param_1 + (ulong)*puVar12 * 8));
            puVar6 = DAT_001258a8;
          }
          else
          {
            if (SBORROW4(iVar5, 1))
            {
            LAB_0010d810:
              /* WARNING: Subroutine does not return */
              abort();
            }
            uVar1 = *puVar12;
            *(int *)(plVar13 + 1) = iVar4;
            strlcpy((char *)(*plVar13), (const char *)(*(uint64_t *)(param_1 + (ulong)uVar1 * 8)), (long)iVar5);
            QDP_LOG_FMT(frame - 0x270, "copied [%s], len[%d] to [%p] loc", *(uint64_t *)(param_1 + (ulong)*puVar12 * 8), (int)plVar13[1], *plVar13);
            puVar6 = DAT_00125890;
          }
          msg_sprintf(puVar6, (frame - 0x270));
        }
        uVar11 = uVar11 + 1;
        plVar13 = plVar13 + 2;
        puVar12 = puVar12 + 3;
      } while (uVar11 != 10);
      *param_4 = 0;
      iVar5 = qdp_3gpp_profile_fill_common_params((struct qdp_ril_param *)(frame - 0x310), param_2, (uint32_t *)(param_3), 2, param_4);
      if (iVar5 != 1)
      {
        QDP_LOG(frame - 0x270, DAT_001258c0, "failed to update 3gpp params structure for profile_id [%d]", param_2);
      }
      bVar3 = iVar5 == 1;
    }
    lVar10 = 0;
    do
    {
      if ((0 < *(int *)((long)((int *)(frame - 0x308)) + lVar10)) && (*(long *)((long)(frame - 0x310) + lVar10) != 0))
      {
        QDP_LOG(frame - 0x270, DAT_00127ae0, "QDP: freeing [%p]");
        free(((struct qdp_ril_param *)((long)(frame - 0x310) + lVar10))->value);
        ((struct qdp_ril_param *)((long)(frame - 0x310) + lVar10))->value = 0;
        ((struct qdp_ril_param *)((long)(frame - 0x310) + lVar10))->value = 0;
      }
      lVar10 = lVar10 + 0x10;
    } while (lVar10 != 0xa0);
    if (bVar3)
    {
      QDP_LOG(frame - 0x270, DAT_001258f0, DAT_001026d4, "qdp_3gpp_profile_update_params EXIT success");
      uVar9 = 1;
    }
    else
    {
      QDP_LOG(frame - 0x270, DAT_001258d8, DAT_001026d4, "qdp_3gpp_profile_update_params EXIT failed");
      uVar9 = 0;
    }
  }
  return uVar9;
}

long qdp_3gpp_profile_fill_common_params(struct qdp_ril_param *param_1, uint32_t param_2, uint32_t *param_3, uint param_4, uint8_t *param_5)
{
  struct qdp_query_req qreq;
  char logbuf[0x200];
  struct qdp_query_res qres;
  struct qdp_profile_modify_req *mod = (struct qdp_profile_modify_req *)param_3;
  char *desc;
  const char *str;
  uint8_t is_qdp_profile;
  int len;
  int rc;
  ulong idx;
  ulong mask;
  uint result;

  memset(&qreq, 0, sizeof qreq);
  memset(logbuf, 0, sizeof logbuf);
  memset(&qres, 0, sizeof qres);
  QDP_LOG(logbuf, DAT_001277b0, DAT_001026d4, "qdp_3gpp_profile_fill_common_params ENTRY");
  if (param_1 == NULL || param_3 == NULL || param_5 == NULL)
  {
    QDP_LOG_FMT(logbuf, "Invalid params for 3GPP profile_id [%d]", param_2);
    desc = DAT_001277c8;
  }
  else
  {
    QDP_LOG(logbuf, DAT_001277e0, "Updating 3GPP WDS profile params for profile id [%d]", param_2);
    mod->profile_type = 0;
    mod->profile_index = (uint8_t)param_2;
    qreq.profile_type = 0;
    qreq.profile_index = (uint8_t)param_2;
    rc = qdp_qmi_wds_query_profile(global_qmi_wds_hndl, (long)&qreq, (int *)&qres);
    if (rc == 1)
    {
      QDP_LOG(logbuf, DAT_00127810, "Succesfully queried [%d] 3GPP profile", param_2);
      if (qres.profile_name_valid == '\0' || strncasecmp(qres.profile_name, "qdp_profile", 0xb) != 0)
      {
        is_qdp_profile = 0;
      }
      else
      {
        QDP_LOG(logbuf, DAT_00127828, "Profile ID [%d] is a QDP profile", param_2);
        is_qdp_profile = 1;
      }
      QDP_LOG(logbuf, DAT_00127840, DAT_001026d4, "Filling in params from profile queried");
      mod->kept_400 = qres.kept_400;
      mod->kept_402 = qres.kept_402;
      mod->kept_404 = qres.kept_404;
      mod->kept_406 = qres.kept_406;
      mod->kept_408 = qres.kept_408;
      mod->kept_40a = qres.kept_40a;
      mod->kept_3d8 = qres.kept_3d8;
      mod->kept_3d9 = qres.kept_3d9;
      idx = 0;
      do
      {
        switch ((int)idx)
        {
        case 2:
          len = param_1->length;
          if (0x95 < len)
          {
            QDP_LOG(logbuf, DAT_00127858, "Invalid length [%d] of APN [%s] rcvd", (long)len, param_1->value);
            break;
          }
          if (len < 1)
          {
            if (len == 0)
            {
              if (__strlen_chk(qres.apn_name, 0xbeb) != 0)
              {
                QDP_LOG(logbuf, DAT_00127888, DAT_001026d4, "Update needed due to change in RIL APN", "RIL APN is empty ");
                *param_5 = 1;
              }
              mod->apn_name_valid = 1;
              mod->apn_name[0] = 0;
            }
          }
          else
          {
            if (strncasecmp(param_1->value, qres.apn_name, (long)len + 1) != 0)
            {
              QDP_LOG(logbuf, DAT_00127870, DAT_001026d4, "Update needed due to change in RIL Apn");
              *param_5 = 1;
            }
            mod->apn_name_valid = 1;
            __strlcpy_chk(mod->apn_name, param_1->value, 0x97, 0x97);
          }
          break;
        case 3:
          len = param_1->length;
          if (0x7e < len)
          {
            QDP_LOG(logbuf, DAT_001278a0, "Invalid length [%d] of USERNAME [%s] rcvd", (long)len, param_1->value);
            break;
          }
          if (len < 1)
          {
            if (len == 0)
            {
              if (__strlen_chk(qres.username, 0xaab) != 0)
              {
                QDP_LOG(logbuf, DAT_001278d0, DAT_001026d4, "Update needed due to change in RIL Username is empty");
                *param_5 = 1;
              }
              mod->username_valid = 1;
              mod->username[0] = 0;
            }
          }
          else
          {
            if (strncmp(param_1->value, qres.username, (long)len + 1) != 0)
            {
              QDP_LOG(logbuf, DAT_001278b8, DAT_001026d4, "Update needed due to change in RIL Username. ");
              *param_5 = 1;
            }
            mod->username_valid = 1;
            __strlcpy_chk(mod->username, param_1->value, 0x80, 0x80);
          }
          break;
        case 4:
          len = param_1->length;
          if (0x7e < len)
          {
            QDP_LOG(logbuf, DAT_001278e8, "Invalid length [%d] of PASSWORD [%s] rcvd", (long)len, param_1->value);
            break;
          }
          if (0 < len)
          {
            if (strncmp(param_1->value, qres.password, (long)len + 1) != 0)
            {
              QDP_LOG(logbuf, DAT_00127900, DAT_001026d4, "Update needed due to change in RIL Password");
              *param_5 = 1;
            }
            mod->password_valid = 1;
            __strlcpy_chk(mod->password, param_1->value, 0x80, 0x80);
            break;
          }
          if (len == 0)
          {
            if (__strlen_chk(qres.password, 0xa2a) != 0)
            {
              QDP_LOG(logbuf, DAT_00127918, DAT_001026d4, "Update needed due to change in RIL Password is empty");
              *param_5 = 1;
            }
          }
          else if (qres.password_valid == '\0')
          {
            break;
          }
          mod->password_valid = 1;
          mod->password[0] = 0;
          break;
        case 5:
          if (0 < param_1->length)
          {
            str = param_1->value;
            if (strcmp(str, "0") == 0)
            {
              if (qres.auth_pref != '\0')
              {
                QDP_LOG(logbuf, DAT_00127930, DAT_001026d4, "Update needed due to change", "in Authentication.RIL Auth - Not allowed ");
                *param_5 = 1;
              }
              mod->auth_pref_valid = 1;
              mod->auth_pref = 0;
            }
            else if (strcmp(str, "1") == 0)
            {
              if (qres.auth_pref != '\x01')
              {
                QDP_LOG(logbuf, DAT_00127948, DAT_001026d4, "Udpate needed due to change", "in Authentication. Ril Auth - PAP only ");
                *param_5 = 1;
              }
              mod->auth_pref_valid = 1;
              mod->auth_pref = 1;
            }
            else if (strcmp(str, "2") == 0)
            {
              if (qres.auth_pref != '\x02')
              {
                QDP_LOG(logbuf, DAT_00127960, DAT_001026d4, "Udpate needed due to change", "in Authentication. Ril Auth - CHAP only");
                *param_5 = 1;
              }
              mod->auth_pref_valid = 1;
              mod->auth_pref = 2;
            }
            else
            {
              if (strcmp(str, "3") != 0)
              {
                QDP_LOG(logbuf, DAT_00127990, "invalid auth_pref [%s]", str);
                break;
              }
              if (qres.auth_pref != '\x03')
              {
                QDP_LOG(logbuf, DAT_00127978, DAT_001026d4, "Udpate needed due to change in Authentication. Ril Auth - PAP & CHAP both ");
                *param_5 = 1;
              }
              mod->auth_pref_valid = 1;
              mod->auth_pref = 3;
            }
          }
          break;
        case 6:
          if (0 < param_1->length)
          {
            if ((carrier_config_flag == '\0' && qdp_allow_update_modem_profile == '\0') && !(param_4 == 2 || (param_4 < 2 && is_qdp_profile)))
            {
              mod->pdp_type_valid = 1;
              mod->pdp_type = qres.pdp_type;
              QDP_LOG(logbuf, DAT_00127a08, "Profile is Non-qdp. Picking previous IP type [%d]");
              break;
            }
            str = param_1->value;
            if (strcmp(str, "IP") == 0)
            {
              if (qres.pdp_type != 0)
              {
                QDP_LOG(logbuf, DAT_001279a8, DAT_001026d4, "Udpate needed due to change in Home IPType ");
                *param_5 = 1;
              }
              mod->pdp_type_valid = 1;
              mod->pdp_type = 0;
            }
            else
            {
              if (strcmp(str, "IPV6") == 0)
              {
                if (qres.pdp_type != 2)
                {
                  QDP_LOG(logbuf, DAT_001279c0, DAT_001026d4, "Udpate needed due to change in Home IPType ");
                  *param_5 = 1;
                }
                mod->pdp_type = 2;
              }
              else
              {
                if (strcmp(str, "IPV4V6") != 0)
                {
                  QDP_LOG(logbuf, DAT_001279f0, "invalid ip_family [%s]", str);
                  break;
                }
                if (qres.pdp_type != 3)
                {
                  QDP_LOG(logbuf, DAT_001279d8, DAT_001026d4, "Udpate needed due to change in Home IPType ");
                  *param_5 = 1;
                }
                mod->pdp_type = 3;
              }
              mod->pdp_type_valid = 1;
            }
          }
          break;
        case 7:
          if (0 < param_1->length)
          {
            if ((carrier_config_flag == '\0' && qdp_allow_update_modem_profile == '\0') && !(param_4 == 2 || (param_4 == 1 && is_qdp_profile)))
            {
              mod->roaming_ip1_valid = 0;
              mod->roaming_ip2_valid = 0;
            }
            else if (param_4 == 0 && (qres.roaming_ip1 == 0xff || qres.roaming_ip2 == 0xff))
            {
              QDP_LOG(logbuf, DAT_00127a20, DAT_001026d4, "Udpate Not needed as modem did not provide Roaming IPType ");
              mod->roaming_ip1_valid = 1;
              mod->roaming_ip2_valid = 1;
              mod->roaming_ip1 = qres.roaming_ip1;
              mod->roaming_ip2 = qres.roaming_ip2;
            }
            else
            {
              str = param_1->value;
              if (strcmp(str, "IP") == 0)
              {
                if (qres.roaming_ip1 != 0 || qres.roaming_ip2 != 0)
                {
                  QDP_LOG(logbuf, DAT_00127a38, DAT_001026d4, "Udpate needed due to change in Roaming IPType ");
                  *param_5 = 1;
                }
                mod->roaming_ip1_valid = 1;
                mod->roaming_ip2_valid = 1;
                mod->roaming_ip1 = 0;
                mod->roaming_ip2 = 0;
              }
              else if (strcmp(str, "IPV6") == 0)
              {
                if (qres.roaming_ip1 != 1 || qres.roaming_ip2 != 1)
                {
                  QDP_LOG(logbuf, DAT_00127a50, DAT_001026d4, "Udpate needed due to change in Roaming IPType ");
                  *param_5 = 1;
                }
                mod->roaming_ip1_valid = 1;
                mod->roaming_ip2_valid = 1;
                mod->roaming_ip1 = 1;
                mod->roaming_ip2 = 1;
              }
              else
              {
                if (strcmp(str, "IPV4V6") != 0)
                {
                  QDP_LOG(logbuf, DAT_00127a80, "invalid roaming ip [%s]", str);
                  break;
                }
                if (qres.roaming_ip1 != 2 || qres.roaming_ip2 != 2)
                {
                  QDP_LOG(logbuf, DAT_00127a68, DAT_001026d4, "Udpate needed due to change in Roaming IPType ");
                  *param_5 = 1;
                }
                mod->roaming_ip1_valid = 1;
                mod->roaming_ip2_valid = 1;
                mod->roaming_ip1 = 2;
                mod->roaming_ip2 = 2;
              }
            }
          }
          break;
        case 8:
          if (isAPAssistMode != '\0' && 0 < param_1->length && (mask = strtoul(param_1->value, NULL, 0), 1 < mask + 1))
          {
            mod->apn_type_mask_valid = 0;
            mod->apn_type_mask = mask;
            if (qres.apn_type_mask_valid != '\0' && mask != qres.apn_type_mask)
            {
              QDP_LOG(logbuf, DAT_00127a98, DAT_001026d4, "Udpate needed mismatch in apntype mask:[%ul]");
              *param_5 = 1;
            }
          }
          break;
        default:
          QDP_LOG(logbuf, DAT_00127ab0, "ignoring RIL param idx [%d]", (uint)idx);
        }
        idx = idx + 1;
        param_1 = param_1 + 1;
      } while (idx != 10);
      result = 1;
      goto done;
    }
    QDP_LOG_FMT(logbuf, "Profile querying failed for profile [%d] with error code [%d][%d]", param_2, qres.qmi_rc, qres.qmi_err);
    desc = DAT_001277f8;
  }
  msg_sprintf(desc, logbuf);
  result = 0;
done:
  QDP_LOG(logbuf, DAT_00127ac8, DAT_001026d4, "qdp_3gpp_profile_fill_common_params EXIT");
  return result;
}

long qdp_epc_profile_update_params(long param_1, uint32_t param_2, long param_3)

{
  uint uVar1;
  int iVar3;
  int iVar4;
  uint8_t *puVar5;
  size_t sVar6;
  void *__s;
  char *pcVar7;
  bool bVar8;
  uint32_t uVar9;
  long *plVar10;
  ulong uVar11;
  long lVar12;
  uint *puVar13;
  uint8_t frame_store[1152] __attribute__((aligned(16)));
  uint8_t *const frame = frame_store + 1152;

  memset(frame_store, 0, sizeof frame_store);
  memset(frame - 0x310, 0, 0xa0);
  QDP_LOG(frame - 0x270, DAT_00125908, DAT_001026d4, "qdp_epc_profile_update_params ENTRY");
  if (*PTR_qdp_inited_001295b8 == '\0')
  {
    QDP_LOG(frame - 0x270, DAT_00125920, DAT_001026d4, "qdp not inited");
    uVar9 = 0;
    goto LAB_0010f3ac;
  }
  if ((param_1 == 0) || (param_3 == 0))
  {
    QDP_LOG_FMT(frame - 0x270, DAT_001026d4, "NULL params rcvd");
    puVar5 = DAT_00125938;
  LAB_0010f208:
    msg_sprintf(puVar5, (frame - 0x270));
    bVar8 = false;
  }
  else
  {
    uVar11 = 0;
    plVar10 = (frame - 0x310);
    puVar13 = (uint *)PTR_param_tech_map_tbl_001295d8;
    do
    {
      pcVar7 = *(char **)(param_1 + (ulong)*puVar13 * 8);
      if ((pcVar7 != (char *)0x0) && (*pcVar7 != '\0'))
      {
        sVar6 = strlen(*(char **)(param_1 + (ulong)*puVar13 * 8));
        iVar3 = (int)sVar6;
        iVar4 = iVar3 + 1;
        if (SCARRY4(iVar3, 1))
          goto LAB_0010f3e0;
        if ((int)puVar13[2] < iVar4)
        {
          QDP_LOG_FMT(frame - 0x270, "RIL param length too long [%d] for ril index [%d]", iVar4, uVar11 & 0xffffffff);
          puVar5 = DAT_00125950;
        LAB_0010f000:
          msg_sprintf(puVar5, (frame - 0x270));
        }
        else
        {
          __s = malloc((long)iVar4);
          *plVar10 = (long)__s;
          if (__s != (void *)0x0)
          {
            memset(__s, 0, (long)iVar4);
            QDP_LOG_FMT(frame - 0x270, "QDP: malloc\'ed [%p]", *plVar10);
            puVar5 = DAT_00125968;
            goto LAB_0010f000;
          }
        }
        if (*plVar10 == 0)
        {
          QDP_LOG_FMT(frame - 0x270, "memory error while trying to allocate EPC param for [%s]", *(uint64_t *)(param_1 + (ulong)*puVar13 * 8));
          puVar5 = DAT_00125998;
        }
        else
        {
          if (SBORROW4(iVar4, 1))
          {
          LAB_0010f3e0:
            /* WARNING: Subroutine does not return */
            abort();
          }
          uVar1 = *puVar13;
          *(int *)(plVar10 + 1) = iVar3;
          strlcpy((char *)(*plVar10), (const char *)(*(uint64_t *)(param_1 + (ulong)uVar1 * 8)), (long)iVar4);
          QDP_LOG_FMT(frame - 0x270, "copied [%s], len[%d] to [%p] loc", *(uint64_t *)(param_1 + (ulong)*puVar13 * 8), (int)plVar10[1], *plVar10);
          puVar5 = DAT_00125980;
        }
        msg_sprintf(puVar5, (frame - 0x270));
      }
      uVar11 = uVar11 + 1;
      plVar10 = plVar10 + 2;
      puVar13 = puVar13 + 3;
    } while (uVar11 != 10);
    iVar4 = qdp_epc_profile_fill_common_params((struct qdp_ril_param *)(frame - 0x310), param_2, (uint32_t *)(param_3), 2);
    if (iVar4 != 1)
    {
      QDP_LOG_FMT(frame - 0x270, "failed to update EPC params structure for profile_id [%d]", param_2);
      puVar5 = DAT_001259b0;
      goto LAB_0010f208;
    }
    bVar8 = true;
  }
  lVar12 = 0;
  do
  {
    if ((0 < *(int *)((long)((int *)(frame - 0x308)) + lVar12)) && (*(long *)((long)(frame - 0x310) + lVar12) != 0))
    {
      QDP_LOG(frame - 0x270, DAT_00127ae0, "QDP: freeing [%p]");
      free(((struct qdp_ril_param *)((long)(frame - 0x310) + lVar12))->value);
      ((struct qdp_ril_param *)((long)(frame - 0x310) + lVar12))->value = 0;
      ((struct qdp_ril_param *)((long)(frame - 0x310) + lVar12))->value = 0;
    }
    lVar12 = lVar12 + 0x10;
  } while (lVar12 != 0xa0);
  if (bVar8)
  {
    QDP_LOG(frame - 0x270, DAT_001259e0, DAT_001026d4, "qdp_epc_profile_update_params EXIT success");
    uVar9 = 1;
  }
  else
  {
    QDP_LOG(frame - 0x270, DAT_001259c8, DAT_001026d4, "qdp_epc_profile_update_params EXIT failed");
    uVar9 = 0;
  }
LAB_0010f3ac:
  return uVar9;
}

long qdp_epc_profile_fill_common_params(struct qdp_ril_param *param_1, uint32_t param_2, uint32_t *param_3, int param_4)
{
  struct qdp_query_req qreq;
  char logbuf[0x200];
  struct qdp_query_res qres;
  struct qdp_profile_modify_req *mod = (struct qdp_profile_modify_req *)param_3;
  char *desc;
  const char *str;
  uint8_t is_qdp_profile;
  int len;
  int rc;
  ulong idx;
  uint result;

  memset(&qreq, 0, sizeof qreq);
  memset(logbuf, 0, sizeof logbuf);
  memset(&qres, 0, sizeof qres);
  qdp_format_log_msg(logbuf, 0x200, DAT_001026d4, "qdp_epc_profile_fill_common_params ENTRY");
  msg_sprintf(DAT_00127af8, logbuf);
  if (param_1 == NULL || param_3 == NULL)
  {
    QDP_LOG_FMT(logbuf, "Invalid profile params for EPC profile_id [%d]", param_2);
    desc = DAT_00127b10;
  }
  else
  {
    QDP_LOG(logbuf, DAT_00127b28, "Updating EPC WDS profile params for profile id [%d]", param_2);
    mod->profile_index = (uint8_t)param_2;
    mod->profile_type = 2;
    qreq.profile_type = 2;
    qreq.profile_index = (uint8_t)param_2;
    rc = qdp_qmi_wds_query_profile(global_qmi_wds_hndl, (long)&qreq, (int *)&qres);
    if (rc == 1)
    {
      QDP_LOG(logbuf, DAT_00127b58, "Succesfully queried [%d] epc profile", param_2);
      is_qdp_profile = 0;
      if (qres.profile_name_valid != '\0')
      {
        if (strncasecmp(qres.profile_name, "qdp_profile", 0xb) == 0)
        {
          QDP_LOG(logbuf, DAT_00127b70, "Profile ID [%d] is a QDP profile", param_2);
          is_qdp_profile = 1;
        }
        else
        {
          is_qdp_profile = 0;
        }
      }
      idx = 0;
      do
      {
        switch ((int)idx)
        {
        case 2:
          len = param_1->length;
          if (len < 0x96)
          {
            if (len < 1)
            {
              if (len == 0)
              {
                mod->apn_name_valid = 1;
                mod->apn_name[0] = 0;
                mod->cdma_apn_name_valid = 1;
                mod->cdma_apn_name[0] = 0;
              }
            }
            else
            {
              mod->apn_name_valid = 1;
              __strlcpy_chk(mod->apn_name, param_1->value, 0x97, 0x97);
              mod->cdma_apn_name_valid = 1;
              __strlcpy_chk(mod->cdma_apn_name, param_1->value, 0x97, 0x97);
            }
            break;
          }
          QDP_LOG(logbuf, DAT_00127b88, "Invalid length [%d] of APN [%s] rcvd", len, param_1->value);
          break;
        case 3:
          len = param_1->length;
          if (0x7e < len)
          {
            QDP_LOG(logbuf, DAT_00127ba0, "Invalid length [%d] of USERNAME [%s] rcvd", len, param_1->value);
            break;
          }
          if (0 < len)
          {
            mod->username_valid = 1;
            __strlcpy_chk(mod->username, param_1->value, 0x80, 0x80);
            mod->cdma1_username_valid = 1;
            __strlcpy_chk(mod->cdma1_username, param_1->value, 0x80, 0x80);
            mod->epc_username_valid = 1;
            __strlcpy_chk(mod->epc_username, param_1->value, 0x80, 0x80);
            mod->cdma2_username_valid = 1;
            __strlcpy_chk(mod->cdma2_username, param_1->value, 0x80, 0x80);
          }
          break;
        case 4:
          len = param_1->length;
          if (0x7e < len)
          {
            QDP_LOG(logbuf, DAT_00127bb8, "Invalid length [%d] of PASSWORD [%s] rcvd", len, param_1->value);
            break;
          }
          if (0 < len)
          {
            mod->password_valid = 1;
            __strlcpy_chk(mod->password, param_1->value, 0x80, 0x80);
            mod->cdma1_password_valid = 1;
            __strlcpy_chk(mod->cdma1_password, param_1->value, 0x80, 0x80);
            mod->epc_password_valid = 1;
            __strlcpy_chk(mod->epc_password, param_1->value, 0x80, 0x80);
            mod->cdma2_password_valid = 1;
            __strlcpy_chk(mod->cdma2_password, param_1->value, 0x80, 0x80);
          }
          break;
        case 5:
          if (0 < param_1->length)
          {
            str = param_1->value;
            if (strcmp(str, "0") == 0)
            {
              mod->auth_pref = 0;
            }
            else if (strcmp(str, "1") == 0)
            {
              mod->auth_pref = 1;
            }
            else if (strcmp(str, "2") == 0)
            {
              mod->auth_pref = 2;
            }
            else if (strcmp(str, "3") == 0)
            {
              mod->auth_pref = 3;
            }
            else
            {
              QDP_LOG(logbuf, DAT_00127bd0, "invalid auth_pref [%s]", str);
              break;
            }
            mod->auth_pref_valid = 1;
            mod->cdma1_auth_pref = mod->auth_pref;
            mod->cdma1_auth_pref_valid = 1;
            mod->epc_auth_pref = mod->auth_pref;
            mod->epc_auth_pref_valid = 1;
            mod->cdma2_auth_pref = mod->auth_pref;
            mod->cdma2_auth_pref_valid = 1;
          }
          break;
        case 6:
          if (0 < param_1->length)
          {
            if (param_4 == 2 || (param_4 == 1 && is_qdp_profile))
            {
              str = param_1->value;
              if (strcmp(str, "IP") == 0)
              {
                mod->cdma_pdn_type = 0;
                mod->pdp_type = 0;
              }
              else if (strcmp(str, "IPV6") == 0)
              {
                mod->cdma_pdn_type = 1;
                mod->pdp_type = 2;
              }
              else if (strcmp(str, "IPV4V6") == 0)
              {
                mod->cdma_pdn_type = 2;
                mod->pdp_type = 3;
              }
              else
              {
                QDP_LOG(logbuf, DAT_00127be8, "invalid ip_family [%s]", str);
                goto ignoring_param;
              }
              mod->cdma_pdn_type_valid = 1;
              mod->pdp_type_valid = 1;
            }
            else
            {
              mod->pdp_type_valid = 1;
              mod->cdma_pdn_type_valid = 1;
              mod->pdp_type = qres.pdp_type;
              mod->cdma_pdn_type = qres.cdma_pdn_type;
            }
          }
          /* Like the stock code, case 6 has no break and falls into the default log. */
        default:
        ignoring_param:
          QDP_LOG(logbuf, DAT_00127c00, "ignoring RIL param idx [%d]", (uint)idx);
        }
        idx = idx + 1;
        param_1 = param_1 + 1;
      } while (idx != 10);
      result = 1;
      goto done;
    }
    QDP_LOG_FMT(logbuf, "Profile querying failed for profile [%d] with error code [%d][%d]", param_2, qres.qmi_rc, qres.qmi_err);
    desc = DAT_00127b40;
  }
  msg_sprintf(desc, logbuf);
  result = 0;
done:
  QDP_LOG(logbuf, DAT_00127c18, DAT_001026d4, "qdp_epc_profile_fill_common_params EXIT");
  return result;
}

long qdp_3gpp2_profile_update_params(long param_1, uint32_t param_2, long param_3)

{
  uint uVar1;
  int iVar3;
  int iVar4;
  uint8_t *puVar5;
  size_t sVar6;
  void *__s;
  char *pcVar7;
  bool bVar8;
  uint32_t uVar9;
  long *plVar10;
  ulong uVar11;
  long lVar12;
  uint *puVar13;
  uint8_t frame_store[1152] __attribute__((aligned(16)));
  uint8_t *const frame = frame_store + 1152;

  memset(frame_store, 0, sizeof frame_store);
  memset(frame - 0x310, 0, 0xa0);
  QDP_LOG(frame - 0x270, DAT_001259f8, DAT_001026d4, "qdp_3gpp2_profile_update_params ENTRY");
  if (*PTR_qdp_inited_001295b8 == '\0')
  {
    QDP_LOG(frame - 0x270, DAT_00125a10, DAT_001026d4, "qdp not inited");
    uVar9 = 0;
    goto LAB_0011044c;
  }
  if ((param_1 == 0) || (param_3 == 0))
  {
    QDP_LOG_FMT(frame - 0x270, DAT_001026d4, "NULL params rcvd");
    puVar5 = DAT_00125a28;
  LAB_001102a8:
    msg_sprintf(puVar5, (frame - 0x270));
    bVar8 = false;
  }
  else
  {
    uVar11 = 0;
    plVar10 = (frame - 0x310);
    puVar13 = (uint *)PTR_param_tech_map_tbl_001295d8;
    do
    {
      pcVar7 = *(char **)(param_1 + (ulong)*puVar13 * 8);
      if ((pcVar7 != (char *)0x0) && (*pcVar7 != '\0'))
      {
        sVar6 = strlen(*(char **)(param_1 + (ulong)*puVar13 * 8));
        iVar3 = (int)sVar6;
        iVar4 = iVar3 + 1;
        if (SCARRY4(iVar3, 1))
          goto LAB_00110480;
        if ((int)puVar13[2] < iVar4)
        {
          QDP_LOG_FMT(frame - 0x270, "RIL param length too long [%d] for ril index [%d]", iVar4, uVar11 & 0xffffffff);
          puVar5 = DAT_00125a40;
        LAB_001100a4:
          msg_sprintf(puVar5, (frame - 0x270));
        }
        else
        {
          __s = malloc((long)iVar4);
          *plVar10 = (long)__s;
          if (__s != (void *)0x0)
          {
            memset(__s, 0, (long)iVar4);
            QDP_LOG_FMT(frame - 0x270, "QDP: malloc\'ed [%p]", *plVar10);
            puVar5 = DAT_00125a58;
            goto LAB_001100a4;
          }
        }
        if (*plVar10 == 0)
        {
          QDP_LOG_FMT(frame - 0x270, "memory error while trying to allocate EPC param for [%s]", *(uint64_t *)(param_1 + (ulong)*puVar13 * 8));
          puVar5 = DAT_00125a88;
        }
        else
        {
          if (SBORROW4(iVar4, 1))
          {
          LAB_00110480:
            /* WARNING: Subroutine does not return */
            abort();
          }
          uVar1 = *puVar13;
          *(int *)(plVar10 + 1) = iVar3;
          strlcpy((char *)(*plVar10), (const char *)(*(uint64_t *)(param_1 + (ulong)uVar1 * 8)), (long)iVar4);
          QDP_LOG_FMT(frame - 0x270, "copied [%s], len[%d] to [%p] loc", *(uint64_t *)(param_1 + (ulong)*puVar13 * 8), (int)plVar10[1], *plVar10);
          puVar5 = DAT_00125a70;
        }
        msg_sprintf(puVar5, (frame - 0x270));
      }
      uVar11 = uVar11 + 1;
      plVar10 = plVar10 + 2;
      puVar13 = puVar13 + 3;
    } while (uVar11 != 10);
    iVar4 = qdp_3gpp2_profile_fill_common_params((struct qdp_ril_param *)(frame - 0x310), param_2, (uint32_t *)(param_3));
    if (iVar4 != 1)
    {
      QDP_LOG_FMT(frame - 0x270, "failed to update 3gpp2 params structure for profile_id [%d]", param_2);
      puVar5 = DAT_00125aa0;
      goto LAB_001102a8;
    }
    bVar8 = true;
  }
  lVar12 = 0;
  do
  {
    if ((0 < *(int *)((long)((int *)(frame - 0x308)) + lVar12)) && (*(long *)((long)(frame - 0x310) + lVar12) != 0))
    {
      QDP_LOG(frame - 0x270, DAT_00127ae0, "QDP: freeing [%p]");
      free(((struct qdp_ril_param *)((long)(frame - 0x310) + lVar12))->value);
      ((struct qdp_ril_param *)((long)(frame - 0x310) + lVar12))->value = 0;
      ((struct qdp_ril_param *)((long)(frame - 0x310) + lVar12))->value = 0;
    }
    lVar12 = lVar12 + 0x10;
  } while (lVar12 != 0xa0);
  if (bVar8)
  {
    QDP_LOG(frame - 0x270, DAT_00125ad0, DAT_001026d4, "qdp_3gpp2_profile_update_params EXIT success");
    uVar9 = 1;
  }
  else
  {
    QDP_LOG(frame - 0x270, DAT_00125ab8, DAT_001026d4, "qdp_3gpp2_profile_update_params EXIT failed");
    uVar9 = 0;
  }
LAB_0011044c:
  return uVar9;
}

long qdp_3gpp2_profile_fill_common_params(struct qdp_ril_param *param_1, uint32_t param_2, uint32_t *param_3)
{
  struct qdp_profile_modify_req *mod = (struct qdp_profile_modify_req *)param_3;
  char logbuf[0x200];
  const char *str;
  int len;
  ulong idx;
  uint result;

  QDP_LOG(logbuf, DAT_00127c30, DAT_001026d4, "qdp_3gpp2_profile_fill_common_params ENTRY");
  if (param_1 == NULL || param_3 == NULL)
  {
    QDP_LOG(logbuf, DAT_00127c48, "Invalid profile params for 3GPP2 profile_id [%d]", param_2);
    result = 0;
  }
  else
  {
    QDP_LOG(logbuf, DAT_00127c60, "Updating 3GPP2 WDS profile params for profile id [%d]", param_2);
    mod->profile_index = (uint8_t)param_2;
    mod->profile_type = 1;
    idx = 0;
    do
    {
      switch ((int)idx)
      {
      case 2:
        len = param_1->length;
        if (0x95 < len)
        {
          QDP_LOG(logbuf, DAT_00127c78, "Invalid length [%d] of APN [%s] rcvd", len, param_1->value);
          break;
        }
        if (len < 1)
        {
          if (len == 0)
          {
            mod->cdma_apn_name_valid = 1;
            mod->cdma_apn_name[0] = 0;
          }
        }
        else
        {
          mod->cdma_apn_name_valid = 1;
          __strlcpy_chk(mod->cdma_apn_name, param_1->value, 0x97, 0x97);
        }
        break;
      case 3:
        len = param_1->length;
        if (0x7e < len)
        {
          QDP_LOG(logbuf, DAT_00127c90, "Invalid length [%d] of USERNAME [%s] rcvd", len, param_1->value);
          break;
        }
        if (0 < len)
        {
          mod->cdma1_username_valid = 1;
          __strlcpy_chk(mod->cdma1_username, param_1->value, 0x80, 0x80);
          mod->cdma2_username_valid = 1;
          __strlcpy_chk(mod->cdma2_username, param_1->value, 0x80, 0x80);
        }
        break;
      case 4:
        len = param_1->length;
        if (0x7e < len)
        {
          QDP_LOG(logbuf, DAT_00127ca8, "Invalid length [%d] of PASSWORD [%s] rcvd", len, param_1->value);
          break;
        }
        if (0 < len)
        {
          mod->cdma1_password_valid = 1;
          __strlcpy_chk(mod->cdma1_password, param_1->value, 0x80, 0x80);
          mod->cdma2_password_valid = 1;
          __strlcpy_chk(mod->cdma2_password, param_1->value, 0x80, 0x80);
        }
        break;
      case 5:
        if (0 < param_1->length)
        {
          str = param_1->value;
          if (strcmp(str, "0") == 0)
          {
            mod->cdma1_auth_pref = 0;
          }
          else if (strcmp(str, "1") == 0)
          {
            mod->cdma1_auth_pref = 1;
          }
          else if (strcmp(str, "2") == 0)
          {
            mod->cdma1_auth_pref = 2;
          }
          else if (strcmp(str, "3") == 0)
          {
            mod->cdma1_auth_pref = 3;
          }
          else
          {
            QDP_LOG(logbuf, DAT_00127cc0, "invalid auth_pref [%s]", str);
            break;
          }
          mod->cdma1_auth_pref_valid = 1;
        }
        break;
      case 6:
        if (0 < param_1->length)
        {
          str = param_1->value;
          if (strcmp(str, "IP") == 0)
          {
            mod->cdma_pdn_type = 0;
          }
          else if (strcmp(str, "IPV6") == 0)
          {
            mod->cdma_pdn_type = 1;
          }
          else if (strcmp(str, "IPV4V6") == 0)
          {
            mod->cdma_pdn_type = 2;
          }
          else
          {
            QDP_LOG(logbuf, DAT_00127cd8, "invalid ip_family [%s]", str);
            break;
          }
          mod->cdma_pdn_type_valid = 1;
        }
        break;
      default:
        QDP_LOG(logbuf, DAT_00127cf0, "ignoring RIL param idx [%d]", (uint)idx);
      }
      idx = idx + 1;
      param_1 = param_1 + 1;
    } while (idx != 10);
    result = 1;
  }
  QDP_LOG(logbuf, DAT_00127d08, DAT_001026d4, "qdp_3gpp2_profile_fill_common_params EXIT");
  return result;
}

long qdp_3gpp2_profile_create(struct qdp_ril_param *param_1, uint *param_2, uint32_t *param_3, int param_4, int param_5)
{
  struct qdp_profile_req req;
  struct qdp_create_res res;
  char logbuf[0x200];
  char *desc;
  const char *str;
  int len;
  int rc;
  ulong idx;

  memset(&req, 0, sizeof req);
  memset(&res, 0, sizeof res);
  QDP_LOG(logbuf, DAT_00125ae8, DAT_001026d4, "qdp_3gpp2_profile_create ENTRY");
  if (qdp_inited == '\0')
  {
    QDP_LOG(logbuf, DAT_00125b00, DAT_001026d4, "qdp not inited");
    return 0;
  }
  if (param_1 == NULL || param_2 == NULL)
  {
    QDP_LOG_FMT(logbuf, DAT_001026d4, "NULL start_nw_params received");
    desc = DAT_00125b18;
    goto fail;
  }
  if (*param_2 != 0xffffffff)
  {
    QDP_LOG_FMT(logbuf, DAT_001026d4, "placeholder contains non-zero value");
    desc = DAT_00125b30;
    goto fail;
  }
  memset(&req, 0, sizeof req);
  memset(&res, 0, sizeof res);
  if (param_5 == 3)
  {
    req.emergency_calls_valid = 1;
    req.emergency_calls = 1;
  }
  idx = 0;
  do
  {
    switch ((int)idx)
    {
    case 2:
      len = param_1->length;
      if (0x95 < len)
      {
        QDP_LOG_FMT(logbuf, "Invalid length [%d] of APN [%s] rcvd", len, param_1->value);
        desc = DAT_00125b48;
        goto fail;
      }
      if (0 < len)
      {
        req.cdma_apn_name_valid = 1;
        __strlcpy_chk(req.cdma_apn_name, param_1->value, 0x97, 0x97);
      }
      break;
    case 3:
      len = param_1->length;
      if (0x7e < len)
      {
        QDP_LOG_FMT(logbuf, "Invalid length [%d] of USERNAME [%s] rcvd", len, param_1->value);
        desc = DAT_00125b60;
        goto fail;
      }
      if (0 < len)
      {
        req.cdma1_username_valid = 1;
        __strlcpy_chk(req.cdma1_username, param_1->value, 0x80, 0x80);
        req.cdma2_username_valid = 1;
        __strlcpy_chk(req.cdma2_username, param_1->value, 0x80, 0x80);
        QDP_LOG(logbuf, DAT_00125b78, DAT_001026d4, "qdp_3gpp2_profile_create copied PDN level user");
      }
      break;
    case 4:
      len = param_1->length;
      if (0x7e < len)
      {
        QDP_LOG_FMT(logbuf, "Invalid length [%d] of PASSWORD [%s] rcvd", len, param_1->value);
        desc = DAT_00125b90;
        goto fail;
      }
      if (0 < len)
      {
        req.cdma1_password_valid = 1;
        __strlcpy_chk(req.cdma1_password, param_1->value, 0x80, 0x80);
        req.cdma2_password_valid = 1;
        __strlcpy_chk(req.cdma2_password, param_1->value, 0x80, 0x80);
        QDP_LOG(logbuf, DAT_00125ba8, DAT_001026d4, "qdp_3gpp2_profile_create copied PDN password user");
      }
      break;
    case 5:
      if (param_1->length < 1)
        break;
      str = param_1->value;
      if (strcmp(str, "0") == 0)
      {
        req.cdma1_auth_pref_valid = 1;
        req.cdma1_auth_pref = 0;
        req.cdma2_auth_pref_valid = 1;
        req.cdma2_auth_pref = 0;
        QDP_LOG(logbuf, DAT_00125bc0, DAT_001026d4, "qdp_3gpp2_profile_create copied PDN level !PAN&CHAP");
      }
      else if (strcmp(str, "1") == 0)
      {
        req.cdma1_auth_pref_valid = 1;
        req.cdma1_auth_pref = 1;
        req.cdma2_auth_pref_valid = 1;
        req.cdma2_auth_pref = 1;
        QDP_LOG(logbuf, DAT_00125bd8, DAT_001026d4, "qdp_3gpp2_profile_create copied PDN level PAP");
      }
      else if (strcmp(str, "2") == 0)
      {
        req.cdma1_auth_pref_valid = 1;
        req.cdma1_auth_pref = 2;
        req.cdma2_auth_pref_valid = 1;
        req.cdma2_auth_pref = 2;
        QDP_LOG(logbuf, DAT_00125bf0, DAT_001026d4, "qdp_3gpp2_profile_create copied PDN level CHAP");
      }
      else if (strcmp(str, "3") == 0)
      {
        req.cdma1_auth_pref_valid = 1;
        req.cdma1_auth_pref = 3;
        req.cdma2_auth_pref_valid = 1;
        req.cdma2_auth_pref = 3;
        QDP_LOG(logbuf, DAT_00125c08, DAT_001026d4, "qdp_3gpp2_profile_create copied PDN level PAP+CHAP");
      }
      else
      {
        QDP_LOG_FMT(logbuf, "invalid auth_pref [%s]", str);
        desc = DAT_00125c20;
        goto fail;
      }
      break;
    case 6:
      if (0 < param_1->length)
      {
        str = param_1->value;
        if (strcmp(str, "IP") == 0)
        {
          req.cdma_pdn_type = 0;
        }
        else if (strcmp(str, "IPV6") == 0)
        {
          req.cdma_pdn_type = 1;
        }
        else if (strcmp(str, "IPV4V6") == 0)
        {
          req.cdma_pdn_type = 2;
        }
        else
        {
          QDP_LOG_FMT(logbuf, "invalid ip_family [%s]", str);
          desc = DAT_00125c38;
          goto fail;
        }
        req.cdma_pdn_type_valid = 1;
      }
      break;
    default:
      QDP_LOG(logbuf, DAT_00125c50, "ignoring RIL param idx [%d]", (uint)idx);
      break;
    case 8:
      if (isAPAssistMode != '\0' && 0 < param_1->length)
      {
        req.apn_type_mask_valid = 1;
        req.apn_type_mask = strtoul(param_1->value, NULL, 0);
      }
    }
    idx = idx + 1;
    param_1 = param_1 + 1;
  } while (idx != 10);
  if (param_4 == 1)
  {
    req.persistent_valid = 1;
    req.persistent = 1;
  }
  req.profile_type = 1;
  if (qdp_modem_supports_nonpersist_flag != '\0')
  {
    req.persistent_valid = 1;
    req.persistent = 0;
  }
  rc = qdp_qmi_wds_create_profile(global_qmi_wds_hndl, (long)&req, (int *)&res);
  if (rc == 1)
  {
    QDP_LOG(logbuf, DAT_00125c80, "profile [%d] created", res.profile_id);
    *param_2 = (uint)res.profile_id;
    *param_3 = qdp_get_3gpp2_profile_pdn_type(req.cdma_pdn_type, req.cdma_pdn_type_valid);
    QDP_LOG(logbuf, DAT_00125cb0, DAT_001026d4, "qdp_3gpp2_profile_create EXIT success");
    return 1;
  }
  QDP_LOG_FMT(logbuf, "could not create wds profile. qmi returned [%d] qmi_err_code [%d]", res.qmi_rc, res.qmi_err);
  desc = DAT_00125c68;
fail:
  msg_sprintf(desc, logbuf);
  QDP_LOG(logbuf, DAT_00125c98, DAT_001026d4, "qdp_3gpp2_profile_create EXIT failed");
  return 0;
}

long qdp_epc_profile_create(struct qdp_ril_param *param_1, uint *param_2, int *param_3, int *param_4, int param_5, uint param_6)
{
  struct qdp_profile_req req;
  struct qdp_create_res res;
  char logbuf[0x200];
  char *desc;
  const char *str;
  int len;
  int rc;
  ulong idx;

  memset(&res, 0, sizeof res);
  memset(logbuf, 0, sizeof logbuf);
  memset(&req, 0, sizeof req);
  qdp_format_log_msg(logbuf, 0x200, DAT_001026d4, "qdp_epc_profile_create ENTRY");
  msg_sprintf(DAT_00125cc8, logbuf);
  if (qdp_inited == '\0')
  {
    QDP_LOG_FMT(logbuf, DAT_001026d4, "qdp not inited");
    desc = DAT_00125ce0;
  }
  else
  {
    if (param_1 == NULL || param_2 == NULL)
    {
      QDP_LOG_FMT(logbuf, DAT_001026d4, "NULL start_nw_params received");
      desc = DAT_00125cf8;
    }
    else if (*param_2 == 0xffffffff)
    {
      if (*param_3 == -1 && *param_4 == -1)
      {
        memset(&res, 0, sizeof res);
        memset(&req, 0, sizeof req);
        idx = 0;
        do
        {
          switch ((int)idx)
          {
          case 2:
            len = param_1->length;
            if (0x95 < len)
            {
              QDP_LOG_FMT(logbuf, "Invalid length [%d] of APN [%s] rcvd", len, param_1->value);
              desc = DAT_00125d40;
              goto fail;
            }
            if (len < 1)
            {
              if (len == 0)
              {
                req.apn_name_valid = 1;
                req.apn_name[0] = 0;
                req.cdma_apn_name_valid = 1;
                req.cdma_apn_name[0] = 0;
              }
            }
            else
            {
              req.apn_name_valid = 1;
              __strlcpy_chk(req.apn_name, param_1->value, 0x97, 0x97);
              req.cdma_apn_name_valid = 1;
              __strlcpy_chk(req.cdma_apn_name, param_1->value, 0x97, 0x97);
            }
            break;
          case 3:
            len = param_1->length;
            if (0x7e < len)
            {
              QDP_LOG_FMT(logbuf, "Invalid length [%d] of USERNAME [%s] rcvd", len, param_1->value);
              desc = DAT_00125d58;
              goto fail;
            }
            if (0 < len)
            {
              req.username_valid = 1;
              __strlcpy_chk(req.username, param_1->value, 0x80, 0x80);
              req.cdma1_username_valid = 1;
              __strlcpy_chk(req.cdma1_username, param_1->value, 0x80, 0x80);
              req.epc_username_valid = 1;
              __strlcpy_chk(req.epc_username, param_1->value, 0x80, 0x80);
              req.cdma2_username_valid = 1;
              __strlcpy_chk(req.cdma2_username, param_1->value, 0x80, 0x80);
            }
            break;
          case 4:
            len = param_1->length;
            if (0x7e < len)
            {
              QDP_LOG_FMT(logbuf, "Invalid length [%d] of PASSWORD [%s] rcvd", len, param_1->value);
              desc = DAT_00125d70;
              goto fail;
            }
            if (0 < len)
            {
              req.password_valid = 1;
              __strlcpy_chk(req.password, param_1->value, 0x80, 0x80);
              req.cdma1_password_valid = 1;
              __strlcpy_chk(req.cdma1_password, param_1->value, 0x80, 0x80);
              req.epc_password_valid = 1;
              __strlcpy_chk(req.epc_password, param_1->value, 0x80, 0x80);
              req.cdma2_password_valid = 1;
              __strlcpy_chk(req.cdma2_password, param_1->value, 0x80, 0x80);
            }
            break;
          case 5:
            if (0 < param_1->length)
            {
              str = param_1->value;
              if (strcmp(str, "0") == 0)
              {
                req.auth_pref = 0;
              }
              else if (strcmp(str, "1") == 0)
              {
                req.auth_pref = 1;
              }
              else if (strcmp(str, "2") == 0)
              {
                req.auth_pref = 2;
              }
              else if (strcmp(str, "3") == 0)
              {
                req.auth_pref = 3;
              }
              else
              {
                QDP_LOG_FMT(logbuf, "invalid auth_pref [%s]", str);
                desc = DAT_00125d88;
                goto fail;
              }
              req.auth_pref_valid = 1;
              req.cdma1_auth_pref = req.auth_pref;
              req.cdma1_auth_pref_valid = 1;
              req.epc_auth_pref = req.auth_pref;
              req.epc_auth_pref_valid = 1;
              req.cdma2_auth_pref = req.auth_pref;
              req.cdma2_auth_pref_valid = 1;
            }
            break;
          case 6:
            if (0 < param_1->length)
            {
              str = param_1->value;
              if (strcmp(str, "IP") == 0)
              {
                req.cdma_pdn_type = 0;
                req.pdp_type = 0;
              }
              else if (strcmp(str, "IPV6") == 0)
              {
                req.cdma_pdn_type = 1;
                req.pdp_type = 2;
              }
              else if (strcmp(str, "IPV4V6") == 0)
              {
                req.cdma_pdn_type = 2;
                req.pdp_type = 3;
              }
              else
              {
                QDP_LOG_FMT(logbuf, "invalid ip_family [%s]", str);
                desc = DAT_00125da0;
                goto fail;
              }
              req.cdma_pdn_type_valid = 1;
              req.pdp_type_valid = 1;
            }
            break;
          default:
            QDP_LOG(logbuf, DAT_00125db8, "ignoring RIL param idx [%d]", (uint)idx);
          }
          idx = idx + 1;
          param_1 = param_1 + 1;
        } while (idx != 10);
        req.profile_type = 2;
        req.profile_name_valid = 1;
        if (param_6 == 1)
        {
          __strlcpy_chk(req.profile_name, "qdp_profile_ia", 0x33, 0x33);
          QDP_LOG(logbuf, DAT_00125dd0, DAT_001026d4, "Creating QDP_profile_IA type profile.");
        }
        else if ((param_6 & 0xfffffffd) == 0)
        {
          __strlcpy_chk(req.profile_name, "qdp_profile", 0x33, 0x33);
          QDP_LOG(logbuf, DAT_00125de8, DAT_001026d4, "Creating QDP_profile type profile.");
        }
        req.persistent = param_5 == 1;
        req.persistent_valid = 1;
        rc = qdp_qmi_wds_create_profile(global_qmi_wds_hndl, (long)&req, (int *)&res);
        if (rc == 1)
        {
          QDP_LOG(logbuf, DAT_00125e18, "profile [%d] created", res.profile_id);
          *param_2 = (uint)res.profile_id;
          rc = qdp_get_3gpp2_profile_pdn_type(req.cdma_pdn_type, req.cdma_pdn_type_valid);
          *param_3 = rc;
          rc = qdp_get_3gpp_profile_pdn_type(req.pdp_type, req.pdp_type_valid);
          *param_4 = rc;
          QDP_LOG(logbuf, DAT_00125e48, DAT_001026d4, "qdp_epc_profile_create EXIT success");
          return 1;
        }
        QDP_LOG_FMT(logbuf, "could not create wds profile. qmi returned [%d] qmi_err_code [%d]", res.qmi_rc, res.qmi_err);
        desc = DAT_00125e00;
      }
      else
      {
        QDP_LOG_FMT(logbuf, DAT_001026d4, "placeholder contains non-zero value");
        desc = DAT_00125d28;
      }
    }
    else
    {
      QDP_LOG_FMT(logbuf, DAT_001026d4, "placeholder contains non-zero value");
      desc = DAT_00125d10;
    }
  fail:
    msg_sprintf(desc, logbuf);
    QDP_LOG_FMT(logbuf, DAT_001026d4, "qdp_epc_profile_create EXIT failed");
    desc = DAT_00125e30;
  }
  msg_sprintf(desc, logbuf);
  return 0;
}

long qdp_profile_ref_up(uint param_1)

{
  uint64_t uVar2 = 0;
  long lVar3;
  uint8_t frame_store[1088] __attribute__((aligned(16)));
  uint8_t *const frame = frame_store + 1088;

  memset(frame_store, 0, sizeof frame_store);
  lVar3 = 0;
  while ((((char *)DAT_0012a9a4)[lVar3] != '\x01' || ((byte)((char *)DAT_0012a9ac)[lVar3] != param_1)))
  {
    lVar3 = lVar3 + 0x44;
    if (lVar3 == 0x660)
    {
      QDP_LOG(frame - 0x230, DAT_00125e78, "profile id [%d] not found in QDP list");
      uVar2 = 0;
    LAB_00112618:
      return (long)uVar2;
    }
  }
  if (0xfffffffe < *(uint *)((long)DAT_0012a9e0 + lVar3))
  {
    /* WARNING: Subroutine does not return */
    abort();
  }
  *(uint *)((long)DAT_0012a9e0 + lVar3) = *(uint *)((long)DAT_0012a9e0 + lVar3) + 1;
  QDP_LOG(frame - 0x230, DAT_00125e60, "new ref_count on profile [%d] is [%d]");
  uVar2 = 1;
  goto LAB_00112618;
}

long is_qdp_profile(uint32_t param_1)

{
  int iVar2;
  uint64_t uVar3 = 0;
  uint8_t frame_store[6352] __attribute__((aligned(16)));
  uint8_t *const frame = frame_store + 6352;

  memset(frame_store, 0, sizeof frame_store);
  QDP_LOG(frame - 0xc80, DAT_00125e90, "is_qdp_profile for 3GPP profile id [%d]", param_1);
  memset(frame - 0xe88, 0, 0x8);
  memset(frame - 0xc80, 0, 0xc40);
  (*(uint40_t *)((char *)(frame - 0xe88) + 0)) = CONCAT14((char)param_1, (uint32_t)*(uint64_t *)(frame - 0xe88));
  iVar2 = qdp_qmi_wds_query_profile(*(uint64_t *)PTR_global_qmi_wds_hndl_001295b0, (long)((frame - 0xe88)), (frame - 0xc80));
  uVar3 = 0;
  if (iVar2 == 1)
  {
    if (((((char)*(uint64_t *)(frame - 0xc78) == '\0') ||
          (iVar2 = strncasecmp("qdp_profile", (char *)((long)(frame - 0xc78) + 1), 0xb), iVar2 != 0)) ||
         ((((struct qdp_query_res *)(frame - 0xc80))->persistent_valid) == '\0')) ||
        ((((struct qdp_query_res *)(frame - 0xc80))->persistent) != '\0'))
    {
      QDP_LOG(frame - 0xe80, DAT_00125ec0, DAT_001026d4, "It is not a qdp profile.");
      uVar3 = 0;
    }
    else
    {
      QDP_LOG(frame - 0xe80, DAT_00125ea8, "Found a QDP profile @ [%d]", (((struct qdp_query_req *)(frame - 0xe88))->profile_index));
      uVar3 = 1;
    }
  }
  return (long)uVar3;
}

long qdp_profile_release(uint param_1)

{
  int iVar1;
  char cVar3;
  uint uVar4;
  uint8_t *puVar5;
  int iVar6;
  long lVar7;
  uint8_t frame_store[1136] __attribute__((aligned(16)));
  uint8_t *const frame = frame_store + 1136;

  memset(frame_store, 0, sizeof frame_store);
  QDP_LOG(frame - 0x260, DAT_00125ed8, DAT_001026d4, "qdp_profile_release ENTRY");
  if (*PTR_qdp_inited_001295b8 == '\0')
  {
    QDP_LOG_FMT(frame - 0x260, DAT_001026d4, "qdp not inited");
    puVar5 = DAT_00125ef0;
  }
  else
  {
    lVar7 = 0;
    do
    {
      if ((((char *)DAT_0012a9a4)[lVar7] == '\x01') && ((byte)((char *)DAT_0012a9ac)[lVar7] == param_1))
      {
        iVar1 = *(int *)((long)DAT_0012a9e0 + lVar7);
        if (iVar1 == 0)
        {
          iVar6 = 0;
        }
        else
        {
          iVar6 = iVar1 + -1;
          *(int *)((long)DAT_0012a9e0 + lVar7) = iVar6;
        }
        uVar4 = (uint)(iVar1 != 0);
        QDP_LOG(frame - 0x260, DAT_00125f08, "new ref_count on profile [%d] is [%d]", param_1, iVar6);
        if (((*(int *)((long)DAT_0012a9e0 + lVar7) == 0) &&
             (*(int *)((long)DAT_0012a9e4 + lVar7) == 0)) &&
            ((*(int *)((long)DAT_0012a9a8 + lVar7) == 1 ||
              (cVar3 = is_qdp_profile(param_1), cVar3 != '\0'))))
        {
          QDP_LOG(frame - 0x260, DAT_00125f20, "deleting profile id [%d] now", param_1);
          uVar4 = qdp_delete_profile_id(param_1);
        }
        goto LAB_00112a2c;
      }
      lVar7 = lVar7 + 0x44;
    } while (lVar7 != 0x660);
    QDP_LOG_FMT(frame - 0x260, "profile id [%d] not found in QDP list", param_1);
    puVar5 = DAT_00125f38;
  }
  msg_sprintf(puVar5, (frame - 0x260));
  uVar4 = 0;
LAB_00112a2c:
  return uVar4;
}

long qdp_delete_profile_id(uint param_1)

{
  int iVar2;
  uint64_t uVar3 = 0;
  uint8_t *puVar4;
  byte bVar5;
  long lVar6;
  uint8_t frame_store[1136] __attribute__((aligned(16)));
  uint8_t *const frame = frame_store + 1136;

  memset(frame_store, 0, sizeof frame_store);
  lVar6 = 0;
  while ((((char *)DAT_0012a9a4)[lVar6] != '\x01' || (bVar5 = ((char *)DAT_0012a9ac)[lVar6], bVar5 != param_1)))
  {
    lVar6 = lVar6 + 0x44;
    if (lVar6 == 0x660)
    {
      QDP_LOG_FMT(frame - 0x260, "profile id [%d] not found in our global list", param_1);
      puVar4 = DAT_00127d68;
    LAB_00112dec:
      msg_sprintf(puVar4, (frame - 0x260));
      uVar3 = 0;
    LAB_00112df8:
      return (long)uVar3;
    }
  }
  memset(frame - 0x268, 0, 0x8);
  if (*(int *)((long)DAT_0012a9e0 + lVar6) != 0)
  {
    QDP_LOG(frame - 0x260, DAT_00127d20, "deleting profile [%d] that is referred to by [%d] users", param_1);
    bVar5 = ((char *)DAT_0012a9ac)[lVar6];
  }
  *(uint64_t *)(frame - 0x268) = (ulong)CONCAT14(bVar5, *(uint32_t *)((long)DAT_0012a9a8 + lVar6));
  iVar2 = qdp_qmi_wds_delete_profile(*(uint64_t *)PTR_global_qmi_wds_hndl_001295b0, (long)((frame - 0x268)));
  if (iVar2 == 1)
  {
    QDP_LOG(frame - 0x260, DAT_00127d50, "profile id [%d] successfully deleted", param_1);
    *(uint64_t *)((long)DAT_0012a9b0 + lVar6) = 0;
    *(uint64_t *)((long)DAT_0012a9a8 + lVar6) = 0;
    *(uint64_t *)((long)DAT_0012a9c0 + lVar6) = 0;
    *(uint64_t *)(DAT_0012a9b8 + lVar6) = 0;
    *(uint64_t *)((long)DAT_0012a9d0 + lVar6) = 0;
    *(uint64_t *)(DAT_0012a9c8 + lVar6) = 0;
    *(uint64_t *)((long)DAT_0012a9d8 + lVar6) = 0;
    *(uint32_t *)((long)DAT_0012a9e0 + lVar6) = 0;
    ((char *)DAT_0012a9a4)[lVar6] = 0;
    uVar3 = 1;
    goto LAB_00112df8;
  }
  QDP_LOG_FMT(frame - 0x260, "could not delete profile [%d]", ((char *)DAT_0012a9ac)[lVar6]);
  puVar4 = DAT_00127d38;
  goto LAB_00112dec;
}

long qdp_profile_release_ex(uint32_t param_1)

{
  uint32_t uVar2;
  uint8_t frame_store[1104] __attribute__((aligned(16)));
  uint8_t *const frame = frame_store + 1104;

  memset(frame_store, 0, sizeof frame_store);
  QDP_LOG(frame - 0x240, DAT_00125f50, DAT_001026d4, "qdp_profile_release_ex ENTRY");
  if (*PTR_qdp_inited_001295b8 == '\0')
  {
    QDP_LOG(frame - 0x240, DAT_00125f68, DAT_001026d4, "qdp not inited");
    uVar2 = 0;
  }
  else
  {
    uVar2 = qdp_delete_profile_id(param_1);
    QDP_LOG(frame - 0x240, DAT_00125f80, DAT_001026d4, "qdp_profile_release_ex EXIT");
  }
  return uVar2;
}

static int qdp_profile1_apn_empty(void)
{
  struct qdp_query_req qreq;
  struct qdp_query_res qres;

  memset(&qreq, 0, sizeof qreq);
  memset(&qres, 0, sizeof qres);
  qreq.profile_type = 0;
  qreq.profile_index = 1;
  if (qdp_qmi_wds_query_profile(global_qmi_wds_hndl, (long)&qreq, (int *)&qres) != 1)
    return 0;
  return qres.apn_name_valid == '\0' || qres.apn_name[0] == '\0';
}

long qdp_lte_attach_profile_lookup(long param_1, int *param_2, long param_3, long param_4, uint8_t *param_5, int *param_6)

{
  uint uVar1;
  bool bVar3;
  uint8_t *puVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  size_t sVar9;
  void *__s;
  uint8_t *puVar10;
  uint64_t *puVar11;
  uint64_t uVar12;
  char *pcVar13;
  uint32_t uVar14;
  long lVar15;
  uint *puVar16;
  uint8_t frame_store[6576] __attribute__((aligned(16)));
  uint8_t *const frame = frame_store + 6576;

  memset(frame_store, 0, sizeof frame_store);
  (*(int *)((frame - 0xf68))) = -1;
  memset(frame - 0xf64, 0, 0x4);
  (*(uint32_t *)((frame - 0xf70))) = 0xffffffff;
  (*(int *)((frame - 0xf6c))) = -1;
  ((char *)(frame - 0xf74))[0] = '\0';
  memset(frame - 0xf78, 0, 0x4);
  memset(frame - 0x120, 0, 0xa0);
  QDP_LOG(frame - 0xd60, DAT_00125f98, DAT_001026d4, "qdp_lte_attach_profile_lookup ENTRY");
  (*(uint32_t *)((frame - 0xf7c))) = 0xffffffff;
  if (*PTR_qdp_inited_001295b8 == '\0')
  {
    QDP_LOG(frame - 0xd60, DAT_00125fb0, DAT_001026d4, "qdp not inited");
    uVar14 = 0;
    goto LAB_0011362c;
  }
  if ((((param_1 == 0) || (param_2 == (int *)0x0)) || (param_3 == 0)) ||
      ((param_4 == 0 || (param_6 == (int *)0x0))))
  {
    QDP_LOG_FMT(frame - 0xd60, DAT_001026d4, "NULL params rcvd");
    puVar10 = DAT_00125fc8;
  LAB_00113488:
    puVar11 = (frame - 0xd60);
  LAB_0011348c:
    msg_sprintf(puVar10, puVar11);
    bVar3 = false;
  }
  else
  {
    *param_5 = 0;
    iVar7 = 0;
    lVar15 = 0;
    puVar16 = (uint *)PTR_param_tech_map_tbl_001295d8;
    do
    {
      pcVar13 = *(char **)(param_1 + (ulong)*puVar16 * 8);
      if ((pcVar13 != (char *)0x0) &&
          ((*pcVar13 != '\0' ||
            ((lVar15 == 0x20 && (**(char **)(param_1 + (ulong)*puVar16 * 8) == '\0'))))))
      {
        sVar9 = strlen(*(char **)(param_1 + (ulong)*puVar16 * 8));
        iVar6 = (int)sVar9;
        iVar8 = iVar6 + 1;
        if (SCARRY4(iVar6, 1))
          goto LAB_00114250;
        if ((int)puVar16[2] < iVar8)
        {
          QDP_LOG_FMT(frame - 0xd60, "RIL param length too long [%d] for ril index [%d]", iVar8, iVar7);
          puVar10 = DAT_00125fe0;
        LAB_0011330c:
          msg_sprintf(puVar10, (frame - 0xd60));
        }
        else
        {
          __s = malloc((long)iVar8);
          ((struct qdp_ril_param *)((long)(frame - 0x120) + lVar15))->value = __s;
          if (__s != (void *)0x0)
          {
            memset(__s, 0, (long)iVar8);
            QDP_LOG_FMT(frame - 0xd60, "QDP: malloc\'ed [%p]", ((struct qdp_ril_param *)((long)(frame - 0x120) + lVar15))->value);
            puVar10 = DAT_00125ff8;
            goto LAB_0011330c;
          }
        }
        if (*(long *)((long)(frame - 0x120) + lVar15) == 0)
        {
          QDP_LOG_FMT(frame - 0xd60, "memory error while trying to allocate 3gpp param for [%s]", *(uint64_t *)(param_1 + (ulong)*puVar16 * 8));
          puVar10 = DAT_00126028;
        }
        else
        {
          if (SBORROW4(iVar8, 1))
          {
          LAB_00114250:
            /* WARNING: Subroutine does not return */
            abort();
          }
          uVar1 = *puVar16;
          *(int *)((long)((int *)(frame - 0x118)) + lVar15) = iVar6;
          strlcpy((char *)(*(long *)((long)(frame - 0x120) + lVar15)), (const char *)(*(uint64_t *)(param_1 + (ulong)uVar1 * 8)),
                  (long)iVar8);
          QDP_LOG_FMT(frame - 0xd60, "copied [%s], len[%d] to [%p] loc", *(uint64_t *)(param_1 + (ulong)*puVar16 * 8), *(uint32_t *)((long)((int *)(frame - 0x118)) + lVar15), ((struct qdp_ril_param *)((long)(frame - 0x120) + lVar15))->value);
          puVar10 = DAT_00126010;
        }
        msg_sprintf(puVar10, (frame - 0xd60));
      }
      lVar15 = lVar15 + 0x10;
      iVar7 = iVar7 + 1;
      puVar16 = puVar16 + 3;
    } while (lVar15 != 0xa0);
    *param_2 = -1;
    (*(uint32_t *)((frame - 0xf7c))) = 0xffffffff;
    param_6[0] = 0;
    puVar10 = PTR_qdp_modem_supports_epc_profile_001295c0;
    param_6[1] = 0;
    if (*PTR_qdp_modem_supports_epc_profile_001295c0 == '\0')
    {
      iVar7 = qdp_3gpp_multi_param_search((struct qdp_ril_param *)(frame - 0x120), param_2, (int *)(param_3), param_5, (frame - 0xf78), 1, ((char *)(frame - 0xf74)));
      if (iVar7 == 1)
      {
        cVar5 = (*(int *)((frame - 0xf78))) == 0;
        goto LAB_001137f0;
      }
      QDP_LOG_FMT(frame - 0xd60, "qdp_3gpp_multi_param_search returned err [%d]", (*(int *)((frame - 0xf78))));
      puVar10 = DAT_00126088;
      goto LAB_00113488;
    }
    iVar7 = qdp_epc_multi_param_search((long)((frame - 0x120)), param_2, (frame - 0xf7c), (int *)(param_3), param_5, (frame - 0xf78));
    if ((iVar7 == 1) && (*param_2 != -1))
    {
      cVar5 = '\x03';
      if ((*(int *)((frame - 0xf78))) != 0)
      {
        cVar5 = '\0';
      }
    LAB_001137f0:
      iVar7 = 1;
    LAB_0011393c:
      iVar8 = *param_2;
      if ((iVar8 == -1) && ((*(int *)((frame - 0xf78))) != 0))
      {
        QDP_LOG(frame - 0xd60, DAT_001260a0, "Profile lookup error[%d], no profile created");
        bVar3 = false;
        *param_6 = (*(int *)((frame - 0xf78)));
        param_6[1] = 1;
        goto LAB_00113494;
      }
      if (iVar8 != -1)
        goto LAB_001139d4;
    LAB_00113a6c:
      if (qdp_profile1_apn_empty())
      {
        /* The modem holds LTE attach until profile 1 is written; fill an empty profile 1
           (no Profile1 in the carrier fsg) instead of using or creating another profile. */
        (*(int *)((frame - 0xf68))) = 1;
        iVar8 = 1;
      }
      else
      {
        iVar8 = qdp_get_ia_type_profile_id((frame - 0xf68));
      }
      iVar7 = (*(int *)((frame - 0xf68)));
      if (iVar8 != 1)
      {
        if (*puVar10 == '\0')
        {
          QDP_LOG(frame - 0xd60, DAT_001261d8, DAT_001026d4, "qdp_3gpp_multi_param_search could not find a valid profile");
          iVar7 = qdp_3gpp_profile_create((struct qdp_ril_param *)(frame - 0x120), param_2, (int *)(param_3), 1, 1);
          if (iVar7 == 1)
            goto LAB_00113f3c;
          QDP_LOG_FMT(frame - 0xd60, "qdp_3gpp_profile_create failed [%d]", iVar7);
          puVar10 = DAT_001261f0;
        }
        else
        {
          QDP_LOG(frame - 0xd60, DAT_001261a8, DAT_001026d4, "qdp_epc_multi_param_search could not find a valid profile");
          iVar7 = qdp_epc_profile_create((struct qdp_ril_param *)(frame - 0x120), param_2, (frame - 0xf7c), (int *)(param_3), 1, 1);
          if (iVar7 == 1)
          {
          LAB_00113f3c:
            if (*param_2 != -1)
            {
              if (*puVar10 == '\0')
              {
                uVar12 = 1;
              }
              else
              {
                uVar12 = 3;
              }
              bVar3 = true;
              qdp_insert_profile_id(*param_2, uVar12, 1);
              goto LAB_00113494;
            }
            goto LAB_0011409c;
          }
          QDP_LOG_FMT(frame - 0xd60, "qdp_epc_profile_create failed [%d]", iVar7);
          puVar10 = DAT_001261c0;
        }
        goto LAB_00113488;
      }
      QDP_LOG(frame - 0xd60, DAT_00126118, "found [%d] IA tye profile ID", (*(int *)((frame - 0xf68))));
      memset(frame - 0xf88, 0, 0x8);
      memset(frame - 0xd60, 0, 0xc40);
      puVar4 = PTR_global_qmi_wds_hndl_001295b0;
      uVar1 = CONCAT31((*(uint24_t *)((char *)(frame - 0xf88) + 5)), (char)iVar7);
      *(uint64_t *)(frame - 0xf88) = (ulong)uVar1 << 0x20;
      if (*puVar10 == '\0')
      {
      LAB_00113cf4:
        *(uint64_t *)(frame - 0xf88) = *(uint64_t *)(frame - 0xf88) & 0xffffffff00000000;
        iVar8 = qdp_qmi_wds_query_profile(*(uint64_t *)puVar4, (long)((frame - 0xf88)), (frame - 0xd60));
        if (iVar8 == 1)
        {
          iVar8 = 1;
          goto LAB_00113d14;
        }
        QDP_LOG(frame - 0xf60, DAT_00126130, "Querying default profile failed with error code [%d][%d]", *(uint64_t *)(frame - 0xd60) & 0xffffffff, (((struct qdp_qmi_status *)(frame - 0xd60))->qmi_err));
        QDP_LOG(frame - 0xf60, DAT_00126148, DAT_001026d4, "Querying default profile failed or it is a modem profile ");
        *param_5 = 0;
        *param_2 = -1;
        if ((*puVar10 == '\0') || ((*(int *)((frame - 0xf6c))) != -1))
        {
          iVar7 = qdp_3gpp_profile_create((struct qdp_ril_param *)(frame - 0x120), param_2, (int *)(param_3), 1, 1);
        }
        else
        {
          iVar7 = qdp_epc_profile_create((struct qdp_ril_param *)(frame - 0x120), param_2, (frame - 0xf7c), (int *)(param_3), 1, 1);
        }
        if (iVar7 == 1)
        {
          if (*param_2 == -1)
            goto LAB_0011409c;
          if (*puVar10 == '\0')
          {
            uVar12 = 1;
          }
          else
          {
            uVar12 = 3;
          }
          qdp_insert_profile_id(*param_2, uVar12, 1);
          bVar3 = true;
          goto LAB_00113494;
        }
        QDP_LOG_FMT(frame - 0xf60, DAT_001026d4, "Default profile creation failed!");
        puVar10 = DAT_00126160;
        puVar11 = (frame - 0xf60);
      }
      else
      {
        *(uint64_t *)(frame - 0xf88) = CONCAT44(uVar1, 2);
        iVar8 = qdp_qmi_wds_query_profile(*(uint64_t *)PTR_global_qmi_wds_hndl_001295b0, (long)((frame - 0xf88)), (frame - 0xd60));
        if (iVar8 != 1)
          goto LAB_00113cf4;
        iVar8 = 3;
      LAB_00113d14:
        *param_5 = 1;
        *(ulong *)(param_5 + 4) = *(uint64_t *)(frame - 0xf88);
        memcpy(param_5 + 0x10, (frame - 0xd60), 0xc40);
        QDP_LOG(frame - 0xf60, DAT_00126178, "Profile [%d] already exists", iVar7);
        if ((iVar8 == 3) && (*puVar10 != '\0'))
        {
          iVar8 = qdp_epc_profile_update((long)((frame - 0x120)), iVar7, (frame - 0xf64), 1);
        }
        else
        {
          iVar8 = qdp_3gpp_profile_update((long)((frame - 0x120)), iVar7, (frame - 0xf64), 1);
        }
        if (iVar8 == 1)
        {
          *param_2 = iVar7;
        LAB_0011409c:
          bVar3 = true;
          goto LAB_00113494;
        }
        QDP_LOG_FMT(frame - 0xf60, "Could not update profile [%d] on modem with LTEinformation,Error code [%d][%d]", iVar7, iVar8, (*(uint32_t *)((frame - 0xf64))));
        puVar10 = DAT_00126190;
        puVar11 = (frame - 0xf60);
      }
      goto LAB_0011348c;
    }
    QDP_LOG(frame - 0xd60, DAT_00126040, "qdp_epc_multi_param_search returned err [%d] with profile id [%d]", (*(int *)((frame - 0xf78))));
    iVar7 = qdp_3gpp_multi_param_search((struct qdp_ril_param *)(frame - 0x120), param_2, (int *)(param_3), param_5, (frame - 0xf78), 1, ((char *)(frame - 0xf74)));
    if (iVar7 != 1)
    {
      QDP_LOG_FMT(frame - 0xd60, "qdp_3gpp_multi_param_search returned err [%d]", (*(int *)((frame - 0xf78))));
      puVar10 = DAT_00126058;
      goto LAB_00113488;
    }
    cVar5 = (*(int *)((frame - 0xf78))) == 0;
    iVar7 = qdp_3gpp2_multi_param_search((long)((frame - 0x120)), (frame - 0xf6c), (frame - 0xf70), 0, (frame - 0xf78));
    if ((iVar7 != 1) || ((*(int *)((frame - 0xf78))) != 0))
    {
      QDP_LOG(frame - 0xd60, DAT_00126070, "qdp_3gpp2_multi_param_search returned err [%d]");
      (*(int *)((frame - 0xf6c))) = -1;
      goto LAB_0011393c;
    }
    iVar8 = *param_2;
    if (iVar8 == -1)
      goto LAB_00113a6c;
    iVar7 = 1;
  LAB_001139d4:
    QDP_LOG(frame - 0xd60, DAT_001260b8, "found [%d] 3gpp / epc profile id", iVar8);
    if ((cVar5 == '\x03') && (*puVar10 != '\0'))
    {
      iVar7 = qdp_epc_profile_update((long)((frame - 0x120)), *param_2, (frame - 0xf64), 1);
    }
    else if ((*PTR_qdp_allow_update_modem_profile_001295c8 == '\0' & ((char *)(frame - 0xf74))[0] == '\0') &&
             *PTR_carrier_config_flag_001295d0 == '\0')
    {
      QDP_LOG(frame - 0xd60, DAT_001260e8, DAT_001026d4, "Updating profile params is not needed. Skipping Profile Updation");
    }
    else
    {
      QDP_LOG(frame - 0xd60, DAT_001260d0, DAT_001026d4, "Updating the profile with requested params");
      iVar7 = qdp_3gpp_profile_update((long)((frame - 0x120)), *param_2, (frame - 0xf64), 1);
    }
    bVar3 = true;
    if (iVar7 != 1)
    {
      QDP_LOG_FMT(frame - 0xd60, "Could not update profile [%d] on modem with LTE info,Error code [%d][%d]", *param_2, iVar7, (*(uint32_t *)((frame - 0xf64))));
      puVar10 = DAT_00126100;
      goto LAB_00113488;
    }
  }
LAB_00113494:
  lVar15 = 0;
  do
  {
    if ((0 < *(int *)((long)((int *)(frame - 0x118)) + lVar15)) && (*(long *)((long)(frame - 0x120) + lVar15) != 0))
    {
      QDP_LOG(frame - 0xd60, DAT_00127ae0, "QDP: freeing [%p]");
      free(((struct qdp_ril_param *)((long)(frame - 0x120) + lVar15))->value);
      ((struct qdp_ril_param *)((long)(frame - 0x120) + lVar15))->value = 0;
      ((struct qdp_ril_param *)((long)(frame - 0x120) + lVar15))->value = 0;
    }
    lVar15 = lVar15 + 0x10;
  } while (lVar15 != 0xa0);
  if (bVar3)
  {
    QDP_LOG(frame - 0xd60, DAT_00126220, DAT_001026d4, "qdp_lte_attach_profile_lookup EXIT success");
    uVar14 = 1;
  }
  else
  {
    QDP_LOG(frame - 0xd60, DAT_00126208, DAT_001026d4, "qdp_lte_attach_profile_lookup EXIT failed");
    uVar14 = 0;
  }
LAB_0011362c:
  return uVar14;
}

long qdp_3gpp_multi_param_search(struct qdp_ril_param *param_1, uint *param_2, int *param_3, uint8_t *param_4,
                                 uint32_t *param_5, int param_6, uint8_t *param_7)

{
  char *__s1;
  char *__s2;
  uint uVar1;
  uint8_t uVar2;
  bool bVar4;
  bool bVar5;
  char cVar6;
  bool bVar7;
  int iVar8;
  uint8_t *puVar9;
  uint64_t uVar10 = 0;
  size_t __n;
  ulong uVar11;
  uint32_t uVar12;
  ulong uVar13;
  long lVar14;
  bool bVar15;
  struct qdp_ril_param *puVar16;
  uint uVar17;
  ulong uVar18;
  char *pcVar19;
  uint8_t frame_store[29456] __attribute__((aligned(16)));
  uint8_t *const frame = frame_store + 29456;

  memset(frame_store, 0, sizeof frame_store);
  memset(frame - 0x3b20, 0, 0x37dc);
  memset(frame - 0x340, 0, 0xb8);
  if (*PTR_qdp_inited_001295b8 != '\0')
  {
    QDP_LOG(frame - 0x4760, DAT_00127d98, DAT_001026d4, "qdp_3gpp_multi_param_search ENTRY");
    if ((((param_1 == (struct qdp_ril_param *)0x0) || (param_2 == (uint *)0x0)) || (param_3 == (int *)0x0)) ||
        ((param_5 == (uint32_t *)0x0 || (param_7 == (uint8_t *)0x0))))
    {
      QDP_LOG_FMT(frame - 0x4760, DAT_001026d4, "invalid params");
      puVar9 = DAT_00127db0;
    }
    else if (*param_2 == 0xffffffff)
    {
      if (*param_3 == -1)
      {
        if (param_4 != (uint8_t *)0x0)
        {
          *param_4 = 0;
        }
        *param_7 = 0;
        memset(frame - 0x3b20, 0, 0x37dc);
        memset(frame - 0x340, 0, 0xb8);
        *(uint64_t *)(frame - 0x340) = CONCAT71((*(uint56_t *)((char *)(frame - 0x340) + 1)), 1);
        *(uint64_t *)(frame - 0x340) = *(uint64_t *)(frame - 0x340) & 0xffffffff;
        iVar8 = qdp_qmi_wds_get_profile_list(*(uint64_t *)PTR_global_qmi_wds_hndl_001295b0, (long)((frame - 0x340)), (frame - 0x3b20));
        if (iVar8 == 1)
        {
          QDP_LOG(frame - 0x4760, DAT_00127e10, "get_profile_list for profile_tech [%d] returned [%d] profile ids", (((struct qdp_list_req *)(frame - 0x340))->profile_type), (((struct qdp_list_res *)(frame - 0x3b20))->profile_count));
          if ((((struct qdp_list_res *)(frame - 0x3b20))->profile_count) != 0)
          {
            __s1 = (char *)((long)(frame - 0x4758) + 1);
            uVar13 = 0;
            __s2 = (char *)((long)(frame - 0x4710) + 5);
            uVar2 = 0;
            bVar5 = false;
          LAB_00114738:
            *param_7 = 0;
            memset(frame - 0x4768, 0, 0xc48);
            (*(uint40_t *)((char *)(frame - 0x4768) + 0)) = CONCAT14(((uint8_t *)(frame - 0x3b10))[uVar13 * 0x38], (uint32_t)*(uint64_t *)(frame - 0x4768));
            iVar8 = qdp_qmi_wds_query_profile(*(uint64_t *)PTR_global_qmi_wds_hndl_001295b0, (long)((frame - 0x4768)),
                                              (frame - 0x4760));
            uVar17 = (uint)uVar13;
            if (iVar8 == 1)
            {
              QDP_LOG(frame - 0x280, DAT_00127e40, "successfully queried 3GPP profile [%d]", (((struct qdp_query_req *)(frame - 0x4768))->profile_index));
              if (((char)*(uint64_t *)(frame - 0x4758) != '\0') &&
                  (iVar8 = strncasecmp(__s1, "qdp_profile", 0xb), iVar8 == 0))
              {
                QDP_LOG(frame - 0x280, DAT_00127e58, DAT_001026d4, "Profile is a QDP profile.");
                iVar8 = strncasecmp(__s1, "qdp_profile_ia", 0xe);
                if (iVar8 == 0)
                {
                  QDP_LOG(frame - 0x280, DAT_00127e70, DAT_001026d4, "Profile is a QDP IA profile");
                  goto LAB_00114818;
                }
                if (param_6 != 1)
                  goto LAB_00114818;
                goto LAB_001161cc;
              }
            LAB_00114818:
              cVar6 = (((struct qdp_query_req *)(frame - 0x4768))->profile_index);
              QDP_LOG(frame - 0x280, DAT_00127f00, DAT_001026d4, "qdp_match_3gpp_profile_params ENTRY");
              if (((char)*(uint64_t *)(frame - 0x4758) == '\0') ||
                  (iVar8 = strncasecmp(__s1, "qdp_profile", 0xb), iVar8 != 0))
              {
                bVar15 = false;
              }
              else
              {
                QDP_LOG(frame - 0x280, DAT_00127f18, DAT_001026d4, "Profile is a QDP profile.");
                bVar15 = true;
              }
              bVar7 = param_6 == 1;
              *param_7 = 0;
              uVar18 = 0;
              bVar4 = true;
              puVar16 = param_1;
            LAB_00114ab0:
              if ((puVar16->length < 1) && ((uVar18 != 2 || (puVar16->length != 0))))
                goto LAB_00114aa0;
              pcVar19 = (char *)puVar16->value;
              if (pcVar19 == (char *)0x0)
              {
                QDP_LOG(frame - 0x280, DAT_00127f30, DAT_001026d4, "programming error: NULL buffer foundwhere length is not zero");
                QDP_LOG(frame - 0x280, DAT_00128350, DAT_001026d4, "qdp_match_3gpp_profile_params EXIT failed");
                QDP_LOG(frame - 0x280, DAT_00127e88, DAT_001026d4, "programming error");
                bVar15 = false;
                goto LAB_00117000;
              }
              switch ((int)uVar18)
              {
              case 2:
                if ((((struct qdp_query_res *)(frame - 0x4760))->apn_name_valid) == '\0')
                {
                  QDP_LOG_FMT(frame - 0x280, DAT_001026d4, "modem profile parameter APN is invalid");
                  puVar9 = DAT_00127f48;
                LAB_00116554:
                  msg_sprintf(puVar9, (frame - 0x280));
                  bVar4 = false;
                  bVar15 = true;
                  goto LAB_001160fc;
                }
                __n = __strlen_chk(__s2, 0xbeb);
                if (__n != (long)puVar16->length)
                {
                  QDP_LOG(frame - 0x280, DAT_00127fa8, DAT_001026d4, "APN: Lengths did not match");
                  QDP_LOG(frame - 0x280, DAT_00127fc0, "Modem APN len [%d], Input APN len [%d]", __n, puVar16->length);
                  bVar15 = true;
                  bVar4 = false;
                  goto LAB_001160fc;
                }
                pcVar19 = (char *)puVar16->value;
                iVar8 = strncasecmp(pcVar19, __s2, __n);
                if (iVar8 != 0)
                {
                  QDP_LOG(frame - 0x280, DAT_00127f78, "APN [%s] did not match", pcVar19);
                  QDP_LOG_FMT(frame - 0x280, "Modem contains [%s]", __s2);
                  puVar9 = DAT_00127f90;
                  goto LAB_001164c0;
                }
                QDP_LOG(frame - 0x280, DAT_00127f60, "APN [%s] matched", pcVar19);
                break;
              case 3:
                QDP_LOG(frame - 0x280, DAT_00127fd8, DAT_001026d4, "QDP_RIL_NAI is not used for matching 3GPP profile");
                if ((*(uint8_t *)((char *)(frame - 0x45d0) + 4)) == '\0')
                {
                  QDP_LOG_FMT(frame - 0x280, DAT_001026d4, "modem profile parameter username not available");
                  puVar9 = DAT_00127ff0;
                  goto LAB_00114a9c;
                }
                pcVar19 = (char *)puVar16->value;
                uVar11 = __strlen_chk((char *)((long)(frame - 0x45d0) + 5), 0xaab);
                if (0xfffffffffffffffe < uVar11)
                {
                LAB_0011725c:
                  /* WARNING: Subroutine does not return */
                  abort();
                }
                iVar8 = strncasecmp(pcVar19, (char *)((long)(frame - 0x45d0) + 5), uVar11 + 1);
                if (iVar8 != 0)
                {
                  QDP_LOG_FMT(frame - 0x280, DAT_001026d4, "Update needed due to change in username");
                  puVar9 = DAT_00128008;
                  goto LAB_00114fbc;
                }
                break;
              case 4:
                QDP_LOG(frame - 0x280, DAT_00128020, DAT_001026d4, "QDP_RIL_PASSWORD is not used for matching 3GPP profile");
                if ((((struct qdp_query_res *)(frame - 0x4760))->password_valid) == '\0')
                {
                  QDP_LOG_FMT(frame - 0x280, DAT_001026d4, "modem profile parameter password not available");
                  puVar9 = DAT_00128038;
                  goto LAB_00114a9c;
                }
                pcVar19 = (char *)puVar16->value;
                uVar11 = __strlen_chk(((char *)(frame - 0x454a)), 0xa2a);
                if (0xfffffffffffffffe < uVar11)
                  goto LAB_0011725c;
                iVar8 = strncasecmp(pcVar19, ((char *)(frame - 0x454a)), uVar11 + 1);
                if (iVar8 != 0)
                {
                  QDP_LOG_FMT(frame - 0x280, DAT_001026d4, "Update needed due to change in password");
                  puVar9 = DAT_00128050;
                  goto LAB_00114fbc;
                }
                break;
              case 5:
                QDP_LOG(frame - 0x280, DAT_00128068, DAT_001026d4, "QDP_RIL_AUTH is not used for matching 3GPP profile");
                if ((*(char *)((frame - 0x44ca))) == '\0')
                {
                  QDP_LOG_FMT(frame - 0x280, DAT_001026d4, "modem profile parameter Authentication not available");
                  puVar9 = DAT_00128080;
                  goto LAB_00114a9c;
                }
                switch ((((struct qdp_query_res *)(frame - 0x4760))->auth_pref))
                {
                case 0:
                  iVar8 = strncasecmp((char *)puVar16->value, "0", 1);
                  if (iVar8 != 0)
                  {
                    QDP_LOG_FMT(frame - 0x280, DAT_001026d4, "Update needed due to change in Authentication. RIL Auth is not \'No Auth\' ");
                    puVar9 = DAT_001280e0;
                  LAB_00114fbc:
                    msg_sprintf(puVar9, (frame - 0x280));
                  LAB_00114fc0:
                    *param_7 = 1;
                  }
                  break;
                case 1:
                  iVar8 = strncasecmp((char *)puVar16->value, "1", 1);
                  if (iVar8 != 0)
                  {
                    QDP_LOG_FMT(frame - 0x280, DAT_001026d4, "Update needed due to change in Authentication. RIL Auth is not PAP ");
                    puVar9 = DAT_00128098;
                    goto LAB_00114fbc;
                  }
                  break;
                case 2:
                  iVar8 = strncasecmp((char *)puVar16->value, "2", 1);
                  if (iVar8 != 0)
                  {
                    QDP_LOG_FMT(frame - 0x280, DAT_001026d4, "Update needed due to change in Authentication. RIL Auth is not CHAP ");
                    puVar9 = DAT_001280b0;
                    goto LAB_00114fbc;
                  }
                  break;
                case 3:
                  iVar8 = strncasecmp((char *)puVar16->value, "3", 1);
                  if (iVar8 != 0)
                  {
                    QDP_LOG_FMT(frame - 0x280, DAT_001026d4, "Update needed due to change in Authentication. RIL Auth is not ( PAP & CHAP) ");
                    puVar9 = DAT_001280c8;
                    goto LAB_00114fbc;
                  }
                  break;
                default:
                  QDP_LOG_FMT(frame - 0x280, "profile contains invalid value [%d]");
                  puVar9 = DAT_001280f8;
                  goto LAB_00114a9c;
                }
                break;
              case 6:
                if (*PTR_carrier_config_flag_001295d0 != '\0' ||
                    *PTR_qdp_allow_update_modem_profile_001295c8 != '\0')
                {
                  QDP_LOG_FMT(frame - 0x280, DAT_001026d4, "QDP_RIL_IP_FAMILY is not used for matching 3GPP profile");
                  puVar9 = DAT_00128110;
                  goto LAB_00114a9c;
                }
                if ((((struct qdp_query_res *)(frame - 0x4760))->pdp_type_valid) == '\0')
                {
                  QDP_LOG_FMT(frame - 0x280, DAT_001026d4, "modem profile parameter PDP_TYPE not available");
                  puVar9 = DAT_00128128;
                  goto LAB_00116554;
                }
                if (param_6 != 0 && (!bVar7 || bVar15))
                {
                  if (bVar7 && bVar15)
                  {
                    QDP_LOG(frame - 0x280, DAT_00128290, DAT_001026d4, "QDP_RIL_IP_FAMILY is not used  for matching QDP created 3GPP profiles in Initial Attach");
                    pcVar19 = (char *)puVar16->value;
                    if ((int)(*(ulong *)((frame - 0x4720))) == 3)
                    {
                      iVar8 = strncasecmp(pcVar19, "IPV4V6", 7);
                      if (iVar8 == 0)
                        break;
                      QDP_LOG_FMT(frame - 0x280, DAT_001026d4, "Update needed due to change in Home IPType");
                      puVar9 = DAT_001283b0;
                    }
                    else if ((int)(*(ulong *)((frame - 0x4720))) == 2)
                    {
                      iVar8 = strncasecmp(pcVar19, "IPV6", 5);
                      if (iVar8 == 0)
                        break;
                      QDP_LOG_FMT(frame - 0x280, DAT_001026d4, "Update needed due to change in Home IPType");
                      puVar9 = DAT_00128398;
                    }
                    else if ((int)(*(ulong *)((frame - 0x4720))) == 0)
                    {
                      iVar8 = strncasecmp(pcVar19, "IP", 3);
                      if (iVar8 == 0)
                        break;
                      QDP_LOG_FMT(frame - 0x280, DAT_001026d4, "Update needed due to change in Home IPType");
                      puVar9 = DAT_00128380;
                    }
                    else
                    {
                      QDP_LOG_FMT(frame - 0x280, "invalid ip family [%d] found in profile");
                      puVar9 = DAT_001283c8;
                    }
                    goto LAB_00114fbc;
                  }
                  break;
                }
                if ((int)(*(ulong *)((frame - 0x4720))) == 3)
                {
                  iVar8 = strncasecmp(pcVar19, "IPV4V6", 7);
                  if (iVar8 != 0)
                  {
                    QDP_LOG(frame - 0x280, DAT_00128248, "Any ip family supported, ip_family [%s] found a match", pcVar19);
                    QDP_LOG_FMT(frame - 0x280, DAT_001026d4, "Update needed due to change in Home IPType");
                    puVar9 = DAT_00128260;
                  LAB_00115b20:
                    msg_sprintf(puVar9, (frame - 0x280));
                    bVar4 = false;
                    goto LAB_00114fc0;
                  }
                  QDP_LOG_FMT(frame - 0x280, "Any ip family supported, ip_family [%s] best match found", pcVar19);
                  puVar9 = DAT_00128230;
                }
                else if ((int)(*(ulong *)((frame - 0x4720))) == 2)
                {
                  iVar8 = strncasecmp(pcVar19, "IPV6", 5);
                  if (iVar8 != 0)
                  {
                    iVar8 = strncasecmp(pcVar19, "IPV4V6", 7);
                    if (iVar8 == 0)
                    {
                      QDP_LOG(frame - 0x280, DAT_001281d0, "ip_family [%s] found a match", pcVar19);
                      QDP_LOG_FMT(frame - 0x280, DAT_001026d4, "Update needed due to change in Home IPType");
                      puVar9 = DAT_001281e8;
                      goto LAB_00115b20;
                    }
                    QDP_LOG(frame - 0x280, DAT_00128200, "ip_family [%s] did not match", pcVar19);
                    lVar14 = 0;
                    goto LAB_001169dc;
                  }
                  QDP_LOG_FMT(frame - 0x280, "ip_family [%s] best match found", pcVar19);
                  puVar9 = DAT_001281b8;
                }
                else
                {
                  if ((int)(*(ulong *)((frame - 0x4720))) != 0)
                  {
                    QDP_LOG(frame - 0x280, DAT_00128278, "invalid ip family [%d] found in profile");
                    bVar4 = false;
                    goto LAB_00116890;
                  }
                  iVar8 = strncasecmp(pcVar19, "IP", 3);
                  if (iVar8 != 0)
                  {
                    iVar8 = strncasecmp(pcVar19, "IPV4V6", 7);
                    if (iVar8 == 0)
                    {
                      QDP_LOG(frame - 0x280, DAT_00128158, "ip_family [%s] found a match", pcVar19);
                      QDP_LOG_FMT(frame - 0x280, DAT_001026d4, "Update needed due to change in Home IPType");
                      puVar9 = DAT_00128170;
                      goto LAB_00115b20;
                    }
                    QDP_LOG(frame - 0x280, DAT_00128188, "ip_family [%s] did not match", pcVar19);
                    lVar14 = 0;
                    goto LAB_0011692c;
                  }
                  QDP_LOG_FMT(frame - 0x280, "ip_family [%s] best match found", pcVar19);
                  puVar9 = DAT_00128140;
                }
                goto LAB_00114a9c;
              case 7:
                if (*PTR_carrier_config_flag_001295d0 != '\0' ||
                    *PTR_qdp_allow_update_modem_profile_001295c8 != '\0')
                {
                  QDP_LOG_FMT(frame - 0x280, DAT_001026d4, "QDP_RIL_IP_ROAMING is not used for matching 3GPP profile");
                  puVar9 = DAT_001282a8;
                  goto LAB_00114a9c;
                }
                if (((*(char *)((frame - 0x4346))) == '\0') || ((*(char *)((frame - 0x4340))) == '\0'))
                {
                  QDP_LOG(frame - 0x280, DAT_001282c0, DAT_001026d4, "modem profile parameter PDP_TYPE not available");
                  *param_7 = 1;
                }
                uVar1 = (((struct qdp_query_res *)(frame - 0x4760))->roaming_ip1);
                if (!bVar7 || bVar15)
                {
                  if (bVar7 && bVar15)
                  {
                    QDP_LOG(frame - 0x280, DAT_00128308, DAT_001026d4, "QDP_RIL_IP_ROAMING is not used for matching 3GPP profile");
                    if ((((struct qdp_query_res *)(frame - 0x4760))->roaming_ip1) == (((struct qdp_query_res *)(frame - 0x4760))->roaming_ip2))
                    {
                      pcVar19 = (char *)puVar16->value;
                      if ((((struct qdp_query_res *)(frame - 0x4760))->roaming_ip1) == 2)
                      {
                        iVar8 = strncasecmp(pcVar19, "IPV4V6", 7);
                        if (iVar8 == 0)
                          break;
                        QDP_LOG_FMT(frame - 0x280, DAT_001026d4, "Update needed due to change in Roaming IPType");
                        puVar9 = DAT_00128518;
                      }
                      else if ((((struct qdp_query_res *)(frame - 0x4760))->roaming_ip1) == 1)
                      {
                        iVar8 = strncasecmp(pcVar19, "IPV6", 5);
                        if (iVar8 == 0)
                          break;
                        QDP_LOG_FMT(frame - 0x280, DAT_001026d4, "Update needed due to change in Roaming IPType");
                        puVar9 = DAT_00128500;
                      }
                      else if ((((struct qdp_query_res *)(frame - 0x4760))->roaming_ip1) == 0)
                      {
                        iVar8 = strncasecmp(pcVar19, "IP", 3);
                        if (iVar8 == 0)
                          break;
                        QDP_LOG_FMT(frame - 0x280, DAT_001026d4, "Update needed due to change in Roaming IPType");
                        puVar9 = DAT_001284e8;
                      }
                      else
                      {
                        QDP_LOG_FMT(frame - 0x280, "invalid Roaming ip family [%d] found in profile. Updating");
                        puVar9 = DAT_00128530;
                      }
                    }
                    else
                    {
                      QDP_LOG_FMT(frame - 0x280, DAT_001026d4, "LTE & UMTS roaming ip types do not match. Updating QDP profile");
                      puVar9 = DAT_00128320;
                    }
                    goto LAB_00114fbc;
                  }
                  break;
                }
                pcVar19 = (char *)puVar16->value;
                if (pcVar19 == (char *)0x0)
                {
                  QDP_LOG_FMT(frame - 0x280, "%s: Invalid params", "qdp_is_roaming_pdp_compatible");
                  puVar9 = DAT_001283e0;
                LAB_001165d8:
                  msg_sprintf(puVar9, (frame - 0x280));
                  uVar12 = 0;
                  goto LAB_00116754;
                }
                if (((*(char *)((frame - 0x4346))) == '\0') || ((*(char *)((frame - 0x4340))) == '\0'))
                {
                  QDP_LOG_FMT(frame - 0x280, "%s: LTE & UMTS roaming ip parameters are not set", "qdp_is_roaming_pdp_compatible");
                  puVar9 = DAT_001283f8;
                LAB_00116654:
                  msg_sprintf(puVar9, (frame - 0x280));
                LAB_00116750:
                  uVar12 = 3;
                LAB_00116754:
                  QDP_LOG(frame - 0x280, DAT_001282d8, DAT_001026d4, "Roaming PDP type does not match");
                  lVar14 = 0;
                  goto LAB_001167ec;
                }
                if ((((struct qdp_query_res *)(frame - 0x4760))->roaming_ip1) != (((struct qdp_query_res *)(frame - 0x4760))->roaming_ip2))
                {
                  QDP_LOG(frame - 0x280, DAT_00128410, "%s: LTE & UMTS roaming ip types do not match. Ignoring this profile", "qdp_is_roaming_pdp_compatible");
                  goto LAB_00116750;
                }
                if ((((struct qdp_query_res *)(frame - 0x4760))->roaming_ip1) == 0xff)
                {
                  QDP_LOG(frame - 0x280, DAT_00128428, "%s: LTE & UMTS roaming ip types are set to \'WDS_COMMON_PDP_TYPE_PDP_MAX_V01\' - Unconfigured. Considering this as match", "qdp_is_roaming_pdp_compatible");
                  break;
                }
                iVar8 = strcasecmp(pcVar19, "IP");
                if (iVar8 == 0)
                {
                  uVar12 = 0;
                }
                else
                {
                  iVar8 = strcasecmp(pcVar19, "IPV6");
                  if (iVar8 == 0)
                  {
                    uVar12 = 1;
                  }
                  else
                  {
                    iVar8 = strcasecmp(pcVar19, "IPV4V6");
                    uVar12 = 2;
                    if (iVar8 != 0)
                    {
                      uVar12 = 0xffffffff;
                    }
                  }
                }
                if (2 < uVar1)
                {
                  uVar1 = 0xffffffff;
                }
                switch (uVar12)
                {
                case 0:
                  if (uVar1 == 0)
                    break;
                  if (uVar1 == 1)
                  {
                    QDP_LOG(frame - 0x280, DAT_00128440, "%s: qdp roaming IP is v4, profile has v6", "qdp_is_roaming_pdp_compatible");
                    uVar12 = 2;
                  }
                  else
                  {
                    QDP_LOG_FMT(frame - 0x280, "%s: qdp roaming IP is v4, lte/umts profile has ip type other than V4", "qdp_is_roaming_pdp_compatible");
                    puVar9 = DAT_00128458;
                  LAB_00116e10:
                    msg_sprintf(puVar9, (frame - 0x280));
                    uVar12 = 3;
                  }
                  goto LAB_00116754;
                case 1:
                  if (uVar1 != 1)
                  {
                    if (uVar1 != 0)
                    {
                      QDP_LOG_FMT(frame - 0x280, "%s: qdp roaming IP is v6, lte/umts profile has ip type other than V6", "qdp_is_roaming_pdp_compatible");
                      puVar9 = DAT_00128488;
                      goto LAB_00116e10;
                    }
                    QDP_LOG(frame - 0x280, DAT_00128470, "%s: qdp roaming IP is v6, profile has v4", "qdp_is_roaming_pdp_compatible");
                    uVar12 = 1;
                    goto LAB_00116754;
                  }
                  break;
                case 2:
                  if (uVar1 != 2)
                  {
                    QDP_LOG_FMT(frame - 0x280, "%s: qdp roaming IP is v4v6, lte/umts profile has ip type other than V6", "qdp_is_roaming_pdp_compatible");
                    puVar9 = DAT_001284a0;
                    goto LAB_00116654;
                  }
                  break;
                case 0xffffffff:
                  QDP_LOG_FMT(frame - 0x280, "%s: qdp roamign ip type is invalid. Not considering this parameter for matching", "qdp_is_roaming_pdp_compatible");
                  puVar9 = DAT_001284b8;
                  goto LAB_00114a9c;
                default:
                  if (uVar1 == 0xffffffff)
                  {
                    QDP_LOG_FMT(frame - 0x280, "%s: invalid Roaming ip family found in profile. Not considering this as match", "qdp_is_roaming_pdp_compatible");
                    puVar9 = DAT_001284d0;
                    goto LAB_001165d8;
                  }
                }
                break;
              default:
                QDP_LOG_FMT(frame - 0x280, "matching [%d] (qdp_ril_param_idx_t) not supported", uVar18 & 0xffffffff);
                puVar9 = DAT_00128338;
              LAB_00114a9c:
                msg_sprintf(puVar9, (frame - 0x280));
              }
            LAB_00114aa0:
              uVar18 = uVar18 + 1;
              puVar16 = puVar16 + 1;
              if (uVar18 == 10)
                goto LAB_001160ec;
              goto LAB_00114ab0;
            }
            QDP_LOG(frame - 0x280, DAT_00127e28, "query_profile failed with error [%d] qmi_err_code [%d]", *(uint64_t *)(frame - 0x4760) & 0xffffffff, (*(uint32_t *)((char *)(frame - 0x4760) + 4)));
            bVar15 = false;
            goto LAB_00117000;
          }
          goto LAB_00117098;
        }
        QDP_LOG_FMT(frame - 0x4760, "get_profile_list failed with error [%d] qmi_err_code [%d]", (*(uint32_t *)((frame - 0x3b20))), (*(uint32_t *)((frame - 0x3b1c))));
        puVar9 = DAT_00127df8;
      }
      else
      {
        QDP_LOG_FMT(frame - 0x4760, "output placeholder [%d] is not [%d]", *param_3, 0xffffffff);
        puVar9 = DAT_00127de0;
      }
    }
    else
    {
      QDP_LOG_FMT(frame - 0x4760, "output placeholder [%d] is not [%d]", *param_2, 0xffffffff);
      puVar9 = DAT_00127dc8;
    }
    msg_sprintf(puVar9, (frame - 0x4760));
    goto LAB_001144d0;
  }
  QDP_LOG_FMT(frame - 0x4760, DAT_001026d4, "qdp not inited");
  puVar9 = DAT_00127d80;
  goto LAB_00114538;
  while (lVar14 = lVar14 + 0x44, lVar14 != 0x660)
  {
  LAB_001167ec:
    if ((((char *)DAT_0012a9a4)[lVar14] == '\x01') && (((char *)DAT_0012a9ac)[lVar14] == cVar6))
    {
      bVar15 = true;
      goto LAB_001160fc;
    }
  }
  *param_5 = uVar12;
  QDP_LOG(frame - 0x280, DAT_001282f0, "lookup_error updated to %d", uVar12);
LAB_00116890:
  bVar15 = true;
  goto LAB_001160fc;
  while (lVar14 = lVar14 + 0x44, lVar14 != 0x660)
  {
  LAB_001169dc:
    if ((((char *)DAT_0012a9a4)[lVar14] == '\x01') && (((char *)DAT_0012a9ac)[lVar14] == cVar6))
      goto LAB_00116a20;
  }
  if (bVar15)
    goto LAB_00116a20;
  *param_5 = 2;
  QDP_LOG_FMT(frame - 0x280, "lookup_error updated to %d", 2);
  puVar9 = DAT_00128218;
LAB_001164c0:
  msg_sprintf(puVar9, (frame - 0x280));
  goto LAB_001164cc;
  while (lVar14 = lVar14 + 0x44, lVar14 != 0x660)
  {
  LAB_0011692c:
    if ((((char *)DAT_0012a9a4)[lVar14] == '\x01') && (((char *)DAT_0012a9ac)[lVar14] == cVar6))
      goto LAB_00116a20;
  }
  if (bVar15)
  {
  LAB_00116a20:
    bVar4 = false;
    bVar15 = true;
    goto LAB_001160fc;
  }
  *param_5 = 1;
  QDP_LOG(frame - 0x280, DAT_001281a0, "lookup_error updated to %d", 1);
LAB_001164cc:
  bVar15 = true;
  bVar4 = false;
LAB_001160fc:
  QDP_LOG(frame - 0x280, DAT_00128368, DAT_001026d4, "qdp_match_3gpp_profile_params EXIT success");
  if (!bVar15)
  {
    if (bVar4)
    {
      *param_2 = (uint)(((struct qdp_query_req *)(frame - 0x4768))->profile_index);
      iVar8 = qdp_get_3gpp_profile_pdn_type((*(ulong *)((frame - 0x4720))) & 0xffffffff, (((struct qdp_query_res *)(frame - 0x4760))->pdp_type_valid));
      *param_3 = iVar8;
      if (param_4 != (uint8_t *)0x0)
      {
        *param_4 = 1;
        *(uint64_t *)(param_4 + 4) = *(uint64_t *)(frame - 0x4768);
        memcpy(param_4 + 0x10, (frame - 0x4760), 0xc40);
      }
      QDP_LOG(frame - 0x280, DAT_00127ea0, DAT_001026d4, "resetting lookup_error - if any");
      bVar15 = true;
      *param_5 = 0;
      goto LAB_00117000;
    }
    uVar2 = *param_7;
    *param_2 = (uint)(((struct qdp_query_req *)(frame - 0x4768))->profile_index);
    iVar8 = qdp_get_3gpp_profile_pdn_type((*(ulong *)((frame - 0x4720))) & 0xffffffff, (((struct qdp_query_res *)(frame - 0x4760))->pdp_type_valid));
    *param_3 = iVar8;
    bVar5 = true;
    if (param_4 != (uint8_t *)0x0)
    {
      *param_4 = 1;
      *(uint64_t *)(param_4 + 4) = *(uint64_t *)(frame - 0x4768);
      memcpy(param_4 + 0x10, (frame - 0x4760), 0xc40);
    }
  }
LAB_001161cc:
  uVar13 = uVar13 + 1;
  if ((((struct qdp_list_res *)(frame - 0x3b20))->profile_count) <= uVar13)
    goto LAB_00117188;
  goto LAB_00114738;
LAB_001160ec:
  bVar15 = false;
  goto LAB_001160fc;
LAB_00117188:
  uVar17 = uVar17 + 1;
  bVar15 = true;
LAB_00117000:
  if ((bVar5) && (uVar17 == (((struct qdp_list_res *)(frame - 0x3b20))->profile_count)))
  {
    *param_7 = uVar2;
    QDP_LOG(frame - 0x4760, DAT_00127eb8, DAT_001026d4, "resetting lookup_error - if any");
    *param_5 = 0;
  }
  if (bVar15)
  {
  LAB_00117098:
    QDP_LOG(frame - 0x4760, DAT_00127ee8, DAT_001026d4, "qdp_3gpp_multi_param_search EXIT success");
    uVar10 = 1;
    goto LAB_00114544;
  }
LAB_001144d0:
  QDP_LOG_FMT(frame - 0x4760, DAT_001026d4, "qdp_3gpp_multi_param_search EXIT failed");
  puVar9 = DAT_00127ed0;
LAB_00114538:
  msg_sprintf(puVar9, (frame - 0x4760));
  uVar10 = 0;
LAB_00114544:
  return (long)uVar10;
}

long qdp_epc_profile_update(long param_1, uint32_t param_2, uint32_t *param_3, uint32_t param_4)

{
  int iVar2;
  uint8_t *puVar3;
  uint32_t uVar4;
  uint8_t frame_store[6336] __attribute__((aligned(16)));
  uint8_t *const frame = frame_store + 6336;

  memset(frame_store, 0, sizeof frame_store);
  memset(((uint8_t *)(frame - 0xc78)), 0, 0xc30);
  memset(frame - 0xe90, 0, 0x210);
  qdp_format_log_msg((frame - 0xe80), 0x200, DAT_001026d4, "qdp_epc_profile_update ENTRY");
  msg_sprintf(DAT_00128548, (frame - 0xe80));
  if (param_1 == 0)
  {
    QDP_LOG_FMT(frame - 0xe80, "Invalid profile params for profile_id [%d]", param_2);
    puVar3 = DAT_00128560;
  }
  else
  {
    QDP_LOG(frame - 0xe80, DAT_00128578, "Trying to update profile for profile id [%d]", param_2);
    memset(((uint8_t *)(frame - 0xc78)), 0, 0xc30);
    memset(frame - 0xe90, 0, 0x10);
    iVar2 = qdp_epc_profile_fill_common_params((struct qdp_ril_param *)(param_1), param_2, ((uint8_t *)(frame - 0xc78)), param_4);
    if (iVar2 == 1)
    {
      iVar2 = qdp_qmi_wds_modify_profile(*(uint64_t *)PTR_global_qmi_wds_hndl_001295b0, (long)(((uint8_t *)(frame - 0xc78))), (frame - 0xe90));
      if (iVar2 == 1)
      {
        uVar4 = 1;
      }
      else
      {
        uVar4 = 0;
        *param_3 = (((struct qdp_qmi_status *)(frame - 0xe90))->qmi_err);
      }
      goto LAB_001174b4;
    }
    QDP_LOG_FMT(frame - 0xe80, "Failed to fill EPC profile params for profile_id [%d]", param_2);
    puVar3 = DAT_00128590;
  }
  msg_sprintf(puVar3, (frame - 0xe80));
  uVar4 = 0;
LAB_001174b4:
  QDP_LOG(frame - 0xe80, DAT_001285a8, DAT_001026d4, "qdp_epc_profile_update EXIT");
  return uVar4;
}

long qdp_3gpp_profile_update(long param_1, uint32_t param_2, uint32_t *param_3, uint32_t param_4)

{
  int iVar2;
  uint8_t *puVar3;
  uint32_t uVar4;
  uint8_t frame_store[6352] __attribute__((aligned(16)));
  uint8_t *const frame = frame_store + 6352;

  memset(frame_store, 0, sizeof frame_store);
  memset(((uint8_t *)(frame - 0xc88)), 0, 0xc30);
  memset(frame - 0xea0, 0, 0x10);
  ((char *)(frame - 0xea4))[0] = '\0';
  QDP_LOG(frame - 0xe90, DAT_001285c0, DAT_001026d4, "qdp_3gpp_profile_update ENTRY");
  if (param_1 == 0)
  {
    QDP_LOG_FMT(frame - 0xe90, "Invalid profile params for profile_id [%d]", param_2);
    puVar3 = DAT_001285d8;
  }
  else
  {
    memset(((uint8_t *)(frame - 0xc88)), 0, 0xc30);
    memset(frame - 0xea0, 0, 0x10);
    iVar2 = qdp_3gpp_profile_fill_common_params((struct qdp_ril_param *)(param_1), param_2, ((uint8_t *)(frame - 0xc88)), param_4, ((char *)(frame - 0xea4)));
    if (iVar2 == 1)
    {
      if (((char *)(frame - 0xea4))[0] == '\0')
      {
        QDP_LOG(frame - 0xe90, DAT_00128638, DAT_001026d4, "qdp_3gpp_profile_update : Update is not needed");
      }
      else
      {
        QDP_LOG(frame - 0xe90, DAT_00128608, "Updating params for profile id [%d]", param_2);
        iVar2 = qdp_qmi_wds_modify_profile(*(uint64_t *)PTR_global_qmi_wds_hndl_001295b0, (long)(((uint8_t *)(frame - 0xc88))), (frame - 0xea0));
        if (iVar2 != 1)
        {
          QDP_LOG(frame - 0xe90, DAT_00128620, "Failed to modify 3gpp profile params for profile_id [%d]", param_2);
          uVar4 = 0;
          *param_3 = (((struct qdp_qmi_status *)(frame - 0xea0))->qmi_err);
          goto LAB_001178d8;
        }
      }
      uVar4 = 1;
      goto LAB_001178d8;
    }
    QDP_LOG_FMT(frame - 0xe90, "Failed to fill 3gpp profile params for profile_id [%d]", param_2);
    puVar3 = DAT_001285f0;
  }
  msg_sprintf(puVar3, (frame - 0xe90));
  uVar4 = 0;
LAB_001178d8:
  QDP_LOG(frame - 0xe90, DAT_00128650, DAT_001026d4, "qdp_3gpp_profile_update EXIT");
  return uVar4;
}

long qdp_3gpp_profile_create(struct qdp_ril_param *param_1, uint *param_2, int *param_3, int param_4, int param_5)
{
  struct qdp_profile_req req;
  struct qdp_create_res res;
  char logbuf[0x200];
  char *desc;
  const char *str;
  int len;
  int rc;
  ulong idx;

  memset(&res, 0, sizeof res);
  memset(&req, 0, sizeof req);
  if (qdp_inited == '\0')
  {
    QDP_LOG_FMT(logbuf, DAT_001026d4, "qdp not inited");
    desc = DAT_00128668;
  }
  else
  {
    QDP_LOG(logbuf, DAT_00128680, DAT_001026d4, "qdp_3gpp_profile_create ENTRY");
    if (param_1 == NULL || param_2 == NULL || param_3 == NULL)
    {
      QDP_LOG_FMT(logbuf, DAT_001026d4, "NULL start_nw_params received");
      desc = DAT_00128698;
    }
    else if (*param_2 == 0xffffffff)
    {
      if (*param_3 == -1)
      {
        memset(&res, 0, sizeof res);
        memset(&req, 0, sizeof req);
        if (param_5 == 3)
        {
          req.emergency_calls_valid = 1;
          req.emergency_calls = 1;
        }
        idx = 0;
        do
        {
          switch ((int)idx)
          {
          case 2:
            len = param_1->length;
            if (0x95 < len)
            {
              QDP_LOG_FMT(logbuf, "Invalid length [%d] of APN [%s] rcvd", len, param_1->value);
              desc = DAT_001286e0;
              goto fail;
            }
            if (len < 1)
            {
              if (len == 0)
              {
                req.apn_name_valid = 1;
                req.apn_name[0] = 0;
              }
            }
            else
            {
              req.apn_name_valid = 1;
              __strlcpy_chk(req.apn_name, param_1->value, 0x97, 0x97);
            }
            break;
          case 3:
            len = param_1->length;
            if (0x7e < len)
            {
              QDP_LOG_FMT(logbuf, "Invalid length [%d] of USERNAME [%s] rcvd", len, param_1->value);
              desc = DAT_001286f8;
              goto fail;
            }
            if (0 < len)
            {
              req.username_valid = 1;
              __strlcpy_chk(req.username, param_1->value, 0x80, 0x80);
            }
            break;
          case 4:
            len = param_1->length;
            if (0x7e < len)
            {
              QDP_LOG_FMT(logbuf, "Invalid length [%d] of PASSWORD [%s] rcvd", len, param_1->value);
              desc = DAT_00128710;
              goto fail;
            }
            if (0 < len)
            {
              req.password_valid = 1;
              __strlcpy_chk(req.password, param_1->value, 0x80, 0x80);
            }
            break;
          case 5:
            if (0 < param_1->length)
            {
              str = param_1->value;
              if (strcmp(str, "0") == 0)
              {
                req.auth_pref = 0;
              }
              else if (strcmp(str, "1") == 0)
              {
                req.auth_pref = 1;
              }
              else if (strcmp(str, "2") == 0)
              {
                req.auth_pref = 2;
              }
              else if (strcmp(str, "3") == 0)
              {
                req.auth_pref = 3;
              }
              else
              {
                QDP_LOG_FMT(logbuf, "invalid auth_pref [%s]", str);
                desc = DAT_00128728;
                goto fail;
              }
              req.auth_pref_valid = 1;
            }
            break;
          case 6:
            if (0 < param_1->length)
            {
              str = param_1->value;
              if (strcmp(str, "IP") == 0)
              {
                req.pdp_type = 0;
              }
              else if (strcmp(str, "IPV6") == 0)
              {
                req.pdp_type = 2;
              }
              else if (strcmp(str, "IPV4V6") == 0)
              {
                req.pdp_type = 3;
              }
              else
              {
                QDP_LOG_FMT(logbuf, "invalid ip_family [%s]", str);
                desc = DAT_00128740;
                goto fail;
              }
              req.pdp_type_valid = 1;
            }
            break;
          case 7:
            if (0 < param_1->length)
            {
              str = param_1->value;
              if (strcmp(str, "IP") == 0)
              {
                req.roaming_ip1 = 0;
                req.roaming_ip2 = 0;
              }
              else if (strcmp(str, "IPV6") == 0)
              {
                req.roaming_ip1 = 1;
                req.roaming_ip2 = 1;
              }
              else if (strcmp(str, "IPV4V6") == 0)
              {
                req.roaming_ip1 = 2;
                req.roaming_ip2 = 2;
              }
              else
              {
                QDP_LOG_FMT(logbuf, "invalid roaming ip [%s]", str);
                desc = DAT_00128758;
                goto fail;
              }
              req.roaming_ip1_valid = 1;
              req.roaming_ip2_valid = 1;
            }
            break;
          case 8:
            if (isAPAssistMode != '\0' && 0 < param_1->length)
            {
              req.apn_type_mask_valid = 0;
              req.apn_type_mask = strtoul(param_1->value, NULL, 0);
            }
            break;
          case 9:
            if (0 < param_1->length && param_1->value != NULL)
            {
              req.ril_param9_valid = 1;
              req.ril_param9 = (uint8_t)strtoul(param_1->value, NULL, 0);
            }
            break;
          default:
            QDP_LOG(logbuf, DAT_00128770, "ignoring RIL param idx [%d]", (uint)idx);
          }
          idx = idx + 1;
          param_1 = param_1 + 1;
        } while (idx != 10);
        req.profile_type = 0;
        if (param_4 == 1)
        {
          req.persistent = 1;
          req.persistent_valid = 1;
        }
        else if (qdp_modem_supports_nonpersist_flag != '\0')
        {
          req.persistent = 0;
          req.persistent_valid = 1;
        }
        req.profile_name_valid = 1;
        if ((param_5 - 2U < 2) || (param_5 == 0))
        {
          __strlcpy_chk(req.profile_name, "qdp_profile", 0x33, 0x33);
          QDP_LOG(logbuf, DAT_001287a0, DAT_001026d4, "Creating QDP_profile type profile.");
        }
        else if (param_5 == 1)
        {
          __strlcpy_chk(req.profile_name, "qdp_profile_ia", 0x33, 0x33);
          QDP_LOG(logbuf, DAT_00128788, DAT_001026d4, "Creating QDP_profile_IA type profile.");
        }
        rc = qdp_qmi_wds_create_profile(global_qmi_wds_hndl, (long)&req, (int *)&res);
        if (rc == 1)
        {
          QDP_LOG(logbuf, DAT_001287d0, "profile [%d] created", res.profile_id);
          *param_2 = (uint)res.profile_id;
          rc = qdp_get_3gpp_profile_pdn_type(req.pdp_type, req.pdp_type_valid);
          *param_3 = rc;
          QDP_LOG(logbuf, DAT_00128800, DAT_001026d4, "qdp_3gpp_profile_create EXIT success");
          return 1;
        }
        QDP_LOG_FMT(logbuf, "could not create wds profile. qmi returned [%d] qmi_err_code [%d]", res.qmi_rc, res.qmi_err);
        desc = DAT_001287b8;
      }
      else
      {
        QDP_LOG_FMT(logbuf, DAT_001026d4, "placeholder contains non-zero value");
        desc = DAT_001286c8;
      }
    }
    else
    {
      QDP_LOG_FMT(logbuf, DAT_001026d4, "placeholder contains non-zero value");
      desc = DAT_001286b0;
    }
  fail:
    msg_sprintf(desc, logbuf);
    QDP_LOG_FMT(logbuf, DAT_001026d4, "qdp_3gpp_profile_create EXIT failed");
    desc = DAT_001287e8;
  }
  msg_sprintf(desc, logbuf);
  return 0;
}

long qdp_insert_profile_id(long param_1, int param_2, uint32_t param_3)

{
  uint32_t *puVar1;
  uint8_t *puVar3;
  long lVar4;
  uint8_t *puVar5;
  uint8_t frame_store[1104] __attribute__((aligned(16)));
  uint8_t *const frame = frame_store + 1104;

  long lRet = param_1;
  memset(frame_store, 0, sizeof frame_store);
  for (lVar4 = 0; lVar4 < 24; lVar4++)
  {
    puVar5 = DAT_0012a9a4 + lVar4 * 0x44;
    if (*(char *)puVar5 == '\0')
    {
      break;
    }
  }
  if (lVar4 == 24)
  {
    return lRet;
  }
  puVar1 = (uint32_t *)DAT_0012a9a8 + lVar4 * 0x11;
  ((char *)DAT_0012a9ac)[lVar4 * 0x44] = param_1;
  ((uint32_t *)DAT_0012a9e4)[lVar4 * 0x11] = param_3;
  if (param_2 == 3)
  {
    *puVar1 = 2;
    QDP_LOG_FMT(frame - 0x240, "EPC profile_id [%d] created by QDP");
    puVar3 = DAT_00128848;
  }
  else if (param_2 == 2)
  {
    *puVar1 = 1;
    QDP_LOG_FMT(frame - 0x240, "3GPP2 profile_id [%d] created by QDP");
    puVar3 = DAT_00128830;
  }
  else if (param_2 == 1)
  {
    *puVar1 = 0;
    QDP_LOG_FMT(frame - 0x240, "3GPP profile_id [%d] created by QDP");
    puVar3 = DAT_00128818;
  }
  else
  {
    QDP_LOG_FMT(frame - 0x240, DAT_001026d4, "programming error");
    puVar3 = DAT_00128860;
  }
  lRet = msg_sprintf(puVar3, (frame - 0x240));
  *puVar5 = 1;
LAB_00118a48:
  return lRet;
}

long qdp_match_lte_attach_profile_params(uint32_t param_1, long param_2)

{
  char *__s;
  char *__s1;
  char *__s_00;
  char *__s1_00;
  bool bVar2;
  uint8_t *puVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  size_t sVar7;
  size_t sVar8;
  size_t sVar9;
  size_t sVar10;
  uint8_t *puVar11;
  byte bVar12;
  char *pcVar13;
  char *pcVar14;
  uint8_t frame_store[6928] __attribute__((aligned(16)));
  uint8_t *const frame = frame_store + 6928;

  memset(frame_store, 0, sizeof frame_store);
  memset(frame - 0xec8, 0, 0xe48);
  qdp_format_log_msg((frame - 0x280), 0x200, DAT_001026d4, "qdp_match_lte_attach_profile_param ENTRY");
  msg_sprintf(DAT_00126238, (frame - 0x280));
  if (*PTR_qdp_inited_001295b8 == '\0')
  {
    QDP_LOG(frame - 0x280, DAT_00126250, DAT_001026d4, "qdp not inited");
    iVar4 = 0;
    goto LAB_00119700;
  }
  if (param_2 == 0)
  {
    QDP_LOG_FMT(frame - 0x280, DAT_001026d4, "NULL params rcvd");
    puVar11 = DAT_00126268;
  LAB_00119684:
    msg_sprintf(puVar11, (frame - 0x280));
    iVar4 = 0;
  }
  else
  {
    pcVar13 = *(char **)(param_2 + 0x10);
    __s_00 = *(char **)(param_2 + 0x18);
    __s = *(char **)(param_2 + 0x20);
    __s1_00 = *(char **)(param_2 + 0x28);
    __s1 = *(char **)(param_2 + 0x30);
    pcVar14 = *(char **)(param_2 + 0x38);
    memset(frame - 0xec8, 0, 0xc48);
    puVar3 = PTR_qdp_modem_supports_epc_profile_001295c0;
    puVar11 = PTR_global_qmi_wds_hndl_001295b0;
    if (*PTR_qdp_modem_supports_epc_profile_001295c0 == '\0')
    {
    LAB_00118c1c:
      *(uint64_t *)(frame - 0xec8) = (ulong)CONCAT31((int3)((ulong) * (uint64_t *)(frame - 0xec8) >> 0x28), (char)param_1) << 0x20;
      iVar4 = qdp_qmi_wds_query_profile(*(uint64_t *)puVar11, (long)((frame - 0xec8)), (frame - 0xec0));
      if (iVar4 != 1)
      {
        QDP_LOG_FMT(frame - 0x280, "Profile querying failed for profile [%u] with error code [%d][%d]", param_1, (*(uint32_t *)((frame - 0xec0))), (*(uint32_t *)((frame - 0xebc))));
        puVar11 = DAT_00126298;
        goto LAB_00119684;
      }
      QDP_LOG(frame - 0x280, DAT_001262b0, "Profile id [%d] is a 3GPP profile", param_1);
    }
    else
    {
      *(uint64_t *)(frame - 0xec8) = CONCAT44(CONCAT31((*(uint24_t *)((char *)(frame - 0xec8) + 5)), (char)param_1), 2);
      iVar4 = qdp_qmi_wds_query_profile(*(uint64_t *)PTR_global_qmi_wds_hndl_001295b0, (long)((frame - 0xec8)), (frame - 0xec0));
      if (iVar4 != 1)
        goto LAB_00118c1c;
      QDP_LOG(frame - 0x280, DAT_00126280, "Profile id [%d] is an EPC profile", param_1);
      if (*puVar3 == '\0')
        goto LAB_00118c1c;
    }
    if ((int)*(uint64_t *)(frame - 0xec8) == 0)
    {
      QDP_LOG(frame - 0x280, DAT_00128878, DAT_001026d4, "qdp_3gpp_match_lte_attach_profile_params ENTRY");
      if (pcVar13 == (char *)0x0)
      {
        QDP_LOG_FMT(frame - 0x280, DAT_001026d4, "NULL input parameters");
        puVar11 = DAT_00128890;
        goto LAB_00119080;
      }
      if (((((struct qdp_query_res *)(frame - 0xec0))->profile_name_valid) == '\0') || (iVar4 = strncasecmp(((char *)(frame - 0xeb7)), "qdp_profile", 0xb), iVar4 != 0))
      {
        bVar2 = false;
        if (__s_00 == (char *)0x0)
          goto LAB_00119294;
      LAB_00118ef4:
        sVar7 = strlen(__s_00);
        if (__s == (char *)0x0)
          goto LAB_0011929c;
      LAB_00118f04:
        sVar8 = strlen(__s);
        if ((((struct qdp_query_res *)(frame - 0xec0))->apn_name_valid) == '\0')
          goto LAB_001192a8;
      LAB_00118f14:
        sVar9 = strlen(pcVar13);
        if (0xfffffffffffffffe < sVar9)
          goto LAB_0011b0d8;
        iVar4 = strncasecmp(pcVar13, ((char *)(frame - 0xe6b)), sVar9 + 1);
        if (iVar4 != 0)
        {
          QDP_LOG_FMT(frame - 0x280, "Modem APN [%s] Attach APN [%s]", ((char *)(frame - 0xe6b)), pcVar13);
          puVar11 = DAT_001288d8;
          goto LAB_00119310;
        }
        if ((((struct qdp_query_res *)(frame - 0xec0))->pdp_type_valid) == '\0')
        {
          QDP_LOG_FMT(frame - 0x280, DAT_001026d4, "PDP info not available, we need to do LTE attach");
          puVar11 = DAT_001288f0;
          goto LAB_00119080;
        }
        if (__s1 != (char *)0x0)
        {
          if (*PTR_qdp_allow_update_modem_profile_001295c8 == '\0' &&
              *PTR_carrier_config_flag_001295d0 == '\0')
          {
            if ((((struct qdp_query_res *)(frame - 0xec0))->pdp_type) == 3)
            {
              iVar4 = strncasecmp(__s1, "IPV4V6", 7);
              if ((!bVar2) || (iVar4 == 0))
                goto LAB_00119d78;
              QDP_LOG_FMT(frame - 0x280, "Modem IP is [%s] and ril_ipfamily [%s]Modem profile is QDP", "IPV4V6", __s1);
              puVar11 = DAT_00128950;
            }
            else if ((((struct qdp_query_res *)(frame - 0xec0))->pdp_type) == 2)
            {
              iVar4 = strncasecmp(__s1, "IP", 3);
              if ((iVar4 != 0) && ((!bVar2 || (iVar4 = strncasecmp(__s1, "IPV4V6", 7), iVar4 != 0))))
                goto LAB_00119d78;
              QDP_LOG_FMT(frame - 0x280, "Modem IP is [%s] and ril_ipfamily is [%s]", DAT_0010263a, __s1);
              puVar11 = DAT_00128938;
            }
            else
            {
              if ((((struct qdp_query_res *)(frame - 0xec0))->pdp_type) != 0)
              {
                QDP_LOG_FMT(frame - 0x280, DAT_001026d4, "Modem IP is [%s] and ril_ipfamily is [%s]", "unknown", __s1);
                puVar11 = DAT_00128968;
                goto LAB_00119080;
              }
              iVar4 = strncasecmp(__s1, "IPV6", 5);
              if ((iVar4 != 0) && ((!bVar2 || (iVar4 = strncasecmp(__s1, "IPV4V6", 7), iVar4 != 0))))
                goto LAB_00119d78;
              QDP_LOG_FMT(frame - 0x280, "Modem IP is [%s] and ril_ipfamily is [%s]", DAT_00102637, __s1);
              puVar11 = DAT_00128920;
            }
          }
          else
          {
            iVar4 = strcasecmp(__s1, "IP");
            if (iVar4 == 0)
            {
              iVar4 = 0;
            }
            else
            {
              iVar4 = strcasecmp(__s1, "IPV6");
              if (iVar4 == 0)
              {
                iVar4 = 1;
              }
              else
              {
                iVar5 = strcasecmp(__s1, "IPV4V6");
                iVar4 = 2;
                if (iVar5 != 0)
                {
                  iVar4 = -1;
                }
              }
            }
            if ((((struct qdp_query_res *)(frame - 0xec0))->pdp_type) < 4)
            {
              iVar5 = *(int *)(DAT_00106088 + (long)(int)(((struct qdp_query_res *)(frame - 0xec0))->pdp_type) * 4);
            }
            else
            {
              iVar5 = -1;
            }
            if (iVar4 == iVar5)
              goto LAB_00119d78;
            QDP_LOG_FMT(frame - 0x280, DAT_001026d4, "ril and modem IP family does not match");
            puVar11 = DAT_00128908;
          }
          goto LAB_0011b0c0;
        }
      LAB_00119d78:
        if (((*(char *)((frame - 0xaa6))) == '\0') || ((*(char *)((frame - 0xaa0))) == '\0'))
        {
          QDP_LOG_FMT(frame - 0x280, DAT_001026d4, "Roaming PDP info not available");
          puVar11 = DAT_00128980;
          goto LAB_00119080;
        }
        if (pcVar14 == (char *)0x0)
          goto LAB_0011a4dc;
        if (*PTR_carrier_config_flag_001295d0 == '\0' &&
            *PTR_qdp_allow_update_modem_profile_001295c8 == '\0')
        {
          if ((((struct qdp_query_res *)(frame - 0xec0))->roaming_ip1) != (((struct qdp_query_res *)(frame - 0xec0))->roaming_ip2))
          {
            QDP_LOG_FMT(frame - 0x280, DAT_001026d4, "LTE & UMTS roaming ip type doesn\'t match");
            puVar11 = DAT_001289e0;
          }
          else if ((int)(((struct qdp_query_res *)(frame - 0xec0))->roaming_ip1) < 2)
          {
            if ((((struct qdp_query_res *)(frame - 0xec0))->roaming_ip1) == 0)
            {
              iVar4 = strncasecmp(pcVar14, "IPV6", 5);
              if ((iVar4 != 0) &&
                  ((!bVar2 || (iVar4 = strncasecmp(pcVar14, "IPV4V6", 7), iVar4 != 0))))
                goto LAB_0011a4dc;
              QDP_LOG_FMT(frame - 0x280, "Modem IP is [%s] and ril_ip_roaming is [%s]", DAT_00102637, pcVar14);
              puVar11 = DAT_001289f8;
            }
            else
            {
              if ((((struct qdp_query_res *)(frame - 0xec0))->roaming_ip1) != 1)
                goto LAB_0011ae84;
              iVar4 = strncasecmp(pcVar14, "IP", 3);
              if ((iVar4 != 0) &&
                  ((!bVar2 || (iVar4 = strncasecmp(pcVar14, "IPV4V6", 7), iVar4 != 0))))
                goto LAB_0011a4dc;
              QDP_LOG_FMT(frame - 0x280, "Modem IP is [%s] and ril_ip_roaming is [%s]", DAT_0010263a, pcVar14);
              puVar11 = DAT_00128a10;
            }
          }
          else
          {
            if ((((struct qdp_query_res *)(frame - 0xec0))->roaming_ip1) != 2)
            {
              if ((((struct qdp_query_res *)(frame - 0xec0))->roaming_ip1) == 0xff)
              {
                QDP_LOG_FMT(frame - 0x280, DAT_001026d4, "Modem IP is \'WDS_COMMON_PDP_TYPE_PDP_MAX_V01\'so considering this as a match");
                puVar11 = DAT_00128a40;
                goto LAB_00119e2c;
              }
            LAB_0011ae84:
              QDP_LOG_FMT(frame - 0x280, "Modem IP is INVALID and ril_ip_roaming is [%s]", pcVar14);
              puVar11 = DAT_00128a58;
              goto LAB_00119080;
            }
            iVar4 = strncasecmp(pcVar14, "IPV4V6", 7);
            if ((!bVar2) || (iVar4 == 0))
              goto LAB_0011a4dc;
            QDP_LOG_FMT(frame - 0x280, "Modem IP is [%s] and ril_ip_roaming [%s]Modem profile is QDP", "IPV4V6", pcVar14);
            puVar11 = DAT_00128a28;
          }
        }
        else
        {
          if ((((struct qdp_query_res *)(frame - 0xec0))->roaming_ip1) == (((struct qdp_query_res *)(frame - 0xec0))->roaming_ip2))
          {
            if ((((struct qdp_query_res *)(frame - 0xec0))->roaming_ip1) == 0xff)
            {
              QDP_LOG_FMT(frame - 0x280, DAT_001026d4, "Modem Roaming PDP type is not configured in MBNNot using Roaming IP type for matching");
              puVar11 = DAT_001289c8;
            LAB_00119e2c:
              msg_sprintf(puVar11, (frame - 0x280));
            }
            else
            {
              uVar6 = qdp_pdn_type_from_string(pcVar14);
              if (2 < (((struct qdp_query_res *)(frame - 0xec0))->roaming_ip1))
              {
                (((struct qdp_query_res *)(frame - 0xec0))->roaming_ip1) = 0xffffffff;
              }
              if (uVar6 != (((struct qdp_query_res *)(frame - 0xec0))->roaming_ip1))
              {
                QDP_LOG_FMT(frame - 0x280, DAT_001026d4, "ril and modem roaming IP does not match");
                puVar11 = DAT_001289b0;
                goto LAB_0011b0c0;
              }
            }
          LAB_0011a4dc:
            if ((*(char *)((frame - 0xd2c))) == '\0')
            {
              if (sVar7 != 0)
              {
                QDP_LOG_FMT(frame - 0x280, DAT_001026d4, "Modem user name:NULL but ril has user so do LTE attach");
                puVar11 = DAT_00128a70;
                goto LAB_00119080;
              }
            }
            else if (sVar7 != 0)
            {
              sVar7 = strlen(__s_00);
              if (0xfffffffffffffffe < sVar7)
                goto LAB_0011b0d8;
              iVar4 = strncasecmp(__s_00, ((char *)(frame - 0xd2b)), sVar7 + 1);
              if (iVar4 != 0)
              {
                QDP_LOG_FMT(frame - 0x280, "Modem user [%s] Attach user [%s]", ((char *)(frame - 0xd2b)), __s_00);
                puVar11 = DAT_00128a88;
                goto LAB_0011b0c0;
              }
            }
            if ((((struct qdp_query_res *)(frame - 0xec0))->password_valid) == '\0')
            {
              if (sVar8 != 0)
              {
                QDP_LOG_FMT(frame - 0x280, DAT_001026d4, "Modem pwd name:NULL but ril has password so do LTE attach");
                puVar11 = DAT_00128aa0;
                goto LAB_0011b0c0;
              }
            }
            else if (sVar8 != 0)
            {
              sVar7 = strlen(__s);
              if (0xfffffffffffffffe < sVar7)
              {
              LAB_0011b0d8:
                /* WARNING: Subroutine does not return */
                abort();
              }
              iVar4 = strncasecmp(__s, ((char *)(frame - 0xcaa)), sVar7 + 1);
              if (iVar4 != 0)
              {
                QDP_LOG_FMT(frame - 0x280, "Modem pwd [%s] Attach pwd [%s]", ((char *)(frame - 0xcaa)), __s);
                puVar11 = DAT_00128ab8;
                goto LAB_0011b0c0;
              }
            }
            if ((*(char *)((frame - 0xc2a))) == '\0')
            {
              QDP_LOG_FMT(frame - 0x280, DAT_001026d4, "Auth-Protocol info not available, we need to do LTE attach");
              puVar11 = DAT_00128ad0;
            LAB_00119080:
              msg_sprintf(puVar11, (frame - 0x280));
              iVar5 = 0;
              bVar12 = 0;
            }
            else
            {
              if (__s1_00 != (char *)0x0)
              {
                iVar4 = strncmp(__s1_00, "0", 2);
                if (iVar4 == 0)
                {
                  if ((((struct qdp_query_res *)(frame - 0xec0))->auth_pref) == 0)
                    goto LAB_0011b050;
                  QDP_LOG_FMT(frame - 0x280, "RIL auth type is [%s] and Modem auth type is [%d]", __s1_00);
                  puVar11 = DAT_00128ae8;
                }
                else
                {
                  iVar4 = strncmp(__s1_00, "1", 2);
                  if (iVar4 == 0)
                  {
                    if ((((struct qdp_query_res *)(frame - 0xec0))->auth_pref) == 1)
                      goto LAB_0011b050;
                    QDP_LOG_FMT(frame - 0x280, "RIL auth type is [%s] and Modem auth type is [%d]", __s1_00);
                    puVar11 = DAT_00128b00;
                  }
                  else
                  {
                    iVar4 = strncmp(__s1_00, "2", 2);
                    if (iVar4 == 0)
                    {
                      if ((((struct qdp_query_res *)(frame - 0xec0))->auth_pref) == 2)
                        goto LAB_0011b050;
                      QDP_LOG_FMT(frame - 0x280, "RIL auth type is [%s] and Modem auth type is [%d]", __s1_00);
                      puVar11 = DAT_00128b18;
                    }
                    else
                    {
                      iVar4 = strncmp(__s1_00, "3", 2);
                      if (iVar4 != 0)
                      {
                        QDP_LOG_FMT(frame - 0x280, "Unknown RIL auth type [%s]", __s1_00);
                        puVar11 = DAT_00128b48;
                        goto LAB_00119080;
                      }
                      if ((((struct qdp_query_res *)(frame - 0xec0))->auth_pref) == 3)
                        goto LAB_0011b050;
                      QDP_LOG_FMT(frame - 0x280, "RIL auth type is [%s] and Modem auth type is [%d]", __s1_00);
                      puVar11 = DAT_00128b30;
                    }
                  }
                }
                goto LAB_0011b0c0;
              }
            LAB_0011b050:
              bVar12 = 0;
              iVar5 = 1;
            }
            goto LAB_00119320;
          }
          QDP_LOG_FMT(frame - 0x280, DAT_001026d4, "ril and modem roaming IP does not match");
          puVar11 = DAT_00128998;
        }
      LAB_0011b0c0:
        msg_sprintf(puVar11, (frame - 0x280));
        bVar12 = 0;
        iVar5 = 2;
      }
      else
      {
        QDP_LOG(frame - 0x280, DAT_001288a8, DAT_001026d4, "Profile is a QDP profile");
        bVar2 = true;
        if (__s_00 != (char *)0x0)
          goto LAB_00118ef4;
      LAB_00119294:
        sVar7 = 0;
        if (__s != (char *)0x0)
          goto LAB_00118f04;
      LAB_0011929c:
        sVar8 = 0;
        if ((((struct qdp_query_res *)(frame - 0xec0))->apn_name_valid) != '\0')
          goto LAB_00118f14;
      LAB_001192a8:
        QDP_LOG_FMT(frame - 0x280, DAT_001026d4, "APN information not available, we need to do LTE attach");
        puVar11 = DAT_001288c0;
      LAB_00119310:
        msg_sprintf(puVar11, (frame - 0x280));
        iVar5 = 0;
        bVar12 = 1;
      }
    LAB_00119320:
      memset(frame - 0x260, 0, 0x1e0);
      iVar4 = 0;
      if (!(bool)(bVar12 & iVar5 == 2))
      {
        iVar4 = iVar5;
      }
      memset(frame - 0x280, 0, 0x20);
      qdp_format_log_msg((frame - 0x280), 0x200, DAT_001026d4,
                         "qdp_3gpp_match_lte_attach_profile_params EXIT");
      msg_sprintf(DAT_00128b60, (frame - 0x280));
      if (iVar4 == 0)
      {
        QDP_LOG_FMT(frame - 0x280, "LTE attach param match failed for 3GPP attach profile id [%d]", param_1);
        puVar11 = DAT_001262c8;
      }
      else
      {
        if (iVar4 != 2)
        {
          iVar4 = 1;
        }
        QDP_LOG_FMT(frame - 0x280, "LTE attach param match succeeded for 3GPP attach profile id [%d]", param_1);
        puVar11 = DAT_001262e0;
      }
      msg_sprintf(puVar11, (frame - 0x280));
    }
    else
    {
      if (pcVar13 == (char *)0x0)
      {
        QDP_LOG_FMT(frame - 0x280, DAT_001026d4, "NULL input parameters");
        puVar11 = DAT_00128b78;
        goto LAB_00119618;
      }
      if (((((struct qdp_query_res *)(frame - 0xec0))->profile_name_valid) == '\0') || (iVar4 = strncasecmp(((char *)(frame - 0xeb7)), "qdp_profile", 0xb), iVar4 != 0))
      {
        bVar2 = false;
        if (__s_00 == (char *)0x0)
          goto LAB_0011910c;
      LAB_00118ce8:
        sVar7 = strlen(__s_00);
        if (__s == (char *)0x0)
          goto LAB_00119118;
      LAB_00118cfc:
        sVar8 = strlen(__s);
      }
      else
      {
        QDP_LOG(frame - 0x280, DAT_00128b90, DAT_001026d4, "Profile is a QDP profile");
        bVar2 = true;
        if (__s_00 != (char *)0x0)
          goto LAB_00118ce8;
      LAB_0011910c:
        sVar7 = 0;
        if (__s != (char *)0x0)
          goto LAB_00118cfc;
      LAB_00119118:
        sVar8 = 0;
      }
      if ((((struct qdp_query_res *)(frame - 0xec0))->apn_name_valid) == '\0')
      {
        if ((((struct qdp_query_res *)(frame - 0xec0))->cdma_apn_name_valid) != '\0')
        {
          pcVar14 = ((char *)(frame - 0x571));
          goto LAB_0011958c;
        }
        QDP_LOG(frame - 0x280, DAT_00128ba8, DAT_001026d4, "Modem APN information not available, we need to do LTE attach");
      LAB_00119620:
        QDP_LOG_FMT(frame - 0x280, "LTE attach param match failed for EPC attach profile id [%d]", param_1);
        puVar11 = DAT_001262f8;
        goto LAB_00119684;
      }
      pcVar14 = ((char *)(frame - 0xe6b));
      if ((((struct qdp_query_res *)(frame - 0xec0))->cdma_apn_name_valid) != '\0')
      {
        sVar9 = __strlen_chk(pcVar14, 0xbeb);
        sVar10 = __strlen_chk(((char *)(frame - 0x571)), 0x2f1);
        if ((sVar9 != sVar10) || (iVar4 = strncasecmp(pcVar14, ((char *)(frame - 0x571)), sVar9), iVar4 != 0))
        {
          QDP_LOG(frame - 0x280, DAT_00128bc0, "Invalid config UMTS_APN[%s] != CDMA_APN[%s]", pcVar14, ((char *)(frame - 0x571)));
          goto LAB_00119620;
        }
      }
    LAB_0011958c:
      sVar9 = strlen(pcVar13);
      if (0xfffffffffffffffe < sVar9)
        goto LAB_0011b0d8;
      iVar4 = strncasecmp(pcVar13, pcVar14, sVar9 + 1);
      if (iVar4 != 0)
      {
        QDP_LOG_FMT(frame - 0x280, "Modem APN [%s] Attach APN [%s]", pcVar14, pcVar13);
        puVar11 = DAT_00128bd8;
      LAB_00119618:
        msg_sprintf(puVar11, (frame - 0x280));
        goto LAB_00119620;
      }
      if ((((struct qdp_query_res *)(frame - 0xec0))->pdp_type_valid) == '\0')
      {
        QDP_LOG_FMT(frame - 0x280, DAT_001026d4, "PDP info not available, we need to do LTE attach");
        puVar11 = DAT_00128bf0;
        goto LAB_00119618;
      }
      if (__s1 != (char *)0x0)
      {
        if ((((struct qdp_query_res *)(frame - 0xec0))->pdp_type) == 3)
        {
          iVar4 = strncasecmp(__s1, "IPV4V6", 7);
          if ((!bVar2) || (iVar4 == 0))
            goto LAB_00119a58;
          QDP_LOG_FMT(frame - 0x280, "Modem IP is [%s] and ril_ipfamily [%s]Modem profile is QDP", "IPV4V6", __s1);
          puVar11 = DAT_00128c38;
        }
        else if ((((struct qdp_query_res *)(frame - 0xec0))->pdp_type) == 2)
        {
          iVar4 = strncasecmp(__s1, "IP", 3);
          if ((iVar4 != 0) && ((!bVar2 || (iVar4 = strncasecmp(__s1, "IPV4V6", 7), iVar4 != 0))))
            goto LAB_00119a58;
          QDP_LOG_FMT(frame - 0x280, "Modem IP is [%s] and ril_ipfamily is [%s]", DAT_0010263a, __s1);
          puVar11 = DAT_00128c20;
        }
        else if ((((struct qdp_query_res *)(frame - 0xec0))->pdp_type) == 0)
        {
          iVar4 = strncasecmp(__s1, "IPV6", 5);
          if ((iVar4 != 0) && ((!bVar2 || (iVar4 = strncasecmp(__s1, "IPV4V6", 7), iVar4 != 0))))
            goto LAB_00119a58;
          QDP_LOG_FMT(frame - 0x280, "Modem IP is [%s] and ril_ipfamily is [%s]", DAT_00102637, __s1);
          puVar11 = DAT_00128c08;
        }
        else
        {
          QDP_LOG_FMT(frame - 0x280, DAT_001026d4, "Modem IP is [%s] and ril_ipfamily is [%s]", "unknown", __s1);
          puVar11 = DAT_00128c50;
        }
      LAB_0011a3c0:
        msg_sprintf(puVar11, (frame - 0x280));
        goto LAB_00119620;
      }
    LAB_00119a58:
      if ((*(char *)((frame - 0x781))) == '\0')
      {
        if ((*(char *)((frame - 0xd2c))) == '\0')
        {
          if ((((struct qdp_query_res *)(frame - 0xec0))->cdma1_username_valid) == '\0')
          {
            if (sVar7 != 0)
            {
              QDP_LOG_FMT(frame - 0x280, DAT_001026d4, "Modem user name:NULL but ril has user so do LTE attach");
              puVar11 = DAT_00128c80;
              goto LAB_0011a3c0;
            }
          }
          else if (sVar7 != 0)
          {
            pcVar13 = ((char *)(frame - 0x68b));
            goto LAB_00119c50;
          }
        }
        else if (sVar7 != 0)
        {
          pcVar13 = ((char *)(frame - 0xd2b));
          if ((((struct qdp_query_res *)(frame - 0xec0))->cdma1_username_valid) != '\0')
          {
            sVar7 = __strlen_chk(pcVar13, 0xaab);
            sVar9 = __strlen_chk(((char *)(frame - 0x68b)), 0x40b);
            if ((sVar7 != sVar9) || (iVar4 = strncasecmp(pcVar13, ((char *)(frame - 0x68b)), sVar7), iVar4 != 0))
            {
              QDP_LOG_FMT(frame - 0x280, "Invalid config UMTS_UNAME[%s] != CDMA_UNAME[%s]", pcVar13, ((char *)(frame - 0x68b)));
              puVar11 = DAT_00128c98;
              goto LAB_0011a3c0;
            }
          }
        LAB_00119c50:
          sVar7 = strlen(__s_00);
          if (0xfffffffffffffffe < sVar7)
            goto LAB_0011b0d8;
          iVar4 = strncasecmp(__s_00, pcVar13, sVar7 + 1);
          if (iVar4 != 0)
          {
            QDP_LOG_FMT(frame - 0x280, "Modem user [%s] Attach user [%s]", pcVar13, __s_00);
            puVar11 = DAT_00128cb0;
            goto LAB_0011a3c0;
          }
        }
      }
      else if (sVar7 != 0)
      {
        sVar7 = strlen(__s_00);
        if (0xfffffffffffffffe < sVar7)
          goto LAB_0011b0d8;
        iVar4 = strncasecmp(__s_00, ((char *)(frame - 0x780)), sVar7 + 1);
        if (iVar4 != 0)
        {
          QDP_LOG_FMT(frame - 0x280, "Modem user [%s] Attach user [%s]", ((char *)(frame - 0x780)), __s_00);
          puVar11 = DAT_00128c68;
          goto LAB_0011a3c0;
        }
      }
      if ((*(char *)((frame - 0x802))) == '\0')
      {
        if ((((struct qdp_query_res *)(frame - 0xec0))->password_valid) == '\0')
        {
          if ((*(char *)((frame - 0x60b))) == '\0')
          {
            if (sVar8 != 0)
            {
              QDP_LOG_FMT(frame - 0x280, DAT_001026d4, "Modem password:NULL but ril has password so do LTE attach");
              puVar11 = DAT_00128ce0;
              goto LAB_00119618;
            }
          }
          else if (sVar8 != 0)
          {
            pcVar13 = ((char *)(frame - 0x60a));
            goto LAB_0011a934;
          }
        }
        else if (sVar8 != 0)
        {
          pcVar13 = ((char *)(frame - 0xcaa));
          if ((*(char *)((frame - 0x60b))) != '\0')
          {
            sVar7 = __strlen_chk(pcVar13, 0xa2a);
            sVar8 = __strlen_chk(((char *)(frame - 0x60a)), 0x38a);
            if ((sVar7 != sVar8) || (iVar4 = strncasecmp(pcVar13, ((char *)(frame - 0x60a)), sVar7), iVar4 != 0))
            {
              QDP_LOG_FMT(frame - 0x280, "Invalid config UMTS_PWORD[%s] != CDMA_PWORD[%s]", pcVar13, ((char *)(frame - 0x60a)));
              puVar11 = DAT_00128cf8;
              goto LAB_0011a3c0;
            }
          }
        LAB_0011a934:
          sVar7 = strlen(__s);
          if (0xfffffffffffffffe < sVar7)
            goto LAB_0011b0d8;
          iVar4 = strncasecmp(__s, pcVar13, sVar7 + 1);
          if (iVar4 != 0)
          {
            QDP_LOG_FMT(frame - 0x280, "Modem pword [%s] Attach pword [%s]", pcVar13, __s);
            puVar11 = DAT_00128d10;
            goto LAB_00119618;
          }
        }
      }
      else if (sVar8 != 0)
      {
        sVar7 = strlen(__s);
        if (0xfffffffffffffffe < sVar7)
          goto LAB_0011b0d8;
        iVar4 = strncasecmp(__s, ((char *)(frame - 0x801)), sVar7 + 1);
        if (iVar4 != 0)
        {
          QDP_LOG_FMT(frame - 0x280, "Modem pass [%s] Attach pass [%s]", ((char *)(frame - 0x801)), __s);
          puVar11 = DAT_00128cc8;
          goto LAB_00119618;
        }
      }
      uVar6 = (*(uint *)((frame - 0x6fc)));
      if ((*(char *)((frame - 0x700))) == '\0')
      {
        if ((*(char *)((frame - 0xc2a))) == '\0')
        {
          QDP_LOG_FMT(frame - 0x280, DAT_001026d4, "Auth-Protocol info not available, we need to do LTE attach");
          puVar11 = DAT_00128d28;
          goto LAB_00119618;
        }
        uVar6 = (uint)(((struct qdp_query_res *)(frame - 0xec0))->auth_pref);
      }
      if (__s1_00 != (char *)0x0)
      {
        iVar4 = strncmp(__s1_00, "0", 2);
        if (iVar4 == 0)
        {
          if (uVar6 == 0)
            goto LAB_0011ac74;
          QDP_LOG_FMT(frame - 0x280, "RIL auth type is [%s] and Modem auth type is [%d]", __s1_00, uVar6);
          puVar11 = DAT_00128d40;
        }
        else
        {
          iVar4 = strncmp(__s1_00, "1", 2);
          if (iVar4 == 0)
          {
            if (uVar6 == 1)
              goto LAB_0011ac74;
            QDP_LOG_FMT(frame - 0x280, "RIL auth type is [%s] and Modem auth type is [%d]", __s1_00, uVar6);
            puVar11 = DAT_00128d58;
          }
          else
          {
            iVar4 = strncmp(__s1_00, "2", 2);
            if (iVar4 == 0)
            {
              if (uVar6 == 2)
                goto LAB_0011ac74;
              QDP_LOG_FMT(frame - 0x280, "RIL auth type is [%s] and Modem auth type is [%d]", __s1_00, uVar6);
              puVar11 = DAT_00128d70;
            }
            else
            {
              iVar4 = strncmp(__s1_00, "3", 2);
              if (iVar4 == 0)
              {
                if (uVar6 == 3)
                  goto LAB_0011ac74;
                QDP_LOG_FMT(frame - 0x280, "RIL auth type is [%s] and Modem auth type is [%d]", __s1_00, uVar6);
                puVar11 = DAT_00128d88;
              }
              else
              {
                QDP_LOG_FMT(frame - 0x280, "Unknown RIL auth type [%s]", __s1_00);
                puVar11 = DAT_00128da0;
              }
            }
          }
        }
        goto LAB_00119618;
      }
    LAB_0011ac74:
      QDP_LOG(frame - 0x280, DAT_00126310, "LTE attach param match succeeded for EPC attach profile id [%d]", param_1);
      iVar4 = 1;
    }
  }
  QDP_LOG(frame - 0x280, DAT_00126328, DAT_001026d4, "qdp_match_lte_attach_profile_param EXIT");
LAB_00119700:
  return iVar4;
}

long qdp_profile_read_ril_params(char **param_1, int *param_2, long param_3, char *param_4, int *param_5, long param_6,
                                 char *param_7, uint8_t *param_8)

{
  uint64_t *puVar1;
  uint uVar2;
  char cVar3;
  int iVar5;
  char *__nptr;
  size_t sVar6;
  long lVar7;
  void *pvVar8;
  uint8_t *puVar9;
  size_t sVar10;
  long lVar11;
  uint *puVar12;
  uint32_t uVar13;
  uint uVar14;
  uint8_t frame_store[1152] __attribute__((aligned(16)));
  uint8_t *const frame = frame_store + 1152;

  memset(frame_store, 0, sizeof frame_store);
  *param_4 = '\0';
  *param_7 = '\0';
  *param_8 = 0;
  if ((char *)*param_1 == (char *)0x0)
  {
    uVar13 = 0;
    __nptr = (char *)param_1[1];
  }
  else
  {
    cVar3 = *(char *)*param_1;
    if (cVar3 == '0')
    {
      QDP_LOG(frame - 0x270, DAT_00126358, DAT_001026d4, "RIL prefers 3GPP2");
      *param_7 = '\x01';
      __nptr = (char *)param_1[1];
    }
    else
    {
      if (cVar3 != '2')
      {
        if (cVar3 != '1')
        {
          QDP_LOG(frame - 0x270, DAT_00126388, "RIL provied invalid tech [%s]");
          uVar13 = 0;
          goto LAB_0011ba54;
        }
        QDP_LOG(frame - 0x270, DAT_00126340, DAT_001026d4, "RIL prefers 3GPP");
        uVar13 = 1;
        *param_4 = '\x01';
        __nptr = (char *)param_1[1];
        goto joined_r0x0011b2e4;
      }
      QDP_LOG(frame - 0x270, DAT_00126370, DAT_001026d4, "RIL prefers Automatic tech");
      __nptr = (char *)param_1[1];
    }
    uVar13 = 1;
  }
joined_r0x0011b2e4:
  if (__nptr != (char *)0x0)
  {
    iVar5 = atoi(__nptr);
    if (999 < iVar5)
    {
      iVar5 = iVar5 + -1000;
      if (*param_4 == '\x01')
      {
        QDP_LOG(frame - 0x270, DAT_001263b8, "RIL provided 3GPP profile id [%d]", iVar5);
        *param_2 = iVar5;
      }
      else
      {
        if (*param_7 == '\x01')
        {
          QDP_LOG(frame - 0x270, DAT_001263d0, "RIL provided 3GPP2 profile id [%d]", iVar5);
        }
        else
        {
          QDP_LOG(frame - 0x270, DAT_001263e8, "RIL provided 3GPP2, and 3GPP profile id [%d]", iVar5);
          *param_2 = iVar5;
        }
        *param_5 = iVar5;
      }
      uVar13 = 1;
      goto LAB_0011ba54;
    }
    QDP_LOG(frame - 0x270, DAT_001263a0, "RIL did not provide a valid OEM profile [%d]");
  }
  lVar11 = 0;
  uVar14 = 0;
  puVar12 = (uint *)PTR_param_tech_map_tbl_001295d8;
  do
  {
    if (((char *)param_1[*puVar12] != (char *)0x0) &&
        ((*(char *)param_1[*puVar12] != '\0' ||
          ((lVar11 == 0x20 && (*(char *)param_1[*puVar12] == '\0'))))))
    {
      uVar2 = puVar12[1];
      if ((uVar2 & 1) != 0)
      {
        sVar6 = strlen((char *)param_1[*puVar12]);
        if (0xfffffffffffffffe < sVar6)
          goto LAB_0011bb0c;
        iVar5 = (int)(sVar6 + 1);
        sVar10 = (size_t)iVar5;
        if ((int)puVar12[2] < iVar5)
        {
          QDP_LOG_FMT(frame - 0x270, "RIL param length too long [%d]", sVar6 + 1 & 0xffffffff);
          puVar9 = DAT_00126400;
        LAB_0011b548:
          msg_sprintf(puVar9, (frame - 0x270));
        }
        else
        {
          pvVar8 = malloc(sVar10);
          *(void **)(param_3 + lVar11) = pvVar8;
          if (pvVar8 != (void *)0x0)
          {
            memset(pvVar8, 0, sVar10);
            QDP_LOG_FMT(frame - 0x270, "QDP: malloc\'ed [%p]", *(uint64_t *)(param_3 + lVar11));
            puVar9 = DAT_00126418;
            goto LAB_0011b548;
          }
        }
        lVar7 = *(long *)(param_3 + lVar11);
        if (lVar7 == 0)
        {
          QDP_LOG_FMT(frame - 0x270, "memory error while trying to allocate 3gpp param for [%s]", param_1[*puVar12]);
          puVar9 = DAT_00126448;
        }
        else
        {
          if (SBORROW4(iVar5, 1))
            goto LAB_0011bb0c;
          puVar1 = (uint64_t *)(param_3 + lVar11);
          *(int *)(puVar1 + 1) = iVar5 + -1;
          strlcpy((char *)(lVar7), (const char *)(param_1[*puVar12]), sVar10);
          QDP_LOG_FMT(frame - 0x270, "copied [%s], len[%d] to [%p] loc", param_1[*puVar12], *(uint32_t *)(puVar1 + 1), *puVar1);
          puVar9 = DAT_00126430;
        }
        msg_sprintf(puVar9, (frame - 0x270));
      }
      uVar14 = uVar2 | uVar14;
      if (((byte)puVar12[1] >> 1 & 1) != 0)
      {
        sVar6 = strlen((char *)param_1[*puVar12]);
        if (0xfffffffffffffffe < sVar6)
          goto LAB_0011bb0c;
        iVar5 = (int)(sVar6 + 1);
        sVar10 = (size_t)iVar5;
        if ((int)puVar12[2] < iVar5)
        {
          QDP_LOG_FMT(frame - 0x270, "RIL param length too long [%d]", sVar6 + 1 & 0xffffffff);
          puVar9 = DAT_00126460;
        LAB_0011b77c:
          msg_sprintf(puVar9, (frame - 0x270));
        }
        else
        {
          pvVar8 = malloc(sVar10);
          *(void **)(param_6 + lVar11) = pvVar8;
          if (pvVar8 != (void *)0x0)
          {
            memset(pvVar8, 0, sVar10);
            QDP_LOG_FMT(frame - 0x270, "QDP: malloc\'ed [%p]", *(uint64_t *)(param_6 + lVar11));
            puVar9 = DAT_00126478;
            goto LAB_0011b77c;
          }
        }
        if (*(long *)(param_6 + lVar11) == 0)
        {
          QDP_LOG(frame - 0x270, DAT_001264a8, "memory error while trying to allocate 3gpp2 param for [%s]", param_1[*puVar12]);
        }
        else
        {
          if (SBORROW4(iVar5, 1))
          {
          LAB_0011bb0c:
            /* WARNING: Subroutine does not return */
            abort();
          }
          *(int *)((uint64_t *)(param_6 + lVar11) + 1) = iVar5 + -1;
          QDP_LOG(frame - 0x270, DAT_00126490, "copying [%s] len [%d] to [%p] loc", param_1[*puVar12]);
          strlcpy((char *)(*(uint64_t *)(param_6 + lVar11)), (const char *)(param_1[*puVar12]), sVar10);
        }
      }
    }
    lVar11 = lVar11 + 0x10;
    puVar12 = puVar12 + 3;
  } while (lVar11 != 0xa0);
  if ((*param_4 == '\0') && (*param_7 == '\0'))
  {
    if ((uVar14 & 1) != 0)
    {
      uVar13 = 1;
      *param_4 = '\x01';
    }
    if ((uVar14 >> 1 & 1) != 0)
    {
      uVar13 = 1;
      *param_7 = '\x01';
    }
  }
LAB_0011ba54:
  puVar9 = PTR_qdp_modem_supports_epc_profile_001295c0;
  QDP_LOG(frame - 0x270, DAT_001264c0, " qdp_modem_supports_epc_profile:%d", *PTR_qdp_modem_supports_epc_profile_001295c0);
  if (*puVar9 != '\0')
  {
    uVar13 = 1;
    *param_8 = 1;
  }
  return uVar13;
}

long hasMatchingApn(long param_1, long param_2)

{
  bool bVar1;
  int iVar2;
  size_t sVar3;
  char *__s;

  if ((((*(char **)(param_1 + 0x10) == (char *)0x0) || (**(char **)(param_1 + 0x10) == '\0')) ||
       (sVar3 = strlen(*(char **)(param_1 + 0x10)), 0x95 < sVar3)) ||
      (*(char *)(param_2 + 0x54) == '\0'))
  {
    bVar1 = false;
  }
  else
  {
    __s = *(char **)(param_1 + 0x10);
    sVar3 = strlen(__s);
    iVar2 = strncasecmp(__s, (char *)(param_2 + 0x55), sVar3);
    bVar1 = iVar2 == 0;
  }
  return bVar1;
}

long saveProfileParams(int *param_1, long param_2, uint *param_3, long param_4, uint32_t *param_5,
                       uint32_t *param_6)

{
  uint32_t uVar1;

  *param_3 = (uint) * (byte *)(param_1 + 1);
  if ((param_4 != 0) && (*(char *)(param_2 + 0x54) != '\0'))
  {
    strlcpy((char *)(param_4), (const char *)(param_2 + 0x55), 0x97);
  }
  if (*param_1 == 1)
  {
    *param_6 = 2;
    uVar1 = qdp_get_3gpp2_profile_pdn_type(*(uint32_t *)(param_2 + 0x9e8), *(uint8_t *)(param_2 + 0x9e6));
  }
  else if (*param_1 == 0)
  {
    *param_6 = 1;
    uVar1 = qdp_get_3gpp_profile_pdn_type(*(uint32_t *)(param_2 + 0x40), *(uint8_t *)(param_2 + 0x3c));
  }
  else
  {
    uVar1 = 0xffffffff;
    *param_6 = 0;
  }
  *param_5 = uVar1;
  return (uint)uVar1;
}

long getBestEmergencyProfile(long param_1, char *param_2, uint *param_3, long param_4, uint32_t *param_5, uint32_t *param_6)
{
  struct qdp_query_res best;
  struct qdp_query_res cur;
  struct qdp_query_res qres;
  struct qdp_list_req lreq;
  struct qdp_list_res lres;
  struct qdp_query_req qreq;
  char logbuf[0x200];
  int best_type;
  uint best_index;
  uint idx;
  int rc;
  uint pdn;
  char *ril_apn;

  memset(&best, 0, sizeof best);
  memset(&lreq, 0, sizeof lreq);
  memset(&lres, 0, sizeof lres);
  *param_2 = '\0';
  rc = qdp_qmi_wds_get_profile_list(global_qmi_wds_hndl, (long)&lreq, (int *)&lres);
  if (rc != 1)
  {
    QDP_LOG(logbuf, DAT_001264d8, DAT_001026d4, "Failed to retrieve modem profiles");
    return 0;
  }
  best_type = 0;
  best_index = 0;
  if (lres.profile_count != 0)
  {
    idx = 0;
    do
    {
      memset(&qreq, 0, sizeof qreq);
      memset(&qres, 0, sizeof qres);
      qreq.profile_index = lres.profiles[idx].profile_index;
      rc = qdp_qmi_wds_query_profile(global_qmi_wds_hndl, (long)&qreq, (int *)&qres);
      if (rc != 1)
      {
        QDP_LOG(logbuf, DAT_001264f0, DAT_001026d4, "query_profile failed");
        return 0;
      }
      if (qres.emergency_calls_valid != '\0' && qres.emergency_calls == '\x01')
      {
        QDP_LOG(logbuf, DAT_00126508, DAT_001026d4, "Found emergency profile");
        if (*param_2 == '\0')
        {
          best_type = (int)lres.profiles[idx].profile_type;
          best_index = lres.profiles[idx].profile_index;
          memcpy(&best, &qres, sizeof best);
          *param_2 = '\x01';
        }
        memcpy(&cur, &qres, sizeof cur);
        if (*(char **)(param_1 + 0x10) != NULL && **(char **)(param_1 + 0x10) != '\0' && strlen(*(char **)(param_1 + 0x10)) < 0x96 && cur.apn_name_valid != '\0')
        {
          ril_apn = *(char **)(param_1 + 0x10);
          if (strncasecmp(ril_apn, cur.apn_name, strlen(ril_apn)) == 0)
          {
            best_type = (int)lres.profiles[idx].profile_type;
            best_index = lres.profiles[idx].profile_index;
            memcpy(&best, &qres, sizeof best);
            QDP_LOG(logbuf, DAT_00126520, DAT_001026d4, "emergency apn matches with ril apn");
            break;
          }
        }
      }
      idx = idx + 1;
    } while (idx < lres.profile_count);
  }
  if (*param_2 != '\0')
  {
    memcpy(&qres, &best, sizeof qres);
    *param_3 = best_index;
    if (param_4 != 0 && qres.apn_name_valid != '\0')
    {
      strlcpy((char *)(param_4), qres.apn_name, 0x97);
    }
    if (best_type == 1)
    {
      *param_6 = 2;
      pdn = qdp_get_3gpp2_profile_pdn_type(qres.cdma_pdn_type, qres.cdma_pdn_type_valid);
    }
    else if (best_type == 0)
    {
      *param_6 = 1;
      pdn = qdp_get_3gpp_profile_pdn_type(qres.pdp_type, qres.pdp_type_valid);
    }
    else
    {
      pdn = 0xffffffff;
      *param_6 = 0;
    }
    *param_5 = pdn;
  }
  return 1;
}

/* WARNING: Removing unreachable block (ram,0x0011c30c) */

long createEmergencyProfile(uint64_t param_1, int *param_2, uint32_t *param_3, uint32_t *param_4)
{
  struct qdp_ril_param ril3gpp2[10];
  struct qdp_ril_param ril3gpp[10];
  char logbuf[0x200];
  uint id3gpp = 0;
  char has3gpp = 0;
  uint id3gpp2 = 0;
  char has3gpp2 = 0;
  uint8_t flag = 0;
  int pdn3gpp;
  uint pdn3gpp2;
  char *desc;
  int rc;

  memset(ril3gpp2, 0, sizeof ril3gpp2);
  memset(ril3gpp, 0, sizeof ril3gpp);
  rc = qdp_profile_read_ril_params((char **)(param_1), &id3gpp, (long)ril3gpp, &has3gpp, &id3gpp2, (long)ril3gpp2, &has3gpp2, &flag);
  if (rc == 1)
  {
    pdn3gpp2 = 0xffffffff;
    pdn3gpp = -1;
    if (has3gpp == '\x01')
    {
      id3gpp = 0xffffffff;
      rc = qdp_3gpp_profile_create((struct qdp_ril_param *)ril3gpp, &id3gpp, &pdn3gpp, 1, 3);
      if (rc == 1)
      {
        if ((int)id3gpp != -1)
        {
          qdp_insert_profile_id((int)id3gpp, 1, 1);
          qdp_profile_ref_up((int)id3gpp);
          *param_2 = (int)id3gpp;
          *param_3 = pdn3gpp;
          *param_4 = 1;
        }
        return rc;
      }
      QDP_LOG(logbuf, DAT_00126550, "qdp_3gpp_profile_create failed [%d]", rc);
    }
    else
    {
      rc = 0;
    }
    if (has3gpp2 != '\x01')
    {
      return rc;
    }
    id3gpp2 = 0xffffffff;
    rc = qdp_3gpp2_profile_create((struct qdp_ril_param *)ril3gpp2, &id3gpp2, &pdn3gpp2, 1, 3);
    if (rc == 1)
    {
      if ((int)id3gpp2 != -1)
      {
        qdp_insert_profile_id((int)id3gpp2, 2, 1);
        qdp_profile_ref_up((int)id3gpp2);
        *param_2 = (int)id3gpp2;
        *param_3 = pdn3gpp2;
        *param_4 = 2;
      }
      return 1;
    }
    QDP_LOG_FMT(logbuf, "qdp_3gpp2_profile_create failed [%d]", rc);
    desc = DAT_00126568;
  }
  else
  {
    QDP_LOG_FMT(logbuf, DAT_001026d4, "qdp_profile_read_ril_params failed for emergency profile");
    desc = DAT_00126538;
  }
  msg_sprintf(desc, logbuf);
  return 0;
}

long emergencyProfileLookup(long param_1, long param_2, long param_3, long param_4)
{
  char logbuf[0x200];
  char found;
  int rc;
  uint result;

  QDP_LOG(logbuf, DAT_00126580, DAT_001026d4, "emergencyProfileLookup ENTRY");
  if (param_1 == 0 || param_2 == 0 || param_3 == 0 || param_4 == 0)
  {
    QDP_LOG(logbuf, DAT_00126598, DAT_001026d4, "NULL params rcvd");
    result = 0;
  }
  else
  {
    found = '\0';
    rc = getBestEmergencyProfile(param_1, &found, (uint *)(param_2), 0, (uint32_t *)(param_3), (uint32_t *)(param_4));
    result = 0;
    if (rc == 1)
    {
      if (found == '\0')
      {
        result = createEmergencyProfile(param_1, (int *)(param_2), (uint32_t *)(param_3), (uint32_t *)(param_4));
      }
      else
      {
        result = 1;
      }
      QDP_LOG(logbuf, DAT_001265b0, DAT_001026d4, "emergencyProfileLookup EXIT");
    }
  }
  return result;
}

long emergencyProfileLookup2(long param_1, long param_2, long param_3, long param_4, long param_5)
{
  char logbuf[0x200];
  char found;
  int rc;
  uint result;

  QDP_LOG(logbuf, DAT_001265c8, DAT_001026d4, "emergencyProfileLookup ENTRY");
  if (param_1 == 0 || param_2 == 0 || param_3 == 0 || param_4 == 0 || param_5 == 0)
  {
    QDP_LOG(logbuf, DAT_001265e0, DAT_001026d4, "NULL params rcvd");
    result = 0;
  }
  else
  {
    found = '\0';
    rc = getBestEmergencyProfile(param_1, &found, (uint *)(param_2), param_3, (uint32_t *)(param_4), (uint32_t *)(param_5));
    result = 0;
    if (rc == 1)
    {
      if (found == '\0')
      {
        result = createEmergencyProfile(param_1, (int *)(param_2), (uint32_t *)(param_4), (uint32_t *)(param_5));
      }
      else
      {
        result = 1;
      }
      QDP_LOG(logbuf, DAT_001265f8, DAT_001026d4, "emergencyProfileLookup EXIT");
    }
  }
  return result;
}

long qdp_profile_look_up(long param_1, int *param_2, uint32_t *param_3, int *param_4, uint32_t *param_5,
                         int *param_6)

{
  uint64_t uVar2;
  char cVar3;
  char cVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  uint8_t *puVar8;
  int iVar9;
  void *__s;
  void *__s_00;
  long lVar10;
  uint32_t uVar11;
  uint8_t frame_store[1184] __attribute__((aligned(16)));
  uint8_t *const frame = frame_store + 1184;

  memset(frame_store, 0, sizeof frame_store);
  memset(frame - 0x464, 0, 0x4);
  ((char *)(frame - 0x468))[0] = '\0';
  ((char *)(frame - 0x46c))[0] = '\0';
  ((char *)(frame - 0x470))[0] = '\0';
  memset(frame - 0x474, 0, 0x4);
  memset(frame - 0x3f8, 0, 0x8);
  memset(frame - 0x3e0, 0, 0x160);
  (((struct qdp_ril_param *)(frame - 0x400))->value) = (void *)0x0;
  memset(frame - 0x418, 0, 0x8);
  memset(frame - 0x3f0, 0, 0x10);
  (((struct qdp_ril_param *)(frame - 0x420))->value) = (void *)0x0;
  memset(frame - 0x408, 0, 0x8);
  (((struct qdp_ril_param *)(frame - 0x410))->value) = (void *)0x0;
  memset(frame - 0x438, 0, 0x8);
  (((struct qdp_ril_param *)(frame - 0x440))->value) = (void *)0x0;
  memset(frame - 0x428, 0, 0x8);
  (((struct qdp_ril_param *)(frame - 0x430))->value) = (void *)0x0;
  memset(frame - 0x458, 0, 0x8);
  (*(uint16_t **)((frame - 0x460))) = (uint16_t *)0x0;
  memset(frame - 0x448, 0, 0x8);
  (((struct qdp_ril_param *)(frame - 0x450))->value) = (void *)0x0;
  memset(frame - 0x480, 0, 0xc);
  ((char *)(frame - 0x484))[0] = '\0';
  QDP_LOG(frame - 0x280, DAT_00126610, DAT_001026d4, "qdp_profile_look_up ENTRY");
  if (*PTR_qdp_inited_001295b8 == '\0')
  {
    QDP_LOG(frame - 0x280, DAT_00126628, DAT_001026d4, "qdp not inited");
    uVar11 = 0;
    goto LAB_0011cfb0;
  }
  memset(frame - 0x3f8, 0, 0x8);
  memset(frame - 0x3e0, 0, 0x160);
  (((struct qdp_ril_param *)(frame - 0x400))->value) = (void *)0x0;
  memset(frame - 0x418, 0, 0x8);
  memset(frame - 0x3f0, 0, 0x10);
  (((struct qdp_ril_param *)(frame - 0x420))->value) = (void *)0x0;
  memset(frame - 0x408, 0, 0x8);
  (((struct qdp_ril_param *)(frame - 0x410))->value) = (void *)0x0;
  memset(frame - 0x438, 0, 0x8);
  (((struct qdp_ril_param *)(frame - 0x440))->value) = (void *)0x0;
  memset(frame - 0x428, 0, 0x8);
  (((struct qdp_ril_param *)(frame - 0x430))->value) = (void *)0x0;
  (*(int *)((frame - 0x474))) = -1;
  memset(frame - 0x458, 0, 0x8);
  (*(uint16_t **)((frame - 0x460))) = (uint16_t *)0x0;
  memset(frame - 0x448, 0, 0x8);
  (((struct qdp_ril_param *)(frame - 0x450))->value) = (void *)0x0;
  if (((((param_1 == 0) || (param_2 == (int *)0x0)) || (param_3 == (uint32_t *)0x0)) ||
       ((param_4 == (int *)0x0 || (param_5 == (uint32_t *)0x0)))) ||
      (param_6 == (int *)0x0))
  {
    QDP_LOG_FMT(frame - 0x280, DAT_001026d4, "NULL params rcvd");
    puVar8 = DAT_00126640;
  LAB_0011cbb4:
    msg_sprintf(puVar8, (frame - 0x280));
    bVar5 = false;
    __s = (void *)0x0;
    __s_00 = (void *)0x0;
  }
  else
  {
    if ((*param_2 != 0) || (*param_4 != 0))
    {
      QDP_LOG_FMT(frame - 0x280, DAT_001026d4, "non-zero values rcvd");
      puVar8 = DAT_00126658;
      goto LAB_0011cbb4;
    }
    *param_2 = -1;
    *param_4 = -1;
    *param_3 = 0xffffffff;
    *param_5 = 0xffffffff;
    param_6[0] = 0;
    param_6[1] = 0;
    __s = malloc(0xc50);
    if (__s != (void *)0x0)
    {
      memset(__s, 0, 0xc50);
      QDP_LOG(frame - 0x280, DAT_00126670, "QDP: malloc\'ed [%p]", __s);
    }
    __s_00 = malloc(0xc50);
    if (__s_00 == (void *)0x0)
    {
    LAB_0011d2bc:
      QDP_LOG_FMT(frame - 0x280, DAT_001026d4, "Failed to allocate profile info");
      puVar8 = DAT_001266a0;
    LAB_0011d390:
      msg_sprintf(puVar8, (frame - 0x280));
      bVar5 = false;
    }
    else
    {
      memset(__s_00, 0, 0xc50);
      QDP_LOG(frame - 0x280, DAT_00126688, "QDP: malloc\'ed [%p]", __s_00);
      if (__s == (void *)0x0)
        goto LAB_0011d2bc;
      iVar7 = qdp_profile_read_ril_params((char **)(param_1), param_2, (long)((frame - 0x320)), ((char *)(frame - 0x468)), param_4, (long)((frame - 0x3c0)), ((char *)(frame - 0x46c)), ((char *)(frame - 0x470)));
      cVar6 = ((char *)(frame - 0x470))[0];
      if (iVar7 != 1)
      {
        QDP_LOG_FMT(frame - 0x280, DAT_001026d4, "qdp_profile_read_ril_params failed");
        puVar8 = DAT_001266b8;
        goto LAB_0011d390;
      }
      if (((char *)(frame - 0x470))[0] == '\x01')
      {
        (*(uint16_t **)((frame - 0x460))) = malloc(2);
        if ((*(uint16_t **)((frame - 0x460))) != (uint16_t *)0x0)
        {
          *(*(uint16_t **)((frame - 0x460))) = 0;
          QDP_LOG(frame - 0x280, DAT_001266d0, "QDP: malloc\'ed [%p]", (*(uint16_t **)((frame - 0x460))));
          if ((*(uint16_t **)((frame - 0x460))) != (uint16_t *)0x0)
          {
            *(uint8_t *)(*(uint16_t **)((frame - 0x460))) = 3;
            *(uint8_t *)((long)(*(uint16_t **)((frame - 0x460))) + 1) = 0;
            *(uint64_t *)(frame - 0x458) = CONCAT44((*(uint32_t *)((char *)(frame - 0x458) + 4)), 2);
          }
        }
        if ((int)*(uint64_t *)(frame - 0x308) < 1)
        {
          if (0 < (int)*(uint64_t *)(frame - 0x3a8))
          {
            iVar7 = (int)*(uint64_t *)(frame - 0x3a8) + 1;
            if (SCARRY4((int)*(uint64_t *)(frame - 0x3a8), 1))
              goto LAB_0011ea40;
            (((struct qdp_ril_param *)(frame - 0x450))->value) = malloc((long)iVar7);
            if ((((struct qdp_ril_param *)(frame - 0x450))->value) != (void *)0x0)
            {
              memset((((struct qdp_ril_param *)(frame - 0x450))->value), 0, (long)iVar7);
              QDP_LOG(frame - 0x280, DAT_00126700, "QDP: malloc\'ed [%p]", (((struct qdp_ril_param *)(frame - 0x450))->value));
              if ((((struct qdp_ril_param *)(frame - 0x450))->value) != (void *)0x0)
              {
                if (SCARRY4((int)*(uint64_t *)(frame - 0x3a8), 1))
                  goto LAB_0011ea40;
                strlcpy((((struct qdp_ril_param *)(frame - 0x450))->value), (const char *)(((struct qdp_ril_param *)(frame - 0x3b0))->value), (long)((int)*(uint64_t *)(frame - 0x3a8) + 1));
                uVar11 = (int)*(uint64_t *)(frame - 0x3a8);
                goto LAB_0011d464;
              }
            }
          }
        }
        else
        {
          iVar7 = (int)*(uint64_t *)(frame - 0x308) + 1;
          if (SCARRY4((int)*(uint64_t *)(frame - 0x308), 1))
            goto LAB_0011ea40;
          (((struct qdp_ril_param *)(frame - 0x450))->value) = malloc((long)iVar7);
          if ((((struct qdp_ril_param *)(frame - 0x450))->value) != (void *)0x0)
          {
            memset((((struct qdp_ril_param *)(frame - 0x450))->value), 0, (long)iVar7);
            QDP_LOG(frame - 0x280, DAT_001266e8, "QDP: malloc\'ed [%p]", (((struct qdp_ril_param *)(frame - 0x450))->value));
            if ((((struct qdp_ril_param *)(frame - 0x450))->value) != (void *)0x0)
            {
              if (SCARRY4((int)*(uint64_t *)(frame - 0x308), 1))
                goto LAB_0011ea40;
              strlcpy((((struct qdp_ril_param *)(frame - 0x450))->value), (const char *)(((struct qdp_ril_param *)(frame - 0x310))->value), (long)((int)*(uint64_t *)(frame - 0x308) + 1));
              uVar11 = (int)*(uint64_t *)(frame - 0x308);
            LAB_0011d464:
              *(uint64_t *)(frame - 0x448) = CONCAT44((*(uint32_t *)((char *)(frame - 0x448) + 4)), uVar11);
            }
          }
        }
        if (((int)*(uint64_t *)(frame - 0x2f8) < 0) || ((*(long *)((frame - 0x300))) == 0))
        {
          if ((-1 < (int)*(uint64_t *)(frame - 0x398)) && ((*(long *)((frame - 0x3a0))) != 0))
          {
            iVar7 = (int)*(uint64_t *)(frame - 0x398) + 1;
            if (SCARRY4((int)*(uint64_t *)(frame - 0x398), 1))
              goto LAB_0011ea40;
            (((struct qdp_ril_param *)(frame - 0x440))->value) = malloc((long)iVar7);
            if ((((struct qdp_ril_param *)(frame - 0x440))->value) != (void *)0x0)
            {
              memset((((struct qdp_ril_param *)(frame - 0x440))->value), 0, (long)iVar7);
              QDP_LOG(frame - 0x280, DAT_00126730, "QDP: malloc\'ed [%p]", (((struct qdp_ril_param *)(frame - 0x440))->value));
              if ((((struct qdp_ril_param *)(frame - 0x440))->value) != (void *)0x0)
              {
                if (SCARRY4((int)*(uint64_t *)(frame - 0x398), 1))
                  goto LAB_0011ea40;
                strlcpy((((struct qdp_ril_param *)(frame - 0x440))->value), (const char *)((*(long *)((frame - 0x3a0)))), (long)((int)*(uint64_t *)(frame - 0x398) + 1));
                uVar11 = (int)*(uint64_t *)(frame - 0x398);
                goto LAB_0011d5fc;
              }
            }
          }
        }
        else
        {
          iVar7 = (int)*(uint64_t *)(frame - 0x2f8) + 1;
          if (SCARRY4((int)*(uint64_t *)(frame - 0x2f8), 1))
            goto LAB_0011ea40;
          (((struct qdp_ril_param *)(frame - 0x440))->value) = malloc((long)iVar7);
          if ((((struct qdp_ril_param *)(frame - 0x440))->value) != (void *)0x0)
          {
            memset((((struct qdp_ril_param *)(frame - 0x440))->value), 0, (long)iVar7);
            QDP_LOG(frame - 0x280, DAT_00126718, "QDP: malloc\'ed [%p]", (((struct qdp_ril_param *)(frame - 0x440))->value));
            if ((((struct qdp_ril_param *)(frame - 0x440))->value) != (void *)0x0)
            {
              if (SCARRY4((int)*(uint64_t *)(frame - 0x2f8), 1))
                goto LAB_0011ea40;
              strlcpy((((struct qdp_ril_param *)(frame - 0x440))->value), (const char *)((*(long *)((frame - 0x300)))), (long)((int)*(uint64_t *)(frame - 0x2f8) + 1));
              uVar11 = (int)*(uint64_t *)(frame - 0x2f8);
            LAB_0011d5fc:
              *(uint64_t *)(frame - 0x438) = CONCAT44((*(uint32_t *)((char *)(frame - 0x438) + 4)), uVar11);
            }
          }
        }
        if ((int)*(uint64_t *)(frame - 0x2e8) < 1)
        {
          if (0 < (int)*(uint64_t *)(frame - 0x388))
          {
            iVar7 = (int)*(uint64_t *)(frame - 0x388) + 1;
            if (SCARRY4((int)*(uint64_t *)(frame - 0x388), 1))
              goto LAB_0011ea40;
            (((struct qdp_ril_param *)(frame - 0x430))->value) = malloc((long)iVar7);
            if ((((struct qdp_ril_param *)(frame - 0x430))->value) != (void *)0x0)
            {
              memset((((struct qdp_ril_param *)(frame - 0x430))->value), 0, (long)iVar7);
              QDP_LOG(frame - 0x280, DAT_00126760, "QDP: malloc\'ed [%p]", (((struct qdp_ril_param *)(frame - 0x430))->value));
              if ((((struct qdp_ril_param *)(frame - 0x430))->value) != (void *)0x0)
              {
                iVar7 = (int)*(uint64_t *)(frame - 0x388);
                uVar2 = *(uint64_t *)(frame - 0x390);
                goto joined_r0x0011d76c;
              }
            }
          }
        }
        else
        {
          iVar7 = (int)*(uint64_t *)(frame - 0x2e8) + 1;
          if (SCARRY4((int)*(uint64_t *)(frame - 0x2e8), 1))
            goto LAB_0011ea40;
          (((struct qdp_ril_param *)(frame - 0x430))->value) = malloc((long)iVar7);
          if ((((struct qdp_ril_param *)(frame - 0x430))->value) != (void *)0x0)
          {
            memset((((struct qdp_ril_param *)(frame - 0x430))->value), 0, (long)iVar7);
            QDP_LOG(frame - 0x280, DAT_00126748, "QDP: malloc\'ed [%p]", (((struct qdp_ril_param *)(frame - 0x430))->value));
            if ((((struct qdp_ril_param *)(frame - 0x430))->value) != (void *)0x0)
            {
              iVar7 = (int)*(uint64_t *)(frame - 0x2e8);
              uVar2 = *(uint64_t *)(frame - 0x2f0);
            joined_r0x0011d76c:
              if (SCARRY4(iVar7, 1))
                goto LAB_0011ea40;
              strlcpy((((struct qdp_ril_param *)(frame - 0x430))->value), (const char *)(uVar2), (long)(iVar7 + 1));
              *(uint64_t *)(frame - 0x428) = CONCAT44((*(uint32_t *)((char *)(frame - 0x428) + 4)), (int)*(uint64_t *)(frame - 0x2e8));
            }
          }
        }
        if ((int)*(uint64_t *)(frame - 0x2d8) < 1)
        {
          if (0 < (int)*(uint64_t *)(frame - 0x378))
          {
            iVar7 = (int)*(uint64_t *)(frame - 0x378) + 1;
            if (SCARRY4((int)*(uint64_t *)(frame - 0x378), 1))
              goto LAB_0011ea40;
            (((struct qdp_ril_param *)(frame - 0x420))->value) = malloc((long)iVar7);
            if ((((struct qdp_ril_param *)(frame - 0x420))->value) != (void *)0x0)
            {
              memset((((struct qdp_ril_param *)(frame - 0x420))->value), 0, (long)iVar7);
              QDP_LOG(frame - 0x280, DAT_00126790, "QDP: malloc\'ed [%p]", (((struct qdp_ril_param *)(frame - 0x420))->value));
              if ((((struct qdp_ril_param *)(frame - 0x420))->value) != (void *)0x0)
              {
                if (SCARRY4((int)*(uint64_t *)(frame - 0x378), 1))
                  goto LAB_0011ea40;
                strlcpy((((struct qdp_ril_param *)(frame - 0x420))->value), (const char *)(((struct qdp_ril_param *)(frame - 0x380))->value), (long)((int)*(uint64_t *)(frame - 0x378) + 1));
                uVar11 = (int)*(uint64_t *)(frame - 0x378);
                goto LAB_0011d910;
              }
            }
          }
        }
        else
        {
          iVar7 = (int)*(uint64_t *)(frame - 0x2d8) + 1;
          if (SCARRY4((int)*(uint64_t *)(frame - 0x2d8), 1))
            goto LAB_0011ea40;
          (((struct qdp_ril_param *)(frame - 0x420))->value) = malloc((long)iVar7);
          if ((((struct qdp_ril_param *)(frame - 0x420))->value) != (void *)0x0)
          {
            memset((((struct qdp_ril_param *)(frame - 0x420))->value), 0, (long)iVar7);
            QDP_LOG(frame - 0x280, DAT_00126778, "QDP: malloc\'ed [%p]", (((struct qdp_ril_param *)(frame - 0x420))->value));
            if ((((struct qdp_ril_param *)(frame - 0x420))->value) != (void *)0x0)
            {
              if (SCARRY4((int)*(uint64_t *)(frame - 0x2d8), 1))
                goto LAB_0011ea40;
              strlcpy((((struct qdp_ril_param *)(frame - 0x420))->value), (const char *)(((struct qdp_ril_param *)(frame - 0x2e0))->value), (long)((int)*(uint64_t *)(frame - 0x2d8) + 1));
              uVar11 = (int)*(uint64_t *)(frame - 0x2d8);
            LAB_0011d910:
              *(uint64_t *)(frame - 0x418) = CONCAT44((*(uint32_t *)((char *)(frame - 0x418) + 4)), uVar11);
            }
          }
        }
        if ((int)*(uint64_t *)(frame - 0x2c8) < 1)
        {
          if (0 < (int)*(uint64_t *)(frame - 0x368))
          {
            iVar7 = (int)*(uint64_t *)(frame - 0x368) + 1;
            if (SCARRY4((int)*(uint64_t *)(frame - 0x368), 1))
              goto LAB_0011ea40;
            (((struct qdp_ril_param *)(frame - 0x410))->value) = malloc((long)iVar7);
            if ((((struct qdp_ril_param *)(frame - 0x410))->value) != (void *)0x0)
            {
              memset((((struct qdp_ril_param *)(frame - 0x410))->value), 0, (long)iVar7);
              QDP_LOG(frame - 0x280, DAT_001267c0, "QDP: malloc\'ed [%p]", (((struct qdp_ril_param *)(frame - 0x410))->value));
              if ((((struct qdp_ril_param *)(frame - 0x410))->value) != (void *)0x0)
              {
                iVar7 = (int)*(uint64_t *)(frame - 0x368);
                uVar2 = *(uint64_t *)(frame - 0x370);
                goto joined_r0x0011da80;
              }
            }
          }
        }
        else
        {
          iVar7 = (int)*(uint64_t *)(frame - 0x2c8) + 1;
          if (SCARRY4((int)*(uint64_t *)(frame - 0x2c8), 1))
            goto LAB_0011ea40;
          (((struct qdp_ril_param *)(frame - 0x410))->value) = malloc((long)iVar7);
          if ((((struct qdp_ril_param *)(frame - 0x410))->value) != (void *)0x0)
          {
            memset((((struct qdp_ril_param *)(frame - 0x410))->value), 0, (long)iVar7);
            QDP_LOG(frame - 0x280, DAT_001267a8, "QDP: malloc\'ed [%p]", (((struct qdp_ril_param *)(frame - 0x410))->value));
            if ((((struct qdp_ril_param *)(frame - 0x410))->value) != (void *)0x0)
            {
              iVar7 = (int)*(uint64_t *)(frame - 0x2c8);
              uVar2 = *(uint64_t *)(frame - 0x2d0);
            joined_r0x0011da80:
              if (SCARRY4(iVar7, 1))
                goto LAB_0011ea40;
              strlcpy((((struct qdp_ril_param *)(frame - 0x410))->value), (const char *)(uVar2), (long)(iVar7 + 1));
              *(uint64_t *)(frame - 0x408) = CONCAT44((*(uint32_t *)((char *)(frame - 0x408) + 4)), (int)*(uint64_t *)(frame - 0x2c8));
            }
          }
        }
        if ((int)*(uint64_t *)(frame - 0x2b8) < 1)
        {
          if (0 < (int)*(uint64_t *)(frame - 0x358))
          {
            iVar7 = (int)*(uint64_t *)(frame - 0x358) + 1;
            if (SCARRY4((int)*(uint64_t *)(frame - 0x358), 1))
              goto LAB_0011ea40;
            (((struct qdp_ril_param *)(frame - 0x400))->value) = malloc((long)iVar7);
            if ((((struct qdp_ril_param *)(frame - 0x400))->value) != (void *)0x0)
            {
              memset((((struct qdp_ril_param *)(frame - 0x400))->value), 0, (long)iVar7);
              QDP_LOG(frame - 0x280, DAT_001267f0, "QDP: malloc\'ed [%p]", (((struct qdp_ril_param *)(frame - 0x400))->value));
              if ((((struct qdp_ril_param *)(frame - 0x400))->value) != (void *)0x0)
              {
                iVar7 = (int)*(uint64_t *)(frame - 0x358);
                uVar2 = *(uint64_t *)(frame - 0x360);
                goto joined_r0x0011dc04;
              }
            }
          }
        }
        else
        {
          iVar7 = (int)*(uint64_t *)(frame - 0x2b8) + 1;
          if (SCARRY4((int)*(uint64_t *)(frame - 0x2b8), 1))
            goto LAB_0011ea40;
          (((struct qdp_ril_param *)(frame - 0x400))->value) = malloc((long)iVar7);
          if ((((struct qdp_ril_param *)(frame - 0x400))->value) != (void *)0x0)
          {
            memset((((struct qdp_ril_param *)(frame - 0x400))->value), 0, (long)iVar7);
            QDP_LOG(frame - 0x280, DAT_001267d8, "QDP: malloc\'ed [%p]", (((struct qdp_ril_param *)(frame - 0x400))->value));
            if ((((struct qdp_ril_param *)(frame - 0x400))->value) != (void *)0x0)
            {
              iVar7 = (int)*(uint64_t *)(frame - 0x2b8);
              uVar2 = *(uint64_t *)(frame - 0x2c0);
            joined_r0x0011dc04:
              if (SCARRY4(iVar7, 1))
              {
              LAB_0011ea40:
                /* WARNING: Subroutine does not return */
                abort();
              }
              strlcpy((((struct qdp_ril_param *)(frame - 0x400))->value), (const char *)(uVar2), (long)(iVar7 + 1));
              *(uint64_t *)(frame - 0x3f8) = CONCAT44((*(uint32_t *)((char *)(frame - 0x3f8) + 4)), (int)*(uint64_t *)(frame - 0x2b8));
            }
          }
        }
        iVar7 = qdp_epc_multi_param_search((long)((frame - 0x460)), (frame - 0x474), param_5, param_3, 0, (frame - 0x480));
        if (iVar7 != 1)
        {
          QDP_LOG(frame - 0x280, DAT_00126808, "qdp_epc_multi_param_search returned err [%d]", iVar7);
        }
      }
      cVar4 = ((char *)(frame - 0x468))[0];
      if (((((char *)(frame - 0x468))[0] == '\x01') && ((*(int *)((frame - 0x474))) == -1)) &&
          (iVar7 = qdp_3gpp_multi_param_search((struct qdp_ril_param *)(frame - 0x320), param_2, param_3, __s, (frame - 0x478), 0, ((char *)(frame - 0x484))), iVar7 != 1))
      {
        QDP_LOG(frame - 0x280, DAT_00126820, "qdp_3gpp_multi_param_search returned err [%d]", iVar7);
      }
      cVar3 = ((char *)(frame - 0x46c))[0];
      if (((((char *)(frame - 0x46c))[0] == '\x01') && ((*(int *)((frame - 0x474))) == -1)) &&
          (iVar7 = qdp_3gpp2_multi_param_search((long)((frame - 0x3c0)), param_4, param_5, __s_00, (uint32_t *)((long)(frame - 0x480) + 4)), iVar7 != 1))
      {
        QDP_LOG(frame - 0x280, DAT_00126838, "qdp_3gpp2_multi_param_search returned err [%d]", iVar7);
      }
      QDP_LOG(frame - 0x280, DAT_00126850, "profile_id_epc = %d,profile_id_3gpp = %d,profile_id_3gpp2= %d", (*(int *)((frame - 0x474))), *param_2, *param_4);
      iVar7 = (*(int *)((frame - 0x474)));
      if (cVar6 == '\x01')
      {
        if ((*(int *)((frame - 0x474))) == -1)
        {
          QDP_LOG(frame - 0x280, DAT_001268b0, "qdp_epc_multi_param_search unsuccessful, found [%d] profile_id_epc");
          if ((int)*(uint64_t *)(frame - 0x480) == 0)
          {
            if ((*param_2 == -1) && (*param_4 == -1))
            {
              iVar7 = qdp_epc_profile_create((struct qdp_ril_param *)(frame - 0x460), (frame - 0x474), param_5, param_3, 0, 0);
              if (iVar7 != 1)
              {
                QDP_LOG_FMT(frame - 0x280, "qdp_epc_profile_create failed [%d]", iVar7);
                puVar8 = DAT_001268c8;
                goto LAB_0011d390;
              }
              if ((*(int *)((frame - 0x474))) == -1)
              {
                iVar7 = -1;
                goto joined_r0x0011ea34;
              }
              qdp_insert_profile_id((*(int *)((frame - 0x474))), 3, 0);
              qdp_profile_ref_up((*(int *)((frame - 0x474))));
            }
            goto LAB_0011e0b8;
          }
          QDP_LOG(frame - 0x280, DAT_001268e0, "Profile lookup error[%d], no profile created");
          iVar9 = 3;
          iVar7 = (int)*(uint64_t *)(frame - 0x480);
          goto LAB_0011e954;
        }
        QDP_LOG(frame - 0x280, DAT_00126868, "EPC profile [%d] found");
        iVar7 = qdp_profile_ref_up((*(int *)((frame - 0x474))));
        if (iVar7 == 1)
        {
          QDP_LOG_FMT(frame - 0x280, "profile id [%d] is a temp EPC profile", (*(int *)((frame - 0x474))));
          puVar8 = DAT_00126880;
        }
        else
        {
          QDP_LOG_FMT(frame - 0x280, "profile id [%d] is an existing modem EPC profile", (*(int *)((frame - 0x474))));
          puVar8 = DAT_00126898;
        }
        msg_sprintf(puVar8, (frame - 0x280));
      LAB_0011e0b8:
        bVar5 = (*(int *)((frame - 0x474))) != -1;
        if ((cVar4 == '\x01') && ((*(int *)((frame - 0x474))) != -1))
        {
          bVar5 = true;
          *param_2 = (*(int *)((frame - 0x474)));
        }
        if ((cVar3 == '\x01') && (bVar5))
        {
          *param_4 = (*(int *)((frame - 0x474)));
        }
        else
        {
          iVar7 = (*(int *)((frame - 0x474)));
          if ((*(int *)((frame - 0x474))) == -1)
            goto joined_r0x0011ea34;
        }
      LAB_0011e754:
        bVar5 = true;
      }
      else
      {
      joined_r0x0011ea34:
        if ((cVar4 == '\x01') && (iVar7 == -1))
        {
          if (*param_2 == -1)
          {
            QDP_LOG(frame - 0x280, DAT_001268f8, "qdp_3gpp_multi_param_search unsuccessful, found [%d] profile_id_3gpp");
            if ((*(int *)((frame - 0x478))) != 0)
            {
              QDP_LOG_FMT(frame - 0x280, "Profile lookup error[%d], no profile created");
              puVar8 = DAT_00126928;
            LAB_0011e878:
              msg_sprintf(puVar8, (frame - 0x280));
              iVar9 = 1;
              iVar7 = (*(int *)((frame - 0x478)));
              goto LAB_0011e954;
            }
            *param_3 = 0xffffffff;
            iVar7 = qdp_3gpp_profile_create((struct qdp_ril_param *)(frame - 0x320), param_2, param_3, 0, 0);
            if (iVar7 != 1)
            {
              QDP_LOG(frame - 0x280, DAT_00126910, "qdp_3gpp_profile_create failed [%d]", iVar7);
            }
            if (*param_2 != -1)
            {
              qdp_insert_profile_id(*param_2, 1, 0);
              qdp_profile_ref_up(*param_2);
            }
          }
          else
          {
            QDP_LOG(frame - 0x280, DAT_00126940, "found [%d] 3gpp profile id");
            if (((*PTR_qdp_allow_update_modem_profile_001295c8 != '\0' || ((char *)(frame - 0x484))[0] != '\0') ||
                 *PTR_carrier_config_flag_001295d0 != '\0') &&
                (cVar6 = qdp_profile_needs_update((long)((frame - 0x320)), __s), cVar6 != '\0'))
            {
              QDP_LOG(frame - 0x280, DAT_00126958, "3GPP profile [%d] needs update", *param_2);
              iVar7 = qdp_3gpp_profile_update((long)((frame - 0x320)), *param_2, (frame - 0x464), 0);
              if (iVar7 != 1)
              {
                QDP_LOG_FMT(frame - 0x280, "profile [%d] update failed. rc[%d] error[%d]", *param_2, iVar7, (*(uint32_t *)((frame - 0x464))));
                puVar8 = DAT_00126970;
                goto LAB_0011e878;
              }
            }
            iVar7 = qdp_profile_ref_up(*param_2);
            if (iVar7 == 1)
            {
              QDP_LOG_FMT(frame - 0x280, "profile id [%d] is a temp 3gpp profile", *param_2);
              puVar8 = DAT_00126988;
            }
            else
            {
              QDP_LOG_FMT(frame - 0x280, "profile id [%d] is an existing modem 3gpp profile", *param_2);
              puVar8 = DAT_001269a0;
            }
            msg_sprintf(puVar8, (frame - 0x280));
          }
        }
        bVar5 = true;
        if ((cVar3 == '\x01') && ((*(int *)((frame - 0x474))) == -1))
        {
          if (*param_4 != -1)
          {
            QDP_LOG(frame - 0x280, DAT_00126a00, "3gpp2 profile [%d] found");
            if ((*PTR_carrier_config_flag_001295d0 != '\0' ||
                 *PTR_qdp_allow_update_modem_profile_001295c8 != '\0') &&
                (cVar6 = qdp_profile_needs_update((long)((frame - 0x3c0)), __s_00), cVar6 != '\0'))
            {
              QDP_LOG(frame - 0x280, DAT_00126a18, "3GPP2 profile [%d] needs update", *param_4);
              iVar7 = qdp_3gpp2_profile_update((long)((frame - 0x3c0)), *param_4, (frame - 0x464));
              if (iVar7 != 1)
              {
                QDP_LOG_FMT(frame - 0x280, "profile [%d] update failed. rc[%d] error[%d]", *param_4, iVar7, (*(uint32_t *)((frame - 0x464))));
                puVar8 = DAT_00126a30;
                goto LAB_0011e940;
              }
            }
            iVar7 = qdp_profile_ref_up(*param_4);
            if (iVar7 == 1)
            {
              QDP_LOG_FMT(frame - 0x280, "profile id [%d] is a temp 3gpp2 profile", *param_4);
              puVar8 = DAT_00126a48;
            }
            else
            {
              QDP_LOG_FMT(frame - 0x280, "profile id [%d] is an existing modem 3gpp2 profile", *param_4);
              puVar8 = DAT_00126a60;
            }
            msg_sprintf(puVar8, (frame - 0x280));
            goto LAB_0011e754;
          }
          QDP_LOG(frame - 0x280, DAT_001269b8, "qdp_3gpp2_multi_param_search unsuccessful, found [%d] profile_id_3gpp2");
          if ((*(uint32_t *)((char *)(frame - 0x480) + 4)) == 0)
          {
            *param_5 = 0xffffffff;
            iVar7 = qdp_3gpp2_profile_create((struct qdp_ril_param *)(frame - 0x3c0), param_4, param_5, 0, 0);
            if (iVar7 != 1)
            {
              QDP_LOG_FMT(frame - 0x280, "qdp_3gpp2_profile_create failed [%d]", iVar7);
              puVar8 = DAT_001269d0;
              goto LAB_0011d390;
            }
            if (*param_4 != -1)
            {
              qdp_insert_profile_id(*param_4, 2, 0);
              qdp_profile_ref_up(*param_4);
            }
            goto LAB_0011e754;
          }
          QDP_LOG_FMT(frame - 0x280, "Profile lookup error[%d], no profile created");
          puVar8 = DAT_001269e8;
        LAB_0011e940:
          msg_sprintf(puVar8, (frame - 0x280));
          iVar9 = 2;
          iVar7 = (*(uint32_t *)((char *)(frame - 0x480) + 4));
        LAB_0011e954:
          bVar5 = false;
          *param_6 = iVar7;
          param_6[1] = iVar9;
        }
      }
    }
  }
  lVar10 = 0;
  do
  {
    if ((0 < *(int *)((long)(frame - 0x318) + lVar10)) && (*(long *)((long)(frame - 0x320) + lVar10) != 0))
    {
      QDP_LOG(frame - 0x280, DAT_00127ae0, "QDP: freeing [%p]");
      free(*(void **)((long)(frame - 0x320) + lVar10));
      *(void **)((long)(frame - 0x320) + lVar10) = 0;
      *(uint64_t *)((long)(frame - 0x320) + lVar10) = 0;
    }
    lVar10 = lVar10 + 0x10;
  } while (lVar10 != 0xa0);
  lVar10 = 0;
  do
  {
    if ((0 < *(int *)((long)(frame - 0x3b8) + lVar10)) && (*(long *)((long)(frame - 0x3c0) + lVar10) != 0))
    {
      QDP_LOG(frame - 0x280, DAT_00127ae0, "QDP: freeing [%p]");
      free(*(void **)((long)(frame - 0x3c0) + lVar10));
      *(void **)((long)(frame - 0x3c0) + lVar10) = 0;
      *(uint64_t *)((long)(frame - 0x3c0) + lVar10) = 0;
    }
    lVar10 = lVar10 + 0x10;
  } while (lVar10 != 0xa0);
  lVar10 = 0;
  do
  {
    if ((0 < *(int *)((long)(frame - 0x458) + lVar10)) && (*(long *)((long)(frame - 0x460) + lVar10) != 0))
    {
      QDP_LOG(frame - 0x280, DAT_00127ae0, "QDP: freeing [%p]");
      free(*(void **)((long)(frame - 0x460) + lVar10));
      *(void **)((long)(frame - 0x460) + lVar10) = 0;
      *(uint64_t *)((long)(frame - 0x460) + lVar10) = 0;
    }
    lVar10 = lVar10 + 0x10;
  } while (lVar10 != 0xa0);
  if (__s != (void *)0x0)
  {
    QDP_LOG(frame - 0x280, DAT_00126a78, "QDP: freeing [%p]", __s);
    free(__s);
  }
  if (__s_00 != (void *)0x0)
  {
    QDP_LOG(frame - 0x280, DAT_00126a90, "QDP: freeing [%p]", __s_00);
    free(__s_00);
  }
  if (bVar5)
  {
    QDP_LOG(frame - 0x280, DAT_00126ac0, DAT_001026d4, "qdp_profile_look_up EXIT success");
    uVar11 = 1;
  }
  else
  {
    QDP_LOG(frame - 0x280, DAT_00126aa8, DAT_001026d4, "qdp_profile_look_up EXIT failed");
    uVar11 = 0;
  }
LAB_0011cfb0:
  return uVar11;
}

long qdp_profile_needs_update(long param_1, char *param_2)

{
  uint uVar1;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint8_t *puVar7;
  char cVar8;
  uint32_t uVar9;
  char *__s1;
  long lVar10;
  uint8_t frame_store[1120] __attribute__((aligned(16)));
  uint8_t *const frame = frame_store + 1120;

  memset(frame_store, 0, sizeof frame_store);
  QDP_LOG(frame - 0x250, DAT_00129040, "%s ENTRY", "qdp_profile_needs_update");
  if (((param_1 == 0) || (param_2 == (char *)0x0)) || (*param_2 == '\0'))
  {
    memset(frame - 0x250, 0, 0x200);
    if (param_2 == (char *)0x0)
    {
      cVar8 = '\0';
    }
    else
    {
      cVar8 = *param_2;
    }
    qdp_format_log_msg((frame - 0x250), 0x200, "Invalid input [%d]", cVar8);
    puVar7 = DAT_00129058;
  LAB_0011eba0:
    msg_sprintf(puVar7, (frame - 0x250));
  LAB_0011eba8:
    uVar9 = 0;
  }
  else
  {
    __s1 = *(char **)(param_1 + 0x60);
    if (*(int *)(param_2 + 4) == 1)
    {
      if (__s1 == (char *)0x0)
        goto LAB_0011eba8;
      if (param_2[0x9f6] != '\0')
      {
        uVar1 = *(uint *)(param_2 + 0x9f8);
        if (2 < uVar1)
        {
          uVar1 = 0xffffffff;
        }
        iVar3 = strcasecmp(__s1, "IP");
        if (iVar3 == 0)
        {
          uVar6 = 0;
        }
        else
        {
          iVar3 = strcasecmp(__s1, "IPV6");
          if (iVar3 == 0)
          {
            uVar6 = 1;
          }
          else
          {
            iVar3 = strcasecmp(__s1, "IPV4V6");
            uVar6 = 2;
            if (iVar3 != 0)
            {
              uVar6 = 0xffffffff;
            }
          }
        }
        if (uVar1 == uVar6)
          goto LAB_0011eba8;
      }
      QDP_LOG_FMT(frame - 0x250, "3gpp2 profile [%d] pdn needs to be updated to [%s]", param_2[8], __s1);
      puVar7 = DAT_001290a0;
    }
    else
    {
      if (*(int *)(param_2 + 4) != 0)
      {
        QDP_LOG_FMT(frame - 0x250, "Profile type [%d] not supported");
        puVar7 = DAT_001290b8;
        goto LAB_0011eba0;
      }
      lVar10 = *(long *)(param_1 + 0x70);
      if (__s1 == (char *)0x0)
      {
      LAB_0011edf0:
        if (lVar10 == 0)
          goto LAB_0011eba8;
        if (((param_2[0x42a] != '\0') && (param_2[0x430] != '\0')) &&
            (uVar1 = *(uint *)(param_2 + 0x42c), uVar1 == *(uint *)(param_2 + 0x434)))
        {
          uVar6 = qdp_pdn_type_from_string((char *)(lVar10));
          if (2 < uVar1)
          {
            uVar1 = 0xffffffff;
          }
          if (uVar6 == uVar1)
            goto LAB_0011eba8;
        }
        QDP_LOG_FMT(frame - 0x250, "3gpp profile [%d] roaming pdp needs update to [%s]", param_2[8], lVar10);
        puVar7 = DAT_00129088;
      }
      else
      {
        if (param_2[0x4c] != '\0')
        {
          if (*(uint *)(param_2 + 0x50) < 4)
          {
            iVar3 = *(int *)(DAT_00106088 + (long)(int)*(uint *)(param_2 + 0x50) * 4);
          }
          else
          {
            iVar3 = -1;
          }
          iVar4 = strcasecmp(__s1, "IP");
          if (iVar4 == 0)
          {
            iVar4 = 0;
          }
          else
          {
            iVar4 = strcasecmp(__s1, "IPV6");
            if (iVar4 == 0)
            {
              iVar4 = 1;
            }
            else
            {
              iVar5 = strcasecmp(__s1, "IPV4V6");
              iVar4 = 2;
              if (iVar5 != 0)
              {
                iVar4 = -1;
              }
            }
          }
          if (iVar3 == iVar4)
            goto LAB_0011edf0;
        }
        QDP_LOG_FMT(frame - 0x250, "3gpp profile [%d] pdp needs update to [%s]", param_2[8], __s1);
        puVar7 = DAT_00129070;
      }
    }
    msg_sprintf(puVar7, (frame - 0x250));
    uVar9 = 1;
  }
  QDP_LOG(frame - 0x250, DAT_001290d0, "%s EXIT with [%d]", "qdp_profile_needs_update", uVar9);
  return uVar9;
}

long qdp_3gpp2_profile_update(long param_1, uint32_t param_2, uint32_t *param_3)

{
  int iVar2;
  uint8_t *puVar3;
  uint32_t uVar4;
  uint8_t frame_store[6336] __attribute__((aligned(16)));
  uint8_t *const frame = frame_store + 6336;

  memset(frame_store, 0, sizeof frame_store);
  memset(((uint8_t *)(frame - 0xc78)), 0, 0xc30);
  memset(frame - 0xe90, 0, 0x210);
  qdp_format_log_msg((frame - 0xe80), 0x200, DAT_001026d4, "qdp_3gpp2_profile_update ENTRY");
  msg_sprintf(DAT_00128db8, (frame - 0xe80));
  if (param_1 == 0)
  {
    QDP_LOG_FMT(frame - 0xe80, "Invalid profile params for profile_id [%d]", param_2);
    puVar3 = DAT_00128dd0;
  }
  else
  {
    QDP_LOG(frame - 0xe80, DAT_00128de8, "Trying to update profile for profile id [%d]", param_2);
    memset(((uint8_t *)(frame - 0xc78)), 0, 0xc30);
    memset(frame - 0xe90, 0, 0x10);
    iVar2 = qdp_3gpp2_profile_fill_common_params((struct qdp_ril_param *)(param_1), param_2, ((uint8_t *)(frame - 0xc78)));
    if (iVar2 == 1)
    {
      iVar2 = qdp_qmi_wds_modify_profile(*(uint64_t *)PTR_global_qmi_wds_hndl_001295b0, (long)(((uint8_t *)(frame - 0xc78))), (frame - 0xe90));
      if (iVar2 == 1)
      {
        QDP_LOG(frame - 0xe80, DAT_00128e30, DAT_001026d4, "3GPP2 profile update Success");
        uVar4 = 1;
      }
      else
      {
        QDP_LOG(frame - 0xe80, DAT_00128e18, "Failed to modify 3gpp2 profile params for profile_id [%d]", param_2);
        uVar4 = 0;
        *param_3 = (((struct qdp_qmi_status *)(frame - 0xe90))->qmi_err);
      }
      goto LAB_0011f1d0;
    }
    QDP_LOG_FMT(frame - 0xe80, "Failed to fill 3gpp2 profile params for profile_id [%d]", param_2);
    puVar3 = DAT_00128e00;
  }
  msg_sprintf(puVar3, (frame - 0xe80));
  uVar4 = 0;
LAB_0011f1d0:
  QDP_LOG(frame - 0xe80, DAT_00128e48, DAT_001026d4, "qdp_3gpp2_profile_update EXIT");
  return uVar4;
}

long qdp_profile_look_up_by_param(long param_1, uint32_t param_2, uint param_3, int *param_4, byte *param_5,
                                  uint32_t *param_6, int *param_7, uint8_t *param_8, uint32_t *param_9,
                                  uint32_t *param_10, uint64_t *param_11)

{
  uint64_t uVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  int iVar6;
  uint8_t *puVar7;
  uint32_t uVar8;
  int iVar9;
  uint32_t uVar10;
  uint uVar11;
  ulong uVar12;
  long lVar13;
  bool bVar14;
  uint8_t frame_store[1168] __attribute__((aligned(16)));
  uint8_t *const frame = frame_store + 1168;

  memset(frame_store, 0, sizeof frame_store);
  ((char *)(frame - 0x454))[0] = '\0';
  ((char *)(frame - 0x458))[0] = '\0';
  ((char *)(frame - 0x45c))[0] = '\0';
  memset(frame - 0x460, 0, 0x4);
  memset(frame - 0x3e8, 0, 0x8);
  memset(frame - 0x3d0, 0, 0x160);
  (((struct qdp_ril_param *)(frame - 0x3f0))->value) = (void *)0x0;
  memset(frame - 0x408, 0, 0x8);
  memset(frame - 0x3e0, 0, 0x10);
  (((struct qdp_ril_param *)(frame - 0x410))->value) = (void *)0x0;
  memset(frame - 0x3f8, 0, 0x8);
  (((struct qdp_ril_param *)(frame - 0x400))->value) = (void *)0x0;
  memset(frame - 0x428, 0, 0x8);
  (((struct qdp_ril_param *)(frame - 0x430))->value) = (void *)0x0;
  memset(frame - 0x418, 0, 0x8);
  (((struct qdp_ril_param *)(frame - 0x420))->value) = (void *)0x0;
  memset(frame - 0x448, 0, 0x8);
  (*(uint16_t **)((frame - 0x450))) = (uint16_t *)0x0;
  memset(frame - 0x438, 0, 0x8);
  (((struct qdp_ril_param *)(frame - 0x440))->value) = (void *)0x0;
  memset(frame - 0x470, 0, 0x10);
  QDP_LOG(frame - 0x270, DAT_00126ad8, DAT_001026d4, "qdp_profile_look_up_by_param ENTRY");
  if (*PTR_qdp_inited_001295b8 == '\0')
  {
    QDP_LOG(frame - 0x270, DAT_00126af0, DAT_001026d4, "qdp not inited");
    uVar8 = 0;
    goto LAB_0011fb58;
  }
  (*(int *)((frame - 0x460))) = -1;
  if (((((param_10 == (uint32_t *)0x0) || (param_1 == 0)) || (param_4 == (int *)0x0)) ||
       ((param_6 == (uint32_t *)0x0 || (param_7 == (int *)0x0)))) ||
      ((param_9 == (uint32_t *)0x0 || (param_11 == (uint64_t *)0x0))))
  {
    QDP_LOG_FMT(frame - 0x270, DAT_001026d4, "NULL params rcvd");
    puVar7 = DAT_00126b08;
  LAB_0011f7a8:
    msg_sprintf(puVar7, (frame - 0x270));
    bVar14 = false;
  }
  else
  {
    *param_4 = -1;
    *param_7 = -1;
    *param_5 = 0;
    *param_8 = 0;
    *param_6 = 0xffffffff;
    *param_9 = 0xffffffff;
    *param_11 = 0;
    *param_10 = 0;
    memset(frame - 0x3e8, 0, 0x8);
    memset(frame - 0x3d0, 0, 0x160);
    (((struct qdp_ril_param *)(frame - 0x3f0))->value) = (void *)0x0;
    memset(frame - 0x408, 0, 0x8);
    memset(frame - 0x3e0, 0, 0x10);
    (((struct qdp_ril_param *)(frame - 0x410))->value) = (void *)0x0;
    memset(frame - 0x3f8, 0, 0x8);
    (((struct qdp_ril_param *)(frame - 0x400))->value) = (void *)0x0;
    memset(frame - 0x428, 0, 0x8);
    (((struct qdp_ril_param *)(frame - 0x430))->value) = (void *)0x0;
    memset(frame - 0x418, 0, 0x8);
    (((struct qdp_ril_param *)(frame - 0x420))->value) = (void *)0x0;
    memset(frame - 0x448, 0, 0x8);
    (*(uint16_t **)((frame - 0x450))) = (uint16_t *)0x0;
    memset(frame - 0x438, 0, 0x8);
    (((struct qdp_ril_param *)(frame - 0x440))->value) = (void *)0x0;
    iVar6 = qdp_profile_read_ril_params((char **)(param_1), param_4, (long)((frame - 0x310)), ((char *)(frame - 0x454)), param_7, (long)((frame - 0x3b0)), ((char *)(frame - 0x458)), ((char *)(frame - 0x45c)));
    cVar3 = ((char *)(frame - 0x45c))[0];
    if (iVar6 != 1)
    {
      QDP_LOG_FMT(frame - 0x270, DAT_001026d4, "qdp_profile_read_ril_params failed");
      puVar7 = DAT_00126b20;
      goto LAB_0011f7a8;
    }
    if (((char *)(frame - 0x45c))[0] == '\x01')
    {
      (*(uint16_t **)((frame - 0x450))) = malloc(2);
      if ((*(uint16_t **)((frame - 0x450))) != (uint16_t *)0x0)
      {
        *(*(uint16_t **)((frame - 0x450))) = 0;
        QDP_LOG(frame - 0x270, DAT_00126b38, "QDP: malloc\'ed [%p]", (*(uint16_t **)((frame - 0x450))));
        if ((*(uint16_t **)((frame - 0x450))) != (uint16_t *)0x0)
        {
          *(uint8_t *)(*(uint16_t **)((frame - 0x450))) = 3;
          *(uint8_t *)((long)(*(uint16_t **)((frame - 0x450))) + 1) = 0;
          *(uint64_t *)(frame - 0x448) = CONCAT44((*(uint32_t *)((char *)(frame - 0x448) + 4)), 2);
        }
      }
      if ((int)*(uint64_t *)(frame - 0x2f8) < 1)
      {
        if (0 < (int)*(uint64_t *)(frame - 0x398))
        {
          iVar6 = (int)*(uint64_t *)(frame - 0x398) + 1;
          if (SCARRY4((int)*(uint64_t *)(frame - 0x398), 1))
            goto LAB_00120ee8;
          (((struct qdp_ril_param *)(frame - 0x440))->value) = malloc((long)iVar6);
          if ((((struct qdp_ril_param *)(frame - 0x440))->value) != (void *)0x0)
          {
            memset((*(void **)((frame - 0x440))), 0, (long)iVar6);
            QDP_LOG(frame - 0x270, DAT_00126b68, "QDP: malloc\'ed [%p]", (*(void **)((frame - 0x440))));
            if ((((struct qdp_ril_param *)(frame - 0x440))->value) != (void *)0x0)
            {
              if (SCARRY4((int)*(uint64_t *)(frame - 0x398), 1))
                goto LAB_00120ee8;
              strlcpy((*(void **)((frame - 0x440))), (const char *)(*(uint64_t *)(frame - 0x3a0)), (long)((int)*(uint64_t *)(frame - 0x398) + 1));
              uVar8 = (int)*(uint64_t *)(frame - 0x398);
              goto LAB_0011fc54;
            }
          }
        }
      }
      else
      {
        iVar6 = (int)*(uint64_t *)(frame - 0x2f8) + 1;
        if (SCARRY4((int)*(uint64_t *)(frame - 0x2f8), 1))
          goto LAB_00120ee8;
        (((struct qdp_ril_param *)(frame - 0x440))->value) = malloc((long)iVar6);
        if ((((struct qdp_ril_param *)(frame - 0x440))->value) != (void *)0x0)
        {
          memset((*(void **)((frame - 0x440))), 0, (long)iVar6);
          QDP_LOG(frame - 0x270, DAT_00126b50, "QDP: malloc\'ed [%p]", (*(void **)((frame - 0x440))));
          if ((((struct qdp_ril_param *)(frame - 0x440))->value) != (void *)0x0)
          {
            if (SCARRY4((int)*(uint64_t *)(frame - 0x2f8), 1))
              goto LAB_00120ee8;
            strlcpy((*(void **)((frame - 0x440))), (const char *)(*(uint64_t *)(frame - 0x300)), (long)((int)*(uint64_t *)(frame - 0x2f8) + 1));
            uVar8 = (int)*(uint64_t *)(frame - 0x2f8);
          LAB_0011fc54:
            *(uint64_t *)(frame - 0x438) = CONCAT44((*(uint32_t *)((char *)(frame - 0x438) + 4)), uVar8);
          }
        }
      }
      if (((int)*(uint64_t *)(frame - 0x2e8) < 0) || ((((struct qdp_ril_param *)(frame - 0x2f0))->value) == 0))
      {
        if ((-1 < (int)*(uint64_t *)(frame - 0x388)) && ((((struct qdp_ril_param *)(frame - 0x390))->value) != 0))
        {
          iVar6 = (int)*(uint64_t *)(frame - 0x388) + 1;
          if (SCARRY4((int)*(uint64_t *)(frame - 0x388), 1))
            goto LAB_00120ee8;
          (((struct qdp_ril_param *)(frame - 0x430))->value) = malloc((long)iVar6);
          if ((((struct qdp_ril_param *)(frame - 0x430))->value) != (void *)0x0)
          {
            memset((*(void **)((frame - 0x430))), 0, (long)iVar6);
            QDP_LOG(frame - 0x270, DAT_00126b98, "QDP: malloc\'ed [%p]", (*(void **)((frame - 0x430))));
            if ((((struct qdp_ril_param *)(frame - 0x430))->value) != (void *)0x0)
            {
              if (SCARRY4((int)*(uint64_t *)(frame - 0x388), 1))
                goto LAB_00120ee8;
              strlcpy((*(void **)((frame - 0x430))), (const char *)((*(long *)((frame - 0x390)))), (long)((int)*(uint64_t *)(frame - 0x388) + 1));
              uVar8 = (int)*(uint64_t *)(frame - 0x388);
              goto LAB_0011fdf4;
            }
          }
        }
      }
      else
      {
        iVar6 = (int)*(uint64_t *)(frame - 0x2e8) + 1;
        if (SCARRY4((int)*(uint64_t *)(frame - 0x2e8), 1))
          goto LAB_00120ee8;
        (((struct qdp_ril_param *)(frame - 0x430))->value) = malloc((long)iVar6);
        if ((((struct qdp_ril_param *)(frame - 0x430))->value) != (void *)0x0)
        {
          memset((*(void **)((frame - 0x430))), 0, (long)iVar6);
          QDP_LOG(frame - 0x270, DAT_00126b80, "QDP: malloc\'ed [%p]", (*(void **)((frame - 0x430))));
          if ((((struct qdp_ril_param *)(frame - 0x430))->value) != (void *)0x0)
          {
            if (SCARRY4((int)*(uint64_t *)(frame - 0x2e8), 1))
              goto LAB_00120ee8;
            strlcpy((*(void **)((frame - 0x430))), (const char *)((*(long *)((frame - 0x2f0)))), (long)((int)*(uint64_t *)(frame - 0x2e8) + 1));
            uVar8 = (int)*(uint64_t *)(frame - 0x2e8);
          LAB_0011fdf4:
            *(uint64_t *)(frame - 0x428) = CONCAT44((*(uint32_t *)((char *)(frame - 0x428) + 4)), uVar8);
          }
        }
      }
      if ((int)*(uint64_t *)(frame - 0x2d8) < 1)
      {
        if (0 < (int)*(uint64_t *)(frame - 0x378))
        {
          iVar6 = (int)*(uint64_t *)(frame - 0x378) + 1;
          if (SCARRY4((int)*(uint64_t *)(frame - 0x378), 1))
            goto LAB_00120ee8;
          (((struct qdp_ril_param *)(frame - 0x420))->value) = malloc((long)iVar6);
          if ((((struct qdp_ril_param *)(frame - 0x420))->value) != (void *)0x0)
          {
            memset((*(void **)((frame - 0x420))), 0, (long)iVar6);
            QDP_LOG(frame - 0x270, DAT_00126bc8, "QDP: malloc\'ed [%p]", (*(void **)((frame - 0x420))));
            if ((((struct qdp_ril_param *)(frame - 0x420))->value) != (void *)0x0)
            {
              iVar6 = (int)*(uint64_t *)(frame - 0x378);
              uVar2 = *(uint64_t *)(frame - 0x380);
              goto joined_r0x0011ff6c;
            }
          }
        }
      }
      else
      {
        iVar6 = (int)*(uint64_t *)(frame - 0x2d8) + 1;
        if (SCARRY4((int)*(uint64_t *)(frame - 0x2d8), 1))
          goto LAB_00120ee8;
        (((struct qdp_ril_param *)(frame - 0x420))->value) = malloc((long)iVar6);
        if ((((struct qdp_ril_param *)(frame - 0x420))->value) != (void *)0x0)
        {
          memset((*(void **)((frame - 0x420))), 0, (long)iVar6);
          QDP_LOG(frame - 0x270, DAT_00126bb0, "QDP: malloc\'ed [%p]", (*(void **)((frame - 0x420))));
          if ((((struct qdp_ril_param *)(frame - 0x420))->value) != (void *)0x0)
          {
            iVar6 = (int)*(uint64_t *)(frame - 0x2d8);
            uVar2 = *(uint64_t *)(frame - 0x2e0);
          joined_r0x0011ff6c:
            if (SCARRY4(iVar6, 1))
              goto LAB_00120ee8;
            strlcpy((*(void **)((frame - 0x420))), (const char *)(uVar2), (long)(iVar6 + 1));
            *(uint64_t *)(frame - 0x418) = CONCAT44((*(uint32_t *)((char *)(frame - 0x418) + 4)), (int)*(uint64_t *)(frame - 0x2d8));
          }
        }
      }
      if ((int)*(uint64_t *)(frame - 0x2c8) < 1)
      {
        if (0 < (int)*(uint64_t *)(frame - 0x368))
        {
          iVar6 = (int)*(uint64_t *)(frame - 0x368) + 1;
          if (SCARRY4((int)*(uint64_t *)(frame - 0x368), 1))
            goto LAB_00120ee8;
          (((struct qdp_ril_param *)(frame - 0x410))->value) = malloc((long)iVar6);
          if ((((struct qdp_ril_param *)(frame - 0x410))->value) != (void *)0x0)
          {
            memset((*(void **)((frame - 0x410))), 0, (long)iVar6);
            QDP_LOG(frame - 0x270, DAT_00126bf8, "QDP: malloc\'ed [%p]", (*(void **)((frame - 0x410))));
            if ((((struct qdp_ril_param *)(frame - 0x410))->value) != (void *)0x0)
            {
              if (SCARRY4((int)*(uint64_t *)(frame - 0x368), 1))
                goto LAB_00120ee8;
              strlcpy((*(void **)((frame - 0x410))), (const char *)(*(uint64_t *)(frame - 0x370)), (long)((int)*(uint64_t *)(frame - 0x368) + 1));
              uVar8 = (int)*(uint64_t *)(frame - 0x368);
              goto LAB_00120118;
            }
          }
        }
      }
      else
      {
        iVar6 = (int)*(uint64_t *)(frame - 0x2c8) + 1;
        if (SCARRY4((int)*(uint64_t *)(frame - 0x2c8), 1))
          goto LAB_00120ee8;
        (((struct qdp_ril_param *)(frame - 0x410))->value) = malloc((long)iVar6);
        if ((((struct qdp_ril_param *)(frame - 0x410))->value) != (void *)0x0)
        {
          memset((*(void **)((frame - 0x410))), 0, (long)iVar6);
          QDP_LOG(frame - 0x270, DAT_00126be0, "QDP: malloc\'ed [%p]", (*(void **)((frame - 0x410))));
          if ((((struct qdp_ril_param *)(frame - 0x410))->value) != (void *)0x0)
          {
            if (SCARRY4((int)*(uint64_t *)(frame - 0x2c8), 1))
              goto LAB_00120ee8;
            strlcpy((*(void **)((frame - 0x410))), (const char *)(*(uint64_t *)(frame - 0x2d0)), (long)((int)*(uint64_t *)(frame - 0x2c8) + 1));
            uVar8 = (int)*(uint64_t *)(frame - 0x2c8);
          LAB_00120118:
            *(uint64_t *)(frame - 0x408) = CONCAT44((*(uint32_t *)((char *)(frame - 0x408) + 4)), uVar8);
          }
        }
      }
      if ((int)*(uint64_t *)(frame - 0x2b8) < 1)
      {
        if (0 < (int)*(uint64_t *)(frame - 0x358))
        {
          iVar6 = (int)*(uint64_t *)(frame - 0x358) + 1;
          if (SCARRY4((int)*(uint64_t *)(frame - 0x358), 1))
            goto LAB_00120ee8;
          (((struct qdp_ril_param *)(frame - 0x400))->value) = malloc((long)iVar6);
          if ((((struct qdp_ril_param *)(frame - 0x400))->value) != (void *)0x0)
          {
            memset((*(void **)((frame - 0x400))), 0, (long)iVar6);
            QDP_LOG(frame - 0x270, DAT_00126c28, "QDP: malloc\'ed [%p]", (*(void **)((frame - 0x400))));
            if ((((struct qdp_ril_param *)(frame - 0x400))->value) != (void *)0x0)
            {
              iVar6 = (int)*(uint64_t *)(frame - 0x358);
              uVar2 = *(uint64_t *)(frame - 0x360);
              goto joined_r0x00120290;
            }
          }
        }
      }
      else
      {
        iVar6 = (int)*(uint64_t *)(frame - 0x2b8) + 1;
        if (SCARRY4((int)*(uint64_t *)(frame - 0x2b8), 1))
          goto LAB_00120ee8;
        (((struct qdp_ril_param *)(frame - 0x400))->value) = malloc((long)iVar6);
        if ((((struct qdp_ril_param *)(frame - 0x400))->value) != (void *)0x0)
        {
          memset((*(void **)((frame - 0x400))), 0, (long)iVar6);
          QDP_LOG(frame - 0x270, DAT_00126c10, "QDP: malloc\'ed [%p]", (*(void **)((frame - 0x400))));
          if ((((struct qdp_ril_param *)(frame - 0x400))->value) != (void *)0x0)
          {
            iVar6 = (int)*(uint64_t *)(frame - 0x2b8);
            uVar2 = *(uint64_t *)(frame - 0x2c0);
          joined_r0x00120290:
            if (SCARRY4(iVar6, 1))
              goto LAB_00120ee8;
            strlcpy((*(void **)((frame - 0x400))), (const char *)(uVar2), (long)(iVar6 + 1));
            *(uint64_t *)(frame - 0x3f8) = CONCAT44((*(uint32_t *)((char *)(frame - 0x3f8) + 4)), (int)*(uint64_t *)(frame - 0x2b8));
          }
        }
      }
      if ((int)*(uint64_t *)(frame - 0x2a8) < 1)
      {
        if (0 < (int)*(uint64_t *)(frame - 0x348))
        {
          iVar6 = (int)*(uint64_t *)(frame - 0x348) + 1;
          if (SCARRY4((int)*(uint64_t *)(frame - 0x348), 1))
            goto LAB_00120ee8;
          (((struct qdp_ril_param *)(frame - 0x3f0))->value) = malloc((long)iVar6);
          if ((((struct qdp_ril_param *)(frame - 0x3f0))->value) != (void *)0x0)
          {
            memset((*(void **)((frame - 0x3f0))), 0, (long)iVar6);
            QDP_LOG(frame - 0x270, DAT_00126c58, "QDP: malloc\'ed [%p]", (*(void **)((frame - 0x3f0))));
            if ((((struct qdp_ril_param *)(frame - 0x3f0))->value) != (void *)0x0)
            {
              iVar6 = (int)*(uint64_t *)(frame - 0x348);
              uVar2 = *(uint64_t *)(frame - 0x350);
              goto joined_r0x0012041c;
            }
          }
        }
      }
      else
      {
        iVar6 = (int)*(uint64_t *)(frame - 0x2a8) + 1;
        if (SCARRY4((int)*(uint64_t *)(frame - 0x2a8), 1))
          goto LAB_00120ee8;
        (((struct qdp_ril_param *)(frame - 0x3f0))->value) = malloc((long)iVar6);
        if ((((struct qdp_ril_param *)(frame - 0x3f0))->value) != (void *)0x0)
        {
          memset((*(void **)((frame - 0x3f0))), 0, (long)iVar6);
          QDP_LOG(frame - 0x270, DAT_00126c40, "QDP: malloc\'ed [%p]", (*(void **)((frame - 0x3f0))));
          if ((((struct qdp_ril_param *)(frame - 0x3f0))->value) != (void *)0x0)
          {
            iVar6 = (int)*(uint64_t *)(frame - 0x2a8);
            uVar2 = *(uint64_t *)(frame - 0x2b0);
          joined_r0x0012041c:
            if (SCARRY4(iVar6, 1))
              goto LAB_00120ee8;
            strlcpy((*(void **)((frame - 0x3f0))), (const char *)(uVar2), (long)(iVar6 + 1));
            *(uint64_t *)(frame - 0x3e8) = CONCAT44((*(uint32_t *)((char *)(frame - 0x3e8) + 4)), (int)*(uint64_t *)(frame - 0x2a8));
          }
        }
      }
      iVar6 = qdp_epc_alt_multi_param_search(param_2, param_3, (frame - 0x460), param_9, param_6, (uint32_t *)((long)(frame - 0x470) + 4));
      if (iVar6 != 1)
      {
        QDP_LOG(frame - 0x270, DAT_00126c70, "qdp_epc_multi_param_search returned err [%d]", iVar6);
      }
    }
    cVar5 = ((char *)(frame - 0x454))[0];
    if ((((char *)(frame - 0x454))[0] == '\x01') && ((*(int *)((frame - 0x460))) == -1))
    {
      iVar6 = qdp_3gpp_alt_multi_param_search(param_2, param_3, param_4, param_5, param_6, (uint32_t *)((long)(frame - 0x468) + 4));
      if (iVar6 == 1)
      {
        QDP_LOG(frame - 0x270, DAT_00126ca0, "qdp_3gpp_alt_multi_param_search returned profile list %d", *param_5);
        *param_10 = 1;
      }
      else
      {
        QDP_LOG(frame - 0x270, DAT_00126c88, "qdp_3gpp2_multi_param_search returned err [%d]", iVar6);
      }
    }
    cVar4 = ((char *)(frame - 0x458))[0];
    if ((((char *)(frame - 0x458))[0] == '\x01') && ((*(int *)((frame - 0x460))) == -1))
    {
      iVar6 = qdp_3gpp2_alt_multi_param_search(param_2, param_3, param_7, param_8, param_9, (frame - 0x468));
      if (iVar6 == 1)
      {
        QDP_LOG_FMT(frame - 0x270, "qdp_3gpp2_alt_multi_param_search returned profile list %d", *param_8);
        puVar7 = DAT_00126cd0;
      }
      else
      {
        QDP_LOG_FMT(frame - 0x270, "qdp_3gpp2_multi_param_search returned err [%d]", iVar6);
        puVar7 = DAT_00126cb8;
      }
      msg_sprintf(puVar7, (frame - 0x270));
    }
    if ((*(int *)((frame - 0x460))) != -1)
    {
      QDP_LOG(frame - 0x270, DAT_00126ce8, "Looked up EPC profile %d");
      qdp_epc_profile_update((long)((frame - 0x450)), (*(int *)((frame - 0x460))), (frame - 0x470), 2);
      goto LAB_00120798;
    }
    if (cVar3 == '\x01')
    {
      if ((*(uint32_t *)((char *)(frame - 0x470) + 4)) == 0)
      {
        if (*param_4 == -1)
        {
          if (*param_7 != -1)
            goto LAB_001208e0;
          iVar6 = qdp_epc_profile_create((struct qdp_ril_param *)(frame - 0x450), (frame - 0x460), param_9, param_6, 1, 2);
          if (iVar6 != 1)
          {
            QDP_LOG_FMT(frame - 0x270, "qdp_epc_profile_create failed [%d]", iVar6);
            puVar7 = DAT_00126d00;
            goto LAB_0011f7a8;
          }
          QDP_LOG(frame - 0x270, DAT_00126d18, "Created EPC profile %d", (*(int *)((frame - 0x460))));
          *param_10 = 3;
          if ((cVar5 == '\x01') && ((*(int *)((frame - 0x460))) != -1))
          {
            *param_4 = (*(int *)((frame - 0x460)));
            *param_5 = 1;
          }
          if ((cVar4 == '\x01') && ((*(int *)((frame - 0x460))) != -1))
          {
            *param_4 = (*(int *)((frame - 0x460)));
            *param_8 = 1;
          }
          else if ((*(int *)((frame - 0x460))) == -1)
            goto LAB_001208e0;
        LAB_00120798:
          *param_10 = 3;
          bVar14 = true;
        }
        else
        {
          QDP_LOG(frame - 0x270, DAT_00126d30, "Looked up 3GPP profile %d");
          qdp_3gpp_profile_update((long)((frame - 0x310)), *param_4, (frame - 0x470), 2);
          bVar14 = true;
          *param_10 = 1;
        }
      }
      else
      {
        QDP_LOG(frame - 0x270, DAT_00126d48, "Profile lookup error[%d], no profile created");
        uVar10 = 3;
        uVar8 = (*(uint32_t *)((char *)(frame - 0x470) + 4));
      LAB_00120834:
        bVar14 = false;
        *(uint32_t *)param_11 = uVar8;
        *(uint32_t *)((long)param_11 + 4) = uVar10;
      }
    }
    else
    {
    LAB_001208e0:
      if ((cVar5 == '\x01') && (*param_4 == -1))
      {
        QDP_LOG(frame - 0x270, DAT_00126d60, "qdp_3gpp_multi_param_search unsuccessful, found [%d] profile_id_3gpp", 0xffffffff);
        if ((*(uint32_t *)((char *)(frame - 0x468) + 4)) != 0)
        {
          QDP_LOG(frame - 0x270, DAT_00126da8, "Profile lookup error[%d], no profile created");
          uVar10 = 1;
          uVar8 = (*(uint32_t *)((char *)(frame - 0x468) + 4));
          goto LAB_00120834;
        }
        if ((int)param_3 < 1)
        {
          iVar6 = 0;
        }
        else
        {
          iVar9 = 0;
          uVar11 = param_3;
          do
          {
            iVar6 = iVar9 + 1;
            if (SCARRY4(iVar9, 1))
              goto LAB_00120ee8;
            iVar9 = iVar9 + 1;
            bVar14 = 9 < uVar11;
            uVar11 = uVar11 / 10;
          } while (bVar14);
        }
        if (SCARRY4(iVar6, 1))
        {
        LAB_00120ee8:
          /* WARNING: Subroutine does not return */
          abort();
        }
        *(uint64_t *)(frame - 0x278) = CONCAT44((*(uint32_t *)((char *)(frame - 0x278) + 4)), iVar6 + 1);
        *(uint64_t *)(frame - 0x280) = int_to_char_arr(param_3);
        *param_6 = 0xffffffff;
        iVar6 = qdp_3gpp_profile_create((struct qdp_ril_param *)(frame - 0x310), param_4, param_6, 1, 2);
        if (iVar6 == 1)
        {
          QDP_LOG(frame - 0x270, DAT_00126d90, "Created 3GPP profile %d", *param_4);
          *param_10 = 1;
          *param_5 = 1;
        }
        else
        {
          QDP_LOG(frame - 0x270, DAT_00126d78, "qdp_3gpp_profile_create failed [%d]", iVar6);
        }
      }
      bVar14 = true;
      if ((cVar4 == '\x01') && ((*(int *)((frame - 0x460))) == -1))
      {
        if (*param_7 == -1)
        {
          QDP_LOG(frame - 0x270, DAT_00126dc0, "qdp_3gpp2_multi_param_search unsuccessful, found [%d] profile_id_3gpp2", 0xffffffff);
          if ((int)*(uint64_t *)(frame - 0x468) != 0)
          {
            QDP_LOG(frame - 0x270, DAT_00126e08, "Profile lookup error[%d], no profile created");
            uVar10 = 2;
            uVar8 = (int)*(uint64_t *)(frame - 0x468);
            goto LAB_00120834;
          }
          *param_9 = 0xffffffff;
          bVar14 = true;
          iVar6 = qdp_3gpp2_profile_create((struct qdp_ril_param *)(frame - 0x3b0), param_7, param_9, 1, 2);
          if (iVar6 != 1)
          {
            QDP_LOG_FMT(frame - 0x270, "qdp_3gpp2_profile_create failed [%d]", iVar6);
            puVar7 = DAT_00126dd8;
            goto LAB_0011f7a8;
          }
          QDP_LOG(frame - 0x270, DAT_00126df0, "Created 3GPP2 profile %d", *param_7);
          *param_8 = 1;
        }
        else
        {
          bVar14 = true;
        }
      }
    }
  }
  if (*param_5 != 0)
  {
    uVar12 = 0;
    do
    {
      QDP_LOG(frame - 0x270, DAT_00126e20, "%d @ profile_id_3gpp_list[%d]", uVar12 & 0xffffffff, param_4[uVar12]);
      uVar12 = uVar12 + 1;
    } while (uVar12 < *param_5);
  }
  lVar13 = 0;
  do
  {
    if ((0 < *(int *)((long)(frame - 0x308) + lVar13)) && (*(long *)((long)(frame - 0x310) + lVar13) != 0))
    {
      QDP_LOG(frame - 0x270, DAT_00127ae0, "QDP: freeing [%p]");
      free(*(void **)((long)(frame - 0x310) + lVar13));
      *(void **)((long)(frame - 0x310) + lVar13) = 0;
      *(uint64_t *)((long)(frame - 0x310) + lVar13) = 0;
    }
    lVar13 = lVar13 + 0x10;
  } while (lVar13 != 0xa0);
  lVar13 = 0;
  do
  {
    if ((0 < *(int *)((long)(frame - 0x3a8) + lVar13)) && (*(long *)((long)(frame - 0x3b0) + lVar13) != 0))
    {
      QDP_LOG(frame - 0x270, DAT_00127ae0, "QDP: freeing [%p]");
      free(*(void **)((long)(frame - 0x3b0) + lVar13));
      *(void **)((long)(frame - 0x3b0) + lVar13) = 0;
      *(uint64_t *)((long)(frame - 0x3b0) + lVar13) = 0;
    }
    lVar13 = lVar13 + 0x10;
  } while (lVar13 != 0xa0);
  lVar13 = 0;
  do
  {
    if ((0 < *(int *)((long)(frame - 0x448) + lVar13)) && (*(long *)((long)(frame - 0x450) + lVar13) != 0))
    {
      QDP_LOG(frame - 0x270, DAT_00127ae0, "QDP: freeing [%p]");
      free(*(void **)((long)(frame - 0x450) + lVar13));
      *(void **)((long)(frame - 0x450) + lVar13) = 0;
      *(uint64_t *)((long)(frame - 0x450) + lVar13) = 0;
    }
    lVar13 = lVar13 + 0x10;
  } while (lVar13 != 0xa0);
  if (bVar14)
  {
    QDP_LOG(frame - 0x270, DAT_00126e50, DAT_001026d4, "qdp_profile_look_up_by_param EXIT success");
    uVar8 = 1;
  }
  else
  {
    QDP_LOG(frame - 0x270, DAT_00126e38, DAT_001026d4, "qdp_profile_look_up_by_param EXIT failed");
    uVar8 = 0;
  }
LAB_0011fb58:
  return uVar8;
}

long qdp_init(uint64_t param_1)

{
  return qdp_init3(param_1, 0, 0);
}

long qdp_init2(uint64_t param_1, uint64_t param_2)

{
  return qdp_init3(param_1, param_2, 0);
}

long qdp_init3(uint64_t param_1, uint8_t param_2, uint8_t param_3)

{
  long lVar1;
  bool bVar3;
  uint8_t *puVar4;
  int iVar5;
  uint8_t *puVar6;
  char *pcVar7;
  uint8_t uVar8;
  long lVar9;
  uint32_t uVar10;
  uint8_t *puVar11;
  ulong uVar12;
  byte *pbVar13;
  uint8_t *puVar14;
  uint8_t frame_store[28928] __attribute__((aligned(16)));
  uint8_t *const frame = frame_store + 28928;

  memset(frame_store, 0, sizeof frame_store);
  memset(frame - 0x47b0, 0, 0x5c);
  QDP_LOG(frame - 0x3910, DAT_00126e68, DAT_001026d4, "qdp_init ENTRY");
  puVar14 = PTR_qdp_inited_001295b8;
  if (*PTR_qdp_inited_001295b8 == '\x01')
  {
    QDP_LOG(frame - 0x3910, DAT_00126e80, DAT_001026d4, "qdp already inited");
    uVar10 = 1;
    goto LAB_0012233c;
  }
  *PTR_isAPAssistMode_001295e0 = param_2;
  puVar4 = PTR_global_qmi_wds_hndl_001295b0;
  iVar5 = qdp_qmi_wds_client_init(PTR_global_qmi_wds_hndl_001295b0);
  if (iVar5 != 1)
  {
    QDP_LOG(frame - 0x3910, DAT_00126e98, "%s(): WDS client init failed", "qdp_init3");
    QDP_LOG(frame - 0x3910, DAT_00126ef8, DAT_001026d4, "qdp_init EXIT failed");
    uVar10 = 0;
    goto LAB_0012233c;
  }
  memset(frame - 0x4550, 0, 0x5c);
  property_get("persist.vendor.data.dont_use_npflag", (frame - 0x4550), DAT_0010598c);
  iVar5 = strncasecmp("true", (char *)(frame - 0x4550), 5);
  puVar6 = PTR_qdp_modem_supports_nonpersist_flag_001295e8;
  *PTR_qdp_modem_supports_nonpersist_flag_001295e8 = iVar5 != 0;
  pcVar7 = "FALSE";
  if (iVar5 != 0)
  {
    pcVar7 = "TRUE";
  }
  QDP_LOG(frame - 0x3910, DAT_00128e60, "%s(): Modem non-persistent flag supported [%s]", "qdp_update_modem_nonpersist_flag_support", pcVar7);
  if (*puVar6 == '\0')
  {
    memset(frame - 0x3910, 0, 0x37dc);
    memset(frame - 0x130, 0, 0xb8);
    *(uint64_t *)(frame - 0x130) = CONCAT71((*(uint56_t *)((char *)(frame - 0x130) + 1)), 1);
    *(uint64_t *)(frame - 0x130) = *(uint64_t *)(frame - 0x130) & 0xffffffff;
    iVar5 = qdp_qmi_wds_get_profile_list(*(uint64_t *)puVar4, (long)((frame - 0x130)), (frame - 0x3910));
    if (iVar5 == 1)
    {
      if ((int)(*(ulong *)((frame - 0x3908))) != 0)
      {
        uVar12 = 0;
        bVar3 = true;
        pbVar13 = ((byte *)(frame - 0x3900));
        do
        {
          _local_47b8 = 0;
          memset(frame - 0x4550, 0, 0xc40);
          _local_47b8 = CONCAT14(*pbVar13, (*(uint32_t *)((frame - 0x47b8))));
          iVar5 = qdp_qmi_wds_query_profile(*(uint64_t *)puVar4, (long)(&stk_ffffffffffffb848), (frame - 0x4550));
          if (iVar5 != 1)
          {
            QDP_LOG(frame - 0x4750, DAT_00128e90, DAT_001026d4, "query_profile failed");
            puVar14 = PTR_qdp_inited_001295b8;
            goto LAB_00121770;
          }
          if ((char)*(uint64_t *)(frame - 0x4548) != '\0')
          {
            iVar5 = strncasecmp("qdp_profile", (char *)((long)(frame - 0x4548) + 1), 0xb);
            if (iVar5 == 0)
            {
              memset(frame - 0x47c0, 0, 0x8);
              QDP_LOG(frame - 0x4750, DAT_00128ea8, "3gpp profile [%d] has name [%s]", (*(byte *)((frame - 0x47b4))), (char *)((long)(frame - 0x4548) + 1));
              (*(long *)((frame - 0x47c0))) = (ulong)*pbVar13 << 0x20;
              iVar5 = qdp_qmi_wds_delete_profile(*(uint64_t *)puVar4, (long)((frame - 0x47c0)));
              if (iVar5 != 1)
              {
                QDP_LOG(frame - 0x4750, DAT_00128ec0, "**profile leak**: couldn\'t delete temp profile [%d]", *pbVar13);
                bVar3 = false;
              }
            }
            else
            {
              QDP_LOG(frame - 0x4750, DAT_00128ed8, "3gpp profile [%d] doesn\'t have name [%s]", *pbVar13, "qdp_profile");
            }
          }
          uVar12 = uVar12 + 1;
          pbVar13 = pbVar13 + 0x38;
        } while (uVar12 < ((*(ulong *)((frame - 0x3908))) & 0xffffffff));
        puVar14 = PTR_qdp_inited_001295b8;
        if (!bVar3)
          goto LAB_00121770;
      }
      QDP_LOG_FMT(frame - 0x4550, DAT_001026d4, "qdp_init_profile_cleanup EXIT success");
      puVar6 = DAT_00128f08;
    }
    else
    {
      QDP_LOG(frame - 0x4550, DAT_00128e78, "couldn\'t get 3gpp profile list that matches [%s] name", "qdp_profile");
    LAB_00121770:
      QDP_LOG_FMT(frame - 0x4550, DAT_001026d4, "qdp_init_profile_cleanup EXIT failed");
      puVar6 = DAT_00128ef0;
    }
    msg_sprintf(puVar6, (frame - 0x4550));
  }
  memset(frame - 0x4750, 0, 0xb8);
  memset(frame - 0x3910, 0, 0x37dc);
  memset(frame - 0x130, 0, 0x5c);
  property_get("persist.vendor.data.dont_use_epc", (frame - 0x130), DAT_00103bd0);
  iVar5 = strncasecmp("true", (char *)(frame - 0x130), 5);
  if (iVar5 == 0)
  {
    QDP_LOG_FMT(frame - 0x4550, DAT_001026d4, "persist.vendor.data.dont_use_epc = true");
    puVar6 = DAT_00128f20;
  LAB_00121a0c:
    msg_sprintf(puVar6, (frame - 0x4550));
    uVar8 = 0;
    pcVar7 = "FALSE";
  }
  else
  {
    *(uint64_t *)(frame - 0x4750) = CONCAT71((*(uint56_t *)((char *)(frame - 0x4750) + 1)), 1);
    *(uint64_t *)(frame - 0x4750) = CONCAT44(2, (uint32_t)*(uint64_t *)(frame - 0x4750));
    iVar5 = qdp_qmi_wds_get_profile_list(*(uint64_t *)puVar4, (long)((frame - 0x4750)), (frame - 0x3910));
    if (iVar5 != 1)
    {
      QDP_LOG_FMT(frame - 0x4550, "%s(): failed to get EPC profile list, assuming no Modem EPC support", "qdp_update_modem_epc_profile_support");
      puVar6 = DAT_00128f38;
      goto LAB_00121a0c;
    }
    QDP_LOG(frame - 0x4550, DAT_00128f50, "%s(): successfully queried EPC profile list, assuming Modem EPC support", "qdp_update_modem_epc_profile_support");
    pcVar7 = "TRUE";
    uVar8 = 1;
  }
  puVar6 = PTR_qdp_modem_supports_epc_profile_001295c0;
  *PTR_qdp_modem_supports_epc_profile_001295c0 = uVar8;
  QDP_LOG(frame - 0x4550, DAT_00128f68, "%s(): Modem EPC profile supported [%s]", "qdp_update_modem_epc_profile_support", pcVar7);
  QDP_LOG(frame - 0x3910, DAT_00126eb0, "acquired global wds hndl [%p]", *(uint64_t *)puVar4);
  qdp_platform_init();
  memset(frame - 0x120, 0, 0xa8);
  *puVar14 = 1;
  memset(frame - 0x4550, 0, 0x200);
  memset(frame - 0x3910, 0, 0x37dc);
  memset(frame - 0x130, 0, 0x10);
  qdp_format_log_msg((frame - 0x4550), 0x200, DAT_001026d4, "qdp_init_profile_ids ENTRY");
  msg_sprintf(DAT_00128f80, (frame - 0x4550));
  lVar9 = 0;
  do
  {
    lVar1 = lVar9 + 0x44;
    *(uint64_t *)((long)DAT_0012a9d8 + lVar9) = 0;
    *(uint64_t *)((long)DAT_0012a9d0 + lVar9) = 0;
    *(uint64_t *)(DAT_0012a9c8 + lVar9) = 0;
    *(uint64_t *)((long)DAT_0012a9c0 + lVar9) = 0;
    *(uint64_t *)(DAT_0012a9b8 + lVar9) = 0;
    *(uint64_t *)((long)DAT_0012a9b0 + lVar9) = 0;
    *(uint64_t *)((long)DAT_0012a9a8 + lVar9) = 0;
    *(uint32_t *)((long)DAT_0012a9e0 + lVar9) = 0;
    ((char *)DAT_0012a9a4)[lVar9] = 0;
    lVar9 = lVar1;
  } while (lVar1 != 0x660);
  memset(frame - 0x3910, 0, 0x37dc);
  memset(frame - 0x130, 0, 0xb8);
  *(uint64_t *)(frame - 0x130) = CONCAT71((*(uint56_t *)((char *)(frame - 0x130) + 1)), 1);
  *(uint64_t *)(frame - 0x130) = *(uint64_t *)(frame - 0x130) & 0xffffffff;
  iVar5 = qdp_qmi_wds_get_profile_list(*(uint64_t *)puVar4, (long)((frame - 0x130)), (frame - 0x3910));
  if (iVar5 == 1)
  {
    QDP_LOG(frame - 0x4550, DAT_00128fb0, "get_profile_list for profile_tech [%d] returned [%d] profile ids", (((struct qdp_list_req *)(frame - 0x130))->profile_type), (*(ulong *)((frame - 0x3908))) & 0xffffffff);
    if ((int)(*(ulong *)((frame - 0x3908))) != 0)
    {
      uVar12 = 0;
      puVar11 = DAT_0012a9a4;
      pbVar13 = ((byte *)(frame - 0x3900));
      do
      {
        _local_47b8 = 0;
        memset(frame - 0x4550, 0, 0xc40);
        _local_47b8 = CONCAT14(*pbVar13, (*(uint32_t *)((frame - 0x47b8))));
        iVar5 = qdp_qmi_wds_query_profile(*(uint64_t *)puVar4, (long)(&stk_ffffffffffffb848), (frame - 0x4550));
        if (iVar5 != 1)
        {
          QDP_LOG(frame - 0x4750, DAT_00128fc8, "query_profile failed with error [%d] qmi_err_code [%d]", *(uint64_t *)(frame - 0x4550) & 0xffffffff, (*(uint32_t *)((char *)(frame - 0x4550) + 4)));
          puVar6 = PTR_qdp_modem_supports_epc_profile_001295c0;
          puVar14 = PTR_qdp_inited_001295b8;
          goto LAB_00122050;
        }
        QDP_LOG(frame - 0x4750, DAT_00128fe0, "successfully queried 3GPP profile [%d]", (*(byte *)((frame - 0x47b4))));
        if (((char)*(uint64_t *)(frame - 0x4548) != '\0') &&
            (iVar5 = strncasecmp("qdp_profile", (char *)((long)(frame - 0x4548) + 1), 0xb), iVar5 == 0))
        {
          QDP_LOG(frame - 0x4750, DAT_00128ff8, "Found a QDP profile @ [%d]", (*(byte *)((frame - 0x47b4))));
          *(uint32_t *)(puVar11 + 0x40) = 1;
          *puVar11 = 1;
          puVar11[8] = (*(byte *)((frame - 0x47b4)));
        }
        uVar12 = uVar12 + 1;
        puVar11 = puVar11 + 0x44;
        pbVar13 = pbVar13 + 0x38;
      } while (uVar12 < ((*(ulong *)((frame - 0x3908))) & 0xffffffff));
    }
    QDP_LOG(frame - 0x4550, DAT_00129028, DAT_001026d4, "qdp_3gpp_multi_param_search EXIT success");
    puVar6 = PTR_qdp_modem_supports_epc_profile_001295c0;
    puVar14 = PTR_qdp_inited_001295b8;
  }
  else
  {
    QDP_LOG(frame - 0x4550, DAT_00128f98, "get_profile_list failed with error [%d] qmi_err_code [%d]", *(uint64_t *)(frame - 0x3910) & 0xffffffff, (*(uint32_t *)((char *)(frame - 0x3910) + 4)));
  LAB_00122050:
    QDP_LOG(frame - 0x4550, DAT_00129010, DAT_001026d4, "qdp_3gpp_multi_param_search EXIT failed");
  }
  memset(frame - 0x47b0, 0, 0x5c);
  property_get("persist.vendor.data.dont_use_epc", (frame - 0x47b0), DAT_00103bd0);
  if ((int)*(uint64_t *)(frame - 0x47b0) == 0x65757274 && (*(uint8_t *)((char *)(frame - 0x47b0) + 4)) == '\0')
  {
    QDP_LOG(frame - 0x3910, DAT_00126ec8, DAT_001026d4, "persist.vendor.data.dont_use_epc = true");
    *puVar6 = 0;
  }
  memset(frame - 0x3910, 0, 0x200);
  *PTR_qdp_allow_update_modem_profile_001295c8 = param_3;
  qdp_format_log_msg((frame - 0x3910), 0x200, "qdp_allow_update_modem_profile is set to %d", param_3);
  msg_sprintf(DAT_00126ee0, (frame - 0x3910));
  uVar10 = 1;
  memset(frame - 0x38f0, 0, 0x1e0);
  *puVar14 = 1;
  memset(frame - 0x3910, 0, 0x20);
  qdp_format_log_msg((frame - 0x3910), 0x200, DAT_001026d4, "qdp_init EXIT success");
  msg_sprintf(DAT_00126f10, (frame - 0x3910));
LAB_0012233c:
  return uVar10;
}

long qdp_set_subscription(uint32_t param_1)

{
  int iVar2;
  uint64_t uVar3 = 0;
  uint8_t *puVar4;
  uint8_t frame_store[1104] __attribute__((aligned(16)));
  uint8_t *const frame = frame_store + 1104;

  memset(frame_store, 0, sizeof frame_store);
  QDP_LOG(frame - 0x240, DAT_00126f28, DAT_001026d4, "qdp_set_subscription ENTRY");
  if (*PTR_qdp_inited_001295b8 == '\0')
  {
    QDP_LOG_FMT(frame - 0x240, DAT_001026d4, "qdp not inited");
    puVar4 = DAT_00126f40;
  }
  else
  {
    memset(frame - 0x248, 0, 0x4);
    if (*(long *)PTR_global_qmi_wds_hndl_001295b0 == 0)
    {
      QDP_LOG_FMT(frame - 0x240, "invalid qmi_wds_hndl [%p]", 0);
      puVar4 = DAT_00126f58;
    }
    else
    {
      ((struct qdp_bind_req *)(frame - 0x248))->subscription = param_1;
      iVar2 = qdp_qmi_wds_bind_subscription(*(long *)PTR_global_qmi_wds_hndl_001295b0, (long)(((uint32_t *)(frame - 0x248))));
      if (iVar2 == 1)
      {
        QDP_LOG(frame - 0x240, DAT_00126fa0, DAT_001026d4, "qdp_set_subscription EXIT success");
        uVar3 = 1;
        goto LAB_00122674;
      }
      QDP_LOG_FMT(frame - 0x240, DAT_001026d4, "wds bind failed");
      puVar4 = DAT_00126f70;
    }
    msg_sprintf(puVar4, (frame - 0x240));
    QDP_LOG_FMT(frame - 0x240, DAT_001026d4, "qdp_set_subscription EXIT failed");
    puVar4 = DAT_00126f88;
  }
  msg_sprintf(puVar4, (frame - 0x240));
  uVar3 = 0;
LAB_00122674:
  return (long)uVar3;
}

long qdp_deinit(void)

{
  int iVar2;
  uint8_t *puVar3;
  uint8_t frame_store[1104] __attribute__((aligned(16)));
  uint8_t *const frame = frame_store + 1104;

  memset(frame_store, 0, sizeof frame_store);
  QDP_LOG(frame - 0x240, DAT_00126fb8, DAT_001026d4, "qdp_deinit ENTRY");
  if (*PTR_qdp_inited_001295b8 == '\x01')
  {
    *PTR_qdp_inited_001295b8 = 0;
    qdp_cleanup_profile_ids();
    puVar3 = PTR_global_qmi_wds_hndl_001295b0;
    if (*(long *)PTR_global_qmi_wds_hndl_001295b0 != 0)
    {
      QDP_LOG(frame - 0x240, DAT_00126fe8, "releasing global wds hndl [%p]");
      iVar2 = qdp_qmi_wds_release_client(*(uint64_t *)puVar3);
      if (iVar2 != 1)
      {
        QDP_LOG_FMT(frame - 0x240, DAT_001026d4, " wds srvc release failed");
        puVar3 = DAT_00127000;
        goto LAB_0012292c;
      }
    }
    puVar3 = PTR_qdp_modem_supports_nonpersist_flag_001295e8;
    *PTR_qdp_modem_supports_epc_profile_001295c0 = 0;
    *puVar3 = 1;
    QDP_LOG_FMT(frame - 0x240, DAT_001026d4, "qdp_deinit EXIT success");
    puVar3 = DAT_00127030;
  }
  else
  {
    QDP_LOG_FMT(frame - 0x240, DAT_001026d4, "qdp not inited yet");
    puVar3 = DAT_00126fd0;
  LAB_0012292c:
    msg_sprintf(puVar3, (frame - 0x240));
    puVar3 = PTR_qdp_modem_supports_nonpersist_flag_001295e8;
    *PTR_qdp_modem_supports_epc_profile_001295c0 = 0;
    *puVar3 = 1;
    QDP_LOG_FMT(frame - 0x240, DAT_001026d4, "qdp_deinit EXIT failed");
    puVar3 = DAT_00127018;
  }
  long lRet = msg_sprintf(puVar3, (frame - 0x240));
  return lRet;
}

long qdp_compare_and_update(char *param_1, char *param_2)

{
  int iVar2;
  size_t __n;
  size_t __n_00;
  uint8_t *puVar3;
  long lVar4;
  long lRet;
  uint8_t frame_store[1136] __attribute__((aligned(16)));
  uint8_t *const frame = frame_store + 1136;

  memset(frame_store, 0, sizeof frame_store);
  QDP_LOG(frame - 0x260, DAT_00127048, DAT_001026d4, "qdp_compare_and_update:: ENTRY");
  if ((param_1 == (char *)0x0) || (param_2 == (char *)0x0))
  {
    QDP_LOG_FMT(frame - 0x260, DAT_001026d4, "Error!! MCC or MNC or both values are NULL");
    puVar3 = DAT_00127090;
  }
  else
  {
    __n = strlen(param_1);
    lVar4 = 0;
    do
    {
      iVar2 = strncmp(param_1, DAT_0012a839 + lVar4, __n);
      if (iVar2 == 0)
      {
        __n_00 = strlen(param_2);
        iVar2 = strncmp(param_2, DAT_0012a83d + lVar4, __n_00);
        if (iVar2 == 0)
        {
          *PTR_carrier_config_flag_001295d0 = 1;
          QDP_LOG_FMT(frame - 0x260, DAT_001026d4, "SIM matches MCC,MNC list.");
          puVar3 = DAT_00127060;
          goto LAB_00122c40;
        }
      }
      lVar4 = lVar4 + 8;
    } while (lVar4 != 0xb0);
    QDP_LOG_FMT(frame - 0x260, DAT_001026d4, "SIM doesn\'t match any in mcc,mnc list");
    puVar3 = DAT_00127078;
  }
LAB_00122c40:
  lRet = msg_sprintf(puVar3, (frame - 0x260));
  return lRet;
}

long qdp_profiles_for_apntype(long param_1)
{
  struct qdp_list_req lreq;
  struct qdp_list_res lres;
  struct qdp_query_req qreq;
  struct qdp_query_res qres;
  char logbuf[0x200];
  int rc;
  int count;
  uint i;

  QDP_LOG(logbuf, DAT_001270a8, DAT_001026d4, "qdp_profiles_for_apntype::ENTRY");
  memset(&lres, 0, sizeof lres);
  memset(&lreq, 0, sizeof lreq);
  lreq.profile_type_valid = 1;
  rc = qdp_qmi_wds_get_profile_list(global_qmi_wds_hndl, (long)&lreq, (int *)&lres);
  if (rc == 1)
  {
    QDP_LOG(logbuf, DAT_001270d8, "get_profile_list for profile_tech [%d] returned [%d] profile ids", lreq.profile_type, lres.profile_count);
    if (lres.profile_count == 0)
    {
      count = 0;
    }
    else
    {
      i = 0;
      count = 0;
      do
      {
        memset(&qreq, 0, sizeof qreq);
        memset(&qres, 0, sizeof qres);
        qreq.profile_index = lres.profiles[i].profile_index;
        rc = qdp_qmi_wds_query_profile(global_qmi_wds_hndl, (long)&qreq, (int *)&qres);
        if (rc == 1)
        {
          if (qres.apn_type_mask_valid != '\0' && (long)qres.apn_type_mask == param_1)
          {
            QDP_LOG(logbuf, DAT_00127108, "ApnType match found for the profile id %d", qreq.profile_index);
            count = count + 1;
          }
        }
        else
        {
          QDP_LOG(logbuf, DAT_001270f0, "query_profile failed with error [%d] qmi_err_code [%d]", qres.qmi_rc, qres.qmi_err);
        }
        i = i + 1;
      } while (i < lres.profile_count);
    }
  }
  else
  {
    QDP_LOG(logbuf, DAT_001270c0, "get_profile_list failed with error [%d] qmi_err_code [%d]", lres.qmi_rc, lres.qmi_err);
    count = -1;
  }
  return (uint)count;
}

long qdp_allow_ip_update(void)

{
  return *PTR_carrier_config_flag_001295d0 != '\0' ||
         *PTR_qdp_allow_update_modem_profile_001295c8 != '\0';
}

long get_carrier_config_enabled(void)

{
  return *PTR_carrier_config_flag_001295d0;
}

long qdp_pdn_type_from_string(char *param_1)

{
  int iVar1;
  uint32_t uVar2;

  if (param_1 == (char *)0x0)
  {
    uVar2 = 0xffffffff;
  }
  else
  {
    iVar1 = strcasecmp(param_1, "IP");
    uVar2 = 0;
    if (iVar1 != 0)
    {
      iVar1 = strcasecmp(param_1, "IPV6");
      if (iVar1 == 0)
      {
        uVar2 = 1;
      }
      else
      {
        iVar1 = strcasecmp(param_1, "IPV4V6");
        uVar2 = 2;
        if (iVar1 != 0)
        {
          uVar2 = 0xffffffff;
        }
      }
    }
  }
  return uVar2;
}

long qdp_format_log_msg(char *param_1, int param_2, char *param_3, ...)
{
  int iVar2;
  va_list ap;
  va_start(ap, param_3);
  iVar2 = vsnprintf(param_1, (size_t)(long)param_2, param_3, ap);
  va_end(ap);
  return iVar2;
}

long qdp_signal_handler(int param_1)

{
  long lVar2;
  long *plVar3;
  uint8_t frame_store[1104] __attribute__((aligned(16)));
  uint8_t *const frame = frame_store + 1104;

  memset(frame_store, 0, sizeof frame_store);
  long lRet = qdp_deinit();
  if (*(int *)PTR_qdp_sig_handler_tbl_001295f0 == param_1)
  {
    plVar3 = (long *)(PTR_qdp_sig_handler_tbl_001295f0 + 8);
    lVar2 = *plVar3;
    if (lVar2 == 0)
      goto LAB_0012320c;
  }
  else
  {
  LAB_0012320c:
    if (*(int *)(PTR_qdp_sig_handler_tbl_001295f0 + 0x10) == param_1)
    {
      plVar3 = (long *)(PTR_qdp_sig_handler_tbl_001295f0 + 0x18);
      lVar2 = *plVar3;
      if (lVar2 != 0)
        goto LAB_001232e4;
    }
    if (*(int *)(PTR_qdp_sig_handler_tbl_001295f0 + 0x20) == param_1)
    {
      plVar3 = (long *)(PTR_qdp_sig_handler_tbl_001295f0 + 0x28);
      lVar2 = *plVar3;
      if (lVar2 != 0)
        goto LAB_001232e4;
    }
    if (*(int *)(PTR_qdp_sig_handler_tbl_001295f0 + 0x30) == param_1)
    {
      plVar3 = (long *)(PTR_qdp_sig_handler_tbl_001295f0 + 0x38);
      lVar2 = *plVar3;
      if (lVar2 != 0)
        goto LAB_001232e4;
    }
    if (*(int *)(PTR_qdp_sig_handler_tbl_001295f0 + 0x40) == param_1)
    {
      plVar3 = (long *)(PTR_qdp_sig_handler_tbl_001295f0 + 0x48);
      lVar2 = *plVar3;
      if (lVar2 != 0)
        goto LAB_001232e4;
    }
    if (*(int *)(PTR_qdp_sig_handler_tbl_001295f0 + 0x50) == param_1)
    {
      plVar3 = (long *)(PTR_qdp_sig_handler_tbl_001295f0 + 0x58);
      lVar2 = *plVar3;
      if (lVar2 != 0)
        goto LAB_001232e4;
    }
    if (*(int *)(PTR_qdp_sig_handler_tbl_001295f0 + 0x60) == param_1)
    {
      plVar3 = (long *)(PTR_qdp_sig_handler_tbl_001295f0 + 0x68);
      lVar2 = *plVar3;
      if (lVar2 != 0)
        goto LAB_001232e4;
    }
    if (*(int *)(PTR_qdp_sig_handler_tbl_001295f0 + 0x70) == param_1)
    {
      plVar3 = (long *)(PTR_qdp_sig_handler_tbl_001295f0 + 0x78);
      lVar2 = *plVar3;
      if (lVar2 != 0)
        goto LAB_001232e4;
    }
    if (*(int *)(PTR_qdp_sig_handler_tbl_001295f0 + 0x80) == param_1)
    {
      plVar3 = (long *)(PTR_qdp_sig_handler_tbl_001295f0 + 0x88);
      lVar2 = *plVar3;
      if (lVar2 != 0)
        goto LAB_001232e4;
    }
    if (*(int *)(PTR_qdp_sig_handler_tbl_001295f0 + 0x90) != param_1)
      goto LAB_0012335c;
    plVar3 = (long *)(PTR_qdp_sig_handler_tbl_001295f0 + 0x98);
    lVar2 = *plVar3;
    if (lVar2 == 0)
      goto LAB_0012335c;
  }
LAB_001232e4:
  QDP_LOG(frame - 0x240, DAT_001290e8, "call default handler [%p] for sig [%d]", lVar2, param_1);
  lRet = ((long (*)())(*plVar3))(param_1);
LAB_0012335c:
  return lRet;
}

long qdp_platform_init(void)

{
  uint8_t frame_store[1104] __attribute__((aligned(16)));
  uint8_t *const frame = frame_store + 1104;

  memset(frame_store, 0, sizeof frame_store);
  QDP_LOG(frame - 0x240, DAT_00129100, DAT_001026d4, "qdp_platform_init: ENTRY");
  QDP_LOG_FMT(frame - 0x240, DAT_001026d4, "qdp_platform_init: EXIT");
  long lRet = msg_sprintf(DAT_00129118, (frame - 0x240));
  return lRet;
}

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long qdp_qmi_wds_init_client(long param_1, long *param_2)

{
  int iVar2;
  uint64_t uVar3;
  uint32_t uVar4;
  uint8_t frame_store[1120] __attribute__((aligned(16)));
  uint8_t *const frame = frame_store + 1120;

  memset(frame_store, 0, sizeof frame_store);
  if ((param_1 == 0) || (param_2 == (long *)0x0))
  {
    QDP_LOG(frame - 0x250, DAT_00129130, "%s(): invalid input params!\n", "qdp_qmi_wds_init_client");
  }
  else
  {
    uRam000000000012b060 = 0;
    _DAT_0012b058 = 0;
    uRam000000000012b070 = 0;
    _DAT_0012b068 = 0;
    uRam000000000012b040 = 0;
    _DAT_0012b038 = 0;
    uRam000000000012b050 = 0;
    _DAT_0012b048 = 0;
    uRam000000000012b020 = 0;
    _DAT_0012b018 = 0;
    uRam000000000012b030 = 0;
    _DAT_0012b028 = 0;
    uRam000000000012b010 = 0;
    _DAT_0012b008 = 0;
    *param_2 = 0;
    uVar4 = 1;
    uVar3 = wds_get_service_object_internal_v01(1, 0xc0, 6);
    iVar2 = qmi_client_wds_init_instance(param_1, uVar3, 0xffff, 0, 0, DAT_0012b008, 10000, param_2);
    if (iVar2 == 0)
      goto LAB_00123634;
    QDP_LOG(frame - 0x250, DAT_00129148, "%s(): failed on qmi_client_wds_init_instance with rc=%d!\n", "qdp_qmi_wds_init_client", iVar2);
    if (*param_2 != 0)
    {
      qmi_client_release();
    }
  }
  uVar4 = 0;
LAB_00123634:
  return uVar4;
}

long qdp_qmi_wds_release_client(long param_1)

{
  int iVar2;
  uint8_t *puVar3;
  uint64_t uVar4 = 0;
  uint8_t frame_store[1104] __attribute__((aligned(16)));
  uint8_t *const frame = frame_store + 1104;

  memset(frame_store, 0, sizeof frame_store);
  if (param_1 == 0)
  {
    QDP_LOG_FMT(frame - 0x240, "%s(): invalid clnt_hndl!\n", "qdp_qmi_wds_release_client");
    puVar3 = DAT_00129160;
  }
  else
  {
    iVar2 = qmi_client_release();
    if (iVar2 == 0)
    {
      uVar4 = 1;
      goto LAB_00123784;
    }
    QDP_LOG_FMT(frame - 0x240, "%s(): failed to release clnt_hndl=%p rc=%d!\n", "qdp_qmi_wds_release_client", param_1, iVar2);
    puVar3 = DAT_00129178;
  }
  msg_sprintf(puVar3, (frame - 0x240));
  uVar4 = 0;
LAB_00123784:
  return (long)uVar4;
}

long qdp_qmi_wds_bind_subscription(long param_1, long param_2)

{
  int iVar2;
  uint8_t *puVar3;
  uint64_t uVar4 = 0;
  uint8_t frame_store[1104] __attribute__((aligned(16)));
  uint8_t *const frame = frame_store + 1104;

  memset(frame_store, 0, sizeof frame_store);
  memset(frame - 0x248, 0, 0x8);
  if (param_1 == 0)
  {
    QDP_LOG_FMT(frame - 0x240, "%s(): invalid clnt_hndl!\n", "qdp_qmi_wds_bind_subscription");
    puVar3 = DAT_00129190;
  }
  else if (param_2 == 0)
  {
    QDP_LOG_FMT(frame - 0x240, "%s(): invalid input params!\n", "qdp_qmi_wds_bind_subscription");
    puVar3 = DAT_001291a8;
  }
  else
  {
    memset(frame - 0x248, 0, 0x8);
    iVar2 = qmi_client_send_msg_sync(param_1, 0xaf, param_2, 4, (frame - 0x248), 8, 10000);
    if (iVar2 == 0 && (int)*(uint64_t *)(frame - 0x248) == 0)
    {
      uVar4 = 1;
      goto LAB_0012395c;
    }
    QDP_LOG_FMT(frame - 0x240, "%s(): failed with rc=%d result=%d err=%d!\n", "qdp_qmi_wds_bind_subscription", iVar2, *(uint64_t *)(frame - 0x248) & 0xffffffff, (((struct qdp_qmi_status *)(frame - 0x248))->qmi_err));
    puVar3 = DAT_001291c0;
  }
  msg_sprintf(puVar3, (frame - 0x240));
  uVar4 = 0;
LAB_0012395c:
  return (long)uVar4;
}

long qdp_qmi_wds_delete_profile(long param_1, long param_2)

{
  int iVar2;
  uint8_t *puVar3;
  uint64_t uVar4 = 0;
  uint8_t frame_store[1088] __attribute__((aligned(16)));
  uint8_t *const frame = frame_store + 1088;

  memset(frame_store, 0, sizeof frame_store);
  memset(frame - 0x240, 0, 0x10);
  if (param_1 == 0)
  {
    QDP_LOG_FMT(frame - 0x230, "%s(): invalid clnt_hndl!\n", "qdp_qmi_wds_delete_profile");
    puVar3 = DAT_001291d8;
  }
  else if (param_2 == 0)
  {
    QDP_LOG_FMT(frame - 0x230, "%s(): invalid input params!\n", "qdp_qmi_wds_delete_profile");
    puVar3 = DAT_001291f0;
  }
  else
  {
    memset(frame - 0x240, 0, 0x10);
    iVar2 = qmi_client_send_msg_sync(param_1, 0x29, param_2, 8, (frame - 0x240), 0x10, 10000);
    if (iVar2 == 0 && (int)*(uint64_t *)(frame - 0x240) == 0)
    {
      uVar4 = 1;
      goto LAB_00123b34;
    }
    QDP_LOG_FMT(frame - 0x230, "%s(): failed with rc=%d result=%d err=%d!\n", "qdp_qmi_wds_delete_profile", iVar2, *(uint64_t *)(frame - 0x240) & 0xffffffff, (((struct qdp_qmi_status *)(frame - 0x240))->qmi_err));
    puVar3 = DAT_00129208;
  }
  msg_sprintf(puVar3, (frame - 0x230));
  uVar4 = 0;
LAB_00123b34:
  return (long)uVar4;
}

long qdp_qmi_wds_get_profile_list(long param_1, long param_2, int *param_3)

{
  int iVar2;
  uint8_t *puVar3;
  uint64_t uVar4 = 0;
  uint8_t frame_store[1120] __attribute__((aligned(16)));
  uint8_t *const frame = frame_store + 1120;

  memset(frame_store, 0, sizeof frame_store);
  if (param_1 == 0)
  {
    QDP_LOG_FMT(frame - 0x250, "%s(): invalid clnt_hndl!\n", "qdp_qmi_wds_get_profile_list");
    puVar3 = DAT_00129220;
  }
  else if ((param_2 == 0) || (param_3 == (int *)0x0))
  {
    QDP_LOG_FMT(frame - 0x250, "%s(): invalid input params!\n", "qdp_qmi_wds_get_profile_list");
    puVar3 = DAT_00129238;
  }
  else
  {
    memset(param_3, 0, 0x37dc);
    iVar2 = qmi_client_send_msg_sync(param_1, 0x2a, param_2, 0xb8, param_3, 0x37dc, 10000);
    if (iVar2 == 0 && *param_3 == 0)
    {
      uVar4 = 1;
      goto LAB_00123d2c;
    }
    QDP_LOG_FMT(frame - 0x250, "%s(): failed with rc=%d result=%d err=%d!\n", "qdp_qmi_wds_get_profile_list", iVar2, *param_3, param_3[1]);
    puVar3 = DAT_00129250;
  }
  msg_sprintf(puVar3, (frame - 0x250));
  uVar4 = 0;
LAB_00123d2c:
  return (long)uVar4;
}

long qdp_qmi_wds_query_profile(long param_1, long param_2, int *param_3)

{
  int iVar2;
  uint8_t *puVar3;
  uint64_t uVar4 = 0;
  uint8_t frame_store[1120] __attribute__((aligned(16)));
  uint8_t *const frame = frame_store + 1120;

  memset(frame_store, 0, sizeof frame_store);
  if (param_1 == 0)
  {
    QDP_LOG_FMT(frame - 0x250, "%s(): invalid clnt_hndl!\n", "qdp_qmi_wds_query_profile");
    puVar3 = DAT_00129268;
  }
  else if ((param_2 == 0) || (param_3 == (int *)0x0))
  {
    QDP_LOG_FMT(frame - 0x250, "%s(): invalid input params!\n", "qdp_qmi_wds_query_profile");
    puVar3 = DAT_00129280;
  }
  else
  {
    memset(param_3, 0, 0xc40);
    iVar2 = qmi_client_send_msg_sync(param_1, 0x2b, param_2, 8, param_3, 0xc40, 10000);
    if (iVar2 == 0 && *param_3 == 0)
    {
      uVar4 = 1;
      goto LAB_00123f2c;
    }
    QDP_LOG_FMT(frame - 0x250, "%s(): failed with rc=%d result=%d err=%d!\n", "qdp_qmi_wds_query_profile", iVar2, *param_3, param_3[1]);
    puVar3 = DAT_00129298;
  }
  msg_sprintf(puVar3, (frame - 0x250));
  uVar4 = 0;
LAB_00123f2c:
  return (long)uVar4;
}

long qdp_qmi_wds_modify_profile(long param_1, long param_2, int *param_3)

{
  int iVar2;
  uint8_t *puVar3;
  uint64_t uVar4 = 0;
  uint8_t frame_store[1104] __attribute__((aligned(16)));
  uint8_t *const frame = frame_store + 1104;

  memset(frame_store, 0, sizeof frame_store);
  if (param_1 == 0)
  {
    QDP_LOG_FMT(frame - 0x240, "%s(): invalid clnt_hndl!\n", "qdp_qmi_wds_modify_profile");
    puVar3 = DAT_001292b0;
  }
  else if ((param_2 == 0) || (param_3 == (int *)0x0))
  {
    QDP_LOG_FMT(frame - 0x240, "%s(): invalid input params!\n", "qdp_qmi_wds_modify_profile");
    puVar3 = DAT_001292c8;
  }
  else
  {
    param_3[0] = 0;
    param_3[1] = 0;
    param_3[2] = 0;
    param_3[3] = 0;
    iVar2 = qmi_client_send_msg_sync(param_1, 0x28, param_2, 0xc30, param_3, 0x10, 10000);
    if (iVar2 == 0 && *param_3 == 0)
    {
      uVar4 = 1;
      goto LAB_00124110;
    }
    QDP_LOG_FMT(frame - 0x240, "%s(): failed with rc=%d result=%d err=%d!\n", "qdp_qmi_wds_modify_profile", iVar2, *param_3, param_3[1]);
    puVar3 = DAT_001292e0;
  }
  msg_sprintf(puVar3, (frame - 0x240));
  uVar4 = 0;
LAB_00124110:
  return (long)uVar4;
}

long qdp_qmi_wds_create_profile(long param_1, long param_2, int *param_3)

{
  int iVar2;
  uint8_t *puVar3;
  uint64_t uVar4 = 0;
  uint8_t frame_store[1104] __attribute__((aligned(16)));
  uint8_t *const frame = frame_store + 1104;

  memset(frame_store, 0, sizeof frame_store);
  if (param_1 == 0)
  {
    QDP_LOG_FMT(frame - 0x240, "%s(): invalid clnt_hndl!\n", "qdp_qmi_wds_create_profile");
    puVar3 = DAT_001292f8;
  }
  else if ((param_2 == 0) || (param_3 == (int *)0x0))
  {
    QDP_LOG_FMT(frame - 0x240, "%s(): invalid input params!\n", "qdp_qmi_wds_create_profile");
    puVar3 = DAT_00129310;
  }
  else
  {
    param_3[0] = 0;
    param_3[1] = 0;
    param_3[2] = 0;
    param_3[3] = 0;
    param_3[4] = 0;
    param_3[5] = 0;
    iVar2 = qmi_client_send_msg_sync(param_1, 0x27, param_2, 0xc30, param_3, 0x18, 10000);
    if (iVar2 == 0 && *param_3 == 0)
    {
      uVar4 = 1;
      goto LAB_001242f4;
    }
    QDP_LOG_FMT(frame - 0x240, "%s(): failed with rc=%d result=%d err=%d!\n", "qdp_qmi_wds_create_profile", iVar2, *param_3, param_3[1]);
    puVar3 = DAT_00129328;
  }
  msg_sprintf(puVar3, (frame - 0x240));
  uVar4 = 0;
LAB_001242f4:
  return (long)uVar4;
}

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long qdp_qmi_wds_client_init(long *param_1)

{
  int iVar2;
  uint64_t uVar3;
  uint32_t uVar4;
  uint8_t frame_store[1120] __attribute__((aligned(16)));
  uint8_t *const frame = frame_store + 1120;

  memset(frame_store, 0, sizeof frame_store);
  if (param_1 == (long *)0x0)
  {
    QDP_LOG(frame - 0x250, DAT_00129340, "%s(): invalid input params!\n", "qdp_qmi_wds_client_init");
  }
  else
  {
    uRam000000000012b060 = 0;
    _DAT_0012b058 = 0;
    uRam000000000012b070 = 0;
    _DAT_0012b068 = 0;
    uRam000000000012b040 = 0;
    _DAT_0012b038 = 0;
    uRam000000000012b050 = 0;
    _DAT_0012b048 = 0;
    uRam000000000012b020 = 0;
    _DAT_0012b018 = 0;
    uRam000000000012b030 = 0;
    _DAT_0012b028 = 0;
    uRam000000000012b010 = 0;
    _DAT_0012b008 = 0;
    *param_1 = 0;
    uVar4 = 1;
    uVar3 = wds_get_service_object_internal_v01(1, 0xc0, 6);
    iVar2 = qmi_client_init_instance(uVar3, 0xffff, 0, 0, DAT_0012b008, 10000, param_1);
    if (iVar2 == 0)
      goto LAB_0012449c;
    QDP_LOG(frame - 0x250, DAT_00129358, "%s(): failed on qmi_client_wds_init_instance with rc=%d!\n", "qdp_qmi_wds_client_init", iVar2);
    if (*param_1 != 0)
    {
      qmi_client_release();
    }
  }
  uVar4 = 0;
LAB_0012449c:
  return uVar4;
}

long FUN_001244d0(void)

{
  ((long (*)())(PTR_00129608))();
  return 0;
}
