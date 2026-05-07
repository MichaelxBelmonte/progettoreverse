// Function: FUN_01e15090
// Address: 01e15090
// Size: 1567 bytes
// Class: GNList
// === GNList properties ===
//   GNInt           _archiveVersion
//   bool            _awakesObjectsAfterDecoding
//   bool            _isCancelled
//   GNInt           _currentObjectGraphIdx
//   GNInt           _predictedDecodedValuesIndex


void FUN_01e15090(uint64_t param_1,uint64_t param_2)

{
  int64_t *plVar1;
  uint8_t auVar2 [16];
  uint8_t auVar3 [16];
  uint8_t auVar4 [16];
  float fVar5;
  byte bVar6;
  bool bVar7;
  int64_t *this_ptr;
  float fVar8;
  float fVar10;
  uint8_t auVar9 [16];
  float fVar11;
  float fVar12;
  float fVar13;
  float in_XMM1_Dc;
  uint32_t uVar14;
  float in_XMM1_Dd;
  uint32_t uVar15;
  int64_t local_78;
  char local_70;
  float local_68;
  float fStack_64;
  uint32_t uStack_60;
  uint32_t uStack_5c;
  uint8_t local_58 [8];
  float fStack_50;
  float fStack_4c;
  int64_t local_40;
  char local_38;
  int64_t local_30;
  char local_28;
  
  fVar12 = (float)((uint64_t)param_2 >> 0x20);
  fVar11 = (float)param_2;
  if (*(char *)((int64_t)this_ptr + 0x16d) == '\0') {
    if (*(char *)((int64_t)this_ptr + 0x16c) == '\0') {
      return;
    }
  }
  else if (*(char *)((int64_t)this_ptr + 0x16c) == '\0') {
    (**(code **)(*this_ptr + 0x7b0))();
    if (local_30 == 0) {
      bVar6 = 0;
    }
    else {
      (**(code **)(*this_ptr + 0x7b8))();
      if (local_78 == 0) {
        bVar6 = 1;
      }
      else {
        (**(code **)(*this_ptr + 0x7b8))();
        bVar6 = FUN_01d95200();
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        bVar6 = bVar6 ^ 1;
      }
      if ((local_70 != '\0') && (local_78 != 0)) {
        FUN_00d50b20();
      }
    }
    if ((local_28 != '\0') && (local_30 != 0)) {
      FUN_00d50b20();
    }
    if (bVar6 != 0) {
      (**(code **)(*this_ptr + 0x4d8))();
      local_58._4_4_ = fVar12;
      local_58._0_4_ = fVar11;
      fStack_50 = in_XMM1_Dc;
      fStack_4c = in_XMM1_Dd;
      (**(code **)(*this_ptr + 0x7b0))();
      FUN_01e3f820();
      if ((local_28 != '\0') && (local_30 != 0)) {
        FUN_00d50b20();
      }
      fVar11 = fVar11 + g_02390d00;
      auVar9._4_4_ = fVar12;
      auVar9._0_4_ = fVar11;
      auVar9._8_4_ = in_XMM1_Dc;
      auVar9._12_4_ = in_XMM1_Dd;
      auVar9 = blendps(_local_58,auVar9,1);
      (**(code **)(*this_ptr + 0x4e8))(auVar9._0_8_);
    }
  }
  if (*(char *)((int64_t)this_ptr + 0x16c) == '\0') {
    FUN_01ebf700();
    FUN_01e3f820();
    fVar11 = fVar11 - (*(float *)(this_ptr + 0x2f) + *(float *)(this_ptr + 0x2f));
    FUN_01f15dc0();
    if ((local_28 != '\0') && (local_30 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    FUN_01ebf700();
    FUN_01f15dc0();
    if ((local_28 != '\0') && (local_30 != 0)) {
      FUN_00d50b20();
    }
  }
  plVar1 = this_ptr + 0x27;
  (**(code **)(*(int64_t *)*plVar1 + 0x3c0))();
  (**(code **)(*(int64_t *)*plVar1 + 0x378))();
  if (local_30 != 0) {
    (**(code **)(*(int64_t *)*plVar1 + 0x378))();
    FUN_00d8c7a0();
  }
  FUN_00e7b4e0();
  FUN_01eac1b0();
  if (((local_30 != 0) && (local_70 != '\0')) && (local_78 != 0)) {
    FUN_00d50b20();
  }
  if ((local_28 != '\0') && (local_30 != 0)) {
    FUN_00d50b20();
  }
  fVar13 = 0.0;
  uVar14 = 0;
  uVar15 = 0;
  fVar8 = (float)this_ptr[0x2f];
  fVar10 = (float)((uint64_t)this_ptr[0x2f] >> 0x20);
  fVar5 = fVar11;
  if (fVar8 < g_02390124) {
    fVar5 = fVar11 + g_02390124;
  }
  if (*(char *)((int64_t)this_ptr + 0x16c) != '\0') {
    fVar11 = fVar5;
  }
  local_58._0_4_ = fVar8 + fVar8 + fVar11;
  local_58._4_4_ = fVar10 + fVar10 + fVar12;
  fStack_50 = in_XMM1_Dc + 0.0;
  fStack_4c = in_XMM1_Dd + 0.0;
  if ((char)this_ptr[0x37] == '\0') goto LAB_01e15631;
  if (*(char *)((int64_t)this_ptr + 0x16c) == '\0') {
    if (*(char *)((int64_t)this_ptr + 0x16d) == '\0') goto LAB_01e15631;
    fVar11 = g_02390124;
    (**(code **)(*this_ptr + 0x7b0))();
    if (local_30 == 0) {
      bVar7 = false;
    }
    else {
      (**(code **)(*this_ptr + 0x7b0))();
      FUN_01e3f820();
      bVar7 = (float)local_58._0_4_ < fVar11;
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
    if ((local_28 != '\0') && (local_30 != 0)) {
      FUN_00d50b20();
    }
    local_68 = fVar11;
    fVar12 = fVar13;
    uStack_60 = uVar14;
    uStack_5c = uVar15;
    if (bVar7) {
      (**(code **)(*this_ptr + 0x7b0))();
      FUN_01e3f820();
      local_68 = fVar11;
      fVar12 = fVar13;
      uStack_60 = uVar14;
      uStack_5c = uVar15;
      if ((local_28 != '\0') && (local_30 != 0)) {
        FUN_00d50b20();
      }
      auVar3._4_4_ = fVar13;
      auVar3._0_4_ = fVar11;
      auVar3._8_4_ = uVar14;
      auVar3._12_4_ = uVar15;
      _local_58 = blendps(_local_58,auVar3,0xd);
    }
    (**(code **)(*this_ptr + 0x7b0))();
    if (local_30 == 0) {
      bVar7 = false;
      fStack_64 = fVar12;
    }
    else {
      (**(code **)(*this_ptr + 0x7b0))();
      FUN_01e3f820();
      fStack_64 = fVar12;
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      bVar7 = (float)local_58._4_4_ < fVar12;
    }
    if ((local_28 != '\0') && (local_30 != 0)) {
      FUN_00d50b20();
    }
    if (!bVar7) goto LAB_01e15631;
    (**(code **)(*this_ptr + 0x7b0))();
    FUN_01e3f820();
    if ((local_28 != '\0') && (local_30 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    fVar11 = g_02390124;
    (**(code **)(*this_ptr + 0x7b0))();
    if (local_30 == 0) {
      bVar7 = false;
    }
    else {
      (**(code **)(*this_ptr + 0x7b0))();
      FUN_01e3f820();
      bVar7 = (float)local_58._0_4_ < fVar11;
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
    if ((local_28 != '\0') && (local_30 != 0)) {
      FUN_00d50b20();
    }
    local_68 = fVar11;
    fVar12 = fVar13;
    uStack_60 = uVar14;
    uStack_5c = uVar15;
    if (bVar7) {
      (**(code **)(*this_ptr + 0x7b0))();
      FUN_01e3f820();
      local_68 = fVar11;
      fVar12 = fVar13;
      uStack_60 = uVar14;
      uStack_5c = uVar15;
      if ((local_28 != '\0') && (local_30 != 0)) {
        FUN_00d50b20();
      }
      auVar2._4_4_ = fVar13;
      auVar2._0_4_ = fVar11;
      auVar2._8_4_ = uVar14;
      auVar2._12_4_ = uVar15;
      _local_58 = blendps(_local_58,auVar2,0xd);
    }
    (**(code **)(*this_ptr + 0x7b0))();
    if (local_30 == 0) {
      bVar7 = false;
      fStack_64 = fVar12;
    }
    else {
      (**(code **)(*this_ptr + 0x7b0))();
      FUN_01e3f820();
      fStack_64 = fVar12;
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      bVar7 = (float)local_58._4_4_ < fVar12;
    }
    if ((local_28 != '\0') && (local_30 != 0)) {
      FUN_00d50b20();
    }
    if (!bVar7) goto LAB_01e15631;
    (**(code **)(*this_ptr + 0x7b0))();
    FUN_01e3f820();
    if ((local_28 != '\0') && (local_30 != 0)) {
      FUN_00d50b20();
    }
  }
  auVar4._4_4_ = fStack_64;
  auVar4._0_4_ = local_68;
  auVar4._8_4_ = uStack_60;
  auVar4._12_4_ = uStack_5c;
  blendps(_local_58,auVar4,2);
LAB_01e15631:
  (**(code **)(*this_ptr + 0x4e8))();
  FUN_01ebf700();
  FUN_01e3f820();
  FUN_01f15dc0();
  if ((local_28 != '\0') && (local_30 != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(*(int64_t *)*plVar1 + 0x3c0))();
  return;
}

