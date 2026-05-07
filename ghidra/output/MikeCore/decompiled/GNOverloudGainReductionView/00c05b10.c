// Function: FUN_00c05b10
// Address: 00c05b10
// Size: 993 bytes
// Class: GNOverloudGainReductionView


void FUN_00c05b10(void)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong unaff_RDI;
  longlong lVar4;
  bool bVar5;
  longlong local_c8;
  undefined1 local_c0;
  longlong local_b8;
  undefined1 local_b0;
  longlong local_a8;
  undefined1 local_a0;
  longlong local_98;
  undefined1 local_90;
  longlong local_88;
  undefined1 local_80;
  longlong local_78;
  undefined1 local_70;
  longlong local_68;
  undefined1 local_60;
  longlong local_58;
  undefined1 local_50;
  longlong local_48;
  undefined1 local_40;
  longlong local_38;
  undefined1 local_30;
  
  *(undefined4 *)(unaff_RDI + 0xb8) = 7;
  lVar1 = DAT_0276c138;
  if (DAT_0276c138 == 0) {
    lVar4 = *(longlong *)(unaff_RDI + 0x90);
    if (lVar4 == 0) goto LAB_00c05b79;
  }
  else {
    FUN_00d50b00();
    lVar4 = *(longlong *)(unaff_RDI + 0x90);
    if (lVar4 == lVar1) {
      FUN_00d50b20();
      goto LAB_00c05b79;
    }
  }
  *(longlong *)(unaff_RDI + 0x90) = lVar1;
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
LAB_00c05b79:
  *(undefined4 *)(unaff_RDI + 0xa8) = 4;
  if ((DAT_028a5bf8 == (undefined8 *)0x0) || (DAT_028a5c01 == '\0')) {
    FUN_00e8cb50();
    if (DAT_028a5bf8 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar3 = &DAT_0254ed40;
      puVar3[2] = 0;
      puVar3[3] = 0;
      puVar3[4] = 0;
      puVar3[5] = 0;
      FUN_00d500e0();
      bVar5 = DAT_028a5bf8 == (undefined8 *)0x0;
      DAT_028a5bf8 = puVar3;
      if (((bVar5) || (FUN_00d50b20(), lVar1 = DAT_0276c0a8, DAT_028a5bf8 != (undefined8 *)0x0)) &&
         (lVar1 = DAT_0276c0a8, DAT_028a5c00 == '\0')) {
        DAT_028a5c00 = '\x01';
        FUN_00e8cb90();
        lVar1 = DAT_0276c0a8;
      }
      DAT_0276c0a8 = lVar1;
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_0276c0b0;
      local_c0 = 1;
      local_c8 = lVar1;
      if (DAT_0276c0b0 != 0) {
        FUN_00d50b00();
      }
      local_b8 = lVar4;
      local_b0 = 1;
      FUN_00bf1030(&local_b8,&local_c8);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = DAT_0276c140;
      if (DAT_0276c140 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_0276c148;
      local_a8 = lVar1;
      local_a0 = 1;
      if (DAT_0276c148 != 0) {
        FUN_00d50b00();
      }
      local_98 = lVar4;
      local_90 = 1;
      FUN_00bf1030(&local_98,&local_a8);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = DAT_027bed58;
      if (DAT_027bed58 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_0276bfe0;
      local_88 = lVar1;
      local_80 = 1;
      if (DAT_0276bfe0 != 0) {
        FUN_00d50b00();
      }
      local_78 = lVar4;
      local_70 = 1;
      FUN_00bf1030(&local_78,&local_88);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = DAT_0276c0b8;
      if (DAT_0276c0b8 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_0276c0c0;
      local_68 = lVar1;
      local_60 = 1;
      if (DAT_0276c0c0 != 0) {
        FUN_00d50b00();
      }
      local_58 = lVar4;
      local_50 = 1;
      FUN_00bf1030(&local_58,&local_68);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = DAT_0276c0c8;
      if (DAT_0276c0c8 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_0276c0d0;
      local_48 = lVar1;
      local_40 = 1;
      if (DAT_0276c0d0 != 0) {
        FUN_00d50b00();
      }
      local_38 = lVar4;
      local_30 = 1;
      FUN_00bf1030(&local_38,&local_48);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      DAT_028a5c01 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028a5c01 = '\x01';
      FUN_00e8cb70();
    }
    puVar3 = *(undefined8 **)(unaff_RDI + 0xb0);
    if (puVar3 == DAT_028a5bf8) {
      return;
    }
  }
  else {
    puVar3 = *(undefined8 **)(unaff_RDI + 0xb0);
    if (puVar3 == DAT_028a5bf8) {
      return;
    }
  }
  puVar2 = DAT_028a5bf8;
  if (DAT_028a5bf8 != (undefined8 *)0x0) {
    FUN_00d50b00();
  }
  *(undefined8 **)(unaff_RDI + 0xb0) = puVar2;
  if (puVar3 == (undefined8 *)0x0) {
    return;
  }
  FUN_00d50b20();
  return;
}


