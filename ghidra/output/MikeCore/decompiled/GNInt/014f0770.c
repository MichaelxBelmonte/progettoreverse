// Function: FUN_014f0770
// Address: 014f0770
// Size: 1139 bytes
// Class: GNInt


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_014f0770(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  float fVar1;
  uint uVar2;
  bool bVar3;
  float *pfVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  float *pfVar9;
  bool bVar10;
  uint uVar11;
  longlong lVar12;
  float *unaff_RSI;
  longlong *unaff_RDI;
  ulonglong uVar13;
  longlong lVar14;
  ulonglong uVar15;
  float fVar16;
  float fVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  float fVar20;
  float fVar21;
  char cVar22;
  undefined8 uVar23;
  
  uVar2 = *(uint *)(unaff_RDI[0x21] + 0xc);
  uVar15 = (ulonglong)uVar2;
  iVar5 = uVar2 * 2;
  bVar3 = (int)param_2 < iVar5;
  bVar10 = bVar3 || unaff_RSI == (float *)0x0;
  if (bVar3 || unaff_RSI == (float *)0x0) {
    unaff_RSI = (float *)FUN_00e83010(CONCAT31((int3)((uint)iVar5 >> 8),bVar10),param_2,param_3,
                                      param_4,0);
  }
  fVar16 = (float)(**(code **)(*unaff_RDI + 0x3e0))();
  if (0 < (int)uVar2) {
    uVar13 = 0;
    lVar14 = 0;
    uVar23 = 0;
    do {
      cVar22 = (char)uVar23;
      lVar12 = *(longlong *)(*(longlong *)(unaff_RDI[0x21] + 0x10) + uVar13 * 8);
      if (lVar14 == lVar12) {
        if ((cVar22 == '\0') && (lVar14 != 0)) {
          uVar23 = 1;
          FUN_00d50b00();
        }
      }
      else {
        if (lVar12 != 0) {
          FUN_00d50b00();
        }
        if ((cVar22 == '\0') || (lVar14 == 0)) {
          uVar23 = 1;
          lVar14 = lVar12;
        }
        else {
          FUN_00d50b20();
          uVar23 = 1;
          lVar14 = lVar12;
        }
      }
      cVar22 = (char)uVar23;
      unaff_RSI[uVar13] = *(float *)(lVar14 + 0x14);
      unaff_RSI[(longlong)(int)uVar2 + uVar13] = *(float *)(lVar14 + 0x18);
      uVar13 = uVar13 + 1;
    } while (uVar15 != uVar13);
    fVar1 = *unaff_RSI;
    fVar21 = unaff_RSI[(int)uVar2];
    lVar12 = 0;
    fVar17 = fVar1 - fVar21;
    pfVar4 = unaff_RSI;
    do {
      pfVar9 = pfVar4 + 1;
      fVar20 = fVar1 - fVar21;
      if ((float)((uint)(fVar1 - fVar16) & _DAT_02390140) < DAT_0241fd58) {
        uVar7 = (uint)lVar12;
        if ((float)((uint)fVar20 & _DAT_02390140) < DAT_023908ec) {
          uVar11 = -uVar7;
        }
        else {
          if (((fVar17 < 0.0) || (0.0 <= fVar20)) && ((0.0 < fVar17 || (fVar20 <= 0.0))))
          goto LAB_014f094a;
          uVar11 = -uVar7;
          if ((int)uVar11 < (int)(uVar2 - 1)) {
            auVar19 = insertps(ZEXT416((uint)*pfVar9),ZEXT416((uint)fVar1),0x10);
            auVar18 = insertps(ZEXT416((uint)fVar1),pfVar4[-1],0x10);
            if ((float)((uint)(auVar19._4_4_ - auVar18._4_4_) & _UNK_02390144) <=
                (float)((uint)(auVar19._0_4_ - auVar18._0_4_) & _DAT_02390140)) {
              uVar11 = ~uVar7;
            }
          }
          else {
            uVar11 = ~uVar7;
          }
        }
        iVar5 = FUN_014c2f20();
        iVar5 = iVar5 + uVar11;
        goto LAB_014f09e4;
      }
LAB_014f094a:
      if (1 - uVar15 == lVar12) goto LAB_014f096e;
      fVar1 = *pfVar9;
      fVar21 = pfVar9[(int)uVar2];
      lVar12 = lVar12 + -1;
      fVar17 = fVar20;
      pfVar4 = pfVar9;
    } while( true );
  }
  lVar14 = 0;
  cVar22 = '\0';
LAB_014f096e:
  iVar5 = FUN_014c2f20();
  iVar6 = FUN_014c2f80();
  iVar5 = (iVar6 + iVar5) / 2;
LAB_014f09e4:
  iVar6 = FUN_014c2f80();
  if (iVar6 <= iVar5) {
    iVar5 = FUN_014c2f80();
    iVar5 = iVar5 + -1;
  }
  iVar6 = FUN_014c2f20();
  if (iVar5 < iVar6) {
    iVar5 = FUN_014c2f20();
  }
  iVar6 = FUN_014c2f20();
  if ((iVar6 <= iVar5) && (iVar6 = FUN_014c2f80(), iVar5 <= iVar6)) {
    *(int *)((longlong)unaff_RDI + 0x15c) = iVar5;
  }
  if (0 < (int)uVar2) {
    uVar7 = uVar2 - 1;
    uVar13 = (ulonglong)uVar7;
    fVar21 = unaff_RSI[(int)uVar7] - unaff_RSI[(longlong)(int)uVar2 + (longlong)(int)uVar7];
    do {
      fVar1 = unaff_RSI[uVar13];
      fVar17 = fVar1 - unaff_RSI[(longlong)(int)uVar2 + uVar13];
      iVar5 = (int)uVar15;
      if ((float)((uint)(fVar1 - fVar16) & _DAT_02390140) < DAT_0241fd58) {
        if ((float)((uint)fVar17 & _DAT_02390140) < DAT_023908ec) {
          iVar5 = iVar5 + -1;
        }
        else {
          if (((fVar21 < 0.0) || (0.0 <= fVar17)) && ((0.0 < fVar21 || (fVar17 <= 0.0))))
          goto LAB_014f0a90;
          iVar6 = iVar5 + -1;
          if (0 < iVar6) {
            auVar18 = insertps(ZEXT416((uint)fVar1),unaff_RSI[uVar15],0x10);
            auVar19 = insertps(ZEXT416((uint)unaff_RSI[(int)uVar13 - 1]),ZEXT416((uint)fVar1),0x10);
            bVar3 = true;
            if ((float)((uint)(auVar18._0_4_ - auVar19._0_4_) & _DAT_02390140) <
                (float)((uint)(auVar18._4_4_ - auVar19._4_4_) & _UNK_02390144)) goto LAB_014f0b3b;
          }
        }
        iVar6 = iVar5;
        bVar3 = true;
        goto LAB_014f0b3b;
      }
LAB_014f0a90:
      uVar15 = (ulonglong)(iVar5 - 1);
      bVar3 = 0 < (longlong)uVar13;
      uVar13 = uVar13 - 1;
      fVar21 = fVar17;
    } while (bVar3);
  }
  bVar3 = false;
  iVar6 = 0;
LAB_014f0b3b:
  iVar5 = FUN_014c2f20();
  if (bVar3) {
    iVar8 = *(int *)((longlong)unaff_RDI + 0x15c);
    if (iVar8 == -1) {
      iVar8 = FUN_014c2f20();
    }
    iVar5 = iVar5 + iVar6;
    if (iVar8 < iVar5) goto LAB_014f0b8c;
  }
  iVar5 = *(int *)((longlong)unaff_RDI + 0x15c);
  if (iVar5 == -1) {
    iVar5 = FUN_014c2f20();
  }
  iVar5 = iVar5 + 1;
LAB_014f0b8c:
  iVar6 = FUN_014c2f80();
  if (iVar6 < iVar5) {
    iVar5 = FUN_014c2f80();
  }
  iVar6 = FUN_014c2f20();
  if ((iVar6 <= iVar5) && (iVar6 = FUN_014c2f80(), iVar5 <= iVar6)) {
    *(int *)(unaff_RDI + 0x2c) = iVar5;
  }
  if (bVar10) {
    FUN_00e83070();
  }
  if ((cVar22 != '\0') && (lVar14 != 0)) {
    FUN_00d50b20();
  }
  return;
}


