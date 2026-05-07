// Reconstructed implementation of MUAdvancedTempoDetectionDialog
// From MikeCore binary — reverse-engineered pseudocode

#include "MUAdvancedTempoDetectionDialog.h"

// ============================================================
// @01c54470 — 10423 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01c54acb) */
/* WARNING: Removing unreachable block (ram,0x01c54ad7) */
/* WARNING: Removing unreachable block (ram,0x01c54cd3) */
/* WARNING: Removing unreachable block (ram,0x01c54cdf) */
/* WARNING: Removing unreachable block (ram,0x01c56d67) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01c54470(pthread_key_t param_1,undefined8 param_2)

{
  bool bVar1;
  code *pcVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  void *pvVar8;
  longlong lVar9;
  longlong lVar10;
  int extraout_var;
  int extraout_var_00;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  int extraout_var_01;
  int extraout_var_02;
  int extraout_var_03;
  undefined7 uVar14;
  pthread_key_t pVar15;
  undefined4 *puVar16;
  longlong *plVar17;
  longlong *plVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  undefined1 auVar21 [8];
  pthread_key_t pVar22;
  uint uVar23;
  longlong *plVar24;
  bool bVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float extraout_XMM0_Db;
  float extraout_XMM0_Db_00;
  undefined8 uVar29;
  double dVar30;
  undefined8 uVar31;
  double dVar32;
  undefined8 extraout_XMM0_Qb;
  float extraout_XMM0_Dd;
  float extraout_XMM0_Dd_00;
  undefined8 extraout_XMM0_Qb_00;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined8 extraout_XMM0_Qb_01;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined8 in_XMM1_Qb;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  undefined8 local_350;
  int iStack_34c;
  undefined8 local_348;
  int iStack_344;
  longlong local_318;
  char local_310;
  longlong *local_308;
  char local_300;
  longlong local_2f8;
  char local_2f0;
  longlong *local_2e8;
  char local_2e0;
  longlong local_2d8;
  char local_2d0;
  longlong local_2c8;
  char local_2c0;
  longlong local_2b8;
  char local_2b0;
  longlong local_2a8;
  char local_2a0;
  longlong local_298;
  char local_290;
  longlong local_288;
  char local_280;
  undefined8 *local_278;
  char local_270;
  longlong local_268;
  char local_260;
  uint local_254;
  undefined8 local_250;
  undefined8 local_248;
  undefined8 local_240;
  longlong local_238;
  char local_230;
  longlong local_228;
  char local_220;
  longlong local_218;
  char local_210;
  longlong local_208;
  char local_200;
  undefined8 *local_1f8;
  char local_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined1 local_1c8 [8];
  float fStack_1c0;
  float fStack_1bc;
  uint local_1ac;
  longlong local_1a8;
  char local_1a0;
  longlong local_198;
  char local_190;
  longlong local_188;
  char local_180;
  longlong local_178;
  char local_170;
  longlong local_168;
  longlong local_160;
  longlong *local_158;
  longlong local_150;
  undefined1 local_148 [8];
  undefined8 uStack_140;
  uint local_12c;
  undefined8 local_128;
  undefined8 local_120;
  longlong local_110;
  longlong local_108;
  ulonglong local_100;
  undefined1 local_e8;
  int iStack_dc;
  undefined8 local_c8;
  char local_c0;
  undefined4 local_9c;
  double local_98;
  undefined8 uStack_90;
  longlong *local_88;
  uint local_7c;
  undefined8 local_78;
  ulonglong local_70;
  longlong *local_68;
  char local_60;
  uint local_58;
  byte local_51;
  undefined8 local_50;
  char local_48;
  byte local_39;
  longlong *local_38;
  
  local_98 = (double)param_2;
  uStack_90 = in_XMM1_Qb;
  puVar6 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar6 = &DAT_02572358;
  pcVar2 = DAT_02572370;
  (*DAT_02572370)();
  puVar7 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar7 = &DAT_02572358;
  (*pcVar2)();
  bVar25 = DAT_028b6ff8 == (undefined8 *)0x0;
  DAT_028b6ff8 = puVar7;
  if (((bVar25) || (FUN_00d50b20(), DAT_028b6ff8 != (undefined8 *)0x0)) && (DAT_028b7000 == '\0')) {
    DAT_028b7000 = '\x01';
    FUN_00e8cb90();
  }
  plVar24 = (longlong *)unaff_RDI[0x31];
  if (plVar24 != (longlong *)0x0) {
    FUN_00d50b00();
  }
  local_38 = plVar24;
  FUN_01d48370();
  (**(code **)(*(longlong *)*unaff_RSI + 0x390))();
  dVar30 = local_98;
  local_148 = (undefined1  [8])FUN_00d05530();
  uStack_140 = extraout_XMM0_Qb;
  lVar9 = unaff_RDI[0x3d];
  local_1e8 = dVar30;
  uStack_1e0 = uStack_90;
  if (lVar9 == 0) {
    (**(code **)(*unaff_RDI + 0x640))();
    (**(code **)(*local_68 + 0x3a0))();
    local_108 = (longlong)local_50;
    if (local_50 != (longlong *)0x0) {
      lVar9 = local_108;
      if (local_48 == '\0') {
        FUN_00d50b00();
        if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_48 = '\0';
      }
    }
    local_108 = lVar9;
    if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    FUN_00d50b00();
    local_108 = lVar9;
  }
  lVar9 = unaff_RDI[0x3e];
  if (lVar9 == 0) {
    (**(code **)(*unaff_RDI + 0x640))();
    (**(code **)(*local_68 + 0x3a8))();
    local_110 = (longlong)local_50;
    if (local_50 != (longlong *)0x0) {
      lVar9 = local_110;
      if (local_48 == '\0') {
        FUN_00d50b00();
        if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_48 = '\0';
      }
    }
    local_110 = lVar9;
    if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    FUN_00d50b00();
    local_110 = lVar9;
  }
  FUN_01cfbee0();
  local_160 = (longlong)local_50;
  if ((((local_48 == '\0') && (local_50 != (longlong *)0x0)) && (FUN_00d50b00(), local_48 != '\0'))
     && (local_50 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01cfbee0();
  local_150 = (longlong)local_50;
  if (((local_48 == '\0') && (local_50 != (longlong *)0x0)) &&
     ((FUN_00d50b00(), local_48 != '\0' && (local_50 != (longlong *)0x0)))) {
    FUN_00d50b20();
  }
  fVar26 = 0.0;
  fVar37 = 0.0;
  FUN_01cfbee0();
  local_168 = (longlong)local_50;
  if (((local_48 == '\0') && (local_50 != (longlong *)0x0)) &&
     ((FUN_00d50b00(), local_48 != '\0' && (local_50 != (longlong *)0x0)))) {
    FUN_00d50b20();
  }
  local_9c = 0xffffffff;
  pvVar8 = _pthread_getspecific(param_1);
  if ((pvVar8 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
    param_1 = (pthread_key_t)local_38;
  }
  FUN_016d8300();
  lVar9 = (longlong)local_50;
  if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (lVar9 == 0) {
    bVar25 = false;
    _local_1c8 = ZEXT816(0);
    local_7c = 0;
  }
  else {
    pvVar8 = _pthread_getspecific(param_1);
    if ((pvVar8 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
      param_1 = (pthread_key_t)local_38;
    }
    FUN_016d8ab0();
    lVar10 = (longlong)local_50;
    if ((((local_48 == '\0') && (local_50 != (longlong *)0x0)) && (FUN_00d50b00(), local_48 != '\0')
        ) && (local_50 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_016bf2e0();
    FUN_016bf310();
    pvVar8 = _pthread_getspecific(param_1);
    if ((pvVar8 != (void *)0x0) && (lVar11 = FUN_00e8b990(), lVar11 != 0)) {
      param_1 = (pthread_key_t)local_38;
    }
    FUN_017049c0();
    pvVar8 = _pthread_getspecific(param_1);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    pvVar8 = _pthread_getspecific(param_1);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_016d8300();
    local_1a0 = 0;
    if (local_c0 == '\0') {
      if (local_c8 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_c0 = '\0';
    }
    local_1a0 = '\x01';
    local_1a8 = local_c8;
    puVar16 = &local_9c;
    FUN_01900ad0(puVar16,&local_1a8);
    lVar11 = (longlong)local_50;
    param_1 = (pthread_key_t)puVar16;
    if (local_48 == '\0') {
      if (((local_50 != (longlong *)0x0) && (FUN_00d50b00(), local_48 != '\0')) &&
         (local_50 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_48 = '\0';
    }
    if ((local_1a0 != '\0') && (local_1a8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_c0 != '\0') && (local_c8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (lVar11 == 0) {
      pvVar8 = _pthread_getspecific(param_1);
      if ((pvVar8 != (void *)0x0) && (lVar11 = FUN_00e8b990(), lVar11 != 0)) {
        param_1 = (pthread_key_t)local_38;
      }
      FUN_016d8300();
      lVar11 = (longlong)local_50;
      if ((((local_48 == '\0') && (local_50 != (longlong *)0x0)) &&
          (FUN_00d50b00(), local_48 != '\0')) && (local_50 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      pvVar8 = _pthread_getspecific(param_1);
      if ((pvVar8 != (void *)0x0) && (lVar12 = FUN_00e8b990(), lVar12 != 0)) {
        param_1 = (pthread_key_t)local_38;
      }
      local_98 = (double)FUN_016d2000();
      FUN_01e3f820();
      local_1c8._0_4_ = extraout_XMM0_Db_00 + fVar26 + DAT_02390d00;
      if ((int)unaff_RDI[0x39] == 1) {
        local_1c8._0_4_ = (float)local_1c8._0_4_ + DAT_0241c6e8;
      }
      local_1c8._4_4_ = extraout_XMM0_Db_00 + fVar26;
      fStack_1c0 = extraout_XMM0_Dd_00 + fVar37;
      fStack_1bc = extraout_XMM0_Dd_00 + fVar37;
      fVar26 = (float)_logf(CONCAT44((int)((ulonglong)(local_98 / (double)unaff_RDI[0x38]) >> 0x20),
                                     (float)(local_98 / (double)unaff_RDI[0x38])));
      local_98 = (double)CONCAT44(local_98._4_4_,fVar26 / *(float *)(unaff_RDI + 0x55));
      cVar3 = FUN_016bf360();
      if (cVar3 == '\0') {
        local_7c = 0;
      }
      else {
        pvVar8 = _pthread_getspecific(param_1);
        if (pvVar8 != (void *)0x0) {
          FUN_00e8b990();
        }
        lVar12 = FUN_019079b0();
        pvVar8 = _pthread_getspecific(param_1);
        if ((pvVar8 == (void *)0x0) || (lVar13 = FUN_00e8b990(), lVar13 == 0)) {
          lVar13 = unaff_RDI[0x42];
        }
        else {
          param_1 = (pthread_key_t)local_38;
          lVar13 = unaff_RDI[0x42];
        }
        if (lVar13 != 0) {
          local_210 = 0;
          FUN_00d50b00();
        }
        local_210 = '\x01';
        local_218 = lVar13;
        uVar20 = FUN_016cab10();
        local_c8._4_4_ = (int)((ulonglong)lVar12 >> 0x20);
        if (((local_c8._4_4_ == 0) || (uVar20 >> 0x20 == 0)) ||
           (uVar29 = FUN_00e7c000(), (char)uVar29 == '\0')) {
          pvVar8 = _pthread_getspecific(param_1);
          if ((pvVar8 != (void *)0x0) && (lVar13 = FUN_00e8b990(), lVar13 != 0)) {
            param_1 = (pthread_key_t)local_38;
          }
          FUN_017049c0();
          pvVar8 = _pthread_getspecific(param_1);
          if (pvVar8 != (void *)0x0) {
            FUN_00e8b990();
          }
          local_318 = lVar11;
          local_310 = '\0';
          param_1 = 0;
          FUN_01900ec0(0,&local_318);
          pvVar8 = _pthread_getspecific(param_1);
          if (pvVar8 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_019079b0();
          pvVar8 = _pthread_getspecific(param_1);
          if ((pvVar8 == (void *)0x0) || (lVar13 = FUN_00e8b990(), lVar13 == 0)) {
            lVar13 = unaff_RDI[0x42];
          }
          else {
            param_1 = (pthread_key_t)local_38;
            lVar13 = unaff_RDI[0x42];
          }
          if (lVar13 != 0) {
            local_200 = 0;
            FUN_00d50b00();
          }
          local_200 = '\x01';
          local_208 = lVar13;
          local_128 = FUN_016cab10();
          local_7c = 0;
          if ((extraout_var_01 != 0) && (local_128 >> 0x20 != 0)) {
            local_7c = FUN_00e7c000();
          }
          if ((local_200 != '\0') && (local_208 != 0)) {
            FUN_00d50b20();
          }
          if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_310 != '\0') && (local_318 != 0)) {
            FUN_00d50b20();
          }
          if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_7c = (uint)CONCAT71((int7)((ulonglong)uVar29 >> 8),1);
        }
        local_c8 = lVar12;
        if ((local_210 != '\0') && (local_218 != 0)) {
          FUN_00d50b20();
        }
      }
      local_1c8._0_4_ = local_1c8._0_4_ - local_98._0_4_ * local_1c8._0_4_;
      if (lVar11 != 0) {
        FUN_00d50b20();
      }
      bVar25 = false;
    }
    else {
      pvVar8 = _pthread_getspecific(param_1);
      if ((pvVar8 != (void *)0x0) && (lVar11 = FUN_00e8b990(), lVar11 != 0)) {
        param_1 = (pthread_key_t)local_38;
      }
      local_98 = (double)FUN_016d2000();
      FUN_01e3f820();
      local_1c8._0_4_ = extraout_XMM0_Db + fVar26 + DAT_02390d00;
      if ((int)unaff_RDI[0x39] == 1) {
        local_1c8._0_4_ = (float)local_1c8._0_4_ + DAT_0241c6e8;
      }
      local_1c8._4_4_ = extraout_XMM0_Db + fVar26;
      fStack_1c0 = extraout_XMM0_Dd + fVar37;
      fStack_1bc = extraout_XMM0_Dd + fVar37;
      fVar26 = (float)_logf(CONCAT44((int)((ulonglong)(local_98 / (double)unaff_RDI[0x38]) >> 0x20),
                                     (float)(local_98 / (double)unaff_RDI[0x38])));
      local_98 = (double)CONCAT44(local_98._4_4_,fVar26 / *(float *)(unaff_RDI + 0x55));
      pvVar8 = _pthread_getspecific(param_1);
      if ((pvVar8 != (void *)0x0) && (lVar11 = FUN_00e8b990(), lVar11 != 0)) {
        param_1 = (pthread_key_t)local_38;
      }
      cVar3 = FUN_016c2730();
      if (cVar3 == '\0') {
        bVar25 = false;
      }
      else {
        pvVar8 = _pthread_getspecific(param_1);
        if ((pvVar8 != (void *)0x0) && (lVar11 = FUN_00e8b990(), lVar11 != 0)) {
          param_1 = (pthread_key_t)local_38;
        }
        pvVar8 = _pthread_getspecific(param_1);
        if (pvVar8 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar29 = FUN_019079b0();
        local_250 = (longlong *)FUN_016caaa0(uVar29,0);
        bVar25 = true;
      }
      cVar3 = FUN_016bf360();
      if (cVar3 == '\0') {
        local_7c = 0;
      }
      else {
        pvVar8 = _pthread_getspecific(param_1);
        if (pvVar8 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_50 = (longlong *)FUN_019079b0();
        pvVar8 = _pthread_getspecific(param_1);
        if ((pvVar8 == (void *)0x0) || (lVar11 = FUN_00e8b990(), lVar11 == 0)) {
          lVar11 = unaff_RDI[0x42];
        }
        else {
          param_1 = (pthread_key_t)local_38;
          lVar11 = unaff_RDI[0x42];
        }
        if (lVar11 != 0) {
          local_230 = 0;
          FUN_00d50b00();
        }
        local_230 = '\x01';
        local_238 = lVar11;
        local_c8 = FUN_016cab10();
        dVar30 = (double)FUN_00e7c860();
        local_68 = (longlong *)(dVar30 + DAT_023944d8);
        local_7c = 0;
        if ((local_50._4_4_ != 0) && (!NAN((double)local_68))) {
          cVar3 = FUN_00e7c790();
          if (cVar3 == '\0') {
            local_7c = 0;
          }
          else {
            pvVar8 = _pthread_getspecific(param_1);
            if (pvVar8 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_019079b0();
            pvVar8 = _pthread_getspecific(param_1);
            if ((pvVar8 != (void *)0x0) && (lVar11 = FUN_00e8b990(), lVar11 != 0)) {
              param_1 = (pthread_key_t)local_38;
            }
            local_220 = 0;
            lVar11 = unaff_RDI[0x42];
            if (lVar11 != 0) {
              FUN_00d50b00();
            }
            local_220 = '\x01';
            local_228 = lVar11;
            local_128 = FUN_016cabc0();
            dVar30 = (double)FUN_00e7c860();
            local_7c = 0;
            if ((extraout_var_02 != 0) && (!NAN(dVar30 + DAT_02391030))) {
              local_7c = FUN_00e7c720();
              local_7c = local_7c ^ 1;
            }
            if ((local_220 != '\0') && (local_228 != 0)) {
              FUN_00d50b20();
            }
          }
        }
        if ((local_230 != '\0') && (local_238 != 0)) {
          FUN_00d50b20();
        }
      }
      FUN_00d50b20();
      local_1c8._0_4_ = local_1c8._0_4_ - local_98._0_4_ * local_1c8._0_4_;
    }
    iStack_34c = extraout_var;
    iStack_344 = extraout_var_00;
    if (lVar10 != 0) {
      FUN_00d50b20();
    }
  }
  pvVar8 = _pthread_getspecific(param_1);
  if ((pvVar8 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
    param_1 = (pthread_key_t)local_38;
  }
  FUN_016caaa0();
  fVar26 = *(float *)(**(longlong **)(unaff_RDI[0x41] + 0x10) + 0x10);
  pvVar8 = _pthread_getspecific(param_1);
  if ((pvVar8 == (void *)0x0) || (lVar10 = FUN_00e8b990(), lVar10 == 0)) {
    plVar24 = (longlong *)unaff_RDI[0x2e];
  }
  else {
    plVar24 = (longlong *)unaff_RDI[0x2e];
  }
  if (plVar24 != (longlong *)0x0) {
    FUN_00d50b00();
  }
  (**(code **)(*plVar24 + 0x388))(DAT_02390d00 + (float)local_148._0_4_);
  pVar22 = 0;
  uVar29 = FUN_016c45d0(0,0);
  FUN_00d50b20();
  pvVar8 = _pthread_getspecific(pVar22);
  if ((pvVar8 == (void *)0x0) || (lVar10 = FUN_00e8b990(), lVar10 == 0)) {
    plVar18 = (longlong *)unaff_RDI[0x2e];
    plVar24 = local_38;
  }
  else {
    plVar24 = (longlong *)local_38[(ulonglong)(*(uint *)(lVar10 + 0x154) & 1) + 4];
    plVar18 = (longlong *)unaff_RDI[0x2e];
  }
  if (plVar18 != (longlong *)0x0) {
    FUN_00d50b00();
  }
  local_1e8._0_4_ = (float)local_1e8 + (float)local_148._0_4_;
  local_1e8 = CONCAT44(local_1e8._4_4_ + (float)local_148._4_4_,(float)local_1e8);
  uStack_1e0 = CONCAT44(uStack_1e0._4_4_ + uStack_140._4_4_,(float)uStack_1e0 + (float)uStack_140);
  (**(code **)(*plVar18 + 0x388))(DAT_02390d00 + (float)local_1e8 + DAT_02390124);
  pVar22 = 0;
  local_128 = FUN_016c45d0(0,0);
  FUN_00d50b20();
  local_50._0_4_ = 1;
  FUN_00e7c280();
  local_50 = (longlong *)CONCAT44(local_50._4_4_,1);
  FUN_00e7c260();
  pvVar8 = _pthread_getspecific(pVar22);
  if (pvVar8 != (void *)0x0) {
    FUN_00e8b990();
  }
  local_100 = 0;
  dVar30 = (double)FUN_016c46a0(0,&local_9c);
  uVar23 = *(uint *)(unaff_RDI[0x41] + 0xc);
  local_1ac = uVar23 - 1;
  lVar10 = *(longlong *)(unaff_RDI[0x41] + 0x10);
  plVar18 = (longlong *)(ulonglong)uVar23;
  if (0 < (int)uVar23) {
    plVar17 = (longlong *)(ulonglong)local_1ac;
    do {
      if (*(double *)(*(longlong *)(lVar10 + (longlong)plVar17 * 8) + 0x38) <= dVar30) {
        local_100 = (ulonglong)plVar17 & 0xffffffff;
        plVar18 = plVar17;
        break;
      }
      plVar18 = (longlong *)((longlong)plVar17 + -1);
      bVar1 = 0 < (longlong)plVar17;
      plVar17 = plVar18;
    } while (bVar1);
  }
  lVar11 = *(longlong *)(lVar10 + local_100 * 8);
  if (lVar11 == 0) {
    local_58 = 0;
  }
  else {
    local_58 = (uint)CONCAT71((int7)((ulonglong)lVar10 >> 8),1);
    FUN_00d50b00();
  }
  if ((int)local_100 < (int)local_1ac) {
    local_98 = *(double *)(*(longlong *)(unaff_RDI[0x41] + 0x10) + 8 + local_100 * 8);
    if (local_98 != 0.0) {
      local_70 = CONCAT71((int7)((ulonglong)*(longlong *)(unaff_RDI[0x41] + 0x10) >> 8),1);
      FUN_00d50b00();
      goto LAB_01c55759;
    }
  }
  local_98 = 0.0;
  local_70 = 0;
LAB_01c55759:
  pvVar8 = _pthread_getspecific((pthread_key_t)plVar18);
  if ((pvVar8 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
    plVar18 = local_38;
  }
  FUN_016f57b0(dVar30,0);
  local_158 = local_50;
  if ((((local_48 == '\0') && (local_50 != (longlong *)0x0)) && (FUN_00d50b00(), local_48 != '\0'))
     && (local_50 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  pvVar8 = _pthread_getspecific((pthread_key_t)plVar18);
  if ((pvVar8 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
    plVar18 = local_38;
  }
  local_308 = local_158;
  local_300 = '\0';
  FUN_016ebbb0();
  local_88 = local_50;
  if (local_48 == '\0') {
    if (((local_50 != (longlong *)0x0) && (FUN_00d50b00(), local_48 != '\0')) &&
       (local_50 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_48 = '\0';
  }
  if ((local_300 != '\0') && (local_308 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (local_88 != (longlong *)0x0) {
    pvVar8 = _pthread_getspecific((pthread_key_t)plVar18);
    if ((pvVar8 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
      plVar18 = local_38;
    }
    pvVar8 = _pthread_getspecific((pthread_key_t)plVar18);
    if ((pvVar8 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
      plVar18 = local_88;
    }
    uVar31 = FUN_01909dc0();
    local_248 = FUN_016caaa0(uVar31,&local_9c);
  }
  plVar17 = (longlong *)unaff_RDI[0x2e];
  if (plVar17 != (longlong *)0x0) {
    FUN_00d50b00();
  }
  dVar32 = (double)(**(code **)(*plVar17 + 0x398))();
  FUN_00d50b20();
  plVar17 = (longlong *)unaff_RDI[0x2e];
  if (plVar17 != (longlong *)0x0) {
    FUN_00d50b00();
  }
  local_1d8 = (**(code **)(*plVar17 + 0x390))(dVar30);
  uStack_1d0 = extraout_XMM0_Qb_00;
  FUN_00d50b20();
  iStack_dc = (int)((ulonglong)uVar29 >> 0x20);
  if ((((iStack_dc == 0) || (extraout_var_03 == 0)) || (cVar3 = FUN_00e7c020(), cVar3 == '\0')) &&
     (local_98 != 0.0)) {
    insertps(ZEXT416(*(uint *)(lVar11 + 0xc)),ZEXT416(*(uint *)(lVar11 + 0x10)),0x10);
  }
  local_78 = uVar29;
  pvVar8 = _pthread_getspecific((pthread_key_t)plVar18);
  if ((pvVar8 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
    plVar18 = local_38;
  }
  local_120 = FUN_016c4760();
  if (local_78._4_4_ != 0) {
    fVar37 = local_1e8._4_4_;
    fVar27 = local_1e8._4_4_ + DAT_02390d00;
    auVar34._0_4_ = _DAT_023945e0 & (uint)(float)local_1d8;
    auVar34._4_4_ = _UNK_023945e4 & local_1d8._4_4_;
    auVar34._8_4_ = _UNK_023945e8 & (uint)uStack_1d0;
    auVar34._12_4_ = _UNK_023945ec & uStack_1d0._4_4_;
    auVar33._4_12_ = SUB1612(auVar34 | _DAT_023945f0,4);
    auVar33._0_4_ = SUB164(auVar34 | _DAT_023945f0,0) + (float)local_1d8;
    auVar34 = roundss(auVar33,auVar33,0xb);
    local_1e8 = CONCAT44(local_1e8._4_4_,auVar34._0_4_);
    local_7c = local_7c ^ 1;
    do {
      if ((local_128._4_4_ == 0) || (cVar3 = FUN_00e7c020(), cVar3 == '\0')) break;
      local_39 = 1;
      if ((lVar9 != 0) && ((local_78._4_4_ != 0 && (iStack_34c != 0)))) {
        cVar3 = FUN_00e7c020();
        plVar18 = (longlong *)CONCAT71((int7)((ulonglong)plVar18 >> 8),local_78._4_4_ == 0);
        if ((cVar3 == '\0' && local_78._4_4_ != 0) && (iStack_344 != 0)) {
          local_39 = FUN_00e7c020();
          local_39 = local_39 ^ 1;
        }
      }
      pvVar8 = _pthread_getspecific((pthread_key_t)plVar18);
      if ((pvVar8 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
        plVar18 = local_38;
      }
      bVar4 = FUN_016cade0();
      if ((byte)((byte)local_7c | local_39) == 1) {
        local_50 = (longlong *)FUN_016bf2e0();
        if (((local_78._4_4_ != 0) && ((ulonglong)local_50 >> 0x20 != 0)) &&
           (cVar3 = FUN_00e7c020(), cVar3 == '\0')) {
          local_68 = (longlong *)FUN_016bf310();
          if (((local_78._4_4_ != 0) && ((ulonglong)local_68 >> 0x20 != 0)) &&
             (cVar3 = FUN_00e7c020(), cVar3 == '\0')) goto LAB_01c55c20;
        }
        local_e8 = 0;
        if (!bVar25) goto LAB_01c55cb0;
LAB_01c55c31:
        if (((local_78._4_4_ == 0) || (local_250._4_4_ == 0)) ||
           (cVar3 = FUN_00e7c000(), cVar3 == '\0')) {
          local_c8 = CONCAT44(local_c8._4_4_,1);
          local_50 = local_250;
          FUN_00e7c280();
          local_68 = local_50;
          if ((local_78._4_4_ == 0) || ((ulonglong)local_50 >> 0x20 == 0)) goto LAB_01c55cb0;
          cVar3 = FUN_00e7c000();
          plVar18 = (longlong *)CONCAT71((int7)((ulonglong)plVar18 >> 8),local_39);
          local_51 = local_39;
          if (cVar3 != '\0') goto LAB_01c55ca4;
        }
        else {
LAB_01c55ca4:
          local_51 = 1;
        }
      }
      else {
LAB_01c55c20:
        local_e8 = 1;
        if (bVar25) goto LAB_01c55c31;
LAB_01c55cb0:
        local_51 = local_39;
      }
      FUN_01d48b40();
      if ((((local_88 == (longlong *)0x0) || (local_78._4_4_ == 0)) || (local_248._4_4_ == 0)) ||
         (cVar3 = FUN_00e7c000(), cVar3 == '\0')) {
        if (bVar4 == 0) {
          local_2c8 = local_110;
          local_2c0 = '\0';
          FUN_01d488d0();
          if ((local_2c0 != '\0') && (local_2c8 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_2d8 = local_108;
          local_2d0 = '\0';
          FUN_01d488d0();
          if ((local_2d0 != '\0') && (local_2d8 != 0)) {
            FUN_00d50b20();
          }
        }
joined_r0x01c55e24:
        if (local_39 != 0) goto LAB_01c55e2a;
LAB_01c56160:
        if ((bVar4 | _DAT_0241ea60 < dVar32) == 1) {
          FUN_01d48990();
          local_170 = 0;
          if (local_c0 == '\0') {
            if (local_c8 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_c0 = '\0';
          }
          local_170 = '\x01';
          local_178 = local_c8;
          local_290 = '\0';
          local_298 = 0;
          FUN_01c57df0();
          plVar17 = local_68;
          if (local_60 == '\0') {
            if (local_68 != (longlong *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_60 = '\0';
          }
          local_50 = plVar17;
          local_48 = '\0';
          FUN_00d21140();
          if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (plVar17 != (longlong *)0x0) {
            FUN_00d50b20();
          }
          if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_290 != '\0') && (local_298 != 0)) {
            FUN_00d50b20();
          }
          if ((local_170 != '\0') && (local_178 != 0)) {
            FUN_00d50b20();
          }
          if ((local_c0 != '\0') && (local_c8 != 0)) {
            FUN_00d50b20();
          }
        }
      }
      else {
        local_2f8 = local_168;
        local_2f0 = '\0';
        FUN_01d488d0();
        if ((local_2f0 != '\0') && (local_2f8 != 0)) {
          FUN_00d50b20();
        }
        pvVar8 = _pthread_getspecific((pthread_key_t)plVar18);
        if ((pvVar8 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
          plVar18 = local_38;
        }
        plVar17 = local_88;
        local_2e8 = local_88;
        local_2e0 = '\0';
        FUN_016ebbb0();
        plVar24 = local_50;
        if (local_50 == plVar17) {
LAB_01c56085:
          if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          if (local_48 == '\0') {
            if (local_50 != (longlong *)0x0) {
              FUN_00d50b00();
            }
            FUN_00d50b20();
            local_88 = plVar24;
            goto LAB_01c56085;
          }
          FUN_00d50b20();
          local_48 = '\0';
          local_88 = plVar24;
        }
        if ((local_2e0 != '\0') && (local_2e8 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (local_88 != (longlong *)0x0) {
          pvVar8 = _pthread_getspecific((pthread_key_t)plVar18);
          plVar24 = local_38;
          if ((pvVar8 != (void *)0x0) && (lVar10 = FUN_00e8b990(), plVar24 = local_38, lVar10 != 0))
          {
            plVar18 = local_38;
            plVar24 = (longlong *)local_38[(ulonglong)(*(uint *)(lVar10 + 0x154) & 1) + 4];
          }
          pvVar8 = _pthread_getspecific((pthread_key_t)plVar18);
          if ((pvVar8 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
            plVar18 = local_88;
          }
          uVar29 = FUN_01909dc0();
          local_248 = FUN_016caaa0(uVar29,0);
          goto joined_r0x01c55e24;
        }
        local_88 = (longlong *)0x0;
        if (local_39 == 0) goto LAB_01c56160;
LAB_01c55e2a:
        if (bVar4 == 0) {
          if (_DAT_0241ea60 < dVar32) {
            FUN_01d48990();
            local_180 = 0;
            if (local_c0 == '\0') {
              if (local_c8 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_c0 = '\0';
            }
            local_180 = '\x01';
            local_188 = local_c8;
            local_2a8 = local_150;
            local_2a0 = '\0';
            FUN_01c57df0();
            plVar17 = local_68;
            if (local_60 == '\0') {
              if (local_68 != (longlong *)0x0) {
                FUN_00d50b00();
              }
            }
            else {
              local_60 = '\0';
            }
            local_50 = plVar17;
            local_48 = '\0';
            FUN_00d21140();
            if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if (plVar17 != (longlong *)0x0) {
              FUN_00d50b20();
            }
            if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_2a0 != '\0') && (local_2a8 != 0)) {
              FUN_00d50b20();
            }
            if ((local_180 != '\0') && (local_188 != 0)) {
              FUN_00d50b20();
            }
            if ((local_c0 != '\0') && (local_c8 != 0)) {
              FUN_00d50b20();
            }
          }
        }
        else {
          FUN_01d48990();
          local_190 = 0;
          if (local_c0 == '\0') {
            if (local_c8 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_c0 = '\0';
          }
          local_190 = '\x01';
          local_198 = local_c8;
          local_2b8 = local_160;
          local_2b0 = '\0';
          FUN_01c57df0();
          plVar17 = local_68;
          if (local_60 == '\0') {
            if (local_68 != (longlong *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_60 = '\0';
          }
          local_50 = plVar17;
          local_48 = '\0';
          FUN_00d21140();
          if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (plVar17 != (longlong *)0x0) {
            FUN_00d50b20();
          }
          if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_2b0 != '\0') && (local_2b8 != 0)) {
            FUN_00d50b20();
          }
          if ((local_190 != '\0') && (local_198 != 0)) {
            FUN_00d50b20();
          }
          if ((local_c0 != '\0') && (local_c8 != 0)) {
            FUN_00d50b20();
          }
        }
      }
      local_240 = local_120;
      pvVar8 = _pthread_getspecific((pthread_key_t)plVar18);
      plVar17 = local_38;
      if ((pvVar8 != (void *)0x0) && (lVar10 = FUN_00e8b990(), plVar17 = local_38, lVar10 != 0)) {
        plVar18 = local_38;
        plVar17 = (longlong *)local_38[(ulonglong)(*(uint *)(lVar10 + 0x154) & 1) + 4];
      }
      local_68 = (longlong *)CONCAT44(local_68._4_4_,1);
      local_50 = (longlong *)local_78;
      uVar29 = FUN_00e7c260();
      lVar10 = FUN_016c4760(uVar29,&local_9c);
      uVar20 = CONCAT71((int7)((ulonglong)plVar17 >> 8),1);
      local_12c = 0;
      local_120 = lVar10;
      while (pVar22 = (pthread_key_t)plVar18, (uVar20 & 1) != 0) {
        local_254 = (uint)uVar20;
        local_1d8 = CONCAT44(local_1d8._4_4_,(int)CONCAT71((int7)((ulonglong)lVar10 >> 8),1));
        fVar39 = fVar26;
        if (local_98 == 0.0) {
          local_98 = 0.0;
LAB_01c568a0:
          plVar18 = (longlong *)unaff_RDI[0x2e];
          if (plVar18 != (longlong *)0x0) {
            FUN_00d50b00();
          }
          pvVar8 = _pthread_getspecific(pVar22);
          if (pvVar8 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_016c98e0();
          local_148 = (undefined1  [8])(**(code **)(*plVar18 + 0x390))();
          uStack_140 = extraout_XMM0_Qb_01;
          FUN_00d50b20();
          if (((local_78._4_4_ == 0) || (extraout_var_03 == 0)) ||
             (cVar3 = FUN_00e7c020(), cVar3 == '\0')) {
            if ((char)local_1d8 == '\0') {
              if (((*(int *)((longlong)local_98 + 0x44) == 0) || (local_120._4_4_ == 0)) ||
                 (cVar3 = FUN_00e7c000(), cVar3 == '\0')) {
                fVar39 = (float)*(undefined8 *)(lVar11 + 0xc);
                fVar40 = (float)((ulonglong)*(undefined8 *)(lVar11 + 0xc) >> 0x20);
                fVar39 = fVar40 + ((float)((ulonglong)*(undefined8 *)((longlong)local_98 + 0xc) >>
                                          0x20) - fVar40) *
                                  (((float)local_148._0_4_ - fVar39) /
                                  ((float)*(undefined8 *)((longlong)local_98 + 0xc) - fVar39));
              }
              else {
                fVar39 = *(float *)((longlong)local_98 + 0x10);
                fVar40 = 0.0;
              }
              goto LAB_01c56a30;
            }
            fVar39 = *(float *)(lVar11 + 0x10);
            fVar40 = 0.0;
            uVar41 = 0;
            uVar42 = 0;
            uVar20 = 0;
          }
          else {
            fVar40 = 0.0;
            if ((char)local_1d8 == '\0') {
LAB_01c56a30:
              uVar42 = 0;
              uVar41 = 0;
              local_12c = local_12c & 0xff;
              if (*(char *)((longlong)local_98 + 0x48) != '\0') {
                local_12c = 1;
              }
              uVar20 = 0;
            }
            else {
              uVar20 = 0;
              fVar40 = 0.0;
              uVar41 = 0;
              uVar42 = 0;
            }
          }
        }
        else {
          if ((*(int *)((longlong)local_98 + 0x44) == 0) || (local_240._4_4_ == 0)) {
            uVar19 = local_70 & 0xffffffff;
            dVar30 = local_98;
          }
          else {
            uVar20 = local_70 & 0xffffffff;
            cVar3 = FUN_00e7c020();
            if (cVar3 == '\0') {
              iVar5 = (int)local_100;
              if ((double)lVar11 != local_98) {
                if ((char)local_70 != '\0') {
                  uVar20 = local_70 & 0xffffffff;
                  FUN_00d50b00();
                }
                auVar21 = (undefined1  [8])local_98;
                plVar24 = (longlong *)(local_70 & 0xffffffff);
                if (((char)local_58 != '\0') &&
                   (plVar24 = (longlong *)(local_70 & 0xffffffff), lVar11 != 0)) {
                  uVar20 = local_70 & 0xffffffff;
                  FUN_00d50b20();
                  plVar24 = (longlong *)(local_70 & 0xffffffff);
                }
LAB_01c566d5:
                lVar11 = (longlong)auVar21;
                if (iVar5 + 1 < (int)local_1ac) goto LAB_01c566ed;
LAB_01c5682b:
                uVar19 = local_70;
                local_58 = (uint)plVar24;
                if ((char)local_70 != '\0') {
                  FUN_00d50b20();
                  pVar22 = (pthread_key_t)local_70;
                  local_100 = (ulonglong)(iVar5 + 1);
                  local_70 = 0;
                  local_98 = 0.0;
                  goto LAB_01c568a0;
                }
                local_70 = 0;
LAB_01c56855:
                local_100 = (ulonglong)(iVar5 + 1);
                pVar22 = (pthread_key_t)uVar19;
                local_98 = 0.0;
                goto LAB_01c568a0;
              }
              if (((char)local_70 != '\0') && ((char)local_58 == '\0')) {
                plVar24 = (longlong *)CONCAT71((int7)((ulonglong)plVar24 >> 8),1);
                local_58 = 0;
                uVar20 = local_70 & 0xffffffff;
                local_148 = (undefined1  [8])lVar11;
                FUN_00d50b00();
                auVar21 = local_148;
                goto LAB_01c566d5;
              }
              plVar24 = (longlong *)(ulonglong)local_58;
              if ((int)local_1ac <= iVar5 + 1) goto LAB_01c5682b;
LAB_01c566ed:
              pVar22 = iVar5 + 1;
              lVar10 = (longlong)iVar5;
              uVar19 = *(ulonglong *)(unaff_RDI[0x41] + 0x10);
              dVar30 = *(double *)(uVar19 + 0x10 + lVar10 * 8);
              uVar23 = (uint)plVar24;
              if (local_98 == dVar30) {
                if ((char)local_70 != '\0') {
                  local_100 = (ulonglong)pVar22;
                  uVar19 = local_70 & 0xffffffff;
                  dVar30 = local_98;
                  local_58 = uVar23;
                  goto LAB_01c56595;
                }
                local_70 = 0;
                FUN_00d50b00();
                pVar15 = (pthread_key_t)uVar19;
                dVar30 = local_98;
              }
              else {
                if (dVar30 != 0.0) {
                  lVar10 = FUN_00d50b00();
                }
                if ((char)local_70 != '\0') {
                  local_98 = dVar30;
                  lVar10 = FUN_00d50b20();
                }
                pVar15 = (pthread_key_t)uVar19;
                if (dVar30 == 0.0) {
                  uVar14 = (undefined7)((ulonglong)lVar10 >> 8);
                  local_70 = CONCAT71(uVar14,1);
                  local_1d8 = CONCAT44(local_1d8._4_4_,(int)CONCAT71(uVar14,1));
                  local_58 = uVar23;
                  goto LAB_01c56855;
                }
              }
              local_100 = (ulonglong)pVar22;
              uVar19 = CONCAT71((int7)(uVar20 >> 8),1);
              local_58 = uVar23;
              pVar22 = pVar15;
            }
            else {
              uVar19 = local_70 & 0xffffffff;
              dVar30 = local_98;
            }
          }
LAB_01c56595:
          plVar24 = (longlong *)((longlong)dVar30 + 0x40);
          if (((*(int *)((longlong)dVar30 + 0x44) != 0) && (local_120._4_4_ != 0)) &&
             (cVar3 = FUN_00e7c020(), cVar3 == '\0')) {
            local_1d8 = local_1d8 & 0xffffffff00000000;
            local_98 = dVar30;
            local_70 = uVar19;
            goto LAB_01c568a0;
          }
          fVar28 = *(float *)((longlong)dVar30 + 0xc);
          _local_148 = ZEXT416((uint)fVar28);
          fVar38 = fVar28;
          fVar40 = 0.0;
          uVar41 = 0;
          uVar42 = 0;
          if ((local_78._4_4_ == 0) || (extraout_var_03 == 0)) {
LAB_01c56608:
            fVar39 = ((fVar38 - *(float *)(lVar11 + 0xc)) / (fVar28 - *(float *)(lVar11 + 0xc))) *
                     (*(float *)((longlong)dVar30 + 0x10) - *(float *)(lVar11 + 0x10)) +
                     *(float *)(lVar11 + 0x10);
          }
          else {
            cVar3 = FUN_00e7c020();
            fVar40 = 0.0;
            uVar41 = 0;
            uVar42 = 0;
            if (cVar3 == '\0') {
              fVar28 = *(float *)((longlong)dVar30 + 0xc);
              fVar38 = (float)local_148._0_4_;
              fVar40 = (float)local_148._4_4_;
              uVar41 = (float)uStack_140;
              uVar42 = uStack_140._4_4_;
              goto LAB_01c56608;
            }
          }
          local_240 = *plVar24;
          uVar20 = (ulonglong)local_254;
          local_98 = dVar30;
          local_70 = uVar19;
        }
        auVar35._0_4_ = local_148._0_4_ & _DAT_023945e0;
        auVar35._4_4_ = local_148._4_4_ & _UNK_023945e4;
        auVar35._8_4_ = (uint)(float)uStack_140 & _UNK_023945e8;
        auVar35._12_4_ = (uint)uStack_140._4_4_ & _UNK_023945ec;
        auVar36._4_12_ = SUB1612(auVar35 | _DAT_023945f0,4);
        auVar36._0_4_ = SUB164(auVar35 | _DAT_023945f0,0) + (float)local_148._0_4_;
        local_148._4_4_ = fVar40;
        local_148._0_4_ = fVar39;
        uStack_140._0_4_ = (float)uVar41;
        uStack_140._4_4_ = (float)uVar42;
        auVar34 = roundss(ZEXT816(0),auVar36,0xb);
        plVar18 = (longlong *)(ulonglong)local_51;
        local_1d8 = CONCAT44(local_1d8._4_4_,auVar34._0_4_);
        lVar10 = FUN_01c57f20(plVar18,local_e8,CONCAT44(fVar37,fVar27));
        local_1e8 = CONCAT44(local_1e8._4_4_,(float)local_1d8);
      }
      local_50 = (longlong *)CONCAT44(local_50._4_4_,1);
      FUN_00e7c260();
    } while (local_78._4_4_ != 0);
  }
  local_288 = *unaff_RSI;
  local_280 = '\0';
  local_270 = '\0';
  local_278 = puVar6;
  FUN_01c58bf0();
  if ((local_270 != '\0') && (local_278 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_280 != '\0') && (local_288 != 0)) {
    FUN_00d50b20();
  }
  puVar7 = DAT_028b6ff8;
  local_268 = *unaff_RSI;
  local_260 = '\0';
  local_1f0 = 0;
  if (DAT_028b6ff8 != (undefined8 *)0x0) {
    FUN_00d50b00();
  }
  local_1f8 = puVar7;
  local_1f0 = '\x01';
  FUN_01c58e90();
  if ((local_1f0 != '\0') && (local_1f8 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_260 != '\0') && (local_268 != 0)) {
    FUN_00d50b20();
  }
  FUN_01d48390();
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  if (DAT_028b6ff8 != (undefined8 *)0x0) {
    DAT_028b6ff8 = (undefined8 *)0x0;
    FUN_00d50b20();
  }
  if (local_88 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (local_158 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (((char)local_70 != '\0') && (local_98 != 0.0)) {
    FUN_00d50b20();
  }
  if (((char)local_58 != '\0') && (lVar11 != 0)) {
    FUN_00d50b20();
  }
  if (local_168 != 0) {
    FUN_00d50b20();
  }
  if (local_150 != 0) {
    FUN_00d50b20();
  }
  if (local_160 != 0) {
    FUN_00d50b20();
  }
  if (local_110 != 0) {
    FUN_00d50b20();
  }
  if (local_108 != 0) {
    FUN_00d50b20();
  }
  if (local_38 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @01c4c1c0 — 3207 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01c4c69f) */
