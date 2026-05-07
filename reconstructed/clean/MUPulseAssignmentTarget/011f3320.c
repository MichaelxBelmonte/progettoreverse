// Function: FUN_011f3320
// Address: 011f3320
// Size: 1543 bytes
// Class: MUPulseAssignmentTarget
// String references:
//   "MUPulseAssignmentTarget"

void FUN_011f3320(void* param_1)

{
  int64_t *plVar1;
  code *pcVar2;
  uint8_t uVar3;
  int iVar4;
  void*puVar5;
  void*puVar6;
  void *pvVar7;
  uint64_t uVar8;
  uint64_t uVar9;
  int64_t lVar10;
  int64_t lVar11;
  void* pVar12;
  int64_t lVar13;
  int64_t lVar14;
  int64_t *plVar15;
  uint64_t uVar16;
  uint64_t uVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  
  pVar12 = param_1;
  puVar5 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar5 = &g_02572358;
  pcVar2 = g_02572370;
  (*g_02572370)();
  puVar6 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar6 = &g_02572358;
  (*pcVar2)();
  pvVar7 = _pthread_getspecific(pVar12);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar8 = FUN_016ca6f0();
  uVar9 = FUN_00e7bdb0();
  pvVar7 = _pthread_getspecific(pVar12);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar3 = FUN_016ca5b0();
  pvVar7 = _pthread_getspecific(pVar12);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar16 = FUN_016ca710();
  if (param_1 == 3) {
    uVar17 = FUN_00d214d0(uVar16,*(void*)((int64_t)puVar5 + 0xc));
    uVar17 = FUN_00d214d0(uVar17,*(void*)((int64_t)puVar6 + 0xc));
    uVar17 = FUN_00d242c0(uVar17,0);
    FUN_00d242c0(uVar17,0);
    FUN_011f4f10(uVar16,uVar3,uVar8,uVar9,0);
    lVar13 = 0xffffffff;
    FUN_011f4f10(uVar16,uVar3,uVar8,uVar9,0);
    if (0 < *(int *)((int64_t)puVar6 + 0xc)) {
      lVar14 = 0;
      do {
        plVar15 = *(int64_t **)(puVar6[2] + lVar14 * 8);
        if ((g_0272fca8 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
          g_027902e0 = "MUPulseAssignmentTarget";
          g_027902f0 = 0;
          g_027902e8 = 0;
          ___cxa_guard_release();
        }
        if (plVar15 == (int64_t *)0x0) {
          lVar10 = 0;
        }
        else {
          uVar8 = (**(code **)(*plVar15 + 0x360))();
          lVar10 = FUN_00e86120(uVar8,1);
        }
        pvVar7 = _pthread_getspecific((void*)lVar13);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        plVar15 = (int64_t *)(lVar10 + (int64_t)plVar15);
        uVar8 = (**(code **)(*plVar15 + 0x38))();
        dVar18 = (double)FUN_016c98e0(uVar8,0);
        if (0 < *(int *)((int64_t)puVar5 + 0xc)) {
          lVar10 = 0;
          do {
            plVar1 = *(int64_t **)(puVar5[2] + lVar10 * 8);
            if ((g_0272fca8 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
              g_027902e0 = "MUPulseAssignmentTarget";
              g_027902f0 = 0;
              g_027902e8 = 0;
              ___cxa_guard_release();
            }
            if (plVar1 == (int64_t *)0x0) {
              lVar11 = 0;
            }
            else {
              (**(code **)(*plVar1 + 0x360))();
              lVar11 = FUN_00e86120();
            }
            pvVar7 = _pthread_getspecific((void*)lVar13);
            if (pvVar7 != (void *)0x0) {
              FUN_00e8b990();
            }
            uVar8 = (**(code **)(*(int64_t *)((int64_t)plVar1 + lVar11) + 0x38))();
            dVar19 = (double)FUN_016c98e0(uVar8,0);
            dVar20 = (double)(**(code **)(*plVar15 + 0x18))();
            if (dVar20 < dVar19) break;
            if ((dVar18 < dVar19) &&
               (dVar20 = (double)(**(code **)(*plVar15 + 0x18))(), dVar19 < dVar20)) {
              (**(code **)(*(int64_t *)((int64_t)plVar1 + lVar11) + 0x38))();
              lVar13 = *plVar15;
              (**(code **)(lVar13 + 0x40))();
            }
            lVar10 = lVar10 + 1;
          } while (lVar10 < *(int *)((int64_t)puVar5 + 0xc));
        }
        lVar14 = lVar14 + 1;
      } while (lVar14 < *(int *)((int64_t)puVar6 + 0xc));
    }
  }
  else {
    uVar17 = FUN_00d214d0(uVar16,*(void*)((int64_t)puVar5 + 0xc));
    uVar17 = FUN_00d214d0(uVar17,*(void*)((int64_t)puVar5 + 0xc));
    FUN_00d242c0(uVar17,0);
    FUN_011f4f10(uVar16,uVar3,uVar8,uVar9,0);
  }
  FUN_00d50b20();
  FUN_00d50b20();
  return;
}

