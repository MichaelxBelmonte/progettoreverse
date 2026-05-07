// ===================================================================
// GNSlider — Complete reconstructed pseudocode
// 1 functions
// ===================================================================

// Registered properties (9):
//   GNInt           _iCent
//   double          _currentPos
//   double          _currentCent
//   GNInt           _midiNoteNumber
//   bool            _newNoteCoordinatesInitiated
//   float           _pixPerPeriod
//   float           _tempoViewY0
//   float           _tempoViewHeight
//   bool            _tempoView


// ============================================================
// 00581680
// ============================================================
// Function: FUN_00581680
// Address: 00581680
// Size: 3815 bytes
// Class: GNSlider
// String references:
//   "bool"
//   "float"
//   "GNSlider"
//   "GNPopUpButton"
//   "GNSwitchButton"
//   "_iCent"
//   "_currentPos"
//   "_currentCent"
//   "_midiNoteNumber"
//   "MUPosValue"
//   "_newNoteCoordinatesInitiated"
//   "_pixPerPeriod"
//   "_tempoViewY0"
//   "_tempoViewHeight"
//   "_tempoView"
//   "double"
//   "GNInt"
// === GNSlider properties ===
//   GNInt           _iCent
//   double          _currentPos
//   double          _currentCent
//   GNInt           _midiNoteNumber
//   bool            _newNoteCoordinatesInitiated
//   float           _pixPerPeriod
//   float           _tempoViewY0
//   float           _tempoViewHeight
//   bool            _tempoView


void FUN_00581680(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int iVar1;
  int64_t lVar2;
  char *pcVar3;
  void*this_ptr;
  void*puVar4;
  
  FUN_00582b10();
  *this_ptr = &g_024d1760;
  this_ptr[2] = &g_024d2128;
  *(void*)(this_ptr + 0x34) = 0;
  lVar2 = FUN_00152600();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  this_ptr[0x35] = 0;
  lVar2 = FUN_00152600();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  this_ptr[0x36] = 0;
  lVar2 = FUN_00152600();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0x37) = 0;
  lVar2 = FUN_00152600();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  this_ptr[0x38] = 0;
  lVar2 = FUN_00152600();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005853b0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUPosValue");
  }
  *(void*)(this_ptr + 0x39) = 0;
  lVar2 = FUN_00152600();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x1cc) = 0;
  lVar2 = FUN_00152600();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0x3a) = 0;
  lVar2 = FUN_00152600();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x1d4) = 0;
  lVar2 = FUN_00152600();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0x3b) = 0;
  lVar2 = FUN_00152600();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  this_ptr[0x3c] = 0;
  lVar2 = FUN_00152600();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005854a0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNPopUpButton");
  }
  this_ptr[0x3d] = 0;
  lVar2 = FUN_00152600();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00585590();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNSwitchButton");
  }
  this_ptr[0x3e] = 0;
  lVar2 = FUN_00152600();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00585680();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNSwitchButton");
  }
  puVar4 = this_ptr + 0x3f;
  this_ptr[0x3f] = 0;
  lVar2 = FUN_00152600();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00585770();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNSwitchButton",param_3,param_4,puVar4);
  }
  this_ptr[0x40] = 0;
  lVar2 = FUN_00152600();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00585860();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNSwitchButton");
  }
  this_ptr[0x41] = 0;
  lVar2 = FUN_00152600();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00585950();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNSwitchButton");
  }
  this_ptr[0x42] = 0;
  lVar2 = FUN_00152600();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00585a40();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNSwitchButton");
  }
  this_ptr[0x43] = 0;
  lVar2 = FUN_00152600();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00585b30();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNSwitchButton");
  }
  this_ptr[0x44] = 0;
  lVar2 = FUN_00152600();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00585c20();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNSwitchButton");
  }
  this_ptr[0x45] = 0;
  lVar2 = FUN_00152600();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00585d10();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNSwitchButton");
  }
  this_ptr[0x46] = 0;
  lVar2 = FUN_00152600();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00585e00();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNSwitchButton");
  }
  this_ptr[0x47] = 0;
  lVar2 = FUN_00152600();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00585ef0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNSwitchButton");
  }
  this_ptr[0x48] = 0;
  lVar2 = FUN_00152600();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00585fe0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNSwitchButton");
  }
  this_ptr[0x49] = 0;
  lVar2 = FUN_00152600();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005860d0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNSwitchButton");
  }
  this_ptr[0x4a] = 0;
  lVar2 = FUN_00152600();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005861c0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNSwitchButton");
  }
  this_ptr[0x4b] = 0;
  lVar2 = FUN_00152600();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005862b0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNSlider");
  }
  this_ptr[0x4c] = 0;
  lVar2 = FUN_00152600();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005863a0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNSlider");
  }
  this_ptr[0x4d] = 0;
  lVar2 = FUN_00152600();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00586490();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNSlider");
  }
  this_ptr[0x4e] = 0;
  lVar2 = FUN_00152600();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00586580();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNSlider");
  }
  this_ptr[0x4f] = 0;
  lVar2 = FUN_00152600();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00586670();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNSlider");
  }
  this_ptr[0x50] = 0;
  lVar2 = FUN_00152600();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00586760();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNSlider");
  }
  this_ptr[0x51] = 0;
  lVar2 = FUN_00152600();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00586850();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNSlider");
  }
  return;
}

