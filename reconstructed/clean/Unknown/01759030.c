// Function: FUN_01759030
// Address: 01759030
// Size: 2133 bytes
// Class: Unknown

void FUN_01759030(uint64_t param_1)

{
  uint64_t uVar1;
  uint64_t uVar2;
  bool bVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  void *pvVar9;
  int64_t lVar10;
  int64_t lVar11;
  int64_t lVar12;
  void* pVar13;
  uint64_t uVar14;
  int64_t this_ptr;
  int iVar15;
  int64_t lVar16;
  bool bVar17;
  int local_80;
  int local_7c;
  uint local_6c;
  int64_t local_50;
  char local_48;
  
  uVar1 = *(uint64_t *)(this_ptr + 0x60);
  if (uVar1 != 0) {
    FUN_00d50b00();
  }
  uVar2 = *(uint64_t *)(this_ptr + 0x58);
  if (uVar2 != 0) {
    FUN_00d50b00();
  }
  pvVar9 = _pthread_getspecific((void*)param_1);
  if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
    param_1 = uVar1;
  }
  cVar4 = FUN_01770870();
  if (cVar4 != '\0') {
    pvVar9 = _pthread_getspecific((void*)param_1);
    if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
      param_1 = uVar2;
    }
    cVar4 = FUN_01736d10();
    if (cVar4 == '\0') {
      do {
        pVar13 = (void*)param_1;
        pvVar9 = _pthread_getspecific(pVar13);
        if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
          pVar13 = (void*)uVar1;
        }
        iVar6 = FUN_01770ea0();
        pvVar9 = _pthread_getspecific(pVar13);
        if (pvVar9 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01770f00();
        iVar15 = *(int *)(local_50 + 0xc);
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
        iVar7 = iVar15 + -1;
        uVar8 = 1 - iVar15;
        uVar14 = -(int64_t)iVar7;
        local_80 = 0;
        local_6c = 0;
        bVar5 = false;
        param_1 = uVar14;
        local_7c = iVar7;
        while( true ) {
          pvVar9 = _pthread_getspecific((void*)param_1);
          if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
            param_1 = uVar2;
          }
          FUN_01736e70();
          iVar15 = *(int *)(local_50 + 0xc);
          if ((local_48 != '\0') && (local_50 != 0)) {
            FUN_00d50b20();
          }
          if (iVar15 <= local_80) break;
          FUN_017482a0();
          iVar15 = FUN_0174a9c0();
          if (iVar15 != iVar6) {
            FUN_01740240();
            lVar10 = local_50;
            if (local_48 == '\0') {
              if (local_50 != 0) {
                FUN_00d50b00();
                goto LAB_017594e0;
              }
LAB_017596c4:
              bVar3 = true;
            }
            else {
              if (local_50 == 0) goto LAB_017596c4;
LAB_017594e0:
              pvVar9 = _pthread_getspecific((void*)param_1);
              if (pvVar9 != (void *)0x0) {
                FUN_00e8b990();
              }
              cVar4 = FUN_01739620();
              param_1 = CONCAT71((int7)(param_1 >> 8),1);
              bVar3 = true;
              if (cVar4 != '\0') goto LAB_017596c4;
              param_1 = (uint64_t)uVar8;
              iVar15 = local_7c;
              do {
                iVar15 = iVar15 + uVar8;
              } while (iVar7 <= iVar15);
              lVar16 = (int64_t)iVar15;
              do {
                pvVar9 = _pthread_getspecific((void*)param_1);
                if ((pvVar9 != (void *)0x0) && (lVar11 = FUN_00e8b990(), lVar11 != 0)) {
                  param_1 = uVar2;
                }
                FUN_01736e70();
                iVar15 = *(int *)(local_50 + 0xc);
                if ((local_48 != '\0') && (local_50 != 0)) {
                  FUN_00d50b20();
                }
                lVar11 = lVar16 + iVar7;
                if ((int64_t)iVar15 <= (int64_t)(uVar14 + lVar11)) {
                  local_6c = FUN_0174aa60();
                  bVar5 = true;
                  bVar3 = false;
                  break;
                }
                pvVar9 = _pthread_getspecific((void*)param_1);
                if ((pvVar9 != (void *)0x0) && (lVar12 = FUN_00e8b990(), lVar12 != 0)) {
                  param_1 = uVar2;
                }
                FUN_01736e70();
                lVar16 = *(int64_t *)(*(int64_t *)(local_50 + 0x10) + lVar16 * 8);
                if (lVar10 != lVar16) {
                  if (lVar16 != 0) {
                    FUN_00d50b00();
                  }
                  bVar17 = lVar10 != 0;
                  lVar10 = lVar16;
                  if (bVar17) {
                    FUN_00d50b20();
                  }
                }
                if ((local_48 != '\0') && (local_50 != 0)) {
                  FUN_00d50b20();
                }
                pvVar9 = _pthread_getspecific((void*)param_1);
                if (pvVar9 != (void *)0x0) {
                  FUN_00e8b990();
                }
                cVar4 = FUN_01739620();
                lVar16 = lVar11;
              } while (cVar4 == '\0');
            }
            if (lVar10 != 0) {
              FUN_00d50b20();
            }
            if (!bVar3) break;
          }
          local_80 = local_80 + 1;
          local_7c = local_7c + 1;
        }
      } while ((bVar5) && ((local_6c & 1) != 0));
      goto LAB_01759901;
    }
  }
  pvVar9 = _pthread_getspecific((void*)param_1);
  if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
    param_1 = uVar1;
  }
  iVar6 = FUN_01770ea0();
  iVar15 = 0;
  do {
    pvVar9 = _pthread_getspecific((void*)param_1);
    if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
      param_1 = uVar2;
    }
    FUN_01736e70();
    iVar7 = *(int *)(local_50 + 0xc);
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if (iVar7 <= iVar15) goto LAB_01759750;
    FUN_017482a0();
    iVar7 = FUN_0174a9c0();
    FUN_01740240();
    if (local_48 == '\0') {
      if (local_50 != 0) {
        FUN_00d50b00();
        goto LAB_01759250;
      }
    }
    else if (local_50 != 0) {
LAB_01759250:
      pvVar9 = _pthread_getspecific((void*)param_1);
      if (pvVar9 != (void *)0x0) {
        FUN_00e8b990();
      }
      cVar4 = FUN_01739620();
      if ((cVar4 == '\0') && (iVar7 == iVar6)) break;
      FUN_00d50b20();
    }
    iVar15 = iVar15 + 1;
  } while( true );
  pvVar9 = _pthread_getspecific((void*)param_1);
  if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
    param_1 = uVar2;
  }
  FUN_01736c50();
  FUN_0174b330();
  FUN_00d50b20();
