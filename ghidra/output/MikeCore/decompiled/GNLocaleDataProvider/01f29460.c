// Function: FUN_01f29460
// Address: 01f29460
// Size: 981 bytes
// Class: GNLocaleDataProvider


void FUN_01f29460(void)

{
  longlong *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *unaff_RDI;
  longlong local_c8;
  char local_c0;
  longlong local_b8;
  char local_b0;
  longlong local_a8;
  char local_a0;
  longlong local_98;
  char local_90;
  longlong local_88;
  char local_80;
  longlong local_78;
  char local_70;
  longlong local_38;
  char local_30;
  
  FUN_00d50100();
  *(undefined4 *)((longlong)unaff_RDI + 0xfa) = 0x1010101;
  *(undefined1 *)(unaff_RDI + 0x1b) = 0;
  iVar5 = FUN_000030b0();
  *(bool *)((longlong)unaff_RDI + 0xca) = iVar5 == 0;
  unaff_RDI[0x1a] = 0;
  if (DAT_028ba7f0 == (longlong *)0x0) {
    cVar4 = (**(code **)(*unaff_RDI + 0x450))();
    puVar3 = PTR__objc_msgSend_024a9998;
    puVar2 = PTR__NSApp_0249c0f8;
    if (cVar4 == '\0') {
      (*(code *)PTR__objc_msgSend_024a9998)();
    }
    else {
      (*(code *)PTR__objc_msgSend_024a9998)();
      (*(code *)puVar3)(*(undefined8 *)puVar2,&cf_MainMenu,0);
      (*(code *)puVar3)();
    }
    _objc_alloc();
    lVar6 = (*(code *)PTR__objc_msgSend_024a9998)();
    unaff_RDI[0x1a] = lVar6;
    plVar1 = DAT_028ba7f0;
    if ((DAT_028ba7f0 != unaff_RDI) &&
       (FUN_00d50b00(), DAT_028ba7f0 = unaff_RDI, plVar1 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (DAT_028ba7f8 == '\0') {
      DAT_028ba7f8 = '\x01';
      FUN_00e8cb90();
    }
    FUN_00e82980();
    plVar7 = (longlong *)FUN_00e8fc40();
    FUN_001d7da0();
    (**(code **)(*plVar7 + 0x18))();
    plVar1 = (longlong *)unaff_RDI[8];
    if (plVar1 == plVar7) {
      FUN_00d50b20();
    }
    else {
      unaff_RDI[8] = (longlong)plVar7;
      if (plVar1 != (longlong *)0x0) {
        FUN_00d50b20();
      }
    }
    FUN_00d403d0();
    FUN_00d50b00();
    local_c8 = DAT_027fff38;
    if (DAT_027fff38 != 0) {
      FUN_00d50b00();
    }
    local_c0 = '\x01';
    local_b8 = 0;
    local_b0 = '\0';
    FUN_00d41430(&local_b8,&local_c8);
    if ((local_b0 != '\0') && (local_b8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_c0 != '\0') && (local_c8 != 0)) {
      FUN_00d50b20();
    }
    if (unaff_RDI != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d403d0();
    FUN_00d50b00();
    local_a8 = DAT_027fff40;
    if (DAT_027fff40 != 0) {
      FUN_00d50b00();
    }
    local_a0 = '\x01';
    local_98 = 0;
    local_90 = '\0';
    FUN_00d41430(&local_98,&local_a8);
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
    if ((local_a0 != '\0') && (local_a8 != 0)) {
      FUN_00d50b20();
    }
    if (unaff_RDI != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d403d0();
    FUN_00d50b00();
    local_88 = DAT_027fff48;
    if (DAT_027fff48 != 0) {
      FUN_00d50b00();
    }
    local_80 = '\x01';
    local_78 = 0;
    local_70 = '\0';
    FUN_00d41430(&local_78,&local_88);
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    if (unaff_RDI != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
  }
  return;
}


