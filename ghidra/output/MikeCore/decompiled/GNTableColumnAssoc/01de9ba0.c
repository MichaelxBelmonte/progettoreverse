// Function: FUN_01de9ba0
// Address: 01de9ba0
// Size: 731 bytes
// Class: GNTableColumnAssoc


/* WARNING: Removing unreachable block (ram,0x01de9d7a) */
/* WARNING: Removing unreachable block (ram,0x01de9d83) */
/* WARNING: Removing unreachable block (ram,0x01de9cc4) */
/* WARNING: Removing unreachable block (ram,0x01de9ccd) */
/* WARNING: Removing unreachable block (ram,0x01de9be7) */
/* WARNING: Removing unreachable block (ram,0x01de9bf0) */
/* WARNING: Removing unreachable block (ram,0x01de9e13) */
/* WARNING: Removing unreachable block (ram,0x01de9e20) */
/* WARNING: Removing unreachable block (ram,0x01de9d03) */
/* WARNING: Removing unreachable block (ram,0x01de9d0c) */

void FUN_01de9ba0(undefined8 param_1,ulonglong param_2)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  longlong unaff_RDI;
  longlong lVar4;
  longlong *local_40;
  char local_38;
  
  FUN_01ccad60();
  if ((local_38 == '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  if ((*(char *)(unaff_RDI + 0x59) == '\0') && ((param_2 & 4) != 0)) {
    (**(code **)(*local_40 + 0x920))();
  }
  lVar4 = DAT_02800140;
  if (DAT_02800140 != 0) {
    FUN_00d50b00();
  }
  FUN_01ccaae0();
  if (local_38 == '\0') {
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  if ((local_40 == (longlong *)0x0) || ((param_2 & 2) == 0)) {
LAB_01de9e5b:
    if (local_40 == (longlong *)0x0) goto LAB_01de9e6c;
  }
  else {
    cVar2 = FUN_01d26970();
    if (cVar2 != '\0') {
      FUN_01d25cb0();
      if ((local_38 == '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b00();
      }
      (**(code **)(*local_40 + 0x3f8))();
      if ((local_38 == '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b00();
      }
      if (0 < *(int *)((longlong)local_40 + 0xc)) {
        lVar4 = 0;
        do {
          lVar1 = *(longlong *)(local_40[2] + lVar4 * 8);
          if (lVar1 != 0) {
            FUN_00d50b00();
          }
          cVar2 = FUN_00d24090();
          if (cVar2 == '\0') {
            cVar2 = FUN_01dd3250();
            if (cVar2 != '\0') {
              FUN_01dd4720();
            }
          }
          else {
            cVar2 = FUN_01dd3250();
            if (cVar2 == '\0') {
              FUN_01dd3d20();
            }
          }
          if (lVar1 != 0) {
            FUN_00d50b20();
          }
          lVar4 = lVar4 + 1;
        } while (lVar4 < *(int *)((longlong)local_40 + 0xc));
      }
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
      goto LAB_01de9e5b;
    }
    iVar3 = FUN_01d26e20();
    if (iVar3 == -1) {
      FUN_01dd4c60();
    }
    else {
      FUN_01dd3d20();
    }
  }
  FUN_00d50b20();
LAB_01de9e6c:
  if (local_40 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}


