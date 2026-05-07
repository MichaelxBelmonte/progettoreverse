// Function: FUN_01e9a760
// Address: 01e9a760
// Size: 571 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x01e9a79c) */
/* WARNING: Removing unreachable block (ram,0x01e9a7a5) */

void FUN_01e9a760(undefined8 param_1)

{
  longlong lVar1;
  longlong unaff_RDI;
  bool bVar2;
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
  longlong *local_30;
  char local_28;
  
  FUN_01ccad60();
  if ((local_28 == '\0') && (local_30 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  lVar1 = DAT_027e7c20;
  if (DAT_027e7c20 != 0) {
    FUN_00d50b00();
  }
  local_80 = lVar1;
  local_78 = '\x01';
  FUN_01cc98b0(param_1,&local_80);
  lVar1 = DAT_027edfd8;
  bVar2 = true;
  if (local_30 == (longlong *)0x0) {
    if (DAT_027edfd8 != 0) {
      FUN_00d50b00();
    }
    local_70 = lVar1;
    local_68 = '\x01';
    FUN_01cc98b0(param_1,&local_70);
    lVar1 = DAT_027fdc88;
    bVar2 = true;
    if (local_90 == 0) {
      if (DAT_027fdc88 != 0) {
        FUN_00d50b00();
      }
      local_60 = lVar1;
      local_58 = '\x01';
      FUN_01cc98b0(param_1,&local_60);
      bVar2 = local_a0 != 0;
      if ((local_98 != '\0') && (local_a0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
    }
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
  }
  if ((local_28 != '\0') && (local_30 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  if ((bVar2) && (local_30 != (longlong *)0x0)) {
    if (unaff_RDI != 0) {
      FUN_00d50b00();
    }
    (**(code **)(*local_30 + 0xa20))();
    if (unaff_RDI != 0) {
      FUN_00d50b20();
    }
    lVar1 = DAT_027fdca8;
    if (DAT_027fdca8 != 0) {
      FUN_00d50b00();
    }
    local_50 = lVar1;
    local_48 = '\x01';
    (**(code **)(*local_30 + 0xa10))();
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
  }
  FUN_01cc9ce0();
  if (local_30 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}


