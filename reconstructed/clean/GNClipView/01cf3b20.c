// Function: FUN_01cf3b20
// Address: 01cf3b20
// Size: 708 bytes
// Class: GNClipView
// === GNClipView properties ===
//   GNClipViewBorderType _rightBorderType
//   GNClipViewBorderType _bottomBorderType
//   GNClipViewBorderType _leftBorderType
//   GNClipViewBorderType _topBorderType
//                   _knobProportion
//                   _increaseButtonPressed
//                   _decreaseButtonPressed
//                   _column


void FUN_01cf3b20(void)

{
  int iVar1;
  uint32_t unaff_ESI;
  int64_t *this_ptr;
  float fVar2;
  
  switch(unaff_ESI) {
  case 0:
    iVar1 = *(int *)((int64_t)this_ptr + 0x154);
    if (iVar1 == 2) {
      fVar2 = (float)FUN_01cf4890();
      if ((*(float *)((int64_t)this_ptr + 0x164) != fVar2) ||
         (NAN(*(float *)((int64_t)this_ptr + 0x164)) || NAN(fVar2))) {
        *(float *)((int64_t)this_ptr + 0x164) = fVar2;
        goto LAB_01cf3dc1;
      }
    }
    else if (iVar1 == 1) {
      if ((*(float *)((int64_t)this_ptr + 0x164) != g_02390124) ||
         (NAN(*(float *)((int64_t)this_ptr + 0x164)) || NAN(g_02390124))) {
        *(void*)((int64_t)this_ptr + 0x164) = 0x3f800000;
        goto LAB_01cf3dc1;
      }
    }
    else if ((iVar1 == 0) &&
            ((*(float *)((int64_t)this_ptr + 0x164) != 0.0 ||
             (NAN(*(float *)((int64_t)this_ptr + 0x164)))))) {
      *(void*)((int64_t)this_ptr + 0x164) = 0;
LAB_01cf3dc1:
      FUN_01cf41d0();
                                              (**(code **)(*this_ptr + 0x618))();
      return;
    }
    break;
  case 1:
    iVar1 = *(int *)((int64_t)this_ptr + 0x15c);
    if (iVar1 == 2) {
      fVar2 = (float)FUN_01cf4890();
      if ((*(float *)((int64_t)this_ptr + 0x16c) != fVar2) ||
         (NAN(*(float *)((int64_t)this_ptr + 0x16c)) || NAN(fVar2))) {
        *(float *)((int64_t)this_ptr + 0x16c) = fVar2;
        goto LAB_01cf3dc1;
      }
    }
    else if (iVar1 == 1) {
      if ((*(float *)((int64_t)this_ptr + 0x16c) != g_02390124) ||
         (NAN(*(float *)((int64_t)this_ptr + 0x16c)) || NAN(g_02390124))) {
        *(void*)((int64_t)this_ptr + 0x16c) = 0x3f800000;
        goto LAB_01cf3dc1;
      }
    }
    else if ((iVar1 == 0) &&
            ((*(float *)((int64_t)this_ptr + 0x16c) != 0.0 ||
             (NAN(*(float *)((int64_t)this_ptr + 0x16c)))))) {
      *(void*)((int64_t)this_ptr + 0x16c) = 0;
      goto LAB_01cf3dc1;
    }
    break;
  case 2:
    iVar1 = (int)this_ptr[0x2b];
    if (iVar1 == 2) {
      fVar2 = (float)FUN_01cf4890();
      if ((*(float *)(this_ptr + 0x2d) != fVar2) ||
         (NAN(*(float *)(this_ptr + 0x2d)) || NAN(fVar2))) {
        *(float *)(this_ptr + 0x2d) = fVar2;
        goto LAB_01cf3dc1;
      }
    }
    else if (iVar1 == 1) {
      if ((*(float *)(this_ptr + 0x2d) != g_02390124) ||
         (NAN(*(float *)(this_ptr + 0x2d)) || NAN(g_02390124))) {
        *(void*)(this_ptr + 0x2d) = 0x3f800000;
        goto LAB_01cf3dc1;
      }
    }
    else if ((iVar1 == 0) &&
            ((*(float *)(this_ptr + 0x2d) != 0.0 || (NAN(*(float *)(this_ptr + 0x2d)))))) {
      *(void*)(this_ptr + 0x2d) = 0;
      goto LAB_01cf3dc1;
    }
    break;
  case 3:
    iVar1 = (int)this_ptr[0x2c];
    if (iVar1 == 2) {
      fVar2 = (float)FUN_01cf4890();
      if ((*(float *)(this_ptr + 0x2e) != fVar2) ||
         (NAN(*(float *)(this_ptr + 0x2e)) || NAN(fVar2))) {
        *(float *)(this_ptr + 0x2e) = fVar2;
        goto LAB_01cf3dc1;
      }
    }
    else if (iVar1 == 1) {
      if ((*(float *)(this_ptr + 0x2e) != g_02390124) ||
         (NAN(*(float *)(this_ptr + 0x2e)) || NAN(g_02390124))) {
        *(void*)(this_ptr + 0x2e) = 0x3f800000;
        goto LAB_01cf3dc1;
      }
    }
    else if ((iVar1 == 0) &&
            ((*(float *)(this_ptr + 0x2e) != 0.0 || (NAN(*(float *)(this_ptr + 0x2e)))))) {
      *(void*)(this_ptr + 0x2e) = 0;
      goto LAB_01cf3dc1;
    }
  }
  return;
}

