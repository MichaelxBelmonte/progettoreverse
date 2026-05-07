// Function: FUN_01483650
// Address: 01483650
// Size: 515 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x014836cd) */
/* WARNING: Removing unreachable block (ram,0x014836d6) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01483650(void)

{
  float *pfVar1;
  int iVar2;
  int iVar3;
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
  int iVar16;
  int iVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined8 uVar26;
  longlong lVar27;
  longlong lVar28;
  longlong *unaff_RDI;
  int iVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  longlong local_38;
  char local_30;
  
  lVar28 = DAT_028acf18;
  if ((DAT_028acf18 == 0) || (DAT_028acf21 == '\0')) {
    FUN_00e8cb50();
    if (DAT_028acf18 == 0) {
      FUN_00c8e690();
      if ((local_30 == '\0') && (local_38 != 0)) {
        FUN_00d50b00();
      }
      FUN_00c92170();
      FUN_00c92160();
      lVar28 = DAT_028acf18;
      if ((DAT_028acf18 != local_38) && (DAT_028acf18 = local_38, lVar28 != 0)) {
        FUN_00d50b20();
      }
      if (local_38 != 0) {
        if (DAT_028acf20 == '\0') {
          DAT_028acf20 = '\x01';
          FUN_00e8cb90();
        }
        if (local_38 != 0 && lVar28 == local_38) {
          FUN_00d50b20();
        }
      }
      fVar25 = _UNK_0240e1dc;
      fVar24 = _UNK_0240e1d8;
      fVar23 = _UNK_0240e1d4;
      fVar22 = _DAT_0240e1d0;
      fVar21 = _UNK_0240e1cc;
      fVar20 = _UNK_0240e1c8;
      fVar19 = _UNK_0240e1c4;
      fVar18 = _DAT_0240e1c0;
      iVar17 = _UNK_023de2dc;
      iVar16 = _UNK_023de2d8;
      iVar15 = _UNK_023de2d4;
      iVar14 = _DAT_023de2d0;
      iVar13 = _UNK_023de2cc;
      iVar12 = _UNK_023de2c8;
      iVar11 = _UNK_023de2c4;
      iVar10 = _DAT_023de2c0;
      iVar9 = _UNK_023de2bc;
      iVar8 = _UNK_023de2b8;
      iVar7 = _UNK_023de2b4;
      iVar6 = _DAT_023de2b0;
      iVar5 = _UNK_0239418c;
      iVar4 = _UNK_02394188;
      iVar3 = _UNK_02394184;
      iVar2 = _DAT_02394180;
      lVar28 = *(longlong *)(DAT_028acf18 + 0x10);
      lVar27 = 0xc;
      iVar29 = _DAT_0238fcc0;
      iVar30 = _UNK_0238fcc4;
      iVar31 = _UNK_0238fcc8;
      iVar32 = _UNK_0238fccc;
      do {
        pfVar1 = (float *)(lVar28 + -0x30 + lVar27 * 4);
        *pfVar1 = (float)iVar29 * fVar18 + fVar22;
        pfVar1[1] = (float)iVar30 * fVar19 + fVar23;
        pfVar1[2] = (float)iVar31 * fVar20 + fVar24;
        pfVar1[3] = (float)iVar32 * fVar21 + fVar25;
        pfVar1 = (float *)(lVar28 + -0x20 + lVar27 * 4);
        *pfVar1 = (float)(iVar29 + iVar2) * fVar18 + fVar22;
        pfVar1[1] = (float)(iVar30 + iVar3) * fVar19 + fVar23;
        pfVar1[2] = (float)(iVar31 + iVar4) * fVar20 + fVar24;
        pfVar1[3] = (float)(iVar32 + iVar5) * fVar21 + fVar25;
        pfVar1 = (float *)(lVar28 + -0x10 + lVar27 * 4);
        *pfVar1 = (float)(iVar29 + iVar6) * fVar18 + fVar22;
        pfVar1[1] = (float)(iVar30 + iVar7) * fVar19 + fVar23;
        pfVar1[2] = (float)(iVar31 + iVar8) * fVar20 + fVar24;
        pfVar1[3] = (float)(iVar32 + iVar9) * fVar21 + fVar25;
        pfVar1 = (float *)(lVar28 + lVar27 * 4);
        *pfVar1 = (float)(iVar29 + iVar10) * fVar18 + fVar22;
        pfVar1[1] = (float)(iVar30 + iVar11) * fVar19 + fVar23;
        pfVar1[2] = (float)(iVar31 + iVar12) * fVar20 + fVar24;
        pfVar1[3] = (float)(iVar32 + iVar13) * fVar21 + fVar25;
        uVar26 = _UNK_0240e1e8;
        iVar29 = iVar29 + iVar14;
        iVar30 = iVar30 + iVar15;
        iVar31 = iVar31 + iVar16;
        iVar32 = iVar32 + iVar17;
        lVar27 = lVar27 + 0x10;
      } while (lVar27 != 0x7ec);
      *(undefined8 *)(lVar28 + 0x1f80) = _DAT_0240e1e0;
      *(undefined8 *)(&DAT_00001f88 + lVar28) = uVar26;
      DAT_028acf21 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028acf21 = '\x01';
      FUN_00e8cb70();
    }
    lVar28 = DAT_028acf18;
    *(undefined1 *)(unaff_RDI + 1) = 0;
    if (lVar28 == 0) {
      lVar28 = 0;
      goto LAB_01483835;
    }
  }
  else {
    *(undefined1 *)(unaff_RDI + 1) = 0;
  }
  FUN_00d50b00();
LAB_01483835:
  *unaff_RDI = lVar28;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}


