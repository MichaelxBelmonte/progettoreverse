// Reconstructed implementation of MDProjectAudioSource
// From MikeCore binary — reverse-engineered pseudocode

#include "MDProjectAudioSource.h"

// ============================================================
// @002d22e0 — 1695 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x002d24da) */
/* WARNING: Removing unreachable block (ram,0x002d24e7) */
/* WARNING: Removing unreachable block (ram,0x002d28e5) */
/* WARNING: Removing unreachable block (ram,0x002d28f2) */

undefined8 FUN_002d22e0(ulonglong param_1,char param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  void *pvVar7;
  ulonglong uVar8;
  longlong *plVar9;
  longlong unaff_RDI;
  longlong lVar10;
  undefined8 uVar11;
  longlong local_b8;
  char local_b0;
  longlong *local_88;
  char local_80;
  longlong local_58;
  char local_50;
  longlong *local_48;
  char local_40;
  
  lVar2 = *(longlong *)(unaff_RDI + 0xe0);
  if (lVar2 == 0) {
    uVar11 = 0;
  }
  else {
    FUN_00d50b00();
    local_80 = '\0';
    local_88 = (longlong *)0x0;
    uVar1 = *(uint *)(lVar2 + 0xc);
    param_1 = (ulonglong)uVar1;
    if ((int)uVar1 < 1) {
      uVar11 = 0;
    }
    else {
      lVar2 = *(longlong *)(lVar2 + 0x10);
      if (uVar1 == 1) {
        uVar8 = 0;
        uVar11 = 0;
      }
      else {
        uVar8 = 0;
        uVar11 = 0;
        do {
          lVar10 = *(longlong *)(lVar2 + uVar8 * 8);
          if (*(int *)(lVar10 + 0x24) == 1) {
            if (*(int *)(lVar10 + 0x20) == 1) {
              uVar11 = 1;
            }
            local_88 = *(longlong **)(lVar2 + 8 + uVar8 * 8);
            iVar5 = *(int *)((longlong)local_88 + 0x24);
          }
          else {
            local_88 = *(longlong **)(lVar2 + 8 + uVar8 * 8);
            iVar5 = *(int *)((longlong)local_88 + 0x24);
          }
          if ((iVar5 == 1) && ((int)local_88[4] == 1)) {
            uVar11 = 1;
          }
          uVar8 = uVar8 + 2;
        } while ((uVar1 & 0xfffffffe) != (uint)uVar8);
      }
      if ((uVar1 & 1) != 0) {
        param_1 = uVar8 & 0xffffffff;
        local_88 = *(longlong **)(lVar2 + param_1 * 8);
        if ((*(int *)((longlong)local_88 + 0x24) == 1) && ((int)local_88[4] == 1)) {
          uVar11 = 1;
        }
      }
    }
    FUN_002d7300();
    FUN_00d50b20();
  }
  plVar3 = local_88;
  lVar2 = DAT_026f6fb0;
  if (param_2 != '\0') {
    if (DAT_026f6fb0 != 0) {
      FUN_00d50b00();
    }
    lVar10 = DAT_026fcf08;
    if (DAT_026fcf08 != 0) {
      FUN_00d50b00();
    }
    FUN_01f6ca30();
    if (local_80 == '\0') {
      if (local_88 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_80 = '\0';
    }
    if (lVar10 != 0) {
      FUN_00d50b20();
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    iVar5 = (**(code **)(*local_88 + 0x5e0))();
    if (iVar5 == 0) {
      FUN_002c9a70();
      lVar2 = *(longlong *)(unaff_RDI + 0xe0);
      if (lVar2 != 0) {
        local_80 = '\0';
        local_88 = (longlong *)0x0;
        if (0 < *(int *)(lVar2 + 0xc)) {
          lVar10 = 0;
          do {
            local_88 = *(longlong **)(*(longlong *)(lVar2 + 0x10) + lVar10 * 8);
            if ((*(int *)((longlong)local_88 + 0x24) == 1) && ((int)local_88[4] == 1)) {
              if (local_88[3] == 0) {
                plVar9 = (longlong *)local_88[2];
                pvVar7 = _pthread_getspecific((pthread_key_t)param_1);
                if (pvVar7 != (void *)0x0) {
                  plVar9 = (longlong *)local_88[2];
                  lVar6 = FUN_00e8b990();
                  if (lVar6 != 0) {
                    plVar9 = (longlong *)plVar9[(ulonglong)(*(uint *)(lVar6 + 0x154) & 1) + 4];
                  }
                }
                (**(code **)(*plVar9 + 0x478))();
              }
              else {
                FUN_00b88600();
              }
              if (local_50 == '\0') {
                if (local_58 != 0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_50 = '\0';
              }
              FUN_014fff90();
              if (local_40 == '\0') {
                if (local_48 != (longlong *)0x0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_40 = '\0';
              }
              if (local_58 != 0) {
                FUN_00d50b20();
              }
              if ((local_50 != '\0') && (local_58 != 0)) {
                FUN_00d50b20();
              }
              if (local_88[3] == 0) {
                if (local_48 != (longlong *)0x0) {
                  FUN_00d50b20();
                }
              }
              else {
                FUN_00d50b00();
                FUN_00d50b20();
                if (local_88[2] != 0) {
                  FUN_00d50b00();
                  FUN_00d50b20();
                  (**(code **)(**(longlong **)(unaff_RDI + 0xf0) + 0x628))();
                  pvVar7 = _pthread_getspecific((pthread_key_t)param_1);
                  if (pvVar7 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  FUN_004a1110();
                  pvVar7 = _pthread_getspecific((pthread_key_t)param_1);
                  if (pvVar7 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  FUN_01313ad0();
                  pvVar7 = _pthread_getspecific((pthread_key_t)param_1);
                  if (pvVar7 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  lVar6 = local_88[2];
                  if (lVar6 != 0) {
                    FUN_00d50b00();
                  }
                  FUN_012cb5e0();
                  if (lVar6 != 0) {
                    FUN_00d50b20();
                  }
                  if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
                    FUN_00d50b20();
                  }
                  if ((local_50 != '\0') && (local_58 != 0)) {
                    FUN_00d50b20();
                  }
                  if ((local_b0 != '\0') && (local_b8 != 0)) {
                    FUN_00d50b20();
                  }
                }
                lVar6 = local_88[3];
                if (lVar6 != 0) {
                  FUN_00d50b00();
                }
                FUN_00b881a0();
                if (lVar6 != 0) {
                  FUN_00d50b20();
                }
                lVar6 = local_88[3];
                if (lVar6 != 0) {
                  FUN_00d50b00();
                }
                FUN_00b88600();
                (**(code **)(*local_48 + 0x430))();
                if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                if (lVar6 != 0) {
                  FUN_00d50b20();
                }
                if (local_48 != (longlong *)0x0) {
                  cVar4 = (**(code **)(*local_48 + 0x398))();
                  if (cVar4 != '\0') {
                    (**(code **)(*local_48 + 0x430))();
                  }
                  FUN_00d50b20();
                }
              }
            }
            lVar10 = lVar10 + 1;
          } while ((int)lVar10 < *(int *)(lVar2 + 0xc));
        }
        FUN_002d7300();
      }
      (**(code **)(**(longlong **)(unaff_RDI + 0xf0) + 0x480))();
      FUN_00db3760();
      if ((local_80 != '\0') && (local_88 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      FUN_002c9a70();
      if (plVar3 != (longlong *)0x0) {
        FUN_00d50b20();
      }
    }
    else {
      uVar11 = 1;
      FUN_00d50b20();
    }
  }
  return uVar11;
}




// ============================================================
// @002d1ba0 — 1059 bytes
// str: ""MDProjectAudioSource""
// ============================================================

/* WARNING: Removing unreachable block (ram,0x002d1f9e) */
/* WARNING: Removing unreachable block (ram,0x002d1faa) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_002d1ba0(void)

{
  char cVar1;
  undefined8 *puVar2;
  longlong lVar3;
  void *pvVar4;
  pthread_key_t pVar5;
  longlong **pplVar6;
  int iVar7;
  undefined8 *unaff_RSI;
  longlong *plVar8;
  longlong *plVar9;
  undefined4 uVar10;
  longlong local_90;
  char local_88;
  longlong *local_80;
  char local_78;
  longlong *local_70;
  undefined8 local_68;
  int local_60;
  longlong *local_58;
  char local_50;
  longlong *local_48;
  char local_40;
  longlong *local_38;
  
  (**(code **)(*(longlong *)*unaff_RSI + 0x3f8))();
  plVar8 = local_80;
  if ((((local_78 == '\0') && (local_80 != (longlong *)0x0)) && (FUN_00d50b00(), local_78 != '\0'))
     && (local_80 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  puVar2 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar2 = &DAT_02572358;
  uVar10 = (*DAT_02572370)();
  if (plVar8 != (longlong *)0x0) {
    local_78 = '\0';
    local_80 = (longlong *)0x0;
    local_38 = plVar8;
    local_70 = plVar8;
    local_68 = 0xffffffff;
    local_60 = 0;
    local_68._4_4_ = 0;
    while( true ) {
      if (local_68._4_4_ != 0) {
        if (local_68._4_4_ < 1) {
          iVar7 = -local_68._4_4_;
        }
        else {
          iVar7 = (int)local_68 - local_68._4_4_;
          local_68 = CONCAT44(local_68._4_4_,iVar7);
          FUN_00d23690();
          local_60 = local_60 + local_68._4_4_;
          iVar7 = 0;
        }
        local_68 = CONCAT44(iVar7,(int)local_68);
      }
      lVar3 = (longlong)(int)local_68;
      iVar7 = (int)local_68 + 1;
      local_68 = CONCAT44(local_68._4_4_,iVar7);
      if (*(int *)((longlong)local_70 + 0xc) <= iVar7) break;
      plVar8 = *(longlong **)(local_70[2] + 8 + lVar3 * 8);
      local_58 = plVar8;
      local_80 = plVar8;
      if ((DAT_026fd0a8 == '\0') && (iVar7 = ___cxa_guard_acquire(), iVar7 != 0)) {
        _DAT_026fcff8 = FUN_00d4fe50();
        _DAT_026fcfe0 = "MDProjectAudioSource";
        _DAT_026fcfe8 = 0x28;
        _DAT_026fcff0 = FUN_002d5b80;
        _DAT_026fd000 = 0;
        uRam00000000026fd008 = 0;
        _DAT_026fd010 = 0;
        _DAT_026fd088 = 0;
        uRam00000000026fd090 = 0;
        _DAT_026fd098 = 0;
        DAT_026fd09a = 1;
        _DAT_026fd018 = 0;
        uRam00000000026fd020 = 0;
        _DAT_026fd028 = 0;
        uRam00000000026fd030 = 0;
        _DAT_026fd038 = 0;
        uRam00000000026fd040 = 0;
        _DAT_026fd048 = 0;
        uRam00000000026fd050 = 0;
        _DAT_026fd058 = 0;
        uRam00000000026fd060 = 0;
        _DAT_026fd068 = 0;
        uRam00000000026fd070 = 0;
        _DAT_026fd078 = 0;
        uRam00000000026fd080 = 0;
        DAT_026fd0a3 = 0;
        _DAT_026fd09b = 0;
        ___cxa_guard_release();
      }
      pplVar6 = (longlong **)&DAT_02802688;
      if (plVar8 != (longlong *)0x0) {
        (**(code **)(*plVar8 + 0x360))();
        cVar1 = FUN_00e85ea0();
        pplVar6 = &local_58;
        if (cVar1 == '\0') {
          pplVar6 = (longlong **)&DAT_02802688;
        }
      }
      plVar8 = local_80;
      if (*pplVar6 != (longlong *)0x0) {
        if (local_80[3] == 0) {
          plVar9 = (longlong *)local_80[2];
          pvVar4 = _pthread_getspecific((pthread_key_t)pplVar6);
          pVar5 = (pthread_key_t)pplVar6;
          if (pvVar4 != (void *)0x0) {
            plVar9 = (longlong *)plVar8[2];
            lVar3 = FUN_00e8b990();
            if (lVar3 != 0) {
              plVar9 = (longlong *)plVar9[(ulonglong)(*(uint *)(lVar3 + 0x154) & 1) + 4];
            }
          }
          (**(code **)(*plVar9 + 0x478))();
        }
        else {
          FUN_00b88600();
          pVar5 = (pthread_key_t)pplVar6;
        }
        plVar8 = local_58;
        if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        plVar9 = local_80;
        if (plVar8 != (longlong *)0x0) {
          if (local_80[3] == 0) {
            plVar8 = (longlong *)local_80[2];
            pvVar4 = _pthread_getspecific(pVar5);
            if (pvVar4 != (void *)0x0) {
              plVar8 = (longlong *)plVar9[2];
              lVar3 = FUN_00e8b990();
              if (lVar3 != 0) {
                plVar8 = (longlong *)plVar8[(ulonglong)(*(uint *)(lVar3 + 0x154) & 1) + 4];
              }
            }
            (**(code **)(*plVar8 + 0x478))();
          }
          else {
            FUN_00b88600();
          }
          plVar8 = local_58;
          local_40 = 0;
          if (local_50 == '\0') {
            if (local_58 != (longlong *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_50 = '\0';
          }
          local_40 = '\x01';
          local_48 = plVar8;
          FUN_00d21140();
          if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
      }
    }
    uVar10 = FUN_002d74d0();
    plVar8 = local_38;
  }
  lVar3 = DAT_026fcec0;
  iVar7 = *(int *)((longlong)puVar2 + 0xc);
  if (iVar7 != 0) {
    if (DAT_026fcec0 != 0) {
      uVar10 = FUN_00d50b00();
    }
    local_90 = lVar3;
    local_88 = '\x01';
    FUN_01cac7f0(uVar10,&local_90);
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
  }
  FUN_00d50b20();
  if (plVar8 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return iVar7 != 0;
}




// ============================================================
// @002d3710 — 908 bytes
// str: ""MDProjectAudioSource""
// str: ""GNString""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_002d3710(undefined4 param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  longlong unaff_RDI;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  longlong local_68;
  char local_60;
  longlong local_58;
  char local_50;
  longlong local_48;
  char local_40;
  char local_32;
  char local_31;
  
  plVar1 = (longlong *)*param_2;
  if ((DAT_026fd0a8 == '\0') &&
     (iVar5 = ___cxa_guard_acquire(), param_1 = extraout_XMM0_Da_01, iVar5 != 0)) {
    _DAT_026fcff8 = FUN_00d4fe50();
    _DAT_026fcfe0 = "MDProjectAudioSource";
    _DAT_026fcfe8 = 0x28;
    _DAT_026fcff0 = FUN_002d5b80;
    _DAT_026fd000 = 0;
    uRam00000000026fd008 = 0;
    _DAT_026fd010 = 0;
    _DAT_026fd088 = 0;
    uRam00000000026fd090 = 0;
    _DAT_026fd098 = 0;
    DAT_026fd09a = 1;
    _DAT_026fd018 = 0;
    uRam00000000026fd020 = 0;
    _DAT_026fd028 = 0;
    uRam00000000026fd030 = 0;
    _DAT_026fd038 = 0;
    uRam00000000026fd040 = 0;
    _DAT_026fd048 = 0;
    uRam00000000026fd050 = 0;
    _DAT_026fd058 = 0;
    uRam00000000026fd060 = 0;
    _DAT_026fd068 = 0;
    uRam00000000026fd070 = 0;
    _DAT_026fd078 = 0;
    uRam00000000026fd080 = 0;
    DAT_026fd0a3 = 0;
    _DAT_026fd09b = 0;
    param_1 = ___cxa_guard_release();
  }
  if (plVar1 == (longlong *)0x0) {
LAB_002d375f:
    param_2 = &DAT_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar4 = FUN_00e85ea0();
    param_1 = extraout_XMM0_Da;
    if (cVar4 == '\0') goto LAB_002d375f;
  }
  lVar2 = *param_2;
  local_32 = (char)param_2[1];
  if ((local_32 == '\0') || (lVar2 == 0)) {
    if (lVar2 == 0) {
      return;
    }
  }
  else {
    param_1 = FUN_00d50b00();
  }
  plVar1 = (longlong *)*param_3;
  if ((DAT_026fd0c0 == '\0') &&
     (iVar5 = ___cxa_guard_acquire(), param_1 = extraout_XMM0_Da_02, iVar5 != 0)) {
    _DAT_026d5e58 = FUN_00d4fe50();
    DAT_026d5e40 = "GNString";
    _DAT_026d5e48 = 0x40;
    _DAT_026d5e50 = FUN_0005d920;
    _DAT_026d5e60 = 0;
    uRam00000000026d5e68 = 0;
    _DAT_026d5e70 = 0;
    uRam00000000026d5e78 = 0;
    _DAT_026d5e80 = 0;
    uRam00000000026d5e88 = 0;
    _DAT_026d5e90 = 0;
    uRam00000000026d5e98 = 0;
    _DAT_026d5ea0 = 0;
    uRam00000000026d5ea8 = 0;
    _DAT_026d5eb0 = 0;
    uRam00000000026d5eb8 = 0;
    _DAT_026d5ec0 = 0;
    uRam00000000026d5ec8 = 0;
    _DAT_026d5ed0 = 0;
    uRam00000000026d5ed8 = 0;
    _DAT_026d5ee0 = 0;
    uRam00000000026d5ee8 = 0;
    _DAT_026d5ef0 = 0;
    uRam00000000026d5ef8 = 0;
    _DAT_026d5f00 = 0;
    param_1 = ___cxa_guard_release();
  }
  if (plVar1 == (longlong *)0x0) {
LAB_002d37c1:
    param_3 = &DAT_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar4 = FUN_00e85ea0();
    param_1 = extraout_XMM0_Da_00;
    if (cVar4 == '\0') goto LAB_002d37c1;
  }
  lVar3 = *param_3;
  local_31 = (char)param_3[1];
  if ((local_31 == '\0') || (lVar3 == 0)) {
    if (lVar3 == 0) goto LAB_002d38dd;
  }
  else {
    param_1 = FUN_00d50b00();
  }
  local_60 = '\0';
  local_68 = lVar3;
  FUN_002d2d30(param_1,&local_68);
  lVar3 = local_48;
  if (local_40 == '\0') {
    if (((local_48 != 0) && (FUN_00d50b00(), local_40 != '\0')) && (local_48 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_40 = '\0';
  }
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  cVar4 = FUN_00ce6e30();
  if (cVar4 == '\0') {
    if (*(longlong *)(lVar2 + 0x18) != 0) {
      FUN_00d50b00();
      FUN_00d50b20();
      lVar2 = *(longlong *)(lVar2 + 0x18);
      if (lVar2 != 0) {
        FUN_00d50b00();
      }
      local_58 = lVar3;
      local_50 = '\0';
      FUN_00b86c30();
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
    }
    (**(code **)(**(longlong **)(unaff_RDI + 0xf0) + 0x578))();
    FUN_002c9a70();
  }
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  if (local_31 != '\0') {
    FUN_00d50b20();
  }
LAB_002d38dd:
  if (local_32 != '\0') {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @002d2d30 — 894 bytes
// str: ""%@.%@""
// ============================================================

/* WARNING: Removing unreachable block (ram,0x002d2ed7) */
/* WARNING: Removing unreachable block (ram,0x002d2ee3) */
/* WARNING: Removing unreachable block (ram,0x002d3062) */
/* WARNING: Removing unreachable block (ram,0x002d306e) */
/* WARNING: Removing unreachable block (ram,0x002d2e64) */
/* WARNING: Removing unreachable block (ram,0x002d2e6d) */
/* WARNING: Removing unreachable block (ram,0x002d2e21) */
/* WARNING: Removing unreachable block (ram,0x002d2e2a) */
/* WARNING: Removing unreachable block (ram,0x002d2e9b) */
/* WARNING: Removing unreachable block (ram,0x002d2ea4) */
/* WARNING: Removing unreachable block (ram,0x002d2ddf) */
/* WARNING: Removing unreachable block (ram,0x002d2de8) */

undefined8 FUN_002d2d30(pthread_key_t param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  void *pvVar3;
  longlong lVar4;
  longlong *unaff_RSI;
  undefined8 unaff_RDI;
  longlong *plVar5;
  undefined1 local_c0 [8];
  longlong *local_90;
  longlong local_88;
  char local_80;
  longlong *local_68;
  char local_60;
  longlong local_58;
  char local_50;
  longlong local_48;
  char local_40;
  
  lVar4 = *unaff_RSI;
  if (*(longlong *)(lVar4 + 0x18) == 0) {
    plVar5 = *(longlong **)(lVar4 + 0x10);
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      plVar5 = *(longlong **)(lVar4 + 0x10);
      lVar4 = FUN_00e8b990();
      if (lVar4 != 0) {
        plVar5 = (longlong *)plVar5[(ulonglong)(*(uint *)(lVar4 + 0x154) & 1) + 4];
      }
    }
    (**(code **)(*plVar5 + 0x478))();
  }
  else {
    FUN_00b88600();
  }
  if ((local_60 == '\0') && (local_68 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  (**(code **)(*local_68 + 0x3f0))();
  if ((local_60 == '\0') && (local_68 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  (**(code **)(*local_68 + 0x380))();
  if ((local_60 == '\0') && (local_68 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  FUN_00d8ed10();
  if ((local_60 == '\0') && (local_68 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  cVar2 = (**(code **)(*local_68 + 0x50))();
  if (cVar2 != '\0') goto LAB_002d3022;
  FUN_00083ea0(2,local_c0);
  FUN_00d8cb40();
  lVar4 = *param_2;
  if (lVar4 == local_88) {
    if (((char)param_2[1] == '\0') && (local_88 != 0)) {
      if (local_80 != '\0') goto LAB_002d2f8a;
      FUN_00d50b00();
      goto LAB_002d2fc6;
    }
LAB_002d2fd0:
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    lVar1 = param_2[1];
    if (local_80 == '\0') {
      if (local_88 != 0) {
        FUN_00d50b00();
      }
      *param_2 = local_88;
      if (((char)lVar1 != '\0') && (lVar4 != 0)) {
        FUN_00d50b20();
      }
LAB_002d2fc6:
      local_90 = param_2 + 1;
      *(undefined1 *)local_90 = 1;
      goto LAB_002d2fd0;
    }
    *param_2 = local_88;
    if (((char)lVar1 != '\0') && (lVar4 != 0)) {
      FUN_00d50b20();
    }
LAB_002d2f8a:
    local_90 = param_2 + 1;
    *(undefined1 *)local_90 = 1;
  }
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
LAB_002d3022:
  (**(code **)(*local_68 + 0x400))();
  FUN_00d50b20();
  if (local_68 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  FUN_00d50b20();
  return unaff_RDI;
}




// ============================================================
// @002d3310 — 774 bytes
// str: ""MDProjectAudioSource""
// str: ""GNString""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_002d3310(undefined4 param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  longlong local_58;
  char local_50;
  longlong local_48;
  char local_40;
  char local_31;
  
  plVar1 = (longlong *)*param_2;
  if ((DAT_026fd0a8 == '\0') &&
     (iVar6 = ___cxa_guard_acquire(), param_1 = extraout_XMM0_Da_01, iVar6 != 0)) {
    _DAT_026fcff8 = FUN_00d4fe50();
    _DAT_026fcfe0 = "MDProjectAudioSource";
    _DAT_026fcfe8 = 0x28;
    _DAT_026fcff0 = FUN_002d5b80;
    _DAT_026fd000 = 0;
    uRam00000000026fd008 = 0;
    _DAT_026fd010 = 0;
    _DAT_026fd088 = 0;
    uRam00000000026fd090 = 0;
    _DAT_026fd098 = 0;
    DAT_026fd09a = 1;
    _DAT_026fd018 = 0;
    uRam00000000026fd020 = 0;
    _DAT_026fd028 = 0;
    uRam00000000026fd030 = 0;
    _DAT_026fd038 = 0;
    uRam00000000026fd040 = 0;
    _DAT_026fd048 = 0;
    uRam00000000026fd050 = 0;
    _DAT_026fd058 = 0;
    uRam00000000026fd060 = 0;
    _DAT_026fd068 = 0;
    uRam00000000026fd070 = 0;
    _DAT_026fd078 = 0;
    uRam00000000026fd080 = 0;
    DAT_026fd0a3 = 0;
    _DAT_026fd09b = 0;
    param_1 = ___cxa_guard_release();
  }
  if (plVar1 == (longlong *)0x0) {
LAB_002d335c:
    param_2 = &DAT_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar4 = FUN_00e85ea0();
    param_1 = extraout_XMM0_Da;
    if (cVar4 == '\0') goto LAB_002d335c;
  }
  local_31 = (char)param_2[1];
  if ((local_31 == '\0') || (*param_2 == 0)) {
    if (*param_2 == 0) {
      return 0;
    }
  }
  else {
    param_1 = FUN_00d50b00();
  }
  plVar1 = (longlong *)*param_3;
  if ((DAT_026fd0c0 == '\0') &&
     (iVar6 = ___cxa_guard_acquire(), param_1 = extraout_XMM0_Da_02, iVar6 != 0)) {
    _DAT_026d5e58 = FUN_00d4fe50();
    DAT_026d5e40 = "GNString";
    _DAT_026d5e48 = 0x40;
    _DAT_026d5e50 = FUN_0005d920;
    _DAT_026d5e60 = 0;
    uRam00000000026d5e68 = 0;
    _DAT_026d5e70 = 0;
    uRam00000000026d5e78 = 0;
    _DAT_026d5e80 = 0;
    uRam00000000026d5e88 = 0;
    _DAT_026d5e90 = 0;
    uRam00000000026d5e98 = 0;
    _DAT_026d5ea0 = 0;
    uRam00000000026d5ea8 = 0;
    _DAT_026d5eb0 = 0;
    uRam00000000026d5eb8 = 0;
    _DAT_026d5ec0 = 0;
    uRam00000000026d5ec8 = 0;
    _DAT_026d5ed0 = 0;
    uRam00000000026d5ed8 = 0;
    _DAT_026d5ee0 = 0;
    uRam00000000026d5ee8 = 0;
    _DAT_026d5ef0 = 0;
    uRam00000000026d5ef8 = 0;
    _DAT_026d5f00 = 0;
    param_1 = ___cxa_guard_release();
  }
  if (plVar1 == (longlong *)0x0) {
LAB_002d33be:
    param_3 = &DAT_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar4 = FUN_00e85ea0();
    param_1 = extraout_XMM0_Da_00;
    if (cVar4 == '\0') goto LAB_002d33be;
  }
  lVar2 = *param_3;
  lVar3 = param_3[1];
  if (((char)lVar3 == '\0') || (lVar2 == 0)) {
    if (lVar2 == 0) {
      uVar5 = 0;
      goto joined_r0x002d3492;
    }
  }
  else {
    param_1 = FUN_00d50b00();
  }
  local_50 = '\0';
  local_58 = lVar2;
  FUN_002d2d30(param_1,&local_58);
  lVar2 = local_48;
  if (local_40 == '\0') {
    if (((local_48 != 0) && (FUN_00d50b00(), local_40 != '\0')) && (local_48 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_40 = '\0';
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  uVar5 = FUN_00ce6e30();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if ((char)lVar3 != '\0') {
    FUN_00d50b20();
  }
joined_r0x002d3492:
  if (local_31 != '\0') {
    FUN_00d50b20();
  }
  return uVar5;
}




// ============================================================
// @002d6160 — 570 bytes
// str: ""MDProjectAudioSource""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_002d6160(void)

{
  int iVar1;
  undefined8 *unaff_RDI;
  
  FUN_00d4ff80();
  *unaff_RDI = &DAT_024de268;
  FUN_002d6400();
  FUN_002d6730();
  *(undefined4 *)(unaff_RDI + 4) = 0;
  if (DAT_026fd0a8 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026fcff8 = FUN_00d4fe50();
      _DAT_026fcfe0 = "MDProjectAudioSource";
      _DAT_026fcfe8 = 0x28;
      _DAT_026fcff0 = FUN_002d5b80;
      _DAT_026fd000 = 0;
      uRam00000000026fd008 = 0;
      _DAT_026fd010 = 0;
      _DAT_026fd088 = 0;
      uRam00000000026fd090 = 0;
      _DAT_026fd098 = 0;
      DAT_026fd09a = 1;
      _DAT_026fd018 = 0;
      uRam00000000026fd020 = 0;
      _DAT_026fd028 = 0;
      uRam00000000026fd030 = 0;
      _DAT_026fd038 = 0;
      uRam00000000026fd040 = 0;
      _DAT_026fd048 = 0;
      uRam00000000026fd050 = 0;
      _DAT_026fd058 = 0;
      uRam00000000026fd060 = 0;
      _DAT_026fd068 = 0;
      uRam00000000026fd070 = 0;
      _DAT_026fd078 = 0;
      uRam00000000026fd080 = 0;
      DAT_026fd0a3 = 0;
      _DAT_026fd09b = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_026fd09b == '\0') {
    FUN_002d6a60();
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x24) = 0;
  if (DAT_026fd0a8 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026fcff8 = FUN_00d4fe50();
      _DAT_026fcfe0 = "MDProjectAudioSource";
      _DAT_026fcfe8 = 0x28;
      _DAT_026fcff0 = FUN_002d5b80;
      _DAT_026fd000 = 0;
      uRam00000000026fd008 = 0;
      _DAT_026fd010 = 0;
      _DAT_026fd088 = 0;
      uRam00000000026fd090 = 0;
      _DAT_026fd098 = 0;
      DAT_026fd09a = 1;
      _DAT_026fd018 = 0;
      uRam00000000026fd020 = 0;
      _DAT_026fd028 = 0;
      uRam00000000026fd030 = 0;
      _DAT_026fd038 = 0;
      uRam00000000026fd040 = 0;
      _DAT_026fd048 = 0;
      uRam00000000026fd050 = 0;
      _DAT_026fd058 = 0;
      uRam00000000026fd060 = 0;
      _DAT_026fd068 = 0;
      uRam00000000026fd070 = 0;
      _DAT_026fd078 = 0;
      uRam00000000026fd080 = 0;
      DAT_026fd0a3 = 0;
      _DAT_026fd09b = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_026fd09b == '\0') {
    FUN_002d6cb0();
    FUN_00e87980();
  }
  return;
}




// ============================================================
// @002d6cb0 — 560 bytes
// str: ""MDProjectAudioSource""
// str: ""MDProjectAudioSourceStatus""
// str: ""_status""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_002d6cb0(void)

{
  int iVar1;
  
  if (DAT_026fd370 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026fd360 = 0x100000000;
      _DAT_026fd368 = 2;
      DAT_026fd36c = 1;
      ___cxa_guard_release();
    }
  }
  if (DAT_026fd3a8 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026fd378 = "MDProjectAudioSourceStatus";
      _DAT_026fd380 = 3;
      DAT_026fd384 = DAT_026fd36c;
      _DAT_026fd388 = &DAT_026fd360;
      _DAT_026fd390 = &DAT_026fd340;
      _DAT_026fd398 = 0;
      uRam00000000026fd3a0 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e876a0();
  if (DAT_026fd338 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_026fd0a8 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026fcff8 = FUN_00d4fe50();
          _DAT_026fcfe0 = "MDProjectAudioSource";
          _DAT_026fcfe8 = 0x28;
          _DAT_026fcff0 = FUN_002d5b80;
          _DAT_026fd000 = 0;
          uRam00000000026fd008 = 0;
          _DAT_026fd010 = 0;
          _DAT_026fd088 = 0;
          uRam00000000026fd090 = 0;
          _DAT_026fd098 = 0;
          DAT_026fd09a = 1;
          _DAT_026fd018 = 0;
          uRam00000000026fd020 = 0;
          _DAT_026fd028 = 0;
          uRam00000000026fd030 = 0;
          _DAT_026fd038 = 0;
          uRam00000000026fd040 = 0;
          _DAT_026fd048 = 0;
          uRam00000000026fd050 = 0;
          _DAT_026fd058 = 0;
          uRam00000000026fd060 = 0;
          _DAT_026fd068 = 0;
          uRam00000000026fd070 = 0;
          _DAT_026fd078 = 0;
          uRam00000000026fd080 = 0;
          DAT_026fd0a3 = 0;
          _DAT_026fd09b = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_026fd2f8 = "_status";
      _DAT_026fd300 = &DAT_026fcfe0;
      _DAT_026fd308 = 0;
      _DAT_026fd310 = 0x6500;
      _DAT_026fd318 = "MDProjectAudioSourceStatus";
      _DAT_026fd320 = &DAT_026fd378;
      _DAT_026fd328 = 0;
      uRam00000000026fd330 = 0;
      ___cxa_guard_release();
    }
  }
  return &DAT_026fd2f8;
}




// ============================================================
// @002d6a60 — 550 bytes
// str: ""_location""
// str: ""MDProjectAudioSource""
// str: ""MDProjectAudioSourceLocation""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_002d6a60(void)

{
  int iVar1;
  
  if (DAT_026fd2b8 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026fd2a8 = 0x100000000;
      DAT_026fd2b0 = 1;
      ___cxa_guard_release();
    }
  }
  if (DAT_026fd2f0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026fd2c0 = "MDProjectAudioSourceLocation";
      _DAT_026fd2c8 = 2;
      DAT_026fd2cc = DAT_026fd2b0;
      _DAT_026fd2d0 = &DAT_026fd2a8;
      _DAT_026fd2d8 = &DAT_026fd290;
      _DAT_026fd2e0 = 0;
      uRam00000000026fd2e8 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e876a0();
  if (DAT_026fd280 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_026fd0a8 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026fcff8 = FUN_00d4fe50();
          _DAT_026fcfe0 = "MDProjectAudioSource";
          _DAT_026fcfe8 = 0x28;
          _DAT_026fcff0 = FUN_002d5b80;
          _DAT_026fd000 = 0;
          uRam00000000026fd008 = 0;
          _DAT_026fd010 = 0;
          _DAT_026fd088 = 0;
          uRam00000000026fd090 = 0;
          _DAT_026fd098 = 0;
          DAT_026fd09a = 1;
          _DAT_026fd018 = 0;
          uRam00000000026fd020 = 0;
          _DAT_026fd028 = 0;
          uRam00000000026fd030 = 0;
          _DAT_026fd038 = 0;
          uRam00000000026fd040 = 0;
          _DAT_026fd048 = 0;
          uRam00000000026fd050 = 0;
          _DAT_026fd058 = 0;
          uRam00000000026fd060 = 0;
          _DAT_026fd068 = 0;
          uRam00000000026fd070 = 0;
          _DAT_026fd078 = 0;
          uRam00000000026fd080 = 0;
          DAT_026fd0a3 = 0;
          _DAT_026fd09b = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_026fd240 = "_location";
      _DAT_026fd248 = &DAT_026fcfe0;
      _DAT_026fd250 = 0;
      _DAT_026fd258 = 0x6500;
      _DAT_026fd260 = "MDProjectAudioSourceLocation";
      _DAT_026fd268 = &DAT_026fd2c0;
      _DAT_026fd270 = 0;
      uRam00000000026fd278 = 0;
      ___cxa_guard_release();
    }
  }
  return &DAT_026fd240;
}



