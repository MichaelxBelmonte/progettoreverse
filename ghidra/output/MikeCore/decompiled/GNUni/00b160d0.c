// Function: FUN_00b160d0
// Address: 00b160d0
// Size: 611 bytes
// Class: GNUni


void FUN_00b160d0(void)

{
  bool bVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *unaff_RDI;
  longlong *plVar6;
  bool bVar7;
  undefined4 uVar8;
  longlong local_40;
  char local_38;
  longlong *local_30;
  char local_28;
  
  if (DAT_028a0d90 == (longlong *)0x0) {
    FUN_00b16410();
    plVar5 = local_30;
    if (DAT_028a0d90 != local_30) {
      plVar6 = DAT_028a0d90;
      if (local_28 == '\0') {
        if (local_30 != (longlong *)0x0) {
          FUN_00d50b00();
          plVar6 = DAT_028a0d90;
        }
      }
      else {
        local_28 = '\0';
      }
      DAT_028a0d90 = plVar5;
      if (plVar6 != (longlong *)0x0) {
        FUN_00d50b20();
      }
    }
    if ((plVar5 != (longlong *)0x0) && (DAT_028a0d98 == '\0')) {
      DAT_028a0d98 = '\x01';
      FUN_00e8cb90();
    }
    if ((local_28 != '\0') && (plVar5 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (DAT_028a0d90 == (longlong *)0x0) {
      plVar5 = (longlong *)FUN_00e8fc40();
      FUN_00d4ff40();
      *(undefined8 *)((longlong)plVar5 + 0x7c) = 0;
      *(undefined8 *)((longlong)plVar5 + 0x84) = 0;
      *(undefined8 *)((longlong)plVar5 + 0x6c) = 0;
      *(undefined8 *)((longlong)plVar5 + 0x74) = 0;
      *(undefined8 *)((longlong)plVar5 + 0x5c) = 0;
      *(undefined8 *)((longlong)plVar5 + 100) = 0;
      *(undefined8 *)((longlong)plVar5 + 0x4c) = 0;
      *(undefined8 *)((longlong)plVar5 + 0x54) = 0;
      *(undefined8 *)((longlong)plVar5 + 0x3c) = 0;
      *(undefined8 *)((longlong)plVar5 + 0x44) = 0;
      *(undefined8 *)((longlong)plVar5 + 0x2c) = 0;
      *(undefined8 *)((longlong)plVar5 + 0x34) = 0;
      *(undefined8 *)((longlong)plVar5 + 0x1c) = 0;
      *(undefined8 *)((longlong)plVar5 + 0x24) = 0;
      *(undefined8 *)((longlong)plVar5 + 0xc) = 0;
      *(undefined8 *)((longlong)plVar5 + 0x14) = 0;
      *(undefined4 *)((longlong)plVar5 + 0x8c) = 0;
      plVar5[0x14] = 0;
      plVar5[0x15] = 0;
      *(undefined2 *)(plVar5 + 0x16) = 0;
      *(undefined8 *)((longlong)plVar5 + 0xb4) = 0;
      *(undefined8 *)((longlong)plVar5 + 0xbc) = 0;
      *(undefined8 *)((longlong)plVar5 + 0xc4) = 0;
      *plVar5 = (longlong)&DAT_02530ed8;
      *(undefined2 *)((longlong)plVar5 + 0xcc) = 0;
      plVar5[0x1a] = 0;
      plVar5[0x1b] = 0;
      uVar8 = (*DAT_02530ef0)();
      if (DAT_028a0d90 == plVar5) {
        bVar2 = false;
        bVar1 = false;
      }
      else {
        bVar2 = true;
        bVar1 = true;
        bVar7 = DAT_028a0d90 != (longlong *)0x0;
        DAT_028a0d90 = plVar5;
        if (bVar7) {
          uVar8 = FUN_00d50b20();
        }
      }
      if (DAT_028a0d98 == '\0') {
        DAT_028a0d98 = '\x01';
        uVar8 = FUN_00e8cb90();
        bVar1 = bVar2;
      }
      if (!bVar1) {
        uVar8 = FUN_00d50b20();
      }
      lVar3 = DAT_02703b18;
      if (DAT_02703b18 != 0) {
        uVar8 = FUN_00d50b00();
      }
      lVar4 = DAT_0275e008;
      if (DAT_0275e008 != 0) {
        uVar8 = FUN_00d50b00();
      }
      local_40 = lVar4;
      local_38 = '\x01';
      FUN_01f6ca30(uVar8,&local_40);
      (**(code **)(*local_30 + 0x5e0))();
      if ((local_28 != '\0') && (local_30 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      *(undefined1 *)(unaff_RDI + 1) = 0;
      plVar5 = DAT_028a0d90;
      if (DAT_028a0d90 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      goto LAB_00b1618b;
    }
  }
  plVar5 = DAT_028a0d90;
  *(undefined1 *)(unaff_RDI + 1) = 0;
  FUN_00d50b00();
LAB_00b1618b:
  *unaff_RDI = plVar5;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}


