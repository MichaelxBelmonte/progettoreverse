// Function: FUN_00e38730
// Address: 00e38730
// Size: 695 bytes
// Class: GNUni
// String references:
//   "\t"
//   "nil;\n"
//   "{\n"
//   ";\n"
//   " = "


undefined8 * FUN_00e38730(void)

{
  bool bVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  undefined8 *unaff_RDI;
  longlong local_40;
  char local_38;
  
  iVar2 = FUN_00c8d630();
  puVar3 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar3 = &DAT_025795a8;
  (*DAT_025795c0)();
  if (0 < DAT_028a8bc8) {
    iVar5 = 0;
    do {
      FUN_00d8db40();
      iVar5 = iVar5 + 1;
    } while (iVar5 < DAT_028a8bc8);
  }
  FUN_00d8db40();
  DAT_028a8bc8 = DAT_028a8bc8 + 1;
  if (0 < iVar2) {
    iVar5 = 0;
    do {
      plVar4 = (longlong *)FUN_00c8df10();
      if ((plVar4 != (longlong *)0x0) && (plVar7 = (longlong *)*plVar4, plVar7 != (longlong *)0x0))
      {
        if (DAT_028a8bc8 < 1) {
LAB_00e38856:
          (**(code **)(*plVar7 + 400))();
          if (local_38 == '\0') {
            if (local_40 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_38 = '\0';
          }
          FUN_00d8dbf0();
          if (local_40 != 0) {
            FUN_00d50b20();
          }
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
          FUN_00d8db40();
        }
        else {
          iVar6 = 0;
          do {
            FUN_00d8db40();
            iVar6 = iVar6 + 1;
          } while (iVar6 < DAT_028a8bc8);
          plVar7 = (longlong *)*plVar4;
          if (plVar7 != (longlong *)0x0) goto LAB_00e38856;
        }
        if ((longlong *)plVar4[1] == (longlong *)0x0) {
          FUN_00d8db40();
        }
        else {
          (**(code **)(*(longlong *)plVar4[1] + 400))();
          if (local_38 == '\0') {
            if (local_40 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_38 = '\0';
          }
          FUN_00d8dbf0();
          if (local_40 != 0) {
            FUN_00d50b20();
          }
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
          FUN_00d8db40();
        }
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 != iVar2);
  }
  iVar2 = DAT_028a8bc8 + -1;
  bVar1 = 1 < DAT_028a8bc8;
  DAT_028a8bc8 = iVar2;
  if (bVar1) {
    iVar2 = 0;
    do {
      FUN_00d8db40();
      iVar2 = iVar2 + 1;
    } while (iVar2 < DAT_028a8bc8);
  }
  FUN_00d8db40();
  FUN_00d8c7d0();
  *unaff_RDI = puVar3;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return unaff_RDI;
}


