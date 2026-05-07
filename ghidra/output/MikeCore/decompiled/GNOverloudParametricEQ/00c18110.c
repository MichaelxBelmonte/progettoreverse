// Function: FUN_00c18110
// Address: 00c18110
// Size: 1118 bytes
// Class: GNOverloudParametricEQ


void FUN_00c18110(void)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong unaff_RDI;
  longlong lVar4;
  bool bVar5;
  longlong local_e8;
  undefined1 local_e0;
  longlong local_d8;
  undefined1 local_d0;
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
  
  *(undefined4 *)(unaff_RDI + 0xb8) = 0xf;
  lVar1 = DAT_0276c418;
  if (DAT_0276c418 == 0) {
    lVar4 = *(longlong *)(unaff_RDI + 0x90);
    if (lVar4 == 0) goto LAB_00c18179;
  }
  else {
    FUN_00d50b00();
    lVar4 = *(longlong *)(unaff_RDI + 0x90);
    if (lVar4 == lVar1) {
      FUN_00d50b20();
      goto LAB_00c18179;
    }
  }
  *(longlong *)(unaff_RDI + 0x90) = lVar1;
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
LAB_00c18179:
  *(undefined4 *)(unaff_RDI + 0xa8) = 1;
  if ((DAT_028a5de0 == (undefined8 *)0x0) || (DAT_028a5de9 == '\0')) {
    FUN_00e8cb50();
    if (DAT_028a5de0 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar3 = &DAT_0254ed40;
      puVar3[2] = 0;
      puVar3[3] = 0;
      puVar3[4] = 0;
      puVar3[5] = 0;
      FUN_00d500e0();
      bVar5 = DAT_028a5de0 == (undefined8 *)0x0;
      DAT_028a5de0 = puVar3;
      if (((bVar5) || (FUN_00d50b20(), lVar1 = DAT_0276c420, DAT_028a5de0 != (undefined8 *)0x0)) &&
         (lVar1 = DAT_0276c420, DAT_028a5de8 == '\0')) {
        DAT_028a5de8 = '\x01';
        FUN_00e8cb90();
        lVar1 = DAT_0276c420;
      }
      DAT_0276c420 = lVar1;
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_027bdfb8;
      local_e0 = 1;
      local_e8 = lVar1;
      if (DAT_027bdfb8 != 0) {
        FUN_00d50b00();
      }
      local_d8 = lVar4;
      local_d0 = 1;
      FUN_00bf1030(&local_d8,&local_e8);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = DAT_0276c430;
      if (DAT_0276c430 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_027bdfc0;
      local_c8 = lVar1;
      local_c0 = 1;
      if (DAT_027bdfc0 != 0) {
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
      lVar1 = DAT_0276c440;
      if (DAT_0276c440 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_027c7650;
      local_a8 = lVar1;
      local_a0 = 1;
      if (DAT_027c7650 != 0) {
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
      lVar1 = DAT_0276c450;
      if (DAT_0276c450 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_0276c458;
      local_88 = lVar1;
      local_80 = 1;
      if (DAT_0276c458 != 0) {
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
      lVar1 = DAT_0276bf00;
      if (DAT_0276bf00 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_0276bf08;
      local_68 = lVar1;
      local_60 = 1;
      if (DAT_0276bf08 != 0) {
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
      lVar1 = DAT_0276c460;
      if (DAT_0276c460 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_0276c468;
      local_48 = lVar1;
      local_40 = 1;
      if (DAT_0276c468 != 0) {
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
      DAT_028a5de9 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028a5de9 = '\x01';
      FUN_00e8cb70();
    }
    puVar3 = *(undefined8 **)(unaff_RDI + 0xb0);
    if (puVar3 == DAT_028a5de0) {
      return;
    }
  }
  else {
    puVar3 = *(undefined8 **)(unaff_RDI + 0xb0);
    if (puVar3 == DAT_028a5de0) {
      return;
    }
  }
  puVar2 = DAT_028a5de0;
  if (DAT_028a5de0 != (undefined8 *)0x0) {
    FUN_00d50b00();
  }
  *(undefined8 **)(unaff_RDI + 0xb0) = puVar2;
  if (puVar3 == (undefined8 *)0x0) {
    return;
  }
  FUN_00d50b20();
  return;
}


