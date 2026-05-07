// Function: FUN_0056f450
// Address: 0056f450
// Size: 569 bytes
// Class: GNCelemonyAccountClient
// String references:
//   "bool"
//   "GNCelemonyAccountClient"
//   "GNTimeInterval"
//   "_versionIsUpToDate"
//   "_timeout"
// === GNCelemonyAccountClient properties ===
//   bool            _versionIsUpToDate
//   GNTimeInterval  _timeout


void FUN_0056f450(void)

{
  int iVar1;
  int64_t lVar2;
  char *pcVar3;
  void*this_ptr;
  
  FUN_00044470();
  *this_ptr = &g_0257d578;
  this_ptr[2] = &g_0257d930;
  this_ptr[3] = &g_0257d968;
  this_ptr[0xc] = 0;
  lVar2 = FUN_000982d0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0056f7a0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNCelemonyAccountClient");
  }
  *(void*)(this_ptr + 0xd) = 0;
  lVar2 = FUN_000982d0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  FUN_0056f890();
  FUN_0056f970();
  FUN_0056fa50();
  this_ptr[0x11] = 0;
  lVar2 = FUN_000982d0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  return;
}

