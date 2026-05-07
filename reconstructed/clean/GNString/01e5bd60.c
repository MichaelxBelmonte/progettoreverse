// Function: FUN_01e5bd60
// Address: 01e5bd60
// Size: 566 bytes
// Class: GNString
// String references:
//   "frame"
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_01e5bd60(float param_1,float param_2)

{
  void*puVar1;
  void*puVar2;
  int64_t lVar3;
  int64_t this_ptr;
  float fVar4;
  uint32_t uVar5;
  uint32_t extraout_XMM0_Da;
  uint32_t extraout_XMM0_Da_00;
  uint32_t uVar6;
  uint32_t uVar7;
  uint32_t extraout_XMM0_Da_01;
  uint32_t extraout_XMM0_Da_02;
  uint32_t uVar8;
  uint32_t uVar9;
  uint32_t uVar10;
  uint64_t local_a8;
  uint64_t uStack_80;
  double local_78;
  double dStack_70;
  double dStack_60;
  
  puVar2 = PTR_s_frame_026ca200;
  if (*(int64_t *)(this_ptr + 0xa0) == 0) {
    dStack_60 = 0.0;
    dStack_70 = 0.0;
    fVar4 = 0.0;
  }
  else {
    _objc_msgSend_stret(param_1,PTR_s_frame_026ca200);
    fVar4 = (float)local_78;
  }
  puVar1 = PTR__objc_msgSend_024a9998;
  uVar5 = (*PTR__objc_msgSend_024a9998)();
  lVar3 = (*puVar1)(uVar5,0);
  if (lVar3 == 0) {
    uStack_80 = 0;
    uVar5 = 0;
    uVar8 = 0;
  }
  else {
    _objc_msgSend_stret(extraout_XMM0_Da,puVar2);
    uVar5 = (uint32_t)uStack_80;
    uVar8 = (uint32_t)((uint64_t)uStack_80 >> 0x20);
  }
  lVar3 = (*PTR__objc_msgSend_024a9998)();
  if (lVar3 == 0) {
    uVar6 = 0;
    uVar9 = 0;
    lVar3 = *(int64_t *)(this_ptr + 0xa0);
  }
  else {
    _objc_msgSend_stret(extraout_XMM0_Da_00,puVar2);
    uVar6 = (uint32_t)local_a8;
    uVar9 = (uint32_t)((uint64_t)local_a8 >> 0x20);
    lVar3 = *(int64_t *)(this_ptr + 0xa0);
  }
  if (lVar3 != 0) {
    uVar7 = (*puVar1)();
    lVar3 = (*puVar1)(uVar7,0);
    if (lVar3 == 0) {
      dStack_60 = 0.0;
    }
    else {
      _objc_msgSend_stret(extraout_XMM0_Da_01,PTR_s_frame_026ca200);
    }
    lVar3 = (*PTR__objc_msgSend_024a9998)();
    if (lVar3 == 0) {
      uVar7 = 0;
      uVar10 = 0;
    }
    else {
      _objc_msgSend_stret(extraout_XMM0_Da_02,PTR_s_frame_026ca200);
      uVar7 = (uint32_t)uStack_80;
      uVar10 = (uint32_t)((uint64_t)uStack_80 >> 0x20);
    }
    (*PTR__objc_msgSend_024a9998)
              (SUB84((double)(fVar4 + param_1),0),
               (dStack_60 -
               (double)((float)(((double)CONCAT44(uVar8,uVar5) - dStack_70) -
                               (double)CONCAT44(uVar9,uVar6)) + param_2)) -
               (double)CONCAT44(uVar10,uVar7));
  }
  return;
}

