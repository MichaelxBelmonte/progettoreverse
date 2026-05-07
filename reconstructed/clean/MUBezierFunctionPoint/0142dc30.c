// Function: FUN_0142dc30
// Address: 0142dc30
// Size: 753 bytes
// Class: MUBezierFunctionPoint
// === MUBezierFunctionPoint properties ===
//                   _slope
//                   _isXLocked
//                   _isYLocked
//                   _isOffsetToNextPointLocked
//                   _leftControlPointXDelta
//                   _leftControlPointYDelta
//                   _rightControlPointXDelta
//                   _rightControlPointYDelta
//                   _syncsSlopes
//                   _rootFifthsIndex
//                   _bassFifthsIndex
//                   _degreeBits


void FUN_0142dc30(void)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t this_ptr;
  uint32_t local_68;
  uint32_t local_40;
  
  lVar1 = *(int64_t *)(this_ptr + 0xf0);
  if (lVar1 != 0) {
    local_40 = -1;
    while( true ) {
      lVar2 = (int64_t)local_40;
      local_40 = local_40 + 1;
      if (*(int *)(lVar1 + 0xc) <= local_40) break;
      lVar2 = *(int64_t *)(*(int64_t *)(*(int64_t *)(lVar1 + 0x10) + 8 + lVar2 * 8) + 0xf8);
      if (lVar2 != 0) {
        local_68 = -1;
        while (local_68 = local_68 + 1, local_68 < *(int *)(lVar2 + 0xc)) {
          FUN_0142dfe0();
        }
        FUN_01431df0();
      }
      FUN_00d21140();
    }
    FUN_01431d80();
  }
  FUN_00d216c0();
  FUN_00d216c0();
  lVar1 = *(int64_t *)(this_ptr + 0xf8);
  if (lVar1 != 0) {
    for (lVar2 = 0; (int)lVar2 < *(int *)(lVar1 + 0xc); lVar2 = lVar2 + 1) {
      (**(code **)(**(int64_t **)(*(int64_t *)(lVar1 + 0x10) + lVar2 * 8) + 0x370))();
    }
    FUN_01431e60();
  }
  lVar1 = *(int64_t *)(this_ptr + 0x110);
  if (lVar1 != 0) {
    for (lVar2 = 0; (int)lVar2 < *(int *)(lVar1 + 0xc); lVar2 = lVar2 + 1) {
      (**(code **)(**(int64_t **)(*(int64_t *)(lVar1 + 0x10) + lVar2 * 8) + 0x370))();
    }
    FUN_01431ed0();
  }
  lVar1 = *(int64_t *)(this_ptr + 0x118);
  if (lVar1 != 0) {
    for (lVar2 = 0; (int)lVar2 < *(int *)(lVar1 + 0xc); lVar2 = lVar2 + 1) {
      (**(code **)(**(int64_t **)(*(int64_t *)(lVar1 + 0x10) + lVar2 * 8) + 0x370))();
    }
    FUN_01431f40();
  }
  FUN_00d216c0();
  FUN_00d216c0();
  FUN_00d216c0();
  FUN_00b342a0();
  return;
}

