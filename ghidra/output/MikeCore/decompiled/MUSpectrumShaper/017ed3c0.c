// Function: FUN_017ed3c0
// Address: 017ed3c0
// Size: 2534 bytes
// Class: MUSpectrumShaper


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_017ed3c0(undefined8 param_1,undefined8 param_2,size_t param_3)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined8 *puVar6;
  undefined8 uVar7;
  void *pvVar8;
  pthread_key_t pVar9;
  longlong lVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  longlong *plVar13;
  longlong lVar14;
  longlong lVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  undefined1 auVar20 [16];
  undefined8 *local_130;
  undefined1 local_128;
  longlong local_120;
  undefined1 local_118;
  longlong local_110;
  undefined1 local_108;
  longlong local_100;
  undefined1 local_f8;
  longlong local_f0;
  undefined1 local_e8;
  undefined8 local_e0;
  undefined1 local_d8;
  undefined1 local_c8;
  longlong local_c0;
  char local_b8;
  longlong local_b0;
  char local_a8;
  longlong local_a0;
  char local_98;
  int local_8c;
  float local_88;
  undefined4 local_84;
  float local_80;
  float local_7c;
  float local_78;
  undefined4 local_74;
  longlong local_70;
  char local_68;
  undefined8 *local_60;
  longlong local_58;
  longlong local_50;
  undefined1 local_45;
  float local_44;
  longlong local_40;
  char local_38;
  
  local_8c = 1;
  local_88 = 100.0;
  local_84 = 0x43c80000;
  local_80 = 10.766602;
  local_7c = 1.0;
  local_78 = 1.0;
  FUN_00c8e690();
  local_58 = local_40;
  if ((((local_38 == '\0') && (local_40 != 0)) && (FUN_00d50b00(), local_38 != '\0')) &&
     (local_40 != 0)) {
    FUN_00d50b20();
  }
  FUN_00c92170();
  FUN_00c92160();
  ___bzero();
  FUN_00c8e690();
  local_50 = local_40;
  if (((local_38 == '\0') && (local_40 != 0)) &&
     ((FUN_00d50b00(), local_38 != '\0' && (local_40 != 0)))) {
    FUN_00d50b20();
  }
  FUN_00c92170();
  FUN_00c92160();
  ___bzero();
  FUN_00c8e690();
  lVar15 = local_40;
  if (((local_38 == '\0') && (local_40 != 0)) &&
     ((FUN_00d50b00(), local_38 != '\0' && (local_40 != 0)))) {
    FUN_00d50b20();
  }
  FUN_00c92170();
  FUN_00c92160();
  ___bzero();
  FUN_00c8e690();
  lVar1 = local_40;
  if ((((local_38 == '\0') && (local_40 != 0)) && (FUN_00d50b00(), local_38 != '\0')) &&
     (local_40 != 0)) {
    FUN_00d50b20();
  }
  FUN_00c92170();
  FUN_00c92160();
  ___bzero();
  local_45 = 0;
  puVar6 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  plVar12 = (longlong *)&DAT_02572358;
  *puVar6 = &DAT_02572358;
  (*DAT_02572370)();
  lVar11 = local_58;
  lVar14 = *unaff_RSI;
  local_60 = puVar6;
  if ((lVar14 != 0) && (*(int *)(lVar14 + 0xc) != 0)) {
    local_128 = 0;
    local_120 = lVar1;
    local_118 = 0;
    local_110 = local_58;
    local_108 = 0;
    local_100 = local_50;
    local_f8 = 0;
    local_f0 = lVar15;
    local_e8 = 0;
    local_e0 = 0;
    local_d8 = 0;
    plVar12 = &local_120;
    plVar13 = &local_110;
    local_130 = puVar6;
    uVar7 = FUN_017ee2e0(plVar12,&local_130,plVar13,&local_100,&local_88,&local_84,&local_7c,
                         &local_78,&local_45,lVar14,0);
    param_3 = (size_t)plVar13;
    if ((char)uVar7 != '\0') {
      local_74 = (undefined4)CONCAT71((int7)((ulonglong)uVar7 >> 8),1);
      lVar14 = lVar15;
      lVar15 = lVar1;
      goto LAB_017eda3f;
    }
  }
  FUN_00c8e690();
  lVar14 = local_40;
  if (((local_38 == '\0') && (local_40 != 0)) &&
     ((FUN_00d50b00(), local_38 != '\0' && (local_40 != 0)))) {
    FUN_00d50b20();
  }
  FUN_00c92170();
  FUN_00c92160();
  if (3 < (int)*(uint *)(lVar14 + 0x18)) {
    _memset_pattern16(plVar12,(void *)((ulonglong)((*(uint *)(lVar14 + 0x18) >> 2) - 1) * 4 + 4),
                      param_3);
  }
  if (lVar11 == lVar14) {
    FUN_00d50b20();
  }
  else {
    FUN_00d50b20();
    lVar11 = lVar14;
  }
  auVar5 = _DAT_023b2d50;
  lVar14 = *(longlong *)(lVar11 + 0x10);
  lVar10 = 5;
  iVar16 = _DAT_02394150;
  iVar17 = _UNK_02394154;
  iVar18 = _UNK_02394158;
  iVar19 = _UNK_0239415c;
  while( true ) {
    auVar20._4_4_ = (float)iVar17;
    auVar20._0_4_ = (float)iVar16;
    auVar20._8_4_ = (float)iVar18;
    auVar20._12_4_ = (float)iVar19;
    auVar20 = divps(auVar5,auVar20);
    *(undefined1 (*) [16])(lVar14 + -0x10 + lVar10 * 4) = auVar20;
    if (lVar10 == 0x1fd) break;
    auVar2._4_4_ = (float)(iVar17 + _UNK_02394184);
    auVar2._0_4_ = (float)(iVar16 + _DAT_02394180);
    auVar2._8_4_ = (float)(iVar18 + _UNK_02394188);
    auVar2._12_4_ = (float)(iVar19 + _UNK_0239418c);
    auVar20 = divps(auVar5,auVar2);
    *(undefined1 (*) [16])(lVar14 + lVar10 * 4) = auVar20;
    iVar16 = iVar16 + _DAT_023de2b0;
    iVar17 = iVar17 + _UNK_023de2b4;
    iVar18 = iVar18 + _UNK_023de2b8;
    iVar19 = iVar19 + _UNK_023de2bc;
    lVar10 = lVar10 + 8;
  }
  pvVar8 = (void *)0x3b0080813b00c122;
  *(undefined8 *)(lVar14 + 0x7f4) = 0x3b0080813b00c122;
  *(undefined4 *)(lVar14 + 0x7fc) = 0x3b004020;
  local_68 = '\0';
  local_70 = lVar11;
  local_58 = lVar11;
  FUN_00c8e4f0();
  lVar14 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  FUN_00c92170();
  FUN_00c92160();
  if (local_50 == lVar14) {
    if (local_50 == 0) {
      local_50 = 0;
    }
    else {
      FUN_00d50b20();
    }
  }
  else {
    if (local_50 != 0) {
      FUN_00d50b20();
    }
    local_50 = lVar14;
  }
  local_68 = '\0';
  local_70 = lVar11;
  FUN_00c8e4f0();
  lVar14 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  FUN_00c92170();
  FUN_00c92160();
  if (lVar15 == lVar14) {
    if (lVar15 == 0) {
      lVar14 = 0;
    }
    else {
      FUN_00d50b20();
      lVar14 = lVar15;
    }
  }
  else if (lVar15 != 0) {
    FUN_00d50b20();
  }
  FUN_00c8e690();
  lVar15 = local_40;
  if ((((local_38 == '\0') && (local_40 != 0)) && (FUN_00d50b00(), local_38 != '\0')) &&
     (local_40 != 0)) {
    FUN_00d50b20();
  }
  FUN_00c92170();
  FUN_00c92160();
  if (3 < (int)*(uint *)(lVar15 + 0x18)) {
    _memset_pattern16(pvVar8,(void *)((ulonglong)((*(uint *)(lVar15 + 0x18) >> 2) - 1) * 4 + 4),
                      param_3);
  }
  if (lVar1 == lVar15) {
    FUN_00d50b20();
    lVar15 = lVar1;
  }
  else if (lVar1 != 0) {
    FUN_00d50b20();
  }
  auVar5 = _DAT_023b2d50;
  lVar1 = *(longlong *)(lVar15 + 0x10);
  lVar11 = 5;
  iVar16 = _DAT_02394150;
  iVar17 = _UNK_02394154;
  iVar18 = _UNK_02394158;
  iVar19 = _UNK_0239415c;
  while( true ) {
    auVar3._4_4_ = (float)iVar17;
    auVar3._0_4_ = (float)iVar16;
    auVar3._8_4_ = (float)iVar18;
    auVar3._12_4_ = (float)iVar19;
    auVar20 = divps(auVar5,auVar3);
    *(undefined1 (*) [16])(lVar1 + -0x10 + lVar11 * 4) = auVar20;
    if (lVar11 == 0x7fd) break;
    auVar4._4_4_ = (float)(iVar17 + _UNK_02394184);
    auVar4._0_4_ = (float)(iVar16 + _DAT_02394180);
    auVar4._8_4_ = (float)(iVar18 + _UNK_02394188);
    auVar4._12_4_ = (float)(iVar19 + _UNK_0239418c);
    auVar20 = divps(auVar5,auVar4);
    *(undefined1 (*) [16])(lVar1 + lVar11 * 4) = auVar20;
    iVar16 = iVar16 + _DAT_023de2b0;
    iVar17 = iVar17 + _UNK_023de2b4;
    iVar18 = iVar18 + _UNK_023de2b8;
    iVar19 = iVar19 + _UNK_023de2bc;
    lVar11 = lVar11 + 8;
  }
  plVar12 = (longlong *)0x3a0020083a003012;
  *(undefined8 *)(&DAT_00001ff4 + lVar1) = 0x3a0020083a003012;
  *(undefined4 *)(lVar1 + 0x1ffc) = 0x3a001002;
  local_74 = 0;
