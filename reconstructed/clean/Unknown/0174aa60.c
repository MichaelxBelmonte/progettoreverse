// Function: FUN_0174aa60
// Address: 0174aa60
// Size: 2117 bytes
// Class: Unknown

uint64_t FUN_0174aa60(void* param_1)

{
  int iVar1;
  int64_t lVar2;
  int64_t lVar3;
  byte bVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  void *pvVar10;
  uint uVar11;
  int unaff_ESI;
  int64_t this_ptr;
  uint uVar12;
  uint64_t uVar13;
  uint64_t uVar14;
  int64_t local_58;
  char local_50;
  
  lVar2 = *(int64_t *)(this_ptr + 0x60);
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  lVar3 = *(int64_t *)(this_ptr + 0x58);
  if (lVar3 != 0) {
    FUN_00d50b00();
  }
  pvVar10 = _pthread_getspecific(param_1);
  if (pvVar10 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01770f00();
  iVar1 = *(int *)(local_58 + 0xc);
  if (local_50 != '\0') {
    FUN_00d50b20();
  }
  pvVar10 = _pthread_getspecific(param_1);
  if (pvVar10 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01736e70();
  iVar9 = *(int *)(local_58 + 0xc);
  if (local_50 != '\0') {
    FUN_00d50b20();
  }
  iVar6 = FUN_0174a9c0();
  pvVar10 = _pthread_getspecific(param_1);
  if (pvVar10 != (void *)0x0) {
    FUN_00e8b990();
  }
  iVar7 = FUN_01737820();
  pvVar10 = _pthread_getspecific(param_1);
  if (pvVar10 != (void *)0x0) {
    FUN_00e8b990();
  }
  bVar4 = FUN_01770870();
  if (-1 < iVar6) {
    uVar11 = (uint)bVar4;
    uVar8 = iVar1 - (uint)bVar4;
    uVar14 = 0;
    uVar13 = 0;
    if ((((int)uVar8 <= iVar6) || (iVar7 < 0)) || (iVar9 <= iVar7)) goto LAB_0174ac29;
    pvVar10 = _pthread_getspecific((uint)bVar4);
    if (pvVar10 != (void *)0x0) {
      FUN_00e8b990();
    }
    iVar9 = FUN_01770ea0();
    if (iVar6 != iVar9) {
      pvVar10 = _pthread_getspecific(uVar11);
      if (pvVar10 != (void *)0x0) {
        FUN_00e8b990();
      }
      cVar5 = FUN_01770870();
      if (cVar5 == '\0') {
        if (unaff_ESI < 1) {
          if (unaff_ESI < 0) {
            pvVar10 = _pthread_getspecific(uVar11);
            if (pvVar10 != (void *)0x0) {
              FUN_00e8b990();
            }
            iVar9 = FUN_01736c50();
            if (iVar9 < 0) {
              pvVar10 = _pthread_getspecific(uVar11);
              if (pvVar10 != (void *)0x0) {
                FUN_00e8b990();
              }
              iVar9 = FUN_01736c50();
              if (iVar9 < unaff_ESI) {
                pvVar10 = _pthread_getspecific(uVar11);
                if (pvVar10 != (void *)0x0) {
                  FUN_00e8b990();
                }
                pvVar10 = _pthread_getspecific(uVar11);
                if (pvVar10 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_01736c50();
                FUN_01736c60();
              }
            }
          }
        }
        else {
          pvVar10 = _pthread_getspecific(uVar11);
          if (pvVar10 != (void *)0x0) {
            FUN_00e8b990();
          }
          iVar9 = FUN_01736c50();
          if (0 < iVar9) {
            pvVar10 = _pthread_getspecific(uVar11);
            if (pvVar10 != (void *)0x0) {
              FUN_00e8b990();
            }
            iVar9 = FUN_01736c50();
            if (unaff_ESI < iVar9) {
              pvVar10 = _pthread_getspecific(uVar11);
              if (pvVar10 != (void *)0x0) {
                FUN_00e8b990();
              }
              pvVar10 = _pthread_getspecific(uVar11);
              if (pvVar10 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_01736c50();
              FUN_01736c60();
            }
          }
        }
      }
      else {
        pvVar10 = _pthread_getspecific(uVar11);
        if (pvVar10 != (void *)0x0) {
          FUN_00e8b990();
        }
        iVar9 = FUN_01736c50();
        pvVar10 = _pthread_getspecific(uVar11);
        if (pvVar10 != (void *)0x0) {
          FUN_00e8b990();
        }
        iVar6 = FUN_01736c50();
        uVar12 = (unaff_ESI % (int)uVar8 >> 0x1f & uVar8) + unaff_ESI % (int)uVar8;
        uVar13 = (uint64_t)uVar12;
        iVar9 = (iVar9 % (int)uVar8 >> 0x1f & uVar8) + iVar9 % (int)uVar8;
        uVar11 = uVar8;
        if ((0 < iVar6) && ((int)uVar12 < iVar9)) {
          pvVar10 = _pthread_getspecific(uVar8);
          if (pvVar10 != (void *)0x0) {
            FUN_00e8b990();
          }
          pvVar10 = _pthread_getspecific(uVar11);
          if (pvVar10 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01736c50();
          FUN_01736c60();
        }
        pvVar10 = _pthread_getspecific(uVar11);
        if (pvVar10 != (void *)0x0) {
          FUN_00e8b990();
        }
        iVar6 = FUN_01736c50();
        if ((iVar6 < 0) && (iVar9 < (int)uVar12)) {
          pvVar10 = _pthread_getspecific(uVar11);
          if (pvVar10 != (void *)0x0) {
            FUN_00e8b990();
          }
          pvVar10 = _pthread_getspecific(uVar11);
          if (pvVar10 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01736c50();
          FUN_01736c60();
        }
      }
      pvVar10 = _pthread_getspecific(uVar11);
      if (pvVar10 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_017722d0();
      pvVar10 = _pthread_getspecific(uVar11);
      if (pvVar10 != (void *)0x0) {
        FUN_00e8b990();
      }
      cVar5 = FUN_01770870();
      if (cVar5 != '\0') {
        pvVar10 = _pthread_getspecific(uVar11);
        if (pvVar10 != (void *)0x0) {
          FUN_00e8b990();
        }
        cVar5 = FUN_01736d10();
        if (cVar5 == '\0') {
          uVar11 = -(uint)bVar4;
          uVar13 = (uint64_t)uVar11;
          iVar9 = iVar7 + iVar1 + uVar11;
          do {
            iVar9 = iVar9 - (iVar1 + uVar11);
          } while ((int)uVar8 <= iVar9);
          while( true ) {
            pvVar10 = _pthread_getspecific((void*)uVar13);
            if (pvVar10 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_01736e70();
            iVar6 = *(int *)(local_58 + 0xc);
            if ((local_50 != '\0') && (local_58 != 0)) {
              FUN_00d50b20();
            }
            if (iVar6 <= iVar9) break;
            pvVar10 = _pthread_getspecific((void*)uVar13);
            if (pvVar10 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_01737140();
            iVar9 = iVar9 + iVar1 + uVar11 + -1;
          }
          uVar14 = CONCAT71((uint7)(uint3)((uint)iVar6 >> 8),1);
          goto LAB_0174ac29;
        }
      }
      pvVar10 = _pthread_getspecific(uVar11);
      if (pvVar10 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar14 = CONCAT71((int7)(uVar13 >> 8),1);
      FUN_01737140();
      goto LAB_0174ac29;
    }
  }
  uVar14 = 0;
LAB_0174ac29:
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  return uVar14;
}

