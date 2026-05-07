// Function: FUN_00073b40
// Address: 00073b40
// Size: 612 bytes
// Class: MDMetaWindowController


void FUN_00073b40(void)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong unaff_RDI;
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
  
  lVar3 = DAT_026f6f70;
  plVar1 = *(longlong **)(unaff_RDI + 0x138);
  if (plVar1 != (longlong *)0x0) {
    if (DAT_026f6f70 != 0) {
      FUN_00d50b00();
    }
    lVar2 = DAT_026d80f0;
    if (DAT_026d80f0 != 0) {
      FUN_00d50b00();
    }
    local_a0 = lVar2;
    local_98 = '\x01';
    local_90 = 0;
    local_88 = '\0';
    FUN_00d31230(&local_90,&local_a0);
    local_50 = local_30;
    local_48 = 0;
    if (local_28 == '\0') {
      if (local_30 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_28 = '\0';
    }
    local_48 = '\x01';
    (**(code **)(*plVar1 + 0x6a8))();
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_28 != '\0') && (local_30 != 0)) {
      FUN_00d50b20();
    }
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
    if ((local_98 != '\0') && (local_a0 != 0)) {
      FUN_00d50b20();
    }
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
  }
  lVar3 = DAT_026f6f70;
  plVar1 = *(longlong **)(unaff_RDI + 0x140);
  if (plVar1 != (longlong *)0x0) {
    if (DAT_026f6f70 != 0) {
      FUN_00d50b00();
    }
    lVar2 = DAT_026d8108;
    local_80 = lVar3;
    local_78 = '\x01';
    if (DAT_026d8108 != 0) {
      FUN_00d50b00();
    }
    local_70 = lVar2;
    local_68 = '\x01';
    local_60 = 0;
    local_58 = '\0';
    FUN_00d31230(&local_60,&local_70);
    local_40 = local_30;
    local_38 = 0;
    if (local_28 == '\0') {
      if (local_30 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_28 = '\0';
    }
    local_38 = '\x01';
    (**(code **)(*plVar1 + 0x6a8))();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if ((local_28 != '\0') && (local_30 != 0)) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
  }
  return;
}


