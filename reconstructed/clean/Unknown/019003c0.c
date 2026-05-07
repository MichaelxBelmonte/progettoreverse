// Function: FUN_019003c0
// Address: 019003c0
// Size: 802 bytes
// Class: Unknown

int64_t * FUN_019003c0(double param_1,int *param_2)

{
  int iVar1;
  int64_t lVar2;
  int iVar3;
  int64_t arg1;
  int64_t *this_ptr;
  int iVar4;
  int iVar5;
  int64_t lVar6;
  int iVar7;
  double dVar8;
  
  iVar1 = *(int *)(*(int64_t *)(arg1 + 0x38) + 0xc);
  dVar8 = (double)FUN_01907950();
  if (dVar8 <= param_1) {
    iVar5 = iVar1 + -2;
    dVar8 = (double)FUN_01907950();
    iVar3 = iVar5;
    if (param_1 < dVar8) {
      iVar7 = 1;
      if ((param_2 != (int *)0x0) && (iVar3 = *param_2, iVar3 != -1)) {
        iVar4 = iVar3;
        if (iVar5 < iVar3) {
          iVar4 = iVar5;
        }
        if (iVar3 < 1) {
          iVar4 = 1;
        }
        dVar8 = (double)FUN_01907950();
        if (dVar8 <= param_1) {
          iVar7 = iVar4;
          if (iVar4 < iVar1 + -1) {
            iVar3 = iVar4 + 1;
            dVar8 = (double)FUN_01907950();
            if (dVar8 <= param_1) goto LAB_01900604;
          }
          else {
LAB_01900604:
            iVar3 = iVar4 + 2;
            if (((iVar1 <= iVar3) || (dVar8 = (double)FUN_01907950(), dVar8 <= param_1)) &&
               ((iVar3 = iVar4 + 3, iVar1 <= iVar3 ||
                (dVar8 = (double)FUN_01907950(), dVar8 <= param_1)))) goto LAB_0190068b;
          }
          iVar5 = iVar3;
        }
        else {
          iVar7 = 1;
          iVar5 = iVar4;
          if (0 < iVar4) {
            dVar8 = (double)FUN_01907950();
            iVar7 = iVar4 + -1;
            if (param_1 < dVar8) {
              if (iVar4 < 2) {
                iVar7 = 1;
                iVar5 = 1;
              }
              else {
                dVar8 = (double)FUN_01907950();
                iVar7 = iVar4 + -2;
                if (param_1 < dVar8) {
                  if (iVar4 < 3) {
                    iVar7 = 1;
                    iVar5 = 2;
                  }
                  else {
                    dVar8 = (double)FUN_01907950();
                    iVar7 = iVar4 + -3;
                    if (param_1 < dVar8) {
                      iVar7 = 1;
                    }
                  }
                }
              }
            }
          }
        }
      }
LAB_0190068b:
      do {
        iVar3 = iVar7;
        if (iVar5 - iVar7 == 1) break;
        iVar3 = (iVar5 - iVar7) / 2 + iVar7;
        dVar8 = (double)FUN_01907950();
        iVar1 = iVar3;
        if (param_1 <= dVar8) {
          iVar1 = iVar7;
          iVar5 = iVar3;
        }
        iVar7 = iVar1;
      } while ((dVar8 != param_1) || (NAN(dVar8) || NAN(param_1)));
    }
  }
  else {
    iVar3 = 0;
  }
  if (param_2 != (int *)0x0) {
    *param_2 = iVar3;
  }
  lVar2 = *(int64_t *)(arg1 + 0x38);
  lVar6 = (int64_t)iVar3;
  if (iVar3 == *(int *)(lVar2 + 0xc) + -2) {
    lVar2 = *(int64_t *)(*(int64_t *)(lVar2 + 0x10) + 8 + lVar6 * 8);
    dVar8 = (double)FUN_01907950();
    if (param_1 <= dVar8) {
      lVar2 = *(int64_t *)(arg1 + 0x38);
      goto LAB_0190055d;
    }
LAB_0190059a:
    *(void*)(this_ptr + 1) = 0;
    if (lVar2 != 0) {
      FUN_00d50b00();
      goto LAB_019005b0;
    }
  }
  else {
LAB_0190055d:
    lVar2 = *(int64_t *)(*(int64_t *)(lVar2 + 0x10) + lVar6 * 8);
    dVar8 = (double)FUN_01907950();
    if (iVar3 != 0) {
      if ((dVar8 == param_1) && (!NAN(dVar8) && !NAN(param_1))) {
        lVar2 = *(int64_t *)
                 (*(int64_t *)(*(int64_t *)(arg1 + 0x38) + 0x10) + -8 + lVar6 * 8);
        FUN_01907950();
      }
      goto LAB_0190059a;
    }
    if (dVar8 < param_1) goto LAB_0190059a;
  }
  lVar2 = 0;
LAB_019005b0:
  *this_ptr = lVar2;
  *(void*)(this_ptr + 1) = 1;
  return this_ptr;
}

