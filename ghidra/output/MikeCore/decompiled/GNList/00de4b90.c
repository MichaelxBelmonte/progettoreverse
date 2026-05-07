// Function: FUN_00de4b90
// Address: 00de4b90
// Size: 623 bytes
// Class: GNList


/* WARNING: Removing unreachable block (ram,0x00de4d16) */
/* WARNING: Removing unreachable block (ram,0x00de4d1f) */
/* WARNING: Removing unreachable block (ram,0x00de4d02) */
/* WARNING: Removing unreachable block (ram,0x00de4d0b) */
/* WARNING: Removing unreachable block (ram,0x00de4d68) */
/* WARNING: Removing unreachable block (ram,0x00de4da0) */
/* WARNING: Removing unreachable block (ram,0x00de4da9) */
/* WARNING: Removing unreachable block (ram,0x00de4c00) */
/* WARNING: Removing unreachable block (ram,0x00de4d6c) */
/* WARNING: Removing unreachable block (ram,0x00de4c55) */
/* WARNING: Removing unreachable block (ram,0x00de4c5e) */
/* WARNING: Removing unreachable block (ram,0x00de4c6d) */
/* WARNING: Removing unreachable block (ram,0x00de4c7a) */
/* WARNING: Removing unreachable block (ram,0x00de4d88) */
/* WARNING: Removing unreachable block (ram,0x00de4d91) */

undefined8 * FUN_00de4b90(void)

{
  bool bVar1;
  bool bVar2;
  short sVar3;
  longlong *plVar4;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  longlong local_40;
  char local_38;
  
  plVar4 = (longlong *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar4 + 0x18))();
  FUN_00de4850();
  if ((local_38 == '\0') && (local_40 != 0)) {
    FUN_00d50b00();
  }
  if (local_40 != 0) {
    do {
      FUN_00de4120();
      sVar3 = FUN_00d8cbc0();
      if (sVar3 != 0x3b) {
        sVar3 = FUN_00d8cbc0();
        if (sVar3 == 0x3d) {
          *(int *)(unaff_RSI + 0x18) = *(int *)(unaff_RSI + 0x18) + 1;
          FUN_00de38d0();
          if (local_38 == '\0') {
            if (local_40 != 0) {
              FUN_00d50b00();
              goto LAB_00de4cdc;
            }
          }
          else if (local_40 != 0) {
LAB_00de4cdc:
            FUN_00ca0840();
            FUN_00d50b20();
            goto LAB_00de4d2c;
          }
        }
        *(undefined1 *)(unaff_RDI + 1) = 0;
        *unaff_RDI = 0;
        bVar1 = false;
        bVar2 = false;
        if (local_40 == 0) goto LAB_00de4def;
        goto LAB_00de4de7;
      }
      FUN_00ca0840();
LAB_00de4d2c:
      local_38 = '\0';
      FUN_00de4120();
      sVar3 = FUN_00d8cbc0();
      if (sVar3 != 0x3b) goto LAB_00de4dd1;
      *(int *)(unaff_RSI + 0x18) = *(int *)(unaff_RSI + 0x18) + 1;
      FUN_00de4850();
    } while (local_40 != 0);
    local_40 = 0;
  }
LAB_00de4dd1:
  *unaff_RDI = plVar4;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  bVar1 = true;
  bVar2 = true;
  if (local_40 != 0) {
LAB_00de4de7:
    bVar1 = bVar2;
    FUN_00d50b20();
  }
LAB_00de4def:
  if (!bVar1 && plVar4 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return unaff_RDI;
}


