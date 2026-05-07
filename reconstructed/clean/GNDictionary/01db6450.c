// Function: FUN_01db6450
// Address: 01db6450
// Size: 1235 bytes
// Class: GNDictionary

void FUN_01db6450(uint64_t param_1,uint64_t param_2)

{
  int64_t lVar1;
  int64_t *plVar2;
  uint8_t auVar3 [16];
  int64_t lVar4;
  int64_t *this_ptr;
  int iVar5;
  int64_t lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  uint64_t uVar10;
  uint32_t extraout_XMM0_Dc;
  uint32_t extraout_XMM0_Dc_00;
  uint32_t extraout_XMM0_Dd;
  uint32_t extraout_XMM0_Dd_00;
  float fVar11;
  float fVar12;
  uint8_t auVar13 [16];
  uint8_t auVar14 [16];
  uint8_t auVar15 [16];
  float local_d8;
  uint8_t local_c8 [16];
  float local_b8;
  uint8_t local_a8 [16];
  float local_88;
  uint8_t local_78 [8];
  float fStack_70;
  float fStack_6c;
  uint8_t local_68 [16];
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  fVar9 = (float)((uint64_t)param_2 >> 0x20);
  fVar11 = (float)param_2;
  FUN_01db2340();
  if ((local_38 == '\0') && (local_40 != 0)) {
    FUN_00d50b00();
  }
  (**(code **)(*this_ptr + 0x4d8))();
  iVar5 = *(int *)(local_40 + 0xc);
  if (iVar5 < 1) {
    local_c8 = ZEXT816(0);
    lVar4 = 0;
    local_88 = 0.0;
    _local_78 = ZEXT816(0);
    local_d8 = 0.0;
    local_68 = ZEXT816(0);
    local_b8 = 0.0;
  }
  else {
    _local_78 = ZEXT816(0);
    lVar6 = 0;
    local_68 = ZEXT816(0);
    lVar4 = 0;
    local_a8 = ZEXT816(0);
    local_b8 = fVar11;
    fVar8 = fVar9;
    fVar12 = 0.0;
    do {
      lVar1 = *(int64_t *)(*(int64_t *)(local_40 + 0x10) + lVar6 * 8);
      if (lVar4 == lVar1) {
        plVar2 = *(int64_t **)(lVar4 + 0x20);
        fVar7 = local_b8;
      }
      else {
        if (lVar1 != 0) {
          FUN_00d50b00();
        }
        if (lVar4 != 0) {
          FUN_00d50b20();
        }
        plVar2 = *(int64_t **)(lVar1 + 0x20);
        lVar4 = lVar1;
        fVar7 = local_b8;
      }
      if (plVar2 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      (**(code **)(*plVar2 + 0x4d8))();
      FUN_00d50b20();
      local_c8._0_8_ = *(uint64_t *)(lVar4 + 0x10);
      local_c8._8_8_ = 0;
      FUN_01db1970();
      local_b8 = fVar8;
      if (fVar8 <= fVar12) {
        local_b8 = fVar12;
      }
      local_68._4_4_ = 0;
      local_68._0_4_ = (float)local_68._0_4_ + fVar7;
      local_88 = (float)local_78._4_4_ + (float)((uint64_t)local_c8._0_8_ >> 0x20);
      local_78._4_4_ = local_88;
      local_78._0_4_ = (float)local_78._0_4_ + (float)local_c8._0_8_;
      fStack_70 = fStack_70 + 0.0;
      fStack_6c = fStack_6c + 0.0;
      local_c8 = maxps(local_c8,local_a8);
      lVar6 = lVar6 + 1;
      iVar5 = *(int *)(local_40 + 0xc);
      local_a8 = local_c8;
      fVar12 = local_b8;
    } while (lVar6 < iVar5);
    local_d8 = local_c8._4_4_;
  }
  FUN_01e42030();
  FUN_01d8c6e0();
  uVar10 = FUN_01e59910();
  fVar12 = (float)((uint64_t)uVar10 >> 0x20);
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  fVar7 = ((float)iVar5 + g_02390d00) * g_023b36b0;
  fVar11 = ((float)local_68._0_4_ + fVar7) - fVar11;
  fVar8 = (float)uVar10 + fVar11;
  if ((fVar11 == 0.0) && (!NAN(fVar11))) {
    fVar8 = (float)uVar10;
  }
  local_b8 = local_b8 - fVar9;
  auVar13._4_4_ = fVar12;
  auVar13._0_4_ = fVar8;
  auVar13._8_4_ = extraout_XMM0_Dc;
  auVar13._12_4_ = extraout_XMM0_Dd;
  auVar14._4_4_ = fVar12;
  auVar14._0_4_ = fVar12 + local_b8;
  auVar14._8_4_ = extraout_XMM0_Dd;
  auVar14._12_4_ = extraout_XMM0_Dd;
  auVar14 = insertps(auVar13,auVar14,0x10);
  local_68._0_4_ = auVar14._0_4_;
  if ((local_b8 == 0.0) && (!NAN(local_b8))) {
    local_68._0_4_ = fVar8;
  }
  FUN_01e42030();
  FUN_01d8c6e0();
  FUN_01e5bc80(local_68._0_4_);
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  FUN_01e42030();
  FUN_01d8c6e0();
  uVar10 = FUN_01e59080();
  fVar11 = (float)((uint64_t)uVar10 >> 0x20);
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  fVar12 = ((float)local_78._0_4_ + fVar7 + g_023908ec) - (float)local_c8._0_4_;
  fVar9 = (float)uVar10 + fVar12;
  if ((fVar12 == 0.0) && (!NAN(fVar12))) {
    fVar9 = (float)uVar10;
  }
  local_d8 = local_d8 - (local_88 + fVar7);
  auVar15._4_4_ = fVar11;
  auVar15._0_4_ = fVar9;
  auVar15._8_4_ = extraout_XMM0_Dc_00;
  auVar15._12_4_ = extraout_XMM0_Dd_00;
  auVar3._4_4_ = fVar11;
  auVar3._0_4_ = fVar11 + local_d8;
  auVar3._8_4_ = extraout_XMM0_Dd_00;
  auVar3._12_4_ = extraout_XMM0_Dd_00;
  auVar14 = insertps(auVar15,auVar3,0x10);
  local_78._0_4_ = auVar14._0_4_;
  if ((local_d8 == 0.0) && (!NAN(local_d8))) {
    local_78._0_4_ = fVar9;
  }
  FUN_01e42030();
  FUN_01d8c6e0();
  FUN_01e5bc90(local_78._0_4_);
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((char)this_ptr[0x27] != '\x01') {
    *(void*)(this_ptr + 0x27) = 1;
    (**(code **)(*this_ptr + 0x920))();
    (**(code **)(*this_ptr + 0x620))();
  }
  if (0 < *(int *)(local_40 + 0xc)) {
    lVar6 = 0;
    do {
      lVar1 = *(int64_t *)(*(int64_t *)(local_40 + 0x10) + lVar6 * 8);
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 < *(int *)(local_40 + 0xc));
  }
  (**(code **)(*this_ptr + 0x920))();
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}

