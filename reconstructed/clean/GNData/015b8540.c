// Function: FUN_015b8540
// Address: 015b8540
// Size: 1130 bytes
// Class: GNData
// === GNData properties ===
//   double          _firstSpectrumTime
//   double          _spectraTimeDistance


void FUN_015b8540(void)

{
  int iVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t *arg1;
  int64_t this_ptr;
  int64_t lVar4;
  float fVar5;
  float fVar6;
  uint64_t uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  uint uVar11;
  int64_t local_48;
  char local_40;
  
  lVar3 = *(int64_t *)(this_ptr + 0x50);
  if (lVar3 != 0) {
    FUN_00d50b00();
  }
  FUN_00c8e4f0();
  if (local_40 == '\0') {
    if (local_48 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_40 = '\0';
  }
  FUN_00c92170();
  FUN_00c92160();
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  lVar3 = *(int64_t *)(this_ptr + 0x60);
  if (lVar3 != 0) {
    FUN_00d50b00();
  }
  FUN_00c8e4f0();
  if ((local_40 == '\0') && (local_48 != 0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  iVar1 = *(int *)(this_ptr + 0x44);
  if (0 < iVar1) {
    fVar9 = *(float *)(this_ptr + 0x94) + g_02390124;
    fVar9 = (float)(-(uint)(fVar9 < g_02390124) & (uint)(fVar9 + fVar9 + g_02390d00) |
                   ~-(uint)(fVar9 < g_02390124) & (uint)fVar9);
    if (g_02390124 <= fVar9) {
      lVar3 = 0;
      uVar11 = g_02390140;
      fVar9 = g_0240d16c;
      do {
        if (fVar9 <= (float)((uint)(*(float *)(*(int64_t *)(*(int64_t *)(this_ptr + 0x70) + 0x10)
                                              + lVar3 * 4) *
                                    *(float *)(*(int64_t *)(*(int64_t *)(this_ptr + 0x58) + 0x10)
                                              + lVar3 * 4) -
                                   *(float *)(*(int64_t *)(*arg1 + 0x10) + lVar3 * 4)) &
                            uVar11)) {
          fVar6 = (float)FUN_015b8b30(iVar1,1);
          fVar9 = g_0240d16c;
          fVar8 = g_0240d16c;
          if (g_0240d16c <= fVar6) {
            fVar8 = fVar6;
          }
          *(float *)(*(int64_t *)(local_48 + 0x10) + lVar3 * 4) = fVar8;
          *(void*)(*(int64_t *)(local_48 + 0x10) + lVar3 * 4) = 0x3f800000;
          iVar1 = *(int *)(this_ptr + 0x44);
          uVar11 = g_02390140;
        }
        lVar3 = lVar3 + 1;
      } while (lVar3 < iVar1);
    }
    else {
      lVar3 = *(int64_t *)(this_ptr + 0x58);
      lVar4 = *arg1;
      if (0.0 <= fVar9) {
        lVar2 = 0;
        uVar11 = g_02390140;
        fVar9 = g_0240d16c;
        do {
          if (fVar9 <= (float)((uint)(*(float *)(*(int64_t *)
                                                  (*(int64_t *)(this_ptr + 0x70) + 0x10) +
                                                lVar2 * 4) *
                                      *(float *)(*(int64_t *)(lVar3 + 0x10) + lVar2 * 4) -
                                     *(float *)(*(int64_t *)(lVar4 + 0x10) + lVar2 * 4)) & uVar11))
          {
            FUN_015b8b30(iVar1,0);
            uVar7 = FUN_015b8f00();
            fVar5 = (float)FUN_015b8b30(uVar7,1);
            fVar9 = g_0240d16c;
            lVar3 = *(int64_t *)(this_ptr + 0x58);
            lVar4 = *arg1;
            fVar8 = *(float *)(*(int64_t *)(lVar3 + 0x10) + lVar2 * 4);
            fVar6 = *(float *)(*(int64_t *)(lVar4 + 0x10) + lVar2 * 4);
            fVar10 = g_0240d16c;
            if (g_0240d16c <= fVar5) {
              fVar10 = fVar5;
            }
            *(float *)(*(int64_t *)(local_48 + 0x10) + lVar2 * 4) = fVar10;
            *(float *)(*(int64_t *)(local_48 + 0x10) + lVar2 * 4) = fVar6 / ((float)uVar7 * fVar8);
            iVar1 = *(int *)(this_ptr + 0x44);
            uVar11 = g_02390140;
          }
          lVar2 = lVar2 + 1;
        } while (lVar2 < iVar1);
      }
      else {
        lVar2 = 0;
        do {
          fVar9 = *(float *)(*(int64_t *)(lVar3 + 0x10) + lVar2 * 4);
          if (g_0240d16c <=
              (float)((uint)(*(float *)(*(int64_t *)(*(int64_t *)(this_ptr + 0x70) + 0x10) +
                                       lVar2 * 4) * fVar9 -
                            *(float *)(*(int64_t *)(lVar4 + 0x10) + lVar2 * 4)) & g_02390140)) {
            fVar5 = (float)FUN_015b8f00(iVar1,1);
            lVar3 = *(int64_t *)(this_ptr + 0x58);
            lVar4 = *arg1;
            fVar8 = *(float *)(*(int64_t *)(lVar3 + 0x10) + lVar2 * 4);
            fVar6 = *(float *)(*(int64_t *)(lVar4 + 0x10) + lVar2 * 4);
            fVar10 = g_0240d16c;
            if (g_0240d16c <= fVar9) {
              fVar10 = fVar9;
            }
            *(float *)(*(int64_t *)(local_48 + 0x10) + lVar2 * 4) = fVar10;
            *(float *)(*(int64_t *)(local_48 + 0x10) + lVar2 * 4) = fVar6 / (fVar5 * fVar8);
            iVar1 = *(int *)(this_ptr + 0x44);
          }
          lVar2 = lVar2 + 1;
        } while (lVar2 < iVar1);
      }
    }
  }
  FUN_015b92d0();
  FUN_015b7cb0();
  if (local_48 != 0) {
    FUN_00d50b20();
    FUN_00d50b20();
  }
  return;
}

