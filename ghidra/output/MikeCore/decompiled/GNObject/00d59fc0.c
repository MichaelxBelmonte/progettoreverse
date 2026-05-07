// Function: FUN_00d59fc0
// Address: 00d59fc0
// Size: 1644 bytes
// Class: GNObject
// String references:
//   "GNObject"
//   "GNString"


/* WARNING: Removing unreachable block (ram,0x00d5a0ec) */
/* WARNING: Removing unreachable block (ram,0x00d5a0f9) */
/* WARNING: Removing unreachable block (ram,0x00d5a3c7) */
/* WARNING: Removing unreachable block (ram,0x00d5a3d4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_00d59fc0(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong *plVar6;
  longlong *plVar7;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined4 extraout_XMM0_Da_04;
  undefined4 extraout_XMM0_Da_05;
  undefined4 extraout_XMM0_Da_06;
  undefined4 extraout_XMM0_Da_07;
  undefined4 extraout_XMM0_Da_08;
  undefined4 extraout_XMM0_Da_09;
  undefined4 uVar8;
  undefined4 extraout_XMM0_Da_10;
  undefined4 extraout_XMM0_Da_11;
  undefined4 extraout_XMM0_Da_12;
  longlong local_d8;
  char local_d0;
  longlong *local_c8;
  char local_c0;
  longlong local_b8;
  char local_b0;
  longlong local_a8;
  char local_a0;
  longlong *local_98;
  char local_90;
  longlong *local_88;
  char local_80;
  longlong *local_78;
  char local_70;
  longlong *local_68;
  char local_60;
  int local_54;
  longlong *local_48;
  char local_40;
  
  if ((longlong *)*param_1 == (longlong *)0x0) {
    return 0;
  }
  local_d8 = *param_2;
  local_d0 = '\0';
  (**(code **)(*(longlong *)*param_1 + 0x88))(param_1,&local_d8);
  local_88 = local_48;
  uVar8 = extraout_XMM0_Da;
  if (local_40 == '\0') {
    if (local_48 == (longlong *)0x0) {
      local_88 = (longlong *)0x0;
    }
    else {
      FUN_00e31530(extraout_XMM0_Da,0);
      uVar8 = extraout_XMM0_Da_03;
    }
  }
  else {
    local_40 = '\0';
  }
  plVar7 = local_88;
  local_80 = '\x01';
  if ((local_d0 != '\0') && (local_d8 != 0)) {
    FUN_00d50b20();
    uVar8 = extraout_XMM0_Da_00;
  }
  plVar6 = (longlong *)*unaff_RSI;
  local_54 = 1;
  if (plVar6 == plVar7) goto LAB_00d5a4a8;
  if (plVar6 == (longlong *)0x0) {
    plVar6 = (longlong *)0x0;
    if (unaff_RDI == (longlong *)0x0) goto LAB_00d5a10c;
  }
  else {
    if (plVar7 != (longlong *)0x0) {
      local_c0 = '\0';
      local_c8 = plVar7;
      cVar3 = (**(code **)(*plVar6 + 0x50))();
      uVar8 = extraout_XMM0_Da_01;
      if ((local_c0 != '\0') && (local_c8 != (longlong *)0x0)) {
        FUN_00d50b20();
        uVar8 = extraout_XMM0_Da_02;
      }
      if (cVar3 != '\0') goto LAB_00d5a4a8;
      plVar6 = (longlong *)*unaff_RSI;
    }
    if (plVar6 == unaff_RDI) {
LAB_00d5a10c:
      if ((longlong *)*param_1 == plVar7) goto LAB_00d5a4a8;
    }
  }
  if (plVar7 != (longlong *)0x0) {
    (**(code **)(*plVar7 + 0x148))();
    if (local_48 == (longlong *)0x0) {
      cVar3 = '\0';
      uVar8 = extraout_XMM0_Da_04;
    }
    else {
      (**(code **)(*plVar7 + 0x148))();
      local_b8 = *unaff_RSI;
      local_b0 = '\0';
      cVar3 = (**(code **)(*local_78 + 0x50))();
      uVar8 = extraout_XMM0_Da_05;
      if ((local_b0 != '\0') && (local_b8 != 0)) {
        FUN_00d50b20();
        uVar8 = extraout_XMM0_Da_06;
      }
      if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
        FUN_00d50b20();
        uVar8 = extraout_XMM0_Da_07;
      }
    }
    if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
      uVar8 = extraout_XMM0_Da_08;
    }
    if (cVar3 != '\0') goto LAB_00d5a4a8;
    plVar6 = (longlong *)*unaff_RSI;
  }
  if ((DAT_026fd0c0 == '\0') &&
     (iVar5 = ___cxa_guard_acquire(), uVar8 = extraout_XMM0_Da_12, iVar5 != 0)) {
    if ((DAT_028a7d98 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
      DAT_028a7cd0 = "GNObject";
      _DAT_028a7cd8 = 0x10;
      _DAT_028a7ce0 = FUN_00d4ff10;
      _DAT_028a7ce8 = 0;
      uRam00000000028a7cf0 = 0;
      _DAT_028a7cf8 = 0;
      uRam00000000028a7d00 = 0;
      _DAT_028a7d08 = 0;
      uRam00000000028a7d10 = 0;
      _DAT_028a7d18 = 0;
      uRam00000000028a7d20 = 0;
      _DAT_028a7d28 = 0;
      uRam00000000028a7d30 = 0;
      _DAT_028a7d38 = 0;
      uRam00000000028a7d40 = 0;
      _DAT_028a7d48 = 0;
      uRam00000000028a7d50 = 0;
      _DAT_028a7d58 = 0;
      uRam00000000028a7d60 = 0;
      _DAT_028a7d68 = 0;
      uRam00000000028a7d70 = 0;
      _DAT_028a7d78 = 0;
      uRam00000000028a7d80 = 0;
      _DAT_028a7d84 = 0;
      uRam00000000028a7d88 = 0;
      uRam00000000028a7d8c = 0;
      ___cxa_guard_release();
    }
    DAT_026d5e40 = "GNString";
    _DAT_026d5e48 = 0x40;
    _DAT_026d5e50 = FUN_0005d920;
    _DAT_026d5e58 = &DAT_028a7cd0;
    _DAT_026d5e60 = 0;
    uRam00000000026d5e68 = 0;
    _DAT_026d5e70 = 0;
    uRam00000000026d5e78 = 0;
    _DAT_026d5e80 = 0;
    uRam00000000026d5e88 = 0;
    _DAT_026d5e90 = 0;
    uRam00000000026d5e98 = 0;
    _DAT_026d5ea0 = 0;
    uRam00000000026d5ea8 = 0;
    _DAT_026d5eb0 = 0;
    uRam00000000026d5eb8 = 0;
    _DAT_026d5ec0 = 0;
    uRam00000000026d5ec8 = 0;
    _DAT_026d5ed0 = 0;
    uRam00000000026d5ed8 = 0;
    _DAT_026d5ee0 = 0;
    uRam00000000026d5ee8 = 0;
    _DAT_026d5ef0 = 0;
    uRam00000000026d5ef8 = 0;
    _DAT_026d5f00 = 0;
    uVar8 = ___cxa_guard_release();
  }
  if (plVar6 == (longlong *)0x0) {
LAB_00d5a208:
    unaff_RSI = (longlong *)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar6 + 0x360))();
    cVar3 = FUN_00e85ea0();
    uVar8 = extraout_XMM0_Da_09;
    if (cVar3 == '\0') goto LAB_00d5a208;
  }
  plVar6 = (longlong *)*unaff_RSI;
  lVar2 = unaff_RSI[1];
  if (((char)lVar2 != '\0') && (plVar6 != (longlong *)0x0)) {
    FUN_00e31530(uVar8,0);
  }
  plVar7 = local_88;
  uVar8 = FUN_00d68120();
  plVar1 = DAT_02802688;
  cVar3 = DAT_02802690;
  if (plVar7 != (longlong *)0x0) {
    (**(code **)(*plVar7 + 0x360))();
    cVar4 = FUN_00e85ea0();
    uVar8 = extraout_XMM0_Da_10;
    plVar1 = DAT_02802688;
    cVar3 = DAT_02802690;
    if (cVar4 != '\0') {
      plVar1 = local_88;
      cVar3 = local_80;
    }
  }
  if ((cVar3 != '\0') && (plVar1 != (longlong *)0x0)) {
    FUN_00e31530(uVar8,0);
  }
  local_54 = 0;
  if ((plVar6 != (longlong *)0x0) && (plVar1 != (longlong *)0x0)) {
    (**(code **)(*unaff_RDI + 0x360))();
    FUN_00e86210();
    local_a8 = *param_2;
    local_a0 = '\0';
    FUN_00c837f0(local_a8,&local_a8);
    if (local_40 == '\0') {
      if (local_48 != (longlong *)0x0) {
        FUN_00e31530(extraout_XMM0_Da_11,0);
      }
    }
    else {
      local_40 = '\0';
    }
    if ((local_a0 != '\0') && (local_a8 != 0)) {
      FUN_00d50b20();
    }
    if (local_48 != (longlong *)0x0) {
      FUN_00c77cd0();
      cVar4 = FUN_00c7b220();
      if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (cVar4 == 'e') {
        uVar8 = FUN_00c77cd0();
        local_90 = '\0';
        local_98 = plVar1;
        uVar8 = FUN_00c7b3d0(uVar8,&local_98);
        local_60 = 0;
        if (local_40 == '\0') {
          if (local_48 != (longlong *)0x0) {
            FUN_00e31530(uVar8,0);
          }
        }
        else {
          local_40 = '\0';
        }
        local_60 = '\x01';
        local_68 = local_48;
        cVar4 = (**(code **)(*plVar6 + 0x50))();
        if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_90 != '\0') && (local_98 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (cVar4 != '\0') {
          local_54 = 1;
          FUN_00d50b20();
          goto LAB_00d5a484;
        }
      }
      FUN_00d50b20();
    }
  }
LAB_00d5a484:
  if ((cVar3 != '\0') && (plVar1 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (((char)lVar2 != '\0') && (plVar6 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
LAB_00d5a4a8:
  if ((local_80 != '\0') && (plVar7 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (local_54 == 0) {
    return 0;
  }
  return 1;
}


