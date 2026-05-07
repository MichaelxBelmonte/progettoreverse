// Function: FUN_01c17760
// Address: 01c17760
// Size: 1729 bytes
// Class: MUDetectionPitchCenterAssignmentInspector

uint64_t FUN_01c17760(float param_1)

{
  bool bVar1;
  code *pcVar2;
  int64_t *plVar3;
  uint uVar4;
  void *pvVar5;
  int64_t lVar6;
  void*puVar7;
  void* pVar8;
  void* pVar9;
  int64_t *plVar10;
  int64_t lVar11;
  byte unaff_SIL;
  int64_t *this_ptr;
  int64_t *plVar12;
  uint64_t uVar13;
  float fVar14;
  int64_t local_e0;
  char local_d8;
  int64_t *local_78;
  char local_70;
  int local_60;
  uint64_t local_50;
  char local_48;
  
  FUN_01a58dc0();
  (**(code **)(*local_78 + 0xe20))();
  if ((local_d8 == '\0') && (local_e0 != 0)) {
    FUN_00d50b00();
  }
  if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (local_e0 == 0) {
    uVar13 = 0;
  }
  else {
    if (*(int *)(local_e0 + 0xc) == 0) {
      uVar13 = 0;
    }
    else {
      uVar4 = (**(code **)(*this_ptr + 0x488))();
      pcVar2 = g_02572370;
      uVar13 = (uint64_t)uVar4;
      if (((byte)uVar4 & unaff_SIL) != 0) {
        if (*(int *)(local_e0 + 0xc) < 1) {
          bVar1 = false;
          puVar7 = (void*)0x0;
        }
        else {
          plVar10 = (int64_t *)0x0;
          puVar7 = (void*)0x0;
          bVar1 = false;
          do {
            plVar3 = local_78;
            pVar8 = (void*)plVar10;
            pvVar5 = _pthread_getspecific(pVar8);
            if (pvVar5 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0125e7c0();
            if ((local_70 == '\0') && (local_78 != (int64_t *)0x0)) {
              FUN_00d50b00();
            }
            pvVar5 = _pthread_getspecific((void*)plVar10);
            if (pvVar5 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_013de560();
            if ((local_70 == '\0') && (local_78 != (int64_t *)0x0)) {
              FUN_00d50b00();
            }
            pvVar5 = _pthread_getspecific((void*)plVar10);
            if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
              plVar10 = local_78;
            }
            FUN_014ed740();
            pvVar5 = _pthread_getspecific((void*)plVar10);
            if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
              plVar10 = local_78;
            }
            pvVar5 = _pthread_getspecific((void*)plVar10);
            plVar12 = local_78;
            if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
              plVar10 = local_78;
              plVar12 = (int64_t *)local_78[(uint64_t)(*(uint *)(lVar6 + 0x154) & 1) + 4];
            }
            pVar9 = (void*)plVar10;
            fVar14 = (float)(**(code **)(*plVar12 + 0x3e0))();
            FUN_014bd3c0(fVar14 + param_1);
            pvVar5 = _pthread_getspecific(pVar9);
            if (pvVar5 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_013dfcb0();
            pvVar5 = _pthread_getspecific(pVar9);
            if (pvVar5 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_013dd790();
            if (local_70 == '\0') {
              if (local_78 != (int64_t *)0x0) {
                FUN_00d50b00();
              }
            }
            else {
              local_70 = '\0';
            }
            if ((local_48 != '\0') && (local_50 != 0)) {
              FUN_00d50b20();
            }
            if (local_78 != (int64_t *)0x0) {
              local_70 = '\0';
              local_78 = (int64_t *)0x0;
              local_60 = -1;
LAB_01c17b73:
              while( true ) {
                lVar6 = (int64_t)local_60;
                local_60 = local_60 + 1;
                if (*(int *)((int64_t)plVar3 + 0xc) <= local_60) break;
                lVar11 = plVar3[2];
                local_78 = *(int64_t **)(lVar11 + 8 + lVar6 * 8);
                pvVar5 = _pthread_getspecific((void*)lVar11);
                pVar9 = (void*)lVar11;
                if (pvVar5 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_011ef8d0();
                if (local_48 == '\0') goto LAB_01c17c20;
                if (local_50 != 0) goto LAB_01c17c50;
              }
              FUN_0015edf0();
              FUN_00d50b20();
            }
            if (plVar3 != (int64_t *)0x0) {
              FUN_00d50b20();
              FUN_00d50b20();
            }
            uVar4 = pVar8 + 1;
            plVar10 = (int64_t *)(uint64_t)uVar4;
          } while ((int)uVar4 < *(int *)(local_e0 + 0xc));
        }
        FUN_001159b0();
        uVar13 = CONCAT71((int7)(uVar13 >> 8),1);
        if ((bVar1) && (puVar7 != (void*)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    FUN_00d50b20();
  }
  return uVar13 & 0xffffffff;
LAB_01c17c20:
  if (local_50 != 0) {
    FUN_00d50b00();
LAB_01c17c50:
    pvVar5 = _pthread_getspecific(pVar9);
    uVar13 = local_50;
    if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
      uVar13 = *(uint64_t *)(local_50 + 0x20 + (uint64_t)(*(uint *)(lVar6 + 0x154) & 1) * 8);
    }
    pvVar5 = _pthread_getspecific(pVar9);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    fVar14 = (float)FUN_0125a2c0();
    FUN_012595a0(fVar14 + param_1);
    if (puVar7 == (void*)0x0) {
      puVar7 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar7 = &g_02572358;
      (*pcVar2)();
      bVar1 = true;
    }
    local_48 = '\0';
    FUN_00d21140();
    FUN_012879b0();
    FUN_00d23740();
    FUN_00d50b20();
  }
  goto LAB_01c17b73;
}

