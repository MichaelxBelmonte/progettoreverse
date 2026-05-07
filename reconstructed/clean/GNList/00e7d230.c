// Function: FUN_00e7d230
// Address: 00e7d230
// Size: 1188 bytes
// Class: GNList
// === GNList properties ===
//   GNInt           _archiveVersion
//   bool            _awakesObjectsAfterDecoding
//   bool            _isCancelled
//   GNInt           _currentObjectGraphIdx
//   GNInt           _predictedDecodedValuesIndex


void FUN_00e7d230(uint64_t param_1,uint32_t param_2)

{
  ushort *puVar1;
  uint uVar2;
  int iVar3;
  uint64_t uVar4;
  int64_t lVar5;
  int unaff_ESI;
  int64_t lVar6;
  int64_t this_ptr;
  uint64_t uVar7;
  uint64_t uVar8;
  uint8_t auVar9 [16];
  uint8_t auVar10 [16];
  uint8_t auVar11 [16];
  
  auVar10 = g_023e1680;
  auVar11 = g_023e0070;
  auVar9 = g_023de250;
  switch(param_2) {
  case 1:
    break;
  case 2:
    iVar3 = unaff_ESI + 3;
    if (-1 < unaff_ESI) {
      iVar3 = unaff_ESI;
    }
    if (unaff_ESI < 4) {
      return;
    }
    uVar2 = (iVar3 >> 2) - 1;
    if (uVar2 < 7) {
      uVar7 = 0;
      goto LAB_00e7d496;
    }
    uVar8 = (uint64_t)uVar2 + 1;
    uVar7 = uVar8 & 0xfffffffffffffff8;
    uVar4 = (uVar7 - 8 >> 3) + 1;
    if (uVar7 - 8 == 0) {
      lVar5 = 0;
LAB_00e7d461:
      auVar9 = pshufb(*(uint8_t (*) [16])(this_ptr + lVar5 * 4),g_023e0070);
      auVar11 = pshufb(*(uint8_t (*) [16])(this_ptr + 0x10 + lVar5 * 4),g_023e0070);
      *(uint8_t (*) [16])(this_ptr + lVar5 * 4) = auVar9;
      *(uint8_t (*) [16])(this_ptr + 0x10 + lVar5 * 4) = auVar11;
    }
    else {
      lVar6 = -(uVar4 & 0xfffffffffffffffe);
      lVar5 = 0;
      do {
        auVar9 = pshufb(*(uint8_t (*) [16])(this_ptr + lVar5 * 4),auVar11);
        auVar10 = pshufb(*(uint8_t (*) [16])(this_ptr + 0x10 + lVar5 * 4),auVar11);
        *(uint8_t (*) [16])(this_ptr + lVar5 * 4) = auVar9;
        *(uint8_t (*) [16])(this_ptr + 0x10 + lVar5 * 4) = auVar10;
        auVar9 = pshufb(*(uint8_t (*) [16])(this_ptr + 0x20 + lVar5 * 4),auVar11);
        auVar10 = pshufb(*(uint8_t (*) [16])(this_ptr + 0x30 + lVar5 * 4),auVar11);
        *(uint8_t (*) [16])(this_ptr + 0x20 + lVar5 * 4) = auVar9;
        *(uint8_t (*) [16])(this_ptr + 0x30 + lVar5 * 4) = auVar10;
        lVar5 = lVar5 + 0x10;
        lVar6 = lVar6 + 2;
      } while (lVar6 != 0);
      if ((uVar4 & 1) != 0) goto LAB_00e7d461;
    }
    if (uVar8 == uVar7) {
      return;
    }
    this_ptr = this_ptr + uVar7 * 4;
LAB_00e7d496:
    lVar5 = 0;
    do {
      uVar2 = *(uint *)(this_ptr + lVar5 * 4);
      *(uint *)(this_ptr + lVar5 * 4) =
           uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
      lVar5 = lVar5 + 1;
    } while ((iVar3 >> 2) - (int)uVar7 != (int)lVar5);
    return;
  case 3:
    if (unaff_ESI < 2) {
      return;
    }
    uVar2 = unaff_ESI / 2 - 1;
    if (uVar2 < 0xf) {
      uVar4 = 0;
      goto LAB_00e7d587;
    }
    uVar7 = (uint64_t)uVar2 + 1;
    uVar4 = uVar7 & 0x1fffffff0;
    uVar8 = (uVar4 - 0x10 >> 4) + 1;
    if (uVar4 - 0x10 == 0) {
      lVar5 = 0;
LAB_00e7d552:
      auVar9 = pshufb(*(uint8_t (*) [16])(this_ptr + lVar5 * 2),g_023de250);
      auVar11 = pshufb(*(uint8_t (*) [16])(this_ptr + 0x10 + lVar5 * 2),g_023de250);
      *(uint8_t (*) [16])(this_ptr + lVar5 * 2) = auVar9;
      *(uint8_t (*) [16])(this_ptr + 0x10 + lVar5 * 2) = auVar11;
    }
    else {
      lVar6 = -(uVar8 & 0xfffffffffffffffe);
      lVar5 = 0;
      do {
        auVar11 = pshufb(*(uint8_t (*) [16])(this_ptr + lVar5 * 2),auVar9);
        auVar10 = pshufb(*(uint8_t (*) [16])(this_ptr + 0x10 + lVar5 * 2),auVar9);
        *(uint8_t (*) [16])(this_ptr + lVar5 * 2) = auVar11;
        *(uint8_t (*) [16])(this_ptr + 0x10 + lVar5 * 2) = auVar10;
        auVar11 = pshufb(*(uint8_t (*) [16])(this_ptr + 0x20 + lVar5 * 2),auVar9);
        auVar10 = pshufb(*(uint8_t (*) [16])(this_ptr + 0x30 + lVar5 * 2),auVar9);
        *(uint8_t (*) [16])(this_ptr + 0x20 + lVar5 * 2) = auVar11;
        *(uint8_t (*) [16])(this_ptr + 0x30 + lVar5 * 2) = auVar10;
        lVar5 = lVar5 + 0x20;
        lVar6 = lVar6 + 2;
      } while (lVar6 != 0);
      if ((uVar8 & 1) != 0) goto LAB_00e7d552;
    }
    if (uVar7 == uVar4) {
      return;
    }
    this_ptr = this_ptr + uVar4 * 2;
LAB_00e7d587:
    lVar5 = 0;
    do {
      puVar1 = (ushort *)(this_ptr + lVar5 * 2);
      *puVar1 = *puVar1 << 8 | *puVar1 >> 8;
      lVar5 = lVar5 + 1;
    } while (unaff_ESI / 2 - (int)uVar4 != (int)lVar5);
    return;
  case 4:
    iVar3 = unaff_ESI + 7;
    if (-1 < unaff_ESI) {
      iVar3 = unaff_ESI;
    }
    if (unaff_ESI < 8) {
      return;
    }
    uVar2 = (iVar3 >> 3) - 1;
    if (uVar2 < 3) {
      uVar4 = 0;
    }
    else {
      uVar7 = (uint64_t)uVar2 + 1;
      uVar4 = uVar7 & 0x1fffffffc;
      uVar8 = (uVar4 - 4 >> 2) + 1;
      if (uVar4 - 4 == 0) {
        lVar5 = 0;
LAB_00e7d642:
        auVar9 = pshufb(*(uint8_t (*) [16])(this_ptr + lVar5 * 8),g_023e1680);
        auVar11 = pshufb(*(uint8_t (*) [16])(this_ptr + 0x10 + lVar5 * 8),g_023e1680);
        *(uint8_t (*) [16])(this_ptr + lVar5 * 8) = auVar9;
        *(uint8_t (*) [16])(this_ptr + 0x10 + lVar5 * 8) = auVar11;
      }
      else {
        lVar6 = -(uVar8 & 0xfffffffffffffffe);
        lVar5 = 0;
        do {
          auVar9 = pshufb(*(uint8_t (*) [16])(this_ptr + lVar5 * 8),auVar10);
          auVar11 = pshufb(*(uint8_t (*) [16])(this_ptr + 0x10 + lVar5 * 8),auVar10);
          *(uint8_t (*) [16])(this_ptr + lVar5 * 8) = auVar9;
          *(uint8_t (*) [16])(this_ptr + 0x10 + lVar5 * 8) = auVar11;
          auVar9 = pshufb(*(uint8_t (*) [16])(this_ptr + 0x20 + lVar5 * 8),auVar10);
          auVar11 = pshufb(*(uint8_t (*) [16])(this_ptr + 0x30 + lVar5 * 8),auVar10);
          *(uint8_t (*) [16])(this_ptr + 0x20 + lVar5 * 8) = auVar9;
          *(uint8_t (*) [16])(this_ptr + 0x30 + lVar5 * 8) = auVar11;
          lVar5 = lVar5 + 8;
          lVar6 = lVar6 + 2;
        } while (lVar6 != 0);
        if ((uVar8 & 1) != 0) goto LAB_00e7d642;
      }
      if (uVar7 == uVar4) {
        return;
      }
      this_ptr = this_ptr + uVar4 * 8;
    }
    lVar5 = 0;
    do {
      uVar7 = *(uint64_t *)(this_ptr + lVar5 * 8);
      *(uint64_t *)(this_ptr + lVar5 * 8) =
           uVar7 >> 0x38 | (uVar7 & 0xff000000000000) >> 0x28 | (uVar7 & 0xff0000000000) >> 0x18 |
           (uVar7 & 0xff00000000) >> 8 | (uVar7 & 0xff000000) << 8 | (uVar7 & 0xff0000) << 0x18 |
           (uVar7 & 0xff00) << 0x28 | uVar7 << 0x38;
      lVar5 = lVar5 + 1;
    } while ((iVar3 >> 3) - (int)uVar4 != (int)lVar5);
  default:
    goto switchD_00e7d24e_default;
  }
  iVar3 = unaff_ESI + 3;
  if (-1 < unaff_ESI) {
    iVar3 = unaff_ESI;
  }
  if (unaff_ESI < 4) {
    return;
  }
  uVar2 = (iVar3 >> 2) - 1;
  if (uVar2 < 7) {
    uVar7 = 0;
  }
  else {
    uVar8 = (uint64_t)uVar2 + 1;
    uVar7 = uVar8 & 0xfffffffffffffff8;
    uVar4 = (uVar7 - 8 >> 3) + 1;
    if (uVar7 - 8 == 0) {
      lVar5 = 0;
LAB_00e7d381:
      auVar9 = pshufb(*(uint8_t (*) [16])(this_ptr + lVar5 * 4),g_023e0070);
      auVar11 = pshufb(*(uint8_t (*) [16])(this_ptr + 0x10 + lVar5 * 4),g_023e0070);
      *(uint8_t (*) [16])(this_ptr + lVar5 * 4) = auVar9;
      *(uint8_t (*) [16])(this_ptr + 0x10 + lVar5 * 4) = auVar11;
    }
    else {
      lVar6 = -(uVar4 & 0xfffffffffffffffe);
      lVar5 = 0;
      do {
        auVar9 = pshufb(*(uint8_t (*) [16])(this_ptr + lVar5 * 4),auVar11);
        auVar10 = pshufb(*(uint8_t (*) [16])(this_ptr + 0x10 + lVar5 * 4),auVar11);
        *(uint8_t (*) [16])(this_ptr + lVar5 * 4) = auVar9;
        *(uint8_t (*) [16])(this_ptr + 0x10 + lVar5 * 4) = auVar10;
        auVar9 = pshufb(*(uint8_t (*) [16])(this_ptr + 0x20 + lVar5 * 4),auVar11);
        auVar10 = pshufb(*(uint8_t (*) [16])(this_ptr + 0x30 + lVar5 * 4),auVar11);
        *(uint8_t (*) [16])(this_ptr + 0x20 + lVar5 * 4) = auVar9;
        *(uint8_t (*) [16])(this_ptr + 0x30 + lVar5 * 4) = auVar10;
        lVar5 = lVar5 + 0x10;
        lVar6 = lVar6 + 2;
      } while (lVar6 != 0);
      if ((uVar4 & 1) != 0) goto LAB_00e7d381;
    }
    if (uVar8 == uVar7) {
      return;
    }
    this_ptr = this_ptr + uVar7 * 4;
  }
  lVar5 = 0;
  do {
    uVar2 = *(uint *)(this_ptr + lVar5 * 4);
    *(uint *)(this_ptr + lVar5 * 4) =
         uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
    lVar5 = lVar5 + 1;
  } while ((iVar3 >> 2) - (int)uVar7 != (int)lVar5);
switchD_00e7d24e_default:
  return;
}

