// Function: FUN_01e11b30
// Address: 01e11b30
// Size: 792 bytes
// Class: GNList


/* WARNING: Removing unreachable block (ram,0x01e11e2d) */
/* WARNING: Removing unreachable block (ram,0x01e11e36) */

void FUN_01e11b30(void)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong *unaff_RDI;
  undefined4 extraout_XMM0_Da;
  longlong local_78;
  char local_70;
  longlong local_68;
  char local_60;
  longlong local_58;
  char local_50;
  longlong local_38;
  char local_30;
  
  FUN_01e3b710();
  *(undefined2 *)((longlong)unaff_RDI + 0x16d) = 0x101;
  *(undefined4 *)(unaff_RDI + 0x2e) = 0;
  uVar4 = FUN_00e7b4e0();
  *(undefined8 *)((longlong)unaff_RDI + 0x164) = uVar4;
  unaff_RDI[0x2f] = 0x3f8000003f800000;
  *(undefined2 *)(unaff_RDI + 0x35) = 0x101;
  *(undefined1 *)(unaff_RDI + 0x37) = 1;
  *(undefined4 *)((longlong)unaff_RDI + 0x1cc) = 0xffffffff;
  *(undefined2 *)((longlong)unaff_RDI + 0x1d2) = 0;
  plVar5 = (longlong *)FUN_00e8fc40();
  FUN_001e10d0();
  (**(code **)(*plVar5 + 0x18))();
  plVar1 = (longlong *)unaff_RDI[0x27];
  if (plVar1 == plVar5) {
    FUN_00d50b20();
  }
  else {
    unaff_RDI[0x27] = (longlong)plVar5;
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  FUN_01ea8a80();
  FUN_01cfbee0(DAT_02390124,DAT_02390124,DAT_02390124);
  if (local_30 == '\0') {
    if (local_38 != 0) {
      FUN_00d50b00();
      goto LAB_01e11c34;
    }
    if (unaff_RDI[0x28] != 0) {
      unaff_RDI[0x28] = 0;
      goto LAB_01e11c77;
    }
  }
  else {
    local_30 = '\0';
LAB_01e11c34:
    lVar2 = unaff_RDI[0x28];
    if (lVar2 != local_38) {
      if (local_38 != 0) {
        FUN_00d50b00();
      }
      unaff_RDI[0x28] = local_38;
      if (lVar2 != 0) {
LAB_01e11c77:
        FUN_00d50b20();
      }
    }
    if (local_38 != 0) {
      FUN_00d50b20();
    }
  }
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  FUN_01cfbee0(0,0,0);
  lVar2 = local_58;
  if (local_50 == '\0') {
    if (local_58 != 0) {
      FUN_00d50b00();
      goto LAB_01e11ccf;
    }
    if (unaff_RDI[0x29] == 0) goto LAB_01e11d15;
    unaff_RDI[0x29] = 0;
  }
  else {
    local_50 = '\0';
LAB_01e11ccf:
    lVar3 = unaff_RDI[0x29];
    if (lVar3 == lVar2) goto LAB_01e11d15;
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    unaff_RDI[0x29] = lVar2;
    if (lVar3 == 0) goto LAB_01e11d15;
  }
  FUN_00d50b20();
LAB_01e11d15:
  uVar4 = (**(code **)(*(longlong *)unaff_RDI[0x27] + 0x388))();
  FUN_01e12e30(extraout_XMM0_Da,uVar4);
  plVar1 = (longlong *)unaff_RDI[0x27];
  (**(code **)(*plVar1 + 0x388))();
  (**(code **)(*plVar1 + 0x3a8))();
  (**(code **)(*unaff_RDI + 0x620))();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d403d0();
  FUN_00d50b00();
  local_78 = DAT_027f32e0;
  if (DAT_027f32e0 != 0) {
    FUN_00d50b00();
  }
  local_70 = '\x01';
  local_68 = 0;
  local_60 = '\0';
  FUN_00d41430(&local_68,&local_78);
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  if (unaff_RDI != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}