/* WARNING: Removing unreachable block (ram,0x01c4c6ab) */
/* WARNING: Removing unreachable block (ram,0x01c4c40a) */
/* WARNING: Removing unreachable block (ram,0x01c4c416) */
/* WARNING: Removing unreachable block (ram,0x01c4ca95) */
/* WARNING: Removing unreachable block (ram,0x01c4caa1) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01c4c1c0(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  bool bVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  longlong *plVar6;
  char cVar7;
  undefined4 uVar8;
  longlong *plVar9;
  longlong lVar10;
  void *pvVar11;
  longlong *plVar12;
  longlong lVar13;
  pthread_key_t pVar14;
  longlong *in_RCX;
  char *pcVar15;
  int iVar16;
  undefined8 *unaff_RSI;
  longlong *unaff_RDI;
  float fVar17;
  undefined8 uVar18;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar19 [16];
  undefined8 extraout_XMM0_Qb_00;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 in_XMM1 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  float fVar24;
  undefined1 auVar25 [16];
  uint uVar26;
  undefined1 auVar27 [16];
  longlong local_158;
  char local_150;
  longlong local_148;
  char local_140;
  longlong local_138;
  char local_130;
  longlong local_128;
  char local_120;
  longlong local_118;
  char local_110;
  longlong *local_108;
  char local_100;
  char local_f8;
  undefined7 uStack_f7;
  char local_f0;
  float local_e8;
  undefined4 uStack_e4;
  undefined8 uStack_e0;
  longlong *local_d8;
  char local_d0;
  longlong *local_c8;
  char local_c0;
  longlong *local_b8;
  char local_b0;
  longlong *local_a8;
  char local_a0;
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  longlong *local_68;
  char local_60;
  longlong *local_58;
  char local_50 [8];
  longlong *local_48;
  undefined8 local_40;
  int local_38;
  
  plVar6 = local_58;
  local_e8 = (float)param_1;
  uStack_e4 = (undefined4)((ulonglong)param_1 >> 0x20);
  plVar12 = in_RCX;
  auVar22 = in_XMM1;
  (**(code **)(*(longlong *)*unaff_RSI + 0x4d8))();
  auVar19._0_8_ = FUN_01e3f820();
  auVar19._8_8_ = extraout_XMM0_Qb;
  if ((int)unaff_RDI[0x39] == 1) {
    auVar2._4_4_ = auVar22._4_4_;
    auVar2._0_4_ = auVar22._4_4_ + DAT_0241c6e8 + DAT_02390d00;
    auVar2._8_4_ = auVar22._12_4_;
    auVar2._12_4_ = auVar22._12_4_;
    auVar19 = insertps(auVar19,auVar2,0x10);
    uVar26 = DAT_02392fd8;
  }
  else {
    auVar19 = blendps(auVar19,auVar22,2);
    uVar26 = 0;
  }
  auVar22 = insertps(auVar22,ZEXT416(uVar26),0x10);
  auVar25._8_8_ = 0;
  auVar25._0_8_ = *(ulonglong *)(*in_RCX + 0x1c);
  local_88 = blendps(auVar19,auVar25,0xd);
  uVar18 = local_88._0_8_;
  local_98 = auVar22;
  if (*param_2 == 0) {
    local_88 = blendps(ZEXT816(0),local_88,2);
    if (*param_3 == 0) {
      fVar24 = (float)FUN_01e3f820(uVar18,auVar22._0_8_,local_e8,in_XMM1._0_4_);
      auVar22._0_4_ = auVar22._0_4_ + fVar24 + DAT_02390d00;
      local_98 = blendps(local_98,auVar22,1);
    }
    else {
      auVar27._8_8_ = 0;
      auVar27._0_8_ = *(ulonglong *)(*param_3 + 0x1c);
      local_98 = insertps(auVar27,ZEXT416(uVar26),0x10);
    }
  }
  else {
    fVar24 = (float)*(ulonglong *)(*in_RCX + 0x1c);
    if (*param_3 == 0) {
      fVar17 = (float)FUN_01e3f820(uVar18,auVar22._0_8_,local_e8,in_XMM1._0_4_);
      auVar23._4_12_ = auVar22._4_12_;
      auVar23._0_4_ = (auVar22._0_4_ + fVar17 + DAT_02390d00) - fVar24;
      local_98 = blendps(local_98,auVar23,1);
    }
    else {
      local_98 = blendps(auVar22,ZEXT416((uint)(*(float *)(*param_3 + 0x1c) - fVar24)),1);
    }
  }
  cVar7 = FUN_00d054a0();
  if (cVar7 == '\0') {
  }
  else {
    local_88._0_8_ = FUN_00d05360();
    auVar3._8_8_ = _UNK_0241e9e8;
    auVar3._0_8_ = _DAT_0241e9e0;
    local_98 = blendps(local_98,auVar3,0xe);
    local_88._8_8_ = extraout_XMM0_Qb_00;
  }
  bVar1 = DAT_023908e8 <= local_98._0_4_;
  uVar18 = _DAT_0241e9e0;
  uStack_e0 = _UNK_0241e9e8;
  if (bVar1) {
    uVar18 = _DAT_0241e9f0;
    uStack_e0 = _UNK_0241e9f8;
  }
  local_e8 = (float)uVar18;
  uStack_e4 = (undefined4)((ulonglong)uVar18 >> 0x20);
  FUN_01e40eb0();
  if ((local_50[0] != '\0') && (local_58 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (local_58 == (longlong *)0x0) {
    (**(code **)(*unaff_RDI + 0x450))();
  }
  fVar24 = ((float)local_98._0_4_ * DAT_0239011c + local_88._0_4_) - DAT_0239011c * local_e8;
  auVar20._0_4_ = _DAT_023945e0 & (uint)fVar24;
  auVar20._4_4_ = _UNK_023945e4 & local_98._4_4_;
  auVar20._8_4_ = _UNK_023945e8 & local_98._8_4_;
  auVar20._12_4_ = _UNK_023945ec & local_98._12_4_;
  auVar21._4_12_ = SUB1612(auVar20 | _DAT_023945f0,4);
  auVar21._0_4_ = SUB164(auVar20 | _DAT_023945f0,0) + fVar24;
  auVar22 = roundss(auVar21,auVar21,0xb);
  auVar22 = blendps(auVar22,local_88,0xe);
  (**(code **)(*(longlong *)*unaff_RSI + 0x4d0))(auVar22._0_8_);
  (**(code **)(*(longlong *)*unaff_RSI + 0x4a0))();
  uVar26 = *(uint *)((longlong)local_58 + 0xc);
  if (local_50[0] != '\0') {
    FUN_00d50b20();
  }
  if (uVar26 != bVar1) {
    (**(code **)(*(longlong *)*unaff_RSI + 0x480))();
    if (DAT_023908e8 <= (float)local_98._0_4_) {
      plVar9 = (longlong *)FUN_00e8fc40();
      FUN_001e3c20();
      (**(code **)(*plVar9 + 0x18))();
      local_d0 = 0;
      FUN_00d50b00();
      local_d0 = '\x01';
      local_d8 = unaff_RDI;
      (**(code **)(*plVar9 + 0xa20))();
      if ((local_d0 != '\0') && (local_d8 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      auVar5._4_4_ = uStack_e4;
      auVar5._0_4_ = local_e8;
      auVar5._8_8_ = uStack_e0;
      auVar4._8_8_ = _UNK_0241e9e8;
      auVar4._0_8_ = _DAT_0241e9e0;
      blendps(auVar5,auVar4,0xe);
      (**(code **)(*plVar9 + 0x4d0))();
      (**(code **)(*plVar9 + 0x558))();
      FUN_01cef4c0();
      (**(code **)(*unaff_RDI + 0x640))();
      (**(code **)(*local_68 + 0x370))();
      local_c0 = 0;
      if (local_50[0] == '\0') {
        if (local_58 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_50[0] = '\0';
      }
      local_c0 = '\x01';
      local_c8 = local_58;
      (**(code **)(*plVar9 + 0x9d8))();
      if ((local_c0 != '\0') && (local_c8 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_50[0] != '\0') && (local_58 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      lVar10 = DAT_027ebc20;
      if (DAT_027ebc20 != 0) {
        FUN_00d50b00();
      }
      (**(code **)(*plVar9 + 0xa10))();
      if (lVar10 != 0) {
        FUN_00d50b20();
      }
      (**(code **)(*(longlong *)*unaff_RSI + 0x450))();
      FUN_00d50b20();
    }
  }
  (**(code **)(*(longlong *)*unaff_RSI + 0x4a0))();
  if (local_50[0] == '\0') {
    if (local_58 == (longlong *)0x0) goto LAB_01c4c799;
    FUN_00d50b00();
    if ((local_50[0] != '\0') && (local_58 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else if (local_58 == (longlong *)0x0) goto LAB_01c4c799;
  local_50[0] = '\0';
  local_58 = (longlong *)0x0;
  local_48 = plVar6;
  local_40 = 0xffffffff;
  local_38 = 0;
  while( true ) {
    lVar10 = (longlong)(int)local_40;
    iVar16 = (int)local_40 + 1;
    local_40 = CONCAT44(local_40._4_4_,iVar16);
    if (*(int *)((longlong)local_48 + 0xc) <= iVar16) break;
    local_58 = *(longlong **)(local_48[2] + 8 + lVar10 * 8);
    (**(code **)(*local_58 + 0xa80))();
    if (local_40._4_4_ != 0) {
      if (local_40 < 0) {
        iVar16 = -local_40._4_4_;
      }
      else {
        local_40 = CONCAT44(local_40._4_4_,(int)local_40 - local_40._4_4_);
        FUN_00d23690();
        local_38 = local_38 + local_40._4_4_;
        iVar16 = 0;
      }
      local_40 = CONCAT44(iVar16,(int)local_40);
    }
  }
  plVar12 = local_48;
  FUN_000a9680();
  FUN_00d50b20();
LAB_01c4c799:
  plVar6 = local_58;
  (**(code **)(*(longlong *)*unaff_RSI + 0x4a0))();
  iVar16 = *(int *)((longlong)local_58 + 0xc);
  if (local_50[0] != '\0') {
    FUN_00d50b20();
  }
  if (0 < iVar16) {
    (**(code **)(*(longlong *)*unaff_RSI + 0x4a0))();
    FUN_00d23310();
    pVar14 = (pthread_key_t)CONCAT71((int7)((ulonglong)plVar12 >> 8),local_50[0]);
    pcVar15 = &local_f8;
    if (local_50[0] != '\0') {
      pcVar15 = local_50;
    }
    local_f8 = local_50[0];
    *pcVar15 = '\0';
    if ((local_50[0] != '\0') && (local_58 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_f8 == '\0') && (local_58 != (longlong *)0x0)) {
      FUN_00d50b00();
    }
    if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    lVar10 = unaff_RDI[0x31];
    if (lVar10 != 0) {
      FUN_00d50b00();
    }
    pvVar11 = _pthread_getspecific(pVar14);
    if (pvVar11 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01c82aa0();
    local_b0 = 0;
    if (local_60 == '\0') {
      if (local_68 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_60 = '\0';
    }
    local_b0 = '\x01';
    local_b8 = local_68;
    FUN_017011a0(unaff_RDI + 0x4c);
    local_88._0_8_ = local_58;
    if (local_50[0] == '\0') {
      if (((local_58 != (longlong *)0x0) && (FUN_00d50b00(), local_50[0] != '\0')) &&
         (local_58 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_50[0] = '\0';
    }
    if ((local_b0 != '\0') && (local_b8 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (lVar10 != 0) {
      FUN_00d50b20();
    }
    uVar8 = (**(code **)(*local_58 + 0xa88))();
    local_98._0_4_ = uVar8;
    plVar12 = (longlong *)FUN_00e8fc40();
    FUN_001d7da0();
    uVar18 = (**(code **)(*plVar12 + 0x18))();
    if ((longlong *)local_88._0_8_ != (longlong *)0x0) {
      local_50[0] = '\0';
      local_58 = (longlong *)0x0;
      local_48 = (longlong *)local_88._0_8_;
      local_40 = 0xffffffff;
      local_38 = 0;
      local_40._4_4_ = 0;
      while( true ) {
        if (local_40._4_4_ != 0) {
          if (local_40._4_4_ < 1) {
            iVar16 = -local_40._4_4_;
          }
          else {
            iVar16 = (int)local_40 - local_40._4_4_;
            local_40 = CONCAT44(local_40._4_4_,iVar16);
            uVar18 = FUN_00d23690();
            local_38 = local_38 + local_40._4_4_;
            iVar16 = 0;
          }
          local_40 = CONCAT44(iVar16,(int)local_40);
        }
        lVar10 = DAT_027ebc28;
        lVar13 = (longlong)(int)local_40;
        iVar16 = (int)local_40 + 1;
        local_40 = CONCAT44(local_40._4_4_,iVar16);
        if (*(int *)((longlong)local_48 + 0xc) <= iVar16) break;
        local_58 = *(longlong **)(local_48[2] + 8 + lVar13 * 8);
        if (DAT_027ebc28 != 0) {
          uVar18 = FUN_00d50b00();
        }
        local_158 = lVar10;
        local_150 = '\x01';
        FUN_01d5d9b0(uVar18,&local_158);
        if ((local_150 != '\0') && (local_158 != 0)) {
          FUN_00d50b20();
        }
        FUN_01d5e230();
        uVar18 = FUN_01d65490();
        if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
          uVar18 = FUN_00d50b20();
        }
        if (local_38 + (int)local_40 == (int)unaff_RDI[0x4c]) {
          FUN_01d5e230();
          uVar18 = FUN_01d66ab0();
          if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
            uVar18 = FUN_00d50b20();
          }
        }
      }
      FUN_00018280();
    }
    FUN_01d5dc80();
    local_148 = DAT_027ebc30;
    if (DAT_027ebc30 != 0) {
      FUN_00d50b00();
    }
    lVar10 = DAT_027ebc38;
    local_140 = '\x01';
    if (DAT_027ebc38 != 0) {
      FUN_00d50b00();
    }
    local_138 = lVar10;
    local_130 = '\x01';
    local_128 = 0;
    local_120 = '\0';
    uVar18 = FUN_00d31230(&local_128,&local_138);
    local_a0 = 0;
    local_118 = DAT_027ebc40;
    if (local_50[0] == '\0') {
      if (local_58 != (longlong *)0x0) {
        uVar18 = FUN_00d50b00();
        local_118 = DAT_027ebc40;
      }
    }
    else {
      local_50[0] = '\0';
    }
    local_a0 = '\x01';
    local_a8 = local_58;
    DAT_027ebc40 = local_118;
    if (local_118 != 0) {
      local_a0 = '\x01';
      uVar18 = FUN_00d50b00();
    }
    local_110 = '\x01';
    FUN_01d5d9b0(uVar18,&local_118);
    if ((local_110 != '\0') && (local_118 != 0)) {
      FUN_00d50b20();
    }
    if ((local_a0 != '\0') && (local_a8 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_50[0] != '\0') && (local_58 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_120 != '\0') && (local_128 != 0)) {
      FUN_00d50b20();
    }
    if ((local_130 != '\0') && (local_138 != 0)) {
      FUN_00d50b20();
    }
    if ((local_140 != '\0') && (local_148 != 0)) {
      FUN_00d50b20();
    }
    FUN_01d5e230();
    FUN_01d65490();
    if ((local_50[0] != '\0') && (local_58 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_01d70010();
    if (local_58 == (longlong *)0x0) {
      cVar7 = '\0';
    }
    else {
      FUN_01d70010();
      FUN_01d65ea0();
      cVar7 = FUN_01d5aed0();
      if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_f0 != '\0') && (CONCAT71(uStack_f7,local_f8) != 0)) {
        FUN_00d50b20();
      }
    }
    if ((local_50[0] != '\0') && (local_58 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (cVar7 == '\0') {
      local_100 = '\0';
      local_108 = plVar12;
      FUN_01d6ed60();
      if ((local_100 != '\0') && (local_108 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      FUN_01d6ed40();
      if (plVar12 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if (local_88._0_8_ != 0) {
        FUN_00d50b20();
      }
      if (plVar6 != (longlong *)0x0) {
        FUN_00d50b20();
      }
    }
    else {
      if (plVar12 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if (local_88._0_8_ != 0) {
        FUN_00d50b20();
      }
      if (plVar6 != (longlong *)0x0) {
        FUN_00d50b20();
      }
    }
  }
  return;
}




// ============================================================
// @01c532f0 — 2871 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01c53d6a) */
/* WARNING: Removing unreachable block (ram,0x01c53da0) */
/* WARNING: Removing unreachable block (ram,0x01c53da5) */
/* WARNING: Removing unreachable block (ram,0x01c53dad) */
/* WARNING: Removing unreachable block (ram,0x01c53db2) */
/* WARNING: Removing unreachable block (ram,0x01c53d70) */
/* WARNING: Removing unreachable block (ram,0x01c53d79) */
/* WARNING: Removing unreachable block (ram,0x01c5367f) */
/* WARNING: Removing unreachable block (ram,0x01c5368c) */
/* WARNING: Removing unreachable block (ram,0x01c5336b) */
/* WARNING: Removing unreachable block (ram,0x01c53374) */
/* WARNING: Removing unreachable block (ram,0x01c53629) */
/* WARNING: Removing unreachable block (ram,0x01c53636) */
/* WARNING: Removing unreachable block (ram,0x01c539fd) */
/* WARNING: Removing unreachable block (ram,0x01c53a06) */
/* WARNING: Removing unreachable block (ram,0x01c5379b) */
/* WARNING: Removing unreachable block (ram,0x01c537c0) */
/* WARNING: Removing unreachable block (ram,0x01c5379d) */
/* WARNING: Removing unreachable block (ram,0x01c537c4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01c532f0(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  char cVar4;
  longlong lVar5;
  void *pvVar6;
  pthread_key_t pVar7;
  longlong **pplVar8;
  int iVar9;
  longlong *plVar10;
  undefined8 *unaff_RSI;
  longlong *unaff_RDI;
  undefined8 unaff_R12;
  bool bVar11;
  undefined8 uVar12;
  undefined8 in_XMM0_Qb;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar13 [16];
  undefined8 extraout_XMM0_Qb_00;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined8 in_XMM1_Qb;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  longlong local_180;
  char local_178;
  undefined8 local_150;
  longlong local_148;
  char local_140;
  longlong local_138;
  char local_130;
  undefined1 local_128 [16];
  undefined8 local_110;
  undefined1 local_108 [8];
  undefined8 uStack_100;
  longlong *local_f8;
  char local_f0;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  longlong *local_d8;
  char local_d0;
  longlong *local_c8;
  char local_c0;
  longlong *local_b8;
  char local_b0;
  longlong *local_a8;
  char local_a0;
  float local_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  longlong *local_80;
  longlong *local_78;
  longlong local_70;
  longlong *local_68;
  longlong *local_58;
  char local_50;
  int local_40;
  
  uStack_100 = in_XMM1_Qb;
  local_108 = (undefined1  [8])param_2;
  local_98 = (float)param_1;
  fStack_94 = (float)((ulonglong)param_1 >> 0x20);
  fStack_90 = (float)in_XMM0_Qb;
  fStack_8c = (float)((ulonglong)in_XMM0_Qb >> 0x20);
  FUN_01d48370();
  (**(code **)(*(longlong *)*unaff_RSI + 0x390))();
  (**(code **)(*unaff_RDI + 0x640))();
  if ((local_50 == '\0') && (local_58 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  lVar1 = unaff_RDI[0x3c];
  local_68 = local_58;
  if (lVar1 == 0) {
    local_70 = 0;
    uVar12 = (**(code **)(*local_58 + 0x398))();
    local_dc = (undefined4)CONCAT71((int7)((ulonglong)uVar12 >> 8),1);
    if ((local_178 != '\0') && (local_180 != 0)) {
      FUN_00d50b20();
    }
    local_110 = 0;
    local_70 = 0;
  }
  else {
    FUN_00d50b00();
    local_110 = CONCAT71((int7)((ulonglong)unaff_R12 >> 8),1);
    local_dc = 0;
    local_70 = lVar1;
  }
  (**(code **)(*unaff_RDI + 0x640))();
  pVar7 = 1;
  (**(code **)(*local_f8 + 0x480))(1,0x11,0);
  local_d0 = 0;
  if (local_50 == '\0') {
    if (local_58 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_50 = '\0';
  }
  local_d0 = '\x01';
  local_d8 = local_58;
  FUN_01d488d0();
  if ((local_d0 != '\0') && (local_d8 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_f0 != '\0') && (local_f8 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  local_148 = local_70;
  local_140 = '\0';
  FUN_01d488d0();
  if ((local_140 != '\0') && (local_148 != 0)) {
    FUN_00d50b20();
  }
  plVar10 = (longlong *)*unaff_RSI;
  FUN_00d05530();
  (**(code **)(*plVar10 + 0x3b0))();
  FUN_01d48b40();
  plVar10 = (longlong *)unaff_RDI[0x3d];
  if (plVar10 == (longlong *)0x0) {
    (**(code **)(*local_68 + 0x3a0))();
    local_78 = local_58;
    if ((local_58 != (longlong *)0x0) && (plVar10 = local_78, local_50 == '\0')) {
      FUN_00d50b00();
      plVar10 = local_78;
    }
  }
  else {
    FUN_00d50b00();
  }
  local_78 = plVar10;
  plVar10 = (longlong *)unaff_RDI[0x3e];
  if (plVar10 == (longlong *)0x0) {
    (**(code **)(*local_68 + 0x3a8))();
    local_80 = local_58;
    if ((local_58 != (longlong *)0x0) && (plVar10 = local_80, local_50 == '\0')) {
      FUN_00d50b00();
      plVar10 = local_80;
    }
  }
  else {
    FUN_00d50b00();
  }
  local_80 = plVar10;
  lVar2 = DAT_026e41f0;
  if (DAT_026e41f0 != 0) {
    FUN_00d50b00();
  }
  local_138 = lVar2;
  local_130 = '\x01';
  (**(code **)(*local_68 + 0x3b0))();
  local_c0 = 0;
  if (local_50 == '\0') {
    if (local_58 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_50 = '\0';
  }
  plVar10 = local_68;
  local_c0 = '\x01';
  local_c8 = local_58;
  FUN_01d488d0();
  if ((local_c0 != '\0') && (local_c8 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_130 != '\0') && (local_138 != 0)) {
    FUN_00d50b20();
  }
  FUN_01c41970();
  auVar16._4_4_ = (float)local_108._4_4_ + fStack_94;
  auVar16._12_4_ = uStack_100._4_4_ + fStack_8c;
  local_108._4_4_ = auVar16._4_4_;
  local_108._0_4_ = (float)local_108._0_4_ + local_98;
  uStack_100._0_4_ = (float)uStack_100 + fStack_90;
  uStack_100._4_4_ = auVar16._12_4_;
  auVar16._0_4_ = auVar16._4_4_;
  auVar16._8_4_ = auVar16._12_4_;
  local_128._4_12_ = auVar16._4_12_;
  local_128._0_4_ = auVar16._4_4_ + DAT_02390d00;
  lVar2 = unaff_RDI[0x40];
  if (lVar2 != 0) {
    FUN_00d50b00();
    local_50 = '\0';
    local_58 = (longlong *)0x0;
    local_40 = -1;
    iVar9 = 0;
    while( true ) {
      pVar7 = 0;
      lVar5 = (longlong)local_40;
      local_40 = local_40 + 1;
      if (*(int *)(lVar2 + 0xc) <= local_40) break;
      local_58 = *(longlong **)(*(longlong *)(lVar2 + 0x10) + 8 + lVar5 * 8);
      bVar11 = iVar9 != 0;
      iVar9 = iVar9 + -1;
      if (bVar11) {
        uVar12 = FUN_01c82bc0();
        auVar17._0_4_ = (uint)(float)uVar12 & _DAT_023945e0;
        auVar17._4_4_ = (uint)((ulonglong)uVar12 >> 0x20) & _UNK_023945e4;
        auVar17._8_4_ = (uint)extraout_XMM0_Qb & _UNK_023945e8;
        auVar17._12_4_ = (uint)((ulonglong)extraout_XMM0_Qb >> 0x20) & _UNK_023945ec;
        auVar18._4_12_ = SUB1612(auVar17 | _DAT_023945f0,4);
        auVar18._0_4_ = SUB164(auVar17 | _DAT_023945f0,0) + (float)uVar12;
        roundss(ZEXT816(0),auVar18,0xb);
        (**(code **)(*(longlong *)*unaff_RSI + 0x3e0))();
      }
    }
    FUN_01c79df0();
    FUN_00d50b20();
    plVar10 = local_68;
  }
  lVar2 = unaff_RDI[0x31];
  if (lVar2 != 0) {
    FUN_00d50b00();
    pvVar6 = _pthread_getspecific(pVar7);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    iVar9 = FUN_016c2ea0();
    if (0 < iVar9) {
      if ((int)unaff_RDI[0x39] == 1) {
        local_128._0_4_ = (float)local_128._0_4_ + DAT_0241c6e8;
      }
      local_e4 = 0xffffffff;
      pvVar6 = _pthread_getspecific(pVar7);
      if ((pvVar6 == (void *)0x0) || (lVar5 = FUN_00e8b990(), lVar5 == 0)) {
        plVar10 = (longlong *)unaff_RDI[0x2e];
      }
      else {
        plVar10 = (longlong *)unaff_RDI[0x2e];
      }
      if (plVar10 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      auVar3._4_4_ = fStack_94;
      auVar3._0_4_ = local_98;
      auVar3._8_4_ = fStack_90;
      auVar3._12_4_ = fStack_8c;
      auVar13._4_12_ = auVar3._4_12_;
      auVar13._0_4_ = local_98 + DAT_02390d00;
      uVar12 = (**(code **)(*plVar10 + 0x388))(auVar13._0_8_);
      local_98 = (float)uVar12;
      fStack_94 = (float)((ulonglong)uVar12 >> 0x20);
      FUN_0123fd00();
      pVar7 = (pthread_key_t)&local_e4;
      uVar12 = FUN_016cb9d0(CONCAT44(fStack_94,local_98),1);
      FUN_00d50b20();
      local_e0 = 0xffffffff;
      pvVar6 = _pthread_getspecific(pVar7);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      pplVar8 = &local_f8;
      FUN_016ca840(pplVar8,uVar12,&local_150,&local_e0);
      if ((local_50 == '\0') && (local_58 != (longlong *)0x0)) {
        FUN_00d50b00();
      }
      local_108._0_4_ = local_108._0_4_ + DAT_02390d00 + DAT_02390124;
      while( true ) {
        pVar7 = (pthread_key_t)pplVar8;
        plVar10 = (longlong *)unaff_RDI[0x2e];
        if (plVar10 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        pvVar6 = _pthread_getspecific(pVar7);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_016c98e0();
        uVar12 = (**(code **)(*plVar10 + 0x390))();
        local_98 = (float)uVar12;
        fStack_94 = (float)((ulonglong)uVar12 >> 0x20);
        fStack_90 = (float)extraout_XMM0_Qb_00;
        fStack_8c = (float)((ulonglong)extraout_XMM0_Qb_00 >> 0x20);
        FUN_00d50b20();
        auVar14._0_4_ = (uint)local_98 & _DAT_023945e0;
        auVar14._4_4_ = (uint)fStack_94 & _UNK_023945e4;
        auVar14._8_4_ = (uint)fStack_90 & _UNK_023945e8;
        auVar14._12_4_ = (uint)fStack_8c & _UNK_023945ec;
        auVar15._4_12_ = SUB1612(auVar14 | _DAT_023945f0,4);
        auVar15._0_4_ = SUB164(auVar14 | _DAT_023945f0,0) + local_98;
        auVar16 = roundss(auVar15,auVar15,0xb);
        local_98 = auVar16._0_4_;
        if ((float)local_108._0_4_ < local_98) break;
        (**(code **)(*local_68 + 0x398))();
        local_b0 = 0;
        if (local_50 == '\0') {
          if (local_58 != (longlong *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_50 = '\0';
        }
        local_b0 = '\x01';
        local_b8 = local_58;
        FUN_01d488d0();
        if ((local_b0 != '\0') && (local_b8 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        (**(code **)(*(longlong *)*unaff_RSI + 0x3e0))();
        (**(code **)(*local_68 + 0x3a0))();
        local_a0 = 0;
        if (local_50 == '\0') {
          if (local_58 != (longlong *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_50 = '\0';
        }
        local_a0 = '\x01';
        local_a8 = local_58;
        FUN_01d488d0();
        if ((local_a0 != '\0') && (local_a8 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        pvVar6 = _pthread_getspecific(pVar7);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        cVar4 = FUN_016cb720();
        if (cVar4 == '\0') {
          local_98 = local_98 + DAT_02390d00;
          (**(code **)(*(longlong *)*unaff_RSI + 0x3e0))();
        }
        (**(code **)(*(longlong *)*unaff_RSI + 0x3e0))();
        if (local_150._4_4_ == 0) break;
        pvVar6 = _pthread_getspecific(pVar7);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        pplVar8 = (longlong **)&local_150;
        FUN_016ca9d0(pplVar8,&local_f8,&local_e0);
        if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      plVar10 = local_68;
      if (local_58 != (longlong *)0x0) {
        FUN_00d50b20();
        plVar10 = local_68;
      }
    }
  }
  FUN_01d48390();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if (local_80 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (local_78 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (plVar10 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (lVar1 != 0 && (char)local_dc == '\0') {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @01c41970 — 2514 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01c41fb5) */
