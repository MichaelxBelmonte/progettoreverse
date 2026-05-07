// Function: FUN_01eadc50
// Address: 01eadc50
// Size: 668 bytes
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


void FUN_01eadc50(void)

{
  void*puVar1;
  uint64_t uVar2;
  int64_t lVar3;
  int iVar4;
  int64_t this_ptr;
  uint64_t uVar5;
  float fVar6;
  float fVar7;
  float extraout_XMM0_Db;
  uint8_t auVar8 [16];
  double dVar9;
  uint64_t uStack_40;
  
  if (*(int64_t *)(this_ptr + 0x28) == 0) {
    lVar3 = *(int64_t *)(this_ptr + 0x10);
    if (*(int64_t *)(this_ptr + 0x30) == 0) goto LAB_01eaded6;
    if (*(int64_t *)(lVar3 + 8) != 0) goto LAB_01eadd26;
    uVar2 = _CGColorSpaceCreateDeviceRGB();
    FUN_01d4e5e0();
    uVar5 = (int64_t)extraout_XMM0_Db >> 0x3f & (int64_t)(extraout_XMM0_Db - g_023e16e8) |
            (int64_t)extraout_XMM0_Db;
    fVar6 = (float)FUN_01d4e5e0();
    uVar2 = _CGBitmapContextCreate
                      (8,uVar5,((int64_t)fVar6 >> 0x3f & (int64_t)(fVar6 - g_023e16e8) |
                               (int64_t)fVar6) * 4,uVar2);
    *(void*)(*(int64_t *)(this_ptr + 0x10) + 8) = uVar2;
    auVar8._8_4_ = (int)(uVar5 >> 0x20);
    auVar8._0_8_ = uVar5;
    auVar8._12_4_ = _UNK_023e16c4;
    _CGContextTranslateCTM
              (0,(auVar8._8_8_ - _UNK_023e16d8) +
                 ((double)CONCAT44(g_023e16c0,(int)uVar5) - g_023e16d0));
    _CGContextScaleCTM(g_0238fee8,g_023b19a0);
    fVar6 = (float)FUN_01d533b0();
    fVar7 = (float)FUN_01d533b0();
    _CGContextScaleCTM((double)fVar6,(double)fVar7);
    _CGColorSpaceRelease();
LAB_01eade9c:
    iVar4 = 1;
    _CGContextSetLineJoin();
    _CGContextSetLineCap();
    lVar3 = *(int64_t *)(this_ptr + 0x10);
    *(void*)(lVar3 + 0x10) = 0;
  }
  else {
    lVar3 = *(int64_t *)(this_ptr + 0x10);
    if (*(int64_t *)(lVar3 + 8) == 0) {
      _objc_alloc();
      puVar1 = PTR__objc_msgSend_024a9998;
      (*PTR__objc_msgSend_024a9998)();
      uVar2 = (*puVar1)();
      *(void*)(*(int64_t *)(this_ptr + 0x10) + 8) = uVar2;
      _CGContextRetain();
      uVar2 = _CGContextSaveGState();
      if (**(int64_t **)(*(int64_t *)(this_ptr + 0x28) + 0x1c0) == 0) {
        dVar9 = 0.0;
      }
      else {
        _objc_msgSend_stret(uVar2,PTR_s_frame_026ca200);
        dVar9 = uStack_40 + 0.0;
      }
      _CGContextTranslateCTM(g_024225a8,dVar9);
      _CGContextScaleCTM(g_0238fee8,g_023b19a0);
      (*PTR__objc_release_024a99a0)();
      goto LAB_01eade9c;
    }
LAB_01eadd26:
    iVar4 = *(int *)(lVar3 + 0x10) + 1;
  }
  *(int *)(lVar3 + 0x10) = iVar4;
LAB_01eaded6:
  _CGContextSaveGState();
  return;
}

