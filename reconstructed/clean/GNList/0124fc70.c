// Function: FUN_0124fc70
// Address: 0124fc70
// Size: 1148 bytes
// Class: GNList
// String references:
//   "GNList"
// === GNList properties ===
//   GNInt           _archiveVersion
//   bool            _awakesObjectsAfterDecoding
//   bool            _isCancelled
//   GNInt           _currentObjectGraphIdx
//   GNInt           _predictedDecodedValuesIndex


void FUN_0124fc70(code *param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  void *pvVar4;
  int64_t lVar5;
  int64_t lVar6;
  int64_t *plVar7;
  int64_t lVar8;
  void* pVar9;
  int64_t *plVar10;
  int64_t *arg1;
  int64_t this_ptr;
  int64_t *plVar11;
  int64_t lVar12;
  int64_t **pplVar13;
  uint32_t extraout_XMM0_Da;
  uint32_t uVar14;
  int64_t *local_b0;
  char local_a8;
  int64_t *local_a0;
  uint64_t local_98;
  uint32_t local_90;
  int64_t local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  int64_t local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  int64_t *local_48;
  
  local_88 = *arg1;
  local_80 = '\0';
  FUN_00d50f50();
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  lVar12 = g_027be950;
  plVar11 = (int64_t *)*arg1;
  if (g_027be950 != 0) {
    FUN_00d50b00();
  }
  local_78 = lVar12;
  local_70 = '\x01';
  iVar3 = (**(code **)(*plVar11 + 0x598))();
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  lVar12 = g_02784a80;
  if (iVar3 < 1) {
    plVar11 = (int64_t *)*arg1;
    if (g_02784a80 != 0) {
      FUN_00d50b00();
    }
    local_68 = lVar12;
    local_60 = '\x01';
    cVar2 = (**(code **)(*plVar11 + 0x590))();
    uVar14 = extraout_XMM0_Da;
    if ((local_60 != '\0') && (local_68 != 0)) {
      uVar14 = FUN_00d50b20();
    }
    lVar12 = g_02784a80;
    if (cVar2 != '\0') {
      plVar11 = (int64_t *)*arg1;
      if (g_02784a80 != 0) {
        uVar14 = FUN_00d50b00();
      }
      local_58 = lVar12;
      local_50 = '\x01';
      (**(code **)(*plVar11 + 0x578))(uVar14,&local_58);
      plVar11 = local_b0;
      if ((g_027048b0 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
        g_026cd478 = FUN_00d4fe50();
        g_026cd460 = "GNList";
        g_026cd468 = 0x20;
        param_1 = FUN_00018210;
        g_026cd470 = FUN_00018210;
        g_026cd480 = 0;
        ram_00000000026cd488 = 0;
        g_026cd490 = 0;
        g_026cd508 = 0;
        ram_00000000026cd510 = 0;
        g_026cd518 = 0;
        g_026cd51a = 6;
        g_026cd498 = 0;
        ram_00000000026cd4a0 = 0;
        g_026cd4a8 = 0;
        ram_00000000026cd4b0 = 0;
        g_026cd4b8 = 0;
        ram_00000000026cd4c0 = 0;
        g_026cd4c8 = 0;
        ram_00000000026cd4d0 = 0;
        g_026cd4d8 = 0;
        ram_00000000026cd4e0 = 0;
        g_026cd4e8 = 0;
        ram_00000000026cd4f0 = 0;
        g_026cd4f8 = 0;
        ram_00000000026cd500 = 0;
        g_026cd523 = 0;
        g_026cd51b = 0;
        ___cxa_guard_release();
      }
      pplVar13 = (int64_t **)&g_02802688;
      if (plVar11 != (int64_t *)0x0) {
        (**(code **)(*plVar11 + 0x360))();
        cVar2 = FUN_00e85ea0();
        if (cVar2 != '\0') {
          FUN_01255330();
          cVar2 = FUN_00e8da30();
          pplVar13 = &local_b0;
          if (cVar2 == '\0') {
            pplVar13 = (int64_t **)&g_02802688;
          }
        }
      }
      plVar11 = *pplVar13;
      if (plVar11 == (int64_t *)0x0) {
        bVar1 = true;
        plVar11 = (int64_t *)0x0;
      }
      else {
        if (*(char *)(pplVar13 + 1) == '\0') {
          FUN_00d50b00();
        }
        else {
          *(void*)(pplVar13 + 1) = 0;
        }
        bVar1 = false;
      }
      if ((local_a8 != '\0') && (local_b0 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if (plVar11 != (int64_t *)0x0) {
        plVar10 = *(int64_t **)(this_ptr + 0x58);
        if (plVar10 != (int64_t *)0x0) {
          (**(code **)(*plVar10 + 0x10))();
          FUN_00d50b00();
        }
        *(void*)(this_ptr + 0x58) = 0;
        local_a8 = 0;
        local_b0 = (int64_t *)0x0;
        local_90 = 0;
        local_98 = 0;
        local_a0 = plVar11;
        local_48 = plVar10;
        if (0 < *(int *)((int64_t)plVar11 + 0xc)) {
          lVar12 = 0;
          do {
            plVar10 = *(int64_t **)(plVar11[2] + lVar12 * 8);
            pVar9 = (void*)param_1;
            local_b0 = plVar10;
            pvVar4 = _pthread_getspecific(pVar9);
            if ((pvVar4 == (void *)0x0) || (lVar5 = FUN_00e8b990(), lVar5 == 0)) {
              lVar5 = plVar10[9];
            }
            else {
              lVar5 = *(int64_t *)(plVar10[(uint64_t)(*(uint *)(lVar5 + 0x154) & 1) + 4] + 0x48);
            }
            if (lVar5 != 0) {
              FUN_00d50b00();
            }
            pvVar4 = _pthread_getspecific(pVar9);
            plVar7 = plVar10;
            if ((pvVar4 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
              plVar7 = (int64_t *)plVar10[(uint64_t)(*(uint *)(lVar6 + 0x154) & 1) + 4];
            }
            lVar6 = plVar7[7];
            pvVar4 = _pthread_getspecific(pVar9);
            if ((pvVar4 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
              plVar10 = (int64_t *)plVar10[(uint64_t)(*(uint *)(lVar8 + 0x154) & 1) + 4];
            }
            param_1 = plVar10[8];
            FUN_012502a0(param_1,lVar6,0);
            if (lVar5 != 0) {
              FUN_00d50b20();
            }
            lVar12 = lVar12 + 1;
            local_98 = CONCAT44(local_98._4_4_,(int)lVar12);
          } while ((int)lVar12 < *(int *)((int64_t)plVar11 + 0xc));
        }
        FUN_012558f0();
        *(int64_t **)(this_ptr + 0x58) = local_48;
        if (local_48 != (int64_t *)0x0) {
          (**(code **)(*local_48 + 0x10))();
          FUN_00d50b20();
        }
        if (!bVar1) {
          FUN_00d50b20();
        }
      }
    }
  }
  return;
}

