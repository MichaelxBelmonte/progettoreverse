// Function: FUN_01dba1f0
// Address: 01dba1f0
// Size: 821 bytes
// Class: GNTableColumnAssoc
// String references:
//   "GNTableColumnAssoc"
//   "GNString"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01dba1f0(void)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  longlong *plVar6;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 uVar7;
  undefined4 extraout_XMM0_Da_01;
  longlong local_50;
  char local_48;
  longlong *local_40;
  char local_38;
  longlong *local_30;
  
  plVar1 = *(longlong **)(unaff_RSI + 0x40);
  if (plVar1 == (longlong *)0x0) {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
    return;
  }
  FUN_00d50b00();
  local_30 = plVar1;
  if ((DAT_026fd0c0 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
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
  (**(code **)(*plVar1 + 0x360))();
  cVar3 = FUN_00e85ea0();
  plVar1 = local_30;
  plVar5 = local_30;
  if (cVar3 == '\0') {
    plVar5 = DAT_02802688;
  }
  if (plVar5 == (longlong *)0x0) {
    uVar7 = extraout_XMM0_Da;
    if ((DAT_026f20e8 == '\0') &&
       (iVar4 = ___cxa_guard_acquire(), uVar7 = extraout_XMM0_Da_01, iVar4 != 0)) {
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
      uVar7 = ___cxa_guard_release();
    }
    lVar2 = DAT_027e7c20;
    plVar5 = local_30;
    plVar6 = DAT_02802688;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x360))();
      cVar3 = FUN_00e85ea0();
      uVar7 = extraout_XMM0_Da_00;
      lVar2 = DAT_027e7c20;
      plVar5 = local_30;
      plVar6 = DAT_02802688;
      if (cVar3 != '\0') {
        plVar6 = local_30;
      }
    }
    DAT_027e7c20 = lVar2;
    local_30 = plVar5;
    if (plVar6 != (longlong *)0x0) {
      if (lVar2 != 0) {
        uVar7 = FUN_00d50b00();
      }
      local_48 = '\x01';
      local_50 = lVar2;
      FUN_01ccab60(uVar7,&local_50);
      plVar1 = local_40;
      plVar6 = plVar5;
      if (local_40 == plVar5) {
LAB_01dba359:
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        if (local_38 == '\0') {
          if (local_40 != (longlong *)0x0) {
            FUN_00d50b00();
          }
          local_30 = plVar1;
          plVar6 = plVar1;
          if (plVar5 != (longlong *)0x0) {
            FUN_00d50b20();
          }
          goto LAB_01dba359;
        }
        local_30 = local_40;
        if (plVar5 != (longlong *)0x0) {
          FUN_00d50b20();
        }
        local_38 = '\0';
        plVar6 = local_40;
      }
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      if (plVar6 != (longlong *)0x0) {
        *unaff_RDI = (longlong)plVar6;
        goto LAB_01dba261;
      }
    }
    *(undefined1 *)(unaff_RDI + 1) = 0;
    lVar2 = *(longlong *)(unaff_RSI + 0x48);
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    *unaff_RDI = lVar2;
    *(undefined1 *)(unaff_RDI + 1) = 1;
    if (local_30 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  else {
    *unaff_RDI = (longlong)local_30;
LAB_01dba261:
    *(undefined1 *)(unaff_RDI + 1) = 1;
  }
  return;
}


