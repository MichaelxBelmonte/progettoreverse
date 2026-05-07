// Function: FUN_00efaf33
// Address: 00efaf33
// Size: 2094 bytes
// Class: GNInt
// String references:
//   "crypto/bio/bio_meth.c"


longlong FUN_00efaf33(int param_1,uint *param_2,int param_3,int param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  int iVar10;
  longlong unaff_RSI;
  ulonglong uVar11;
  int iVar12;
  undefined8 *unaff_RDI;
  ulonglong uVar13;
  uint uVar14;
  longlong lVar15;
  int local_res8;
  
  if (((*(int *)((longlong)unaff_RDI + 0x8c) == 0) || (local_res8 != 0)) &&
     ((param_2[6] == 1 || ((param_2[6] - 3 < 3 && (param_1 == 1)))))) {
    lVar5 = 0;
  }
  else {
    lVar5 = 4L << ((byte)param_2[1] & 0x3f);
  }
  lVar15 = 1L << ((byte)param_2[2] & 0x3f);
  uVar14 = 0;
  if ((local_res8 == 1) && (uVar14 = 0, param_2[4] == 3)) {
    uVar14 = 0x11;
    if (*param_2 < 0x11) {
      uVar14 = *param_2;
    }
  }
  if (param_4 == 1) {
    unaff_RDI[4] = 0;
    iVar10 = 0x2009a1e;
    unaff_RDI[1] = " ";
    unaff_RDI[2] = " ";
    iVar12 = 0x2009a20;
    *unaff_RDI = "crypto/bio/bio_meth.c";
    uVar11 = *(ulonglong *)(unaff_RSI + 0x10);
    *(ulonglong *)(unaff_RSI + 0x20) = uVar11;
  }
  else {
    iVar12 = (int)*unaff_RDI;
    iVar10 = (int)unaff_RDI[1];
    uVar11 = *(ulonglong *)(unaff_RSI + 0x10);
  }
  *(uint *)(unaff_RDI + 6) = uVar14;
  *(undefined4 *)((longlong)unaff_RDI + 300) = 0;
  iVar12 = iVar12 - iVar10;
  *(int *)((longlong)unaff_RDI + 0x1c) = iVar12;
  *(int *)(unaff_RDI + 3) = iVar12;
  *(int *)((longlong)unaff_RDI + 0x2c) = iVar12;
  *(undefined4 *)(unaff_RDI + 5) = 0;
  *(undefined4 *)((longlong)unaff_RDI + 0xc4) = 0;
  unaff_RDI[0x1f] = 0;
  *(ulonglong *)(unaff_RSI + 0x18) = uVar11;
  if (*(int *)(unaff_RSI + 0x40) == 0) {
    *(ulonglong *)(unaff_RSI + 0x20) = uVar11;
    *(ulonglong *)(unaff_RSI + 0x30) = *(ulonglong *)(unaff_RSI + 8) & 0xffffffffffffffc0;
    uVar8 = (ulonglong)(-(int)uVar11 & 0x3f);
    uVar13 = uVar11 + uVar8;
    if (uVar13 <= *(ulonglong *)(unaff_RSI + 8)) {
      *(ulonglong *)(unaff_RSI + 0x10) = uVar13;
      *(ulonglong *)(unaff_RSI + 0x18) = uVar13;
      if (uVar8 != 0) {
        *(ulonglong *)(unaff_RSI + 0x20) = uVar13;
      }
      *(undefined4 *)(unaff_RSI + 0x40) = 1;
      uVar11 = uVar13;
      goto LAB_00efb102;
    }
    unaff_RDI[0xe] = 0;
    lVar1 = *(longlong *)(unaff_RSI + 0x10);
    *(longlong *)(unaff_RSI + 0x20) = lVar1;
    *(ulonglong *)(unaff_RSI + 0x30) = *(ulonglong *)(unaff_RSI + 8) & 0xffffffffffffffc0;
    uVar8 = (ulonglong)(-(int)lVar1 & 0x3f);
    uVar13 = lVar1 + uVar8;
    if (uVar13 <= *(ulonglong *)(unaff_RSI + 8)) {
      *(ulonglong *)(unaff_RSI + 0x10) = uVar13;
      *(ulonglong *)(unaff_RSI + 0x18) = uVar13;
      if (uVar8 != 0) {
        *(ulonglong *)(unaff_RSI + 0x20) = uVar13;
      }
      *(undefined4 *)(unaff_RSI + 0x40) = 1;
      goto LAB_00efb127;
    }
    uVar13 = 0;
    unaff_RDI[0x10] = 0;
    uVar8 = 4L << ((byte)uVar14 & 0x3f);
    if (uVar14 == 0) {
      uVar8 = uVar13;
    }
    lVar5 = *(longlong *)(unaff_RSI + 0x10);
    *(longlong *)(unaff_RSI + 0x20) = lVar5;
    *(ulonglong *)(unaff_RSI + 0x30) = *(ulonglong *)(unaff_RSI + 8) & 0xffffffffffffffc0;
    uVar9 = (ulonglong)(-(int)lVar5 & 0x3f);
    uVar6 = lVar5 + uVar9;
    if (uVar6 <= *(ulonglong *)(unaff_RSI + 8)) {
      *(ulonglong *)(unaff_RSI + 0x10) = uVar6;
      *(ulonglong *)(unaff_RSI + 0x18) = uVar6;
      if (uVar9 != 0) {
        *(ulonglong *)(unaff_RSI + 0x20) = uVar6;
      }
      *(undefined4 *)(unaff_RSI + 0x40) = 1;
      goto LAB_00efb158;
    }
  }
  else {
LAB_00efb102:
    uVar13 = lVar15 * 4 + uVar11;
    if (*(ulonglong *)(unaff_RSI + 0x28) < uVar13) {
      *(undefined1 *)(unaff_RSI + 0x38) = 1;
      uVar8 = 0;
      uVar13 = uVar11;
    }
    else {
      *(ulonglong *)(unaff_RSI + 0x18) = uVar13;
      uVar8 = uVar11;
    }
    unaff_RDI[0xe] = uVar8;
LAB_00efb127:
    uVar6 = lVar5 + uVar13;
    if (*(ulonglong *)(unaff_RSI + 0x28) < uVar6) {
      *(undefined1 *)(unaff_RSI + 0x38) = 1;
      uVar6 = uVar13;
      uVar13 = 0;
    }
    else {
      *(ulonglong *)(unaff_RSI + 0x18) = uVar6;
    }
    unaff_RDI[0x10] = uVar13;
    uVar8 = 0;
    if (uVar14 != 0) {
      uVar8 = 4L << ((byte)uVar14 & 0x3f);
    }
LAB_00efb158:
    uVar11 = uVar8 + uVar6;
    if (*(ulonglong *)(unaff_RSI + 0x28) < uVar11) {
      *(undefined1 *)(unaff_RSI + 0x38) = 1;
      uVar13 = 0;
      uVar11 = uVar6;
    }
    else {
      *(ulonglong *)(unaff_RSI + 0x18) = uVar11;
      uVar13 = uVar6;
    }
  }
  unaff_RDI[0xf] = uVar13;
  if (*(char *)(unaff_RSI + 0x38) != '\0') {
    return -0x40;
  }
  if (param_3 != 1) {
    uVar13 = *(ulonglong *)(unaff_RSI + 0x20);
    if (uVar13 < uVar11) {
      ___bzero();
      uVar11 = *(ulonglong *)(unaff_RSI + 0x18);
      uVar13 = *(ulonglong *)(unaff_RSI + 0x20);
    }
    if (uVar13 < uVar11) {
      *(ulonglong *)(unaff_RSI + 0x20) = uVar11;
    }
  }
  if ((param_2[6] - 3 < 3) && (param_1 == 1)) {
    uVar13 = lVar15 + 0x3fU & 0xffffffffffffffc0;
    uVar14 = *(uint *)(unaff_RSI + 0x40);
    if (local_res8 == 1) {
      if (uVar14 == 0) {
        lVar5 = *(longlong *)(unaff_RSI + 0x10);
        *(longlong *)(unaff_RSI + 0x20) = lVar5;
        *(ulonglong *)(unaff_RSI + 0x30) = *(ulonglong *)(unaff_RSI + 8) & 0xffffffffffffffc0;
        uVar8 = (ulonglong)(-(int)lVar5 & 0x3f);
        uVar11 = lVar5 + uVar8;
        if (uVar11 <= *(ulonglong *)(unaff_RSI + 8)) {
          *(ulonglong *)(unaff_RSI + 0x10) = uVar11;
          *(ulonglong *)(unaff_RSI + 0x18) = uVar11;
          if (uVar8 != 0) {
            *(ulonglong *)(unaff_RSI + 0x20) = uVar11;
          }
          *(undefined4 *)(unaff_RSI + 0x40) = 1;
          goto LAB_00efb233;
        }
LAB_00efb2fa:
        uVar13 = 0;
      }
      else {
LAB_00efb233:
        if (uVar13 == 0) goto LAB_00efb2fa;
        lVar5 = *(longlong *)(unaff_RSI + 0x28);
        uVar13 = lVar5 - uVar13;
        if (uVar13 < uVar11) {
          *(undefined1 *)(unaff_RSI + 0x38) = 1;
          goto LAB_00efb2fa;
        }
        if (uVar13 < *(ulonglong *)(unaff_RSI + 0x20)) {
          *(ulonglong *)(unaff_RSI + 0x20) = uVar13;
        }
        *(ulonglong *)(unaff_RSI + 0x28) = uVar13;
        if (lVar5 == 0) goto LAB_00efb2fa;
        if (uVar13 < *(ulonglong *)(unaff_RSI + 0x30)) {
          ___bzero();
          *(ulonglong *)(unaff_RSI + 0x30) = uVar13;
        }
      }
      unaff_RDI[7] = uVar13;
      uVar11 = unaff_RDI[0xc];
      uVar11 = ((uVar11 << 0x28 | uVar11 >> 0x18) ^ uVar11 ^ (uVar11 << 0xf | uVar11 >> 0x31)) *
               -0x604de39ae16720db;
      uVar11 = ((uVar11 >> 0x23) + 8 ^ uVar11) * -0x604de39ae16720db;
      uVar13 = (ulonglong)*(uint *)(unaff_RDI + 0xd);
      uVar13 = (uVar13 << 0xf ^ uVar13 ^
               (uVar13 << 0x28 | (ulonglong)(*(uint *)(unaff_RDI + 0xd) >> 0x18))) *
               -0x604de39ae16720db;
      uVar13 = ((uVar13 >> 0x23) + 4 ^ uVar13) * -0x604de39ae16720db;
      unaff_RDI[0xc] = uVar11 ^ uVar13 ^ uVar11 >> 0x1c ^ uVar13 >> 0x1c;
    }
    else {
      if (uVar14 < 2) {
        if (uVar14 != 0) {
LAB_00efb280:
          *(undefined4 *)(unaff_RSI + 0x40) = 2;
          goto LAB_00efb288;
        }
        lVar5 = *(longlong *)(unaff_RSI + 0x10);
        *(longlong *)(unaff_RSI + 0x20) = lVar5;
        *(ulonglong *)(unaff_RSI + 0x30) = *(ulonglong *)(unaff_RSI + 8) & 0xffffffffffffffc0;
        uVar8 = (ulonglong)(-(int)lVar5 & 0x3f);
        uVar11 = lVar5 + uVar8;
        if (uVar11 <= *(ulonglong *)(unaff_RSI + 8)) {
          *(ulonglong *)(unaff_RSI + 0x10) = uVar11;
          *(ulonglong *)(unaff_RSI + 0x18) = uVar11;
          if (uVar8 != 0) {
            *(ulonglong *)(unaff_RSI + 0x20) = uVar11;
          }
          goto LAB_00efb280;
        }
LAB_00efb3a8:
        uVar13 = 0;
      }
      else {
LAB_00efb288:
        if (uVar13 == 0) goto LAB_00efb3a8;
        uVar13 = *(longlong *)(unaff_RSI + 0x28) - uVar13;
        if (uVar13 < uVar11) {
          *(undefined1 *)(unaff_RSI + 0x38) = 1;
          goto LAB_00efb3a8;
        }
        if (uVar13 < *(ulonglong *)(unaff_RSI + 0x20)) {
          *(ulonglong *)(unaff_RSI + 0x20) = uVar13;
        }
        *(ulonglong *)(unaff_RSI + 0x28) = uVar13;
      }
      unaff_RDI[7] = uVar13;
      ___bzero();
      unaff_RDI[0xc] = 0;
    }
    uVar14 = 6;
    if (param_2[3] < 6) {
      uVar14 = param_2[3];
    }
    uVar7 = 4;
    if (4 < uVar14) {
      uVar7 = uVar14;
    }
    *(uint *)((longlong)unaff_RDI + 0x34) = param_2[2] - uVar7;
  }
  if ((local_res8 != 1) || (param_2[6] < 7)) goto LAB_00efb52a;
  if (*(uint *)(unaff_RSI + 0x40) < 2) {
    if (*(uint *)(unaff_RSI + 0x40) != 0) {
LAB_00efb40b:
      *(undefined4 *)(unaff_RSI + 0x40) = 2;
      goto LAB_00efb413;
    }
    lVar5 = *(longlong *)(unaff_RSI + 0x10);
    *(longlong *)(unaff_RSI + 0x20) = lVar5;
    *(ulonglong *)(unaff_RSI + 0x30) = *(ulonglong *)(unaff_RSI + 8) & 0xffffffffffffffc0;
    uVar13 = (ulonglong)(-(int)lVar5 & 0x3f);
    uVar11 = lVar5 + uVar13;
    if (uVar11 <= *(ulonglong *)(unaff_RSI + 8)) {
      *(ulonglong *)(unaff_RSI + 0x10) = uVar11;
      *(ulonglong *)(unaff_RSI + 0x18) = uVar11;
      if (uVar13 != 0) {
        *(ulonglong *)(unaff_RSI + 0x20) = uVar11;
      }
      goto LAB_00efb40b;
    }
    unaff_RDI[0x12] = 0;
    lVar5 = *(longlong *)(unaff_RSI + 0x10);
    *(longlong *)(unaff_RSI + 0x20) = lVar5;
    *(ulonglong *)(unaff_RSI + 0x30) = *(ulonglong *)(unaff_RSI + 8) & 0xffffffffffffffc0;
    uVar13 = (ulonglong)(-(int)lVar5 & 0x3f);
    uVar11 = lVar5 + uVar13;
    if (uVar11 <= *(ulonglong *)(unaff_RSI + 8)) {
      *(ulonglong *)(unaff_RSI + 0x10) = uVar11;
      *(ulonglong *)(unaff_RSI + 0x18) = uVar11;
      if (uVar13 != 0) {
        *(ulonglong *)(unaff_RSI + 0x20) = uVar11;
      }
      *(undefined4 *)(unaff_RSI + 0x40) = 2;
      goto LAB_00efb442;
    }
    unaff_RDI[0x13] = 0;
    lVar5 = *(longlong *)(unaff_RSI + 0x10);
    *(longlong *)(unaff_RSI + 0x20) = lVar5;
    *(ulonglong *)(unaff_RSI + 0x30) = *(ulonglong *)(unaff_RSI + 8) & 0xffffffffffffffc0;
    uVar13 = (ulonglong)(-(int)lVar5 & 0x3f);
    uVar11 = lVar5 + uVar13;
    if (uVar11 <= *(ulonglong *)(unaff_RSI + 8)) {
      *(ulonglong *)(unaff_RSI + 0x10) = uVar11;
      *(ulonglong *)(unaff_RSI + 0x18) = uVar11;
      if (uVar13 != 0) {
        *(ulonglong *)(unaff_RSI + 0x20) = uVar11;
      }
      *(undefined4 *)(unaff_RSI + 0x40) = 2;
      goto LAB_00efb471;
    }
    unaff_RDI[0x14] = 0;
    lVar5 = *(longlong *)(unaff_RSI + 0x10);
    *(longlong *)(unaff_RSI + 0x20) = lVar5;
    *(ulonglong *)(unaff_RSI + 0x30) = *(ulonglong *)(unaff_RSI + 8) & 0xffffffffffffffc0;
    uVar13 = (ulonglong)(-(int)lVar5 & 0x3f);
    uVar11 = lVar5 + uVar13;
    if (uVar11 <= *(ulonglong *)(unaff_RSI + 8)) {
      *(ulonglong *)(unaff_RSI + 0x10) = uVar11;
      *(ulonglong *)(unaff_RSI + 0x18) = uVar11;
      if (uVar13 != 0) {
        *(ulonglong *)(unaff_RSI + 0x20) = uVar11;
      }
      *(undefined4 *)(unaff_RSI + 0x40) = 2;
      goto LAB_00efb4a0;
    }
    unaff_RDI[0x15] = 0;
    lVar5 = *(longlong *)(unaff_RSI + 0x10);
    *(longlong *)(unaff_RSI + 0x20) = lVar5;
    *(ulonglong *)(unaff_RSI + 0x30) = *(ulonglong *)(unaff_RSI + 8) & 0xffffffffffffffc0;
    uVar13 = (ulonglong)(-(int)lVar5 & 0x3f);
    uVar11 = lVar5 + uVar13;
    if (uVar11 <= *(ulonglong *)(unaff_RSI + 8)) {
      *(ulonglong *)(unaff_RSI + 0x10) = uVar11;
      *(ulonglong *)(unaff_RSI + 0x18) = uVar11;
      if (uVar13 != 0) {
        *(ulonglong *)(unaff_RSI + 0x20) = uVar11;
      }
      *(undefined4 *)(unaff_RSI + 0x40) = 2;
      goto LAB_00efb4cc;
    }
    unaff_RDI[0x16] = 0;
    lVar5 = *(longlong *)(unaff_RSI + 0x10);
    *(longlong *)(unaff_RSI + 0x20) = lVar5;
    *(ulonglong *)(unaff_RSI + 0x30) = *(ulonglong *)(unaff_RSI + 8) & 0xffffffffffffffc0;
    uVar13 = (ulonglong)(-(int)lVar5 & 0x3f);
    uVar11 = lVar5 + uVar13;
    if (uVar11 <= *(ulonglong *)(unaff_RSI + 8)) {
      *(ulonglong *)(unaff_RSI + 0x10) = uVar11;
      *(ulonglong *)(unaff_RSI + 0x18) = uVar11;
      if (uVar13 != 0) {
        *(ulonglong *)(unaff_RSI + 0x20) = uVar11;
      }
      *(undefined4 *)(unaff_RSI + 0x40) = 2;
      goto LAB_00efb4fb;
    }
LAB_00efb511:
    uVar11 = 0;
  }
  else {
LAB_00efb413:
    uVar11 = *(longlong *)(unaff_RSI + 0x28) - 0x400;
    if (uVar11 < *(ulonglong *)(unaff_RSI + 0x18)) {
      *(undefined1 *)(unaff_RSI + 0x38) = 1;
      uVar11 = 0;
    }
    else {
      if (uVar11 < *(ulonglong *)(unaff_RSI + 0x20)) {
        *(ulonglong *)(unaff_RSI + 0x20) = uVar11;
      }
      *(ulonglong *)(unaff_RSI + 0x28) = uVar11;
    }
    unaff_RDI[0x12] = uVar11;
LAB_00efb442:
    uVar11 = *(longlong *)(unaff_RSI + 0x28) - 0xc0;
    if (uVar11 < *(ulonglong *)(unaff_RSI + 0x18)) {
      *(undefined1 *)(unaff_RSI + 0x38) = 1;
      uVar11 = 0;
    }
    else {
      if (uVar11 < *(ulonglong *)(unaff_RSI + 0x20)) {
        *(ulonglong *)(unaff_RSI + 0x20) = uVar11;
      }
      *(ulonglong *)(unaff_RSI + 0x28) = uVar11;
    }
    unaff_RDI[0x13] = uVar11;
LAB_00efb471:
    uVar11 = *(longlong *)(unaff_RSI + 0x28) - 0x100;
    if (uVar11 < *(ulonglong *)(unaff_RSI + 0x18)) {
      *(undefined1 *)(unaff_RSI + 0x38) = 1;
      uVar11 = 0;
    }
    else {
      if (uVar11 < *(ulonglong *)(unaff_RSI + 0x20)) {
        *(ulonglong *)(unaff_RSI + 0x20) = uVar11;
      }
      *(ulonglong *)(unaff_RSI + 0x28) = uVar11;
    }
    unaff_RDI[0x14] = uVar11;
LAB_00efb4a0:
    uVar11 = *(longlong *)(unaff_RSI + 0x28) - 0x80;
    if (uVar11 < *(ulonglong *)(unaff_RSI + 0x18)) {
      *(undefined1 *)(unaff_RSI + 0x38) = 1;
      uVar11 = 0;
    }
    else {
      if (uVar11 < *(ulonglong *)(unaff_RSI + 0x20)) {
        *(ulonglong *)(unaff_RSI + 0x20) = uVar11;
      }
      *(ulonglong *)(unaff_RSI + 0x28) = uVar11;
    }
    unaff_RDI[0x15] = uVar11;
LAB_00efb4cc:
    uVar11 = *(longlong *)(unaff_RSI + 0x28) - 0x8040;
    if (uVar11 < *(ulonglong *)(unaff_RSI + 0x18)) {
      *(undefined1 *)(unaff_RSI + 0x38) = 1;
      uVar11 = 0;
    }
    else {
      if (uVar11 < *(ulonglong *)(unaff_RSI + 0x20)) {
        *(ulonglong *)(unaff_RSI + 0x20) = uVar11;
      }
      *(ulonglong *)(unaff_RSI + 0x28) = uVar11;
    }
    unaff_RDI[0x16] = uVar11;
LAB_00efb4fb:
    uVar11 = *(longlong *)(unaff_RSI + 0x28) - 0x1c040;
    if (uVar11 < *(ulonglong *)(unaff_RSI + 0x18)) {
      *(undefined1 *)(unaff_RSI + 0x38) = 1;
      goto LAB_00efb511;
    }
    if (uVar11 < *(ulonglong *)(unaff_RSI + 0x20)) {
      *(ulonglong *)(unaff_RSI + 0x20) = uVar11;
    }
    *(ulonglong *)(unaff_RSI + 0x28) = uVar11;
  }
  unaff_RDI[0x17] = uVar11;
LAB_00efb52a:
  uVar2 = *(undefined8 *)param_2;
  uVar3 = *(undefined8 *)(param_2 + 2);
  uVar4 = *(undefined8 *)(param_2 + 5);
  *(undefined8 *)((longlong)unaff_RDI + 0x10c) = *(undefined8 *)(param_2 + 3);
  *(undefined8 *)((longlong)unaff_RDI + 0x114) = uVar4;
  unaff_RDI[0x20] = uVar2;
  unaff_RDI[0x21] = uVar3;
  return (ulonglong)(*(char *)(unaff_RSI + 0x38) == '\0') * 0x40 + -0x40;
}


