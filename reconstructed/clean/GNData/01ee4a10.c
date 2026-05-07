// Function: FUN_01ee4a10
// Address: 01ee4a10
// Size: 1396 bytes
// Class: GNData
// String references:
//   "GNData"
//   "GNDictionary"
// === GNData properties ===
//   double          _firstSpectrumTime
//   double          _spectraTimeDistance


void FUN_01ee4a10(void)

{
  bool bVar1;
  bool bVar2;
  int64_t lVar3;
  char cVar4;
  int iVar5;
  uint64_t uVar6;
  int64_t **pplVar7;
  int64_t *plVar8;
  int64_t *plVar9;
  int64_t this_ptr;
  uint32_t extraout_XMM0_Da;
  uint32_t extraout_XMM0_Da_00;
  uint32_t uVar10;
  int64_t local_e0;
  char local_d8;
  int64_t local_d0;
  char local_c8;
  int64_t local_b0;
  char local_a8;
  int64_t *local_a0;
  char local_98;
  int64_t *local_90;
  char local_88;
  int64_t *local_80;
  char local_78;
  int64_t *local_70;
  char local_68;
  uint64_t local_60;
  int64_t *local_58;
  int64_t *local_50;
  char local_48;
  int64_t *local_40;
  char local_38;
  
  local_48 = '\0';
  local_50 = (int64_t *)0x0;
  uVar6 = FUN_00ca94c0();
  plVar9 = local_40;
  uVar10 = extraout_XMM0_Da;
  if (local_40 == (int64_t *)0x0) {
    bVar1 = true;
    plVar9 = (int64_t *)0x0;
    local_60 = 0;
  }
  else {
    if (local_38 == '\0') {
      uVar6 = FUN_00d50b00();
      bVar1 = false;
      local_60 = CONCAT71((int7)((uint64_t)uVar6 >> 8),1);
      uVar10 = extraout_XMM0_Da_00;
      if ((local_38 == '\0') || (local_40 == (int64_t *)0x0)) goto LAB_01ee4aa4;
      uVar10 = FUN_00d50b20();
    }
    else {
      local_38 = '\0';
      local_60 = CONCAT71((int7)((uint64_t)uVar6 >> 8),1);
    }
    bVar1 = false;
  }
LAB_01ee4aa4:
  lVar3 = g_027648d0;
  local_58 = plVar9;
  if (g_027648d0 != 0) {
    uVar10 = FUN_00d50b00();
  }
  local_b0 = lVar3;
  local_a8 = '\x01';
  FUN_000175c0(uVar10,&local_b0);
  plVar9 = local_40;
  if (local_40 == (int64_t *)0x0) {
    plVar9 = (int64_t *)0x0;
  }
  else if (local_38 == '\0') {
    FUN_00d50b00();
    local_50 = plVar9;
    local_48 = '\x01';
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_50 = local_40;
    local_48 = '\x01';
    local_38 = '\0';
  }
  if ((local_a8 != '\0') && (local_b0 != 0)) {
    FUN_00d50b20();
  }
  if ((g_026d0220 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
    g_02789148 = FUN_00d4fe50();
    g_02789130 = "GNData";
    g_02789138 = 0x28;
    g_02789140 = FUN_000378a0;
    g_02789150 = 0;
    ram_0000000002789158 = 0;
    g_02789160 = 0;
    ram_0000000002789168 = 0;
    g_02789170 = 0;
    ram_0000000002789178 = 0;
    g_02789180 = 0;
    ram_0000000002789188 = 0;
    g_02789190 = 0;
    ram_0000000002789198 = 0;
    g_027891a0 = 0;
    ram_00000000027891a8 = 0;
    g_027891b0 = 0;
    ram_00000000027891b8 = 0;
    g_027891c0 = 0;
    ram_00000000027891c8 = 0;
    g_027891d0 = 0;
    ram_00000000027891d8 = 0;
    g_027891e0 = 0;
    ram_00000000027891e8 = 0;
    g_027891f0 = 0;
    ___cxa_guard_release();
  }
  if (plVar9 == (int64_t *)0x0) {
LAB_01ee4b8d:
    pplVar7 = &g_02802688;
    plVar9 = g_02802688;
    if (g_02802688 != (int64_t *)0x0) goto LAB_01ee4ba0;
LAB_01ee4c9e:
    plVar9 = local_50;
    if ((g_026fdd40 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
      g_026cd0e8 = FUN_00d4fe50();
      g_026cd0d0 = "GNDictionary";
      g_026cd0d8 = 0x28;
      g_026cd0e0 = FUN_00022d20;
      g_026cd0f0 = 0;
      ram_00000000026cd0f8 = 0;
      g_026cd100 = 0;
      g_026cd178 = 0;
      ram_00000000026cd180 = 0;
      g_026cd188 = 0;
      g_026cd18a = 6;
      g_026cd108 = 0;
      ram_00000000026cd110 = 0;
      g_026cd118 = 0;
      ram_00000000026cd120 = 0;
      g_026cd128 = 0;
      ram_00000000026cd130 = 0;
      g_026cd138 = 0;
      ram_00000000026cd140 = 0;
      g_026cd148 = 0;
      ram_00000000026cd150 = 0;
      g_026cd158 = 0;
      ram_00000000026cd160 = 0;
      g_026cd168 = 0;
      ram_00000000026cd170 = 0;
      g_026cd193 = 0;
      g_026cd18b = 0;
      ___cxa_guard_release();
    }
    if (plVar9 != (int64_t *)0x0) {
      (**(code **)(*plVar9 + 0x360))();
      cVar4 = FUN_00e85ea0();
      if (cVar4 == '\0') goto LAB_01ee4cd8;
      if (local_50 != (int64_t *)0x0) goto LAB_01ee4ce9;
LAB_01ee4e07:
      bVar2 = true;
      plVar8 = (int64_t *)0x0;
      goto joined_r0x01ee4e10;
    }
LAB_01ee4cd8:
    if (g_02802688 == (int64_t *)0x0) goto LAB_01ee4e07;
LAB_01ee4ce9:
    plVar8 = (int64_t *)FUN_00e8fc40();
    FUN_0004b090();
    (**(code **)(*plVar8 + 0x18))();
    local_68 = 0;
    (**(code **)(*(int64_t *)(this_ptr + 0x38) + 0x10))();
    FUN_00d50b00();
    local_68 = '\x01';
    local_70 = (int64_t *)(this_ptr + 0x38);
    uVar10 = FUN_00d1fc70();
    if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
      (**(code **)(*local_70 + 0x10))();
      uVar10 = FUN_00d50b20();
    }
    local_90 = local_50;
    local_88 = '\0';
    FUN_00d18390(uVar10,&local_90);
    if ((local_c8 != '\0') && (local_d0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    (**(code **)(*plVar9 + 0x360))();
    cVar4 = FUN_00e85ea0();
    if (cVar4 == '\0') goto LAB_01ee4b8d;
    pplVar7 = &local_50;
    plVar9 = local_50;
    if (local_50 == (int64_t *)0x0) goto LAB_01ee4c9e;
LAB_01ee4ba0:
    cVar4 = *(char *)(pplVar7 + 1);
    if (cVar4 != '\0') {
      FUN_00d50b00();
    }
    plVar8 = (int64_t *)FUN_00e8fc40();
    FUN_0004b090();
    (**(code **)(*plVar8 + 0x18))();
    local_78 = 0;
    (**(code **)(*(int64_t *)(this_ptr + 0x38) + 0x10))();
    FUN_00d50b00();
    local_78 = '\x01';
    local_80 = (int64_t *)(this_ptr + 0x38);
    uVar10 = FUN_00d1fc70();
    if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
      (**(code **)(*local_80 + 0x10))();
      uVar10 = FUN_00d50b20();
    }
    local_98 = '\0';
    local_a0 = plVar9;
    (**(code **)(*plVar8 + 0x5f8))(uVar10,&local_a0);
    if ((local_d8 != '\0') && (local_e0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_98 != '\0') && (local_a0 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (cVar4 != '\0') {
      FUN_00d50b20();
    }
  }
  bVar2 = false;
joined_r0x01ee4e10:
  if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (!bVar1 && local_58 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (!bVar2 && plVar8 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}

