// Function: FUN_00842710
// Address: 00842710
// Size: 506 bytes
// Class: GNDisplayGroup
// String references:
//   "GNDisplayGroup"
//   "GNEditingContext"
//   "GNButton"
//   "GNDisplayGroupDelegate"

void FUN_00842710(void)

{
  int iVar1;
  int64_t lVar2;
  char *pcVar3;
  void*this_ptr;
  
  FUN_0005aa20();
  *this_ptr = &g_026443d8;
  FUN_008429d0();
  this_ptr[0xf] = &g_0267efd8;
  // [STATIC_INIT: property registration]
  FUN_00e87c40();
  *this_ptr = &g_02642db0;
  this_ptr[0xf] = &g_02643398;
  this_ptr[0x10] = 0;
  lVar2 = FUN_00842350();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00842cb0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNButton");
  }
  this_ptr[0x11] = 0;
  lVar2 = FUN_00842350();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00842da0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNDisplayGroup");
  }
  this_ptr[0x12] = 0;
  lVar2 = FUN_00842350();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00842e90();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNEditingContext");
  }
  FUN_00842f80();
  return;
}

