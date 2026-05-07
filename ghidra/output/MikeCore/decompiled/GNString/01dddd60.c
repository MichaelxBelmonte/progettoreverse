// Function: FUN_01dddd60
// Address: 01dddd60
// Size: 581 bytes
// Class: GNString


/* WARNING: Removing unreachable block (ram,0x01ddde71) */
/* WARNING: Removing unreachable block (ram,0x01ddde7a) */
/* WARNING: Removing unreachable block (ram,0x01dddf82) */
/* WARNING: Removing unreachable block (ram,0x01dddf8b) */

void FUN_01dddd60(void)

{
  longlong lVar1;
  undefined8 *puVar2;
  int unaff_ESI;
  longlong unaff_RDI;
  undefined4 uVar3;
  
  if (((unaff_ESI == 2) && (*(longlong *)(unaff_RDI + 0x218) != 0)) &&
     (*(longlong *)(unaff_RDI + 0x210) != 0)) {
    puVar2 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar2 = &DAT_026717b8;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    *(undefined8 *)((longlong)puVar2 + 0x2c) = 0;
    *(undefined8 *)((longlong)puVar2 + 0x34) = 0;
    (*DAT_026717d0)();
    lVar1 = *(longlong *)(unaff_RDI + 0x218);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    FUN_01caeb20();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    FUN_00d50b00();
    uVar3 = FUN_01caece0();
    if (unaff_RDI != 0) {
      uVar3 = FUN_00d50b20();
    }
    (**(code **)(**(longlong **)(unaff_RDI + 0x210) + 0x3b8))(uVar3,1);
    FUN_00d50b20();
  }
  else if ((*(longlong *)(unaff_RDI + 0x1b8) != 0) && (*(longlong *)(unaff_RDI + 0x1c0) != 0)) {
    puVar2 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar2 = &DAT_026717b8;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    *(undefined8 *)((longlong)puVar2 + 0x2c) = 0;
    *(undefined8 *)((longlong)puVar2 + 0x34) = 0;
    (*DAT_026717d0)();
    lVar1 = *(longlong *)(unaff_RDI + 0x1b8);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    FUN_01caeb20();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    FUN_00d50b00();
    uVar3 = FUN_01caece0();
    if (unaff_RDI != 0) {
      uVar3 = FUN_00d50b20();
    }
    (**(code **)(**(longlong **)(unaff_RDI + 0x1c0) + 0x3b8))(uVar3,1);
    FUN_00d50b20();
  }
  return;
}


