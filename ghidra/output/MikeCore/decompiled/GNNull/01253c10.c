// Function: FUN_01253c10
// Address: 01253c10
// Size: 1480 bytes
// Class: GNNull


/* WARNING: Removing unreachable block (ram,0x012540fe) */
/* WARNING: Removing unreachable block (ram,0x01254103) */
/* WARNING: Removing unreachable block (ram,0x01253e4e) */
/* WARNING: Removing unreachable block (ram,0x01253e53) */
/* WARNING: Removing unreachable block (ram,0x01254139) */
/* WARNING: Removing unreachable block (ram,0x01254141) */
/* WARNING: Removing unreachable block (ram,0x01254146) */
/* WARNING: Removing unreachable block (ram,0x01253eed) */
/* WARNING: Removing unreachable block (ram,0x01253ef9) */
/* WARNING: Removing unreachable block (ram,0x01253f02) */
/* WARNING: Removing unreachable block (ram,0x012541bc) */
/* WARNING: Removing unreachable block (ram,0x012541c5) */
/* WARNING: Removing unreachable block (ram,0x0125416c) */

ulonglong FUN_01253c10(ulonglong *param_1,longlong *param_2,ulonglong *param_3)

{
  ulonglong uVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  int iVar9;
  char unaff_SIL;
  longlong unaff_RDI;
  uint uVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iStack_4c;
  
  uVar5 = *(uint *)(*(longlong *)(unaff_RDI + 0x48) + 0x18);
  uVar10 = uVar5;
  if ((int)uVar5 < 0) {
    uVar10 = uVar5 + 7;
  }
  if ((0xe < uVar5 + 7) && (uVar8 = *param_3, uVar8 >> 0x20 != 0)) {
    uVar10 = (int)uVar10 >> 3;
    if ((int)uVar5 < 8) {
      uVar6 = FUN_00e7bdb0();
    }
    else {
      uVar6 = *(ulonglong *)
               (*(longlong *)(*(longlong *)(unaff_RDI + 0x48) + 0x10) + (ulonglong)(uVar10 - 1) * 8)
      ;
    }
    if ((uVar6 >> 0x20 == 0) || (cVar4 = FUN_00e7c020(), cVar4 == '\0')) {
      uVar5 = FUN_01251eb0();
      uVar6 = (ulonglong)uVar5;
      iStack_4c = (int)(uVar8 >> 0x20);
      if (unaff_SIL == '\0') {
        lVar13 = *(longlong *)(unaff_RDI + 0x48);
        if (param_1 != (ulonglong *)0x0) {
          if ((int)uVar5 < 1) {
            uVar8 = FUN_00e7bdb0();
          }
          else {
            uVar8 = *(ulonglong *)(*(longlong *)(lVar13 + 0x10) + (ulonglong)(uVar5 - 1) * 8);
          }
          *param_1 = uVar8;
          lVar13 = *(longlong *)(unaff_RDI + 0x48);
        }
        iVar15 = *(int *)(lVar13 + 0x18);
        iVar9 = iVar15 + 7;
        if (-1 < iVar15) {
          iVar9 = iVar15;
        }
        if ((int)uVar5 < iVar9 >> 3) {
          uVar8 = *(ulonglong *)(*(longlong *)(lVar13 + 0x10) + (longlong)(int)uVar5 * 8);
        }
        else {
          uVar8 = FUN_00e7bdb0();
        }
        *param_3 = uVar8;
        lVar13 = *(longlong *)
                  (*(longlong *)(*(longlong *)(unaff_RDI + 0x50) + 0x10) + (longlong)(int)uVar5 * 8)
        ;
        if (lVar13 == 0) {
          lVar13 = 0;
          iVar15 = *(int *)((longlong)param_1 + 4);
        }
        else {
          iVar15 = *(int *)((longlong)param_1 + 4);
        }
        if (((iVar15 != 0) && (iStack_4c != 0)) && (cVar4 = FUN_00e7c020(), cVar4 != '\0')) {
          if ((int)uVar5 < 0) {
            uVar8 = FUN_00e7bdb0();
          }
          else {
            uVar8 = *(ulonglong *)
                     (*(longlong *)(*(longlong *)(unaff_RDI + 0x48) + 0x10) + uVar6 * 8);
          }
          iVar14 = uVar5 + 1;
          *param_1 = uVar8;
          iVar15 = *(int *)(*(longlong *)(unaff_RDI + 0x48) + 0x18);
          iVar9 = iVar15 + 7;
          if (-1 < iVar15) {
            iVar9 = iVar15;
          }
          if (iVar14 < iVar9 >> 3) {
            uVar8 = *(ulonglong *)
                     (*(longlong *)(*(longlong *)(unaff_RDI + 0x48) + 0x10) + (longlong)iVar14 * 8);
          }
          else {
            uVar8 = FUN_00e7bdb0();
          }
          *param_3 = uVar8;
          lVar11 = *(longlong *)
                    (*(longlong *)(*(longlong *)(unaff_RDI + 0x50) + 0x10) + (longlong)iVar14 * 8);
          if (lVar13 != lVar11) {
            lVar13 = lVar11;
          }
        }
        uVar8 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
        if (param_2 != (longlong *)0x0) {
          lVar11 = *param_2;
          if (lVar11 == lVar13) {
            if (((char)param_2[1] == '\0') && (lVar13 != 0)) {
              FUN_00d50b00();
              *(undefined1 *)(param_2 + 1) = 1;
            }
          }
          else {
            lVar3 = param_2[1];
            if (lVar13 != 0) {
              FUN_00d50b00();
            }
            *param_2 = lVar13;
            if (((char)lVar3 != '\0') && (lVar11 != 0)) {
              FUN_00d50b20();
            }
LAB_012541ad:
            *(undefined1 *)(param_2 + 1) = 1;
          }
        }
      }
      else {
        uVar1 = *param_1;
        lVar13 = (longlong)(int)uVar5;
        if ((int)uVar5 < (int)uVar10) {
          uVar5 = uVar10;
        }
        lVar11 = 0;
        do {
          iVar15 = *(int *)(*(longlong *)(unaff_RDI + 0x48) + 0x18);
          iVar9 = iVar15 + 7;
          if (-1 < iVar15) {
            iVar9 = iVar15;
          }
          iVar12 = (int)lVar13;
          iVar14 = iVar12;
          iVar16 = iVar12;
          if (7 < iVar15) {
            plVar2 = *(longlong **)(*(longlong *)(unaff_RDI + 0x50) + 0x10);
            if (plVar2[lVar13] == 0) {
              if (lVar13 != 0) {
                iVar14 = (int)uVar6 + -1;
                if (iVar14 != 1) goto LAB_01253d8a;
                goto LAB_01253d61;
              }
              iVar12 = 1;
              iVar14 = 0;
LAB_01253d9e:
              if (*plVar2 == 0) {
                iVar14 = 0;
              }
              iVar16 = 1;
              iVar15 = 1;
              if (iVar9 >> 3 < 2) goto LAB_01253dc5;
            }
            else {
              if (iVar12 == 1) {
LAB_01253d61:
                iVar14 = 1;
                goto LAB_01253d9e;
              }
LAB_01253d8a:
              iVar16 = iVar14;
              iVar15 = iVar14;
              if (iVar9 >> 3 <= iVar14) goto LAB_01253dc5;
            }
            iVar16 = iVar15;
            if (plVar2[(longlong)iVar15 + 1] == 0) {
              iVar12 = iVar15 + 1;
            }
          }
LAB_01253dc5:
          if (iVar14 < 1) {
            uVar7 = FUN_00e7bdb0();
          }
          else {
            uVar7 = *(ulonglong *)
                     (*(longlong *)(*(longlong *)(unaff_RDI + 0x48) + 0x10) +
                     (ulonglong)(iVar14 - 1) * 8);
          }
          *param_1 = uVar7;
          iVar15 = *(int *)(*(longlong *)(unaff_RDI + 0x48) + 0x18);
          iVar9 = iVar15 + 7;
          if (-1 < iVar15) {
            iVar9 = iVar15;
          }
          if (iVar12 < iVar9 >> 3) {
            uVar7 = *(ulonglong *)
                     (*(longlong *)(*(longlong *)(unaff_RDI + 0x48) + 0x10) + (longlong)iVar12 * 8);
          }
          else {
            uVar7 = FUN_00e7bdb0();
          }
          *param_3 = uVar7;
          lVar3 = *(longlong *)
                   (*(longlong *)(*(longlong *)(unaff_RDI + 0x50) + 0x10) + (longlong)iVar16 * 8);
          if (lVar11 != lVar3) {
            lVar11 = lVar3;
          }
          if ((*(int *)((longlong)param_3 + 4) == 0) ||
             ((iStack_4c != 0 && (cVar4 = FUN_00e7c020(), cVar4 != '\0')))) {
            if ((*(int *)((longlong)param_1 + 4) == 0) ||
               ((iStack_4c != 0 && (cVar4 = FUN_00e7c020(), cVar4 != '\0')))) {
              *param_1 = uVar8;
            }
            uVar8 = CONCAT71((int7)((ulonglong)lVar3 >> 8),1);
            if (param_2 == (longlong *)0x0) goto LAB_01253c91;
            lVar13 = *param_2;
            if (lVar13 == lVar11) {
              if (((char)param_2[1] == '\0') && (lVar11 != 0)) {
                FUN_00d50b00();
                *(undefined1 *)(param_2 + 1) = 1;
              }
              goto LAB_01253c91;
            }
            lVar3 = param_2[1];
            if (lVar11 != 0) {
              FUN_00d50b00();
            }
            *param_2 = lVar11;
            if (((char)lVar3 != '\0') && (lVar13 != 0)) {
              FUN_00d50b20();
            }
            goto LAB_012541ad;
          }
          lVar13 = lVar13 + 1;
          uVar6 = (ulonglong)((int)uVar6 + 1);
        } while (uVar5 + 1 != (int)lVar13);
        *param_1 = uVar1;
        *param_3 = uVar8;
        uVar8 = 0;
      }
      goto LAB_01253c91;
    }
  }
  uVar8 = 0;
LAB_01253c91:
  return uVar8 & 0xffffffff;
}


