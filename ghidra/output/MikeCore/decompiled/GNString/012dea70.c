// Function: FUN_012dea70
// Address: 012dea70
// Size: 1585 bytes
// Class: GNString


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_012dea70(ulonglong param_1,longlong *param_2,size_t param_3)

{
  float fVar1;
  float fVar2;
  double dVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  bool bVar8;
  double dVar9;
  float fVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  void *pvVar14;
  longlong lVar15;
  int iVar16;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  ulonglong uVar17;
  uint uVar18;
  ulonglong uVar19;
  bool bVar20;
  float fVar21;
  undefined8 uVar22;
  ulonglong uVar23;
  double dVar24;
  float fVar25;
  ulonglong uVar26;
  float fVar27;
  float fVar28;
  
  uVar19 = param_1 & 0xffffffff;
  uVar4 = *(ulonglong *)(unaff_RDI + 0xe8);
  uVar17 = param_1;
  if (uVar4 != 0) {
    FUN_00d50b00();
  }
  iVar11 = FUN_00b33130();
  iVar12 = FUN_00b33120();
  pvVar14 = _pthread_getspecific((pthread_key_t)uVar17);
  if (pvVar14 != (void *)0x0) {
    FUN_00e8b990();
  }
  iVar13 = DAT_02802eb8;
  fVar21 = (float)FUN_00aea5e0();
  uVar18 = (uint)param_1;
  if ((*(longlong *)(unaff_RDI + 0xe8) == 0) || (iVar12 == 1)) {
    bVar20 = iVar12 == 1;
    pvVar14 = (void *)CONCAT71((int7)(uVar17 >> 8),iVar11 == 1);
    if ((iVar11 != 1) || (iVar12 != 1)) goto LAB_012debf5;
    if (*unaff_RSI != *param_2) {
LAB_012dece3:
      _memcpy(pvVar14,(void *)((longlong)(int)uVar18 << 2),param_3);
    }
LAB_012decef:
    dVar24 = 0.0;
  }
  else {
    pvVar14 = _pthread_getspecific((pthread_key_t)uVar17);
    uVar23 = uVar4;
    if ((pvVar14 != (void *)0x0) && (lVar15 = FUN_00e8b990(), lVar15 != 0)) {
      uVar23 = *(ulonglong *)(uVar4 + 0x20 + (ulonglong)(*(uint *)(lVar15 + 0x154) & 1) * 8);
      uVar17 = uVar4;
    }
    dVar24 = (double)*(float *)(uVar23 + 0x60);
    dVar3 = *(double *)(unaff_RDI + 0xf0);
    if ((dVar3 != dVar24) || (NAN(dVar3) || NAN(dVar24))) {
      dVar9 = (double)(_DAT_023908f0 & (ulonglong)(dVar24 - dVar3));
      if (DAT_0240d2e8 <= dVar9) {
        dVar9 = dVar9 / DAT_0240d2e8;
        *(int *)(unaff_RDI + 0x100) = (int)dVar9;
        *(double *)(unaff_RDI + 0xf8) = (dVar24 - dVar3) / (double)(int)dVar9;
      }
      else {
        *(double *)(unaff_RDI + 0xf0) = dVar24;
        *(undefined4 *)(unaff_RDI + 0x100) = 0;
      }
    }
    pvVar14 = (void *)CONCAT71((int7)(uVar17 >> 8),iVar11 == 1);
    bVar20 = false;
LAB_012debf5:
    fVar10 = DAT_02390124;
    dVar3 = DAT_0238fee8;
    if (((char)pvVar14 != '\0') && (iVar12 == 2)) {
      dVar24 = *(double *)(unaff_RDI + 0xf0);
      iVar16 = *(int *)(unaff_RDI + 0x100);
      if ((dVar24 != 0.0) || ((NAN(dVar24) || (iVar16 != 0)))) {
        if (0 < (int)uVar18) {
          dVar3 = DAT_0238fee8 - dVar24;
          bVar20 = dVar24 < 0.0;
          bVar8 = 0.0 < dVar24;
          uVar23 = ~-(ulonglong)bVar8 & (ulonglong)DAT_0238fee8;
          dVar9 = dVar24 + DAT_0238fee8;
          uVar26 = ~-(ulonglong)bVar20 & (ulonglong)DAT_0238fee8;
          lVar15 = *unaff_RSI;
          lVar5 = *param_2;
          lVar6 = param_2[1];
          uVar17 = 0;
          iVar11 = iVar16;
          do {
            while( true ) {
              fVar21 = *(float *)(lVar15 + uVar17 * 4);
              *(float *)(lVar5 + uVar17 * 4) =
                   fVar21 * (float)(double)(uVar23 | (ulonglong)dVar3 & -(ulonglong)bVar8);
              *(float *)(lVar6 + uVar17 * 4) =
                   fVar21 * (float)(double)(uVar26 | (ulonglong)dVar9 & -(ulonglong)bVar20);
              if (iVar11 == 0) break;
              dVar24 = dVar24 + *(double *)(unaff_RDI + 0xf8);
              iVar16 = iVar11 + -1;
              uVar17 = uVar17 + 1;
              iVar11 = iVar16;
              if (uVar19 == uVar17) goto LAB_012decf6;
            }
            iVar11 = 0;
            iVar16 = 0;
            uVar17 = uVar17 + 1;
          } while (uVar19 != uVar17);
        }
        goto LAB_012decf6;
      }
      (**(code **)(DAT_02786500 + 0x40))();
      uVar22 = (**(code **)(DAT_02786500 + 0x40))();
      uVar22 = (**(code **)(DAT_02786500 + 0x28))(uVar22,uVar19);
      (**(code **)(DAT_02786500 + 0x28))(uVar22,param_1 & 0xffffffff);
      goto LAB_012decef;
    }
    if ((iVar11 != 2) || (iVar12 != 2)) {
      dVar24 = 0.0;
      iVar16 = 0;
      if ((bool)(iVar11 == 2 & bVar20)) {
        uVar22 = (**(code **)(DAT_02786500 + 0x40))();
        uVar22 = (**(code **)(DAT_02786500 + 0x28))(uVar22,uVar19);
        (**(code **)(DAT_02786500 + 0x28))(uVar22,uVar19);
        (**(code **)(DAT_02786500 + 0x20))();
        dVar24 = 0.0;
      }
      goto LAB_012decf6;
    }
    dVar24 = *(double *)(unaff_RDI + 0xf0);
    iVar16 = *(int *)(unaff_RDI + 0x100);
    if (((dVar24 == 0.0) && (!NAN(dVar24))) && (iVar16 == 0)) {
      if (*unaff_RSI != *param_2) {
        _memcpy(pvVar14,(void *)((longlong)(int)uVar18 << 2),param_3);
      }
      if (unaff_RSI[1] != param_2[1]) goto LAB_012dece3;
      goto LAB_012decef;
    }
    if ((int)uVar18 < 1) goto LAB_012decf6;
    lVar15 = *unaff_RSI;
    lVar5 = unaff_RSI[1];
    if (iVar13 == 0) {
      lVar6 = *param_2;
      lVar7 = param_2[1];
      uVar17 = 0;
      iVar11 = iVar16;
      do {
        while( true ) {
          fVar21 = *(float *)(lVar5 + uVar17 * 4);
          *(float *)(lVar6 + uVar17 * 4) =
               (float)(double)(~-(ulonglong)(0.0 < dVar24) & (ulonglong)dVar3 |
                              (ulonglong)(dVar3 - dVar24) & -(ulonglong)(0.0 < dVar24)) *
               *(float *)(lVar15 + uVar17 * 4);
          *(float *)(lVar7 + uVar17 * 4) =
               (float)(double)(~-(ulonglong)(dVar24 < 0.0) & (ulonglong)dVar3 |
                              (ulonglong)(dVar24 + dVar3) & -(ulonglong)(dVar24 < 0.0)) * fVar21;
          if (iVar11 == 0) break;
          dVar24 = dVar24 + *(double *)(unaff_RDI + 0xf8);
          iVar16 = iVar11 + -1;
          uVar17 = uVar17 + 1;
          iVar11 = iVar16;
          if (uVar19 == uVar17) goto LAB_012decf6;
        }
        iVar11 = 0;
        iVar16 = 0;
        uVar17 = uVar17 + 1;
      } while (uVar19 != uVar17);
      goto LAB_012decf6;
    }
    if (iVar13 == 1) {
      dVar9 = DAT_0238fee8 - (double)fVar21;
      lVar6 = *param_2;
      lVar7 = param_2[1];
      uVar17 = 0;
      iVar11 = iVar16;
      do {
        while( true ) {
          fVar1 = *(float *)(lVar15 + uVar17 * 4);
          fVar28 = (float)(double)(~-(ulonglong)(0.0 < dVar24) & (ulonglong)dVar3 |
                                  (ulonglong)(dVar3 - dVar24) & -(ulonglong)(0.0 < dVar24));
          fVar25 = (float)(double)(~-(ulonglong)(dVar24 < 0.0) & (ulonglong)dVar3 |
                                  (ulonglong)(dVar24 + dVar3) & -(ulonglong)(dVar24 < 0.0));
          fVar27 = (float)((double)(float)(~-(uint)(fVar28 != fVar10) & (uint)fVar25 |
                                          -(uint)(fVar28 != fVar10) & (uint)fVar28) * dVar9 +
                          (double)fVar21);
          fVar2 = *(float *)(lVar5 + uVar17 * 4);
          fVar28 = fVar28 * fVar1;
          fVar25 = fVar25 * fVar2;
          *(float *)(lVar6 + uVar17 * 4) = ((fVar2 - fVar25) + fVar28) * fVar27;
          *(float *)(lVar7 + uVar17 * 4) = ((fVar1 - fVar28) + fVar25) * fVar27;
          if (iVar11 == 0) break;
          dVar24 = dVar24 + *(double *)(unaff_RDI + 0xf8);
          iVar16 = iVar11 + -1;
          uVar17 = uVar17 + 1;
          iVar11 = iVar16;
          if (uVar19 == uVar17) goto LAB_012decf6;
        }
        iVar11 = 0;
        iVar16 = 0;
        uVar17 = uVar17 + 1;
      } while (uVar19 != uVar17);
      goto LAB_012decf6;
    }
    if (uVar18 != 1) {
      iVar13 = -(uVar18 & 0xfffffffe);
      iVar11 = iVar16;
      do {
        while ((iVar16 = 0, iVar11 == 0 ||
               (dVar24 = dVar24 + *(double *)(unaff_RDI + 0xf8), iVar11 == 1))) {
          iVar13 = iVar13 + 2;
          iVar11 = 0;
          if (iVar13 == 0) goto LAB_012df086;
        }
        dVar24 = dVar24 + *(double *)(unaff_RDI + 0xf8);
        iVar16 = iVar11 + -2;
        iVar13 = iVar13 + 2;
        iVar11 = iVar16;
      } while (iVar13 != 0);
    }
LAB_012df086:
    if ((param_1 & 1) == 0) goto LAB_012decf6;
    if (iVar16 != 0) {
      dVar24 = dVar24 + *(double *)(unaff_RDI + 0xf8);
      iVar16 = iVar16 + -1;
      goto LAB_012decf6;
    }
  }
  iVar16 = 0;
LAB_012decf6:
  if ((*(longlong *)(unaff_RDI + 0xe8) != 0) && (iVar12 != 1)) {
    *(int *)(unaff_RDI + 0x100) = iVar16;
    *(double *)(unaff_RDI + 0xf0) = dVar24;
  }
  if (uVar4 != 0) {
    FUN_00d50b20();
  }
  return;
}


