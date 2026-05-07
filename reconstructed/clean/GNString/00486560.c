// Function: FUN_00486560
// Address: 00486560
// Size: 3026 bytes
// Class: GNString
// String references:
//   "%@ %@"
//   "GNString"
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_00486560(void)

{
  int64_t *plVar1;
  int64_t *plVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  int64_t *plVar7;
  int64_t *plVar8;
  char cVar9;
  int iVar10;
  int64_t lVar11;
  int64_t *plVar12;
  int64_t **pplVar13;
  int64_t this_ptr;
  uint32_t uVar14;
  uint32_t extraout_XMM0_Da;
  uint32_t extraout_XMM0_Da_00;
  uint32_t extraout_XMM0_Da_01;
  uint32_t extraout_XMM0_Da_02;
  int64_t local_200;
  int64_t local_1f8;
  char local_1f0;
  int64_t local_1e8;
  char local_1e0;
  int64_t local_1d8;
  char local_1d0;
  int64_t local_1c8;
  char local_1c0;
  int64_t local_1b8;
  char local_1b0;
  int64_t *local_1a8;
  char local_1a0;
  int64_t *local_198;
  char local_190;
  int64_t local_188;
  char local_180;
  int64_t local_178;
  char local_170;
  int64_t *local_168;
  char local_160;
  int64_t local_158;
  char local_150;
  int64_t local_148;
  char local_140;
  int64_t local_138;
  char local_130;
  int64_t local_128;
  char local_120;
  int64_t local_108;
  char local_100;
  int local_f0;
  int64_t local_c0;
  char local_b8;
  int64_t local_88;
  char local_80;
  int64_t *local_70;
  int64_t *local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  if (*(int64_t *)(this_ptr + 0x298) == 0) {
    return;
  }
  FUN_01d77960();
  plVar7 = local_60;
  if ((((local_58 == '\0') && (local_60 != (int64_t *)0x0)) && (FUN_00d50b00(), local_58 != '\0'))
     && (local_60 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  uVar14 = FUN_01d5deb0();
  local_1e8 = g_027087e0;
  if (g_027087e0 != 0) {
    uVar14 = FUN_00d50b00();
  }
  local_1e0 = '\x01';
  uVar14 = FUN_01e57260(uVar14,&local_1e8);
  plVar1 = local_60;
  local_1d8 = g_027087e8;
  if (local_58 == '\0') {
    if (local_60 != (int64_t *)0x0) {
      uVar14 = FUN_00d50b00();
      local_1d8 = g_027087e8;
    }
  }
  else {
    local_58 = '\0';
  }
  g_027087e8 = local_1d8;
  if (local_1d8 != 0) {
    uVar14 = FUN_00d50b00();
  }
  local_1d0 = '\x01';
  FUN_01d5d9b0(uVar14,&local_1d8);
  if ((local_1d0 != '\0') && (local_1d8 != 0)) {
    FUN_00d50b20();
  }
  if (plVar1 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_1e0 != '\0') && (local_1e8 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d6f370();
  local_1c8 = g_027087b8;
  if (g_027087b8 != 0) {
    FUN_00d50b00();
  }
  local_1c0 = '\x01';
  local_1b8 = 0;
  local_1b0 = '\0';
  pplVar13 = &local_60;
  uVar14 = FUN_00d704d0(&local_1b8);
  plVar1 = local_60;
  if ((g_026fd0c0 == '\0') &&
     (iVar10 = ___cxa_guard_acquire(), uVar14 = extraout_XMM0_Da_02, iVar10 != 0)) {
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
    uVar14 = ___cxa_guard_release();
  }
  if (plVar1 == (int64_t *)0x0) {
LAB_0048677c:
    pplVar13 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar9 = FUN_00e85ea0();
    uVar14 = extraout_XMM0_Da;
    if (cVar9 == '\0') goto LAB_0048677c;
  }
  plVar1 = *pplVar13;
  if (*(char *)(pplVar13 + 1) == '\0') {
    if (plVar1 != (int64_t *)0x0) {
      uVar14 = FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar13 + 1) = 0;
  }
  if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
    uVar14 = FUN_00d50b20();
  }
  if ((local_1b0 != '\0') && (local_1b8 != 0)) {
    uVar14 = FUN_00d50b20();
  }
  if ((local_1c0 != '\0') && (local_1c8 != 0)) {
    uVar14 = FUN_00d50b20();
  }
  if ((local_100 != '\0') && (local_108 != 0)) {
    uVar14 = FUN_00d50b20();
  }
  bVar3 = true;
  if (plVar1 == (int64_t *)0x0) {
    bVar6 = false;
  }
  else {
    local_1a0 = '\0';
    local_1a8 = plVar1;
    uVar14 = FUN_00cddf30();
    local_70 = local_60;
    if (local_60 == (int64_t *)0x0) {
      local_70 = (int64_t *)0x0;
      bVar6 = false;
    }
    else if (local_58 == '\0') {
      uVar14 = FUN_00d50b00();
      bVar6 = true;
      if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
        uVar14 = FUN_00d50b20();
      }
    }
    else {
      local_58 = '\0';
      bVar6 = true;
    }
    if ((local_1a0 != '\0') && (local_1a8 != (int64_t *)0x0)) {
      uVar14 = FUN_00d50b20();
    }
    if (local_70 != (int64_t *)0x0) {
      cVar9 = (**(code **)(*local_70 + 0x3a0))();
      if (cVar9 == '\0') {
        bVar5 = false;
        bVar4 = false;
        uVar14 = extraout_XMM0_Da_00;
        lVar11 = g_02708800;
        bVar3 = true;
      }
      else {
        uVar14 = (**(code **)(*local_70 + 1000))();
        plVar8 = local_60;
        if (local_60 != (int64_t *)0x0) {
          if (((local_58 == '\0') && (FUN_00d50b00(), local_58 != '\0')) &&
             (local_60 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          local_f0 = -1;
          while( true ) {
            lVar11 = (int64_t)local_f0;
            local_f0 = local_f0 + 1;
            if (*(int *)((int64_t)plVar8 + 0xc) <= local_f0) break;
            plVar2 = *(int64_t **)(plVar8[2] + 8 + lVar11 * 8);
            plVar12 = (int64_t *)FUN_00e8fc40();
            FUN_0004b090();
            uVar14 = (**(code **)(*plVar12 + 0x18))();
            local_190 = '\0';
            local_198 = plVar2;
            FUN_00d1b500(uVar14,&local_198);
            plVar12 = local_60;
            uVar14 = FUN_0049c3f0();
            pplVar13 = (int64_t **)&g_02802688;
            if (plVar12 != (int64_t *)0x0) {
              (**(code **)(*plVar12 + 0x360))();
              cVar9 = FUN_00e85ea0();
              pplVar13 = &local_60;
              uVar14 = extraout_XMM0_Da_01;
              if (cVar9 == '\0') {
                pplVar13 = (int64_t **)&g_02802688;
              }
            }
            plVar12 = *pplVar13;
            if (*(char *)(pplVar13 + 1) == '\0') {
              if (plVar12 != (int64_t *)0x0) {
                uVar14 = FUN_00d50b00();
              }
            }
            else {
              *(void*)(pplVar13 + 1) = 0;
            }
            if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
              uVar14 = FUN_00d50b20();
            }
            if ((local_190 != '\0') && (local_198 != (int64_t *)0x0)) {
              uVar14 = FUN_00d50b20();
            }
            lVar11 = g_027087f0;
            if (plVar12 != (int64_t *)0x0) {
              if (g_027087f0 != 0) {
                uVar14 = FUN_00d50b00();
              }
              local_188 = lVar11;
              local_180 = '\x01';
              FUN_01e57260(uVar14,&local_188);
              (**(code **)(*plVar2 + 0x390))();
              local_200 = local_1f8;
              uVar14 = FUN_00083ea0(2,&local_200);
              uVar14 = FUN_00d8cb40(uVar14,&local_60);
              lVar11 = g_027087f8;
              if (local_80 == '\0') {
                if (local_88 != 0) {
                  uVar14 = FUN_00d50b00();
                  lVar11 = g_027087f8;
                }
              }
              else {
                local_80 = '\0';
              }
              g_027087f8 = lVar11;
              if (lVar11 != 0) {
                uVar14 = FUN_00d50b00();
              }
              local_170 = '\x01';
              local_178 = lVar11;
              FUN_01d5d9b0(uVar14,&local_178);
              if ((local_170 != '\0') && (local_178 != 0)) {
                FUN_00d50b20();
              }
              if (local_88 != 0) {
                FUN_00d50b20();
              }
              if ((local_80 != '\0') && (local_88 != 0)) {
                FUN_00d50b20();
              }
              local_60 = (int64_t *)&g_0253d630;
              if ((local_38 != '\0') && (local_40 != 0)) {
                FUN_00d50b20();
              }
              local_60 = &g_024c5048;
              if ((local_48 != '\0') && (local_50 != 0)) {
                FUN_00d50b20();
              }
              if ((local_1f0 != '\0') && (local_1f8 != 0)) {
                FUN_00d50b20();
              }
              if ((local_b8 != '\0') && (local_c0 != 0)) {
                FUN_00d50b20();
              }
              if ((local_180 != '\0') && (local_188 != 0)) {
                FUN_00d50b20();
              }
              FUN_01d5e230();
              uVar14 = FUN_01d66da0();
              plVar2 = g_027087b0;
              local_160 = '\0';
              local_168 = plVar12;
              if (g_027087b0 != (int64_t *)0x0) {
                uVar14 = FUN_00d50b00();
              }
              local_60 = plVar2;
              local_58 = '\0';
              FUN_00ca0840(uVar14,&local_60);
              if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              if (plVar2 != (int64_t *)0x0) {
                FUN_00d50b20();
              }
              if ((local_160 != '\0') && (local_168 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              if ((local_80 != '\0') && (local_88 != 0)) {
                FUN_00d50b20();
              }
              if ((local_b8 != '\0') && (local_c0 != 0)) {
                FUN_00d50b20();
              }
              FUN_00d50b20();
            }
            FUN_00d50b20();
          }
          uVar14 = FUN_00115910();
          bVar3 = false;
        }
        bVar5 = false;
        bVar4 = false;
        lVar11 = g_02708800;
      }
      goto joined_r0x00486ddc;
    }
  }
  bVar5 = true;
  bVar4 = true;
  lVar11 = g_02708800;
  bVar3 = true;
joined_r0x00486ddc:
  g_02708800 = lVar11;
  if (lVar11 != 0) {
    uVar14 = FUN_00d50b00();
    bVar4 = bVar5;
  }
  local_150 = '\x01';
  local_158 = lVar11;
  uVar14 = FUN_01e57260(uVar14,&local_158);
  plVar8 = local_60;
  local_148 = g_02708808;
  if (local_58 == '\0') {
    if (local_60 != (int64_t *)0x0) {
      uVar14 = FUN_00d50b00();
      local_148 = g_02708808;
    }
  }
  else {
    local_58 = '\0';
  }
  g_02708808 = local_148;
  if (local_148 != 0) {
    uVar14 = FUN_00d50b00();
  }
  local_140 = '\x01';
  uVar14 = FUN_01d5d9b0(uVar14,&local_148);
  if ((local_140 != '\0') && (local_148 != 0)) {
    uVar14 = FUN_00d50b20();
  }
  if (plVar8 != (int64_t *)0x0) {
    uVar14 = FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
    uVar14 = FUN_00d50b20();
  }
  if ((local_150 != '\0') && (local_158 != 0)) {
    uVar14 = FUN_00d50b20();
  }
  lVar11 = g_02708810;
  if (g_02708810 != 0) {
    uVar14 = FUN_00d50b00();
  }
  local_138 = lVar11;
  local_130 = '\x01';
  uVar14 = FUN_01e57260(uVar14,&local_138);
  plVar8 = local_60;
  local_128 = g_02708818;
  if (local_58 == '\0') {
    if (local_60 != (int64_t *)0x0) {
      uVar14 = FUN_00d50b00();
      local_128 = g_02708818;
    }
  }
  else {
    local_58 = '\0';
  }
  g_02708818 = local_128;
  if (local_128 != 0) {
    uVar14 = FUN_00d50b00();
  }
  local_120 = '\x01';
  FUN_01d5d9b0(uVar14,&local_128);
  if ((local_120 != '\0') && (local_128 != 0)) {
    FUN_00d50b20();
  }
  if (plVar8 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_130 != '\0') && (local_138 != 0)) {
    FUN_00d50b20();
  }
  if (!bVar3) {
    FUN_00d50b20();
  }
  if (bVar6 && !bVar4) {
    FUN_00d50b20();
  }
  if (plVar1 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (plVar7 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}

