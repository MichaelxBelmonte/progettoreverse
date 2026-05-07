// Function: FUN_01704680
// Address: 01704680
// Size: 541 bytes
// Class: MUBeatSelection


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01704680(undefined8 param_1,uint param_2)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  int iVar8;
  longlong lVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  int iVar17;
  int iVar18;
  longlong *unaff_RSI;
  ulonglong uVar19;
  longlong *unaff_RDI;
  ulonglong uVar20;
  double local_58;
  
  iVar17 = 1;
  if (1 < (int)param_2) {
    iVar8 = *(int *)(*unaff_RDI + 0x18);
    iVar18 = iVar8 + 7;
    if (-1 < iVar8) {
      iVar18 = iVar8;
    }
    if ((int)param_2 < (iVar18 >> 3) + -2) {
      uVar20 = (ulonglong)param_2;
      lVar9 = *(longlong *)(*unaff_RSI + 0x10);
      dVar2 = *(double *)(lVar9 + uVar20 * 8);
      dVar3 = *(double *)(lVar9 + (ulonglong)(param_2 - 1) * 8);
      if ((dVar2 <= dVar3) ||
         (iVar17 = 0, pdVar1 = (double *)(lVar9 + 8 + uVar20 * 8),
         dVar2 < *pdVar1 || dVar2 == *pdVar1)) {
        uVar19 = (ulonglong)(param_2 + 1);
        if ((dVar2 < dVar3) && (dVar2 < *(double *)(lVar9 + uVar19 * 8))) {
          return 0;
        }
        dVar2 = *(double *)(lVar9 + (ulonglong)(param_2 - 2) * 8);
        dVar10 = (double)FUN_00e7c860();
        dVar11 = (double)FUN_00e7c860();
        local_58 = (double)FUN_00e7c860();
        dVar12 = (double)FUN_00e7c860();
        lVar9 = *(longlong *)(*unaff_RSI + 0x10);
        dVar4 = *(double *)(lVar9 + (ulonglong)(param_2 - 1) * 8);
        dVar5 = *(double *)(lVar9 + 0x10 + uVar20 * 8);
        dVar6 = *(double *)(lVar9 + uVar19 * 8);
        dVar7 = *(double *)(lVar9 + uVar20 * 8);
        dVar13 = (double)FUN_00e7c860();
        dVar14 = (double)FUN_00e7c860();
        dVar15 = (double)FUN_00e7c860();
        dVar16 = (double)FUN_00e7c860();
        iVar17 = (uint)((double)((ulonglong)
                                 ((*(double *)(*(longlong *)(*unaff_RSI + 0x10) + uVar19 * 8) -
                                  (dVar15 - dVar16) * ((dVar5 - dVar6) / (dVar13 - dVar14))) -
                                 *(double *)(*(longlong *)(*unaff_RSI + 0x10) + uVar20 * 8)) &
                                _DAT_023908f0) <
                       (double)((ulonglong)
                                (dVar7 - ((local_58 - dVar12) *
                                          ((dVar3 - dVar2) / (dVar10 - dVar11)) + dVar4)) &
                               _UNK_023908f8)) * 2 + -1;
      }
    }
  }
  return iVar17;
}


