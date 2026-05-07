// Function: FUN_00b38870
// Address: 00b38870
// Size: 878 bytes
// Class: GNAudioProcessor


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00b38870(int *param_1,ulonglong *param_2,size_t param_3)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong unaff_RDI;
  ulonglong uVar10;
  int *piVar11;
  void *pvVar12;
  ulonglong uVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  
  iVar5 = (int)param_1;
  uVar6 = FUN_00b33120();
  if (iVar5 < 1) goto LAB_00b3899b;
  piVar11 = (int *)*param_2;
  dVar4 = *(double *)(unaff_RDI + 0x18);
  iVar24 = *(int *)(unaff_RDI + 0x98);
  uVar9 = 0;
  param_1 = piVar11;
  if ((iVar5 - 1U < 3) ||
     ((uVar10 = (ulonglong)(iVar5 - 1U) + 1, piVar11 < (int *)(unaff_RDI + 0x98U) &&
      (param_1 = piVar11 + uVar10, (int *)(unaff_RDI + 0x90U) < param_1)))) {
LAB_00b38902:
    lVar8 = 0;
    do {
      dVar17 = (double)(iVar24 + (int)lVar8);
      fVar2 = *(float *)(unaff_RDI + 0x94);
      dVar17 = (double)_sin((double)*(float *)(unaff_RDI + 0x90) *
                            (((dVar17 + dVar17) * _DAT_023d5c20) / dVar4));
      piVar11[lVar8] = (int)(float)((double)fVar2 * dVar17);
      lVar8 = lVar8 + 1;
    } while (iVar5 - (int)uVar9 != (int)lVar8);
    iVar7 = iVar24 + (int)lVar8;
  }
  else {
    uVar9 = uVar10 & 0xfffffffffffffffc;
    iVar7 = iVar24 + (int)uVar9;
    iVar21 = iVar24 + _DAT_0238fcc0;
    iVar22 = iVar24 + _UNK_0238fcc4;
    iVar23 = iVar24 + _UNK_0238fcc8;
    iVar24 = iVar24 + _UNK_0238fccc;
    fVar2 = *(float *)(unaff_RDI + 0x90);
    fVar3 = *(float *)(unaff_RDI + 0x94);
    uVar13 = 0;
    do {
      auVar18._0_8_ = ((double)iVar23 + (double)iVar23) * _DAT_023d5c10;
      auVar18._8_8_ = ((double)iVar24 + (double)iVar24) * _UNK_023d5c18;
      auVar20._0_8_ = ((double)iVar21 + (double)iVar21) * _DAT_023d5c10;
      auVar20._8_8_ = ((double)iVar22 + (double)iVar22) * _UNK_023d5c18;
      auVar19._8_8_ = dVar4;
      auVar19._0_8_ = dVar4;
      auVar20 = divpd(auVar20,auVar19);
      auVar19 = divpd(auVar18,auVar19);
      dVar17 = (double)_sin(auVar20._0_8_ * (double)fVar2);
      dVar14 = (double)_sin(auVar20._8_8_ * (double)fVar2);
      dVar15 = (double)_sin();
      dVar16 = (double)_sin(auVar19._8_8_ * (double)fVar2);
      *(ulonglong *)(piVar11 + uVar13) =
           CONCAT44((float)(dVar14 * (double)fVar3),(float)(dVar17 * (double)fVar3));
      *(ulonglong *)(piVar11 + uVar13 + 2) =
           CONCAT44((float)(dVar16 * (double)fVar3),(float)(dVar15 * (double)fVar3));
      uVar13 = uVar13 + 4;
      iVar21 = iVar21 + _DAT_02394180;
      iVar22 = iVar22 + _UNK_02394184;
      iVar23 = iVar23 + _UNK_02394188;
      iVar24 = iVar24 + _UNK_0239418c;
    } while (uVar9 != uVar13);
    piVar11 = piVar11 + uVar9;
    iVar24 = iVar7;
    if (uVar10 != uVar9) goto LAB_00b38902;
  }
  *(int *)(unaff_RDI + 0x98U) = iVar7;
LAB_00b3899b:
  if (1 < (int)uVar6) {
    pvVar12 = (void *)((longlong)iVar5 << 2);
    if (uVar6 != 2) {
      lVar8 = 1;
      do {
        _memcpy(param_1,pvVar12,param_3);
        _memcpy(param_1,pvVar12,param_3);
        lVar1 = lVar8 - ((ulonglong)uVar6 - 1 & 0xfffffffffffffffe);
        lVar8 = lVar8 + 2;
      } while (lVar1 != -1);
    }
    if (((ulonglong)uVar6 - 1 & 1) != 0) {
      _memcpy(param_1,pvVar12,param_3);
      return;
    }
  }
  return;
}


