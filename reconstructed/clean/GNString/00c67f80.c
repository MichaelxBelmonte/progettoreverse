// Function: FUN_00c67f80
// Address: 00c67f80
// Size: 2932 bytes
// Class: GNString
// String references:
//   "compressed frame too big: %u vs. %u \n"
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


uint64_t FUN_00c67f80(uint32_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int64_t lVar6;
  uint64_t uVar7;
  ushort uVar8;
  uint uVar9;
  int iVar10;
  short sVar11;
  int iVar12;
  int iVar13;
  char *arg1;
  int64_t this_ptr;
  uint64_t uVar14;
  uint64_t uVar15;
  int iVar16;
  int64_t lVar17;
  uint32_t extraout_XMM0_Da;
  uint32_t uVar18;
  uint8_t local_100 [24];
  uint32_t local_e8;
  uint32_t uStack_e4;
  uint32_t uStack_e0;
  uint32_t uStack_dc;
  uint64_t local_d8;
  uint64_t local_c8;
  uint local_c0;
  uint32_t local_bc;
  int local_b8;
  int local_b4;
  uint64_t local_b0;
  uint64_t local_a8;
  int local_9c;
  uint64_t local_98;
  uint local_78;
  int local_6c;
  int local_68;
  int local_64;
  uint64_t local_60;
  uint64_t local_58;
  uint64_t local_50;
  uint64_t local_48;
  uint local_38;
  
  local_d8 = *(void*)(arg1 + 0x10);
  uVar18 = *(void*)arg1;
  uStack_e4 = *(void*)(arg1 + 4);
  uStack_e0 = *(void*)(arg1 + 8);
  uStack_dc = *(void*)(arg1 + 0xc);
  uVar14 = (uint64_t)*(uint *)(this_ptr + 8);
  sVar11 = (short)*(uint *)(this_ptr + 8);
  uVar8 = sVar11 * 0x4000 | (ushort)(sVar11 - 0x10U) >> 2;
  if (4 < uVar8) {
    return 0xffffffce;
  }
  if (uVar8 == 3) {
    return 0xffffffce;
  }
  local_b0 = param_3 & 0xffffffff;
  local_98 = (uint64_t)(0x17 < sVar11);
  if (sVar11 == 0x20) {
    local_98 = 2;
  }
  local_9c = (int)local_98 * 8;
  local_64 = (int)sVar11 + (int)local_98 * -8 + 1;
  local_b8 = *(int *)(&g_0000205c + this_ptr);
  local_38 = (uint)*(ushort *)(this_ptr + 0xc + local_b0 * 2);
  local_58 = CONCAT44(local_58._4_4_,(int)(param_4 >> 3)) & 0xffffffff1fffffff;
  lVar6 = local_b0 * 0x200;
  local_60 = CONCAT44(local_60._4_4_,0x80000000);
  iVar13 = 0;
  local_e8 = uVar18;
  local_c8 = uVar14;
  local_a8 = param_4;
  local_50 = param_2;
  while( true ) {
    switch((int)(short)uVar14 << 0x1e | (int)(short)uVar14 - 0x10U >> 2) {
    case 0:
      uVar18 = FUN_00c6cfd0(*(void*)(this_ptr + 0x28),*(void*)(this_ptr + 0x20),
                            local_58 & 0xffffffff,2);
      break;
    case 1:
      uVar18 = FUN_00c6d170(*(void*)(this_ptr + 0x28),*(void*)(this_ptr + 0x20),
                            local_58 & 0xffffffff,2);
      break;
    case 2:
      uVar18 = FUN_00c6d2a0(*(void*)(this_ptr + 0x28),*(void*)(this_ptr + 0x20),
                            local_58 & 0xffffffff,2);
      break;
    case 4:
      uVar18 = FUN_00c6d560(*(void*)(this_ptr + 0x28),*(void*)(this_ptr + 0x20),
                            local_58 & 0xffffffff,2);
    }
    local_48 = CONCAT44(local_48._4_4_,iVar13);
    FUN_00c66620(uVar18,*(void*)(&g_00002060 + this_ptr));
    uVar14 = local_58;
    iVar13 = local_64;
    FUN_00c6b580(this_ptr + lVar6 + 0x130,local_58 & 0xffffffff,8,local_64);
    FUN_00c6b580("/System/Library/Frameworks/CFNetwork.framework/Versions/A/CFNetwork" +
                 lVar6 + this_ptr + 0x28,uVar14 & 0xffffffff,8,iVar13);
    FUN_00c65990(0xe,0x28,uVar14 & 0xffffffff,uVar14 & 0xffffffff);
    uVar7 = FUN_00c65f80(uVar14 & 0xffffffff,local_100,iVar13,&local_6c);
    if ((int)uVar7 != 0) {
      return uVar7;
    }
    FUN_00c65990(0xe,0x28,uVar14 & 0xffffffff,uVar14 & 0xffffffff);
    uVar7 = FUN_00c65f80(uVar14 & 0xffffffff,local_100,iVar13,&local_68);
    uVar14 = local_a8;
    if ((int)uVar7 != 0) {
      return uVar7;
    }
    uVar2 = local_68 + local_6c;
    if (uVar2 < (uint)local_60) {
      local_38 = (uint)local_48;
    }
    if ((uint)local_48 == 4) break;
    uVar9 = (uint)local_60;
    if (uVar2 < (uint)local_60) {
      uVar9 = uVar2;
    }
    local_60 = CONCAT44(local_60._4_4_,uVar9);
    uVar14 = (uint64_t)*(ushort *)(this_ptr + 8);
    iVar13 = (uint)local_48 + 1;
    uVar18 = extraout_XMM0_Da;
  }
  sVar11 = (short)local_38;
  *(short *)(this_ptr + 0xc + local_b0 * 2) = sVar11;
  uVar18 = extraout_XMM0_Da;
  switch((int)*(short *)(this_ptr + 8) << 0x1e | (int)*(short *)(this_ptr + 8) - 0x10U >> 2) {
  case 0:
    uVar18 = FUN_00c6cfd0(*(void*)(this_ptr + 0x28),*(void*)(this_ptr + 0x20),
                          local_a8 & 0xffffffff,2);
    break;
  case 1:
    uVar18 = FUN_00c6d170(*(void*)(this_ptr + 0x28),*(void*)(this_ptr + 0x20),
                          local_a8 & 0xffffffff,2);
    break;
  case 2:
    uVar18 = FUN_00c6d2a0(*(void*)(this_ptr + 0x28),*(void*)(this_ptr + 0x20),
                          local_a8 & 0xffffffff,2);
    break;
  case 4:
    uVar18 = FUN_00c6d560(*(void*)(this_ptr + 0x28),*(void*)(this_ptr + 0x20),
                          local_a8 & 0xffffffff,2);
  }
  uVar14 = uVar14 >> 5 & 0x7ffffff;
  local_bc = (uint32_t)uVar14;
  local_38 = 4;
  local_78 = 0x80000000;
  lVar17 = 4;
  uVar7 = CONCAT71((int7)(uVar14 >> 8),1);
  lVar6 = lVar6 + this_ptr;
  uVar9 = 0x80000000;
  uVar2 = 4;
  local_b4 = (int)sVar11;
  do {
    local_c0 = (uint)uVar7;
    local_b0 = CONCAT44(local_b0._4_4_,uVar9);
    FUN_00c66620(uVar18,*(void*)(&g_00002060 + this_ptr));
    iVar13 = local_64;
    uVar18 = local_bc;
    local_48 = lVar17 * 0x20 + lVar6 + 0x30;
    uVar14 = lVar17 * 0x20 + 0x1030 + lVar6;
    uVar4 = (uint)lVar17;
    local_60 = uVar14;
    FUN_00c6b580(local_48,local_bc,lVar17,local_64);
    FUN_00c6b580(uVar14,uVar18,lVar17,iVar13);
    uVar14 = local_48;
    FUN_00c6b580(local_48,uVar18,lVar17,iVar13);
    FUN_00c6b580(local_60,uVar18,lVar17,iVar13);
    FUN_00c6b580(uVar14,uVar18,lVar17,iVar13);
    uVar14 = local_60;
    FUN_00c6b580(local_60,uVar18,lVar17,iVar13);
    FUN_00c6b580(local_48,uVar18,lVar17,iVar13);
    FUN_00c6b580(uVar14,uVar18,lVar17,iVar13);
    uVar14 = local_48;
    FUN_00c6b580(local_48,uVar18,lVar17,iVar13);
    FUN_00c6b580(local_60,uVar18,lVar17,iVar13);
    FUN_00c6b580(uVar14,uVar18,lVar17,iVar13);
    uVar14 = local_60;
    FUN_00c6b580(local_60,uVar18,lVar17,iVar13);
    FUN_00c6b580(local_48,uVar18,lVar17,iVar13);
    FUN_00c6b580(uVar14,uVar18,lVar17,iVar13);
    FUN_00c6b580(local_48,uVar18,lVar17,iVar13);
    FUN_00c6b580(uVar14,uVar18,lVar17,iVar13);
    uVar14 = local_58;
    FUN_00c65990(0xe,0x28,local_58 & 0xffffffff,local_58 & 0xffffffff);
    FUN_00c65f80(uVar14 & 0xffffffff,local_100,iVar13,&local_6c);
    uVar9 = uVar4 * 0x10 + local_6c * 8;
    if (uVar9 < local_78) {
      local_78 = uVar9;
      local_38 = uVar4;
    }
    FUN_00c65990(0xe,0x28,uVar14 & 0xffffffff,uVar14 & 0xffffffff);
    uVar18 = FUN_00c65f80(uVar14 & 0xffffffff,local_100,local_64,&local_68);
    iVar13 = local_b8;
    uVar1 = uVar4 * 0x10 + local_68 * 8;
    uVar9 = (uint)local_b0;
    if (uVar1 < (uint)local_b0) {
      uVar9 = uVar1;
      uVar2 = uVar4;
    }
    lVar17 = 8;
    uVar7 = 0;
  } while ((local_c0 & 1) != 0);
  iVar16 = (int)local_a8;
  iVar3 = (uint)(local_b8 != iVar16) * 0x20;
  iVar5 = iVar16 * 2;
  iVar12 = 0x40;
  if (0x17 < (short)local_c8) {
    iVar12 = iVar5 * local_9c + 0x40;
  }
  iVar10 = *(short *)(this_ptr + 8) * iVar5;
  uVar4 = iVar3 + iVar10 + 0x10;
  uVar14 = local_a8;
  if (iVar12 + iVar3 + uVar9 + local_78 < uVar4) {
    local_60 = CONCAT44(local_60._4_4_,iVar5);
    uVar18 = FUN_00c667a0(iVar10,0xc);
    uVar18 = FUN_00c667a0(uVar18,4);
    if (iVar13 != iVar16) {
      uVar18 = FUN_00c667a0(uVar18,0x20);
    }
    uVar18 = FUN_00c667a0(uVar18,8);
    uVar18 = FUN_00c667a0(uVar18,8);
    uVar18 = FUN_00c667a0(uVar18,8);
    uVar18 = FUN_00c667a0(uVar18,8);
    local_48 = (uint64_t)(local_38 - 1);
    if (local_38 != 0) {
      uVar14 = 0;
      do {
        uVar18 = FUN_00c667a0(uVar18,0x10);
        uVar14 = uVar14 + 1;
      } while (local_38 != uVar14);
    }
    uVar18 = FUN_00c667a0(uVar18,8);
    uVar18 = FUN_00c667a0(uVar18,8);
    local_58 = (uint64_t)(uVar2 - 1);
    if (uVar2 != 0) {
      uVar14 = 0;
      do {
        uVar18 = FUN_00c667a0(uVar18,0x10);
        uVar14 = uVar14 + 1;
      } while (uVar2 != uVar14);
    }
    iVar13 = local_9c;
    if ((0x17 < (short)local_c8) && ((uint)local_60 != 0)) {
      iVar5 = (int)local_98;
      uVar15 = local_60 & 0xffffffff;
      uVar14 = 0;
      do {
        FUN_00c667a0(iVar13,iVar5 << 4);
        uVar14 = uVar14 + 2;
      } while (uVar14 < uVar15);
    }
    iVar13 = local_64;
    uVar14 = local_a8;
    FUN_00c6b580(lVar6 + local_48 * 0x20 + 0x50,local_a8 & 0xffffffff,local_38,local_64);
    FUN_00c65990(0xe,0x28,uVar14 & 0xffffffff,uVar14 & 0xffffffff);
    uVar7 = FUN_00c65f80(uVar14 & 0xffffffff,arg1,iVar13,&local_6c);
    if ((int)uVar7 != 0) {
      return uVar7;
    }
    FUN_00c6b580("/System/Library/Frameworks/AppKit.framework/Versions/C/AppKit" +
                 lVar6 + local_58 * 0x20 + 0x10,uVar14 & 0xffffffff,uVar2,iVar13);
    FUN_00c65990(0xe,0x28,uVar14 & 0xffffffff,uVar14 & 0xffffffff);
    uVar7 = FUN_00c65f80(uVar14 & 0xffffffff,arg1,iVar13,&local_68);
    if ((int)uVar7 != 0) {
      return uVar7;
    }
    iVar13 = FUN_00c66700();
    iVar5 = FUN_00c66700();
    if ((uint)(iVar13 - iVar5) < uVar4) {
      return 0;
    }
    *(void*)(arg1 + 0x10) = local_d8;
    *(void*)arg1 = local_e8;
    *(void*)(arg1 + 4) = uStack_e4;
    *(void*)(arg1 + 8) = uStack_e0;
    *(void*)(arg1 + 0xc) = uStack_dc;
    _printf(arg1,(uint64_t)uVar4);
  }
  FUN_00c68b40(param_1,local_50,uVar14 & 0xffffffff);
  return 0;
}

