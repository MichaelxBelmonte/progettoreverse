// Function: FUN_01df3040
// Address: 01df3040
// Size: 2091 bytes
// Class: GNList
// String references:
//   "GNList"
// === GNList properties ===
//   GNInt           _archiveVersion
//   bool            _awakesObjectsAfterDecoding
//   bool            _isCancelled
//   GNInt           _currentObjectGraphIdx
//   GNInt           _predictedDecodedValuesIndex


void FUN_01df3040(uint32_t param_1,int param_2)

{
  int64_t lVar1;
  char cVar2;
  int iVar3;
  uint64_t uVar4;
  code *in_RCX;
  int64_t *arg1;
  int64_t *plVar5;
  int64_t *plVar6;
  int64_t **pplVar7;
  int64_t lVar8;
  uint32_t extraout_XMM0_Da;
  uint32_t uVar9;
  uint32_t extraout_XMM0_Da_00;
  int64_t local_150;
  char local_148;
  int64_t local_140;
  char local_138;
  int64_t local_130;
  char local_128;
  int64_t *local_120;
  char local_118;
  int64_t *local_110;
  char local_108;
  int64_t *local_100;
  char local_f8;
  int64_t local_f0;
  char local_e8;
  int64_t local_e0;
  char local_d8;
  int64_t local_d0;
  char local_c8;
  int64_t local_c0;
  char local_b8;
  int64_t local_b0;
  char local_a8;
  int64_t local_a0;
  char local_98;
  int local_8c;
  uint32_t local_88;
  uint32_t local_84;
  int64_t local_80;
  char local_78;
  int64_t *local_70;
  char local_68;
  int64_t *local_60;
  int64_t *local_58;
  uint32_t local_50;
  uint32_t local_4c;
  int64_t *plVar10;
  int64_t *local_40;
  char local_38;
  
  lVar1 = g_027edfd8;
  if (g_027edfd8 != 0) {
    param_1 = FUN_00d50b00();
  }
  local_150 = lVar1;
  local_148 = '\x01';
  uVar4 = FUN_01ccaae0(param_1,&local_150);
  plVar10 = local_40;
  uVar9 = extraout_XMM0_Da;
  if (local_40 == (int64_t *)0x0) {
    local_50 = (uint32_t)CONCAT71((int7)((uint64_t)uVar4 >> 8),1);
    plVar10 = (int64_t *)0x0;
  }
  else {
    if (local_38 == '\0') {
      uVar9 = FUN_00d50b00();
      local_50 = 0;
      if ((local_38 == '\0') || (local_40 == (int64_t *)0x0)) goto LAB_01df30dc;
      uVar9 = FUN_00d50b20();
    }
    else {
      local_38 = '\0';
    }
    local_50 = 0;
  }
LAB_01df30dc:
  if ((local_148 != '\0') && (local_150 != 0)) {
    uVar9 = FUN_00d50b20();
  }
  lVar1 = g_02800140;
  if (g_02800140 != 0) {
    uVar9 = FUN_00d50b00();
  }
  local_140 = lVar1;
  local_138 = '\x01';
  local_8c = param_2;
  uVar4 = FUN_01ccaae0(uVar9,&local_140);
  plVar6 = local_40;
  uVar9 = extraout_XMM0_Da_00;
  if (local_40 == (int64_t *)0x0) {
    local_4c = (uint32_t)CONCAT71((int7)((uint64_t)uVar4 >> 8),1);
    plVar6 = (int64_t *)0x0;
  }
  else {
    if (local_38 == '\0') {
      uVar9 = FUN_00d50b00();
      local_4c = 0;
      if ((local_38 == '\0') || (local_40 == (int64_t *)0x0)) goto LAB_01df317b;
      uVar9 = FUN_00d50b20();
    }
    else {
      local_38 = '\0';
    }
    local_4c = 0;
  }
LAB_01df317b:
  if ((local_138 != '\0') && (local_140 != 0)) {
    uVar9 = FUN_00d50b20();
  }
  lVar1 = g_027edfd8;
  if ((plVar10 == (int64_t *)0x0) || (plVar6 == (int64_t *)0x0)) goto LAB_01df3769;
  local_58 = plVar10;
  if (g_027edfd8 != 0) {
    uVar9 = FUN_00d50b00();
  }
  local_130 = lVar1;
  local_128 = '\x01';
  uVar9 = FUN_01ccab60(uVar9,&local_130);
  local_80 = local_e0;
  local_78 = 0;
  if (local_d8 == '\0') {
    if (local_e0 != 0) {
      uVar9 = FUN_00d50b00();
    }
  }
  else {
    local_d8 = '\0';
  }
  local_78 = '\x01';
  pplVar7 = &local_40;
  FUN_01d26620(uVar9,&local_80);
  plVar10 = local_40;
  if ((g_027048b0 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
    g_026cd478 = FUN_00d4fe50();
    g_026cd460 = "GNList";
    g_026cd468 = 0x20;
    in_RCX = FUN_00018210;
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
  if (plVar10 == (int64_t *)0x0) {
LAB_01df3267:
    pplVar7 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar10 + 0x360))();
    cVar2 = FUN_00e85ea0();
    if (cVar2 == '\0') goto LAB_01df3267;
  }
  plVar10 = *pplVar7;
  if (plVar10 == (int64_t *)0x0) {
    uVar9 = (uint32_t)CONCAT71((int7)((uint64_t)pplVar7 >> 8),1);
    plVar10 = (int64_t *)0x0;
  }
  else {
    if (*(char *)(pplVar7 + 1) == '\0') {
      FUN_00d50b00();
    }
    else {
      *(void*)(pplVar7 + 1) = 0;
    }
    uVar9 = 0;
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  if ((local_d8 != '\0') && (local_e0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_128 != '\0') && (local_130 != 0)) {
    FUN_00d50b20();
  }
  local_88 = uVar9;
  local_60 = plVar10;
  FUN_01d25cb0();
  plVar5 = local_40;
  if (local_40 == (int64_t *)0x0) {
    plVar5 = (int64_t *)0x0;
    local_84 = (uint32_t)CONCAT71((int7)((uint64_t)in_RCX >> 8),1);
  }
  else {
    if (((local_38 == '\0') && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != (int64_t *)0x0))
    {
      FUN_00d50b20();
    }
    local_84 = 0;
  }
  if (plVar10 != (int64_t *)0x0) {
    plVar10 = (int64_t *)*arg1;
    FUN_00053ac0();
    if (plVar10 == (int64_t *)0x0) {
LAB_01df3392:
      arg1 = &g_02802688;
    }
    else {
      (**(code **)(*plVar10 + 0x360))();
      cVar2 = FUN_00e85ea0();
      if (cVar2 == '\0') goto LAB_01df3392;
    }
    if ((*arg1 == 0) || (cVar2 = FUN_00d45ad0(), cVar2 == '\0')) {
      lVar8 = (int64_t)local_8c;
      lVar1 = *(int64_t *)(plVar5[2] + lVar8 * 8);
      local_a8 = 0;
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      local_a8 = '\x01';
      local_b0 = lVar1;
      cVar2 = FUN_00d23d70();
      if ((local_a8 != '\0') && (local_b0 != 0)) {
        FUN_00d50b20();
      }
      if (cVar2 != '\0') {
        local_110 = local_60;
        local_108 = '\0';
        FUN_019ba260();
        plVar10 = local_40;
        if (local_40 == (int64_t *)0x0) {
          plVar10 = (int64_t *)0x0;
        }
        else if (local_38 == '\0') {
          FUN_00d50b00();
          if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_38 = '\0';
        }
        if ((local_108 != '\0') && (local_110 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        lVar1 = *(int64_t *)(plVar5[2] + lVar8 * 8);
        local_98 = 0;
        if (lVar1 != 0) {
          FUN_00d50b00();
        }
        local_98 = '\x01';
        local_a0 = lVar1;
        uVar9 = FUN_00d23f50();
        if ((local_98 != '\0') && (local_a0 != 0)) {
          uVar9 = FUN_00d50b20();
        }
        goto LAB_01df3645;
      }
    }
    else {
      lVar8 = (int64_t)local_8c;
      lVar1 = *(int64_t *)(plVar5[2] + lVar8 * 8);
      local_c8 = 0;
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      local_c8 = '\x01';
      local_d0 = lVar1;
      cVar2 = FUN_00d23d70();
      if ((local_c8 != '\0') && (local_d0 != 0)) {
        FUN_00d50b20();
      }
      if (cVar2 == '\0') {
        local_120 = local_60;
        local_118 = '\0';
        FUN_019ba260();
        plVar10 = local_40;
        if (local_40 == (int64_t *)0x0) {
          plVar10 = (int64_t *)0x0;
        }
        else if (local_38 == '\0') {
          FUN_00d50b00();
          if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_38 = '\0';
        }
        if ((local_118 != '\0') && (local_120 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        lVar1 = *(int64_t *)(plVar5[2] + lVar8 * 8);
        local_b8 = 0;
        if (lVar1 != 0) {
          FUN_00d50b00();
        }
        local_b8 = '\x01';
        local_c0 = lVar1;
        uVar9 = FUN_00d21140();
        if ((local_b8 != '\0') && (local_c0 != 0)) {
          uVar9 = FUN_00d50b20();
        }
LAB_01df3645:
        lVar1 = g_027edfd8;
        if (plVar10 != (int64_t *)0x0) {
          local_f8 = '\0';
          local_100 = plVar10;
          if (g_027edfd8 != 0) {
            uVar9 = FUN_00d50b00();
          }
          local_f0 = lVar1;
          local_e8 = '\x01';
          uVar9 = FUN_01ccab60(uVar9,&local_f0);
          local_70 = local_40;
          local_68 = 0;
          if (local_38 == '\0') {
            if (local_40 != (int64_t *)0x0) {
              uVar9 = FUN_00d50b00();
            }
          }
          else {
            local_38 = '\0';
          }
          local_68 = '\x01';
          FUN_01d27270(uVar9,&local_70);
          if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_e8 != '\0') && (local_f0 != 0)) {
            FUN_00d50b20();
          }
          if ((local_f8 != '\0') && (local_100 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          FUN_00d50b20();
        }
      }
    }
  }
  if ((char)local_84 == '\0' && plVar5 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  plVar10 = local_58;
  if ((char)local_88 == '\0' && local_60 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
LAB_01df3769:
  if ((char)local_4c == '\0' && plVar6 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((char)local_50 == '\0' && plVar10 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}

