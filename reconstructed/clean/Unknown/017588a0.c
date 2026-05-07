// Function: FUN_017588a0
// Address: 017588a0
// Size: 1463 bytes
// Class: Unknown

uint64_t FUN_017588a0(uint64_t param_1)

{
  int iVar1;
  int64_t lVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  void *pvVar9;
  int64_t lVar10;
  int64_t lVar11;
  int64_t lVar12;
  uint64_t uVar13;
  uint64_t uVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  int64_t this_ptr;
  uint64_t unaff_R12;
  uint64_t uVar18;
  uint7 uVar19;
  int64_t lVar20;
  bool bVar21;
  int local_58;
  uint64_t local_50;
  char local_48;
  
  lVar2 = *(int64_t *)(this_ptr + 0x60);
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  uVar3 = *(uint64_t *)(this_ptr + 0x58);
  if (uVar3 != 0) {
    FUN_00d50b00();
  }
  pvVar9 = _pthread_getspecific((void*)param_1);
  if (pvVar9 != (void *)0x0) {
    FUN_00e8b990();
  }
  iVar6 = FUN_01770ea0();
  pvVar9 = _pthread_getspecific((void*)param_1);
  if (pvVar9 != (void *)0x0) {
    FUN_00e8b990();
  }
  cVar5 = FUN_01770870();
  if (cVar5 != '\0') {
    pvVar9 = _pthread_getspecific((void*)param_1);
    if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
      param_1 = uVar3;
    }
    cVar5 = FUN_01736d10();
    if (cVar5 == '\0') {
      pvVar9 = _pthread_getspecific((void*)param_1);
      if (pvVar9 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01770f00();
      iVar15 = *(int *)(local_50 + 0xc);
      if (local_48 != '\0') {
        FUN_00d50b20();
      }
      iVar1 = iVar15 + -1;
      lVar10 = (int64_t)iVar1;
      iVar15 = 1 - iVar15;
      uVar16 = 0;
      uVar14 = -lVar10;
      local_58 = iVar1;
      do {
        pvVar9 = _pthread_getspecific((void*)uVar14);
        if ((pvVar9 != (void *)0x0) && (lVar11 = FUN_00e8b990(), lVar11 != 0)) {
          uVar14 = uVar3;
        }
        FUN_01736e70();
        iVar8 = *(int *)(local_50 + 0xc);
        uVar18 = CONCAT71((int7)(unaff_R12 >> 8),(int)uVar16 < iVar8);
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
        if (iVar8 <= (int)uVar16) goto LAB_01758e84;
        uVar7 = FUN_017482a0();
        unaff_R12 = (uint64_t)uVar7;
        iVar8 = FUN_0174a9c0();
        if (iVar8 != iVar6) {
          FUN_01740240();
          uVar18 = local_50;
          if (local_48 == '\0') {
            if (local_50 != 0) {
              FUN_00d50b00();
              goto LAB_01758c70;
            }
LAB_01758e4e:
            uVar19 = (uint7)(unaff_R12 >> 8);
          }
          else {
            if (local_50 == 0) goto LAB_01758e4e;
LAB_01758c70:
            pvVar9 = _pthread_getspecific((void*)uVar14);
            if (pvVar9 != (void *)0x0) {
              FUN_00e8b990();
            }
            cVar5 = FUN_01739620();
            uVar19 = (uint7)(uint3)(uVar7 >> 8);
            uVar7 = uVar16;
            iVar8 = local_58;
            if (cVar5 == '\0') {
              do {
                uVar17 = uVar7;
                uVar14 = (uint64_t)uVar17;
                iVar8 = iVar8 + iVar15;
                uVar7 = uVar17 + iVar15;
              } while (iVar1 <= iVar8);
              lVar11 = (int64_t)iVar8;
              lVar20 = (int64_t)(int)uVar17 + -lVar10;
              unaff_R12 = local_50;
              do {
                pvVar9 = _pthread_getspecific((void*)uVar14);
                if ((pvVar9 != (void *)0x0) && (lVar12 = FUN_00e8b990(), lVar12 != 0)) {
                  uVar14 = uVar3;
                }
                uVar13 = FUN_01736e70();
                iVar8 = *(int *)(local_50 + 0xc);
                if ((local_48 != '\0') && (local_50 != 0)) {
                  uVar13 = FUN_00d50b20();
                }
                lVar20 = lVar20 + lVar10;
                if (iVar8 <= lVar20) {
                  uVar4 = CONCAT71((int7)((uint64_t)uVar13 >> 8),lVar11 < iVar8) & 0xffffffff;
                  uVar18 = unaff_R12;
                  goto joined_r0x01758e7a;
                }
                pvVar9 = _pthread_getspecific((void*)uVar14);
                if ((pvVar9 != (void *)0x0) && (lVar12 = FUN_00e8b990(), lVar12 != 0)) {
                  uVar14 = uVar3;
                }
                FUN_01736e70();
                uVar18 = *(uint64_t *)(*(int64_t *)(local_50 + 0x10) + lVar11 * 8);
                if (unaff_R12 != uVar18) {
                  if (uVar18 != 0) {
                    FUN_00d50b00();
                  }
                  bVar21 = unaff_R12 != 0;
                  unaff_R12 = uVar18;
                  if (bVar21) {
                    FUN_00d50b20();
                  }
                }
                if ((local_48 != '\0') && (local_50 != 0)) {
                  FUN_00d50b20();
                }
                pvVar9 = _pthread_getspecific((void*)uVar14);
                if (pvVar9 != (void *)0x0) {
                  FUN_00e8b990();
                }
                cVar5 = FUN_01739620();
                lVar11 = lVar11 + lVar10;
                uVar18 = unaff_R12;
              } while (cVar5 == '\0');
              goto LAB_01758e4e;
            }
          }
          uVar4 = CONCAT71(uVar19,1);
joined_r0x01758e7a:
          unaff_R12 = uVar4;
          if (uVar18 != 0) {
            FUN_00d50b20();
          }
          if ((char)unaff_R12 == '\0') goto LAB_01758e81;
        }
        uVar16 = uVar16 + 1;
        local_58 = local_58 + 1;
      } while( true );
    }
  }
  uVar14 = 0;
  do {
    pvVar9 = _pthread_getspecific((void*)param_1);
    if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
      param_1 = uVar3;
    }
    FUN_01736e70();
    iVar6 = *(int *)(local_50 + 0xc);
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if (iVar6 <= (int)uVar14) {
      uVar18 = 0;
      goto LAB_01758e84;
    }
    FUN_017482a0();
    FUN_01740240();
    if (local_48 == '\0') {
      if (local_50 != 0) {
        FUN_00d50b00();
        goto LAB_01758a80;
      }
    }
    else if (local_50 != 0) {
LAB_01758a80:
      pvVar9 = _pthread_getspecific((void*)param_1);
      if (pvVar9 != (void *)0x0) {
        FUN_00e8b990();
      }
      cVar5 = FUN_01739620();
      if (cVar5 == '\0') goto LAB_01758ae1;
      FUN_00d50b20();
    }
    uVar14 = (uint64_t)((int)uVar14 + 1);
  } while( true );
LAB_01758e81:
  uVar18 = CONCAT71((int7)(unaff_R12 >> 8),1);
  goto LAB_01758e84;
LAB_01758ae1:
  uVar18 = CONCAT71((int7)(uVar14 >> 8),1);
  FUN_00d50b20();
LAB_01758e84:
  if (uVar3 != 0) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  return uVar18 & 0xffffffff;
}

