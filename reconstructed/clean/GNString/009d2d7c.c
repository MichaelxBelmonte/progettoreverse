// Function: FUN_009d2d7c
// Address: 009d2d7c
// Size: 1314 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_009d2d7c(uint64_t param_1,uint64_t param_2)

{
  uint64_t uVar1;
  uint32_t uVar2;
  int64_t lVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  char cVar8;
  char cVar9;
  int iVar10;
  uint64_t uVar11;
  int64_t lVar12;
  uint64_t arg1;
  uint64_t this_ptr;
  uint64_t uVar13;
  uint64_t uVar15;
  uint64_t uVar16;
  uint64_t uVar17;
  int local_5c;
  uint64_t uVar14;
  
  lVar3 = *(int64_t *)PTR____stack_chk_guard_024a9898;
LAB_009d2da5:
  do {
    uVar1 = arg1 - 0x28;
    uVar11 = this_ptr;
LAB_009d2dd1:
    this_ptr = uVar11;
    uVar11 = arg1 - this_ptr;
    if ((uint64_t)(((int64_t)uVar11 >> 3) * -0x3333333333333333) < 6) {
                                              (*(&g_009d33ac +
                *(int *)(&g_009d33ac + ((int64_t)uVar11 >> 3) * 0x3333333333333334)))();
      return;
    }
    if ((int64_t)uVar11 < 0x118) {
      if (*(int64_t *)PTR____stack_chk_guard_024a9898 == lVar3) {
        FUN_009d3a71(uVar11,param_2);
        return;
      }
      goto LAB_009d33a6;
    }
    uVar16 = this_ptr + (uVar11 / 0x50) * 0x28;
    if ((int64_t)uVar11 < 0x9c19) {
      local_5c = FUN_009d33c4(param_2,uVar1);
    }
    else {
      local_5c = FUN_009d382a((uVar11 / 0x14 & 0xfffffffffffffff8) * 5 + uVar16,uVar16,uVar1,param_2
                             );
    }
    iVar10 = FUN_009d0902();
    uVar11 = uVar1;
    uVar13 = arg1 - 0x50;
    if (-1 < iVar10) {
      do {
        uVar11 = uVar13;
        if (this_ptr == uVar11) {
          uVar16 = this_ptr + 0x28;
          iVar10 = FUN_009d0902();
          if (iVar10 < 0) goto LAB_009d2f36;
          if (uVar16 == uVar1) goto LAB_009d32b6;
          uVar16 = this_ptr + 0x50;
          goto LAB_009d2eba;
        }
        iVar10 = FUN_009d0902();
        uVar13 = uVar11 - 0x28;
      } while (-1 < iVar10);
      uVar2 = *(void*)(this_ptr + 0x20);
      uVar4 = *(void*)(this_ptr + 0x18);
      uVar5 = *(void*)(this_ptr + 8);
      uVar6 = *(void*)(this_ptr + 0x10);
      *(void*)(this_ptr + 0x20) = *(void*)(uVar11 + 0x20);
      *(void*)(this_ptr + 0x18) = *(void*)(uVar11 + 0x18);
      uVar7 = *(void*)(uVar11 + 8);
      *(void*)(this_ptr + 0x10) = *(void*)(uVar11 + 0x10);
      *(void*)(this_ptr + 8) = uVar7;
      *(void*)(uVar11 + 0x20) = uVar2;
      *(void*)(uVar11 + 0x18) = uVar4;
      *(void*)(uVar11 + 0x10) = uVar6;
      *(void*)(uVar11 + 8) = uVar5;
      local_5c = local_5c + 1;
    }
    uVar13 = this_ptr + 0x28;
    uVar15 = uVar13;
    if (uVar13 < uVar11) {
      while( true ) {
        uVar13 = uVar15 - 0x28;
        do {
          uVar14 = uVar13;
          uVar13 = uVar14 + 0x28;
          iVar10 = FUN_009d0902();
        } while (iVar10 < 0);
        uVar15 = uVar14 + 0x50;
        do {
          uVar17 = uVar11;
          uVar11 = uVar17 - 0x28;
          iVar10 = FUN_009d0902();
        } while (-1 < iVar10);
        if (uVar11 < uVar13) break;
        uVar2 = *(void*)(uVar14 + 0x48);
        uVar4 = *(void*)(uVar14 + 0x40);
        uVar5 = *(void*)(uVar14 + 0x30);
        uVar6 = *(void*)(uVar14 + 0x38);
        *(void*)(uVar14 + 0x48) = *(void*)(uVar17 - 8);
        *(void*)(uVar14 + 0x40) = *(void*)(uVar17 - 0x10);
        uVar7 = *(void*)(uVar17 - 0x20);
        *(void*)(uVar14 + 0x38) = *(void*)(uVar17 - 0x18);
        *(void*)(uVar14 + 0x30) = uVar7;
        *(void*)(uVar17 - 8) = uVar2;
        *(void*)(uVar17 - 0x10) = uVar4;
        *(void*)(uVar17 - 0x18) = uVar6;
        *(void*)(uVar17 - 0x20) = uVar5;
        local_5c = local_5c + 1;
        if (uVar16 == uVar13) {
          uVar16 = uVar11;
        }
      }
    }
    if ((uVar13 != uVar16) && (iVar10 = FUN_009d0902(), iVar10 < 0)) {
      uVar2 = *(void*)(uVar13 + 0x20);
      uVar4 = *(void*)(uVar13 + 0x18);
      uVar5 = *(void*)(uVar13 + 8);
      uVar6 = *(void*)(uVar13 + 0x10);
      *(void*)(uVar13 + 0x20) = *(void*)(uVar16 + 0x20);
      *(void*)(uVar13 + 0x18) = *(void*)(uVar16 + 0x18);
      uVar7 = *(void*)(uVar16 + 8);
      *(void*)(uVar13 + 0x10) = *(void*)(uVar16 + 0x10);
      *(void*)(uVar13 + 8) = uVar7;
      *(void*)(uVar16 + 0x20) = uVar2;
      *(void*)(uVar16 + 0x18) = uVar4;
      *(void*)(uVar16 + 0x10) = uVar6;
      *(void*)(uVar16 + 8) = uVar5;
      local_5c = local_5c + 1;
    }
    if (local_5c != 0) goto LAB_009d31d0;
    cVar8 = FUN_009d3bc1();
    cVar9 = FUN_009d3bc1();
    if (cVar9 == '\0') break;
    arg1 = uVar13;
    if (cVar8 != '\0') {
LAB_009d32b6:
      if (*(int64_t *)PTR____stack_chk_guard_024a9898 == lVar3) {
        return;
      }
LAB_009d33a6:
                          ___stack_chk_fail();
    }
  } while( true );
  uVar11 = uVar13 + 0x28;
  if (cVar8 == '\0') {
LAB_009d31d0:
    lVar12 = ((int64_t)(arg1 - uVar13) >> 3) * -0x3333333333333333;
    if (lVar12 <= ((int64_t)(uVar13 - this_ptr) >> 3) * -0x3333333333333333) {
      FUN_009d2d7c(lVar12,param_2);
      arg1 = uVar13;
      goto LAB_009d2da5;
    }
    FUN_009d2d7c(lVar12,param_2);
    uVar11 = uVar13 + 0x28;
  }
  goto LAB_009d2dd1;
LAB_009d2eba:
  iVar10 = FUN_009d0902();
  if (iVar10 < 0) goto LAB_009d2ed8;
  uVar16 = uVar16 + 0x28;
  if (arg1 == uVar16) goto LAB_009d32b6;
  goto LAB_009d2eba;
LAB_009d2ed8:
  uVar2 = *(void*)(uVar16 - 8);
  uVar4 = *(void*)(uVar16 - 0x10);
  uVar5 = *(void*)(uVar16 - 0x20);
  uVar6 = *(void*)(uVar16 - 0x18);
  *(void*)(uVar16 - 8) = *(void*)(arg1 - 8);
  *(void*)(uVar16 - 0x10) = *(void*)(arg1 - 0x10);
  uVar7 = *(void*)(arg1 - 0x20);
  *(void*)(uVar16 - 0x18) = *(void*)(arg1 - 0x18);
  *(void*)(uVar16 - 0x20) = uVar7;
  *(void*)(arg1 - 8) = uVar2;
  *(void*)(arg1 - 0x10) = uVar4;
  *(void*)(arg1 - 0x18) = uVar6;
  *(void*)(arg1 - 0x20) = uVar5;
LAB_009d2f36:
  uVar13 = uVar1;
  if (uVar16 == uVar1) goto LAB_009d32b6;
  while( true ) {
    uVar11 = uVar16 - 0x28;
    do {
      uVar15 = uVar11;
      uVar11 = uVar15 + 0x28;
      iVar10 = FUN_009d0902();
    } while (-1 < iVar10);
    uVar16 = uVar15 + 0x50;
    do {
      uVar14 = uVar13;
      uVar13 = uVar14 - 0x28;
      iVar10 = FUN_009d0902();
    } while (iVar10 < 0);
    if (uVar13 <= uVar11) break;
    uVar2 = *(void*)(uVar15 + 0x48);
    uVar4 = *(void*)(uVar15 + 0x40);
    uVar5 = *(void*)(uVar15 + 0x30);
    uVar6 = *(void*)(uVar15 + 0x38);
    *(void*)(uVar15 + 0x48) = *(void*)(uVar14 - 8);
    *(void*)(uVar15 + 0x40) = *(void*)(uVar14 - 0x10);
    uVar7 = *(void*)(uVar14 - 0x20);
    *(void*)(uVar15 + 0x38) = *(void*)(uVar14 - 0x18);
    *(void*)(uVar15 + 0x30) = uVar7;
    *(void*)(uVar14 - 8) = uVar2;
    *(void*)(uVar14 - 0x10) = uVar4;
    *(void*)(uVar14 - 0x18) = uVar6;
    *(void*)(uVar14 - 0x20) = uVar5;
  }
  goto LAB_009d2dd1;
}

