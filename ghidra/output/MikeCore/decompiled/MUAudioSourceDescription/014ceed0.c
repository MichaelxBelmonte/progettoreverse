// Function: FUN_014ceed0
// Address: 014ceed0
// Size: 2760 bytes
// Class: MUAudioSourceDescription


/* WARNING: Removing unreachable block (ram,0x014cf8fc) */
/* WARNING: Removing unreachable block (ram,0x014cf908) */
/* WARNING: Removing unreachable block (ram,0x014cf032) */
/* WARNING: Removing unreachable block (ram,0x014cf03b) */
/* WARNING: Removing unreachable block (ram,0x014cf0d9) */
/* WARNING: Removing unreachable block (ram,0x014cf0e2) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_014ceed0(pthread_key_t param_1)

{
  float *pfVar1;
  float fVar2;
  uint uVar3;
  undefined8 *puVar4;
  double dVar5;
  double dVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  bool bVar12;
  bool bVar13;
  uint uVar14;
  longlong lVar15;
  double dVar16;
  bool bVar17;
  uint uVar18;
  int iVar19;
  void *pvVar20;
  ulonglong uVar21;
  longlong lVar22;
  undefined8 *puVar23;
  undefined8 *puVar24;
  pthread_key_t pVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  ulonglong uVar28;
  int iVar29;
  ulonglong uVar30;
  undefined4 uVar31;
  float fVar32;
  longlong local_50;
  char local_48;
  longlong local_40;
  longlong local_38;
  
  (**(code **)(*unaff_RDI + 0x378))();
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if (local_50 != 0) {
    (**(code **)(*unaff_RDI + 0x378))();
    lVar22 = *unaff_RSI;
    if (lVar22 == local_50) {
      if (((char)unaff_RSI[1] != '\0') || (local_50 == 0)) goto LAB_014cefab;
      if (local_48 == '\0') {
        FUN_00d50b00();
        goto LAB_014cefa6;
      }
    }
    else {
      lVar15 = unaff_RSI[1];
      if (local_48 == '\0') {
        if (local_50 != 0) {
          FUN_00d50b00();
        }
        *unaff_RSI = local_50;
        if (((char)lVar15 != '\0') && (lVar22 != 0)) {
          FUN_00d50b20();
        }
LAB_014cefa6:
        *(undefined1 *)(unaff_RSI + 1) = 1;
LAB_014cefab:
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
        goto LAB_014cefbf;
      }
      *unaff_RSI = local_50;
      if (((char)lVar15 != '\0') && (lVar22 != 0)) {
        FUN_00d50b20();
      }
    }
    *(undefined1 *)(unaff_RSI + 1) = 1;
  }
LAB_014cefbf:
  if (*(int *)(unaff_RDI[0x21] + 0xc) == 0) {
    return;
  }
  pvVar20 = _pthread_getspecific(param_1);
  if (pvVar20 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0132d790();
  if ((local_48 == '\0') && (local_50 != 0)) {
    FUN_00d50b00();
  }
  dVar16 = DAT_0238fee8;
  uVar3 = *(uint *)(local_50 + 0x30);
  uVar30 = (ulonglong)(int)uVar3;
  dVar5 = DAT_0238fee8 / *(double *)(local_50 + 0x38);
  uVar21 = (**(code **)(*unaff_RDI + 0x388))();
  uVar26 = (uVar21 | uVar30) >> 0x20;
  if (uVar26 == 0) {
    iVar19 = (int)((uVar21 & 0xffffffff) / (ulonglong)uVar3);
    uVar21 = (uVar21 & 0xffffffff) % (ulonglong)uVar3;
  }
  else {
    iVar19 = (int)((longlong)uVar21 / (longlong)uVar30);
    uVar21 = (longlong)uVar21 % (longlong)uVar30;
  }
  lVar22 = (**(code **)(*unaff_RDI + 0x380))(uVar26,uVar21);
  uVar18 = iVar19 + 2;
  FUN_00c8e690();
  if ((local_48 == '\0') && (local_50 != 0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  iVar29 = 0;
  if (iVar19 < -1) {
    bVar13 = false;
    local_38 = 0;
    bVar12 = false;
    local_40 = 0;
  }
  else {
    uVar21 = 1;
    if (1 < (int)uVar18) {
      uVar21 = (ulonglong)uVar18;
    }
    uVar26 = 0;
    local_40 = 0;
    bVar12 = false;
    local_38 = 0;
    bVar13 = false;
    do {
      dVar6 = (double)(iVar29 + lVar22) * (dVar16 / (double)(int)uVar3);
      uVar31 = FUN_014c36d0(iVar29,(int)dVar6);
      if (local_50 == local_40) {
        if ((bVar12) || (local_50 == 0)) {
          if ((local_48 != '\0') && (local_50 != 0)) {
            uVar31 = FUN_00d50b20();
          }
        }
        else {
          bVar12 = true;
          if (local_48 == '\0') {
            uVar31 = FUN_00d50b00();
          }
        }
      }
      else if (local_48 == '\0') {
        if (local_50 != 0) {
          uVar31 = FUN_00d50b00();
        }
        if ((!bVar12) || (local_40 == 0)) goto LAB_014cf280;
        uVar31 = FUN_00d50b20();
        local_40 = local_50;
        bVar12 = true;
      }
      else if ((bVar12) && (local_40 != 0)) {
        uVar31 = FUN_00d50b20();
        local_40 = local_50;
        bVar12 = true;
      }
      else {
LAB_014cf280:
        local_40 = local_50;
        bVar12 = true;
      }
      FUN_014c36d0(uVar31,(int)dVar6 + 1);
      if (local_50 == local_38) {
        lVar15 = local_38;
        if ((bVar13) || (local_50 == 0)) {
          bVar17 = bVar13;
          if ((local_48 != '\0') && (local_50 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          bVar17 = true;
          if (local_48 == '\0') {
            FUN_00d50b00();
          }
        }
      }
      else if (local_48 == '\0') {
        if (local_50 != 0) {
          FUN_00d50b00();
        }
        lVar15 = local_50;
        bVar17 = true;
        if (bVar13) {
          if (local_38 == 0) goto LAB_014cf370;
          FUN_00d50b20();
          lVar15 = local_50;
        }
      }
      else if ((bVar13) && (local_38 != 0)) {
        FUN_00d50b20();
        lVar15 = local_50;
        bVar17 = true;
      }
      else {
LAB_014cf370:
        lVar15 = local_50;
        bVar17 = true;
      }
      bVar13 = bVar17;
      local_38 = lVar15;
      fVar32 = 0.0;
      if ((((local_40 != 0) && (fVar32 = 0.0, local_38 != 0)) &&
          (fVar2 = *(float *)(local_40 + 0x10), !NAN(fVar2))) && (!NAN(*(float *)(local_38 + 0x10)))
         ) {
        fVar32 = (*(float *)(local_38 + 0x10) - fVar2) * ((float)dVar6 - (float)(int)dVar6) + fVar2;
      }
      *(float *)(*(longlong *)(local_50 + 0x10) + uVar26 * 4) = fVar32;
      uVar26 = uVar26 + 1;
      iVar29 = iVar29 + uVar3;
    } while (uVar21 != uVar26);
  }
  puVar23 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar23 = &DAT_025f0d98;
  puVar23[2] = 0;
  puVar23[3] = 0;
  puVar23[4] = 0;
  puVar23[5] = 0;
  puVar23[6] = 0;
  puVar23[7] = 0;
  (*DAT_025f0db0)();
  FUN_015c1480(DAT_0241c3ec);
  fVar11 = _UNK_024114ac;
  fVar10 = _UNK_024114a8;
  fVar2 = _UNK_024114a4;
  uVar14 = _DAT_023945e0;
  fVar32 = DAT_0239426c;
  if (-2 < iVar19) {
    lVar22 = *(longlong *)(local_50 + 0x10);
    uVar21 = 1;
    if (1 < (int)uVar18) {
      uVar21 = (ulonglong)uVar18;
    }
    if ((uint)uVar21 < 8) {
      uVar26 = 0;
    }
    else {
      uVar26 = (ulonglong)((uint)uVar21 & 0x7ffffff8);
      uVar27 = 0;
      do {
        pfVar1 = (float *)(lVar22 + uVar27 * 4);
        fVar7 = pfVar1[1];
        fVar8 = pfVar1[2];
        fVar9 = pfVar1[3];
        if (*pfVar1 < fVar32) {
          *(uint *)(lVar22 + uVar27 * 4) = (uint)*pfVar1 ^ uVar14;
        }
        if (fVar7 < fVar2) {
          *(uint *)(lVar22 + 4 + uVar27 * 4) = (uint)fVar7 ^ uVar14;
        }
        if (fVar8 < fVar10) {
          *(uint *)(lVar22 + 8 + uVar27 * 4) = (uint)fVar8 ^ uVar14;
        }
        if (fVar9 < fVar11) {
          *(uint *)(lVar22 + 0xc + uVar27 * 4) = (uint)fVar9 ^ uVar14;
        }
        pfVar1 = (float *)(lVar22 + 0x10 + uVar27 * 4);
        fVar7 = pfVar1[1];
        fVar8 = pfVar1[2];
        fVar9 = pfVar1[3];
        if (*pfVar1 < fVar32) {
          *(uint *)(lVar22 + 0x10 + uVar27 * 4) = (uint)*pfVar1 ^ uVar14;
        }
        if (fVar7 < fVar2) {
          *(uint *)(lVar22 + 0x14 + uVar27 * 4) = (uint)fVar7 ^ uVar14;
        }
        if (fVar8 < fVar10) {
          *(uint *)(lVar22 + 0x18 + uVar27 * 4) = (uint)fVar8 ^ uVar14;
        }
        if (fVar9 < fVar11) {
          *(uint *)(lVar22 + 0x1c + uVar27 * 4) = (uint)fVar9 ^ uVar14;
        }
        uVar27 = uVar27 + 8;
      } while (uVar26 != uVar27);
      uVar14 = _DAT_023945e0;
      fVar32 = DAT_0239426c;
      if (uVar26 == uVar21) goto LAB_014cf61b;
    }
    do {
      fVar2 = *(float *)(lVar22 + uVar26 * 4);
      if (fVar2 < fVar32) {
        *(uint *)(lVar22 + uVar26 * 4) = (uint)fVar2 ^ uVar14;
      }
      uVar26 = uVar26 + 1;
    } while (uVar21 != uVar26);
  }
LAB_014cf61b:
  uVar26 = (**(code **)(*unaff_RDI + 0x398))();
  uVar14 = _DAT_023945e0;
  uVar21 = (uVar26 | uVar30) >> 0x20;
  if (uVar21 == 0) {
    iVar19 = (int)((uVar26 & 0xffffffff) / (ulonglong)uVar3);
    uVar27 = (uVar26 & 0xffffffff) % (ulonglong)uVar3;
  }
  else {
    uVar27 = (longlong)uVar26 % (longlong)uVar30;
    iVar19 = (int)((longlong)uVar26 / (longlong)uVar30);
  }
  if (iVar19 < (int)uVar18) {
    uVar21 = *(ulonglong *)(local_50 + 0x10);
    uVar27 = (ulonglong)iVar19;
    uVar26 = (longlong)(int)uVar18 - uVar27;
    uVar3 = _DAT_023945e0;
    if (7 < uVar26) {
      uVar28 = uVar26 & 0xfffffffffffffff8;
      uVar27 = uVar27 + uVar28;
      lVar22 = uVar21 + (longlong)iVar19 * 4;
      uVar30 = 0;
      do {
        pfVar1 = (float *)(lVar22 + uVar30 * 4);
        fVar32 = pfVar1[1];
        fVar2 = pfVar1[2];
        fVar10 = pfVar1[3];
        if (0.0 < *pfVar1) {
          *(uint *)(lVar22 + uVar30 * 4) = (uint)*pfVar1 ^ uVar14;
        }
        if (fVar32 <= 0.0) {
          if (fVar2 > 0.0) goto LAB_014cf75c;
LAB_014cf71d:
          if (0.0 < fVar10) goto LAB_014cf729;
LAB_014cf778:
          pfVar1 = (float *)(lVar22 + 0x10 + uVar30 * 4);
          fVar32 = *pfVar1;
          fVar2 = pfVar1[1];
          fVar10 = pfVar1[2];
          fVar11 = pfVar1[3];
        }
        else {
          *(uint *)(lVar22 + 4 + uVar30 * 4) = (uint)fVar32 ^ uVar14;
          if (fVar2 <= 0.0) goto LAB_014cf71d;
LAB_014cf75c:
          *(uint *)(lVar22 + 8 + uVar30 * 4) = (uint)fVar2 ^ uVar14;
          if (0.0 >= fVar10) goto LAB_014cf778;
LAB_014cf729:
          *(uint *)(lVar22 + 0xc + uVar30 * 4) = (uint)fVar10 ^ uVar14;
          pfVar1 = (float *)(lVar22 + 0x10 + uVar30 * 4);
          fVar32 = *pfVar1;
          fVar2 = pfVar1[1];
          fVar10 = pfVar1[2];
          fVar11 = pfVar1[3];
        }
        if (0.0 < fVar32) {
          *(uint *)(lVar22 + 0x10 + uVar30 * 4) = (uint)fVar32 ^ uVar14;
        }
        if (0.0 < fVar2) {
          *(uint *)(lVar22 + 0x14 + uVar30 * 4) = (uint)fVar2 ^ uVar14;
        }
        if (0.0 < fVar10) {
          *(uint *)(lVar22 + 0x18 + uVar30 * 4) = (uint)fVar10 ^ uVar14;
        }
        if (0.0 < fVar11) {
          *(uint *)(lVar22 + 0x1c + uVar30 * 4) = (uint)fVar11 ^ uVar14;
        }
        uVar30 = uVar30 + 8;
      } while (uVar28 != uVar30);
      uVar3 = _DAT_023945e0;
      if (uVar26 == uVar28) goto LAB_014cf817;
    }
    do {
      fVar32 = *(float *)(uVar21 + uVar27 * 4);
      if (0.0 < fVar32) {
        *(uint *)(uVar21 + uVar27 * 4) = (uint)fVar32 ^ uVar3;
      }
      uVar27 = uVar27 + 1;
    } while ((longlong)(int)uVar18 != uVar27);
  }
LAB_014cf817:
  puVar24 = (undefined8 *)FUN_00e8fc40(uVar21,uVar27);
  FUN_00d4ff40();
  *(undefined1 *)(puVar24 + 7) = 0;
  *(undefined4 *)((longlong)puVar24 + 0x3c) = 0;
  *(undefined2 *)(puVar24 + 8) = 0;
  pVar25 = 0x25dc9e8;
  *puVar24 = &DAT_025dc9e8;
  puVar24[9] = 0;
  puVar24[10] = 0;
  (*DAT_025dca00)();
  pvVar20 = _pthread_getspecific(pVar25);
  if (pvVar20 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013eb950(SUB84((double)(float)dVar5,0));
  pvVar20 = _pthread_getspecific(pVar25);
  if (pvVar20 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013eb890();
  if ((undefined8 *)unaff_RDI[9] != puVar24) {
    FUN_00d64850();
    puVar4 = (undefined8 *)unaff_RDI[9];
    if (puVar4 != puVar24) {
      FUN_00d50b00();
      unaff_RDI[9] = (longlong)puVar24;
      if (puVar4 != (undefined8 *)0x0) {
        FUN_00d50b20();
      }
    }
    FUN_00d64910();
  }
  FUN_00d50b20();
  if (puVar23 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  if ((bVar13) && (local_38 != 0)) {
    FUN_00d50b20();
  }
  if ((bVar12) && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if (local_50 != 0) {
    FUN_00d50b20();
    FUN_00d50b20();
  }
  return;
}


