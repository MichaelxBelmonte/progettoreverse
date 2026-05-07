// Function: FUN_01d069b0
// Address: 01d069b0
// Size: 846 bytes
// Class: GNMultipleValue


ulonglong FUN_01d069b0(undefined8 param_1,char param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  longlong **pplVar6;
  undefined7 uVar8;
  ulonglong uVar7;
  longlong unaff_RDI;
  longlong *plVar9;
  longlong local_e0 [2];
  undefined1 local_d0;
  longlong local_c8;
  char local_c0;
  longlong local_b8;
  char local_b0;
  longlong *local_a8;
  char local_a0;
  longlong *local_98;
  char local_90;
  undefined4 local_84;
  longlong local_80;
  char local_78;
  longlong *local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong local_48;
  char local_40;
  undefined4 local_38;
  
  plVar1 = *(longlong **)(unaff_RDI + 0x1c8);
  if (plVar1 != (longlong *)0x0) {
    FUN_00d50b00();
  }
  local_68 = '\x01';
  local_70 = plVar1;
  FUN_001b9d20();
  if (plVar1 == (longlong *)0x0) {
LAB_01d06a0e:
    pplVar6 = &DAT_02802688;
    plVar9 = DAT_02802688;
    if (DAT_02802690 != '\0') goto LAB_01d06a1e;
LAB_01d06a35:
    cVar4 = '\x01';
    if (plVar9 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar4 = FUN_00e85ea0();
    if (cVar4 == '\0') goto LAB_01d06a0e;
    pplVar6 = &local_70;
    plVar9 = local_70;
    if (local_68 == '\0') goto LAB_01d06a35;
LAB_01d06a1e:
    *(undefined1 *)(pplVar6 + 1) = 0;
    cVar4 = local_68;
  }
  if ((cVar4 != '\0') && (plVar1 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  uVar8 = (undefined7)((ulonglong)plVar1 >> 8);
  if (plVar9 == (longlong *)0x0) {
    uVar7 = CONCAT71(uVar8,1);
    if (param_2 == '\0') goto LAB_01d06cea;
LAB_01d06a85:
    FUN_01cfc6a0(DAT_02390124);
    plVar1 = local_70;
    if ((local_68 == '\0') &&
       (((local_70 != (longlong *)0x0 && (FUN_00d50b00(), local_68 != '\0')) &&
        (local_70 != (longlong *)0x0)))) {
      FUN_00d50b20();
    }
    FUN_01cfc6a0(0);
    plVar3 = local_70;
    if (((local_68 == '\0') && (local_70 != (longlong *)0x0)) &&
       ((FUN_00d50b00(), local_68 != '\0' && (local_70 != (longlong *)0x0)))) {
      FUN_00d50b20();
    }
    local_a8 = plVar1;
    local_a0 = '\0';
    FUN_01cfd130();
    local_84 = 0;
    local_98 = plVar3;
    local_90 = '\0';
    FUN_01cfd130();
    local_e0[0] = local_b8;
    FUN_0049c630(local_e0,&local_84,4);
    local_70 = (longlong *)&DAT_02647118;
    local_38 = 0x3f800000;
    FUN_01f7b9d0(DAT_023b5d7c,&local_70);
    lVar2 = local_80;
    if (local_78 == '\0') {
      if (local_80 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_78 = '\0';
    }
    local_d0 = 1;
    FUN_01d03810();
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    local_70 = (longlong *)&DAT_024f9300;
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    local_70 = &DAT_024c5048;
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if ((local_b0 != '\0') && (local_b8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_90 != '\0') && (local_98 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_c0 != '\0') && (local_c8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_a0 != '\0') && (local_a8 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_01d11e80();
    if (plVar3 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    uVar7 = CONCAT71((int7)((ulonglong)lVar2 >> 8),1);
    if (plVar9 == (longlong *)0x0) goto LAB_01d06cea;
  }
  else {
    iVar5 = FUN_01f7c6f0();
    uVar7 = CONCAT71(uVar8,iVar5 != 2);
    if ((iVar5 != 2) && (param_2 != '\0')) goto LAB_01d06a85;
  }
  FUN_00d50b20();
LAB_01d06cea:
  return uVar7 & 0xffffffff;
}


