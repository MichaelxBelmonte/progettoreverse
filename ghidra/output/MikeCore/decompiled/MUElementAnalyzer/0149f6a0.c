// Function: FUN_0149f6a0
// Address: 0149f6a0
// Size: 2850 bytes
// Class: MUElementAnalyzer
// String references:
//   "/usr/lib/libSystem.B.dylib"


/* WARNING: Removing unreachable block (ram,0x0149f70d) */
/* WARNING: Removing unreachable block (ram,0x0149f719) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float FUN_0149f6a0(double param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  float *pfVar3;
  float *pfVar4;
  bool bVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  float *pfVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  longlong *in_RCX;
  longlong lVar20;
  longlong lVar21;
  uint uVar22;
  ulonglong uVar23;
  uint uVar24;
  longlong unaff_RSI;
  longlong lVar26;
  float *pfVar27;
  longlong lVar28;
  int iVar29;
  longlong lVar30;
  uint uVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  undefined1 auVar35 [16];
  float fVar36;
  float fVar37;
  float fVar38;
  longlong local_a8;
  char local_a0;
  longlong local_58;
  longlong local_38;
  ulonglong uVar25;
  
  FUN_00e83120();
  local_58 = local_a8;
  if (local_a8 == 0) {
    bVar14 = true;
    local_58 = 0;
  }
  else if (local_a0 == '\0') {
    FUN_00d50b00();
    bVar14 = false;
  }
  else {
    bVar14 = false;
  }
  pfVar16 = (float *)FUN_00e83010();
  lVar17 = FUN_00e83010();
  lVar18 = FUN_00e83010();
  fVar32 = (float)(param_1 / _DAT_0240e370);
  if (fVar32 <= DAT_02390124) {
    fVar32 = DAT_02390124 / (float)(int)(DAT_02390124 / fVar32 + DAT_0239011c);
  }
  else {
    fVar32 = (float)(int)(fVar32 + DAT_0239011c);
  }
  ___bzero();
  bVar5 = fVar32 < DAT_02390124;
  fVar34 = fVar32;
  if (fVar32 < DAT_02390124) {
    fVar34 = DAT_02390124 / fVar32;
  }
  uVar31 = (uint)(fVar34 + DAT_0239011c);
  lVar28 = *in_RCX;
  if (*(int *)(lVar28 + 0xc) < 1) {
    bVar13 = false;
    local_38 = 0;
  }
  else if (fVar32 <= 0.0) {
    if ((lVar18 + 4U < lVar17 + 0x1000U) && (lVar17 + 8U < lVar18 + 0x800U)) {
      lVar26 = 0;
      local_38 = 0;
      bVar5 = false;
      do {
        lVar28 = *(longlong *)(*(longlong *)(lVar28 + 0x10) + lVar26 * 8);
        if (local_38 == lVar28) {
          lVar28 = local_38;
          bVar13 = bVar5;
          if ((!bVar5) && (local_38 != 0)) {
            FUN_00d50b00();
            bVar13 = true;
          }
        }
        else {
          if (lVar28 != 0) {
            FUN_00d50b00(lVar28);
          }
          bVar13 = true;
          if ((bVar5) && (local_38 != 0)) {
            FUN_00d50b20();
          }
        }
        local_38 = lVar28;
        FUN_00e83530();
        for (lVar28 = 2; fVar34 = *(float *)(lVar17 + -8 + lVar28 * 8),
            fVar37 = *(float *)(lVar17 + -4 + lVar28 * 8),
            *(float *)(lVar18 + -4 + lVar28 * 4) =
                 fVar37 * fVar37 + fVar34 * fVar34 + *(float *)(lVar18 + -4 + lVar28 * 4),
            lVar28 != 0x200; lVar28 = lVar28 + 2) {
          fVar34 = *(float *)(lVar17 + lVar28 * 8);
          fVar37 = *(float *)(lVar17 + 4 + lVar28 * 8);
          *(float *)(lVar18 + lVar28 * 4) =
               fVar37 * fVar37 + fVar34 * fVar34 + *(float *)(lVar18 + lVar28 * 4);
        }
        lVar26 = lVar26 + 1;
        lVar28 = *in_RCX;
        bVar5 = bVar13;
      } while (lVar26 < *(int *)(lVar28 + 0xc));
    }
    else {
      lVar26 = 0;
      local_38 = 0;
      bVar5 = false;
      do {
        lVar28 = *(longlong *)(*(longlong *)(lVar28 + 0x10) + lVar26 * 8);
        if (local_38 == lVar28) {
          lVar28 = local_38;
          bVar13 = bVar5;
          if ((!bVar5) && (local_38 != 0)) {
            FUN_00d50b00();
            bVar13 = true;
          }
        }
        else {
          if (lVar28 != 0) {
            FUN_00d50b00(lVar28);
          }
          bVar13 = true;
          if ((bVar5) && (local_38 != 0)) {
            FUN_00d50b20();
          }
        }
        local_38 = lVar28;
        FUN_00e83530();
        lVar28 = 5;
        while( true ) {
          pfVar16 = (float *)(lVar17 + -0x20 + lVar28 * 8);
          fVar34 = pfVar16[2];
          fVar37 = pfVar16[3];
          pfVar27 = (float *)(lVar17 + -0x10 + lVar28 * 8);
          fVar33 = *pfVar27;
          fVar36 = pfVar27[1];
          fVar38 = pfVar27[2];
          fVar6 = pfVar27[3];
          pfVar27 = (float *)(lVar18 + -0x10 + lVar28 * 4);
          fVar7 = pfVar27[1];
          fVar8 = pfVar27[2];
          fVar9 = pfVar27[3];
          pfVar3 = (float *)(lVar18 + -0x10 + lVar28 * 4);
          *pfVar3 = *pfVar27 + *pfVar16 * *pfVar16 + pfVar16[1] * pfVar16[1];
          pfVar3[1] = fVar7 + fVar34 * fVar34 + fVar37 * fVar37;
          pfVar3[2] = fVar8 + fVar33 * fVar33 + fVar36 * fVar36;
          pfVar3[3] = fVar9 + fVar38 * fVar38 + fVar6 * fVar6;
          if (lVar28 == 0x1fd) break;
          pfVar16 = (float *)(lVar17 + lVar28 * 8);
          fVar34 = pfVar16[2];
          fVar37 = pfVar16[3];
          pfVar27 = (float *)(lVar17 + 0x10 + lVar28 * 8);
          fVar33 = *pfVar27;
          fVar36 = pfVar27[1];
          fVar38 = pfVar27[2];
          fVar6 = pfVar27[3];
          pfVar27 = (float *)(lVar18 + lVar28 * 4);
          fVar7 = pfVar27[1];
          fVar8 = pfVar27[2];
          fVar9 = pfVar27[3];
          pfVar3 = (float *)(lVar18 + lVar28 * 4);
          *pfVar3 = *pfVar27 + *pfVar16 * *pfVar16 + pfVar16[1] * pfVar16[1];
          pfVar3[1] = fVar7 + fVar34 * fVar34 + fVar37 * fVar37;
          pfVar3[2] = fVar8 + fVar33 * fVar33 + fVar36 * fVar36;
          pfVar3[3] = fVar9 + fVar38 * fVar38 + fVar6 * fVar6;
          lVar28 = lVar28 + 8;
        }
        *(float *)(lVar18 + 0x7f4) =
             *(float *)(lVar17 + 0xfec) * *(float *)(lVar17 + 0xfec) +
             *(float *)(lVar17 + 0xfe8) * *(float *)(lVar17 + 0xfe8) + *(float *)(lVar18 + 0x7f4);
        *(float *)(lVar18 + 0x7f8) =
             *(float *)(lVar17 + 0xff4) * *(float *)(lVar17 + 0xff4) +
             *(float *)(lVar17 + 0xff0) * *(float *)(lVar17 + 0xff0) + *(float *)(lVar18 + 0x7f8);
        *(float *)(lVar18 + 0x7fc) =
             *(float *)(lVar17 + 0xffc) * *(float *)(lVar17 + 0xffc) +
             *(float *)(lVar17 + 0xff8) * *(float *)(lVar17 + 0xff8) + *(float *)(lVar18 + 0x7fc);
        lVar26 = lVar26 + 1;
        lVar28 = *in_RCX;
        bVar5 = bVar13;
      } while (lVar26 < *(int *)(lVar28 + 0xc));
    }
  }
  else {
    param_2 = param_2 - (int)(DAT_0240e33c * fVar32);
    uVar24 = uVar31 - 1;
    uVar25 = (ulonglong)uVar24;
    lVar26 = 0;
    local_38 = 0;
    bVar13 = false;
    do {
      lVar28 = *(longlong *)(*(longlong *)(lVar28 + 0x10) + lVar26 * 8);
      if (local_38 == lVar28) {
        lVar28 = local_38;
        bVar15 = bVar13;
        if ((!bVar13) && (local_38 != 0)) {
          FUN_00d50b00();
          bVar15 = true;
        }
      }
      else {
        if (lVar28 != 0) {
          FUN_00d50b00();
        }
        bVar15 = true;
        if ((bVar13) && (local_38 != 0)) {
          FUN_00d50b20();
        }
      }
      bVar13 = bVar15;
      local_38 = lVar28;
      lVar28 = (longlong)(*(double *)(local_38 + 0x10) * param_1);
      if (lVar28 < 0) {
        lVar28 = 0;
      }
      if (param_2 < lVar28) {
        lVar28 = param_2;
      }
      if ((int)uVar31 < 0x401 || bVar5) {
        if (uVar31 == 1) {
          if ((pfVar16 < (float *)(unaff_RSI + lVar28 * 4 + 0x1000U)) &&
             ((float *)(unaff_RSI + lVar28 * 4) < pfVar16 + 0x400)) {
            lVar28 = unaff_RSI + 0xc + lVar28 * 4;
            lVar20 = 0;
            do {
              pfVar16[lVar20] = *(float *)(lVar28 + -0xc + lVar20 * 4);
              pfVar16[lVar20 + 1] = *(float *)(lVar28 + -8 + lVar20 * 4);
              pfVar16[lVar20 + 2] = *(float *)(lVar28 + -4 + lVar20 * 4);
              pfVar16[lVar20 + 3] = *(float *)(lVar28 + lVar20 * 4);
              lVar20 = lVar20 + 4;
            } while ((int)lVar20 != 0x400);
          }
          else {
            lVar28 = unaff_RSI + 0x70 + lVar28 * 4;
            lVar20 = 0;
            do {
              puVar1 = (undefined8 *)(lVar28 + -0x70 + lVar20 * 4);
              uVar10 = puVar1[1];
              puVar2 = (undefined8 *)(lVar28 + -0x60 + lVar20 * 4);
              uVar11 = *puVar2;
              uVar12 = puVar2[1];
              *(undefined8 *)(pfVar16 + lVar20) = *puVar1;
              *(undefined8 *)(pfVar16 + lVar20 + 2) = uVar10;
              *(undefined8 *)(pfVar16 + lVar20 + 4) = uVar11;
              *(undefined8 *)(pfVar16 + lVar20 + 4 + 2) = uVar12;
              puVar1 = (undefined8 *)(lVar28 + -0x50 + lVar20 * 4);
              uVar10 = puVar1[1];
              puVar2 = (undefined8 *)(lVar28 + -0x40 + lVar20 * 4);
              uVar11 = *puVar2;
              uVar12 = puVar2[1];
              *(undefined8 *)(pfVar16 + lVar20 + 8) = *puVar1;
              *(undefined8 *)(pfVar16 + lVar20 + 8 + 2) = uVar10;
              *(undefined8 *)(pfVar16 + lVar20 + 0xc) = uVar11;
              *(undefined8 *)(pfVar16 + lVar20 + 0xc + 2) = uVar12;
              puVar1 = (undefined8 *)(lVar28 + -0x30 + lVar20 * 4);
              uVar10 = puVar1[1];
              puVar2 = (undefined8 *)(lVar28 + -0x20 + lVar20 * 4);
              uVar11 = *puVar2;
              uVar12 = puVar2[1];
              *(undefined8 *)(pfVar16 + lVar20 + 0x10) = *puVar1;
              *(undefined8 *)(pfVar16 + lVar20 + 0x10 + 2) = uVar10;
              *(undefined8 *)(pfVar16 + lVar20 + 0x14) = uVar11;
              *(undefined8 *)(pfVar16 + lVar20 + 0x14 + 2) = uVar12;
              puVar2 = (undefined8 *)(lVar28 + -0x10 + lVar20 * 4);
              uVar10 = puVar2[1];
              puVar1 = (undefined8 *)(lVar28 + lVar20 * 4);
              uVar11 = *puVar1;
              uVar12 = puVar1[1];
              *(undefined8 *)(pfVar16 + lVar20 + 0x18) = *puVar2;
              *(undefined8 *)(pfVar16 + lVar20 + 0x18 + 2) = uVar10;
              *(undefined8 *)(pfVar16 + lVar20 + 0x1c) = uVar11;
              *(undefined8 *)(pfVar16 + lVar20 + 0x1c + 2) = uVar12;
              lVar20 = lVar20 + 0x20;
            } while (lVar20 != 0x400);
          }
        }
        else if (DAT_02390124 <= fVar32) {
          lVar30 = -lVar28;
          lVar20 = unaff_RSI + lVar28 * 4;
          iVar29 = 0x400;
          pfVar27 = pfVar16;
          do {
            fVar34 = 0.0;
            uVar22 = uVar31;
            lVar19 = lVar28;
            if ((uVar31 & 3) != 0) {
              lVar19 = 0;
              do {
                fVar34 = fVar34 + *(float *)(lVar20 + lVar19 * 4);
                lVar19 = lVar19 + 1;
              } while ((uVar31 & 3) != (uint)lVar19);
              uVar22 = uVar31 - (uint)lVar19;
              lVar19 = lVar19 - lVar30;
            }
            if (2 < uVar31 - 1) {
              lVar19 = unaff_RSI + 0xc + lVar19 * 4;
              lVar21 = 0;
              do {
                fVar34 = fVar34 + *(float *)(lVar19 + -0xc + lVar21 * 4) +
                         *(float *)(lVar19 + -8 + lVar21 * 4) + *(float *)(lVar19 + -4 + lVar21 * 4)
                         + *(float *)(lVar19 + lVar21 * 4);
                lVar21 = lVar21 + 4;
              } while (uVar22 != (uint)lVar21);
            }
            lVar28 = lVar28 + uVar25 + 1;
            *pfVar27 = fVar34;
            pfVar27 = pfVar27 + 1;
            lVar30 = lVar30 + ~uVar25;
            lVar20 = lVar20 + uVar25 * 4 + 4;
            iVar29 = iVar29 + -1;
          } while (iVar29 != 0);
        }
        else {
          fVar34 = *(float *)(unaff_RSI + lVar28 * 4);
          lVar28 = lVar28 + 1;
          fVar33 = 0.0;
          lVar20 = 0;
          uVar23 = 0;
          fVar37 = fVar34;
          do {
            if ((int)uVar23 == 0) {
              fVar36 = *(float *)(unaff_RSI + lVar28 * 4);
              fVar33 = (fVar36 - fVar37) * fVar32;
              lVar28 = lVar28 + 1;
              pfVar16[lVar20] = fVar37;
              fVar38 = fVar36;
              uVar22 = uVar24;
              if (uVar24 != 0) goto LAB_0149fb07;
LAB_0149fa70:
              fVar36 = *(float *)(unaff_RSI + lVar28 * 4);
              fVar33 = (fVar36 - fVar38) * fVar32;
              lVar28 = lVar28 + 1;
              uVar23 = uVar25;
            }
            else {
              uVar22 = (int)uVar23 - 1;
              pfVar16[lVar20] = fVar34;
              fVar36 = fVar37;
              fVar38 = fVar37;
              fVar37 = fVar34;
              if (uVar22 == 0) goto LAB_0149fa70;
LAB_0149fb07:
              fVar38 = fVar37 + fVar33;
              uVar23 = (ulonglong)(uVar22 - 1);
            }
            pfVar16[lVar20 + 1] = fVar38;
            fVar34 = fVar38 + fVar33;
            lVar20 = lVar20 + 2;
            fVar37 = fVar36;
          } while ((int)lVar20 != 0x400);
        }
      }
      FUN_00e83530();
      lVar28 = 1;
      if (lVar18 + 0x800U <= lVar17 + 8U || lVar17 + 0x1000U <= lVar18 + 4U) {
        lVar28 = 5;
        while( true ) {
          pfVar27 = (float *)(lVar17 + -0x20 + lVar28 * 8);
          fVar34 = pfVar27[2];
          fVar37 = pfVar27[3];
          pfVar3 = (float *)(lVar17 + -0x10 + lVar28 * 8);
          fVar33 = *pfVar3;
          fVar36 = pfVar3[1];
          fVar38 = pfVar3[2];
          fVar6 = pfVar3[3];
          pfVar3 = (float *)(lVar18 + -0x10 + lVar28 * 4);
          fVar7 = pfVar3[1];
          fVar8 = pfVar3[2];
          fVar9 = pfVar3[3];
          pfVar4 = (float *)(lVar18 + -0x10 + lVar28 * 4);
          *pfVar4 = *pfVar3 + *pfVar27 * *pfVar27 + pfVar27[1] * pfVar27[1];
          pfVar4[1] = fVar7 + fVar34 * fVar34 + fVar37 * fVar37;
          pfVar4[2] = fVar8 + fVar33 * fVar33 + fVar36 * fVar36;
          pfVar4[3] = fVar9 + fVar38 * fVar38 + fVar6 * fVar6;
          if (lVar28 == 0x1fd) break;
          pfVar27 = (float *)(lVar17 + lVar28 * 8);
          fVar34 = pfVar27[2];
          fVar37 = pfVar27[3];
          pfVar3 = (float *)(lVar17 + 0x10 + lVar28 * 8);
          fVar33 = *pfVar3;
          fVar36 = pfVar3[1];
          fVar38 = pfVar3[2];
          fVar6 = pfVar3[3];
          pfVar3 = (float *)(lVar18 + lVar28 * 4);
          fVar7 = pfVar3[1];
          fVar8 = pfVar3[2];
          fVar9 = pfVar3[3];
          pfVar4 = (float *)(lVar18 + lVar28 * 4);
          *pfVar4 = *pfVar3 + *pfVar27 * *pfVar27 + pfVar27[1] * pfVar27[1];
          pfVar4[1] = fVar7 + fVar34 * fVar34 + fVar37 * fVar37;
          pfVar4[2] = fVar8 + fVar33 * fVar33 + fVar36 * fVar36;
          pfVar4[3] = fVar9 + fVar38 * fVar38 + fVar6 * fVar6;
          lVar28 = lVar28 + 8;
        }
        lVar28 = 0x1fd;
      }
      fVar34 = *(float *)(lVar17 + lVar28 * 8);
      fVar37 = *(float *)(lVar17 + 4 + lVar28 * 8);
      *(float *)(lVar18 + lVar28 * 4) =
           fVar37 * fVar37 + fVar34 * fVar34 + *(float *)(lVar18 + lVar28 * 4);
      lVar28 = lVar28 + 2;
      do {
        fVar34 = *(float *)(lVar17 + -8 + lVar28 * 8);
        fVar37 = *(float *)(lVar17 + -4 + lVar28 * 8);
        *(float *)(lVar18 + -4 + lVar28 * 4) =
             fVar37 * fVar37 + fVar34 * fVar34 + *(float *)(lVar18 + -4 + lVar28 * 4);
        fVar34 = *(float *)(lVar17 + lVar28 * 8);
        fVar37 = *(float *)(lVar17 + 4 + lVar28 * 8);
        *(float *)(lVar18 + lVar28 * 4) =
             fVar37 * fVar37 + fVar34 * fVar34 + *(float *)(lVar18 + lVar28 * 4);
        lVar28 = lVar28 + 2;
      } while (lVar28 != 0x201);
      lVar26 = lVar26 + 1;
      lVar28 = *in_RCX;
    } while (lVar26 < *(int *)(lVar28 + 0xc));
  }
  lVar17 = 0;
  do {
    auVar35 = *(undefined1 (*) [16])(lVar18 + lVar17 * 4);
    auVar35 = sqrtps(auVar35,auVar35);
    *(undefined1 (*) [16])(lVar18 + lVar17 * 4) = auVar35;
    lVar17 = lVar17 + 4;
  } while (lVar17 != 0x200);
  auVar35 = ZEXT816(0);
  lVar17 = 7;
  do {
    auVar35._0_4_ =
         auVar35._0_4_ + *(float *)(lVar18 + -0x1c + lVar17 * 4) +
         *(float *)(lVar18 + -0x18 + lVar17 * 4) + *(float *)(lVar18 + -0x14 + lVar17 * 4) +
         *(float *)(lVar18 + -0x10 + lVar17 * 4) + *(float *)(lVar18 + -0xc + lVar17 * 4) +
         *(float *)(lVar18 + -8 + lVar17 * 4) + *(float *)(lVar18 + -4 + lVar17 * 4) +
         *(float *)(lVar18 + lVar17 * 4);
    lVar17 = lVar17 + 8;
  } while (lVar17 != 0x207);
  fVar34 = auVar35._0_4_ * DAT_0239011c;
  fVar37 = 0.0;
  lVar17 = 3;
  do {
    fVar37 = fVar37 + *(float *)(lVar18 + -0xc + lVar17 * 4);
    if (fVar34 <= fVar37) {
      lVar17 = lVar17 + -3;
LAB_0149ffdb:
      fVar33 = (float)(int)lVar17;
      break;
    }
    fVar37 = fVar37 + *(float *)(lVar18 + -8 + lVar17 * 4);
    if (fVar34 <= fVar37) {
      lVar17 = lVar17 + -2;
      goto LAB_0149ffdb;
    }
    fVar37 = fVar37 + *(float *)(lVar18 + -4 + lVar17 * 4);
    if (fVar34 <= fVar37) {
      lVar17 = lVar17 + -1;
      goto LAB_0149ffdb;
    }
    fVar37 = fVar37 + *(float *)(lVar18 + lVar17 * 4);
    if (fVar34 <= fVar37) goto LAB_0149ffdb;
    lVar17 = lVar17 + 4;
    fVar33 = DAT_0241126c;
  } while (lVar17 != 0x203);
  FUN_00e83070();
  FUN_00e83070();
  FUN_00e83070();
  if (!bVar14 && local_58 != 0) {
    FUN_00d50b20();
  }
  if ((bVar13) && (local_38 != 0)) {
    FUN_00d50b20();
  }
  return fVar33 * (float)((param_1 * DAT_0241d650) / (double)fVar32);
}


