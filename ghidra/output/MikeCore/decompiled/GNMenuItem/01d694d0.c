// Function: FUN_01d694d0
// Address: 01d694d0
// Size: 593 bytes
// Class: GNMenuItem


void FUN_01d694d0(undefined8 param_1,undefined4 param_2)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong local_38;
  char local_30;
  
  iVar4 = FUN_01d3a5a0();
  if (iVar4 == 1) {
    cVar3 = (**(code **)(*unaff_RDI + 0xb30))();
    if ((cVar3 != '\0') && (iVar4 = FUN_01d3b620(), iVar4 == 1)) {
      FUN_01d3abf0();
      uVar5 = FUN_01e466c0();
      cVar3 = (**(code **)(*unaff_RDI + 0xb30))();
      if (cVar3 != '\0') {
        uVar6 = FUN_01e08670();
        cVar3 = FUN_00d05410(uVar5,uVar6,param_2);
        if (cVar3 != '\0') {
          (**(code **)(*unaff_RDI + 0xb38))();
        }
      }
    }
    FUN_01e42250();
    *(undefined4 *)(unaff_RDI + 0x48) = 0;
                    /* WARNING: Could not recover jumptable at 0x01d6958e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*unaff_RDI + 0x620))();
    return;
  }
  iVar4 = FUN_01d3a5a0();
  if (iVar4 == 2) {
    FUN_01d3d730();
    if (local_30 == '\0') {
      if (local_38 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_30 = '\0';
    }
    (**(code **)(*unaff_RDI + 0x958))();
    if (local_38 != 0) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    iVar4 = FUN_01d3a5a0();
    if (iVar4 != 4) {
      return;
    }
    lVar1 = unaff_RDI[0x48];
    iVar4 = FUN_01d3b590();
    if (iVar4 <= (int)lVar1) goto LAB_01d696a1;
    FUN_01d3d730();
    if (local_30 == '\0') {
      if (local_38 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_30 = '\0';
    }
    (**(code **)(*unaff_RDI + 0x958))();
    if (local_38 != 0) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
  }
  lVar1 = *unaff_RSI;
  lVar2 = unaff_RDI[0x49];
  if (lVar2 != lVar1) {
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    unaff_RDI[0x49] = lVar1;
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
LAB_01d696a1:
  uVar5 = FUN_01d3b590();
  *(undefined4 *)(unaff_RDI + 0x48) = uVar5;
  FUN_01d11e80();
  return;
}


