// Function: FUN_01e93c70
// Address: 01e93c70
// Size: 554 bytes
// Class: GNList


undefined8 FUN_01e93c70(void)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 unaff_RDI;
  longlong lVar5;
  longlong local_a0;
  char local_98;
  longlong local_88;
  longlong local_80;
  longlong local_78;
  longlong local_70;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  longlong local_48;
  longlong local_40;
  
  lVar2 = DAT_027fdca0;
  if (DAT_027fdca0 != 0) {
    FUN_00d50b00();
  }
  local_48 = lVar2;
  local_50 = DAT_027ef820;
  if ((DAT_027ef820 == 0) || (FUN_00d50b00(), DAT_027ef820 == 0)) {
    local_40 = 0;
    lVar2 = DAT_027fdca0;
  }
  else {
    local_40 = DAT_027ef820;
    FUN_00d50b00();
    lVar2 = DAT_027fdca0;
  }
  DAT_027fdca0 = lVar2;
  if (lVar2 == 0) {
    lVar5 = 0;
    lVar1 = DAT_027ef820;
  }
  else {
    FUN_00d50b00();
    lVar5 = DAT_027fdca0;
    if (DAT_027fdca0 == 0) {
      lVar5 = 0;
      lVar1 = DAT_027ef820;
    }
    else {
      FUN_00d50b00();
      lVar1 = DAT_027ef820;
    }
  }
  DAT_027ef820 = lVar1;
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  lVar4 = DAT_027fdca0;
  if (DAT_027fdca0 != 0) {
    FUN_00d50b00();
  }
  lVar3 = DAT_027ef820;
  if (DAT_027ef820 != 0) {
    FUN_00d50b00();
  }
  local_88 = local_50;
  local_80 = local_40;
  local_60 = lVar4;
  local_58 = lVar3;
  local_78 = lVar2;
  local_70 = lVar5;
  local_68 = lVar1;
  FUN_01a584a0(&local_80,&local_88,&local_78,&local_70);
  FUN_000b6830();
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  FUN_00b1c2d0();
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if (lVar5 != 0) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if (local_40 != 0) {
    FUN_00d50b20();
  }
  if (local_50 != 0) {
    FUN_00d50b20();
  }
  if (local_48 != 0) {
    FUN_00d50b20();
  }
  return unaff_RDI;
}


