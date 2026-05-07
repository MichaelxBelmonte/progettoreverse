// Function: FUN_01ce54a0
// Address: 01ce54a0
// Size: 2465 bytes
// Class: GNString
// String references:
//   "GNString"


/* WARNING: Removing unreachable block (ram,0x01ce577f) */
/* WARNING: Removing unreachable block (ram,0x01ce578b) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01ce54a0(void)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  longlong **pplVar7;
  undefined4 uVar8;
  longlong local_118;
  char local_110;
  undefined8 *local_108;
  char local_100;
  longlong local_90;
  char local_88;
  longlong local_80;
  char local_78;
  longlong *local_70;
  char local_68;
  longlong *local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong *local_40;
  char local_38;
  
  *(longlong *)(unaff_RDI + 0x38) = *unaff_RSI;
  uVar8 = FUN_01ce6490();
  plVar5 = (longlong *)FUN_00e8fc40();
  FUN_00074c30();
  (**(code **)(*plVar5 + 0x18))();
  plVar1 = *(longlong **)(unaff_RDI + 0x30);
  if (plVar1 == plVar5) {
    FUN_00d50b20();
  }
  else {
    *(longlong **)(unaff_RDI + 0x30) = plVar5;
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  FUN_01d95060();
  (**(code **)(**(longlong **)(unaff_RDI + 0x30) + 0x4d0))(0);
  FUN_01d97870();
  (**(code **)(*(longlong *)*unaff_RSI + 0x998))();
  local_80 = local_50;
  local_78 = 0;
  if (local_48 == '\0') {
    if (local_50 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_48 = '\0';
  }
  local_78 = '\x01';
  FUN_01cf3e00();
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01d97870();
  (**(code **)(*local_40 + 0x4d8))();
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  puVar6 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar6 = &DAT_02692468;
  puVar6[2] = &DAT_026927f8;
  puVar6[0xc] = 0;
  puVar6[3] = 0;
  puVar6[4] = 0;
  *(undefined8 *)((longlong)puVar6 + 0x24) = 0;
  *(undefined8 *)((longlong)puVar6 + 0x2c) = 0;
  puVar6[7] = 0;
  puVar6[8] = 0;
  puVar6[9] = 0;
  puVar6[10] = 0;
  *(undefined2 *)(puVar6 + 0xb) = 0;
  (*DAT_02692480)();
  FUN_01db96b0(uVar8);
  (**(code **)(**(longlong **)(unaff_RDI + 0x38) + 0x920))();
  FUN_00d51d20();
  local_70 = local_40;
  local_68 = 0;
  if (local_38 == '\0') {
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  local_68 = '\x01';
  FUN_01db9640();
  if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(**(longlong **)(unaff_RDI + 0x38) + 0x928))();
  FUN_01db99b0();
  plVar5 = (longlong *)FUN_00e8fc40();
  FUN_001932c0();
  (**(code **)(*plVar5 + 0x18))();
  plVar1 = *(longlong **)(unaff_RDI + 0x28);
  if (plVar1 == plVar5) {
    FUN_00d50b20();
  }
  else {
    *(longlong **)(unaff_RDI + 0x28) = plVar5;
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  FUN_01dcbe90();
  (**(code **)(**(longlong **)(unaff_RDI + 0x28) + 0x4d0))(0,uVar8);
  (**(code **)(*(longlong *)(unaff_RDI + 0x10) + 0x10))();
  FUN_00d50b00();
  FUN_01de09c0();
  if ((longlong *)(unaff_RDI + 0x10) != (longlong *)0x0) {
    (**(code **)(*(longlong *)(unaff_RDI + 0x10) + 0x10))();
    FUN_00d50b20();
  }
  (**(code **)(*(longlong *)(unaff_RDI + 0x18) + 0x10))();
  FUN_00d50b00();
  FUN_01de09b0();
  if ((longlong *)(unaff_RDI + 0x18) != (longlong *)0x0) {
    (**(code **)(*(longlong *)(unaff_RDI + 0x18) + 0x10))();
    FUN_00d50b20();
  }
  FUN_00d50b00();
  FUN_01ddf190();
  if (unaff_RDI != 0) {
    FUN_00d50b20();
  }
  lVar2 = DAT_027eedf0;
  if (DAT_027eedf0 != 0) {
    FUN_00d50b00();
  }
  FUN_01ddf130();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  FUN_00d50b00();
  FUN_01ddf2f0();
  if (unaff_RDI != 0) {
    FUN_00d50b20();
  }
  lVar2 = DAT_027eedf8;
  if (DAT_027eedf8 != 0) {
    FUN_00d50b00();
  }
  FUN_01ddf290();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  FUN_01dce540();
  FUN_01dce520();
  FUN_01dce560(0);
  FUN_01de0990();
  FUN_01de09a0();
  if (*(char *)(*(longlong *)(unaff_RDI + 0x38) + 0x181) != '\0') {
    FUN_01dcc2e0();
  }
  FUN_01dca0e0();
  FUN_01dcea50();
  lVar2 = *(longlong *)(unaff_RDI + 0x28);
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  FUN_01d978b0();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if (*(char *)(*(longlong *)(unaff_RDI + 0x38) + 0x18b) == '\0') goto LAB_01ce5c38;
  FUN_01dcc4e0();
  plVar1 = *(longlong **)(*(longlong *)(unaff_RDI + 0x38) + 0x138);
  if (plVar1 == (longlong *)0x0) goto LAB_01ce5c38;
  (**(code **)(*plVar1 + 0x10))();
  FUN_00d50b00();
  (**(code **)(*plVar1 + 0x10))();
  FUN_00d50b20();
  local_118 = *(longlong *)(unaff_RDI + 0x38);
  plVar1 = *(longlong **)(local_118 + 0x138);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x10))();
    FUN_00d50b00();
    local_118 = *(longlong *)(unaff_RDI + 0x38);
  }
  local_110 = '\0';
  local_88 = 0;
  lVar2 = *(longlong *)(unaff_RDI + 0x20);
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  local_88 = '\x01';
  pplVar7 = &local_40;
  local_90 = lVar2;
  (**(code **)(*plVar1 + 0x70))(&local_90,&local_118);
  plVar5 = local_40;
  if ((DAT_026fd0c0 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
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
  if (plVar5 == (longlong *)0x0) {
LAB_01ce5b80:
    pplVar7 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar5 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 == '\0') goto LAB_01ce5b80;
  }
  local_58 = 0;
  plVar5 = *pplVar7;
  if (*(char *)(pplVar7 + 1) == '\0') {
    if (plVar5 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar7 + 1) = 0;
  }
  local_58 = '\x01';
  local_60 = plVar5;
  FUN_01db9840();
  if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  if ((local_110 != '\0') && (local_118 != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(*plVar1 + 0x10))();
  FUN_00d50b20();
LAB_01ce5c38:
  if (*(char *)(*unaff_RSI + 0x188) != '\0') {
    puVar6 = (undefined8 *)FUN_00e8fc40();
    FUN_0006daf0();
    *(undefined4 *)(puVar6 + 0x27) = 0;
    puVar6[0x2e] = 0;
    *(undefined4 *)(puVar6 + 0x2f) = 0;
    puVar6[0x30] = 0;
    *(undefined1 *)(puVar6 + 0x31) = 0;
    puVar6[0x28] = 0;
    puVar6[0x29] = 0;
    *(undefined4 *)(puVar6 + 0x2a) = 0;
    puVar6[0x2b] = 0;
    puVar6[0x2c] = 0;
    *(undefined8 *)((longlong)puVar6 + 0x165) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x18c) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x194) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x199) = 0;
    puVar6[0x35] = 0;
    puVar6[0x36] = 0;
    puVar6[0x37] = 0;
    puVar6[0x38] = 0;
    puVar6[0x39] = 0;
    puVar6[0x3a] = 0;
    *(undefined1 *)(puVar6 + 0x3b) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x1ef) = 0;
    puVar6[0x3d] = 0;
    *puVar6 = &DAT_02676e38;
    puVar6[2] = &DAT_02677978;
    puVar6[0x3c] = &DAT_026779b8;
    puVar6[0x3f] = 0;
    *(undefined1 *)(puVar6 + 0x40) = 0;
    FUN_00d500e0();
    local_100 = '\0';
    local_108 = puVar6;
    FUN_01d97bd0();
    if ((local_100 != '\0') && (local_108 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
    puVar6[0x3f] = unaff_RDI;
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}


