// Function: FUN_00bcb330
// Address: 00bcb330
// Size: 559 bytes
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


void FUN_00bcb330(uint64_t param_1,char param_2)

{
  int64_t lVar1;
  bool bVar2;
  byte bVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  int64_t lVar7;
  uint64_t arg1;
  uint64_t uVar8;
  int iVar9;
  int64_t this_ptr;
  int64_t lVar10;
  uint uVar11;
  double dVar12;
  
  lVar1 = *(int64_t *)(this_ptr + 0x18);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  dVar12 = (double)FUN_00e7d6f0();
  if (param_2 == '\0') {
    dVar12 = dVar12 + g_023b3490;
  }
  lVar7 = FUN_00e7dae0((dVar12 - g_028024d8) * g_02411988);
  lVar10 = 0;
  if (0 < lVar7) {
    lVar10 = lVar7;
  }
  uVar8 = (uint64_t)(lVar10 - lVar7 != 0);
  lVar7 = (((lVar10 - lVar7) - uVar8) / 0xffffffff + uVar8) * 0xffffffff + lVar7;
  lVar10 = 0xffffffff;
  if (lVar7 < 0xffffffff) {
    lVar10 = lVar7;
  }
  uVar11 = (int)lVar7 + (int)((uint64_t)((lVar7 + 0xfffffffe) - lVar10) / 0xffffffff);
  iVar9 = (int)((uint64_t)arg1 >> 0x20);
  if (0 < iVar9) {
    lVar10 = (int64_t)(int)arg1;
    do {
      uVar5 = FUN_00e31390();
      if (uVar5 != uVar11) {
        do {
          bVar2 = -(uVar11 - uVar5) < 0x80000001;
          if (uVar5 <= uVar11) {
            bVar2 = (int)(uVar11 - uVar5) < 0;
          }
          if (bVar2) break;
          bVar3 = FUN_00e314a0(0,uVar11);
        } while ((bVar3 | uVar5 == uVar11) != 1);
      }
      iVar6 = FUN_00e31390();
      do {
        cVar4 = FUN_00e314a0(3,iVar6 + -0x10);
      } while (cVar4 == '\0');
      lVar10 = lVar10 + 1;
    } while (lVar10 < iVar9 + (int)arg1);
  }
  uVar5 = FUN_00e31390();
  if (uVar5 != uVar11) {
    do {
      bVar2 = -(uVar11 - uVar5) < 0x80000001;
      if (uVar5 <= uVar11) {
        bVar2 = (int)(uVar11 - uVar5) < 0;
      }
    } while ((!bVar2) && (cVar4 = FUN_00e314a0(0,uVar11), cVar4 == '\0' && uVar5 != uVar11));
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  return;
}

