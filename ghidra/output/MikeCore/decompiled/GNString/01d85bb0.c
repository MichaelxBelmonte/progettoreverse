// Function: FUN_01d85bb0
// Address: 01d85bb0
// Size: 1647 bytes
// Class: GNString
// String references:
//   "GNString"
//   "GNDictionary"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01d85bb0(undefined8 param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  bool bVar3;
  longlong lVar4;
  longlong lVar5;
  char cVar6;
  int iVar7;
  longlong *plVar8;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  longlong *plVar9;
  longlong **pplVar10;
  undefined8 uVar11;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 uVar12;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar13 [16];
  float fVar14;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  undefined1 auVar15 [16];
  float local_e8;
  float fStack_e0;
  float fStack_dc;
  undefined1 local_c8 [16];
  longlong local_b8;
  char local_b0;
  longlong local_a8;
  char local_a0;
  longlong local_98;
  char local_90;
  longlong *local_88;
  char local_80;
  longlong *local_78;
  char local_70;
  longlong *local_68;
  char local_60;
  undefined1 local_58 [12];
  float fStack_4c;
  longlong *local_40;
  char local_38;
  
  local_c8._4_4_ = (undefined4)((ulonglong)param_2 >> 0x20);
  local_c8._0_4_ = (undefined4)param_2;
  if (*(longlong *)(unaff_RDI + 0x18) == 0) {
    return;
  }
  FUN_01e59080();
  uVar11 = FUN_01e5bd50();
  local_e8 = (float)uVar11;
  fStack_e0 = (float)extraout_XMM0_Qb;
  fStack_dc = (float)((ulonglong)extraout_XMM0_Qb >> 0x20);
  plVar9 = (longlong *)*unaff_RSI;
  uVar12 = uVar11;
  if ((DAT_026fdd40 == '\0') &&
     (iVar7 = ___cxa_guard_acquire(), uVar12 = extraout_XMM0_Qa_01, iVar7 != 0)) {
    _DAT_026cd0e8 = FUN_00d4fe50();
    DAT_026cd0d0 = "GNDictionary";
    _DAT_026cd0d8 = 0x28;
    _DAT_026cd0e0 = FUN_00022d20;
    _DAT_026cd0f0 = 0;
    uRam00000000026cd0f8 = 0;
    _DAT_026cd100 = 0;
    _DAT_026cd178 = 0;
    uRam00000000026cd180 = 0;
    _DAT_026cd188 = 0;
    DAT_026cd18a = 6;
    _DAT_026cd108 = 0;
    uRam00000000026cd110 = 0;
    _DAT_026cd118 = 0;
    uRam00000000026cd120 = 0;
    _DAT_026cd128 = 0;
    uRam00000000026cd130 = 0;
    _DAT_026cd138 = 0;
    uRam00000000026cd140 = 0;
    _DAT_026cd148 = 0;
    uRam00000000026cd150 = 0;
    _DAT_026cd158 = 0;
    uRam00000000026cd160 = 0;
    _DAT_026cd168 = 0;
    uRam00000000026cd170 = 0;
    DAT_026cd193 = 0;
    _DAT_026cd18b = 0;
    uVar12 = ___cxa_guard_release();
  }
  plVar8 = &DAT_02802688;
  if (plVar9 != (longlong *)0x0) {
    (**(code **)(*plVar9 + 0x360))();
    cVar6 = FUN_00e85ea0();
    uVar12 = extraout_XMM0_Qa;
    if (cVar6 != '\0') {
      if ((DAT_026fd0c0 == '\0') && (iVar7 = ___cxa_guard_acquire(), iVar7 != 0)) {
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
        ___cxa_guard_release();
      }
      cVar6 = FUN_00e8db60();
      plVar8 = unaff_RSI;
      uVar12 = extraout_XMM0_Qa_00;
      if (cVar6 == '\0') {
        plVar8 = &DAT_02802688;
      }
    }
  }
  plVar9 = (longlong *)*plVar8;
  lVar4 = plVar8[1];
  if (((char)lVar4 == '\0') || (plVar9 == (longlong *)0x0)) {
    if (plVar9 == (longlong *)0x0) {
      local_98 = *unaff_RSI;
      local_90 = '\0';
      FUN_00c73090();
      local_c8._8_4_ = in_XMM1_Dc;
      local_c8._12_4_ = in_XMM1_Dd;
      plVar9 = (longlong *)0x0;
      bVar3 = false;
      if ((local_90 != '\0') && (local_98 != 0)) {
        FUN_00d50b20();
        plVar9 = (longlong *)0x0;
        bVar3 = false;
      }
      goto LAB_01d85e27;
    }
  }
  else {
    uVar12 = FUN_00d50b00();
  }
  lVar5 = DAT_027f1420;
  local_58[0] = (char)lVar4;
  if (DAT_027f1420 != 0) {
    uVar12 = FUN_00d50b00();
  }
  local_b8 = lVar5;
  local_b0 = '\x01';
  (**(code **)(*plVar9 + 0x88))(uVar12,&local_b8);
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
  uVar12 = FUN_00c73090();
  local_c8._8_4_ = in_XMM1_Dc;
  local_c8._12_4_ = in_XMM1_Dd;
  if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
    uVar12 = FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    uVar12 = FUN_00d50b20();
  }
  if ((local_b0 != '\0') && (local_b8 != 0)) {
    uVar12 = FUN_00d50b20();
  }
  lVar4 = DAT_027f1428;
  if (DAT_027f1428 != 0) {
    uVar12 = FUN_00d50b00();
  }
  local_a8 = lVar4;
  local_a0 = '\x01';
  pplVar10 = &local_40;
  (**(code **)(*plVar9 + 0x88))(uVar12,&local_a8);
  plVar9 = local_40;
  if ((DAT_026fd0c0 == '\0') && (iVar7 = ___cxa_guard_acquire(), iVar7 != 0)) {
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
    ___cxa_guard_release();
  }
  if (plVar9 == (longlong *)0x0) {
LAB_01d85db4:
    pplVar10 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar9 + 0x360))();
    cVar6 = FUN_00e85ea0();
    if (cVar6 == '\0') goto LAB_01d85db4;
  }
  plVar9 = *pplVar10;
  if (plVar9 == (longlong *)0x0) {
    bVar3 = false;
    plVar9 = (longlong *)0x0;
  }
  else {
    if (*(char *)(pplVar10 + 1) == '\0') {
      FUN_00d50b00();
    }
    else {
      *(undefined1 *)(pplVar10 + 1) = 0;
    }
    bVar3 = true;
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_a0 != '\0') && (local_a8 != 0)) {
    FUN_00d50b20();
  }
  if (local_58[0] != '\0') {
    FUN_00d50b20();
  }
