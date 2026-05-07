// Function: FUN_01973150
// Address: 01973150
// Size: 7673 bytes
// Class: MUSampledFunction


/* WARNING: Removing unreachable block (ram,0x019738df) */
/* WARNING: Removing unreachable block (ram,0x019738eb) */
/* WARNING: Removing unreachable block (ram,0x01974381) */
/* WARNING: Removing unreachable block (ram,0x0197438d) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01973150(pthread_key_t param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *****ppppplVar3;
  bool bVar4;
  undefined4 uVar5;
  undefined1 auVar6 [12];
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  char cVar12;
  void *pvVar13;
  undefined8 *puVar14;
  longlong lVar15;
  longlong *******ppppppplVar16;
  byte bVar17;
  pthread_key_t pVar18;
  undefined *puVar19;
  longlong *******ppppppplVar20;
  undefined7 uVar21;
  undefined8 uVar22;
  longlong *******ppppppplVar23;
  longlong *****ppppplVar24;
  longlong *****ppppplVar25;
  undefined8 *unaff_RSI;
  longlong unaff_RDI;
  longlong *******ppppppplVar26;
  byte bVar27;
  float fVar28;
  double dVar29;
  double dVar30;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  double dVar31;
  undefined1 auVar36 [16];
  double dVar32;
  double dVar33;
  undefined8 extraout_XMM0_Qb_02;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined8 in_XMM1_Qb;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  longlong *******local_1d8;
  char local_1d0;
  longlong *******local_1c8;
  char local_1c0;
  longlong *******local_1b8;
  char local_1b0;
  longlong *******local_1a8;
  char local_1a0;
  undefined4 local_198;
  undefined4 local_194;
  longlong *******local_190;
  undefined8 local_188;
  undefined8 local_180;
  longlong *******local_178;
  char local_170;
  longlong *******local_168;
  char local_160;
  longlong *******local_158;
  char local_150;
  longlong *******local_148;
  char local_140;
  undefined8 local_138;
  longlong *******local_130;
  longlong *******local_128;
  longlong *******local_120;
  longlong *******local_108;
  char local_100;
  undefined1 local_f8 [16];
  undefined1 local_d8 [16];
  longlong *******local_a0;
  longlong *******local_98;
  float local_88;
  longlong *******local_70;
  longlong *******local_60;
  longlong *******local_40;
  char local_38;
  undefined8 extraout_XMM0_Qb_01;
  
  if (*(longlong *)(unaff_RDI + 0x178) == 0) {
    return;
  }
  plVar1 = (longlong *)(unaff_RDI + 0x178);
  pvVar13 = _pthread_getspecific(param_1);
  if (pvVar13 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0125e7c0();
  ppppppplVar20 = local_40;
  if ((local_38 != '\0') && (local_40 != (longlong *******)0x0)) {
    FUN_00d50b20();
  }
  if (ppppppplVar20 == (longlong *******)0x0) {
    return;
  }
  FUN_01d48b40();
  pvVar13 = _pthread_getspecific(param_1);
  if (pvVar13 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0125e7c0();
  ppppppplVar20 = local_40;
  if ((((local_38 == '\0') && (local_40 != (longlong *******)0x0)) &&
      (FUN_00d50b00(), local_38 != '\0')) && (local_40 != (longlong *******)0x0)) {
    FUN_00d50b20();
  }
  local_190 = ppppppplVar20;
  local_f8._0_8_ = FUN_01976670();
  local_f8._8_8_ = extraout_XMM0_Qb;
  local_88 = (float)param_2;
  FUN_01989f80();
  ppppppplVar20 = local_40;
  pvVar13 = _pthread_getspecific(param_1);
  if (pvVar13 != (void *)0x0) {
    FUN_00e8b990();
  }
  dVar29 = (double)FUN_013de8d0();
  pvVar13 = _pthread_getspecific(param_1);
  if (pvVar13 != (void *)0x0) {
    FUN_00e8b990();
  }
  dVar30 = (double)FUN_013de9b0();
  local_d8._0_8_ = (*(code *)(*ppppppplVar20)[0x127])(dVar29 + dVar30);
  local_d8._8_8_ = extraout_XMM0_Qb_00;
  FUN_01989f80();
  pvVar13 = _pthread_getspecific(param_1);
  if (pvVar13 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013de8d0();
  fVar28 = (float)(*(code *)(*local_108)[0x127])();
  if ((local_100 != '\0') && (local_108 != (longlong *******)0x0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *******)0x0)) {
    FUN_00d50b20();
  }
  pvVar13 = _pthread_getspecific(param_1);
  if (pvVar13 != (void *)0x0) {
    FUN_00e8b990();
  }
  dVar29 = (double)FUN_013de9b0();
  FUN_01d48370();
  FUN_01cfcdc0();
  local_178 = local_40;
  local_170 = 0;
  if (local_38 == '\0') {
    if (local_40 != (longlong *******)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  local_170 = '\x01';
  FUN_01d488d0();
  if ((local_170 != '\0') && (local_178 != (longlong *******)0x0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *******)0x0)) {
    FUN_00d50b20();
  }
  auVar34._4_12_ = local_d8._4_12_;
  auVar34._0_4_ = (float)local_d8._0_8_ - fVar28;
  auVar39._8_8_ = in_XMM1_Qb;
  auVar39._0_8_ = param_2;
  auVar39 = insertps(auVar39,auVar34,0x10);
  uVar5 = (undefined4)((ulonglong)extraout_XMM0_Qb >> 0x20);
  fVar28 = (float)((ulonglong)local_f8._0_8_ >> 0x20);
  auVar35._4_4_ = fVar28;
  auVar35._0_4_ = fVar28 - (DAT_02390d30 + auVar34._0_4_);
  auVar35._8_4_ = uVar5;
  auVar35._12_4_ = uVar5;
  auVar35 = insertps(local_f8,auVar35,0x10);
  (**(code **)(*(longlong *)*unaff_RSI + 0x3b0))();
  FUN_01cfcdc0();
  local_168 = local_40;
  local_160 = 0;
  if (local_38 == '\0') {
    if (local_40 != (longlong *******)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  local_160 = '\x01';
  FUN_01d488d0();
  if ((local_160 != '\0') && (local_168 != (longlong *******)0x0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *******)0x0)) {
    FUN_00d50b20();
  }
  plVar2 = (longlong *)*unaff_RSI;
  local_f8._0_8_ = auVar35._0_8_;
  FUN_01d39800(local_f8._0_8_,auVar39._0_8_);
  local_158 = local_40;
  local_150 = 0;
  if (local_38 == '\0') {
    if (local_40 != (longlong *******)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  local_150 = '\x01';
  (**(code **)(*plVar2 + 0x3a8))();
  if ((local_150 != '\0') && (local_158 != (longlong *******)0x0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *******)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(*(longlong *)*unaff_RSI + 0x390))(local_f8._0_8_);
  FUN_01d48b40();
  FUN_01cfcdc0(0,0,0,DAT_02390124);
  local_148 = local_40;
  local_140 = 0;
  if (local_38 == '\0') {
    if (local_40 != (longlong *******)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  local_140 = '\x01';
  FUN_01d488d0();
  if ((local_140 != '\0') && (local_148 != (longlong *******)0x0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *******)0x0)) {
    FUN_00d50b20();
  }
  puVar14 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  puVar19 = &DAT_02680400;
  *puVar14 = &DAT_02680400;
  *(undefined4 *)((longlong)puVar14 + 0xc) = 0;
  puVar14[6] = 0;
  puVar14[7] = 0;
  *(undefined8 *)((longlong)puVar14 + 0x39) = 0;
  *(undefined8 *)((longlong)puVar14 + 0x41) = 0;
  (*DAT_02680418)();
  pVar18 = (pthread_key_t)puVar19;
  dVar29 = (double)auVar34._0_4_ / dVar29;
  fVar28 = 0.0;
  if (0.0 < local_88) {
    do {
      pvVar13 = _pthread_getspecific((pthread_key_t)puVar19);
      if (pvVar13 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01264180();
      ppppppplVar20 = local_40;
      pvVar13 = _pthread_getspecific((pthread_key_t)puVar19);
      ppppppplVar26 = local_40;
      if ((pvVar13 != (void *)0x0) &&
         (lVar15 = FUN_00e8b990(), ppppppplVar20 = ppppppplVar26, lVar15 != 0)) {
        ppppppplVar20 =
             (longlong *******)ppppppplVar26[(ulonglong)(*(uint *)(lVar15 + 0x154) & 1) + 4];
      }
      (*(code *)(*ppppppplVar20)[0x70])((double)fVar28 / dVar29);
      FUN_01d38ba0();
      if ((local_38 != '\0') && (local_40 != (longlong *******)0x0)) {
        FUN_00d50b20();
      }
      pVar18 = (pthread_key_t)puVar19;
      fVar28 = fVar28 + DAT_02390124;
    } while (fVar28 < local_88);
  }
  (**(code **)(*(longlong *)*unaff_RSI + 0x3a8))();
  FUN_01d48390();
  local_120 = (longlong *******)0x0;
  local_180 = 0;
  local_128 = (longlong *******)0x0;
  local_188 = 0;
  local_130 = (longlong *******)0x0;
  local_138 = 0;
  FUN_01d48370();
  pvVar13 = _pthread_getspecific(pVar18);
  if (pvVar13 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0126e7e0();
  if (local_40 == (longlong *******)0x0) {
    bVar4 = false;
  }
  else {
    pvVar13 = _pthread_getspecific(pVar18);
    if (pvVar13 != (void *)0x0) {
      FUN_00e8b990();
    }
    dVar30 = (double)FUN_01264170();
    pvVar13 = _pthread_getspecific(pVar18);
    if (pvVar13 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0125e7c0();
    pvVar13 = _pthread_getspecific(pVar18);
    if (pvVar13 != (void *)0x0) {
      FUN_00e8b990();
    }
    dVar31 = (double)FUN_013de9b0();
    if ((local_100 != '\0') && (local_108 != (longlong *******)0x0)) {
      FUN_00d50b20();
    }
    bVar4 = dVar30 == dVar31;
  }
  if ((local_38 != '\0') && (local_40 != (longlong *******)0x0)) {
    FUN_00d50b20();
  }
  if (bVar4) {
    ppppppplVar20 = (longlong *******)*plVar1;
    pvVar13 = _pthread_getspecific(pVar18);
    if (pvVar13 != (void *)0x0) {
      ppppppplVar20 = (longlong *******)*plVar1;
      lVar15 = FUN_00e8b990();
      if (lVar15 != 0) {
        ppppppplVar20 =
             (longlong *******)ppppppplVar20[(ulonglong)(*(uint *)(lVar15 + 0x154) & 1) + 4];
      }
    }
    ppppppplVar26 = (longlong *******)&local_40;
    FUN_0126e7e0();
    ppppppplVar23 = local_40;
    ppppppplVar16 = (longlong *******)FUN_01111330();
    if (ppppppplVar23 == (longlong *******)0x0) {
LAB_01973bb2:
      ppppppplVar26 = (longlong *******)&DAT_02802688;
    }
    else {
      (*(code *)(*ppppppplVar23)[0x6c])();
      cVar12 = FUN_00e85ea0();
      ppppppplVar20 = ppppppplVar16;
      if (cVar12 == '\0') goto LAB_01973bb2;
    }
    local_70 = (longlong *******)*ppppppplVar26;
    ppppppplVar16 = local_70;
    if (local_70 == (longlong *******)0x0) {
      bVar4 = false;
      local_70 = (longlong *******)0x0;
    }
    else {
      if (*(char *)(ppppppplVar26 + 1) == '\0') {
        FUN_00d50b00();
      }
      else {
        *(undefined1 *)(ppppppplVar26 + 1) = 0;
      }
      bVar4 = true;
    }
    pVar18 = (pthread_key_t)ppppppplVar16;
    if ((local_38 != '\0') && (local_40 != (longlong *******)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    ppppppplVar20 = (longlong *******)*plVar1;
    pvVar13 = _pthread_getspecific(pVar18);
    if (pvVar13 != (void *)0x0) {
      ppppppplVar20 = (longlong *******)*plVar1;
      lVar15 = FUN_00e8b990();
      if (lVar15 != 0) {
        ppppppplVar20 =
             (longlong *******)ppppppplVar20[(ulonglong)(*(uint *)(lVar15 + 0x154) & 1) + 4];
      }
    }
    ppppppplVar26 = (longlong *******)&local_40;
    FUN_01264180();
    ppppppplVar23 = local_40;
    ppppppplVar16 = (longlong *******)FUN_01111330();
    if (ppppppplVar23 == (longlong *******)0x0) {
LAB_01973c59:
      ppppppplVar26 = (longlong *******)&DAT_02802688;
    }
    else {
      (*(code *)(*ppppppplVar23)[0x6c])();
      cVar12 = FUN_00e85ea0();
      ppppppplVar20 = ppppppplVar16;
      if (cVar12 == '\0') goto LAB_01973c59;
    }
    local_70 = (longlong *******)*ppppppplVar26;
    ppppppplVar16 = local_70;
    if (local_70 == (longlong *******)0x0) {
      bVar4 = false;
      local_70 = (longlong *******)0x0;
    }
    else {
      if (*(char *)(ppppppplVar26 + 1) == '\0') {
        FUN_00d50b00();
      }
      else {
        *(undefined1 *)(ppppppplVar26 + 1) = 0;
      }
      bVar4 = true;
    }
    pVar18 = (pthread_key_t)ppppppplVar16;
    if ((local_38 != '\0') && (local_40 != (longlong *******)0x0)) {
      FUN_00d50b20();
    }
  }
  if (local_70 == (longlong *******)0x0) {
    bVar9 = false;
    local_98 = (longlong *******)0x0;
    bVar7 = false;
    ppppplVar24 = (longlong *****)0x0;
    ppppplVar25 = (longlong *****)0x0;
    bVar10 = false;
    bVar8 = false;
    local_120 = (longlong *******)0x0;
    local_180 = 0;
    local_a0 = (longlong *******)0x0;
    local_128 = (longlong *******)0x0;
    local_188 = 0;
    local_130 = (longlong *******)0x0;
    local_138 = 0;
  }
  else {
    FUN_01cfcdc0(0,0,DAT_02390124,DAT_0239011c);
    local_120 = local_40;
    if (local_40 == (longlong *******)0x0) {
      uVar22 = 0;
    }
    else {
      uVar22 = CONCAT71((int7)((ulonglong)ppppppplVar26 >> 8),1);
      if (((local_38 == '\0') && (FUN_00d50b00(), local_38 != '\0')) &&
         (local_40 != (longlong *******)0x0)) {
        FUN_00d50b20();
      }
    }
    local_180 = uVar22;
    FUN_01cfcdc0(0,0,0,DAT_0239011c);
    local_128 = local_40;
    if (local_40 == (longlong *******)0x0) {
      uVar22 = 0;
    }
    else {
      uVar22 = CONCAT71((int7)((ulonglong)ppppppplVar23 >> 8),1);
      if (((local_38 == '\0') && (FUN_00d50b00(), local_38 != '\0')) &&
         (local_40 != (longlong *******)0x0)) {
        FUN_00d50b20();
      }
    }
    local_188 = uVar22;
    FUN_01cfcdc0(0,0,0,DAT_0241bdc0);
    local_130 = local_40;
    if (local_40 == (longlong *******)0x0) {
      local_138 = 0;
    }
    else {
      local_138 = CONCAT71((int7)((ulonglong)local_40 >> 8),1);
      if (((local_38 == '\0') && (FUN_00d50b00(), local_38 != '\0')) &&
         (local_40 != (longlong *******)0x0)) {
        FUN_00d50b20();
      }
    }
    FUN_01d48370();
    auVar36._0_8_ = (**(code **)(*(longlong *)*unaff_RSI + 0x368))();
    auVar36._8_8_ = extraout_XMM0_Qb_01;
    auVar35 = insertps(auVar36,auVar34._0_4_,0x1d);
    (**(code **)(*(longlong *)*unaff_RSI + 0x368))(auVar35._0_8_);
    ppppppplVar26 = (longlong *******)0x0;
    (**(code **)(*(longlong *)*unaff_RSI + 0x380))();
    if (dVar29 <= DAT_023934d0) {
      bVar8 = false;
      local_a0 = (longlong *******)0x0;
joined_r0x01974076:
      ppppppplVar23 = ppppppplVar26;
      bVar9 = false;
      ppppplVar24 = (longlong *****)0x0;
      if (_DAT_0241b248 < dVar29) goto LAB_01974597;
LAB_0197407c:
      local_98 = (longlong *******)0x0;
      bVar7 = false;
LAB_019748e5:
      ppppplVar25 = (longlong *****)0x0;
      bVar10 = false;
    }
    else {
      pvVar13 = _pthread_getspecific((pthread_key_t)ppppppplVar26);
      ppppppplVar20 = local_70;
      if ((pvVar13 != (void *)0x0) && (lVar15 = FUN_00e8b990(), lVar15 != 0)) {
        ppppppplVar26 = local_70;
        ppppppplVar20 = (longlong *******)local_70[(ulonglong)(*(uint *)(lVar15 + 0x154) & 1) + 4];
      }
      FUN_013eca90();
      ppppppplVar23 = local_40;
      if (local_40 == (longlong *******)0x0) {
        ppppppplVar23 = (longlong *******)0x0;
        bVar8 = false;
      }
      else {
        bVar8 = true;
        if (((local_38 == '\0') && (FUN_00d50b00(), local_38 != '\0')) &&
           (local_40 != (longlong *******)0x0)) {
          FUN_00d50b20();
        }
      }
      local_a0 = ppppppplVar23;
      if (*(int *)((longlong)ppppppplVar23 + 0xc) < 1) goto joined_r0x01974076;
      lVar15 = 0;
      ppppplVar24 = (longlong *****)0x0;
      bVar9 = false;
      do {
        ppppplVar25 = ppppppplVar23[2][lVar15];
        ppppppplVar20 = ppppppplVar23;
        if (ppppplVar24 == ppppplVar25) {
          ppppplVar25 = ppppplVar24;
          bVar7 = bVar9;
          if ((!bVar9) && (ppppplVar24 != (longlong *****)0x0)) {
            FUN_00d50b00();
            bVar7 = true;
          }
        }
        else {
          if (ppppplVar25 != (longlong *****)0x0) {
            FUN_00d50b00();
          }
          bVar7 = true;
          if ((bVar9) && (ppppplVar24 != (longlong *****)0x0)) {
            FUN_00d50b20();
          }
        }
        bVar9 = bVar7;
        ppppplVar24 = ppppplVar25;
        pVar18 = (pthread_key_t)ppppppplVar20;
        pvVar13 = _pthread_getspecific(pVar18);
        if (pvVar13 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_013faed0();
        pvVar13 = _pthread_getspecific(pVar18);
        if (pvVar13 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_013faf20();
        pvVar13 = _pthread_getspecific(pVar18);
        if (pvVar13 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar30 = (double)FUN_0142c970();
        pvVar13 = _pthread_getspecific(pVar18);
        if (pvVar13 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar31 = (double)FUN_0142c980();
        pvVar13 = _pthread_getspecific(pVar18);
        if (pvVar13 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar32 = (double)FUN_0142c990();
        pvVar13 = _pthread_getspecific(pVar18);
        if (pvVar13 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar33 = (double)FUN_0142c9a0();
        FUN_01d488d0();
        local_d8._4_4_ = (int)((ulonglong)(dVar32 * dVar29) >> 0x20);
        local_d8._0_4_ = (float)(dVar32 * dVar29);
        local_d8._8_8_ = 0;
        (**(code **)(*(longlong *)*unaff_RSI + 0x3e0))();
        auVar35 = insertps(ZEXT416((uint)(float)(dVar30 * dVar29)),(float)(dVar31 * dVar29),0x10);
        (**(code **)(*(longlong *)*unaff_RSI + 0x3c0))(auVar35._0_8_);
        auVar35 = insertps(local_d8,(float)(dVar33 * dVar29),0x10);
        (**(code **)(*(longlong *)*unaff_RSI + 0x3c0))(auVar35._0_8_);
        local_1d8 = local_128;
        local_1d0 = '\0';
        ppppppplVar20 = (longlong *******)&local_1d8;
        FUN_01d488d0();
        if ((local_1d0 != '\0') && (local_1d8 != (longlong *******)0x0)) {
          FUN_00d50b20();
        }
        plVar1 = (longlong *)*unaff_RSI;
        pvVar13 = _pthread_getspecific(pVar18);
        if (pvVar13 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar30 = (double)FUN_013faed0();
        pvVar13 = _pthread_getspecific(pVar18);
        if (pvVar13 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar31 = (double)FUN_013faf20();
        auVar40._0_4_ = (float)(dVar30 * dVar29);
        auVar40._4_4_ = (int)((ulonglong)(dVar30 * dVar29) >> 0x20);
        auVar40._8_8_ = 0;
        auVar37._0_8_ = dVar31 * dVar29;
        auVar37._8_8_ = extraout_XMM0_Qb_02;
        auVar38._4_12_ = auVar37._4_12_;
        auVar38._0_4_ = (float)auVar37._0_8_;
        insertps(auVar40,auVar38,0x10);
        (**(code **)(*plVar1 + 0x3c0))();
        lVar15 = lVar15 + 1;
      } while (lVar15 < *(int *)((longlong)ppppppplVar23 + 0xc));
      if (dVar29 <= _DAT_0241b248) goto LAB_0197407c;
LAB_01974597:
      pvVar13 = _pthread_getspecific((pthread_key_t)ppppppplVar23);
      ppppppplVar20 = local_70;
      if ((pvVar13 != (void *)0x0) && (lVar15 = FUN_00e8b990(), lVar15 != 0)) {
        ppppppplVar23 = local_70;
        ppppppplVar20 = (longlong *******)local_70[(ulonglong)(*(uint *)(lVar15 + 0x154) & 1) + 4];
      }
      pVar18 = (pthread_key_t)ppppppplVar23;
      (*(code *)(*ppppppplVar20)[0x7f])();
      pvVar13 = _pthread_getspecific(pVar18);
      ppppppplVar20 = local_108;
      if ((pvVar13 != (void *)0x0) && (lVar15 = FUN_00e8b990(), lVar15 != 0)) {
        ppppppplVar20 = (longlong *******)local_108[(ulonglong)(*(uint *)(lVar15 + 0x154) & 1) + 4];
      }
      FUN_013f2b00();
      local_98 = local_40;
      ppppppplVar23 = local_40;
      if (local_40 == (longlong *******)0x0) {
        bVar7 = false;
        local_98 = (longlong *******)0x0;
      }
      else if (local_38 == '\0') {
        FUN_00d50b00();
        bVar7 = true;
        if ((local_38 != '\0') && (local_40 != (longlong *******)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_38 = '\0';
        bVar7 = true;
      }
      if ((local_100 != '\0') && (local_108 != (longlong *******)0x0)) {
        FUN_00d50b20();
      }
      if (*(int *)((longlong)local_98 + 0xc) < 1) goto LAB_019748e5;
      lVar15 = 0;
      bVar10 = false;
      ppppplVar25 = (longlong *****)0x0;
      do {
        ppppplVar3 = local_98[2][lVar15];
        ppppppplVar20 = local_98;
        if (ppppplVar25 == ppppplVar3) {
          ppppplVar3 = ppppplVar25;
          bVar11 = bVar10;
          if ((!bVar10) && (ppppplVar25 != (longlong *****)0x0)) {
            FUN_00d50b00();
            bVar11 = true;
          }
        }
        else {
          if (ppppplVar3 != (longlong *****)0x0) {
            FUN_00d50b00();
          }
          bVar11 = true;
          if ((bVar10) && (ppppplVar25 != (longlong *****)0x0)) {
            FUN_00d50b20();
          }
        }
        bVar10 = bVar11;
        ppppplVar25 = ppppplVar3;
        pVar18 = (pthread_key_t)ppppppplVar20;
        local_1c8 = local_130;
        local_1c0 = '\0';
        ppppppplVar20 = (longlong *******)&local_1c8;
        FUN_01d488d0();
        if ((local_1c0 != '\0') && (local_1c8 != (longlong *******)0x0)) {
          FUN_00d50b20();
        }
        pvVar13 = _pthread_getspecific(pVar18);
        if (pvVar13 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar30 = (double)FUN_013faed0();
        pvVar13 = _pthread_getspecific(pVar18);
        if (pvVar13 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_013faf20();
        auVar6._4_8_ = (ulonglong)(dVar30 * dVar29) >> 0x20;
        auVar6._0_4_ = (float)(dVar30 * dVar29) + DAT_023b1614;
        (**(code **)(*(longlong *)*unaff_RSI + 0x3e0))(auVar6._0_8_);
        (**(code **)(*(longlong *)*unaff_RSI + 0x3e0))();
        lVar15 = lVar15 + 1;
        ppppppplVar23 = local_98;
      } while (lVar15 < *(int *)((longlong)local_98 + 0xc));
    }
    pVar18 = (pthread_key_t)ppppppplVar23;
    FUN_01d48390();
  }
  if (dVar29 <= DAT_023934d0) {
    local_60 = (longlong *******)0x0;
    bVar27 = 0;
    goto LAB_01974e93;
  }
  pvVar13 = _pthread_getspecific(pVar18);
  if (pvVar13 != (void *)0x0) {
    FUN_00e8b990();
  }
  dVar29 = (double)FUN_01264310();
  if ((dVar29 != 0.0) || (NAN(dVar29))) {
    FUN_01d4ab00();
  }
  else {
    FUN_01d4ab00();
  }
  FUN_01cfbee0();
  local_60 = local_40;
  if (local_40 == (longlong *******)0x0) {
    local_194 = (undefined4)CONCAT71((int7)((ulonglong)ppppppplVar20 >> 8),1);
    ppppppplVar20 = (longlong *******)0x0;
  }
  else {
    ppppppplVar20 = local_40;
    if (local_38 == '\0') {
      FUN_00d50b00();
      local_194 = 0;
      ppppppplVar20 = (longlong *******)CONCAT71((int7)((ulonglong)ppppppplVar20 >> 8),1);
      if ((local_38 == '\0') || (local_40 == (longlong *******)0x0)) goto LAB_01974a29;
      FUN_00d50b20();
    }
    ppppppplVar20 = (longlong *******)CONCAT71((int7)((ulonglong)ppppppplVar20 >> 8),1);
    local_194 = 0;
  }
LAB_01974a29:
  pVar18 = (pthread_key_t)ppppppplVar20;
  FUN_01989f80();
  ppppppplVar26 = local_40;
  pvVar13 = _pthread_getspecific(pVar18);
  if (pvVar13 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01259650();
  (*(code *)(*ppppppplVar26)[0x127])();
  if ((local_38 != '\0') && (local_40 != (longlong *******)0x0)) {
    FUN_00d50b20();
  }
  local_1b8 = local_60;
  local_1b0 = '\0';
  FUN_01d488d0();
  if ((local_1b0 != '\0') && (local_1b8 != (longlong *******)0x0)) {
    FUN_00d50b20();
  }
  plVar1 = (longlong *)*unaff_RSI;
  FUN_01e3f820();
  local_198 = *(undefined4 *)(unaff_RDI + 0x110);
  FUN_01e3f820();
  (**(code **)(*plVar1 + 0x3e0))();
  pvVar13 = _pthread_getspecific(pVar18);
  if (pvVar13 != (void *)0x0) {
    FUN_00e8b990();
  }
  dVar29 = (double)FUN_01264380();
  pvVar13 = _pthread_getspecific(pVar18);
  if (pvVar13 != (void *)0x0) {
    FUN_00e8b990();
  }
  dVar30 = (double)FUN_01264170();
  if ((dVar29 != dVar30) || (NAN(dVar29) || NAN(dVar30))) {
    FUN_01d4ab00();
  }
  else {
    FUN_01d4ab00();
  }
  FUN_01cfcdc0();
  ppppppplVar26 = local_40;
  bVar27 = (byte)ppppppplVar20;
  if (local_60 == local_40) {
    ppppppplVar20 = local_60;
    if (((byte)local_194 & local_60 != (longlong *******)0x0) == 1) {
      bVar27 = 1;
      if (local_38 != '\0') goto LAB_01974d47;
      bVar27 = 1;
      FUN_00d50b00();
    }
LAB_01974d29:
    if ((local_38 != '\0') && (local_40 != (longlong *******)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    uVar21 = (undefined7)((ulonglong)ppppppplVar20 >> 8);
    if (local_38 == '\0') {
      if (local_40 != (longlong *******)0x0) {
        FUN_00d50b00();
      }
      bVar17 = bVar27 & local_60 != (longlong *******)0x0;
      ppppppplVar20 = (longlong *******)CONCAT71(uVar21,bVar17);
      bVar27 = 1;
      local_60 = ppppppplVar26;
      if (bVar17 == 1) {
        FUN_00d50b20();
      }
      goto LAB_01974d29;
    }
    bVar17 = bVar27 & local_60 != (longlong *******)0x0;
    ppppppplVar20 = (longlong *******)CONCAT71(uVar21,bVar17);
    bVar27 = 1;
    local_60 = local_40;
    if (bVar17 == 1) {
      FUN_00d50b20();
      bVar27 = 1;
    }
  }
LAB_01974d47:
  pVar18 = (pthread_key_t)ppppppplVar20;
  FUN_01989f80();
  ppppppplVar20 = local_40;
  pvVar13 = _pthread_getspecific(pVar18);
  if (pvVar13 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012646c0();
  (*(code *)(*ppppppplVar20)[0x127])();
  if ((local_38 != '\0') && (local_40 != (longlong *******)0x0)) {
    FUN_00d50b20();
  }
  local_1a8 = local_60;
  local_1a0 = '\0';
  FUN_01d488d0();
  if ((local_1a0 != '\0') && (local_1a8 != (longlong *******)0x0)) {
    FUN_00d50b20();
  }
  plVar1 = (longlong *)*unaff_RSI;
  FUN_01e3f820();
  FUN_01e3f820();
  (**(code **)(*plVar1 + 0x3e0))();
LAB_01974e93:
  FUN_01d48390();
  if ((bVar27 != 0) && (local_60 != (longlong *******)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_138 != '\0') && (local_130 != (longlong *******)0x0)) {
    FUN_00d50b20();
  }
  ppppppplVar20 = local_190;
  if (((char)local_188 != '\0') && (local_128 != (longlong *******)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_180 != '\0') && (local_120 != (longlong *******)0x0)) {
    FUN_00d50b20();
  }
  if ((bVar10) && (ppppplVar25 != (longlong *****)0x0)) {
    FUN_00d50b20();
  }
  if ((bVar7) && (local_98 != (longlong *******)0x0)) {
    FUN_00d50b20();
  }
  if ((bVar9) && (ppppplVar24 != (longlong *****)0x0)) {
    FUN_00d50b20();
  }
  if ((bVar8) && (local_a0 != (longlong *******)0x0)) {
    FUN_00d50b20();
  }
  if ((bVar4) && (local_70 != (longlong *******)0x0)) {
    FUN_00d50b20();
  }
  if (ppppppplVar20 != (longlong *******)0x0) {
    FUN_00d50b20();
  }
  if (puVar14 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  return;
}


