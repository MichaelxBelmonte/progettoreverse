// Function: FUN_01e27b00
// Address: 01e27b00
// Size: 1691 bytes
// Class: Unknown


void FUN_01e27b00(void)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  longlong *plVar5;
  undefined7 uVar6;
  undefined8 *unaff_RSI;
  longlong unaff_RDI;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar7;
  longlong *local_118;
  char local_110;
  longlong local_108;
  char local_100;
  longlong local_f8;
  char local_f0;
  longlong local_e8;
  char local_e0;
  longlong local_d8;
  char local_d0;
  longlong local_98;
  char local_90;
  longlong local_88;
  char local_80;
  longlong local_78;
  char local_70;
  longlong local_68;
  char local_60;
  longlong *local_58;
  undefined8 local_50;
  longlong local_48;
  longlong *local_40;
  char local_38;
  
  FUN_01cb4790();
  plVar1 = local_40;
  if ((((local_38 == '\0') && (local_40 != (longlong *)0x0)) && (FUN_00d50b00(), local_38 != '\0'))
     && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  plVar5 = (longlong *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar5 + 0x18))();
  local_58 = plVar5;
  FUN_00d403d0();
  lVar2 = DAT_027f37c8;
  if (DAT_027f37c8 != 0) {
    FUN_00d50b00();
  }
  if (unaff_RDI != 0) {
    FUN_00d50b00();
  }
  local_118 = local_58;
  local_110 = '\0';
  FUN_00d40470(&local_118,&stack0xffffffffffffff38,3,3);
  if ((local_110 != '\0') && (local_118 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (unaff_RDI != 0) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  lVar2 = DAT_027feca0;
  if (DAT_027feca0 != 0) {
    FUN_00d50b00();
  }
  local_40 = (longlong *)lVar2;
  local_38 = '\0';
  cVar4 = FUN_00c9ff50();
  uVar7 = extraout_XMM0_Da;
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    uVar7 = FUN_00d50b20();
  }
  if (lVar2 != 0) {
    uVar7 = FUN_00d50b20();
  }
  lVar3 = DAT_027feca0;
  lVar2 = DAT_027f37d0;
  if (cVar4 == '\0') {
    if (DAT_027f37d0 != 0) {
      FUN_00d50b00();
    }
    local_48 = lVar2;
    local_50 = CONCAT71((int7)((ulonglong)lVar2 >> 8),lVar2 != 0);
    goto LAB_01e27d74;
  }
  if (DAT_027feca0 != 0) {
    uVar7 = FUN_00d50b00();
  }
  local_108 = lVar3;
  local_100 = '\x01';
  FUN_000175c0(uVar7,&local_108);
  local_48 = (longlong)local_40;
  if (local_40 == (longlong *)0x0) {
    local_50 = 0;
LAB_01e27d46:
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    uVar6 = (undefined7)((ulonglong)local_40 >> 8);
    if (local_38 == '\0') {
      local_50 = CONCAT71(uVar6,1);
      FUN_00d50b00();
      goto LAB_01e27d46;
    }
    local_38 = '\0';
    local_50 = CONCAT71(uVar6,1);
  }
  if ((local_100 != '\0') && (local_108 != 0)) {
    FUN_00d50b20();
  }
LAB_01e27d74:
  FUN_01d48370();
  plVar5 = (longlong *)*unaff_RSI;
  FUN_01e3f820();
  (**(code **)(*plVar5 + 0x390))();
  (**(code **)(*plVar1 + 0x3a0))();
  lVar2 = local_e8;
  if (local_e0 == '\0') {
    if (local_e8 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_e0 = '\0';
  }
  (**(code **)(*plVar1 + 0x3a8))();
  local_98 = local_d8;
  local_90 = 0;
  if (local_d0 == '\0') {
    if (local_d8 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_d0 = '\0';
  }
  local_90 = '\x01';
  FUN_01cfd290(DAT_0239011c,&local_98);
  plVar5 = local_40;
  if (local_38 == '\0') {
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  FUN_01d488d0();
  if (plVar5 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_90 != '\0') && (local_98 != 0)) {
    FUN_00d50b20();
  }
  if ((local_d0 != '\0') && (local_d8 != 0)) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if ((local_e0 != '\0') && (local_e8 != 0)) {
    FUN_00d50b20();
  }
  plVar5 = (longlong *)*unaff_RSI;
  FUN_01e3f820();
  (**(code **)(*plVar5 + 0x3b0))();
  (**(code **)(*plVar1 + 0x3a0))();
  local_88 = (longlong)local_40;
  local_80 = 0;
  if (local_38 == '\0') {
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  local_80 = '\x01';
  FUN_01d488d0();
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01d48b40(DAT_02390124);
  plVar5 = (longlong *)*unaff_RSI;
  FUN_01e3f820();
  (**(code **)(*plVar5 + 0x3b8))();
  (**(code **)(*plVar1 + 0x390))();
  local_78 = (longlong)local_40;
  local_70 = 0;
  if (local_38 == '\0') {
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  local_70 = '\x01';
  FUN_01d488d0();
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(*plVar1 + 0x370))();
  local_68 = (longlong)local_40;
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
  FUN_01d48a10();
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  plVar1 = (longlong *)*unaff_RSI;
  local_f8 = local_48;
  local_f0 = '\0';
  FUN_01e3f820();
  uVar7 = FUN_00d05530();
  (**(code **)(*plVar1 + 0x3f8))(uVar7,2);
  if ((local_f0 != '\0') && (local_f8 != 0)) {
    FUN_00d50b20();
  }
  FUN_01d48390();
  FUN_00d50b20();
  if (((char)local_50 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}


