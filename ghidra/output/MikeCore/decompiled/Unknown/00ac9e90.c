// Function: FUN_00ac9e90
// Address: 00ac9e90
// Size: 664 bytes
// Class: Unknown


longlong FUN_00ac9e90(void)

{
  byte *pbVar1;
  byte bVar2;
  longlong lVar3;
  byte *pbVar4;
  byte *pbVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  byte *pbVar11;
  byte *pbVar12;
  ulonglong uVar13;
  byte *unaff_RDI;
  bool bVar14;
  
  bVar2 = *unaff_RDI;
  if ((bVar2 & 1) == 0) {
    uVar13 = (ulonglong)(bVar2 >> 1);
    if (uVar13 != 2) goto LAB_00ac9eab;
LAB_00ac9ec7:
    pbVar4 = *(byte **)(unaff_RDI + 0x10);
    pbVar5 = unaff_RDI + 1;
    if ((bVar2 & 1) != 0) {
      pbVar5 = pbVar4;
    }
    if ((*pbVar5 != 0x2f) || (pbVar5[1] != 0x2f)) goto LAB_00ac9ee8;
LAB_00ac9f51:
    uVar7 = 0;
    if ((bVar2 & 1) != 0) goto LAB_00ac9f59;
LAB_00ac9fba:
    if (bVar2 >> 1 != 0) goto LAB_00ac9fc5;
LAB_00ac9f62:
    bVar14 = true;
    if (uVar7 != 2) goto LAB_00ac9f6b;
LAB_00ac9fdf:
    pbVar5 = unaff_RDI + 1;
    if ((bVar2 & 1) != 0) {
      pbVar5 = pbVar4;
    }
    if ((*pbVar5 == 0x2f) && (pbVar5[1] == 0x2f)) goto LAB_00aca054;
LAB_00ac9ffd:
    pbVar5 = unaff_RDI + 1;
    if ((bVar2 & 1) != 0) {
      pbVar5 = pbVar4;
    }
    if (*pbVar5 != 0x2f) goto LAB_00aca054;
    uVar13 = 0;
    lVar6 = 1;
  }
  else {
    uVar13 = *(ulonglong *)(unaff_RDI + 8);
    if (uVar13 == 2) goto LAB_00ac9ec7;
LAB_00ac9eab:
    if (uVar13 == 0) {
      pbVar4 = *(byte **)(unaff_RDI + 0x10);
      uVar7 = 0xffffffffffffffff;
LAB_00ac9f03:
      if ((bVar2 & 1) == 0) {
        pbVar5 = unaff_RDI + 1;
        uVar10 = (ulonglong)(bVar2 >> 1);
      }
      else {
        uVar10 = *(ulonglong *)(unaff_RDI + 8);
        pbVar5 = pbVar4;
      }
      if (uVar10 <= uVar7) {
        uVar13 = uVar10;
      }
      do {
        uVar10 = uVar13;
        uVar7 = 0;
        if (uVar10 == 0) goto LAB_00ac9fb4;
        uVar13 = uVar10 - 1;
      } while (pbVar5[uVar10 - 1] != 0x2f);
      if ((uVar13 == 0xffffffffffffffff) || ((uVar7 = uVar10, uVar13 == 1 && (*pbVar5 == 0x2f))))
      goto LAB_00ac9f51;
    }
    else {
      pbVar4 = *(byte **)(unaff_RDI + 0x10);
LAB_00ac9ee8:
      uVar7 = uVar13 - 1;
      pbVar5 = unaff_RDI + 1;
      if ((bVar2 & 1) != 0) {
        pbVar5 = pbVar4;
      }
      if (pbVar5[uVar13 - 1] != 0x2f) goto LAB_00ac9f03;
    }
LAB_00ac9fb4:
    if ((bVar2 & 1) == 0) goto LAB_00ac9fba;
LAB_00ac9f59:
    if (*(longlong *)(unaff_RDI + 8) == 0) goto LAB_00ac9f62;
LAB_00ac9fc5:
    pbVar5 = unaff_RDI + 1;
    if ((bVar2 & 1) != 0) {
      pbVar5 = pbVar4;
    }
    bVar14 = pbVar5[uVar7] != 0x2f;
    if (uVar7 == 2) goto LAB_00ac9fdf;
LAB_00ac9f6b:
    if (3 < uVar7) {
      pbVar5 = unaff_RDI + 1;
      if ((bVar2 & 1) != 0) {
        pbVar5 = pbVar4;
      }
      if (((*pbVar5 != 0x2f) || (pbVar5[1] != 0x2f)) || (pbVar5[2] == 0x2f)) goto LAB_00ac9ffd;
      if ((bVar2 & 1) == 0) {
        uVar13 = (ulonglong)(bVar2 >> 1);
      }
      else {
        uVar13 = *(ulonglong *)(unaff_RDI + 8);
      }
      uVar10 = 0xffffffffffffffff;
      if (2 < uVar13) {
        lVar6 = uVar13 - 3;
        pbVar11 = pbVar5 + 2;
        do {
          pbVar12 = pbVar5 + uVar13;
          if (lVar6 == 0) break;
          lVar6 = lVar6 + -1;
          pbVar1 = pbVar11 + 1;
          pbVar12 = pbVar11 + 1;
          pbVar11 = pbVar12;
        } while (*pbVar1 != 0x2f);
        uVar10 = 0xffffffffffffffff;
        if (pbVar12 != pbVar5 + uVar13) {
          uVar10 = (longlong)pbVar12 - (longlong)pbVar5;
        }
      }
      uVar13 = 0xffffffffffffffff;
      if (uVar10 < uVar7) {
        uVar13 = uVar10;
      }
      lVar6 = uVar13 + 1;
      goto joined_r0x00aca11d;
    }
    if (uVar7 != 0) goto LAB_00ac9ffd;
LAB_00aca054:
    uVar13 = 0xffffffffffffffff;
    lVar6 = 0;
  }
joined_r0x00aca11d:
  lVar8 = uVar7 + 1;
  if ((bVar2 & 1) == 0) {
    do {
      if (lVar8 == 1) goto LAB_00aca08d;
      lVar9 = lVar6;
    } while ((lVar8 - uVar13 != 2) &&
            (lVar3 = lVar8 + -1, lVar8 = lVar8 + -1, lVar9 = lVar8, unaff_RDI[lVar3] == 0x2f));
  }
  else {
    do {
      if (lVar8 == 1) goto LAB_00aca08d;
      lVar9 = lVar6;
    } while ((lVar8 - uVar13 != 2) &&
            (lVar3 = lVar8 + -2, lVar9 = lVar8 + -1, lVar8 = lVar9, pbVar4[lVar3] == 0x2f));
  }
LAB_00aca094:
  lVar6 = -1;
  if (uVar13 != 0 || lVar9 != 1) {
    lVar6 = lVar9;
  }
  if (bVar14) {
    lVar6 = lVar9;
  }
  return lVar6;
LAB_00aca08d:
  lVar9 = 0;
  goto LAB_00aca094;
}


