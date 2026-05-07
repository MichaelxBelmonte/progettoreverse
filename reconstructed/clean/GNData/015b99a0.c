// Function: FUN_015b99a0
// Address: 015b99a0
// Size: 720 bytes
// Class: GNData
// === GNData properties ===
//   double          _firstSpectrumTime
//   double          _spectraTimeDistance


void FUN_015b99a0(void *param_1,uint64_t param_2,size_t param_3)

{
  int64_t lVar1;
  uint uVar2;
  int64_t lVar3;
  int64_t this_ptr;
  float fVar4;
  float fVar5;
  float fVar6;
  uint32_t uVar7;
  double dVar8;
  uint64_t local_40;
  uint8_t local_38;
  
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
  uVar2 = FUN_00e7dff0();
  if (1 < *(int *)(this_ptr + 0x44)) {
    fVar4 = (float)((double)uVar2 / g_023934c0) + (float)((double)uVar2 / g_023934c0) +
            g_02390d34;
    lVar3 = 1;
    do {
      uVar2 = FUN_00e7dff0();
      lVar1 = *(int64_t *)(local_40 + 0x10);
      fVar5 = (float)_powf((float)(int)lVar3,g_02391094);
      dVar8 = (double)uVar2 / g_023934c0 + g_02394dd0;
      fVar6 = (float)dVar8;
      uVar7 = _exp2f(CONCAT44((int)((uint64_t)dVar8 >> 0x20),
                              (fVar6 + fVar6) * (fVar4 / fVar5) * g_0239394c * g_023941f4));
      *(void*)(lVar1 + lVar3 * 4) = uVar7;
      lVar3 = lVar3 + 1;
    } while (lVar3 < *(int *)(this_ptr + 0x44));
  }
  lVar3 = *(int64_t *)(this_ptr + 0x58);
  if (lVar3 != 0) {
    FUN_00d50b00();
  }
  FUN_00c8e4f0();
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  FUN_00c92170();
  FUN_00c92160();
  FUN_015b7cb0();
  if (local_40 != 0) {
    FUN_00d50b20();
  }
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
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
  FUN_015b92d0();
  FUN_00d50b20();
  FUN_015b9470();
  FUN_00d50b20();
  return;
}

