// Function: FUN_001e6fd0
// Address: 001e6fd0
// Size: 1176 bytes
// Class: GNLabel
// String references:
//   "bool"
//   "float"
//   "_progress"
//   "GNLabel"
//   "GNButton"
//   "GNProgressBar"
//   "_delay"
//   "GNTimeInterval"
//   "_cancelEnabled"
//   "_shouldStop"
//   "_closeAfterDelayIsActivated"
// === GNLabel properties ===
//   GNTimeInterval  _delay
//   float           _progress
//   bool            _cancelEnabled
//   bool            _shouldStop
//   bool            _closeAfterDelayIsActivated
//   float           _editedCenterFloatValue
//   float           _editedDriftFloatValue
//   bool            _snapToTonality


void FUN_001e6fd0(void)

{
  int iVar1;
  int64_t lVar2;
  char *pcVar3;
  void*this_ptr;
  
  FUN_0005aa20();
  *this_ptr = &g_026879b0;
  this_ptr[0xe] = 0;
  lVar2 = FUN_001e6c80();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_001e7570();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNLabel");
  }
  this_ptr[0xf] = 0;
  lVar2 = FUN_001e6c80();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_001e7660();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNProgressBar");
  }
  this_ptr[0x10] = 0;
  lVar2 = FUN_001e6c80();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_001e7750();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNButton");
  }
  this_ptr[0x11] = 0;
  lVar2 = FUN_001e6c80();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0x12) = 0;
  lVar2 = FUN_001e6c80();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x94) = 0;
  lVar2 = FUN_001e6c80();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x95) = 0;
  lVar2 = FUN_001e6c80();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x96) = 0;
  lVar2 = FUN_001e6c80();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  return;
}

