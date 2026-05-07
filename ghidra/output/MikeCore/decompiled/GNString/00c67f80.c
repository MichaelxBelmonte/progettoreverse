// Function: FUN_00c67f80
// Address: 00c67f80
// Size: 2932 bytes
// Class: GNString
// String references:
//   "compressed frame too big: %u vs. %u \n"


undefined8 FUN_00c67f80(undefined4 param_1,undefined8 param_2,ulonglong param_3,ulonglong param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  ushort uVar8;
  uint uVar9;
  int iVar10;
  short sVar11;
  int iVar12;
  int iVar13;
  char *unaff_RSI;
  longlong unaff_RDI;
  ulonglong uVar14;
  ulonglong uVar15;
  int iVar16;
  longlong lVar17;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar18;
  undefined1 local_100 [24];
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  ulonglong local_c8;
  uint local_c0;
  undefined4 local_bc;
  int local_b8;
  int local_b4;
  ulonglong local_b0;
  ulonglong local_a8;
  int local_9c;
  ulonglong local_98;
  uint local_78;
  int local_6c;
  int local_68;
  int local_64;
  ulonglong local_60;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  uint local_38;
  
  local_d8 = *(undefined8 *)(unaff_RSI + 0x10);
  uVar18 = *(undefined4 *)unaff_RSI;
  uStack_e4 = *(undefined4 *)(unaff_RSI + 4);
  uStack_e0 = *(undefined4 *)(unaff_RSI + 8);
  uStack_dc = *(undefined4 *)(unaff_RSI + 0xc);
  uVar14 = (ulonglong)*(uint *)(unaff_RDI + 8);
  sVar11 = (short)*(uint *)(unaff_RDI + 8);
  uVar8 = sVar11 * 0x4000 | (ushort)(sVar11 - 0x10U) >> 2;
  if (4 < uVar8) {
    return 0xffffffce;
  }
  if (uVar8 == 3) {
    return 0xffffffce;
  }
  local_b0 = param_3 & 0xffffffff;
  local_98 = (ulonglong)(0x17 < sVar11);
  if (sVar11 == 0x20) {
    local_98 = 2;
  }
  local_9c = (int)local_98 * 8;
  local_64 = (int)sVar11 + (int)local_98 * -8 + 1;
  local_b8 = *(int *)(&DAT_0000205c + unaff_RDI);
  local_38 = (uint)*(ushort *)(unaff_RDI + 0xc + local_b0 * 2);
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
      uVar18 = FUN_00c6cfd0(*(undefined8 *)(unaff_RDI + 0x28),*(undefined8 *)(unaff_RDI + 0x20),
                            local_58 & 0xffffffff,2);
      break;
    case 1:
      uVar18 = FUN_00c6d170(*(undefined8 *)(unaff_RDI + 0x28),*(undefined8 *)(unaff_RDI + 0x20),
                            local_58 & 0xffffffff,2);
      break;
    case 2:
      uVar18 = FUN_00c6d2a0(*(undefined8 *)(unaff_RDI + 0x28),*(undefined8 *)(unaff_RDI + 0x20),
                            local_58 & 0xffffffff,2);
      break;
    case 4:
      uVar18 = FUN_00c6d560(*(undefined8 *)(unaff_RDI + 0x28),*(undefined8 *)(unaff_RDI + 0x20),
                            local_58 & 0xffffffff,2);
    }
    local_48 = CONCAT44(local_48._4_4_,iVar13);
    FUN_00c66620(uVar18,*(undefined4 *)(&DAT_00002060 + unaff_RDI));
    uVar14 = local_58;
    iVar13 = local_64;
    FUN_00c6b580(unaff_RDI + lVar6 + 0x130,local_58 & 0xffffffff,8,local_64);
    FUN_00c6b580("/System/Library/Frameworks/CFNetwork.framework/Versions/A/CFNetwork" +
                 lVar6 + unaff_RDI + 0x28,uVar14 & 0xffffffff,8,iVar13);
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
    uVar14 = (ulonglong)*(ushort *)(unaff_RDI + 8);
    iVar13 = (uint)local_48 + 1;
    uVar18 = extraout_XMM0_Da;
  }
  sVar11 = (short)local_38;
  *(short *)(unaff_RDI + 0xc + local_b0 * 2) = sVar11;
  uVar18 = extraout_XMM0_Da;
  switch((int)*(short *)(unaff_RDI + 8) << 0x1e | (int)*(short *)(unaff_RDI + 8) - 0x10U >> 2) {
  case 0:
    uVar18 = FUN_00c6cfd0(*(undefined8 *)(unaff_RDI + 0x28),*(undefined8 *)(unaff_RDI + 0x20),
                          local_a8 & 0xffffffff,2);
    break;
  case 1:
    uVar18 = FUN_00c6d170(*(undefined8 *)(unaff_RDI + 0x28),*(undefined8 *)(unaff_RDI + 0x20),
                          local_a8 & 0xffffffff,2);
    break;
  case 2:
    uVar18 = FUN_00c6d2a0(*(undefined8 *)(unaff_RDI + 0x28),*(undefined8 *)(unaff_RDI + 0x20),
                          local_a8 & 0xffffffff,2);
    break;
  case 4:
    uVar18 = FUN_00c6d560(*(undefined8 *)(unaff_RDI + 0x28),*(undefined8 *)(unaff_RDI + 0x20),
                          local_a8 & 0xffffffff,2);
  }
  uVar14 = uVar14 >> 5 & 0x7ffffff;
  local_bc = (undefined4)uVar14;
  local_38 = 4;
  local_78 = 0x80000000;
  lVar17 = 4;
  uVar7 = CONCAT71((int7)(uVar14 >> 8),1);
  lVar6 = lVar6 + unaff_RDI;
  uVar9 = 0x80000000;
  uVar2 = 4;
  local_b4 = (int)sVar11;
  do {
    local_c0 = (uint)uVar7;
    local_b0 = CONCAT44(local_b0._4_4_,uVar9);
    FUN_00c66620(uVar18,*(undefined4 *)(&DAT_00002060 + unaff_RDI));
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
  iVar10 = *(short *)(unaff_RDI + 8) * iVar5;
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
    local_48 = (ulonglong)(local_38 - 1);
    if (local_38 != 0) {
      uVar14 = 0;
      do {
        uVar18 = FUN_00c667a0(uVar18,0x10);
        uVar14 = uVar14 + 1;
      } while (local_38 != uVar14);
    }
    uVar18 = FUN_00c667a0(uVar18,8);
    uVar18 = FUN_00c667a0(uVar18,8);
    local_58 = (ulonglong)(uVar2 - 1);
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
    uVar7 = FUN_00c65f80(uVar14 & 0xffffffff,unaff_RSI,iVar13,&local_6c);
    if ((int)uVar7 != 0) {
      return uVar7;
    }
    FUN_00c6b580("/System/Library/Frameworks/AppKit.framework/Versions/C/AppKit" +
                 lVar6 + local_58 * 0x20 + 0x10,uVar14 & 0xffffffff,uVar2,iVar13);
    FUN_00c65990(0xe,0x28,uVar14 & 0xffffffff,uVar14 & 0xffffffff);
    uVar7 = FUN_00c65f80(uVar14 & 0xffffffff,unaff_RSI,iVar13,&local_68);
    if ((int)uVar7 != 0) {
      return uVar7;
    }
    iVar13 = FUN_00c66700();
    iVar5 = FUN_00c66700();
    if ((uint)(iVar13 - iVar5) < uVar4) {
      return 0;
    }
    *(undefined8 *)(unaff_RSI + 0x10) = local_d8;
    *(undefined4 *)unaff_RSI = local_e8;
    *(undefined4 *)(unaff_RSI + 4) = uStack_e4;
    *(undefined4 *)(unaff_RSI + 8) = uStack_e0;
    *(undefined4 *)(unaff_RSI + 0xc) = uStack_dc;
    _printf(unaff_RSI,(ulonglong)uVar4);
  }
  FUN_00c68b40(param_1,local_50,uVar14 & 0xffffffff);
  return 0;
}


