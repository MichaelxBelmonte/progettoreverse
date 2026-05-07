// Function: FUN_01c70210
// Address: 01c70210
// Size: 830 bytes
// Class: GNPopUpButton


undefined4 FUN_01c70210(pthread_key_t param_1,char param_2)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  undefined4 uVar4;
  void *pvVar5;
  longlong unaff_RDI;
  undefined8 uVar6;
  longlong local_88;
  char local_80;
  longlong local_78;
  char local_70;
  longlong local_68;
  char local_60;
  longlong local_58;
  char local_50;
  longlong local_48;
  char local_40;
  longlong *local_38;
  char local_30;
  
  uVar4 = FUN_016bf620();
  if (((char)uVar4 != '\0') && (param_2 != '\0')) {
    FUN_01ca6970();
    FUN_01ca5d90();
    if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_01ca6970();
    lVar1 = *(longlong *)(unaff_RDI + 0x188);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    uVar6 = FUN_016cbba0();
    local_68 = local_48;
    local_60 = 0;
    local_88 = DAT_027ebec8;
    if (local_40 == '\0') {
      if (local_48 != 0) {
        uVar6 = FUN_00d50b00();
        local_88 = DAT_027ebec8;
      }
    }
    else {
      local_40 = '\0';
    }
    local_60 = '\x01';
    DAT_027ebec8 = local_88;
    if (local_88 != 0) {
      local_60 = '\x01';
      uVar6 = FUN_00d50b00();
    }
    local_80 = '\x01';
    FUN_01ca93d0(uVar6,&local_88);
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_01ca6970();
    uVar6 = FUN_00d51d20();
    local_58 = local_48;
    local_50 = 0;
    local_78 = DAT_027ebed0;
    if (local_40 == '\0') {
      if (local_48 != 0) {
        uVar6 = FUN_00d50b00();
        local_78 = DAT_027ebed0;
      }
    }
    else {
      local_40 = '\0';
    }
    local_50 = '\x01';
    DAT_027ebed0 = local_78;
    if (local_78 != 0) {
      local_50 = '\x01';
      uVar6 = FUN_00d50b00();
    }
    local_70 = '\x01';
    FUN_01ca93d0(uVar6,&local_78);
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    cVar3 = FUN_016bf500();
    if (cVar3 == '\0') {
      lVar1 = *(longlong *)(unaff_RDI + 0x188);
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      pvVar5 = _pthread_getspecific(param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_016bf0f0();
      uVar6 = FUN_016c46a0(0,0);
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      plVar2 = *(longlong **)(unaff_RDI + 0x168);
      if (plVar2 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      (**(code **)("/System/Library/Frameworks/Foundation.framework/Versions/C/Foundation" +
                  *plVar2 + 0x20))();
      (**(code **)(*local_38 + 0x60))(uVar6);
      if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
        (**(code **)(*local_38 + 0x10))();
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
  }
  return uVar4;
}


