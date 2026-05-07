// Function: FUN_01335ab0
// Address: 01335ab0
// Size: 1527 bytes
// Class: MUAudioSourcePrincipalItem

void FUN_01335ab0(void* param_1)

{
  int64_t lVar1;
  char cVar2;
  int iVar3;
  void* pVar4;
  void *pvVar5;
  int64_t lVar6;
  void* pVar7;
  int64_t lVar8;
  int64_t lVar9;
  char unaff_SIL;
  int64_t this_ptr;
  int64_t local_a8;
  char local_a0;
  int local_90;
  int local_68;
  int64_t local_40;
  char local_38;
  
  if (*(int64_t *)(this_ptr + 0x150) == 0) {
    return;
  }
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  iVar3 = FUN_01538fa0();
  if (iVar3 == 0) {
    return;
  }
  lVar1 = *(int64_t *)(this_ptr + 0x40);
  if (lVar1 != 0) {
    FUN_00d50b00();
    local_68 = -1;
    while (local_68 = local_68 + 1, local_68 < *(int *)(lVar1 + 0xc)) {
      pvVar5 = _pthread_getspecific((void*)*(void*)(lVar1 + 0x10));
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      lVar8 = *(int64_t *)(this_ptr + 0x150);
      if (lVar8 != 0) {
        FUN_00d50b00();
      }
      FUN_013e1570();
      if (lVar8 != 0) {
        FUN_00d50b20();
      }
    }
    lVar8 = lVar1;
    FUN_001150f0();
    param_1 = (void*)lVar8;
  }
  if (((*(int64_t *)(this_ptr + 0x1f8) == 0) && (*(int64_t *)(this_ptr + 0x200) == 0)) &&
     (*(int64_t *)(this_ptr + 0x148) != 0)) {
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    iVar3 = FUN_0141bab0();
    if (iVar3 != 3) goto LAB_01335c77;
  }
  else {
LAB_01335c77:
    cVar2 = FUN_01334f30();
    if (cVar2 == '\0') goto LAB_01335ca4;
  }
  FUN_013357a0();
LAB_01335ca4:
  if (lVar1 != 0) {
    if (0 < *(int *)(lVar1 + 0xc)) {
      pVar4 = 0;
      do {
        lVar8 = local_a8;
        pVar7 = pVar4;
        pvVar5 = _pthread_getspecific(pVar4);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_013dfcb0();
        pvVar5 = _pthread_getspecific(pVar7);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_013dd790();
        if (local_a0 == '\0') {
          if (local_a8 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_a0 = '\0';
        }
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if (local_a8 != 0) {
          local_a0 = '\0';
          local_a8 = 0;
          local_90 = -1;
          while( true ) {
            lVar6 = (int64_t)local_90;
            local_90 = local_90 + 1;
            if (*(int *)(lVar8 + 0xc) <= local_90) break;
            lVar9 = *(int64_t *)(lVar8 + 0x10);
            local_a8 = *(int64_t *)(lVar9 + 8 + lVar6 * 8);
            pvVar5 = _pthread_getspecific((void*)lVar9);
            pVar7 = (void*)lVar9;
            if (pvVar5 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_011ef8d0();
            if ((local_38 == '\0') && (local_40 != 0)) {
              FUN_00d50b00();
            }
            pvVar5 = _pthread_getspecific(pVar7);
            if (pvVar5 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0126f610();
            pvVar5 = _pthread_getspecific(pVar7);
            if (pvVar5 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0125a5f0();
            if (unaff_SIL != '\0') {
              FUN_0039e8b0();
              if (local_38 == '\0') {
                if (local_40 != 0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_38 = '\0';
              }
              FUN_00e7bdb0();
              FUN_01287c80();
              if (local_40 != 0) {
                FUN_00d50b20();
              }
              if ((local_38 != '\0') && (local_40 != 0)) {
                FUN_00d50b20();
              }
            }
            if (local_40 != 0) {
              FUN_00d50b20();
            }
          }
          FUN_0015edf0();
          FUN_00d50b20();
        }
        pVar4 = pVar4 + 1;
      } while ((int)pVar4 < *(int *)(lVar1 + 0xc));
    }
    FUN_001150f0();
    FUN_00d50b20();
  }
  return;
}

