// Function: FUN_01a75080
// Address: 01a75080
// Size: 1427 bytes
// Class: MUChord


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_01a75080(undefined8 param_1,undefined4 param_2)

{
  bool bVar1;
  bool bVar2;
  longlong *plVar3;
  undefined7 uVar5;
  undefined8 uVar4;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  undefined *puVar6;
  undefined *puVar7;
  undefined *local_e8;
  undefined *local_e0;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined8 local_d0;
  undefined *local_c8;
  char local_c0;
  undefined4 local_78;
  undefined *local_70;
  undefined1 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined *local_48;
  undefined *local_40;
  undefined4 local_34;
  
  uVar5 = (undefined7)((ulonglong)unaff_RDI >> 8);
  local_34 = param_2;
  if (*(int *)(unaff_RSI + 0x1d0) == 1) {
    FUN_01cfbee0(_DAT_023b294c,_DAT_023b294c,_DAT_023b294c);
    local_48 = local_c8;
    if (local_c8 == (undefined *)0x0) {
      local_48 = (undefined *)0x0;
      local_58 = 0;
    }
    else {
      local_58 = CONCAT71((int7)((ulonglong)local_c8 >> 8),1);
      if (((local_c0 == '\0') && (FUN_00d50b00(), local_c0 != '\0')) &&
         (local_c8 != (undefined *)0x0)) {
        FUN_00d50b20();
      }
    }
    FUN_01cfbee0(DAT_02390128,DAT_02390128,DAT_02390128);
    local_40 = local_c8;
    if (local_c8 == (undefined *)0x0) {
      local_40 = (undefined *)0x0;
      local_50 = 0;
    }
    else {
      local_50 = CONCAT71((int7)((ulonglong)local_c8 >> 8),1);
      if (((local_c0 == '\0') && (FUN_00d50b00(), local_c0 != '\0')) &&
         (local_c8 != (undefined *)0x0)) {
        FUN_00d50b20();
      }
    }
    FUN_01cfbee0(DAT_02390124,DAT_02390124,0);
    puVar6 = local_c8;
    if (local_c8 == (undefined *)0x0) {
      puVar6 = (undefined *)0x0;
      uVar4 = 0;
    }
    else {
      uVar4 = CONCAT71(uVar5,1);
      if (((local_c0 == '\0') && (FUN_00d50b00(), local_c0 != '\0')) &&
         (local_c8 != (undefined *)0x0)) {
        FUN_00d50b20();
      }
    }
    local_d0 = uVar4;
    FUN_01cfbee0(DAT_02390124,0,0);
    puVar7 = local_c8;
    if (local_c8 != (undefined *)0x0) {
      bVar1 = true;
      bVar2 = true;
      param_2 = local_34;
      if (((local_c0 == '\0') &&
          (FUN_00d50b00(), param_2 = local_34, bVar1 = bVar2, local_c0 != '\0')) &&
         (local_c8 != (undefined *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_01a7549f;
    }
  }
  else {
    if (*(int *)(unaff_RSI + 0x1d0) != 0) {
      puVar7 = (undefined *)0x0;
      local_d0 = 0;
      puVar6 = (undefined *)0x0;
      local_50 = 0;
      local_40 = (undefined *)0x0;
      local_58 = 0;
      local_48 = (undefined *)0x0;
      bVar1 = false;
      goto LAB_01a7549f;
    }
    FUN_01cfbee0(0,DAT_02394214,0);
    local_48 = local_c8;
    if (local_c8 == (undefined *)0x0) {
      local_48 = (undefined *)0x0;
      local_58 = 0;
    }
    else {
      local_58 = CONCAT71((int7)((ulonglong)local_c8 >> 8),1);
      if (((local_c0 == '\0') && (FUN_00d50b00(), local_c0 != '\0')) &&
         (local_c8 != (undefined *)0x0)) {
        FUN_00d50b20();
      }
    }
    FUN_01cfbee0(0,DAT_02390124,0);
    local_40 = local_c8;
    if (local_c8 == (undefined *)0x0) {
      local_40 = (undefined *)0x0;
      local_50 = 0;
    }
    else {
      local_50 = CONCAT71((int7)((ulonglong)local_c8 >> 8),1);
      if (((local_c0 == '\0') && (FUN_00d50b00(), local_c0 != '\0')) &&
         (local_c8 != (undefined *)0x0)) {
        FUN_00d50b20();
      }
    }
    FUN_01cfbee0(DAT_02390124,DAT_02390124,0);
    puVar6 = local_c8;
    if (local_c8 == (undefined *)0x0) {
      puVar6 = (undefined *)0x0;
      uVar4 = 0;
    }
    else {
      uVar4 = CONCAT71(uVar5,1);
      if (((local_c0 == '\0') && (FUN_00d50b00(), local_c0 != '\0')) &&
         (local_c8 != (undefined *)0x0)) {
        FUN_00d50b20();
      }
    }
    local_d0 = uVar4;
    FUN_01cfbee0(DAT_02390124,0,0);
    puVar7 = local_c8;
    if (local_c8 != (undefined *)0x0) {
      bVar1 = true;
      bVar2 = true;
      param_2 = local_34;
      if (((local_c0 == '\0') &&
          (FUN_00d50b00(), param_2 = local_34, bVar1 = bVar2, local_c0 != '\0')) &&
         (local_c8 != (undefined *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_01a7549f;
    }
  }
  bVar1 = false;
  puVar7 = (undefined *)0x0;
  param_2 = local_34;
LAB_01a7549f:
  local_34 = 0;
  if ((char)param_2 == '\0') {
    local_34 = DAT_02394290;
  }
  plVar3 = (longlong *)FUN_00e8fc40();
  FUN_001b9f00();
  (**(code **)(*plVar3 + 0x18))();
  local_d8 = 0;
  local_d4 = 0x3f19999a;
  local_e8 = local_40;
  local_e0 = puVar6;
  FUN_01a01f50(&local_e8,&local_d8,&local_d4,&local_e0);
  local_78 = 0x3f4ccccd;
  local_c8 = &DAT_02628b00;
  local_68 = 0;
  if (puVar7 != (undefined *)0x0) {
    FUN_00d50b00();
  }
  local_68 = 1;
  local_c8 = &DAT_02645f38;
  local_60 = 0x3f800000;
  local_70 = puVar7;
  FUN_01f7ba60(local_34,&local_c8);
  FUN_019fe220();
  *unaff_RDI = plVar3;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  if ((bVar1) && (puVar7 != (undefined *)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_d0 != '\0') && (puVar6 != (undefined *)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_50 != '\0') && (local_40 != (undefined *)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_58 != '\0') && (local_48 != (undefined *)0x0)) {
    FUN_00d50b20();
  }
  return unaff_RDI;
}


