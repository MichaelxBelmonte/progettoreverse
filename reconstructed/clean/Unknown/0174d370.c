// Function: FUN_0174d370
// Address: 0174d370
// Size: 1484 bytes
// Class: Unknown

void FUN_0174d370(int64_t param_1)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  uint32_t uVar4;
  int iVar5;
  int iVar6;
  void *pvVar7;
  int64_t lVar8;
  void*puVar9;
  void* pVar10;
  char *pcVar11;
  int64_t lVar12;
  int unaff_ESI;
  int64_t this_ptr;
  int iVar13;
  int64_t local_c0;
  char local_b8;
  int64_t local_58;
  char local_50 [8];
  int64_t local_48;
  int64_t local_40;
  char local_38 [8];
  
  lVar8 = *(int64_t *)(this_ptr + 0x60);
  if (lVar8 != 0) {
    FUN_00d50b00();
  }
  lVar12 = *(int64_t *)(this_ptr + 0x58);
  if (lVar12 != 0) {
    FUN_00d50b00();
  }
  local_48 = lVar12;
  pvVar7 = _pthread_getspecific((void*)param_1);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  cVar2 = FUN_01736d10();
  if (cVar2 == '\0') {
    pvVar7 = _pthread_getspecific((void*)param_1);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01736e70();
    iVar13 = *(int *)(local_58 + 0xc);
    if (local_50[0] != '\0') {
      FUN_00d50b20();
    }
    pvVar7 = _pthread_getspecific((void*)param_1);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    iVar3 = FUN_01736c50();
    pvVar7 = _pthread_getspecific((void*)param_1);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar4 = FUN_01736dd0();
    local_40 = CONCAT44(local_40._4_4_,uVar4);
    pvVar7 = _pthread_getspecific((void*)param_1);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    iVar5 = FUN_01736c50();
    pvVar7 = _pthread_getspecific((void*)param_1);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    iVar6 = FUN_01736dd0();
    pcVar1 = g_025fe688;
    pVar10 = (void*)param_1;
    iVar6 = (iVar13 + -1 + iVar5) - iVar6;
    if (iVar6 < unaff_ESI) {
      local_40 = lVar8;
      if (iVar6 < unaff_ESI) {
        iVar13 = 0;
        do {
          pvVar7 = _pthread_getspecific((void*)param_1);
          if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
            param_1 = local_48;
          }
          puVar9 = (void*)FUN_00e8fc40();
          FUN_00d4ff40();
          *puVar9 = &g_025fe670;
          puVar9[7] = 0;
          puVar9[8] = 0;
          puVar9[9] = 0;
          (*pcVar1)();
          FUN_01735cb0();
          if (puVar9 != (void*)0x0) {
            FUN_00d50b20();
          }
          iVar13 = iVar13 + 1;
        } while (iVar13 < unaff_ESI - iVar6);
      }
      lVar12 = local_48;
      pvVar7 = _pthread_getspecific((void*)param_1);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01736e70();
      FUN_00d23340();
      pVar10 = (void*)CONCAT71((int7)((uint64_t)param_1 >> 8),local_50[0]);
      pcVar11 = local_38;
      if (local_50[0] != '\0') {
        pcVar11 = local_50;
      }
      local_38[0] = local_50[0];
      *pcVar11 = '\0';
      if ((local_50[0] != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      lVar8 = local_40;
      pvVar7 = _pthread_getspecific(pVar10);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_017395b0();
      if ((local_38[0] != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if ((local_b8 != '\0') && (local_c0 != 0)) {
        FUN_00d50b20();
      }
      FUN_0174bd90();
    }
    else {
      iVar3 = iVar3 - (int)local_40;
      if (unaff_ESI < iVar3) {
        local_40 = lVar8;
        if (unaff_ESI < iVar3) {
          iVar13 = 0;
          do {
            pvVar7 = _pthread_getspecific((void*)param_1);
            if (pvVar7 != (void *)0x0) {
              FUN_00e8b990();
            }
            puVar9 = (void*)FUN_00e8fc40();
            FUN_00d4ff40();
            *puVar9 = &g_025fe670;
            puVar9[7] = 0;
            puVar9[8] = 0;
            puVar9[9] = 0;
            uVar4 = (*pcVar1)();
            FUN_01736ea0(uVar4,0);
            lVar12 = local_48;
            if (puVar9 != (void*)0x0) {
              FUN_00d50b20();
            }
            pVar10 = (void*)param_1;
            iVar13 = iVar13 + 1;
          } while (iVar13 < iVar3 - unaff_ESI);
        }
        pvVar7 = _pthread_getspecific(pVar10);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01736e70();
        pvVar7 = _pthread_getspecific(pVar10);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        lVar8 = local_40;
        FUN_017395b0();
        if ((local_50[0] != '\0') && (local_58 != 0)) {
          FUN_00d50b20();
        }
        FUN_0174bd90();
      }
    }
  }
  if (lVar12 != 0) {
    FUN_00d50b20();
  }
  if (lVar8 != 0) {
    FUN_00d50b20();
  }
  return;
}

