// Function: FUN_01e73a80
// Address: 01e73a80
// Size: 521 bytes
// Class: GNUni
// String references:
//   "GNUni"
//   "GNSwitchButton"


/* WARNING: Removing unreachable block (ram,0x01e73c58) */
/* WARNING: Removing unreachable block (ram,0x01e73c1f) */
/* WARNING: Removing unreachable block (ram,0x01e73c66) */

void FUN_01e73a80(void)

{
  longlong lVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  longlong local_218;
  
  lVar1 = FUN_01e7eb20();
  if (*(char *)(lVar1 + 0xbb) == '\0') {
    FUN_000f60b0();
    FUN_00e87760();
    FUN_0006daf0();
    FUN_00d50c00();
    FUN_000f62d0();
    FUN_01e7ed90();
    lVar1 = FUN_01e7eb20();
    if (*(char *)(lVar1 + 0xbb) == '\0') {
      FUN_01e7ee70();
      iVar2 = FUN_00e7ddf0();
      pcVar3 = "GNUni";
      if (iVar2 == 0) {
        pcVar3 = (char *)0x0;
      }
      FUN_00e879c0(pcVar3,"GNSwitchButton");
    }
    FUN_00d50c00();
    FUN_00e87770();
    uVar4 = FUN_01d01000();
    FUN_00e87920(uVar4,0);
    if (local_218 != 0) {
      FUN_00d50b20();
    }
    FUN_000993f0();
    FUN_000993f0();
  }
  return;
}