LAB_01d85e27:
  local_58._8_4_ = fStack_e0;
  local_58._0_8_ = uVar11;
  fStack_4c = fStack_dc;
  if (local_e8 <= local_c8._0_4_) {
    _local_58 = local_c8;
  }
  auVar15._8_4_ = fStack_e0;
  auVar15._0_8_ = uVar11;
  auVar15._12_4_ = fStack_dc;
  fVar14 = (float)((ulonglong)uVar11 >> 0x20);
  auVar13._4_4_ = -(uint)(local_c8._4_4_ < fVar14);
  auVar13._0_4_ = -(uint)(local_c8._0_4_ < local_e8);
  auVar13._8_4_ = -(uint)(local_c8._8_4_ < fStack_e0);
  auVar13._12_4_ = -(uint)(local_c8._12_4_ < fStack_dc);
  auVar15 = blendvps(local_c8,auVar15,auVar13);
  cVar6 = FUN_01e5c720();
  _local_58 = blendps(_local_58,auVar15,2);
  if (cVar6 == '\0') {
    FUN_01e5b880();
    auVar1._4_4_ = fVar14;
    auVar1._0_4_ = local_e8;
    auVar1._8_4_ = fStack_e0;
    auVar1._12_4_ = fStack_dc;
    _local_58 = blendps(_local_58,auVar1,0xd);
  }
  cVar6 = FUN_01e5c7d0();
  if (cVar6 == '\0') {
    FUN_01e5b880();
    auVar2._4_4_ = fVar14;
    auVar2._0_4_ = local_e8;
    auVar2._8_4_ = fStack_e0;
    auVar2._12_4_ = fStack_dc;
    _local_58 = blendps(_local_58,auVar2,2);
  }
  if (plVar9 == (longlong *)0x0) {
    FUN_01f50d20();
  }
  else {
    local_80 = '\0';
    local_88 = plVar9;
    FUN_01f50e00();
  }
  plVar8 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != (longlong *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
       (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if (((plVar9 != (longlong *)0x0) && (local_80 != '\0')) && (local_88 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  local_78 = plVar8;
  local_70 = '\0';
  FUN_01e5ba50();
  if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar8 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((bVar3) && (plVar9 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  return;
}


