// Function: FUN_01e29660
// Address: 01e29660
// Size: 503 bytes
// Class: GNUIDesignerDoc


/* WARNING: Removing unreachable block (ram,0x01e297fb) */
/* WARNING: Removing unreachable block (ram,0x01e29804) */
/* WARNING: Removing unreachable block (ram,0x01e296a3) */
/* WARNING: Removing unreachable block (ram,0x01e296ac) */
/* WARNING: Removing unreachable block (ram,0x01e296d3) */
/* WARNING: Removing unreachable block (ram,0x01e296e0) */
/* WARNING: Removing unreachable block (ram,0x01e29829) */
/* WARNING: Removing unreachable block (ram,0x01e29832) */

void FUN_01e29660(ulonglong param_1)

{
  ulonglong uVar1;
  uint uVar2;
  double *pdVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong unaff_RDI;
  double dVar11;
  undefined8 uVar12;
  double dVar13;
  
  if (0 < *(int *)(unaff_RDI + 0xc)) {
    iVar7 = *(int *)(*(longlong *)(unaff_RDI + 0x10) + 0xc);
    if (iVar7 < *(int *)(unaff_RDI + 0xc)) {
      FUN_00d21140();
      FUN_00d21140();
    }
    else {
      lVar9 = *(longlong *)(unaff_RDI + 0x20);
      iVar7 = 0;
      if (((lVar9 != 0) && (uVar2 = *(uint *)(lVar9 + 0x18), 7 < (int)uVar2)) &&
         (param_1 = (ulonglong)(uVar2 & 0xfffffff8), (uVar2 & 0xfffffff8) != 8)) {
        pdVar3 = *(double **)(lVar9 + 0x10);
        dVar11 = *pdVar3;
        uVar1 = (ulonglong)(uVar2 >> 3) - 1;
        uVar6 = (ulonglong)((uint)uVar1 & 3);
        if ((ulonglong)(uVar2 >> 3) - 2 < 3) {
          iVar7 = 0;
          lVar9 = 1;
        }
        else {
          iVar7 = 0;
          uVar5 = 0;
          do {
            uVar10 = uVar5;
            dVar13 = pdVar3[uVar10 + 1];
            iVar8 = (int)uVar10;
            iVar4 = iVar8 + 1;
            if (dVar11 <= dVar13) {
              iVar4 = iVar7;
            }
            if (dVar11 <= dVar13) {
              dVar13 = dVar11;
            }
            dVar11 = pdVar3[uVar10 + 2];
            iVar7 = iVar8 + 2;
            if (dVar13 <= pdVar3[uVar10 + 2]) {
              dVar11 = dVar13;
              iVar7 = iVar4;
            }
            dVar13 = pdVar3[uVar10 + 3];
            iVar4 = iVar8 + 3;
            if (dVar11 <= pdVar3[uVar10 + 3]) {
              dVar13 = dVar11;
              iVar4 = iVar7;
            }
            dVar11 = pdVar3[uVar10 + 4];
            iVar7 = iVar8 + 4;
            if (dVar13 <= pdVar3[uVar10 + 4]) {
              dVar11 = dVar13;
              iVar7 = iVar4;
            }
            uVar5 = uVar10 + 4;
          } while ((uVar1 & 0xfffffffffffffffc) != uVar10 + 4);
          lVar9 = uVar10 + 5;
        }
        for (; param_1 = 0, uVar6 != 0; uVar6 = uVar6 - 1) {
          dVar13 = pdVar3[lVar9];
          iVar8 = (int)lVar9;
          if (dVar11 <= dVar13) {
            dVar13 = dVar11;
            iVar8 = iVar7;
          }
          lVar9 = lVar9 + 1;
          dVar11 = dVar13;
          iVar7 = iVar8;
        }
      }
      uVar12 = FUN_00d233f0(param_1,iVar7);
      FUN_00d233f0(uVar12,iVar7);
    }
    uVar12 = FUN_00e7d6f0();
    *(undefined8 *)(*(longlong *)(*(longlong *)(unaff_RDI + 0x20) + 0x10) + (longlong)iVar7 * 8) =
         uVar12;
  }
  return;
}


