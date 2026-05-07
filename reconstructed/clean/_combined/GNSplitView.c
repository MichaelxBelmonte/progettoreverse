// ===================================================================
// GNSplitView — Complete reconstructed pseudocode
// 5 functions
// ===================================================================


// ============================================================
// 01db1f60
// ============================================================
// Function: FUN_01db1f60
// Address: 01db1f60
// Size: 762 bytes
// Class: GNSplitView

void* FUN_01db1f60(float param_1)

{
  int64_t lVar1;
  uint64_t uVar2;
  int64_t lVar3;
  int64_t *plVar4;
  bool bVar5;
  bool bVar6;
  void*puVar7;
  int64_t lVar8;
  int64_t arg1;
  void*this_ptr;
  int iVar9;
  float fVar10;
  float fVar11;
  int64_t local_88;
  char local_80;
  
  puVar7 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar7 = &g_02572358;
  (*g_02572370)();
  FUN_01db2340();
  if (local_80 == '\0') {
    if (local_88 == 0) goto LAB_01db211a;
    FUN_00d50b00();
LAB_01db1fde:
    fVar11 = 0.0;
    lVar1 = (uint64_t)(0.0 < param_1) * 8 + 0x10;
    if (param_1 <= 0.0) {
      if (0 < *(int *)(local_88 + 0xc)) {
        lVar8 = 0;
        do {
          lVar3 = *(int64_t *)(*(int64_t *)(local_88 + 0x10) + lVar8 * 8);
          plVar4 = *(int64_t **)(lVar3 + 0x20);
          if (plVar4 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
          (**(code **)(*plVar4 + 0x4d8))();
          FUN_00d50b20();
          uVar2 = *(void*)(lVar3 + lVar1);
          if (*(char *)(arg1 + 0x138) == '\0') {
            fVar10 = (float)((uint64_t)uVar2 >> 0x20) - fVar11;
          }
          else {
            fVar10 = (float)uVar2 - param_1;
          }
          fVar11 = 0.0;
          param_1 = 0.0;
          if (fVar10 < 0.0) {
            fVar11 = 0.0;
            param_1 = 0.0;
            if (*(char *)(lVar3 + 0x3c) != '\0') {
              FUN_00d21140();
            }
          }
          lVar8 = lVar8 + 1;
        } while ((int)lVar8 < *(int *)(local_88 + 0xc));
      }
    }
    else if (0 < *(int *)(local_88 + 0xc)) {
      lVar8 = 0;
      do {
        lVar3 = *(int64_t *)(*(int64_t *)(local_88 + 0x10) + lVar8 * 8);
        plVar4 = *(int64_t **)(lVar3 + 0x20);
        if (plVar4 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        (**(code **)(*plVar4 + 0x4d8))();
        FUN_00d50b20();
        uVar2 = *(void*)(lVar3 + lVar1);
        if (*(char *)(arg1 + 0x138) == '\0') {
          fVar10 = (float)((uint64_t)uVar2 >> 0x20) - fVar11;
          param_1 = fVar11;
        }
        else {
          fVar10 = (float)uVar2 - param_1;
        }
        if ((g_0239424c < fVar10) && (*(char *)(lVar3 + 0x3c) != '\0')) {
          FUN_00d21140();
        }
        lVar8 = lVar8 + 1;
      } while ((int)lVar8 < *(int *)(local_88 + 0xc));
    }
    FUN_01db88f0();
    bVar6 = false;
    bVar5 = false;
    iVar9 = *(int *)((int64_t)puVar7 + 0xc);
    if (iVar9 == 0) goto LAB_01db2129;
LAB_01db224b:
    *this_ptr = puVar7;
    *(void*)(this_ptr + 1) = 1;
    if (bVar6) goto LAB_01db225f;
  }
  else {
    if (local_88 != 0) goto LAB_01db1fde;
LAB_01db211a:
    bVar6 = true;
    bVar5 = true;
    iVar9 = *(int *)((int64_t)puVar7 + 0xc);
    if (iVar9 != 0) goto LAB_01db224b;
LAB_01db2129:
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
    if (bVar5) goto LAB_01db225f;
  }
  FUN_00d50b20();
LAB_01db225f:
  if (iVar9 == 0) {
    FUN_00d50b20();
  }
  return this_ptr;
}



// ============================================================
// 01db24f0
// ============================================================
// Function: FUN_01db24f0
// Address: 01db24f0
// Size: 739 bytes
// Class: GNSplitView

void* FUN_01db24f0(float param_1)

{
  int64_t lVar1;
  uint64_t uVar2;
  int64_t lVar3;
  int64_t *plVar4;
  bool bVar5;
  bool bVar6;
  void*puVar7;
  int64_t lVar8;
  int64_t arg1;
  void*this_ptr;
  int iVar9;
  float fVar10;
  float fVar11;
  int64_t local_88;
  char local_80;
  
  puVar7 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar7 = &g_02572358;
  (*g_02572370)();
  FUN_01db2340();
  if (local_80 == '\0') {
    if (local_88 == 0) goto LAB_01db269f;
    FUN_00d50b00();
LAB_01db256e:
    fVar11 = 0.0;
    lVar1 = (uint64_t)(0.0 < param_1) * 8 + 0x10;
    if (param_1 <= 0.0) {
      if (0 < *(int *)(local_88 + 0xc)) {
        lVar8 = 0;
        do {
          lVar3 = *(int64_t *)(*(int64_t *)(local_88 + 0x10) + lVar8 * 8);
          plVar4 = *(int64_t **)(lVar3 + 0x20);
          if (plVar4 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
          (**(code **)(*plVar4 + 0x4d8))();
          FUN_00d50b20();
          uVar2 = *(void*)(lVar3 + lVar1);
          if (*(char *)(arg1 + 0x138) == '\0') {
            fVar10 = (float)((uint64_t)uVar2 >> 0x20) - fVar11;
          }
          else {
            fVar10 = (float)uVar2 - param_1;
          }
          fVar11 = 0.0;
          param_1 = 0.0;
          if (fVar10 < 0.0) {
            fVar11 = 0.0;
            param_1 = 0.0;
            FUN_00d21140();
          }
          lVar8 = lVar8 + 1;
        } while ((int)lVar8 < *(int *)(local_88 + 0xc));
      }
    }
    else if (0 < *(int *)(local_88 + 0xc)) {
      lVar8 = 0;
      do {
        lVar3 = *(int64_t *)(*(int64_t *)(local_88 + 0x10) + lVar8 * 8);
        plVar4 = *(int64_t **)(lVar3 + 0x20);
        if (plVar4 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        (**(code **)(*plVar4 + 0x4d8))();
        FUN_00d50b20();
        uVar2 = *(void*)(lVar3 + lVar1);
        if (*(char *)(arg1 + 0x138) == '\0') {
          fVar10 = (float)((uint64_t)uVar2 >> 0x20) - fVar11;
          param_1 = fVar11;
        }
        else {
          fVar10 = (float)uVar2 - param_1;
        }
        if (g_0239424c < fVar10) {
          FUN_00d21140();
        }
        lVar8 = lVar8 + 1;
      } while ((int)lVar8 < *(int *)(local_88 + 0xc));
    }
    FUN_01db88f0();
    bVar6 = false;
    bVar5 = false;
    iVar9 = *(int *)((int64_t)puVar7 + 0xc);
    if (iVar9 == 0) goto LAB_01db26ae;
LAB_01db27d1:
    *this_ptr = puVar7;
    *(void*)(this_ptr + 1) = 1;
    if (bVar6) goto LAB_01db27e5;
  }
  else {
    if (local_88 != 0) goto LAB_01db256e;
LAB_01db269f:
    bVar6 = true;
    bVar5 = true;
    iVar9 = *(int *)((int64_t)puVar7 + 0xc);
    if (iVar9 != 0) goto LAB_01db27d1;
LAB_01db26ae:
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
    if (bVar5) goto LAB_01db27e5;
  }
  FUN_00d50b20();
LAB_01db27e5:
  if (iVar9 == 0) {
    FUN_00d50b20();
  }
  return this_ptr;
}



// ============================================================
// 01db2dc0
// ============================================================
// Function: FUN_01db2dc0
// Address: 01db2dc0
// Size: 564 bytes
// Class: GNSplitView

void FUN_01db2dc0(float param_1,uint64_t param_2)

{
  int64_t lVar1;
  int64_t *plVar2;
  int64_t *arg1;
  int64_t this_ptr;
  int64_t lVar3;
  float fVar4;
  double dVar5;
  float fVar6;
  float fVar7;
  float local_34;
  
  fVar7 = (float)((uint64_t)param_2 >> 0x20);
  fVar6 = (float)param_2;
  if ((*arg1 != 0) && (*(int *)(*arg1 + 0xc) != 0)) {
    FUN_01e3f820();
    fVar4 = (float)FUN_01db1e30();
    lVar1 = *arg1;
    if (lVar1 != 0) {
      if (0 < *(int *)(lVar1 + 0xc)) {
        lVar3 = 0;
        local_34 = param_1;
        do {
          if ((local_34 != g_0239424c) || (NAN(local_34) || NAN(g_0239424c))) {
            plVar2 = *(int64_t **)(*(int64_t *)(*(int64_t *)(lVar1 + 0x10) + lVar3 * 8) + 0x20);
            if (plVar2 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
            (**(code **)(*plVar2 + 0x4d8))();
            FUN_00d50b20();
            if (*(char *)(this_ptr + 0x138) == '\0') {
              fVar6 = (fVar7 / fVar4) * param_1;
              if (g_0239424c < fVar6) goto LAB_01db2f0b;
LAB_01db2f18:
              if ((0.0 <= fVar6) || (fVar7 = g_02390d00, fVar6 <= g_02390d00)) {
                if (fVar6 <= 0.0) {
                  fVar7 = fVar6;
                  if (0.0 <= fVar6) goto LAB_01db2f70;
                  dVar5 = (double)fVar6 + g_02420fa8;
                }
                else {
                  dVar5 = (double)fVar6 + g_02420fb0;
                }
                fVar7 = (float)(int)dVar5;
              }
            }
            else {
              fVar6 = (fVar6 / fVar4) * param_1;
              if (fVar6 <= g_0239424c) goto LAB_01db2f18;
LAB_01db2f0b:
              fVar7 = g_02390124;
              if (g_02390124 <= fVar6) goto LAB_01db2f18;
            }
LAB_01db2f70:
            fVar6 = local_34;
            if (local_34 <= fVar7) {
              fVar6 = fVar7;
            }
            fVar6 = (float)(~-(uint)(fVar7 < g_0239424c) & (uint)fVar7 |
                           (uint)fVar6 & -(uint)(fVar7 < g_0239424c));
            fVar7 = local_34;
            if (fVar6 <= local_34) {
              fVar7 = fVar6;
            }
            fVar6 = (float)FUN_01db3040(~-(uint)(0.0 < fVar6) & (uint)fVar6 |
                                        (uint)fVar7 & -(uint)(0.0 < fVar6));
            fVar7 = 0.0;
            fVar6 = local_34 - fVar6;
            local_34 = fVar6;
          }
          lVar3 = lVar3 + 1;
        } while ((int)lVar3 < *(int *)(lVar1 + 0xc));
      }
      FUN_01db88f0();
    }
  }
  return;
}



// ============================================================
// 001883f0
// ============================================================
// Function: FUN_001883f0
// Address: 001883f0
// Size: 555 bytes
// Class: GNSplitView
// String references:
//   "GNSplitView"

void FUN_001883f0(void)

{
  int iVar1;
  uint32_t uVar2;
  int64_t local_180;
  int64_t local_178;
  void*local_30;
  
  if ((g_026f14c0 == '\0') && (iVar1 = ___cxa_guard_acquire(), iVar1 != 0)) {
    g_026f1410 = FUN_0006d940();
    g_026f13f8 = "GNSplitView";
    g_026f1400 = 0x150;
    g_026f1408 = FUN_001edd10;
    g_026f1418 = 0;
    ram_00000000026f1420 = 0;
    g_026f1428 = 0;
    ram_00000000026f1430 = 0;
    g_026f1438 = 0;
    ram_00000000026f1440 = 0;
    g_026f1448 = 0;
    ram_00000000026f1450 = 0;
    g_026f1458 = 0;
    ram_00000000026f1460 = 0;
    g_026f1468 = 0;
    ram_00000000026f1470 = 0;
    g_026f1478 = 0;
    ram_00000000026f1480 = 0;
    g_026f1488 = 0;
    ram_00000000026f1490 = 0;
    g_026f1498 = 0;
    ram_00000000026f14a0 = 0;
    g_026f14a8 = 0;
    _ram_00000000026f14b0 = 0;
    g_026f14b8 = 0;
    ___cxa_guard_release();
  }
  if (g_026f14b3 == '\0') {
    FUN_000a31d0();
    FUN_00e87760();
    FUN_0006daf0();
    local_30 = (void*)0x0;
    if (1 < g_02802630) {
      local_30 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *local_30 = &g_02572358;
      (*g_02572370)();
    }
    FUN_00d50c00();
    FUN_001edde0();
    FUN_00d50c00();
    FUN_00e87770();
    uVar2 = FUN_01db1310();
    FUN_00e87920(uVar2,0);
    if (local_178 != 0) {
      FUN_00d50b20();
    }
    if (local_180 != 0) {
      FUN_00d50b20();
    }
    FUN_0006d770();
    if (local_30 != (void*)0x0) {
      FUN_00d50b20();
    }
    FUN_0006d770();
  }
  return;
}



// ============================================================
// 01db1310
// ============================================================
// Function: FUN_01db1310
// Address: 01db1310
// Size: 685 bytes
// Class: GNSplitView
// String references:
//   "GNSplitView"
//   "_editIsVertical"
//   "_editItemsByAddingView"

void FUN_01db1310(void)

{
  int iVar1;
  
  // [STATIC_INIT: property registration]
      g_028b89b8 = "_editIsVertical";
      g_028b89c0 = &g_026f13f8;
      g_028b89c8 = 0;
      g_028b89d0 = &g_027f22e8;
      g_028b89d8 = FUN_01db8850;
      g_028b89e0 = FUN_01db15e0;
      g_028b89e8 = 0;
      ram_00000000028b89f0 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_028b8a00 = "_editItemsByAddingView";
      g_028b8a08 = &g_026f13f8;
      g_028b8a10 = 0;
      g_028b8a18 = &g_027f22eb;
      g_028b8a20 = FUN_01db8870;
      g_028b8a28 = FUN_01db1ab0;
      g_028b8a30 = 0;
      ram_00000000028b8a38 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  return;
}

