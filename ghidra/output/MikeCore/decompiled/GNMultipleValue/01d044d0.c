// Function: FUN_01d044d0
// Address: 01d044d0
// Size: 1955 bytes
// Class: GNMultipleValue


/* WARNING: Removing unreachable block (ram,0x01d04a45) */
/* WARNING: Removing unreachable block (ram,0x01d04a51) */
/* WARNING: Removing unreachable block (ram,0x01d049ac) */
/* WARNING: Removing unreachable block (ram,0x01d049b8) */
/* WARNING: Removing unreachable block (ram,0x01d045d1) */
/* WARNING: Removing unreachable block (ram,0x01d045dd) */
/* WARNING: Removing unreachable block (ram,0x01d04b4b) */
/* WARNING: Removing unreachable block (ram,0x01d04b54) */
/* WARNING: Removing unreachable block (ram,0x01d04c6c) */
/* WARNING: Removing unreachable block (ram,0x01d04871) */
/* WARNING: Removing unreachable block (ram,0x01d0487a) */
/* WARNING: Removing unreachable block (ram,0x01d0490a) */
/* WARNING: Removing unreachable block (ram,0x01d04913) */

void FUN_01d044d0(undefined8 param_1,undefined4 param_2)

{
  longlong lVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  undefined *puVar6;
  longlong *plVar7;
  undefined8 *unaff_RSI;
  longlong *unaff_RDI;
  bool bVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  longlong local_70;
  char local_68;
  longlong *local_60;
  char local_58;
  
  (**(code **)(*unaff_RDI + 0x640))();
  FUN_01e3f820();
  uVar9 = (**(code **)(*local_60 + 0x548))();
  uVar11 = param_2;
  if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(*unaff_RDI + 0x640))();
  uVar10 = FUN_01e3f820();
  uVar5 = (**(code **)(*unaff_RDI + 0x9a0))();
  (**(code **)(*local_60 + 0x3f0))(uVar10,uVar11,0,uVar5);
  if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((DAT_028b7ba8 == (longlong *)0x0) || (DAT_028b7bb1 == '\0')) {
    FUN_00e8cb50();
    if (DAT_028b7ba8 == (longlong *)0x0) {
      FUN_01cfc6a0(0);
      plVar7 = DAT_028b7ba8;
      if (DAT_028b7ba8 != local_60) {
        if (local_58 == '\0') {
          if (local_60 == (longlong *)0x0) {
            plVar7 = (longlong *)0x0;
          }
          else {
            FUN_00d50b00();
            plVar7 = local_60;
          }
        }
        else {
          local_58 = '\0';
          plVar7 = local_60;
        }
        bVar4 = DAT_028b7ba8 != (longlong *)0x0;
        DAT_028b7ba8 = plVar7;
        if (bVar4) {
          FUN_00d50b20();
          plVar7 = local_60;
        }
      }
      if ((plVar7 != (longlong *)0x0) && (DAT_028b7bb0 == '\0')) {
        DAT_028b7bb0 = '\x01';
        FUN_00e8cb90();
        plVar7 = local_60;
      }
      if ((local_58 != '\0') && (plVar7 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      DAT_028b7bb1 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028b7bb1 = '\x01';
      FUN_00e8cb70();
    }
  }
  if ((DAT_028b7bb8 == (longlong *)0x0) || (DAT_028b7bc1 == '\0')) {
    FUN_00e8cb50();
    if (DAT_028b7bb8 == (longlong *)0x0) {
      FUN_01cfc6a0(DAT_02390124);
      plVar7 = DAT_028b7bb8;
      if (DAT_028b7bb8 != local_60) {
        if (local_58 == '\0') {
          if (local_60 == (longlong *)0x0) {
            plVar7 = (longlong *)0x0;
          }
          else {
            FUN_00d50b00();
            plVar7 = local_60;
          }
        }
        else {
          local_58 = '\0';
          plVar7 = local_60;
        }
        bVar4 = DAT_028b7bb8 != (longlong *)0x0;
        DAT_028b7bb8 = plVar7;
        if (bVar4) {
          FUN_00d50b20();
          plVar7 = local_60;
        }
      }
      if ((plVar7 != (longlong *)0x0) && (DAT_028b7bc0 == '\0')) {
        DAT_028b7bc0 = '\x01';
        FUN_00e8cb90();
        plVar7 = local_60;
      }
      if ((local_58 != '\0') && (plVar7 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      DAT_028b7bc1 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028b7bc1 = '\x01';
      FUN_00e8cb70();
    }
  }
  FUN_01d39410();
  if (local_70 == 0) {
    bVar4 = true;
  }
  else if (local_68 == '\0') {
    FUN_00d50b00();
    bVar4 = false;
  }
  else {
    bVar4 = false;
  }
  bVar2 = true;
  FUN_01d39410();
  if (local_70 == 0) {
    bVar3 = true;
  }
  else if (local_68 == '\0') {
    FUN_00d50b00();
    bVar3 = false;
  }
  else {
    bVar3 = false;
  }
  plVar7 = DAT_028b7ba8;
  if (DAT_028b7ba8 != (longlong *)0x0) {
    FUN_00d50b00();
  }
  FUN_01d488d0();
  if (plVar7 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  (**(code **)(*(longlong *)*unaff_RSI + 0x3a0))();
  plVar7 = DAT_028b7bb8;
  if (DAT_028b7bb8 != (longlong *)0x0) {
    FUN_00d50b00();
  }
  FUN_01d488d0();
  if (plVar7 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  (**(code **)(*(longlong *)*unaff_RSI + 0x3a0))();
  lVar1 = unaff_RDI[0x39];
  if (lVar1 != 0) {
    FUN_00d50b00();
    FUN_01d488d0();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    goto LAB_01d04c0b;
  }
  if ((DAT_028b7bc8 == (undefined *)0x0) || (DAT_028b7bd1 == '\0')) {
    FUN_00e8cb50();
    if (DAT_028b7bc8 == (undefined *)0x0) {
      FUN_01cfc9f0(DAT_02390124,0);
      puVar6 = DAT_028b7bc8;
      if (DAT_028b7bc8 != &DAT_0267a730) {
        bVar2 = false;
        puVar6 = &DAT_0267a730;
        bVar8 = DAT_028b7bc8 != (undefined *)0x0;
        DAT_028b7bc8 = puVar6;
        if (bVar8) {
          bVar2 = false;
          DAT_028b7bc8 = &DAT_0267a730;
          FUN_00d50b20();
          puVar6 = &DAT_0267a730;
        }
      }
      if ((puVar6 != (undefined *)0x0) && (DAT_028b7bd0 == '\0')) {
        DAT_028b7bd0 = '\x01';
        FUN_00e8cb90();
        puVar6 = &DAT_0267a730;
      }
      if ((bVar2) && (puVar6 != (undefined *)0x0)) {
        FUN_00d50b20();
      }
      DAT_028b7bd1 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028b7bd1 = '\x01';
      FUN_00e8cb70();
    }
    if (DAT_028b7bc8 != (undefined *)0x0) goto LAB_01d04bdb;
    puVar6 = (undefined *)0x0;
  }
  else {
LAB_01d04bdb:
    puVar6 = DAT_028b7bc8;
    FUN_00d50b00();
  }
  FUN_01d488d0();
  if (puVar6 != (undefined *)0x0) {
    FUN_00d50b20();
  }
LAB_01d04c0b:
  (**(code **)(*(longlong *)*unaff_RSI + 0x3b0))(uVar9,param_2);
  if (!bVar3 && local_70 != 0) {
    FUN_00d50b20();
  }
  if (!bVar4 && local_70 != 0) {
    FUN_00d50b20();
  }
  return;
}


