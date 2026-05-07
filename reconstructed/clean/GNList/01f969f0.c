// Function: FUN_01f969f0
// Address: 01f969f0
// Size: 862 bytes
// Class: GNList
// === GNList properties ===
//   GNInt           _archiveVersion
//   bool            _awakesObjectsAfterDecoding
//   bool            _isCancelled
//   GNInt           _currentObjectGraphIdx
//   GNInt           _predictedDecodedValuesIndex


void FUN_01f969f0(void)

{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t *plVar3;
  void*arg1;
  int64_t this_ptr;
  float fVar4;
  uint8_t auVar5 [16];
  float fVar6;
  uint8_t auVar7 [16];
  int64_t *local_38;
  char local_30;
  
  if (*(int64_t *)(this_ptr + 0x158) == 0) {
    plVar3 = (int64_t *)FUN_00e8fc40();
    FUN_00152930();
    (**(code **)(*plVar3 + 0x18))();
    plVar1 = *(int64_t **)(this_ptr + 0x158);
    if (plVar1 == plVar3) {
      FUN_00d50b20();
    }
    else {
      *(int64_t **)(this_ptr + 0x158) = plVar3;
      if (plVar1 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
    }
    FUN_01e3f820();
    FUN_01d4eaa0();
    FUN_01d52700();
    FUN_01d52740();
    FUN_01d530c0();
    (**(code **)(*local_38 + 0x390))();
    if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    plVar1 = *(int64_t **)(this_ptr + 0x148);
    if (plVar1 != (int64_t *)0x0) {
      FUN_01d52740();
      if (local_30 == '\0') {
        if (local_38 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_30 = '\0';
      }
      FUN_01d530c0();
      (**(code **)(*plVar1 + 0x610))();
      if (local_38 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    FUN_01d52770();
  }
  fVar6 = *(float *)(this_ptr + 0x180) * *(float *)(this_ptr + 0x150) +
          *(float *)(this_ptr + 0x160);
  fVar4 = *(float *)(this_ptr + 0x150) * *(float *)(this_ptr + 0x184) +
          *(float *)(this_ptr + 0x164);
  FUN_01e40eb0();
  if (local_30 == '\0') {
    if (local_38 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_30 = '\0';
  }
  auVar5 = ZEXT416((uint)((float)((uint)fVar6 & g_023945e0 | g_02394dc8) + fVar6));
  auVar5 = roundss(auVar5,auVar5,0xb);
  auVar7 = ZEXT416((uint)((float)(g_023945e0 & (uint)fVar4 | g_02394dc8) + fVar4));
  auVar7 = roundss(auVar7,auVar7,0xb);
  auVar5 = insertps(auVar5,auVar7,0x10);
  FUN_01e437f0(auVar5._0_8_);
  if (local_38 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  fVar4 = *(float *)(this_ptr + 0x150) * (float)*(void*)(this_ptr + 0x188) +
          (float)*(void*)(this_ptr + 0x168);
  fVar6 = *(float *)(this_ptr + 0x150) *
          (float)((uint64_t)*(void*)(this_ptr + 0x188) >> 0x20) +
          (float)((uint64_t)*(void*)(this_ptr + 0x168) >> 0x20);
  auVar5._0_4_ = (float)(g_023945e0 & (uint)fVar4 | g_023945f0) + fVar4;
  auVar5._4_4_ = (float)(_UNK_023945e4 & (uint)fVar6 | _UNK_023945f4) + fVar6;
  auVar5._8_4_ = _UNK_023945f8 + 0.0;
  auVar5._12_4_ = _UNK_023945fc + 0.0;
  roundps(auVar5,auVar5,0xb);
  FUN_01d48370();
  plVar1 = (int64_t *)*arg1;
  FUN_01e3f820();
  (**(code **)(*plVar1 + 0x390))();
  lVar2 = *(int64_t *)(this_ptr + 0x158);
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  FUN_01d49070();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  FUN_01d48390();
  return;
}

