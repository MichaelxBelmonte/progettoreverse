// Function: FUN_00bf6440
// Address: 00bf6440
// Size: 671 bytes
// Class: GNUni
// String references:
//   "GNUni"
//   "GNView"


/* WARNING: Removing unreachable block (ram,0x00bf66ae) */
/* WARNING: Removing unreachable block (ram,0x00bf666d) */
/* WARNING: Removing unreachable block (ram,0x00bf667e) */
/* WARNING: Removing unreachable block (ram,0x00bf66bc) */

void FUN_00bf6440(void)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  char *pcVar4;
  undefined4 uVar5;
  
  lVar2 = FUN_00c43820();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0017fbd0();
    FUN_00e87760();
    FUN_00d4ff40();
    if (1 < DAT_02802630) {
      puVar3 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar3 = &DAT_02572358;
      (*DAT_02572370)();
    }
    FUN_00d50c00();
    FUN_001bcb00();
    lVar2 = FUN_00c43820();
    if (*(char *)(lVar2 + 0xbb) == '\0') {
      FUN_00c4c000();
      iVar1 = FUN_00e7ddf0();
      pcVar4 = "GNUni";
      if (iVar1 == 0) {
        pcVar4 = (char *)0x0;
      }
      FUN_00e879c0(pcVar4,"GNView");
    }
    lVar2 = FUN_00c43820();
    if (*(char *)(lVar2 + 0xbb) == '\0') {
      FUN_00c4c0f0();
      iVar1 = FUN_00e7ddf0();
      pcVar4 = "GNUni";
      if (iVar1 == 0) {
        pcVar4 = (char *)0x0;
      }
      FUN_00e879c0(pcVar4,"GNView");
    }
    FUN_00d50c00();
    uVar5 = FUN_00e87770();
    FUN_00e87920(uVar5,0);
    FUN_001bb300();
    FUN_001bb300();
  }
  return;
}


