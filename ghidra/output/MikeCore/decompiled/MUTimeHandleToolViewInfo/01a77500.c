// Function: FUN_01a77500
// Address: 01a77500
// Size: 568 bytes
// Class: MUTimeHandleToolViewInfo


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01a77500(void)

{
  longlong *plVar1;
  bool bVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *unaff_RDI;
  longlong local_58;
  char local_50;
  longlong local_48;
  char local_40;
  
  FUN_00d50100();
  if ((DAT_028b3008 == 0) || (DAT_028b3011 == '\0')) {
    FUN_00e8cb50();
    lVar5 = DAT_027e2888;
    if (DAT_028b3008 == 0) {
      if (DAT_027e2888 != 0) {
        FUN_00d50b00();
      }
      FUN_01d51a40();
      if (local_50 == '\0') {
        if (local_58 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_50 = '\0';
      }
      FUN_01d20ca0(_DAT_0241f3f0);
      lVar4 = DAT_028b3008;
      if (DAT_028b3008 != local_48) {
        if (local_40 == '\0') {
          if (local_48 == 0) {
            lVar4 = 0;
          }
          else {
            FUN_00d50b00();
            lVar4 = local_48;
          }
        }
        else {
          local_40 = '\0';
          lVar4 = local_48;
        }
        bVar2 = DAT_028b3008 != 0;
        DAT_028b3008 = lVar4;
        if (bVar2) {
          FUN_00d50b20();
          lVar4 = local_48;
        }
      }
      if ((lVar4 != 0) && (DAT_028b3010 == '\0')) {
        DAT_028b3010 = '\x01';
        FUN_00e8cb90();
        lVar4 = local_48;
      }
      if ((local_40 != '\0') && (lVar4 != 0)) {
        FUN_00d50b20();
      }
      if (local_58 != 0) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if (lVar5 != 0) {
        FUN_00d50b20();
      }
      DAT_028b3011 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028b3011 = '\x01';
      FUN_00e8cb70();
    }
    if (DAT_028b3008 == 0) {
      lVar5 = 0;
      goto LAB_01a776b9;
    }
  }
  lVar5 = DAT_028b3008;
  FUN_00d50b00();
LAB_01a776b9:
  (**(code **)(*unaff_RDI + 0x390))();
  if (lVar5 != 0) {
    FUN_00d50b20();
  }
  plVar3 = (longlong *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar3 + 0x18))();
  plVar1 = (longlong *)unaff_RDI[9];
  if (plVar1 == plVar3) {
    FUN_00d50b20();
  }
  else {
    unaff_RDI[9] = (longlong)plVar3;
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  return;
}


