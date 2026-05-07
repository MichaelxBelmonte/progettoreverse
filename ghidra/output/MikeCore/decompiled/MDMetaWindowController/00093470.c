// Function: FUN_00093470
// Address: 00093470
// Size: 613 bytes
// Class: MDMetaWindowController


void FUN_00093470(void)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 *unaff_RDI;
  bool bVar3;
  longlong local_90;
  char local_88;
  longlong local_80;
  char local_78;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong *local_50;
  char local_48;
  longlong *local_40;
  char local_38;
  longlong local_30;
  char local_28;
  
  plVar2 = DAT_02803768;
  if ((DAT_02803768 == (longlong *)0x0) || (DAT_02803771 == '\0')) {
    FUN_00e8cb50();
    if (DAT_02803768 == (longlong *)0x0) {
      plVar2 = (longlong *)FUN_00e8fc40();
      FUN_00097310();
      (**(code **)(*plVar2 + 0x18))();
      bVar3 = DAT_02803768 == (longlong *)0x0;
      DAT_02803768 = plVar2;
      if (bVar3) {
LAB_000934ff:
        if (DAT_02803770 == '\0') {
          DAT_02803770 = '\x01';
          FUN_00e8cb90();
        }
      }
      else {
        FUN_00d50b20();
        if (DAT_02803768 != (longlong *)0x0) goto LAB_000934ff;
      }
      FUN_00d403d0();
      local_50 = DAT_02803768;
      local_48 = 0;
      if (DAT_02803768 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      lVar1 = DAT_026d8aa0;
      local_48 = '\x01';
      if (DAT_026d8aa0 != 0) {
        FUN_00d50b00();
      }
      local_90 = lVar1;
      local_88 = '\x01';
      local_80 = 0;
      local_78 = '\0';
      FUN_00d41430(&local_80,&local_90);
      if ((local_78 != '\0') && (local_80 != 0)) {
        FUN_00d50b20();
      }
      if ((local_88 != '\0') && (local_90 != 0)) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_28 != '\0') && (local_30 != 0)) {
        FUN_00d50b20();
      }
      FUN_00d403d0();
      local_40 = DAT_02803768;
      local_38 = 0;
      if (DAT_02803768 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      lVar1 = DAT_026d8aa8;
      local_38 = '\x01';
      if (DAT_026d8aa8 != 0) {
        FUN_00d50b00();
      }
      local_70 = lVar1;
      local_68 = '\x01';
      local_60 = 0;
      local_58 = '\0';
      FUN_00d41430(&local_60,&local_70);
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_28 != '\0') && (local_30 != 0)) {
        FUN_00d50b20();
      }
      DAT_02803771 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_02803771 = '\x01';
      FUN_00e8cb70();
    }
    plVar2 = DAT_02803768;
    *(undefined1 *)(unaff_RDI + 1) = 0;
    if (plVar2 == (longlong *)0x0) {
      plVar2 = (longlong *)0x0;
      goto LAB_000936bb;
    }
  }
  else {
    *(undefined1 *)(unaff_RDI + 1) = 0;
  }
  FUN_00d50b00();
LAB_000936bb:
  *unaff_RDI = plVar2;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}


