// Function: FUN_01eadc50
// Address: 01eadc50
// Size: 668 bytes
// Class: GNString
// String references:
//   "frame"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01eadc50(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  longlong unaff_RDI;
  ulonglong uVar5;
  float fVar6;
  float fVar7;
  float extraout_XMM0_Db;
  undefined1 auVar8 [16];
  double dVar9;
  undefined8 uStack_40;
  
  if (*(longlong *)(unaff_RDI + 0x28) == 0) {
    lVar3 = *(longlong *)(unaff_RDI + 0x10);
    if (*(longlong *)(unaff_RDI + 0x30) == 0) goto LAB_01eaded6;
    if (*(longlong *)(lVar3 + 8) != 0) goto LAB_01eadd26;
    uVar2 = _CGColorSpaceCreateDeviceRGB();
    FUN_01d4e5e0();
    uVar5 = (longlong)extraout_XMM0_Db >> 0x3f & (longlong)(extraout_XMM0_Db - _DAT_023e16e8) |
            (longlong)extraout_XMM0_Db;
    fVar6 = (float)FUN_01d4e5e0();
    uVar2 = _CGBitmapContextCreate
                      (8,uVar5,((longlong)fVar6 >> 0x3f & (longlong)(fVar6 - _DAT_023e16e8) |
                               (longlong)fVar6) * 4,uVar2);
    *(undefined8 *)(*(longlong *)(unaff_RDI + 0x10) + 8) = uVar2;
    auVar8._8_4_ = (int)(uVar5 >> 0x20);
    auVar8._0_8_ = uVar5;
    auVar8._12_4_ = _UNK_023e16c4;
    _CGContextTranslateCTM
              (0,(auVar8._8_8_ - _UNK_023e16d8) +
                 ((double)CONCAT44(_DAT_023e16c0,(int)uVar5) - _DAT_023e16d0));
    _CGContextScaleCTM(DAT_0238fee8,DAT_023b19a0);
    fVar6 = (float)FUN_01d533b0();
    fVar7 = (float)FUN_01d533b0();
    _CGContextScaleCTM((double)fVar6,(double)fVar7);
    _CGColorSpaceRelease();
LAB_01eade9c:
    iVar4 = 1;
    _CGContextSetLineJoin();
    _CGContextSetLineCap();
    lVar3 = *(longlong *)(unaff_RDI + 0x10);
    *(undefined4 *)(lVar3 + 0x10) = 0;
  }
  else {
    lVar3 = *(longlong *)(unaff_RDI + 0x10);
    if (*(longlong *)(lVar3 + 8) == 0) {
      _objc_alloc();
      puVar1 = PTR__objc_msgSend_024a9998;
      (*(code *)PTR__objc_msgSend_024a9998)();
      uVar2 = (*(code *)puVar1)();
      *(undefined8 *)(*(longlong *)(unaff_RDI + 0x10) + 8) = uVar2;
      _CGContextRetain();
      uVar2 = _CGContextSaveGState();
      if (**(longlong **)(*(longlong *)(unaff_RDI + 0x28) + 0x1c0) == 0) {
        dVar9 = 0.0;
      }
      else {
        _objc_msgSend_stret(uVar2,PTR_s_frame_026ca200);
        dVar9 = uStack_40 + 0.0;
      }
      _CGContextTranslateCTM(DAT_024225a8,dVar9);
      _CGContextScaleCTM(DAT_0238fee8,DAT_023b19a0);
      (*(code *)PTR__objc_release_024a99a0)();
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


