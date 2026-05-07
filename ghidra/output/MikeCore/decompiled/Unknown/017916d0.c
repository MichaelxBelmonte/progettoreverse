// Function: FUN_017916d0
// Address: 017916d0
// Size: 2630 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x017918fd) */
/* WARNING: Removing unreachable block (ram,0x0179190c) */

uint FUN_017916d0(longlong *param_1,int param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  byte bVar4;
  byte bVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  char cVar11;
  uint uVar12;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  byte bVar13;
  uint uVar14;
  bool bVar15;
  bool bVar16;
  byte local_80;
  longlong local_78;
  char local_70;
  char local_50;
  longlong local_40;
  bool local_31;
  
  if (*unaff_RSI == 0) {
    return 0;
  }
  if ((param_1 != (longlong *)0x0) && (*param_1 != 0)) {
    *param_1 = 0;
    if ((char)param_1[1] != '\0') {
      FUN_00d50b20();
    }
    *(undefined1 *)(param_1 + 1) = 0;
  }
  if ((param_3 != (longlong *)0x0) && (*param_3 != 0)) {
    *param_3 = 0;
    if ((char)param_3[1] != '\0') {
      FUN_00d50b20();
    }
    *(undefined1 *)(param_3 + 1) = 0;
  }
  uVar6 = (uint)*(ulonglong *)(*unaff_RDI + 0x18);
  if (((~uVar6 & 0xf0000) != 0) &&
     ((*(ulonglong *)(*unaff_RDI + 0x18) & 0xf00000000) != 0xf00000000)) {
    uVar6 = FUN_01715480();
    if (0xb < uVar6) {
      return 0;
    }
    if ((0x999U >> (uVar6 & 0x1f) & 1) == 0) {
      return 0;
    }
    if (param_1 == (longlong *)0x0) {
      return 2;
    }
    lVar1 = *unaff_RSI;
    cVar11 = (char)unaff_RSI[1];
    lVar2 = *param_1;
    if (lVar2 != lVar1) {
      lVar3 = param_1[1];
      if ((cVar11 != '\0') && (lVar1 != 0)) {
        FUN_00d50b00();
      }
      *param_1 = lVar1;
      if (((char)lVar3 != '\0') && (lVar2 != 0)) {
        FUN_00d50b20();
      }
      *(char *)(param_1 + 1) = cVar11;
      return 2;
    }
    if (cVar11 == '\0') {
      return 2;
    }
    if ((char)param_1[1] != '\0') {
      return 2;
    }
    if (lVar1 == 0) {
      return 2;
    }
    FUN_00d50b00();
    *(undefined1 *)(param_1 + 1) = 1;
    return 2;
  }
  local_40 = 0;
  local_50 = '\0';
  if ((~uVar6 & 0xf000) == 0) {
    local_80 = 0;
  }
  else {
    local_80 = 0;
    if ((uVar6 & 0xf000000) != 0xf000000) {
      iVar7 = FUN_01715480();
      iVar7 = iVar7 + -4;
      iVar7 = iVar7 + (((uint)(iVar7 / 6 + (iVar7 >> 0x1f)) >> 1) - (iVar7 >> 0x1f)) * -0xc;
      iVar7 = ((iVar7 >> 0x1f & 0xcU) + iVar7) * 7;
      iVar7 = iVar7 + ((int)(short)iVar7 / 0xc) * -0xc;
      cVar11 = ((byte)((uint)(int)(short)iVar7 >> 0xf) & 0xc) + (char)iVar7 + '\x06';
      uVar6 = cVar11 * 0x2b;
      FUN_01716350((int)(char)(cVar11 + ((char)((uVar6 & 0xffff) >> 0xf) + (char)(uVar6 >> 9)) *
                                        -0xc + -6));
      local_40 = local_78;
      if (local_78 == 0) {
        local_40 = 0;
        bVar16 = false;
        cVar11 = '\0';
      }
      else if (local_70 == '\0') {
        FUN_00d50b00();
        bVar16 = true;
        cVar11 = '\x01';
      }
      else {
        bVar16 = true;
        cVar11 = '\x01';
      }
      uVar10 = *(ulonglong *)(*unaff_RDI + 0x18);
      if ((~(uint)uVar10 & 0xf) != 0) {
        FUN_01715d40(~(uint)uVar10,0);
        uVar10 = *(ulonglong *)(*unaff_RDI + 0x18);
      }
      if ((~(uint)uVar10 & 0xf0) != 0) {
        FUN_01715d40(~(uint)uVar10,0);
        uVar10 = *(ulonglong *)(*unaff_RDI + 0x18);
      }
      if ((~(uint)uVar10 & 0xf00) != 0) {
        FUN_01715d40(~(uint)uVar10,0);
        uVar10 = *(ulonglong *)(*unaff_RDI + 0x18);
      }
      if ((~(uint)uVar10 & 0xf000) != 0) {
        FUN_01715d40(~(uint)uVar10,0);
        uVar10 = *(ulonglong *)(*unaff_RDI + 0x18);
      }
      if ((~(uint)uVar10 & 0xf0000) != 0) {
        FUN_01715d40(~(uint)uVar10,0);
        uVar10 = *(ulonglong *)(*unaff_RDI + 0x18);
      }
      if ((~(uint)uVar10 & 0xf00000) != 0) {
        FUN_01715d40(~(uint)uVar10,0);
        uVar10 = *(ulonglong *)(*unaff_RDI + 0x18);
      }
      if ((~(uint)uVar10 & 0xf000000) != 0) {
        FUN_01715d40(~(uint)uVar10,0);
        uVar10 = *(ulonglong *)(*unaff_RDI + 0x18);
      }
      if ((~(uint)uVar10 & 0xf0000000) != 0) {
        FUN_01715d40(~(uint)uVar10,0);
        uVar10 = *(ulonglong *)(*unaff_RDI + 0x18);
      }
      if ((~uVar10 & 0xf00000000) != 0) {
        FUN_01715d40(~uVar10,0);
        uVar10 = *(ulonglong *)(*unaff_RDI + 0x18);
      }
      if ((~uVar10 & 0xf000000000) != 0) {
        FUN_01715d40(~uVar10,0);
        uVar10 = *(ulonglong *)(*unaff_RDI + 0x18);
      }
      if ((~uVar10 & 0xf0000000000) != 0) {
        FUN_01715d40(~uVar10,0);
        uVar10 = *(ulonglong *)(*unaff_RDI + 0x18);
      }
      if ((~uVar10 & 0xf00000000000) != 0) {
        FUN_01715d40(0xf00000000000,0);
      }
      FUN_01715d80();
      lVar1 = *unaff_RDI;
      if (lVar1 == local_40) {
        if (bVar16) {
          local_50 = '\x01';
          cVar11 = '\x01';
          if (((char)unaff_RDI[1] == '\0') && (cVar11 = local_50, local_40 != 0)) {
            FUN_00d50b00();
            *(undefined1 *)(unaff_RDI + 1) = 1;
            cVar11 = '\x01';
          }
        }
        else {
          cVar11 = '\0';
        }
      }
      else {
        lVar2 = unaff_RDI[1];
        if ((bool)(local_40 != 0 & bVar16)) {
          FUN_00d50b00();
        }
        *unaff_RDI = local_40;
        if (((char)lVar2 != '\0') && (lVar1 != 0)) {
          FUN_00d50b20();
        }
        *(char *)(unaff_RDI + 1) = cVar11;
      }
      local_50 = cVar11;
      local_80 = 1;
      if (param_3 != (longlong *)0x0) {
        lVar1 = *param_3;
        if (lVar1 == local_40) {
          if (((bVar16) && ((char)param_3[1] == '\0')) && (local_40 != 0)) {
            FUN_00d50b00();
            *(undefined1 *)(param_3 + 1) = 1;
          }
        }
        else {
          lVar2 = param_3[1];
          if ((bool)(bVar16 & local_40 != 0)) {
            FUN_00d50b00();
          }
          *param_3 = local_40;
          if (((char)lVar2 != '\0') && (lVar1 != 0)) {
            FUN_00d50b20();
          }
          *(char *)(param_3 + 1) = local_50;
        }
      }
    }
  }
  iVar8 = FUN_01715480();
  iVar9 = FUN_01715480();
  cVar11 = FUN_01716c00();
  iVar7 = (iVar8 - iVar9) + -3;
  if (cVar11 == '\0') {
    iVar7 = iVar8 - iVar9;
  }
  iVar7 = iVar7 + (((uint)(iVar7 / 6 + (iVar7 >> 0x1f)) >> 1) - (iVar7 >> 0x1f)) * -0xc;
  bVar4 = 1;
  bVar13 = 0;
  bVar5 = 1;
  local_31 = true;
  uVar6 = 1;
  switch((iVar7 >> 0x1f & 0xcU) + iVar7) {
  case 0:
    break;
  case 1:
    bVar4 = FUN_01716be0();
    local_31 = (bool)(bVar4 ^ 1);
    uVar6 = (uint)bVar4 * 5;
    bVar13 = 0;
    bVar5 = 1;
    break;
  case 2:
    bVar5 = FUN_01716be0();
    uVar6 = bVar5 + 3;
    goto LAB_01791da3;
  case 3:
    bVar5 = FUN_01716be0();
    goto LAB_01791e0a;
  case 4:
    bVar5 = FUN_01716c00();
    local_31 = true;
    if ((byte)(bVar5 ^ 1 | local_80) == 1) {
      bVar13 = FUN_01716be0();
      bVar5 = bVar13 ^ 1;
      uVar6 = (uint)bVar13 * 3 + 1;
      bVar13 = false;
    }
    else {
LAB_01791e89:
      local_31 = true;
      uVar6 = 2;
      bVar5 = 1;
      bVar13 = true;
    }
    goto LAB_01791e9a;
  case 5:
    uVar6 = 3;
    bVar13 = 0;
    goto LAB_01791e19;
  case 6:
    bVar5 = FUN_01716be0();
    bVar13 = bVar5 ^ 1;
    uVar6 = (uint)bVar5 * 3 + 2;
    bVar5 = 1;
    local_31 = (bool)bVar13;
    break;
  case 7:
LAB_01791e96:
    bVar5 = 1;
    uVar6 = 2;
    bVar13 = true;
    local_31 = true;
    goto LAB_01791e9a;
  case 8:
    bVar5 = FUN_01716be0();
LAB_01791e0a:
    bVar13 = bVar5 ^ 1;
    uVar6 = bVar5 | 2;
LAB_01791e19:
    bVar5 = 1;
    local_31 = true;
    break;
  case 9:
    bVar5 = FUN_01716be0();
    uVar6 = (uint)bVar5 * 3 + 1;
LAB_01791da3:
    bVar5 = bVar5 ^ 1;
    bVar13 = 0;
    local_31 = true;
    break;
  case 10:
    cVar11 = FUN_01716be0();
    bVar5 = 1;
    if (cVar11 == '\0') goto LAB_01791e96;
    bVar15 = (~*(ulonglong *)(*unaff_RDI + 0x18) & 0xf0000000000) != 0;
    bVar16 = param_2 != 1 && bVar15;
    local_31 = param_2 == 1 || !bVar15;
    uVar6 = (uint)bVar16 + (uint)bVar16 * 2 + 2;
    bVar13 = local_31;
    goto LAB_01791e9a;
  case 0xb:
    cVar11 = FUN_01716be0();
    local_31 = true;
    if (cVar11 == '\0') goto LAB_01791e89;
    uVar6 = 4;
    bVar5 = 0;
    bVar13 = false;
LAB_01791e9a:
    bVar4 = 1;
    break;
  default:
    bVar13 = 0;
    bVar5 = 1;
    local_31 = true;
    bVar4 = 0;
    uVar6 = 0;
  }
  if (((param_1 != (longlong *)0x0) && (bVar4 == 1 && *param_1 == 0)) &&
     (lVar1 = *unaff_RSI, lVar1 != *param_1)) {
    lVar2 = unaff_RSI[1];
    if (((char)lVar2 != '\0') && (lVar1 != 0)) {
      FUN_00d50b00();
    }
    *param_1 = lVar1;
    *(char *)(param_1 + 1) = (char)lVar2;
  }
  local_80 = param_2 != 1 | local_80;
  uVar14 = 2;
  if (local_80 == 0) {
    uVar14 = uVar6;
  }
  if (((local_80 == 1 && bVar13 == 0) &&
      (uVar14 = uVar6, (~*(ulonglong *)(*unaff_RDI + 0x18) & 0xf0000000000) != 0)) &&
     (((uint)*(ulonglong *)(*unaff_RDI + 0x18) & 0xf0000) != 0xf0000)) {
    if (local_40 == 0) {
      iVar7 = FUN_01715480();
    }
    else {
      iVar7 = FUN_01715480();
    }
    iVar8 = FUN_01715480();
    iVar7 = (iVar7 - iVar8) + -7;
    iVar7 = iVar7 + (((uint)(iVar7 / 6 + (iVar7 >> 0x1f)) >> 1) - (iVar7 >> 0x1f)) * -0xc;
    iVar7 = (iVar7 >> 0x1f & 0xcU) + iVar7;
    cVar11 = (char)iVar7;
    bVar16 = (bVar5 & local_31) == 0;
    uVar12 = 4;
    if (bVar16) {
      uVar12 = uVar6;
    }
    uVar14 = 5;
    if (bVar16) {
      uVar14 = uVar6;
    }
    if ((~(uint)(*(ulonglong *)(*unaff_RSI + 0x18) >> (cVar11 * '\x04' & 0x3fU)) & 0xf) != 0) {
      uVar14 = uVar12;
    }
    if (uVar14 == 5) {
      cVar11 = cVar11 + '\x06';
      uVar6 = cVar11 * 0x2b;
      cVar11 = cVar11 + ((char)((uVar6 & 0xffff) >> 0xf) + (char)(uVar6 >> 9)) * -0xc;
      iVar7 = cVar11 + 0xc;
      if (-1 < cVar11) {
        iVar7 = (int)cVar11;
      }
    }
    if ((param_1 != (longlong *)0x0) &&
       (uVar6 = (uint)(*(ulonglong *)(*unaff_RSI + 0x18) >> ((byte)(iVar7 << 2) & 0x3f)),
       (~uVar6 & 0xf) != 0)) {
      uVar6 = uVar6 & 0xf;
      uVar12 = 0xffffffff;
      if (uVar6 != 0xf) {
        uVar12 = uVar6;
      }
      FUN_01791120(2,uVar12);
      lVar1 = *param_1;
      if (lVar1 == local_78) {
        if (((char)param_1[1] != '\0') || (local_78 == 0)) {
          if ((local_70 != '\0') && (local_78 != 0)) {
            FUN_00d50b20();
          }
          goto LAB_017920dd;
        }
        if (local_70 == '\0') {
          FUN_00d50b00();
        }
      }
      else {
        lVar2 = param_1[1];
        if (local_70 == '\0') {
          if (local_78 != 0) {
            FUN_00d50b00();
          }
          *param_1 = local_78;
          if (((char)lVar2 != '\0') && (lVar1 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          *param_1 = local_78;
          if (((char)lVar2 != '\0') && (lVar1 != 0)) {
            FUN_00d50b20();
          }
        }
      }
      *(undefined1 *)(param_1 + 1) = 1;
    }
  }
LAB_017920dd:
  if ((local_50 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  return uVar14;
}


