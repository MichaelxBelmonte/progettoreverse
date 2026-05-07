// Function: FUN_017fe120
// Address: 017fe120
// Size: 978 bytes
// Class: Unknown


int FUN_017fe120(int param_1,int param_2,char param_3,longlong *param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  longlong *unaff_RSI;
  ulonglong uVar12;
  longlong *unaff_RDI;
  int iVar13;
  int iVar14;
  longlong lVar15;
  int iVar16;
  int local_78 [12];
  char local_48 [16];
  longlong local_38;
  
  local_38 = *(longlong *)PTR____stack_chk_guard_024a9898;
  local_48[8] = '\0';
  local_48[9] = '\0';
  local_48[10] = '\0';
  local_48[0xb] = '\0';
  local_48[0] = '\0';
  local_48[1] = '\0';
  local_48[2] = '\0';
  local_48[3] = '\0';
  local_48[4] = '\0';
  local_48[5] = '\0';
  local_48[6] = '\0';
  local_48[7] = '\0';
  local_78[8] = 0;
  local_78[9] = 0;
  local_78[10] = 0;
  local_78[0xb] = 0;
  local_78[4] = 0;
  local_78[5] = 0;
  local_78[6] = 0;
  local_78[7] = 0;
  local_78[0] = 0;
  local_78[1] = 0;
  local_78[2] = 0;
  local_78[3] = 0;
  lVar1 = *unaff_RDI;
  iVar14 = *(int *)(lVar1 + 0x18);
  iVar16 = iVar14 + 3;
  if (-1 < iVar14) {
    iVar16 = iVar14;
  }
  uVar6 = iVar16 >> 2;
  iVar16 = 0;
  if (iVar14 < 4) {
LAB_017fe40e:
    if ((int)uVar6 < 1) {
      lVar1 = *(longlong *)PTR____stack_chk_guard_024a9898;
    }
    else {
      uVar12 = 0;
      do {
        uVar8 = uVar6;
        if (uVar12 != 0) {
          uVar8 = (uint)uVar12;
        }
        iVar14 = *(int *)(*(longlong *)(lVar1 + 0x10) + uVar12 * 4);
        iVar13 = *(int *)(*(longlong *)(lVar1 + 0x10) + -4 + (longlong)(int)uVar8 * 4);
        iVar7 = iVar14 - iVar13;
        iVar11 = -iVar7;
        if (0 < iVar7) {
          iVar11 = iVar7;
        }
        iVar11 = 6 - iVar11;
        iVar7 = -iVar11;
        if (0 < iVar11) {
          iVar7 = iVar11;
        }
        iVar7 = iVar7 + -6;
        iVar11 = -iVar7;
        if (0 < iVar7) {
          iVar11 = iVar7;
        }
        iVar9 = (local_78[iVar14] + iVar14) - (local_78[iVar13] + iVar13);
        iVar7 = -iVar9;
        if (0 < iVar9) {
          iVar7 = iVar9;
        }
        iVar7 = 6 - iVar7;
        iVar9 = -iVar7;
        if (0 < iVar7) {
          iVar9 = iVar7;
        }
        iVar9 = iVar9 + -6;
        iVar7 = -iVar9;
        if (0 < iVar9) {
          iVar7 = iVar9;
        }
        iVar11 = iVar13 - iVar11;
        iVar11 = iVar11 + (((uint)(iVar11 / 6 + (iVar11 >> 0x1f)) >> 1) - (iVar11 >> 0x1f)) * -0xc;
        iVar7 = (local_78[iVar13] + iVar13) - iVar7;
        iVar7 = iVar7 + (((uint)(iVar7 / 6 + (iVar7 >> 0x1f)) >> 1) - (iVar7 >> 0x1f)) * -0xc;
        iVar13 = iVar16 + 1000;
        if (local_78[iVar14] + iVar14 == (iVar7 >> 0x1f & 0xcU) + iVar7) {
          iVar13 = iVar16;
        }
        if (iVar14 != (iVar11 >> 0x1f & 0xcU) + iVar11) {
          iVar13 = iVar16;
        }
        iVar16 = iVar13;
        uVar12 = uVar12 + 1;
      } while (uVar6 != uVar12);
      lVar1 = *(longlong *)PTR____stack_chk_guard_024a9898;
    }
    if (lVar1 != local_38) {
                    /* WARNING: Subroutine does not return */
      ___stack_chk_fail();
    }
    return iVar16;
  }
  lVar2 = *(longlong *)(lVar1 + 0x10);
  lVar3 = *unaff_RSI;
  lVar4 = *param_4;
  lVar5 = *(longlong *)(lVar3 + 0x10);
  iVar16 = 0;
  if (param_3 == '\0') {
    iVar13 = 0;
LAB_017fe314:
    if (param_2 + iVar13 < (int)uVar6) {
      uVar6 = 0;
    }
    iVar11 = *(int *)(lVar2 + (longlong)(int)((param_2 + iVar13) - uVar6) * 4);
    iVar9 = 0;
    iVar7 = iVar11;
    do {
      iVar10 = iVar7 + (((uint)(iVar7 / 6 + (iVar7 >> 0x1f)) >> 1) - (iVar7 >> 0x1f)) * -0xc;
      iVar10 = (iVar10 >> 0x1f & 0xcU) + iVar10;
      lVar15 = 0;
      do {
        if (*(int *)(lVar5 + lVar15 * 4) == iVar10) {
          if (local_48[iVar10] == '\0') {
            iVar7 = iVar7 - iVar11;
            iVar9 = -iVar7;
            if (0 < iVar7) {
              iVar9 = iVar7;
            }
            if (lVar4 != 0) {
              *(int *)(*(longlong *)(lVar4 + 0x10) + (longlong)iVar11 * 4) = iVar7;
              iVar14 = *(int *)(lVar1 + 0x18);
            }
            iVar16 = iVar16 + iVar9;
            local_78[iVar11] = iVar7;
            iVar13 = iVar13 + 1;
            iVar11 = iVar14 + 3;
            if (-1 < iVar14) {
              iVar11 = iVar14;
            }
            uVar6 = iVar11 >> 2;
            if (iVar13 < (int)uVar6) goto LAB_017fe314;
            goto LAB_017fe40e;
          }
          break;
        }
        lVar15 = lVar15 + 1;
      } while (*(uint *)(lVar3 + 0x18) >> 2 != (uint)lVar15);
      iVar10 = param_1;
      if (iVar9 != 0) {
        if (iVar9 < 1) {
          iVar10 = iVar9 + -1;
        }
        else {
          iVar10 = iVar9 + 1;
        }
      }
      iVar7 = iVar7 - iVar10;
      iVar9 = -iVar10;
    } while( true );
  }
  iVar13 = 0;
LAB_017fe1e4:
  if (param_2 + iVar13 < (int)uVar6) {
    uVar6 = 0;
  }
  iVar11 = *(int *)(lVar2 + (longlong)(int)((param_2 + iVar13) - uVar6) * 4);
  iVar9 = 0;
  iVar7 = iVar11;
  do {
    iVar10 = iVar7 + (((uint)(iVar7 / 6 + (iVar7 >> 0x1f)) >> 1) - (iVar7 >> 0x1f)) * -0xc;
    iVar10 = (iVar10 >> 0x1f & 0xcU) + iVar10;
    lVar15 = 0;
    do {
      if (*(int *)(lVar5 + lVar15 * 4) == iVar10) {
        if (local_48[iVar10] == '\0') {
          iVar7 = iVar7 - iVar11;
          iVar9 = -iVar7;
          if (0 < iVar7) {
            iVar9 = iVar7;
          }
          local_48[iVar10] = '\x01';
          if (lVar4 != 0) {
            *(int *)(*(longlong *)(lVar4 + 0x10) + (longlong)iVar11 * 4) = iVar7;
            iVar14 = *(int *)(lVar1 + 0x18);
          }
          iVar16 = iVar16 + iVar9;
          local_78[iVar11] = iVar7;
          iVar13 = iVar13 + 1;
          iVar11 = iVar14 + 3;
          if (-1 < iVar14) {
            iVar11 = iVar14;
          }
          uVar6 = iVar11 >> 2;
          if (iVar13 < (int)uVar6) goto LAB_017fe1e4;
          goto LAB_017fe40e;
        }
        break;
      }
      lVar15 = lVar15 + 1;
    } while (*(uint *)(lVar3 + 0x18) >> 2 != (uint)lVar15);
    iVar10 = param_1;
    if (iVar9 != 0) {
      if (iVar9 < 1) {
        iVar10 = iVar9 + -1;
      }
      else {
        iVar10 = iVar9 + 1;
      }
    }
    iVar7 = iVar7 - iVar10;
    iVar9 = -iVar10;
  } while( true );
}


