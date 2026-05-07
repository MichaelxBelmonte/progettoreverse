// Function: FUN_01bb5160
// Address: 01bb5160
// Size: 1782 bytes
// Class: GNList
// === GNList properties ===
//   GNInt           _archiveVersion
//   bool            _awakesObjectsAfterDecoding
//   bool            _isCancelled
//   GNInt           _currentObjectGraphIdx
//   GNInt           _predictedDecodedValuesIndex


void FUN_01bb5160(void)

{
  int64_t *plVar1;
  int64_t lVar2;
  char cVar3;
  uint32_t uVar4;
  int64_t lVar5;
  char *pcVar6;
  int iVar7;
  int64_t *this_ptr;
  bool bVar8;
  float fVar9;
  float fVar10;
  int64_t local_120;
  char local_118;
  float local_74;
  float local_64;
  int64_t local_60;
  char local_58 [8];
  int64_t local_50;
  uint64_t local_48;
  int local_40;
  char local_38 [8];
  
  lVar2 = local_60;
  (**(code **)(*this_ptr + 0x3f8))();
  if ((((local_58[0] == '\0') && (local_60 != 0)) && (FUN_00d50b00(), local_58[0] != '\0')) &&
     (local_60 != 0)) {
    FUN_00d50b20();
  }
  if (*(int *)(local_60 + 0xc) == 1) {
    FUN_00d23310();
    pcVar6 = local_38;
    if (local_58[0] != '\0') {
      pcVar6 = local_58;
    }
    local_38[0] = local_58[0];
    *pcVar6 = '\0';
    if ((local_58[0] != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38[0] == '\0') && (local_60 != 0)) {
      FUN_00d50b00();
    }
    plVar1 = (int64_t *)this_ptr[0x1c];
    cVar3 = (**(code **)(*this_ptr + 0x698))();
    if ((cVar3 == '\0') || (cVar3 = (**(code **)(*this_ptr + 0x688))(), cVar3 == '\0')) {
      bVar8 = false;
      uVar4 = 0;
    }
    else {
      local_120 = local_60;
      local_118 = '\0';
      uVar4 = (**(code **)(*this_ptr + 0x6d0))();
      bVar8 = true;
    }
    (**(code **)(*plVar1 + 0x998))(uVar4);
    if (((bVar8) && (local_118 != '\0')) && (local_120 != 0)) {
      FUN_00d50b20();
    }
    cVar3 = (**(code **)(*this_ptr + 0x6d0))();
    if (cVar3 == '\0') {
      plVar1 = (int64_t *)this_ptr[0x1c];
      FUN_00e9aaa0();
      if (local_58[0] == '\0') {
        if (local_60 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_58[0] = '\0';
      }
      (**(code **)(*plVar1 + 0x958))();
      if (local_60 != 0) {
        FUN_00d50b20();
      }
      if ((local_58[0] != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      uVar4 = (**(code **)(*this_ptr + 0x6c8))();
      plVar1 = (int64_t *)this_ptr[0x1c];
      (**(code **)(*(int64_t *)this_ptr[0x1d] + 0x378))(uVar4);
      if (local_58[0] == '\0') {
        if (local_60 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_58[0] = '\0';
      }
      (**(code **)(*plVar1 + 0x958))();
      if (local_60 != 0) {
        FUN_00d50b20();
      }
      if ((local_58[0] != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
    }
    if (local_60 != 0) {
      FUN_00d50b20();
    }
  }
  else if (*(int *)(local_60 + 0xc) == 0) {
    (**(code **)(*(int64_t *)this_ptr[0x1c] + 0x998))();
    plVar1 = (int64_t *)this_ptr[0x1c];
    FUN_00e9aaa0();
    if (local_58[0] == '\0') {
      if (local_60 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_58[0] = '\0';
    }
    (**(code **)(*plVar1 + 0x958))();
    if (local_60 != 0) {
      FUN_00d50b20();
    }
    if ((local_58[0] != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_58[0] = '\0';
    local_60 = 0;
    local_50 = lVar2;
    local_48 = 0xffffffff;
    local_40 = 0;
    bVar8 = true;
    local_74 = g_02391074;
    local_64 = g_02391078;
    local_48._4_4_ = 0;
    while( true ) {
      if (local_48._4_4_ != 0) {
        if (local_48._4_4_ < 1) {
          iVar7 = -local_48._4_4_;
        }
        else {
          iVar7 = (int)local_48 - local_48._4_4_;
          local_48 = CONCAT44(local_48._4_4_,iVar7);
          FUN_00d23690();
          local_40 = local_40 + local_48._4_4_;
          iVar7 = 0;
        }
        local_48 = CONCAT44(iVar7,(int)local_48);
      }
      lVar5 = (int64_t)(int)local_48;
      iVar7 = (int)local_48 + 1;
      local_48 = CONCAT44(local_48._4_4_,iVar7);
      if (*(int *)(local_50 + 0xc) <= iVar7) break;
      local_60 = *(int64_t *)(*(int64_t *)(local_50 + 0x10) + 8 + lVar5 * 8);
      cVar3 = (**(code **)(*this_ptr + 0x6d0))();
      if (cVar3 != '\0') {
        fVar10 = (float)(**(code **)(*this_ptr + 0x6c8))();
        fVar9 = fVar10;
        if (local_64 <= fVar10) {
          fVar9 = local_64;
        }
        if (fVar10 <= local_74) {
          fVar10 = local_74;
        }
        bVar8 = false;
        local_74 = fVar10;
        local_64 = fVar9;
      }
    }
    FUN_00083b20();
    plVar1 = (int64_t *)this_ptr[0x1c];
    cVar3 = (**(code **)(*this_ptr + 0x698))();
    if (cVar3 != '\0') {
      (**(code **)(*this_ptr + 0x688))();
    }
    (**(code **)(*plVar1 + 0x998))();
    plVar1 = (int64_t *)this_ptr[0x1c];
    if (((local_64 != local_74) || (NAN(local_64) || NAN(local_74))) || (bVar8)) {
      FUN_00e99dd0();
      if (local_58[0] == '\0') {
        if (local_60 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_58[0] = '\0';
      }
      (**(code **)(*plVar1 + 0x958))();
      if (local_60 != 0) {
        FUN_00d50b20();
      }
      if ((local_58[0] != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      (**(code **)(*(int64_t *)this_ptr[0x1d] + 0x378))(local_64);
      if (local_58[0] == '\0') {
        if (local_60 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_58[0] = '\0';
      }
      (**(code **)(*plVar1 + 0x958))();
      if (local_60 != 0) {
        FUN_00d50b20();
      }
      if ((local_58[0] != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
    }
    if (lVar2 == 0) {
      return;
    }
  }
  FUN_00d50b20();
  return;
}

