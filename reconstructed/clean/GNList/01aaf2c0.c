// Function: FUN_01aaf2c0
// Address: 01aaf2c0
// Size: 1147 bytes
// Class: GNList
// === GNList properties ===
//   GNInt           _archiveVersion
//   bool            _awakesObjectsAfterDecoding
//   bool            _isCancelled
//   GNInt           _currentObjectGraphIdx
//   GNInt           _predictedDecodedValuesIndex


void FUN_01aaf2c0(uint64_t param_1)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t lVar3;
  char cVar4;
  int64_t *arg1;
  int64_t this_ptr;
  int iVar5;
  bool bVar6;
  int64_t local_130;
  char local_128;
  uint8_t local_e8 [8];
  uint8_t local_e0;
  int64_t *local_d8;
  char local_d0;
  int64_t *local_c8;
  char local_c0;
  int64_t local_b8;
  char local_b0;
  int64_t local_a8;
  char local_a0;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  lVar1 = *arg1;
  if (lVar1 != 0) {
    if (0 < *(int *)(lVar1 + 0xc)) {
      iVar5 = 0;
      do {
        FUN_01aa3f10();
        lVar2 = local_40;
        if (local_38 == '\0') {
          if (local_40 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        FUN_01aaed70();
        lVar3 = local_50;
        if ((local_48 == '\0') && (local_50 != 0)) {
          FUN_00d50b00();
        }
        FUN_01aa3f40();
        if (lVar3 != 0) {
          FUN_00d50b20();
        }
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if (*(int64_t *)(this_ptr + 0x88) != 0) {
          FUN_01aa3f90();
          if (local_50 == 0) {
            bVar6 = false;
          }
          else {
            FUN_01aa3f90();
            (**(code **)(*local_d8 + 0x368))();
            FUN_017bf050();
            (**(code **)(*local_c8 + 0x368))();
            lVar2 = local_b8;
            if (local_b0 == '\0') {
              if (local_b8 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_b0 = '\0';
            }
            cVar4 = FUN_00d90870();
            bVar6 = true;
            if (cVar4 == '\0') {
              FUN_01aa3f90();
              lVar3 = local_a8;
              if (local_a0 == '\0') {
                if (local_a8 != 0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_a0 = '\0';
              }
              local_e0 = 1;
              FUN_01aafac0(param_1,local_e8);
              bVar6 = local_130 != 0;
              if ((local_128 != '\0') && (local_130 != 0)) {
                FUN_00d50b20();
              }
              if (lVar3 != 0) {
                FUN_00d50b20();
              }
              if ((local_a0 != '\0') && (local_a8 != 0)) {
                FUN_00d50b20();
              }
            }
            if (lVar2 != 0) {
              FUN_00d50b20();
            }
            if ((local_b0 != '\0') && (local_b8 != 0)) {
              FUN_00d50b20();
            }
            if ((local_c0 != '\0') && (local_c8 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_38 != '\0') && (local_40 != 0)) {
              FUN_00d50b20();
            }
            if ((local_d0 != '\0') && (local_d8 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
          if ((local_48 != '\0') && (local_50 != 0)) {
            FUN_00d50b20();
          }
          if (bVar6) {
            FUN_01aa3f10();
            local_60 = local_40;
            local_58 = 0;
            if (local_38 == '\0') {
              if (local_40 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_38 = '\0';
            }
            local_58 = '\x01';
            FUN_00e427c0(param_1,&local_60);
            lVar2 = local_50;
            if (local_48 == '\0') {
              if (local_50 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_48 = '\0';
            }
            FUN_01aa3f40();
            if (lVar2 != 0) {
              FUN_00d50b20();
            }
            if ((local_48 != '\0') && (local_50 != 0)) {
              FUN_00d50b20();
            }
            if ((local_58 != '\0') && (local_60 != 0)) {
              FUN_00d50b20();
            }
            if ((local_38 != '\0') && (local_40 != 0)) {
              FUN_00d50b20();
            }
          }
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < *(int *)(lVar1 + 0xc));
    }
    FUN_01b53440();
  }
  return;
}

