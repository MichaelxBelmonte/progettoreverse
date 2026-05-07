// Function: FUN_00500e20
// Address: 00500e20
// Size: 1249 bytes
// Class: MDHorizontalRulerSelectorView


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00500e20(void)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *unaff_RSI;
  undefined8 *unaff_RDI;
  longlong local_a8;
  char local_a0;
  longlong local_98;
  char local_90;
  longlong local_88;
  char local_80;
  longlong local_38;
  char local_30;
  
  plVar4 = (longlong *)FUN_00e8fc40();
  FUN_0006daf0();
  *(undefined4 *)(plVar4 + 0x27) = 0;
  plVar4[0x2e] = 0;
  *(undefined4 *)(plVar4 + 0x2f) = 0;
  plVar4[0x30] = 0;
  *(undefined1 *)(plVar4 + 0x31) = 0;
  plVar4[0x28] = 0;
  plVar4[0x29] = 0;
  *(undefined4 *)(plVar4 + 0x2a) = 0;
  plVar4[0x2b] = 0;
  plVar4[0x2c] = 0;
  *(undefined8 *)((longlong)plVar4 + 0x165) = 0;
  *(undefined8 *)((longlong)plVar4 + 0x18c) = 0;
  *(undefined8 *)((longlong)plVar4 + 0x194) = 0;
  *(undefined8 *)((longlong)plVar4 + 0x199) = 0;
  plVar4[0x35] = 0;
  plVar4[0x36] = 0;
  plVar4[0x37] = 0;
  plVar4[0x38] = 0;
  *(undefined4 *)((longlong)plVar4 + 500) = 0;
  *(undefined1 *)(plVar4 + 0x3f) = 0;
  plVar4[0x43] = 0;
  plVar4[0x3c] = 0;
  plVar4[0x3d] = 0;
  plVar4[0x3a] = 0;
  plVar4[0x3b] = 0;
  *(undefined1 *)(plVar4 + 0x3e) = 0;
  *(undefined8 *)((longlong)plVar4 + 0x1fc) = 0;
  *(undefined8 *)((longlong)plVar4 + 0x204) = 0;
  *(undefined8 *)((longlong)plVar4 + 0x20c) = 0;
  *plVar4 = (longlong)&DAT_02687f80;
  plVar4[2] = (longlong)&DAT_02688a68;
  plVar4[0x39] = (longlong)&DAT_02688aa8;
  plVar4[0x44] = 0;
  *(undefined1 *)(plVar4 + 0x45) = 0;
  plVar4[0x46] = 0;
  *(undefined1 *)(plVar4 + 0x47) = 0;
  plVar4[0x48] = 0;
  *(undefined1 *)(plVar4 + 0x49) = 0;
  *(undefined4 *)((longlong)plVar4 + 0x24c) = 0;
  *(undefined1 *)(plVar4 + 0x4a) = 0;
  (*DAT_02687f98)();
  FUN_01cef4c0();
  (**(code **)(*unaff_RSI + 0xa20))();
  if (local_30 == '\0') {
    if (local_38 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_30 = '\0';
  }
  FUN_01d778e0();
  if (local_38 != 0) {
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  FUN_01d7ac40();
  FUN_01cef4e0(DAT_023b1d84);
  lVar2 = DAT_02709e20;
  if (DAT_02709e20 != 0) {
    FUN_00d50b00();
  }
  (**(code **)(*plVar4 + 0xa10))();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  FUN_01cef490();
  lVar2 = DAT_02709df8;
  if (DAT_02709df8 != 0) {
    FUN_00d50b00();
  }
  lVar3 = DAT_02709e00;
  if (DAT_02709e00 != 0) {
    FUN_00d50b00();
  }
  local_a8 = lVar3;
  local_a0 = '\x01';
  local_98 = 0;
  local_90 = '\0';
  FUN_00d31230(&local_98,&local_a8);
  if (local_30 == '\0') {
    if (local_38 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_30 = '\0';
  }
  (**(code **)(*plVar4 + 0x6a8))();
  if (local_38 != 0) {
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  if ((local_90 != '\0') && (local_98 != 0)) {
    FUN_00d50b20();
  }
  if ((local_a0 != '\0') && (local_a8 != 0)) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  lVar2 = DAT_02709e28;
  if (DAT_02709e28 != 0) {
    FUN_00d50b00();
  }
  local_88 = lVar2;
  local_80 = '\x01';
  FUN_01d51a40();
  if (local_30 == '\0') {
    if (local_38 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_30 = '\0';
  }
  FUN_01cef3b0();
  if (local_38 != 0) {
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  FUN_01cef4e0(_DAT_023b4a20);
  FUN_00d50b00();
  (**(code **)(*plVar4 + 0xa20))();
  if (unaff_RSI != (longlong *)0x0) {
    FUN_00d50b20();
  }
  plVar1 = (longlong *)unaff_RSI[0x4a];
  if (plVar1 != plVar4) {
    FUN_00d50b00();
    unaff_RSI[0x4a] = (longlong)plVar4;
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  *unaff_RDI = plVar4;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}


