// Function: FUN_01523040
// Address: 01523040
// Size: 798 bytes
// Class: MUScalePitchSystem
// === MUScalePitchSystem properties ===
//   bool            _tuningIsSuggestedRelevant
//   bool            _modeIsSuggestedRelevant
//   bool            _tuningPitchAnchorIsSuggestedRelevant
//   bool            _modeFundamentalOffsetIsSuggestedRelevant
//   bool            _stretchingIsSuggestedRelevant
//   double          _startPulse
//   double          _startTime
//   double          _width
//   double          _scope


int64_t * FUN_01523040(uint64_t param_1,int64_t *param_2)

{
  short sVar1;
  int64_t lVar2;
  int64_t lVar3;
  int iVar4;
  void *pvVar5;
  uint64_t uVar6;
  int64_t lVar7;
  int64_t lVar8;
  void* pVar9;
  int iVar10;
  short sVar11;
  int64_t arg1;
  int64_t *this_ptr;
  int iVar12;
  uint uVar13;
  int64_t lVar14;
  int64_t local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  
  if (*param_2 == 0) {
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
  }
  else {
    local_68 = 0;
    local_60 = '\0';
    FUN_016c2780(param_1,&local_68);
    lVar3 = local_58;
    pVar9 = (void*)param_1;
    if (local_50 == '\0') {
      if (((local_58 != 0) && (FUN_00d50b00(), local_50 != '\0')) && (local_58 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_50 = '\0';
    }
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    pvVar5 = _pthread_getspecific(pVar9);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_016caa50();
    lVar8 = *(int64_t *)(**(int64_t **)(*(int64_t *)(arg1 + 0x10) + 0x10) + 0x10);
    sVar11 = *(short *)(lVar8 + 0x18);
    iVar12 = (int)*(short *)(lVar8 + 0x1a);
    pvVar5 = _pthread_getspecific(pVar9);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar6 = FUN_00e7bdb0();
    FUN_016c3060(uVar6,iVar12,0);
    pVar9 = (void*)uVar6;
    iVar4 = *(int *)(arg1 + 0x18);
    if (1 < iVar4) {
      uVar13 = 1;
      do {
        lVar8 = *(int64_t *)
                 (*(int64_t *)(*(int64_t *)(arg1 + 0x10) + 0x10) +
                 (uint64_t)(uVar13 >> 10) * 8);
        lVar2 = *(int64_t *)(lVar8 + 0x10);
        lVar14 = (uint64_t)(uVar13 & 0x3ff) * 0x20;
        iVar10 = (int)*(short *)(lVar2 + 0x1a + lVar14);
        sVar1 = *(short *)(lVar2 + 0x18 + lVar14);
        if ((iVar12 != iVar10) || (sVar11 != sVar1)) {
          pvVar5 = _pthread_getspecific((void*)lVar8);
          lVar8 = lVar3;
          if ((pvVar5 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
            lVar8 = *(int64_t *)(lVar3 + 0x20 + (uint64_t)(*(uint *)(lVar7 + 0x154) & 1) * 8);
          }
          local_48 = lVar8;
          lVar8 = FUN_00e7cc50(*(void*)(lVar2 + 8 + lVar14));
          FUN_016c3060(lVar8,iVar10,0);
          iVar4 = *(int *)(arg1 + 0x18);
          iVar12 = iVar10;
          sVar11 = sVar1;
        }
        pVar9 = (void*)lVar8;
        uVar13 = uVar13 + 1;
      } while ((int)uVar13 < iVar4);
    }
    pvVar5 = _pthread_getspecific(pVar9);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_016c30e0();
    pvVar5 = _pthread_getspecific(pVar9);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_016c3130();
    pvVar5 = _pthread_getspecific(pVar9);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_016c1150();
    *this_ptr = lVar3;
    *(void*)(this_ptr + 1) = 1;
  }
  return this_ptr;
}

