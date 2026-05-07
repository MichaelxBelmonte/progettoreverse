// Function: FUN_017f3030
// Address: 017f3030
// Size: 2840 bytes
// Class: GNString


/* WARNING: Removing unreachable block (ram,0x017f34b2) */
/* WARNING: Removing unreachable block (ram,0x017f34bb) */
/* WARNING: Removing unreachable block (ram,0x017f316d) */
/* WARNING: Removing unreachable block (ram,0x017f3176) */
/* WARNING: Removing unreachable block (ram,0x017f30af) */
/* WARNING: Removing unreachable block (ram,0x017f30b8) */
/* WARNING: Removing unreachable block (ram,0x017f30ef) */
/* WARNING: Removing unreachable block (ram,0x017f30f8) */
/* WARNING: Removing unreachable block (ram,0x017f31d1) */
/* WARNING: Removing unreachable block (ram,0x017f31da) */
/* WARNING: Removing unreachable block (ram,0x017f347f) */
/* WARNING: Removing unreachable block (ram,0x017f3488) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_017f3030(void *param_1,undefined8 param_2,size_t param_3,float param_4)

{
  float fVar1;
  float *pfVar2;
  bool bVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  void *pvVar7;
  longlong lVar8;
  pthread_key_t pVar9;
  uint uVar10;
  ulonglong uVar11;
  uint uVar12;
  longlong lVar13;
  longlong unaff_RDI;
  longlong lVar14;
  int iVar15;
  ulonglong uVar16;
  bool bVar17;
  bool bVar18;
  float fVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  float fVar22;
  longlong local_c0;
  char local_b8;
  longlong local_98;
  char local_90;
  float local_78;
  float local_74;
  longlong local_70;
  float local_5c;
  longlong local_58;
  longlong local_40;
  char local_38;
  undefined8 extraout_XMM0_Qb;
  
  pvVar7 = _pthread_getspecific((pthread_key_t)param_1);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_015b93e0();
  if ((local_38 == '\0') && (local_40 != 0)) {
    FUN_00d50b00();
  }
  FUN_00c8e690();
  if ((local_38 == '\0') && (local_40 != 0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  if (3 < (int)*(uint *)(local_40 + 0x18)) {
    _memset_pattern16(param_1,(void *)((ulonglong)((*(uint *)(local_40 + 0x18) >> 2) - 1) * 4 + 4),
                      param_3);
  }
  pVar9 = (pthread_key_t)param_1;
  FUN_00c8e690();
  if ((local_38 == '\0') && (local_40 != 0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  ___bzero();
  FUN_00c8e690();
  if ((local_38 == '\0') && (local_40 != 0)) {
    FUN_00d50b00();
  }
  local_70 = local_40;
  FUN_00c92170();
  FUN_00c92160();
  ___bzero();
  fVar1 = *(float *)(unaff_RDI + 0xac);
  lVar13 = local_40;
  if (*(longlong *)(unaff_RDI + 0x38) == 0) {
LAB_017f3445:
    bVar18 = false;
  }
  else {
    pvVar7 = _pthread_getspecific(pVar9);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0123f310();
    if (local_40 == 0) {
      bVar18 = false;
    }
    else {
      pvVar7 = _pthread_getspecific(pVar9);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0123f310();
      pvVar7 = _pthread_getspecific(pVar9);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012e7fb0();
      bVar18 = local_c0 != 0;
      if ((local_b8 != '\0') && (local_c0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_90 != '\0') && (local_98 != 0)) {
        FUN_00d50b20();
      }
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (!bVar18) goto LAB_017f3445;
    pvVar7 = _pthread_getspecific(pVar9);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0123f310();
    pvVar7 = _pthread_getspecific(pVar9);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e7fb0();
    pvVar7 = _pthread_getspecific(pVar9);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01510360(0,0,0);
    local_58 = local_40;
    if (local_40 == 0) {
      local_58 = 0;
      bVar18 = false;
    }
    else if (local_38 == '\0') {
      FUN_00d50b00();
      bVar18 = true;
    }
    else {
      local_38 = '\0';
      bVar18 = true;
    }
    if ((local_b8 != '\0') && (local_c0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
    if (local_58 != 0) goto LAB_017f34ff;
  }
  FUN_0173ba80();
  local_58 = local_40;
  if (local_40 == 0) {
    local_58 = 0;
    lVar13 = local_40;
  }
  else {
    bVar18 = true;
    lVar13 = local_40;
    if (local_38 == '\0') {
      FUN_00d50b00();
    }
  }
LAB_017f34ff:
  lVar14 = 0;
  bVar4 = 0;
  do {
    pvVar7 = _pthread_getspecific((pthread_key_t)lVar13);
    if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
      lVar13 = local_58;
    }
    auVar20._0_8_ = FUN_0173fbe0();
    auVar20._8_8_ = extraout_XMM0_Qb;
    fVar22 = (float)((int)lVar14 + 0x23) * DAT_0241b664 + (float)auVar20._0_8_;
    *(float *)(*(longlong *)(local_40 + 0x10) + lVar14 * 4) = fVar22;
    if (DAT_02394298 < (float)((uint)fVar22 & _DAT_02390140)) {
      bVar4 = 1;
    }
    auVar21._4_12_ = auVar20._4_12_;
    auVar21._0_4_ = (float)auVar20._0_8_ * DAT_023941f4;
    fVar22 = (float)_exp2f(auVar21._0_8_);
    fVar19 = (fVar22 * DAT_023941f8) / fVar1;
    fVar22 = 0.0;
    if (0.0 <= fVar19) {
      fVar22 = fVar19;
    }
    *(uint *)(*(longlong *)(local_40 + 0x10) + lVar14 * 4) =
         ~-(uint)(fVar22 < DAT_02411450) & DAT_02416640 |
         (uint)fVar22 & -(uint)(fVar22 < DAT_02411450);
    lVar14 = lVar14 + 1;
  } while (lVar14 != 0x66);
  bVar3 = (bool)(bVar4 | local_40 == 0);
  if (!bVar3) {
    FUN_00d50b20();
    local_70 = 0;
  }
  uVar16 = 0;
  do {
    lVar13 = *(longlong *)(local_40 + 0x10);
    fVar1 = *(float *)(lVar13 + uVar16 * 4);
    iVar15 = (int)uVar16;
    if (iVar15 == 0x65) {
      fVar22 = *(float *)(lVar13 + 400);
      iVar6 = FUN_00e7d780();
      local_78 = fVar1 - fVar22;
      iVar5 = 0x7ff;
      local_5c = DAT_02390124;
      local_74 = DAT_02390124;
      if (iVar6 < 0x800) goto LAB_017f37e4;
    }
    else if (iVar15 == 0) {
      param_4 = *(float *)(lVar13 + 4);
      iVar5 = FUN_00e7d780();
      param_4 = param_4 - fVar1;
      iVar6 = 0;
      local_5c = DAT_02390124;
      local_74 = DAT_02390124;
      if (-1 < iVar5) {
LAB_017f37e4:
        iVar5 = iVar5 + 1;
        lVar13 = (longlong)iVar6;
        if (uVar16 < 0x65) {
          if (uVar16 == 0) {
            do {
              if (((float)(int)lVar13 < fVar1) ||
                 (DAT_0239424c < (DAT_02390124 - ((float)(int)lVar13 - fVar1) / param_4) * local_74)
                 ) {
                fVar22 = (float)_powf();
                *(float *)(*(longlong *)(local_40 + 0x10) + lVar13 * 4) =
                     fVar22 * *(float *)(*(longlong *)(local_40 + 0x10) + lVar13 * 4);
              }
              lVar13 = lVar13 + 1;
            } while (iVar5 != (int)lVar13);
          }
          else {
            do {
              fVar22 = (float)(int)lVar13;
              if (fVar1 <= fVar22) {
                fVar22 = (fVar22 - fVar1) / param_4;
                fVar19 = local_74;
              }
              else {
                fVar22 = (fVar1 - fVar22) / local_78;
                fVar19 = local_5c;
              }
              if (DAT_0239424c < (DAT_02390124 - fVar22) * fVar19) {
                fVar22 = (float)_powf();
                *(float *)(*(longlong *)(local_40 + 0x10) + lVar13 * 4) =
                     fVar22 * *(float *)(*(longlong *)(local_40 + 0x10) + lVar13 * 4);
              }
              lVar13 = lVar13 + 1;
            } while (iVar5 != (int)lVar13);
          }
        }
        else {
          do {
            if ((fVar1 <= (float)(int)lVar13) ||
               (DAT_0239424c < (DAT_02390124 - (fVar1 - (float)(int)lVar13) / local_78) * local_5c))
            {
              fVar22 = (float)_powf();
              *(float *)(*(longlong *)(local_40 + 0x10) + lVar13 * 4) =
                   fVar22 * *(float *)(*(longlong *)(local_40 + 0x10) + lVar13 * 4);
            }
            lVar13 = lVar13 + 1;
          } while (iVar5 != (int)lVar13);
        }
      }
    }
    else {
      uVar12 = ~(uint)(uVar16 < 10) + iVar15;
      if ((int)uVar12 < 0) {
        uVar12 = 0;
      }
      uVar10 = iVar15 + (uint)(uVar16 < 9) + 1;
      uVar11 = (ulonglong)uVar10;
      if (100 < uVar10) {
        uVar11 = 0x65;
      }
      local_74 = DAT_02390124;
      if (uVar16 < uVar11) {
        local_74 = DAT_02390124 / (float)((int)uVar11 - iVar15);
      }
      fVar22 = *(float *)(lVar13 + (ulonglong)uVar12 * 4);
      param_4 = *(float *)(lVar13 + uVar11 * 4);
      iVar6 = FUN_00e7d780();
      iVar5 = FUN_00e7d780();
      local_5c = DAT_02390124 / (float)(int)(iVar15 - uVar12);
      param_4 = param_4 - fVar1;
      local_78 = fVar1 - fVar22;
      if (iVar6 <= iVar5) goto LAB_017f37e4;
    }
    uVar16 = uVar16 + 1;
  } while (uVar16 != 0x66);
  if (*(longlong *)(unaff_RDI + 0x90) != local_40) {
    FUN_00d64850();
    lVar13 = *(longlong *)(unaff_RDI + 0x90);
    if (lVar13 != local_40) {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
      *(longlong *)(unaff_RDI + 0x90) = local_40;
      if (lVar13 != 0) {
        FUN_00d50b20();
      }
    }
    FUN_00d64910();
  }
  if (*(longlong *)(unaff_RDI + 0xa0) != local_70) {
    FUN_00d64850();
    lVar13 = *(longlong *)(unaff_RDI + 0xa0);
    if (lVar13 != local_70) {
      if (local_70 != 0) {
        FUN_00d50b00();
      }
      *(longlong *)(unaff_RDI + 0xa0) = local_70;
      if (lVar13 != 0) {
        FUN_00d50b20();
      }
    }
    FUN_00d64910();
  }
  pfVar2 = *(float **)(local_40 + 0x10);
  bVar17 = true;
  if ((DAT_023b36e4 <= *pfVar2) && (*pfVar2 <= DAT_023b36e8)) {
    uVar16 = 0xffffffffffffffff;
    while ((DAT_023b36e4 <= pfVar2[uVar16 + 2] && (pfVar2[uVar16 + 2] <= DAT_023b36e8))) {
      if ((pfVar2[uVar16 + 3] < DAT_023b36e4) || (DAT_023b36e8 < pfVar2[uVar16 + 3])) {
        uVar16 = uVar16 + 2;
        goto LAB_017f3ae5;
      }
      if ((pfVar2[uVar16 + 4] < DAT_023b36e4) || (DAT_023b36e8 < pfVar2[uVar16 + 4])) {
        uVar16 = uVar16 + 3;
        goto LAB_017f3ae5;
      }
      if (uVar16 == 0x7fb) {
        uVar16 = 0x7ff;
        goto LAB_017f3ae5;
      }
      lVar13 = uVar16 + 5;
      uVar16 = uVar16 + 4;
      if ((pfVar2[lVar13] < DAT_023b36e4) || (DAT_023b36e8 < pfVar2[lVar13])) goto LAB_017f3ae5;
    }
    uVar16 = uVar16 + 1;
LAB_017f3ae5:
    bVar17 = uVar16 < 0x7ff;
  }
  if ((bool)*(char *)(unaff_RDI + 0x7a) != bVar17) {
    FUN_00d64850();
    *(bool *)(unaff_RDI + 0x7a) = bVar17;
    FUN_00d64910();
  }
  if ((bVar18) && (local_58 != 0)) {
    FUN_00d50b20();
  }
  if (!(bool)(bVar3 ^ 1U | local_70 == 0)) {
    FUN_00d50b20();
  }
  if (local_40 != 0) {
    FUN_00d50b20();
    FUN_00d50b20();
    FUN_00d50b20();
  }
  return;
}


