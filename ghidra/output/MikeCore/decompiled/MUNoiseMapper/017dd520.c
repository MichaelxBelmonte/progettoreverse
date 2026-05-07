// Function: FUN_017dd520
// Address: 017dd520
// Size: 915 bytes
// Class: MUNoiseMapper


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float FUN_017dd520(longlong *param_1,longlong *param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong *unaff_RSI;
  longlong lVar9;
  longlong lVar10;
  longlong *unaff_RDI;
  int iVar11;
  uint uVar12;
  bool bVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  int local_50;
  uint local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  
  iVar2 = FUN_01715480();
  iVar8 = 0;
  local_38 = 0;
  local_3c = 0;
  local_34 = 0;
  local_40 = 0;
  local_48 = 0;
  local_44 = 0;
  local_4c = 0xffffffff;
  iVar11 = 0;
LAB_017dd5a8:
  iVar6 = iVar11 - iVar2;
  iVar6 = iVar6 + (((uint)(iVar6 / 6 + (iVar6 >> 0x1f)) >> 1) - (iVar6 >> 0x1f)) * -0xc;
  uVar12 = (uint)(*(ulonglong *)(*param_2 + 0x18) >>
                 ((((byte)(iVar6 >> 0x1f) & 0xc) + (char)iVar6) * '\x04' & 0x3f)) & 0xf;
  if (uVar12 == 0xf) {
    uVar12 = 0xffffffff;
  }
  uVar3 = 0;
  switch(uVar12) {
  case 0:
  case 2:
  case 4:
    break;
  default:
    if ((int)local_4c < (int)uVar12) {
      local_4c = uVar12;
      local_50 = iVar11;
    }
    if ((uVar12 < 0xd) && ((0x1520U >> (uVar12 & 0x1f) & 1) != 0)) {
      local_48 = local_48 + 1;
      uVar3 = 1;
    }
    else {
      uVar3 = (uint)((uVar12 & 0xfffffffd) == 1);
      local_44 = local_44 + uVar3;
    }
    break;
  case 0xffffffff:
    goto switchD_017dd612_caseD_ffffffff;
  }
  iVar8 = iVar8 + 1;
  iVar6 = *(int *)(*param_1 + 0x18);
  iVar7 = iVar6 + 3;
  if (-1 < iVar6) {
    iVar7 = iVar6;
  }
  if (3 < iVar6) {
    lVar9 = 0;
    do {
      if (*(int *)(*(longlong *)(*param_1 + 0x10) + lVar9 * 4) == iVar11) {
        local_38 = local_38 + 1;
        local_3c = local_3c + uVar3;
        goto switchD_017dd612_caseD_ffffffff;
      }
      lVar9 = lVar9 + 1;
    } while (iVar7 >> 2 != (int)lVar9);
  }
  if (((*unaff_RDI == 0) || (*unaff_RSI == 0)) || (cVar1 = FUN_01716e70(), cVar1 == '\0')) {
LAB_017dd770:
    if ((uVar12 < 5) && ((0x15U >> (uVar12 & 0x1f) & 1) != 0)) {
      local_40 = local_40 + 1;
    }
  }
  else {
    lVar9 = *unaff_RSI;
    iVar4 = FUN_01717260();
    iVar5 = FUN_01715480();
    iVar6 = *(int *)(lVar9 + 0x18);
    iVar7 = iVar6 + 3;
    if (-1 < iVar6) {
      iVar7 = iVar6;
    }
    if (3 < iVar6) {
      iVar5 = iVar5 + iVar4;
      iVar5 = iVar5 + (((uint)(iVar5 / 6 + (iVar5 >> 0x1f)) >> 1) - (iVar5 >> 0x1f)) * -0xc;
      lVar10 = 0;
      do {
        if (*(int *)(*(longlong *)(lVar9 + 0x10) + lVar10 * 4) == (iVar5 >> 0x1f & 0xcU) + iVar5)
        goto LAB_017dd770;
        lVar10 = lVar10 + 1;
      } while (iVar7 >> 2 != (int)lVar10);
    }
    local_34 = local_34 + 1;
  }
switchD_017dd612_caseD_ffffffff:
  iVar11 = iVar11 + 1;
  if (iVar11 == 0xc) goto LAB_017dd78d;
  goto LAB_017dd5a8;
LAB_017dd78d:
  if (local_4c == 0xffffffff) {
    bVar13 = false;
  }
  else {
    iVar2 = *(int *)(*param_1 + 0x18);
    iVar11 = iVar2 + 3;
    if (-1 < iVar2) {
      iVar11 = iVar2;
    }
    iVar6 = -1;
    if (3 < iVar2) {
      lVar9 = 0;
      do {
        if (*(int *)(*(longlong *)(*param_1 + 0x10) + lVar9 * 4) == local_50) {
          iVar6 = (int)lVar9;
          break;
        }
        lVar9 = lVar9 + 1;
      } while (iVar11 >> 2 != (int)lVar9);
    }
    bVar13 = iVar6 != -1;
  }
  fVar15 = DAT_02391090;
  if (local_48 == 0 && local_44 == 0) {
    fVar15 = 0.0;
  }
  fVar16 = DAT_028af48c;
  if (!bVar13) {
    fVar16 = 0.0;
  }
  fVar14 = 0.0;
  if (local_4c != 0xffffffff) {
    fVar14 = DAT_028af48c;
  }
  return ((float)local_3c * DAT_02391090 +
         fVar15 * (float)local_40 + (float)local_34 * _DAT_028af488 + (float)local_38 + fVar16) /
         ((float)(local_48 + local_44) * DAT_02391090 + fVar14 + (float)iVar8);
}


