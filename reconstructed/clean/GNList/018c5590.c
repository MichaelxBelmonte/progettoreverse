// Function: FUN_018c5590
// Address: 018c5590
// Size: 791 bytes
// Class: GNList
// === GNList properties ===
//   GNInt           _archiveVersion
//   bool            _awakesObjectsAfterDecoding
//   bool            _isCancelled
//   GNInt           _currentObjectGraphIdx
//   GNInt           _predictedDecodedValuesIndex


int64_t * FUN_018c5590(void)

{
  int64_t lVar1;
  code *pcVar2;
  void*puVar3;
  void *pvVar4;
  char *pcVar5;
  char *pcVar6;
  int64_t arg1;
  int64_t *this_ptr;
  int64_t lVar7;
  int iVar8;
  char local_40 [8];
  char local_38 [8];
  
  pcVar2 = g_025e9438;
  lVar7 = *(int64_t *)(arg1 + 0x80);
  if ((*(int *)(lVar7 + 0xc) == 0) && (lVar1 = *(int64_t *)(arg1 + 0x70), lVar1 != 0)) {
    if (0 < *(int *)(lVar1 + 0xc)) {
      iVar8 = 0;
      do {
        puVar3 = (void*)FUN_00e8fc40();
        FUN_00d4ff40();
        *(void*)(puVar3 + 7) = 0;
        *puVar3 = &g_025e9420;
        puVar3[8] = 0;
        puVar3[9] = 0;
        puVar3[10] = 0;
        (*pcVar2)();
        local_40[0] = '\0';
        FUN_00d21140();
        if ((local_40[0] != '\0') && (puVar3 != (void*)0x0)) {
          FUN_00d50b20();
        }
        FUN_00d50b20();
        FUN_00d23340();
        local_38[0] = local_40[0];
        pcVar6 = local_38;
        pcVar5 = local_40;
        if (local_40[0] == '\0') {
          pcVar5 = pcVar6;
        }
        *pcVar5 = '\0';
        if ((local_40[0] != '\0') && (puVar3 != (void*)0x0)) {
          FUN_00d50b20();
        }
        pvVar4 = _pthread_getspecific((void*)pcVar6);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01507670();
        if ((local_38[0] != '\0') && (puVar3 != (void*)0x0)) {
          FUN_00d50b20();
        }
        FUN_00d23340();
        local_38[0] = local_40[0];
        pcVar6 = local_38;
        pcVar5 = local_40;
        if (local_40[0] == '\0') {
          pcVar5 = pcVar6;
        }
        *pcVar5 = '\0';
        if ((local_40[0] != '\0') && (puVar3 != (void*)0x0)) {
          FUN_00d50b20();
        }
        pvVar4 = _pthread_getspecific((void*)pcVar6);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_018c53b0();
        if ((local_40[0] == '\0') && (puVar3 != (void*)0x0)) {
          FUN_00d50b00();
        }
        FUN_01507710();
        if (puVar3 != (void*)0x0) {
          FUN_00d50b20();
        }
        if ((local_38[0] != '\0') && (puVar3 != (void*)0x0)) {
          FUN_00d50b20();
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 < *(int *)(lVar1 + 0xc));
    }
    FUN_018c8360();
    lVar7 = *(int64_t *)(arg1 + 0x80);
    *(void*)(this_ptr + 1) = 0;
    if (lVar7 == 0) {
      lVar7 = 0;
      goto LAB_018c55c1;
    }
  }
  else {
    *(void*)(this_ptr + 1) = 0;
  }
  FUN_00d50b00();
LAB_018c55c1:
  *this_ptr = lVar7;
  *(void*)(this_ptr + 1) = 1;
  return this_ptr;
}

