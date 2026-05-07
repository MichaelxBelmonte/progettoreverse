// Function: FUN_01aae300
// Address: 01aae300
// Size: 840 bytes
// Class: GNList
// === GNList properties ===
//   GNInt           _archiveVersion
//   bool            _awakesObjectsAfterDecoding
//   bool            _isCancelled
//   GNInt           _currentObjectGraphIdx
//   GNInt           _predictedDecodedValuesIndex


void FUN_01aae300(uint64_t param_1)

{
  int64_t *plVar1;
  char cVar2;
  int64_t *plVar3;
  int64_t this_ptr;
  int64_t lVar4;
  int64_t *local_b8;
  char local_b0;
  int64_t *local_a8;
  char local_a0;
  int64_t local_98;
  char local_90;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t *local_40;
  char local_38;
  
  plVar3 = (int64_t *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar3 + 0x18))();
  plVar1 = *(int64_t **)(this_ptr + 0x80);
  if (plVar1 == plVar3) {
    FUN_00d50b20();
  }
  else {
    *(int64_t **)(this_ptr + 0x80) = plVar3;
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  FUN_017bf050();
  (**(code **)(*local_40 + 1000))();
  if ((local_90 == '\0') && (local_98 != 0)) {
    FUN_00d50b00();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (local_98 != 0) {
    if (0 < *(int *)(local_98 + 0xc)) {
      lVar4 = 0;
      do {
        plVar1 = *(int64_t **)(*(int64_t *)(local_98 + 0x10) + lVar4 * 8);
        cVar2 = (**(code **)(*plVar1 + 0x3a0))();
        if (cVar2 != '\0') {
          (**(code **)(*plVar1 + 0x368))();
          plVar1 = local_40;
          if ((((local_38 == '\0') && (local_40 != (int64_t *)0x0)) &&
              (FUN_00d50b00(), local_38 != '\0')) && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          FUN_017bf2e0();
          FUN_00d8a060();
          local_48 = 0;
          if (local_58 == '\0') {
            if (local_60 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_58 = '\0';
          }
          local_48 = '\x01';
          local_50 = local_60;
          (**(code **)(*local_a8 + 0x400))(param_1,&local_50);
          (**(code **)(*local_b8 + 0x368))();
          plVar3 = local_40;
          if (local_38 == '\0') {
            if (((local_40 != (int64_t *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
               (local_40 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            local_38 = '\0';
          }
          if ((local_b0 != '\0') && (local_b8 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_48 != '\0') && (local_50 != 0)) {
            FUN_00d50b20();
          }
          if ((local_58 != '\0') && (local_60 != 0)) {
            FUN_00d50b20();
          }
          if ((local_a0 != '\0') && (local_a8 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          local_38 = '\0';
          local_40 = plVar1;
          FUN_00ca0840(param_1,&local_40);
          if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (plVar3 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
          if (plVar1 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
        }
        lVar4 = lVar4 + 1;
      } while ((int)lVar4 < *(int *)(local_98 + 0xc));
    }
    FUN_00115910();
    FUN_00d50b20();
  }
  return;
}

