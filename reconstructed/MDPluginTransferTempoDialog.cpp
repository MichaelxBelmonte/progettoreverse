// Reconstructed implementation of MDPluginTransferTempoDialog
// From MikeCore binary — reverse-engineered pseudocode

#include "MDPluginTransferTempoDialog.h"

// ============================================================
// @00546e20 — 4912 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x005474c0) */
/* WARNING: Removing unreachable block (ram,0x005474cc) */

bool FUN_00546e20(undefined8 *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  void *pvVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  pthread_key_t pVar8;
  longlong lVar9;
  char cVar10;
  longlong unaff_RDI;
  undefined8 *puVar11;
  undefined4 uVar12;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 uVar13;
  undefined8 *local_200;
  char local_1f8;
  undefined8 *local_1f0;
  char local_1e8;
  undefined8 *local_1e0;
  char local_1d8;
  undefined8 *local_1d0;
  char local_1c8;
  longlong local_1c0;
  char local_1b8;
  undefined8 *local_1b0;
  char local_1a8;
  undefined8 *local_1a0;
  char local_198;
  undefined8 *local_190;
  char local_188;
  longlong local_180;
  char local_178;
  longlong local_170;
  char local_168;
  undefined8 *local_160;
  char local_158;
  undefined8 *local_150;
  char local_148;
  undefined8 local_140;
  longlong local_138;
  char local_130;
  undefined8 local_128;
  undefined8 local_120;
  longlong local_118;
  char local_110;
  longlong local_108;
  char local_100;
  longlong local_f8;
  char local_f0;
  longlong local_e8;
  char local_e0;
  longlong local_d8;
  char local_d0;
  undefined8 *local_c8;
  undefined8 *local_c0;
  undefined8 local_b8;
  undefined8 *local_b0;
  undefined8 local_a8;
  longlong local_a0;
  undefined8 *local_98;
  longlong *local_90;
  undefined8 local_88;
  undefined8 *local_80;
  longlong local_78;
  char local_70;
  undefined8 *local_68;
  char local_60 [8];
  undefined8 *local_58;
  undefined8 local_50;
  int local_48;
  longlong local_40;
  char local_38;
  
  lVar5 = *(longlong *)(unaff_RDI + 0xb8);
  if (lVar5 != 0) {
    FUN_00d50b00();
  }
  puVar11 = *(undefined8 **)(unaff_RDI + 0xe0);
  if (puVar11 == (undefined8 *)0x0) {
    if ((*(longlong *)(unaff_RDI + 0xa8) == 0) ||
       (iVar2 = (**(code **)(**(longlong **)(unaff_RDI + 0x88) + 0x920))(), iVar2 == 0)) {
      uVar3 = FUN_00548c70();
      puVar11 = local_68;
      if (local_68 == (undefined8 *)0x0) {
        puVar11 = (undefined8 *)0x0;
        local_a8 = 0;
      }
      else {
        local_a8 = CONCAT71((int7)((ulonglong)uVar3 >> 8),1);
        if (local_60[0] == '\0') {
          FUN_00d50b00();
        }
      }
    }
    else {
      local_130 = 0;
      lVar9 = *(longlong *)(unaff_RDI + 0xa8);
      uVar3 = extraout_XMM0_Qa;
      if (lVar9 != 0) {
        uVar3 = FUN_00d50b00();
      }
      local_130 = '\x01';
      local_138 = lVar9;
      uVar3 = FUN_0052f720(uVar3,&local_138);
      puVar11 = local_68;
      if (local_68 == (undefined8 *)0x0) {
        puVar11 = (undefined8 *)0x0;
        local_a8 = 0;
      }
      else if (local_60[0] == '\0') {
        uVar3 = FUN_00d50b00();
        local_a8 = CONCAT71((int7)((ulonglong)uVar3 >> 8),1);
        if ((local_60[0] != '\0') && (local_68 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_60[0] = '\0';
        local_a8 = CONCAT71((int7)((ulonglong)uVar3 >> 8),1);
      }
      if ((local_130 != '\0') && (local_138 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    uVar3 = FUN_00d50b00();
    local_a8 = CONCAT71((int7)((ulonglong)uVar3 >> 8),1);
  }
  if (puVar11 == (undefined8 *)0x0) goto LAB_0054810a;
  local_c0 = puVar11;
  local_a0 = lVar5;
  FUN_01f27fe0();
  FUN_00521db0();
  local_118 = local_78;
  local_110 = 0;
  if (local_70 == '\0') {
    if (local_78 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_70 = '\0';
  }
  local_110 = '\x01';
  FUN_000c4290();
  puVar7 = local_68;
  if (local_60[0] == '\0') {
    if (((local_68 != (undefined8 *)0x0) && (FUN_00d50b00(), local_60[0] != '\0')) &&
       (local_68 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_60[0] = '\0';
  }
  if ((local_110 != '\0') && (local_118 != 0)) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  local_c8 = puVar7;
  FUN_00521db0();
  FUN_00757c60();
  local_80 = local_68;
  if (local_60[0] == '\0') {
    if (((local_68 != (undefined8 *)0x0) && (FUN_00d50b00(), local_60[0] != '\0')) &&
       (local_68 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_60[0] = '\0';
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  pvVar4 = _pthread_getspecific((pthread_key_t)param_1);
  if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
    param_1 = local_80;
  }
  uVar3 = FUN_012caf10();
  pVar8 = (pthread_key_t)param_1;
  local_98 = local_68;
  if (local_60[0] == '\0') {
    if (local_68 != (undefined8 *)0x0) {
      FUN_00d50b00();
      if ((local_60[0] != '\0') && (local_68 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_00547100;
    }
LAB_0054715f:
    local_120 = 0;
    local_88 = CONCAT71((int7)((ulonglong)uVar3 >> 8),1);
    local_140 = 0;
    local_128 = 0;
    local_b8 = 0;
    local_90 = (longlong *)0x0;
    plVar6 = local_90;
  }
  else {
    if (local_68 == (undefined8 *)0x0) goto LAB_0054715f;
LAB_00547100:
    uVar3 = (**(code **)(**(longlong **)(unaff_RDI + 0xa0) + 0x920))();
    iVar2 = (int)uVar3;
    if (iVar2 == 0) {
      local_128 = 0;
      local_120 = 0;
    }
    else {
      pvVar4 = _pthread_getspecific(pVar8);
      if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
        pVar8 = (pthread_key_t)local_98;
      }
      (**(code **)(**(longlong **)(unaff_RDI + 0xb0) + 0x408))();
      local_128 = FUN_016cb850();
      pvVar4 = _pthread_getspecific(pVar8);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      (**(code **)(**(longlong **)(unaff_RDI + 0xb0) + 0x418))();
      uVar3 = FUN_016cb850();
      local_120 = extraout_XMM0_Qa_00;
    }
    puVar7 = local_c8;
    local_140 = CONCAT71((int7)((ulonglong)uVar3 >> 8),iVar2 != 0);
    local_88 = 0;
    local_b8 = 0;
    local_90 = (longlong *)0x0;
    plVar6 = (longlong *)FUN_00e8fc40();
    local_88 = 0;
    local_b8 = 0;
    local_90 = (longlong *)0x0;
    FUN_00022d50();
    local_88 = 0;
    local_b8 = 0;
    param_1 = (undefined8 *)0x0;
    local_90 = (longlong *)0x0;
    uVar3 = (**(code **)(*plVar6 + 0x18))();
    local_b8 = CONCAT71((int7)((ulonglong)uVar3 >> 8),1);
    local_88 = 0;
    if (puVar7 != (undefined8 *)0x0) {
      local_60[0] = '\0';
      local_68 = (undefined8 *)0x0;
      local_58 = puVar7;
      local_50 = 0xffffffff;
      local_48 = 0;
      local_50._4_4_ = 0;
      while( true ) {
        if (local_50._4_4_ != 0) {
          if (local_50._4_4_ < 1) {
            iVar2 = -local_50._4_4_;
          }
          else {
            iVar2 = (int)local_50 - local_50._4_4_;
            local_50 = CONCAT44(local_50._4_4_,iVar2);
            FUN_00d23690();
            local_48 = local_48 + local_50._4_4_;
            iVar2 = 0;
          }
          local_50 = CONCAT44(iVar2,(int)local_50);
        }
        lVar5 = (longlong)(int)local_50;
        iVar2 = (int)local_50 + 1;
        local_50 = CONCAT44(local_50._4_4_,iVar2);
        if (*(int *)((longlong)local_58 + 0xc) <= iVar2) break;
        lVar9 = local_58[2];
        local_68 = *(undefined8 **)(lVar9 + 8 + lVar5 * 8);
        FUN_0053a8d0();
        pvVar4 = _pthread_getspecific((pthread_key_t)lVar9);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar3 = FUN_00550980();
        local_108 = local_40;
        local_100 = 0;
        if (local_38 == '\0') {
          if (local_40 != 0) {
            uVar3 = FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        local_100 = '\x01';
        local_200 = local_68;
        local_1f8 = '\0';
        FUN_00549130(uVar3,&local_200);
        if ((local_1f8 != '\0') && (local_200 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_100 != '\0') && (local_108 != 0)) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if ((local_70 != '\0') && (local_78 != 0)) {
          FUN_00d50b20();
        }
      }
      param_1 = local_58;
      FUN_0015ee90();
      local_88 = 0;
      puVar11 = local_c0;
    }
  }
  local_90 = plVar6;
  iVar2 = (**(code **)(**(longlong **)(unaff_RDI + 0xa0) + 0x920))();
  if (iVar2 == 0) {
    pvVar4 = _pthread_getspecific((pthread_key_t)param_1);
    if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
      param_1 = local_80;
    }
    lVar5 = local_a0;
    local_198 = '\0';
    local_1a0 = puVar11;
    FUN_012caf90();
    if ((local_198 != '\0') && (local_1a0 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
    if (*(longlong *)(lVar5 + 0x308) == 0) {
      puVar7 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      pVar8 = 0x2572358;
      *puVar7 = &DAT_02572358;
      (*DAT_02572370)();
      local_b0 = puVar7;
      pvVar4 = _pthread_getspecific(pVar8);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012cb110();
      pvVar4 = _pthread_getspecific(pVar8);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012e7210();
      puVar1 = local_68;
      if (local_60[0] == '\0') {
        if (((local_68 != (undefined8 *)0x0) && (FUN_00d50b00(), local_60[0] != '\0')) &&
           (local_68 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_60[0] = '\0';
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if (puVar1 != (undefined8 *)0x0) {
        local_60[0] = '\0';
        local_68 = (undefined8 *)0x0;
        local_58 = puVar1;
        local_50 = 0xffffffff;
        local_48 = 0;
        local_50._4_4_ = 0;
        while( true ) {
          if (local_50._4_4_ != 0) {
            if (local_50._4_4_ < 1) {
              iVar2 = -local_50._4_4_;
            }
            else {
              iVar2 = (int)local_50 - local_50._4_4_;
              local_50 = CONCAT44(local_50._4_4_,iVar2);
              FUN_00d23690();
              local_48 = local_48 + local_50._4_4_;
              iVar2 = 0;
            }
            local_50 = CONCAT44(iVar2,(int)local_50);
          }
          lVar5 = (longlong)(int)local_50;
          iVar2 = (int)local_50 + 1;
          local_50 = CONCAT44(local_50._4_4_,iVar2);
          if (*(int *)((longlong)local_58 + 0xc) <= iVar2) break;
          local_68 = *(undefined8 **)(local_58[2] + 8 + lVar5 * 8);
          pvVar4 = _pthread_getspecific((pthread_key_t)local_58[2]);
          if (pvVar4 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01264240();
          lVar5 = local_78;
          if (local_70 == '\0') {
            if (local_78 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_70 = '\0';
          }
          local_40 = lVar5;
          local_38 = '\0';
          FUN_00d235a0();
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
          if (lVar5 != 0) {
            FUN_00d50b20();
          }
          if ((local_70 != '\0') && (local_78 != 0)) {
            FUN_00d50b20();
          }
        }
        param_1 = local_58;
        FUN_001159b0();
        FUN_00d50b20();
        puVar11 = local_c0;
        puVar7 = local_b0;
        if (local_b0 == (undefined8 *)0x0) goto LAB_00547d91;
      }
      local_60[0] = '\0';
      local_68 = (undefined8 *)0x0;
      local_50 = 0xffffffff;
      local_48 = 0;
      local_50._4_4_ = 0;
      local_58 = puVar7;
      while( true ) {
        if (local_50._4_4_ != 0) {
          if (local_50._4_4_ < 1) {
            iVar2 = -local_50._4_4_;
          }
          else {
            iVar2 = (int)local_50 - local_50._4_4_;
            local_50 = CONCAT44(local_50._4_4_,iVar2);
            FUN_00d23690();
            local_48 = local_48 + local_50._4_4_;
            iVar2 = 0;
          }
          local_50 = CONCAT44(iVar2,(int)local_50);
        }
        lVar5 = (longlong)(int)local_50;
        iVar2 = (int)local_50 + 1;
        local_50 = CONCAT44(local_50._4_4_,iVar2);
        if (*(int *)((longlong)local_58 + 0xc) <= iVar2) break;
        lVar9 = local_58[2];
        local_68 = *(undefined8 **)(lVar9 + 8 + lVar5 * 8);
        pvVar4 = _pthread_getspecific((pthread_key_t)lVar9);
        pVar8 = (pthread_key_t)lVar9;
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_188 = '\0';
        local_190 = puVar11;
        FUN_016cbba0();
        lVar5 = local_40;
        local_f0 = 0;
        if (local_38 == '\0') {
          if (local_40 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        local_f0 = '\x01';
        local_f8 = lVar5;
        FUN_0132d960();
        if ((local_f0 != '\0') && (local_f8 != 0)) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if ((local_188 != '\0') && (local_190 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
        FUN_00d403d0();
        lVar5 = DAT_027ebe30;
        if (DAT_027ebe30 != 0) {
          FUN_00d50b00();
        }
        local_180 = lVar5;
        local_178 = '\x01';
        pvVar4 = _pthread_getspecific(pVar8);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0132d610();
        local_e8 = local_78;
        local_e0 = 0;
        if (local_70 == '\0') {
          if (local_78 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_70 = '\0';
        }
        local_e0 = '\x01';
        local_168 = '\0';
        local_170 = 0;
        FUN_00d40470(&local_170,&local_e8,3,3);
        puVar11 = local_c0;
        if ((local_168 != '\0') && (local_170 != 0)) {
          FUN_00d50b20();
        }
        if ((local_e0 != '\0') && (local_e8 != 0)) {
          FUN_00d50b20();
        }
        if ((local_70 != '\0') && (local_78 != 0)) {
          FUN_00d50b20();
        }
        if ((local_178 != '\0') && (local_180 != 0)) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
      }
      param_1 = local_58;
      FUN_00115190();
      FUN_00d50b20();
    }
  }
  else {
    if ((char)local_88 == '\0') {
      pvVar4 = _pthread_getspecific((pthread_key_t)param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012cb110();
      pvVar4 = _pthread_getspecific((pthread_key_t)param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012e7210();
      puVar7 = local_68;
      if (local_60[0] == '\0') {
        if (((local_68 != (undefined8 *)0x0) && (FUN_00d50b00(), local_60[0] != '\0')) &&
           (local_68 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_60[0] = '\0';
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if (puVar7 != (undefined8 *)0x0) {
        local_1f0 = puVar7;
        local_1e8 = '\0';
        local_1e0 = local_98;
        local_1d8 = '\0';
        local_1c8 = '\0';
        local_1d0 = puVar11;
        param_1 = (undefined8 *)FUN_00e7bdb0();
        local_1b8 = '\0';
        local_1c0 = 0;
        FUN_012910e0(DAT_0238fee8,&local_1d0,&local_1c0);
        if ((local_1b8 != '\0') && (local_1c0 != 0)) {
          FUN_00d50b20();
        }
        if ((local_1c8 != '\0') && (local_1d0 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_1d8 != '\0') && (local_1e0 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_1e8 != '\0') && (local_1f0 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
        FUN_00d50b20();
      }
    }
    pvVar4 = _pthread_getspecific((pthread_key_t)param_1);
    if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
      param_1 = local_80;
    }
    local_1a8 = '\0';
    local_1b0 = puVar11;
    FUN_012cae50();
    if ((local_1a8 != '\0') && (local_1b0 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
  }
LAB_00547d91:
  puVar7 = local_c8;
  if ((char)local_140 != '\0') {
    plVar6 = *(longlong **)(unaff_RDI + 0xb0);
    pvVar4 = _pthread_getspecific((pthread_key_t)param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_b0 = (undefined8 *)FUN_016cb790(local_128,0);
    pvVar4 = _pthread_getspecific((pthread_key_t)param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar12 = FUN_016cb790(local_120,0);
    (**(code **)(*plVar6 + 0x428))(local_b0,uVar12);
  }
  if (local_90 == (longlong *)0x0) {
LAB_005480c5:
    if ((char)local_88 == '\0') {
      FUN_00d50b20();
    }
  }
  else {
    iVar2 = (**(code **)(**(longlong **)(unaff_RDI + 0xa0) + 0x920))();
    cVar10 = (char)local_88;
    if (iVar2 != 0) {
      FUN_00c9fe20();
      puVar1 = local_68;
      uVar3 = CONCAT71((int7)((ulonglong)param_1 >> 8),local_60[0]);
      plVar6 = (longlong *)local_60;
      if (local_60[0] == '\0') {
        plVar6 = &local_40;
      }
      local_40 = CONCAT71(local_40._1_7_,local_60[0]);
      *(char *)plVar6 = '\0';
      if ((local_60[0] != '\0') && (local_68 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      if ((char)local_40 == '\0') {
        if (puVar1 != (undefined8 *)0x0) {
          FUN_00d50b00();
          goto LAB_00547ede;
        }
      }
      else if (puVar1 != (undefined8 *)0x0) {
LAB_00547ede:
        local_60[0] = '\0';
        local_68 = (undefined8 *)0x0;
        local_58 = puVar1;
        local_48 = 0;
        local_50 = 0;
        if (0 < *(int *)((longlong)puVar1 + 0xc)) {
          lVar5 = 0;
          do {
            puVar11 = *(undefined8 **)(puVar1[2] + lVar5 * 8);
            local_68 = puVar11;
            FUN_0053a8d0();
            pvVar4 = _pthread_getspecific((pthread_key_t)uVar3);
            if (pvVar4 != (void *)0x0) {
              FUN_00e8b990();
            }
            local_158 = '\0';
            local_160 = puVar11;
            uVar13 = FUN_005491e0();
            local_d8 = local_78;
            puVar11 = local_c0;
            local_d0 = 0;
            if (local_70 == '\0') {
              if (local_78 != 0) {
                uVar13 = FUN_00d50b00();
              }
            }
            else {
              local_70 = '\0';
            }
            local_d0 = '\x01';
            local_150 = puVar11;
            local_148 = '\0';
            FUN_00551070(uVar13,&local_150);
            cVar10 = (char)local_88;
            if ((local_148 != '\0') && (local_150 != (undefined8 *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_d0 != '\0') && (local_d8 != 0)) {
              FUN_00d50b20();
            }
            if ((local_70 != '\0') && (local_78 != 0)) {
              FUN_00d50b20();
            }
            if ((local_158 != '\0') && (local_160 != (undefined8 *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_38 != '\0') && (local_40 != 0)) {
              FUN_00d50b20();
            }
            lVar5 = lVar5 + 1;
            local_50 = CONCAT44(local_50._4_4_,(int)lVar5);
          } while ((int)lVar5 < *(int *)((longlong)puVar1 + 0xc));
        }
        FUN_0015ee90();
        FUN_00d50b20();
        puVar11 = local_c0;
        puVar7 = local_c8;
      }
    }
    if (cVar10 == '\0') {
      FUN_00d50b20();
      goto LAB_005480c5;
    }
  }
  lVar5 = local_a0;
  if (local_80 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  if (puVar7 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  if ((char)local_a8 != '\0') {
    FUN_00d50b20();
  }
LAB_0054810a:
  if (lVar5 != 0) {
    FUN_00d50b20();
  }
  return puVar11 != (undefined8 *)0x0;
}




// ============================================================
// @00546290 — 1758 bytes
// ============================================================

void FUN_00546290(void)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  longlong unaff_RDI;
  undefined8 extraout_XMM0_Qa;
  longlong local_118;
  char local_110;
  longlong local_108;
  char local_100;
  longlong *local_f8;
  char local_f0;
  longlong *local_e8;
  char local_e0;
  longlong local_d8;
  char local_d0;
  longlong local_c8;
  char local_c0;
  longlong local_b8;
  char local_b0;
  longlong local_a8;
  char local_a0;
  longlong local_98;
  char local_90;
  longlong local_88;
  char local_80;
  longlong local_78;
  char local_70;
  longlong *local_68;
  char local_60;
  longlong *local_58;
  char local_50;
  longlong *local_48;
  longlong *local_40;
  char local_38;
  
  if (*(longlong *)(unaff_RDI + 0xb0) == 0) {
    return;
  }
  if (*(longlong *)(unaff_RDI + 0xb8) == 0) {
    return;
  }
  FUN_00d50b00();
  if (*(longlong *)(unaff_RDI + 0xa8) != 0) goto LAB_005462db;
  FUN_00536640();
  FUN_0052f680();
  plVar1 = *(longlong **)(unaff_RDI + 0xa8);
  plVar6 = plVar1;
  if (plVar1 != local_40) {
    if (local_38 == '\0') {
      if (local_40 == (longlong *)0x0) {
        plVar6 = (longlong *)0x0;
        goto LAB_0054659d;
      }
      FUN_00d50b00();
      plVar1 = *(longlong **)(unaff_RDI + 0xa8);
      *(longlong **)(unaff_RDI + 0xa8) = local_40;
      plVar6 = local_40;
    }
    else {
      local_38 = '\0';
      plVar6 = local_40;
LAB_0054659d:
      *(longlong **)(unaff_RDI + 0xa8) = plVar6;
    }
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b20();
      plVar6 = local_40;
    }
  }
  if ((local_38 != '\0') && (plVar6 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
LAB_005462db:
  iVar5 = (**(code **)(**(longlong **)(unaff_RDI + 0x88) + 0x920))();
  if (iVar5 == 0) {
    local_48 = (longlong *)FUN_00536680();
    FUN_00544e30();
    plVar1 = *(longlong **)(unaff_RDI + 0x80);
    if (0.0 < (double)local_48) {
      lVar2 = *(longlong *)(unaff_RDI + 0xb8);
      if (lVar2 != 0) {
        FUN_00d50b00();
      }
      if ((*(longlong *)(unaff_RDI + 0xe0) == 0) && (*(longlong *)(unaff_RDI + 0xa8) == 0)) {
        (**(code **)(**(longlong **)(unaff_RDI + 0x88) + 0x920))();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
    }
    (**(code **)(*plVar1 + 0x998))();
  }
  else {
    iVar5 = (**(code **)(**(longlong **)(unaff_RDI + 0x88) + 0x920))();
    lVar2 = DAT_0270cbb8;
    if (iVar5 == 1) {
      if (DAT_0270cbb8 != 0) {
        FUN_00d50b00();
      }
      lVar3 = DAT_0270cbd0;
      if (DAT_0270cbd0 != 0) {
        FUN_00d50b00();
      }
      local_118 = lVar3;
      local_110 = '\x01';
      local_108 = 0;
      local_100 = '\0';
      FUN_00d31230(&local_108,&local_118);
      plVar1 = local_40;
      if (local_38 == '\0') {
        if (((local_40 != (longlong *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
           (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_38 = '\0';
      }
      if ((local_100 != '\0') && (local_108 != 0)) {
        FUN_00d50b20();
      }
      if ((local_110 != '\0') && (local_118 != 0)) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      local_48 = plVar1;
      (**(code **)(**(longlong **)(unaff_RDI + 0x90) + 0x960))();
      local_f8 = plVar1;
      local_f0 = '\0';
      cVar4 = (**(code **)(*local_40 + 0x50))();
      if ((local_f0 != '\0') && (local_f8 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (cVar4 == '\0') {
        local_e8 = plVar1;
        local_e0 = '\0';
        (**(code **)(**(longlong **)(unaff_RDI + 0x90) + 0x958))();
        if ((local_e0 != '\0') && (local_e8 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      if ((*(longlong *)(unaff_RDI + 0xa8) == 0) ||
         (cVar4 = (**(code **)(**(longlong **)(unaff_RDI + 0xb0) + 0x3a0))(), cVar4 != '\0')) {
        cVar4 = (**(code **)(**(longlong **)(unaff_RDI + 0xb0) + 0x3a0))();
        lVar2 = DAT_0270cbb8;
        plVar1 = *(longlong **)(unaff_RDI + 0x98);
        if (cVar4 == '\0') {
          if (DAT_0270cbb8 != 0) {
            FUN_00d50b00();
          }
          lVar3 = DAT_0270cbe8;
          local_a8 = lVar2;
          local_a0 = '\x01';
          if (DAT_0270cbe8 != 0) {
            FUN_00d50b00();
          }
          local_98 = lVar3;
          local_90 = '\x01';
          local_88 = 0;
          local_80 = '\0';
          FUN_00d31230(&local_88,&local_98);
          local_58 = local_40;
          local_50 = 0;
          if (local_38 == '\0') {
            if (local_40 != (longlong *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_38 = '\0';
          }
          local_50 = '\x01';
          (**(code **)(*plVar1 + 0x958))();
          if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_80 != '\0') && (local_88 != 0)) {
            FUN_00d50b20();
          }
          if ((local_90 != '\0') && (local_98 != 0)) {
            FUN_00d50b20();
          }
          if ((local_a0 != '\0') && (local_a8 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          if (DAT_0270cbb8 != 0) {
            FUN_00d50b00();
          }
          lVar3 = DAT_0270cbe0;
          local_d8 = lVar2;
          local_d0 = '\x01';
          if (DAT_0270cbe0 != 0) {
            FUN_00d50b00();
          }
          local_c8 = lVar3;
          local_c0 = '\x01';
          local_b8 = 0;
          local_b0 = '\0';
          FUN_00d31230(&local_b8,&local_c8);
          local_68 = local_40;
          local_60 = 0;
          if (local_38 == '\0') {
            if (local_40 != (longlong *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_38 = '\0';
          }
          local_60 = '\x01';
          (**(code **)(*plVar1 + 0x958))();
          if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_b0 != '\0') && (local_b8 != 0)) {
            FUN_00d50b20();
          }
          if ((local_c0 != '\0') && (local_c8 != 0)) {
            FUN_00d50b20();
          }
          if ((local_d0 != '\0') && (local_d8 != 0)) {
            FUN_00d50b20();
          }
        }
      }
      else {
        FUN_01522f00(extraout_XMM0_Qa,&local_78);
        FUN_005457b0(local_40,local_78);
      }
      plVar1 = *(longlong **)(unaff_RDI + 0x80);
      lVar2 = *(longlong *)(unaff_RDI + 0xb8);
      if (lVar2 != 0) {
        FUN_00d50b00();
      }
      if ((*(longlong *)(unaff_RDI + 0xe0) == 0) && (*(longlong *)(unaff_RDI + 0xa8) == 0)) {
        (**(code **)(**(longlong **)(unaff_RDI + 0x88) + 0x920))();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      (**(code **)(*plVar1 + 0x998))();
      if (local_48 != (longlong *)0x0) {
        FUN_00d50b20();
      }
    }
  }
  FUN_00d50b20();
  return;
}




// ============================================================
// @005457b0 — 1596 bytes
// str: ""%@ - %@""
// ============================================================

void FUN_005457b0(double param_1,double param_2)

{
  longlong lVar1;
  longlong lVar2;
  double dVar3;
  char cVar4;
  undefined7 uVar5;
  longlong *plVar6;
  longlong unaff_RDI;
  longlong *plVar7;
  longlong *plVar8;
  ulonglong unaff_R13;
  char cVar9;
  undefined7 uVar11;
  ulonglong uVar10;
  byte bVar12;
  bool bVar13;
  undefined8 uVar14;
  longlong local_140;
  longlong local_138;
  char local_130;
  longlong local_128;
  char local_120;
  longlong local_118;
  char local_110;
  longlong *local_108;
  char local_100;
  longlong *local_f8;
  char local_f0;
  longlong local_e8;
  char local_e0;
  longlong local_d8;
  char local_d0;
  longlong *local_c8;
  char local_c0;
  longlong *local_b8;
  char local_b0;
  longlong *local_a8;
  char local_a0;
  longlong local_98;
  char local_90;
  double local_88;
  longlong *local_80;
  char local_78;
  longlong *local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  double local_40;
  
  lVar1 = DAT_0270cbb8;
  local_88 = param_1;
  local_40 = param_2;
  if (DAT_0270cbb8 != 0) {
    FUN_00d50b00();
  }
  lVar2 = DAT_0270cbd0;
  local_138 = lVar1;
  local_130 = '\x01';
  if (DAT_0270cbd0 != 0) {
    FUN_00d50b00();
  }
  local_128 = lVar2;
  local_120 = '\x01';
  local_118 = 0;
  local_110 = '\0';
  FUN_00d31230(&local_118,&local_128);
  plVar7 = local_70;
  if (local_70 == (longlong *)0x0) {
    bVar12 = 1;
    plVar7 = (longlong *)0x0;
    unaff_R13 = 0;
  }
  else {
    if (local_68 == '\0') {
      FUN_00d50b00();
      unaff_R13 = CONCAT71((int7)(unaff_R13 >> 8),1);
      bVar12 = 0;
      if ((local_68 == '\0') || (bVar12 = 0, local_70 == (longlong *)0x0)) goto LAB_0054588d;
      FUN_00d50b20();
    }
    else {
      local_68 = '\0';
    }
    unaff_R13 = CONCAT71((int7)(unaff_R13 >> 8),1);
    bVar12 = 0;
  }
LAB_0054588d:
  if ((local_110 != '\0') && (local_118 != 0)) {
    FUN_00d50b20();
  }
  if ((local_120 != '\0') && (local_128 != 0)) {
    FUN_00d50b20();
  }
  if ((local_130 != '\0') && (local_138 != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(**(longlong **)(unaff_RDI + 0x90) + 0x960))();
  local_100 = '\0';
  local_108 = plVar7;
  cVar4 = (**(code **)(*local_70 + 0x50))();
  if ((local_100 != '\0') && (local_108 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar4 == '\0') {
    local_f0 = '\0';
    local_f8 = plVar7;
    (**(code **)(**(longlong **)(unaff_RDI + 0x90) + 0x958))();
    if ((local_f0 != '\0') && (local_f8 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  (**(code **)(**(longlong **)(unaff_RDI + 200) + 0x378))((float)local_88);
  (**(code **)(**(longlong **)(unaff_RDI + 200) + 0x378))((float)local_40);
  local_140 = local_98;
  uVar5 = 0;
  uVar14 = FUN_00083ea0(2,&local_140);
  FUN_00d8cb40(uVar14,&local_70);
  plVar8 = local_80;
  uVar11 = (undefined7)((ulonglong)unaff_RDI >> 8);
  if (local_80 == plVar7) {
    plVar8 = plVar7;
    if ((bool)(bVar12 & plVar7 != (longlong *)0x0)) {
      if (local_78 != '\0') goto LAB_00545a55;
      uVar10 = CONCAT71(uVar11,1);
      FUN_00d50b00();
    }
    else {
      uVar10 = unaff_R13 & 0xffffffff;
    }
LAB_00545aa2:
    if ((local_78 == '\0') || (local_80 == (longlong *)0x0)) {
      local_40 = (double)(uVar10 & 0xffffffff);
    }
    else {
      FUN_00d50b20();
      local_40 = (double)(uVar10 & 0xffffffff);
    }
  }
  else {
    if (local_78 == '\0') {
      if (local_80 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      uVar10 = CONCAT71(uVar11,1);
      if (((byte)unaff_R13 & plVar7 != (longlong *)0x0) == 1) {
        FUN_00d50b20();
      }
      goto LAB_00545aa2;
    }
    bVar13 = plVar7 != (longlong *)0x0;
    uVar5 = (undefined7)((unaff_R13 & 0xffffffff) >> 8);
    plVar7 = plVar8;
    if (((byte)(unaff_R13 & 0xffffffff) & bVar13) == 1) {
      FUN_00d50b20();
    }
LAB_00545a55:
    local_78 = '\0';
    local_40 = (double)CONCAT71(uVar5,1);
    plVar8 = plVar7;
  }
  local_70 = (longlong *)&DAT_0253d630;
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  local_70 = &DAT_024c5048;
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if ((local_90 != '\0') && (local_98 != 0)) {
    FUN_00d50b20();
  }
  if ((local_a0 != '\0') && (local_a8 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  lVar1 = DAT_0270cbb0;
  if (DAT_0270cbb0 != 0) {
    FUN_00d50b00();
  }
  local_98 = lVar1;
  local_a8 = plVar8;
  FUN_00083ea0(2,&local_98);
  uVar14 = FUN_000b4da0();
  plVar7 = local_80;
  if (local_80 == (longlong *)0x0) {
    local_88 = (double)CONCAT44(local_88._4_4_,(int)CONCAT71((int7)((ulonglong)uVar14 >> 8),1));
  }
  else {
    if (local_78 == '\0') {
      FUN_00d50b00();
      local_88 = (double)((ulonglong)local_88 & 0xffffffff00000000);
      if ((local_78 == '\0') || (local_80 == (longlong *)0x0)) goto LAB_00545bc5;
      FUN_00d50b20();
    }
    else {
      local_78 = '\0';
    }
    local_88 = (double)((ulonglong)local_88 & 0xffffffff00000000);
  }
LAB_00545bc5:
  local_70 = (longlong *)&DAT_0253d630;
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  local_70 = &DAT_024c5048;
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  dVar3 = local_40;
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = DAT_0270cbb8;
  if (DAT_0270cbb8 != 0) {
    FUN_00d50b00();
  }
  lVar2 = DAT_0270cbd8;
  local_e8 = lVar1;
  local_e0 = '\x01';
  if (DAT_0270cbd8 != 0) {
    FUN_00d50b00();
  }
  local_d8 = lVar2;
  local_d0 = '\x01';
  local_c8 = plVar7;
  local_c0 = '\0';
  FUN_00d31230(&local_c8,&local_d8);
  plVar6 = local_70;
  cVar4 = SUB81(dVar3,0);
  if (local_70 == plVar8) {
    plVar6 = plVar8;
    cVar9 = cVar4;
    if ((cVar4 == '\0') && (local_70 != (longlong *)0x0)) {
      if (local_68 == '\0') {
        FUN_00d50b00();
        goto LAB_00545ce0;
      }
      goto LAB_00545caf;
    }
  }
  else {
    if (local_68 != '\0') {
      if ((cVar4 != '\0') && (plVar8 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
LAB_00545caf:
      local_68 = '\0';
      cVar9 = '\x01';
      goto LAB_00545d22;
    }
    if (local_70 != (longlong *)0x0) {
      FUN_00d50b00();
    }
    cVar9 = '\x01';
    if ((cVar4 != '\0') && (plVar8 != (longlong *)0x0)) {
      FUN_00d50b20();
      plVar8 = plVar6;
LAB_00545ce0:
      plVar6 = plVar8;
      cVar9 = '\x01';
    }
  }
  if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
LAB_00545d22:
  if ((local_c0 != '\0') && (local_c8 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_d0 != '\0') && (local_d8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_e0 != '\0') && (local_e8 != 0)) {
    FUN_00d50b20();
  }
  local_b0 = '\0';
  local_b8 = plVar6;
  (**(code **)(**(longlong **)(unaff_RDI + 0x98) + 0x958))();
  if ((local_b0 != '\0') && (local_b8 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (SUB81(local_88,0) == '\0' && plVar7 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((cVar9 != '\0') && (plVar6 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @00544340 — 1479 bytes
// str: ""handleToggleAutoStretch""
// str: ""handleImportTempo""
// str: ""MDPluginTransferTempoDialog""
// str: ""handleTransferRecordedTempo""
// str: ""handleCancelRecordedTempo""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00544340(void)

{
  int iVar1;
  
  if (DAT_0280a248 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_027052b8 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_02705208 = FUN_00015ff0();
          _DAT_027051f0 = "MDPluginTransferTempoDialog";
          _DAT_027051f8 = 0xe8;
          _DAT_02705200 = FUN_003ae0b0;
          _DAT_02705210 = 0;
          uRam0000000002705218 = 0;
          _DAT_02705220 = 0;
          _DAT_02705298 = 0;
          uRam00000000027052a0 = 0;
          _DAT_027052a8 = 0;
          DAT_027052aa = 1;
          _DAT_02705228 = 0;
          uRam0000000002705230 = 0;
          _DAT_02705238 = 0;
          uRam0000000002705240 = 0;
          _DAT_02705248 = 0;
          uRam0000000002705250 = 0;
          _DAT_02705258 = 0;
          uRam0000000002705260 = 0;
          _DAT_02705268 = 0;
          uRam0000000002705270 = 0;
          _DAT_02705278 = 0;
          uRam0000000002705280 = 0;
          _DAT_02705288 = 0;
          uRam0000000002705290 = 0;
          DAT_027052b3 = 0;
          _DAT_027052ab = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_0280a208 = "handleTransferRecordedTempo";
      _DAT_0280a210 = &DAT_027051f0;
      _DAT_0280a218 = 0;
      _DAT_0280a220 = &DAT_0270cbf8;
      _DAT_0280a228 = FUN_0054a610;
      _DAT_0280a230 = FUN_005492b0;
      _DAT_0280a238 = 0;
      uRam000000000280a240 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_0280a290 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_027052b8 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_02705208 = FUN_00015ff0();
          _DAT_027051f0 = "MDPluginTransferTempoDialog";
          _DAT_027051f8 = 0xe8;
          _DAT_02705200 = FUN_003ae0b0;
          _DAT_02705210 = 0;
          uRam0000000002705218 = 0;
          _DAT_02705220 = 0;
          _DAT_02705298 = 0;
          uRam00000000027052a0 = 0;
          _DAT_027052a8 = 0;
          DAT_027052aa = 1;
          _DAT_02705228 = 0;
          uRam0000000002705230 = 0;
          _DAT_02705238 = 0;
          uRam0000000002705240 = 0;
          _DAT_02705248 = 0;
          uRam0000000002705250 = 0;
          _DAT_02705258 = 0;
          uRam0000000002705260 = 0;
          _DAT_02705268 = 0;
          uRam0000000002705270 = 0;
          _DAT_02705278 = 0;
          uRam0000000002705280 = 0;
          _DAT_02705288 = 0;
          uRam0000000002705290 = 0;
          DAT_027052b3 = 0;
          _DAT_027052ab = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_0280a250 = "handleCancelRecordedTempo";
      _DAT_0280a258 = &DAT_027051f0;
      _DAT_0280a260 = 0;
      _DAT_0280a268 = &DAT_0270cbf8;
      _DAT_0280a270 = FUN_0054a610;
      _DAT_0280a278 = FUN_00549290;
      _DAT_0280a280 = 0;
      uRam000000000280a288 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_0280a2d8 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_027052b8 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_02705208 = FUN_00015ff0();
          _DAT_027051f0 = "MDPluginTransferTempoDialog";
          _DAT_027051f8 = 0xe8;
          _DAT_02705200 = FUN_003ae0b0;
          _DAT_02705210 = 0;
          uRam0000000002705218 = 0;
          _DAT_02705220 = 0;
          _DAT_02705298 = 0;
          uRam00000000027052a0 = 0;
          _DAT_027052a8 = 0;
          DAT_027052aa = 1;
          _DAT_02705228 = 0;
          uRam0000000002705230 = 0;
          _DAT_02705238 = 0;
          uRam0000000002705240 = 0;
          _DAT_02705248 = 0;
          uRam0000000002705250 = 0;
          _DAT_02705258 = 0;
          uRam0000000002705260 = 0;
          _DAT_02705268 = 0;
          uRam0000000002705270 = 0;
          _DAT_02705278 = 0;
          uRam0000000002705280 = 0;
          _DAT_02705288 = 0;
          uRam0000000002705290 = 0;
          DAT_027052b3 = 0;
          _DAT_027052ab = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_0280a298 = "handleImportTempo";
      _DAT_0280a2a0 = &DAT_027051f0;
      _DAT_0280a2a8 = 0;
      _DAT_0280a2b0 = &DAT_0270cbf8;
      _DAT_0280a2b8 = FUN_0054a610;
      _DAT_0280a2c0 = FUN_0054a3a0;
      _DAT_0280a2c8 = 0;
      uRam000000000280a2d0 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_0280a320 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_027052b8 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_02705208 = FUN_00015ff0();
          _DAT_027051f0 = "MDPluginTransferTempoDialog";
          _DAT_027051f8 = 0xe8;
          _DAT_02705200 = FUN_003ae0b0;
          _DAT_02705210 = 0;
          uRam0000000002705218 = 0;
          _DAT_02705220 = 0;
          _DAT_02705298 = 0;
          uRam00000000027052a0 = 0;
          _DAT_027052a8 = 0;
          DAT_027052aa = 1;
          _DAT_02705228 = 0;
          uRam0000000002705230 = 0;
          _DAT_02705238 = 0;
          uRam0000000002705240 = 0;
          _DAT_02705248 = 0;
          uRam0000000002705250 = 0;
          _DAT_02705258 = 0;
          uRam0000000002705260 = 0;
          _DAT_02705268 = 0;
          uRam0000000002705270 = 0;
          _DAT_02705278 = 0;
          uRam0000000002705280 = 0;
          _DAT_02705288 = 0;
          uRam0000000002705290 = 0;
          DAT_027052b3 = 0;
          _DAT_027052ab = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_0280a2e0 = "handleToggleAutoStretch";
      _DAT_0280a2e8 = &DAT_027051f0;
      _DAT_0280a2f0 = 0;
      _DAT_0280a2f8 = &DAT_0270cbf8;
      _DAT_0280a300 = FUN_0054a610;
      _DAT_0280a308 = FUN_0054a450;
      _DAT_0280a310 = 0;
      uRam000000000280a318 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  return;
}




// ============================================================
// @005495c0 — 1384 bytes
// ============================================================

void FUN_005495c0(pthread_key_t param_1)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  char cVar4;
  void *pvVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong unaff_RDI;
  undefined8 uVar8;
  longlong local_a8;
  char local_a0;
  longlong local_98;
  char local_90;
  longlong *local_88;
  char local_80;
  longlong local_78;
  char local_70;
  longlong local_68;
  char local_60;
  longlong local_58;
  char local_50;
  longlong local_48;
  int local_40;
  undefined8 local_3c;
  
  lVar1 = *(longlong *)(unaff_RDI + 0xb8);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  FUN_0052f4f0();
  lVar2 = *(longlong *)(unaff_RDI + 0xe0);
  lVar7 = lVar2;
  if (lVar2 == local_58) goto LAB_0054965d;
  if (local_50 == '\0') {
    if (local_58 == 0) {
      lVar7 = 0;
      goto LAB_0054960f;
    }
    FUN_00d50b00();
    lVar2 = *(longlong *)(unaff_RDI + 0xe0);
    *(longlong *)(unaff_RDI + 0xe0) = local_58;
    lVar7 = local_58;
  }
  else {
    local_50 = '\0';
    lVar7 = local_58;
LAB_0054960f:
    *(longlong *)(unaff_RDI + 0xe0) = lVar7;
  }
  param_1 = (pthread_key_t)lVar2;
  if (lVar2 != 0) {
    FUN_00d50b20();
    lVar7 = local_58;
  }
LAB_0054965d:
  if ((local_50 != '\0') && (lVar7 != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(**(longlong **)(unaff_RDI + 0x88) + 0x998))();
  if (*(longlong *)(unaff_RDI + 0xe0) == 0) {
    cVar4 = FUN_005364c0();
    pcVar3 = *(code **)(**(longlong **)(unaff_RDI + 0x88) + 0x918);
    if (cVar4 == '\0') {
      (*pcVar3)();
    }
    else {
      (*pcVar3)();
    }
  }
  else {
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    cVar4 = FUN_016c2730();
    if (cVar4 == '\0') {
      pvVar5 = _pthread_getspecific(param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar8 = FUN_00e7bdb0();
      uVar6 = FUN_00e7bdb0();
      FUN_016d1840(uVar8,&local_68,uVar6);
      FUN_005457b0(local_58,local_68);
      (**(code **)(**(longlong **)(unaff_RDI + 0x88) + 0x918))();
      (**(code **)(**(longlong **)(unaff_RDI + 0x98) + 0x998))();
      (**(code **)(**(longlong **)(unaff_RDI + 0x90) + 0x998))();
    }
    else {
      pvVar5 = _pthread_getspecific(param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar8 = FUN_00e7bdb0();
      FUN_016c9410(uVar8,0);
      FUN_00544e30();
      (**(code **)(**(longlong **)(unaff_RDI + 0x88) + 0x918))();
      (**(code **)(**(longlong **)(unaff_RDI + 0x90) + 0x998))();
      (**(code **)(**(longlong **)(unaff_RDI + 0x98) + 0x998))();
    }
  }
  (**(code **)(**(longlong **)(unaff_RDI + 0x80) + 0x998))();
  cVar4 = FUN_00549d80();
  pcVar3 = *(code **)(**(longlong **)(unaff_RDI + 0xa0) + 0x918);
  if (cVar4 == '\0') {
    (*pcVar3)();
  }
  else {
    (*pcVar3)();
  }
  if (*(longlong *)(unaff_RDI + 0xe0) == 0) {
    do {
      FUN_00536640();
      FUN_0052f680();
      lVar2 = local_58;
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
    } while (lVar2 != 0);
    FUN_00536630();
    FUN_01f27fe0();
    local_80 = 0;
    (**(code **)(*(longlong *)(unaff_RDI + 0x70) + 0x10))();
    uVar8 = FUN_00d50b00();
    local_80 = '\x01';
    local_a8 = 0;
    local_a0 = '\0';
    local_88 = (longlong *)(unaff_RDI + 0x70);
    FUN_01f47190(uVar8,&local_a8);
    if ((local_a0 != '\0') && (local_a8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_80 != '\0') && (local_88 != (longlong *)0x0)) {
      (**(code **)(*local_88 + 0x10))();
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    FUN_01f27fe0();
    uVar8 = FUN_00521db0();
    local_78 = local_98;
    local_70 = 0;
    if (local_90 == '\0') {
      if (local_98 != 0) {
        uVar8 = FUN_00d50b00();
      }
    }
    else {
      local_90 = '\0';
    }
    local_70 = '\x01';
    FUN_000c4290(uVar8,&local_78);
    lVar2 = local_58;
    if (local_50 == '\0') {
      if (((local_58 != 0) && (FUN_00d50b00(), local_50 != '\0')) && (local_58 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_50 = '\0';
    }
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if (lVar2 != 0) {
      local_50 = '\0';
      local_58 = 0;
      local_48 = lVar2;
      local_3c = 0;
      for (lVar7 = 0; local_40 = (int)lVar7, local_40 < *(int *)(lVar2 + 0xc); lVar7 = lVar7 + 1) {
        local_58 = *(longlong *)(*(longlong *)(lVar2 + 0x10) + lVar7 * 8);
        FUN_0053abf0();
      }
      FUN_0015ee90();
      FUN_00d50b20();
    }
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @00544e30 — 1368 bytes
// ============================================================

void FUN_00544e30(double param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  char cVar6;
  longlong *plVar7;
  longlong unaff_RDI;
  undefined4 uVar8;
  undefined8 unaff_R13;
  byte bVar9;
  bool bVar10;
  longlong local_138;
  longlong local_130;
  char local_128;
  longlong local_120;
  char local_118;
  longlong local_110;
  char local_108;
  longlong local_100;
  char local_f8;
  longlong *local_f0;
  char local_e8;
  longlong *local_e0;
  char local_d8;
  longlong local_d0;
  char local_c8;
  longlong local_c0;
  char local_b8;
  longlong local_b0;
  char local_a8;
  longlong *local_a0;
  char local_98;
  longlong *local_90;
  char local_88;
  longlong local_80;
  char local_78;
  longlong local_70;
  undefined4 local_64;
  longlong *local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  (**(code **)(**(longlong **)(unaff_RDI + 200) + 0x378))((float)param_1);
  lVar2 = DAT_0270cbb0;
  if (DAT_0270cbb0 != 0) {
    FUN_00d50b00();
  }
  local_138 = lVar2;
  FUN_00083ea0(2,&local_138);
  FUN_000b4da0();
  lVar4 = local_80;
  if (local_80 == 0) {
    uVar8 = (undefined4)CONCAT71((int7)((ulonglong)unaff_R13 >> 8),1);
  }
  else {
    if (local_78 == '\0') {
      FUN_00d50b00();
      uVar8 = 0;
      if ((local_78 == '\0') || (local_80 == 0)) goto LAB_00544ef0;
      FUN_00d50b20();
    }
    else {
      local_78 = '\0';
    }
    uVar8 = 0;
  }
LAB_00544ef0:
  local_60 = (longlong *)&DAT_0253d630;
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  local_60 = &DAT_024c5048;
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if ((local_128 != '\0') && (local_130 != 0)) {
    FUN_00d50b20();
  }
  lVar2 = DAT_0270cbb8;
  local_70 = lVar4;
  local_64 = uVar8;
  if (DAT_0270cbb8 != 0) {
    FUN_00d50b00();
  }
  lVar3 = DAT_0270cbc0;
  local_120 = lVar2;
  local_118 = '\x01';
  if (DAT_0270cbc0 != 0) {
    FUN_00d50b00();
  }
  local_110 = lVar3;
  local_108 = '\x01';
  local_100 = lVar4;
  local_f8 = '\0';
  FUN_00d31230(&local_100,&local_110);
  plVar7 = local_60;
  if (local_60 == (longlong *)0x0) {
    bVar9 = 1;
    bVar1 = false;
  }
  else {
    if (local_58 == '\0') {
      FUN_00d50b00();
      bVar1 = true;
      bVar9 = 0;
      if ((local_58 == '\0') || (bVar9 = 0, local_60 == (longlong *)0x0)) goto LAB_00545012;
      FUN_00d50b20();
    }
    else {
      local_58 = '\0';
    }
    bVar1 = true;
    bVar9 = 0;
  }
LAB_00545012:
  if ((local_f8 != '\0') && (local_100 != 0)) {
    FUN_00d50b20();
  }
  if ((local_108 != '\0') && (local_110 != 0)) {
    FUN_00d50b20();
  }
  if ((local_118 != '\0') && (local_120 != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(**(longlong **)(unaff_RDI + 0x90) + 0x960))();
  local_f0 = plVar7;
  local_e8 = '\0';
  cVar6 = (**(code **)(*local_60 + 0x50))();
  if ((local_e8 != '\0') && (local_f0 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar6 == '\0') {
    local_e0 = plVar7;
    local_d8 = '\0';
    (**(code **)(**(longlong **)(unaff_RDI + 0x90) + 0x958))();
    if ((local_d8 != '\0') && (local_e0 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  lVar2 = DAT_0270cbb8;
  if (DAT_0270cbb8 != 0) {
    FUN_00d50b00();
  }
  lVar4 = DAT_0270cbc8;
  local_d0 = lVar2;
  local_c8 = '\x01';
  if (DAT_0270cbc8 != 0) {
    FUN_00d50b00();
  }
  local_c0 = lVar4;
  local_b8 = '\x01';
  local_b0 = 0;
  local_a8 = '\0';
  FUN_00d31230(&local_b0,&local_c0);
  plVar5 = local_60;
  if (plVar7 == local_60) {
    if (!(bool)(bVar9 & plVar7 != (longlong *)0x0)) goto joined_r0x00545217;
    if (local_58 == '\0') {
      FUN_00d50b00();
      goto LAB_00545202;
    }
  }
  else {
    if (local_58 == '\0') {
      if (local_60 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      bVar10 = plVar7 != (longlong *)0x0;
      plVar7 = plVar5;
      if ((bool)(bVar1 & bVar10)) {
        FUN_00d50b20();
      }
LAB_00545202:
      bVar1 = true;
joined_r0x00545217:
      if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      goto joined_r0x0054536a;
    }
    bVar10 = plVar7 != (longlong *)0x0;
    plVar7 = plVar5;
    if ((bool)(bVar1 & bVar10)) {
      FUN_00d50b20();
    }
  }
  local_58 = '\0';
  bVar1 = true;
joined_r0x0054536a:
  if ((local_a8 != '\0') && (local_b0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_b8 != '\0') && (local_c0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_c8 != '\0') && (local_d0 != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(**(longlong **)(unaff_RDI + 0x98) + 0x960))();
  local_98 = '\0';
  local_a0 = plVar7;
  cVar6 = (**(code **)(*local_60 + 0x50))();
  if ((local_98 != '\0') && (local_a0 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar6 == '\0') {
    local_88 = '\0';
    local_90 = plVar7;
    (**(code **)(**(longlong **)(unaff_RDI + 0x98) + 0x958))();
    if ((local_88 != '\0') && (local_90 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  if ((char)local_64 == '\0' && local_70 != 0) {
    FUN_00d50b20();
  }
  if ((bVar1) && (plVar7 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @00549e60 — 824 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x0054a18c) */
/* WARNING: Removing unreachable block (ram,0x0054a199) */

void FUN_00549e60(undefined8 param_1)

{
  longlong lVar1;
  int iVar2;
  int unaff_ESI;
  longlong unaff_RDI;
  longlong local_a0;
  char local_98;
  longlong local_80;
  char local_78;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  lVar1 = *(longlong *)(unaff_RDI + 0xb8);
  if ((lVar1 != 0) && (FUN_00d50b00(), unaff_ESI == 1)) {
    FUN_00536630();
    do {
      FUN_00536640();
      FUN_0052f680();
      if ((local_78 != '\0') && (local_80 != 0)) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
    } while (local_80 != 0);
  }
  if (*(longlong *)(unaff_RDI + 0xe0) == 0) {
    FUN_01f27fe0();
    (**(code **)(*(longlong *)(unaff_RDI + 0x70) + 0x10))();
    FUN_00d50b00();
    FUN_01f474f0();
    if ((longlong *)(unaff_RDI + 0x70) != (longlong *)0x0) {
      (**(code **)(*(longlong *)(unaff_RDI + 0x70) + 0x10))();
      FUN_00d50b20();
    }
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
  }
  if (*(longlong *)(unaff_RDI + 0xb0) != 0) {
    *(undefined8 *)(unaff_RDI + 0xb0) = 0;
    FUN_00d50b20();
  }
  if (*(longlong *)(unaff_RDI + 0xb8) != 0) {
    *(undefined8 *)(unaff_RDI + 0xb8) = 0;
    FUN_00d50b20();
  }
  if (*(longlong *)(unaff_RDI + 0xc0) != 0) {
    *(undefined8 *)(unaff_RDI + 0xc0) = 0;
    FUN_00d50b20();
  }
  FUN_01f27fe0();
  FUN_00521db0();
  local_38 = 0;
  if (local_98 == '\0') {
    if (local_a0 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_98 = '\0';
  }
  local_38 = '\x01';
  local_40 = local_a0;
  FUN_000c4290(param_1,&local_40);
  if ((local_78 == '\0') && (local_80 != 0)) {
    FUN_00d50b00();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if (local_80 != 0) {
    for (iVar2 = 0; iVar2 < *(int *)(local_80 + 0xc); iVar2 = iVar2 + 1) {
      FUN_0051b610();
      FUN_0053abf0();
    }
    FUN_0015ee90();
    FUN_00d50b20();
  }
  if (*(longlong *)(unaff_RDI + 0xe0) != 0) {
    *(undefined8 *)(unaff_RDI + 0xe0) = 0;
    FUN_00d50b20();
  }
  if (*(longlong *)(unaff_RDI + 0xa8) != 0) {
    *(undefined8 *)(unaff_RDI + 0xa8) = 0;
    FUN_00d50b20();
  }
  FUN_01e57e90();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @00548c70 — 780 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x00548efd) */
/* WARNING: Removing unreachable block (ram,0x00548f06) */
/* WARNING: Removing unreachable block (ram,0x00548e34) */
/* WARNING: Removing unreachable block (ram,0x00548e3d) */
/* WARNING: Removing unreachable block (ram,0x00548dd9) */
/* WARNING: Removing unreachable block (ram,0x00548de6) */
/* WARNING: Removing unreachable block (ram,0x00548e9e) */
/* WARNING: Removing unreachable block (ram,0x00548ea7) */

longlong * FUN_00548c70(pthread_key_t param_1)

{
  longlong lVar1;
  int iVar2;
  void *pvVar3;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  longlong local_80;
  char local_78;
  longlong local_70;
  char local_68;
  longlong local_40;
  char local_38;
  
  lVar1 = *(longlong *)(unaff_RSI + 0xb8);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  FUN_00521db0();
  FUN_00757c60();
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012caf10();
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  if (local_40 == 0) {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
  }
  else {
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    iVar2 = FUN_016c2ea0();
    if (iVar2 == 1) {
      pvVar3 = _pthread_getspecific(param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      param_1 = 0;
      FUN_016ca8d0(0,0,0);
      if ((local_38 == '\0') && (local_40 != 0)) {
        FUN_00d50b00();
      }
      FUN_0123fef0();
      FUN_0123ff00();
      if (local_40 != 0) {
        FUN_00d50b20();
      }
    }
    FUN_00536680();
    FUN_016c0b50();
    if ((local_38 == '\0') && (local_40 != 0)) {
      FUN_00d50b00();
    }
    if (iVar2 != 1) {
      pvVar3 = _pthread_getspecific(param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_016c2ef0();
    }
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_016c1150();
    *unaff_RDI = local_40;
    *(undefined1 *)(unaff_RDI + 1) = 1;
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  return unaff_RDI;
}



