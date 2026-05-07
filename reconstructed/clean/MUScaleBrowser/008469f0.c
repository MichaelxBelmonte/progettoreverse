// Function: FUN_008469f0
// Address: 008469f0
// Size: 592 bytes
// Class: MUScaleBrowser
// String references:
//   "bool"
//   "MUScaleBrowser"
//   "MUScaleBrowserCtrl"
//   "_isScaleTuningEditable"
//   "_isScaleModeEditable"
// === MUScaleBrowser properties ===
//   bool            _isScaleTuningEditable
//   bool            _isScaleModeEditable
//                   _allowsInividualColumnWidths
//                   _autotileEnabled
//                   _showsHeaderView


void FUN_008469f0(void)

{
  int iVar1;
  int64_t lVar2;
  char *pcVar3;
  void*this_ptr;
  
  FUN_0005aa20();
  *this_ptr = &g_026443d8;
  FUN_008429d0();
  *this_ptr = &g_02647150;
  this_ptr[0xf] = 0;
  lVar2 = FUN_008467f0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00846ce0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUScaleBrowser");
  }
  this_ptr[0x10] = 0;
  lVar2 = FUN_008467f0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00846dd0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUScaleBrowserCtrl");
  }
  *(void*)(this_ptr + 0x11) = 0;
  lVar2 = FUN_008467f0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x89) = 0;
  lVar2 = FUN_008467f0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  return;
}

