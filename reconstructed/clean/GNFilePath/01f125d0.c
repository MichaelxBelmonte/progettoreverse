// Function: FUN_01f125d0
// Address: 01f125d0
// Size: 879 bytes
// Class: GNFilePath

void FUN_01f125d0(uint64_t param_1,uint64_t param_2)

{
  void*puVar1;
  int64_t lVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  void*puVar6;
  int64_t this_ptr;
  int64_t *plVar7;
  int64_t *plVar8;
  int iVar9;
  uint32_t uVar10;
  float fVar11;
  uint64_t uVar12;
  uint64_t extraout_XMM0_Qa;
  uint8_t auVar13 [16];
  uint8_t auVar14 [16];
  uint8_t auVar15 [16];
  float fVar17;
  uint64_t in_XMM1_Qb;
  uint32_t uVar18;
  uint8_t auVar16 [16];
  uint8_t local_98 [16];
  uint8_t local_88 [16];
  int64_t *local_40;
  char local_38;
  uint64_t extraout_XMM0_Qb;
  
  uVar18 = (uint32_t)((uint64_t)in_XMM1_Qb >> 0x20);
  fVar17 = (float)((uint64_t)param_2 >> 0x20);
  FUN_01cb4790();
  if ((local_38 == '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  puVar6 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar6 = &g_025683c0;
  (*g_025683d8)();
  FUN_00c92170();
  uVar12 = FUN_00c92160();
  puVar1 = *(void**)(this_ptr + 0x168);
  if (puVar1 == puVar6) {
    uVar12 = FUN_00d50b20();
  }
  else {
    *(void**)(this_ptr + 0x168) = puVar6;
    if (puVar1 != (void*)0x0) {
      uVar12 = FUN_00d50b20();
    }
  }
  uVar10 = (**(code **)(*local_40 + 0x3c8))(uVar12,1);
  uVar12 = FUN_01e3f820();
  uVar12 = (**(code **)(*local_40 + 0x3c8))(uVar12,1);
  fVar11 = (float)(**(code **)(*local_40 + 0x3c8))(uVar12,3);
  auVar14._4_4_ = fVar17;
  auVar14._0_4_ = fVar17;
  auVar14._8_4_ = uVar18;
  auVar14._12_4_ = uVar18;
  auVar16._4_12_ = auVar14._4_12_;
  auVar16._0_4_ = (fVar17 - (float)uVar12) - fVar11;
  local_88 = insertps(g_0241b5f0,uVar10,0x10);
  local_98 = insertps(g_0241b5f0,auVar16,0x10);
  bVar3 = false;
  iVar9 = 0;
  plVar7 = (int64_t *)0x0;
  do {
    iVar5 = FUN_01d5b230();
    if (iVar5 <= iVar9) {
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if ((bVar3) && (plVar7 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      return;
    }
    FUN_01d5b240(extraout_XMM0_Qa,iVar9);
    if (local_40 == plVar7) {
      if ((bVar3) || (local_40 == (int64_t *)0x0)) {
joined_r0x01f127fc:
        plVar8 = plVar7;
        bVar4 = bVar3;
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        plVar8 = plVar7;
        bVar4 = true;
        if (local_38 == '\0') {
          FUN_00d50b00();
          goto LAB_01f127e7;
        }
      }
    }
    else {
      plVar8 = local_40;
      if (local_38 == '\0') {
        if (local_40 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        bVar4 = true;
        if ((bVar3) && (plVar7 != (int64_t *)0x0)) {
          FUN_00d50b20();
          plVar7 = local_40;
LAB_01f127e7:
          bVar3 = true;
          goto joined_r0x01f127fc;
        }
      }
      else {
        bVar4 = true;
        if ((bVar3) && (plVar7 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    bVar3 = bVar4;
    FUN_01d65230();
    if (local_38 == '\0') {
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    auVar13._0_8_ = FUN_01d43d10();
    auVar13._8_8_ = extraout_XMM0_Qb;
    auVar14 = roundss(auVar13,auVar13,9);
    auVar15._4_12_ = auVar14._4_12_;
    auVar15._0_4_ = auVar14._0_4_ + g_02390d28;
    uVar12 = auVar15._0_8_;
    if (local_40 != (int64_t *)0x0) {
      uVar12 = FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      uVar12 = FUN_00d50b20();
    }
    lVar2 = *(int64_t *)(this_ptr + 0x168);
    iVar5 = *(int *)(lVar2 + 0x18);
    FUN_00c8e340(uVar12,1);
    local_98 = blendps(local_98,auVar15,1);
    puVar1 = (void*)(*(int64_t *)(lVar2 + 0x10) + (int64_t)iVar5);
    *puVar1 = local_88._0_8_;
    puVar1[1] = local_98._0_8_;
    local_88._0_4_ = local_88._0_4_ + auVar15._0_4_;
    iVar9 = iVar9 + 1;
    plVar7 = plVar8;
  } while( true );
}

