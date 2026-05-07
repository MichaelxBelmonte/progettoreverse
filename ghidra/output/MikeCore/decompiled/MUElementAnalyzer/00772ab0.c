// Function: FUN_00772ab0
// Address: 00772ab0
// Size: 3327 bytes
// Class: MUElementAnalyzer
// String references:
//   "MUElementAnalyzer"
//   "MUAmplitudeAnalyzer"


/* WARNING: Removing unreachable block (ram,0x007731ca) */
/* WARNING: Removing unreachable block (ram,0x007731d6) */
/* WARNING: Removing unreachable block (ram,0x00773227) */
/* WARNING: Removing unreachable block (ram,0x00773250) */
/* WARNING: Removing unreachable block (ram,0x00773229) */
/* WARNING: Removing unreachable block (ram,0x00773252) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00772ab0(pthread_key_t param_1)

{
  longlong *plVar1;
  bool bVar2;
  longlong *plVar3;
  char cVar4;
  longlong **pplVar5;
  undefined8 uVar6;
  void *pvVar7;
  longlong lVar8;
  longlong *plVar9;
  int iVar10;
  longlong *unaff_RDI;
  longlong *plVar11;
  undefined4 uVar12;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  longlong *local_198;
  undefined1 local_190;
  longlong *local_188;
  longlong *local_180;
  longlong local_178;
  char local_170;
  longlong *local_168;
  char local_160;
  longlong *local_158;
  char local_150;
  longlong *local_148;
  char local_140;
  longlong *local_138;
  char local_130;
  longlong *local_128;
  char local_120;
  longlong *local_118;
  char local_110;
  longlong local_108;
  char local_100;
  longlong *local_f8;
  char local_f0;
  longlong *local_e8;
  char local_e0;
  undefined8 local_d8;
  longlong *local_d0;
  char local_c8;
  longlong *local_c0;
  longlong *local_b8;
  char local_b0;
  longlong *local_a0;
  char local_98;
  int local_88;
  longlong *local_60;
  char local_58;
  longlong *local_50;
  undefined8 local_48;
  int local_40;
  char local_31;
  
  uVar12 = FUN_00d3ecf0();
  plVar11 = local_60;
  if ((local_58 == '\0') && (local_60 != (longlong *)0x0)) {
    uVar12 = FUN_00d50b00();
    local_b8 = plVar11;
    local_b0 = '\x01';
    if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
      uVar12 = FUN_00d50b20();
    }
  }
  else {
    local_b8 = local_60;
    local_b0 = '\x01';
  }
  if ((DAT_026e0c38 == '\0') &&
     (iVar10 = ___cxa_guard_acquire(), uVar12 = extraout_XMM0_Da_00, iVar10 != 0)) {
    _DAT_026e0b88 = FUN_000fddb0();
    _DAT_026e0b70 = "MUElementAnalyzer";
    _DAT_026e0b78 = 0x180;
    param_1 = 0xfdd80;
    _DAT_026e0b80 = FUN_000fdd80;
    _DAT_026e0b90 = 0;
    uRam00000000026e0b98 = 0;
    _DAT_026e0ba0 = 0;
    _DAT_026e0c18 = 0;
    uRam00000000026e0c20 = 0;
    _DAT_026e0c28 = 0;
    DAT_026e0c2a = 1;
    _DAT_026e0ba8 = 0;
    uRam00000000026e0bb0 = 0;
    _DAT_026e0bb8 = 0;
    uRam00000000026e0bc0 = 0;
    _DAT_026e0bc8 = 0;
    uRam00000000026e0bd0 = 0;
    _DAT_026e0bd8 = 0;
    uRam00000000026e0be0 = 0;
    _DAT_026e0be8 = 0;
    uRam00000000026e0bf0 = 0;
    _DAT_026e0bf8 = 0;
    uRam00000000026e0c00 = 0;
    _DAT_026e0c08 = 0;
    uRam00000000026e0c10 = 0;
    DAT_026e0c33 = 0;
    _DAT_026e0c2b = 0;
    uVar12 = ___cxa_guard_release();
  }
  if (plVar11 == (longlong *)0x0) {
LAB_00772b21:
    pplVar5 = &DAT_02802688;
  }
  else {
    (**(code **)(*plVar11 + 0x360))();
    cVar4 = FUN_00e85ea0();
    uVar12 = extraout_XMM0_Da;
    if (cVar4 == '\0') goto LAB_00772b21;
    pplVar5 = &local_b8;
  }
  plVar9 = local_b8;
  plVar11 = *pplVar5;
  local_31 = *(char *)(pplVar5 + 1);
  local_188 = plVar11;
  if ((local_31 == '\0') || (plVar11 == (longlong *)0x0)) {
    if (plVar11 != (longlong *)0x0) goto LAB_00772b8e;
    FUN_0079bbe0();
    if (plVar9 == (longlong *)0x0) {
LAB_00772fe5:
      if (DAT_02802688 == (longlong *)0x0) goto LAB_007733ef;
LAB_00772ff6:
      bVar2 = true;
      local_d8 = 0;
      plVar11 = (longlong *)0x0;
      goto LAB_00772bec;
    }
    (**(code **)(*plVar9 + 0x360))();
    cVar4 = FUN_00e85ea0();
    if (cVar4 == '\0') goto LAB_00772fe5;
    if (local_b8 != (longlong *)0x0) goto LAB_00772ff6;
LAB_007733ef:
    if ((DAT_0272a440 == '\0') && (iVar10 = ___cxa_guard_acquire(), iVar10 != 0)) {
      _DAT_0272a390 = FUN_000fddb0();
      _DAT_0272a378 = "MUAmplitudeAnalyzer";
      _DAT_0272a380 = 0x90;
      _DAT_0272a388 = FUN_0079c0e0;
      _DAT_0272a398 = 0;
      uRam000000000272a3a0 = 0;
      _DAT_0272a3a8 = 0;
      _DAT_0272a420 = 0;
      uRam000000000272a428 = 0;
      _DAT_0272a430 = 0;
      DAT_0272a432 = 1;
      _DAT_0272a3b0 = 0;
      uRam000000000272a3b8 = 0;
      _DAT_0272a3c0 = 0;
      uRam000000000272a3c8 = 0;
      _DAT_0272a3d0 = 0;
      uRam000000000272a3d8 = 0;
      _DAT_0272a3e0 = 0;
      uRam000000000272a3e8 = 0;
      _DAT_0272a3f0 = 0;
      uRam000000000272a3f8 = 0;
      _DAT_0272a400 = 0;
      uRam000000000272a408 = 0;
      _DAT_0272a410 = 0;
      uRam000000000272a418 = 0;
      DAT_0272a43b = 0;
      _DAT_0272a433 = 0;
      ___cxa_guard_release();
    }
    plVar11 = local_b8;
    plVar1 = DAT_02802688;
    if (plVar9 != (longlong *)0x0) {
      (**(code **)(*plVar9 + 0x360))();
      cVar4 = FUN_00e85ea0();
      plVar11 = local_b8;
      plVar1 = DAT_02802688;
      if (cVar4 != '\0') {
        plVar1 = local_b8;
      }
    }
    local_b8 = plVar11;
    if (plVar1 == (longlong *)0x0) goto LAB_00773380;
    uVar12 = FUN_00e33de0();
    local_108 = DAT_0270b920;
    if (DAT_0270b920 != 0) {
      uVar12 = FUN_00d50b00();
    }
    local_100 = '\x01';
    pplVar5 = &local_60;
    FUN_000175c0(uVar12,&local_108);
    plVar9 = local_60;
    FUN_0006e1c0();
    if (plVar9 == (longlong *)0x0) {
LAB_007734c6:
      pplVar5 = &DAT_02802688;
    }
    else {
      (**(code **)(*plVar9 + 0x360))();
      cVar4 = FUN_00e85ea0();
      if (cVar4 == '\0') goto LAB_007734c6;
    }
    plVar9 = *pplVar5;
    if (*(char *)(pplVar5 + 1) == '\0') {
      if (plVar9 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      *(undefined1 *)(pplVar5 + 1) = 0;
    }
    if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_100 != '\0') && (local_108 != 0)) {
      FUN_00d50b20();
    }
    if ((local_98 != '\0') && (local_a0 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    uVar12 = (**(code **)(*unaff_RDI + 0x610))();
    plVar1 = local_60;
    if (local_58 == '\0') {
      if (local_60 != (longlong *)0x0) {
        uVar12 = FUN_00d50b00();
        if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
          uVar12 = FUN_00d50b20();
        }
        goto LAB_00773583;
      }
    }
    else if (local_60 != (longlong *)0x0) {
LAB_00773583:
      local_58 = '\0';
      local_60 = (longlong *)0x0;
      local_50 = plVar1;
      local_40 = 0;
      local_48 = 0;
      if (0 < *(int *)((longlong)plVar1 + 0xc)) {
        lVar8 = 0;
        do {
          local_60 = *(longlong **)(plVar1[2] + lVar8 * 8);
          local_f0 = '\0';
          local_e0 = '\0';
          local_f8 = plVar11;
          local_e8 = plVar9;
          uVar12 = FUN_006fe4f0(uVar12,&local_e8);
          if ((local_e0 != '\0') && (local_e8 != (longlong *)0x0)) {
            uVar12 = FUN_00d50b20();
          }
          if ((local_f0 != '\0') && (local_f8 != (longlong *)0x0)) {
            uVar12 = FUN_00d50b20();
          }
          lVar8 = lVar8 + 1;
          local_48 = CONCAT44(local_48._4_4_,(int)lVar8);
        } while ((int)lVar8 < *(int *)((longlong)plVar1 + 0xc));
      }
      FUN_000e3600();
      FUN_00d50b20();
    }
    bVar2 = true;
    if (plVar9 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  else {
    uVar12 = FUN_00d50b00();
LAB_00772b8e:
    local_190 = 0;
    local_198 = plVar11;
    uVar6 = FUN_00773ea0(uVar12,&local_198);
    plVar11 = local_60;
    if (local_60 == (longlong *)0x0) {
      local_d8 = 0;
    }
    else {
      local_d8 = CONCAT71((int7)((ulonglong)uVar6 >> 8),1);
      if (local_58 == '\0') {
        FUN_00d50b00();
      }
    }
    bVar2 = false;
    plVar9 = local_b8;
LAB_00772bec:
    FUN_00e33de0();
    local_178 = DAT_0270b920;
    if (DAT_0270b920 != 0) {
      FUN_00d50b00();
    }
    local_170 = '\x01';
    pplVar5 = &local_60;
    FUN_000175c0();
    plVar1 = local_60;
    FUN_0006e1c0();
    if (plVar1 == (longlong *)0x0) {
LAB_00772c6b:
      pplVar5 = &DAT_02802688;
    }
    else {
      (**(code **)(*plVar1 + 0x360))();
      cVar4 = FUN_00e85ea0();
      if (cVar4 == '\0') goto LAB_00772c6b;
    }
    plVar1 = *pplVar5;
    if (*(char *)(pplVar5 + 1) == '\0') {
      if (plVar1 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      *(undefined1 *)(pplVar5 + 1) = 0;
    }
    if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_170 != '\0') && (local_178 != 0)) {
      FUN_00d50b20();
    }
    if ((local_98 != '\0') && (local_a0 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar1 == (longlong *)0x0) {
LAB_00772e01:
      (**(code **)(*unaff_RDI + 0x610))();
      plVar3 = local_60;
      if (local_58 == '\0') {
        if (local_60 != (longlong *)0x0) {
          FUN_00d50b00();
          if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          goto LAB_00772e52;
        }
      }
      else if (local_60 != (longlong *)0x0) {
LAB_00772e52:
        local_58 = '\0';
        local_60 = (longlong *)0x0;
        local_c0 = plVar3;
        local_50 = plVar3;
        local_48 = 0xffffffff;
        local_40 = 0;
        local_48._4_4_ = 0;
        while( true ) {
          if (local_48._4_4_ != 0) {
            if (local_48._4_4_ < 1) {
              iVar10 = -local_48._4_4_;
            }
            else {
              iVar10 = (int)local_48 - local_48._4_4_;
              local_48 = CONCAT44(local_48._4_4_,iVar10);
              FUN_00d23690();
              local_40 = local_40 + local_48._4_4_;
              iVar10 = 0;
            }
            local_48 = CONCAT44(iVar10,(int)local_48);
          }
          lVar8 = (longlong)(int)local_48;
          iVar10 = (int)local_48 + 1;
          local_48 = CONCAT44(local_48._4_4_,iVar10);
          if (*(int *)((longlong)local_50 + 0xc) <= iVar10) break;
          local_60 = *(longlong **)(local_50[2] + 8 + lVar8 * 8);
          local_130 = '\0';
          local_120 = '\0';
          local_110 = '\0';
          local_138 = plVar9;
          local_128 = plVar1;
          local_118 = plVar11;
          FUN_006fe880(&local_118,&local_128);
          if ((local_110 != '\0') && (local_118 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_120 != '\0') && (local_128 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_130 != '\0') && (local_138 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        FUN_000e3600();
        FUN_00d50b20();
      }
    }
    else {
      pvVar7 = _pthread_getspecific(param_1);
      if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
        param_1 = (pthread_key_t)plVar1;
      }
      FUN_01264240();
      if (local_98 == '\0') {
        if (local_a0 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_98 = '\0';
      }
      local_60 = local_a0;
      local_58 = '\0';
      cVar4 = FUN_00c9ff50();
      if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (local_a0 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if ((local_98 != '\0') && (local_a0 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (cVar4 == '\0') goto LAB_00772e01;
      pvVar7 = _pthread_getspecific(param_1);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01264240();
      local_c8 = 0;
      if (local_98 == '\0') {
        if (local_a0 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_98 = '\0';
      }
      local_c8 = '\x01';
      local_d0 = local_a0;
      FUN_0076f110();
      plVar3 = local_60;
      if (local_58 == '\0') {
        if (((local_60 != (longlong *)0x0) && (FUN_00d50b00(), local_58 != '\0')) &&
           (local_60 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_58 = '\0';
      }
      if ((local_c8 != '\0') && (local_d0 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_98 != '\0') && (local_a0 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar3 != (longlong *)0x0) {
        local_58 = '\0';
        local_60 = (longlong *)0x0;
        local_180 = plVar3;
        local_50 = plVar3;
        local_48 = 0xffffffff;
        local_40 = 0;
        local_48._4_4_ = 0;
        while( true ) {
          plVar3 = local_a0;
          if (local_48._4_4_ != 0) {
            if (local_48._4_4_ < 1) {
              iVar10 = -local_48._4_4_;
            }
            else {
              iVar10 = (int)local_48 - local_48._4_4_;
              local_48 = CONCAT44(local_48._4_4_,iVar10);
              FUN_00d23690();
              local_40 = local_40 + local_48._4_4_;
              iVar10 = 0;
            }
            local_48 = CONCAT44(iVar10,(int)local_48);
          }
          lVar8 = (longlong)(int)local_48;
          iVar10 = (int)local_48 + 1;
          local_48 = CONCAT44(local_48._4_4_,iVar10);
          if (*(int *)((longlong)local_50 + 0xc) <= iVar10) break;
          local_60 = *(longlong **)(local_50[2] + 8 + lVar8 * 8);
          (**(code **)(*unaff_RDI + 0x610))();
          if (local_98 == '\0') {
            if (local_a0 != (longlong *)0x0) {
              FUN_00d50b00();
              goto LAB_007731de;
            }
          }
          else if (local_a0 != (longlong *)0x0) {
LAB_007731de:
            local_98 = '\0';
            local_a0 = (longlong *)0x0;
            local_c0 = plVar3;
            local_88 = -1;
            while( true ) {
              lVar8 = (longlong)local_88;
              local_88 = local_88 + 1;
              if (*(int *)((longlong)plVar3 + 0xc) <= local_88) break;
              local_a0 = *(longlong **)(plVar3[2] + 8 + lVar8 * 8);
              local_160 = '\0';
              local_158 = local_60;
              local_150 = '\0';
              local_140 = '\0';
              local_168 = plVar9;
              local_148 = plVar11;
              FUN_006fe880(&local_148,&local_158);
              if ((local_140 != '\0') && (local_148 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              if ((local_150 != '\0') && (local_158 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              if ((local_160 != '\0') && (local_168 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
            }
            FUN_000e3600();
            FUN_00d50b20();
          }
        }
        FUN_001159b0();
        FUN_00d50b20();
      }
    }
    FUN_0076f320();
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if (((char)local_d8 != '\0') && (plVar11 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  if ((local_31 != '\0') && (!bVar2)) {
    FUN_00d50b20();
  }
LAB_00773380:
  if ((local_b0 != '\0') && (local_b8 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  return;
}


