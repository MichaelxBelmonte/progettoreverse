// Function: FUN_01a0c9f0
// Address: 01a0c9f0
// Size: 1072 bytes
// Class: Unknown


ulonglong FUN_01a0c9f0(undefined8 param_1,byte param_2)

{
  longlong *plVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong *unaff_RDI;
  bool bVar6;
  undefined4 uVar7;
  longlong local_b0;
  char local_a8;
  longlong local_a0;
  char local_98;
  longlong local_90;
  char local_88;
  longlong *local_80;
  char local_78;
  longlong local_70;
  char local_68;
  longlong *local_60;
  undefined4 local_58;
  undefined8 local_54;
  longlong *local_48;
  char local_40;
  longlong *local_38;
  char local_30;
  
  FUN_01a58dc0();
  (**(code **)(*local_38 + 0xe30))();
  if (local_70 == 0) {
    bVar6 = true;
  }
  else {
    FUN_01a58dc0();
    (**(code **)(*local_48 + 0xe30))();
    bVar6 = *(int *)(local_a0 + 0xc) == 0;
    if (local_98 != '\0') {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (bVar6) {
    uVar5 = 0;
    goto LAB_01a0ce0e;
  }
  FUN_01a58dc0();
  (**(code **)(*local_38 + 0xe30))();
  local_90 = local_70;
  local_88 = 0;
  if (local_68 == '\0') {
    if (local_70 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_68 = '\0';
  }
  local_88 = '\x01';
  uVar3 = (**(code **)(*unaff_RDI + 0x488))();
  uVar5 = (ulonglong)uVar3;
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (((byte)uVar3 & param_2) == 0) goto LAB_01a0ce0e;
  uVar7 = FUN_01caec40();
  local_b0 = DAT_027e1e88;
  if (DAT_027e1e88 != 0) {
    uVar7 = FUN_00d50b00();
  }
  local_a8 = '\x01';
  FUN_000175c0(uVar7,&local_b0);
  lVar4 = local_70;
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if ((local_a8 != '\0') && (local_b0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (lVar4 == 0) {
    FUN_01a58dc0();
    (**(code **)(*local_80 + 0xe30))();
    plVar1 = local_48;
    if (local_40 == '\0') {
      if (local_48 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_40 = '\0';
    }
    local_38 = plVar1;
    local_30 = 0;
    cVar2 = FUN_01a0ab00(DAT_0241b664);
    if ((cVar2 == '\0') || (plVar1 == (longlong *)0x0)) {
      if (plVar1 != (longlong *)0x0) goto LAB_01a0cddc;
    }
    else {
      local_68 = '\0';
      local_70 = 0;
      local_60 = plVar1;
      local_54 = 0;
      for (lVar4 = 0; local_58 = (undefined4)lVar4, lVar4 < *(int *)((longlong)plVar1 + 0xc);
          lVar4 = lVar4 + 1) {
        local_a0 = *(longlong *)(plVar1[2] + lVar4 * 8);
        local_98 = '\0';
        local_70 = local_a0;
        FUN_01a0c250(DAT_0241b664);
      }
      FUN_001159b0();
LAB_01a0cddc:
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    FUN_01a58dc0();
    (**(code **)(*local_80 + 0xe30))();
    plVar1 = local_48;
    if (local_40 == '\0') {
      if (local_48 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_40 = '\0';
    }
    local_38 = plVar1;
    local_30 = 0;
    cVar2 = FUN_01a0ab00(DAT_02390d00);
    if ((cVar2 == '\0') || (plVar1 == (longlong *)0x0)) {
      if (plVar1 != (longlong *)0x0) goto LAB_01a0ccfc;
    }
    else {
      local_68 = '\0';
      local_70 = 0;
      local_60 = plVar1;
      local_54 = 0;
      for (lVar4 = 0; local_58 = (undefined4)lVar4, lVar4 < *(int *)((longlong)plVar1 + 0xc);
          lVar4 = lVar4 + 1) {
        local_a0 = *(longlong *)(plVar1[2] + lVar4 * 8);
        local_98 = '\0';
        local_70 = local_a0;
        FUN_01a0c250(DAT_02390d00);
      }
      FUN_001159b0();
LAB_01a0ccfc:
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  uVar5 = CONCAT71((int7)((ulonglong)lVar4 >> 8),1);
LAB_01a0ce0e:
  return uVar5 & 0xffffffff;
}


