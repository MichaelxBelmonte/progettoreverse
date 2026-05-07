// Function: FUN_01b03cb0
// Address: 01b03cb0
// Size: 741 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x01b03e8e) */
/* WARNING: Removing unreachable block (ram,0x01b03e9b) */

void FUN_01b03cb0(undefined4 param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong unaff_RDI;
  undefined4 uVar3;
  longlong local_a8;
  char local_a0;
  longlong local_98;
  char local_90;
  longlong local_88;
  char local_80;
  longlong local_78;
  char local_70;
  longlong *local_38;
  char local_30;
  
  lVar1 = DAT_027e3c80;
  if (*(char *)(unaff_RDI + 0x315) != '\0') {
    uVar3 = param_1;
    if (DAT_027e3c80 != 0) {
      uVar3 = FUN_00d50b00();
    }
    lVar2 = DAT_027e3d28;
    if (DAT_027e3d28 != 0) {
      uVar3 = FUN_00d50b00();
    }
    local_a8 = lVar2;
    local_a0 = '\x01';
    FUN_01d61e70(uVar3,&local_a8);
    if (local_30 == '\0') {
      if (local_38 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_30 = '\0';
    }
    if ((local_a0 != '\0') && (local_a8 != 0)) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if (local_38 != (longlong *)0x0) {
      FUN_01b195d0();
      FUN_00d50b00();
      FUN_01d62b10();
      if (unaff_RDI != 0) {
        FUN_00d50b20();
      }
      FUN_01e42030();
      if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (local_38 != (longlong *)0x0) {
        local_90 = '\0';
        local_98 = 0;
        FUN_01e4ac90();
        if ((local_90 != '\0') && (local_98 != 0)) {
          FUN_00d50b20();
        }
        FUN_01e42030();
        FUN_01e4ace0();
        lVar1 = local_78;
        if (local_70 == '\0') {
          if (local_78 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_70 = '\0';
        }
        (**(code **)(*local_38 + 0x920))();
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
        if ((local_70 != '\0') && (local_78 != 0)) {
          FUN_00d50b20();
        }
        if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      FUN_00d50b00();
      local_88 = 0;
      local_80 = '\0';
      FUN_01d5ef60(param_1,DAT_023dcce4);
      if ((local_80 != '\0') && (local_88 != 0)) {
        FUN_00d50b20();
      }
      if (unaff_RDI != 0) {
        FUN_00d50b20();
      }
      FUN_01d62b80();
      FUN_00d50b20();
    }
  }
  return;
}


