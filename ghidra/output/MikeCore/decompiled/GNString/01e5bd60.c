// Function: FUN_01e5bd60
// Address: 01e5bd60
// Size: 566 bytes
// Class: GNString
// String references:
//   "frame"


void FUN_01e5bd60(float param_1,float param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  longlong lVar3;
  longlong unaff_RDI;
  float fVar4;
  undefined4 uVar5;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 local_a8;
  undefined8 uStack_80;
  double local_78;
  double dStack_70;
  double dStack_60;
  
  puVar2 = PTR_s_frame_026ca200;
  if (*(longlong *)(unaff_RDI + 0xa0) == 0) {
    dStack_60 = 0.0;
    dStack_70 = 0.0;
    fVar4 = 0.0;
  }
  else {
    _objc_msgSend_stret(param_1,PTR_s_frame_026ca200);
    fVar4 = (float)local_78;
  }
  puVar1 = PTR__objc_msgSend_024a9998;
  uVar5 = (*(code *)PTR__objc_msgSend_024a9998)();
  lVar3 = (*(code *)puVar1)(uVar5,0);
  if (lVar3 == 0) {
    uStack_80 = 0;
    uVar5 = 0;
    uVar8 = 0;
  }
  else {
    _objc_msgSend_stret(extraout_XMM0_Da,puVar2);
    uVar5 = (undefined4)uStack_80;
    uVar8 = (undefined4)((ulonglong)uStack_80 >> 0x20);
  }
  lVar3 = (*(code *)PTR__objc_msgSend_024a9998)();
  if (lVar3 == 0) {
    uVar6 = 0;
    uVar9 = 0;
    lVar3 = *(longlong *)(unaff_RDI + 0xa0);
  }
  else {
    _objc_msgSend_stret(extraout_XMM0_Da_00,puVar2);
    uVar6 = (undefined4)local_a8;
    uVar9 = (undefined4)((ulonglong)local_a8 >> 0x20);
    lVar3 = *(longlong *)(unaff_RDI + 0xa0);
  }
  if (lVar3 != 0) {
    uVar7 = (*(code *)puVar1)();
    lVar3 = (*(code *)puVar1)(uVar7,0);
    if (lVar3 == 0) {
      dStack_60 = 0.0;
    }
    else {
      _objc_msgSend_stret(extraout_XMM0_Da_01,PTR_s_frame_026ca200);
    }
    lVar3 = (*(code *)PTR__objc_msgSend_024a9998)();
    if (lVar3 == 0) {
      uVar7 = 0;
      uVar10 = 0;
    }
    else {
      _objc_msgSend_stret(extraout_XMM0_Da_02,PTR_s_frame_026ca200);
      uVar7 = (undefined4)uStack_80;
      uVar10 = (undefined4)((ulonglong)uStack_80 >> 0x20);
    }
    (*(code *)PTR__objc_msgSend_024a9998)
              (SUB84((double)(fVar4 + param_1),0),
               (dStack_60 -
               (double)((float)(((double)CONCAT44(uVar8,uVar5) - dStack_70) -
                               (double)CONCAT44(uVar9,uVar6)) + param_2)) -
               (double)CONCAT44(uVar10,uVar7));
  }
  return;
}


