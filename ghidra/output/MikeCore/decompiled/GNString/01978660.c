// Function: FUN_01978660
// Address: 01978660
// Size: 2450 bytes
// Class: GNString


void FUN_01978660(pthread_key_t param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  longlong *plVar3;
  longlong *plVar4;
  char cVar5;
  void *pvVar6;
  longlong *unaff_RDI;
  bool bVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  double dVar10;
  double dVar11;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined1 auVar14 [16];
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 extraout_XMM0_Qb_01;
  undefined8 extraout_XMM0_Qb_02;
  undefined1 auVar15 [16];
  undefined1 in_XMM1 [16];
  undefined1 auVar16 [16];
  float local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  longlong local_e8;
  char local_e0;
  longlong local_c8;
  char local_c0;
  longlong local_b8;
  char local_b0;
  longlong local_a8;
  char local_a0;
  float local_98;
  float fStack_94;
  undefined8 local_88;
  undefined8 uStack_80;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong *local_40;
  char local_38;
  
  if (unaff_RDI[0x2e] == 0) {
    return;
  }
  pvVar6 = _pthread_getspecific(param_1);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0152ec50();
  plVar3 = local_40;
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar3 == (longlong *)0x0) {
    return;
  }
  pvVar6 = _pthread_getspecific(param_1);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0152ebe0();
  plVar3 = local_40;
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar3 == (longlong *)0x0) {
    return;
  }
  uVar9 = FUN_01989f80();
  plVar3 = local_40;
  if (local_38 == '\0') {
    if (local_40 == (longlong *)0x0) goto LAB_01978f2b;
    FUN_00d50b00();
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else if (local_40 == (longlong *)0x0) goto LAB_01978f2b;
  pvVar6 = _pthread_getspecific(param_1);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  dVar10 = (double)FUN_0152e3a0();
  local_98 = SUB84(dVar10,0);
  fStack_94 = (float)((ulonglong)dVar10 >> 0x20);
  pvVar6 = _pthread_getspecific(param_1);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  local_88 = (double)FUN_0152e5d0();
  cVar5 = FUN_019b43a0();
  if (cVar5 == '\0') {
    (**(code **)(*unaff_RDI + 0x928))();
    if (local_40 == (longlong *)0x0) {
      bVar7 = false;
    }
    else {
      (**(code **)(*unaff_RDI + 0x928))();
      pvVar6 = _pthread_getspecific(param_1);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01266fe0();
      if (local_50 == 0) {
        bVar7 = false;
      }
      else {
        (**(code **)(*unaff_RDI + 0x928))();
        pvVar6 = _pthread_getspecific(param_1);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01266fe0();
        pvVar6 = _pthread_getspecific(param_1);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012eb770();
        bVar7 = local_e8 != 0;
        if ((local_e0 != '\0') && (local_e8 != 0)) {
          FUN_00d50b20();
        }
        if ((local_b0 != '\0') && (local_b8 != 0)) {
          FUN_00d50b20();
        }
        if ((local_a0 != '\0') && (local_a8 != 0)) {
          FUN_00d50b20();
        }
      }
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      if ((local_c0 != '\0') && (local_c8 != 0)) {
        FUN_00d50b20();
      }
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (bVar7) {
      (**(code **)(*unaff_RDI + 0x928))();
      pvVar6 = _pthread_getspecific(param_1);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01266fe0();
      pvVar6 = _pthread_getspecific(param_1);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar11 = (double)FUN_012f7cb0();
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      if (dVar10 < dVar11) {
        (**(code **)(*unaff_RDI + 0x928))();
        pvVar6 = _pthread_getspecific(param_1);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01266fe0();
        pvVar6 = _pthread_getspecific(param_1);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar9 = FUN_012f7cb0();
        local_98 = (float)uVar9;
        fStack_94 = (float)((ulonglong)uVar9 >> 0x20);
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
      }
      (**(code **)(*unaff_RDI + 0x928))();
      pvVar6 = _pthread_getspecific(param_1);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01266fe0();
      pvVar6 = _pthread_getspecific(param_1);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar10 = (double)FUN_012f9490();
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      if (dVar10 < local_88) {
        (**(code **)(*unaff_RDI + 0x928))();
        pvVar6 = _pthread_getspecific(param_1);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01266fe0();
        pvVar6 = _pthread_getspecific(param_1);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_88 = (double)FUN_012f9490();
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
      }
    }
  }
  uVar9 = (**(code **)(*plVar3 + 0x938))(CONCAT44(fStack_94,local_98));
  local_98 = (float)uVar9;
  pvVar6 = _pthread_getspecific(param_1);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0152ec50();
  plVar4 = local_40;
  if (local_38 == '\0') {
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  auVar15._0_8_ = (**(code **)(*plVar3 + 0xc48))();
  auVar15._8_8_ = extraout_XMM0_Qb_00;
  auVar14._4_12_ = auVar15._4_12_;
  auVar14._0_4_ = (float)auVar15._0_8_ + DAT_02394240;
  uVar8 = FUN_0198a7d0(auVar14._0_8_);
  if (plVar4 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  uVar12 = (**(code **)(*plVar3 + 3000))();
  local_88 = (double)(**(code **)(*plVar3 + 0x938))(local_88);
  uStack_80 = extraout_XMM0_Qb_02;
  cVar5 = (**(code **)("/System/Library/Frameworks/CoreText.framework/Versions/A/CoreText" +
                      *plVar3 + 0x40))();
  if (cVar5 != '\0') {
    (**(code **)(*unaff_RDI + 0x928))();
    plVar4 = local_40;
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar4 != (longlong *)0x0) {
      uVar13 = (**(code **)(*unaff_RDI + 0x928))();
      local_60 = local_50;
      local_58 = 0;
      if (local_48 == '\0') {
        if (local_50 != 0) {
          uVar13 = FUN_00d50b00();
        }
      }
      else {
        local_48 = '\0';
      }
      local_58 = '\x01';
      (**(code **)(*plVar3 + 0xab0))(uVar13,&local_60);
      plVar3 = local_40;
      if (local_38 == '\0') {
        if (((local_40 != (longlong *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
           (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_38 = '\0';
      }
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      if (plVar3 != (longlong *)0x0) {
        FUN_0198a800();
        FUN_00d50b20();
      }
    }
  }
  FUN_00d50b20();
  auVar2._8_8_ = extraout_XMM0_Qb;
  auVar2._0_8_ = uVar9;
  auVar15 = insertps(auVar2,uVar8,0x10);
  uVar9 = auVar15._0_8_;
  local_f8 = (float)uVar12;
  uStack_f4 = (undefined4)((ulonglong)uVar12 >> 0x20);
  uStack_f0 = (undefined4)extraout_XMM0_Qb_01;
  uStack_ec = (undefined4)((ulonglong)extraout_XMM0_Qb_01 >> 0x20);
  auVar16._4_12_ = local_88._4_12_;
  auVar16._0_4_ = SUB84(local_88,0) - local_98;
  auVar1._4_4_ = uStack_f4;
  auVar1._0_4_ = local_f8 * DAT_023908e0;
  auVar1._8_4_ = uStack_f0;
  auVar1._12_4_ = uStack_ec;
  in_XMM1 = insertps(auVar16,auVar1,0x10);
LAB_01978f2b:
  uVar9 = FUN_00d051c0(uVar9);
  local_98 = (float)uVar9;
  fStack_94 = (float)((ulonglong)uVar9 >> 0x20);
  auVar15 = in_XMM1;
  uVar9 = (**(code **)(*unaff_RDI + 0x4d8))();
  local_88._0_4_ = in_XMM1._0_4_;
  local_88._4_4_ = in_XMM1._4_4_;
  if (((((((float)uVar9 != local_98) || (NAN((float)uVar9) || NAN(local_98))) ||
        ((float)((ulonglong)uVar9 >> 0x20) != fStack_94)) ||
       ((auVar15._0_4_ != (float)local_88 || (NAN(auVar15._0_4_) || NAN((float)local_88))))) ||
      (auVar15._4_4_ != local_88._4_4_)) &&
     ((**(code **)(*unaff_RDI + 0x4d0))(), unaff_RDI[0x30] != 0)) {
    unaff_RDI[0x30] = 0;
    FUN_00d50b20();
  }
  return;
}


