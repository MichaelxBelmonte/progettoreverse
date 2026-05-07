// Function: FUN_017d13c0
// Address: 017d13c0
// Size: 537 bytes
// Class: GNList
// === GNList properties ===
//   GNInt           _archiveVersion
//   bool            _awakesObjectsAfterDecoding
//   bool            _isCancelled
//   GNInt           _currentObjectGraphIdx
//   GNInt           _predictedDecodedValuesIndex


void FUN_017d13c0(char *param_1)

{
  int64_t lVar1;
  void *pvVar2;
  int64_t lVar3;
  char *pcVar4;
  char unaff_SIL;
  int64_t this_ptr;
  int64_t lVar5;
  int64_t local_50;
  char local_48 [8];
  int64_t local_40;
  char local_38 [8];
  
  if (*(char *)(this_ptr + 0xe8) != unaff_SIL) {
    FUN_00d64850();
    *(char *)(this_ptr + 0xe8) = unaff_SIL;
    FUN_00d64910();
    if ((unaff_SIL != '\0') && (*(int64_t *)(this_ptr + 0x80) != 0)) {
      FUN_00d64850();
      if (*(int64_t *)(this_ptr + 0x80) != 0) {
        *(void*)(this_ptr + 0x80) = 0;
        FUN_00d50b20();
      }
      FUN_00d64910();
    }
    lVar1 = *(int64_t *)(this_ptr + 0x128);
    if (lVar1 != 0) {
      FUN_00d50b00();
      if (0 < *(int *)(lVar1 + 0xc)) {
        lVar5 = 0;
        local_40 = lVar1;
        do {
          lVar1 = *(int64_t *)(*(int64_t *)(local_40 + 0x10) + lVar5 * 8);
          pvVar2 = _pthread_getspecific((void*)param_1);
          if ((pvVar2 == (void *)0x0) || (lVar3 = FUN_00e8b990(), lVar3 == 0)) {
            lVar1 = *(int64_t *)(lVar1 + 0x120);
          }
          else {
            lVar1 = *(int64_t *)
                     (*(int64_t *)(lVar1 + 0x20 + (uint64_t)(*(uint *)(lVar3 + 0x154) & 1) * 8) +
                     0x120);
          }
          if (lVar1 != 0) {
            FUN_00d50b00();
          }
          FUN_00d23310();
          local_38[0] = local_48[0];
          param_1 = local_38;
          pcVar4 = local_48;
          if (local_48[0] == '\0') {
            pcVar4 = param_1;
          }
          *pcVar4 = '\0';
          if ((local_48[0] != '\0') && (local_50 != 0)) {
            FUN_00d50b20();
          }
          if ((local_38[0] != '\0') && (local_50 != 0)) {
            FUN_00d50b20();
          }
          if (lVar1 != 0) {
            FUN_00d50b20();
          }
          if (local_50 == this_ptr) {
            pvVar2 = _pthread_getspecific((void*)param_1);
            if (pvVar2 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_017d13c0();
          }
          lVar5 = lVar5 + 1;
        } while ((int)lVar5 < *(int *)(local_40 + 0xc));
      }
      FUN_018c8180();
      FUN_00d50b20();
    }
  }
  return;
}

