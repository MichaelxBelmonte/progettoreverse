// Function: FUN_014f6fc0
// Address: 014f6fc0
// Size: 663 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x014f70f2) */
/* WARNING: Removing unreachable block (ram,0x014f70ff) */
/* WARNING: Removing unreachable block (ram,0x014f71ff) */
/* WARNING: Removing unreachable block (ram,0x014f720c) */

ulonglong FUN_014f6fc0(void)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *unaff_RSI;
  ulonglong unaff_RDI;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong local_38;
  
  lVar2 = *(longlong *)(*unaff_RSI + 0x10);
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  iVar4 = FUN_014f6f40();
  if (iVar4 == *(int *)(**(longlong **)(*(longlong *)(unaff_RDI + 0x10) + 0x10) + 0x28) + -1) {
    uVar1 = *(uint *)(lVar2 + 0xc);
    if ((int)uVar1 < 1) {
LAB_014f7232:
      uVar10 = CONCAT71((int7)(unaff_RDI >> 8),1);
      goto joined_r0x014f7238;
    }
    lVar9 = (ulonglong)uVar1 + 1;
    uVar10 = (ulonglong)(uVar1 - 1);
    lVar8 = 0;
    local_38 = 0;
    do {
      lVar6 = *(longlong *)(*(longlong *)(lVar2 + 0x10) + uVar10 * 8);
      if (lVar8 == lVar6) {
        if (((char)local_38 == '\0') && (lVar8 != 0)) {
          local_38 = 1;
          FUN_00d50b00();
        }
      }
      else {
        if (lVar6 != 0) {
          FUN_00d50b00();
        }
        if (((char)local_38 == '\0') || (lVar8 == 0)) {
          local_38 = 1;
          lVar8 = lVar6;
        }
        else {
          FUN_00d50b20();
          local_38 = 1;
          lVar8 = lVar6;
        }
      }
      *(ulonglong *)(lVar8 + 0x18) = unaff_RDI;
      FUN_00d23370();
      lVar9 = lVar9 + -1;
      uVar10 = (ulonglong)((int)uVar10 - 1);
    } while (1 < lVar9);
  }
  else {
    iVar4 = *(int *)(**(longlong **)(*(longlong *)(*unaff_RSI + 0x10) + 0x10) + 0x28);
    iVar5 = FUN_014f6f40();
    if (iVar4 != iVar5 + 1) {
      uVar10 = 0;
      goto joined_r0x014f7238;
    }
    if (*(int *)(lVar2 + 0xc) < 1) goto LAB_014f7232;
    lVar9 = 0;
    lVar8 = 0;
    local_38 = 0;
    uVar10 = unaff_RDI;
    do {
      lVar6 = *(longlong *)(lVar2 + 0x10);
      lVar3 = *(longlong *)(lVar6 + lVar9 * 8);
      if (lVar8 == lVar3) {
        if (((char)local_38 == '\0') && (lVar8 != 0)) {
          local_38 = CONCAT71((int7)((ulonglong)lVar6 >> 8),1);
          uVar10 = 0;
          FUN_00d50b00();
        }
      }
      else {
        if (lVar3 != 0) {
          uVar10 = local_38 & 0xffffffff;
          lVar6 = FUN_00d50b00();
        }
        if (((char)local_38 == '\0') || (lVar8 == 0)) {
          local_38 = CONCAT71((int7)((ulonglong)lVar6 >> 8),1);
          lVar8 = lVar3;
        }
        else {
          uVar10 = local_38 & 0xffffffff;
          uVar7 = FUN_00d50b20();
          local_38 = CONCAT71((int7)((ulonglong)uVar7 >> 8),1);
          lVar8 = lVar3;
        }
      }
      *(ulonglong *)(lVar8 + 0x18) = unaff_RDI;
      FUN_00d21140();
      lVar9 = lVar9 + 1;
    } while (lVar9 < *(int *)(lVar2 + 0xc));
  }
  uVar10 = CONCAT71((int7)(uVar10 >> 8),1);
  if ((char)local_38 != '\0') {
    FUN_00d50b20();
  }
joined_r0x014f7238:
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  return uVar10 & 0xffffffff;
}


