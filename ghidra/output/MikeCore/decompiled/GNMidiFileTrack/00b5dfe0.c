// Function: FUN_00b5dfe0
// Address: 00b5dfe0
// Size: 892 bytes
// Class: GNMidiFileTrack


void FUN_00b5dfe0(undefined8 param_1)

{
  bool bVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *unaff_RDI;
  bool bVar6;
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
  
  plVar5 = DAT_028a52e8;
  if ((DAT_028a52e8 == (longlong *)0x0) || (DAT_028a52f1 == '\0')) {
    FUN_00e8cb50();
    if (DAT_028a52e8 == (longlong *)0x0) {
      plVar5 = (longlong *)FUN_00e8fc40();
      FUN_000422b0();
      (**(code **)(*plVar5 + 0x18))();
      if (DAT_028a52e8 == plVar5) {
        bVar2 = false;
        bVar1 = false;
      }
      else {
        bVar2 = true;
        bVar1 = true;
        bVar6 = DAT_028a52e8 != (longlong *)0x0;
        DAT_028a52e8 = plVar5;
        if (bVar6) {
          FUN_00d50b20();
        }
      }
      if (DAT_028a52f0 == '\0') {
        DAT_028a52f0 = '\x01';
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
      lVar4 = DAT_02763080;
      if (DAT_02763080 != 0) {
        FUN_00d50b00();
      }
      local_a0 = lVar4;
      local_98 = '\x01';
      FUN_00df16f0(param_1,&local_a0);
      if ((local_98 != '\0') && (local_a0 != 0)) {
        FUN_00d50b20();
      }
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = DAT_02763088;
      if (DAT_02763088 != 0) {
        FUN_00d50b00();
      }
      local_90 = lVar3;
      local_88 = '\x01';
      FUN_00df1690();
      if ((local_88 != '\0') && (local_90 != 0)) {
        FUN_00d50b20();
      }
      lVar3 = DAT_02763090;
      if (DAT_02763090 != 0) {
        FUN_00d50b00();
      }
      local_80 = lVar3;
      local_78 = '\x01';
      FUN_00df1570();
      if ((local_78 != '\0') && (local_80 != 0)) {
        FUN_00d50b20();
      }
      lVar3 = DAT_02763098;
      if (DAT_02763098 != 0) {
        FUN_00d50b00();
      }
      local_70 = lVar3;
      local_68 = '\x01';
      FUN_00df1570();
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      lVar3 = DAT_027630a0;
      if (DAT_027630a0 != 0) {
        FUN_00d50b00();
      }
      local_60 = lVar3;
      local_58 = '\x01';
      FUN_00df1570();
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      lVar3 = DAT_027630a8;
      if (DAT_027630a8 != 0) {
        FUN_00d50b00();
      }
      local_50 = lVar3;
      local_48 = '\x01';
      FUN_00df1570();
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      lVar3 = DAT_027630b0;
      if (DAT_027630b0 != 0) {
        FUN_00d50b00();
      }
      local_40 = lVar3;
      local_38 = '\x01';
      FUN_00df1600();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      lVar3 = DAT_026e1828;
      if (DAT_026e1828 != 0) {
        FUN_00d50b00();
      }
      local_30 = lVar3;
      local_28 = '\x01';
      FUN_00df1600();
      if ((local_28 != '\0') && (local_30 != 0)) {
        FUN_00d50b20();
      }
      DAT_028a52f1 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028a52f1 = '\x01';
      FUN_00e8cb70();
    }
    plVar5 = DAT_028a52e8;
    *(undefined1 *)(unaff_RDI + 1) = 0;
    if (plVar5 == (longlong *)0x0) {
      plVar5 = (longlong *)0x0;
      goto LAB_00b5e33f;
    }
  }
  else {
    *(undefined1 *)(unaff_RDI + 1) = 0;
  }
  FUN_00d50b00();
LAB_00b5e33f:
  *unaff_RDI = plVar5;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}


