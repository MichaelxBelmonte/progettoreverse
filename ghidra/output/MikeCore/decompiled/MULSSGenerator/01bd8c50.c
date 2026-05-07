// Function: FUN_01bd8c50
// Address: 01bd8c50
// Size: 557 bytes
// Class: MULSSGenerator


/* WARNING: Removing unreachable block (ram,0x01bd8cab) */
/* WARNING: Removing unreachable block (ram,0x01bd8cb4) */
/* WARNING: Removing unreachable block (ram,0x01bd8e26) */
/* WARNING: Removing unreachable block (ram,0x01bd8e2f) */
/* WARNING: Removing unreachable block (ram,0x01bd8e66) */
/* WARNING: Removing unreachable block (ram,0x01bd8e73) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01bd8c50(undefined8 param_1,float param_2)

{
  int iVar1;
  int iVar2;
  char in_DL;
  longlong lVar3;
  int unaff_ESI;
  longlong unaff_RDI;
  longlong lVar4;
  int iVar5;
  undefined8 local_40;
  undefined1 local_38;
  
  lVar4 = *(longlong *)(unaff_RDI + 0x90);
  if (lVar4 != 0) {
    FUN_00d50b00();
  }
  FUN_00c8e4f0();
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  FUN_00c92170();
  FUN_00c92160();
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  (**(code **)(**(longlong **)(unaff_RDI + 0x88) + 0x4d8))();
  iVar5 = 1;
  if (*(longlong **)(unaff_RDI + 0x88) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(unaff_RDI + 0x88) + 0x4a0))();
    iVar1 = *(int *)(local_40 + 0xc);
    if (local_38 != '\0') {
      FUN_00d50b20();
    }
    if (iVar1 != 0 && 0.0 < param_2) {
      iVar1 = FUN_00e7d780(param_2 / _DAT_0241df1c);
      iVar5 = 1;
      if (0 < iVar1) {
        iVar5 = iVar1;
      }
    }
  }
  if (in_DL == '\0') {
    FUN_00c8e340();
  }
  iVar1 = *(int *)(local_40 + 0x18);
  lVar4 = (longlong)iVar1;
  iVar2 = iVar1 + 3;
  if (-1 < lVar4) {
    iVar2 = iVar1;
  }
  if (3 < lVar4) {
    iVar2 = iVar2 >> 2;
    lVar3 = 0;
    do {
      if (*(int *)(*(longlong *)(local_40 + 0x10) + lVar3 * 4) == unaff_ESI) goto LAB_01bd8de0;
      lVar3 = lVar3 + 1;
    } while (iVar2 != (int)lVar3);
  }
  FUN_00c8e340(iVar2,1);
  *(int *)(*(longlong *)(local_40 + 0x10) + lVar4) = unaff_ESI;
LAB_01bd8de0:
  while( true ) {
    iVar1 = *(int *)(local_40 + 0x18);
    iVar2 = iVar1 + 3;
    if (-1 < iVar1) {
      iVar2 = iVar1;
    }
    if (iVar2 >> 2 <= iVar5) break;
    FUN_00e7b4e0();
    FUN_00c921e0();
  }
  FUN_01bd0ba0();
  FUN_00d50b20();
  return;
}


