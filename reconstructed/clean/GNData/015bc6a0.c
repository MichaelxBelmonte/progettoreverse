// Function: FUN_015bc6a0
// Address: 015bc6a0
// Size: 1021 bytes
// Class: GNData
// === GNData properties ===
//   double          _firstSpectrumTime
//   double          _spectraTimeDistance


void FUN_015bc6a0(void *param_1,uint64_t param_2,size_t param_3)

{
  int iVar1;
  char cVar2;
  char cVar3;
  int64_t this_ptr;
  int64_t lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int64_t local_40;
  char local_38;
  
  FUN_00c8e690();
  if ((local_38 == '\0') && (local_40 != 0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  if (3 < (int)*(uint *)(local_40 + 0x18)) {
    _memset_pattern16(param_1,(void *)((uint64_t)((*(uint *)(local_40 + 0x18) >> 2) - 1) * 4 + 4),
                      param_3);
  }
  if (*(char *)(this_ptr + 0x88) == '\0') {
    FUN_015ba5e0();
    *(void*)(this_ptr + 0x88) = 1;
    cVar3 = *(char *)(this_ptr + 0x9c);
  }
  else {
    cVar3 = *(char *)(this_ptr + 0x9c);
  }
  if (cVar3 == '\0') {
    FUN_015bc030();
    *(void*)(this_ptr + 0x9c) = 1;
    iVar1 = *(int *)(this_ptr + 0x44);
    fVar6 = g_0240d16c;
  }
  else {
    iVar1 = *(int *)(this_ptr + 0x44);
    fVar6 = g_0240d16c;
  }
  g_0240d16c = fVar6;
  if (iVar1 < 1) {
    cVar3 = '\0';
  }
  else {
    fVar7 = *(float *)(this_ptr + 0x94) + g_02390124;
    fVar7 = (float)(-(uint)(fVar7 < g_02390124) & (uint)(fVar7 + fVar7 + g_02390d00) |
                   ~-(uint)(fVar7 < g_02390124) & (uint)fVar7);
    lVar4 = 0;
    if (fVar7 <= g_02390124) {
      if (fVar7 <= g_02390124) {
        cVar3 = '\0';
        do {
          fVar7 = *(float *)(*(int64_t *)(*(int64_t *)(this_ptr + 0x50) + 0x10) + lVar4 * 4);
          if (fVar6 <= fVar7) {
            fVar6 = fVar7;
          }
          fVar5 = (float)FUN_015b8f00(fVar6,1);
          fVar6 = g_0240d16c;
          fVar5 = fVar5 * *(float *)(*(int64_t *)(*(int64_t *)(this_ptr + 0x60) + 0x10) +
                                    lVar4 * 4);
          fVar7 = g_0240d16c;
          if (g_0240d16c <= fVar5) {
            fVar7 = fVar5;
          }
          cVar2 = '\x01';
          if (fVar7 <= g_023b36e8) {
            cVar2 = cVar3;
          }
          cVar3 = cVar2;
          if (fVar7 < g_023b36e4) {
            cVar3 = '\x01';
          }
          *(float *)(*(int64_t *)(local_40 + 0x10) + lVar4 * 4) = fVar7;
          lVar4 = lVar4 + 1;
        } while (lVar4 < *(int *)(this_ptr + 0x44));
      }
      else {
        cVar3 = '\0';
        do {
          fVar7 = *(float *)(*(int64_t *)(*(int64_t *)(this_ptr + 0x50) + 0x10) + lVar4 * 4);
          if (fVar6 <= fVar7) {
            fVar6 = fVar7;
          }
          fVar5 = (float)FUN_015b8f00(fVar6,1);
          fVar6 = g_0240d16c;
          fVar7 = g_0240d16c;
          if (g_0240d16c <= fVar5) {
            fVar7 = fVar5;
          }
          if (g_023b36e8 < fVar7) {
            cVar3 = '\x01';
          }
          if (fVar7 < g_023b36e4) {
            cVar3 = '\x01';
          }
          *(float *)(*(int64_t *)(local_40 + 0x10) + lVar4 * 4) = fVar7;
          lVar4 = lVar4 + 1;
        } while (lVar4 < *(int *)(this_ptr + 0x44));
      }
    }
    else {
      cVar3 = '\0';
      if (g_02390124 < fVar7) {
        do {
          fVar7 = *(float *)(*(int64_t *)(*(int64_t *)(this_ptr + 0x50) + 0x10) + lVar4 * 4) *
                  *(float *)(*(int64_t *)(*(int64_t *)(this_ptr + 0x60) + 0x10) + lVar4 * 4);
          if (fVar6 <= fVar7) {
            fVar6 = fVar7;
          }
          fVar5 = (float)FUN_015b8f00(fVar6,1);
          fVar6 = g_0240d16c;
          fVar7 = g_0240d16c;
          if (g_0240d16c <= fVar5) {
            fVar7 = fVar5;
          }
          cVar2 = '\x01';
          if (fVar7 <= g_023b36e8) {
            cVar2 = cVar3;
          }
          cVar3 = cVar2;
          if (fVar7 < g_023b36e4) {
            cVar3 = '\x01';
          }
          *(float *)(*(int64_t *)(local_40 + 0x10) + lVar4 * 4) = fVar7;
          lVar4 = lVar4 + 1;
        } while (lVar4 < *(int *)(this_ptr + 0x44));
      }
      else {
        do {
          fVar7 = *(float *)(*(int64_t *)(*(int64_t *)(this_ptr + 0x50) + 0x10) + lVar4 * 4) *
                  *(float *)(*(int64_t *)(*(int64_t *)(this_ptr + 0x60) + 0x10) + lVar4 * 4);
          if (fVar6 <= fVar7) {
            fVar6 = fVar7;
          }
          fVar5 = (float)FUN_015b8f00(fVar6,1);
          fVar6 = g_0240d16c;
          fVar5 = fVar5 * *(float *)(*(int64_t *)(*(int64_t *)(this_ptr + 0x60) + 0x10) +
                                    lVar4 * 4);
          fVar7 = g_0240d16c;
          if (g_0240d16c <= fVar5) {
            fVar7 = fVar5;
          }
          cVar2 = '\x01';
          if (fVar7 <= g_023b36e8) {
            cVar2 = cVar3;
          }
          cVar3 = cVar2;
          if (fVar7 < g_023b36e4) {
            cVar3 = '\x01';
          }
          *(float *)(*(int64_t *)(local_40 + 0x10) + lVar4 * 4) = fVar7;
          lVar4 = lVar4 + 1;
        } while (lVar4 < *(int *)(this_ptr + 0x44));
      }
    }
  }
  if (*(int64_t *)(this_ptr + 0x70) != local_40) {
    FUN_00d64850();
    lVar4 = *(int64_t *)(this_ptr + 0x70);
    if (lVar4 != local_40) {
      FUN_00d50b00();
      *(int64_t *)(this_ptr + 0x70) = local_40;
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
    }
    FUN_00d64910();
  }
  if (*(char *)(this_ptr + 0x48) != cVar3) {
    FUN_00d64850();
    *(char *)(this_ptr + 0x48) = cVar3;
    FUN_00d64910();
  }
  FUN_00d50b20();
  return;
}

