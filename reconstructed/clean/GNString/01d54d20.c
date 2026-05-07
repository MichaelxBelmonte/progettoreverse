// Function: FUN_01d54d20
// Address: 01d54d20
// Size: 1164 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_01d54d20(void)

{
  int64_t lVar1;
  int64_t *plVar2;
  int64_t lVar3;
  int64_t this_ptr;
  int64_t lVar4;
  bool bVar5;
  float fVar6;
  float fVar7;
  uint64_t uVar8;
  uint8_t auVar9 [16];
  float fVar10;
  uint8_t local_c0 [8];
  uint8_t local_b8;
  uint8_t local_b0 [8];
  uint8_t local_a8;
  int64_t local_a0;
  char local_98;
  int64_t local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  float local_70;
  float local_6c;
  int64_t local_68;
  char local_60;
  float local_58;
  uint32_t uStack_54;
  uint32_t uStack_50;
  uint32_t uStack_4c;
  float local_3c;
  int64_t local_38;
  
  lVar4 = *(int64_t *)(this_ptr + 0x10);
  if (lVar4 == 0) {
LAB_01d54d68:
    local_38 = 0;
    lVar1 = *(int64_t *)(this_ptr + 0x28);
  }
  else {
    FUN_00d50b00();
    local_38 = *(int64_t *)(this_ptr + 0x10);
    if (local_38 == 0) goto LAB_01d54d68;
    FUN_00d50b00();
    lVar1 = *(int64_t *)(this_ptr + 0x28);
  }
  if (lVar1 != 0) {
    FUN_00d50b00();
    uVar8 = FUN_01d553b0();
    lVar1 = local_68;
    if (local_60 == '\0') {
      if (local_68 != 0) {
        uVar8 = FUN_00d50b00();
      }
    }
    else {
      local_60 = '\0';
    }
    local_b8 = 1;
    FUN_01d534b0(uVar8,local_c0);
    lVar3 = local_a0;
    if (lVar4 == local_a0) {
      if ((local_98 != '\0') && (local_a0 != 0)) {
        FUN_00d50b20();
      }
    }
    else if (local_98 == '\0') {
      if (local_a0 != 0) {
        FUN_00d50b00();
      }
      bVar5 = lVar4 != 0;
      lVar4 = lVar3;
      if (bVar5) {
        FUN_00d50b20();
      }
    }
    else {
      bVar5 = lVar4 != 0;
      lVar4 = lVar3;
      if (bVar5) {
        FUN_00d50b20();
      }
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  if (*(int64_t *)(this_ptr + 0x20) == 0) goto LAB_01d54f6c;
  FUN_00d50b00();
  uVar8 = FUN_01d553b0();
  local_58 = (float)local_68;
  uStack_54 = (uint32_t)((uint64_t)local_68 >> 0x20);
  if (local_60 == '\0') {
    if (local_68 != 0) {
      uVar8 = FUN_00d50b00();
    }
  }
  else {
    local_60 = '\0';
  }
  lVar1 = local_38;
  local_a8 = 1;
  FUN_01d534b0(uVar8,local_b0);
  if (lVar1 == local_a0) {
    if ((local_98 != '\0') && (local_a0 != 0)) {
      FUN_00d50b20();
    }
LAB_01d54f56:
    lVar1 = CONCAT44(uStack_54,local_58);
  }
  else {
    if (local_98 != '\0') {
      if (local_38 == 0) {
        local_38 = local_a0;
      }
      else {
        FUN_00d50b20();
        local_38 = local_a0;
      }
      goto LAB_01d54f56;
    }
    if (local_a0 != 0) {
      FUN_00d50b00();
    }
    if (local_38 != 0) {
      local_38 = local_a0;
      FUN_00d50b20();
      goto LAB_01d54f56;
    }
    lVar1 = CONCAT44(uStack_54,local_58);
    local_38 = local_a0;
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
LAB_01d54f6c:
  lVar1 = *(int64_t *)(this_ptr + 0x18);
  if (*(int64_t *)(lVar1 + 0x30) != 0) {
    FUN_01d480c0();
    FUN_01d48370();
    (**(code **)(**(int64_t **)(lVar1 + 0x30) + 0x530))();
  }
  if (*(int64_t *)(this_ptr + 0x28) != 0) {
    fVar6 = *(float *)(*(int64_t *)(this_ptr + 0x10) + 0x48);
    local_3c = g_02390124;
    if (g_02390124 < fVar6) {
      local_3c = g_02390124 / fVar6;
    }
    local_6c = *(float *)(&g_024207d8 + (uint64_t)(g_02390124 < fVar6) * 4);
    fVar6 = 0.0;
    do {
      local_70 = (g_02390d34 - fVar6) * (g_02390d34 - fVar6);
      local_58 = 0.0;
      uStack_54 = 0;
      uStack_50 = 0;
      uStack_4c = 0;
      do {
        lVar1 = *(int64_t *)(*(int64_t *)(this_ptr + 0x18) + 0x30);
        if (lVar1 != 0) {
          FUN_00d50b00();
        }
        auVar9._4_4_ = uStack_54;
        auVar9._0_4_ = local_58;
        auVar9._8_4_ = uStack_50;
        auVar9._12_4_ = uStack_4c;
        fVar7 = SQRT((g_02390d34 - local_58) * (g_02390d34 - local_58) + local_70) / local_6c;
        fVar10 = g_02390124 - fVar7 * fVar7;
        fVar7 = 0.0;
        if (0.0 <= fVar10) {
          fVar7 = fVar10;
        }
        fVar10 = g_02390124;
        if (fVar7 <= g_02390124) {
          fVar10 = fVar7;
        }
        local_88 = '\0';
        auVar9 = insertps(ZEXT416((uint)fVar6),auVar9,0x10);
        local_90 = lVar4;
        FUN_01d49110(auVar9._0_8_,fVar10);
        if ((local_88 != '\0') && (local_90 != 0)) {
          FUN_00d50b20();
        }
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
        local_58 = local_58 + local_3c;
      } while (local_58 <= g_02390d2c);
      fVar6 = fVar6 + local_3c;
    } while (fVar6 <= g_02390d2c);
  }
  plVar2 = *(int64_t **)(*(int64_t *)(this_ptr + 0x18) + 0x30);
  if (plVar2 != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  local_80 = local_38;
  local_78 = '\0';
  (**(code **)(*plVar2 + 0x400))();
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  if (*(int64_t *)(*(int64_t *)(this_ptr + 0x18) + 0x30) != 0) {
    FUN_01d48390();
    FUN_01d481c0();
  }
  if (local_38 != 0) {
    FUN_00d50b20();
  }
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  return;
}

