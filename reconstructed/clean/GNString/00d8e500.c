// Function: FUN_00d8e500
// Address: 00d8e500
// Size: 966 bytes
// Class: GNString
// String references:
//   "Cannot modify an immutable string %@"
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_00d8e500(uint64_t param_1,char param_2)

{
  short *psVar1;
  char cVar2;
  int64_t lVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  uint uVar11;
  uint64_t uVar12;
  short sVar13;
  short sVar14;
  uint64_t uVar15;
  char unaff_SIL;
  int64_t this_ptr;
  short sVar16;
  short sVar18;
  uint8_t auVar17 [16];
  
  if ((*(byte *)(this_ptr + 0x24) & 1) == 0) {
    FUN_00d50b00();
    FUN_00e828a0();
    if (this_ptr != 0) {
      FUN_00d50b20();
    }
  }
  uVar11 = *(uint *)(this_ptr + 0x20);
  if (uVar11 == 0xffffffff) {
    if (*(int64_t *)(this_ptr + 0x10) == 0) {
      return;
    }
    uVar11 = FUN_00e7dde0();
    if (*(int *)(this_ptr + 0x20) == -1) {
      if ((int)uVar11 < 1) {
        return;
      }
      if (uVar11 == 1) {
        uVar12 = 0;
      }
      else {
        uVar12 = 0;
        do {
          if (*(char *)(*(int64_t *)(this_ptr + 0x10) + uVar12) == unaff_SIL) {
            *(char *)(*(int64_t *)(this_ptr + 0x10) + uVar12) = param_2;
            lVar3 = *(int64_t *)(this_ptr + 0x10);
            cVar2 = *(char *)(lVar3 + 1 + uVar12);
          }
          else {
            lVar3 = *(int64_t *)(this_ptr + 0x10);
            cVar2 = *(char *)(lVar3 + 1 + uVar12);
          }
          if (cVar2 == unaff_SIL) {
            *(char *)(lVar3 + 1 + uVar12) = param_2;
          }
          uVar12 = uVar12 + 2;
        } while ((uVar11 & 0xfffffffe) != uVar12);
      }
      if ((uVar11 & 1) == 0) {
        return;
      }
      if (*(char *)(*(int64_t *)(this_ptr + 0x10) + uVar12) != unaff_SIL) {
        return;
      }
      *(char *)(*(int64_t *)(this_ptr + 0x10) + uVar12) = param_2;
      return;
    }
  }
  if (0 < (int)uVar11) {
    lVar3 = *(int64_t *)(this_ptr + 0x18);
    sVar13 = (short)param_2;
    if (uVar11 < 0x10) {
      uVar12 = 0;
    }
    else {
      uVar12 = (uint64_t)(uVar11 & 0xfffffff0);
      auVar17 = pshuflw(ZEXT416((uint)(int)unaff_SIL),ZEXT416((uint)(int)unaff_SIL),0);
      uVar15 = 0;
      do {
        psVar1 = (short *)(lVar3 + uVar15 * 2);
        sVar4 = psVar1[1];
        sVar5 = psVar1[2];
        sVar6 = psVar1[3];
        sVar7 = psVar1[4];
        sVar8 = psVar1[5];
        sVar9 = psVar1[6];
        sVar10 = psVar1[7];
        sVar16 = auVar17._0_2_;
        sVar18 = auVar17._2_2_;
        if (*psVar1 == sVar16) {
          *(short *)(lVar3 + uVar15 * 2) = sVar13;
        }
        if (sVar4 == sVar18) {
          *(short *)(lVar3 + 2 + uVar15 * 2) = sVar13;
        }
        if (sVar5 == sVar16) {
          *(short *)(lVar3 + 4 + uVar15 * 2) = sVar13;
        }
        if (sVar6 == sVar18) {
          *(short *)(lVar3 + 6 + uVar15 * 2) = sVar13;
        }
        if (sVar7 == sVar16) {
          *(short *)(lVar3 + 8 + uVar15 * 2) = sVar13;
        }
        if (sVar8 == sVar18) {
          *(short *)(lVar3 + 10 + uVar15 * 2) = sVar13;
        }
        if (sVar9 == sVar16) {
          *(short *)(lVar3 + 0xc + uVar15 * 2) = sVar13;
        }
        if (sVar10 == sVar18) {
          *(short *)(lVar3 + 0xe + uVar15 * 2) = sVar13;
        }
        psVar1 = (short *)(lVar3 + 0x10 + uVar15 * 2);
        sVar4 = psVar1[1];
        sVar5 = psVar1[2];
        sVar6 = psVar1[3];
        sVar7 = psVar1[4];
        sVar8 = psVar1[5];
        sVar9 = psVar1[6];
        sVar10 = psVar1[7];
        sVar14 = (short)param_2;
        if (*psVar1 == sVar16) {
          *(short *)(lVar3 + 0x10 + uVar15 * 2) = sVar13;
        }
        if (sVar4 == sVar18) {
          *(short *)(lVar3 + 0x12 + uVar15 * 2) = sVar13;
        }
        if (sVar5 == sVar16) {
          *(short *)(lVar3 + 0x14 + uVar15 * 2) = sVar14;
        }
        if (sVar6 == sVar18) {
          *(short *)(lVar3 + 0x16 + uVar15 * 2) = sVar14;
        }
        if (sVar7 == sVar16) {
          *(short *)(lVar3 + 0x18 + uVar15 * 2) = sVar14;
        }
        if (sVar8 == sVar18) {
          *(short *)(lVar3 + 0x1a + uVar15 * 2) = sVar14;
        }
        if (sVar9 == sVar16) {
          *(short *)(lVar3 + 0x1c + uVar15 * 2) = sVar14;
        }
        if (sVar10 == sVar18) {
          *(short *)(lVar3 + 0x1e + uVar15 * 2) = sVar14;
        }
        uVar15 = uVar15 + 0x10;
      } while (uVar12 != uVar15);
      if (uVar12 == uVar11) goto LAB_00d8e84b;
    }
    do {
      if (*(short *)(lVar3 + uVar12 * 2) == (short)unaff_SIL) {
        *(short *)(lVar3 + uVar12 * 2) = sVar13;
      }
      uVar12 = uVar12 + 1;
    } while (uVar11 != uVar12);
  }
LAB_00d8e84b:
  if ((*(int64_t *)(this_ptr + 0x10) != 0) &&
     (*(int64_t *)(this_ptr + 0x10) != this_ptr + 0x28)) {
    FUN_00e83070();
  }
  *(void*)(this_ptr + 0x10) = 0;
  return;
}

