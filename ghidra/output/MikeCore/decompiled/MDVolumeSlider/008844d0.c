// Function: FUN_008844d0
// Address: 008844d0
// Size: 844 bytes
// Class: MDVolumeSlider
// String references:
//   "MDVolumeSlider"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008844d0(void)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  longlong unaff_RDI;
  longlong local_30;
  char local_28;
  
  FUN_01e534b0();
  plVar1 = *(longlong **)(unaff_RDI + 0x70);
  if ((DAT_026fec18 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
    _DAT_026feb68 = FUN_001b37d0();
    _DAT_026feb50 = "MDVolumeSlider";
    _DAT_026feb58 = 0x220;
    _DAT_026feb60 = FUN_002f9670;
    _DAT_026feb70 = 0;
    uRam00000000026feb78 = 0;
    _DAT_026feb80 = 0;
    _DAT_026febf8 = 0;
    uRam00000000026fec00 = 0;
    _DAT_026fec08 = 0;
    DAT_026fec0a = 1;
    _DAT_026feb88 = 0;
    uRam00000000026feb90 = 0;
    _DAT_026feb98 = 0;
    uRam00000000026feba0 = 0;
    _DAT_026feba8 = 0;
    uRam00000000026febb0 = 0;
    _DAT_026febb8 = 0;
    uRam00000000026febc0 = 0;
    _DAT_026febc8 = 0;
    uRam00000000026febd0 = 0;
    _DAT_026febd8 = 0;
    uRam00000000026febe0 = 0;
    _DAT_026febe8 = 0;
    uRam00000000026febf0 = 0;
    DAT_026fec13 = 0;
    _DAT_026fec0b = 0;
    ___cxa_guard_release();
  }
  lVar2 = DAT_02802688;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x360))();
    cVar3 = FUN_00e85ea0();
    lVar2 = DAT_02802688;
    if (cVar3 != '\0') {
      lVar2 = *(longlong *)(unaff_RDI + 0x70);
    }
  }
  if (lVar2 != 0) {
    FUN_00d50b00();
    FUN_0038f7f0();
    lVar2 = DAT_02741638;
    if (DAT_02741638 != 0) {
      FUN_00d50b00();
    }
    FUN_01d51a40();
    if (local_28 == '\0') {
      if (local_30 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_28 = '\0';
    }
    FUN_0038f6b0();
    if (local_30 != 0) {
      FUN_00d50b20();
    }
    if ((local_28 != '\0') && (local_30 != 0)) {
      FUN_00d50b20();
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    lVar2 = DAT_02741640;
    if (DAT_02741640 != 0) {
      FUN_00d50b00();
    }
    FUN_01d51a40();
    if (local_28 == '\0') {
      if (local_30 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_28 = '\0';
    }
    FUN_0038f710();
    if (local_30 != 0) {
      FUN_00d50b20();
    }
    if ((local_28 != '\0') && (local_30 != 0)) {
      FUN_00d50b20();
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    lVar2 = DAT_02741648;
    if (DAT_02741648 != 0) {
      FUN_00d50b00();
    }
    FUN_01d51a40();
    if (local_28 == '\0') {
      if (local_30 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_28 = '\0';
    }
    FUN_0038f770();
    if (local_30 != 0) {
      FUN_00d50b20();
    }
    if ((local_28 != '\0') && (local_30 != 0)) {
      FUN_00d50b20();
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  return;
}


