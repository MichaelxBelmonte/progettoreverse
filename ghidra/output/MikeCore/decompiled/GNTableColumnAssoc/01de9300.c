// Function: FUN_01de9300
// Address: 01de9300
// Size: 1123 bytes
// Class: GNTableColumnAssoc
// String references:
//   "GNTableColumnAssoc"
//   "GNString"


/* WARNING: Removing unreachable block (ram,0x01de95e5) */
/* WARNING: Removing unreachable block (ram,0x01de95f2) */
/* WARNING: Removing unreachable block (ram,0x01de9442) */
/* WARNING: Removing unreachable block (ram,0x01de944f) */
/* WARNING: Removing unreachable block (ram,0x01de9571) */
/* WARNING: Removing unreachable block (ram,0x01de957e) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_01de9300(undefined4 param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 *unaff_RDI;
  longlong local_98;
  char local_90;
  longlong local_88;
  char local_80;
  longlong local_78;
  char local_70;
  longlong *local_68;
  char local_60;
  longlong *local_50;
  longlong *local_48;
  longlong *local_40;
  char local_38;
  
  FUN_01db9a80();
  if (local_38 == '\0') {
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b00();
      goto LAB_01de9346;
    }
    local_48 = (longlong *)0x0;
  }
  else {
LAB_01de9346:
    local_48 = local_40;
    if (local_40 != (longlong *)0x0) {
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
      (**(code **)(*local_40 + 0x360))();
      cVar2 = FUN_00e85ea0();
      plVar4 = local_40;
      if (cVar2 == '\0') {
        plVar4 = DAT_02802688;
      }
      if (plVar4 != (longlong *)0x0) {
        local_98 = *param_2;
        local_90 = '\0';
        local_88 = *param_3;
        local_80 = '\0';
        (**(code **)(*local_40 + 0x528))(param_1,&local_98,&local_88);
        if (local_38 == '\0') {
          if (local_40 != (longlong *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        if ((local_80 != '\0') && (local_88 != 0)) {
          FUN_00d50b20();
        }
        if ((local_90 != '\0') && (local_98 != 0)) {
          FUN_00d50b20();
        }
        if (local_40 != (longlong *)0x0) {
          *unaff_RDI = local_40;
          *(undefined1 *)(unaff_RDI + 1) = 1;
          goto LAB_01de95b0;
        }
      }
    }
  }
  lVar1 = DAT_02724b68;
  if (DAT_02724b68 != 0) {
    FUN_00d50b00();
  }
  local_78 = lVar1;
  local_70 = '\x01';
  FUN_01ccc2f0(param_1,&local_78);
  local_50 = local_40;
  if (local_38 == '\0') {
    if (local_40 == (longlong *)0x0) {
      local_50 = (longlong *)0x0;
    }
    else {
      FUN_00d50b00();
    }
  }
  else {
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  if (local_50 == (longlong *)0x0) {
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
    (**(code **)(*local_50 + 0x360))();
    cVar2 = FUN_00e85ea0();
    plVar4 = local_50;
    if (cVar2 == '\0') {
      plVar4 = DAT_02802688;
    }
    if (plVar4 == (longlong *)0x0) {
      *unaff_RDI = local_50;
      *(undefined1 *)(unaff_RDI + 1) = 1;
    }
    else {
      local_68 = local_50;
      local_60 = '\0';
      FUN_01cfb480();
      if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (local_50 != (longlong *)0x0) {
        FUN_00d50b20();
      }
    }
  }
  if (local_48 == (longlong *)0x0) {
    return unaff_RDI;
  }
LAB_01de95b0:
  FUN_00d50b20();
  return unaff_RDI;
}


