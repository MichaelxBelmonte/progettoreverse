// Function: FUN_0096acb3
// Address: 0096acb3
// Size: 1450 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


uint64_t FUN_0096acb3(uint64_t param_1,int *param_2)

{
  int iVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  int *arg1;
  int64_t this_ptr;
  
  if (*(int *)(this_ptr + 0x168) != 0) {
    return 0;
  }
  if (arg1 == param_2) {
    FUN_0096a6b8();
    iVar1 = *arg1;
joined_r0x0096ad0b:
    if (iVar1 == 2) {
      return 0;
    }
    goto LAB_0096b251;
  }
  if (*param_2 == 2) {
    FUN_0096ac64();
    return 0;
  }
  if (*arg1 == 2) {
    return 0;
  }
  if (*(int *)(this_ptr + 0xcc) == 1) {
    FUN_0096ca28(*(void*)(this_ptr + 0x118),*(void*)(param_2 + 4));
    FUN_0096ca28(*(void*)(this_ptr + 0x108),*(void*)(param_2 + 2));
    iVar1 = FUN_00969dba();
    if (iVar1 == 0) goto LAB_0096afb3;
    iVar1 = FUN_0096ca99(*(void*)(this_ptr + 0x118),*(void*)(this_ptr + 0x108));
    if (1 < iVar1) {
      FUN_0096a284(0,0,param_2);
      FUN_0096936d();
      goto LAB_0096b0a4;
    }
    FUN_0096cd04(*(void*)(this_ptr + 0xe8),*(void*)(this_ptr + 0x118));
    FUN_0096ca28(*(void*)(this_ptr + 0xe0),*(void*)(arg1 + 2));
    FUN_0096ca28(*(void*)(this_ptr + 0xe0),*(void*)(param_2 + 2));
    FUN_0096ca28(*(void*)(this_ptr + 0xe8),*(void*)(this_ptr + 0xe0));
    FUN_0096cd04(*(void*)(this_ptr + 0xe8),*(void*)(this_ptr + 0x118));
    FUN_0096ca28(*(void*)(param_2 + 4),*(void*)(param_2 + 4));
    iVar1 = 1;
  }
  else {
    if (*arg1 == 1) {
      FUN_00969bc3();
      FUN_00969bc3();
    }
    else {
      FUN_0096cd04(*(void*)(this_ptr + 0x108),*(void*)(arg1 + 6));
      FUN_0096cd04(*(void*)(this_ptr + 0xe0),*(void*)(this_ptr + 0x108));
      FUN_0096cd04(*(void*)(this_ptr + 0x108),*(void*)(arg1 + 6));
      FUN_0096cd04(*(void*)(this_ptr + 0x118),*(void*)(this_ptr + 0x108));
    }
    if (*param_2 == 1) {
      FUN_00969446();
      FUN_0096c629();
    }
    else {
      FUN_0096cd04(*(void*)(this_ptr + 0x108),*(void*)(param_2 + 6));
    }
    FUN_0096cd04(*(void*)(this_ptr + 0xf8),*(void*)(this_ptr + 0x108));
    if (*param_2 != 1) {
      FUN_0096cd04(*(void*)(this_ptr + 0x108),*(void*)(param_2 + 6));
    }
    FUN_0096cd04(*(void*)(this_ptr + 0x100),*(void*)(this_ptr + 0x108));
    FUN_0096ca28(*(void*)(this_ptr + 0xe0),*(void*)(this_ptr + 0xf8));
    FUN_0096ca28(*(void*)(this_ptr + 0x118),*(void*)(this_ptr + 0x100));
    iVar1 = FUN_00969dba();
    if (iVar1 == 0) {
LAB_0096afb3:
      iVar1 = FUN_00969dba();
      if (iVar1 == 0) {
        FUN_0096a6b8();
      }
      else {
        FUN_0096a284(0,0,param_2);
      }
LAB_0096b0a4:
      iVar1 = *param_2;
      goto joined_r0x0096ad0b;
    }
    FUN_0096c9dc(*(void*)(this_ptr + 0x108),*(void*)(this_ptr + 0xf8));
    FUN_0096c9dc(*(void*)(this_ptr + 0xf8),*(void*)(this_ptr + 0x108));
    FUN_0096c9dc(*(void*)(this_ptr + 0x108),*(void*)(this_ptr + 0x100));
    FUN_0096c9dc(*(void*)(this_ptr + 0x100),*(void*)(this_ptr + 0x108));
    if (*arg1 == 1) {
      if (*param_2 != 1) {
        uVar2 = *(void*)(param_2 + 6);
        uVar3 = *(void*)(this_ptr + 0xe0);
        goto LAB_0096b0ea;
      }
      FUN_00969bc3();
    }
    else {
      if (*param_2 == 1) {
        FUN_00969bc3();
      }
      else {
        FUN_0096cd04(*(void*)(this_ptr + 0xf0),*(void*)(arg1 + 6));
      }
      uVar3 = *(void*)(this_ptr + 0xe0);
      uVar2 = *(void*)(param_2 + 6);
LAB_0096b0ea:
      FUN_0096cd04(uVar2,uVar3);
    }
    FUN_0096cd04(*(void*)(this_ptr + 0x108),*(void*)(this_ptr + 0xe0));
    FUN_0096cd04(*(void*)(this_ptr + 0xe0),*(void*)(this_ptr + 0x108));
    FUN_0096cd04(*(void*)(this_ptr + 0x108),*(void*)(this_ptr + 0xf8));
    FUN_0096cd04(*(void*)(this_ptr + 0xf8),*(void*)(this_ptr + 0x118));
    FUN_0096ca28(*(void*)(param_2 + 2),*(void*)(this_ptr + 0x108));
    FUN_0096ca28(*(void*)(this_ptr + 0x108),*(void*)(param_2 + 2));
    FUN_0096ca28(*(void*)(this_ptr + 0x108),*(void*)(param_2 + 2));
    FUN_0096cd04(*(void*)(this_ptr + 0xe8),*(void*)(this_ptr + 0x108));
    FUN_0096cd04(*(void*)(this_ptr + 0xe0),*(void*)(this_ptr + 0x100));
    FUN_0096ca28(*(void*)(this_ptr + 0x100),*(void*)(this_ptr + 0xe0));
    iVar1 = FUN_009684b0();
    if (iVar1 != 0) {
      FUN_00967b0c(*(void*)(this_ptr + 0x100),*(void*)(this_ptr + 0xb8));
    }
    FUN_0096836c(*(void*)(this_ptr + 0x100),2);
    iVar1 = 0;
  }
  FUN_00969bc3();
  *param_2 = iVar1;
LAB_0096b251:
  return *(void*)(this_ptr + 0x118);
}

