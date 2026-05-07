// Function: FUN_01e1f2c0
// Address: 01e1f2c0
// Size: 2538 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_01e1f2c0(uint64_t param_1,uint64_t param_2)

{
  uint64_t uVar1;
  uint32_t uVar2;
  uint8_t auVar3 [16];
  uint8_t auVar4 [16];
  uint8_t auVar5 [16];
  uint8_t auVar6 [16];
  bool bVar7;
  bool bVar8;
  int64_t *plVar9;
  int64_t *plVar10;
  char cVar11;
  int iVar12;
  int iVar13;
  uint64_t uVar14;
  int64_t lVar15;
  void*puVar16;
  uint8_t uVar17;
  int64_t lVar18;
  int64_t this_ptr;
  bool bVar19;
  float fVar20;
  float fVar21;
  uint64_t extraout_XMM0_Qa;
  uint64_t uVar22;
  uint64_t extraout_XMM0_Qb;
  uint8_t auVar23 [16];
  float fVar26;
  uint64_t extraout_XMM0_Qb_00;
  uint64_t extraout_XMM0_Qb_01;
  uint8_t auVar24 [16];
  uint8_t auVar25 [16];
  float fVar27;
  float in_XMM1_Dc;
  float in_XMM1_Dd;
  float fVar28;
  float fStack_124;
  float fStack_c4;
  int64_t local_a8;
  char local_a0;
  int64_t *local_98;
  char local_90;
  int64_t local_88;
  char local_80;
  int64_t *local_78;
  char local_70;
  uint8_t local_68 [8];
  uint64_t uStack_60;
  int64_t *local_50;
  float local_48;
  uint32_t local_44;
  int64_t *local_40;
  char local_38;
  
  fVar21 = (float)((uint64_t)param_2 >> 0x20);
  fVar28 = (float)param_2;
  if (*(int *)(this_ptr + 0xc) == -1) {
    return;
  }
  uVar14 = FUN_01cb4790();
  local_50 = local_40;
  if (local_38 == '\0') {
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b00();
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_01e1f321;
    }
LAB_01e1f338:
    local_48 = 0.0;
    local_44 = (uint32_t)CONCAT71((int7)((uint64_t)uVar14 >> 8),1);
  }
  else {
    if (local_40 == (int64_t *)0x0) goto LAB_01e1f338;
LAB_01e1f321:
    local_44 = 0;
    local_48 = (float)(**(code **)(*local_50 + 0x598))();
  }
  FUN_01e23600();
  fVar20 = (float)FUN_01e21f60();
  uVar14 = FUN_01e5b880();
  if ((int64_t)*(int *)(this_ptr + 0xc) == -1) {
    lVar18 = 0;
    bVar7 = true;
  }
  else {
    lVar18 = *(int64_t *)
              (*(int64_t *)(*(int64_t *)(this_ptr + 0x18) + 0x10) +
              (int64_t)*(int *)(this_ptr + 0xc) * 8);
    if (lVar18 == 0) {
      bVar7 = false;
      lVar18 = 0;
    }
    else {
      FUN_00d50b00();
      bVar7 = false;
    }
  }
  FUN_01e25fd0();
  plVar9 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != (int64_t *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
       (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if (!bVar7 && lVar18 != 0) {
    FUN_00d50b20();
  }
  if (((g_028b9519 != '\0') || (plVar9 == (int64_t *)0x0)) ||
     (iVar12 = FUN_01d5b230(), iVar12 == 0)) {
    FUN_01e236a0();
    goto LAB_01e1f916;
  }
  lVar18 = *(int64_t *)(this_ptr + 0x20);
  if (lVar18 != 0) {
    FUN_00d50b00();
  }
  FUN_01d62b10();
  if (lVar18 != 0) {
    FUN_00d50b20();
  }
  cVar11 = FUN_01d5e5b0();
  if (cVar11 != '\0') {
    FUN_01d5e350();
  }
  iVar12 = 0;
  do {
    iVar13 = FUN_01d5b230();
    if (iVar13 <= iVar12) {
      uVar17 = 0;
      goto LAB_01e1f4f5;
    }
    FUN_01d5b240(extraout_XMM0_Qa,iVar12);
    cVar11 = FUN_01d65e30();
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    iVar12 = iVar12 + 1;
  } while (cVar11 == '\0');
  uVar17 = 1;
LAB_01e1f4f5:
  (**(code **)(*g_028b94f8 + 0x918))();
  *(void*)(g_028b94f8 + 0x2f) = uVar17;
  FUN_01e22190();
  lVar18 = *(int64_t *)(g_028b94f8[0x2d] + 0x10);
  lVar15 = (int64_t)*(int *)(g_028b94f8[0x2d] + 0x18);
  uVar22 = *(void*)(lVar18 + -0x10 + lVar15);
  uVar1 = *(void*)(lVar18 + -8 + lVar15);
  fStack_124 = (float)((uint64_t)uVar22 >> 0x20);
  _local_68 = ZEXT416((uint)(*(float *)(this_ptr + 0x6c) + (float)uVar22));
  uVar22 = (**(code **)(*local_50 + 0x3c8))(lVar18,2);
  fVar21 = (float)(**(code **)(*local_50 + 0x3c8))(uVar22,3);
  fStack_c4 = (float)((uint64_t)uVar1 >> 0x20);
  fVar28 = fStack_c4 + fStack_124 + (float)uVar22;
  local_68._0_4_ = (float)local_68._0_4_ + fVar21;
  if (g_028b94e8 == (void*)0x0) {
LAB_01e1f67a:
    puVar16 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *(void*)((int64_t)puVar16 + 0xc) = 0;
    *puVar16 = &g_026a3350;
    puVar16[2] = &g_026a37c8;
    puVar16[3] = 0;
    puVar16[4] = 0;
    *(void*)(puVar16 + 5) = 0;
    puVar16[6] = 0;
    *(void*)((int64_t)puVar16 + 0x37) = 0;
    *(void*)((int64_t)puVar16 + 0x3c) = 0;
    *(void*)((int64_t)puVar16 + 0x44) = 0;
    *(void*)((int64_t)puVar16 + 0x4c) = 0;
    *(void*)((int64_t)puVar16 + 0x54) = 0;
    *(void*)((int64_t)puVar16 + 0x5c) = 0;
    *(void*)((int64_t)puVar16 + 100) = 0;
    *(void*)((int64_t)puVar16 + 0x69) = 0;
    puVar16[0xf] = 0;
    *(void*)((int64_t)puVar16 + 0x7f) = 0;
    *(void*)((int64_t)puVar16 + 0x84) = 0;
    *(void*)((int64_t)puVar16 + 0x8c) = 0;
    *(void*)((int64_t)puVar16 + 0x94) = 0;
    uVar22 = (*g_026a3368)();
    if (g_028b94e8 == puVar16) {
      bVar8 = false;
      bVar7 = false;
    }
    else {
      bVar8 = true;
      bVar7 = true;
      bVar19 = g_028b94e8 != (void*)0x0;
      g_028b94e8 = puVar16;
      if (bVar19) {
        uVar22 = FUN_00d50b20();
      }
    }
    if (g_028b94f0 == '\0') {
      g_028b94f0 = '\x01';
      uVar22 = FUN_00e8cb90();
      bVar7 = bVar8;
    }
    if (!bVar7) {
      uVar22 = FUN_00d50b20();
    }
    lVar18 = g_028b9508;
    local_a0 = 0;
    if (g_028b9508 != 0) {
      uVar22 = FUN_00d50b00();
    }
    local_a8 = lVar18;
    local_a0 = '\x01';
    FUN_01e5b6f0(uVar22,&local_a8);
    if ((local_a0 != '\0') && (local_a8 != 0)) {
      FUN_00d50b20();
    }
    FUN_01e5ca90();
    plVar10 = local_40;
    local_98 = g_028b94f8;
    local_90 = 0;
    if (g_028b94f8 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    local_90 = '\x01';
    (**(code **)(*plVar10 + 0x450))();
    if ((local_90 != '\0') && (local_98 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_01e5ca90();
    (**(code **)(*local_40 + 0x570))();
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    uVar22 = FUN_01e59910();
    if (((float)local_68._0_4_ != (float)uVar22) ||
       (NAN((float)local_68._0_4_) || NAN((float)uVar22))) {
LAB_01e1f665:
      FUN_01e236a0();
    }
    else {
      fVar21 = (float)((uint64_t)uVar22 >> 0x20);
      if ((fVar28 != fVar21) || (NAN(fVar28) || NAN(fVar21))) goto LAB_01e1f665;
    }
    if (g_028b94e8 == (void*)0x0) goto LAB_01e1f67a;
  }
  _local_68 = insertps(_local_68,fVar28,0x10);
  FUN_01e5bc80();
  (**(code **)(*g_028b94f8 + 0x4d0))();
  auVar4._8_8_ = extraout_XMM0_Qb;
  auVar4._0_8_ = uVar14;
  in_XMM1_Dc = (float)((uint64_t)extraout_XMM0_Qb >> 0x20);
  fVar21 = (float)((uint64_t)uVar14 >> 0x20);
  fVar28 = (fVar21 - fVar28) + g_023b1608;
  auVar23._4_4_ = fVar21;
  auVar23._0_4_ = fVar28;
  auVar23._8_4_ = in_XMM1_Dc;
  auVar23._12_4_ = in_XMM1_Dc;
  auVar23 = insertps(auVar4,auVar23,0x10);
  in_XMM1_Dd = in_XMM1_Dc;
  FUN_01e5bb70(auVar23._0_8_);
  FUN_01e5c980();
  FUN_01e5d9c0();
LAB_01e1f916:
  uVar14 = FUN_01e5b880();
  fVar27 = fVar21;
  if ((int64_t)*(int *)(this_ptr + 0xc) == -1) {
    lVar18 = 0;
    bVar7 = true;
  }
  else {
    lVar18 = *(int64_t *)
              (*(int64_t *)(*(int64_t *)(this_ptr + 0x18) + 0x10) +
              (int64_t)*(int *)(this_ptr + 0xc) * 8);
    if (lVar18 == 0) {
      lVar18 = 0;
    }
    else {
      FUN_00d50b00();
    }
    bVar7 = false;
  }
  iVar12 = FUN_01e26080();
  if (!bVar7 && lVar18 != 0) {
    FUN_00d50b20();
  }
  if (iVar12 != 0) {
    iVar13 = FUN_01e26080();
    iVar12 = iVar13 + -1;
    if (iVar13 == 0) {
      iVar12 = 0;
    }
    local_68 = (uint8_t  [8])FUN_01e21df0(0,iVar12);
    uStack_60 = extraout_XMM0_Qb_01;
    if (g_028b94d8 == (void*)0x0) {
      puVar16 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *(void*)((int64_t)puVar16 + 0xc) = 0;
      *puVar16 = &g_026a3350;
      puVar16[2] = &g_026a37c8;
      puVar16[3] = 0;
      puVar16[4] = 0;
      *(void*)(puVar16 + 5) = 0;
      puVar16[6] = 0;
      *(void*)((int64_t)puVar16 + 0x37) = 0;
      *(void*)((int64_t)puVar16 + 0x3c) = 0;
      *(void*)((int64_t)puVar16 + 0x44) = 0;
      *(void*)((int64_t)puVar16 + 0x4c) = 0;
      *(void*)((int64_t)puVar16 + 0x54) = 0;
      *(void*)((int64_t)puVar16 + 0x5c) = 0;
      *(void*)((int64_t)puVar16 + 100) = 0;
      *(void*)((int64_t)puVar16 + 0x69) = 0;
      puVar16[0xf] = 0;
      *(void*)((int64_t)puVar16 + 0x7f) = 0;
      *(void*)((int64_t)puVar16 + 0x84) = 0;
      *(void*)((int64_t)puVar16 + 0x8c) = 0;
      *(void*)((int64_t)puVar16 + 0x94) = 0;
      uVar22 = (*g_026a3368)();
      if (g_028b94d8 == puVar16) {
        bVar8 = false;
        bVar7 = false;
      }
      else {
        bVar8 = true;
        bVar7 = true;
        bVar19 = g_028b94d8 != (void*)0x0;
        g_028b94d8 = puVar16;
        if (bVar19) {
          uVar22 = FUN_00d50b20();
        }
      }
      if (g_028b94e0 == '\0') {
        g_028b94e0 = '\x01';
        uVar22 = FUN_00e8cb90();
        bVar7 = bVar8;
      }
      if (!bVar7) {
        uVar22 = FUN_00d50b20();
      }
      lVar18 = g_028b9508;
      local_80 = 0;
      if (g_028b9508 != 0) {
        uVar22 = FUN_00d50b00();
      }
      local_88 = lVar18;
      local_80 = '\x01';
      FUN_01e5b6f0(uVar22,&local_88);
      if ((local_80 != '\0') && (local_88 != 0)) {
        FUN_00d50b20();
      }
      FUN_01e5ca90();
      plVar10 = local_40;
      local_78 = g_028b94b8;
      local_70 = 0;
      if (g_028b94b8 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      local_70 = '\x01';
      (**(code **)(*plVar10 + 0x450))();
      if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    auVar5._8_8_ = extraout_XMM0_Qb_00;
    auVar5._0_8_ = uVar14;
    uVar2 = (uint32_t)((uint64_t)extraout_XMM0_Qb_00 >> 0x20);
    fVar26 = (float)((uint64_t)uVar14 >> 0x20);
    auVar24._4_12_ = auVar5._4_12_;
    auVar24._0_4_ = (float)uVar14 + fVar20;
    auVar3._4_4_ = fVar26;
    auVar3._0_4_ = fVar26 + (fVar21 - local_48);
    auVar3._8_4_ = uVar2;
    auVar3._12_4_ = uVar2;
    auVar23 = insertps(auVar24,auVar3,0x10);
    FUN_01e5bb70(auVar23._0_8_);
    auVar6._4_4_ = fVar27;
    auVar6._0_4_ = fVar28;
    auVar6._8_4_ = in_XMM1_Dc;
    auVar6._12_4_ = in_XMM1_Dd;
    auVar25._0_4_ = (float)local_68._0_4_ + fVar28;
    auVar25._4_4_ = (float)local_68._4_4_ + fVar27;
    auVar25._8_4_ = (float)uStack_60 + in_XMM1_Dc;
    auVar25._12_4_ = uStack_60._4_4_ + in_XMM1_Dd;
    _local_68 = blendps(auVar25,auVar6,0xd);
    FUN_01e5bc80();
    (**(code **)(*g_028b94b8 + 0x4d0))();
    FUN_01e5d9c0();
    FUN_01e5ca90();
    (**(code **)(*local_40 + 0x920))();
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  if (plVar9 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((char)local_44 == '\0') {
    FUN_00d50b20();
  }
  return;
}

