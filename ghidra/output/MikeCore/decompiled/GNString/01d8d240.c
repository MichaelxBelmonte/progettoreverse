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


/* WARNING: Removing unreachable block (ram,0x01d8d72b) */
/* WARNING: Removing unreachable block (ram,0x01d8d288) */
/* WARNING: Removing unreachable block (ram,0x01d8d294) */
/* WARNING: Removing unreachable block (ram,0x01d8d2fc) */
/* WARNING: Removing unreachable block (ram,0x01d8d308) */
/* WARNING: Removing unreachable block (ram,0x01d8d737) */

void FUN_01d8d240(undefined4 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong unaff_RDI;
  ulonglong uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  
  FUN_01d3a650();
  _objc_alloc();
  (*(code *)PTR__objc_msgSend_024a9998)();
  FUN_01d526f0();
  FUN_01f25900();
  uVar2 = FUN_01f25620();
  uVar10 = FUN_01f26e50(param_1);
  puVar1 = PTR__objc_msgSend_024a9998;
  (*(code *)PTR__objc_msgSend_024a9998)();
  (*(code *)puVar1)();
  lVar3 = (*(code *)puVar1)();
  if (lVar3 != 0) {
    uVar9 = 0;
    do {
      uVar11 = (*(code *)puVar1)();
      (*(code *)puVar1)(uVar11,uVar9);
      uVar4 = (*(code *)puVar1)();
      (*(code *)puVar1)();
      lVar3 = (*(code *)puVar1)();
      uVar11 = extraout_XMM0_Da;
      if (lVar3 != 0) {
        uVar8 = 0;
        do {
          uVar11 = (*(code *)puVar1)();
          uVar5 = (*(code *)puVar1)(uVar11,uVar8);
          uVar5 = (*(code *)puVar1)(extraout_XMM0_Da_00,uVar5);
          uVar11 = (*(code *)puVar1)();
          uVar6 = (*(code *)puVar1)(uVar11,uVar8);
          (*(code *)puVar1)(uVar6,uVar5);
          uVar8 = uVar8 + 1;
          (*(code *)puVar1)();
          uVar7 = (*(code *)puVar1)();
          uVar11 = extraout_XMM0_Da_01;
        } while (uVar8 < uVar7);
      }
      (*(code *)puVar1)(uVar11,uVar4);
      uVar9 = uVar9 + 1;
      (*(code *)puVar1)();
      uVar8 = (*(code *)puVar1)();
    } while (uVar9 < uVar8);
  }
  uVar4 = (*(code *)puVar1)();
  lVar3 = (*(code *)puVar1)();
  if (lVar3 != 0) {
    uVar9 = 0;
    do {
      uVar11 = _objc_alloc();
      uVar5 = (*(code *)puVar1)(uVar11,uVar9);
      (*(code *)puVar1)(extraout_XMM0_Da_02,uVar5);
      uVar5 = _objc_autorelease();
      (*(code *)puVar1)();
      (*(code *)puVar1)();
      uVar11 = (*(code *)puVar1)(uVar10,uVar2);
      (*(code *)puVar1)(uVar11,uVar5);
      uVar9 = uVar9 + 1;
      uVar8 = (*(code *)puVar1)();
    } while (uVar9 < uVar8);
  }
  lVar3 = (*(code *)PTR__objc_msgSend_024a9998)();
  if (lVar3 != 0) {
    uVar2 = (*(code *)puVar1)();
    uVar10 = (*(code *)puVar1)(uVar2,uVar4,**(undefined8 **)(unaff_RDI + 0x1c0));
    (*(code *)puVar1)(uVar10,1);
  }
  (*(code *)PTR__objc_release_024a99a0)();
  FUN_01d3a5b0();
  return;
}


