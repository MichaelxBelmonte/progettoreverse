// Function: FUN_01900710
// Address: 01900710
// Size: 946 bytes
// Class: Unknown

int64_t * FUN_01900710(double param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int64_t lVar3;
  int64_t arg1;
  int64_t *this_ptr;
  int iVar4;
  int iVar5;
  int iVar6;
  double dVar7;
  double dVar8;
  
  iVar1 = *(int *)(*(int64_t *)(arg1 + 0x38) + 0xc);
  dVar7 = (double)FUN_01907950();
  if (dVar7 <= param_1) {
    iVar5 = iVar1 + -2;
    dVar7 = (double)FUN_01907950();
    iVar2 = iVar5;
    if (param_1 < dVar7) {
      iVar6 = 1;
      if ((param_2 != (int *)0x0) && (iVar2 = *param_2, iVar2 != -1)) {
        iVar4 = iVar2;
        if (iVar5 < iVar2) {
          iVar4 = iVar5;
        }
        if (iVar2 < 1) {
          iVar4 = 1;
        }
        dVar7 = (double)FUN_01907950();
        if (dVar7 <= param_1) {
          iVar6 = iVar4;
          if (iVar4 < iVar1 + -1) {
            iVar2 = iVar4 + 1;
            dVar7 = (double)FUN_01907950();
            if (dVar7 <= param_1) goto LAB_019009e4;
          }
          else {
LAB_019009e4:
            iVar2 = iVar4 + 2;
            if (((iVar1 <= iVar2) || (dVar7 = (double)FUN_01907950(), dVar7 <= param_1)) &&
               ((iVar2 = iVar4 + 3, iVar1 <= iVar2 ||
                (dVar7 = (double)FUN_01907950(), dVar7 <= param_1)))) goto LAB_01900a6b;
          }
          iVar5 = iVar2;
        }
        else {
          iVar6 = 1;
          iVar5 = iVar4;
          if (0 < iVar4) {
            dVar7 = (double)FUN_01907950();
            iVar6 = iVar4 + -1;
            if (param_1 < dVar7) {
              if (iVar4 < 2) {
                iVar6 = 1;
                iVar5 = 1;
              }
              else {
                dVar7 = (double)FUN_01907950();
                iVar6 = iVar4 + -2;
                if (param_1 < dVar7) {
                  if (iVar4 < 3) {
                    iVar6 = 1;
                    iVar5 = 2;
                  }
                  else {
                    dVar7 = (double)FUN_01907950();
                    iVar6 = iVar4 + -3;
                    if (param_1 < dVar7) {
                      iVar6 = 1;
                    }
                  }
                }
              }
            }
          }
        }
      }
LAB_01900a6b:
      do {
        iVar2 = iVar6;
        if (iVar5 - iVar6 == 1) break;
        iVar2 = (iVar5 - iVar6) / 2 + iVar6;
        dVar7 = (double)FUN_01907950();
        iVar1 = iVar2;
        if (param_1 <= dVar7) {
          iVar1 = iVar6;
          iVar5 = iVar2;
        }
        iVar6 = iVar1;
      } while ((dVar7 != param_1) || (NAN(dVar7) || NAN(param_1)));
    }
  }
  else {
    iVar2 = 0;
  }
  if (param_2 != (int *)0x0) {
    *param_2 = iVar2;
  }
  dVar7 = (double)FUN_01907950();
  if (((dVar7 == param_1) && (!NAN(dVar7) && !NAN(param_1))) ||
     ((iVar2 == 0 && (dVar7 = (double)FUN_01907950(), param_1 < dVar7)))) {
    lVar3 = *(int64_t *)
             (*(int64_t *)(*(int64_t *)(arg1 + 0x38) + 0x10) + (int64_t)iVar2 * 8);
    *(void*)(this_ptr + 1) = 0;
  }
  else {
    iVar1 = iVar2 + 1;
    if (iVar1 == *(int *)(*(int64_t *)(arg1 + 0x38) + 0xc) + -1) {
      dVar7 = (double)FUN_01907950();
      if (dVar7 <= param_1) {
        lVar3 = *(int64_t *)
                 (*(int64_t *)(*(int64_t *)(arg1 + 0x38) + 0x10) + (int64_t)iVar1 * 8);
        *(void*)(this_ptr + 1) = 0;
        goto joined_r0x019009a3;
      }
    }
    dVar7 = (double)FUN_01907950();
    dVar8 = (double)FUN_01907950();
    lVar3 = *(int64_t *)(*(int64_t *)(arg1 + 0x38) + 0x10);
    if (dVar8 - param_1 <= param_1 - dVar7) {
      lVar3 = *(int64_t *)(lVar3 + (int64_t)iVar1 * 8);
      *(void*)(this_ptr + 1) = 0;
    }
    else {
      lVar3 = *(int64_t *)(lVar3 + (int64_t)iVar2 * 8);
      *(void*)(this_ptr + 1) = 0;
    }
  }
joined_r0x019009a3:
  if (lVar3 == 0) {
    lVar3 = 0;
  }
  else {
    FUN_00d50b00();
  }
  *this_ptr = lVar3;
  *(void*)(this_ptr + 1) = 1;
  return this_ptr;
}

