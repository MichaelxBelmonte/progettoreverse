// Function: FUN_0124f820
// Address: 0124f820
// Size: 793 bytes
// Class: MUChordSequence


/* WARNING: Removing unreachable block (ram,0x0124fa37) */
/* WARNING: Removing unreachable block (ram,0x0124fa40) */
/* WARNING: Removing unreachable block (ram,0x0124faba) */
/* WARNING: Removing unreachable block (ram,0x0124fac3) */
/* WARNING: Removing unreachable block (ram,0x0124f950) */
/* WARNING: Removing unreachable block (ram,0x0124f959) */
/* WARNING: Removing unreachable block (ram,0x0124f894) */
/* WARNING: Removing unreachable block (ram,0x0124f8d0) */
/* WARNING: Removing unreachable block (ram,0x0124f896) */
/* WARNING: Removing unreachable block (ram,0x0124f8d2) */

void FUN_0124f820(void)

{
  longlong lVar1;
  undefined8 *puVar2;
  bool bVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong local_60;
  char local_58;
  int local_48;
  
  FUN_00e7bdb0();
  uVar4 = FUN_00e7bdb0();
  FUN_0124f500(0,uVar4);
  lVar1 = unaff_RDI[7];
  if (lVar1 == 0) {
    bVar3 = true;
  }
  else {
    local_58 = '\0';
    local_60 = 0;
    local_48 = -1;
    bVar3 = true;
    while( true ) {
      lVar5 = (longlong)local_48;
      local_48 = local_48 + 1;
      if (*(int *)(lVar1 + 0xc) <= local_48) break;
      local_60 = *(longlong *)(*(longlong *)(lVar1 + 0x10) + 8 + lVar5 * 8);
      if (local_60 == *unaff_RSI) {
        bVar3 = false;
      }
      else {
        (**(code **)(*unaff_RDI + 0x378))();
      }
    }
    FUN_00083b20();
  }
  FUN_00c8e710();
  if ((local_58 == '\0') && (local_60 != 0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  FUN_00d64850();
  lVar1 = unaff_RDI[9];
  if (lVar1 != local_60) {
    if (local_60 != 0) {
      FUN_00d50b00();
    }
    unaff_RDI[9] = local_60;
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_00d64910();
  if (local_60 != 0) {
    FUN_00d50b20();
  }
  puVar6 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar6 = &DAT_02572358;
  (*DAT_02572370)();
  FUN_00d227e0();
  FUN_00d22760();
  FUN_00d227d0();
  FUN_00d21370();
  FUN_00d21140();
  FUN_00d64850();
  puVar2 = (undefined8 *)unaff_RDI[10];
  if (puVar2 != puVar6) {
    FUN_00d50b00();
    unaff_RDI[10] = (longlong)puVar6;
    if (puVar2 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
  }
  FUN_00d64910();
  FUN_00d64850();
  FUN_00d216c0();
  if (*unaff_RSI != 0) {
    FUN_00d21140();
  }
  FUN_00d64910();
  FUN_00d64850();
  *(undefined4 *)(unaff_RDI + 8) = 0;
  FUN_00d64910();
  if ((*unaff_RSI != 0) && (bVar3)) {
    (**(code **)(*unaff_RDI + 0x370))();
  }
  FUN_00e7bdb0();
  uVar4 = FUN_00e7bdb0();
  FUN_0124f660(0,uVar4,0);
  FUN_00d50b20();
  return;
}


