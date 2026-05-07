// Function: FUN_01d06f70
// Address: 01d06f70
// Size: 938 bytes
// Class: GNMultipleValue


ulonglong FUN_01d06f70(undefined8 param_1,char param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  longlong **pplVar6;
  undefined7 uVar8;
  ulonglong uVar7;
  longlong unaff_RDI;
  longlong *plVar9;
  longlong local_118;
  longlong local_110 [2];
  undefined1 local_100;
  longlong *local_f8;
  char local_f0;
  undefined4 local_a8;
  longlong local_a0;
  undefined1 local_98;
  undefined4 local_90;
  longlong local_88;
  char local_80;
  longlong local_78;
  char local_70;
  longlong local_68;
  char local_60;
  longlong local_58;
  char local_50;
  undefined4 local_48;
  undefined4 local_44;
  longlong local_40;
  char local_38;
  
  plVar1 = *(longlong **)(unaff_RDI + 0x1c8);
  if (plVar1 != (longlong *)0x0) {
    FUN_00d50b00();
  }
  local_f0 = '\x01';
  local_f8 = plVar1;
  FUN_001b9d20();
  if (plVar1 == (longlong *)0x0) {
LAB_01d06fd4:
    pplVar6 = &DAT_02802688;
    plVar9 = DAT_02802688;
    if (DAT_02802690 != '\0') goto LAB_01d06fe4;
LAB_01d07001:
    cVar4 = '\x01';
    if (plVar9 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar4 = FUN_00e85ea0();
    if (cVar4 == '\0') goto LAB_01d06fd4;
    pplVar6 = &local_f8;
    plVar9 = local_f8;
    if (local_f0 == '\0') goto LAB_01d07001;
LAB_01d06fe4:
    *(undefined1 *)(pplVar6 + 1) = 0;
    cVar4 = local_f0;
  }
  if ((cVar4 != '\0') && (plVar1 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  uVar8 = (undefined7)((ulonglong)plVar1 >> 8);
  if (plVar9 == (longlong *)0x0) {
    uVar7 = CONCAT71(uVar8,1);
    if (param_2 == '\0') goto LAB_01d07306;
LAB_01d07051:
    FUN_01cfc6a0(DAT_02390124);
    plVar1 = local_f8;
    if ((local_f0 == '\0') &&
       (((local_f8 != (longlong *)0x0 && (FUN_00d50b00(), local_f0 != '\0')) &&
        (local_f8 != (longlong *)0x0)))) {
      FUN_00d50b20();
    }
    FUN_01cfc6a0(0);
    plVar2 = local_f8;
    if (((local_f0 == '\0') && (local_f8 != (longlong *)0x0)) &&
       ((FUN_00d50b00(), local_f0 != '\0' && (local_f8 != (longlong *)0x0)))) {
      FUN_00d50b20();
    }
    FUN_01cfbee0(DAT_02390120,DAT_02390120,DAT_02390120);
    local_48 = 0;
    FUN_01cfbee0(DAT_0239109c,DAT_0239109c,DAT_0239109c);
    local_44 = 0x3f000000;
    FUN_01cfbee0(DAT_02390128,DAT_02390128,DAT_02390128);
    FUN_01cfbee0(DAT_02390120,DAT_02390120,DAT_02390120);
    lVar3 = local_58;
    local_118 = local_78;
    local_110[0] = local_68;
    FUN_01a01f50(&local_118,&local_48,&local_44,local_110);
    local_a8 = 0x3f000000;
    local_f8 = (longlong *)&DAT_02628b00;
    local_98 = 0;
    if (lVar3 != 0) {
      FUN_00d50b00();
    }
    local_a0 = lVar3;
    local_98 = 1;
    local_f8 = (longlong *)&DAT_02645f38;
    local_90 = 0x3f800000;
    FUN_01f7b9d0(DAT_023b5d7c,&local_f8);
    lVar3 = local_40;
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_100 = 1;
    FUN_01d03810();
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    FUN_019fe220();
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    FUN_01d11e80();
    if (plVar2 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    uVar7 = CONCAT71((int7)((ulonglong)lVar3 >> 8),1);
    if (plVar9 == (longlong *)0x0) goto LAB_01d07306;
  }
  else {
    iVar5 = FUN_01f7c6f0();
    uVar7 = CONCAT71(uVar8,iVar5 != 4);
    if ((iVar5 != 4) && (param_2 != '\0')) goto LAB_01d07051;
  }
  FUN_00d50b20();
LAB_01d07306:
  return uVar7 & 0xffffffff;
}


