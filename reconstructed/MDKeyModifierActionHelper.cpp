// Reconstructed implementation of MDKeyModifierActionHelper
// From MikeCore binary — reverse-engineered pseudocode

#include "MDKeyModifierActionHelper.h"

// ============================================================
// @0035c550 — 6103 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x0035dcb7) */
/* WARNING: Removing unreachable block (ram,0x0035daf5) */
/* WARNING: Removing unreachable block (ram,0x0035d9f8) */
/* WARNING: Removing unreachable block (ram,0x0035da05) */
/* WARNING: Removing unreachable block (ram,0x0035d633) */
/* WARNING: Removing unreachable block (ram,0x0035d63c) */
/* WARNING: Removing unreachable block (ram,0x0035d418) */
/* WARNING: Removing unreachable block (ram,0x0035d421) */
/* WARNING: Removing unreachable block (ram,0x0035d5cb) */
/* WARNING: Removing unreachable block (ram,0x0035d5d8) */
/* WARNING: Removing unreachable block (ram,0x0035d352) */
/* WARNING: Removing unreachable block (ram,0x0035d35e) */
/* WARNING: Removing unreachable block (ram,0x0035d49b) */
/* WARNING: Removing unreachable block (ram,0x0035d4a8) */
/* WARNING: Removing unreachable block (ram,0x0035dd6c) */
/* WARNING: Removing unreachable block (ram,0x0035dd79) */
/* WARNING: Removing unreachable block (ram,0x0035db11) */
/* WARNING: Removing unreachable block (ram,0x0035d247) */
/* WARNING: Removing unreachable block (ram,0x0035d270) */
/* WARNING: Removing unreachable block (ram,0x0035d249) */
/* WARNING: Removing unreachable block (ram,0x0035d272) */
/* WARNING: Removing unreachable block (ram,0x0035db70) */
/* WARNING: Removing unreachable block (ram,0x0035dba0) */
/* WARNING: Removing unreachable block (ram,0x0035db72) */
/* WARNING: Removing unreachable block (ram,0x0035dba2) */
/* WARNING: Removing unreachable block (ram,0x0035d3a7) */
/* WARNING: Removing unreachable block (ram,0x0035d3d0) */
/* WARNING: Removing unreachable block (ram,0x0035d3a9) */
/* WARNING: Removing unreachable block (ram,0x0035d3d2) */

void FUN_0035c550(undefined8 *param_1)