/* WARNING: Removing unreachable block (ram,0x01c41fc1) */
/* WARNING: Removing unreachable block (ram,0x01c41f02) */
/* WARNING: Removing unreachable block (ram,0x01c41f07) */
/* WARNING: Removing unreachable block (ram,0x01c41f23) */
/* WARNING: Removing unreachable block (ram,0x01c41f2c) */
/* WARNING: Removing unreachable block (ram,0x01c41b95) */
/* WARNING: Removing unreachable block (ram,0x01c41ba1) */
/* WARNING: Removing unreachable block (ram,0x01c41e56) */
/* WARNING: Removing unreachable block (ram,0x01c41e5f) */
/* WARNING: Removing unreachable block (ram,0x01c422bf) */
/* WARNING: Removing unreachable block (ram,0x01c422c8) */
/* WARNING: Removing unreachable block (ram,0x01c4220b) */
/* WARNING: Removing unreachable block (ram,0x01c42218) */
/* WARNING: Removing unreachable block (ram,0x01c41ca7) */
/* WARNING: Removing unreachable block (ram,0x01c41cb3) */
/* WARNING: Removing unreachable block (ram,0x01c41a56) */
/* WARNING: Removing unreachable block (ram,0x01c41a5f) */
/* WARNING: Removing unreachable block (ram,0x01c41e90) */
/* WARNING: Removing unreachable block (ram,0x01c42300) */
/* WARNING: Removing unreachable block (ram,0x01c422dc) */
/* WARNING: Removing unreachable block (ram,0x01c41dfb) */
/* WARNING: Removing unreachable block (ram,0x01c41e08) */
/* WARNING: Removing unreachable block (ram,0x01c41e73) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01c41970(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  bool bVar4;
  longlong lVar5;
  char cVar6;
  void *pvVar7;
  longlong lVar8;
  ulonglong uVar9;
  pthread_key_t pVar10;
  longlong lVar11;
  longlong unaff_RDI;
  undefined4 uVar12;
  float fVar13;
  undefined8 uVar14;
  float extraout_XMM0_Db;
  undefined8 uVar15;
  double dVar16;
  undefined8 uVar17;
  float extraout_XMM0_Db_00;
  float fVar19;
  double dVar18;
  undefined8 extraout_XMM0_Qb;
  float extraout_XMM0_Dd;
  float fVar20;
  float fVar21;
  undefined1 in_XMM1 [16];
  undefined1 auVar22 [16];
  undefined4 local_118;
  undefined8 local_c0;
  longlong local_70;
  char local_68;
  int local_58;
  longlong local_48;
  char local_40;
  
  lVar5 = local_70;
  if (*(char *)(unaff_RDI + 0x1d0) != '\0') {
    *(undefined1 *)(unaff_RDI + 0x1d0) = 0;
    FUN_00d216c0();
    FUN_00d216c0();
    plVar1 = *(longlong **)(unaff_RDI + 0x170);
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b00();
    }
    lVar2 = *(longlong *)(unaff_RDI + 0x188);
    if (lVar2 != 0) {
      FUN_00d50b00();
      if (plVar1 != (longlong *)0x0) {
        pvVar7 = _pthread_getspecific((pthread_key_t)param_1);
        if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
          param_1 = lVar2;
        }
        FUN_016c2660();
        if ((local_68 == '\0') && (local_70 != 0)) {
          FUN_00d50b00();
        }
        if (*(int *)(local_70 + 0xc) != 0) {
          pvVar7 = _pthread_getspecific((pthread_key_t)param_1);
          if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
            param_1 = lVar2;
          }
          pvVar7 = _pthread_getspecific((pthread_key_t)param_1);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_019079b0();
          local_c0 = FUN_017048a0();
        }
        local_70 = 0;
        local_58 = -1;
        while( true ) {
          lVar8 = (longlong)local_58;
          local_58 = local_58 + 1;
          if (*(int *)(lVar5 + 0xc) <= local_58) break;
          lVar11 = *(longlong *)(lVar5 + 0x10);
          local_70 = *(longlong *)(lVar11 + 8 + lVar8 * 8);
          FUN_01c82a20();
          pVar10 = (pthread_key_t)lVar11;
          if ((local_40 == '\0') && (local_48 != 0)) {
            FUN_00d50b00();
          }
          pvVar7 = _pthread_getspecific(pVar10);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          uVar9 = FUN_019079b0();
          pvVar7 = _pthread_getspecific(pVar10);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          uVar14 = FUN_01907950();
          pvVar7 = _pthread_getspecific(pVar10);
          if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
            pVar10 = (pthread_key_t)lVar2;
          }
          dVar16 = (double)FUN_016d2000();
          uVar12 = (**(code **)(*plVar1 + 0x390))(uVar14);
          FUN_01e3f820();
          fVar13 = extraout_XMM0_Db + in_XMM1._4_4_ + DAT_02390d00;
          fVar21 = fVar13 + DAT_0241c6e8;
          if (*(int *)(unaff_RDI + 0x1c8) != 1) {
            fVar21 = fVar13;
          }
          dVar18 = dVar16 / *(double *)(unaff_RDI + 0x1c0);
          fVar13 = (float)_logf(CONCAT44((int)((ulonglong)dVar18 >> 0x20),(float)dVar18));
          fVar21 = fVar21 - (fVar13 / *(float *)(unaff_RDI + 0x2a8)) * fVar21;
          in_XMM1 = ZEXT416((uint)fVar21);
          *(undefined8 *)(local_48 + 0x38) = uVar14;
          *(undefined4 *)(local_48 + 0xc) = uVar12;
          *(float *)(local_48 + 0x10) = fVar21;
          *(double *)(local_48 + 0x30) = dVar16;
          *(ulonglong *)(local_48 + 0x40) = uVar9;
          *(undefined1 *)(local_48 + 0x48) = 0;
          if (((local_c0._4_4_ != 0) && (uVar9 >> 0x20 != 0)) &&
             (cVar6 = FUN_00e7c000(), cVar6 != '\0')) {
            *(undefined1 *)(local_48 + 0x48) = 1;
            pvVar7 = _pthread_getspecific(pVar10);
            if (pvVar7 != (void *)0x0) {
              FUN_00e8b990();
            }
            local_c0 = FUN_017048a0();
          }
          local_40 = '\0';
          FUN_00d21140();
          FUN_00d50b20();
        }
        lVar8 = lVar5;
        FUN_000beb10();
        pvVar7 = _pthread_getspecific((pthread_key_t)lVar8);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_016d8130();
        if (local_70 == 0) {
          bVar4 = true;
        }
        else {
          FUN_00d50b00();
          local_58 = -1;
          while (local_58 = local_58 + 1, local_58 < *(int *)(local_70 + 0xc)) {
            pVar10 = (pthread_key_t)*(undefined8 *)(local_70 + 0x10);
            FUN_01c829a0();
            if (local_40 == '\0') {
              if (local_48 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_40 = '\0';
            }
            uVar14 = DAT_023dccf4;
            FUN_01c82aa0();
            pvVar7 = _pthread_getspecific(pVar10);
            if (pvVar7 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_01909dc0();
            if ((local_40 != '\0') && (local_48 != 0)) {
              FUN_00d50b20();
            }
            pvVar7 = _pthread_getspecific(pVar10);
            if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
              pVar10 = (pthread_key_t)lVar2;
            }
            uVar15 = FUN_016c98e0();
            pvVar7 = _pthread_getspecific(pVar10);
            if (pvVar7 != (void *)0x0) {
              FUN_00e8b990();
            }
            dVar16 = (double)FUN_016c9410();
            uVar17 = (**(code **)(*plVar1 + 0x390))(uVar15);
            local_118 = (undefined4)uVar17;
            FUN_01e3f820();
            fVar19 = extraout_XMM0_Db_00 + in_XMM1._4_4_;
            fVar20 = extraout_XMM0_Dd + in_XMM1._12_4_;
            fVar13 = fVar19 + DAT_02390d00;
            fVar21 = fVar13 + DAT_0241c6e8;
            if (*(int *)(unaff_RDI + 0x1c8) != 1) {
              fVar21 = fVar13;
            }
            dVar18 = dVar16 / *(double *)(unaff_RDI + 0x1c0);
            fVar13 = (float)_logf(CONCAT44((int)((ulonglong)dVar18 >> 0x20),(float)dVar18));
            fVar21 = fVar21 - (fVar13 / *(float *)(unaff_RDI + 0x2a8)) * fVar21;
            *(undefined8 *)(local_48 + 0x38) = uVar15;
            auVar3._8_8_ = extraout_XMM0_Qb;
            auVar3._0_8_ = uVar17;
            *(undefined4 *)(local_48 + 0xc) = local_118;
            *(float *)(local_48 + 0x10) = fVar21;
            *(double *)(local_48 + 0x30) = dVar16;
            in_XMM1 = ZEXT416((uint)((ulonglong)uVar14 >> 0x20));
            auVar22._4_4_ = fVar19;
            auVar22._0_4_ = fVar21;
            auVar22._8_4_ = fVar20;
            auVar22._12_4_ = fVar20;
            auVar22 = insertps(auVar3,auVar22,0x10);
            auVar22 = insertps(auVar22,ZEXT416((uint)uVar14),0x20);
            auVar22 = insertps(auVar22,in_XMM1,0x30);
            fVar21 = auVar22._4_4_ + _UNK_0241e9b4;
            fVar13 = auVar22._8_4_ + _UNK_0241e9b8;
            fVar19 = auVar22._12_4_ + _UNK_0241e9bc;
            *(float *)(local_48 + 0x1c) = auVar22._0_4_ + _DAT_0241e9b0;
            *(float *)(local_48 + 0x20) = fVar21;
            *(float *)(local_48 + 0x24) = fVar13;
            *(float *)(local_48 + 0x28) = fVar19;
            FUN_01c82aa0();
            if (local_40 == '\0') {
              if (local_48 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_40 = '\0';
            }
            cVar6 = FUN_00d23d70();
            if (local_48 != 0) {
              FUN_00d50b20();
            }
            if ((local_40 != '\0') && (local_48 != 0)) {
              FUN_00d50b20();
            }
            if (cVar6 != '\0') {
              FUN_01c82ae0();
            }
            local_40 = '\0';
            FUN_00d21140();
            FUN_00d50b20();
          }
          FUN_01708ee0();
          bVar4 = false;
        }
        FUN_01c45dc0();
        FUN_01e436c0();
        FUN_01c4d670();
        if (!bVar4) {
          FUN_00d50b20();
        }
        if (lVar5 != 0) {
          FUN_00d50b20();
        }
      }
      FUN_00d50b20();
    }
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  return;
}




// ============================================================
// @01c4e530 — 1926 bytes
// ============================================================

void FUN_01c4e530(pthread_key_t param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  char cVar5;
  int iVar6;
  void *pvVar7;
  char *pcVar8;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  undefined4 uVar9;
  longlong local_130;
  char local_128;
  undefined1 local_100 [8];
  undefined1 local_f8;
  longlong local_f0;
  char local_e8;
  longlong local_e0;
  char local_d8;
  longlong local_d0;
  char local_c8;
  longlong local_c0;
  char local_b8;
  longlong local_b0;
  char local_a8;
  longlong local_a0;
  char local_98;
  longlong local_90;
  char local_88;
  longlong local_80;
  char local_78;
  longlong local_70;
  char local_68;
  longlong local_60;
  int local_54;
  char local_50;
  undefined7 uStack_4f;
  char local_48;
  longlong *local_40;
  char local_38 [8];
  
  FUN_00d3ecc0();
  plVar1 = local_40;
  local_f0 = DAT_02702300;
  if (DAT_02702300 != 0) {
    FUN_00d50b00();
  }
  local_e8 = '\x01';
  cVar4 = (**(code **)(*plVar1 + 0x50))();
  if ((local_e8 != '\0') && (local_f0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar4 == '\0') {
    FUN_00d3ecc0();
    plVar1 = local_40;
    local_e0 = DAT_027ebc50;
    if (DAT_027ebc50 != 0) {
      FUN_00d50b00();
    }
    local_d8 = '\x01';
    cVar4 = (**(code **)(*plVar1 + 0x50))();
    if ((local_d8 != '\0') && (local_e0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (cVar4 == '\0') {
      FUN_00d3ecc0();
      plVar1 = local_40;
      local_d0 = DAT_026fce70;
      if (DAT_026fce70 != 0) {
        FUN_00d50b00();
      }
      local_c8 = '\x01';
      cVar4 = (**(code **)(*plVar1 + 0x50))();
      cVar5 = '\x01';
      if (cVar4 == '\0') {
        FUN_00d3ecc0();
        local_c0 = DAT_027ebc60;
        plVar1 = (longlong *)CONCAT71(uStack_4f,local_50);
        if (DAT_027ebc60 != 0) {
          FUN_00d50b00();
        }
        local_b8 = '\x01';
        cVar5 = (**(code **)(*plVar1 + 0x50))();
        if ((local_b8 != '\0') && (local_c0 != 0)) {
          FUN_00d50b20();
        }
        if ((local_48 != '\0') && (CONCAT71(uStack_4f,local_50) != 0)) {
          FUN_00d50b20();
        }
      }
      if ((local_c8 != '\0') && (local_d0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (cVar5 == '\0') {
        FUN_00d3ecc0();
        plVar1 = local_40;
        local_b0 = DAT_027f0ae0;
        if (DAT_027f0ae0 != 0) {
          FUN_00d50b00();
        }
        local_a8 = '\x01';
        cVar4 = (**(code **)(*plVar1 + 0x50))();
        if ((local_a8 != '\0') && (local_b0 != 0)) {
          FUN_00d50b20();
        }
        if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (cVar4 == '\0') {
          FUN_00d3ecc0();
          plVar1 = local_40;
          local_a0 = DAT_027e3b30;
          if (DAT_027e3b30 != 0) {
            FUN_00d50b00();
          }
          local_98 = '\x01';
          cVar4 = (**(code **)(*plVar1 + 0x50))();
          if ((local_98 != '\0') && (local_a0 != 0)) {
            FUN_00d50b20();
          }
          if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (cVar4 == '\0') {
            FUN_00d3ecc0();
            plVar1 = local_40;
            local_90 = DAT_027295a0;
            if (DAT_027295a0 != 0) {
              FUN_00d50b00();
            }
            local_88 = '\x01';
            cVar4 = (**(code **)(*plVar1 + 0x50))();
            if ((local_88 != '\0') && (local_90 != 0)) {
              FUN_00d50b20();
            }
            if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if (cVar4 == '\0') {
              FUN_00d3ecc0();
              plVar1 = local_40;
              local_80 = DAT_027ebc70;
              if (DAT_027ebc70 != 0) {
                FUN_00d50b00();
              }
              local_78 = '\x01';
              cVar4 = (**(code **)(*plVar1 + 0x50))();
              if ((local_78 != '\0') && (local_80 != 0)) {
                FUN_00d50b20();
              }
              if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              if (cVar4 != '\0') {
                cVar4 = FUN_00e34d40();
                if (cVar4 != '\0') {
                  FUN_013fb420();
                  pvVar7 = _pthread_getspecific(param_1);
                  if (pvVar7 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  FUN_0132d610();
                  plVar1 = local_40;
                  if (local_38[0] == '\0') {
                    if (((local_40 != (longlong *)0x0) && (FUN_00d50b00(), local_38[0] != '\0')) &&
                       (local_40 != (longlong *)0x0)) {
                      FUN_00d50b20();
                    }
                  }
                  else {
                    local_38[0] = '\0';
                  }
                  if ((local_48 != '\0') && (CONCAT71(uStack_4f,local_50) != 0)) {
                    FUN_00d50b20();
                  }
                  if (plVar1 != (longlong *)0x0) {
                    FUN_01c4f180(0,1,param_3,param_4,0);
                    FUN_00d50b20();
                  }
                }
                FUN_01c4f640();
              }
            }
            else if ((unaff_RDI[0x59] != 0) && (unaff_RDI[0x5a] != 0)) {
              plVar1 = *(longlong **)(unaff_RDI[0x5a] + 0x78);
              FUN_00e340b0();
              (**(code **)(*plVar1 + 0x928))();
              (**(code **)(*unaff_RDI + 0x620))();
            }
          }
          else {
            FUN_016bf0c0();
            *(undefined1 *)(unaff_RDI + 0x43) = 0;
          }
        }
        else {
          FUN_00d3ecf0();
          plVar1 = local_40;
          if ((((local_38[0] == '\0') && (local_40 != (longlong *)0x0)) &&
              (FUN_00d50b00(), local_38[0] != '\0')) && (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          FUN_01e40eb0();
          plVar3 = local_40;
          pcVar8 = &local_50;
          if (local_38[0] != '\0') {
            pcVar8 = local_38;
          }
          local_50 = local_38[0];
          *pcVar8 = '\0';
          if ((local_38[0] != '\0') && (plVar3 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (plVar3 != (longlong *)0x0) {
            FUN_01e40eb0();
            plVar3 = local_40;
            if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if ((plVar3 == unaff_RDI) && (iVar6 = (**(code **)(*plVar1 + 0xa88))(), -1 < iVar6)) {
              local_54 = iVar6;
              FUN_01c41970();
              lVar2 = unaff_RDI[0x40];
              if (lVar2 != 0) {
                FUN_00d50b00();
              }
              local_60 = CONCAT44(local_60._4_4_,*(undefined4 *)(lVar2 + 0xc));
              FUN_00d50b20();
              if (local_54 < (int)local_60) {
                FUN_01c41970();
                lVar2 = unaff_RDI[0x40];
                if (lVar2 != 0) {
                  FUN_00d50b00();
                }
                local_60 = lVar2;
                uVar9 = FUN_01c82aa0();
                plVar3 = local_40;
                if (local_38[0] == '\0') {
                  if (local_40 != (longlong *)0x0) {
                    uVar9 = FUN_00d50b00();
                  }
                }
                else {
                  local_38[0] = '\0';
                }
                local_f8 = 1;
                FUN_01c45890(uVar9,local_100);
                if ((local_128 != '\0') && (local_130 != 0)) {
                  FUN_00d50b20();
                }
                if (plVar3 != (longlong *)0x0) {
                  FUN_00d50b20();
                }
                if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                FUN_00d50b20();
              }
            }
            if (local_50 != '\0') {
              FUN_00d50b20();
            }
          }
          if (plVar1 != (longlong *)0x0) {
            FUN_00d50b20();
          }
        }
      }
      else {
        (**(code **)(*unaff_RDI + 0x620))();
        *(undefined1 *)(unaff_RDI + 0x3a) = 1;
      }
    }
    else {
      *(undefined1 *)((longlong)unaff_RDI + 0x2e1) = 0;
    }
  }
  else {
    *(undefined1 *)((longlong)unaff_RDI + 0x2e1) = 1;
  }
  local_70 = *unaff_RSI;
  local_68 = '\0';
  FUN_00d530a0();
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @01c522e0 — 1674 bytes
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01c522e0(void)

{
  longlong lVar1;
  double dVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  longlong lVar10;
  longlong unaff_RDI;
  ulonglong uVar11;
  longlong local_130;
  char local_128;
  longlong local_120;
  char local_118;
  longlong local_110;
  char local_108;
  longlong local_100;
  char local_f8;
  longlong local_f0;
  char local_e8;
  longlong local_e0;
  char local_d8;
  longlong local_d0;
  char local_c8;
  longlong local_c0;
  char local_b8;
  longlong local_b0;
  char local_a8;
  longlong local_a0;
  char local_98;
  longlong *local_90;
  char local_88;
  longlong local_30;
  char local_28;
  
  FUN_01e3b710();
  puVar7 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar7 = &DAT_0266ddf0;
  puVar7[2] = 0;
  puVar7[3] = 0;
  puVar7[4] = 0;
  puVar7[5] = 0;
  puVar7[6] = 0;
  puVar7[7] = 0;
  FUN_00d500e0();
  lVar1 = *(longlong *)(unaff_RDI + 0x2a0);
  *(undefined8 **)(unaff_RDI + 0x2a0) = puVar7;
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  *(undefined1 *)(unaff_RDI + 400) = 1;
  plVar8 = (longlong *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar8 + 0x18))();
  lVar1 = *(longlong *)(unaff_RDI + 0x1d8);
  *(longlong **)(unaff_RDI + 0x1d8) = plVar8;
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  *(undefined1 *)(unaff_RDI + 0x22f) = 1;
  *(undefined1 *)(unaff_RDI + 0x1d0) = 1;
  uVar6 = _UNK_0241ea08;
  *(undefined8 *)(unaff_RDI + 0x1b8) = _DAT_0241ea00;
  *(undefined8 *)(unaff_RDI + 0x1c0) = uVar6;
  uVar5 = DAT_023dccf4._4_4_;
  uVar4 = (undefined4)DAT_023dccf4;
  uVar3 = DAT_023dccec._4_4_;
  *(undefined4 *)(unaff_RDI + 0x21c) = (undefined4)DAT_023dccec;
  *(undefined4 *)(unaff_RDI + 0x220) = uVar3;
  *(undefined4 *)(unaff_RDI + 0x224) = uVar4;
  *(undefined4 *)(unaff_RDI + 0x228) = uVar5;
  FUN_016bf040();
  lVar1 = *(longlong *)(unaff_RDI + 0x210);
  lVar10 = lVar1;
  if (lVar1 == local_30) goto LAB_01c52423;
  lVar10 = local_30;
  if (local_28 == '\0') {
    if (local_30 == 0) {
      lVar10 = 0;
      goto LAB_01c523d8;
    }
    FUN_00d50b00();
    lVar1 = *(longlong *)(unaff_RDI + 0x210);
    *(longlong *)(unaff_RDI + 0x210) = local_30;
  }
  else {
    local_28 = '\0';
LAB_01c523d8:
    *(longlong *)(unaff_RDI + 0x210) = lVar10;
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
    lVar10 = local_30;
  }
LAB_01c52423:
  if ((local_28 != '\0') && (lVar10 != 0)) {
    FUN_00d50b20();
  }
  puVar9 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar9 = &DAT_025823b0;
  puVar9[4] = 0;
  *(undefined8 *)((longlong)puVar9 + 0xc) = 0;
  *(undefined8 *)((longlong)puVar9 + 0x12) = 0;
  (*DAT_025823c8)();
  puVar7 = *(undefined8 **)(unaff_RDI + 0x150);
  if (puVar7 == puVar9) {
    FUN_00d50b20();
  }
  else {
    *(undefined8 **)(unaff_RDI + 0x150) = puVar9;
    if (puVar7 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
  }
  FUN_00df2b00();
  local_88 = 0;
  (**(code **)(*(longlong *)(unaff_RDI + 0x140) + 0x10))();
  FUN_00d50b00();
  local_88 = '\x01';
  local_90 = (longlong *)(unaff_RDI + 0x140);
  FUN_00df2b40();
  if ((local_88 != '\0') && (local_90 != (longlong *)0x0)) {
    (**(code **)(*local_90 + 0x10))();
    FUN_00d50b20();
  }
  FUN_00df2c50();
  FUN_00d403d0();
  FUN_00d50b00();
  local_130 = DAT_027e3b30;
  if (DAT_027e3b30 != 0) {
    FUN_00d50b00();
  }
  local_128 = '\x01';
  local_120 = 0;
  local_118 = '\0';
  FUN_00d41430(&local_120,&local_130);
  if ((local_118 != '\0') && (local_120 != 0)) {
    FUN_00d50b20();
  }
  if ((local_128 != '\0') && (local_130 != 0)) {
    FUN_00d50b20();
  }
  if (unaff_RDI != 0) {
    FUN_00d50b20();
  }
  if ((local_28 != '\0') && (local_30 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d403d0();
  FUN_00d50b00();
  local_110 = DAT_027f0ae0;
  if (DAT_027f0ae0 != 0) {
    FUN_00d50b00();
  }
  local_108 = '\x01';
  local_100 = 0;
  local_f8 = '\0';
  FUN_00d41430(&local_100,&local_110);
  if ((local_f8 != '\0') && (local_100 != 0)) {
    FUN_00d50b20();
  }
  if ((local_108 != '\0') && (local_110 != 0)) {
    FUN_00d50b20();
  }
  if (unaff_RDI != 0) {
    FUN_00d50b20();
  }
  if ((local_28 != '\0') && (local_30 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d403d0();
  FUN_00d50b00();
  local_f0 = DAT_026fce70;
  if (DAT_026fce70 != 0) {
    FUN_00d50b00();
  }
  local_e8 = '\x01';
  local_e0 = 0;
  local_d8 = '\0';
  FUN_00d41430(&local_e0,&local_f0);
  if ((local_d8 != '\0') && (local_e0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_e8 != '\0') && (local_f0 != 0)) {
    FUN_00d50b20();
  }
  if (unaff_RDI != 0) {
    FUN_00d50b20();
  }
  if ((local_28 != '\0') && (local_30 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d403d0();
  FUN_00d50b00();
  local_d0 = DAT_02702300;
  if (DAT_02702300 != 0) {
    FUN_00d50b00();
  }
  local_c8 = '\x01';
  local_c0 = 0;
  local_b8 = '\0';
  FUN_00d41430(&local_c0,&local_d0);
  if ((local_b8 != '\0') && (local_c0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_c8 != '\0') && (local_d0 != 0)) {
    FUN_00d50b20();
  }
  if (unaff_RDI != 0) {
    FUN_00d50b20();
  }
  if ((local_28 != '\0') && (local_30 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d403d0();
  FUN_00d50b00();
  local_b0 = DAT_027ebc50;
  if (DAT_027ebc50 != 0) {
    FUN_00d50b00();
  }
  local_a8 = '\x01';
  local_a0 = 0;
  local_98 = '\0';
  FUN_00d41430(&local_a0,&local_b0);
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_a8 != '\0') && (local_b0 != 0)) {
    FUN_00d50b20();
  }
  if (unaff_RDI != 0) {
    FUN_00d50b20();
  }
  if ((local_28 != '\0') && (local_30 != 0)) {
    FUN_00d50b20();
  }
  uVar11 = -(ulonglong)(*(double *)(unaff_RDI + 0x1c0) == 0.0);
  dVar2 = (double)_log(SUB84(*(double *)(unaff_RDI + 0x1b8) /
                             (double)(~uVar11 & (ulonglong)*(double *)(unaff_RDI + 0x1c0) |
                                     DAT_0238fee8 & uVar11),0));
  *(float *)(unaff_RDI + 0x2a8) = (float)dVar2;
  return;
}




// ============================================================
// @01c4f640 — 1582 bytes
// ============================================================

void FUN_01c4f640(void)

{
  longlong lVar1;
  longlong lVar2;
  void *pvVar3;
  undefined8 *puVar4;
  pthread_key_t pVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  bool bVar8;
  longlong local_138;
  char local_130;
  longlong local_128;
  char local_120;
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
  longlong local_c8;
  char local_c0;
  longlong local_a8;
  char local_a0;
  longlong local_88;
  char local_80;
  longlong local_68;
  char local_60;
  longlong local_48;
  char local_40;
  longlong local_38;
  char local_30;
  
  lVar7 = *unaff_RSI;
  if (*(longlong *)(unaff_RDI + 0x2c8) != lVar7) {
    if (*(longlong *)(unaff_RDI + 0x2c8) != 0) {
      FUN_00d403d0();
      FUN_00d50b00();
      local_128 = DAT_027295a0;
      if (DAT_027295a0 != 0) {
        FUN_00d50b00();
      }
      local_120 = '\x01';
      local_a0 = 0;
      lVar7 = *(longlong *)(unaff_RDI + 0x2c8);
      if (lVar7 != 0) {
        FUN_00d50b00();
      }
      local_a0 = '\x01';
      local_a8 = lVar7;
      FUN_00d41040(&local_a8,&local_128);
      if ((local_a0 != '\0') && (local_a8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_120 != '\0') && (local_128 != 0)) {
        FUN_00d50b20();
      }
      if (unaff_RDI != 0) {
        FUN_00d50b20();
      }
      if ((local_30 != '\0') && (local_38 != 0)) {
        FUN_00d50b20();
      }
      FUN_00d403d0();
      FUN_00d50b00();
      local_118 = DAT_027ebc70;
      if (DAT_027ebc70 != 0) {
        FUN_00d50b00();
      }
      local_110 = '\x01';
      local_80 = 0;
      lVar7 = *(longlong *)(unaff_RDI + 0x2c8);
      if (lVar7 != 0) {
        FUN_00d50b00();
      }
      local_80 = '\x01';
      plVar6 = &local_88;
      local_88 = lVar7;
      FUN_00d41040(plVar6,&local_118);
      pVar5 = (pthread_key_t)plVar6;
      if ((local_80 != '\0') && (local_88 != 0)) {
        FUN_00d50b20();
      }
      if ((local_110 != '\0') && (local_118 != 0)) {
        FUN_00d50b20();
      }
      if (unaff_RDI != 0) {
        FUN_00d50b20();
      }
      if ((local_30 != '\0') && (local_38 != 0)) {
        FUN_00d50b20();
      }
      FUN_013fb420();
      if (local_38 == 0) {
        bVar8 = false;
      }
      else {
        FUN_013fb420();
        pvVar3 = _pthread_getspecific(pVar5);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01320d00();
        bVar8 = local_138 != 0;
        if ((local_130 != '\0') && (local_138 != 0)) {
          FUN_00d50b20();
        }
        if ((local_100 != '\0') && (local_108 != 0)) {
          FUN_00d50b20();
        }
      }
      if ((local_30 != '\0') && (local_38 != 0)) {
        FUN_00d50b20();
      }
      if (bVar8) {
        local_f0 = '\0';
        local_f8 = 0;
        FUN_013fb3d0();
        if ((local_f0 != '\0') && (local_f8 != 0)) {
          FUN_00d50b20();
        }
      }
      if (*(longlong *)(unaff_RDI + 0x2d0) != 0) {
        FUN_00d50b00();
        if (*(longlong *)(unaff_RDI + 0x2d0) != 0) {
          *(undefined8 *)(unaff_RDI + 0x2d0) = 0;
          FUN_00d50b20();
        }
        FUN_01e54790();
        FUN_00d50b20();
      }
      lVar7 = *unaff_RSI;
    }
    lVar1 = *(longlong *)(unaff_RDI + 0x2c8);
    lVar2 = lVar1;
    if (lVar1 != lVar7) {
      if (lVar7 != 0) {
        FUN_00d50b00();
      }
      *(longlong *)(unaff_RDI + 0x2c8) = lVar7;
      lVar2 = lVar7;
      if (lVar1 != 0) {
        FUN_00d50b20();
        lVar2 = *(longlong *)(unaff_RDI + 0x2c8);
      }
    }
    if (lVar2 != 0) {
      FUN_00d403d0();
      FUN_00d50b00();
      local_e8 = DAT_027295a0;
      if (DAT_027295a0 != 0) {
        FUN_00d50b00();
      }
      local_e0 = '\x01';
      local_60 = 0;
      lVar7 = *(longlong *)(unaff_RDI + 0x2c8);
      if (lVar7 != 0) {
        FUN_00d50b00();
      }
      local_60 = '\x01';
      local_68 = lVar7;
      FUN_00d41430(&local_68,&local_e8);
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
      if ((local_e0 != '\0') && (local_e8 != 0)) {
        FUN_00d50b20();
      }
      if (unaff_RDI != 0) {
        FUN_00d50b20();
      }
      if ((local_30 != '\0') && (local_38 != 0)) {
        FUN_00d50b20();
      }
      FUN_00d403d0();
      FUN_00d50b00();
      local_d8 = DAT_027ebc70;
      if (DAT_027ebc70 != 0) {
        FUN_00d50b00();
      }
      local_d0 = '\x01';
      local_40 = 0;
      lVar7 = *(longlong *)(unaff_RDI + 0x2c8);
      if (lVar7 != 0) {
        FUN_00d50b00();
      }
      local_40 = '\x01';
      local_48 = lVar7;
      FUN_00d41430(&local_48,&local_d8);
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if ((local_d0 != '\0') && (local_d8 != 0)) {
        FUN_00d50b20();
      }
      if (unaff_RDI != 0) {
        FUN_00d50b20();
      }
      if ((local_30 != '\0') && (local_38 != 0)) {
        FUN_00d50b20();
      }
      puVar4 = (undefined8 *)FUN_00e8fc40();
      FUN_000161a0();
      *puVar4 = &DAT_0266e168;
      puVar4[0xe] = 0;
      puVar4[0xf] = 0;
      FUN_00d500e0();
      lVar7 = *(longlong *)(unaff_RDI + 0x2d0);
      *(undefined8 **)(unaff_RDI + 0x2d0) = puVar4;
      if (lVar7 != 0) {
        FUN_00d50b20();
        puVar4 = *(undefined8 **)(unaff_RDI + 0x2d0);
      }
      lVar7 = puVar4[0xe];
      if (lVar7 != unaff_RDI) {
        FUN_00d50b00();
        puVar4[0xe] = unaff_RDI;
        if (lVar7 != 0) {
          FUN_00d50b20();
        }
      }
      lVar7 = *(longlong *)(unaff_RDI + 0x2d0);
      if (lVar7 != 0) {
        FUN_00d50b00();
      }
      local_c0 = '\x01';
      local_c8 = lVar7;
      FUN_01d83990();
      if ((local_c0 != '\0') && (local_c8 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  return;
}




// ============================================================
// @01c4d670 — 1225 bytes
// ============================================================

void FUN_01c4d670(undefined4 param_1,undefined4 param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong *plVar3;
  ulonglong uVar4;
  longlong lVar5;
  char *pcVar6;
  longlong lVar7;
  longlong unaff_RDI;
  ulonglong uVar8;
  undefined4 uVar9;
  undefined8 local_d0;
  undefined1 local_c8;
  ulonglong local_c0;
  undefined8 local_b8;
  longlong *local_b0;
  char local_a8;
  longlong local_98;
  char local_90;
  longlong *local_88;
  char local_80;
  undefined8 local_78;
  longlong *local_70;
  char local_68 [8];
  longlong *local_60;
  int local_58;
  undefined8 local_54;
  char local_48;
  undefined7 uStack_47;
  char local_40;
  longlong local_38;
  
  if (*(int *)(unaff_RDI + 0x1c8) == 1) {
    lVar7 = *(longlong *)(unaff_RDI + 0x1d8);
    if (lVar7 == 0) {
      local_78 = 0;
      lVar7 = 0;
    }
    else {
      local_78 = 0;
      uVar2 = FUN_00d50b00();
      local_78 = CONCAT71((int7)((ulonglong)uVar2 >> 8),1);
    }
    plVar3 = (longlong *)FUN_00e8fc40();
    FUN_00022d50();
    (**(code **)(*plVar3 + 0x18))();
    lVar5 = *(longlong *)(unaff_RDI + 0x1d8);
    *(longlong **)(unaff_RDI + 0x1d8) = plVar3;
    if (lVar5 != 0) {
      FUN_00d50b20();
    }
    lVar5 = *(longlong *)(unaff_RDI + 0x200);
    uVar4 = (ulonglong)*(uint *)(lVar5 + 0xc);
    local_38 = lVar7;
    if (0 < (int)*(uint *)(lVar5 + 0xc)) {
      uVar8 = 0;
      do {
        local_c0 = uVar8 + 1;
        if ((longlong)local_c0 < (longlong)(int)uVar4) {
          local_b8 = *(undefined8 *)(*(longlong *)(lVar5 + 0x10) + 8 + uVar8 * 8);
        }
        else {
          local_b8 = 0;
        }
        uVar9 = FUN_01c82aa0();
        local_90 = 0;
        local_98 = CONCAT71(uStack_47,local_48);
        if (local_40 == '\0') {
          if (local_98 != 0) {
            uVar9 = FUN_00d50b00();
          }
        }
        else {
          local_40 = '\0';
        }
        local_90 = '\x01';
        FUN_01c4de00(uVar9,&local_98);
        plVar3 = local_70;
        if (local_68[0] == '\0') {
          if (((local_70 != (longlong *)0x0) && (FUN_00d50b00(), local_68[0] != '\0')) &&
             (local_70 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_68[0] = '\0';
        }
        if ((local_90 != '\0') && (local_98 != 0)) {
          FUN_00d50b20();
        }
        if ((local_40 != '\0') && (CONCAT71(uStack_47,local_48) != 0)) {
          FUN_00d50b20();
        }
        if (plVar3 == (longlong *)0x0) {
          plVar3 = (longlong *)FUN_00e8fc40();
          FUN_0006daf0();
          *plVar3 = (longlong)&DAT_0266d110;
          plVar3[2] = (longlong)&DAT_0266da38;
          FUN_00d500e0();
        }
        else {
          FUN_01c82aa0();
          plVar1 = (longlong *)CONCAT71(uStack_47,local_48);
          if (local_40 == '\0') {
            if (plVar1 != (longlong *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_40 = '\0';
          }
          local_68[0] = '\0';
          local_70 = plVar1;
          FUN_00ca13a0();
          if ((local_68[0] != '\0') && (local_70 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (plVar1 != (longlong *)0x0) {
            FUN_00d50b20();
          }
          if ((local_40 != '\0') && (CONCAT71(uStack_47,local_48) != 0)) {
            FUN_00d50b20();
          }
        }
        local_d0 = local_b8;
        local_c8 = 0;
        FUN_01c4c1c0(param_1,param_2,&local_d0,uVar8 & 0xffffffff);
        local_a8 = '\0';
        local_b0 = plVar3;
        uVar9 = FUN_01c82aa0();
        local_88 = local_70;
        local_80 = 0;
        if (local_68[0] == '\0') {
          if (local_70 != (longlong *)0x0) {
            uVar9 = FUN_00d50b00();
          }
        }
        else {
          local_68[0] = '\0';
        }
        local_80 = '\x01';
        FUN_01c4deb0(uVar9,&local_88);
        if ((local_80 != '\0') && (local_88 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_68[0] != '\0') && (local_70 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_a8 != '\0') && (local_b0 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar3 != (longlong *)0x0) {
          FUN_00d50b20();
        }
        lVar5 = *(longlong *)(unaff_RDI + 0x200);
        uVar4 = (ulonglong)*(int *)(lVar5 + 0xc);
        uVar8 = local_c0;
      } while ((longlong)local_c0 < (longlong)uVar4);
    }
    lVar7 = local_38;
    FUN_01c464b0();
  }
  else {
    lVar7 = *(longlong *)(unaff_RDI + 0x1d8);
    if (lVar7 == 0) {
      return;
    }
    local_78 = 0;
    uVar2 = FUN_00d50b00();
    local_78 = CONCAT71((int7)((ulonglong)uVar2 >> 8),1);
  }
  if (lVar7 == 0) {
    return;
  }
  FUN_00ca1380();
  plVar3 = local_70;
  pcVar6 = &local_48;
  if (local_68[0] != '\0') {
    pcVar6 = local_68;
  }
  local_48 = local_68[0];
  *pcVar6 = '\0';
  if ((local_68[0] != '\0') && (local_70 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (local_48 == '\0') {
    if (plVar3 == (longlong *)0x0) goto LAB_01c4db45;
    FUN_00d50b00();
  }
  else if (plVar3 == (longlong *)0x0) goto LAB_01c4db45;
  local_68[0] = '\0';
  local_70 = (longlong *)0x0;
  local_60 = plVar3;
  local_54 = 0;
  for (lVar7 = 0; local_58 = (int)lVar7, local_58 < *(int *)((longlong)plVar3 + 0xc);
      lVar7 = lVar7 + 1) {
    local_70 = *(longlong **)(plVar3[2] + lVar7 * 8);
    (**(code **)(*local_70 + 0x478))();
  }
  FUN_000a9680();
  FUN_00d50b20();
LAB_01c4db45:
  FUN_00ca1340();
  if ((char)local_78 != '\0') {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @01c508b0 — 1118 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01c50ba5) */
