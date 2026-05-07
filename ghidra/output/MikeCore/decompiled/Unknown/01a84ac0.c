// Function: FUN_01a84ac0
// Address: 01a84ac0
// Size: 2282 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x01a8517f) */
/* WARNING: Removing unreachable block (ram,0x01a85188) */
/* WARNING: Removing unreachable block (ram,0x01a84f31) */
/* WARNING: Removing unreachable block (ram,0x01a84f3a) */
/* WARNING: Removing unreachable block (ram,0x01a85117) */
/* WARNING: Removing unreachable block (ram,0x01a851b4) */
/* WARNING: Removing unreachable block (ram,0x01a851bd) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01a84ac0(pthread_key_t param_1,undefined8 param_2,char param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  void *pvVar4;
  pthread_key_t pVar5;
  char in_DL;
  undefined8 *unaff_RSI;
  longlong *unaff_RDI;
  bool bVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  double dVar11;
  double dVar12;
  float extraout_XMM0_Db;
  undefined8 uVar13;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar14 [16];
  float fVar15;
  undefined8 in_XMM1_Qb;
  uint uVar16;
  undefined1 auVar17 [16];
  longlong local_d8;
  char local_d0;
  longlong local_c8;
  char local_c0;
  char local_b4;
  longlong local_b0;
  char local_a8;
  longlong local_a0;
  char local_98;
  undefined1 local_78 [16];
  float local_68;
  uint uStack_64;
  uint uStack_60;
  uint uStack_5c;
  longlong *local_58;
  char local_50;
  longlong *local_40;
  char local_38;
  
  uVar16 = (uint)((ulonglong)in_XMM1_Qb >> 0x20);
  fVar10 = (float)((ulonglong)param_2 >> 0x20);
  pVar5 = param_1;
  if ((char)unaff_RDI[0x33] != '\0') {
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01266fe0();
    if (local_40 == (longlong *)0x0) {
      bVar6 = false;
    }
    else {
      pvVar4 = _pthread_getspecific(pVar5);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01266fe0();
      pvVar4 = _pthread_getspecific(pVar5);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012eb770();
      bVar6 = local_b0 != 0;
      if ((local_a8 != '\0') && (local_b0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (bVar6) {
      pvVar4 = _pthread_getspecific(pVar5);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01266fe0();
      pvVar4 = _pthread_getspecific(pVar5);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar11 = (double)FUN_012f9490();
      pvVar4 = _pthread_getspecific(pVar5);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar12 = (double)FUN_01259650();
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (dVar11 < dVar12) {
        return;
      }
      pvVar4 = _pthread_getspecific(pVar5);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01266fe0();
      pvVar4 = _pthread_getspecific(pVar5);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar11 = (double)FUN_012f7cb0();
      pvVar4 = _pthread_getspecific(pVar5);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar12 = (double)FUN_01259650();
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (dVar12 < dVar11) {
        return;
      }
    }
  }
  FUN_01989f80();
  pvVar4 = _pthread_getspecific(pVar5);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01259650();
  uVar7 = (**(code **)(*local_40 + 0x938))();
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  fVar8 = (float)(**(code **)(*unaff_RDI + 0x4d8))();
  FUN_01e3f820();
  fVar9 = (float)FUN_01a848f0();
  FUN_01989f80();
  uVar13 = (**(code **)(&UNK_00001418 + *local_40))();
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01989f80();
  (**(code **)(*local_58 + 0xe10))();
  plVar1 = (longlong *)unaff_RDI[0x2e];
  if (plVar1 != (longlong *)0x0) {
    FUN_00d50b00();
  }
  cVar3 = FUN_00d24090();
  if (plVar1 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_a8 != '\0') && (local_b0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (param_3 == '\0') {
    FUN_01a845d0();
    FUN_01d488d0();
    if ((local_d0 != '\0') && (local_d8 != 0)) {
      FUN_00d50b20();
    }
  }
  else if (in_DL == '\0') {
    if (cVar3 == '\0') {
      FUN_01a84310();
    }
    else {
      FUN_01a843c0();
    }
    FUN_01d488d0();
    if (cVar3 == '\0') {
      if ((local_98 != '\0') && (local_a0 != 0)) {
        FUN_00d50b20();
      }
    }
    else if ((local_98 != '\0') && (local_a0 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    FUN_01a84470();
    FUN_01d488d0();
    if ((local_c0 != '\0') && (local_c8 != 0)) {
      FUN_00d50b20();
    }
  }
  auVar14 = roundss(ZEXT416(uVar7),ZEXT416(uVar7),9);
  fVar15 = fVar10 * DAT_0239011c + extraout_XMM0_Db;
  local_68 = (float)uVar13;
  uStack_64 = (uint)((ulonglong)uVar13 >> 0x20);
  uStack_60 = (uint)extraout_XMM0_Qb;
  uStack_5c = (uint)((ulonglong)extraout_XMM0_Qb >> 0x20);
  auVar17._0_4_ = ~-(uint)(local_68 != 0.0) & (uint)fVar15;
  auVar17._4_4_ = ~uStack_64 & (uint)fVar10;
  auVar17._8_4_ = ~uStack_60 & uVar16;
  auVar17._12_4_ = ~uStack_5c & uVar16;
  auVar17 = auVar17 | ZEXT416((uint)(DAT_023b1d84 + fVar15) & -(uint)(local_68 != 0.0));
  FUN_01d48b40();
  pvVar4 = _pthread_getspecific(pVar5);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  local_78._0_4_ = auVar14._0_4_;
  local_78._4_4_ = auVar14._4_4_;
  local_78._8_4_ = auVar14._8_4_;
  local_78._12_4_ = auVar14._12_4_;
  local_78._0_4_ = (float)local_78._0_4_ - fVar8;
  auVar14 = roundss(auVar17,auVar17,9);
  cVar3 = FUN_0126ee50();
  if (cVar3 != '\0') {
    plVar2 = (longlong *)*unaff_RSI;
    auVar17 = insertps(local_78,ZEXT416((uint)(DAT_02390118 * fVar9 + auVar14._0_4_ + DAT_023b1d84))
                       ,0x10);
    FUN_01d39b10(auVar17._0_8_);
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b00();
    }
    (**(code **)(*plVar2 + 0x3a0))();
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  FUN_01989f80();
  fVar10 = (float)(**(code **)(&UNK_00001418 + *plVar1))();
  if ((fVar10 != DAT_02390124) || (NAN(fVar10) || NAN(DAT_02390124))) {
    FUN_01d48b40();
    (**(code **)(*(longlong *)*unaff_RSI + 0x3e0))();
    FUN_01d48b40();
  }
  local_b4 = (char)param_1;
  if (local_b4 != '\0') {
    pvVar4 = _pthread_getspecific(pVar5);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    cVar3 = FUN_01299280();
    if (cVar3 != '\0') {
      pvVar4 = _pthread_getspecific(pVar5);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0126e820();
      dVar11 = (double)_log();
      auVar14 = roundss(ZEXT816(0),
                        ZEXT416((uint)(auVar14._0_4_ +
                                      fVar9 * (float)(dVar11 / _DAT_0241c3c8) * DAT_0239011c)),9);
      auVar14 = insertps(local_78,auVar14,0x10);
      FUN_01a84670(auVar14._0_8_,in_DL);
    }
  }
  return;
}


