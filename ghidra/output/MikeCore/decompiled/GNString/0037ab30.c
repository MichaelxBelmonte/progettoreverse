// Function: FUN_0037ab30
// Address: 0037ab30
// Size: 633 bytes
// Class: GNString


void FUN_0037ab30(void)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  longlong unaff_RDI;
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
  
  lVar2 = DAT_026f6f70;
  plVar1 = *(longlong **)(unaff_RDI + 0x158);
  if (plVar1 != (longlong *)0x0) {
    if (DAT_026f6f70 != 0) {
      FUN_00d50b00();
    }
    lVar3 = DAT_02704018;
    if (DAT_02704018 != 0) {
      FUN_00d50b00();
    }
    local_90 = lVar3;
    local_88 = '\x01';
    local_80 = 0;
    local_78 = '\0';
    FUN_00d31230(&local_80,&local_90);
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
    (**(code **)(*plVar1 + 0x968))();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if ((local_28 != '\0') && (local_30 != 0)) {
      FUN_00d50b20();
    }
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  if (*(longlong *)(unaff_RDI + 0x100) != 0) {
    iVar4 = FUN_01d6fde0();
    if (iVar4 < 1) {
      plVar1 = *(longlong **)(unaff_RDI + 0x100);
      FUN_00379d20();
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
      (**(code **)(*plVar1 + 0x958))();
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      if ((local_28 != '\0') && (local_30 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      FUN_01d701d0();
      FUN_00379d20();
      local_60 = local_70;
      local_58 = 0;
      if (local_68 == '\0') {
        if (local_70 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_68 = '\0';
      }
      local_58 = '\x01';
      FUN_01d64eb0();
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      if ((local_28 != '\0') && (local_30 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  return;
}


