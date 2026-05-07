// Function: FUN_01f2aa90
// Address: 01f2aa90
// Size: 1267 bytes
// Class: GNString
// String references:
//   "%@.log"


void FUN_01f2aa90(void)

{
  bool bVar1;
  longlong lVar2;
  char cVar3;
  longlong *plVar4;
  bool bVar5;
  longlong *plVar6;
  longlong *unaff_RSI;
  undefined8 unaff_R14;
  byte bVar7;
  longlong *local_b0;
  char local_a8;
  longlong local_a0;
  char local_98;
  longlong local_90;
  char local_88;
  longlong *local_80;
  char local_78;
  undefined4 local_6c;
  undefined8 *local_68;
  char local_60;
  longlong *local_58;
  longlong *local_50;
  uint local_48;
  longlong *local_40;
  char local_38;
  
  plVar4 = (longlong *)FUN_001a7540();
  (**(code **)(*plVar4 + 0x18))();
  (**(code **)(*(longlong *)*unaff_RSI + 0x3f0))();
  local_58 = local_50;
  if (local_50 == (longlong *)0x0) {
    local_6c = (undefined4)CONCAT71((int7)((ulonglong)unaff_R14 >> 8),1);
    local_58 = (longlong *)0x0;
  }
  else {
    if ((char)local_48 == '\0') {
      FUN_00d50b00();
      local_6c = 0;
      if (((char)local_48 == '\0') || (local_50 == (longlong *)0x0)) goto LAB_01f2ab10;
      FUN_00d50b20();
    }
    local_6c = 0;
  }
LAB_01f2ab10:
  (**(code **)(*(longlong *)*unaff_RSI + 0x388))();
  plVar4 = local_50;
  if (local_50 == (longlong *)0x0) {
    bVar7 = 1;
    bVar1 = false;
    plVar4 = (longlong *)0x0;
  }
  else if ((char)local_48 == '\0') {
    FUN_00d50b00();
    bVar1 = true;
    bVar7 = 0;
    if (((char)local_48 != '\0') && (bVar7 = 0, local_50 != (longlong *)0x0)) {
      FUN_00d50b20();
      bVar1 = true;
      bVar7 = 0;
    }
  }
  else {
    bVar1 = true;
    bVar7 = 0;
  }
  FUN_00d8ed10();
  plVar6 = local_50;
  lVar2 = DAT_02782ad0;
  if (DAT_02782ad0 != 0) {
    FUN_00d50b00();
  }
  cVar3 = (**(code **)(*plVar6 + 0x50))();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if (((char)local_48 != '\0') && (local_50 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar3 != '\0') {
    FUN_00d8f1a0();
    plVar6 = local_50;
    if (local_50 == plVar4) {
      plVar6 = plVar4;
      if ((bool)(bVar7 & local_50 != (longlong *)0x0)) {
        bVar1 = true;
        if ((char)local_48 != '\0') goto LAB_01f2ac9f;
        bVar1 = true;
        FUN_00d50b00();
      }
    }
    else {
      if ((char)local_48 != '\0') {
        bVar5 = (bool)(bVar1 & plVar4 != (longlong *)0x0);
        bVar1 = true;
        plVar4 = local_50;
        if (bVar5) {
          FUN_00d50b20();
        }
        goto LAB_01f2ac9f;
      }
      if (local_50 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      bVar5 = (bool)(bVar1 & plVar4 != (longlong *)0x0);
      bVar1 = true;
      if (bVar5) {
        FUN_00d50b20();
        bVar1 = true;
      }
    }
    plVar4 = plVar6;
    if (((char)local_48 != '\0') && (local_50 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
LAB_01f2ac9f:
  local_48 = 1;
  local_50 = &DAT_024c5048;
  local_38 = 0;
  if (plVar4 != (longlong *)0x0) {
    FUN_00d50b00();
  }
  local_38 = '\x01';
  local_40 = plVar4;
  FUN_00d8cb40();
  plVar6 = local_80;
  if (local_80 == plVar4) {
    plVar6 = plVar4;
    bVar5 = bVar1;
    if ((bVar1) || (local_80 == (longlong *)0x0)) goto joined_r0x01f2af6c;
    if (local_78 == '\0') {
      FUN_00d50b00();
      goto LAB_01f2ad66;
    }
  }
  else {
    if (local_78 == '\0') {
      if (local_80 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      bVar5 = true;
      if ((bVar1) && (plVar4 != (longlong *)0x0)) {
        FUN_00d50b20();
        plVar4 = plVar6;
LAB_01f2ad66:
        plVar6 = plVar4;
        bVar5 = true;
      }
joined_r0x01f2af6c:
      if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      goto joined_r0x01f2af38;
    }
    if ((bVar1) && (plVar4 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  local_78 = '\0';
  bVar5 = true;
joined_r0x01f2af38:
  local_50 = &DAT_024c5048;
  if ((local_38 != '\0') && (local_50 = &DAT_024c5048, local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  lVar2 = DAT_027fff68;
  local_a8 = '\0';
  local_b0 = plVar6;
  if (DAT_027fff68 != 0) {
    FUN_00d50b00();
  }
  local_a0 = lVar2;
  local_98 = '\x01';
  (**(code **)(*local_58 + 0x4f0))(&local_a0,&local_b0);
  local_68 = local_50;
  local_60 = 0;
  if ((char)local_48 == '\0') {
    if (local_50 != (undefined8 *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_48 = local_48 & 0xffffff00;
  }
  local_60 = '\x01';
  FUN_01cb3510();
  if ((local_60 != '\0') && (local_68 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_48 != '\0') && (local_50 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_a8 != '\0') && (local_b0 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  local_90 = *unaff_RSI;
  local_88 = '\0';
  FUN_01cb0670();
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  FUN_01cb2b00();
  if ((bVar5) && (plVar6 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((char)local_6c == '\0') {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}


