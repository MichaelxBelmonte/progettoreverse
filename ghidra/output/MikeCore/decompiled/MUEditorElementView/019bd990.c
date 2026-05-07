// Function: FUN_019bd990
// Address: 019bd990
// Size: 677 bytes
// Class: MUEditorElementView


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_019bd990(void)

{
  bool bVar1;
  bool bVar2;
  longlong *plVar3;
  undefined8 *unaff_RDI;
  bool bVar4;
  undefined *local_118 [14];
  longlong local_a8;
  char local_a0;
  longlong local_90;
  char local_88;
  longlong local_80;
  char local_78;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  plVar3 = DAT_028b28c8;
  if ((DAT_028b28c8 == (longlong *)0x0) || (DAT_028b28d1 == '\0')) {
    FUN_00e8cb50();
    if (DAT_028b28c8 == (longlong *)0x0) {
      plVar3 = (longlong *)FUN_00e8fc40();
      FUN_001b9f00();
      (**(code **)(*plVar3 + 0x18))();
      if (DAT_028b28c8 == plVar3) {
        bVar2 = false;
        bVar1 = false;
      }
      else {
        bVar2 = true;
        bVar1 = true;
        bVar4 = DAT_028b28c8 != (longlong *)0x0;
        DAT_028b28c8 = plVar3;
        if (bVar4) {
          FUN_00d50b20();
        }
      }
      if (DAT_028b28d0 == '\0') {
        DAT_028b28d0 = '\x01';
        FUN_00e8cb90();
        bVar1 = bVar2;
      }
      if (!bVar1) {
        FUN_00d50b20();
      }
      FUN_01cfc9f0(DAT_0239109c,0);
      local_3c = 0;
      FUN_01cfc9f0(DAT_0239109c,0);
      local_38 = 0x3e800000;
      FUN_01cfc9f0(_DAT_023b294c,DAT_02390124);
      local_34 = 0x3f000000;
      FUN_01cfc9f0(DAT_02390124,DAT_02390124);
      local_30 = 0x3f000000;
      FUN_01cfc9f0(DAT_02390124,0);
      local_2c = 0x3f800000;
      FUN_019bddb0(&local_60,&local_3c,&local_38,&local_50,&local_2c);
      FUN_01f7ba60(DAT_023b5d7c,local_118);
      local_118[0] = &DAT_02628ac8;
      if ((local_a0 != '\0') && (local_a8 != 0)) {
        FUN_00d50b20();
      }
      FUN_019fe220();
      if ((local_78 != '\0') && (local_80 != 0)) {
        FUN_00d50b20();
      }
      if ((local_88 != '\0') && (local_90 != 0)) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      DAT_028b28d1 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028b28d1 = '\x01';
      FUN_00e8cb70();
    }
    plVar3 = DAT_028b28c8;
    *(undefined1 *)(unaff_RDI + 1) = 0;
    if (plVar3 == (longlong *)0x0) {
      plVar3 = (longlong *)0x0;
      goto LAB_019bdc14;
    }
  }
  else {
    *(undefined1 *)(unaff_RDI + 1) = 0;
  }
  FUN_00d50b00();
LAB_019bdc14:
  *unaff_RDI = plVar3;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}


