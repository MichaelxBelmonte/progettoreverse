// Function: FUN_00c3b010
// Address: 00c3b010
// Size: 734 bytes
// Class: GNOverloudCompG


void FUN_00c3b010(void)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong unaff_RDI;
  longlong lVar4;
  bool bVar5;
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
  
  *(undefined4 *)(unaff_RDI + 0xb8) = 0x15;
  lVar1 = DAT_0276ce58;
  if (DAT_0276ce58 == 0) {
    lVar4 = *(longlong *)(unaff_RDI + 0x90);
    if (lVar4 == 0) goto LAB_00c3b076;
  }
  else {
    FUN_00d50b00();
    lVar4 = *(longlong *)(unaff_RDI + 0x90);
    if (lVar4 == lVar1) {
      FUN_00d50b20();
      goto LAB_00c3b076;
    }
  }
  *(longlong *)(unaff_RDI + 0x90) = lVar1;
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
LAB_00c3b076:
  *(undefined4 *)(unaff_RDI + 0xa8) = 4;
  if ((DAT_028a5f98 == (undefined8 *)0x0) || (DAT_028a5fa1 == '\0')) {
    FUN_00e8cb50();
    if (DAT_028a5f98 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar3 = &DAT_0254ed40;
      puVar3[2] = 0;
      puVar3[3] = 0;
      puVar3[4] = 0;
      puVar3[5] = 0;
      FUN_00d500e0();
      bVar5 = DAT_028a5f98 == (undefined8 *)0x0;
      DAT_028a5f98 = puVar3;
      if (((bVar5) || (FUN_00d50b20(), lVar1 = DAT_0276c380, DAT_028a5f98 != (undefined8 *)0x0)) &&
         (lVar1 = DAT_0276c380, DAT_028a5fa0 == '\0')) {
        DAT_028a5fa0 = '\x01';
        FUN_00e8cb90();
        lVar1 = DAT_0276c380;
      }
      DAT_0276c380 = lVar1;
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_0276c388;
      local_80 = 1;
      local_88 = lVar1;
      if (DAT_0276c388 != 0) {
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
      lVar1 = DAT_0276ce60;
      if (DAT_0276ce60 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_0276ce68;
      local_68 = lVar1;
      local_60 = 1;
      if (DAT_0276ce68 != 0) {
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
      lVar1 = DAT_0276be48;
      if (DAT_0276be48 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_0276be50;
      local_48 = lVar1;
      local_40 = 1;
      if (DAT_0276be50 != 0) {
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
      DAT_028a5fa1 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028a5fa1 = '\x01';
      FUN_00e8cb70();
    }
    puVar3 = *(undefined8 **)(unaff_RDI + 0xb0);
    if (puVar3 == DAT_028a5f98) {
      return;
    }
  }
  else {
    puVar3 = *(undefined8 **)(unaff_RDI + 0xb0);
    if (puVar3 == DAT_028a5f98) {
      return;
    }
  }
  puVar2 = DAT_028a5f98;
  if (DAT_028a5f98 != (undefined8 *)0x0) {
    FUN_00d50b00();
  }
  *(undefined8 **)(unaff_RDI + 0xb0) = puVar2;
  if (puVar3 == (undefined8 *)0x0) {
    return;
  }
  FUN_00d50b20();
  return;
}