LAB_017eda3f:
  pVar9 = (pthread_key_t)plVar12;
  pvVar8 = _pthread_getspecific(pVar9);
  if (pvVar8 != (void *)0x0) {
    FUN_00e8b990();
  }
  local_c0 = local_58;
  local_b8 = '\0';
  local_44 = local_88;
  FUN_015be4d0();
  if ((local_b8 != '\0') && (local_c0 != 0)) {
    FUN_00d50b20();
  }
  pvVar8 = _pthread_getspecific(pVar9);
  if (pvVar8 != (void *)0x0) {
    FUN_00e8b990();
  }
  local_b0 = local_50;
  local_a8 = '\0';
  FUN_015be4d0(local_44);
  if ((local_a8 != '\0') && (local_b0 != 0)) {
    FUN_00d50b20();
  }
  pvVar8 = _pthread_getspecific(pVar9);
  if (pvVar8 != (void *)0x0) {
    FUN_00e8b990();
  }
  local_98 = '\0';
  local_a0 = lVar14;
  FUN_015be4d0(local_84);
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  iVar16 = local_8c;
  if (*(int *)(unaff_RDI + 0xa8) != local_8c) {
    FUN_00d64850();
    *(int *)(unaff_RDI + 0xa8) = iVar16;
    FUN_00d64910();
  }
  if ((*(float *)(unaff_RDI + 0xac) != local_80) ||
     (NAN(*(float *)(unaff_RDI + 0xac)) || NAN(local_80))) {
    local_44 = local_80;
    FUN_00d64850();
    *(float *)(unaff_RDI + 0xac) = local_44;
    FUN_00d64910();
  }
  local_c8 = 0;
  FUN_017f1b90();
  if ((*(float *)(unaff_RDI + 0xb0) != local_7c) ||
     (NAN(*(float *)(unaff_RDI + 0xb0)) || NAN(local_7c))) {
    local_44 = local_7c;
    FUN_00d64850();
    *(float *)(unaff_RDI + 0xb0) = local_44;
    FUN_00d64910();
  }
  if ((*(float *)(unaff_RDI + 0xb4) != local_78) ||
     (NAN(*(float *)(unaff_RDI + 0xb4)) || NAN(local_78))) {
    local_44 = local_78;
    FUN_00d64850();
    *(float *)(unaff_RDI + 0xb4) = local_44;
    FUN_00d64910();
  }
  FUN_017f1c80();
  if (*(undefined8 **)(unaff_RDI + 0x80) != local_60) {
    FUN_00d64850();
    puVar6 = *(undefined8 **)(unaff_RDI + 0x80);
    if (puVar6 != local_60) {
      if (local_60 != (undefined8 *)0x0) {
        FUN_00d50b00();
      }
      *(undefined8 **)(unaff_RDI + 0x80) = local_60;
      if (puVar6 != (undefined8 *)0x0) {
        FUN_00d50b20();
      }
    }
    FUN_00d64910();
  }
  if (((char)local_74 != '\0') && (*(int *)(unaff_RDI + 0xd0) != 1)) {
    FUN_00d64850();
    *(undefined4 *)(unaff_RDI + 0xd0) = 1;
    FUN_00d64910();
  }
  if (local_60 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  lVar1 = local_58;
  if (lVar15 != 0) {
    FUN_00d50b20();
  }
  if (lVar14 != 0) {
    FUN_00d50b20();
  }
  if (local_50 != 0) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  return;
}


