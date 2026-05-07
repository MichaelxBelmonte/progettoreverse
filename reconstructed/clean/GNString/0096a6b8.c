// Function: FUN_0096a6b8
// Address: 0096a6b8
// Size: 1452 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_0096a6b8(void)

{
  int iVar1;
  int iVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  int *arg1;
  int64_t this_ptr;
  
  if (*(int *)(this_ptr + 0x168) != 0) {
    return;
  }
  if (*arg1 == 2) {
    return;
  }
  iVar2 = *(int *)(this_ptr + 0xcc);
  iVar1 = FUN_00969dba();
  if (iVar2 == 1) {
    if (iVar1 != 0) {
      FUN_0096cd04(*(void*)(this_ptr + 0x118),*(void*)(arg1 + 2));
      FUN_0096cb5b(*(void*)(this_ptr + 0x118),3);
      iVar2 = *(int *)(this_ptr + 0xd0);
      iVar1 = -iVar2;
      if (0 < iVar2) {
        iVar1 = iVar2;
      }
      if (iVar1 == 0x40000000) {
        uVar3 = *(void*)(this_ptr + 0x118);
        uVar4 = *(void*)(this_ptr + 0x158);
      }
      else {
        FUN_00969446();
        FUN_0096c629();
        uVar4 = *(void*)(this_ptr + 0xe8);
        uVar3 = *(void*)(this_ptr + 0x118);
      }
      FUN_0096c9dc(uVar3,uVar4);
      FUN_0096cb5b(*(void*)(this_ptr + 0x108),2);
      iVar2 = FUN_0096ca99(*(void*)(this_ptr + 0x118),*(void*)(this_ptr + 0x108));
      if (iVar2 < 2) {
        FUN_0096cd04(*(void*)(this_ptr + 0xe8),*(void*)(this_ptr + 0x118));
        FUN_0096cb5b(*(void*)(this_ptr + 0xe0),2);
        FUN_0096ca28(*(void*)(this_ptr + 0xe0),*(void*)(this_ptr + 0xe0));
        FUN_0096ca28(*(void*)(this_ptr + 0xe8),*(void*)(this_ptr + 0xe0));
        FUN_0096cd04(*(void*)(this_ptr + 0xe8),*(void*)(this_ptr + 0x118));
        FUN_0096ca28(*(void*)(arg1 + 4),*(void*)(arg1 + 4));
        FUN_00969bc3();
        return;
      }
      FUN_0096a284(0,0);
      FUN_0096936d();
      return;
    }
LAB_0096a7b2:
    FUN_0096a284(0,0);
    return;
  }
  if (iVar1 == 0) goto LAB_0096a7b2;
  FUN_00969446();
  iVar2 = *(int *)(this_ptr + 0xd0);
  iVar1 = -iVar2;
  if (0 < iVar2) {
    iVar1 = iVar2;
  }
  if (iVar1 < 0x40000000) {
    if (iVar2 != 0) {
      if (*arg1 == 1) {
        FUN_0096c629(iVar1,*(void*)(this_ptr + 0xe8));
      }
      else {
        FUN_0096cd04(*(void*)(this_ptr + 0xe8),*(void*)(arg1 + 6));
      }
    }
    if (*(int *)(this_ptr + 0xd0) != 0) {
      if (*(int *)(this_ptr + 0xd0) == -3) {
        FUN_0096ca28(*(void*)(this_ptr + 0xf0),*(void*)(this_ptr + 0xe8));
        FUN_0096c9dc(*(void*)(this_ptr + 0x118),*(void*)(this_ptr + 0xe8));
        FUN_0096cd04(*(void*)(this_ptr + 0xf0),*(void*)(this_ptr + 0x118));
        uVar3 = *(void*)(this_ptr + 0xf0);
        uVar4 = *(void*)(this_ptr + 0x118);
        goto LAB_0096aa52;
      }
      FUN_0096cd04(*(void*)(this_ptr + 0xf0),*(void*)(this_ptr + 0xe8));
      FUN_0096cb5b(*(void*)(this_ptr + 0xf0),*(void*)(this_ptr + 0xd0));
    }
    FUN_0096cd04(*(void*)(this_ptr + 0xe0),*(void*)(arg1 + 2));
    FUN_0096c9dc(*(void*)(this_ptr + 0x118),*(void*)(this_ptr + 0xe0));
    FUN_0096c9dc(*(void*)(this_ptr + 0x118),*(void*)(this_ptr + 0xe0));
    if (*(int *)(this_ptr + 0xd0) == 0) goto LAB_0096aaf9;
  }
  else {
    if (*arg1 == 1) {
      FUN_0096c629(iVar1,*(void*)(this_ptr + 0xe8));
    }
    else {
      FUN_0096cd04(*(void*)(this_ptr + 0xe8),*(void*)(arg1 + 6));
    }
    FUN_0096cd04(*(void*)(this_ptr + 0xf0),*(void*)(this_ptr + 0xe8));
    FUN_0096cd04(*(void*)(this_ptr + 0xf0),*(void*)(this_ptr + 0x158));
    FUN_0096cd04(*(void*)(this_ptr + 0xe0),*(void*)(arg1 + 2));
    FUN_0096c9dc(*(void*)(this_ptr + 0x118),*(void*)(this_ptr + 0xe0));
    uVar3 = *(void*)(this_ptr + 0xe0);
    uVar4 = *(void*)(this_ptr + 0x118);
LAB_0096aa52:
    FUN_0096c9dc(uVar4,uVar3);
  }
  FUN_0096c9dc(*(void*)(this_ptr + 0x118),*(void*)(this_ptr + 0xf0));
LAB_0096aaf9:
  FUN_0096c9dc(*(void*)(this_ptr + 0xe8),*(void*)(arg1 + 4));
  if (*arg1 == 1) {
    FUN_00969bc3();
  }
  else {
    FUN_0096cd04(*(void*)(arg1 + 6),*(void*)(arg1 + 6));
  }
  FUN_0096cd04(*(void*)(this_ptr + 0xe8),*(void*)(this_ptr + 0xe8));
  FUN_0096cd04(*(void*)(this_ptr + 0xf0),*(void*)(this_ptr + 0xe8));
  FUN_0096c9dc(*(void*)(arg1 + 2),*(void*)(this_ptr + 0xf0));
  FUN_0096cd04(*(void*)(this_ptr + 0xe0),*(void*)(this_ptr + 0x118));
  FUN_0096ca28(*(void*)(arg1 + 2),*(void*)(arg1 + 2));
  FUN_0096cd04(*(void*)(this_ptr + 0xe8),*(void*)(this_ptr + 0xe8));
  iVar2 = FUN_009684b0();
  if (iVar2 != 0) {
    FUN_00967b0c(*(void*)(this_ptr + 0xe8),*(void*)(this_ptr + 0xb8));
  }
  FUN_0096836c(*(void*)(this_ptr + 0xe8),2);
  FUN_0096ca28(*(void*)(this_ptr + 0xf0),*(void*)(arg1 + 2));
  FUN_0096cd04(*(void*)(this_ptr + 0xf0),*(void*)(this_ptr + 0x118));
  FUN_0096ca28(*(void*)(arg1 + 4),*(void*)(this_ptr + 0xe8));
  *arg1 = 0;
  return;
}

