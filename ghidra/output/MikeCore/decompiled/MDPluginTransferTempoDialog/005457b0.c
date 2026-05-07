// Function: FUN_005457b0
// Address: 005457b0
// Size: 1596 bytes
// Class: MDPluginTransferTempoDialog
// String references:
//   "%@ - %@"


void FUN_005457b0(double param_1,double param_2)

{
  longlong lVar1;
  longlong lVar2;
  double dVar3;
  char cVar4;
  undefined7 uVar5;
  longlong *plVar6;
  longlong unaff_RDI;
  longlong *plVar7;
  longlong *plVar8;
  ulonglong unaff_R13;
  char cVar9;
  undefined7 uVar11;
  ulonglong uVar10;
  byte bVar12;
  bool bVar13;
  undefined8 uVar14;
  longlong local_140;
  longlong local_138;
  char local_130;
  longlong local_128;
  char local_120;
  longlong local_118;
  char local_110;
  longlong *local_108;
  char local_100;
  longlong *local_f8;
  char local_f0;
  longlong local_e8;
  char local_e0;
  longlong local_d8;
  char local_d0;
  longlong *local_c8;
  char local_c0;
  longlong *local_b8;
  char local_b0;
  longlong *local_a8;
  char local_a0;
  longlong local_98;
  char local_90;
  double local_88;
  longlong *local_80;
  char local_78;
  longlong *local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  double local_40;
  
  lVar1 = DAT_0270cbb8;
  local_88 = param_1;
  local_40 = param_2;
  if (DAT_0270cbb8 != 0) {
    FUN_00d50b00();
  }
  lVar2 = DAT_0270cbd0;
  local_138 = lVar1;
  local_130 = '\x01';
  if (DAT_0270cbd0 != 0) {
    FUN_00d50b00();
  }
  local_128 = lVar2;
  local_120 = '\x01';
  local_118 = 0;
  local_110 = '\0';
  FUN_00d31230(&local_118,&local_128);
  plVar7 = local_70;
  if (local_70 == (longlong *)0x0) {
    bVar12 = 1;
    plVar7 = (longlong *)0x0;
    unaff_R13 = 0;
  }
  else {
    if (local_68 == '\0') {
      FUN_00d50b00();
      unaff_R13 = CONCAT71((int7)(unaff_R13 >> 8),1);
      bVar12 = 0;
      if ((local_68 == '\0') || (bVar12 = 0, local_70 == (longlong *)0x0)) goto LAB_0054588d;
      FUN_00d50b20();
    }
    else {
      local_68 = '\0';
    }
    unaff_R13 = CONCAT71((int7)(unaff_R13 >> 8),1);
    bVar12 = 0;
  }
LAB_0054588d:
  if ((local_110 != '\0') && (local_118 != 0)) {
    FUN_00d50b20();
  }
  if ((local_120 != '\0') && (local_128 != 0)) {
    FUN_00d50b20();
  }
  if ((local_130 != '\0') && (local_138 != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(**(longlong **)(unaff_RDI + 0x90) + 0x960))();
  local_100 = '\0';
  local_108 = plVar7;
  cVar4 = (**(code **)(*local_70 + 0x50))();
  if ((local_100 != '\0') && (local_108 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar4 == '\0') {
    local_f0 = '\0';
    local_f8 = plVar7;
    (**(code **)(**(longlong **)(unaff_RDI + 0x90) + 0x958))();
    if ((local_f0 != '\0') && (local_f8 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  (**(code **)(**(longlong **)(unaff_RDI + 200) + 0x378))((float)local_88);
  (**(code **)(**(longlong **)(unaff_RDI + 200) + 0x378))((float)local_40);
  local_140 = local_98;
  uVar5 = 0;
  uVar14 = FUN_00083ea0(2,&local_140);
  FUN_00d8cb40(uVar14,&local_70);
  plVar8 = local_80;
  uVar11 = (undefined7)((ulonglong)unaff_RDI >> 8);
  if (local_80 == plVar7) {
    plVar8 = plVar7;
    if ((bool)(bVar12 & plVar7 != (longlong *)0x0)) {
      if (local_78 != '\0') goto LAB_00545a55;
      uVar10 = CONCAT71(uVar11,1);
      FUN_00d50b00();
    }
    else {
      uVar10 = unaff_R13 & 0xffffffff;
    }
LAB_00545aa2:
    if ((local_78 == '\0') || (local_80 == (longlong *)0x0)) {
      local_40 = (double)(uVar10 & 0xffffffff);
    }
    else {
      FUN_00d50b20();
      local_40 = (double)(uVar10 & 0xffffffff);
    }
  }
  else {
    if (local_78 == '\0') {
      if (local_80 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      uVar10 = CONCAT71(uVar11,1);
      if (((byte)unaff_R13 & plVar7 != (longlong *)0x0) == 1) {
        FUN_00d50b20();
      }
      goto LAB_00545aa2;
    }
    bVar13 = plVar7 != (longlong *)0x0;
    uVar5 = (undefined7)((unaff_R13 & 0xffffffff) >> 8);
    plVar7 = plVar8;
    if (((byte)(unaff_R13 & 0xffffffff) & bVar13) == 1) {
      FUN_00d50b20();
    }
LAB_00545a55:
    local_78 = '\0';
    local_40 = (double)CONCAT71(uVar5,1);
    plVar8 = plVar7;
  }
  local_70 = (longlong *)&DAT_0253d630;
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  local_70 = &DAT_024c5048;
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if ((local_90 != '\0') && (local_98 != 0)) {
    FUN_00d50b20();
  }
  if ((local_a0 != '\0') && (local_a8 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  lVar1 = DAT_0270cbb0;
  if (DAT_0270cbb0 != 0) {
    FUN_00d50b00();
  }
  local_98 = lVar1;
  local_a8 = plVar8;
  FUN_00083ea0(2,&local_98);
  uVar14 = FUN_000b4da0();
  plVar7 = local_80;
  if (local_80 == (longlong *)0x0) {
    local_88 = (double)CONCAT44(local_88._4_4_,(int)CONCAT71((int7)((ulonglong)uVar14 >> 8),1));
  }
  else {
    if (local_78 == '\0') {
      FUN_00d50b00();
      local_88 = (double)((ulonglong)local_88 & 0xffffffff00000000);
      if ((local_78 == '\0') || (local_80 == (longlong *)0x0)) goto LAB_00545bc5;
      FUN_00d50b20();
    }
    else {
      local_78 = '\0';
    }
    local_88 = (double)((ulonglong)local_88 & 0xffffffff00000000);
  }
LAB_00545bc5:
  local_70 = (longlong *)&DAT_0253d630;
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  local_70 = &DAT_024c5048;
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  dVar3 = local_40;
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = DAT_0270cbb8;
  if (DAT_0270cbb8 != 0) {
    FUN_00d50b00();
  }
  lVar2 = DAT_0270cbd8;
  local_e8 = lVar1;
  local_e0 = '\x01';
  if (DAT_0270cbd8 != 0) {
    FUN_00d50b00();
  }
  local_d8 = lVar2;
  local_d0 = '\x01';
  local_c8 = plVar7;
  local_c0 = '\0';
  FUN_00d31230(&local_c8,&local_d8);
  plVar6 = local_70;
  cVar4 = SUB81(dVar3,0);
  if (local_70 == plVar8) {
    plVar6 = plVar8;
    cVar9 = cVar4;
    if ((cVar4 == '\0') && (local_70 != (longlong *)0x0)) {
      if (local_68 == '\0') {
        FUN_00d50b00();
        goto LAB_00545ce0;
      }
      goto LAB_00545caf;
    }
  }
  else {
    if (local_68 != '\0') {
      if ((cVar4 != '\0') && (plVar8 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
LAB_00545caf:
      local_68 = '\0';
      cVar9 = '\x01';
      goto LAB_00545d22;
    }
    if (local_70 != (longlong *)0x0) {
      FUN_00d50b00();
    }
    cVar9 = '\x01';
    if ((cVar4 != '\0') && (plVar8 != (longlong *)0x0)) {
      FUN_00d50b20();
      plVar8 = plVar6;
LAB_00545ce0:
      plVar6 = plVar8;
      cVar9 = '\x01';
    }
  }
  if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
LAB_00545d22:
  if ((local_c0 != '\0') && (local_c8 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_d0 != '\0') && (local_d8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_e0 != '\0') && (local_e8 != 0)) {
    FUN_00d50b20();
  }
  local_b0 = '\0';
  local_b8 = plVar6;
  (**(code **)(**(longlong **)(unaff_RDI + 0x98) + 0x958))();
  if ((local_b0 != '\0') && (local_b8 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (SUB81(local_88,0) == '\0' && plVar7 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((cVar9 != '\0') && (plVar6 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  return;
}


