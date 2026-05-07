// Function: FUN_018fd630
// Address: 018fd630
// Size: 1112 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


uint64_t FUN_018fd630(uint64_t param_1,int *param_2)

{
  int iVar1;
  int64_t lVar2;
  char cVar3;
  int iVar4;
  uint64_t uVar5;
  int64_t lVar6;
  uint64_t arg1;
  int64_t this_ptr;
  int iVar7;
  int iVar8;
  int iVar9;
  uint64_t uVar10;
  int iVar11;
  int iStack_3c;
  
  iVar1 = *(int *)(*(int64_t *)(this_ptr + 0x38) + 0xc);
  uVar5 = FUN_019079b0();
  if (((arg1 >> 0x20 != 0) && (uVar5 >> 0x20 != 0)) && (cVar3 = FUN_00e7c020(), cVar3 != '\0'))
  {
    iVar8 = 0;
joined_r0x018fd9d4:
    if (param_2 != (int *)0x0) {
      *param_2 = iVar8;
    }
    lVar6 = *(int64_t *)(*(int64_t *)(this_ptr + 0x38) + 0x10);
    lVar2 = *(int64_t *)(lVar6 + (int64_t)iVar8 * 8);
    if (lVar2 != 0) {
      FUN_00d50b00();
      lVar6 = *(int64_t *)(*(int64_t *)(this_ptr + 0x38) + 0x10);
    }
    lVar6 = *(int64_t *)(lVar6 + 8 + (int64_t)iVar8 * 8);
    if (lVar6 != 0) {
      FUN_00d50b00();
    }
    uVar10 = FUN_019079d0();
    if (lVar6 != 0) {
      FUN_00d50b20();
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    return uVar10;
  }
  iVar8 = iVar1 + -2;
  uVar5 = FUN_019079b0();
  iVar11 = (int)(arg1 >> 0x20);
  if (((iVar11 != 0) && (uVar5 >> 0x20 != 0)) && (cVar3 = FUN_00e7c020(), cVar3 == '\0'))
  goto joined_r0x018fd9d4;
  iVar9 = 1;
  if ((param_2 == (int *)0x0) || (iVar7 = *param_2, iVar7 == -1)) {
LAB_018fd924:
    iVar4 = iVar8 - iVar9;
    iVar7 = iVar8;
  }
  else {
    iVar9 = iVar7;
    if (iVar8 < iVar7) {
      iVar9 = iVar8;
    }
    iVar4 = 1;
    if (0 < iVar7) {
      iVar4 = iVar9;
    }
    uVar5 = FUN_019079b0();
    if (((iVar11 != 0) && (uVar5 >> 0x20 != 0)) && (cVar3 = FUN_00e7c020(), cVar3 != '\0')) {
      iVar8 = iVar4;
      if (0 < iVar4) {
        uVar5 = FUN_019079b0();
        if (((iVar11 != 0) && (uVar5 >> 0x20 != 0)) &&
           (cVar3 = FUN_00e7c020(), iVar9 = iVar4 + -1, cVar3 == '\0')) goto LAB_018fd924;
      }
      if (1 < iVar4) {
        uVar5 = FUN_019079b0();
        if (((iVar11 != 0) && (uVar5 >> 0x20 != 0)) &&
           (cVar3 = FUN_00e7c020(), iVar9 = iVar4 + -2, cVar3 == '\0')) goto LAB_018fd924;
      }
      iVar7 = iVar4;
      if (2 < iVar4) {
        iVar9 = iVar4 + -3;
        uVar5 = FUN_019079b0();
        if ((iVar11 != 0) && (uVar5 >> 0x20 != 0)) {
          cVar3 = FUN_00e7c020();
          if (cVar3 != '\0') {
            iVar9 = 1;
          }
          iVar4 = iVar4 - iVar9;
          goto joined_r0x018fda80;
        }
      }
      iVar4 = iVar4 + -1;
      iVar9 = 1;
      goto joined_r0x018fda80;
    }
    iVar9 = iVar4;
    if (iVar4 < iVar1 + -1) {
      iVar7 = iVar4 + 1;
      uVar5 = FUN_019079b0();
      if (((iVar11 == 0) || (uVar5 >> 0x20 == 0)) || (cVar3 = FUN_00e7c020(), cVar3 == '\0'))
      goto LAB_018fd88a;
    }
    else {
LAB_018fd88a:
      iVar7 = iVar4 + 2;
      if (((iVar1 <= iVar7) || (uVar5 = FUN_019079b0(), iVar11 == 0)) ||
         ((uVar5 >> 0x20 == 0 || (cVar3 = FUN_00e7c020(), cVar3 == '\0')))) {
        if (((iVar4 + 3 < iVar1) && (uVar5 = FUN_019079b0(), iVar11 != 0)) &&
           ((uVar5 >> 0x20 != 0 && (cVar3 = FUN_00e7c020(), cVar3 != '\0')))) {
          iVar8 = iVar4 + 3;
        }
        goto LAB_018fd924;
      }
    }
    iVar4 = iVar7 - iVar4;
  }
joined_r0x018fda80:
  iVar8 = iVar9;
  if (iVar4 != 1) {
    do {
      iVar8 = iVar4 / 2 + iVar9;
      uVar5 = FUN_019079b0();
      if ((uVar5 >> 0x20 != 0) && (iVar11 != 0)) {
        cVar3 = FUN_00e7c000();
        if (cVar3 != '\0') break;
        iStack_3c = (int)(uVar5 >> 0x20);
        if (((iStack_3c != 0) && (iVar11 != 0)) && (cVar3 = FUN_00e7c020(), cVar3 != '\0'))
        goto code_r0x018fd9b0;
      }
      iVar4 = iVar8 - iVar9;
      iVar7 = iVar8;
      iVar8 = iVar9;
      if (iVar4 == 1) break;
    } while( true );
  }
  goto joined_r0x018fd9d4;
code_r0x018fd9b0:
  iVar4 = iVar7 - iVar8;
  iVar9 = iVar8;
  goto joined_r0x018fda80;
}

