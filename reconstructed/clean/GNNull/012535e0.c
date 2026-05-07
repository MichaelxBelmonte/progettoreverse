// Function: FUN_012535e0
// Address: 012535e0
// Size: 1448 bytes
// Class: GNNull

uint64_t FUN_012535e0(uint64_t *param_1,uint64_t *param_2,uint64_t *param_3)

{
  int64_t *plVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  char unaff_SIL;
  int64_t this_ptr;
  uint64_t uVar14;
  int iVar15;
  int64_t lVar16;
  int iStack_4c;
  
  iVar4 = *(int *)(*(int64_t *)(this_ptr + 0x48) + 0x18);
  if ((0xe < iVar4 + 7U) && (uVar8 = *param_1, uVar8 >> 0x20 != 0)) {
    if (iVar4 < 8) {
      uVar5 = FUN_00e7bdb0();
    }
    else {
      uVar5 = **(uint64_t **)(*(int64_t *)(this_ptr + 0x48) + 0x10);
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
          uVar7 = *(uint64_t *)
                   (*(int64_t *)(*(int64_t *)(this_ptr + 0x48) + 0x10) +
                   (uint64_t)(iVar4 - 2) * 8);
        }
        uVar13 = iVar4 - 1;
        uVar6 = (uint64_t)uVar13;
        *param_1 = uVar7;
        iVar11 = *(int *)(*(int64_t *)(this_ptr + 0x48) + 0x18);
        iVar9 = iVar11 + 7;
        if (-1 < iVar11) {
          iVar9 = iVar11;
        }
        if (iVar9 >> 3 < iVar4) {
          uVar7 = FUN_00e7bdb0();
        }
        else {
          uVar7 = *(uint64_t *)
                   (*(int64_t *)(*(int64_t *)(this_ptr + 0x48) + 0x10) +
                   (int64_t)(int)uVar13 * 8);
        }
        *param_3 = uVar7;
        uVar14 = *(uint64_t *)
                  (*(int64_t *)(*(int64_t *)(this_ptr + 0x50) + 0x10) + (int64_t)(int)uVar13 * 8
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
            uVar8 = *(uint64_t *)
                     (*(int64_t *)(*(int64_t *)(this_ptr + 0x48) + 0x10) +
                     (uint64_t)(iVar4 - 3) * 8);
          }
          iVar4 = iVar4 + -2;
          *param_1 = uVar8;
          iVar11 = *(int *)(*(int64_t *)(this_ptr + 0x48) + 0x18);
          iVar9 = iVar11 + 7;
          if (-1 < iVar11) {
            iVar9 = iVar11;
          }
          if (iVar4 < iVar9 >> 3) {
            uVar8 = *(uint64_t *)
                     (*(int64_t *)(*(int64_t *)(this_ptr + 0x48) + 0x10) + (int64_t)iVar4 * 8);
          }
          else {
            uVar8 = FUN_00e7bdb0();
          }
          *param_3 = uVar8;
          uVar6 = *(uint64_t *)
                   (*(int64_t *)(*(int64_t *)(this_ptr + 0x50) + 0x10) + (int64_t)iVar4 * 8);
          if (uVar14 != uVar6) {
            uVar14 = uVar6;
          }
        }
        uVar8 = CONCAT71((int7)(uVar6 >> 8),1);
        if (param_2 != (uint64_t *)0x0) {
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
          *(void*)(param_2 + 1) = 1;
        }
      }
      else {
        uVar7 = 0;
        lVar16 = (int64_t)iVar4;
        do {
          iVar11 = *(int *)(*(int64_t *)(this_ptr + 0x48) + 0x18);
          iVar9 = iVar11 + 7;
          if (-1 < iVar11) {
            iVar9 = iVar11;
          }
          iVar15 = (int)lVar16;
          iVar10 = iVar15;
          iVar12 = iVar15;
          if (7 < iVar11) {
            plVar1 = *(int64_t **)(*(int64_t *)(this_ptr + 0x50) + 0x10);
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
            if (plVar1[(int64_t)iVar11 + 1] == 0) {
              iVar15 = iVar11 + 1;
            }
          }
LAB_01253777:
          if (iVar10 < 1) {
            uVar6 = FUN_00e7bdb0();
          }
          else {
            uVar6 = *(uint64_t *)
                     (*(int64_t *)(*(int64_t *)(this_ptr + 0x48) + 0x10) +
                     (uint64_t)(iVar10 - 1) * 8);
          }
          *param_1 = uVar6;
          iVar11 = *(int *)(*(int64_t *)(this_ptr + 0x48) + 0x18);
          iVar9 = iVar11 + 7;
          if (-1 < iVar11) {
            iVar9 = iVar11;
          }
          if (iVar15 < iVar9 >> 3) {
            uVar6 = *(uint64_t *)
                     (*(int64_t *)(*(int64_t *)(this_ptr + 0x48) + 0x10) + (int64_t)iVar15 * 8);
          }
          else {
            uVar6 = FUN_00e7bdb0();
          }
          *param_3 = uVar6;
          uVar6 = *(uint64_t *)
                   (*(int64_t *)(*(int64_t *)(this_ptr + 0x50) + 0x10) + (int64_t)iVar12 * 8);
          if (uVar7 == uVar6) {
            uVar6 = uVar7;
            if (*(int *)((int64_t)param_1 + 4) != 0) goto LAB_0125383e;
LAB_0125385d:
            if ((*(int *)((int64_t)param_3 + 4) == 0) ||
               ((iStack_4c != 0 && (cVar3 = FUN_00e7c020(), cVar3 != '\0')))) {
              *param_3 = uVar8;
            }
            uVar8 = CONCAT71((int7)(uVar6 >> 8),1);
            if (param_2 == (uint64_t *)0x0) goto LAB_0125364d;
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
          if (*(int *)((int64_t)param_1 + 4) == 0) goto LAB_0125385d;
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

