// Function: FUN_007649a0
// Address: 007649a0
// Size: 934 bytes
// Class: MUElementAnalyzer
// String references:
//   "MUElementAnalyzer"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007649a0(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  undefined4 uVar5;
  longlong local_c0;
  char local_b8;
  longlong local_b0;
  char local_a8;
  longlong local_a0;
  char local_98;
  longlong local_90;
  char local_88;
  longlong local_80;
  char local_78;
  longlong local_70;
  char local_68;
  longlong local_40;
  char local_38;
  
  FUN_00d403d0();
  if (unaff_RDI != 0) {
    FUN_00d50b00();
  }
  lVar1 = DAT_027295a0;
  if (DAT_027295a0 != 0) {
    FUN_00d50b00();
  }
  local_b0 = lVar1;
  local_a8 = '\x01';
  local_a0 = *unaff_RSI;
  local_98 = '\0';
  FUN_00d41430(&local_a0,&local_b0);
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_a8 != '\0') && (local_b0 != 0)) {
    FUN_00d50b20();
  }
  if (unaff_RDI != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d403d0();
  if (unaff_RDI != 0) {
    FUN_00d50b00();
  }
  lVar1 = DAT_027ebc70;
  if (DAT_027ebc70 != 0) {
    FUN_00d50b00();
  }
  local_90 = lVar1;
  local_88 = '\x01';
  local_80 = *unaff_RSI;
  local_78 = '\0';
  FUN_00d41430(&local_80,&local_90);
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  if (unaff_RDI != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if (*param_2 != 0) {
    uVar5 = FUN_00e33de0();
    lVar1 = DAT_0270b920;
    local_70 = *param_2;
    local_68 = '\0';
    if (DAT_0270b920 != 0) {
      uVar5 = FUN_00d50b00();
    }
    local_40 = lVar1;
    local_38 = '\0';
    FUN_00ca0840(uVar5,&local_40);
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    if ((local_b8 != '\0') && (local_c0 != 0)) {
      FUN_00d50b20();
    }
  }
  plVar4 = (longlong *)*unaff_RSI;
  if ((DAT_026e0c38 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
    _DAT_026e0b88 = FUN_000fddb0();
    _DAT_026e0b70 = "MUElementAnalyzer";
    _DAT_026e0b78 = 0x180;
    _DAT_026e0b80 = FUN_000fdd80;
    _DAT_026e0b90 = 0;
    uRam00000000026e0b98 = 0;
    _DAT_026e0ba0 = 0;
    _DAT_026e0c18 = 0;
    uRam00000000026e0c20 = 0;
    _DAT_026e0c28 = 0;
    DAT_026e0c2a = 1;
    _DAT_026e0ba8 = 0;
    uRam00000000026e0bb0 = 0;
    _DAT_026e0bb8 = 0;
    uRam00000000026e0bc0 = 0;
    _DAT_026e0bc8 = 0;
    uRam00000000026e0bd0 = 0;
    _DAT_026e0bd8 = 0;
    uRam00000000026e0be0 = 0;
    _DAT_026e0be8 = 0;
    uRam00000000026e0bf0 = 0;
    _DAT_026e0bf8 = 0;
    uRam00000000026e0c00 = 0;
    _DAT_026e0c08 = 0;
    uRam00000000026e0c10 = 0;
    DAT_026e0c33 = 0;
    _DAT_026e0c2b = 0;
    ___cxa_guard_release();
  }
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x360))();
    cVar2 = FUN_00e85ea0();
    plVar4 = unaff_RSI;
    if (cVar2 != '\0') goto LAB_00764c2b;
  }
  plVar4 = &DAT_02802688;
LAB_00764c2b:
  if (*plVar4 != 0) {
    FUN_0076f320();
  }
  local_40 = *unaff_RSI;
  local_38 = '\0';
  FUN_00d21140();
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  return;
}


