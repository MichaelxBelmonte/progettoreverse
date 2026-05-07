// Function: FUN_01deb620
// Address: 01deb620
// Size: 1019 bytes
// Class: GNTableColumnAssoc
// String references:
//   "GNTableColumnAssoc"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_01deb620(void)

{
  longlong *plVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong **pplVar5;
  int iVar6;
  undefined8 unaff_RDI;
  longlong *plVar7;
  undefined4 uVar8;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  longlong local_a8;
  char local_a0;
  longlong *local_98;
  char local_90;
  longlong *local_88;
  char local_80;
  longlong *local_78;
  char local_70;
  longlong *local_68;
  undefined8 local_60;
  int local_58;
  longlong *local_50;
  longlong *local_48;
  longlong *local_40;
  char local_38;
  
  FUN_01ccad60();
  plVar7 = local_78;
  if ((((local_70 == '\0') && (local_78 != (longlong *)0x0)) && (FUN_00d50b00(), local_70 != '\0'))
     && (local_78 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  plVar3 = (longlong *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar3 + 0x18))();
  uVar8 = FUN_01dcd4e0();
  plVar1 = local_78;
  if (local_70 == '\0') {
    if (local_78 == (longlong *)0x0) goto LAB_01deb9e0;
    uVar8 = FUN_00d50b00();
    if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
      uVar8 = FUN_00d50b20();
    }
  }
  else if (local_78 == (longlong *)0x0) goto LAB_01deb9e0;
  local_48 = plVar7;
  local_70 = '\0';
  local_78 = (longlong *)0x0;
  local_68 = plVar1;
  local_60 = 0xffffffff;
  local_58 = 0;
  iVar6 = 0;
  local_50 = plVar3;
  while( true ) {
    if (iVar6 != 0) {
      if (iVar6 < 1) {
        iVar6 = -iVar6;
      }
      else {
        local_60 = CONCAT44(local_60._4_4_,(int)local_60 - iVar6);
        FUN_00d23690(uVar8,iVar6);
        local_58 = local_58 + iVar6;
        iVar6 = 0;
      }
      local_60 = CONCAT44(iVar6,(int)local_60);
    }
    lVar4 = (longlong)(int)local_60;
    iVar6 = (int)local_60 + 1;
    local_60 = CONCAT44(local_60._4_4_,iVar6);
    if (*(int *)((longlong)local_68 + 0xc) <= iVar6) break;
    local_78 = *(longlong **)(local_68[2] + 8 + lVar4 * 8);
    uVar8 = FUN_01db9a80();
    plVar7 = local_40;
    if ((DAT_026f20e8 == '\0') &&
       (iVar6 = ___cxa_guard_acquire(), uVar8 = extraout_XMM0_Da_00, iVar6 != 0)) {
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
      uVar8 = ___cxa_guard_release();
    }
    pplVar5 = (longlong **)&DAT_02802688;
    if (plVar7 != (longlong *)0x0) {
      (**(code **)(*plVar7 + 0x360))();
      cVar2 = FUN_00e85ea0();
      pplVar5 = &local_40;
      uVar8 = extraout_XMM0_Da;
      if (cVar2 == '\0') {
        pplVar5 = (longlong **)&DAT_02802688;
      }
    }
    plVar7 = *pplVar5;
    if (*(char *)(pplVar5 + 1) == '\0') {
      if (plVar7 != (longlong *)0x0) {
        uVar8 = FUN_00d50b00();
      }
    }
    else {
      *(undefined1 *)(pplVar5 + 1) = 0;
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      uVar8 = FUN_00d50b20();
    }
    lVar4 = DAT_027e7c20;
    if (plVar7 != (longlong *)0x0) {
      if (DAT_027e7c20 != 0) {
        uVar8 = FUN_00d50b00();
      }
      local_a8 = lVar4;
      local_a0 = '\x01';
      uVar8 = FUN_01ccab60(uVar8,&local_a8);
      plVar7 = local_40;
      if (local_38 == '\0') {
        if (((local_40 != (longlong *)0x0) && (uVar8 = FUN_00d50b00(), local_38 != '\0')) &&
           (local_40 != (longlong *)0x0)) {
          uVar8 = FUN_00d50b20();
        }
      }
      else {
        local_38 = '\0';
      }
      if ((local_a0 != '\0') && (local_a8 != 0)) {
        uVar8 = FUN_00d50b20();
      }
      if (plVar7 != (longlong *)0x0) {
        local_98 = plVar7;
        local_90 = '\0';
        local_40 = local_78;
        local_38 = '\0';
        FUN_00ca0840(uVar8,&local_40);
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_90 != '\0') && (local_98 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        FUN_00d50b20();
      }
      uVar8 = FUN_00d50b20();
    }
    iVar6 = local_60._4_4_;
  }
  FUN_01de6a30();
  uVar8 = FUN_00d50b20();
  plVar3 = local_50;
  plVar7 = local_48;
LAB_01deb9e0:
  local_80 = '\0';
  local_88 = plVar3;
  FUN_01dcd6e0(uVar8,&local_88);
  if ((local_80 != '\0') && (local_88 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar3 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (plVar7 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return unaff_RDI;
}


