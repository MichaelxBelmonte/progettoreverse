// Function: FUN_00e271f0
// Address: 00e271f0
// Size: 2689 bytes
// Class: GNString
// String references:
//   "GNString"
//   "GNDictionary"
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_00e271f0(uint64_t param_1,int param_2)

{
  int64_t *plVar1;
  int64_t *plVar2;
  int64_t lVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  int64_t *plVar8;
  int64_t *plVar9;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t **pplVar10;
  int64_t lVar11;
  uint32_t uVar12;
  uint32_t extraout_XMM0_Da;
  uint32_t extraout_XMM0_Da_00;
  uint32_t extraout_XMM0_Da_01;
  int64_t local_118;
  char local_110;
  int64_t *local_108;
  char local_100;
  int64_t *local_f8;
  char local_f0;
  int64_t *local_e8;
  char local_e0;
  int64_t local_d8;
  char local_d0;
  int64_t *local_c8;
  char local_c0;
  int64_t *local_a8;
  int64_t *local_60;
  char local_58;
  int64_t local_50;
  uint64_t local_48;
  uint32_t local_40;
  int64_t *local_38;
  
  plVar8 = (int64_t *)FUN_00e8fc40();
  FUN_0004b090();
  uVar12 = (**(code **)(*plVar8 + 0x18))();
  if (param_2 != 0) {
    local_c0 = 0;
    (**(code **)(this_ptr[2] + 0x10))();
    FUN_00d50b00();
    local_c0 = '\x01';
    local_c8 = this_ptr + 2;
    uVar12 = FUN_00d1fc70();
    if ((local_c0 != '\0') && (local_c8 != (int64_t *)0x0)) {
      (**(code **)(*local_c8 + 0x10))();
      uVar12 = FUN_00d50b20();
    }
  }
  local_118 = *arg1;
  local_110 = '\0';
  FUN_00d1b500(uVar12,&local_118);
  local_a8 = local_60;
  if (local_58 == '\0') {
    if (local_60 == (int64_t *)0x0) {
      local_a8 = (int64_t *)0x0;
    }
    else {
      FUN_00d50b00();
      if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    local_a8 = local_60;
    local_58 = '\0';
  }
  if ((local_110 != '\0') && (local_118 != 0)) {
    FUN_00d50b20();
  }
  if (local_a8 == (int64_t *)0x0) goto LAB_00e27940;
  if ((g_026fdd40 == '\0') && (iVar7 = ___cxa_guard_acquire(), iVar7 != 0)) {
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
  (**(code **)(*local_a8 + 0x360))();
  cVar6 = FUN_00e85ea0();
  uVar12 = extraout_XMM0_Da;
  if (cVar6 == '\0') {
LAB_00e27353:
    plVar9 = g_02802688;
    cVar6 = g_02802690;
    if (g_02802690 != '\0') goto LAB_00e273b7;
LAB_00e273c6:
    if (plVar9 != (int64_t *)0x0) goto LAB_00e273cb;
    plVar9 = (int64_t *)FUN_00e8fc40();
    FUN_00022d50();
    uVar12 = (**(code **)(*plVar9 + 0x18))();
    plVar2 = g_02785c30;
    local_108 = local_a8;
    local_100 = '\0';
    if (g_02785c30 != (int64_t *)0x0) {
      uVar12 = FUN_00d50b00();
    }
    local_60 = plVar2;
    local_58 = '\0';
    uVar12 = FUN_00ca0840(uVar12,&local_60);
    if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
      uVar12 = FUN_00d50b20();
    }
    if (plVar2 != (int64_t *)0x0) {
      uVar12 = FUN_00d50b20();
    }
    if ((local_100 != '\0') && (local_108 != (int64_t *)0x0)) {
      uVar12 = FUN_00d50b20();
    }
joined_r0x00e274f3:
    bVar5 = false;
    bVar4 = false;
    plVar2 = g_02785c30;
  }
  else {
    if ((g_026fd0c0 == '\0') && (iVar7 = ___cxa_guard_acquire(), iVar7 != 0)) {
      g_026d5e58 = FUN_00d4fe50();
      g_026d5e40 = "GNString";
      g_026d5e48 = 0x40;
      g_026d5e50 = FUN_0005d920;
      g_026d5e60 = 0;
      ram_00000000026d5e68 = 0;
      g_026d5e70 = 0;
      ram_00000000026d5e78 = 0;
      g_026d5e80 = 0;
      ram_00000000026d5e88 = 0;
      g_026d5e90 = 0;
      ram_00000000026d5e98 = 0;
      g_026d5ea0 = 0;
      ram_00000000026d5ea8 = 0;
      g_026d5eb0 = 0;
      ram_00000000026d5eb8 = 0;
      g_026d5ec0 = 0;
      ram_00000000026d5ec8 = 0;
      g_026d5ed0 = 0;
      ram_00000000026d5ed8 = 0;
      g_026d5ee0 = 0;
      ram_00000000026d5ee8 = 0;
      g_026d5ef0 = 0;
      ram_00000000026d5ef8 = 0;
      g_026d5f00 = 0;
      ___cxa_guard_release();
    }
    cVar6 = FUN_00e8db60();
    uVar12 = extraout_XMM0_Da_00;
    if (cVar6 == '\0') goto LAB_00e27353;
    cVar6 = '\x01';
    plVar9 = local_a8;
LAB_00e273b7:
    if (plVar9 == (int64_t *)0x0) goto LAB_00e273c6;
    uVar12 = FUN_00d50b00();
LAB_00e273cb:
    if (cVar6 != '\0') {
      FUN_00d50b00();
      uVar12 = FUN_00d50b20();
      goto joined_r0x00e274f3;
    }
    bVar5 = true;
    bVar4 = true;
    plVar2 = g_02785c30;
  }
  g_02785c30 = plVar2;
  if (plVar2 != (int64_t *)0x0) {
    uVar12 = FUN_00d50b00();
    bVar4 = bVar5;
  }
  local_f0 = '\x01';
  local_f8 = plVar2;
  FUN_000175c0(uVar12,&local_f8);
  plVar2 = local_60;
  if (local_58 == '\0') {
    if (((local_60 != (int64_t *)0x0) && (FUN_00d50b00(), local_58 != '\0')) &&
       (local_60 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_58 = '\0';
  }
  if ((local_f0 != '\0') && (local_f8 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar2 != (int64_t *)0x0) {
    local_58 = '\0';
    local_60 = plVar2;
    FUN_00d243f0();
    if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  plVar2 = g_027092d0;
  if (g_027092d0 != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  local_60 = plVar2;
  local_58 = '\0';
  cVar6 = FUN_00c9ff50();
  uVar12 = extraout_XMM0_Da_01;
  if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
    uVar12 = FUN_00d50b20();
  }
  if (plVar2 != (int64_t *)0x0) {
    uVar12 = FUN_00d50b20();
  }
  plVar2 = g_027092d0;
  if (cVar6 != '\0') {
    if (g_027092d0 != (int64_t *)0x0) {
      uVar12 = FUN_00d50b00();
    }
    local_e8 = plVar2;
    local_e0 = '\x01';
    FUN_000175c0(uVar12,&local_e8);
    plVar2 = local_60;
    if ((g_026fdd40 == '\0') && (iVar7 = ___cxa_guard_acquire(), iVar7 != 0)) {
      local_38 = plVar9;
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
      plVar9 = local_38;
    }
    pplVar10 = &g_02802688;
    if (plVar2 != (int64_t *)0x0) {
      (**(code **)(*plVar2 + 0x360))();
      cVar6 = FUN_00e85ea0();
      if (cVar6 != '\0') {
        if ((g_026fd0c0 == '\0') && (iVar7 = ___cxa_guard_acquire(), iVar7 != 0)) {
          local_38 = plVar9;
          g_026d5e58 = FUN_00d4fe50();
          g_026d5e40 = "GNString";
          g_026d5e48 = 0x40;
          g_026d5e50 = FUN_0005d920;
          g_026d5e60 = 0;
          ram_00000000026d5e68 = 0;
          g_026d5e70 = 0;
          ram_00000000026d5e78 = 0;
          g_026d5e80 = 0;
          ram_00000000026d5e88 = 0;
          g_026d5e90 = 0;
          ram_00000000026d5e98 = 0;
          g_026d5ea0 = 0;
          ram_00000000026d5ea8 = 0;
          g_026d5eb0 = 0;
          ram_00000000026d5eb8 = 0;
          g_026d5ec0 = 0;
          ram_00000000026d5ec8 = 0;
          g_026d5ed0 = 0;
          ram_00000000026d5ed8 = 0;
          g_026d5ee0 = 0;
          ram_00000000026d5ee8 = 0;
          g_026d5ef0 = 0;
          ram_00000000026d5ef8 = 0;
          g_026d5f00 = 0;
          ___cxa_guard_release();
          plVar9 = local_38;
        }
        cVar6 = FUN_00e8db60();
        pplVar10 = &local_60;
        if (cVar6 == '\0') {
          pplVar10 = &g_02802688;
        }
      }
    }
    plVar1 = (int64_t *)this_ptr[10];
    plVar2 = *pplVar10;
    if (plVar1 != plVar2) {
      if (*(char *)(pplVar10 + 1) == '\0') {
        if (plVar2 == (int64_t *)0x0) {
          this_ptr[10] = 0;
        }
        else {
          FUN_00d50b00();
          plVar1 = (int64_t *)this_ptr[10];
          this_ptr[10] = (int64_t)*pplVar10;
        }
      }
      else {
        *(void*)(pplVar10 + 1) = 0;
        this_ptr[10] = (int64_t)plVar2;
      }
      if (plVar1 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
    }
    if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_e0 != '\0') && (local_e8 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  (**(code **)(*(int64_t *)*arg1 + 0x390))();
  plVar2 = local_60;
  if (local_58 == '\0') {
    if (local_60 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_58 = '\0';
  }
  uVar12 = (**(code **)(*this_ptr + 0x370))();
  if (plVar2 != (int64_t *)0x0) {
    uVar12 = FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
    uVar12 = FUN_00d50b20();
  }
  lVar3 = g_02785c38;
  if (g_02785c38 != 0) {
    uVar12 = FUN_00d50b00();
  }
  local_d8 = lVar3;
  local_d0 = '\x01';
  FUN_000175c0(uVar12,&local_d8);
  plVar2 = local_60;
  if (local_58 == '\0') {
    if (local_60 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_58 = '\0';
  }
  (**(code **)(*this_ptr + 0x460))();
  if (plVar2 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_d0 != '\0') && (local_d8 != 0)) {
    FUN_00d50b20();
  }
  lVar3 = this_ptr[4];
  if (lVar3 != 0) {
    local_58 = '\0';
    local_60 = (int64_t *)0x0;
    local_40 = 0;
    local_48 = 0;
    local_50 = lVar3;
    local_38 = plVar9;
    if (0 < *(int *)(lVar3 + 0xc)) {
      lVar11 = 0;
      do {
        local_60 = *(int64_t **)(*(int64_t *)(lVar3 + 0x10) + lVar11 * 8);
        FUN_00d50b00();
        FUN_00c807c0();
        if (this_ptr != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        lVar11 = lVar11 + 1;
        local_48 = CONCAT44(local_48._4_4_,(int)lVar11);
      } while ((int)lVar11 < *(int *)(lVar3 + 0xc));
    }
    FUN_00e2c740();
    plVar9 = local_38;
  }
  if (!bVar4 && plVar9 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
LAB_00e27940:
  if (local_a8 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (plVar8 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}

