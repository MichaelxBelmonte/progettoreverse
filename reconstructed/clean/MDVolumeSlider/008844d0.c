// Function: FUN_008844d0
// Address: 008844d0
// Size: 844 bytes
// Class: MDVolumeSlider
// String references:
//   "MDVolumeSlider"
// === MDVolumeSlider properties ===
//                   _meterInfo
//                   _lastValue
//                   _knobBorderStyle
//                   _image0
//                   _image1
//                   _image2
//                   _image3
//                   _image4
//                   _isDimSlider
//                   _knobOnlyHitDetection


void FUN_008844d0(void)

{
  int64_t *plVar1;
  int64_t lVar2;
  char cVar3;
  int iVar4;
  int64_t this_ptr;
  int64_t local_30;
  char local_28;
  
  FUN_01e534b0();
  plVar1 = *(int64_t **)(this_ptr + 0x70);
  if ((g_026fec18 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
    g_026feb68 = FUN_001b37d0();
    g_026feb50 = "MDVolumeSlider";
    g_026feb58 = 0x220;
    g_026feb60 = FUN_002f9670;
    g_026feb70 = 0;
    ram_00000000026feb78 = 0;
    g_026feb80 = 0;
    g_026febf8 = 0;
    ram_00000000026fec00 = 0;
    g_026fec08 = 0;
    g_026fec0a = 1;
    g_026feb88 = 0;
    ram_00000000026feb90 = 0;
    g_026feb98 = 0;
    ram_00000000026feba0 = 0;
    g_026feba8 = 0;
    ram_00000000026febb0 = 0;
    g_026febb8 = 0;
    ram_00000000026febc0 = 0;
    g_026febc8 = 0;
    ram_00000000026febd0 = 0;
    g_026febd8 = 0;
    ram_00000000026febe0 = 0;
    g_026febe8 = 0;
    ram_00000000026febf0 = 0;
    g_026fec13 = 0;
    g_026fec0b = 0;
    ___cxa_guard_release();
  }
  lVar2 = g_02802688;
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x360))();
    cVar3 = FUN_00e85ea0();
    lVar2 = g_02802688;
    if (cVar3 != '\0') {
      lVar2 = *(int64_t *)(this_ptr + 0x70);
    }
  }
  if (lVar2 != 0) {
    FUN_00d50b00();
    FUN_0038f7f0();
    lVar2 = g_02741638;
    if (g_02741638 != 0) {
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
    lVar2 = g_02741640;
    if (g_02741640 != 0) {
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
    lVar2 = g_02741648;
    if (g_02741648 != 0) {
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

