// Function: FUN_01bb3300
// Address: 01bb3300
// Size: 837 bytes
// Class: GNList
// === GNList properties ===
//   GNInt           _archiveVersion
//   bool            _awakesObjectsAfterDecoding
//   bool            _isCancelled
//   GNInt           _currentObjectGraphIdx
//   GNInt           _predictedDecodedValuesIndex


void FUN_01bb3300(void)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  int64_t lVar4;
  void *pvVar5;
  void* pVar6;
  int64_t lVar7;
  int64_t lVar8;
  int64_t *arg1;
  int64_t lVar9;
  int64_t lVar10;
  int64_t lVar11;
  int64_t local_80;
  char local_78;
  int64_t local_50;
  char local_48;
  
  FUN_00e38430();
  lVar4 = *arg1;
  if (0 < *(int *)(lVar4 + 0xc)) {
    lVar11 = 0;
    lVar9 = 0;
    bVar1 = false;
    lVar7 = 0;
    bVar2 = false;
    lVar10 = 0;
    do {
      pVar6 = (void*)lVar7;
      lVar4 = *(int64_t *)(*(int64_t *)(lVar4 + 0x10) + lVar11 * 8);
      if (lVar9 == lVar4) {
        if ((!bVar1) && (lVar9 != 0)) {
          bVar1 = true;
          FUN_00d50b00();
        }
      }
      else {
        if (lVar4 != 0) {
          FUN_00d50b00();
        }
        if ((bVar1) && (lVar9 != 0)) {
          FUN_00d50b20();
          bVar1 = true;
          lVar9 = lVar4;
        }
        else {
          bVar1 = true;
          lVar9 = lVar4;
        }
      }
      pvVar5 = _pthread_getspecific(pVar6);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0125e930();
      if (local_50 == lVar10) {
        lVar8 = lVar10;
        bVar3 = bVar2;
        if ((!bVar2) && (local_50 != 0)) {
          if (local_48 != '\0') goto joined_r0x01bb348d;
          FUN_00d50b00();
          bVar3 = true;
        }
LAB_01bb34dc:
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
        if (lVar8 == 0) goto LAB_01bb3353;
LAB_01bb3500:
        pvVar5 = _pthread_getspecific(pVar6);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0152ebe0();
        pvVar5 = _pthread_getspecific(pVar6);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01507f00();
        FUN_00d46530();
        if (local_48 == '\0') {
          if (local_50 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_48 = '\0';
        }
        FUN_019b43b0();
        if (local_50 != 0) {
          FUN_00d50b20();
        }
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
        bVar2 = bVar3;
        if ((local_78 != '\0') && (local_80 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        lVar8 = local_50;
        if (local_48 == '\0') {
          if (local_50 != 0) {
            FUN_00d50b00();
          }
          bVar3 = true;
          if ((bVar2) && (lVar10 != 0)) {
            FUN_00d50b20();
          }
          goto LAB_01bb34dc;
        }
        if ((bVar2) && (lVar10 != 0)) {
          FUN_00d50b20();
        }
joined_r0x01bb348d:
        bVar3 = true;
        if (lVar8 != 0) goto LAB_01bb3500;
LAB_01bb3353:
        lVar8 = 0;
        bVar2 = bVar3;
      }
      lVar11 = lVar11 + 1;
      lVar4 = *arg1;
      lVar7 = (int64_t)*(int *)(lVar4 + 0xc);
      lVar10 = lVar8;
    } while (lVar11 < lVar7);
    if ((bVar2) && (lVar8 != 0)) {
      FUN_00d50b20();
    }
    if ((bVar1) && (lVar9 != 0)) {
      FUN_00d50b20();
    }
  }
  return;
}

