// Function: FUN_0174c730
// Address: 0174c730
// Size: 2513 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x0174c9f7) */
/* WARNING: Removing unreachable block (ram,0x0174ca00) */
/* WARNING: Removing unreachable block (ram,0x0174d034) */
/* WARNING: Removing unreachable block (ram,0x0174d03d) */
/* WARNING: Removing unreachable block (ram,0x0174cc24) */
/* WARNING: Removing unreachable block (ram,0x0174cc2d) */
/* WARNING: Removing unreachable block (ram,0x0174c88b) */
/* WARNING: Removing unreachable block (ram,0x0174c894) */
/* WARNING: Type propagation algorithm not settling */

longlong * FUN_0174c730(ulonglong param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  int *piVar3;
  bool bVar4;
  char cVar5;
  byte bVar6;
  undefined4 uVar7;
  uint uVar8;
  void *pvVar9;
  longlong lVar10;
  pthread_key_t pVar11;
  pthread_key_t pVar12;
  ulonglong uVar13;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  uint uVar14;
  int iVar15;
  int iVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float local_7c;
  float local_70;
  int local_6c;
  longlong local_58;
  char local_50;
  longlong local_40;
  
  uVar1 = *(ulonglong *)(unaff_RSI + 0x60);
  if (uVar1 != 0) {
    FUN_00d50b00();
  }
  uVar2 = *(ulonglong *)(unaff_RSI + 0x58);
  if (uVar2 != 0) {
    FUN_00d50b00();
  }
  pvVar9 = _pthread_getspecific((pthread_key_t)param_1);
  if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
    param_1 = uVar1;
  }
  cVar5 = FUN_017708d0();
  if (cVar5 == '\0') {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
  }
  else {
    pvVar9 = _pthread_getspecific((pthread_key_t)param_1);
    if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
      param_1 = uVar2;
    }
    cVar5 = FUN_01736d10();
    if (cVar5 == '\0') {
      FUN_00c8e690();
      if ((local_50 == '\0') && (local_58 != 0)) {
        FUN_00d50b00();
      }
      FUN_00c92170();
      FUN_00c92160();
      local_40 = local_58;
      ___bzero();
      pvVar9 = _pthread_getspecific((pthread_key_t)param_1);
      if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
        param_1 = uVar2;
      }
      FUN_01736c50();
      fVar17 = (float)FUN_01742280();
      pvVar9 = _pthread_getspecific((pthread_key_t)param_1);
      if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
        param_1 = uVar1;
      }
      FUN_01770f00();
      iVar15 = *(int *)(local_58 + 0xc);
      if (local_50 != '\0') {
        FUN_00d50b20();
      }
      if (1 < iVar15) {
        iVar16 = 0;
        do {
          uVar7 = FUN_017482a0();
          fVar18 = (float)FUN_01742280();
          for (fVar18 = fVar18 - fVar17; fVar18 < 0.0; fVar18 = fVar18 + DAT_0239394c) {
          }
          for (; DAT_0239394c <= fVar18; fVar18 = fVar18 + DAT_02394218) {
          }
          fVar18 = fVar18 / DAT_023908e0;
          fVar19 = (fVar18 - (float)(int)fVar18) * DAT_023908e0;
          uVar14 = (int)fVar18 * 2;
          if (DAT_0241fd58 < fVar19) {
            if (DAT_02390438 <= fVar19) {
              uVar14 = uVar14 + 2;
            }
            else {
              uVar14 = uVar14 | 1;
            }
          }
          if (uVar14 == 0x18) {
            uVar14 = 0;
          }
          if (uVar14 < 0x18) {
            FUN_01740240(fVar19,uVar7);
            pVar11 = (pthread_key_t)param_1;
            if (local_50 == '\0') {
              if (local_58 != 0) {
                FUN_00d50b00();
                goto LAB_0174d050;
              }
LAB_0174d0be:
              uVar8 = 1;
              param_1 = CONCAT71((int7)(param_1 >> 8),1);
            }
            else {
              if (local_58 == 0) goto LAB_0174d0be;
LAB_0174d050:
              pvVar9 = _pthread_getspecific(pVar11);
              if (pvVar9 != (void *)0x0) {
                FUN_00e8b990();
              }
              cVar5 = FUN_01739620();
              if (cVar5 == '\0') {
                uVar8 = 1;
              }
              else {
                pvVar9 = _pthread_getspecific(pVar11);
                if (pvVar9 != (void *)0x0) {
                  FUN_00e8b990();
                }
                bVar6 = FUN_01739960();
                uVar8 = bVar6 ^ 3;
              }
              param_1 = 0;
            }
            if (*(int *)(*(longlong *)(local_58 + 0x10) + (ulonglong)uVar14 * 4) < (int)uVar8) {
              *(uint *)(*(longlong *)(local_58 + 0x10) + (ulonglong)uVar14 * 4) = uVar8;
            }
            if ((char)param_1 == '\0') {
              FUN_00d50b20();
            }
          }
          iVar16 = iVar16 + 1;
        } while (iVar16 != iVar15 + -1);
      }
    }
    else {
      pvVar9 = _pthread_getspecific((pthread_key_t)param_1);
      if (pvVar9 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01736e70();
      iVar15 = *(int *)(local_58 + 0xc);
      if (local_50 != '\0') {
        FUN_00d50b20();
      }
      pVar11 = 0xd;
      if (iVar15 != 0xc) {
        pVar11 = 1;
      }
      local_7c = DAT_02390438;
      local_70 = DAT_0241fd58;
      local_6c = 0;
      local_40 = 0;
      bVar4 = false;
      do {
        pvVar9 = _pthread_getspecific(pVar11);
        if (pvVar9 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01736c50();
        FUN_00c8e690();
        if ((local_50 == '\0') && (local_58 != 0)) {
          FUN_00d50b00();
        }
        FUN_00c92170();
        FUN_00c92160();
        ___bzero();
        if (local_58 == local_40) {
          if (bVar4) {
            FUN_00d50b20();
          }
          else {
            bVar4 = true;
          }
        }
        else if ((bVar4) && (local_40 != 0)) {
          FUN_00d50b20();
          local_40 = local_58;
          bVar4 = true;
        }
        else {
          local_40 = local_58;
          bVar4 = true;
        }
        uVar13 = (ulonglong)
                 ((((uint)(local_6c / 6 + (local_6c >> 0x1f)) >> 1) - (local_6c >> 0x1f)) * 0xc);
        fVar17 = (float)FUN_01742280();
        iVar15 = 0;
        while( true ) {
          pvVar9 = _pthread_getspecific((pthread_key_t)uVar13);
          if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
            uVar13 = uVar2;
          }
          FUN_01736e70();
          iVar16 = *(int *)(local_58 + 0xc);
          if ((local_50 != '\0') && (local_58 != 0)) {
            FUN_00d50b20();
          }
          if (iVar16 <= iVar15) break;
          uVar7 = FUN_017482a0();
          fVar18 = (float)FUN_01742280();
          for (fVar18 = fVar18 - fVar17; fVar18 < 0.0; fVar18 = fVar18 + DAT_0239394c) {
          }
          for (; DAT_0239394c <= fVar18; fVar18 = fVar18 + DAT_02394218) {
          }
          fVar18 = fVar18 / DAT_023908e0;
          fVar19 = (fVar18 - (float)(int)fVar18) * DAT_023908e0;
          uVar14 = (int)fVar18 * 2;
          if (local_70 < fVar19) {
            if (local_7c <= fVar19) {
              uVar14 = uVar14 + 2;
            }
            else {
              uVar14 = uVar14 | 1;
            }
          }
          if (uVar14 == 0x18) {
            uVar14 = 0;
          }
          if (uVar14 < 0x18) {
            FUN_01740240(fVar19,uVar7);
            pVar12 = (pthread_key_t)uVar13;
            if (local_50 == '\0') {
              if (local_58 != 0) {
                FUN_00d50b00();
                goto LAB_0174cc40;
              }
LAB_0174ccae:
              uVar8 = 1;
              uVar13 = CONCAT71((int7)(uVar13 >> 8),1);
            }
            else {
              if (local_58 == 0) goto LAB_0174ccae;
LAB_0174cc40:
              pvVar9 = _pthread_getspecific(pVar12);
              if (pvVar9 != (void *)0x0) {
                FUN_00e8b990();
              }
              cVar5 = FUN_01739620();
              if (cVar5 == '\0') {
                uVar8 = 1;
              }
              else {
                pvVar9 = _pthread_getspecific(pVar12);
                if (pvVar9 != (void *)0x0) {
                  FUN_00e8b990();
                }
                bVar6 = FUN_01739960();
                uVar8 = bVar6 ^ 3;
              }
              uVar13 = 0;
            }
            if (*(int *)(*(longlong *)(local_40 + 0x10) + (ulonglong)uVar14 * 4) < (int)uVar8) {
              *(uint *)(*(longlong *)(local_40 + 0x10) + (ulonglong)uVar14 * 4) = uVar8;
            }
            if ((char)uVar13 == '\0') {
              FUN_00d50b20();
            }
          }
          iVar15 = iVar15 + 1;
        }
        if (pVar11 < 2) {
          pVar11 = 1;
        }
        else {
          piVar3 = *(int **)(local_40 + 0x10);
          if (((((((((*piVar3 != 0) && (piVar3[1] == 0)) && (piVar3[2] != 0)) &&
                  ((piVar3[3] == 0 && (piVar3[4] != 0)))) && (piVar3[5] == 0)) &&
                (((piVar3[6] != 0 && (piVar3[7] == 0)) &&
                 ((piVar3[8] != 0 && (((piVar3[9] == 0 && (piVar3[10] != 0)) && (piVar3[0xb] == 0)))
                  ))))) && ((piVar3[0xc] != 0 && (piVar3[0xd] == 0)))) &&
              ((piVar3[0xe] != 0 &&
               (((piVar3[0xf] == 0 && (piVar3[0x10] != 0)) &&
                ((piVar3[0x11] == 0 &&
                 (((piVar3[0x12] != 0 && (piVar3[0x13] == 0)) && (piVar3[0x14] != 0)))))))))) &&
             (((piVar3[0x15] == 0 && (piVar3[0x16] != 0)) && (piVar3[0x17] == 0)))) {
            local_6c = -1;
            pVar11 = 1;
            local_7c = DAT_02394240;
            local_70 = local_7c;
          }
        }
        local_6c = local_6c + 1;
      } while (local_6c < (int)pVar11);
    }
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = local_40;
    *(undefined1 *)(unaff_RDI + 1) = 1;
  }
  if (uVar2 != 0) {
    FUN_00d50b20();
  }
  if (uVar1 != 0) {
    FUN_00d50b20();
  }
  return unaff_RDI;
}


