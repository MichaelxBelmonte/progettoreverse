// Function: FUN_01919a00
// Address: 01919a00
// Size: 1018 bytes
// Class: GNUni


ulonglong FUN_01919a00(undefined8 param_1,byte param_2)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  longlong *unaff_RDI;
  bool bVar7;
  undefined4 uVar8;
  longlong local_a0;
  char local_98;
  longlong *local_90;
  char local_88;
  longlong *local_80;
  char local_78;
  longlong local_70;
  undefined4 local_68;
  undefined8 local_64;
  longlong *local_58;
  char local_50;
  longlong local_48;
  char local_40;
  longlong *local_38;
  char local_30;
  
  FUN_01a58dc0();
  (**(code **)(*local_38 + 0xe30))();
  if (local_80 == (longlong *)0x0) {
    bVar7 = true;
  }
  else {
    FUN_01a58dc0();
    (**(code **)(*local_58 + 0xe30))();
    bVar7 = *(int *)(local_48 + 0xc) == 0;
    if (local_40 != '\0') {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (bVar7) {
    uVar6 = 0;
    goto LAB_01919de8;
  }
  FUN_01a58dc0();
  (**(code **)(*local_38 + 0xe30))();
  local_90 = local_80;
  local_88 = 0;
  if (local_78 == '\0') {
    if (local_80 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_78 = '\0';
  }
  local_88 = '\x01';
  uVar3 = (**(code **)(*unaff_RDI + 0x488))();
  uVar6 = (ulonglong)uVar3;
  if ((local_88 != '\0') && (local_90 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (((byte)uVar3 & param_2) == 0) goto LAB_01919de8;
  uVar8 = FUN_01caec40();
  local_a0 = DAT_027e1e88;
  if (DAT_027e1e88 != 0) {
    uVar8 = FUN_00d50b00();
  }
  local_98 = '\x01';
  FUN_000175c0(uVar8,&local_a0);
  plVar1 = local_80;
  if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 == (longlong *)0x0) {
    FUN_01a58dc0();
    (**(code **)(*local_58 + 0xe30))();
    lVar2 = local_48;
    if (local_40 == '\0') {
      if (local_48 == 0) goto LAB_01919da3;
      FUN_00d50b00();
LAB_01919d40:
      local_78 = '\0';
      local_80 = (longlong *)0x0;
      local_70 = lVar2;
      local_64 = 0;
      for (lVar4 = 0; local_68 = (undefined4)lVar4, lVar4 < *(int *)(lVar2 + 0xc); lVar4 = lVar4 + 1
          ) {
        local_80 = *(longlong **)(*(longlong *)(lVar2 + 0x10) + lVar4 * 8);
        local_30 = '\0';
        local_38 = local_80;
        FUN_019188d0(DAT_02390d00);
      }
      FUN_001159b0();
      bVar7 = false;
    }
    else {
      local_40 = '\0';
      if (local_48 != 0) goto LAB_01919d40;
LAB_01919da3:
      bVar7 = true;
    }
    uVar5 = 0;
    (**(code **)(*unaff_RDI + 0x458))();
    if (!bVar7) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    FUN_01a58dc0();
    (**(code **)(*local_58 + 0xe30))();
    lVar2 = local_48;
    if (local_40 == '\0') {
      if (local_48 == 0) goto LAB_01919ce3;
      FUN_00d50b00();
LAB_01919c7c:
      local_78 = '\0';
      local_80 = (longlong *)0x0;
      local_70 = lVar2;
      local_64 = 0;
      for (lVar4 = 0; local_68 = (undefined4)lVar4, lVar4 < *(int *)(lVar2 + 0xc); lVar4 = lVar4 + 1
          ) {
        local_80 = *(longlong **)(*(longlong *)(lVar2 + 0x10) + lVar4 * 8);
        local_30 = '\0';
        local_38 = local_80;
        FUN_019188d0(DAT_0241b638);
      }
      FUN_001159b0();
      uVar5 = 0;
      bVar7 = false;
    }
    else {
      local_40 = '\0';
      if (local_48 != 0) goto LAB_01919c7c;
LAB_01919ce3:
      uVar5 = CONCAT71((int7)((ulonglong)plVar1 >> 8),1);
      bVar7 = true;
    }
    (**(code **)(*unaff_RDI + 0x458))();
    if (!bVar7) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  uVar6 = CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
LAB_01919de8:
  return uVar6 & 0xffffffff;
}


