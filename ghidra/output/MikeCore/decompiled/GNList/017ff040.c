// Function: FUN_017ff040
// Address: 017ff040
// Size: 1565 bytes
// Class: GNList


/* WARNING: Removing unreachable block (ram,0x017ff50e) */
/* WARNING: Removing unreachable block (ram,0x017ff51a) */
/* WARNING: Removing unreachable block (ram,0x017ff310) */
/* WARNING: Removing unreachable block (ram,0x017ff31c) */
/* WARNING: Removing unreachable block (ram,0x017ff0f6) */
/* WARNING: Removing unreachable block (ram,0x017ff102) */
/* WARNING: Removing unreachable block (ram,0x017ff244) */
/* WARNING: Removing unreachable block (ram,0x017ff250) */
/* WARNING: Removing unreachable block (ram,0x017ff599) */
/* WARNING: Removing unreachable block (ram,0x017ff5a2) */
/* WARNING: Removing unreachable block (ram,0x017ff5f6) */
/* WARNING: Removing unreachable block (ram,0x017ff603) */
/* WARNING: Removing unreachable block (ram,0x017ff455) */
/* WARNING: Removing unreachable block (ram,0x017ff462) */
/* WARNING: Removing unreachable block (ram,0x017ff3ec) */
/* WARNING: Removing unreachable block (ram,0x017ff3f9) */
/* WARNING: Removing unreachable block (ram,0x017ff422) */
/* WARNING: Removing unreachable block (ram,0x017ff42f) */
/* WARNING: Removing unreachable block (ram,0x017ff624) */
/* WARNING: Removing unreachable block (ram,0x017ff631) */

void FUN_017ff040(int param_1,int param_2,longlong *param_3)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  longlong *unaff_RSI;
  ulonglong uVar8;
  int iVar9;
  uint uVar10;
  longlong local_40;
  char local_38;
  
  iVar2 = FUN_01717720();
  iVar3 = FUN_01717720();
  uVar10 = iVar2 - iVar3;
  if (uVar10 == 0 || iVar2 < iVar3) {
LAB_017ff1e9:
    uVar10 = iVar3 - iVar2;
    if (uVar10 == 0 || iVar3 < iVar2) {
      return;
    }
    goto LAB_017ff4bd;
  }
  if (param_2 == 2) {
    FUN_01791360();
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    if (iVar2 < 1) {
      if (local_40 == 0) goto LAB_017ff4b3;
    }
    else {
      iVar9 = 1;
      iVar6 = -1;
      do {
        iVar5 = *(int *)(local_40 + 0x18);
        iVar4 = iVar5 + 3;
        if (-1 < iVar5) {
          iVar4 = iVar5;
        }
        if ((~(uint)(*(ulonglong *)(*unaff_RSI + 0x18) >>
                    ((char)*(undefined4 *)
                            (*(longlong *)(local_40 + 0x10) + (longlong)((iVar4 >> 2) + iVar6) * 4)
                     * '\x04' & 0x3fU)) & 0xf) == 0) {
          FUN_0171a310();
          iVar3 = iVar3 + 1;
        }
        if (iVar2 <= iVar9) break;
        iVar9 = iVar9 + 1;
        iVar6 = iVar6 + -1;
      } while (iVar3 < iVar2);
    }
    FUN_00d50b20();
  }
  else if (param_2 == 1) {
    FUN_01791360();
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    if ((int)uVar10 < 1) {
      if (local_40 == 0) {
LAB_017ff65a:
        uVar10 = iVar3 - iVar2;
        if (uVar10 == 0 || iVar3 < iVar2) {
          return;
        }
        goto LAB_017ff4bd;
      }
    }
    else {
      uVar8 = 0;
      do {
        iVar6 = *(int *)(*(longlong *)(local_40 + 0x10) + 4 + uVar8 * 4);
        FUN_017163c0();
        lVar1 = *param_3;
        if (lVar1 != 0) {
          iVar5 = FUN_01715480();
          iVar9 = *(int *)(lVar1 + 0x18);
          FUN_00c8e340();
          iVar6 = iVar6 - iVar5;
          iVar6 = iVar6 + (((uint)(iVar6 / 6 + (iVar6 >> 0x1f)) >> 1) - (iVar6 >> 0x1f)) * -0xc;
          *(uint *)(*(longlong *)(lVar1 + 0x10) + (longlong)iVar9) = (iVar6 >> 0x1f & 0xcU) + iVar6;
        }
        uVar8 = uVar8 + 1;
      } while (uVar10 != uVar8);
    }
    FUN_00d50b20();
  }
  else {
    if (param_2 != 0) goto LAB_017ff1e9;
    FUN_01791360();
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    if ((int)uVar10 < 1) {
      if (local_40 == 0) goto LAB_017ff65a;
    }
    else {
      iVar6 = -1;
      do {
        iVar9 = *(int *)(local_40 + 0x18);
        iVar5 = iVar9 + 3;
        if (-1 < iVar9) {
          iVar5 = iVar9;
        }
        iVar9 = *(int *)(*(longlong *)(local_40 + 0x10) + (longlong)((iVar5 >> 2) + iVar6) * 4);
        FUN_017163c0();
        lVar1 = *param_3;
        if (lVar1 != 0) {
          iVar4 = FUN_01715480();
          iVar5 = *(int *)(lVar1 + 0x18);
          FUN_00c8e340();
          iVar9 = iVar9 - iVar4;
          iVar9 = iVar9 + (((uint)(iVar9 / 6 + (iVar9 >> 0x1f)) >> 1) - (iVar9 >> 0x1f)) * -0xc;
          *(uint *)(*(longlong *)(lVar1 + 0x10) + (longlong)iVar5) = (iVar9 >> 0x1f & 0xcU) + iVar9;
        }
        iVar9 = uVar10 + iVar6;
        iVar6 = iVar6 + -1;
      } while (iVar9 != 0);
    }
    FUN_00d50b20();
  }
LAB_017ff4b3:
  uVar10 = iVar3 - iVar2;
  if (uVar10 == 0 || iVar3 < iVar2) {
    return;
  }
LAB_017ff4bd:
  if (param_1 == 1) {
    FUN_01791360();
    if ((local_38 == '\0') && (local_40 != 0)) {
      FUN_00d50b00();
    }
    uVar7 = 0;
    uVar8 = (ulonglong)uVar10;
    if ((int)uVar10 < 1) {
      uVar8 = uVar7;
    }
    for (; uVar8 != uVar7; uVar7 = uVar7 + 1) {
      FUN_017163c0();
    }
    if (local_40 != 0) {
      FUN_00d50b20();
    }
  }
  else if (param_1 == 0) {
    FUN_01791360();
    if ((local_38 == '\0') && (local_40 != 0)) {
      FUN_00d50b00();
    }
    if ((int)uVar10 < 1) {
      if (local_40 == 0) {
        return;
      }
    }
    else {
      iVar2 = -1;
      do {
        FUN_017163c0();
        iVar3 = iVar2 + uVar10;
        iVar2 = iVar2 + -1;
      } while (iVar3 != 0);
    }
    FUN_00d50b20();
  }
  return;
}


