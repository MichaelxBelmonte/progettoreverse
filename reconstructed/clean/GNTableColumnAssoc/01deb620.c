// Function: FUN_01deb620
// Address: 01deb620
// Size: 1019 bytes
// Class: GNTableColumnAssoc
// String references:
//   "GNTableColumnAssoc"

uint64_t FUN_01deb620(void)

{
  int64_t *plVar1;
  char cVar2;
  int64_t *plVar3;
  int64_t lVar4;
  int64_t **pplVar5;
  int iVar6;
  uint64_t this_ptr;
  int64_t *plVar7;
  uint32_t uVar8;
  uint32_t extraout_XMM0_Da;
  uint32_t extraout_XMM0_Da_00;
  int64_t local_a8;
  char local_a0;
  int64_t *local_98;
  char local_90;
  int64_t *local_88;
  char local_80;
  int64_t *local_78;
  char local_70;
  int64_t *local_68;
  uint64_t local_60;
  int local_58;
  int64_t *local_50;
  int64_t *local_48;
  int64_t *local_40;
  char local_38;
  
  FUN_01ccad60();
  plVar7 = local_78;
  if ((((local_70 == '\0') && (local_78 != (int64_t *)0x0)) && (FUN_00d50b00(), local_70 != '\0'))
     && (local_78 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  plVar3 = (int64_t *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar3 + 0x18))();
  uVar8 = FUN_01dcd4e0();
  plVar1 = local_78;
  if (local_70 == '\0') {
    if (local_78 == (int64_t *)0x0) goto LAB_01deb9e0;
    uVar8 = FUN_00d50b00();
    if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
      uVar8 = FUN_00d50b20();
    }
  }
  else if (local_78 == (int64_t *)0x0) goto LAB_01deb9e0;
  local_48 = plVar7;
  local_70 = '\0';
  local_78 = (int64_t *)0x0;
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
    lVar4 = (int64_t)(int)local_60;
    iVar6 = (int)local_60 + 1;
    local_60 = CONCAT44(local_60._4_4_,iVar6);
    if (*(int *)((int64_t)local_68 + 0xc) <= iVar6) break;
    local_78 = *(int64_t **)(local_68[2] + 8 + lVar4 * 8);
    uVar8 = FUN_01db9a80();
    plVar7 = local_40;
    if ((g_026f20e8 == '\0') &&
       (iVar6 = ___cxa_guard_acquire(), uVar8 = extraout_XMM0_Da_00, iVar6 != 0)) {
      g_026f2038 = FUN_001ba850();
      g_026f2020 = "GNTableColumnAssoc";
      g_026f2028 = 0x58;
      g_026f2030 = FUN_001f28d0;
      g_026f2040 = 0;
      ram_00000000026f2048 = 0;
      g_026f2050 = 0;
      ram_00000000026f2058 = 0;
      g_026f2060 = 0;
      ram_00000000026f2068 = 0;
      g_026f2070 = 0;
      ram_00000000026f2078 = 0;
      g_026f2080 = 0;
      ram_00000000026f2088 = 0;
      g_026f2090 = 0;
      ram_00000000026f2098 = 0;
      g_026f20a0 = 0;
      ram_00000000026f20a8 = 0;
      g_026f20b0 = 0;
      ram_00000000026f20b8 = 0;
      g_026f20c0 = 0;
      ram_00000000026f20c8 = 0;
      g_026f20d0 = 0;
      ram_00000000026f20d8 = 0;
      g_026f20e0 = 0;
      uVar8 = ___cxa_guard_release();
    }
    pplVar5 = (int64_t **)&g_02802688;
    if (plVar7 != (int64_t *)0x0) {
      (**(code **)(*plVar7 + 0x360))();
      cVar2 = FUN_00e85ea0();
      pplVar5 = &local_40;
      uVar8 = extraout_XMM0_Da;
      if (cVar2 == '\0') {
        pplVar5 = (int64_t **)&g_02802688;
      }
    }
    plVar7 = *pplVar5;
    if (*(char *)(pplVar5 + 1) == '\0') {
      if (plVar7 != (int64_t *)0x0) {
        uVar8 = FUN_00d50b00();
      }
    }
    else {
      *(void*)(pplVar5 + 1) = 0;
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      uVar8 = FUN_00d50b20();
    }
    lVar4 = g_027e7c20;
    if (plVar7 != (int64_t *)0x0) {
      if (g_027e7c20 != 0) {
        uVar8 = FUN_00d50b00();
      }
      local_a8 = lVar4;
      local_a0 = '\x01';
      uVar8 = FUN_01ccab60(uVar8,&local_a8);
      plVar7 = local_40;
      if (local_38 == '\0') {
        if (((local_40 != (int64_t *)0x0) && (uVar8 = FUN_00d50b00(), local_38 != '\0')) &&
           (local_40 != (int64_t *)0x0)) {
          uVar8 = FUN_00d50b20();
        }
      }
      else {
        local_38 = '\0';
      }
      if ((local_a0 != '\0') && (local_a8 != 0)) {
        uVar8 = FUN_00d50b20();
      }
      if (plVar7 != (int64_t *)0x0) {
        local_98 = plVar7;
        local_90 = '\0';
        local_40 = local_78;
        local_38 = '\0';
        FUN_00ca0840(uVar8,&local_40);
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_90 != '\0') && (local_98 != (int64_t *)0x0)) {
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
  if ((local_80 != '\0') && (local_88 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar3 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (plVar7 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return this_ptr;
}