LAB_01759750:
  do {
    pvVar9 = _pthread_getspecific((void*)param_1);
    if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
      param_1 = uVar1;
    }
    FUN_01770ea0();
    bVar5 = false;
    uVar8 = 0;
    iVar6 = 0;
LAB_017597bd:
    do {
      pvVar9 = _pthread_getspecific((void*)param_1);
      if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
        param_1 = uVar2;
      }
      FUN_01736e70();
      iVar15 = *(int *)(local_50 + 0xc);
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      if (iVar15 <= iVar6) break;
      FUN_017482a0();
      FUN_01740240();
      if (local_48 == '\0') {
        if (local_50 == 0) goto LAB_017597b9;
        FUN_00d50b00();
      }
      else if (local_50 == 0) {
LAB_017597b9:
        iVar6 = iVar6 + 1;
        goto LAB_017597bd;
      }
      pvVar9 = _pthread_getspecific((void*)param_1);
      if (pvVar9 != (void *)0x0) {
        FUN_00e8b990();
      }
      cVar4 = FUN_01739620();
      if (cVar4 == '\0') {
        uVar8 = FUN_0174aa60();
        bVar5 = true;
      }
      FUN_00d50b20();
      iVar6 = iVar6 + 1;
    } while (cVar4 != '\0');
  } while ((bVar5) && ((uVar8 & 1) != 0));
LAB_01759901:
  if (uVar2 != 0) {
    FUN_00d50b20();
  }
  if (uVar1 != 0) {
    FUN_00d50b20();
  }
  return;
}

