// Function: FUN_014ae680
// Address: 014ae680
// Size: 2466 bytes
// Class: MUElementAnalyzer


/* WARNING: Removing unreachable block (ram,0x014aef7a) */
/* WARNING: Removing unreachable block (ram,0x014aef83) */
/* WARNING: Removing unreachable block (ram,0x014af036) */
/* WARNING: Removing unreachable block (ram,0x014af03f) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_014ae680(double param_1,undefined8 param_2,undefined4 param_3,float param_4)

{
  int *piVar1;
  void *pvVar2;
  float *pfVar3;
  int *piVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  double dVar16;
  float fVar17;
  bool bVar18;
  float *pfVar19;
  float *pfVar20;
  ulonglong uVar21;
  uint uVar22;
  float *in_RCX;
  float *pfVar23;
  ulonglong uVar24;
  int iVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  size_t in_R8D;
  float *in_R9;
  ulonglong uVar28;
  int iVar29;
  int iVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float in_XMM4_Da;
  uint local_res8;
  longlong local_50;
  char local_48;
  float local_40;
  
  pfVar23 = in_RCX;
  pfVar19 = (float *)FUN_00e83010();
  pfVar20 = (float *)FUN_00e83010();
  pvVar2 = (void *)((longlong)(int)local_res8 * 4);
  _memcpy(pfVar23,pvVar2,in_R8D);
  _memcpy(pfVar23,pvVar2,in_R8D);
  fVar17 = _UNK_0240e18c;
  fVar32 = _UNK_0240e188;
  fVar33 = _UNK_0240e184;
  fVar31 = _DAT_023b294c;
  dVar16 = DAT_0238fee8;
  uVar28 = (ulonglong)local_res8;
  if (0 < (longlong)(int)local_res8) {
    if (local_res8 < 8) {
      uVar21 = 0;
    }
    else {
      uVar21 = (ulonglong)(local_res8 & 0xfffffff8);
      uVar24 = 0;
      do {
        pfVar23 = pfVar19 + uVar24;
        fVar5 = pfVar23[1];
        fVar6 = pfVar23[2];
        fVar7 = pfVar23[3];
        if (*pfVar23 < fVar31) {
          pfVar19[uVar24] = 0.6;
        }
        if (fVar5 < fVar33) {
          pfVar19[uVar24 + 1] = 0.6;
        }
        if (fVar32 <= fVar6) {
          if (fVar7 < fVar17) goto LAB_014ae840;
LAB_014ae7cb:
          pfVar23 = pfVar19 + uVar24 + 4;
          fVar5 = *pfVar23;
          fVar6 = pfVar23[1];
          fVar7 = pfVar23[2];
          fVar8 = pfVar23[3];
        }
        else {
          pfVar19[uVar24 + 2] = 0.6;
          if (fVar17 <= fVar7) goto LAB_014ae7cb;
LAB_014ae840:
          pfVar19[uVar24 + 3] = 0.6;
          pfVar23 = pfVar19 + uVar24 + 4;
          fVar5 = *pfVar23;
          fVar6 = pfVar23[1];
          fVar7 = pfVar23[2];
          fVar8 = pfVar23[3];
        }
        if (fVar5 < fVar31) {
          pfVar19[uVar24 + 4] = 0.6;
        }
        if (fVar6 < fVar33) {
          pfVar19[uVar24 + 5] = 0.6;
        }
        if (fVar7 < fVar32) {
          pfVar19[uVar24 + 6] = 0.6;
        }
        if (fVar8 < fVar17) {
          pfVar19[uVar24 + 7] = 0.6;
        }
        uVar24 = uVar24 + 8;
      } while (uVar21 != uVar24);
      fVar31 = _DAT_023b294c;
      if (uVar21 == uVar28) goto LAB_014ae88b;
    }
    do {
      if (pfVar19[uVar21] <= fVar31 && fVar31 != pfVar19[uVar21]) {
        pfVar19[uVar21] = 0.6;
      }
      uVar21 = uVar21 + 1;
    } while (uVar28 != uVar21);
  }
LAB_014ae88b:
  FUN_015c1480();
  fVar17 = _UNK_0240f0dc;
  fVar32 = _UNK_0240f0d8;
  fVar33 = _UNK_0240f0d4;
  fVar31 = DAT_023b4df0;
  if ((int)local_res8 < 1) {
    FUN_015c1480(param_3);
    goto LAB_014aed67;
  }
  if ((local_res8 < 8) || ((pfVar19 < in_RCX + uVar28 && (in_RCX < pfVar19 + uVar28)))) {
    uVar21 = 0;
LAB_014ae8f1:
    uVar24 = ~uVar21;
    if ((local_res8 & 1) != 0) {
      if (DAT_023b4df0 < in_RCX[uVar21]) {
        pfVar19[uVar21] = 1.0;
      }
      uVar21 = uVar21 | 1;
    }
    fVar31 = DAT_023b4df0;
    if (uVar24 + uVar28 != 0) {
      do {
        if (in_RCX[uVar21] <= fVar31) {
          fVar33 = in_RCX[uVar21 + 1];
        }
        else {
          pfVar19[uVar21] = 1.0;
          fVar33 = in_RCX[uVar21 + 1];
        }
        if (fVar31 < fVar33) {
          pfVar19[uVar21 + 1] = 1.0;
        }
        uVar21 = uVar21 + 2;
      } while (uVar28 != uVar21);
    }
  }
  else {
    uVar21 = (ulonglong)(local_res8 & 0xfffffff8);
    uVar24 = 0;
    do {
      pfVar23 = in_RCX + uVar24;
      fVar5 = pfVar23[1];
      fVar6 = pfVar23[2];
      fVar7 = pfVar23[3];
      pfVar3 = in_RCX + uVar24 + 4;
      fVar8 = *pfVar3;
      fVar9 = pfVar3[1];
      fVar10 = pfVar3[2];
      fVar11 = pfVar3[3];
      if (fVar31 < *pfVar23) {
        pfVar19[uVar24] = 1.0;
      }
      if (fVar33 < fVar5) {
        pfVar19[uVar24 + 1] = 1.0;
      }
      if (fVar32 < fVar6) {
        pfVar19[uVar24 + 2] = 1.0;
      }
      if (fVar17 < fVar7) {
        pfVar19[uVar24 + 3] = 1.0;
      }
      if (fVar31 < fVar8) {
        pfVar19[uVar24 + 4] = 1.0;
      }
      if (fVar33 < fVar9) {
        pfVar19[uVar24 + 5] = 1.0;
      }
      if (fVar32 < fVar10) {
        pfVar19[uVar24 + 6] = 1.0;
      }
      if (fVar17 < fVar11) {
        pfVar19[uVar24 + 7] = 1.0;
      }
      uVar24 = uVar24 + 8;
    } while (uVar21 != uVar24);
    if (uVar21 != uVar28) goto LAB_014ae8f1;
  }
  FUN_015c1480(param_3);
  if (local_res8 < 8) {
    uVar21 = 0;
  }
  else if ((pfVar20 < in_R9 + uVar28) && (in_R9 < pfVar20 + uVar28)) {
    uVar21 = 0;
  }
  else {
    uVar21 = (ulonglong)(local_res8 & 0xfffffff8);
    uVar24 = 0;
    do {
      piVar1 = (int *)((longlong)in_R9 + uVar24);
      iVar25 = piVar1[1];
      iVar29 = piVar1[2];
      iVar30 = piVar1[3];
      piVar4 = (int *)((longlong)in_R9 + uVar24 + 0x10);
      iVar12 = *piVar4;
      iVar13 = piVar4[1];
      iVar14 = piVar4[2];
      iVar15 = piVar4[3];
      if (*piVar1 == 0) {
        *(undefined4 *)((longlong)pfVar20 + uVar24) = 0;
      }
      if (iVar25 == 0) {
        *(undefined4 *)((longlong)pfVar20 + uVar24 + 4) = 0;
      }
      if (iVar29 == 0) {
        *(undefined4 *)((longlong)pfVar20 + uVar24 + 8) = 0;
      }
      if (iVar30 == 0) {
        *(undefined4 *)((longlong)pfVar20 + uVar24 + 0xc) = 0;
      }
      if (iVar12 == 0) {
        *(undefined4 *)((longlong)pfVar20 + uVar24 + 0x10) = 0;
      }
      if (iVar13 == 0) {
        *(undefined4 *)((longlong)pfVar20 + uVar24 + 0x14) = 0;
      }
      if (iVar14 == 0) {
        *(undefined4 *)((longlong)pfVar20 + uVar24 + 0x18) = 0;
      }
      if (iVar15 == 0) {
        *(undefined4 *)((longlong)pfVar20 + uVar24 + 0x1c) = 0;
      }
      uVar24 = uVar24 + 0x20;
    } while ((uVar28 * 4 & 0xffffffffffffffe0) != uVar24);
    if (uVar21 == uVar28) goto LAB_014aed67;
  }
  uVar24 = ~uVar21;
  if ((local_res8 & 1) != 0) {
    if (in_R9[uVar21] == 0.0) {
      pfVar20[uVar21] = 0.0;
    }
    uVar21 = uVar21 | 1;
  }
  if (uVar24 + uVar28 != 0) {
    do {
      while (in_R9[uVar21] == 0.0) {
        pfVar20[uVar21] = 0.0;
        if (in_R9[uVar21 + 1] != 0.0) goto LAB_014aed3f;
LAB_014aed55:
        pfVar20[uVar21 + 1] = 0.0;
        uVar21 = uVar21 + 2;
        if (uVar28 == uVar21) goto LAB_014aed67;
      }
      if (in_R9[uVar21 + 1] == 0.0) goto LAB_014aed55;
LAB_014aed3f:
      uVar21 = uVar21 + 2;
    } while (uVar28 != uVar21);
  }
LAB_014aed67:
  fVar31 = (float)(dVar16 / param_1);
  fVar33 = 0.0;
  bVar18 = 0.0 < *pfVar20 - *pfVar19;
  if (1 < (int)local_res8) {
    iVar29 = 0;
    uVar21 = 1;
    iVar25 = 0;
    local_40 = *pfVar20 - *pfVar19;
    do {
      fVar33 = pfVar20[uVar21] - pfVar19[uVar21];
      if ((local_40 <= 0.0 && !bVar18) && 0.0 < fVar33) {
        iVar25 = (int)uVar21;
      }
      if ((local_40 <= 0.0 && !bVar18) && 0.0 < fVar33) {
        bVar18 = true;
      }
      iVar30 = iVar29;
      if (fVar33 <= 0.0) {
        iVar30 = (int)uVar21;
      }
      if (local_40 <= 0.0) {
        iVar30 = iVar29;
      }
      iVar29 = iVar30;
      if ((bVar18) && (fVar33 < DAT_02394228)) {
        fVar32 = 0.0;
        uVar22 = iVar29 - iVar25;
        if (uVar22 != 0 && iVar25 <= iVar29) {
          uVar24 = (ulonglong)iVar25;
          uVar26 = ~uVar24;
          fVar32 = 0.0;
          uVar27 = (ulonglong)uVar22 & 3;
          if ((uVar22 & 3) != 0) {
            do {
              fVar32 = fVar32 + (pfVar20[uVar24] - pfVar19[uVar24]);
              uVar24 = uVar24 + 1;
              uVar27 = uVar27 - 1;
            } while (uVar27 != 0);
          }
          if (2 < uVar26 + (longlong)iVar29) {
            do {
              fVar32 = (pfVar20[uVar24 + 3] - pfVar19[uVar24 + 3]) +
                       (pfVar20[uVar24 + 2] - pfVar19[uVar24 + 2]) +
                       (pfVar20[uVar24 + 1] - pfVar19[uVar24 + 1]) +
                       (pfVar20[uVar24] - pfVar19[uVar24]) + fVar32;
              uVar24 = uVar24 + 4;
            } while ((longlong)iVar29 != uVar24);
          }
        }
        bVar18 = false;
        if ((param_4 < fVar32) && ((int)((double)in_XMM4_Da * param_1) < (int)uVar22)) {
          FUN_01432380((double)((float)iVar25 * fVar31),(double)((float)iVar29 * fVar31));
          if (local_48 == '\0') {
            if (local_50 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_48 = '\0';
          }
          FUN_00d21140();
          if (local_50 != 0) {
            FUN_00d50b20();
          }
          if ((local_48 != '\0') && (local_50 != 0)) {
            FUN_00d50b20();
          }
          bVar18 = false;
        }
      }
      uVar21 = uVar21 + 1;
      local_40 = fVar33;
    } while (uVar21 != uVar28);
    fVar33 = (float)iVar25;
  }
  if (bVar18) {
    FUN_01432380((double)(fVar33 * fVar31),(double)((float)(int)local_res8 * fVar31));
    if (local_48 == '\0') {
      if (local_50 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_48 = '\0';
    }
    FUN_00d21140();
    if (local_50 != 0) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
  }
  FUN_00e83070();
  FUN_00e83070();
  return;
}


