// Function: FUN_01bb5f00
// Address: 01bb5f00
// Size: 634 bytes
// Class: GNList
// === GNList properties ===
//   GNInt           _archiveVersion
//   bool            _awakesObjectsAfterDecoding
//   bool            _isCancelled
//   GNInt           _currentObjectGraphIdx
//   GNInt           _predictedDecodedValuesIndex


uint64_t FUN_01bb5f00(uint64_t param_1,char param_2)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t lVar3;
  char cVar4;
  uint uVar5;
  int64_t *plVar6;
  int64_t *this_ptr;
  int64_t lVar7;
  float fVar8;
  int64_t local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  float local_5c;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  char local_40;
  char local_31;
  
  uVar5 = (**(code **)(*this_ptr + 0x688))();
  plVar6 = (int64_t *)(uint64_t)uVar5;
  cVar4 = (char)uVar5;
  if ((cVar4 != '\0') && (param_2 != '\0')) {
    (**(code **)(*this_ptr + 0x3f8))();
    lVar2 = local_48;
    if ((local_40 == '\0') &&
       (((local_48 != 0 && (FUN_00d50b00(), local_40 != '\0')) && (local_48 != 0)))) {
      FUN_00d50b20();
    }
    local_31 = cVar4;
    if (0 < *(int *)(lVar2 + 0xc)) {
      lVar7 = 0;
      do {
        lVar1 = *(int64_t *)(*(int64_t *)(lVar2 + 0x10) + lVar7 * 8);
        if (lVar1 != 0) {
          FUN_00d50b00();
        }
        plVar6 = (int64_t *)this_ptr[0x1d];
        (**(code **)(*(int64_t *)this_ptr[0x1c] + 0x960))();
        local_58 = local_48;
        local_50 = 0;
        if (local_40 == '\0') {
          if (local_48 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_40 = '\0';
        }
        local_50 = '\x01';
        fVar8 = (float)(**(code **)(*plVar6 + 0x380))();
        local_5c = fVar8;
        if ((local_50 != '\0') && (local_58 != 0)) {
          fVar8 = (float)FUN_00d50b20();
        }
        if ((local_40 != '\0') && (local_48 != 0)) {
          fVar8 = (float)FUN_00d50b20();
        }
        local_88 = '\0';
        local_90 = lVar1;
        FUN_019a54a0(fVar8,&local_90);
        lVar3 = local_48;
        if (local_40 == '\0') {
          if (((local_48 != 0) && (FUN_00d50b00(), local_40 != '\0')) && (local_48 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_40 = '\0';
        }
        if ((local_88 != '\0') && (local_90 != 0)) {
          FUN_00d50b20();
        }
        if (lVar3 == 0) {
          local_68 = '\0';
          local_70 = lVar1;
          (**(code **)(*this_ptr + 0x6c0))(local_5c);
          if ((local_68 != '\0') && (local_70 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_78 = '\0';
          local_80 = lVar1;
          fVar8 = (float)FUN_00d459e0();
          (**(code **)(*this_ptr + 0x6c0))(local_5c + fVar8);
          if ((local_78 != '\0') && (local_80 != 0)) {
            FUN_00d50b20();
          }
          FUN_00d50b20();
        }
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
        lVar7 = lVar7 + 1;
      } while (lVar7 < *(int *)(lVar2 + 0xc));
    }
    FUN_00d50b20();
    plVar6 = (int64_t *)CONCAT71((int7)((uint64_t)plVar6 >> 8),local_31);
  }
  return (uint64_t)plVar6 & 0xffffffff;
}

