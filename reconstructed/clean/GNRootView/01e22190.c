// Function: FUN_01e22190
// Address: 01e22190
// Size: 1166 bytes
// Class: GNRootView

void FUN_01e22190(uint64_t param_1)

{
  void*puVar1;
  uint uVar2;
  int64_t lVar3;
  uint8_t auVar4 [16];
  uint64_t uVar5;
  uint8_t auVar6 [16];
  uint8_t auVar7 [16];
  bool bVar8;
  bool bVar9;
  int iVar10;
  void*puVar11;
  int64_t lVar12;
  int64_t *plVar13;
  uint64_t uVar14;
  int64_t this_ptr;
  float *pfVar15;
  int iVar16;
  uint64_t unaff_R15;
  uint32_t uVar17;
  uint32_t extraout_XMM0_Da;
  float fVar18;
  uint32_t in_XMM0_Dc;
  uint32_t extraout_XMM0_Dc;
  uint32_t extraout_XMM0_Dc_00;
  uint32_t extraout_XMM0_Dc_01;
  uint32_t in_XMM0_Dd;
  uint32_t extraout_XMM0_Dd;
  uint32_t extraout_XMM0_Dd_00;
  uint32_t extraout_XMM0_Dd_01;
  uint8_t local_b8 [8];
  float fStack_b0;
  float fStack_ac;
  uint8_t local_a8 [16];
  int64_t local_90;
  char local_88;
  int64_t *local_80;
  uint32_t local_74;
  int64_t *local_70;
  char local_68;
  float local_54;
  int64_t *local_50;
  char local_48;
  int64_t *local_40;
  
  uVar17 = FUN_01cb4790();
  if (local_50 == (int64_t *)0x0) {
    local_74 = (uint32_t)CONCAT71((int7)((uint64_t)unaff_R15 >> 8),1);
    plVar13 = (int64_t *)0x0;
  }
  else {
    plVar13 = local_50;
    if (local_48 == '\0') {
      uVar17 = FUN_00d50b00();
      local_74 = 0;
    }
    else {
      local_74 = 0;
    }
  }
  local_80 = plVar13;
  if (*(int64_t *)(this_ptr + 0x168) == 0) {
    puVar11 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar11 = &g_025683c0;
    (*g_025683d8)();
    FUN_00c92170();
    uVar17 = FUN_00c92160();
    puVar1 = *(void**)(this_ptr + 0x168);
    if (puVar1 == puVar11) {
      uVar17 = FUN_00d50b20();
    }
    else {
      *(void**)(this_ptr + 0x168) = puVar11;
      if (puVar1 != (void*)0x0) {
        uVar17 = FUN_00d50b20();
      }
    }
  }
  else {
    uVar17 = FUN_00c8e340(uVar17,0);
  }
  local_a8._0_8_ = (**(code **)(*plVar13 + 0x3c8))(uVar17,0);
  local_a8._8_4_ = extraout_XMM0_Dc;
  local_a8._12_4_ = extraout_XMM0_Dd;
  uVar5 = (**(code **)(*plVar13 + 0x3c8))((int)local_a8._0_8_,1);
  auVar4._8_4_ = extraout_XMM0_Dc_00;
  auVar4._0_8_ = uVar5;
  auVar4._12_4_ = extraout_XMM0_Dd_00;
  local_a8 = insertps(local_a8,auVar4,0x10);
  local_54 = g_023b169c;
  bVar8 = false;
  local_40 = (int64_t *)0x0;
  iVar16 = 0;
  do {
    iVar10 = FUN_01d5b230();
    uVar17 = local_74;
    plVar13 = local_80;
    if (iVar10 <= iVar16) {
      uVar2 = *(uint *)(*(int64_t *)(this_ptr + 0x168) + 0x18);
      if (0xf < (int)uVar2) {
        uVar2 = uVar2 >> 4;
        lVar3 = *(int64_t *)(*(int64_t *)(this_ptr + 0x168) + 0x10);
        if ((uint64_t)uVar2 - 1 < 3) {
          uVar14 = 0;
        }
        else {
          pfVar15 = (float *)(lVar3 + 0x38);
          uVar14 = 0;
          do {
            pfVar15[-0xc] = local_54;
            pfVar15[-8] = local_54;
            pfVar15[-4] = local_54;
            *pfVar15 = local_54;
            uVar14 = uVar14 + 4;
            pfVar15 = pfVar15 + 0x10;
          } while ((uVar2 & 0xfffffffc) != uVar14);
        }
        if ((uint64_t)(uVar2 & 3) != 0) {
          lVar12 = 0;
          do {
            *(float *)(lVar3 + uVar14 * 0x10 + 8 + lVar12) = local_54;
            lVar12 = lVar12 + 0x10;
          } while ((uint64_t)(uVar2 & 3) << 4 != lVar12);
        }
      }
      if ((bVar8) && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((char)uVar17 == '\0' && plVar13 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      return;
    }
    FUN_01d5b240(extraout_XMM0_Da,iVar16);
    if (local_50 == local_40) {
      if ((bVar8) || (local_50 == (int64_t *)0x0)) {
joined_r0x01e22360:
        plVar13 = local_40;
        bVar9 = bVar8;
        if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        plVar13 = local_40;
        bVar9 = true;
        if (local_48 == '\0') {
          FUN_00d50b00();
          goto LAB_01e22348;
        }
      }
    }
    else {
      plVar13 = local_50;
      if (local_48 == '\0') {
        if (local_50 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        bVar9 = true;
        if ((bVar8) && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
          local_40 = local_50;
LAB_01e22348:
          bVar8 = true;
          goto joined_r0x01e22360;
        }
      }
      else {
        bVar9 = true;
        if ((bVar8) && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    bVar8 = bVar9;
    FUN_01d65230();
    local_68 = 0;
    if (local_48 == '\0') {
      if (local_50 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_48 = '\0';
    }
    local_68 = '\x01';
    local_70 = local_50;
    local_90 = *(int64_t *)(this_ptr + 0x158);
    local_88 = '\0';
    local_b8 = (uint8_t  [8])
               (**(code **)(*local_80 + 0x5d0))(*(void*)(this_ptr + 0x178),&local_90);
    fStack_b0 = (float)extraout_XMM0_Dc_01;
    fStack_ac = (float)extraout_XMM0_Dd_01;
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
    if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    auVar7._8_4_ = in_XMM0_Dc;
    auVar7._0_8_ = param_1;
    auVar7._12_4_ = in_XMM0_Dd;
    if (SUB84(local_b8,0) < (float)param_1) {
      _local_b8 = blendps(_local_b8,auVar7,1);
    }
    lVar3 = *(int64_t *)(this_ptr + 0x168);
    iVar10 = *(int *)(lVar3 + 0x18);
    FUN_00c8e340((float)param_1,1);
    fVar18 = (float)local_b8._0_4_;
    if ((float)local_b8._0_4_ <= local_54) {
      fVar18 = local_54;
    }
    puVar1 = (void*)(*(int64_t *)(lVar3 + 0x10) + (int64_t)iVar10);
    *puVar1 = local_a8._0_8_;
    *(void*)(puVar1 + 1) = local_b8._0_4_;
    *(void*)((int64_t)puVar1 + 0xc) = local_b8._4_4_;
    auVar6._4_4_ = (float)local_b8._4_4_ + local_a8._4_4_;
    auVar6._0_4_ = (float)local_b8._0_4_ + local_a8._0_4_;
    auVar6._8_4_ = fStack_b0 + local_a8._8_4_;
    auVar6._12_4_ = fStack_ac + local_a8._12_4_;
    local_a8 = blendps(local_a8,auVar6,2);
    iVar16 = iVar16 + 1;
    local_54 = fVar18;
    local_40 = plVar13;
  } while( true );
}

