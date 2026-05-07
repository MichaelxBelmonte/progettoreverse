// Function: FUN_01800c00
// Address: 01800c00
// Size: 5553 bytes
// Class: GNList
// String references:
//   "GNList"
//   "GNString"
//   "GNDictionary"
// === GNList properties ===
//   GNInt           _archiveVersion
//   bool            _awakesObjectsAfterDecoding
//   bool            _isCancelled
//   GNInt           _currentObjectGraphIdx
//   GNInt           _predictedDecodedValuesIndex


void* FUN_01800c00(void)

{
  int64_t *plVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  uint8_t uVar5;
  void*puVar6;
  int64_t *plVar7;
  int64_t lVar8;
  uint64_t uVar9;
  int iVar10;
  int64_t *plVar11;
  int64_t *arg1;
  void*this_ptr;
  uint uVar12;
  int64_t *unaff_R13;
  undefined7 uVar13;
  int64_t **pplVar14;
  bool bVar15;
  uint32_t uVar16;
  uint32_t extraout_XMM0_Da;
  uint32_t extraout_XMM0_Da_00;
  uint32_t extraout_XMM0_Da_01;
  uint32_t extraout_XMM0_Da_02;
  uint32_t extraout_XMM0_Da_03;
  uint32_t extraout_XMM0_Da_04;
  uint32_t extraout_XMM0_Da_05;
  uint32_t extraout_XMM0_Da_06;
  uint32_t extraout_XMM0_Da_07;
  uint32_t extraout_XMM0_Da_08;
  uint32_t extraout_XMM0_Da_09;
  uint32_t extraout_XMM0_Da_10;
  uint32_t extraout_XMM0_Da_11;
  uint32_t extraout_XMM0_Da_12;
  uint32_t extraout_XMM0_Da_13;
  uint32_t extraout_XMM0_Da_14;
  uint32_t extraout_XMM0_Da_15;
  uint32_t extraout_XMM0_Da_16;
  uint32_t extraout_XMM0_Da_17;
  uint32_t extraout_XMM0_Da_18;
  uint32_t extraout_XMM0_Da_19;
  uint32_t extraout_XMM0_Da_20;
  uint32_t extraout_XMM0_Da_21;
  uint32_t extraout_XMM0_Da_22;
  uint32_t extraout_XMM0_Da_23;
  int64_t local_1c8;
  char local_1c0;
  int64_t local_1a8;
  char local_1a0;
  int64_t local_198;
  char local_190;
  int64_t *local_188;
  char local_180;
  int64_t local_178;
  char local_170;
  int64_t local_158;
  char local_150;
  int64_t local_148;
  char local_140;
  int64_t local_138;
  char local_130;
  int64_t local_128;
  char local_120;
  int64_t local_118;
  char local_110;
  int64_t local_108;
  char local_100;
  int64_t local_f8;
  char local_f0;
  int64_t local_e8;
  char local_e0;
  int64_t local_d8;
  char local_d0;
  int64_t *local_70;
  char local_68;
  int64_t *local_60;
  uint64_t local_58;
  int local_50;
  int64_t *local_48;
  char local_40;
  uint64_t local_38;
  
  puVar6 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar6 = &g_02572358;
  (*g_02572370)();
  lVar8 = g_027d5148;
  if (*arg1 == 0) {
    *this_ptr = puVar6;
    *(void*)(this_ptr + 1) = 1;
    return this_ptr;
  }
  if (g_027d5148 != 0) {
    FUN_00d50b00();
  }
  uVar16 = FUN_000175c0();
  plVar1 = local_70;
  if ((g_027048b0 == '\0') &&
     (iVar10 = ___cxa_guard_acquire(), uVar16 = extraout_XMM0_Da_18, iVar10 != 0)) {
    g_026cd478 = FUN_00d4fe50();
    g_026cd460 = "GNList";
    g_026cd468 = 0x20;
    g_026cd470 = FUN_00018210;
    g_026cd480 = 0;
    ram_00000000026cd488 = 0;
    g_026cd490 = 0;
    g_026cd508 = 0;
    ram_00000000026cd510 = 0;
    g_026cd518 = 0;
    g_026cd51a = 6;
    g_026cd498 = 0;
    ram_00000000026cd4a0 = 0;
    g_026cd4a8 = 0;
    ram_00000000026cd4b0 = 0;
    g_026cd4b8 = 0;
    ram_00000000026cd4c0 = 0;
    g_026cd4c8 = 0;
    ram_00000000026cd4d0 = 0;
    g_026cd4d8 = 0;
    ram_00000000026cd4e0 = 0;
    g_026cd4e8 = 0;
    ram_00000000026cd4f0 = 0;
    g_026cd4f8 = 0;
    ram_00000000026cd500 = 0;
    g_026cd523 = 0;
    g_026cd51b = 0;
    uVar16 = ___cxa_guard_release();
  }
  pplVar14 = &g_02802688;
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x360))();
    cVar4 = FUN_00e85ea0();
    uVar16 = extraout_XMM0_Da;
    if (cVar4 != '\0') {
      if ((g_026fdd40 == '\0') && (iVar10 = ___cxa_guard_acquire(), iVar10 != 0)) {
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
      cVar4 = FUN_00e8da30();
      pplVar14 = &local_70;
      uVar16 = extraout_XMM0_Da_00;
      if (cVar4 == '\0') {
        pplVar14 = &g_02802688;
      }
    }
  }
  plVar1 = *pplVar14;
  if (*(char *)(pplVar14 + 1) == '\0') {
    if (plVar1 != (int64_t *)0x0) {
      uVar16 = FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar14 + 1) = 0;
  }
  if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
    uVar16 = FUN_00d50b20();
  }
  if (lVar8 != 0) {
    uVar16 = FUN_00d50b20();
  }
  if (plVar1 != (int64_t *)0x0) {
    local_68 = '\0';
    local_70 = (int64_t *)0x0;
    local_58 = 0xffffffff;
    local_50 = 0;
    local_38 = g_025908a0;
    local_60 = plVar1;
    while( true ) {
      lVar8 = (int64_t)(int)local_58;
      iVar10 = (int)local_58 + 1;
      local_58 = CONCAT44(local_58._4_4_,iVar10);
      if (*(int *)((int64_t)local_60 + 0xc) <= iVar10) break;
      local_70 = *(int64_t **)(local_60[2] + 8 + lVar8 * 8);
      plVar7 = (int64_t *)FUN_00e8fc40();
      FUN_00d4ff40();
      *plVar7 = (int64_t)&g_02608800;
      *(void*)((int64_t)plVar7 + 0xc) = 0;
      *(void*)(plVar7 + 2) = 0;
      *(void*)((int64_t)plVar7 + 0x14) = 0;
      uVar16 = FUN_00d500e0();
      plVar11 = local_70;
      lVar8 = g_027d5138;
      if (g_027d5138 != 0) {
        uVar16 = FUN_00d50b00();
      }
      local_1a8 = lVar8;
      local_1a0 = '\x01';
      (**(code **)(*plVar11 + 0x88))(uVar16,&local_1a8);
      plVar11 = local_48;
      if (local_40 == '\0') {
        if (local_48 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_40 = '\0';
      }
      uVar5 = FUN_00c70bc0();
      *(void*)(plVar7 + 2) = uVar5;
      uVar16 = extraout_XMM0_Da_01;
      if (plVar11 != (int64_t *)0x0) {
        uVar16 = FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
        uVar16 = FUN_00d50b20();
      }
      if ((local_1a0 != '\0') && (local_1a8 != 0)) {
        uVar16 = FUN_00d50b20();
      }
      plVar11 = local_70;
      lVar8 = g_027d5140;
      if (g_027d5140 != 0) {
        uVar16 = FUN_00d50b00();
      }
      local_198 = lVar8;
      local_190 = '\x01';
      (**(code **)(*plVar11 + 0x88))(uVar16,&local_198);
      plVar11 = local_48;
      if (local_40 == '\0') {
        if (local_48 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_40 = '\0';
      }
      uVar16 = FUN_00c71d60();
      *(void*)((int64_t)plVar7 + 0x14) = uVar16;
      if (plVar11 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_190 != '\0') && (local_198 != 0)) {
        FUN_00d50b20();
      }
      uVar16 = FUN_018003e0();
      plVar11 = local_70;
      lVar8 = g_027d5130;
      if (g_027d5130 != 0) {
        uVar16 = FUN_00d50b00();
      }
      local_178 = lVar8;
      local_170 = '\x01';
      (**(code **)(*plVar11 + 0x88))(uVar16,&local_178);
      plVar11 = local_188;
      if ((g_026fd0c0 == '\0') && (iVar10 = ___cxa_guard_acquire(), iVar10 != 0)) {
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
      pplVar14 = &g_02802688;
      if (plVar11 != (int64_t *)0x0) {
        (**(code **)(*plVar11 + 0x360))();
        cVar4 = FUN_00e85ea0();
        pplVar14 = &local_188;
        if (cVar4 == '\0') {
          pplVar14 = &g_02802688;
        }
      }
      unaff_R13 = *pplVar14;
      if (*(char *)(pplVar14 + 1) == '\0') {
        if (unaff_R13 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        *(void*)(pplVar14 + 1) = 0;
      }
      local_40 = '\0';
      local_48 = unaff_R13;
      iVar10 = FUN_00d237a0();
      if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (unaff_R13 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if ((local_180 != '\0') && (local_188 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_170 != '\0') && (local_178 != 0)) {
        FUN_00d50b20();
      }
      if ((local_1c0 != '\0') && (local_1c8 != 0)) {
        FUN_00d50b20();
      }
      if (iVar10 == -1) {
        FUN_00d50b20();
      }
      else {
        *(int *)((int64_t)plVar7 + 0xc) = iVar10;
        local_40 = '\0';
        local_48 = plVar7;
        FUN_00d21140();
        if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        FUN_00d50b20();
      }
      if (local_58._4_4_ != 0) {
        if (local_58._4_4_ < 1) {
          iVar10 = -local_58._4_4_;
        }
        else {
          local_58 = CONCAT44(local_58._4_4_,(int)local_58 - local_58._4_4_);
          FUN_00d23690();
          local_50 = local_50 + local_58._4_4_;
          iVar10 = 0;
        }
        local_58 = CONCAT44(iVar10,(int)local_58);
      }
    }
    uVar16 = FUN_015ac3a0();
  }
  lVar8 = g_027d5160;
  if (g_027d5160 != 0) {
    uVar16 = FUN_00d50b00();
  }
  local_158 = lVar8;
  local_150 = '\x01';
  uVar9 = FUN_000175c0(uVar16,&local_158);
  plVar11 = local_70;
  uVar9 = CONCAT71((int7)((uint64_t)uVar9 >> 8),g_026fdd40);
  uVar16 = extraout_XMM0_Da_02;
  if ((g_026fdd40 == '\0') &&
     (uVar9 = ___cxa_guard_acquire(), uVar16 = extraout_XMM0_Da_19, (int)uVar9 != 0)) {
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
    uVar9 = ___cxa_guard_release();
    uVar16 = extraout_XMM0_Da_20;
  }
  pplVar14 = &g_02802688;
  if (plVar11 != (int64_t *)0x0) {
    (**(code **)(*plVar11 + 0x360))();
    uVar9 = FUN_00e85ea0();
    uVar16 = extraout_XMM0_Da_03;
    if ((char)uVar9 != '\0') {
      if ((g_026fd0c0 == '\0') && (iVar10 = ___cxa_guard_acquire(), iVar10 != 0)) {
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
      uVar9 = FUN_00e8db60();
      pplVar14 = &local_70;
      uVar16 = extraout_XMM0_Da_04;
      if ((char)uVar9 == '\0') {
        pplVar14 = &g_02802688;
      }
    }
  }
  plVar11 = *pplVar14;
  if (plVar11 == (int64_t *)0x0) {
    bVar3 = 1;
    uVar13 = 0;
    bVar2 = 0;
    local_38 = 0;
    plVar11 = (int64_t *)0x0;
  }
  else {
    if (*(char *)(pplVar14 + 1) == '\0') {
      uVar9 = FUN_00d50b00();
      uVar16 = extraout_XMM0_Da_05;
    }
    else {
      *(void*)(pplVar14 + 1) = 0;
    }
    uVar13 = (undefined7)((uint64_t)unaff_R13 >> 8);
    bVar2 = 1;
    bVar3 = 0;
    local_38 = CONCAT71((int7)((uint64_t)uVar9 >> 8),1);
  }
  if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
    uVar16 = FUN_00d50b20();
  }
  if ((local_150 != '\0') && (local_158 != 0)) {
    uVar16 = FUN_00d50b20();
  }
  lVar8 = g_027d5150;
  if (plVar11 != (int64_t *)0x0) {
    if (g_027d5150 != 0) {
      uVar16 = FUN_00d50b00();
    }
    local_148 = lVar8;
    local_140 = '\x01';
    pplVar14 = &local_70;
    FUN_000175c0(uVar16,&local_148);
    plVar7 = local_70;
    uVar16 = FUN_00053ac0();
    if (plVar7 == (int64_t *)0x0) {
LAB_01801732:
      pplVar14 = &g_02802688;
    }
    else {
      (**(code **)(*plVar7 + 0x360))();
      cVar4 = FUN_00e85ea0();
      uVar16 = extraout_XMM0_Da_06;
      if (cVar4 == '\0') goto LAB_01801732;
    }
    plVar7 = *pplVar14;
    if (*(char *)(pplVar14 + 1) == '\0') {
      if (plVar7 != (int64_t *)0x0) {
        uVar16 = FUN_00d50b00();
      }
    }
    else {
      *(void*)(pplVar14 + 1) = 0;
    }
    if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
      uVar16 = FUN_00d50b20();
    }
    if ((local_140 != '\0') && (local_148 != 0)) {
      uVar16 = FUN_00d50b20();
    }
    if (plVar7 != (int64_t *)0x0) {
      FUN_00d45870();
      FUN_017dd900();
      uVar16 = FUN_00d50b20();
    }
    lVar8 = g_027d5158;
    if (g_027d5158 != 0) {
      uVar16 = FUN_00d50b00();
    }
    local_138 = lVar8;
    local_130 = '\x01';
    pplVar14 = &local_70;
    FUN_000175c0(uVar16,&local_138);
    plVar7 = local_70;
    uVar16 = FUN_00053ac0();
    if (plVar7 == (int64_t *)0x0) {
LAB_01801808:
      pplVar14 = &g_02802688;
    }
    else {
      (**(code **)(*plVar7 + 0x360))();
      cVar4 = FUN_00e85ea0();
      uVar16 = extraout_XMM0_Da_07;
      if (cVar4 == '\0') goto LAB_01801808;
    }
    plVar7 = *pplVar14;
    if (*(char *)(pplVar14 + 1) == '\0') {
      if (plVar7 != (int64_t *)0x0) {
        uVar16 = FUN_00d50b00();
      }
    }
    else {
      *(void*)(pplVar14 + 1) = 0;
    }
    if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
      uVar16 = FUN_00d50b20();
    }
    if ((local_130 != '\0') && (local_138 != 0)) {
      uVar16 = FUN_00d50b20();
    }
    if (plVar7 != (int64_t *)0x0) {
      FUN_00d459e0();
      FUN_017dd910();
      uVar16 = FUN_00d50b20();
    }
  }
  lVar8 = g_027d5100;
  if (g_027d5100 != 0) {
    uVar16 = FUN_00d50b00();
  }
  local_128 = lVar8;
  local_120 = '\x01';
  uVar16 = FUN_000175c0(uVar16,&local_128);
  plVar7 = local_70;
  if ((g_026fdd40 == '\0') &&
     (iVar10 = ___cxa_guard_acquire(), uVar16 = extraout_XMM0_Da_21, iVar10 != 0)) {
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
    uVar16 = ___cxa_guard_release();
  }
  pplVar14 = &g_02802688;
  if (plVar7 != (int64_t *)0x0) {
    (**(code **)(*plVar7 + 0x360))();
    cVar4 = FUN_00e85ea0();
    uVar16 = extraout_XMM0_Da_08;
    if (cVar4 != '\0') {
      if ((g_026fd0c0 == '\0') && (iVar10 = ___cxa_guard_acquire(), iVar10 != 0)) {
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
      cVar4 = FUN_00e8db60();
      pplVar14 = &local_70;
      uVar16 = extraout_XMM0_Da_09;
      if (cVar4 == '\0') {
        pplVar14 = &g_02802688;
      }
    }
  }
  plVar7 = *pplVar14;
  if (plVar7 == plVar11) {
    if ((bool)(bVar3 & plVar7 != (int64_t *)0x0)) {
      if (*(char *)(pplVar14 + 1) != '\0') goto LAB_0180196a;
      uVar12 = (uint)CONCAT71(uVar13,1);
      uVar16 = FUN_00d50b00();
    }
    else {
      uVar12 = (uint)local_38;
    }
  }
  else if (*(char *)(pplVar14 + 1) == '\0') {
    if (plVar7 != (int64_t *)0x0) {
      uVar16 = FUN_00d50b00();
    }
    if ((bool)(bVar2 & plVar11 != (int64_t *)0x0)) {
      uVar16 = FUN_00d50b20();
      uVar12 = (uint)CONCAT71(uVar13,1);
      plVar11 = plVar7;
    }
    else {
      uVar12 = (uint)CONCAT71(uVar13,1);
      plVar11 = plVar7;
    }
  }
  else {
    bVar15 = plVar11 != (int64_t *)0x0;
    plVar11 = plVar7;
    if ((bool)(bVar2 & bVar15)) {
      uVar16 = FUN_00d50b20();
    }
LAB_0180196a:
    *(void*)(pplVar14 + 1) = 0;
    uVar12 = (uint)CONCAT71(uVar13,1);
  }
  if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
    uVar16 = FUN_00d50b20();
  }
  if ((local_120 != '\0') && (local_128 != 0)) {
    uVar16 = FUN_00d50b20();
  }
  lVar8 = g_027d5168;
  if (plVar11 != (int64_t *)0x0) {
    if (g_027d5168 != 0) {
      uVar16 = FUN_00d50b00();
    }
    local_118 = lVar8;
    local_110 = '\x01';
    pplVar14 = &local_70;
    FUN_000175c0(uVar16,&local_118);
    plVar7 = local_70;
    uVar16 = FUN_00053ac0();
    if (plVar7 == (int64_t *)0x0) {
LAB_01801a5b:
      pplVar14 = &g_02802688;
    }
    else {
      (**(code **)(*plVar7 + 0x360))();
      cVar4 = FUN_00e85ea0();
      uVar16 = extraout_XMM0_Da_10;
      if (cVar4 == '\0') goto LAB_01801a5b;
    }
    plVar7 = *pplVar14;
    if (*(char *)(pplVar14 + 1) == '\0') {
      if (plVar7 != (int64_t *)0x0) {
        uVar16 = FUN_00d50b00();
      }
    }
    else {
      *(void*)(pplVar14 + 1) = 0;
    }
    if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
      uVar16 = FUN_00d50b20();
    }
    if ((local_110 != '\0') && (local_118 != 0)) {
      uVar16 = FUN_00d50b20();
    }
    if (plVar7 != (int64_t *)0x0) {
      FUN_00d459e0();
      FUN_017dd8e0();
      uVar16 = FUN_00d50b20();
    }
    lVar8 = g_027d5170;
    if (g_027d5170 != 0) {
      uVar16 = FUN_00d50b00();
    }
    local_108 = lVar8;
    local_100 = '\x01';
    pplVar14 = &local_70;
    FUN_000175c0(uVar16,&local_108);
    plVar7 = local_70;
    uVar16 = FUN_00053ac0();
    if (plVar7 == (int64_t *)0x0) {
LAB_01801b2f:
      pplVar14 = &g_02802688;
    }
    else {
      (**(code **)(*plVar7 + 0x360))();
      cVar4 = FUN_00e85ea0();
      uVar16 = extraout_XMM0_Da_11;
      if (cVar4 == '\0') goto LAB_01801b2f;
    }
    plVar7 = *pplVar14;
    if (*(char *)(pplVar14 + 1) == '\0') {
      if (plVar7 != (int64_t *)0x0) {
        uVar16 = FUN_00d50b00();
      }
    }
    else {
      *(void*)(pplVar14 + 1) = 0;
    }
    if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
      uVar16 = FUN_00d50b20();
    }
    if ((local_100 != '\0') && (local_108 != 0)) {
      uVar16 = FUN_00d50b20();
    }
    if (plVar7 != (int64_t *)0x0) {
      FUN_00d459e0();
      FUN_017dd8f0();
      uVar16 = FUN_00d50b20();
    }
  }
  lVar8 = g_027d5188;
  if (g_027d5188 != 0) {
    uVar16 = FUN_00d50b00();
  }
  local_f8 = lVar8;
  local_f0 = '\x01';
  uVar9 = FUN_000175c0(uVar16,&local_f8);
  plVar7 = local_70;
  uVar9 = CONCAT71((int7)((uint64_t)uVar9 >> 8),g_026fdd40);
  uVar16 = extraout_XMM0_Da_12;
  if ((g_026fdd40 == '\0') &&
     (uVar9 = ___cxa_guard_acquire(), uVar16 = extraout_XMM0_Da_22, (int)uVar9 != 0)) {
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
    uVar9 = ___cxa_guard_release();
    uVar16 = extraout_XMM0_Da_23;
  }
  pplVar14 = &g_02802688;
  if (plVar7 != (int64_t *)0x0) {
    (**(code **)(*plVar7 + 0x360))();
    uVar9 = FUN_00e85ea0();
    uVar16 = extraout_XMM0_Da_13;
    if ((char)uVar9 != '\0') {
      if ((g_026fd0c0 == '\0') && (iVar10 = ___cxa_guard_acquire(), iVar10 != 0)) {
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
      uVar9 = FUN_00e8db60();
      pplVar14 = &local_70;
      uVar16 = extraout_XMM0_Da_14;
      if ((char)uVar9 == '\0') {
        pplVar14 = &g_02802688;
      }
    }
  }
  plVar7 = *pplVar14;
  cVar4 = (char)uVar12;
  if (plVar7 == plVar11) {
    if ((cVar4 == '\0') && (plVar7 != (int64_t *)0x0)) {
      plVar7 = plVar11;
      if (*(char *)(pplVar14 + 1) != '\0') goto LAB_01801c86;
      local_38 = CONCAT71((int7)((uint64_t)uVar9 >> 8),1);
      uVar16 = FUN_00d50b00();
    }
    else {
      local_38 = (uint64_t)uVar12;
      plVar7 = plVar11;
    }
  }
  else if (*(char *)(pplVar14 + 1) == '\0') {
    if (plVar7 != (int64_t *)0x0) {
      uVar9 = FUN_00d50b00();
      uVar16 = extraout_XMM0_Da_16;
    }
    local_38 = CONCAT71((int7)((uint64_t)uVar9 >> 8),1);
    if ((cVar4 != '\0') && (plVar11 != (int64_t *)0x0)) {
      uVar16 = FUN_00d50b20();
    }
  }
  else {
    if ((cVar4 != '\0') && (plVar11 != (int64_t *)0x0)) {
      uVar9 = FUN_00d50b20();
      uVar16 = extraout_XMM0_Da_15;
    }
LAB_01801c86:
    *(void*)(pplVar14 + 1) = 0;
    local_38 = CONCAT71((int7)((uint64_t)uVar9 >> 8),1);
  }
  if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
    uVar16 = FUN_00d50b20();
  }
  if ((local_f0 != '\0') && (local_f8 != 0)) {
    uVar16 = FUN_00d50b20();
  }
  lVar8 = g_027d5178;
  if (plVar7 == (int64_t *)0x0) {
    *this_ptr = puVar6;
    *(void*)(this_ptr + 1) = 1;
    goto LAB_01801f15;
  }
  if (g_027d5178 != 0) {
    uVar16 = FUN_00d50b00();
  }
  local_e8 = lVar8;
  local_e0 = '\x01';
  pplVar14 = &local_70;
  FUN_000175c0(uVar16,&local_e8);
  plVar11 = local_70;
  uVar16 = FUN_00053ac0();
  if (plVar11 == (int64_t *)0x0) {
LAB_01801d7b:
    pplVar14 = &g_02802688;
  }
  else {
    (**(code **)(*plVar11 + 0x360))();
    cVar4 = FUN_00e85ea0();
    uVar16 = extraout_XMM0_Da_17;
    if (cVar4 == '\0') goto LAB_01801d7b;
  }
  plVar11 = *pplVar14;
  if (*(char *)(pplVar14 + 1) == '\0') {
    if (plVar11 != (int64_t *)0x0) {
      uVar16 = FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar14 + 1) = 0;
  }
  if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
    uVar16 = FUN_00d50b20();
  }
  if ((local_e0 != '\0') && (local_e8 != 0)) {
    uVar16 = FUN_00d50b20();
  }
  if (plVar11 != (int64_t *)0x0) {
    FUN_00d459e0();
    FUN_017dd920();
    uVar16 = FUN_00d50b20();
  }
  lVar8 = g_027d5180;
  if (g_027d5180 != 0) {
    uVar16 = FUN_00d50b00();
  }
  local_d8 = lVar8;
  local_d0 = '\x01';
  pplVar14 = &local_70;
  FUN_000175c0(uVar16,&local_d8);
  plVar11 = local_70;
  FUN_00053ac0();
  if (plVar11 == (int64_t *)0x0) {
    pplVar14 = &g_02802688;
    plVar11 = g_02802688;
    if (g_02802690 != '\0') goto LAB_01801e81;
LAB_01801ea0:
    if (plVar11 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    (**(code **)(*plVar11 + 0x360))();
    cVar4 = FUN_00e85ea0();
    if (cVar4 == '\0') {
      pplVar14 = &g_02802688;
    }
    plVar11 = *pplVar14;
    if (*(char *)(pplVar14 + 1) == '\0') goto LAB_01801ea0;
LAB_01801e81:
    *(void*)(pplVar14 + 1) = 0;
  }
  if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_d0 != '\0') && (local_d8 != 0)) {
    FUN_00d50b20();
  }
  if (plVar11 != (int64_t *)0x0) {
    FUN_00d459e0();
    FUN_017dd930();
    FUN_00d50b20();
  }
  *this_ptr = puVar6;
  *(void*)(this_ptr + 1) = 1;
  if ((char)local_38 != '\0') {
    FUN_00d50b20();
  }
LAB_01801f15:
  if (plVar1 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return this_ptr;
}

