// Function: FUN_00387110
// Address: 00387110
// Size: 2990 bytes
// Class: GNList
// String references:
//   "GNList"
//   "GNDictionary"
// === GNList properties ===
//   GNInt           _archiveVersion
//   bool            _awakesObjectsAfterDecoding
//   bool            _isCancelled
//   GNInt           _currentObjectGraphIdx
//   GNInt           _predictedDecodedValuesIndex


void FUN_00387110(uint32_t param_1)

{
  uint64_t uVar1;
  char cVar2;
  int64_t lVar3;
  void*puVar4;
  undefined7 uVar6;
  uint64_t uVar5;
  int iVar7;
  int64_t **pplVar8;
  int64_t *plVar9;
  int64_t *plVar10;
  bool bVar11;
  uint32_t uVar12;
  uint32_t extraout_XMM0_Da;
  uint32_t extraout_XMM0_Da_00;
  int64_t local_e8;
  char local_e0;
  int64_t local_d8;
  char local_d0;
  int64_t local_c8;
  char local_c0;
  int64_t *local_b8;
  char local_b0;
  int64_t *local_a8;
  char local_a0;
  int64_t *local_98;
  int64_t *local_90;
  int64_t *local_88;
  int64_t *local_80;
  int64_t *local_78;
  uint64_t local_70;
  int64_t *local_68;
  char local_60;
  int64_t *local_58;
  char local_50;
  int64_t *local_48;
  uint64_t local_40;
  int local_38;
  
  lVar3 = g_02704040;
  if (g_02704040 != 0) {
    param_1 = FUN_00d50b00();
  }
  local_e8 = lVar3;
  local_e0 = '\x01';
  pplVar8 = &local_58;
  uVar12 = FUN_000175c0(param_1,&local_e8);
  plVar10 = local_58;
  if ((g_026fdd40 == '\0') &&
     (iVar7 = ___cxa_guard_acquire(), uVar12 = extraout_XMM0_Da_00, iVar7 != 0)) {
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
    uVar12 = ___cxa_guard_release();
  }
  if (plVar10 == (int64_t *)0x0) {
LAB_0038719f:
    pplVar8 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar10 + 0x360))();
    cVar2 = FUN_00e85ea0();
    uVar12 = extraout_XMM0_Da;
    if (cVar2 == '\0') goto LAB_0038719f;
  }
  local_80 = *pplVar8;
  if (*(char *)(pplVar8 + 1) == '\0') {
    if (local_80 != (int64_t *)0x0) {
      uVar12 = FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar8 + 1) = 0;
  }
  if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
    uVar12 = FUN_00d50b20();
  }
  if ((local_e0 != '\0') && (local_e8 != 0)) {
    uVar12 = FUN_00d50b20();
  }
  lVar3 = g_02704048;
  if (g_02704048 != 0) {
    uVar12 = FUN_00d50b00();
  }
  local_d8 = lVar3;
  local_d0 = '\x01';
  pplVar8 = &local_58;
  FUN_000175c0(uVar12,&local_d8);
  plVar10 = local_58;
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
  if (plVar10 == (int64_t *)0x0) {
LAB_0038726b:
    pplVar8 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar10 + 0x360))();
    cVar2 = FUN_00e85ea0();
    if (cVar2 == '\0') goto LAB_0038726b;
  }
  local_90 = *pplVar8;
  if (*(char *)(pplVar8 + 1) == '\0') {
    if (local_90 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar8 + 1) = 0;
  }
  if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_d0 != '\0') && (local_d8 != 0)) {
    FUN_00d50b20();
  }
  lVar3 = g_02704050;
  if (g_02704050 != 0) {
    FUN_00d50b00();
  }
  local_c8 = lVar3;
  local_c0 = '\x01';
  FUN_000175c0();
  plVar10 = local_58;
  if ((g_027048b0 == '\0') && (iVar7 = ___cxa_guard_acquire(), iVar7 != 0)) {
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
    ___cxa_guard_release();
  }
  pplVar8 = (int64_t **)&g_02802688;
  if (plVar10 != (int64_t *)0x0) {
    (**(code **)(*plVar10 + 0x360))();
    cVar2 = FUN_00e85ea0();
    if (cVar2 != '\0') {
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
      cVar2 = FUN_00e8da30();
      pplVar8 = &local_58;
      if (cVar2 == '\0') {
        pplVar8 = (int64_t **)&g_02802688;
      }
    }
  }
  plVar9 = local_80;
  plVar10 = *pplVar8;
  if (*(char *)(pplVar8 + 1) == '\0') {
    if (plVar10 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar8 + 1) = 0;
  }
  if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_c0 != '\0') && (local_c8 != 0)) {
    FUN_00d50b20();
  }
  local_88 = plVar10;
  FUN_00386110();
  local_78 = local_58;
  bVar11 = local_58 == (int64_t *)0x0;
  if ((((local_50 == '\0') && (local_58 != (int64_t *)0x0)) && (FUN_00d50b00(), local_50 != '\0'))
     && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00386110();
  plVar10 = local_58;
  local_98 = local_58;
  uVar6 = (undefined7)((uint64_t)plVar9 >> 8);
  if (local_50 == '\0') {
    if (local_58 == (int64_t *)0x0) {
      uVar5 = CONCAT71(uVar6,1);
      goto joined_r0x00387774;
    }
    FUN_00d50b00();
    if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  uVar5 = CONCAT71(uVar6,plVar10 == (int64_t *)0x0);
  if ((local_78 == (int64_t *)0x0) || (plVar10 == (int64_t *)0x0)) goto joined_r0x00387774;
  FUN_01c19c80();
  FUN_01c19d80();
  plVar9 = local_58;
  if (local_50 == '\0') {
    if (((local_58 != (int64_t *)0x0) && (FUN_00d50b00(), local_50 != '\0')) &&
       (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_50 = '\0';
  }
  if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar9 != (int64_t *)0x0) {
    local_50 = '\0';
    local_58 = (int64_t *)0x0;
    local_70 = plVar9;
    local_48 = plVar9;
    local_40 = 0xffffffff;
    local_38 = 0;
    local_40._4_4_ = 0;
    do {
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
          plVar10 = local_98;
        }
        local_40 = CONCAT44(iVar7,(int)local_40);
      }
      lVar3 = (int64_t)(int)local_40;
      iVar7 = (int)local_40 + 1;
      local_40 = CONCAT44(local_40._4_4_,iVar7);
      bVar11 = true;
      if (*(int *)((int64_t)local_48 + 0xc) <= iVar7) goto LAB_0038769a;
      plVar10 = *(int64_t **)(local_48[2] + 8 + lVar3 * 8);
      local_68 = plVar10;
      local_58 = plVar10;
      FUN_0038ad10();
      pplVar8 = (int64_t **)&g_02802688;
      if (plVar10 != (int64_t *)0x0) {
        (**(code **)(*plVar10 + 0x360))();
        cVar2 = FUN_00e85ea0();
        pplVar8 = &local_68;
        if (cVar2 == '\0') {
          pplVar8 = (int64_t **)&g_02802688;
        }
      }
      plVar10 = local_98;
      if (*pplVar8 != (int64_t *)0x0) {
        FUN_01c0b7c0();
        local_b8 = local_78;
        local_b0 = '\0';
        cVar2 = (**(code **)(*local_68 + 0x50))();
        if ((local_b0 != '\0') && (local_b8 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        plVar9 = local_58;
        if (cVar2 != '\0') goto LAB_00387681;
      }
    } while( true );
  }
  goto LAB_0038776a;
LAB_00387681:
  if (local_58 == (int64_t *)0x0) {
LAB_0038769a:
    plVar9 = (int64_t *)0x0;
  }
  else {
    if (local_50 == '\0') {
      FUN_00d50b00();
    }
    else {
      local_50 = '\0';
    }
    bVar11 = false;
  }
  FUN_0038d270();
  FUN_00d50b20();
  if (plVar9 != (int64_t *)0x0) {
    local_a0 = '\0';
    local_a8 = plVar10;
    (**(code **)(*plVar9 + 0x370))();
    plVar10 = local_58;
    if (local_50 == '\0') {
      if (local_58 == (int64_t *)0x0) {
        plVar10 = (int64_t *)0x0;
      }
      else {
        FUN_00d50b00();
        if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    else {
      local_50 = '\0';
    }
    if ((local_a0 != '\0') && (local_a8 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar10 != (int64_t *)0x0) {
      FUN_00383510();
      FUN_00d50b20();
    }
    if (!bVar11) {
      FUN_00d50b20();
    }
  }
LAB_0038776a:
  uVar5 = 0;
  bVar11 = false;
joined_r0x00387774:
  if ((local_88 != (int64_t *)0x0) && (*(int *)((int64_t)local_88 + 0xc) != 0)) {
    uVar1 = (uint64_t)local_70 >> 0x20;
    local_70 = (int64_t *)CONCAT44((int)uVar1,(int)uVar5);
    puVar4 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar4 = &g_02572358;
    (*g_02572370)();
    local_50 = '\0';
    local_58 = (int64_t *)0x0;
    local_48 = local_88;
    local_40 = 0xffffffff;
    local_38 = 0;
    local_40._4_4_ = 0;
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
      lVar3 = (int64_t)(int)local_40;
      iVar7 = (int)local_40 + 1;
      local_40 = CONCAT44(local_40._4_4_,iVar7);
      if (*(int *)((int64_t)local_48 + 0xc) <= iVar7) break;
      local_58 = *(int64_t **)(local_48[2] + 8 + lVar3 * 8);
      FUN_00386110();
      plVar10 = local_68;
      if (local_60 == '\0') {
        if (local_68 != (int64_t *)0x0) {
          FUN_00d50b00();
          if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          goto LAB_003878b0;
        }
      }
      else if (local_68 != (int64_t *)0x0) {
LAB_003878b0:
        cVar2 = (**(code **)(*plVar10 + 0x3a0))();
        if (cVar2 != '\0') {
          local_60 = '\0';
          local_68 = plVar10;
          FUN_00d21140();
          if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        FUN_00d50b20();
      }
    }
    FUN_0038d5e0();
    FUN_0037cca0();
    uVar5 = (uint64_t)local_70 & 0xffffffff;
    if (puVar4 != (void*)0x0) {
      FUN_00d50b20();
    }
  }
  if ((char)uVar5 == '\0') {
    FUN_00d50b20();
  }
  if (!bVar11) {
    FUN_00d50b20();
  }
  plVar9 = local_80;
  plVar10 = local_90;
  if (local_88 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (plVar10 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (plVar9 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}

