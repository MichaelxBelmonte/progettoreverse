// Function: FUN_00f427a0
// Address: 00f427a0
// Size: 1066 bytes
// Class: Unknown


ulonglong FUN_00f427a0(undefined8 param_1,undefined *param_2)

{
  undefined *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  byte *unaff_RSI;
  ulonglong unaff_RDI;
  ulonglong uVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  
  uVar13 = unaff_RDI & 0xffff;
  uVar2 = unaff_RDI >> 0x10 & 0xffff;
  if (param_2 == (undefined *)0x1) {
    uVar4 = uVar13 + *unaff_RSI;
    uVar13 = (uVar13 - 0xfff1) + (ulonglong)*unaff_RSI;
    if (uVar4 < 0xfff1) {
      uVar13 = uVar4;
    }
    uVar3 = (uVar2 + uVar13) * 0x10000;
    uVar4 = uVar3 - 0xfff10000;
    if (uVar2 + uVar13 < 0xfff1) {
      uVar4 = uVar3;
    }
    return uVar4 | uVar13;
  }
  if (unaff_RSI == (byte *)0x0) {
    return 1;
  }
  if (param_2 < (undefined *)0x10) {
    if (param_2 != (undefined *)0x0) {
      puVar1 = param_2 + -1;
      if (((ulonglong)param_2 & 3) != 0) {
        uVar4 = 0;
        do {
          uVar13 = uVar13 + unaff_RSI[uVar4];
          uVar2 = uVar2 + uVar13;
          uVar4 = uVar4 + 1;
        } while (((ulonglong)param_2 & 3) != uVar4);
        param_2 = param_2 + -uVar4;
        unaff_RSI = unaff_RSI + uVar4;
      }
      if ((undefined *)0x2 < puVar1) {
        puVar1 = (undefined *)0x0;
        do {
          lVar5 = unaff_RSI[(longlong)puVar1] + uVar13;
          lVar14 = (ulonglong)unaff_RSI[(longlong)(puVar1 + 1)] + lVar5;
          lVar6 = (ulonglong)unaff_RSI[(longlong)(puVar1 + 2)] + lVar14;
          uVar13 = (ulonglong)unaff_RSI[(longlong)(puVar1 + 3)] + lVar6;
          uVar2 = uVar2 + lVar5 + lVar14 + lVar6 + uVar13;
          puVar1 = puVar1 + 4;
        } while (param_2 != puVar1);
      }
    }
    uVar4 = uVar13 - 0xfff1;
    if (uVar13 < 0xfff1) {
      uVar4 = uVar13;
    }
    return uVar2 % 0xfff1 << 0x10 | uVar4;
  }
  if (param_2 < &DAT_000015b0) {
LAB_00f42a40:
    do {
      param_2 = param_2 + -0x10;
      lVar5 = *unaff_RSI + uVar13;
      lVar12 = (ulonglong)unaff_RSI[1] + lVar5;
      lVar6 = (ulonglong)unaff_RSI[2] + lVar12;
      lVar15 = (ulonglong)unaff_RSI[3] + lVar6;
      lVar14 = (ulonglong)unaff_RSI[4] + lVar15;
      lVar16 = (ulonglong)unaff_RSI[5] + lVar14;
      lVar7 = (ulonglong)unaff_RSI[6] + lVar16;
      lVar17 = (ulonglong)unaff_RSI[7] + lVar7;
      lVar8 = (ulonglong)unaff_RSI[8] + lVar17;
      lVar18 = (ulonglong)unaff_RSI[9] + lVar8;
      lVar9 = (ulonglong)unaff_RSI[10] + lVar18;
      lVar19 = (ulonglong)unaff_RSI[0xb] + lVar9;
      lVar10 = (ulonglong)unaff_RSI[0xc] + lVar19;
      lVar20 = (ulonglong)unaff_RSI[0xd] + lVar10;
      lVar11 = (ulonglong)unaff_RSI[0xe] + lVar20;
      uVar13 = (ulonglong)unaff_RSI[0xf] + lVar11;
      uVar2 = uVar2 + lVar5 + lVar12 + lVar6 + lVar15 + lVar14 + lVar16 + lVar7 + lVar17 + lVar8 +
              lVar18 + lVar9 + lVar19 + lVar10 + lVar20 + lVar11 + uVar13;
      unaff_RSI = unaff_RSI + 0x10;
    } while ((undefined *)0xf < param_2);
    if (param_2 != (undefined *)0x0) goto LAB_00f42afa;
  }
  else {
    do {
      param_2 = param_2 + -0x15b0;
      lVar5 = 0;
      do {
        lVar6 = unaff_RSI[lVar5] + uVar13;
        lVar15 = (ulonglong)unaff_RSI[lVar5 + 1] + lVar6;
        lVar14 = (ulonglong)unaff_RSI[lVar5 + 2] + lVar15;
        lVar16 = (ulonglong)unaff_RSI[lVar5 + 3] + lVar14;
        lVar7 = (ulonglong)unaff_RSI[lVar5 + 4] + lVar16;
        lVar17 = (ulonglong)unaff_RSI[lVar5 + 5] + lVar7;
        lVar8 = (ulonglong)unaff_RSI[lVar5 + 6] + lVar17;
        lVar18 = (ulonglong)unaff_RSI[lVar5 + 7] + lVar8;
        lVar9 = (ulonglong)unaff_RSI[lVar5 + 8] + lVar18;
        lVar19 = (ulonglong)unaff_RSI[lVar5 + 9] + lVar9;
        lVar10 = (ulonglong)unaff_RSI[lVar5 + 10] + lVar19;
        lVar20 = (ulonglong)unaff_RSI[lVar5 + 0xb] + lVar10;
        lVar11 = (ulonglong)unaff_RSI[lVar5 + 0xc] + lVar20;
        lVar21 = (ulonglong)unaff_RSI[lVar5 + 0xd] + lVar11;
        lVar12 = (ulonglong)unaff_RSI[lVar5 + 0xe] + lVar21;
        uVar13 = (ulonglong)unaff_RSI[lVar5 + 0xf] + lVar12;
        uVar2 = uVar2 + lVar6 + lVar15 + lVar14 + lVar16 + lVar7 + lVar17 + lVar8 + lVar18 + lVar9 +
                lVar19 + lVar10 + lVar20 + lVar11 + lVar21 + lVar12 + uVar13;
        lVar5 = lVar5 + 0x10;
      } while ((int)lVar5 != 0x15b0);
      unaff_RSI = unaff_RSI + 0x15b0;
      uVar13 = uVar13 % 0xfff1;
      uVar2 = uVar2 % 0xfff1;
    } while (&UNK_000015af < param_2);
    if (param_2 == (undefined *)0x0) goto LAB_00f42bbe;
    if ((undefined *)0xf < param_2) goto LAB_00f42a40;
LAB_00f42afa:
    puVar1 = param_2 + -1;
    if (((ulonglong)param_2 & 3) != 0) {
      uVar4 = 0;
      do {
        uVar13 = uVar13 + unaff_RSI[uVar4];
        uVar2 = uVar2 + uVar13;
        uVar4 = uVar4 + 1;
      } while (((ulonglong)param_2 & 3) != uVar4);
      param_2 = param_2 + -uVar4;
      unaff_RSI = unaff_RSI + uVar4;
    }
    if ((undefined *)0x2 < puVar1) {
      puVar1 = (undefined *)0x0;
      do {
        lVar5 = unaff_RSI[(longlong)puVar1] + uVar13;
        lVar14 = (ulonglong)unaff_RSI[(longlong)(puVar1 + 1)] + lVar5;
        lVar6 = (ulonglong)unaff_RSI[(longlong)(puVar1 + 2)] + lVar14;
        uVar13 = (ulonglong)unaff_RSI[(longlong)(puVar1 + 3)] + lVar6;
        uVar2 = uVar2 + lVar5 + lVar14 + lVar6 + uVar13;
        puVar1 = puVar1 + 4;
      } while (param_2 != puVar1);
    }
  }
  uVar13 = uVar13 % 0xfff1;
  uVar2 = uVar2 % 0xfff1;
LAB_00f42bbe:
  return uVar2 << 0x10 | uVar13;
}


