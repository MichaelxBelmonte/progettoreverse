// Function: FUN_01525fb0
// Address: 01525fb0
// Size: 778 bytes
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


void FUN_01525fb0(uint64_t param_1,int64_t *param_2)

{
  double dVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  void *pvVar5;
  int64_t lVar6;
  int64_t lVar7;
  void* pVar8;
  uint uVar9;
  uint64_t uVar10;
  int iVar11;
  int64_t lVar12;
  int64_t *arg1;
  uint64_t this_ptr;
  uint64_t uVar13;
  uint64_t uVar14;
  double dVar15;
  double dVar16;
  double local_48;
  
  if (*(int *)(*param_2 + 0xc) != 0) {
    lVar6 = *arg1;
    iVar2 = *(int *)(lVar6 + 0x18);
    FUN_00c8e340(param_1,1);
    *(void*)(*(int64_t *)(lVar6 + 0x10) + (int64_t)iVar2) = 0;
    lVar6 = *param_2;
    if (0 < *(int *)(lVar6 + 0xc)) {
      iVar2 = *(int *)(*arg1 + 0x18);
      iVar11 = iVar2 + 3;
      if (-1 < iVar2) {
        iVar11 = iVar2;
      }
      local_48 = (double)((iVar11 >> 2) * *(int *)(this_ptr + 0x70));
      uVar13 = 0;
      uVar14 = 0;
      lVar12 = 0;
      bVar3 = false;
      uVar10 = this_ptr;
      do {
        lVar6 = *(int64_t *)(*(int64_t *)(lVar6 + 0x10) + uVar13 * 8);
        if (lVar12 == lVar6) {
          lVar6 = lVar12;
          bVar4 = bVar3;
          if ((!bVar3) && (lVar12 != 0)) {
            FUN_00d50b00();
            bVar4 = true;
          }
        }
        else {
          if (lVar6 != 0) {
            FUN_00d50b00();
          }
          bVar4 = true;
          if ((bVar3) && (lVar12 != 0)) {
            FUN_00d50b20();
          }
        }
        bVar3 = bVar4;
        lVar12 = lVar6;
        pvVar5 = _pthread_getspecific((void*)uVar10);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar15 = (double)FUN_01524a20();
        if ((dVar15 == g_02390448) && (!NAN(dVar15) && !NAN(g_02390448))) break;
        pvVar5 = _pthread_getspecific((void*)uVar10);
        if ((pvVar5 == (void *)0x0) || (lVar6 = FUN_00e8b990(), lVar6 == 0)) {
          dVar1 = *(double *)(lVar12 + 0x40);
        }
        else {
          dVar1 = *(double *)
                   (*(int64_t *)(lVar12 + 0x20 + (uint64_t)(*(uint *)(lVar6 + 0x154) & 1) * 8) +
                   0x40);
        }
        if (local_48 <= dVar1) {
          lVar6 = *arg1;
          iVar2 = *(int *)(lVar6 + 0x18);
          FUN_00c8e340(dVar1,1);
          *(int *)(*(int64_t *)(lVar6 + 0x10) + (int64_t)iVar2) = (int)uVar13;
          iVar2 = *(int *)(*arg1 + 0x18);
          iVar11 = iVar2 + 3;
          if (-1 < iVar2) {
            iVar11 = iVar2;
          }
          uVar9 = (iVar11 >> 2) * *(int *)(this_ptr + 0x70);
          uVar10 = (uint64_t)uVar9;
          local_48 = (double)(int)uVar9;
          uVar14 = uVar13 & 0xffffffff;
        }
        while( true ) {
          pVar8 = (void*)uVar10;
          pvVar5 = _pthread_getspecific(pVar8);
          lVar6 = lVar12;
          if ((pvVar5 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
            lVar6 = *(int64_t *)(lVar12 + 0x20 + (uint64_t)(*(uint *)(lVar7 + 0x154) & 1) * 8);
          }
          dVar1 = *(double *)(lVar6 + 0x40);
          pvVar5 = _pthread_getspecific(pVar8);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          dVar16 = (double)FUN_01524a10();
          if (dVar1 + dVar16 * dVar15 <= local_48) break;
          lVar6 = *arg1;
          iVar2 = *(int *)(lVar6 + 0x18);
          FUN_00c8e340(dVar16 * dVar15,1);
          *(int *)(*(int64_t *)(lVar6 + 0x10) + (int64_t)iVar2) = (int)uVar14;
          iVar2 = *(int *)(*arg1 + 0x18);
          iVar11 = iVar2 + 3;
          if (-1 < iVar2) {
            iVar11 = iVar2;
          }
          uVar9 = (iVar11 >> 2) * *(int *)(this_ptr + 0x70);
          uVar10 = (uint64_t)uVar9;
          local_48 = (double)(int)uVar9;
        }
        uVar13 = uVar13 + 1;
        lVar6 = *param_2;
        uVar10 = (uint64_t)*(int *)(lVar6 + 0xc);
      } while ((int64_t)uVar13 < (int64_t)uVar10);
      if ((bVar3) && (lVar12 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  return;
}

