// Function: FUN_01f0b230
// Address: 01f0b230
// Size: 1142 bytes
// Class: GNMultipleValue
// String references:
//   "GNMultipleValue"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f0b230(void)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  longlong **pplVar7;
  longlong *unaff_RDI;
  byte bVar8;
  longlong *plVar9;
  byte bVar10;
  byte bVar11;
  undefined4 uVar12;
  longlong local_98;
  char local_90;
  longlong *local_88;
  char local_80;
  longlong local_78;
  char local_70;
  longlong *local_68;
  char local_60;
  longlong *local_58;
  longlong *local_50;
  char local_48;
  longlong *local_40;
  char local_38;
  
  uVar12 = FUN_01ccad60();
  local_58 = local_40;
  if ((((local_38 == '\0') && (local_40 != (longlong *)0x0)) &&
      (uVar12 = FUN_00d50b00(), local_38 != '\0')) && (local_40 != (longlong *)0x0)) {
    uVar12 = FUN_00d50b20();
  }
  lVar1 = DAT_027057d0;
  local_38 = '\0';
  local_40 = (longlong *)0x0;
  if (DAT_027057d0 != 0) {
    uVar12 = FUN_00d50b00();
  }
  local_98 = lVar1;
  local_90 = '\x01';
  uVar12 = (**(code **)(*unaff_RDI + 0x4c8))(uVar12,&local_98);
  plVar2 = local_50;
  if (local_50 == (longlong *)0x0) {
    bVar8 = 1;
    bVar10 = 0;
    bVar11 = 0;
    plVar9 = (longlong *)0x0;
  }
  else {
    if (local_48 == '\0') {
      uVar12 = FUN_00d50b00();
      local_40 = plVar2;
      local_38 = '\x01';
      if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
        uVar12 = FUN_00d50b20();
      }
    }
    else {
      local_40 = local_50;
      local_38 = '\x01';
      local_48 = '\0';
    }
    bVar8 = 0;
    bVar10 = 1;
    bVar11 = 1;
    plVar9 = plVar2;
  }
  if ((local_90 != '\0') && (bVar11 = bVar10, local_98 != 0)) {
    uVar12 = FUN_00d50b20();
  }
  if (plVar9 != (longlong *)0x0) {
    local_88 = plVar2;
    local_80 = '\0';
    FUN_00c70bc0();
    uVar12 = FUN_01d65260();
    if ((local_80 != '\0') && (local_88 != (longlong *)0x0)) {
      uVar12 = FUN_00d50b20();
    }
  }
  lVar1 = DAT_027e7c20;
  if (DAT_027e7c20 != 0) {
    uVar12 = FUN_00d50b00();
  }
  local_78 = lVar1;
  local_70 = '\x01';
  (**(code **)(*unaff_RDI + 0x4c8))(uVar12,&local_78);
  plVar6 = local_50;
  if (plVar2 == local_50) {
    plVar6 = plVar2;
    if ((bool)(bVar8 & plVar2 != (longlong *)0x0)) {
      if (local_48 != '\0') goto LAB_01f0b433;
      FUN_00d50b00();
      goto LAB_01f0b45f;
    }
joined_r0x01f0b44b:
    if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    plVar9 = plVar6;
    if (local_48 == '\0') {
      if (local_50 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      local_40 = plVar6;
      if ((bool)(bVar11 & plVar2 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
LAB_01f0b45f:
      local_38 = '\x01';
      goto joined_r0x01f0b44b;
    }
    local_40 = local_50;
    if ((bool)(bVar11 & plVar2 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
LAB_01f0b433:
    local_38 = '\x01';
    local_48 = '\0';
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  if (plVar9 == (longlong *)0x0) goto LAB_01f0b5cc;
  if ((DAT_0277a3a0 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
    _DAT_026d3c38 = FUN_00d4fe50();
    _DAT_026d3c20 = "GNMultipleValue";
    _DAT_026d3c28 = 0x18;
    _DAT_026d3c30 = FUN_00050c70;
    _DAT_026d3c40 = 0;
    uRam00000000026d3c48 = 0;
    _DAT_026d3c50 = 0;
    uRam00000000026d3c58 = 0;
    _DAT_026d3c60 = 0;
    uRam00000000026d3c68 = 0;
    _DAT_026d3c70 = 0;
    uRam00000000026d3c78 = 0;
    _DAT_026d3c80 = 0;
    uRam00000000026d3c88 = 0;
    _DAT_026d3c90 = 0;
    uRam00000000026d3c98 = 0;
    _DAT_026d3ca0 = 0;
    uRam00000000026d3ca8 = 0;
    _DAT_026d3cb0 = 0;
    uRam00000000026d3cb8 = 0;
    _DAT_026d3cc0 = 0;
    uRam00000000026d3cc8 = 0;
    _DAT_026d3cd0 = 0;
    uRam00000000026d3cd8 = 0;
    _DAT_026d3ce0 = 0;
    ___cxa_guard_release();
  }
  (**(code **)(*plVar9 + 0x360))();
  pplVar7 = &local_40;
  cVar4 = FUN_00e85ea0();
  if (cVar4 == '\0') {
    pplVar7 = (longlong **)&DAT_02802688;
  }
  cVar4 = *(char *)(pplVar7 + 1);
  if ((cVar4 == '\0') || (*pplVar7 == (longlong *)0x0)) {
    if (*pplVar7 != (longlong *)0x0) goto LAB_01f0b4f3;
  }
  else {
    FUN_00d50b00();
LAB_01f0b4f3:
    FUN_00e987e0();
    cVar3 = local_38;
    plVar9 = local_40;
    plVar2 = local_50;
    if (local_40 == local_50) {
      if ((local_38 == '\0') && (local_50 != (longlong *)0x0)) {
        if (local_48 != '\0') goto LAB_01f0b53f;
        FUN_00d50b00();
        goto LAB_01f0b572;
      }
LAB_01f0b576:
      if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      if (local_48 == '\0') {
        if (local_50 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        local_40 = plVar2;
        if ((cVar3 != '\0') && (plVar9 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
LAB_01f0b572:
        local_38 = '\x01';
        goto LAB_01f0b576;
      }
      local_40 = local_50;
      if ((local_38 != '\0') && (plVar9 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
LAB_01f0b53f:
      local_38 = '\x01';
    }
    if (cVar4 != '\0') {
      FUN_00d50b20();
    }
  }
  plVar6 = local_40;
  local_68 = local_40;
  local_60 = '\0';
  FUN_00c70bc0();
  FUN_01d66ab0();
  if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
LAB_01f0b5cc:
  if ((local_38 != '\0') && (plVar6 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (local_58 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}


