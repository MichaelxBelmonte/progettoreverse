// Function: FUN_00bbfa40
// Address: 00bbfa40
// Size: 573 bytes
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


void FUN_00bbfa40(void)

{
  double dVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  int64_t *this_ptr;
  uint64_t uVar9;
  int64_t lVar10;
  double dVar11;
  
  FUN_00b341c0();
  lVar10 = FUN_00b335d0();
  this_ptr[0x1b] = lVar10;
  dVar11 = (double)FUN_00b335d0();
  this_ptr[0x1c] = (int64_t)dVar11;
  this_ptr[0x17] = 0;
  this_ptr[0x14] = 0;
  this_ptr[0x1a] = 0;
  this_ptr[0x1d] = (int64_t)((double)this_ptr[0x1b] / dVar11);
  uVar4 = FUN_00b33120();
  iVar5 = (**(code **)(*this_ptr + 0x3a8))();
  iVar6 = 1;
  do {
    iVar3 = iVar6 * 2;
    bVar2 = iVar6 <= iVar5;
    iVar6 = iVar3;
  } while (bVar2);
  *(int *)(this_ptr + 0x15) = iVar3;
  *(int *)((int64_t)this_ptr + 0xac) = iVar3 + -1;
  lVar10 = FUN_00e83010();
  this_ptr[0x13] = lVar10;
  uVar9 = (uint64_t)uVar4;
  if (0 < (int)uVar4) {
    uVar8 = 0;
    do {
      uVar7 = FUN_00e83010();
      *(void*)(this_ptr[0x13] + uVar8 * 8) = uVar7;
      ___bzero();
      uVar8 = uVar8 + 1;
    } while (uVar9 != uVar8);
  }
  dVar11 = (double)this_ptr[0x1b];
  dVar1 = (double)this_ptr[0x1c];
  lVar10 = FUN_00e83010();
  this_ptr[0x19] = lVar10;
  if (0 < (int)uVar4) {
    uVar8 = 0;
    do {
      uVar7 = FUN_00e83010();
      *(void*)(this_ptr[0x19] + uVar8 * 8) = uVar7;
      ___bzero();
      uVar8 = uVar8 + 1;
    } while (uVar9 != uVar8);
  }
  iVar6 = 1;
  do {
    iVar3 = iVar6 * 2;
    bVar2 = iVar6 <= (int)(((double)iVar5 * dVar11) / dVar1) + 3;
    iVar6 = iVar3;
  } while (bVar2);
  *(int *)(this_ptr + 0x18) = iVar3;
  *(int *)((int64_t)this_ptr + 0xc4) = iVar3 + -1;
  lVar10 = FUN_00e83010();
  this_ptr[0x16] = lVar10;
  if (0 < (int)uVar4) {
    uVar8 = 0;
    do {
      uVar7 = FUN_00e83010();
      *(void*)(this_ptr[0x16] + uVar8 * 8) = uVar7;
      ___bzero();
      uVar8 = uVar8 + 1;
    } while (uVar9 != uVar8);
  }
  return;
}

