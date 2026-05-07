// Function: FUN_015016a0
// Address: 015016a0
// Size: 1518 bytes
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


void FUN_015016a0(void)

{
  bool bVar1;
  bool bVar2;
  int64_t lVar3;
  int64_t lVar4;
  char cVar5;
  int iVar6;
  int64_t *plVar7;
  int64_t arg1;
  int64_t *this_ptr;
  int64_t **pplVar8;
  int64_t *plVar9;
  uint32_t uVar10;
  uint64_t local_c8;
  int64_t local_c0;
  char local_b8;
  int64_t local_b0;
  char local_a8;
  int64_t local_a0;
  char local_98;
  int64_t *local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  lVar3 = g_027c2518;
  if (*(int64_t *)(arg1 + 0x28) == 0) {
    if (*(int64_t *)(arg1 + 0x20) != 0) {
      if (g_027c2518 != 0) {
        FUN_00d50b00();
      }
      local_c0 = lVar3;
      local_b8 = '\x01';
      FUN_00e8a230(1,&local_c0,0);
      plVar9 = local_90;
      if ((g_026fdd40 == '\0') && (iVar6 = ___cxa_guard_acquire(), iVar6 != 0)) {
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
      pplVar8 = (int64_t **)&g_02802688;
      if (plVar9 != (int64_t *)0x0) {
        (**(code **)(*plVar9 + 0x360))();
        cVar5 = FUN_00e85ea0();
        if (cVar5 != '\0') {
          if ((g_026fd0c0 == '\0') && (iVar6 = ___cxa_guard_acquire(), iVar6 != 0)) {
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
          cVar5 = FUN_00e8db60();
          pplVar8 = &local_90;
          if (cVar5 == '\0') {
            pplVar8 = (int64_t **)&g_02802688;
          }
        }
      }
      plVar9 = *pplVar8;
      if (plVar9 == (int64_t *)0x0) {
        bVar2 = true;
        bVar1 = true;
        plVar9 = (int64_t *)0x0;
      }
      else {
        if (*(char *)(pplVar8 + 1) == '\0') {
          FUN_00d50b00();
        }
        else {
          *(void*)(pplVar8 + 1) = 0;
        }
        bVar2 = false;
        bVar1 = false;
      }
      if ((local_88 != '\0') && (bVar1 = bVar2, local_90 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_b8 != '\0') && (local_c0 != 0)) {
        FUN_00d50b20();
      }
      if (plVar9 != (int64_t *)0x0) {
        *(void*)(this_ptr + 1) = 0;
        if (bVar1) {
          FUN_00d50b00();
          *this_ptr = (int64_t)plVar9;
        }
        else {
          *this_ptr = (int64_t)plVar9;
        }
        goto LAB_01501959;
      }
    }
    lVar3 = g_027c2520;
    if (g_027c2520 != 0) {
      FUN_00d50b00();
    }
    lVar4 = g_027c2528;
    local_b0 = lVar3;
    local_a8 = '\x01';
    if (g_027c2528 != 0) {
      FUN_00d50b00();
    }
    lVar3 = g_027c24e8;
    local_a0 = lVar4;
    local_98 = '\x01';
    if (g_027c24e8 != 0) {
      FUN_00d50b00();
    }
    local_40 = lVar3;
    local_c8 = *(void*)(arg1 + 0x10);
    uVar10 = FUN_00083ea0(2,&local_c8);
    FUN_00e972c0(uVar10,&local_90);
    local_90 = (int64_t *)&g_0253d630;
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    local_90 = &g_024c5048;
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    if ((local_98 != '\0') && (local_a0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_a8 != '\0') && (local_b0 != 0)) {
      FUN_00d50b20();
    }
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
  }
  else {
    plVar7 = (int64_t *)FUN_00e8fc40();
    FUN_00022d50();
    (**(code **)(*plVar7 + 0x18))();
    uVar10 = FUN_00bdfdc0();
    local_60 = local_40;
    local_58 = 0;
    plVar9 = g_027c2508;
    if (local_38 == '\0') {
      if (local_40 != 0) {
        uVar10 = FUN_00d50b00();
        plVar9 = g_027c2508;
      }
    }
    else {
      local_38 = '\0';
    }
    local_58 = '\x01';
    g_027c2508 = plVar9;
    if (plVar9 != (int64_t *)0x0) {
      local_58 = '\x01';
      uVar10 = FUN_00d50b00();
    }
    local_88 = '\0';
    local_90 = plVar9;
    FUN_00ca0840(uVar10,&local_90);
    if ((local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar9 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    uVar10 = FUN_00bdfdf0();
    local_50 = local_40;
    local_48 = 0;
    plVar9 = g_027c2510;
    if (local_38 == '\0') {
      if (local_40 != 0) {
        uVar10 = FUN_00d50b00();
        plVar9 = g_027c2510;
      }
    }
    else {
      local_38 = '\0';
    }
    local_48 = '\x01';
    g_027c2510 = plVar9;
    if (plVar9 != (int64_t *)0x0) {
      local_48 = '\x01';
      uVar10 = FUN_00d50b00();
    }
    local_88 = '\0';
    local_90 = plVar9;
    FUN_00ca0840(uVar10,&local_90);
    if ((local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar9 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    *this_ptr = (int64_t)plVar7;
LAB_01501959:
    *(void*)(this_ptr + 1) = 1;
  }
  return;
}

