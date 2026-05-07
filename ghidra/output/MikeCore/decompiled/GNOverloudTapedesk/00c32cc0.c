// Function: FUN_00c32cc0
// Address: 00c32cc0
// Size: 2027 bytes
// Class: GNOverloudTapedesk
// String references:
//   "Circle_%f_%f_%f"


/* WARNING: Removing unreachable block (ram,0x00c32f3c) */
/* WARNING: Removing unreachable block (ram,0x00c32f48) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00c32cc0(undefined8 param_1,float param_2,float param_3)

{
  longlong lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined4 in_EDX;
  longlong *unaff_RSI;
  undefined8 *unaff_RDI;
  bool bVar5;
  undefined8 uVar6;
  undefined1 in_XMM0 [16];
  undefined1 auVar7 [16];
  float fVar9;
  undefined4 in_XMM1_Dd;
  undefined1 auVar8 [16];
  float fVar10;
  undefined4 local_148;
  float fStack_144;
  undefined4 uStack_13c;
  longlong local_130;
  char local_128;
  longlong local_120;
  char local_118;
  undefined8 *local_110;
  char local_108;
  undefined8 *local_100;
  char local_f8;
  undefined8 *local_f0;
  char local_e8;
  undefined8 *local_e0;
  char local_d8;
  undefined4 local_d0;
  float local_cc;
  float local_c8;
  float fStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined1 local_b8 [16];
  longlong local_a8;
  char local_a0;
  longlong local_98;
  char local_90;
  longlong local_88;
  char local_80;
  float local_74;
  undefined8 *local_70;
  char local_68;
  undefined8 *local_58;
  uint local_50;
  undefined4 local_4c;
  float local_48;
  float local_44;
  undefined8 local_40;
  undefined4 local_38;
  float local_34;
  
  fVar9 = (float)((ulonglong)param_1 >> 0x20);
  auVar7._0_4_ = DAT_0239011c * fVar9 + in_XMM0._0_4_;
  auVar7._4_4_ = DAT_0239011c * fVar9 + in_XMM0._4_4_;
  auVar7._8_4_ = in_XMM0._8_4_ + 0.0;
  auVar7._12_4_ = in_XMM0._12_4_ + 0.0;
  auVar7 = roundps(in_XMM0,auVar7,9);
  local_40 = CONCAT44(local_40._4_4_,DAT_02390118 + param_2);
  local_b8 = ZEXT416((uint)(DAT_024204d0 * (DAT_02390118 + param_2) * _DAT_023d9594));
  local_74 = param_3;
  local_34 = param_2;
  ___sincosf_stret();
  puVar3 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar3 = &DAT_02680400;
  *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
  puVar3[6] = 0;
  puVar3[7] = 0;
  *(undefined8 *)((longlong)puVar3 + 0x39) = 0;
  *(undefined8 *)((longlong)puVar3 + 0x41) = 0;
  pcVar2 = DAT_02680418;
  (*DAT_02680418)();
  FUN_01d39180();
  fVar10 = (float)((int)fVar9 / 2) + DAT_023b1608;
  local_148 = auVar7._0_4_;
  fStack_144 = auVar7._4_4_;
  uStack_13c = auVar7._12_4_;
  local_cc = DAT_02394244 + fVar10;
  local_c8 = fStack_144;
  fStack_c4 = fStack_144;
  uStack_c0 = uStack_13c;
  uStack_bc = uStack_13c;
  local_38 = local_148;
  if ((local_74 != DAT_02390124) || (NAN(local_74) || NAN(DAT_02390124))) {
    if (0.0 <= (float)local_40) {
      FUN_01d39310();
      local_34 = (float)local_40;
    }
    else {
      FUN_01d39310();
      local_34 = (float)local_40;
    }
  }
  else {
    FUN_01d39310();
  }
  FUN_01d38830();
  FUN_01d48370();
  local_50 = 3;
  local_4c = local_38;
  local_48 = local_c8;
  local_58 = (undefined8 *)&DAT_026b2438;
  local_44 = fVar10;
  uVar6 = FUN_00d8cb40();
  if ((local_128 == '\0') && (local_130 != 0)) {
    uVar6 = FUN_00d50b00();
  }
  local_b8._0_8_ = local_130;
  local_120 = local_130;
  local_118 = '\0';
  FUN_000175c0(uVar6,&local_120);
  puVar4 = local_58;
  local_d0 = in_EDX;
  if (local_58 == (undefined8 *)0x0) {
    local_40 = 0;
    puVar4 = (undefined8 *)0x0;
  }
  else {
    if ((char)local_50 != '\0') {
      local_50 = local_50 & 0xffffff00;
      local_40 = CONCAT71((int7)((ulonglong)local_58 >> 8),1);
      bVar5 = false;
      goto LAB_00c32fe1;
    }
    uVar6 = FUN_00d50b00();
    local_40 = CONCAT71((int7)((ulonglong)uVar6 >> 8),1);
  }
  bVar5 = puVar4 == (undefined8 *)0x0;
  if (((char)local_50 != '\0') && (local_58 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
LAB_00c32fe1:
  if ((local_118 != '\0') && (local_120 != 0)) {
    FUN_00d50b20();
  }
  if (bVar5) {
    puVar4 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar4 = &DAT_02680400;
    *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
    puVar4[6] = 0;
    puVar4[7] = 0;
    *(undefined8 *)((longlong)puVar4 + 0x39) = 0;
    *(undefined8 *)((longlong)puVar4 + 0x41) = 0;
    uVar6 = (*pcVar2)();
    local_40 = CONCAT71((int7)((ulonglong)uVar6 >> 8),1);
    uVar6 = FUN_01d39310();
    local_108 = '\0';
    local_58 = (undefined8 *)local_b8._0_8_;
    local_50 = local_50 & 0xffffff00;
    local_110 = puVar4;
    uVar6 = FUN_00ca0840(uVar6,&local_58);
    if (((char)local_50 != '\0') && (local_58 != (undefined8 *)0x0)) {
      uVar6 = FUN_00d50b20();
    }
    local_40 = CONCAT71((int7)((ulonglong)uVar6 >> 8),1);
    if ((local_108 != '\0') && (local_110 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
  }
  local_f8 = '\0';
  local_100 = puVar4;
  (**(code **)(*(longlong *)*unaff_RDI + 0x398))();
  if ((local_f8 != '\0') && (local_100 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(*(longlong *)*unaff_RDI + 0x368))();
  local_a0 = 0;
  local_a8 = *(longlong *)(*unaff_RSI + 0x70);
  if (local_a8 != 0) {
    FUN_00d50b00();
  }
  local_a0 = '\x01';
  FUN_01d488d0();
  if ((local_a0 != '\0') && (local_a8 != 0)) {
    FUN_00d50b20();
  }
  local_e8 = '\0';
  local_f0 = puVar3;
  (**(code **)(*(longlong *)*unaff_RDI + 0x3a0))();
  if ((local_e8 != '\0') && (local_f0 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01d48390();
  FUN_01d48370();
  local_d8 = '\0';
  local_e0 = puVar3;
  (**(code **)(*(longlong *)*unaff_RDI + 0x398))();
  if ((local_d8 != '\0') && (local_e0 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  if ((char)local_d0 == '\0') {
    local_80 = 0;
    lVar1 = *(longlong *)(*unaff_RSI + 0x150);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    local_80 = '\x01';
    local_88 = lVar1;
    FUN_01d488d0();
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_90 = 0;
    lVar1 = *(longlong *)(*unaff_RSI + 0x148);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    local_90 = '\x01';
    local_98 = lVar1;
    FUN_01d488d0();
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
  }
  auVar7 = insertps(in_XMM0,ZEXT416((uint)(DAT_024229f0 * (fVar10 + fVar10) + (local_c8 - fVar10))),
                    0x10);
  auVar8._4_4_ = fVar9;
  auVar8._0_4_ = fVar9;
  auVar8._8_4_ = in_XMM1_Dd;
  auVar8._12_4_ = in_XMM1_Dd;
  auVar8 = insertps(auVar8,ZEXT416((uint)((fVar10 + fVar10) * DAT_02394298)),0x10);
  (**(code **)(*(longlong *)*unaff_RDI + 0x3b0))(auVar7._0_8_,auVar8._0_8_);
  FUN_01d48390();
  FUN_01d48b40();
  (**(code **)(*(longlong *)*unaff_RSI + 0x3a0))();
  local_70 = local_58;
  local_68 = 0;
  if ((char)local_50 == '\0') {
    if (local_58 != (undefined8 *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_50 = local_50 & 0xffffff00;
  }
  local_68 = '\x01';
  FUN_01d488d0();
  if ((local_68 != '\0') && (local_70 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_50 != '\0') && (local_58 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_74 != DAT_02390124) || (NAN(local_74) || NAN(DAT_02390124))) {
    (**(code **)(*(longlong *)*unaff_RDI + 0x3e0))();
  }
  else if (local_34 < _DAT_023b294c) {
    if (DAT_0239011c < local_34) {
      FUN_01d48b40((local_34 + DAT_02390118) * DAT_02394248 + DAT_02390124);
    }
    (**(code **)(*(longlong *)*unaff_RDI + 0x3e0))();
  }
  if (local_b8._0_8_ != 0) {
    FUN_00d50b20();
  }
  if (((char)local_40 != '\0') && (puVar4 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}


