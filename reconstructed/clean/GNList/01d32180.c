// Function: FUN_01d32180
// Address: 01d32180
// Size: 872 bytes
// Class: GNList
// === GNList properties ===
//   GNInt           _archiveVersion
//   bool            _awakesObjectsAfterDecoding
//   bool            _isCancelled
//   GNInt           _currentObjectGraphIdx
//   GNInt           _predictedDecodedValuesIndex


void FUN_01d32180(uint64_t param_1)

{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t *this_ptr;
  int64_t lVar4;
  int64_t local_d8;
  char local_d0;
  int64_t local_b0;
  char local_a8;
  int64_t local_a0;
  char local_98;
  int64_t local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  int64_t local_70;
  int64_t local_68;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  if (*(char *)((int64_t)this_ptr + 0x41) == '\0') {
    (**(code **)(*this_ptr + 0x520))();
    if (local_d0 == '\0') {
      if (local_d8 == 0) {
        return;
      }
      FUN_00d50b00();
    }
    else if (local_d8 == 0) {
      return;
    }
    if (0 < *(int *)(local_d8 + 0xc)) {
      lVar4 = 0;
      do {
        plVar1 = *(int64_t **)(*(int64_t *)(local_d8 + 0x10) + lVar4 * 8);
        FUN_01d2b630();
        local_60 = local_50;
        local_58 = 0;
        if (local_48 == '\0') {
          if (local_50 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_48 = '\0';
        }
        local_58 = '\x01';
        FUN_019ba260();
        lVar2 = local_40;
        if (local_38 == '\0') {
          if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_38 = '\0';
        }
        if ((local_58 != '\0') && (local_60 != 0)) {
          FUN_00d50b20();
        }
        local_68 = lVar2;
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
        lVar2 = g_027edfd0;
        if (g_027edfd0 != 0) {
          FUN_00d50b00();
        }
        local_b0 = lVar2;
        local_a8 = '\x01';
        FUN_01ccab60(param_1,&local_b0);
        lVar2 = local_40;
        if (local_38 == '\0') {
          if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_38 = '\0';
        }
        if ((local_a8 != '\0') && (local_b0 != 0)) {
          FUN_00d50b20();
        }
        local_70 = lVar2;
        FUN_00d4efa0();
        local_a0 = lVar2;
        local_98 = '\0';
        FUN_00c841b0(param_1,&local_a0);
        lVar2 = local_40;
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if ((local_98 != '\0') && (local_a0 != 0)) {
          FUN_00d50b20();
        }
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
        lVar3 = local_70;
        if (lVar2 != 0) {
          local_90 = local_68;
          local_88 = '\0';
          local_80 = local_70;
          local_78 = '\0';
          (**(code **)(*plVar1 + 0x90))(param_1,&local_80);
          if ((local_78 != '\0') && (local_80 != 0)) {
            FUN_00d50b20();
          }
          if ((local_88 != '\0') && (local_90 != 0)) {
            FUN_00d50b20();
          }
        }
        if (lVar3 != 0) {
          FUN_00d50b20();
        }
        if (local_68 != 0) {
          FUN_00d50b20();
        }
        lVar4 = lVar4 + 1;
      } while ((int)lVar4 < *(int *)(local_d8 + 0xc));
    }
    FUN_00083b20();
    FUN_00d50b20();
  }
  return;
}

