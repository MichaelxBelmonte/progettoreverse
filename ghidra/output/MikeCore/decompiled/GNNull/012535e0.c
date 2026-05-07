// Function: FUN_012535e0
// Address: 012535e0
// Size: 1448 bytes
// Class: GNNull


/* WARNING: Removing unreachable block (ram,0x012538c3) */
/* WARNING: Removing unreachable block (ram,0x012538cf) */
/* WARNING: Removing unreachable block (ram,0x012538d8) */
/* WARNING: Removing unreachable block (ram,0x01253b98) */
/* WARNING: Removing unreachable block (ram,0x01253ba1) */
/* WARNING: Removing unreachable block (ram,0x01253805) */
/* WARNING: Removing unreachable block (ram,0x0125380a) */
/* WARNING: Removing unreachable block (ram,0x01253ac6) */
/* WARNING: Removing unreachable block (ram,0x01253acb) */
/* WARNING: Removing unreachable block (ram,0x01253b32) */
/* WARNING: Removing unreachable block (ram,0x01253aff) */
/* WARNING: Removing unreachable block (ram,0x01253b07) */
/* WARNING: Removing unreachable block (ram,0x01253b0c) */
/* WARNING: Removing unreachable block (ram,0x01253b35) */

ulonglong FUN_012535e0(ulonglong *param_1,ulonglong *param_2,ulonglong *param_3)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  char unaff_SIL;
  longlong unaff_RDI;
  ulonglong uVar14;
  int iVar15;
  longlong lVar16;
  int iStack_4c;
  
  iVar4 = *(int *)(*(longlong *)(unaff_RDI + 0x48) + 0x18);
  if ((0xe < iVar4 + 7U) && (uVar8 = *param_1, uVar8 >> 0x20 != 0)) {
    if (iVar4 < 8) {
      uVar5 = FUN_00e7bdb0();
    }
    else {
      uVar5 = **(ulonglong **)(*(longlong *)(unaff_RDI + 0x48) + 0x10);
    }
    if ((uVar5 >> 0x20 == 0) || (cVar3 = FUN_00e7c020(), cVar3 == '\0')) {
      uVar5 = *param_3;
      iVar4 = FUN_01251eb0();
      iStack_4c = (int)(uVar8 >> 0x20);
      if (unaff_SIL == '\0') {
        if (iVar4 < 2) {
          uVar7 = FUN_00e7bdb0();
        }
        else {
          uVar7 = *(ulonglong *)
                   (*(longlong *)(*(longlong *)(unaff_RDI + 0x48) + 0x10) +
                   (ulonglong)(iVar4 - 2) * 8);
        }
        uVar13 = iVar4 - 1;
        uVar6 = (ulonglong)uVar13;
        *param_1 = uVar7;
        iVar11 = *(int *)(*(longlong *)(unaff_RDI + 0x48) + 0x18);
        iVar9 = iVar11 + 7;
        if (-1 < iVar11) {
          iVar9 = iVar11;
        }
        if (iVar9 >> 3 < iVar4) {
          uVar7 = FUN_00e7bdb0();
        }
        else {
          uVar7 = *(ulonglong *)
                   (*(longlong *)(*(longlong *)(unaff_RDI + 0x48) + 0x10) +
                   (longlong)(int)uVar13 * 8);
        }
        *param_3 = uVar7;
        uVar14 = *(ulonglong *)
                  (*(longlong *)(*(longlong *)(unaff_RDI + 0x50) + 0x10) + (longlong)(int)uVar13 * 8
                  );
        if (uVar14 == 0) {
          uVar14 = 0;
        }
        if (((uVar7 >> 0x20 != 0) && (iStack_4c != 0)) && (cVar3 = FUN_00e7c020(), cVar3 != '\0')) {
          if (uVar13 == 0) {
            *param_1 = uVar8;
            goto LAB_01253a10;
          }
          if (iVar4 < 3) {
            uVar8 = FUN_00e7bdb0();
          }
          else {
            uVar8 = *(ulonglong *)
                     (*(longlong *)(*(longlong *)(unaff_RDI + 0x48) + 0x10) +
                     (ulonglong)(iVar4 - 3) * 8);
          }
          iVar4 = iVar4 + -2;
          *param_1 = uVar8;
          iVar11 = *(int *)(*(longlong *)(unaff_RDI + 0x48) + 0x18);
          iVar9 = iVar11 + 7;
          if (-1 < iVar11) {
            iVar9 = iVar11;
          }
          if (iVar4 < iVar9 >> 3) {
            uVar8 = *(ulonglong *)
                     (*(longlong *)(*(longlong *)(unaff_RDI + 0x48) + 0x10) + (longlong)iVar4 * 8);
          }
          else {
            uVar8 = FUN_00e7bdb0();
          }
          *param_3 = uVar8;
          uVar6 = *(ulonglong *)
                   (*(longlong *)(*(longlong *)(unaff_RDI + 0x50) + 0x10) + (longlong)iVar4 * 8);
          if (uVar14 != uVar6) {
            uVar14 = uVar6;
          }
        }
        uVar8 = CONCAT71((int7)(uVar6 >> 8),1);
        if (param_2 != (ulonglong *)0x0) {
          uVar5 = *param_2;
          if (uVar5 == uVar14) {
            if (((char)param_2[1] != '\0') || (uVar14 == 0)) goto LAB_0125364d;
            FUN_00d50b00();
          }
          else {
            uVar7 = param_2[1];
            if (uVar14 != 0) {
              FUN_00d50b00(uVar14);
            }
            *param_2 = uVar14;
            if (((char)uVar7 != '\0') && (uVar5 != 0)) {
              FUN_00d50b20();
            }
          }
LAB_01253b8a:
          *(undefined1 *)(param_2 + 1) = 1;
        }
      }
      else {
        uVar7 = 0;
        lVar16 = (longlong)iVar4;
        do {
          iVar11 = *(int *)(*(longlong *)(unaff_RDI + 0x48) + 0x18);
          iVar9 = iVar11 + 7;
          if (-1 < iVar11) {
            iVar9 = iVar11;
          }
          iVar15 = (int)lVar16;
          iVar10 = iVar15;
          iVar12 = iVar15;
          if (7 < iVar11) {
            plVar1 = *(longlong **)(*(longlong *)(unaff_RDI + 0x50) + 0x10);
            if (plVar1[lVar16] == 0) {
              if (lVar16 != 0) {
                iVar10 = iVar4 + -1;
                if (iVar10 != 1) goto LAB_0125373f;
                goto LAB_01253715;
              }
              iVar15 = 1;
              iVar10 = 0;
LAB_01253752:
              if (*plVar1 == 0) {
                iVar10 = 0;
              }
              iVar12 = 1;
              iVar11 = 1;
              if (iVar9 >> 3 < 2) goto LAB_01253777;
            }
            else {
              if (iVar15 == 1) {
LAB_01253715:
                iVar10 = 1;
                goto LAB_01253752;
              }
LAB_0125373f:
              iVar12 = iVar10;
              iVar11 = iVar10;
              if (iVar9 >> 3 <= iVar10) goto LAB_01253777;
            }
            iVar12 = iVar11;
            if (plVar1[(longlong)iVar11 + 1] == 0) {
              iVar15 = iVar11 + 1;
            }
          }
LAB_01253777:
          if (iVar10 < 1) {
            uVar6 = FUN_00e7bdb0();
          }
          else {
            uVar6 = *(ulonglong *)
                     (*(longlong *)(*(longlong *)(unaff_RDI + 0x48) + 0x10) +
                     (ulonglong)(iVar10 - 1) * 8);
          }
          *param_1 = uVar6;
          iVar11 = *(int *)(*(longlong *)(unaff_RDI + 0x48) + 0x18);
          iVar9 = iVar11 + 7;
          if (-1 < iVar11) {
            iVar9 = iVar11;
          }
          if (iVar15 < iVar9 >> 3) {
            uVar6 = *(ulonglong *)
                     (*(longlong *)(*(longlong *)(unaff_RDI + 0x48) + 0x10) + (longlong)iVar15 * 8);
          }
          else {
            uVar6 = FUN_00e7bdb0();
          }
          *param_3 = uVar6;
          uVar6 = *(ulonglong *)
                   (*(longlong *)(*(longlong *)(unaff_RDI + 0x50) + 0x10) + (longlong)iVar12 * 8);
          if (uVar7 == uVar6) {
            uVar6 = uVar7;
            if (*(int *)((longlong)param_1 + 4) != 0) goto LAB_0125383e;
LAB_0125385d:
            if ((*(int *)((longlong)param_3 + 4) == 0) ||
               ((iStack_4c != 0 && (cVar3 = FUN_00e7c020(), cVar3 != '\0')))) {
              *param_3 = uVar8;
            }
            uVar8 = CONCAT71((int7)(uVar6 >> 8),1);
            if (param_2 == (ulonglong *)0x0) goto LAB_0125364d;
            uVar5 = *param_2;
            if (uVar5 == uVar6) {
              if (((char)param_2[1] != '\0') || (uVar6 == 0)) goto LAB_0125364d;
              FUN_00d50b00();
            }
            else {
              uVar7 = param_2[1];
              if (uVar6 != 0) {
                FUN_00d50b00(uVar6);
              }
              *param_2 = uVar6;
              if (((char)uVar7 != '\0') && (uVar5 != 0)) {
                FUN_00d50b20();
              }
            }
            goto LAB_01253b8a;
          }
          uVar7 = uVar6;
          if (*(int *)((longlong)param_1 + 4) == 0) goto LAB_0125385d;
LAB_0125383e:
          if ((iStack_4c != 0) && (cVar3 = FUN_00e7c020(), uVar6 = uVar7, cVar3 != '\0'))
          goto LAB_0125385d;
          iVar4 = iVar4 + -1;
          bVar2 = 0 < lVar16;
          lVar16 = lVar16 + -1;
        } while (bVar2);
        *param_1 = uVar8;
LAB_01253a10:
        *param_3 = uVar5;
        uVar8 = 0;
      }
      goto LAB_0125364d;
    }
  }
  uVar8 = 0;
LAB_0125364d:
  return uVar8 & 0xffffffff;
}


