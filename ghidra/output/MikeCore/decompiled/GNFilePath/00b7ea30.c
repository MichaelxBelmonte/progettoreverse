// Function: FUN_00b7ea30
// Address: 00b7ea30
// Size: 1220 bytes
// Class: GNFilePath


void FUN_00b7ea30(undefined8 param_1)

{
  bool bVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *unaff_RDI;
  bool bVar6;
  longlong local_e0;
  char local_d8;
  longlong local_d0;
  char local_c8;
  longlong local_c0;
  char local_b8;
  longlong local_b0;
  char local_a8;
  longlong local_a0;
  char local_98;
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
  longlong local_40;
  char local_38;
  longlong local_30;
  char local_28;
  
  plVar5 = DAT_028a5600;
  if ((DAT_028a5600 == (longlong *)0x0) || (DAT_028a5609 == '\0')) {
    FUN_00e8cb50();
    if (DAT_028a5600 == (longlong *)0x0) {
      plVar5 = (longlong *)FUN_00e8fc40();
      FUN_000422b0();
      (**(code **)(*plVar5 + 0x18))();
      if (DAT_028a5600 == plVar5) {
        bVar2 = false;
        bVar1 = false;
      }
      else {
        bVar2 = true;
        bVar1 = true;
        bVar6 = DAT_028a5600 != (longlong *)0x0;
        DAT_028a5600 = plVar5;
        if (bVar6) {
          FUN_00d50b20();
        }
      }
      if (DAT_028a5608 == '\0') {
        DAT_028a5608 = '\x01';
        FUN_00e8cb90();
        bVar1 = bVar2;
      }
      if (!bVar1) {
        FUN_00d50b20();
      }
      lVar3 = DAT_0275e490;
      if (DAT_0275e490 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_02764150;
      if (DAT_02764150 != 0) {
        FUN_00d50b00();
      }
      local_e0 = lVar4;
      local_d8 = '\x01';
      FUN_00df16f0(param_1,&local_e0);
      if ((local_d8 != '\0') && (local_e0 != 0)) {
        FUN_00d50b20();
      }
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = DAT_02764158;
      if (DAT_02764158 != 0) {
        FUN_00d50b00();
      }
      local_d0 = lVar3;
      local_c8 = '\x01';
      FUN_00df1690();
      if ((local_c8 != '\0') && (local_d0 != 0)) {
        FUN_00d50b20();
      }
      lVar3 = DAT_02764160;
      if (DAT_02764160 != 0) {
        FUN_00d50b00();
      }
      local_c0 = lVar3;
      local_b8 = '\x01';
      FUN_00df1570();
      if ((local_b8 != '\0') && (local_c0 != 0)) {
        FUN_00d50b20();
      }
      lVar3 = DAT_02764168;
      if (DAT_02764168 != 0) {
        FUN_00d50b00();
      }
      local_b0 = lVar3;
      local_a8 = '\x01';
      FUN_00df1570();
      if ((local_a8 != '\0') && (local_b0 != 0)) {
        FUN_00d50b20();
      }
      lVar3 = DAT_02764170;
      if (DAT_02764170 != 0) {
        FUN_00d50b00();
      }
      local_a0 = lVar3;
      local_98 = '\x01';
      FUN_00df1570();
      if ((local_98 != '\0') && (local_a0 != 0)) {
        FUN_00d50b20();
      }
      lVar3 = DAT_02764178;
      if (DAT_02764178 != 0) {
        FUN_00d50b00();
      }
      local_90 = lVar3;
      local_88 = '\x01';
      FUN_00df1570();
      if ((local_88 != '\0') && (local_90 != 0)) {
        FUN_00d50b20();
      }
      lVar3 = DAT_02764180;
      if (DAT_02764180 != 0) {
        FUN_00d50b00();
      }
      local_80 = lVar3;
      local_78 = '\x01';
      FUN_00df1570();
      if ((local_78 != '\0') && (local_80 != 0)) {
        FUN_00d50b20();
      }
      lVar3 = DAT_02764188;
      if (DAT_02764188 != 0) {
        FUN_00d50b00();
      }
      local_70 = lVar3;
      local_68 = '\x01';
      FUN_00df1570();
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      lVar3 = DAT_02764190;
      if (DAT_02764190 != 0) {
        FUN_00d50b00();
      }
      local_60 = lVar3;
      local_58 = '\x01';
      FUN_00df1570();
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      lVar3 = DAT_02764198;
      if (DAT_02764198 != 0) {
        FUN_00d50b00();
      }
      local_50 = lVar3;
      local_48 = '\x01';
      FUN_00df1570();
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      lVar3 = DAT_027641a0;
      if (DAT_027641a0 != 0) {
        FUN_00d50b00();
      }
      local_40 = lVar3;
      local_38 = '\x01';
      FUN_00df1570();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      lVar3 = DAT_027641a8;
      if (DAT_027641a8 != 0) {
        FUN_00d50b00();
      }
      local_30 = lVar3;
      local_28 = '\x01';
      FUN_00df1570();
      if ((local_28 != '\0') && (local_30 != 0)) {
        FUN_00d50b20();
      }
      DAT_028a5609 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028a5609 = '\x01';
      FUN_00e8cb70();
    }
    plVar5 = DAT_028a5600;
    *(undefined1 *)(unaff_RDI + 1) = 0;
    if (plVar5 == (longlong *)0x0) {
      plVar5 = (longlong *)0x0;
      goto LAB_00b7eed7;
    }
  }
  else {
    *(undefined1 *)(unaff_RDI + 1) = 0;
  }
  FUN_00d50b00();
LAB_00b7eed7:
  *unaff_RDI = plVar5;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}


