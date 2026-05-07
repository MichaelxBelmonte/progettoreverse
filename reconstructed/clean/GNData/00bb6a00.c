// Function: FUN_00bb6a00
// Address: 00bb6a00
// Size: 1592 bytes
// Class: GNData
// String references:
//   "cue "
// === GNData properties ===
//   double          _firstSpectrumTime
//   double          _spectraTimeDistance


uint32_t FUN_00bb6a00(void)

{
  bool bVar1;
  int64_t lVar2;
  void*puVar3;
  int64_t *plVar4;
  int64_t lVar5;
  uint64_t uVar6;
  uint uVar7;
  undefined7 uVar8;
  int64_t *arg1;
  char cVar9;
  int64_t lVar10;
  int64_t lVar11;
  uint32_t uVar12;
  uint32_t extraout_XMM0_Da;
  uint32_t extraout_XMM0_Da_00;
  uint32_t extraout_XMM0_Da_01;
  uint32_t extraout_XMM0_Da_02;
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
  void*local_d8;
  uint8_t local_d0;
  int64_t local_b0;
  char local_a8;
  int64_t local_a0;
  char local_98;
  int64_t local_78;
  char local_70;
  int64_t local_60;
  uint64_t local_50;
  uint64_t local_48;
  uint64_t uStack_40;
  int64_t local_38;
  
  local_38 = *(int64_t *)PTR____stack_chk_guard_024a9898;
  if (*arg1 == 0) {
    uVar12 = 0;
  }
  else {
    puVar3 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar3 = &g_025683c0;
    (*g_025683d8)();
    FUN_00c92170();
    plVar4 = (int64_t *)FUN_00e8fc40();
    FUN_00d4ff40();
    *plVar4 = (int64_t)&g_0256d868;
    plVar4[2] = 0;
    *(void*)((int64_t)plVar4 + 0x1c) = 0;
    *(void*)((int64_t)plVar4 + 0x24) = 0;
    *(void*)((int64_t)plVar4 + 0x2c) = 0;
    (*g_0256d880)();
    FUN_00cccf90();
    FUN_00ccce90();
    FUN_00ccce80();
    local_48 = 0;
    uStack_40 = 0;
    uVar12 = FUN_00ccdf50(0,*(void*)(*arg1 + 0xc));
    if ((local_140 != '\0') && (local_148 != 0)) {
      uVar12 = FUN_00d50b20();
    }
    lVar5 = *arg1;
    if (*(int *)(lVar5 + 0xc) < 1) {
      local_50 = 0;
      lVar11 = 0;
      bVar1 = false;
      local_60 = 0;
    }
    else {
      lVar10 = 0;
      local_60 = 0;
      bVar1 = false;
      lVar11 = 0;
      local_50 = 0;
      do {
        lVar5 = *(int64_t *)(*(int64_t *)(lVar5 + 0x10) + lVar10 * 8);
        if (local_60 == lVar5) {
          lVar2 = g_02765258;
          if ((!bVar1) && (local_60 != 0)) {
            bVar1 = true;
            uVar12 = FUN_00d50b00();
            lVar2 = g_02765258;
          }
        }
        else {
          if (lVar5 != 0) {
            uVar12 = FUN_00d50b00();
          }
          if ((bVar1) && (local_60 != 0)) {
            uVar12 = FUN_00d50b20();
            bVar1 = true;
            lVar2 = g_02765258;
            local_60 = lVar5;
          }
          else {
            bVar1 = true;
            lVar2 = g_02765258;
            local_60 = lVar5;
          }
        }
        g_02765258 = lVar2;
        if (lVar2 != 0) {
          uVar12 = FUN_00d50b00();
        }
        local_a8 = '\x01';
        local_b0 = lVar2;
        uVar12 = FUN_000175c0(uVar12,&local_b0);
        uVar8 = (undefined7)((uint64_t)lVar2 >> 8);
        if (local_78 == lVar11) {
          lVar5 = lVar11;
          if (((char)local_50 == '\0') && (local_78 != 0)) {
            if (local_70 != '\0') goto LAB_00bb6cd4;
            uVar7 = (uint)CONCAT71(uVar8,1);
            uVar12 = FUN_00d50b00();
          }
          else {
            uVar7 = (uint)local_50;
          }
        }
        else {
          lVar5 = local_78;
          if (local_70 == '\0') {
            if (local_78 != 0) {
              uVar12 = FUN_00d50b00();
            }
            uVar7 = (uint)CONCAT71(uVar8,1);
            if (((char)local_50 != '\0') && (lVar11 != 0)) {
              uVar12 = FUN_00d50b20();
            }
          }
          else {
            if (((char)local_50 != '\0') && (lVar11 != 0)) {
              uVar12 = FUN_00d50b20();
            }
LAB_00bb6cd4:
            local_70 = '\0';
            uVar7 = (uint)CONCAT71(uVar8,1);
          }
        }
        if ((local_70 != '\0') && (local_78 != 0)) {
          uVar12 = FUN_00d50b20();
        }
        if ((local_a8 != '\0') && (local_b0 != 0)) {
          uVar12 = FUN_00d50b20();
        }
        if (lVar5 == 0) {
          uVar12 = FUN_00ccdf50(uVar12,0);
          if ((local_120 != '\0') && (local_128 != 0)) {
            uVar12 = FUN_00d50b20();
          }
        }
        else {
          uVar12 = FUN_00d45870();
          uVar12 = FUN_00ccdf50(uVar7,uVar12);
          if ((local_130 != '\0') && (local_138 != 0)) {
            uVar12 = FUN_00d50b20();
          }
        }
        lVar11 = g_02765260;
        if (g_02765260 != 0) {
          uVar12 = FUN_00d50b00();
        }
        local_a0 = lVar11;
        local_98 = '\x01';
        uVar6 = FUN_000175c0(uVar12,&local_a0);
        cVar9 = (char)uVar7;
        uVar12 = extraout_XMM0_Da;
        if (local_78 == lVar5) {
          lVar11 = lVar5;
          if ((cVar9 == '\0') && (local_78 != 0)) {
            if (local_70 != '\0') goto LAB_00bb6e53;
            local_50 = CONCAT71((int7)((uint64_t)uVar6 >> 8),1);
            uVar12 = FUN_00d50b00();
          }
          else {
            local_50 = (uint64_t)uVar7;
          }
        }
        else {
          lVar11 = local_78;
          if (local_70 == '\0') {
            if (local_78 != 0) {
              uVar6 = FUN_00d50b00();
              uVar12 = extraout_XMM0_Da_01;
            }
            local_50 = CONCAT71((int7)((uint64_t)uVar6 >> 8),1);
            if ((cVar9 != '\0') && (lVar5 != 0)) {
              uVar12 = FUN_00d50b20();
            }
          }
          else {
            if ((cVar9 != '\0') && (lVar5 != 0)) {
              uVar6 = FUN_00d50b20();
              uVar12 = extraout_XMM0_Da_00;
            }
LAB_00bb6e53:
            local_70 = '\0';
            local_50 = CONCAT71((int7)((uint64_t)uVar6 >> 8),1);
          }
        }
        if ((local_70 != '\0') && (local_78 != 0)) {
          uVar12 = FUN_00d50b20();
        }
        if ((local_98 != '\0') && (local_a0 != 0)) {
          uVar12 = FUN_00d50b20();
        }
        if (lVar11 == 0) {
          FUN_00ccdf50(uVar12,0);
          if ((local_100 != '\0') && (local_108 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          uVar12 = FUN_00d45870();
          FUN_00ccdf50(extraout_XMM0_Da_02,uVar12);
          if ((local_110 != '\0') && (local_118 != 0)) {
            FUN_00d50b20();
          }
        }
        uVar12 = (**(code **)(*plVar4 + 0x388))(0x10,&local_48);
        if ((local_f0 != '\0') && (local_f8 != 0)) {
          uVar12 = FUN_00d50b20();
        }
        lVar10 = lVar10 + 1;
        lVar5 = *arg1;
      } while (lVar10 < *(int *)(lVar5 + 0xc));
    }
    uVar12 = (**(code **)(*plVar4 + 0x368))();
    if ((local_e0 != '\0') && (local_e8 != 0)) {
      uVar12 = FUN_00d50b20();
    }
    local_d0 = 0;
    local_d8 = puVar3;
    uVar12 = FUN_00bb0460(uVar12,&local_d8);
    FUN_00d50b20();
    if (puVar3 != (void*)0x0) {
      FUN_00d50b20();
    }
    if (((char)local_50 != '\0') && (lVar11 != 0)) {
      FUN_00d50b20();
    }
    if ((bVar1) && (local_60 != 0)) {
      FUN_00d50b20();
    }
  }
  if (*(int64_t *)PTR____stack_chk_guard_024a9898 == local_38) {
    return uVar12;
  }
                      ___stack_chk_fail();
}

