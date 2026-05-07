// Function: FUN_01b43fc0
// Address: 01b43fc0
// Size: 2580 bytes
// Class: MUScaleStretchTuningCtrl


/* WARNING: Removing unreachable block (ram,0x01b4453d) */
/* WARNING: Removing unreachable block (ram,0x01b44549) */
/* WARNING: Removing unreachable block (ram,0x01b444b0) */
/* WARNING: Removing unreachable block (ram,0x01b444bc) */
/* WARNING: Removing unreachable block (ram,0x01b44404) */
/* WARNING: Removing unreachable block (ram,0x01b44410) */
/* WARNING: Removing unreachable block (ram,0x01b4445a) */
/* WARNING: Removing unreachable block (ram,0x01b44466) */
/* WARNING: Removing unreachable block (ram,0x01b444e7) */
/* WARNING: Removing unreachable block (ram,0x01b444f3) */
/* WARNING: Removing unreachable block (ram,0x01b44762) */
/* WARNING: Removing unreachable block (ram,0x01b4476e) */
/* WARNING: Removing unreachable block (ram,0x01b445c4) */
/* WARNING: Removing unreachable block (ram,0x01b445cd) */
/* WARNING: Removing unreachable block (ram,0x01b4415c) */
/* WARNING: Removing unreachable block (ram,0x01b44165) */
/* WARNING: Removing unreachable block (ram,0x01b4494f) */
/* WARNING: Removing unreachable block (ram,0x01b4495c) */
/* WARNING: Removing unreachable block (ram,0x01b4404c) */
/* WARNING: Removing unreachable block (ram,0x01b44055) */
/* WARNING: Removing unreachable block (ram,0x01b4409c) */
/* WARNING: Removing unreachable block (ram,0x01b440a5) */
/* WARNING: Removing unreachable block (ram,0x01b4498b) */
/* WARNING: Removing unreachable block (ram,0x01b44998) */
/* WARNING: Removing unreachable block (ram,0x01b449be) */
/* WARNING: Removing unreachable block (ram,0x01b449cb) */
/* WARNING: Removing unreachable block (ram,0x01b4483f) */
/* WARNING: Removing unreachable block (ram,0x01b4484b) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b43fc0(undefined8 param_1,float param_2)

{
  uint uVar1;
  float fVar2;
  longlong **pplVar3;
  undefined1 auVar4 [16];
  longlong ***ppplVar5;
  undefined8 *puVar6;
  void *pvVar7;
  longlong lVar8;
  pthread_key_t pVar9;
  longlong ****pppplVar10;
  undefined8 *unaff_RSI;
  longlong unaff_RDI;
  longlong ****pppplVar11;
  ulonglong uVar12;
  float fVar13;
  undefined8 uVar14;
  undefined8 in_XMM0_Qb;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  double dVar15;
  undefined1 auVar19 [16];
  float fVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  float fVar23;
  float fVar24;
  undefined1 auVar25 [16];
  longlong ***local_c0;
  longlong ***local_b8;
  longlong ***local_b0;
  undefined1 local_a8 [8];
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  longlong local_98;
  char local_90;
  longlong ***local_88;
  longlong ***local_80;
  undefined1 local_78 [16];
  longlong ***local_68;
  undefined8 *local_60;
  longlong ***local_48;
  char local_40;
  
  if (*(longlong *)(unaff_RDI + 0x140) != 0) {
    local_78._8_8_ = in_XMM0_Qb;
    local_78._0_8_ = param_1;
    FUN_01d48370();
    (**(code **)(*(longlong *)*unaff_RSI + 0x390))();
    FUN_01cfbee0();
    if ((local_40 == '\0') && ((longlong ****)local_48 != (longlong ****)0x0)) {
      FUN_00d50b00();
    }
    local_88 = local_48;
    FUN_01cfbee0();
    if ((local_40 == '\0') && ((longlong ****)local_48 != (longlong ****)0x0)) {
      FUN_00d50b00();
    }
    local_b0 = local_48;
    FUN_01cfbee0();
    local_b8 = local_48;
    if (local_40 == '\0') {
      if ((longlong ****)local_48 == (longlong ****)0x0) {
        local_b8 = (longlong ***)(longlong ****)0x0;
      }
      else {
        FUN_00d50b00();
      }
    }
    FUN_01cfbee0();
    local_80 = local_48;
    if (local_40 == '\0') {
      if ((longlong ****)local_48 == (longlong ****)0x0) {
        local_80 = (longlong ***)0x0;
      }
      else {
        FUN_00d50b00();
      }
    }
    else {
    }
    local_c0 = local_80;
    FUN_01cfbee0();
    local_68 = local_48;
    if ((local_40 == '\0') && ((longlong ****)local_48 != (longlong ****)0x0)) {
      FUN_00d50b00();
    }
    puVar6 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    pppplVar10 = (longlong ****)&DAT_02680400;
    *puVar6 = &DAT_02680400;
    *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
    puVar6[6] = 0;
    puVar6[7] = 0;
    *(undefined8 *)((longlong)puVar6 + 0x39) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x41) = 0;
    (*DAT_02680418)();
    local_90 = 0;
    local_98 = *(longlong *)(unaff_RDI + 0x140);
    local_60 = puVar6;
    if (local_98 != 0) {
      FUN_00d50b00();
    }
    local_90 = '\x01';
    FUN_01778a40();
    if (local_40 == '\0') {
      if ((longlong ****)local_48 != (longlong ****)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_40 = '\0';
    }
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
    auVar25 = local_78;
    fVar23 = DAT_023b1608 + local_78._0_4_;
    fVar13 = param_2 + local_78._0_4_ + DAT_02390d00 + DAT_02390d34;
    local_78._0_4_ = fVar23;
    while (fVar23 < fVar13) {
      FUN_01e3f820();
      auVar25._0_4_ = auVar25._0_4_ / _DAT_0241d550;
      local_a8._0_4_ = (float)local_78._0_4_ / auVar25._0_4_ + DAT_0239394c;
      pvVar7 = _pthread_getspecific((pthread_key_t)pppplVar10);
      pppplVar11 = (longlong ****)local_48;
      if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
        pppplVar10 = (longlong ****)local_48;
        pppplVar11 = (longlong ****)local_48[(ulonglong)(*(uint *)(lVar8 + 0x154) & 1) + 4];
      }
      uVar14 = (*(code *)(*pppplVar11)[0x70])((double)(float)local_a8._0_4_);
      local_a8 = (undefined1  [8])uVar14;
      FUN_01e3f820();
      uVar1 = *(uint *)(unaff_RDI + 0x150);
      auVar18 = auVar25;
      FUN_01e3f820();
      auVar16 = insertps(ZEXT416(*(uint *)(unaff_RDI + 0x150)),ZEXT416(uVar1),0x10);
      auVar17._0_4_ = auVar16._0_4_ + auVar16._0_4_;
      auVar17._4_4_ = auVar16._4_4_ + auVar16._4_4_;
      auVar17._8_4_ = auVar16._8_4_ + auVar16._8_4_;
      auVar17._12_4_ = auVar16._12_4_ + auVar16._12_4_;
      auVar25 = insertps(auVar25,auVar18,0x4c);
      auVar16 = divps(auVar25,auVar17);
      auVar25 = insertps(ZEXT416(uVar1),ZEXT416((uint)(float)(double)local_a8),0x10);
      fVar24 = auVar25._4_4_ * auVar16._4_4_;
      fVar23 = auVar25._0_4_ * auVar16._0_4_ - fVar24;
      auVar18._0_4_ = (uint)fVar23 & _DAT_023945e0;
      auVar18._4_4_ = (uint)fVar24 & _UNK_023945e4;
      auVar18._8_4_ = (uint)(auVar25._8_4_ * auVar16._8_4_) & _UNK_023945e8;
      auVar18._12_4_ = (uint)(auVar25._12_4_ * auVar16._12_4_) & _UNK_023945ec;
      auVar16._4_12_ = SUB1612(auVar18 | _DAT_023945f0,4);
      auVar16._0_4_ = SUB164(auVar18 | _DAT_023945f0,0) + fVar23;
      roundss(auVar16,auVar16,0xb);
      _local_a8 = ZEXT416((uint)(float)(double)local_a8);
      FUN_01d38ba0();
      fVar23 = (float)local_78._0_4_ + DAT_02390124;
      auVar25 = ZEXT416((uint)fVar23);
      local_78._0_4_ = fVar23;
    }
    FUN_01d488d0();
    (**(code **)(*(longlong *)*unaff_RSI + 0x370))();
    (**(code **)(*(longlong *)*unaff_RSI + 0x3a8))();
    (**(code **)(*(longlong *)*unaff_RSI + 0x370))();
    (**(code **)(*(longlong *)*unaff_RSI + 0x3a8))();
    FUN_01d488d0();
    fVar13 = 0.0;
    uVar21 = 0;
    uVar22 = 0;
    fVar23 = DAT_02390124;
    (**(code **)(*(longlong *)*unaff_RSI + 0x370))();
    (**(code **)(*(longlong *)*unaff_RSI + 0x3a8))();
    pvVar7 = _pthread_getspecific((pthread_key_t)pppplVar10);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013f2b00();
    if ((local_40 == '\0') && ((longlong ****)local_48 != (longlong ****)0x0)) {
      FUN_00d50b00();
    }
    if (0 < *(int *)((longlong)local_48 + 0xc)) {
      uVar12 = 0;
      do {
        pVar9 = (pthread_key_t)pppplVar10;
        uVar1 = *(uint *)(unaff_RDI + 0x16c);
        pplVar3 = (longlong **)local_48[2][uVar12];
        if (pplVar3 != (longlong **)0x0) {
          FUN_00d50b00();
        }
        pvVar7 = _pthread_getspecific(pVar9);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar14 = FUN_013faed0();
        local_78._0_8_ = uVar14;
        FUN_01e3f820();
        fVar24 = fVar23;
        FUN_01e3f820();
        local_a8._4_4_ = fVar13;
        local_a8._0_4_ = (fVar24 / _DAT_0241d550) * DAT_02394218;
        uStack_a0 = uVar21;
        uStack_9c = uVar22;
        pvVar7 = _pthread_getspecific(pVar9);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar15 = (double)FUN_013faf20();
        FUN_01e3f820();
        fVar24 = *(float *)(unaff_RDI + 0x150);
        fVar20 = fVar13;
        FUN_01e3f820();
        fVar2 = *(float *)(unaff_RDI + 0x150);
        pppplVar10 = &local_c0;
        FUN_01d488d0();
        auVar19._0_4_ =
             (float)(double)local_78._0_8_ * (fVar23 / _DAT_0241d550) + (float)local_a8._0_4_;
        auVar19._4_4_ = local_78._4_4_;
        auVar19._8_8_ = 0;
        auVar4._4_4_ = fVar20;
        auVar4._0_4_ = (fVar20 / (fVar2 + fVar2)) * fVar24 -
                       (fVar13 / (fVar24 + fVar24)) * (float)dVar15;
        auVar4._8_4_ = uVar22;
        auVar4._12_4_ = uVar22;
        local_78 = insertps(auVar19,auVar4,0x10);
        (**(code **)(*(longlong *)*unaff_RSI + 0x3c0))();
        if (uVar12 == uVar1) {
          FUN_01d48b40();
        }
        FUN_01d488d0();
        fVar13 = 0.0;
        uVar21 = 0;
        uVar22 = 0;
        fVar23 = DAT_02390d2c;
        (**(code **)(*(longlong *)*unaff_RSI + 0x3c8))();
        if (uVar12 == uVar1) {
          FUN_01d48b40();
        }
        if (pplVar3 != (longlong **)0x0) {
          FUN_00d50b20();
        }
        uVar12 = uVar12 + 1;
      } while ((longlong)uVar12 < (longlong)*(int *)((longlong)local_48 + 0xc));
    }
    FUN_01d48390();
    FUN_00d50b20();
    puVar6 = local_60;
    ppplVar5 = local_80;
    if ((longlong ****)local_48 != (longlong ****)0x0) {
      FUN_00d50b20();
    }
    if (puVar6 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
    if ((longlong ****)local_68 != (longlong ****)0x0) {
      FUN_00d50b20();
    }
    if ((longlong ****)ppplVar5 != (longlong ****)0x0) {
      FUN_00d50b20();
    }
    if ((longlong ****)local_b8 != (longlong ****)0x0) {
      FUN_00d50b20();
    }
    if ((longlong ****)local_b0 != (longlong ****)0x0) {
      FUN_00d50b20();
    }
    if ((longlong ****)local_88 != (longlong ****)0x0) {
      FUN_00d50b20();
    }
  }
  return;
}


