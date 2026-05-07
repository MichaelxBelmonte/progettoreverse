// Function: FUN_0096c22d
// Address: 0096c22d
// Size: 663 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_0096c22d(int64_t param_1,uint64_t param_2,int64_t param_3)

{
  int iVar1;
  int iVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  int64_t this_ptr;
  
  if (*(int *)(this_ptr + 0x168) != 0) {
    return;
  }
  iVar1 = FUN_00969dba();
  if (iVar1 != 0) {
    iVar1 = FUN_00969dba();
    if ((iVar1 == 1) || (iVar1 = FUN_00969dba(), iVar1 == -1)) {
      FUN_00969446();
      FUN_0096c629();
    }
    else {
      FUN_00969bc3();
      FUN_00969446();
      FUN_0096c629();
      FUN_00969bc3();
      FUN_00969bc3();
      FUN_00969bc3();
      FUN_00969ba3();
      FUN_00968044(*(void*)(this_ptr + 0xe0),1);
      iVar1 = FUN_00969226();
      if (0 < iVar1) {
        iVar1 = iVar1 + 1;
        do {
          iVar2 = FUN_00969e82();
          if (iVar2 == 0) {
            FUN_0096cd04(*(void*)(this_ptr + 0x120),*(void*)(this_ptr + 0x118));
            FUN_0096ca28(*(void*)(this_ptr + 0x120),*(void*)(this_ptr + 0xf0));
            FUN_0096cd04(*(void*)(this_ptr + 0x118),*(void*)(this_ptr + 0x118));
            uVar4 = *(void*)(this_ptr + 0xf8);
            uVar3 = *(void*)(this_ptr + 0x118);
          }
          else {
            FUN_0096cd04(*(void*)(this_ptr + 0x118),*(void*)(this_ptr + 0x120));
            FUN_0096ca28(*(void*)(this_ptr + 0x118),*(void*)(this_ptr + 0xf0));
            FUN_0096cd04(*(void*)(this_ptr + 0x120),*(void*)(this_ptr + 0x120));
            uVar4 = *(void*)(this_ptr + 0xf8);
            uVar3 = *(void*)(this_ptr + 0x120);
          }
          FUN_0096ca28(uVar3,uVar4);
          iVar1 = iVar1 + -1;
        } while (1 < iVar1);
      }
      FUN_00969bc3();
      if (param_3 == param_1) {
        return;
      }
    }
    FUN_00969bc3();
    return;
  }
  FUN_00969412();
  FUN_00969446();
  FUN_0096c629();
  return;
}

