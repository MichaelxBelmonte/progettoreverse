// Function: FUN_018c77c0
// Address: 018c77c0
// Size: 782 bytes
// Class: GNList


/* WARNING: Removing unreachable block (ram,0x018c7834) */
/* WARNING: Removing unreachable block (ram,0x018c79a4) */
/* WARNING: Removing unreachable block (ram,0x018c79ad) */
/* WARNING: Removing unreachable block (ram,0x018c7900) */
/* WARNING: Removing unreachable block (ram,0x018c7920) */
/* WARNING: Removing unreachable block (ram,0x018c7840) */
/* WARNING: Removing unreachable block (ram,0x018c7860) */
/* WARNING: Removing unreachable block (ram,0x018c7842) */
/* WARNING: Removing unreachable block (ram,0x018c7862) */
/* WARNING: Removing unreachable block (ram,0x018c7902) */
/* WARNING: Removing unreachable block (ram,0x018c7922) */

void FUN_018c77c0(undefined1 param_1,undefined8 param_2,undefined1 param_3)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  longlong unaff_RDI;
  undefined4 local_40;
  
  cVar2 = FUN_00d59e50();
  if (cVar2 == '\0') {
    cVar2 = FUN_00d59e50();
    if ((cVar2 != '\0') && (lVar1 = *(longlong *)(unaff_RDI + 0x40), lVar1 != 0)) {
      local_40 = -1;
      while (local_40 = local_40 + 1, local_40 < *(int *)(lVar1 + 0xc)) {
        FUN_018c7070();
      }
      FUN_018c8180();
    }
  }
  else {
    lVar1 = *(longlong *)(unaff_RDI + 0x98);
    if (lVar1 != 0) {
      local_40 = -1;
      while (local_40 = local_40 + 1, local_40 < *(int *)(lVar1 + 0xc)) {
        FUN_018c6ef0();
      }
      FUN_018c80e0();
    }
  }
  FUN_00d5af30(param_1,param_2,param_3);
  cVar2 = FUN_00d59e50();
  if (cVar2 == '\0') {
    cVar2 = FUN_00d59e50();
    if ((cVar2 != '\0') && (lVar1 = *(longlong *)(unaff_RDI + 0x40), lVar1 != 0)) {
      for (iVar3 = 0; iVar3 < *(int *)(lVar1 + 0xc); iVar3 = iVar3 + 1) {
        FUN_018c6d80();
      }
      FUN_018c8180();
    }
  }
  else {
    lVar1 = *(longlong *)(unaff_RDI + 0x98);
    if (lVar1 != 0) {
      for (iVar3 = 0; iVar3 < *(int *)(lVar1 + 0xc); iVar3 = iVar3 + 1) {
        FUN_018c6c00();
      }
      FUN_018c80e0();
    }
  }
  return;
}


