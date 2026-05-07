// Function: FUN_015c7140
// Address: 015c7140
// Size: 515 bytes
// Class: MUSpectralTimeSlice


/* WARNING: Removing unreachable block (ram,0x015c7341) */
/* WARNING: Removing unreachable block (ram,0x015c718c) */
/* WARNING: Removing unreachable block (ram,0x015c7195) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_015c7140(void)

{
  float *pfVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  ulonglong uVar16;
  longlong lVar17;
  longlong unaff_RSI;
  longlong lVar18;
  longlong *unaff_RDI;
  longlong lVar19;
  ulonglong uVar20;
  float fVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  longlong local_30;
  char local_28;
  
  lVar17 = *(longlong *)(unaff_RSI + 0x68);
  if (lVar17 != 0) goto LAB_015c7309;
  FUN_00c8e690();
  if ((local_28 == '\0') && (local_30 != 0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  lVar17 = *(longlong *)(unaff_RSI + 0x68);
  if (lVar17 == local_30) {
    if (local_30 != 0) {
      FUN_00d50b20();
    }
  }
  else {
    *(longlong *)(unaff_RSI + 0x68) = local_30;
    if (lVar17 != 0) {
      FUN_00d50b20();
    }
  }
  iVar15 = _UNK_023de2dc;
  iVar14 = _UNK_023de2d8;
  iVar13 = _UNK_023de2d4;
  iVar12 = _DAT_023de2d0;
  iVar11 = _UNK_023de2cc;
  iVar10 = _UNK_023de2c8;
  iVar9 = _UNK_023de2c4;
  iVar8 = _DAT_023de2c0;
  iVar7 = _UNK_023de2bc;
  iVar6 = _UNK_023de2b8;
  iVar5 = _UNK_023de2b4;
  iVar4 = _DAT_023de2b0;
  iVar29 = _UNK_0239418c;
  iVar27 = _UNK_02394188;
  iVar25 = _UNK_02394184;
  iVar23 = _DAT_02394180;
  uVar2 = *(uint *)(unaff_RSI + 0x24);
  if ((int)uVar2 < 1) {
    lVar17 = *(longlong *)(unaff_RSI + 0x68);
    goto LAB_015c7309;
  }
  fVar21 = DAT_02394278 / *(float *)(unaff_RSI + 0x2c);
  lVar17 = *(longlong *)(unaff_RSI + 0x68);
  lVar3 = *(longlong *)(lVar17 + 0x10);
  if (uVar2 < 8) {
    uVar16 = 0;
  }
  else {
    uVar16 = (ulonglong)(uVar2 & 0xfffffff8);
    uVar20 = (uVar16 - 8 >> 3) + 1;
    iVar22 = _DAT_0238fcc0;
    iVar24 = _UNK_0238fcc4;
    iVar26 = _UNK_0238fcc8;
    iVar28 = _UNK_0238fccc;
    if (uVar16 - 8 == 0) {
      lVar19 = 0;
LAB_015c72c8:
      iVar23 = iVar22 + _DAT_02394180;
      iVar25 = iVar24 + _UNK_02394184;
      iVar27 = iVar26 + _UNK_02394188;
      iVar29 = iVar28 + _UNK_0239418c;
      pfVar1 = (float *)(lVar3 + lVar19 * 4);
      *pfVar1 = (float)iVar22 * fVar21;
      pfVar1[1] = (float)iVar24 * fVar21;
      pfVar1[2] = (float)iVar26 * fVar21;
      pfVar1[3] = (float)iVar28 * fVar21;
      pfVar1 = (float *)(lVar3 + 0x10 + lVar19 * 4);
      *pfVar1 = (float)iVar23 * fVar21;
      pfVar1[1] = (float)iVar25 * fVar21;
      pfVar1[2] = (float)iVar27 * fVar21;
      pfVar1[3] = (float)iVar29 * fVar21;
    }
    else {
      lVar18 = -(uVar20 & 0xfffffffffffffffe);
      lVar19 = 0;
      do {
        pfVar1 = (float *)(lVar3 + lVar19 * 4);
        *pfVar1 = (float)iVar22 * fVar21;
        pfVar1[1] = (float)iVar24 * fVar21;
        pfVar1[2] = (float)iVar26 * fVar21;
        pfVar1[3] = (float)iVar28 * fVar21;
        pfVar1 = (float *)(lVar3 + 0x10 + lVar19 * 4);
        *pfVar1 = (float)(iVar22 + iVar23) * fVar21;
        pfVar1[1] = (float)(iVar24 + iVar25) * fVar21;
        pfVar1[2] = (float)(iVar26 + iVar27) * fVar21;
        pfVar1[3] = (float)(iVar28 + iVar29) * fVar21;
        pfVar1 = (float *)(lVar3 + 0x20 + lVar19 * 4);
        *pfVar1 = (float)(iVar22 + iVar4) * fVar21;
        pfVar1[1] = (float)(iVar24 + iVar5) * fVar21;
        pfVar1[2] = (float)(iVar26 + iVar6) * fVar21;
        pfVar1[3] = (float)(iVar28 + iVar7) * fVar21;
        pfVar1 = (float *)(lVar3 + 0x30 + lVar19 * 4);
        *pfVar1 = (float)(iVar22 + iVar8) * fVar21;
        pfVar1[1] = (float)(iVar24 + iVar9) * fVar21;
        pfVar1[2] = (float)(iVar26 + iVar10) * fVar21;
        pfVar1[3] = (float)(iVar28 + iVar11) * fVar21;
        lVar19 = lVar19 + 0x10;
        iVar22 = iVar22 + iVar12;
        iVar24 = iVar24 + iVar13;
        iVar26 = iVar26 + iVar14;
        iVar28 = iVar28 + iVar15;
        lVar18 = lVar18 + 2;
      } while (lVar18 != 0);
      if ((uVar20 & 1) != 0) goto LAB_015c72c8;
    }
    if (uVar16 == uVar2) goto LAB_015c7309;
  }
  do {
    *(float *)(lVar3 + uVar16 * 4) = (float)(int)uVar16 * fVar21;
    uVar16 = uVar16 + 1;
  } while (uVar2 != uVar16);
LAB_015c7309:
  *(undefined1 *)(unaff_RDI + 1) = 0;
  if (lVar17 != 0) {
    FUN_00d50b00();
  }
  *unaff_RDI = lVar17;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}


