// Function: FUN_01d8d240
// Address: 01d8d240
// Size: 1279 bytes
// Class: GNString
// String references:
//   "objectAtIndexedSubscript:"
//   "new"
//   "types"
//   "dataForType:"
//   "setData:forType:"
//   "addObject:"
//   "initWithPasteboardWriter:"
//   "size"
//   "count"
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_01d8d240(uint32_t param_1)

{
  void*puVar1;
  uint64_t uVar2;
  int64_t lVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  int64_t this_ptr;
  uint64_t uVar9;
  uint32_t uVar10;
  uint32_t uVar11;
  uint32_t extraout_XMM0_Da;
  uint32_t extraout_XMM0_Da_00;
  uint32_t extraout_XMM0_Da_01;
  uint32_t extraout_XMM0_Da_02;
  
  FUN_01d3a650();
  _objc_alloc();
  (*PTR__objc_msgSend_024a9998)();
  FUN_01d526f0();
  FUN_01f25900();
  uVar2 = FUN_01f25620();
  uVar10 = FUN_01f26e50(param_1);
  puVar1 = PTR__objc_msgSend_024a9998;
  (*PTR__objc_msgSend_024a9998)();
  (*puVar1)();
  lVar3 = (*puVar1)();
  if (lVar3 != 0) {
    uVar9 = 0;
    do {
      uVar11 = (*puVar1)();
      (*puVar1)(uVar11,uVar9);
      uVar4 = (*puVar1)();
      (*puVar1)();
      lVar3 = (*puVar1)();
      uVar11 = extraout_XMM0_Da;
      if (lVar3 != 0) {
        uVar8 = 0;
        do {
          uVar11 = (*puVar1)();
          uVar5 = (*puVar1)(uVar11,uVar8);
          uVar5 = (*puVar1)(extraout_XMM0_Da_00,uVar5);
          uVar11 = (*puVar1)();
          uVar6 = (*puVar1)(uVar11,uVar8);
          (*puVar1)(uVar6,uVar5);
          uVar8 = uVar8 + 1;
          (*puVar1)();
          uVar7 = (*puVar1)();
          uVar11 = extraout_XMM0_Da_01;
        } while (uVar8 < uVar7);
      }
      (*puVar1)(uVar11,uVar4);
      uVar9 = uVar9 + 1;
      (*puVar1)();
      uVar8 = (*puVar1)();
    } while (uVar9 < uVar8);
  }
  uVar4 = (*puVar1)();
  lVar3 = (*puVar1)();
  if (lVar3 != 0) {
    uVar9 = 0;
    do {
      uVar11 = _objc_alloc();
      uVar5 = (*puVar1)(uVar11,uVar9);
      (*puVar1)(extraout_XMM0_Da_02,uVar5);
      uVar5 = _objc_autorelease();
      (*puVar1)();
      (*puVar1)();
      uVar11 = (*puVar1)(uVar10,uVar2);
      (*puVar1)(uVar11,uVar5);
      uVar9 = uVar9 + 1;
      uVar8 = (*puVar1)();
    } while (uVar9 < uVar8);
  }
  lVar3 = (*PTR__objc_msgSend_024a9998)();
  if (lVar3 != 0) {
    uVar2 = (*puVar1)();
    uVar10 = (*puVar1)(uVar2,uVar4,**(void**)(this_ptr + 0x1c0));
    (*puVar1)(uVar10,1);
  }
  (*PTR__objc_release_024a99a0)();
  FUN_01d3a5b0();
  return;
}

