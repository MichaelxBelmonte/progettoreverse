// Function: FUN_01caa390
// Address: 01caa390
// Size: 569 bytes
// Class: GNList
// === GNList properties ===
//   GNInt           _archiveVersion
//   bool            _awakesObjectsAfterDecoding
//   bool            _isCancelled
//   GNInt           _currentObjectGraphIdx
//   GNInt           _predictedDecodedValuesIndex


void FUN_01caa390(void)

{
  uint uVar1;
  int iVar2;
  int64_t lVar3;
  int iVar4;
  int64_t lVar5;
  int64_t lVar6;
  int64_t *arg1;
  uint64_t uVar7;
  uint64_t uVar8;
  int64_t lVar9;
  uint64_t uVar10;
  uint64_t uVar11;
  uint8_t auVar12 [16];
  uint64_t local_48;
  uint8_t local_40;
  
  FUN_00d21140();
  lVar3 = *arg1;
  FUN_00c8e690();
  if ((local_40 == '\0') && (local_48 != 0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  if (lVar3 == 0) {
    ___bzero();
  }
  else {
    iVar2 = *(int *)(local_48 + 0x18);
    iVar4 = iVar2 + 7;
    if (-1 < iVar2) {
      iVar4 = iVar2;
    }
    if (7 < iVar2) {
      lVar5 = *(int64_t *)(local_48 + 0x10);
      uVar1 = (iVar4 >> 3) - 1;
      uVar11 = 0;
      if (2 < uVar1) {
        uVar10 = (uint64_t)uVar1 + 1;
        uVar11 = uVar10 & 0xfffffffffffffffc;
        auVar12._8_4_ = (int)lVar3;
        auVar12._0_8_ = lVar3;
        auVar12._12_4_ = (int)((uint64_t)lVar3 >> 0x20);
        uVar8 = (uVar11 - 4 >> 2) + 1;
        uVar7 = (uint64_t)((uint)uVar8 & 7);
        if (uVar11 - 4 < 0x1c) {
          lVar6 = 0;
        }
        else {
          lVar9 = -(uVar8 & 0xfffffffffffffff8);
          lVar6 = 0;
          do {
            *(uint8_t (*) [16])(lVar5 + lVar6 * 8) = auVar12;
            *(uint8_t (*) [16])(lVar5 + 0x10 + lVar6 * 8) = auVar12;
            *(uint8_t (*) [16])(lVar5 + 0x20 + lVar6 * 8) = auVar12;
            *(uint8_t (*) [16])(lVar5 + 0x30 + lVar6 * 8) = auVar12;
            *(uint8_t (*) [16])(lVar5 + 0x40 + lVar6 * 8) = auVar12;
            *(uint8_t (*) [16])(lVar5 + 0x50 + lVar6 * 8) = auVar12;
            *(uint8_t (*) [16])(lVar5 + 0x60 + lVar6 * 8) = auVar12;
            *(uint8_t (*) [16])(lVar5 + 0x70 + lVar6 * 8) = auVar12;
            *(uint8_t (*) [16])(lVar5 + 0x80 + lVar6 * 8) = auVar12;
            *(uint8_t (*) [16])(lVar5 + 0x90 + lVar6 * 8) = auVar12;
            *(uint8_t (*) [16])(lVar5 + 0xa0 + lVar6 * 8) = auVar12;
            *(uint8_t (*) [16])(lVar5 + 0xb0 + lVar6 * 8) = auVar12;
            *(uint8_t (*) [16])(lVar5 + 0xc0 + lVar6 * 8) = auVar12;
            *(uint8_t (*) [16])(lVar5 + 0xd0 + lVar6 * 8) = auVar12;
            *(uint8_t (*) [16])(lVar5 + 0xe0 + lVar6 * 8) = auVar12;
            *(uint8_t (*) [16])(lVar5 + 0xf0 + lVar6 * 8) = auVar12;
            lVar6 = lVar6 + 0x20;
            lVar9 = lVar9 + 8;
          } while (lVar9 != 0);
        }
        if (uVar7 != 0) {
          lVar6 = lVar5 + lVar6 * 8;
          lVar9 = 0;
          do {
            *(uint8_t (*) [16])(lVar6 + lVar9) = auVar12;
            *(uint8_t (*) [16])(lVar6 + 0x10 + lVar9) = auVar12;
            lVar9 = lVar9 + 0x20;
          } while (uVar7 << 5 != lVar9);
        }
        if (uVar10 == uVar11) goto LAB_01caa58c;
        lVar5 = lVar5 + uVar11 * 8;
      }
      lVar6 = 0;
      do {
        *(int64_t *)(lVar5 + lVar6 * 8) = lVar3;
        lVar6 = lVar6 + 1;
      } while ((iVar4 >> 3) - (int)uVar11 != (int)lVar6);
    }
  }
LAB_01caa58c:
  FUN_01ca79b0();
  if (local_48 != 0) {
    FUN_00d50b20();
  }
  return;
}

