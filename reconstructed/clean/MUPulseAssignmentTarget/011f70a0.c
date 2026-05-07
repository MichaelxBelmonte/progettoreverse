// Function: FUN_011f70a0
// Address: 011f70a0
// Size: 943 bytes
// Class: MUPulseAssignmentTarget
// String references:
//   "MUPulseAssignmentTarget"

uint FUN_011f70a0(void* param_1)

{
  int64_t lVar1;
  char cVar2;
  int iVar3;
  void *pvVar4;
  int64_t lVar5;
  int extraout_var;
  uint64_t uVar6;
  void* pVar7;
  int64_t lVar8;
  int64_t *arg1;
  int64_t *plVar9;
  int64_t lVar10;
  int64_t *plVar11;
  uint64_t uVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  uint8_t auVar16 [16];
  int64_t local_50;
  char local_48;
  uint local_34;
  
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_016c99c0();
  if ((local_48 == '\0') && (local_50 != 0)) {
    FUN_00d50b00();
  }
  iVar3 = *(int *)(local_50 + 0xc);
  while (iVar3 <= (int)param_1) {
    FUN_011f7510();
    iVar3 = *(int *)(local_50 + 0xc);
  }
  lVar8 = (int64_t)(int)param_1;
  lVar1 = *(int64_t *)(*(int64_t *)(local_50 + 0x10) + lVar8 * 8);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  lVar5 = *arg1;
  if (*(int *)(lVar5 + 0xc) < 1) {
    local_34 = (uint)CONCAT71((int7)((uint64_t)lVar5 >> 8),1);
  }
  else {
    lVar8 = CONCAT71((int7)((uint64_t)lVar8 >> 8),1);
    local_34 = (uint)lVar8;
    lVar10 = 0;
    plVar9 = (int64_t *)0x0;
    do {
      pVar7 = (void*)lVar8;
      plVar11 = *(int64_t **)(*(int64_t *)(lVar5 + 0x10) + lVar10 * 8);
      if ((g_0272fca8 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
        g_027902e0 = "MUPulseAssignmentTarget";
        g_027902f0 = 0;
        g_027902e8 = 0;
        ___cxa_guard_release();
      }
      if (plVar11 == (int64_t *)0x0) {
        lVar8 = 0;
      }
      else {
        uVar12 = (**(code **)(*plVar11 + 0x360))();
        lVar8 = FUN_00e86120(uVar12,1);
      }
      pvVar4 = _pthread_getspecific(pVar7);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      plVar11 = (int64_t *)((int64_t)plVar11 + lVar8);
      (**(code **)(*plVar11 + 0x18))();
      dVar13 = (double)FUN_016c25f0();
      dVar14 = (double)FUN_00e7c860();
      dVar15 = (double)FUN_00e7c860();
      dVar15 = (dVar13 - dVar14) / dVar15;
      auVar16._8_8_ = 0;
      auVar16._0_8_ = dVar15;
      auVar16 = roundsd(ZEXT816(0),auVar16,9);
      FUN_011f78b0(dVar15 - auVar16._0_8_);
      FUN_00e7bcc0();
      FUN_00e7b820();
      FUN_00e7bac0();
      FUN_00e7b820();
      (**(code **)(*plVar11 + 0x40))();
      (**(code **)(*plVar11 + 0x58))();
      (**(code **)(*plVar11 + 0x60))();
      if (plVar9 == (int64_t *)0x0) {
        plVar9 = (int64_t *)0x0;
        if (plVar11 != (int64_t *)0x0) {
          plVar9 = plVar11;
        }
      }
      else {
        (**(code **)(*plVar11 + 0x38))();
        uVar6 = (**(code **)(*plVar9 + 0x38))();
        if ((extraout_var == 0) || (uVar6 >> 0x20 == 0)) {
          local_34 = 0;
        }
        else {
          cVar2 = FUN_00e7c020();
          local_34 = local_34 & 0xff;
          if (cVar2 == '\0') {
            local_34 = 0;
          }
        }
        if (plVar11 != plVar9) {
          (**(code **)(*plVar9 + 0x10))();
          plVar9 = plVar11;
        }
      }
      lVar5 = *arg1;
      lVar8 = (int64_t)*(int *)(lVar5 + 0xc);
      lVar10 = lVar10 + 1;
    } while (lVar10 < lVar8);
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if (local_50 != 0) {
    FUN_00d50b20();
  }
  return local_34;
}