{
  int iVar1;
  code *pcVar2;
  char cVar3;
  char cVar4;
  void *pvVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong **pplVar9;
  pthread_key_t pVar10;
  uint uVar11;
  longlong **pplVar12;
  longlong lVar13;
  undefined8 *puVar14;
  longlong *plVar15;
  longlong *unaff_RDI;
  uint uVar16;
  float fVar17;
  double dVar18;
  double dVar19;
  undefined8 uVar20;
  float fVar21;
  longlong local_1d8;
  longlong *local_1d0;
  char local_1c8;
  longlong *local_1c0;
  char local_1b8;
  longlong *local_1b0;
  char local_1a8;
  longlong *local_1a0;
  char local_198;
  longlong *local_190;
  char local_188;
  undefined8 *local_180;
  char local_178;
  longlong local_170;
  char local_168;
  longlong local_160;
  char local_158;
  longlong *local_150;
  char local_148;
  longlong *local_140;
  char local_138;
  longlong *local_130;
  char local_128;
  longlong *local_120;
  char local_118;
  longlong *local_110;
  char local_108;
  longlong *local_100;
  char local_f8;
  longlong *local_f0;
  char local_e8;
  undefined8 *local_e0;
  undefined8 local_d8;
  longlong local_b8;
  char local_b0;
  longlong *local_a0;
  char local_98;
  int local_88;
  longlong *local_78;
  char local_70;
  undefined8 *local_68;
  char local_60;
  undefined8 *local_58;
  int local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  char local_40;
  
  puVar14 = local_68;
  unaff_RDI[0xb] = 0x3f00000000000000;
  *(undefined4 *)(unaff_RDI + 0xc) = 0;
  local_118 = 0;
  (**(code **)(unaff_RDI[4] + 0x10))();
  FUN_00d50b00();
  local_118 = '\x01';
  local_120 = unaff_RDI + 4;
  FUN_017a9390();
  if ((local_118 != '\0') && (local_120 != (longlong *)0x0)) {
    (**(code **)(*local_120 + 0x10))();
    FUN_00d50b20();
  }
  FUN_0038ff50();
  FUN_017a7c70();
  plVar15 = unaff_RDI + 0xe;
  puVar6 = (undefined8 *)unaff_RDI[0xe];
  if (puVar6 != local_68) {
    puVar7 = local_68;
    param_1 = puVar6;
    if (local_60 == '\0') {
      if (local_68 == (undefined8 *)0x0) {
        puVar7 = (undefined8 *)0x0;
      }
      else {
        FUN_00d50b00();
        param_1 = (undefined8 *)*plVar15;
      }
    }
    else {
      local_60 = '\0';
    }
    *plVar15 = (longlong)puVar7;
    puVar6 = puVar7;
    if (param_1 != (undefined8 *)0x0) {
      FUN_00d50b20();
      puVar6 = local_68;
    }
  }
  pVar10 = (pthread_key_t)param_1;
  if ((local_60 != '\0') && (puVar6 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  if (*plVar15 != 0) {
    pvVar5 = _pthread_getspecific(pVar10);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01313ad0();
    pvVar5 = _pthread_getspecific(pVar10);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012cb110();
    pvVar5 = _pthread_getspecific(pVar10);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    dVar18 = (double)FUN_012ebd30();
    pvVar5 = _pthread_getspecific(pVar10);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01313ad0();
    pvVar5 = _pthread_getspecific(pVar10);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012cb110();
    pvVar5 = _pthread_getspecific(pVar10);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    dVar19 = (double)FUN_012ebfe0();
    unaff_RDI[10] = (longlong)(dVar18 - dVar19);
    if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_b0 != '\0') && (local_b8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_98 != '\0') && (local_a0 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    dVar18 = (double)unaff_RDI[10];
    if (dVar18 < DAT_02394de0) {
      pvVar5 = _pthread_getspecific(pVar10);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01313ad0();
      pvVar5 = _pthread_getspecific(pVar10);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012caf10();
      if ((local_60 != '\0') && (local_68 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_98 != '\0') && (local_a0 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (local_68 != (undefined8 *)0x0) {
        pvVar5 = _pthread_getspecific(pVar10);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01313ad0();
        pvVar5 = _pthread_getspecific(pVar10);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012caf10();
        pvVar5 = _pthread_getspecific(pVar10);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar18 = (double)FUN_016c9950();
        pvVar5 = _pthread_getspecific(pVar10);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01313ad0();
        pvVar5 = _pthread_getspecific(pVar10);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012caf10();
        pvVar5 = _pthread_getspecific(pVar10);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar19 = (double)FUN_016c9870();
        unaff_RDI[10] = (longlong)(dVar18 - dVar19);
        if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_b0 != '\0') && (local_b8 != 0)) {
          FUN_00d50b20();
        }
        if ((local_60 != '\0') && (local_68 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_98 != '\0') && (local_a0 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      dVar18 = (double)unaff_RDI[10];
    }
    if (dVar18 < DAT_02394de0) {
      unaff_RDI[10] = 0x403e000000000000;
    }
  }
  FUN_0038ff70();
  local_1c8 = '\0';
  local_1d0 = (longlong *)0x0;
  FUN_017a9390();
  if ((local_1c8 != '\0') && (local_1d0 != (longlong *)0x0)) {
    (**(code **)(*local_1d0 + 0x10))();
    FUN_00d50b20();
  }
  if (*plVar15 == 0) {
    (**(code **)(*unaff_RDI + 0x378))();
    return;
  }
  fVar17 = *(float *)((longlong)unaff_RDI + 0x5c) + *(float *)(unaff_RDI + 0xb);
  *(float *)(unaff_RDI + 0xb) = fVar17;
  *(float *)(unaff_RDI + 0xc) = fVar17;
  pvVar5 = _pthread_getspecific(pVar10);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01313ad0();
  pvVar5 = _pthread_getspecific(pVar10);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  cVar3 = FUN_012ccb50();
  if ((local_60 != '\0') && (local_68 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar3 == '\0') {
    pvVar5 = _pthread_getspecific(pVar10);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01313ad0();
    pvVar5 = _pthread_getspecific(pVar10);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01f27fe0();
    (**(code **)(*local_78 + 0x760))();
    local_f8 = 0;
    if (local_98 == '\0') {
      if (local_a0 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_98 = '\0';
    }
    local_f8 = '\x01';
    local_100 = local_a0;
    local_1b8 = '\0';
    local_1c0 = (longlong *)0x0;
    local_1b0 = (longlong *)0x0;
    local_1a8 = '\0';
    pplVar12 = &local_1b0;
    FUN_012cc0c0(pplVar12,&local_1c0,0,0);
    pVar10 = (pthread_key_t)pplVar12;
    if ((local_1a8 != '\0') && (local_1b0 != (longlong *)0x0)) {
      (**(code **)(*local_1b0 + 0x10))();
      FUN_00d50b20();
    }
    if ((local_1b8 != '\0') && (local_1c0 != (longlong *)0x0)) {
      (**(code **)(*local_1c0 + 0x10))();
      FUN_00d50b20();
    }
    if ((local_f8 != '\0') && (local_100 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_98 != '\0') && (local_a0 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
  }
  pvVar5 = _pthread_getspecific(pVar10);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01313ad0();
  pvVar5 = _pthread_getspecific(pVar10);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  cVar3 = FUN_012ccb50();
  if ((local_60 != '\0') && (local_68 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar3 == '\0') {
    pvVar5 = _pthread_getspecific(pVar10);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01313ad0();
    pvVar5 = _pthread_getspecific(pVar10);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_017a6db0();
    local_e8 = 0;
    if (local_98 == '\0') {
      if (local_a0 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_98 = '\0';
    }
    local_e8 = '\x01';
    local_f0 = local_a0;
    local_198 = '\0';
    local_1a0 = (longlong *)0x0;
    local_190 = (longlong *)0x0;
    local_188 = '\0';
    pplVar12 = &local_190;
    FUN_012cc0c0(pplVar12,&local_1a0,0,0);
    pVar10 = (pthread_key_t)pplVar12;
    if ((local_188 != '\0') && (local_190 != (longlong *)0x0)) {
      (**(code **)(*local_190 + 0x10))();
      FUN_00d50b20();
    }
    if ((local_198 != '\0') && (local_1a0 != (longlong *)0x0)) {
      (**(code **)(*local_1a0 + 0x10))();
      FUN_00d50b20();
    }
    if ((local_e8 != '\0') && (local_f0 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_98 != '\0') && (local_a0 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
  }
  puVar6 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar6 = &DAT_02572358;
  pcVar2 = DAT_02572370;
  (*DAT_02572370)();
  puVar7 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar7 = &DAT_02572358;
  (*pcVar2)();
  pvVar5 = _pthread_getspecific(pVar10);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01313ad0();
  pvVar5 = _pthread_getspecific(pVar10);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012cb480();
  if (local_60 == '\0') {
    if (local_68 != (undefined8 *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_60 = '\0';
  }
  if ((local_98 != '\0') && (local_a0 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (local_68 != (undefined8 *)0x0) {
    local_60 = '\0';
    local_68 = (undefined8 *)0x0;
    local_58 = puVar14;
    local_50 = -1;
LAB_0035d243:
    do {
      plVar15 = local_a0;
      local_48 = 0;
      lVar8 = (longlong)local_50;
      local_50 = local_50 + 1;
      if (*(int *)((longlong)puVar14 + 0xc) <= local_50) goto LAB_0035d4b2;
      lVar13 = puVar14[2];
      local_68 = *(undefined8 **)(lVar13 + 8 + lVar8 * 8);
      pvVar5 = _pthread_getspecific((pthread_key_t)lVar13);
      pVar10 = (pthread_key_t)lVar13;
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      cVar3 = FUN_0124d450();
      if (cVar3 != '\0') {
        pvVar5 = _pthread_getspecific(pVar10);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0124c6e0();
        if (local_98 == '\0') {
          if (local_a0 == (longlong *)0x0) goto LAB_0035d243;
          FUN_00d50b00();
        }
        else if (local_a0 == (longlong *)0x0) goto LAB_0035d243;
        local_98 = '\0';
        local_a0 = (longlong *)0x0;
        local_88 = -1;
        while( true ) {
          lVar8 = (longlong)local_88;
          local_88 = local_88 + 1;
          if (*(int *)((longlong)plVar15 + 0xc) <= local_88) break;
          lVar13 = plVar15[2];
          local_a0 = *(longlong **)(lVar13 + 8 + lVar8 * 8);
          FUN_00d235a0();
          pvVar5 = _pthread_getspecific((pthread_key_t)lVar13);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          cVar3 = FUN_01397570();
          if (cVar3 != '\0') {
            FUN_00d235a0();
          }
          local_70 = '\0';
          local_78 = local_a0;
        }
        FUN_00115190();
        FUN_00d50b20();
      }
    } while( true );
  }
LAB_0035d4ce:
  fVar17 = DAT_02390124 - *(float *)(unaff_RDI + 0xb);
  fVar21 = DAT_02391090 * fVar17;
  iVar1 = *(int *)((longlong)puVar6 + 0xc);
  if (iVar1 == 0) {
    *(float *)(unaff_RDI + 0xb) = fVar21 + *(float *)(unaff_RDI + 0xb);
  }
  else {
    if (*(int *)((longlong)puVar7 + 0xc) == 0) {
      local_e0 = (undefined8 *)0x0;
      local_d8 = 0;
    }
    else {
      *(float *)((longlong)unaff_RDI + 0x5c) = fVar17 * DAT_02390120;
      local_108 = 0;
      (**(code **)(unaff_RDI[4] + 0x10))();
      uVar20 = FUN_00d50b00();
      local_108 = '\x01';
      local_178 = '\0';
      local_180 = puVar7;
      local_110 = unaff_RDI + 4;
      FUN_013206a0(uVar20,&local_180);
      local_e0 = local_68;
      puVar14 = local_68;
      if (local_68 == (undefined8 *)0x0) {
        local_d8 = 0;
      }
      else if (local_60 == '\0') {
        uVar20 = FUN_00d50b00();
        local_d8 = CONCAT71((int7)((ulonglong)uVar20 >> 8),1);
      }
      else {
        local_60 = '\0';
        local_d8 = CONCAT71((int7)((ulonglong)local_68 >> 8),1);
      }
      pVar10 = (pthread_key_t)puVar14;
      if ((local_178 != '\0') && (local_180 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_108 != '\0') && (local_110 != (longlong *)0x0)) {
        (**(code **)(*local_110 + 0x10))();
        FUN_00d50b20();
      }
    }
    pvVar5 = _pthread_getspecific(pVar10);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01313ad0();
    pvVar5 = _pthread_getspecific(pVar10);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012cb480();
    if (local_60 == '\0') {
      if (local_68 != (undefined8 *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_60 = '\0';
    }
    if ((local_98 != '\0') && (local_a0 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (local_68 != (undefined8 *)0x0) {
      if (0 < *(int *)((longlong)local_68 + 0xc)) {
        uVar16 = 0;
        do {
          plVar15 = *(longlong **)(local_68[2] + (ulonglong)uVar16 * 8);
          uVar11 = uVar16;
          pvVar5 = _pthread_getspecific(uVar16);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          cVar4 = FUN_0124d450();
          cVar3 = local_60;
          puVar14 = local_58;
          if (cVar4 != '\0') {
            pvVar5 = _pthread_getspecific(uVar11);
            if ((pvVar5 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
              plVar15 = (longlong *)plVar15[(ulonglong)(*(uint *)(lVar8 + 0x154) & 1) + 4];
            }
            (**(code **)(*plVar15 + 0x3a8))();
            lVar8 = DAT_02729550;
            if (DAT_02729550 != 0) {
              FUN_00d50b00();
            }
            local_1d8 = lVar8;
            FUN_00083ea0(2,&local_1d8);
            FUN_000b4da0();
            if (local_70 == '\0') {
              if (local_78 != (longlong *)0x0) {
                FUN_00d50b00();
              }
            }
            else {
              local_70 = '\0';
            }
            if ((local_40 != '\0') && (CONCAT44(uStack_44,local_48) != 0)) {
              FUN_00d50b20();
            }
            if (((char)local_50 != '\0') && (local_58 != (undefined8 *)0x0)) {
              FUN_00d50b20();
            }
            if (lVar8 != 0) {
              FUN_00d50b20();
            }
            if ((local_b0 != '\0') && (local_b8 != 0)) {
              FUN_00d50b20();
            }
            lVar8 = DAT_026f6f70;
            if (DAT_026f6f70 != 0) {
              FUN_00d50b00();
            }
            lVar13 = DAT_02703540;
            local_170 = lVar8;
            local_168 = '\x01';
            if (DAT_02703540 != 0) {
              FUN_00d50b00();
            }
            local_160 = lVar13;
            local_158 = '\x01';
            local_150 = local_78;
            local_148 = '\0';
            pplVar12 = &local_150;
            FUN_00d31230();
            pplVar9 = (longlong **)unaff_RDI[6];
            if (pplVar9 != (longlong **)&DAT_024c5048) {
              if (local_60 == '\0') {
                FUN_00d50b00();
                pplVar12 = (longlong **)unaff_RDI[6];
              }
              else {
                local_60 = '\0';
                pplVar12 = pplVar9;
              }
              pplVar9 = (longlong **)&DAT_024c5048;
              unaff_RDI[6] = (longlong)&DAT_024c5048;
              if (pplVar12 != (longlong **)0x0) {
                FUN_00d50b20();
                pplVar9 = (longlong **)&DAT_024c5048;
              }
            }
            pVar10 = (pthread_key_t)pplVar12;
            if ((local_60 != '\0') && (pplVar9 != (longlong **)0x0)) {
              FUN_00d50b20();
            }
            if ((local_148 != '\0') && (local_150 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_158 != '\0') && (local_160 != 0)) {
              FUN_00d50b20();
            }
            if ((local_168 != '\0') && (local_170 != 0)) {
              FUN_00d50b20();
            }
            pvVar5 = _pthread_getspecific(pVar10);
            if (pvVar5 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0124c6e0();
            if (local_60 == '\0') {
              FUN_00d50b00();
            }
            local_60 = '\0';
            cVar3 = local_60;
            local_58 = &DAT_024c5048;
            puVar14 = local_58;
            local_50 = -1;
            while( true ) {
              local_48 = 0;
              local_50 = local_50 + 1;
              if (DAT_024c5054 <= local_50) break;
              pvVar5 = _pthread_getspecific((pthread_key_t)DAT_024c5058);
              if (pvVar5 != (void *)0x0) {
                FUN_00e8b990();
              }
              local_138 = '\0';
              local_140 = (longlong *)0x0;
              local_130 = (longlong *)0x0;
              local_128 = '\0';
              FUN_01397bb0(0,&local_130);
              if ((local_128 != '\0') && (local_130 != (longlong *)0x0)) {
                (**(code **)(*local_130 + 0x10))();
                FUN_00d50b20();
              }
              if ((local_138 != '\0') && (local_140 != (longlong *)0x0)) {
                (**(code **)(*local_140 + 0x10))();
                FUN_00d50b20();
              }
              *(float *)(unaff_RDI + 0xb) = *(float *)(unaff_RDI + 0xb) + fVar21 / (float)iVar1;
            }
            FUN_00115190();
            FUN_00d50b20();
            local_58 = &DAT_024c5048;
            local_60 = '\0';
            if (local_78 != (longlong *)0x0) {
              FUN_00d50b20();
              cVar3 = local_60;
              puVar14 = local_58;
            }
          }
          local_58 = puVar14;
          local_60 = cVar3;
          uVar16 = uVar16 + 1;
        } while ((int)uVar16 < *(int *)((longlong)local_68 + 0xc));
      }
      FUN_00115e00();
      FUN_00d50b20();
    }
    if (*(int *)((longlong)puVar7 + 0xc) != 0) {
      *(float *)(unaff_RDI + 0xb) =
           *(float *)((longlong)unaff_RDI + 0x5c) + *(float *)(unaff_RDI + 0xb);
    }
    if (((char)local_d8 != '\0') && (local_e0 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
  }
  FUN_0038fef0();
  if (puVar7 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  return;
LAB_0035d4b2:
  FUN_00115e00();
  pVar10 = (pthread_key_t)puVar14;
  FUN_00d50b20();
  goto LAB_0035d4ce;
}




// ============================================================
// @0035a900 — 574 bytes
// str: ""MDKeyModifierActionHelper""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0035a900(void)

{
  int iVar1;
  undefined8 *unaff_RDI;
  
  FUN_00d4ff80();
  *unaff_RDI = &DAT_024fafc8;
  FUN_0035aba0();
  FUN_0035ae60();
  *(undefined4 *)(unaff_RDI + 4) = 0;
  if (DAT_027033c0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_02703310 = FUN_00d4fe50();
      _DAT_027032f8 = "MDKeyModifierActionHelper";
      _DAT_02703300 = 0x28;
      _DAT_02703308 = FUN_0035a8b0;
      _DAT_02703318 = 0;
      uRam0000000002703320 = 0;
      _DAT_02703328 = 0;
      _DAT_027033a0 = 0;
      uRam00000000027033a8 = 0;
      _DAT_027033b0 = 0;
      DAT_027033b2 = 1;
      _DAT_02703330 = 0;
      uRam0000000002703338 = 0;
      _DAT_02703340 = 0;
      uRam0000000002703348 = 0;
      _DAT_02703350 = 0;
      uRam0000000002703358 = 0;
      _DAT_02703360 = 0;
      uRam0000000002703368 = 0;
      _DAT_02703370 = 0;
      uRam0000000002703378 = 0;
      _DAT_02703380 = 0;
      uRam0000000002703388 = 0;
      _DAT_02703390 = 0;
      uRam0000000002703398 = 0;
      DAT_027033bb = 0;
      _DAT_027033b3 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_027033b3 == '\0') {
    FUN_0035b190();
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x24) = 0;
  if (DAT_027033c0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_02703310 = FUN_00d4fe50();
      _DAT_027032f8 = "MDKeyModifierActionHelper";
      _DAT_02703300 = 0x28;
      _DAT_02703308 = FUN_0035a8b0;
      _DAT_02703318 = 0;
      uRam0000000002703320 = 0;
      _DAT_02703328 = 0;
      _DAT_027033a0 = 0;
      uRam00000000027033a8 = 0;
      _DAT_027033b0 = 0;
      DAT_027033b2 = 1;
      _DAT_02703330 = 0;
      uRam0000000002703338 = 0;
      _DAT_02703340 = 0;
      uRam0000000002703348 = 0;
      _DAT_02703350 = 0;
      uRam0000000002703358 = 0;
      _DAT_02703360 = 0;
      uRam0000000002703368 = 0;
      _DAT_02703370 = 0;
      uRam0000000002703378 = 0;
      _DAT_02703380 = 0;
      uRam0000000002703388 = 0;
      _DAT_02703390 = 0;
      uRam0000000002703398 = 0;
      DAT_027033bb = 0;
      _DAT_027033b3 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_027033b3 == '\0') {
    FUN_0035b320();
    FUN_00e87980();
  }
  return;
}




// ============================================================
// @0035bbc0 — 541 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x0035bc85) */
/* WARNING: Removing unreachable block (ram,0x0035bdae) */
/* WARNING: Removing unreachable block (ram,0x0035bdb7) */
/* WARNING: Removing unreachable block (ram,0x0035bc49) */
/* WARNING: Removing unreachable block (ram,0x0035bc52) */
/* WARNING: Removing unreachable block (ram,0x0035bd7a) */
/* WARNING: Removing unreachable block (ram,0x0035bd83) */
/* WARNING: Removing unreachable block (ram,0x0035bc90) */
/* WARNING: Removing unreachable block (ram,0x0035bcb0) */
/* WARNING: Removing unreachable block (ram,0x0035bc92) */
/* WARNING: Removing unreachable block (ram,0x0035bcb2) */

void FUN_0035bbc0(pthread_key_t param_1)

{
  longlong lVar1;
  void *pvVar2;
  longlong lVar3;
  longlong *unaff_RDI;
  longlong local_60;
  char local_58;
  int local_48;
  
  lVar1 = local_60;
  if (*unaff_RDI == 0) {
    return;
  }
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e6160();
  if (local_60 != 0) {
    if (local_58 == '\0') {
      FUN_00d50b00();
    }
    local_58 = '\0';
    local_60 = 0;
    local_48 = -1;
    while( true ) {
      lVar3 = (longlong)local_48;
      local_48 = local_48 + 1;
      if (*(int *)(lVar1 + 0xc) <= local_48) break;
      local_60 = *(longlong *)(*(longlong *)(lVar1 + 0x10) + 8 + lVar3 * 8);
      FUN_0035bbc0();
    }
    lVar3 = lVar1;
    FUN_000be170();
    param_1 = (pthread_key_t)lVar3;
  }
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e5ae0();
  if (local_58 == '\0') {
    if (local_60 == 0) goto LAB_0035bdc4;
    FUN_00d50b00();
  }
  else if (local_60 == 0) goto LAB_0035bdc4;
  if (*(int *)(local_60 + 0xc) != 0) {
    FUN_00d21140();
  }
  FUN_00d50b20();
LAB_0035bdc4:
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  return;
}



