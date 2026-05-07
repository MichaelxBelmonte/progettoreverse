// Function: FUN_01e354b0
// Address: 01e354b0
// Size: 625 bytes
// Class: GNList
// === GNList properties ===
//   GNInt           _archiveVersion
//   bool            _awakesObjectsAfterDecoding
//   bool            _isCancelled
//   GNInt           _currentObjectGraphIdx
//   GNInt           _predictedDecodedValuesIndex


void FUN_01e354b0(void)

{
  int64_t lVar1;
  int64_t *plVar2;
  char cVar3;
  int64_t **pplVar4;
  void*arg1;
  int64_t this_ptr;
  int64_t lVar5;
  int64_t *local_a8;
  uint8_t local_a0;
  int64_t local_98;
  uint64_t local_90;
  uint32_t local_88;
  int64_t local_68;
  char local_60;
  int64_t local_40;
  char local_38;
  
  lVar1 = *(int64_t *)(this_ptr + 0x20);
  if (lVar1 != 0) {
    local_a0 = 0;
    local_a8 = (int64_t *)0x0;
    local_88 = 0;
    local_90 = 0;
    local_98 = lVar1;
    if (0 < *(int *)(lVar1 + 0xc)) {
      lVar5 = 0;
      do {
        plVar2 = *(int64_t **)(*(int64_t *)(lVar1 + 0x10) + lVar5 * 8);
        local_a8 = plVar2;
        FUN_00081d60();
        pplVar4 = (int64_t **)&g_02802688;
        if (plVar2 != (int64_t *)0x0) {
          (**(code **)(*plVar2 + 0x360))();
          cVar3 = FUN_00e85ea0();
          pplVar4 = &local_a8;
          if (cVar3 == '\0') {
            pplVar4 = (int64_t **)&g_02802688;
          }
        }
        if (*(char *)(pplVar4 + 1) == '\0') {
          if (*pplVar4 != (int64_t *)0x0) {
            FUN_00d50b00();
            goto LAB_01e355b4;
          }
        }
        else {
          *(void*)(pplVar4 + 1) = 0;
          if (*pplVar4 != (int64_t *)0x0) {
LAB_01e355b4:
            FUN_01d25f70();
            if (local_38 == '\0') {
              if (local_40 != 0) {
                FUN_00d50b00();
                goto LAB_01e3560b;
              }
            }
            else if (local_40 != 0) {
LAB_01e3560b:
              plVar2 = (int64_t *)*arg1;
              FUN_00c7e7b0();
              if (local_60 == '\0') {
                if (local_68 != 0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_60 = '\0';
              }
              (**(code **)(*plVar2 + 0x420))();
              if (local_38 == '\0') {
                if (local_40 != 0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_38 = '\0';
              }
              if (local_68 != 0) {
                FUN_00d50b20();
              }
              if ((local_60 != '\0') && (local_68 != 0)) {
                FUN_00d50b20();
              }
              if (local_40 != 0) {
                FUN_00d50b20();
              }
              FUN_00d50b20();
            }
            FUN_00d50b20();
          }
        }
        lVar5 = lVar5 + 1;
        local_90 = CONCAT44(local_90._4_4_,(int)lVar5);
      } while ((int)lVar5 < *(int *)(lVar1 + 0xc));
    }
    FUN_00083b20();
  }
  return;
}

