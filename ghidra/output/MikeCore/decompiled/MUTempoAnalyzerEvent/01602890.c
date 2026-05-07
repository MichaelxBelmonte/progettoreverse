// Function: FUN_01602890
// Address: 01602890
// Size: 1378 bytes
// Class: MUTempoAnalyzerEvent


/* WARNING: Removing unreachable block (ram,0x01602c44) */
/* WARNING: Removing unreachable block (ram,0x016028e4) */
/* WARNING: Removing unreachable block (ram,0x016028ed) */

void FUN_01602890(longlong *param_1,uint param_2,ulonglong param_3)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  longlong lVar5;
  ulonglong uVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  longlong lVar22;
  longlong lVar23;
  void *pvVar24;
  void *pvVar25;
  void *pvVar26;
  void *pvVar27;
  uint uVar28;
  longlong lVar29;
  void *pvVar30;
  longlong lVar31;
  uint unaff_ESI;
  int iVar32;
  longlong *unaff_RDI;
  longlong lVar33;
  size_t sVar34;
  ulonglong uVar35;
  uint uVar36;
  void *pvVar37;
  void *pvVar38;
  void *pvVar39;
  longlong lVar40;
  int iVar41;
  ulonglong uVar42;
  longlong local_88;
  char local_80;
  
  uVar35 = param_3;
  FUN_00c8e690();
  if ((local_80 == '\0') && (local_88 != 0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  ___bzero();
  pvVar26 = (void *)(ulonglong)unaff_ESI;
  if (0 < (int)unaff_ESI) {
    lVar40 = *(longlong *)(local_88 + 0x10);
    uVar42 = (ulonglong)(int)param_3;
    pvVar39 = (void *)(longlong)(int)(param_2 * 4);
    if ((int)param_2 < 1) {
      ___bzero();
      _memcpy(pvVar26,pvVar39,(size_t)uVar35);
      sVar34 = (size_t)uVar35;
      if (unaff_ESI != 1) {
        pvVar27 = (void *)((ulonglong)unaff_ESI - 1);
        pvVar26 = pvVar27;
        if (unaff_ESI != 2) {
          lVar40 = 1;
          do {
            ___bzero();
            _memcpy(pvVar26,pvVar39,(size_t)uVar35);
            ___bzero();
            _memcpy(pvVar26,pvVar39,(size_t)uVar35);
            sVar34 = (size_t)uVar35;
            lVar23 = lVar40 - ((ulonglong)pvVar27 & 0xfffffffffffffffe);
            lVar40 = lVar40 + 2;
          } while (lVar23 != -1);
        }
        if (((ulonglong)pvVar27 & 1) != 0) {
          ___bzero();
          _memcpy(pvVar26,pvVar39,sVar34);
        }
      }
    }
    else {
      lVar23 = lVar40 + uVar42 * 4;
      pvVar27 = (void *)(ulonglong)param_2;
      pvVar25 = (void *)0x0;
      do {
        lVar22 = *(longlong *)(*unaff_RDI + 0x10) + (longlong)pvVar25 * (longlong)pvVar27 * 4;
        pvVar24 = pvVar27;
        ___bzero();
        iVar41 = 8;
        pvVar38 = (void *)0x0;
        do {
          lVar5 = *(longlong *)(*(longlong *)(*param_1 + 0x10) + (longlong)pvVar38 * 8);
          if (lVar5 != 0) {
            FUN_00d50b00();
          }
          iVar32 = *(int *)(lVar5 + 0x18);
          iVar7 = iVar32 + 3;
          if (-1 < iVar32) {
            iVar7 = iVar32;
          }
          if (iVar32 < 8) {
            *(float *)(lVar23 + (longlong)pvVar38 * 4) =
                 *(float *)(lVar22 + (longlong)pvVar38 * 4) +
                 *(float *)(lVar23 + (longlong)pvVar38 * 4);
          }
          else {
            uVar28 = iVar7 >> 2;
            uVar36 = uVar28 >> 1;
            iVar32 = (int)pvVar38 - uVar36;
            fVar4 = *(float *)(lVar22 + (longlong)pvVar38 * 4);
            uVar6 = *(ulonglong *)(lVar5 + 0x10);
            pvVar24 = (void *)(ulonglong)uVar28;
            if ((uVar28 < 8) || (iVar32 + (int)((longlong)pvVar24 - 1U) < iVar32)) {
              pvVar37 = (void *)0x0;
            }
            else {
              pvVar37 = (void *)0x0;
              if ((longlong)pvVar24 - 1U >> 0x20 == 0) {
                if ((uVar6 < lVar40 + ((longlong)pvVar24 + uVar42 + (longlong)iVar32) * 4) &&
                   (lVar40 + ((longlong)iVar32 + uVar42) * 4 < uVar6 + (longlong)pvVar24 * 4)) {
                  pvVar37 = (void *)0x0;
                  uVar35 = uVar42;
                }
                else {
                  pvVar37 = (void *)(ulonglong)(uVar28 & 0xfffffff8);
                  uVar35 = ((longlong)pvVar37 - 8U >> 3) + 1;
                  if ((longlong)pvVar37 - 8U == 0) {
                    lVar29 = 0;
LAB_01602bf8:
                    pfVar1 = (float *)(uVar6 + lVar29 * 4);
                    fVar8 = pfVar1[1];
                    fVar9 = pfVar1[2];
                    fVar10 = pfVar1[3];
                    pfVar2 = (float *)(uVar6 + 0x10 + lVar29 * 4);
                    fVar11 = *pfVar2;
                    fVar12 = pfVar2[1];
                    fVar13 = pfVar2[2];
                    fVar14 = pfVar2[3];
                    lVar29 = (longlong)((int)lVar29 + iVar32);
                    pfVar3 = (float *)(lVar23 + lVar29 * 4);
                    fVar15 = pfVar3[1];
                    fVar16 = pfVar3[2];
                    fVar17 = pfVar3[3];
                    pfVar2 = (float *)(lVar23 + 0x10 + lVar29 * 4);
                    fVar18 = *pfVar2;
                    fVar19 = pfVar2[1];
                    fVar20 = pfVar2[2];
                    fVar21 = pfVar2[3];
                    pfVar2 = (float *)(lVar23 + lVar29 * 4);
                    *pfVar2 = *pfVar3 + *pfVar1 * fVar4;
                    pfVar2[1] = fVar15 + fVar8 * fVar4;
                    pfVar2[2] = fVar16 + fVar9 * fVar4;
                    pfVar2[3] = fVar17 + fVar10 * fVar4;
                    pfVar1 = (float *)(lVar23 + 0x10 + lVar29 * 4);
                    *pfVar1 = fVar18 + fVar11 * fVar4;
                    pfVar1[1] = fVar19 + fVar12 * fVar4;
                    pfVar1[2] = fVar20 + fVar13 * fVar4;
                    pfVar1[3] = fVar21 + fVar14 * fVar4;
                  }
                  else {
                    lVar31 = -(uVar35 & 0xfffffffffffffffe);
                    lVar29 = 0;
                    do {
                      pfVar1 = (float *)(uVar6 + lVar29 * 4);
                      fVar8 = pfVar1[1];
                      fVar9 = pfVar1[2];
                      fVar10 = pfVar1[3];
                      pfVar2 = (float *)(uVar6 + 0x10 + lVar29 * 4);
                      fVar11 = *pfVar2;
                      fVar12 = pfVar2[1];
                      fVar13 = pfVar2[2];
                      fVar14 = pfVar2[3];
                      lVar33 = (longlong)(iVar32 + (int)lVar29);
                      pfVar3 = (float *)(lVar23 + lVar33 * 4);
                      fVar15 = pfVar3[1];
                      fVar16 = pfVar3[2];
                      fVar17 = pfVar3[3];
                      pfVar2 = (float *)(lVar23 + 0x10 + lVar33 * 4);
                      fVar18 = *pfVar2;
                      fVar19 = pfVar2[1];
                      fVar20 = pfVar2[2];
                      fVar21 = pfVar2[3];
                      pfVar2 = (float *)(lVar23 + lVar33 * 4);
                      *pfVar2 = *pfVar3 + *pfVar1 * fVar4;
                      pfVar2[1] = fVar15 + fVar8 * fVar4;
                      pfVar2[2] = fVar16 + fVar9 * fVar4;
                      pfVar2[3] = fVar17 + fVar10 * fVar4;
                      pfVar1 = (float *)(lVar23 + 0x10 + lVar33 * 4);
                      *pfVar1 = fVar18 + fVar11 * fVar4;
                      pfVar1[1] = fVar19 + fVar12 * fVar4;
                      pfVar1[2] = fVar20 + fVar13 * fVar4;
                      pfVar1[3] = fVar21 + fVar14 * fVar4;
                      pfVar1 = (float *)(uVar6 + 0x20 + lVar29 * 4);
                      fVar8 = pfVar1[1];
                      fVar9 = pfVar1[2];
                      fVar10 = pfVar1[3];
                      pfVar2 = (float *)(uVar6 + 0x30 + lVar29 * 4);
                      fVar11 = *pfVar2;
                      fVar12 = pfVar2[1];
                      fVar13 = pfVar2[2];
                      fVar14 = pfVar2[3];
                      lVar33 = (longlong)(int)((iVar41 - uVar36) + (int)lVar29);
                      pfVar3 = (float *)(lVar23 + lVar33 * 4);
                      fVar15 = pfVar3[1];
                      fVar16 = pfVar3[2];
                      fVar17 = pfVar3[3];
                      pfVar2 = (float *)(lVar23 + 0x10 + lVar33 * 4);
                      fVar18 = *pfVar2;
                      fVar19 = pfVar2[1];
                      fVar20 = pfVar2[2];
                      fVar21 = pfVar2[3];
                      pfVar2 = (float *)(lVar23 + lVar33 * 4);
                      *pfVar2 = *pfVar3 + *pfVar1 * fVar4;
                      pfVar2[1] = fVar15 + fVar8 * fVar4;
                      pfVar2[2] = fVar16 + fVar9 * fVar4;
                      pfVar2[3] = fVar17 + fVar10 * fVar4;
                      pfVar1 = (float *)(lVar23 + 0x10 + lVar33 * 4);
                      *pfVar1 = fVar18 + fVar11 * fVar4;
                      pfVar1[1] = fVar19 + fVar12 * fVar4;
                      pfVar1[2] = fVar20 + fVar13 * fVar4;
                      pfVar1[3] = fVar21 + fVar14 * fVar4;
                      lVar29 = lVar29 + 0x10;
                      lVar31 = lVar31 + 2;
                    } while (lVar31 != 0);
                    if ((uVar35 & 1) != 0) goto LAB_01602bf8;
                  }
                  if (pvVar37 == pvVar24) goto LAB_01602acd;
                }
              }
            }
            pvVar30 = pvVar37;
            if ((uVar28 & 1) != 0) {
              lVar29 = (longlong)(iVar32 + (int)pvVar37);
              *(float *)(lVar23 + lVar29 * 4) =
                   *(float *)(uVar6 + (longlong)pvVar37 * 4) * fVar4 +
                   *(float *)(lVar23 + lVar29 * 4);
              pvVar30 = (void *)((ulonglong)pvVar37 | 1);
            }
            pvVar24 = (void *)-(longlong)pvVar24;
            if ((void *)~(ulonglong)pvVar37 != pvVar24) {
              lVar29 = (longlong)pvVar30 + 1;
              iVar32 = ((int)pvVar30 + (int)pvVar38) - uVar36;
              do {
                *(float *)(lVar23 + (longlong)iVar32 * 4) =
                     *(float *)((uVar6 - 4) + lVar29 * 4) * fVar4 +
                     *(float *)(lVar23 + (longlong)iVar32 * 4);
                *(float *)(lVar23 + (longlong)(iVar32 + 1) * 4) =
                     *(float *)(uVar6 + lVar29 * 4) * fVar4 +
                     *(float *)(lVar23 + (longlong)(iVar32 + 1) * 4);
                lVar31 = (longlong)pvVar24 + lVar29;
                lVar29 = lVar29 + 2;
                iVar32 = iVar32 + 2;
              } while (lVar31 != -1);
            }
          }
LAB_01602acd:
          if (lVar5 != 0) {
            FUN_00d50b20();
          }
          pvVar38 = (void *)((longlong)pvVar38 + 1);
          iVar41 = iVar41 + 1;
        } while (pvVar38 != pvVar27);
        _memcpy(pvVar24,pvVar39,(size_t)uVar35);
        pvVar25 = (void *)((longlong)pvVar25 + 1);
      } while (pvVar25 != pvVar26);
    }
  }
  FUN_00d50b20();
  return;
}


