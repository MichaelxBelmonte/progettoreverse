// Function: FUN_006cc2c0
// Address: 006cc2c0
// Size: 1984 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_006cc2c0(uint64_t param_1,uint64_t param_2)

{
  int64_t lVar1;
  uint32_t uVar2;
  double dVar3;
  uint8_t auVar4 [16];
  uint8_t auVar5 [16];
  int64_t *plVar6;
  byte bVar7;
  uint64_t uVar8;
  int64_t lVar9;
  int64_t this_ptr;
  uint32_t uVar10;
  float fVar11;
  uint64_t uVar12;
  float fVar13;
  float extraout_XMM0_Dc;
  float extraout_XMM0_Dd;
  uint64_t in_XMM1_Qb;
  uint8_t auVar14 [16];
  uint8_t auVar15 [16];
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  uint8_t local_68 [16];
  int64_t local_50;
  char local_48;
  int64_t *local_40;
  char local_38;
  
  FUN_006ccf60();
  lVar1 = g_026e1810;
  if (g_026e1810 != 0) {
    FUN_00d50b00();
  }
  dVar3 = (double)FUN_00e7d6f0();
  uVar8 = (uint64_t)(dVar3 * g_023907c0);
  dVar3 = dVar3 * g_023907c0 - g_023907c8;
  uVar10 = FUN_0071a120();
  if ((((local_38 == '\0') && (local_40 != (int64_t *)0x0)) &&
      (uVar10 = FUN_00d50b00(), local_38 != '\0')) && (local_40 != (int64_t *)0x0)) {
    uVar10 = FUN_00d50b20();
  }
  bVar7 = (byte)(((int64_t)dVar3 & (int64_t)uVar8 >> 0x3f | uVar8) / 3);
  local_50 = lVar1;
  local_48 = '\0';
  FUN_000175c0(uVar10,&local_50);
  plVar6 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != (int64_t *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
       (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if (plVar6 != (int64_t *)0x0) {
    local_38 = '\0';
    local_40 = plVar6;
    bVar7 = FUN_00c70bc0();
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  FUN_00d50b20();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if ((plVar6 != (int64_t *)0x0 & bVar7) == 0) {
    lVar1 = *(int64_t *)(this_ptr + 0x120);
    if (lVar1 != 0) {
      lVar9 = *(int64_t *)(this_ptr + 0x128);
      if (lVar9 != lVar1) {
        FUN_00d50b00();
        *(int64_t *)(this_ptr + 0x128) = lVar1;
        if (lVar9 != 0) {
          FUN_00d50b20();
        }
      }
      if (*(int64_t *)(this_ptr + 0x120) != 0) {
        *(void*)(this_ptr + 0x120) = 0;
        FUN_00d50b20();
      }
      uVar12 = (**(code **)(**(int64_t **)(this_ptr + 0x128) + 0x4d8))();
      FUN_01e53c20();
      uVar10 = (**(code **)(*local_40 + 0x4d8))();
      local_a8 = (float)param_2;
      fStack_a4 = (float)((uint64_t)param_2 >> 0x20);
      fStack_a0 = (float)in_XMM1_Qb;
      fStack_9c = (float)((uint64_t)in_XMM1_Qb >> 0x20);
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      (**(code **)(**(int64_t **)(this_ptr + 0x128) + 0x478))();
      auVar5._8_4_ = fStack_a0;
      auVar5._0_8_ = param_2;
      auVar5._12_4_ = fStack_9c;
      fVar11 = local_a8 - (float)uVar12;
      fVar13 = fStack_a4 - (float)((uint64_t)uVar12 >> 0x20);
      auVar14._4_4_ = fVar13;
      auVar14._0_4_ = fVar11;
      auVar14._8_4_ = fStack_a0 - extraout_XMM0_Dc;
      auVar14._12_4_ = fStack_9c - extraout_XMM0_Dd;
      g_0280be28 = extractps(auVar14,1);
      auVar15._0_4_ = local_a8 - fVar11;
      auVar15._4_4_ = fStack_a4 - fVar13;
      auVar15._8_4_ = fStack_a0 - (fStack_a0 - extraout_XMM0_Dc);
      auVar15._12_4_ = fStack_9c - (fStack_9c - extraout_XMM0_Dd);
      auVar14 = blendps(auVar15,auVar5,0xd);
      FUN_01e53c20();
      local_68._0_4_ = auVar14._0_4_;
      (**(code **)(*local_40 + 0x9b8))(local_68._0_4_);
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_01e53c20();
      (**(code **)(*local_40 + 0x4d0))(uVar10);
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (*(int64_t *)(this_ptr + 200) != 0) {
        FUN_00017790();
      }
    }
  }
  else if (*(int64_t *)(this_ptr + 0x128) != 0) {
    FUN_01e53c20();
    uVar10 = (**(code **)(*local_40 + 0x4d8))();
    local_68._8_8_ = in_XMM1_Qb;
    local_68._0_8_ = param_2;
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    uVar2 = (uint32_t)((uint64_t)in_XMM1_Qb >> 0x20);
    fVar11 = (float)((uint64_t)param_2 >> 0x20);
    auVar4._4_4_ = fVar11;
    auVar4._0_4_ = fVar11 + g_0280be28;
    auVar4._8_4_ = uVar2;
    auVar4._12_4_ = uVar2;
    auVar14 = insertps(local_68,auVar4,0x10);
    FUN_01e53c20();
    local_68._0_4_ = auVar14._0_4_;
    (**(code **)(*local_40 + 0x9b8))(local_68._0_4_);
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_01e53c20();
    (**(code **)(*local_40 + 0x4d0))(uVar10);
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_01e53c20();
    plVar6 = local_40;
    lVar1 = *(int64_t *)(this_ptr + 0x128);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    (**(code **)(*plVar6 + 0x450))();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (*(int64_t *)(this_ptr + 200) != 0) {
      FUN_00017790();
    }
    lVar1 = *(int64_t *)(this_ptr + 0x120);
    lVar9 = *(int64_t *)(this_ptr + 0x128);
    if (lVar1 != lVar9) {
      if (lVar9 != 0) {
        FUN_00d50b00();
      }
      *(int64_t *)(this_ptr + 0x120) = lVar9;
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar9 = *(int64_t *)(this_ptr + 0x128);
    }
    if (lVar9 != 0) {
      *(void*)(this_ptr + 0x128) = 0;
      FUN_00d50b20();
    }
  }
  lVar1 = g_026e1800;
  if (g_026e1800 != 0) {
    FUN_00d50b00();
  }
  dVar3 = (double)FUN_00e7d6f0();
  uVar8 = (uint64_t)(dVar3 * g_023907c0);
  dVar3 = dVar3 * g_023907c0 - g_023907c8;
  uVar10 = FUN_0071a120();
  if ((((local_38 == '\0') && (local_40 != (int64_t *)0x0)) &&
      (uVar10 = FUN_00d50b00(), local_38 != '\0')) && (local_40 != (int64_t *)0x0)) {
    uVar10 = FUN_00d50b20();
  }
  bVar7 = (byte)(((int64_t)dVar3 & (int64_t)uVar8 >> 0x3f | uVar8) / 3);
  local_50 = lVar1;
  local_48 = '\0';
  FUN_000175c0(uVar10,&local_50);
  plVar6 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != (int64_t *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
       (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if (plVar6 != (int64_t *)0x0) {
    local_38 = '\0';
    local_40 = plVar6;
    bVar7 = FUN_00c70bc0();
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  FUN_00d50b20();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if ((plVar6 != (int64_t *)0x0 & bVar7) == 0) {
    if (*(int64_t *)(this_ptr + 0x110) != 0) {
      FUN_01e40eb0();
      plVar6 = local_40;
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar6 != (int64_t *)0x0) {
        (**(code **)(**(int64_t **)(this_ptr + 0x110) + 0x478))();
      }
    }
    if (*(int64_t *)(this_ptr + 0x118) != 0) {
      FUN_01e40eb0();
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (local_40 != (int64_t *)0x0) {
        (**(code **)(**(int64_t **)(this_ptr + 0x118) + 0x478))();
      }
    }
  }
  else {
    if (*(int64_t *)(this_ptr + 0x110) != 0) {
      FUN_01e40eb0();
      plVar6 = local_40;
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar6 == (int64_t *)0x0) {
        FUN_01e53c20();
        plVar6 = local_40;
        lVar1 = *(int64_t *)(this_ptr + 0x110);
        if (lVar1 != 0) {
          FUN_00d50b00();
        }
        (**(code **)(*plVar6 + 0x450))();
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    if (*(int64_t *)(this_ptr + 0x118) != 0) {
      FUN_01e40eb0();
      plVar6 = local_40;
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar6 == (int64_t *)0x0) {
        FUN_01e53c20();
        plVar6 = local_40;
        lVar1 = *(int64_t *)(this_ptr + 0x118);
        if (lVar1 != 0) {
          FUN_00d50b00();
        }
        (**(code **)(*plVar6 + 0x450))();
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
  }
  return;
}

