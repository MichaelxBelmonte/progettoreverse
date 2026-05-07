// Function: FUN_018feab0
// Address: 018feab0
// Size: 1199 bytes
// Class: Unknown

int64_t * FUN_018feab0(int *param_1,uint64_t param_2)

{
  int iVar1;
  char cVar2;
  int iVar3;
  uint64_t uVar4;
  int iVar5;
  int64_t lVar6;
  int64_t arg1;
  int64_t *this_ptr;
  int iVar7;
  int iVar8;
  int iStack_3c;
  int iStack_34;
  
  iVar1 = *(int *)(*(int64_t *)(arg1 + 0x38) + 0xc);
  uVar4 = FUN_019079b0();
  iStack_34 = (int)(param_2 >> 0x20);
  if (((param_2 >> 0x20 != 0) && (uVar4 >> 0x20 != 0)) && (cVar2 = FUN_00e7c020(), cVar2 != '\0')) {
    iVar8 = 0;
    if (param_1 != (int *)0x0) {
LAB_018fee7a:
      *param_1 = iVar8;
LAB_018fee7d:
      if (iVar8 != 0) goto LAB_018feec8;
    }
    uVar4 = FUN_019079b0();
    if ((uVar4 >> 0x20 == 0) || (param_2 >> 0x20 == 0)) {
      iVar8 = 0;
    }
    else {
      cVar2 = FUN_00e7c020();
      iVar8 = 0;
      if (cVar2 != '\0') {
        *(void*)(this_ptr + 1) = 0;
        *this_ptr = 0;
        return this_ptr;
      }
    }
LAB_018feec8:
    lVar6 = (int64_t)iVar8;
    if (((iVar8 == *(int *)(*(int64_t *)(arg1 + 0x38) + 0xc) + -2) &&
        (uVar4 = FUN_019079b0(), uVar4 >> 0x20 != 0)) &&
       ((iStack_34 != 0 && (cVar2 = FUN_00e7c020(), cVar2 == '\0')))) {
      lVar6 = lVar6 + 1;
    }
    lVar6 = *(int64_t *)(*(int64_t *)(*(int64_t *)(arg1 + 0x38) + 0x10) + lVar6 * 8);
    *(void*)(this_ptr + 1) = 0;
    if (lVar6 != 0) {
      FUN_00d50b00();
    }
    *this_ptr = lVar6;
    *(void*)(this_ptr + 1) = 1;
    return this_ptr;
  }
  iVar8 = iVar1 + -2;
  uVar4 = FUN_019079b0();
  if (((iStack_34 != 0) && (uVar4 >> 0x20 != 0)) && (cVar2 = FUN_00e7c020(), cVar2 == '\0')) {
joined_r0x018fee78:
    if (param_1 != (int *)0x0) goto LAB_018fee7a;
    goto LAB_018fee7d;
  }
  iVar7 = 1;
  if ((param_1 == (int *)0x0) || (iVar5 = *param_1, iVar5 == -1)) {
LAB_018fedc7:
    iVar3 = iVar8 - iVar7;
    iVar5 = iVar8;
  }
  else {
    iVar7 = iVar5;
    if (iVar8 < iVar5) {
      iVar7 = iVar8;
    }
    iVar3 = 1;
    if (0 < iVar5) {
      iVar3 = iVar7;
    }
    uVar4 = FUN_019079b0();
    if (((iStack_34 != 0) && (uVar4 >> 0x20 != 0)) && (cVar2 = FUN_00e7c020(), cVar2 != '\0')) {
      iVar8 = iVar3;
      if (0 < iVar3) {
        uVar4 = FUN_019079b0();
        if (((iStack_34 != 0) && (uVar4 >> 0x20 != 0)) &&
           (cVar2 = FUN_00e7c020(), iVar7 = iVar3 + -1, cVar2 == '\0')) goto LAB_018fedc7;
      }
      if (1 < iVar3) {
        uVar4 = FUN_019079b0();
        if (((iStack_34 != 0) && (uVar4 >> 0x20 != 0)) &&
           (cVar2 = FUN_00e7c020(), iVar7 = iVar3 + -2, cVar2 == '\0')) goto LAB_018fedc7;
      }
      iVar5 = iVar3;
      if (2 < iVar3) {
        iVar7 = iVar3 + -3;
        uVar4 = FUN_019079b0();
        if ((iStack_34 != 0) && (uVar4 >> 0x20 != 0)) {
          cVar2 = FUN_00e7c020();
          if (cVar2 != '\0') {
            iVar7 = 1;
          }
          iVar3 = iVar3 - iVar7;
          goto joined_r0x018fedd0;
        }
      }
      iVar3 = iVar3 + -1;
      iVar7 = 1;
      goto joined_r0x018fedd0;
    }
    iVar7 = iVar3;
    if (iVar3 < iVar1 + -1) {
      iVar5 = iVar3 + 1;
      uVar4 = FUN_019079b0();
      if (((iStack_34 == 0) || (uVar4 >> 0x20 == 0)) || (cVar2 = FUN_00e7c020(), cVar2 == '\0'))
      goto LAB_018fed2d;
    }
    else {
LAB_018fed2d:
      iVar5 = iVar3 + 2;
      if (((iVar1 <= iVar5) || (uVar4 = FUN_019079b0(), iStack_34 == 0)) ||
         ((uVar4 >> 0x20 == 0 || (cVar2 = FUN_00e7c020(), cVar2 == '\0')))) {
        if ((((iVar3 + 3 < iVar1) && (uVar4 = FUN_019079b0(), iStack_34 != 0)) &&
            (uVar4 >> 0x20 != 0)) && (cVar2 = FUN_00e7c020(), cVar2 != '\0')) {
          iVar8 = iVar3 + 3;
        }
        goto LAB_018fedc7;
      }
    }
    iVar3 = iVar5 - iVar3;
  }
joined_r0x018fedd0:
  iVar8 = iVar7;
  if (iVar3 != 1) {
    do {
      iVar8 = iVar3 / 2 + iVar7;
      uVar4 = FUN_019079b0();
      if ((uVar4 >> 0x20 != 0) && (iStack_34 != 0)) {
        cVar2 = FUN_00e7c000();
        if (cVar2 != '\0') break;
        iStack_3c = (int)(uVar4 >> 0x20);
        if (((iStack_3c != 0) && (iStack_34 != 0)) && (cVar2 = FUN_00e7c020(), cVar2 != '\0'))
        goto code_r0x018fee50;
      }
      iVar3 = iVar8 - iVar7;
      iVar5 = iVar8;
      iVar8 = iVar7;
      if (iVar3 == 1) break;
    } while( true );
  }
  goto joined_r0x018fee78;
code_r0x018fee50:
  iVar3 = iVar5 - iVar8;
  iVar7 = iVar8;
  goto joined_r0x018fedd0;
}

