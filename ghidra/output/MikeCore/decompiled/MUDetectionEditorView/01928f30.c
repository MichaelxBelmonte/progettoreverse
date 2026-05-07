// Function: FUN_01928f30
// Address: 01928f30
// Size: 509 bytes
// Class: MUDetectionEditorView


/* WARNING: Removing unreachable block (ram,0x0192901f) */
/* WARNING: Removing unreachable block (ram,0x01929028) */
/* WARNING: Removing unreachable block (ram,0x01928fa0) */
/* WARNING: Removing unreachable block (ram,0x01928fa9) */

void FUN_01928f30(void)

{
  byte bVar1;
  int iVar2;
  longlong *unaff_RDI;
  longlong lVar3;
  bool bVar4;
  bool bVar5;
  longlong lVar6;
  longlong local_50;
  char local_48;
  
  (**(code **)(*unaff_RDI + 0x3f8))();
  lVar3 = local_50;
  if (local_50 == 0) {
    bVar1 = 1;
    lVar3 = 0;
    bVar4 = false;
  }
  else if (local_48 == '\0') {
    FUN_00d50b00();
    bVar1 = 0;
    bVar4 = true;
  }
  else {
    bVar1 = 0;
    bVar4 = true;
  }
  iVar2 = *(int *)(lVar3 + 0xc);
  if (0 < iVar2) {
    lVar6 = 0;
    do {
      if (*(longlong *)(*(longlong *)(lVar3 + 0x10) + lVar6 * 8) != 0) {
        FUN_00d50b00();
        FUN_00d50b20();
        iVar2 = *(int *)(lVar3 + 0xc);
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 < iVar2);
  }
  FUN_01a13090();
  (**(code **)(*unaff_RDI + 0x3f8))();
  if (local_50 == lVar3) {
    if ((bool)(bVar1 & local_50 != 0)) {
      bVar5 = true;
      if (local_48 != '\0') goto LAB_019290cf;
      bVar4 = true;
      FUN_00d50b00();
    }
  }
  else {
    if (local_48 != '\0') {
      bVar5 = true;
      lVar3 = local_50;
      if (bVar4) {
        FUN_00d50b20();
      }
      goto LAB_019290cf;
    }
    if (local_50 != 0) {
      FUN_00d50b00();
    }
    bVar5 = true;
    lVar3 = local_50;
    if (!bVar4) goto LAB_019290cf;
    FUN_00d50b20();
    bVar4 = true;
  }
  bVar5 = bVar4;
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
LAB_019290cf:
  iVar2 = *(int *)(lVar3 + 0xc);
  if (0 < iVar2) {
    lVar6 = 0;
    do {
      if (*(longlong *)(*(longlong *)(lVar3 + 0x10) + lVar6 * 8) != 0) {
        FUN_00d50b00();
        FUN_00d50b20();
        iVar2 = *(int *)(lVar3 + 0xc);
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 < iVar2);
  }
  if (bVar5) {
    FUN_00d50b20();
  }
  return;
}


