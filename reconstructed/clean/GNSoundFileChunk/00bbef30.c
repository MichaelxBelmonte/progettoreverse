// Function: FUN_00bbef30
// Address: 00bbef30
// Size: 2023 bytes
// Class: GNSoundFileChunk
// === GNSoundFileChunk properties ===
//                   _isLoop
//                   _beats
//                   _tonalKey
//                   _tonalGender
//                   _readBuffer
//                   _channelCount
//                   _bitsPerSample
//                   _isFloat
//                   _isLittleEndian


uint64_t FUN_00bbef30(int param_1,int64_t param_2)

{
  int iVar1;
  float *pfVar2;
  char cVar3;
  uint64_t uVar4;
  char cVar5;
  float *pfVar6;
  int64_t arg1;
  int iVar7;
  int64_t this_ptr;
  int iVar8;
  uint64_t uVar9;
  int64_t lVar10;
  int64_t lVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  uint8_t auVar18 [16];
  float fVar19;
  float fVar20;
  float local_88;
  uint64_t local_40;
  int local_38;
  
  local_40 = FUN_00b33130();
  if (*(char *)(this_ptr + 0xe1) == '\0') {
    cVar5 = *(char *)(this_ptr + 0xe0);
    local_38 = *(int *)(this_ptr + 0xfc);
    if (local_38 == 0) {
      if (cVar5 == '\0') {
        fVar12 = *(float *)(this_ptr + 0xc0);
        fVar16 = *(float *)(this_ptr + 0xc4);
        fVar13 = *(float *)(this_ptr + 200);
        goto LAB_00bbf33e;
      }
      *(void*)(this_ptr + 0xe0) = 0;
      local_88 = (float)*(void*)(this_ptr + 0xc0);
      fVar12 = (float)((uint64_t)*(void*)(this_ptr + 0xc0) >> 0x20);
      fVar16 = *(float *)(this_ptr + 200);
      fVar20 = *(float *)(this_ptr + 0x98) * g_023d9210;
      fVar13 = g_0241142c - fVar20;
      fVar13 = fVar13 * fVar13 * fVar13 * g_02391098;
      *(float *)(this_ptr + 0xb0) = fVar13;
      *(float *)(this_ptr + 0xbc) = fVar13 * *(float *)(this_ptr + 0xb4);
      fVar20 = (g_0240f120 / (float)*(double *)(this_ptr + 0x18)) * fVar20 * g_023d9214;
      fVar13 = g_023d9214;
      if (fVar20 <= g_023d9214) {
        fVar13 = fVar20;
      }
      *(float *)(this_ptr + 0xd0) = fVar13;
      *(float *)(this_ptr + 0xac) = fVar13;
      fVar17 = g_024229f0 * fVar13 * fVar13 + g_023d9218 * fVar13 + g_02390d00;
      *(float *)(this_ptr + 0xc0) = fVar17;
      fVar15 = g_02390124;
      fVar20 = g_0239011c;
      fVar14 = (fVar17 + g_02390124) * g_0239011c;
      *(float *)(this_ptr + 0xc4) = fVar14;
      *(float *)(this_ptr + 0xcc) = g_0240e354 * fVar13 * fVar13 + fVar15;
      fVar20 = (*(float *)(this_ptr + 0xb4) * fVar20 + fVar20) *
               (fVar13 * fVar13 * fVar13 * g_024112b4 + g_0239428c * fVar13 + g_02394254) *
               *(float *)(this_ptr + 0xa4) * fVar20;
      *(float *)(this_ptr + 200) = fVar20;
      auVar18 = insertps(ZEXT416((uint)fVar17),ZEXT416((uint)fVar14),0x10);
      fVar15 = auVar18._0_4_ - local_88;
      fVar17 = auVar18._4_4_ - fVar12;
      *(float *)(this_ptr + 0xf0) = fVar15;
      *(float *)(this_ptr + 0xf4) = fVar17;
      fVar20 = fVar20 - fVar16;
      *(float *)(this_ptr + 0xf8) = fVar20;
      fVar13 = (float)((uint)fVar15 & g_02390140);
      if ((float)((uint)fVar15 & g_02390140) <= (float)((uint)fVar17 & _UNK_02390144)) {
        fVar13 = (float)((uint)fVar17 & _UNK_02390144);
      }
      local_38 = (int)(fVar13 / g_023d921c);
      *(int *)(this_ptr + 0xfc) = local_38;
      cVar5 = '\x01';
      cVar3 = '\x01';
      if (0 < local_38) {
        fVar13 = (float)local_38;
        *(float *)(this_ptr + 0xf0) = fVar15 / fVar13;
        *(float *)(this_ptr + 0xf4) = fVar17 / fVar13;
        *(float *)(this_ptr + 0xf8) = fVar20 / fVar13;
        goto LAB_00bbf377;
      }
      goto LAB_00bbf370;
    }
  }
  else {
    fVar16 = *(float *)(this_ptr + 0x98) * g_023d9210;
    fVar12 = g_0241142c - fVar16;
    fVar12 = fVar12 * fVar12 * fVar12 * g_02391098;
    *(float *)(this_ptr + 0xb0) = fVar12;
    *(float *)(this_ptr + 0xbc) = fVar12 * *(float *)(this_ptr + 0xb4);
    fVar12 = (g_0240f120 / (float)*(double *)(this_ptr + 0x18)) * fVar16 * g_023d9214;
    fVar13 = g_023d9214;
    if (fVar12 <= g_023d9214) {
      fVar13 = fVar12;
    }
    *(float *)(this_ptr + 0xd0) = fVar13;
    *(float *)(this_ptr + 0xac) = fVar13;
    fVar12 = g_024229f0 * fVar13 * fVar13 + g_023d9218 * fVar13 + g_02390d00;
    *(float *)(this_ptr + 0xc0) = fVar12;
    fVar15 = g_02390124;
    fVar20 = g_0239011c;
    fVar16 = (fVar12 + g_02390124) * g_0239011c;
    *(float *)(this_ptr + 0xc4) = fVar16;
    *(float *)(this_ptr + 0xcc) = g_0240e354 * fVar13 * fVar13 + fVar15;
    fVar13 = (*(float *)(this_ptr + 0xb4) * fVar20 + fVar20) *
             (fVar13 * fVar13 * fVar13 * g_024112b4 + g_0239428c * fVar13 + g_02394254) *
             *(float *)(this_ptr + 0xa4) * fVar20;
    *(float *)(this_ptr + 200) = fVar13;
    *(void*)(this_ptr + 0xe0) = 0;
    local_38 = *(int *)(this_ptr + 0xfc);
    if (local_38 == 0) {
LAB_00bbf33e:
      *(float *)(this_ptr + 0xe4) = fVar12;
      *(float *)(this_ptr + 0xe8) = fVar16;
      *(float *)(this_ptr + 0xec) = fVar13;
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
  local_88 = *(float *)(this_ptr + 0xe4);
  fVar12 = *(float *)(this_ptr + 0xe8);
  fVar16 = *(float *)(this_ptr + 0xec);
LAB_00bbf377:
  if (0 < (int)local_40) {
    iVar1 = *(int *)(this_ptr + 0x94);
    iVar7 = iVar1 + -1;
    uVar4 = local_40 & 0xffffffff;
    local_40 = 0;
    fVar13 = g_023d9220;
    do {
      if (cVar5 != '\0' || local_38 != 0) {
        *(float *)(this_ptr + 0xe4) = local_88;
        *(float *)(this_ptr + 0xe8) = fVar12;
        *(float *)(this_ptr + 0xec) = fVar16;
        *(int *)(this_ptr + 0xfc) = local_38;
      }
      pfVar6 = *(float **)(param_2 + local_40 * 8);
      *pfVar6 = **(float **)(arg1 + local_40 * 8);
      iVar8 = param_1;
      while (iVar8 != 0) {
        if (2 < *(int *)(this_ptr + 0x94)) {
          uVar9 = (uint64_t)(*(int *)(this_ptr + 0x94) - 1U >> 1);
          fVar20 = *pfVar6;
          lVar10 = uVar9 + 1;
          lVar11 = (uVar4 * uVar9 + local_40) * 8;
          do {
            pfVar2 = *(float **)(*(int64_t *)(this_ptr + 0xd8) + lVar11);
            fVar15 = pfVar2[3];
            fVar14 = (float)FUN_00bbc5a0((fVar15 * fVar15 * fVar15 * fVar13 + fVar15) *
                                         *(float *)(this_ptr + 0xbc));
            fVar17 = g_023d9224;
            fVar15 = g_02390d00;
            fVar13 = g_02390124;
            fVar20 = fVar20 - fVar14;
            pfVar2[4] = fVar20;
            g_02765550 = g_02765550 * 0xbb38435 + 0x3619636b;
            fVar13 = ((float)g_02765550 * fVar17 + fVar15) * *(float *)(this_ptr + 0xec) + fVar13
            ;
            fVar19 = *(float *)(this_ptr + 0xe4) * fVar13;
            fVar13 = fVar13 * *(float *)(this_ptr + 0xe8);
            fVar15 = (pfVar2[9] + fVar20) * fVar13 - *pfVar2 * fVar19;
            *pfVar2 = fVar15;
            fVar17 = (pfVar2[5] + fVar15) * fVar13 - pfVar2[1] * fVar19;
            pfVar2[1] = fVar17;
            fVar14 = (pfVar2[6] + fVar17) * fVar13 - pfVar2[2] * fVar19;
            pfVar2[2] = fVar14;
            fVar19 = (pfVar2[7] + fVar14) * fVar13 - fVar19 * pfVar2[3];
            pfVar2[3] = fVar19;
            pfVar2[9] = pfVar2[4];
            *(void*)(pfVar2 + 5) = *(void*)pfVar2;
            *(void*)(pfVar2 + 7) = *(void*)(pfVar2 + 2);
            pfVar2[0xf] = fVar17;
            pfVar2[0x10] = fVar19;
            pfVar2[0x11] = fVar20 - fVar17;
            pfVar2[0x12] = fVar20 - fVar19;
            fVar13 = g_023d9220;
            pfVar2[0x13] = ((fVar19 - fVar17) + fVar19) - fVar17;
            pfVar2[0x14] = ((fVar20 - fVar17) + fVar14) - fVar15;
            pfVar2[0x15] = fVar14 + fVar20;
            pfVar2[0x16] = fVar15 + fVar20;
            fVar20 = pfVar2[(int64_t)*(int *)(this_ptr + 0x90) * 2 + 0x10];
            *pfVar6 = fVar20;
            lVar10 = lVar10 + -1;
            lVar11 = lVar11 + uVar4 * -8;
          } while (1 < lVar10);
        }
        iVar8 = iVar8 + -1;
        FUN_00bbf730(iVar7 - ((iVar1 - (iVar7 >> 0x1f)) - 1U & 0xfffffffe),
                     *(void*)(*(int64_t *)(this_ptr + 0xd8) + local_40 * 8));
        if (*(int *)(this_ptr + 0xfc) != 0) {
          *(float *)(this_ptr + 0xe4) = *(float *)(this_ptr + 0xf0) + *(float *)(this_ptr + 0xe4)
          ;
          *(float *)(this_ptr + 0xe8) = *(float *)(this_ptr + 0xf4) + *(float *)(this_ptr + 0xe8)
          ;
          *(float *)(this_ptr + 0xec) = *(float *)(this_ptr + 0xf8) + *(float *)(this_ptr + 0xec)
          ;
          *(int *)(this_ptr + 0xfc) = *(int *)(this_ptr + 0xfc) + -1;
        }
        pfVar6 = pfVar6 + 1;
        fVar13 = g_023d9220;
      }
      local_40 = local_40 + 1;
    } while (local_40 != uVar4);
  }
  return local_40;
}

