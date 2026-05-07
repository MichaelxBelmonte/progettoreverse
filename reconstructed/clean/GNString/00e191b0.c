// Function: FUN_00e191b0
// Address: 00e191b0
// Size: 501 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_00e191b0(uint64_t param_1,int64_t *param_2)

{
  int64_t lVar1;
  int iVar2;
  uint32_t uVar3;
  int64_t lVar4;
  int64_t arg1;
  int64_t *this_ptr;
  uint32_t extraout_XMM0_Da;
  int64_t local_58;
  char local_50;
  
  lVar4 = *(int64_t *)(arg1 + 0x10);
  if (*(int64_t *)(lVar4 + 0x30) != 0) {
    _CFRelease();
    lVar4 = *(int64_t *)(arg1 + 0x10);
    *(void*)(lVar4 + 0x30) = 0;
  }
  if (*(int64_t *)(lVar4 + 0x38) != 0) {
    FUN_00d50b20();
    *(void*)(*(int64_t *)(arg1 + 0x10) + 0x38) = 0;
  }
  _CFDataCreateWithBytesNoCopy
            (*(void*)PTR__kCFAllocatorNull_024a98e0,(int64_t)*(int *)(*param_2 + 0x18));
  iVar2 = _CFMessagePortSendRequest(0,param_1,*(int64_t *)(arg1 + 0x10) + 0x30);
  _CFRelease();
  lVar1 = g_02785488;
  lVar4 = g_02785480;
  if (iVar2 + 4U < 2) {
    if (g_02785488 != 0) {
      FUN_00d50b00();
    }
    FUN_00cc78b0();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  else if (iVar2 + 2U < 2) {
    if (g_02785480 != 0) {
      FUN_00d50b00();
    }
    FUN_00cc78b0();
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
  }
  if (*(int64_t *)(*(int64_t *)(arg1 + 0x10) + 0x30) == 0) {
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
  }
  else {
    _CFDataGetBytePtr();
    uVar3 = _CFDataGetLength();
    FUN_00c8e480(extraout_XMM0_Da,uVar3);
    if ((local_50 == '\0') && (local_58 != 0)) {
      FUN_00d50b00();
    }
    FUN_00c92170();
    FUN_00d50b00();
    *(int64_t *)(*(int64_t *)(arg1 + 0x10) + 0x38) = local_58;
    *(void*)(this_ptr + 1) = 0;
    if (local_58 == 0) {
      *this_ptr = 0;
      *(void*)(this_ptr + 1) = 1;
    }
    else {
      FUN_00d50b00();
      *this_ptr = local_58;
      *(void*)(this_ptr + 1) = 1;
      FUN_00d50b20();
    }
  }
  return;
}

