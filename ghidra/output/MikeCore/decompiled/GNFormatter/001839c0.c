// Function: FUN_001839c0
// Address: 001839c0
// Size: 584 bytes
// Class: GNFormatter
// String references:
//   "GNFormatter"
//   "GNMultipleValuePresenter"


/* WARNING: Removing unreachable block (ram,0x00183bd7) */
/* WARNING: Removing unreachable block (ram,0x00183b9e) */
/* WARNING: Removing unreachable block (ram,0x00183baf) */
/* WARNING: Removing unreachable block (ram,0x00183be5) */

void FUN_001839c0(void)

{
  longlong lVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  
  lVar1 = FUN_00085720();
  if (*(char *)(lVar1 + 0xbb) == '\0') {
    FUN_000f60b0();
    FUN_00e87760();
    FUN_0006daf0();
    FUN_00d50c00();
    FUN_000f62d0();
    lVar1 = FUN_00085720();
    if (*(char *)(lVar1 + 0xbb) == '\0') {
      FUN_001d54d0();
      iVar2 = FUN_00e7ddf0();
      pcVar3 = "GNUni";
      if (iVar2 == 0) {
        pcVar3 = (char *)0x0;
      }
      FUN_00e879c0(pcVar3,"GNFormatter");
    }
    lVar1 = FUN_00085720();
    if (*(char *)(lVar1 + 0xbb) == '\0') {
      FUN_001d55c0();
      iVar2 = FUN_00e7ddf0();
      pcVar3 = "GNUni";
      if (iVar2 == 0) {
        pcVar3 = (char *)0x0;
      }
      FUN_00e879c0(pcVar3,"GNMultipleValuePresenter");
    }
    FUN_00d50c00();
    uVar4 = FUN_00e87770();
    FUN_00e87920(uVar4,0);
    FUN_000993f0();
    FUN_000993f0();
  }
  return;
}


