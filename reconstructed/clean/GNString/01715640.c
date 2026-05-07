// Function: FUN_01715640
// Address: 01715640
// Size: 1292 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_01715640(void)

{
  int64_t *plVar1;
  uint uVar2;
  int64_t lVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint64_t uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint64_t uVar13;
  uint64_t uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  void*arg1;
  uint uVar18;
  uint uVar19;
  int64_t this_ptr;
  int64_t local_48;
  char local_40;
  
  FUN_00d61ea0();
  lVar3 = g_027cc2e8;
  plVar1 = (int64_t *)*arg1;
  if (g_027cc2e8 != 0) {
    FUN_00d50b00();
  }
  iVar5 = (**(code **)(*plVar1 + 0x598))();
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  lVar3 = g_027cc2f0;
  if (iVar5 < 2) {
    plVar1 = (int64_t *)*arg1;
    if (g_027cc2f0 != 0) {
      FUN_00d50b00();
    }
    cVar4 = (**(code **)(*plVar1 + 0x590))();
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    lVar3 = g_027cc2f8;
    if (cVar4 == '\0') {
      plVar1 = (int64_t *)*arg1;
      if (g_027cc2f8 != 0) {
        FUN_00d50b00();
      }
      (**(code **)(*plVar1 + 0x578))();
      if ((local_40 == '\0') && (local_48 != 0)) {
        FUN_00d50b00();
      }
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      uVar6 = FUN_00c716c0();
      lVar3 = g_027cc2e8;
      plVar1 = (int64_t *)*arg1;
      if (g_027cc2e8 != 0) {
        FUN_00d50b00();
      }
      iVar5 = (**(code **)(*plVar1 + 0x598))();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      uVar2 = uVar6 | 0x10;
      if (0 < iVar5) {
        uVar2 = uVar6;
      }
      uVar6 = uVar2 >> 4 & 1;
      uVar14 = (uint64_t)(uVar6 - 1 & 0xfffff00f);
      if (uVar6 == 0) {
        uVar14 = 0xf;
      }
      cVar4 = ((byte)uVar2 & 0xf) * '\a' + -7;
      uVar6 = cVar4 * 0x2b;
      cVar4 = cVar4 + ((char)((uVar6 & 0xffff) >> 0xf) + (char)(uVar6 >> 9)) * -0xc;
      cVar4 = (cVar4 >> 7 & 0xcU) + cVar4 + '\x06';
      uVar6 = cVar4 * 0x2b;
      cVar4 = cVar4 + ((char)((uVar6 & 0xffff) >> 0xf) + (char)(uVar6 >> 9)) * -0xc;
      iVar10 = (int)(char)(cVar4 + -6);
      iVar5 = iVar10 + 0xc;
      if (-1 < cVar4) {
        iVar5 = iVar10;
      }
      *(int *)(this_ptr + 0xc) = iVar5;
      uVar11 = uVar2 >> 5 & 1;
      uVar6 = uVar11 - 1;
      if (uVar11 == 0) {
        uVar6 = 0xf;
      }
      uVar11 = uVar2 >> 6 & 1;
      uVar12 = 0xf;
      uVar9 = (uint64_t)(uVar11 - 1);
      if (uVar11 == 0) {
        uVar9 = 0xf;
      }
      uVar18 = uVar2 >> 7 & 1;
      uVar11 = uVar18 - 1;
      if (uVar18 == 0) {
        uVar11 = uVar12;
      }
      uVar16 = uVar2 >> 9 & 1;
      uVar18 = uVar16 - 1;
      if (uVar16 == 0) {
        uVar18 = uVar12;
      }
      uVar7 = uVar2 >> 10 & 1;
      uVar16 = uVar7 - 1;
      if (uVar7 == 0) {
        uVar16 = uVar12;
      }
      uVar12 = uVar2 >> 0xb & 1;
      uVar7 = 0xf;
      uVar13 = (uint64_t)(uVar12 - 1);
      if (uVar12 == 0) {
        uVar13 = 0xf;
      }
      uVar19 = uVar2 >> 0xc & 1;
      uVar12 = uVar19 - 1;
      if (uVar19 == 0) {
        uVar12 = uVar7;
      }
      uVar17 = uVar2 >> 0xd & 1;
      uVar19 = uVar17 - 1;
      if (uVar17 == 0) {
        uVar19 = uVar7;
      }
      uVar8 = uVar2 >> 0xe & 1;
      uVar17 = uVar8 - 1;
      if (uVar8 == 0) {
        uVar17 = uVar7;
      }
      uVar15 = uVar2 >> 0xf & 1;
      uVar8 = uVar15 - 1;
      if (uVar15 == 0) {
        uVar8 = uVar7;
      }
      *(uint64_t *)(this_ptr + 0x18) =
           (uint64_t)uVar8 << 0x2c |
           (uint64_t)(uVar17 & 0x7fff0f) << 0x28 |
           (uint64_t)(uVar19 & 0x7fff00f) << 0x24 | (uint64_t)(uVar12 & 0x7fff000f) << 0x20 |
           (uVar13 << 0x1c |
            (uint64_t)(uVar16 & 0xff00000f) << 0x18 | (uint64_t)(uVar18 & 0xf000000f) << 0x14 |
           (uint64_t)((uVar2 & 0x100) * 0x100 + 0xf0000 & 0xf0000) |
           (uint64_t)(uVar11 & 0xfff0000f) << 0xc |
           (uVar9 << 8 |
           (uint64_t)(uVar6 & 0xf000000f) << 4 |
           uVar14 | (uint64_t)*(uint *)(this_ptr + 0x1c) << 0x20) & 0xffffffff00000fff) &
           0xffff0000ffffffff;
      FUN_01715d80();
      if (local_48 != 0) {
        FUN_00d50b20();
      }
    }
  }
  lVar3 = g_027cc2e8;
  plVar1 = (int64_t *)*arg1;
  if (g_027cc2e8 != 0) {
    FUN_00d50b00();
  }
  iVar5 = (**(code **)(*plVar1 + 0x598))();
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  lVar3 = g_027cc300;
  if (iVar5 < 3) {
    plVar1 = (int64_t *)*arg1;
    if (g_027cc300 != 0) {
      FUN_00d50b00();
    }
    (**(code **)(*plVar1 + 0x520))();
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    FUN_01716100();
  }
  else if (*(int *)(this_ptr + 0x10) + 0x80000001U < 2) {
    *(void*)(this_ptr + 0x10) = 0;
  }
  return;
}

