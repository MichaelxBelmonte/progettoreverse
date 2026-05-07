// Function: FUN_01bb7e50
// Address: 01bb7e50
// Size: 550 bytes
// Class: GNList


/* WARNING: Removing unreachable block (ram,0x01bb7f45) */
/* WARNING: Removing unreachable block (ram,0x01bb7f4e) */
/* WARNING: Removing unreachable block (ram,0x01bb7eb7) */
/* WARNING: Removing unreachable block (ram,0x01bb7ec0) */

void FUN_01bb7e50(void)

{
  longlong lVar1;
  byte bVar2;
  bool bVar3;
  bool bVar4;
  longlong *unaff_RDI;
  longlong lVar5;
  longlong lVar6;
  longlong local_48;
  char local_40;
  
  (**(code **)(*unaff_RDI + 0x3f8))();
  lVar5 = local_48;
  if (local_48 == 0) {
    bVar2 = 1;
    lVar5 = 0;
    bVar3 = false;
  }
  else if (local_40 == '\0') {
    FUN_00d50b00();
    bVar2 = 0;
    bVar3 = true;
  }
  else {
    bVar2 = 0;
    bVar3 = true;
  }
  if (0 < *(int *)(lVar5 + 0xc)) {
    lVar6 = 0;
    do {
      lVar1 = *(longlong *)(*(longlong *)(lVar5 + 0x10) + lVar6 * 8);
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      FUN_01bb7880();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 < *(int *)(lVar5 + 0xc));
  }
  FUN_01a13090();
  (**(code **)(*unaff_RDI + 0x3f8))();
  if (local_48 == lVar5) {
    if ((bool)(bVar2 & local_48 != 0)) {
      bVar4 = true;
      if (local_40 != '\0') goto LAB_01bb7ff0;
      bVar3 = true;
      FUN_00d50b00();
    }
  }
  else {
    if (local_40 != '\0') {
      bVar4 = true;
      lVar5 = local_48;
      if (bVar3) {
        FUN_00d50b20();
      }
      goto LAB_01bb7ff0;
    }
    if (local_48 != 0) {
      FUN_00d50b00();
    }
    bVar4 = true;
    lVar5 = local_48;
    if (!bVar3) goto LAB_01bb7ff0;
    FUN_00d50b20();
    bVar3 = true;
  }
  bVar4 = bVar3;
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
LAB_01bb7ff0:
  if (0 < *(int *)(lVar5 + 0xc)) {
    lVar6 = 0;
    do {
      lVar1 = *(longlong *)(*(longlong *)(lVar5 + 0x10) + lVar6 * 8);
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      FUN_01bb72b0();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 < *(int *)(lVar5 + 0xc));
  }
  if (bVar4) {
    FUN_00d50b20();
  }
  return;
}


