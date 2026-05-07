// Function: FUN_01df63b0
// Address: 01df63b0
// Size: 1513 bytes
// Class: GNColor
// String references:
//   "GNColor"
//   "GNTableColumnAssoc"
//   "GNString"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_01df63b0(longlong *param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  longlong **pplVar4;
  longlong *plVar5;
  longlong *unaff_RSI;
  undefined8 *unaff_RDI;
  undefined4 uVar6;
  undefined4 extraout_XMM0_Da;
  longlong local_b0;
  char local_a8;
  longlong local_a0;
  char local_98;
  longlong local_90;
  char local_88;
  longlong local_80;
  char local_78;
  longlong *local_70;
  char local_68;
  longlong *local_60;
  char local_58;
  longlong *local_48;
  longlong *local_40;
  char local_38;
  
  uVar6 = FUN_01db9a80();
  local_48 = local_40;
  if (local_38 == '\0') {
    if (local_40 != (longlong *)0x0) {
      uVar6 = FUN_00d50b00();
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        uVar6 = FUN_00d50b20();
      }
      goto LAB_01df63f2;
    }
    local_48 = (longlong *)0x0;
  }
  else {
LAB_01df63f2:
    if (local_48 != (longlong *)0x0) {
      if ((DAT_026f20e8 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
        _DAT_026f2038 = FUN_001ba850();
        _DAT_026f2020 = "GNTableColumnAssoc";
        _DAT_026f2028 = 0x58;
        _DAT_026f2030 = FUN_001f28d0;
        _DAT_026f2040 = 0;
        uRam00000000026f2048 = 0;
        _DAT_026f2050 = 0;
        uRam00000000026f2058 = 0;
        _DAT_026f2060 = 0;
        uRam00000000026f2068 = 0;
        _DAT_026f2070 = 0;
        uRam00000000026f2078 = 0;
        _DAT_026f2080 = 0;
        uRam00000000026f2088 = 0;
        _DAT_026f2090 = 0;
        uRam00000000026f2098 = 0;
        _DAT_026f20a0 = 0;
        uRam00000000026f20a8 = 0;
        _DAT_026f20b0 = 0;
        uRam00000000026f20b8 = 0;
        _DAT_026f20c0 = 0;
        uRam00000000026f20c8 = 0;
        _DAT_026f20d0 = 0;
        uRam00000000026f20d8 = 0;
        _DAT_026f20e0 = 0;
        ___cxa_guard_release();
      }
      (**(code **)(*local_48 + 0x360))();
      cVar2 = FUN_00e85ea0();
      plVar5 = local_48;
      if (cVar2 == '\0') {
        plVar5 = DAT_02802688;
      }
      uVar6 = extraout_XMM0_Da;
      if (plVar5 != (longlong *)0x0) {
        local_b0 = *param_2;
        local_a8 = '\0';
        local_a0 = *param_1;
        local_98 = '\0';
        uVar6 = FUN_01ed2ec0();
        local_90 = *param_3;
        local_88 = '\0';
        uVar6 = (**(code **)(*local_48 + 0x520))(uVar6,&local_b0,&local_90);
        plVar5 = local_40;
        if (local_38 == '\0') {
          if (((local_40 != (longlong *)0x0) && (uVar6 = FUN_00d50b00(), local_38 != '\0')) &&
             (local_40 != (longlong *)0x0)) {
            uVar6 = FUN_00d50b20();
          }
        }
        else {
          local_38 = '\0';
        }
        if ((local_88 != '\0') && (local_90 != 0)) {
          uVar6 = FUN_00d50b20();
        }
        if ((local_98 != '\0') && (local_a0 != 0)) {
          uVar6 = FUN_00d50b20();
        }
        if ((local_a8 != '\0') && (local_b0 != 0)) {
          uVar6 = FUN_00d50b20();
        }
        if (plVar5 != (longlong *)0x0) {
          *unaff_RDI = plVar5;
          *(undefined1 *)(unaff_RDI + 1) = 1;
          goto LAB_01df6776;
        }
      }
    }
  }
  lVar1 = DAT_027f2e50;
  if (DAT_027f2e50 != 0) {
    uVar6 = FUN_00d50b00();
  }
  local_80 = lVar1;
  local_78 = '\x01';
  (**(code **)(*unaff_RSI + 0x4c8))(uVar6,&local_80);
  plVar5 = local_60;
  local_40 = local_60;
  if (local_58 == '\0') {
    if (local_60 == (longlong *)0x0) {
      local_40 = (longlong *)0x0;
      local_38 = '\x01';
      plVar5 = (longlong *)0x0;
    }
    else {
      FUN_00d50b00();
      local_38 = '\x01';
      if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    local_38 = '\x01';
    local_58 = '\0';
  }
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  if (plVar5 == (longlong *)0x0) {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
  }
  else {
    if ((DAT_026fd0c0 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
      _DAT_026d5e58 = FUN_00d4fe50();
      DAT_026d5e40 = "GNString";
      _DAT_026d5e48 = 0x40;
      _DAT_026d5e50 = FUN_0005d920;
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
      ___cxa_guard_release();
    }
    (**(code **)(*plVar5 + 0x360))();
    cVar2 = FUN_00e85ea0();
    plVar5 = local_40;
    pplVar4 = &local_40;
    if (cVar2 == '\0') {
      pplVar4 = &DAT_02802688;
    }
    if (*pplVar4 == (longlong *)0x0) {
      if ((DAT_026e9ce0 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
        _DAT_026fd0e8 = FUN_00d4fe50();
        DAT_026fd0d0 = "GNColor";
        _DAT_026fd0d8 = 0x30;
        _DAT_026fd0e0 = FUN_001b8c30;
        _DAT_026fd0f0 = 0;
        uRam00000000026fd0f8 = 0;
        _DAT_026fd100 = 0;
        uRam00000000026fd108 = 0;
        _DAT_026fd110 = 0;
        uRam00000000026fd118 = 0;
        _DAT_026fd120 = 0;
        uRam00000000026fd128 = 0;
        _DAT_026fd130 = 0;
        uRam00000000026fd138 = 0;
        _DAT_026fd140 = 0;
        uRam00000000026fd148 = 0;
        _DAT_026fd150 = 0;
        uRam00000000026fd158 = 0;
        _DAT_026fd160 = 0;
        uRam00000000026fd168 = 0;
        _DAT_026fd170 = 0;
        uRam00000000026fd178 = 0;
        _DAT_026fd180 = 0;
        uRam00000000026fd188 = 0;
        _DAT_026fd190 = 0;
        ___cxa_guard_release();
      }
      if (plVar5 == (longlong *)0x0) {
LAB_01df66c1:
        pplVar4 = &DAT_02802688;
        *(undefined1 *)(unaff_RDI + 1) = 0;
        plVar5 = DAT_02802688;
        cVar2 = DAT_02802690;
      }
      else {
        (**(code **)(*plVar5 + 0x360))();
        cVar2 = FUN_00e85ea0();
        if (cVar2 == '\0') goto LAB_01df66c1;
        pplVar4 = &local_40;
        *(undefined1 *)(unaff_RDI + 1) = 0;
        plVar5 = local_40;
        cVar2 = local_38;
      }
      if (cVar2 == '\0') {
        if (plVar5 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        *unaff_RDI = plVar5;
        *(undefined1 *)(unaff_RDI + 1) = 1;
      }
      else {
        *unaff_RDI = plVar5;
        *(undefined1 *)(unaff_RDI + 1) = 1;
        *(undefined1 *)(pplVar4 + 1) = 0;
      }
    }
    else {
      local_70 = local_40;
      local_68 = '\0';
      FUN_01cfb480();
      if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (local_48 == (longlong *)0x0) {
    return unaff_RDI;
  }
LAB_01df6776:
  FUN_00d50b20();
  return unaff_RDI;
}


