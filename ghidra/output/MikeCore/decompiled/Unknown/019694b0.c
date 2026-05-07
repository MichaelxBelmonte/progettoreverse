// Function: FUN_019694b0
// Address: 019694b0
// Size: 629 bytes
// Class: Unknown


void FUN_019694b0(void)

{
  bool bVar1;
  bool bVar2;
  longlong *plVar3;
  undefined8 *unaff_RDI;
  bool bVar4;
  longlong local_c0;
  longlong local_b8;
  undefined8 *local_b0 [2];
  longlong local_a0;
  char local_98;
  longlong local_88;
  char local_80;
  longlong local_70;
  char local_68;
  undefined4 local_60;
  longlong local_58;
  char local_50;
  longlong local_48;
  char local_40;
  longlong local_38;
  char local_30;
  undefined4 local_28;
  undefined4 local_24;
  
  plVar3 = DAT_028b0e28;
  if ((DAT_028b0e28 == (longlong *)0x0) || (DAT_028b0e31 == '\0')) {
    FUN_00e8cb50();
    if (DAT_028b0e28 == (longlong *)0x0) {
      plVar3 = (longlong *)FUN_00e8fc40();
      FUN_001b9f00();
      (**(code **)(*plVar3 + 0x18))();
      if (DAT_028b0e28 == plVar3) {
        bVar2 = false;
        bVar1 = false;
      }
      else {
        bVar2 = true;
        bVar1 = true;
        bVar4 = DAT_028b0e28 != (longlong *)0x0;
        DAT_028b0e28 = plVar3;
        if (bVar4) {
          FUN_00d50b20();
        }
      }
      if (DAT_028b0e30 == '\0') {
        DAT_028b0e30 = '\x01';
        FUN_00e8cb90();
        bVar1 = bVar2;
      }
      if (!bVar1) {
        FUN_00d50b20();
      }
      FUN_01cfc6a0(DAT_02390120);
      local_28 = 0;
      FUN_01cfc6a0(DAT_0239109c);
      local_24 = 0x3f000000;
      FUN_01cfc6a0(DAT_02390120);
      local_c0 = local_48;
      local_b8 = local_38;
      FUN_01a01f50(&local_c0,&local_28,&local_24,&local_b8);
      local_b0[0] = (undefined8 *)&DAT_026b2470;
      local_60 = 0x3f800000;
      FUN_01f7ba60(DAT_02394294,local_b0);
      local_b0[0] = (undefined8 *)&DAT_02628b38;
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      local_b0[0] = (undefined8 *)&DAT_024f9300;
      if ((local_80 != '\0') && (local_88 != 0)) {
        FUN_00d50b20();
      }
      local_b0[0] = &DAT_024c5048;
      if ((local_98 != '\0') && (local_a0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_30 != '\0') && (local_38 != 0)) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      DAT_028b0e31 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028b0e31 = '\x01';
      FUN_00e8cb70();
    }
    plVar3 = DAT_028b0e28;
    *(undefined1 *)(unaff_RDI + 1) = 0;
    if (plVar3 == (longlong *)0x0) {
      plVar3 = (longlong *)0x0;
      goto LAB_01969708;
    }
  }
  else {
    *(undefined1 *)(unaff_RDI + 1) = 0;
  }
  FUN_00d50b00();
LAB_01969708:
  *unaff_RDI = plVar3;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}


