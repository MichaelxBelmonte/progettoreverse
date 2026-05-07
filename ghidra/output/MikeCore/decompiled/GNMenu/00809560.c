// Function: FUN_00809560
// Address: 00809560
// Size: 708 bytes
// Class: GNMenu
// String references:
//   "GNMenu"


/* WARNING: Removing unreachable block (ram,0x008097f3) */
/* WARNING: Removing unreachable block (ram,0x008097e5) */
/* WARNING: Removing unreachable block (ram,0x00809801) */

void FUN_00809560(void)

{
  longlong lVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  longlong local_2d0;
  longlong local_2c0;
  longlong local_2b0;
  
  lVar1 = FUN_00822d90();
  if (*(char *)(lVar1 + 0xbb) == '\0') {
    FUN_001871b0();
    FUN_00e87760();
    FUN_0006daf0();
    FUN_00d50c00();
    FUN_001e7990();
    lVar1 = FUN_00822d90();
    if (*(char *)(lVar1 + 0xbb) == '\0') {
      FUN_008230a0();
      iVar2 = FUN_00e7ddf0();
      pcVar3 = "GNUni";
      if (iVar2 == 0) {
        pcVar3 = (char *)0x0;
      }
      FUN_00e879c0(pcVar3,"GNMenu");
    }
    FUN_00d50c00();
    uVar4 = FUN_00e87770();
    FUN_00e87920(uVar4,0);
    if (local_2b0 != 0) {
      FUN_00d50b20();
    }
    if (local_2c0 != 0) {
      FUN_00d50b20();
    }
    if (local_2d0 != 0) {
      FUN_00d50b20();
    }
    FUN_000fba40();
    FUN_000fba40();
  }
  return;
}


