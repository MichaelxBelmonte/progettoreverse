// Function: FUN_016ea880
// Address: 016ea880
// Size: 1193 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_016ea880(void* param_1)

{
  void*puVar1;
  int64_t lVar2;
  int64_t lVar3;
  char cVar4;
  void *pvVar5;
  uint64_t uVar6;
  void*puVar7;
  char *pcVar8;
  void* pVar9;
  void*puVar10;
  int64_t this_ptr;
  uint64_t uVar11;
  double dVar12;
  char local_50;
  undefined7 uStack_4f;
  char local_48;
  int64_t local_40;
  char local_38 [8];
  
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  cVar4 = FUN_018fe5d0();
  if (cVar4 != '\0') {
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar11 = FUN_0165be20();
    dVar12 = (double)FUN_018fcb10(uVar11,0);
    if ((dVar12 != 0.0) || (NAN(dVar12))) {
      FUN_00e7bdb0();
      pvVar5 = _pthread_getspecific(param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar11 = FUN_018fd630();
      pvVar5 = _pthread_getspecific(param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar6 = FUN_0190a000();
      if (*(int64_t *)(this_ptr + 0x78) != 0) {
        FUN_00d64850();
        if (*(int64_t *)(this_ptr + 0x78) != 0) {
          *(void*)(this_ptr + 0x78) = 0;
          FUN_00d50b20();
        }
        FUN_00d64910();
      }
      puVar7 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      puVar10 = &g_025683c0;
      *puVar7 = &g_025683c0;
      (*g_025683d8)();
      FUN_00c92170();
      FUN_00c92160();
      FUN_00d64850();
      puVar1 = *(void**)(this_ptr + 0x70);
      if (puVar1 != puVar7) {
        FUN_00d50b00();
        *(void**)(this_ptr + 0x70) = puVar7;
        if (puVar1 != (void*)0x0) {
          FUN_00d50b20();
        }
      }
      FUN_00d64910();
      FUN_00d50b20();
      FUN_018f9320(uVar11);
      lVar3 = local_40;
      if (local_38[0] == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38[0] = '\0';
      }
      FUN_00d64850();
      lVar2 = *(int64_t *)(this_ptr + 0x50);
      if (lVar2 != lVar3) {
        if (lVar3 != 0) {
          FUN_00d50b00();
        }
        *(int64_t *)(this_ptr + 0x50) = lVar3;
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
      }
      FUN_00d64910();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      if ((local_38[0] != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      pVar9 = (void*)puVar10;
      if (*(int *)(*(int64_t *)(this_ptr + 0x60) + 0xc) != 0) {
        do {
          uVar11 = FUN_00d23340();
          lVar3 = local_40;
          local_50 = local_38[0];
          pcVar8 = local_38;
          if (local_38[0] == '\0') {
            pcVar8 = &local_50;
          }
          *pcVar8 = '\0';
          if ((local_38[0] != '\0') && (lVar3 != 0)) {
            uVar11 = FUN_00d50b20();
          }
          if ((local_50 == '\0') && (lVar3 != 0)) {
            uVar11 = FUN_00d50b00();
          }
          FUN_016d7fb0(uVar11,1);
          if (lVar3 != 0) {
            FUN_00d50b20();
          }
          pVar9 = (void*)puVar10;
        } while (*(int *)(*(int64_t *)(this_ptr + 0x60) + 0xc) != 0);
      }
      pvVar5 = _pthread_getspecific(pVar9);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_019012b0();
      pvVar5 = _pthread_getspecific(pVar9);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar11 = FUN_019079b0();
      FUN_01909ea0(uVar11,uVar6);
      lVar3 = local_40;
      if (local_38[0] == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38[0] = '\0';
      }
      FUN_016d8160();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      if ((local_38[0] != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (CONCAT71(uStack_4f,local_50) != 0)) {
        FUN_00d50b20();
      }
      pvVar5 = _pthread_getspecific(pVar9);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_018f9310();
    }
  }
  return;
}

