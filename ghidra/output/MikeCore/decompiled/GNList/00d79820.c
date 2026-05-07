// Function: FUN_00d79820
// Address: 00d79820
// Size: 602 bytes
// Class: GNList


longlong FUN_00d79820(void)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  int unaff_ESI;
  longlong unaff_RDI;
  void *in_R9;
  longlong lVar6;
  uint uVar7;
  longlong lVar8;
  longlong local_60;
  code *local_58;
  longlong local_50;
  int iVar9;
  int *in_stack_ffffffffffffffb8;
  
  lVar8 = *(longlong *)(unaff_RDI + 0x18);
  if (lVar8 == 0) {
    FUN_00c8e710();
    lVar8 = local_60;
    if (((char)local_58 == '\0') && (local_60 != 0)) {
      FUN_00d50b00();
      if (((char)local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
    }
    FUN_00c92170();
    lVar1 = *(longlong *)(unaff_RDI + 0x18);
    if (lVar1 == lVar8) {
      if (lVar8 != 0) {
        FUN_00d50b20();
      }
    }
    else {
      *(longlong *)(unaff_RDI + 0x18) = lVar8;
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
    }
    if (*(longlong *)(unaff_RDI + 0x10) != 0) {
      local_58 = (code *)((ulonglong)local_58 & 0xffffffffffffff00);
      local_60 = 0;
      in_stack_ffffffffffffffb8 = (int *)0xffffffff;
      iVar2 = 0;
      local_50 = *(longlong *)(unaff_RDI + 0x10);
      while( true ) {
        iVar9 = (int)in_stack_ffffffffffffffb8;
        iVar3 = iVar9 + 1;
        in_stack_ffffffffffffffb8 =
             (int *)CONCAT44((int)((ulonglong)in_stack_ffffffffffffffb8 >> 0x20),iVar3);
        if (*(int *)(local_50 + 0xc) <= iVar3) break;
        lVar8 = *(longlong *)(*(longlong *)(local_50 + 0x10) + 8 + (longlong)iVar9 * 8);
        lVar1 = *(longlong *)(unaff_RDI + 0x18);
        lVar6 = (longlong)*(int *)(lVar1 + 0x18);
        local_60 = lVar8;
        FUN_00c8e340(*(longlong *)(local_50 + 0x10),1);
        lVar1 = *(longlong *)(lVar1 + 0x10);
        *(longlong *)(lVar1 + lVar6) = lVar8;
        *(int *)(lVar1 + 8 + lVar6) = iVar2;
        iVar3 = FUN_00e5d890();
        iVar2 = iVar2 + iVar3;
        iVar3 = (int)((ulonglong)in_stack_ffffffffffffffb8 >> 0x20);
        if (iVar3 != 0) {
          if ((longlong)in_stack_ffffffffffffffb8 < 0) {
            iVar3 = -iVar3;
          }
          else {
            in_stack_ffffffffffffffb8 =
                 (int *)CONCAT44(iVar3,(int)in_stack_ffffffffffffffb8 - iVar3);
            FUN_00d23690();
            iVar3 = 0;
          }
          in_stack_ffffffffffffffb8 = (int *)CONCAT44(iVar3,(int)in_stack_ffffffffffffffb8);
        }
      }
      FUN_00d79e20();
    }
    local_60 = 0;
    local_58 = FUN_00d79c30;
    _qsort_r(&local_60,0x10,0xd79ec0,in_R9,in_stack_ffffffffffffffb8);
    lVar8 = *(longlong *)(unaff_RDI + 0x18);
    uVar7 = *(uint *)(lVar8 + 0x18);
  }
  else {
    uVar7 = *(uint *)(lVar8 + 0x18);
  }
  if ((int)uVar7 < 0x10) {
LAB_00d79a6f:
    lVar8 = 0;
  }
  else {
    uVar7 = (uVar7 >> 4) - 1;
    uVar5 = (ulonglong)(uVar7 >> 1);
    lVar8 = *(longlong *)(lVar8 + 0x10);
    iVar2 = FUN_00e5d8b0();
    if (iVar2 == unaff_ESI) {
      lVar8 = lVar8 + uVar5 * 0x10;
    }
    else {
      iVar3 = 0;
      do {
        if (iVar2 < unaff_ESI) {
          iVar3 = (int)uVar5 + 1;
          iVar2 = uVar7 - iVar3;
          if ((int)uVar7 < iVar3) goto LAB_00d79a6f;
        }
        else {
          uVar7 = (int)uVar5 - 1;
          iVar2 = uVar7 - iVar3;
          if ((int)uVar7 < iVar3) goto LAB_00d79a6f;
        }
        uVar4 = iVar2 / 2 + iVar3;
        uVar5 = (ulonglong)uVar4;
        lVar8 = *(longlong *)(*(longlong *)(unaff_RDI + 0x18) + 0x10);
        iVar2 = FUN_00e5d8b0();
      } while (iVar2 != unaff_ESI);
      lVar8 = lVar8 + (longlong)(int)uVar4 * 0x10;
    }
  }
  return lVar8;
}


