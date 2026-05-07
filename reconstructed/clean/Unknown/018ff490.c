// Function: FUN_018ff490
// Address: 018ff490
// Size: 1247 bytes
// Class: Unknown

int64_t * FUN_018ff490(int *param_1,uint64_t param_2)

{
  int iVar1;
  char cVar2;
  int iVar3;
  uint64_t uVar4;
  int extraout_var;
  int64_t arg1;
  int64_t *this_ptr;
  int iVar5;
  int64_t lVar6;
  int iVar7;
  int64_t lVar8;
  int iVar9;
  int iStack_3c;
  int iStack_34;
  
  iVar1 = *(int *)(*(int64_t *)(arg1 + 0x38) + 0xc);
  uVar4 = FUN_019079b0();
  iStack_34 = (int)(param_2 >> 0x20);
  if (((param_2 >> 0x20 == 0) || (uVar4 >> 0x20 == 0)) || (cVar2 = FUN_00e7c020(), cVar2 == '\0')) {
    iVar5 = iVar1 + -2;
    uVar4 = FUN_019079b0();
    if (((iStack_34 == 0) || (uVar4 >> 0x20 == 0)) || (cVar2 = FUN_00e7c020(), cVar2 != '\0')) {
      iVar7 = 1;
      if ((param_1 == (int *)0x0) || (iVar9 = *param_1, iVar9 == -1)) {
LAB_018ff7a8:
        iVar3 = iVar5 - iVar7;
        iVar9 = iVar5;
      }
      else {
        iVar7 = iVar9;
        if (iVar5 < iVar9) {
          iVar7 = iVar5;
        }
        iVar3 = 1;
        if (0 < iVar9) {
          iVar3 = iVar7;
        }
        uVar4 = FUN_019079b0();
        if (((iStack_34 != 0) && (uVar4 >> 0x20 != 0)) && (cVar2 = FUN_00e7c020(), cVar2 != '\0')) {
          iVar5 = iVar3;
          if (0 < iVar3) {
            uVar4 = FUN_019079b0();
            if (((iStack_34 != 0) && (uVar4 >> 0x20 != 0)) &&
               (cVar2 = FUN_00e7c020(), iVar7 = iVar3 + -1, cVar2 == '\0')) goto LAB_018ff7a8;
          }
          if (1 < iVar3) {
            uVar4 = FUN_019079b0();
            if (((iStack_34 != 0) && (uVar4 >> 0x20 != 0)) &&
               (cVar2 = FUN_00e7c020(), iVar7 = iVar3 + -2, cVar2 == '\0')) goto LAB_018ff7a8;
          }
          iVar9 = iVar3;
          if (2 < iVar3) {
            iVar7 = iVar3 + -3;
            uVar4 = FUN_019079b0();
            if ((iStack_34 != 0) && (uVar4 >> 0x20 != 0)) {
              cVar2 = FUN_00e7c020();
              if (cVar2 != '\0') {
                iVar7 = 1;
              }
              iVar3 = iVar3 - iVar7;
              goto joined_r0x018ff7b1;
            }
          }
          iVar3 = iVar3 + -1;
          iVar7 = 1;
          goto joined_r0x018ff7b1;
        }
        iVar7 = iVar3;
        if (iVar3 < iVar1 + -1) {
          iVar9 = iVar3 + 1;
          uVar4 = FUN_019079b0();
          if (((iStack_34 == 0) || (uVar4 >> 0x20 == 0)) || (cVar2 = FUN_00e7c020(), cVar2 == '\0'))
          goto LAB_018ff706;
        }
        else {
LAB_018ff706:
          iVar9 = iVar3 + 2;
          if (((iVar1 <= iVar9) || (uVar4 = FUN_019079b0(), iStack_34 == 0)) ||
             ((uVar4 >> 0x20 == 0 || (cVar2 = FUN_00e7c020(), cVar2 == '\0')))) {
            if ((((iVar3 + 3 < iVar1) && (uVar4 = FUN_019079b0(), iStack_34 != 0)) &&
                (uVar4 >> 0x20 != 0)) && (cVar2 = FUN_00e7c020(), cVar2 != '\0')) {
              iVar5 = iVar3 + 3;
            }
            goto LAB_018ff7a8;
          }
        }
        iVar3 = iVar9 - iVar3;
      }
joined_r0x018ff7b1:
      iVar5 = iVar7;
      if (iVar3 != 1) {
        do {
          iVar5 = iVar3 / 2 + iVar7;
          uVar4 = FUN_019079b0();
          if ((uVar4 >> 0x20 != 0) && (iStack_34 != 0)) {
            cVar2 = FUN_00e7c000();
            if (cVar2 != '\0') break;
            iStack_3c = (int)(uVar4 >> 0x20);
            if (((iStack_3c != 0) && (iStack_34 != 0)) && (cVar2 = FUN_00e7c020(), cVar2 != '\0'))
            goto code_r0x018ff840;
          }
          iVar3 = iVar5 - iVar7;
          iVar9 = iVar5;
          iVar5 = iVar7;
          if (iVar3 == 1) break;
        } while( true );
      }
    }
  }
  else {
    iVar5 = 0;
  }
  if (param_1 != (int *)0x0) {
    *param_1 = iVar5;
  }
  lVar6 = *(int64_t *)(arg1 + 0x38);
  lVar8 = (int64_t)iVar5;
  if (iVar5 == *(int *)(lVar6 + 0xc) + -2) {
    lVar6 = *(int64_t *)(*(int64_t *)(lVar6 + 0x10) + 8 + lVar8 * 8);
    uVar4 = FUN_019079b0();
    if (((uVar4 >> 0x20 != 0) && (param_2 >> 0x20 != 0)) && (cVar2 = FUN_00e7c020(), cVar2 != '\0'))
    goto LAB_018ff938;
    lVar6 = *(int64_t *)(arg1 + 0x38);
  }
  lVar6 = *(int64_t *)(*(int64_t *)(lVar6 + 0x10) + lVar8 * 8);
  FUN_019079b0();
  if (iVar5 == 0) {
    if (((iStack_34 != 0) && (extraout_var != 0)) && (cVar2 = FUN_00e7c020(), cVar2 == '\0')) {
      lVar6 = 0;
    }
  }
  else if (((iStack_34 != 0) && (extraout_var != 0)) && (cVar2 = FUN_00e7c000(), cVar2 != '\0')) {
    lVar6 = *(int64_t *)(*(int64_t *)(*(int64_t *)(arg1 + 0x38) + 0x10) + -8 + lVar8 * 8);
    FUN_019079b0();
  }
LAB_018ff938:
  *(void*)(this_ptr + 1) = 0;
  if (lVar6 != 0) {
    FUN_00d50b00();
  }
  *this_ptr = lVar6;
  *(void*)(this_ptr + 1) = 1;
  return this_ptr;
code_r0x018ff840:
  iVar3 = iVar9 - iVar5;
  iVar7 = iVar5;
  goto joined_r0x018ff7b1;
}

