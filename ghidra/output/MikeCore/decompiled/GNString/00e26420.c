// Function: FUN_00e26420
// Address: 00e26420
// Size: 719 bytes
// Class: GNString


/* WARNING: Removing unreachable block (ram,0x00e266bf) */
/* WARNING: Removing unreachable block (ram,0x00e266cb) */

undefined8 FUN_00e26420(undefined8 param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
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
  longlong local_38;
  char local_30;
  
  plVar3 = (longlong *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar3 + 0x18))();
  (**(code **)(*unaff_RDI + 0x388))();
  local_68 = local_48;
  local_60 = 0;
  lVar1 = DAT_02785c30;
  if (local_40 == '\0') {
    if (local_48 != 0) {
      FUN_00d50b00();
      lVar1 = DAT_02785c30;
    }
  }
  else {
    local_40 = '\0';
  }
  local_60 = '\x01';
  DAT_02785c30 = lVar1;
  if (lVar1 != 0) {
    local_60 = '\x01';
    FUN_00d50b00();
  }
  local_30 = '\0';
  local_38 = lVar1;
  FUN_00ca0840(param_1,&local_38);
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(*unaff_RDI + 0x458))();
  local_58 = local_48;
  local_50 = 0;
  lVar1 = DAT_02785c38;
  if (local_40 == '\0') {
    if (local_48 != 0) {
      FUN_00d50b00();
      lVar1 = DAT_02785c38;
    }
  }
  else {
    local_40 = '\0';
  }
  local_50 = '\x01';
  DAT_02785c38 = lVar1;
  if (lVar1 != 0) {
    local_50 = '\x01';
    FUN_00d50b00();
  }
  local_30 = '\0';
  local_38 = lVar1;
  FUN_00ca0840(param_1,&local_38);
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  lVar1 = unaff_RDI[10];
  if (lVar1 != 0) {
    local_70 = 0;
    FUN_00d50b00();
    lVar2 = DAT_027092d0;
    local_70 = '\x01';
    local_78 = lVar1;
    if (DAT_027092d0 != 0) {
      FUN_00d50b00();
    }
    local_38 = lVar2;
    local_30 = '\0';
    FUN_00ca0840(param_1,&local_38);
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
  }
  plVar3 = (longlong *)FUN_00e8fc40();
  FUN_00049200();
  (**(code **)(*plVar3 + 0x18))();
  local_88 = *unaff_RSI;
  local_80 = '\0';
  FUN_00d0c510(param_1,&local_88);
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  FUN_00d50b20();
  return 1;
}


