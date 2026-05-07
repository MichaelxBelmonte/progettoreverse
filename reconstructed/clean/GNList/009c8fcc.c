// Function: FUN_009c8fcc
// Address: 009c8fcc
// Size: 551 bytes
// Class: GNList
// String references:
//   "\nCaused by: "
// === GNList properties ===
//   GNInt           _archiveVersion
//   bool            _awakesObjectsAfterDecoding
//   bool            _isCancelled
//   GNInt           _currentObjectGraphIdx
//   GNInt           _predictedDecodedValuesIndex


int64_t FUN_009c8fcc(char *param_1,uint64_t param_2,ulong param_3)

{
  int64_t *plVar1;
  uint8_t uVar2;
  uint8_t uVar3;
  int64_t lVar4;
  void *pvVar5;
  uint64_t uVar6;
  int64_t lVar7;
  uint64_t *puVar8;
  void*puVar9;
  ulong uVar10;
  char *pcVar11;
  void *pvVar12;
  char *pcVar13;
  int64_t this_ptr;
  int64_t *plVar14;
  int64_t *plVar15;
  int64_t lVar16;
  byte local_98;
  uint16_t local_42;
  undefined6 uStack_40;
  
  lVar4 = *(int64_t *)PTR____stack_chk_guard_024a9898;
  FUN_009c8eec();
  std::string::assign(param_1);
  lVar16 = *(int64_t *)(this_ptr + 0x10);
  plVar15 = *(int64_t **)(this_ptr + 0x18);
  if (plVar15 != (int64_t *)0x0) {
    LOCK();
    plVar15[1] = plVar15[1] + 1;
    UNLOCK();
  }
  if (lVar16 != 0) {
    plVar14 = plVar15;
    do {
      FUN_009c8de4();
      if ((*(byte *)(this_ptr + 0x58) & 1) == 0) {
        uVar10 = (ulong)(*(byte *)(this_ptr + 0x58) >> 1);
        pcVar13 = (char *)(this_ptr + 0x59);
      }
      else {
        uVar10 = (ulong)*(void*)(this_ptr + 0x60);
        pcVar13 = *(char **)(this_ptr + 0x68);
      }
      puVar8 = (uint64_t *)std::string::insert(uVar10,pcVar13,param_3);
      pcVar13 = (char *)*puVar8;
      *puVar8 = 0;
      puVar8[1] = 0;
      puVar8[2] = 0;
      pcVar11 = pcVar13;
      FUN_009c8eec();
      puVar9 = (void*)std::string::append(pcVar11);
      uVar2 = *(void*)puVar9;
      uVar3 = *(void*)((int64_t)puVar9 + 1);
      uStack_40 = (undefined6)((uint64_t)puVar9[1] >> 0x10);
      pvVar5 = *(void **)((int64_t)puVar9 + 2);
      local_42 = (uint16_t)((uint64_t)pvVar5 >> 0x30);
      uVar6 = puVar9[2];
      *puVar9 = 0;
      puVar9[1] = 0;
      puVar9[2] = 0;
      if ((*(byte *)(this_ptr + 0x58) & 1) != 0) {
        operator_delete(pvVar5);
      }
      *(void*)(this_ptr + 0x58) = uVar2;
      *(void*)(this_ptr + 0x59) = uVar3;
      pvVar12 = (void *)CONCAT62(uStack_40,local_42);
      *(void **)(this_ptr + 0x60) = pvVar12;
      *(void **)(this_ptr + 0x5a) = pvVar5;
      *(void*)(this_ptr + 0x68) = uVar6;
      if (((uint64_t)pcVar13 & 1) != 0) {
        operator_delete(pvVar12);
      }
      if ((local_98 & 1) != 0) {
        operator_delete(pvVar12);
      }
      lVar7 = *(int64_t *)(lVar16 + 0x10);
      plVar15 = *(int64_t **)(lVar16 + 0x18);
      if (plVar15 != (int64_t *)0x0) {
        LOCK();
        plVar15[1] = plVar15[1] + 1;
        UNLOCK();
      }
      if (plVar14 != (int64_t *)0x0) {
        LOCK();
        plVar1 = plVar14 + 1;
        lVar16 = *plVar1;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (lVar16 == 0) {
          (**(code **)(*plVar14 + 0x10))();
          std::__shared_weak_count::__release_weak();
        }
      }
      plVar14 = plVar15;
      lVar16 = lVar7;
    } while (lVar7 != 0);
  }
  if ((*(byte *)(this_ptr + 0x58) & 1) == 0) {
    lVar16 = this_ptr + 0x59;
  }
  else {
    lVar16 = *(int64_t *)(this_ptr + 0x68);
  }
  if (plVar15 != (int64_t *)0x0) {
    LOCK();
    plVar14 = plVar15 + 1;
    lVar7 = *plVar14;
    *plVar14 = *plVar14 + -1;
    UNLOCK();
    if (lVar7 == 0) {
      (**(code **)(*plVar15 + 0x10))();
      std::__shared_weak_count::__release_weak();
    }
  }
  if (*(int64_t *)PTR____stack_chk_guard_024a9898 == lVar4) {
    return lVar16;
  }
                      ___stack_chk_fail();
}

