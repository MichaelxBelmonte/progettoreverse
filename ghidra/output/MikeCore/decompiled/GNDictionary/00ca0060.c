// Function: FUN_00ca0060
// Address: 00ca0060
// Size: 962 bytes
// Class: GNDictionary
// String references:
//   "\t"
//   "%@ = "
//   "noKey = "
//   "%@;\n"
//   "nil;\n"
//   "{\n"


undefined8 * FUN_00ca0060(void)

{
  bool bVar1;
  bool bVar2;
  undefined8 *puVar3;
  longlong lVar4;
  int iVar5;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  longlong local_70;
  longlong local_38;
  
  puVar3 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar3 = &DAT_025795a8;
  (*DAT_025795c0)();
  if (0 < DAT_028a7288) {
    iVar5 = 0;
    do {
      FUN_00d8db40();
      iVar5 = iVar5 + 1;
    } while (iVar5 < DAT_028a7288);
  }
  FUN_00d8db40();
  DAT_028a7288 = DAT_028a7288 + 1;
  lVar4 = *(longlong *)(unaff_RSI + 0x10);
  if (*(int *)(lVar4 + 0xc) < 1) {
    bVar2 = false;
    local_38 = 0;
  }
  else {
    local_70 = 0;
    local_38 = 0;
    bVar2 = false;
    do {
      if (0 < DAT_028a7288) {
        iVar5 = 0;
        do {
          FUN_00d8db40();
          iVar5 = iVar5 + 1;
        } while (iVar5 < DAT_028a7288);
        lVar4 = *(longlong *)(unaff_RSI + 0x10);
      }
      lVar4 = *(longlong *)(*(longlong *)(lVar4 + 0x10) + local_70 * 8);
      if (local_38 == lVar4) {
        lVar4 = local_38;
        bVar1 = bVar2;
        if (bVar2) goto LAB_00ca0210;
        if (local_38 == 0) goto LAB_00ca0290;
        bVar2 = true;
        FUN_00d50b00();
LAB_00ca021d:
        FUN_00d50b00();
        FUN_00d94d80();
        if (local_38 != 0) {
          FUN_00d50b20();
        }
      }
      else {
        if (lVar4 != 0) {
          FUN_00d50b00();
        }
        bVar1 = true;
        if ((bVar2) && (local_38 != 0)) {
          FUN_00d50b20();
        }
LAB_00ca0210:
        bVar2 = bVar1;
        local_38 = lVar4;
        if (lVar4 != 0) goto LAB_00ca021d;
LAB_00ca0290:
        FUN_00d8db40();
        local_38 = 0;
      }
      lVar4 = *(longlong *)(*(longlong *)(*(longlong *)(unaff_RSI + 0x18) + 0x10) + local_70 * 8);
      if (local_38 == lVar4) {
        lVar4 = local_38;
        bVar1 = bVar2;
        if (bVar2) goto LAB_00ca0320;
        if (local_38 == 0) goto LAB_00ca0130;
        bVar2 = true;
        FUN_00d50b00();
LAB_00ca032d:
        FUN_00d50b00();
        FUN_00d94d80();
        if (local_38 != 0) {
          FUN_00d50b20();
        }
      }
      else {
        if (lVar4 != 0) {
          FUN_00d50b00();
        }
        bVar1 = true;
        if ((bVar2) && (local_38 != 0)) {
          FUN_00d50b20();
        }
LAB_00ca0320:
        bVar2 = bVar1;
        local_38 = lVar4;
        if (lVar4 != 0) goto LAB_00ca032d;
LAB_00ca0130:
        FUN_00d8db40();
        local_38 = 0;
      }
      local_70 = local_70 + 1;
      lVar4 = *(longlong *)(unaff_RSI + 0x10);
    } while (local_70 < *(int *)(lVar4 + 0xc));
  }
  iVar5 = DAT_028a7288 + -1;
  bVar1 = 1 < DAT_028a7288;
  DAT_028a7288 = iVar5;
  if (bVar1) {
    iVar5 = 0;
    do {
      FUN_00d8db40();
      iVar5 = iVar5 + 1;
    } while (iVar5 < DAT_028a7288);
  }
  FUN_00d8db40();
  FUN_00d8c7d0();
  *unaff_RDI = puVar3;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  if ((bVar2) && (local_38 != 0)) {
    FUN_00d50b20();
  }
  return unaff_RDI;
}


