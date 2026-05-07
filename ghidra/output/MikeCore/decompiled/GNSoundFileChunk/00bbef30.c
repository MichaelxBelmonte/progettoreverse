// Function: FUN_00bbef30
// Address: 00bbef30
// Size: 2023 bytes
// Class: GNSoundFileChunk


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_00bbef30(int param_1,longlong param_2)

{
  int iVar1;
  float *pfVar2;
  char cVar3;
  ulonglong uVar4;
  char cVar5;
  float *pfVar6;
  longlong unaff_RSI;
  int iVar7;
  longlong unaff_RDI;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 auVar18 [16];
  float fVar19;
  float fVar20;
  float local_88;
  ulonglong local_40;
  int local_38;
  
  local_40 = FUN_00b33130();
  if (*(char *)(unaff_RDI + 0xe1) == '\0') {
    cVar5 = *(char *)(unaff_RDI + 0xe0);
    local_38 = *(int *)(unaff_RDI + 0xfc);
    if (local_38 == 0) {
      if (cVar5 == '\0') {
        fVar12 = *(float *)(unaff_RDI + 0xc0);
        fVar16 = *(float *)(unaff_RDI + 0xc4);
        fVar13 = *(float *)(unaff_RDI + 200);
        goto LAB_00bbf33e;
      }
      *(undefined1 *)(unaff_RDI + 0xe0) = 0;
      local_88 = (float)*(undefined8 *)(unaff_RDI + 0xc0);
      fVar12 = (float)((ulonglong)*(undefined8 *)(unaff_RDI + 0xc0) >> 0x20);
      fVar16 = *(float *)(unaff_RDI + 200);
      fVar20 = *(float *)(unaff_RDI + 0x98) * _DAT_023d9210;
      fVar13 = DAT_0241142c - fVar20;
      fVar13 = fVar13 * fVar13 * fVar13 * DAT_02391098;
      *(float *)(unaff_RDI + 0xb0) = fVar13;
      *(float *)(unaff_RDI + 0xbc) = fVar13 * *(float *)(unaff_RDI + 0xb4);
      fVar20 = (DAT_0240f120 / (float)*(double *)(unaff_RDI + 0x18)) * fVar20 * DAT_023d9214;
      fVar13 = DAT_023d9214;
      if (fVar20 <= DAT_023d9214) {
        fVar13 = fVar20;
      }
      *(float *)(unaff_RDI + 0xd0) = fVar13;
      *(float *)(unaff_RDI + 0xac) = fVar13;
      fVar17 = DAT_024229f0 * fVar13 * fVar13 + DAT_023d9218 * fVar13 + DAT_02390d00;
      *(float *)(unaff_RDI + 0xc0) = fVar17;
      fVar15 = DAT_02390124;
      fVar20 = DAT_0239011c;
      fVar14 = (fVar17 + DAT_02390124) * DAT_0239011c;
      *(float *)(unaff_RDI + 0xc4) = fVar14;
      *(float *)(unaff_RDI + 0xcc) = DAT_0240e354 * fVar13 * fVar13 + fVar15;
      fVar20 = (*(float *)(unaff_RDI + 0xb4) * fVar20 + fVar20) *
               (fVar13 * fVar13 * fVar13 * _DAT_024112b4 + DAT_0239428c * fVar13 + DAT_02394254) *
               *(float *)(unaff_RDI + 0xa4) * fVar20;
      *(float *)(unaff_RDI + 200) = fVar20;
      auVar18 = insertps(ZEXT416((uint)fVar17),ZEXT416((uint)fVar14),0x10);
      fVar15 = auVar18._0_4_ - local_88;
      fVar17 = auVar18._4_4_ - fVar12;
      *(float *)(unaff_RDI + 0xf0) = fVar15;
      *(float *)(unaff_RDI + 0xf4) = fVar17;
      fVar20 = fVar20 - fVar16;
      *(float *)(unaff_RDI + 0xf8) = fVar20;
      fVar13 = (float)((uint)fVar15 & _DAT_02390140);
      if ((float)((uint)fVar15 & _DAT_02390140) <= (float)((uint)fVar17 & _UNK_02390144)) {
        fVar13 = (float)((uint)fVar17 & _UNK_02390144);
      }
      local_38 = (int)(fVar13 / _DAT_023d921c);
      *(int *)(unaff_RDI + 0xfc) = local_38;
      cVar5 = '\x01';
      cVar3 = '\x01';
      if (0 < local_38) {
        fVar13 = (float)local_38;
        *(float *)(unaff_RDI + 0xf0) = fVar15 / fVar13;
        *(float *)(unaff_RDI + 0xf4) = fVar17 / fVar13;
        *(float *)(unaff_RDI + 0xf8) = fVar20 / fVar13;
        goto LAB_00bbf377;
      }
      goto LAB_00bbf370;
    }
  }
  else {
    fVar16 = *(float *)(unaff_RDI + 0x98) * _DAT_023d9210;
    fVar12 = DAT_0241142c - fVar16;
    fVar12 = fVar12 * fVar12 * fVar12 * DAT_02391098;
    *(float *)(unaff_RDI + 0xb0) = fVar12;
    *(float *)(unaff_RDI + 0xbc) = fVar12 * *(float *)(unaff_RDI + 0xb4);
    fVar12 = (DAT_0240f120 / (float)*(double *)(unaff_RDI + 0x18)) * fVar16 * DAT_023d9214;
    fVar13 = DAT_023d9214;
    if (fVar12 <= DAT_023d9214) {
      fVar13 = fVar12;
    }
    *(float *)(unaff_RDI + 0xd0) = fVar13;
    *(float *)(unaff_RDI + 0xac) = fVar13;
    fVar12 = DAT_024229f0 * fVar13 * fVar13 + DAT_023d9218 * fVar13 + DAT_02390d00;
    *(float *)(unaff_RDI + 0xc0) = fVar12;
    fVar15 = DAT_02390124;
    fVar20 = DAT_0239011c;
    fVar16 = (fVar12 + DAT_02390124) * DAT_0239011c;
    *(float *)(unaff_RDI + 0xc4) = fVar16;
    *(float *)(unaff_RDI + 0xcc) = DAT_0240e354 * fVar13 * fVar13 + fVar15;
    fVar13 = (*(float *)(unaff_RDI + 0xb4) * fVar20 + fVar20) *
             (fVar13 * fVar13 * fVar13 * _DAT_024112b4 + DAT_0239428c * fVar13 + DAT_02394254) *
             *(float *)(unaff_RDI + 0xa4) * fVar20;
    *(float *)(unaff_RDI + 200) = fVar13;
    *(undefined2 *)(unaff_RDI + 0xe0) = 0;
    local_38 = *(int *)(unaff_RDI + 0xfc);
    if (local_38 == 0) {
LAB_00bbf33e:
      *(float *)(unaff_RDI + 0xe4) = fVar12;
      *(float *)(unaff_RDI + 0xe8) = fVar16;
      *(float *)(unaff_RDI + 0xec) = fVar13;
      local_88 = 0.0;
      fVar12 = 0.0;
      fVar16 = 0.0;
      cVar3 = '\0';
LAB_00bbf370:
      cVar5 = cVar3;
      local_38 = 0;
      goto LAB_00bbf377;
    }
    cVar5 = '\0';
  }
  local_88 = *(float *)(unaff_RDI + 0xe4);
  fVar12 = *(float *)(unaff_RDI + 0xe8);
  fVar16 = *(float *)(unaff_RDI + 0xec);
LAB_00bbf377:
  if (0 < (int)local_40) {
    iVar1 = *(int *)(unaff_RDI + 0x94);
    iVar7 = iVar1 + -1;
    uVar4 = local_40 & 0xffffffff;
    local_40 = 0;
    fVar13 = DAT_023d9220;
    do {
      if (cVar5 != '\0' || local_38 != 0) {
        *(float *)(unaff_RDI + 0xe4) = local_88;
        *(float *)(unaff_RDI + 0xe8) = fVar12;
        *(float *)(unaff_RDI + 0xec) = fVar16;
        *(int *)(unaff_RDI + 0xfc) = local_38;
      }
      pfVar6 = *(float **)(param_2 + local_40 * 8);
      *pfVar6 = **(float **)(unaff_RSI + local_40 * 8);
      iVar8 = param_1;
      while (iVar8 != 0) {
        if (2 < *(int *)(unaff_RDI + 0x94)) {
          uVar9 = (ulonglong)(*(int *)(unaff_RDI + 0x94) - 1U >> 1);
          fVar20 = *pfVar6;
          lVar10 = uVar9 + 1;
          lVar11 = (uVar4 * uVar9 + local_40) * 8;
          do {
            pfVar2 = *(float **)(*(longlong *)(unaff_RDI + 0xd8) + lVar11);
            fVar15 = pfVar2[3];
            fVar14 = (float)FUN_00bbc5a0((fVar15 * fVar15 * fVar15 * fVar13 + fVar15) *
                                         *(float *)(unaff_RDI + 0xbc));
            fVar17 = _DAT_023d9224;
            fVar15 = DAT_02390d00;
            fVar13 = DAT_02390124;
            fVar20 = fVar20 - fVar14;
            pfVar2[4] = fVar20;
            DAT_02765550 = DAT_02765550 * 0xbb38435 + 0x3619636b;
            fVar13 = ((float)DAT_02765550 * fVar17 + fVar15) * *(float *)(unaff_RDI + 0xec) + fVar13
            ;
            fVar19 = *(float *)(unaff_RDI + 0xe4) * fVar13;
            fVar13 = fVar13 * *(float *)(unaff_RDI + 0xe8);
            fVar15 = (pfVar2[9] + fVar20) * fVar13 - *pfVar2 * fVar19;
            *pfVar2 = fVar15;
            fVar17 = (pfVar2[5] + fVar15) * fVar13 - pfVar2[1] * fVar19;
            pfVar2[1] = fVar17;
            fVar14 = (pfVar2[6] + fVar17) * fVar13 - pfVar2[2] * fVar19;
            pfVar2[2] = fVar14;
            fVar19 = (pfVar2[7] + fVar14) * fVar13 - fVar19 * pfVar2[3];
            pfVar2[3] = fVar19;
            pfVar2[9] = pfVar2[4];
            *(undefined8 *)(pfVar2 + 5) = *(undefined8 *)pfVar2;
            *(undefined8 *)(pfVar2 + 7) = *(undefined8 *)(pfVar2 + 2);
            pfVar2[0xf] = fVar17;
            pfVar2[0x10] = fVar19;
            pfVar2[0x11] = fVar20 - fVar17;
            pfVar2[0x12] = fVar20 - fVar19;
            fVar13 = DAT_023d9220;
            pfVar2[0x13] = ((fVar19 - fVar17) + fVar19) - fVar17;
            pfVar2[0x14] = ((fVar20 - fVar17) + fVar14) - fVar15;
            pfVar2[0x15] = fVar14 + fVar20;
            pfVar2[0x16] = fVar15 + fVar20;
            fVar20 = pfVar2[(longlong)*(int *)(unaff_RDI + 0x90) * 2 + 0x10];
            *pfVar6 = fVar20;
            lVar10 = lVar10 + -1;
            lVar11 = lVar11 + uVar4 * -8;
          } while (1 < lVar10);
        }
        iVar8 = iVar8 + -1;
        FUN_00bbf730(iVar7 - ((iVar1 - (iVar7 >> 0x1f)) - 1U & 0xfffffffe),
                     *(undefined8 *)(*(longlong *)(unaff_RDI + 0xd8) + local_40 * 8));
        if (*(int *)(unaff_RDI + 0xfc) != 0) {
          *(float *)(unaff_RDI + 0xe4) = *(float *)(unaff_RDI + 0xf0) + *(float *)(unaff_RDI + 0xe4)
          ;
          *(float *)(unaff_RDI + 0xe8) = *(float *)(unaff_RDI + 0xf4) + *(float *)(unaff_RDI + 0xe8)
          ;
          *(float *)(unaff_RDI + 0xec) = *(float *)(unaff_RDI + 0xf8) + *(float *)(unaff_RDI + 0xec)
          ;
          *(int *)(unaff_RDI + 0xfc) = *(int *)(unaff_RDI + 0xfc) + -1;
        }
        pfVar6 = pfVar6 + 1;
        fVar13 = DAT_023d9220;
      }
      local_40 = local_40 + 1;
    } while (local_40 != uVar4);
  }
  return local_40;
}


