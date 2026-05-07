// Function: FUN_019e6f90
// Address: 019e6f90
// Size: 601 bytes
// Class: GNList
// === GNList properties ===
//   GNInt           _archiveVersion
//   bool            _awakesObjectsAfterDecoding
//   bool            _isCancelled
//   GNInt           _currentObjectGraphIdx
//   GNInt           _predictedDecodedValuesIndex


void FUN_019e6f90(int64_t param_1,uint64_t param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  uint uVar4;
  uint uVar5;
  float *in_RDX;
  double *arg1;
  int64_t *this_ptr;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar11;
  int64_t lVar10;
  uint32_t uVar12;
  uint32_t uVar13;
  int64_t lVar9;
  
  uVar13 = (uint32_t)((uint64_t)param_2 >> 0x20);
  uVar12 = (uint32_t)param_2;
  lVar9 = (**(code **)(*this_ptr + 0xa98))();
  fVar11 = (float)((uint64_t)lVar9 >> 0x20);
  fVar6 = (float)lVar9;
  dVar1 = (double)(**(code **)(*this_ptr + 0xa50))();
  dVar2 = (double)CONCAT44(uVar13,uVar12);
  fVar7 = (float)(**(code **)(*this_ptr + 0x938))();
  fVar8 = (float)(**(code **)(*this_ptr + 0x938))(SUB84(*arg1,0));
  if ((float)((uint)(fVar7 - fVar8) & g_02390140) < g_02390d34) {
    fVar7 = (float)(**(code **)(*this_ptr + 0x938))(SUB84(dVar1 + dVar2,0));
    fVar8 = (float)(**(code **)(*this_ptr + 0x938))(SUB84(*arg1 + arg1[1],0));
    if ((float)((uint)(fVar7 - fVar8) & g_02390140) < g_02390d34) {
      fVar7 = (float)(**(code **)(*this_ptr + 0xbf8))(fVar6);
      fVar8 = (float)(**(code **)(*this_ptr + 0xbf8))(*in_RDX);
      if ((float)((uint)(fVar7 - fVar8) & g_02390140) < g_02390d34) {
        fVar7 = (float)(**(code **)(*this_ptr + 0xbf8))(fVar6 + fVar11);
        fVar8 = (float)(**(code **)(*this_ptr + 0xbf8))(*in_RDX + in_RDX[1]);
        if ((float)((uint)(fVar7 - fVar8) & g_02390140) < g_02390d34) {
          return;
        }
      }
    }
  }
  uVar4 = -(uint)(*in_RDX != fVar6) & 1;
  uVar5 = uVar4 + 2;
  if (fVar11 != in_RDX[1]) {
    uVar4 = uVar5;
  }
  if (NAN(fVar11) || NAN(in_RDX[1])) {
    uVar4 = uVar5;
  }
  uVar5 = uVar4;
  if (dVar1 != *arg1) {
    uVar5 = uVar4 + 4;
  }
  if (NAN(dVar1) || NAN(*arg1)) {
    uVar5 = uVar4 + 4;
  }
  if ((dVar2 != arg1[1]) || (NAN(dVar2) || NAN(arg1[1]))) {
    uVar5 = uVar5 | 8;
  }
  else if (uVar5 == 0) {
    return;
  }
  *(uint *)(this_ptr + 0x37) = uVar5;
  this_ptr[0x36] = *(int64_t *)in_RDX;
  dVar3 = arg1[1];
  this_ptr[0x33] = (int64_t)*arg1;
  this_ptr[0x34] = (int64_t)dVar3;
  this_ptr[0x2d] = param_1;
  this_ptr[0x35] = lVar9;
  this_ptr[0x31] = (int64_t)dVar1;
  this_ptr[0x32] = (int64_t)dVar2;
  lVar10 = FUN_01e436c0();
  this_ptr[0x2f] = lVar10;
  this_ptr[0x30] = lVar9;
  lVar9 = FUN_00e7d6f0();
  this_ptr[0x2e] = lVar9;
  *(void*)((int64_t)this_ptr + 0x1bc) = 1;
  return;
}

