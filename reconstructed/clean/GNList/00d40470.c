// Function: FUN_00d40470
// Address: 00d40470
// Size: 582 bytes
// Class: GNList
// === GNList properties ===
//   GNInt           _archiveVersion
//   bool            _awakesObjectsAfterDecoding
//   bool            _isCancelled
//   GNInt           _currentObjectGraphIdx
//   GNInt           _predictedDecodedValuesIndex


void FUN_00d40470(int64_t *param_1,int64_t *param_2,int param_3,uint32_t param_4)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t this_ptr;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  local_60 = *param_2;
  local_58 = '\0';
  local_50 = *param_1;
  local_48 = '\0';
  FUN_00d3e3f0(&local_50,&local_60,param_4);
  lVar2 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  lVar1 = *(int64_t *)(this_ptr + 0x18);
  if (lVar1 != 0) {
    FUN_00da5ad0();
    lVar3 = local_40;
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (lVar3 != lVar1) {
      if (param_3 == 1) {
        local_38 = '\0';
        local_40 = lVar2;
        FUN_00e325c0();
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        goto LAB_00d4069a;
      }
      if (param_3 == 3) goto LAB_00d4069a;
    }
    if (*(int *)(this_ptr + 0x40) != 0) {
      if (param_3 == 3) {
        (**(code **)(**(int64_t **)(this_ptr + 0x10) + 0x368))();
        FUN_00d40820();
        (**(code **)(**(int64_t **)(this_ptr + 0x10) + 0x378))();
      }
      else if (param_3 == 1) {
        do {
          FUN_00d402b0();
          if (local_38 == '\0') {
            if (local_40 == 0) goto LAB_00d40686;
            FUN_00d50b00();
            if ((local_38 != '\0') && (local_40 != 0)) {
              FUN_00d50b20();
            }
          }
          else if (local_40 == 0) goto LAB_00d40686;
          FUN_00d40c80();
          FUN_00d50b20();
        } while( true );
      }
    }
  }
LAB_00d4069a:
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  return;
LAB_00d40686:
  FUN_00d40c80();
  goto LAB_00d4069a;
}

