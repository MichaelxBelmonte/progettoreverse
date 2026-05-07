// Function: FUN_00b29730
// Address: 00b29730
// Size: 823 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x00b29809) */
/* WARNING: Removing unreachable block (ram,0x00b29812) */
/* WARNING: Removing unreachable block (ram,0x00b29778) */
/* WARNING: Removing unreachable block (ram,0x00b29781) */
/* WARNING: Removing unreachable block (ram,0x00b2992f) */
/* WARNING: Removing unreachable block (ram,0x00b29938) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00b29730(void)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong *unaff_RDI;
  double dVar4;
  longlong local_28;
  char local_20;
  
  FUN_00b341c0();
  FUN_00b33130();
  FUN_00c8e690();
  if ((local_20 == '\0') && (local_28 != 0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  ___bzero();
  lVar1 = unaff_RDI[0x12];
  if (lVar1 == local_28) {
    FUN_00d50b20();
  }
  else {
    unaff_RDI[0x12] = local_28;
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_00b33130();
  FUN_00c8e690();
  if ((local_20 == '\0') && (local_28 != 0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  ___bzero();
  lVar1 = unaff_RDI[0x13];
  if (lVar1 == local_28) {
    FUN_00d50b20();
  }
  else {
    unaff_RDI[0x13] = local_28;
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  if (unaff_RDI[0x12] != 0) {
    ___bzero();
  }
  if (unaff_RDI[0x13] != 0) {
    ___bzero();
  }
  if ((char)unaff_RDI[0x14] != '\0') {
    FUN_00b33130();
    dVar4 = (double)FUN_00b335d0();
    lVar1 = FUN_00b26f20(dVar4 - _DAT_023907c8,5);
    unaff_RDI[0x16] = lVar1;
    (**(code **)(*unaff_RDI + 0x3a8))();
    FUN_00b33130();
    FUN_00c8e690();
    if ((local_20 == '\0') && (local_28 != 0)) {
      FUN_00d50b00();
    }
    FUN_00c92170();
    FUN_00c92160();
    lVar1 = unaff_RDI[0x15];
    if (lVar1 == local_28) {
      if (local_28 != 0) {
        FUN_00d50b20();
      }
    }
    else {
      unaff_RDI[0x15] = local_28;
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
    }
  }
  if (unaff_RDI[0x17] == 0) {
    return;
  }
  puVar2 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar2 = &DAT_02572358;
  (*DAT_02572370)();
  lVar1 = unaff_RDI[0x18];
  unaff_RDI[0x18] = (longlong)puVar2;
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  (**(code **)(*unaff_RDI + 0x3a8))();
  FUN_00e83120();
  lVar1 = unaff_RDI[0x19];
  lVar3 = lVar1;
  if (lVar1 == local_28) goto LAB_00b29a4a;
  lVar3 = local_28;
  if (local_20 == '\0') {
    if (local_28 == 0) {
      lVar3 = 0;
      goto LAB_00b29a03;
    }
    FUN_00d50b00();
    lVar1 = unaff_RDI[0x19];
    unaff_RDI[0x19] = local_28;
  }
  else {
    local_20 = '\0';
LAB_00b29a03:
    unaff_RDI[0x19] = lVar3;
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
    lVar3 = local_28;
  }
LAB_00b29a4a:
  if ((local_20 != '\0') && (lVar3 != 0)) {
    FUN_00d50b20();
  }
  return;
}


