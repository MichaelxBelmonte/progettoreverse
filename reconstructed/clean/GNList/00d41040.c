// Function: FUN_00d41040
// Address: 00d41040
// Size: 780 bytes
// Class: GNList
// === GNList properties ===
//   GNInt           _archiveVersion
//   bool            _awakesObjectsAfterDecoding
//   bool            _isCancelled
//   GNInt           _currentObjectGraphIdx
//   GNInt           _predictedDecodedValuesIndex


void FUN_00d41040(int64_t *param_1,int64_t *param_2)

{
  int64_t lVar1;
  int64_t lVar2;
  char *pcVar3;
  int64_t lVar4;
  int64_t lVar5;
  uint uVar6;
  uint uVar7;
  int64_t *arg1;
  int64_t this_ptr;
  uint64_t uVar8;
  int64_t local_60;
  char local_58 [16];
  uint64_t local_48;
  uint32_t local_40;
  char local_38 [8];
  
  (**(code **)(**(int64_t **)(this_ptr + 0x10) + 0x368))();
  if (*(int64_t *)(this_ptr + 0x18) == 0) {
                                            (**(code **)(**(int64_t **)(this_ptr + 0x10) + 0x378))();
    return;
  }
  if (*param_2 == 0) {
    FUN_00d418a0();
    if (local_58[0] == '\0') {
      if (local_60 == 0) goto LAB_00d41355;
      FUN_00d50b00();
      if ((local_58[0] != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
    }
    else if (local_60 == 0) goto LAB_00d41355;
    local_58[0] = '\0';
    local_40 = 0;
    local_48 = 0;
    if (0 < *(int *)(local_60 + 0xc)) {
      uVar6 = 0;
      do {
        lVar1 = *(int64_t *)(*(int64_t *)(local_60 + 0x10) + (uint64_t)uVar6 * 8);
        uVar7 = *(uint *)(lVar1 + 0xc);
        uVar8 = (uint64_t)uVar7;
        if (0 < (int)uVar7) {
          lVar5 = *arg1;
          if (*param_1 == 0) {
            while( true ) {
              uVar7 = uVar7 - 1;
              lVar4 = *(int64_t *)(*(int64_t *)(lVar1 + 0x10) + (uint64_t)uVar7 * 8);
              if (*(int64_t *)(lVar4 + 0x10) == lVar5) {
                *(void*)(lVar4 + 0xc) = 0;
                FUN_00d23620();
                *(int *)(this_ptr + 0x40) = *(int *)(this_ptr + 0x40) + -1;
              }
              if ((int64_t)uVar8 < 2) break;
              uVar8 = uVar8 - 1;
            }
          }
          else {
            lVar4 = uVar8 + 1;
            do {
              uVar7 = uVar7 - 1;
              lVar2 = *(int64_t *)(*(int64_t *)(lVar1 + 0x10) + (uint64_t)uVar7 * 8);
              if ((*(int64_t *)(lVar2 + 0x10) == lVar5) &&
                 (*(int64_t *)(lVar2 + 0x18) == *param_1)) {
                *(void*)(lVar2 + 0xc) = 0;
                FUN_00d23620();
                *(int *)(this_ptr + 0x40) = *(int *)(this_ptr + 0x40) + -1;
                break;
              }
              lVar4 = lVar4 + -1;
            } while (1 < lVar4);
          }
        }
        uVar6 = uVar6 + 1;
        local_48 = CONCAT44(local_48._4_4_,uVar6);
      } while ((int)uVar6 < *(int *)(local_60 + 0xc));
    }
    FUN_00d42760();
    FUN_00d50b20();
  }
  else {
    FUN_00d40f90();
    pcVar3 = local_38;
    if (local_58[0] != '\0') {
      pcVar3 = local_58;
    }
    local_38[0] = local_58[0];
    *pcVar3 = '\0';
    if ((local_58[0] != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if (local_60 != 0) {
      uVar6 = *(uint *)(local_60 + 0xc);
      uVar8 = (uint64_t)uVar6;
      if (0 < (int)uVar6) {
        lVar1 = *arg1;
        if (*param_1 == 0) {
          while( true ) {
            uVar6 = uVar6 - 1;
            lVar5 = *(int64_t *)(*(int64_t *)(local_60 + 0x10) + (uint64_t)uVar6 * 8);
            if (*(int64_t *)(lVar5 + 0x10) == lVar1) {
              *(void*)(lVar5 + 0xc) = 0;
              FUN_00d23620();
              *(int *)(this_ptr + 0x40) = *(int *)(this_ptr + 0x40) + -1;
            }
            if ((int64_t)uVar8 < 2) break;
            uVar8 = uVar8 - 1;
          }
        }
        else {
          lVar5 = uVar8 + 1;
          do {
            uVar6 = uVar6 - 1;
            lVar4 = *(int64_t *)(*(int64_t *)(local_60 + 0x10) + (uint64_t)uVar6 * 8);
            if ((*(int64_t *)(lVar4 + 0x10) == lVar1) && (*(int64_t *)(lVar4 + 0x18) == *param_1))
            {
              *(void*)(lVar4 + 0xc) = 0;
              FUN_00d23620();
              *(int *)(this_ptr + 0x40) = *(int *)(this_ptr + 0x40) + -1;
              break;
            }
            lVar5 = lVar5 + -1;
          } while (1 < lVar5);
        }
      }
      if (local_38[0] != '\0') {
        FUN_00d50b20();
      }
    }
  }
LAB_00d41355:
  (**(code **)(**(int64_t **)(this_ptr + 0x10) + 0x378))();
  return;
}

