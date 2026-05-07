// Function: FUN_018ff980
// Address: 018ff980
// Size: 1195 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


int64_t * FUN_018ff980(int *param_1,uint64_t param_2)

{
  int iVar1;
  char cVar2;
  int iVar3;
  uint64_t uVar4;
  int64_t arg1;
  int64_t *this_ptr;
  int iVar5;
  int iVar6;
  int64_t lVar7;
  int iVar8;
  int iStack_3c;
  int iStack_34;
  
  iVar1 = *(int *)(*(int64_t *)(arg1 + 0x38) + 0xc);
  uVar4 = FUN_019079b0();
  iStack_34 = (int)(param_2 >> 0x20);
  if (((param_2 >> 0x20 == 0) || (uVar4 >> 0x20 == 0)) || (cVar2 = FUN_00e7c020(), cVar2 == '\0')) {
    iVar5 = iVar1 + -2;
    uVar4 = FUN_019079b0();
    if (((iStack_34 != 0) && (uVar4 >> 0x20 != 0)) && (cVar2 = FUN_00e7c020(), cVar2 == '\0')) {
joined_r0x018ffd58:
      if (param_1 != (int *)0x0) goto LAB_018ffd5a;
      goto LAB_018ffd5d;
    }
    iVar6 = 1;
    if ((param_1 == (int *)0x0) || (iVar8 = *param_1, iVar8 == -1)) {
LAB_018ffca1:
      iVar3 = iVar5 - iVar6;
      iVar8 = iVar5;
    }
    else {
      iVar6 = iVar8;
      if (iVar5 < iVar8) {
        iVar6 = iVar5;
      }
      iVar3 = 1;
      if (0 < iVar8) {
        iVar3 = iVar6;
      }
      uVar4 = FUN_019079b0();
      if (((iStack_34 != 0) && (uVar4 >> 0x20 != 0)) && (cVar2 = FUN_00e7c020(), cVar2 != '\0')) {
        iVar5 = iVar3;
        if (0 < iVar3) {
          uVar4 = FUN_019079b0();
          if (((iStack_34 != 0) && (uVar4 >> 0x20 != 0)) &&
             (cVar2 = FUN_00e7c020(), iVar6 = iVar3 + -1, cVar2 == '\0')) goto LAB_018ffca1;
        }
        if (1 < iVar3) {
          uVar4 = FUN_019079b0();
          if (((iStack_34 != 0) && (uVar4 >> 0x20 != 0)) &&
             (cVar2 = FUN_00e7c020(), iVar6 = iVar3 + -2, cVar2 == '\0')) goto LAB_018ffca1;
        }
        iVar8 = iVar3;
        if (2 < iVar3) {
          iVar6 = iVar3 + -3;
          uVar4 = FUN_019079b0();
          if ((iStack_34 != 0) && (uVar4 >> 0x20 != 0)) {
            cVar2 = FUN_00e7c020();
            if (cVar2 != '\0') {
              iVar6 = 1;
            }
            iVar3 = iVar3 - iVar6;
            goto joined_r0x018ffcaa;
          }
        }
        iVar3 = iVar3 + -1;
        iVar6 = 1;
        goto joined_r0x018ffcaa;
      }
      iVar6 = iVar3;
      if (iVar3 < iVar1 + -1) {
        iVar8 = iVar3 + 1;
        uVar4 = FUN_019079b0();
        if (((iStack_34 == 0) || (uVar4 >> 0x20 == 0)) || (cVar2 = FUN_00e7c020(), cVar2 == '\0'))
        goto LAB_018ffbff;
      }
      else {
LAB_018ffbff:
        iVar8 = iVar3 + 2;
        if (((iVar1 <= iVar8) || (uVar4 = FUN_019079b0(), iStack_34 == 0)) ||
           ((uVar4 >> 0x20 == 0 || (cVar2 = FUN_00e7c020(), cVar2 == '\0')))) {
          if ((((iVar3 + 3 < iVar1) && (uVar4 = FUN_019079b0(), iStack_34 != 0)) &&
              (uVar4 >> 0x20 != 0)) && (cVar2 = FUN_00e7c020(), cVar2 != '\0')) {
            iVar5 = iVar3 + 3;
          }
          goto LAB_018ffca1;
        }
      }
      iVar3 = iVar8 - iVar3;
    }
joined_r0x018ffcaa:
    iVar5 = iVar6;
    if (iVar3 != 1) {
      do {
        iVar5 = iVar3 / 2 + iVar6;
        uVar4 = FUN_019079b0();
        if ((uVar4 >> 0x20 != 0) && (iStack_34 != 0)) {
          cVar2 = FUN_00e7c000();
          if (cVar2 != '\0') break;
          iStack_3c = (int)(uVar4 >> 0x20);
          if (((iStack_3c != 0) && (iStack_34 != 0)) && (cVar2 = FUN_00e7c020(), cVar2 != '\0'))
          goto code_r0x018ffd30;
        }
        iVar3 = iVar5 - iVar6;
        iVar8 = iVar5;
        iVar5 = iVar6;
        if (iVar3 == 1) break;
      } while( true );
    }
    goto joined_r0x018ffd58;
  }
  iVar5 = 0;
  if (param_1 == (int *)0x0) {
LAB_018ffd62:
    lVar7 = **(int64_t **)(*(int64_t *)(arg1 + 0x38) + 0x10);
    uVar4 = FUN_019079b0();
    if (((param_2 >> 0x20 != 0) && (uVar4 >> 0x20 != 0)) && (cVar2 = FUN_00e7c020(), cVar2 != '\0'))
    goto LAB_018ffdeb;
    iVar5 = 0;
  }
  else {
LAB_018ffd5a:
    *param_1 = iVar5;
LAB_018ffd5d:
    if (iVar5 == 0) goto LAB_018ffd62;
  }
  lVar7 = *(int64_t *)
           (*(int64_t *)(*(int64_t *)(arg1 + 0x38) + 0x10) + 8 + (int64_t)iVar5 * 8);
  uVar4 = FUN_019079b0();
  if (((iVar5 == *(int *)(*(int64_t *)(arg1 + 0x38) + 0xc) + -2) && (uVar4 >> 0x20 != 0)) &&
     ((iStack_34 != 0 && (cVar2 = FUN_00e7c020(), cVar2 == '\0')))) {
    lVar7 = 0;
  }
LAB_018ffdeb:
  *(void*)(this_ptr + 1) = 0;
  if (lVar7 != 0) {
    FUN_00d50b00();
  }
  *this_ptr = lVar7;
  *(void*)(this_ptr + 1) = 1;
  return this_ptr;
code_r0x018ffd30:
  iVar3 = iVar8 - iVar5;
  iVar6 = iVar5;
  goto joined_r0x018ffcaa;
}

