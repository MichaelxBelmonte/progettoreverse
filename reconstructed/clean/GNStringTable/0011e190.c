// Function: FUN_0011e190
// Address: 0011e190
// Size: 1589 bytes
// Class: GNStringTable
// String references:
//   "GNStringTable"
//   "MDExportAudioController"

void FUN_0011e190(void)

{
  int64_t *plVar1;
  int64_t *plVar2;
  char cVar3;
  int iVar4;
  int64_t lVar5;
  int64_t **pplVar6;
  int iVar7;
  int64_t this_ptr;
  int64_t *plVar8;
  uint32_t uVar9;
  int64_t local_c8;
  char local_c0;
  int64_t local_b8;
  char local_b0;
  int local_a4;
  int64_t local_a0;
  char local_98;
  int64_t local_90;
  char local_88;
  int64_t *local_80;
  int64_t local_78;
  char local_70;
  int64_t local_68;
  char local_60;
  int64_t *local_58;
  char local_50;
  int64_t local_48;
  uint64_t local_40;
  int local_38;
  
  FUN_01e534b0();
  lVar5 = g_026e1850;
  if (g_026e1850 != 0) {
    FUN_00d50b00();
  }
  pplVar6 = &local_58;
  FUN_01e57490();
  plVar8 = local_58;
  if ((g_026d6328 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
    g_026d6278 = FUN_00d4fe50();
    g_026d6260 = "GNStringTable";
    g_026d6268 = 0x28;
    g_026d6270 = FUN_0005eaf0;
    g_026d6280 = 0;
    ram_00000000026d6288 = 0;
    g_026d6290 = 0;
    ram_00000000026d6298 = 0;
    g_026d62a0 = 0;
    ram_00000000026d62a8 = 0;
    g_026d62b0 = 0;
    ram_00000000026d62b8 = 0;
    g_026d62c0 = 0;
    ram_00000000026d62c8 = 0;
    g_026d62d0 = 0;
    ram_00000000026d62d8 = 0;
    g_026d62e0 = 0;
    ram_00000000026d62e8 = 0;
    g_026d62f0 = 0;
    ram_00000000026d62f8 = 0;
    g_026d6300 = 0;
    ram_00000000026d6308 = 0;
    g_026d6310 = 0;
    ram_00000000026d6318 = 0;
    g_026d6320 = 0;
    ___cxa_guard_release();
  }
  if (plVar8 == (int64_t *)0x0) {
LAB_0011e21a:
    pplVar6 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar8 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 == '\0') goto LAB_0011e21a;
  }
  plVar8 = *pplVar6;
  if (*(char *)(pplVar6 + 1) == '\0') {
    if (plVar8 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar6 + 1) = 0;
  }
  if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (lVar5 != 0) {
    FUN_00d50b20();
  }
  local_80 = plVar8;
  local_a4 = FUN_004bb140();
  FUN_01d6f8d0();
  if (*(int64_t *)(this_ptr + 0x150) == 0) {
    iVar4 = 0;
  }
  else {
    local_50 = '\0';
    local_58 = (int64_t *)0x0;
    local_40 = 0xffffffff;
    local_38 = 0;
    local_40._4_4_ = 0;
    iVar4 = 0;
    local_48 = *(int64_t *)(this_ptr + 0x150);
    while( true ) {
      if (local_40._4_4_ != 0) {
        if (local_40._4_4_ < 1) {
          iVar7 = -local_40._4_4_;
        }
        else {
          iVar7 = (int)local_40 - local_40._4_4_;
          local_40 = CONCAT44(local_40._4_4_,iVar7);
          FUN_00d23690();
          local_38 = local_38 + local_40._4_4_;
          iVar7 = 0;
        }
        local_40 = CONCAT44(iVar7,(int)local_40);
      }
      lVar5 = (int64_t)(int)local_40;
      iVar7 = (int)local_40 + 1;
      local_40 = CONCAT44(local_40._4_4_,iVar7);
      if (*(int *)(local_48 + 0xc) <= iVar7) break;
      local_58 = *(int64_t **)(*(int64_t *)(local_48 + 0x10) + 8 + lVar5 * 8);
      iVar7 = FUN_003b9070();
      if (iVar7 == local_a4) {
        iVar4 = local_38 + (int)local_40;
      }
      uVar9 = FUN_003b90c0();
      local_68 = local_90;
      local_60 = 0;
      if (local_88 == '\0') {
        if (local_90 != 0) {
          uVar9 = FUN_00d50b00();
        }
      }
      else {
        local_88 = '\0';
      }
      local_60 = '\x01';
      FUN_00e427c0(uVar9,&local_68);
      local_78 = local_a0;
      local_70 = 0;
      if (local_98 == '\0') {
        if (local_a0 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_98 = '\0';
      }
      local_70 = '\x01';
      FUN_01d6f990();
      if ((local_70 != '\0') && (local_78 != 0)) {
        FUN_00d50b20();
      }
      if ((local_98 != '\0') && (local_a0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
      if ((local_88 != '\0') && (local_90 != 0)) {
        FUN_00d50b20();
      }
    }
    FUN_00136ae0();
  }
  uVar9 = FUN_00d6f370();
  lVar5 = g_026e1858;
  if (g_026e1858 != 0) {
    uVar9 = FUN_00d50b00();
  }
  FUN_00d708a0(uVar9,iVar4);
  FUN_01d6ed40();
  plVar8 = local_80;
  if (lVar5 != 0) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  lVar5 = g_026e1860;
  if (g_026e1860 != 0) {
    FUN_00d50b00();
  }
  local_c8 = 0;
  local_c0 = '\0';
  local_b8 = 0;
  local_b0 = '\0';
  pplVar6 = &local_58;
  FUN_01e4fcf0(&local_b8,&local_c8);
  plVar2 = local_58;
  if ((g_026e2658 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
    g_026e25a8 = FUN_00015ff0();
    g_026e2590 = "MDExportAudioController";
    g_026e2598 = 0xf0;
    g_026e25a0 = FUN_00130570;
    g_026e25b0 = 0;
    ram_00000000026e25b8 = 0;
    g_026e25c0 = 0;
    g_026e2638 = 0;
    ram_00000000026e2640 = 0;
    g_026e2648 = 0;
    g_026e264a = 1;
    g_026e25c8 = 0;
    ram_00000000026e25d0 = 0;
    g_026e25d8 = 0;
    ram_00000000026e25e0 = 0;
    g_026e25e8 = 0;
    ram_00000000026e25f0 = 0;
    g_026e25f8 = 0;
    ram_00000000026e2600 = 0;
    g_026e2608 = 0;
    ram_00000000026e2610 = 0;
    g_026e2618 = 0;
    ram_00000000026e2620 = 0;
    g_026e2628 = 0;
    ram_00000000026e2630 = 0;
    g_026e2653 = 0;
    g_026e264b = 0;
    ___cxa_guard_release();
    plVar8 = local_80;
  }
  if (plVar2 != (int64_t *)0x0) {
    (**(code **)(*plVar2 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 != '\0') goto LAB_0011e580;
  }
  pplVar6 = (int64_t **)&g_02802688;
LAB_0011e580:
  plVar1 = *(int64_t **)(this_ptr + 0xb8);
  plVar2 = *pplVar6;
  if (plVar1 != plVar2) {
    if (*(char *)(pplVar6 + 1) == '\0') {
      if (plVar2 == (int64_t *)0x0) {
        *(void*)(this_ptr + 0xb8) = 0;
      }
      else {
        FUN_00d50b00();
        plVar1 = *(int64_t **)(this_ptr + 0xb8);
        *(int64_t **)(this_ptr + 0xb8) = *pplVar6;
      }
    }
    else {
      *(void*)(pplVar6 + 1) = 0;
      *(int64_t **)(this_ptr + 0xb8) = plVar2;
    }
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_b0 != '\0') && (local_b8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_c0 != '\0') && (local_c8 != 0)) {
    FUN_00d50b20();
  }
  if (lVar5 != 0) {
    FUN_00d50b20();
  }
  if (plVar8 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}

