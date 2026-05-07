// Function: FUN_014bfad0
// Address: 014bfad0
// Size: 1439 bytes
// Class: MUSampledFunction

void FUN_014bfad0(void* param_1)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  double dVar4;
  uint64_t uVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  char cVar29;
  int iVar30;
  uint uVar31;
  void *pvVar32;
  int64_t lVar33;
  int64_t lVar34;
  uint64_t uVar35;
  int iVar36;
  uint64_t uVar37;
  uint64_t uVar38;
  uint64_t uVar39;
  uint64_t uVar40;
  int64_t *this_ptr;
  uint uVar41;
  float fVar42;
  float fVar43;
  int64_t local_48;
  char local_40;
  
  if ((this_ptr[9] != 0) && (this_ptr[8] != 0)) {
    pvVar32 = _pthread_getspecific(param_1);
    if (pvVar32 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013eb920();
    iVar30 = *(int *)(local_48 + 0x18);
    iVar36 = iVar30 + 3;
    if (-1 < iVar30) {
      iVar36 = iVar30;
    }
    if (local_40 != '\0') {
      FUN_00d50b20();
    }
    if (3 < iVar30) {
      lVar34 = this_ptr[8];
      pvVar32 = _pthread_getspecific(param_1);
      if (pvVar32 != (void *)0x0) {
        lVar34 = this_ptr[8];
        lVar33 = FUN_00e8b990();
        if (lVar33 != 0) {
          lVar34 = *(int64_t *)(lVar34 + 0x20 + (uint64_t)(*(uint *)(lVar33 + 0x154) & 1) * 8);
        }
      }
      dVar4 = *(double *)(lVar34 + 0x50);
      pvVar32 = _pthread_getspecific(param_1);
      if (pvVar32 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013eb920();
      uVar38 = *(uint64_t *)(local_48 + 0x10);
      if (local_40 != '\0') {
        FUN_00d50b20();
      }
      pvVar32 = _pthread_getspecific(param_1);
      if (pvVar32 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013eb920();
      uVar40 = *(uint64_t *)(local_48 + 0x10);
      if (local_40 != '\0') {
        FUN_00d50b20();
      }
      uVar41 = iVar36 >> 2;
      iVar30 = FUN_00e7d850(dVar4);
      uVar31 = FUN_00e7d850(dVar4 + dVar4);
      if ((int)uVar41 < (int)uVar31) {
        uVar31 = uVar41;
      }
      uVar37 = (uint64_t)uVar31;
      FUN_00c8e690();
      if ((local_40 == '\0') && (local_48 != 0)) {
        FUN_00d50b00();
      }
      FUN_00c92170();
      FUN_00c92160();
      fVar28 = _UNK_0240f0dc;
      fVar27 = _UNK_0240f0d8;
      fVar43 = _UNK_0240f0d4;
      fVar42 = g_0240f0d0;
      if ((int)uVar31 < 1) {
        uVar38 = 0;
      }
      else {
        uVar5 = *(uint64_t *)(local_48 + 0x10);
        if (uVar31 < 8) {
          uVar35 = 0;
LAB_014bfced:
          uVar39 = ~uVar35;
          if ((uVar31 & 1) != 0) {
            fVar42 = *(float *)(uVar40 + uVar35 * 4);
            *(float *)(uVar5 + uVar35 * 4) =
                 (float)(~-(uint)(fVar42 < g_023b4df0) & (uint)fVar42) *
                 *(float *)(uVar38 + uVar35 * 4);
            uVar35 = uVar35 | 1;
          }
          fVar42 = g_023b4df0;
          if (uVar39 + uVar37 != 0) {
            do {
              fVar43 = *(float *)(uVar40 + uVar35 * 4);
              *(float *)(uVar5 + uVar35 * 4) =
                   (float)(~-(uint)(fVar43 < fVar42) & (uint)fVar43) *
                   *(float *)(uVar38 + uVar35 * 4);
              fVar43 = *(float *)(uVar40 + 4 + uVar35 * 4);
              *(float *)(uVar5 + 4 + uVar35 * 4) =
                   (float)(~-(uint)(fVar43 < fVar42) & (uint)fVar43) *
                   *(float *)(uVar38 + 4 + uVar35 * 4);
              uVar35 = uVar35 + 2;
            } while (uVar37 != uVar35);
          }
        }
        else {
          uVar39 = uVar5 + uVar37 * 4;
          uVar35 = 0;
          if ((uVar5 < uVar40 + uVar37 * 4 && uVar40 < uVar39) ||
             (uVar5 < uVar38 + uVar37 * 4 && uVar38 < uVar39)) goto LAB_014bfced;
          uVar35 = (uint64_t)(uVar31 & 0xfffffff8);
          uVar39 = (uVar35 - 8 >> 3) + 1;
          if (uVar35 - 8 == 0) {
            lVar34 = 0;
          }
          else {
            lVar33 = -(uVar39 & 0xfffffffffffffffe);
            lVar34 = 0;
            do {
              pfVar1 = (float *)(uVar40 + lVar34 * 4);
              fVar13 = pfVar1[1];
              fVar14 = pfVar1[2];
              fVar15 = pfVar1[3];
              pfVar2 = (float *)(uVar40 + 0x10 + lVar34 * 4);
              fVar16 = *pfVar2;
              fVar17 = pfVar2[1];
              fVar18 = pfVar2[2];
              fVar19 = pfVar2[3];
              pfVar2 = (float *)(uVar38 + lVar34 * 4);
              fVar20 = pfVar2[1];
              fVar21 = pfVar2[2];
              fVar22 = pfVar2[3];
              pfVar3 = (float *)(uVar38 + 0x10 + lVar34 * 4);
              fVar23 = *pfVar3;
              fVar24 = pfVar3[1];
              fVar25 = pfVar3[2];
              fVar26 = pfVar3[3];
              pfVar3 = (float *)(uVar5 + lVar34 * 4);
              *pfVar3 = *pfVar2 * (float)(-(uint)(fVar42 <= *pfVar1) & (uint)*pfVar1);
              pfVar3[1] = fVar20 * (float)(-(uint)(fVar43 <= fVar13) & (uint)fVar13);
              pfVar3[2] = fVar21 * (float)(-(uint)(fVar27 <= fVar14) & (uint)fVar14);
              pfVar3[3] = fVar22 * (float)(-(uint)(fVar28 <= fVar15) & (uint)fVar15);
              pfVar1 = (float *)(uVar5 + 0x10 + lVar34 * 4);
              *pfVar1 = fVar23 * (float)(-(uint)(fVar42 <= fVar16) & (uint)fVar16);
              pfVar1[1] = fVar24 * (float)(-(uint)(fVar43 <= fVar17) & (uint)fVar17);
              pfVar1[2] = fVar25 * (float)(-(uint)(fVar27 <= fVar18) & (uint)fVar18);
              pfVar1[3] = fVar26 * (float)(-(uint)(fVar28 <= fVar19) & (uint)fVar19);
              pfVar1 = (float *)(uVar40 + 0x20 + lVar34 * 4);
              fVar13 = pfVar1[1];
              fVar14 = pfVar1[2];
              fVar15 = pfVar1[3];
              pfVar2 = (float *)(uVar40 + 0x30 + lVar34 * 4);
              fVar16 = *pfVar2;
              fVar17 = pfVar2[1];
              fVar18 = pfVar2[2];
              fVar19 = pfVar2[3];
              pfVar2 = (float *)(uVar38 + 0x20 + lVar34 * 4);
              fVar20 = pfVar2[1];
              fVar21 = pfVar2[2];
              fVar22 = pfVar2[3];
              pfVar3 = (float *)(uVar38 + 0x30 + lVar34 * 4);
              fVar23 = *pfVar3;
              fVar24 = pfVar3[1];
              fVar25 = pfVar3[2];
              fVar26 = pfVar3[3];
              pfVar3 = (float *)(uVar5 + 0x20 + lVar34 * 4);
              *pfVar3 = *pfVar2 * (float)(-(uint)(fVar42 <= *pfVar1) & (uint)*pfVar1);
              pfVar3[1] = fVar20 * (float)(-(uint)(fVar43 <= fVar13) & (uint)fVar13);
              pfVar3[2] = fVar21 * (float)(-(uint)(fVar27 <= fVar14) & (uint)fVar14);
              pfVar3[3] = fVar22 * (float)(-(uint)(fVar28 <= fVar15) & (uint)fVar15);
              pfVar1 = (float *)(uVar5 + 0x30 + lVar34 * 4);
              *pfVar1 = fVar23 * (float)(-(uint)(fVar42 <= fVar16) & (uint)fVar16);
              pfVar1[1] = fVar24 * (float)(-(uint)(fVar43 <= fVar17) & (uint)fVar17);
              pfVar1[2] = fVar25 * (float)(-(uint)(fVar27 <= fVar18) & (uint)fVar18);
              pfVar1[3] = fVar26 * (float)(-(uint)(fVar28 <= fVar19) & (uint)fVar19);
              lVar34 = lVar34 + 0x10;
              lVar33 = lVar33 + 2;
            } while (lVar33 != 0);
          }
          if ((uVar39 & 1) != 0) {
            pfVar1 = (float *)(uVar40 + lVar34 * 4);
            fVar42 = pfVar1[1];
            fVar43 = pfVar1[2];
            fVar27 = pfVar1[3];
            pfVar2 = (float *)(uVar40 + 0x10 + lVar34 * 4);
            fVar28 = *pfVar2;
            fVar13 = pfVar2[1];
            fVar14 = pfVar2[2];
            fVar15 = pfVar2[3];
            bVar7 = _UNK_0240f0d4 <= fVar42;
            bVar9 = _UNK_0240f0d8 <= fVar43;
            bVar11 = _UNK_0240f0dc <= fVar27;
            bVar6 = g_0240f0d0 <= fVar28;
            bVar8 = _UNK_0240f0d4 <= fVar13;
            bVar10 = _UNK_0240f0d8 <= fVar14;
            bVar12 = _UNK_0240f0dc <= fVar15;
            pfVar2 = (float *)(uVar38 + lVar34 * 4);
            fVar16 = pfVar2[1];
            fVar17 = pfVar2[2];
            fVar18 = pfVar2[3];
            pfVar3 = (float *)(uVar38 + 0x10 + lVar34 * 4);
            fVar19 = *pfVar3;
            fVar20 = pfVar3[1];
            fVar21 = pfVar3[2];
            fVar22 = pfVar3[3];
            pfVar3 = (float *)(uVar5 + lVar34 * 4);
            *pfVar3 = *pfVar2 * (float)(-(uint)(g_0240f0d0 <= *pfVar1) & (uint)*pfVar1);
            pfVar3[1] = fVar16 * (float)(-(uint)bVar7 & (uint)fVar42);
            pfVar3[2] = fVar17 * (float)(-(uint)bVar9 & (uint)fVar43);
            pfVar3[3] = fVar18 * (float)(-(uint)bVar11 & (uint)fVar27);
            pfVar1 = (float *)(uVar5 + 0x10 + lVar34 * 4);
            *pfVar1 = fVar19 * (float)(-(uint)bVar6 & (uint)fVar28);
            pfVar1[1] = fVar20 * (float)(-(uint)bVar8 & (uint)fVar13);
            pfVar1[2] = fVar21 * (float)(-(uint)bVar10 & (uint)fVar14);
            pfVar1[3] = fVar22 * (float)(-(uint)bVar12 & (uint)fVar15);
          }
          if (uVar35 != uVar37) goto LAB_014bfced;
        }
        lVar34 = *(int64_t *)(local_48 + 0x10);
        if (uVar37 - 1 < 7) {
          fVar42 = 0.0;
          uVar38 = 0;
        }
        else {
          fVar42 = 0.0;
          uVar38 = 0;
          do {
            fVar42 = fVar42 + *(float *)(lVar34 + uVar38 * 4) + *(float *)(lVar34 + 4 + uVar38 * 4)
                     + *(float *)(lVar34 + 8 + uVar38 * 4) + *(float *)(lVar34 + 0xc + uVar38 * 4) +
                     *(float *)(lVar34 + 0x10 + uVar38 * 4) + *(float *)(lVar34 + 0x14 + uVar38 * 4)
                     + *(float *)(lVar34 + 0x18 + uVar38 * 4) +
                     *(float *)(lVar34 + 0x1c + uVar38 * 4);
            uVar38 = uVar38 + 8;
          } while ((uVar31 & 0xfffffff8) != uVar38);
        }
        if ((uint64_t)(uVar31 & 7) != 0) {
          uVar40 = 0;
          do {
            fVar42 = fVar42 + *(float *)(lVar34 + uVar38 * 4 + uVar40 * 4);
            uVar40 = uVar40 + 1;
          } while ((uVar31 & 7) != uVar40);
        }
        fVar43 = 0.0;
        uVar38 = 0;
        do {
          fVar43 = fVar43 + *(float *)(*(int64_t *)(local_48 + 0x10) + uVar38 * 4);
          if (fVar42 * g_0239011c <= fVar43) goto LAB_014bffd5;
          uVar38 = uVar38 + 1;
        } while (uVar37 != uVar38);
        uVar38 = 0;
      }
LAB_014bffd5:
      lVar34 = (**(code **)(*this_ptr + 0x388))();
      iVar36 = (int)uVar38;
      if (iVar30 < (int)uVar38) {
        iVar36 = iVar30;
      }
      lVar34 = FUN_00e7da10((float)lVar34 * ((float)iVar36 / (float)(int)uVar41));
      lVar33 = (**(code **)(*this_ptr + 0x388))();
      if (lVar33 <= lVar34) {
        lVar34 = (**(code **)(*this_ptr + 0x388))();
        lVar34 = lVar34 + -1;
      }
      cVar29 = (**(code **)(*this_ptr + 0x3c0))();
      if ((cVar29 == '\0') && (lVar34 < this_ptr[0x1d])) {
        lVar34 = this_ptr[0x1d];
      }
      if (local_48 != 0) {
        FUN_00d50b20();
      }
      goto LAB_014bfd7c;
    }
  }
  lVar34 = 0;
LAB_014bfd7c:
  if (this_ptr[0x1c] != lVar34) {
    FUN_00d64850();
    this_ptr[0x1c] = lVar34;
    FUN_00d64910();
  }
  return;
}

