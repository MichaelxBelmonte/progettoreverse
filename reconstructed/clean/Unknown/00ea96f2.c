// Function: FUN_00ea96f2
// Address: 00ea96f2
// Size: 555 bytes
// Class: Unknown

uint64_t FUN_00ea96f2(uint param_1,uint param_2,int64_t param_3,uint64_t param_4)

{
  ushort uVar1;
  uint uVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  int64_t lVar5;
  byte bVar6;
  byte bVar7;
  uint64_t uVar8;
  short sVar9;
  uint uVar10;
  int64_t arg1;
  void*this_ptr;
  uint16_t uVar11;
  int64_t lVar12;
  uint64_t uVar13;
  uint uVar14;
  uint64_t uVar15;
  uint uVar16;
  int iVar17;
  
  bVar6 = (byte)param_1;
  uVar16 = 1 << (bVar6 & 0x1f);
  uVar8 = (uint64_t)(param_2 + 1);
  uVar3 = 0xffffffffffffffd2;
  if ((((1L << (bVar6 & 0x3f)) + uVar8 * 2 + 8 <= param_4) && (param_2 < 0x100)) &&
     (uVar3 = 0xffffffffffffffd4, param_1 < 0xd)) {
    uVar13 = (uint64_t)param_2;
    uVar14 = uVar16 - 1;
    uVar11 = 1;
    uVar4 = 0;
    uVar2 = uVar14;
    do {
      sVar9 = *(short *)(arg1 + uVar4 * 2);
      if (sVar9 == -1) {
        uVar15 = (uint64_t)uVar2;
        uVar2 = uVar2 - 1;
        *(char *)(this_ptr + uVar15 * 2 + 3) = (char)uVar4;
        sVar9 = 1;
      }
      else if ((0x10000 << (bVar6 - 1 & 0x1f)) >> 0x10 <= (int)sVar9) {
        uVar11 = 0;
      }
      *(short *)(param_3 + uVar4 * 2) = sVar9;
      uVar4 = uVar4 + 1;
    } while (uVar8 != uVar4);
    *this_ptr = (short)param_1;
    this_ptr[1] = uVar11;
    if (uVar2 == uVar14) {
      iVar17 = (uVar16 >> 3) + (uVar16 >> 1) + 3;
      uVar4 = 0;
      lVar5 = 0;
      lVar12 = 0;
      do {
        uVar1 = *(ushort *)(arg1 + uVar4 * 2);
        *(int64_t *)(param_3 + uVar13 * 2 + 2 + lVar5) = lVar12;
        if (8 < (short)uVar1) {
          uVar15 = 8;
          do {
            *(int64_t *)(param_3 + uVar13 * 2 + lVar5 + 2 + uVar15) = lVar12;
            uVar15 = uVar15 + 8;
          } while (uVar15 < uVar1);
        }
        lVar5 = lVar5 + (short)uVar1;
        uVar4 = uVar4 + 1;
        lVar12 = lVar12 + 0x101010101010101;
      } while (uVar4 != uVar8);
      lVar5 = param_3 + uVar13 * 2;
      uVar8 = 0;
      uVar2 = 0;
      do {
        *(void*)(this_ptr + (uint64_t)(uVar2 & uVar14) * 2 + 3) =
             *(void*)(lVar5 + 2 + uVar8);
        *(void*)(this_ptr + (uint64_t)(iVar17 + uVar2 & uVar14) * 2 + 3) =
             *(void*)(lVar5 + 3 + uVar8);
        uVar2 = uVar2 + iVar17 * 2 & uVar14;
        uVar8 = uVar8 + 2;
      } while (uVar8 < uVar16);
    }
    else {
      uVar13 = 0;
      uVar10 = 0;
      do {
        sVar9 = *(short *)(arg1 + uVar13 * 2);
        if (0 < sVar9) {
          iVar17 = 0;
          do {
            *(char *)(this_ptr + (uint64_t)uVar10 * 2 + 3) = (char)uVar13;
            do {
              uVar10 = uVar10 + (uVar16 >> 1) + (uVar16 >> 3) + 3 & uVar14;
            } while (uVar2 < uVar10);
            iVar17 = iVar17 + 1;
          } while (iVar17 != sVar9);
        }
        uVar13 = uVar13 + 1;
      } while (uVar13 != uVar8);
      if (uVar10 != 0) {
        return 0xffffffffffffffff;
      }
    }
    uVar3 = 0;
    uVar8 = 0;
    do {
      uVar1 = *(ushort *)(param_3 + (uint64_t)*(byte *)(this_ptr + uVar8 * 2 + 3) * 2);
      *(ushort *)(param_3 + (uint64_t)*(byte *)(this_ptr + uVar8 * 2 + 3) * 2) = uVar1 + 1;
      iVar17 = 0x1f;
      if (uVar1 != 0) {
        for (; uVar1 >> iVar17 == 0; iVar17 = iVar17 + -1) {
        }
      }
      bVar7 = ((byte)iVar17 ^ 0x1f) + (bVar6 - 0x1f);
      *(byte *)((int64_t)this_ptr + uVar8 * 4 + 7) = bVar7;
      this_ptr[uVar8 * 2 + 2] = (uVar1 << (bVar7 & 0x1f)) - (short)uVar16;
      uVar8 = uVar8 + 1;
    } while (uVar16 != uVar8);
  }
  return uVar3;
}

