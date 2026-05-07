// Function: FUN_01525c50
// Address: 01525c50
// Size: 747 bytes
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


void FUN_01525c50(uint64_t param_1,int64_t *param_2)

{
  double dVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  void *pvVar5;
  int64_t lVar6;
  uint64_t uVar7;
  int iVar8;
  uint uVar9;
  int64_t lVar10;
  int64_t *arg1;
  uint64_t uVar11;
  int64_t this_ptr;
  uint64_t uVar12;
  double dVar13;
  double local_48;
  uint64_t local_40;
  
  if (*(int *)(*param_2 + 0xc) != 0) {
    lVar6 = *arg1;
    iVar2 = *(int *)(lVar6 + 0x18);
    FUN_00c8e340(param_1,1);
    *(void*)(*(int64_t *)(lVar6 + 0x10) + (int64_t)iVar2) = 0;
    lVar6 = *param_2;
    if (0 < *(int *)(lVar6 + 0xc)) {
      iVar2 = *(int *)(*arg1 + 0x18);
      iVar8 = iVar2 + 3;
      if (-1 < iVar2) {
        iVar8 = iVar2;
      }
      uVar9 = (iVar8 >> 2) * *(int *)(this_ptr + 0x58);
      uVar11 = (uint64_t)uVar9;
      local_48 = (double)(int)uVar9;
      local_40 = 0;
      uVar12 = 0;
      lVar10 = 0;
      bVar3 = false;
      do {
        lVar6 = *(int64_t *)(*(int64_t *)(lVar6 + 0x10) + local_40 * 8);
        uVar7 = local_40;
        if (lVar10 == lVar6) {
          lVar6 = lVar10;
          bVar4 = bVar3;
          if ((!bVar3) && (lVar10 != 0)) {
            FUN_00d50b00(local_40,uVar11);
            bVar4 = true;
          }
        }
        else {
          if (lVar6 != 0) {
            FUN_00d50b00(local_40,uVar11);
          }
          bVar4 = true;
          if ((bVar3) && (lVar10 != 0)) {
            FUN_00d50b20();
          }
        }
        bVar3 = bVar4;
        lVar10 = lVar6;
        pvVar5 = _pthread_getspecific((void*)uVar7);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar13 = (double)FUN_01524a20();
        if ((dVar13 == g_02390448) && (!NAN(dVar13) && !NAN(g_02390448))) break;
        pvVar5 = _pthread_getspecific((void*)uVar7);
        if ((pvVar5 == (void *)0x0) || (lVar6 = FUN_00e8b990(), lVar6 == 0)) {
          dVar1 = *(double *)(lVar10 + 0x38);
        }
        else {
          dVar1 = *(double *)
                   (*(int64_t *)(lVar10 + 0x20 + (uint64_t)(*(uint *)(lVar6 + 0x154) & 1) * 8) +
                   0x38);
        }
        if (local_48 <= dVar1) {
          lVar6 = *arg1;
          iVar2 = *(int *)(lVar6 + 0x18);
          FUN_00c8e340(dVar1,1);
          *(int *)(*(int64_t *)(lVar6 + 0x10) + (int64_t)iVar2) = (int)local_40;
          iVar2 = *(int *)(*arg1 + 0x18);
          iVar8 = iVar2 + 3;
          if (-1 < iVar2) {
            iVar8 = iVar2;
          }
          uVar9 = (iVar8 >> 2) * *(int *)(this_ptr + 0x58);
          uVar7 = (uint64_t)uVar9;
          local_48 = (double)(int)uVar9;
          uVar12 = local_40 & 0xffffffff;
        }
        while( true ) {
          pvVar5 = _pthread_getspecific((void*)uVar7);
          if ((pvVar5 == (void *)0x0) || (lVar6 = FUN_00e8b990(), lVar6 == 0)) {
            dVar1 = *(double *)(lVar10 + 0x38);
          }
          else {
            dVar1 = *(double *)
                     (*(int64_t *)(lVar10 + 0x20 + (uint64_t)(*(uint *)(lVar6 + 0x154) & 1) * 8) +
                     0x38);
          }
          if (dVar1 + dVar13 <= local_48) break;
          lVar6 = *arg1;
          iVar2 = *(int *)(lVar6 + 0x18);
          FUN_00c8e340(dVar1 + dVar13,1);
          *(int *)(*(int64_t *)(lVar6 + 0x10) + (int64_t)iVar2) = (int)uVar12;
          iVar2 = *(int *)(*arg1 + 0x18);
          iVar8 = iVar2 + 3;
          if (-1 < iVar2) {
            iVar8 = iVar2;
          }
          uVar9 = (iVar8 >> 2) * *(int *)(this_ptr + 0x58);
          uVar7 = (uint64_t)uVar9;
          local_48 = (double)(int)uVar9;
        }
        uVar11 = local_40 + 1;
        lVar6 = *param_2;
        local_40 = uVar11;
      } while ((int64_t)uVar11 < (int64_t)*(int *)(lVar6 + 0xc));
      if ((bVar3) && (lVar10 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  return;
}

