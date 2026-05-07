// Function: FUN_01d05080
// Address: 01d05080
// Size: 537 bytes
// Class: GNMultipleValue
// String references:
//   "colorChanged:"


/* WARNING: Removing unreachable block (ram,0x01d0527e) */
/* WARNING: Removing unreachable block (ram,0x01d05287) */

void FUN_01d05080(undefined8 param_1,undefined4 param_2)

{
  longlong lVar1;
  undefined *puVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *unaff_RDI;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 extraout_XMM0_Da;
  
  iVar4 = FUN_01d3a5a0();
  if ((iVar4 == 1) && (iVar4 = FUN_01d3b630(), iVar4 == 1)) {
    cVar3 = (**(code **)(*unaff_RDI + 0x878))();
    if ((cVar3 != '\0') && (cVar3 = FUN_01e420b0(), cVar3 == '\0')) {
      FUN_01e42250();
    }
    FUN_01d3abf0();
    uVar6 = FUN_01e466c0();
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_024a9998)();
    if (DAT_028b7bd8 == 0) {
      _objc_alloc();
      DAT_028b7bd8 = (*(code *)PTR__objc_msgSend_024a9998)();
    }
    uVar7 = FUN_01e3f820();
    cVar3 = FUN_00d05410(uVar6,uVar7,param_2);
    if (cVar3 != '\0') {
      uVar6 = FUN_00d50b00();
      (*(code *)PTR__objc_msgSend_024a9998)(uVar6,&stack0xffffffffffffffb8);
      if (unaff_RDI != (longlong *)0x0) {
        FUN_00d50b20();
      }
      puVar2 = PTR__objc_msgSend_024a9998;
      uVar6 = (*(code *)PTR__objc_msgSend_024a9998)();
      uVar6 = (*(code *)puVar2)(uVar6,PTR_s_colorChanged__026c9710);
      uVar6 = (*(code *)puVar2)(uVar6,DAT_028b7bd8);
      (*(code *)puVar2)(uVar6,1);
      lVar1 = unaff_RDI[0x39];
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      uVar5 = FUN_01f25910();
      uVar6 = (*(code *)PTR__objc_msgSend_024a9998)(extraout_XMM0_Da,uVar5);
      if (lVar1 != 0) {
        uVar6 = FUN_00d50b20();
      }
      (*(code *)PTR__objc_msgSend_024a9998)(uVar6,0);
    }
    (*(code *)PTR__objc_release_024a99a0)();
  }
  else {
    FUN_01d122b0();
  }
  return;
}


