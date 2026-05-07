// Function: FUN_015c9600
// Address: 015c9600
// Size: 626 bytes
// Class: MUSpectralTimeSlice
// === MUSpectralTimeSlice properties ===
//                   _rightSpectrogramTimeSlices
//                   _attackItems
//                   _allFoundPropertyPoints
//                   _audioSourceItems
//                   _usedTonalPaths


uint64_t FUN_015c9600(void)

{
  float fVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int64_t lVar10;
  uint64_t uVar11;
  int64_t this_ptr;
  uint32_t extraout_XMM0_Da;
  uint32_t uVar12;
  
  lVar10 = *(int64_t *)(this_ptr + 0x38);
  if ((((lVar10 == 0) || (lVar2 = *(int64_t *)(this_ptr + 0x18), lVar2 == 0)) ||
      (*(int64_t *)(lVar2 + 0x38) == 0)) ||
     (((*(int64_t *)(this_ptr + 0x30) == 0 || (*(int64_t *)(lVar2 + 0x28) == 0)) ||
      (*(int64_t *)(lVar2 + 0x30) == 0)))) {
    uVar11 = 0;
  }
  else {
    lVar2 = *(int64_t *)(lVar2 + 0x18);
    if (lVar2 != 0) {
      FUN_00d50b00();
      lVar10 = *(int64_t *)(this_ptr + 0x38);
    }
    if (lVar10 != 0) {
      FUN_00d50b00();
    }
    lVar3 = *(int64_t *)(*(int64_t *)(this_ptr + 0x18) + 0x38);
    if (lVar3 != 0) {
      FUN_00d50b00();
    }
    iVar5 = FUN_00d237a0();
    iVar6 = FUN_00d237a0();
    iVar7 = FUN_00d237a0();
    iVar8 = FUN_00d237a0();
    uVar12 = extraout_XMM0_Da;
    while (iVar9 = *(int *)(lVar10 + 0xc), iVar7 + 1 < iVar9) {
      uVar12 = FUN_00d23740();
    }
    if (0 < iVar8) {
      do {
        uVar12 = FUN_00d23620();
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
      iVar9 = *(int *)(lVar10 + 0xc);
    }
    FUN_00d214d0(uVar12,iVar9);
    *(void*)(this_ptr + 0x30) =
         *(void*)(*(int64_t *)(lVar10 + 0x10) + (int64_t)((iVar7 + 1 + iVar5) - iVar6) * 8)
    ;
    lVar4 = *(int64_t *)(this_ptr + 0x18);
    *(void*)(this_ptr + 0x48) = *(void*)(lVar4 + 0x48);
    fVar1 = *(float *)(lVar4 + 0x54);
    if (*(float *)(this_ptr + 0x54) <= fVar1 && fVar1 != *(float *)(this_ptr + 0x54)) {
      *(float *)(this_ptr + 0x54) = fVar1;
    }
    *(void*)(lVar4 + 0x18) = 0;
    *(void*)(*(int64_t *)(this_ptr + 0x18) + 0x20) = 0;
    *(void*)(this_ptr + 0x18) = 0;
    if (lVar2 != 0) {
      *(int64_t *)(this_ptr + 0x18) = lVar2;
      *(int64_t *)(lVar2 + 0x20) = this_ptr;
    }
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
    uVar11 = CONCAT71((int7)((uint64_t)lVar10 >> 8),1);
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  return uVar11 & 0xffffffff;
}