/* WARNING: Removing unreachable block (ram,0x01c50bb1) */

void FUN_01c508b0(pthread_key_t param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  void *pvVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *unaff_RSI;
  undefined8 *unaff_RDI;
  longlong local_c0;
  char local_b8;
  longlong local_b0;
  char local_a8;
  longlong *local_a0;
  char local_98;
  longlong local_90;
  char local_88;
  longlong local_80;
  char local_78;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  undefined8 local_50;
  longlong local_48;
  char local_40;
  undefined8 *local_38;
  
  puVar2 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar2 = &DAT_0266c9c0;
  puVar2[2] = &DAT_0266cd48;
  puVar2[3] = 0;
  FUN_00d500e0();
  lVar1 = *unaff_RSI;
  puVar2[3] = lVar1;
  if (*(longlong *)(lVar1 + 0x1a8) == 0) {
    if (*(longlong *)(lVar1 + 0x198) == 0) goto LAB_01c50af2;
    FUN_00d50b00();
    FUN_00d50b20();
    lVar1 = *(longlong *)(puVar2[3] + 0x198);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    lVar4 = FUN_00e8b990();
    if (lVar4 == 0) {
      local_50 = 0;
      lVar4 = 0;
    }
    else {
      uVar5 = FUN_00d50b00();
      local_50 = CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  else {
    FUN_00d50b00();
    FUN_00d50b20();
    lVar1 = *(longlong *)(puVar2[3] + 0x1a8);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    lVar4 = FUN_00e8b990();
    if (lVar4 == 0) {
      local_50 = 0;
      lVar4 = 0;
    }
    else {
      uVar5 = FUN_00d50b00();
      local_50 = CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  if (lVar4 != 0) {
    local_c0 = 0;
    local_b8 = '\0';
    local_38 = puVar2;
    FUN_000be210();
    FUN_00e86210();
    local_b0 = DAT_026dc288;
    if (DAT_026dc288 != 0) {
      FUN_00d50b00();
    }
    local_a8 = '\x01';
    FUN_00c841b0();
    local_70 = local_48;
    local_68 = 0;
    if (local_40 == '\0') {
      if (local_48 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_40 = '\0';
    }
    local_68 = '\x01';
    FUN_00cbad30(&local_70,&local_c0,0x20);
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if ((local_a8 != '\0') && (local_b0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_b8 != '\0') && (local_c0 != 0)) {
      FUN_00d50b20();
    }
    local_98 = '\0';
    local_90 = 0;
    local_88 = '\0';
    local_a0 = puVar2 + 2;
    FUN_002771e0();
    FUN_00e86210();
    local_80 = DAT_026dc288;
    if (DAT_026dc288 != 0) {
      FUN_00d50b00();
    }
    local_78 = '\x01';
    FUN_00c841b0();
    puVar2 = local_38;
    local_60 = local_48;
    local_58 = 0;
    if (local_40 == '\0') {
      if (local_48 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_40 = '\0';
    }
    local_58 = '\x01';
    FUN_00cbad30(&local_60,&local_90,0x20);
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
    if ((local_98 != '\0') && (local_a0 != (longlong *)0x0)) {
      (**(code **)(*local_a0 + 0x10))();
      FUN_00d50b20();
    }
    *unaff_RDI = puVar2;
    *(undefined1 *)(unaff_RDI + 1) = 1;
    if ((char)local_50 == '\0') {
      return;
    }
    FUN_00d50b20();
    return;
  }
LAB_01c50af2:
  *(undefined1 *)(unaff_RDI + 1) = 0;
  *unaff_RDI = 0;
  FUN_00d50b20();
  return;
}




// ============================================================
// @01c51df0 — 778 bytes
// ============================================================

void FUN_01c51df0(void)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  ulonglong uVar4;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  longlong lVar5;
  longlong *local_98;
  char local_90;
  longlong local_88;
  char local_80;
  longlong *local_78;
  char local_70;
  longlong local_68;
  char local_60;
  longlong local_58;
  char local_50;
  longlong local_48;
  char local_40;
  longlong *local_38;
  char local_30;
  
  lVar5 = *(longlong *)(unaff_RDI + 0x178);
  lVar1 = *unaff_RSI;
  if (lVar5 == lVar1) {
    return;
  }
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  *(longlong *)(unaff_RDI + 0x178) = lVar1;
  if (lVar5 != 0) {
    FUN_00d50b20();
  }
  if (*(longlong **)(unaff_RDI + 0x180) == (longlong *)0x0) goto LAB_01c51f1e;
  (**(code **)(**(longlong **)(unaff_RDI + 0x180) + 0x3a0))();
  plVar3 = local_38;
  plVar2 = *(longlong **)(unaff_RDI + 0x170);
  if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar3 == plVar2) {
LAB_01c51f0d:
    lVar5 = *(longlong *)(unaff_RDI + 0x180);
  }
  else {
    (**(code **)(**(longlong **)(unaff_RDI + 0x180) + 0x3a0))();
    plVar2 = local_38;
    local_50 = 0;
    local_58 = *(longlong *)(unaff_RDI + 0x180);
    if (local_58 != 0) {
      FUN_00d50b00();
    }
    local_50 = '\x01';
    (**(code **)(*plVar2 + 0x3e0))();
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    lVar5 = 0;
    if (*(longlong *)(unaff_RDI + 0x180) != 0) {
      *(undefined8 *)(unaff_RDI + 0x180) = 0;
      FUN_00d50b20();
      goto LAB_01c51f0d;
    }
  }
  if (lVar5 != 0) {
    return;
  }
LAB_01c51f1e:
  if (*(longlong *)(unaff_RDI + 0x170) != 0) {
    FUN_00e7bdb0();
    uVar4 = FUN_00e7bdb0();
    FUN_01cb4790();
    (**(code **)(*local_98 + 0x370))();
    local_48 = local_68;
    local_40 = 0;
    if (local_60 == '\0') {
      if (local_68 != 0) {
        FUN_00d50b00();
      }
      lVar5 = *(longlong *)(unaff_RDI + 0x188);
    }
    else {
      local_60 = '\0';
      lVar5 = *(longlong *)(unaff_RDI + 0x188);
    }
    local_40 = '\x01';
    if (lVar5 != 0) {
      local_40 = '\x01';
      FUN_00d50b00();
    }
    local_80 = '\x01';
    local_88 = lVar5;
    FUN_01a8bca0(1,uVar4 >> 0x20,&local_48,&local_88);
    plVar2 = local_38;
    if (local_30 == '\0') {
      if (((local_38 != (longlong *)0x0) && (FUN_00d50b00(), local_30 != '\0')) &&
         (local_38 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_30 = '\0';
    }
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if ((local_90 != '\0') && (local_98 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    local_78 = plVar2;
    local_70 = '\0';
    (**(code **)(**(longlong **)(unaff_RDI + 0x170) + 0x3d8))();
    if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    plVar3 = *(longlong **)(unaff_RDI + 0x180);
    if (plVar3 != plVar2) {
      if (plVar2 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      *(longlong **)(unaff_RDI + 0x180) = plVar2;
      if (plVar3 != (longlong *)0x0) {
        FUN_00d50b20();
      }
    }
    if (plVar2 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  return;
}




// ============================================================
// @01c4f180 — 765 bytes
// ============================================================

void FUN_01c4f180(undefined8 param_1,char param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  void *pvVar4;
  pthread_key_t in_ECX;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 uVar7;
  undefined1 local_80 [8];
  undefined1 local_78;
  undefined1 local_70 [8];
  undefined1 local_68;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  local_60 = *unaff_RSI;
  local_58 = '\0';
  FUN_016cbba0();
  lVar2 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  lVar1 = *(longlong *)(unaff_RDI + 0x188);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  local_48 = '\x01';
  local_50 = lVar1;
  FUN_016cbba0();
  lVar1 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  pvVar4 = _pthread_getspecific(in_ECX);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_016ea7c0(param_1);
  FUN_01c67800();
  if ((param_2 == '\0') && (*(int *)(unaff_RDI + 0x1c8) != 1)) {
    FUN_01c44d20();
    lVar3 = local_40;
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_68 = 1;
    uVar5 = FUN_00e7bdb0();
    FUN_01c45410(uVar5,local_70);
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    uVar7 = 0;
    lVar6 = lVar2;
    uVar5 = FUN_01c44d20();
    lVar3 = local_40;
    if (local_38 == '\0') {
      if (local_40 != 0) {
        uVar5 = FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_78 = 1;
    FUN_01c44700(uVar5,local_80,param_3,param_4,lVar6,uVar7);
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  FUN_01c62c70();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @01c4ae30 — 706 bytes
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01c4ae30(void)

{
  bool bVar1;
  longlong lVar2;
  int unaff_ESI;
  longlong *unaff_RDI;
  longlong local_30;
  char local_28;
  
  if (unaff_ESI == 1) {
    lVar2 = DAT_028b6618;
    if (DAT_028b6618 == 0) {
      FUN_01cfcdc0(DAT_023b3888,_DAT_023b294c,DAT_023945a0,DAT_02394214);
      lVar2 = DAT_028b6618;
      if (DAT_028b6618 != local_30) {
        if (local_28 == '\0') {
          if (local_30 == 0) {
            lVar2 = 0;
          }
          else {
            FUN_00d50b00();
            lVar2 = local_30;
          }
        }
        else {
          local_28 = '\0';
          lVar2 = local_30;
        }
        bVar1 = DAT_028b6618 != 0;
        DAT_028b6618 = lVar2;
        if (bVar1) {
          FUN_00d50b20();
          lVar2 = local_30;
        }
      }
      if ((lVar2 != 0) && (DAT_028b6620 == '\0')) {
        DAT_028b6620 = '\x01';
        FUN_00e8cb90();
        lVar2 = local_30;
      }
      if ((local_28 != '\0') && (lVar2 != 0)) {
        FUN_00d50b20();
      }
      lVar2 = DAT_028b6618;
      *(undefined1 *)(unaff_RDI + 1) = 0;
      goto joined_r0x01c4b0d9;
    }
  }
  else {
    lVar2 = DAT_028b6628;
    if (DAT_028b6628 == 0) {
      FUN_01c4b180();
      if (DAT_028b6628 != local_30) {
        lVar2 = DAT_028b6628;
        if (local_28 == '\0') {
          if (local_30 != 0) {
            FUN_00d50b00();
            lVar2 = DAT_028b6628;
          }
        }
        else {
          local_28 = '\0';
        }
        DAT_028b6628 = local_30;
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
      }
      if ((local_30 != 0) && (DAT_028b6630 == '\0')) {
        DAT_028b6630 = '\x01';
        FUN_00e8cb90();
      }
      if ((local_28 != '\0') && (local_30 != 0)) {
        FUN_00d50b20();
      }
      FUN_01cfcdc0(*(float *)(DAT_028b6628 + 0x10) * DAT_02390120,
                   *(float *)(DAT_028b6628 + 0x14) * DAT_02390120,
                   DAT_02390120 * *(float *)(DAT_028b6628 + 0x18),
                   *(undefined4 *)(DAT_028b6628 + 0x1c));
      lVar2 = DAT_028b6628;
      if (DAT_028b6628 != local_30) {
        if (local_28 == '\0') {
          if (local_30 == 0) {
            lVar2 = 0;
          }
          else {
            FUN_00d50b00();
            lVar2 = local_30;
          }
        }
        else {
          local_28 = '\0';
          lVar2 = local_30;
        }
        bVar1 = DAT_028b6628 != 0;
        DAT_028b6628 = lVar2;
        if (bVar1) {
          FUN_00d50b20();
          lVar2 = local_30;
        }
      }
      if ((lVar2 != 0) && (DAT_028b6630 == '\0')) {
        DAT_028b6630 = '\x01';
        FUN_00e8cb90();
        lVar2 = local_30;
      }
      if ((local_28 != '\0') && (lVar2 != 0)) {
        FUN_00d50b20();
      }
      lVar2 = DAT_028b6628;
      *(undefined1 *)(unaff_RDI + 1) = 0;
      goto joined_r0x01c4b0d9;
    }
  }
  *(undefined1 *)(unaff_RDI + 1) = 0;
joined_r0x01c4b0d9:
  if (lVar2 == 0) {
    lVar2 = 0;
  }
  else {
    FUN_00d50b00();
  }
  *unaff_RDI = lVar2;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}




// ============================================================
// @01c51220 — 656 bytes
// ============================================================

void FUN_01c51220(pthread_key_t param_1)

{
  longlong lVar1;
  void *pvVar2;
  longlong lVar3;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  longlong local_38;
  char local_30;
  
  if (*(longlong *)(unaff_RDI + 0x1a8) == *unaff_RSI) {
    return;
  }
  if (*(longlong *)(unaff_RDI + 0x2c8) != 0) {
    FUN_00e34b70();
    local_30 = '\0';
    local_38 = 0;
    FUN_01c4f640();
  }
  if (*(longlong *)(unaff_RDI + 0x148) != 0) {
    *(undefined8 *)(unaff_RDI + 0x148) = 0;
    FUN_00d50b20();
  }
  lVar1 = *unaff_RSI;
  lVar3 = *(longlong *)(unaff_RDI + 0x1a8);
  if (lVar3 != lVar1) {
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    *(longlong *)(unaff_RDI + 0x1a8) = lVar1;
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
  }
  if (*unaff_RSI != 0) {
    FUN_00d50b00();
    FUN_01c508b0();
    lVar1 = *(longlong *)(unaff_RDI + 0x148);
    lVar3 = lVar1;
    if (lVar1 != local_38) {
      lVar3 = local_38;
      if (local_30 == '\0') {
        if (local_38 == 0) {
          lVar3 = 0;
          goto LAB_01c51304;
        }
        FUN_00d50b00();
        lVar1 = *(longlong *)(unaff_RDI + 0x148);
        *(longlong *)(unaff_RDI + 0x148) = local_38;
      }
      else {
        local_30 = '\0';
LAB_01c51304:
        *(longlong *)(unaff_RDI + 0x148) = lVar3;
      }
      param_1 = (pthread_key_t)lVar1;
      if (lVar1 != 0) {
        FUN_00d50b20();
        lVar3 = local_38;
      }
    }
    if ((local_30 != '\0') && (lVar3 != 0)) {
      FUN_00d50b20();
    }
    if (unaff_RDI != 0) {
      FUN_00d50b20();
    }
    if (*unaff_RSI != 0) {
      if (*(longlong *)(unaff_RDI + 0x198) != 0) {
        *(undefined8 *)(unaff_RDI + 0x198) = 0;
        FUN_00d50b20();
      }
      if (*(longlong *)(unaff_RDI + 0x1a0) != 0) {
        *(undefined8 *)(unaff_RDI + 0x1a0) = 0;
        FUN_00d50b20();
      }
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012caf10();
      if (local_30 == '\0') {
        if (local_38 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_30 = '\0';
      }
      FUN_01c51000();
      if (local_38 != 0) {
        FUN_00d50b20();
      }
      if ((local_30 != '\0') && (local_38 != 0)) {
        FUN_00d50b20();
      }
      goto LAB_01c51471;
    }
  }
  FUN_01c51000();
LAB_01c51471:
  FUN_01c4df60();
  FUN_016bf0c0();
  *(undefined1 *)(unaff_RDI + 0x218) = 0;
  FUN_01c4e390();
  return;
}




// ============================================================
// @01c50580 — 617 bytes
// ============================================================

void FUN_01c50580(pthread_key_t param_1)

{
  longlong lVar1;
  void *pvVar2;
  longlong lVar3;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  longlong local_38;
  char local_30;
  
  if (*(longlong *)(unaff_RDI + 0x198) == *unaff_RSI) {
    return;
  }
  if (*(longlong *)(unaff_RDI + 0x2c8) != 0) {
    FUN_00e34b70();
    local_30 = '\0';
    local_38 = 0;
    FUN_01c4f640();
  }
  if (*(longlong *)(unaff_RDI + 0x148) != 0) {
    *(undefined8 *)(unaff_RDI + 0x148) = 0;
    FUN_00d50b20();
  }
  lVar1 = *unaff_RSI;
  lVar3 = *(longlong *)(unaff_RDI + 0x198);
  if (lVar3 != lVar1) {
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    *(longlong *)(unaff_RDI + 0x198) = lVar1;
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
  }
  if (*unaff_RSI != 0) {
    FUN_00d50b00();
    FUN_01c508b0();
    lVar1 = *(longlong *)(unaff_RDI + 0x148);
    lVar3 = lVar1;
    if (lVar1 != local_38) {
      lVar3 = local_38;
      if (local_30 == '\0') {
        if (local_38 == 0) {
          lVar3 = 0;
          goto LAB_01c50664;
        }
        FUN_00d50b00();
        lVar1 = *(longlong *)(unaff_RDI + 0x148);
        *(longlong *)(unaff_RDI + 0x148) = local_38;
      }
      else {
        local_30 = '\0';
LAB_01c50664:
        *(longlong *)(unaff_RDI + 0x148) = lVar3;
      }
      param_1 = (pthread_key_t)lVar1;
      if (lVar1 != 0) {
        FUN_00d50b20();
        lVar3 = local_38;
      }
    }
    if ((local_30 != '\0') && (lVar3 != 0)) {
      FUN_00d50b20();
    }
    if (unaff_RDI != 0) {
      FUN_00d50b20();
    }
    if (*unaff_RSI != 0) {
      FUN_01c4e0b0();
      if (*(longlong *)(unaff_RDI + 0x1a8) != 0) {
        *(undefined8 *)(unaff_RDI + 0x1a8) = 0;
        FUN_00d50b20();
      }
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0132d610();
      if (local_30 == '\0') {
        if (local_38 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_30 = '\0';
      }
      FUN_01c51000();
      if (local_38 != 0) {
        FUN_00d50b20();
      }
      if ((local_30 != '\0') && (local_38 != 0)) {
        FUN_00d50b20();
      }
      goto LAB_01c507c0;
    }
  }
  FUN_01c51000();
LAB_01c507c0:
  FUN_01c4df60();
  FUN_01c4e390();
  return;
}




// ============================================================
// @01c4e0b0 — 564 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01c4e260) */
/* WARNING: Removing unreachable block (ram,0x01c4e269) */

void FUN_01c4e0b0(pthread_key_t param_1)

{
  longlong lVar1;
  void *pvVar2;
  int unaff_ESI;
  longlong *unaff_RDI;
  longlong local_38;
  char local_30;
  
  if ((int)unaff_RDI[0x39] != unaff_ESI) {
    if ((int)unaff_RDI[0x4d] != 0) {
      *(undefined4 *)(unaff_RDI + 0x4d) = 0;
      (**(code **)(*(longlong *)unaff_RDI[0x2b] + 0x478))();
      if (unaff_RDI[0x2b] != 0) {
        unaff_RDI[0x2b] = 0;
        FUN_00d50b20();
      }
      if (unaff_RDI[0x4e] != 0) {
        unaff_RDI[0x4e] = 0;
        FUN_00d50b20();
      }
      FUN_01e436c0();
      FUN_01c4d670();
    }
    *(int *)(unaff_RDI + 0x39) = unaff_ESI;
    if (unaff_RDI[0x31] != 0) {
      FUN_00d50b00();
      FUN_00d50b20();
      lVar1 = unaff_RDI[0x31];
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_016efaf0();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
    }
    FUN_01c4df60();
    FUN_016bf0c0();
    *(undefined1 *)(unaff_RDI + 0x43) = 0;
    FUN_01c4e390();
    if ((longlong *)unaff_RDI[0x46] != (longlong *)0x0) {
      (**(code **)(*(longlong *)unaff_RDI[0x46] + 0x40))();
    }
    FUN_01e42030();
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    if (local_38 != 0) {
      (**(code **)(*unaff_RDI + 0x7b0))();
      if (local_30 == '\0') {
        if (local_38 == 0) goto LAB_01c4e28d;
        FUN_00d50b00();
      }
      else if (local_38 == 0) goto LAB_01c4e28d;
      FUN_01cf9ad0();
      FUN_00d50b20();
    }
  }
LAB_01c4e28d:
  if (unaff_RDI[0x2c] != 0) {
    FUN_00d50b00();
    FUN_00d50b20();
    lVar1 = unaff_RDI[0x2c];
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    FUN_01c8da90();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  return;
}




// ============================================================
// @01c50170 — 560 bytes
// ============================================================

void FUN_01c50170(void)

{
  longlong lVar1;
  longlong lVar2;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  longlong lVar3;
  longlong local_98;
  char local_90;
  longlong local_88;
  char local_80;
  longlong local_68;
  char local_60;
  longlong local_48;
  char local_40;
  longlong local_38;
  char local_30;
  
  lVar2 = *unaff_RSI;
  if (*(longlong *)(unaff_RDI + 0x170) == lVar2) {
    return;
  }
  if (*(longlong *)(unaff_RDI + 0x170) == 0) {
    lVar3 = 0;
    lVar1 = lVar3;
    if (lVar2 == 0) goto joined_r0x01c502bd;
  }
  else {
    FUN_00d403d0();
    FUN_00d50b00();
    local_98 = DAT_027ebc60;
    if (DAT_027ebc60 != 0) {
      FUN_00d50b00();
    }
    local_90 = '\x01';
    local_60 = 0;
    lVar2 = *(longlong *)(unaff_RDI + 0x170);
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    local_60 = '\x01';
    local_68 = lVar2;
    FUN_00d41040(&local_68,&local_98);
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
    if (unaff_RDI != 0) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    lVar2 = *unaff_RSI;
    lVar3 = *(longlong *)(unaff_RDI + 0x170);
    lVar1 = lVar3;
    if (lVar3 == lVar2) goto joined_r0x01c502bd;
  }
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  *(longlong *)(unaff_RDI + 0x170) = lVar2;
  lVar1 = lVar2;
  if (lVar3 != 0) {
    FUN_00d50b20();
    lVar1 = *(longlong *)(unaff_RDI + 0x170);
  }
joined_r0x01c502bd:
  if (lVar1 != 0) {
    FUN_00d403d0();
    FUN_00d50b00();
    local_88 = DAT_027ebc60;
    if (DAT_027ebc60 != 0) {
      FUN_00d50b00();
    }
    local_80 = '\x01';
    local_40 = 0;
    lVar2 = *(longlong *)(unaff_RDI + 0x170);
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    local_40 = '\x01';
    local_48 = lVar2;
    FUN_00d41430(&local_48,&local_88);
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    if (unaff_RDI != 0) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
  }
  return;
}




// ============================================================
// @01c4b180 — 557 bytes
// ============================================================

void FUN_01c4b180(void)

{
  bool bVar1;
  longlong lVar2;
  int unaff_ESI;
  longlong *unaff_RDI;
  longlong local_28;
  char local_20;
  
  if (unaff_ESI == 1) {
    lVar2 = DAT_028b65f8;
    if (DAT_028b65f8 == 0) {
      FUN_01cfcdc0(DAT_0241f36c,DAT_023b3888,DAT_02394250,DAT_02394214);
      lVar2 = DAT_028b65f8;
      if (DAT_028b65f8 != local_28) {
        if (local_20 == '\0') {
          if (local_28 == 0) {
            lVar2 = 0;
          }
          else {
            FUN_00d50b00();
            lVar2 = local_28;
          }
        }
        else {
          local_20 = '\0';
          lVar2 = local_28;
        }
        bVar1 = DAT_028b65f8 != 0;
        DAT_028b65f8 = lVar2;
        if (bVar1) {
          FUN_00d50b20();
          lVar2 = local_28;
        }
      }
      if ((lVar2 != 0) && (DAT_028b6600 == '\0')) {
        DAT_028b6600 = '\x01';
        FUN_00e8cb90();
        lVar2 = local_28;
      }
      if ((local_20 != '\0') && (lVar2 != 0)) {
        FUN_00d50b20();
      }
      lVar2 = DAT_028b65f8;
      *(undefined1 *)(unaff_RDI + 1) = 0;
      goto joined_r0x01c4b383;
    }
  }
  else {
    lVar2 = DAT_028b6608;
    if (DAT_028b6608 == 0) {
      FUN_01cfc9f0(DAT_02390120,DAT_0239011c);
      lVar2 = DAT_028b6608;
      if (DAT_028b6608 != local_28) {
        if (local_20 == '\0') {
          if (local_28 == 0) {
            lVar2 = 0;
          }
          else {
            FUN_00d50b00();
            lVar2 = local_28;
          }
        }
        else {
          local_20 = '\0';
          lVar2 = local_28;
        }
        bVar1 = DAT_028b6608 != 0;
        DAT_028b6608 = lVar2;
        if (bVar1) {
          FUN_00d50b20();
          lVar2 = local_28;
        }
      }
      if ((lVar2 != 0) && (DAT_028b6610 == '\0')) {
        DAT_028b6610 = '\x01';
        FUN_00e8cb90();
        lVar2 = local_28;
      }
      if ((local_20 != '\0') && (lVar2 != 0)) {
        FUN_00d50b20();
      }
      lVar2 = DAT_028b6608;
      *(undefined1 *)(unaff_RDI + 1) = 0;
      goto joined_r0x01c4b383;
    }
  }
  *(undefined1 *)(unaff_RDI + 1) = 0;
joined_r0x01c4b383:
  if (lVar2 == 0) {
    lVar2 = 0;
  }
  else {
    FUN_00d50b00();
  }
  *unaff_RDI = lVar2;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}




// ============================================================
// @01c51a50 — 534 bytes
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01c51a50(pthread_key_t param_1)

{
  longlong lVar1;
  double dVar2;
  void *pvVar3;
  longlong *unaff_RDI;
  ulonglong uVar4;
  double dVar5;
  double dVar6;
  
  if (*(char *)((longlong)unaff_RDI + 0x2e1) == '\0') {
    if (*(char *)((longlong)unaff_RDI + 0x2e2) == '\0') {
      dVar5 = DAT_02395720;
      if (unaff_RDI[0x31] != 0) {
        FUN_00d50b00();
        FUN_00d50b20();
        lVar1 = unaff_RDI[0x31];
        if (lVar1 != 0) {
          FUN_00d50b00();
        }
        pvVar3 = _pthread_getspecific(param_1);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar5 = (double)FUN_016cd860();
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
      }
      dVar6 = _DAT_0241eeb8;
      if (_DAT_0241eeb8 <= DAT_0241ea50 * dVar5) {
        dVar6 = DAT_0241ea50 * dVar5;
      }
      dVar2 = DAT_0241ea58;
      if (dVar5 * DAT_023b3bc0 <= DAT_0241ea58) {
        dVar2 = dVar5 * DAT_023b3bc0;
      }
      if (((double)unaff_RDI[0x38] != dVar6) || (NAN((double)unaff_RDI[0x38]) || NAN(dVar6))) {
        unaff_RDI[0x38] = (longlong)dVar6;
        dVar5 = (double)_log((double)unaff_RDI[0x37] /
                             (double)(~-(ulonglong)(dVar6 == 0.0) & (ulonglong)dVar6 |
                                     DAT_0238fee8 & -(ulonglong)(dVar6 == 0.0)));
        *(float *)(unaff_RDI + 0x55) = (float)dVar5;
        (**(code **)(*unaff_RDI + 0x620))();
        *(undefined1 *)(unaff_RDI + 0x3a) = 1;
        if ((longlong *)unaff_RDI[0x46] != (longlong *)0x0) {
          (**(code **)(*(longlong *)unaff_RDI[0x46] + 0x40))();
        }
      }
      if (((double)unaff_RDI[0x37] != dVar2) || (NAN((double)unaff_RDI[0x37]) || NAN(dVar2))) {
        unaff_RDI[0x37] = (longlong)dVar2;
        uVar4 = -(ulonglong)((double)unaff_RDI[0x38] == 0.0);
        dVar5 = (double)_log(dVar2 / (double)(~uVar4 & unaff_RDI[0x38] | DAT_0238fee8 & uVar4));
        *(float *)(unaff_RDI + 0x55) = (float)dVar5;
        (**(code **)(*unaff_RDI + 0x620))();
        *(undefined1 *)(unaff_RDI + 0x3a) = 1;
        if ((longlong *)unaff_RDI[0x46] != (longlong *)0x0) {
          (**(code **)(*(longlong *)unaff_RDI[0x46] + 0x40))();
        }
      }
    }
    else {
      *(undefined1 *)((longlong)unaff_RDI + 0x2e2) = 0;
    }
    if ((longlong *)unaff_RDI[0x36] != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x01c51a9e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(longlong *)unaff_RDI[0x36] + 0x620))();
      return;
    }
  }
  else {
    *(undefined1 *)((longlong)unaff_RDI + 0x2e1) = 0;
  }
  return;
}




// ============================================================
// @01c4a8b0 — 518 bytes
// str: ""MUAdvancedTempoDetectionDialog""
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01c4a9c2) */
/* WARNING: Removing unreachable block (ram,0x01c4a9d3) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01c4a8b0(void)

{
  int iVar1;
  undefined4 uVar2;
  longlong local_28;
  longlong local_20;
  
  if ((DAT_027ecad0 == '\0') && (iVar1 = ___cxa_guard_acquire(), iVar1 != 0)) {
    _DAT_027eca20 = FUN_00015ff0();
    _DAT_027eca08 = "MUAdvancedTempoDetectionDialog";
    _DAT_027eca10 = 0x80;
    _DAT_027eca18 = FUN_01c7f5d0;
    _DAT_027eca28 = 0;
    uRam00000000027eca30 = 0;
    _DAT_027eca38 = 0;
    _DAT_027ecab0 = 0;
    uRam00000000027ecab8 = 0;
    _DAT_027ecac0 = 0;
    DAT_027ecac2 = 1;
    _DAT_027eca40 = 0;
    uRam00000000027eca48 = 0;
    _DAT_027eca50 = 0;
    uRam00000000027eca58 = 0;
    _DAT_027eca60 = 0;
    uRam00000000027eca68 = 0;
    _DAT_027eca70 = 0;
    uRam00000000027eca78 = 0;
    _DAT_027eca80 = 0;
    uRam00000000027eca88 = 0;
    _DAT_027eca90 = 0;
    uRam00000000027eca98 = 0;
    _DAT_027ecaa0 = 0;
    uRam00000000027ecaa8 = 0;
    DAT_027ecacb = 0;
    _DAT_027ecac3 = 0;
    ___cxa_guard_release();
  }
  if (DAT_027ecac3 == '\0') {
    FUN_0005a900();
    FUN_00e87760();
    FUN_000161a0();
    FUN_00d50c00();
    FUN_0005aa20();
    FUN_01c7f940();
    FUN_01c7fc70();
    FUN_00d50c00();
    FUN_00e87770();
    uVar2 = FUN_01c7f3f0();
    FUN_00e87920(uVar2,0);
    if (local_20 != 0) {
      FUN_00d50b20();
    }
    if (local_28 != 0) {
      FUN_00d50b20();
    }
    FUN_00015ea0();
    FUN_00015ea0();
  }
  return;
}




// ============================================================
// @01c52e30 — 508 bytes
// ============================================================

void FUN_01c52e30(void)

{
  longlong unaff_RDI;
  longlong local_68;
  char local_60;
  longlong local_58;
  char local_50;
  longlong local_48;
  char local_40;
  longlong local_38;
  char local_30;
  
  if (*(longlong *)(unaff_RDI + 0x2c8) != 0) {
    FUN_00e34b70();
    local_30 = '\0';
    local_38 = 0;
    FUN_01c4f640();
  }
  if (*(int *)(unaff_RDI + 0x268) != 0) {
    *(undefined4 *)(unaff_RDI + 0x268) = 0;
    (**(code **)(**(longlong **)(unaff_RDI + 0x158) + 0x478))();
    if (*(longlong *)(unaff_RDI + 0x158) != 0) {
      *(undefined8 *)(unaff_RDI + 0x158) = 0;
      FUN_00d50b20();
    }
    if (*(longlong *)(unaff_RDI + 0x270) != 0) {
      *(undefined8 *)(unaff_RDI + 0x270) = 0;
      FUN_00d50b20();
    }
    FUN_01e436c0();
    FUN_01c4d670();
  }
  FUN_00d403d0();
  FUN_00d50b00();
  local_68 = 0;
  local_60 = '\0';
  local_58 = 0;
  local_50 = '\0';
  FUN_00d41040(&local_58,&local_68);
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  if (unaff_RDI != 0) {
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  if (*(longlong *)(unaff_RDI + 0x150) != 0) {
    FUN_00df2a30();
  }
  if (*(longlong *)(unaff_RDI + 0x148) != 0) {
    *(undefined8 *)(unaff_RDI + 0x148) = 0;
    FUN_00d50b20();
  }
  if ((*(longlong *)(unaff_RDI + 0x188) != 0) &&
     (FUN_01c51580(), *(longlong *)(unaff_RDI + 0x188) != 0)) {
    *(undefined8 *)(unaff_RDI + 0x188) = 0;
    FUN_00d50b20();
  }
  if (*(longlong *)(unaff_RDI + 0x160) != 0) {
    local_40 = '\0';
    local_48 = 0;
    FUN_01c8dab0();
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if (*(longlong *)(unaff_RDI + 0x160) != 0) {
      *(undefined8 *)(unaff_RDI + 0x160) = 0;
      FUN_00d50b20();
    }
  }
  FUN_01e3b870();
  return;
}



