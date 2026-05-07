// Function: FUN_005e25c0
// Address: 005e25c0
// Size: 1214 bytes
// Class: GNLabel
// String references:
//   "bool"
//   "float"
//   "GNLabel"
//   "GNButton"
//   "GNSlider"
//   "GNSwitchButton"
//   "_editedCenterFloatValue"
//   "_editedDriftFloatValue"
//   "_snapToTonality"
// === GNLabel properties ===
//   GNTimeInterval  _delay
//   float           _progress
//   bool            _cancelEnabled
//   bool            _shouldStop
//   bool            _closeAfterDelayIsActivated
//   float           _editedCenterFloatValue
//   float           _editedDriftFloatValue
//   bool            _snapToTonality


void FUN_005e25c0(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int iVar1;
  int64_t lVar2;
  char *pcVar3;
  void*this_ptr;
  void*puVar4;
  
  FUN_002730b0();
  *this_ptr = &g_0250ead8;
  this_ptr[0x11] = 0;
  lVar2 = FUN_005e23e0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005e2ca0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNSlider");
  }
  this_ptr[0x12] = 0;
  lVar2 = FUN_005e23e0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005e2d90();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNSlider");
  }
  this_ptr[0x13] = 0;
  lVar2 = FUN_005e23e0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005e2e80();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNLabel");
  }
  this_ptr[0x14] = 0;
  lVar2 = FUN_005e23e0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005e2f70();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNLabel");
  }
  puVar4 = this_ptr + 0x15;
  this_ptr[0x15] = 0;
  lVar2 = FUN_005e23e0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005e3060();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNSwitchButton",param_3,param_4,puVar4);
  }
  *(void*)(this_ptr + 0x16) = 0;
  lVar2 = FUN_005e23e0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0xb4) = 0;
  lVar2 = FUN_005e23e0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  this_ptr[0x17] = 0;
  lVar2 = FUN_005e23e0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005e3150();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNButton");
  }
  this_ptr[0x18] = 0;
  lVar2 = FUN_005e23e0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005e3240();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNButton");
  }
  *(void*)(this_ptr + 0x19) = 0;
  lVar2 = FUN_005e23e0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  return;
}

