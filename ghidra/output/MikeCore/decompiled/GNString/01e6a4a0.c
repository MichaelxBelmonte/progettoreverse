// Function: FUN_01e6a4a0
// Address: 01e6a4a0
// Size: 1107 bytes
// Class: GNString
// String references:
//   "dictionary"


void FUN_01e6a4a0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  undefined4 uVar4;
  undefined4 extraout_XMM0_Da;
  undefined8 uVar5;
  longlong local_80;
  char local_78;
  
  _objc_alloc();
  (*(code *)PTR__objc_msgSend_024a9998)();
  if (**(longlong **)(unaff_RDI + 0x10) == 0) {
    uVar4 = FUN_00d50b00();
    (*(code *)PTR__objc_msgSend_024a9998)(uVar4,&stack0xffffffffffffffc0);
    if (unaff_RDI != 0) {
      FUN_00d50b20();
    }
  }
  if (*(longlong *)(unaff_RDI + 0x28) != 0) {
    FUN_00d50b00();
    uVar4 = FUN_00d50b20();
    puVar1 = PTR__objc_msgSend_024a9998;
    (*(code *)PTR__objc_msgSend_024a9998)(uVar4,*(undefined8 *)PTR__NSPrintSaveJob_0249c198);
    (*(code *)puVar1)();
    lVar3 = *(longlong *)(unaff_RDI + 0x28);
    if (lVar3 != 0) {
      FUN_00d50b00();
    }
    uVar2 = FUN_00e1d020();
    uVar2 = (*(code *)PTR__objc_msgSend_024a9998)(extraout_XMM0_Da,uVar2);
    (*(code *)PTR__objc_msgSend_024a9998)(*(undefined8 *)PTR__NSPrintJobSavingURL_0249c180,uVar2);
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    uVar4 = (*(code *)puVar1)();
    uVar2 = (*(code *)puVar1)(uVar4,1);
    (*(code *)puVar1)(*(undefined8 *)PTR__NSPrintAllPages_0249c178,uVar2);
  }
  puVar1 = PTR__objc_msgSend_024a9998;
  (*(code *)PTR__objc_msgSend_024a9998)();
  (*(code *)puVar1)();
  if (*(longlong *)(unaff_RDI + 0x18) != 0) {
    FUN_00d50b00();
  }
  _objc_alloc();
  (*(code *)PTR__objc_msgSend_024a9998)();
  lVar3 = (*(code *)PTR__objc_msgSend_024a9998)();
  uVar4 = (*(code *)PTR__objc_release_024a99a0)();
  uVar2 = (*(code *)PTR__objc_msgSend_024a9998)(uVar4,lVar3 != 0);
  (*(code *)PTR__objc_msgSend_024a9998)(*(undefined8 *)PTR__NSPrintOrientation_0249c188,uVar2);
  FUN_00d50b20();
  if (*(longlong *)(unaff_RDI + 0x18) != 0) {
    FUN_00d50b00();
  }
  _objc_alloc();
  (*(code *)PTR__objc_msgSend_024a9998)();
  uVar4 = (*(code *)PTR__objc_msgSend_024a9998)();
  (*(code *)PTR__objc_release_024a99a0)();
  uVar5 = FUN_01f1f210(uVar4,param_2);
  FUN_00d50b20();
  puVar1 = PTR__objc_msgSend_024a9998;
  (*(code *)PTR__objc_msgSend_024a9998)();
  (*(code *)puVar1)();
  uVar2 = (*(code *)puVar1)();
  (*(code *)puVar1)(*(undefined8 *)PTR__NSPrintPaperSize_0249c190,uVar2);
  uVar4 = (*(code *)puVar1)(SUB84((double)(float)uVar5,0),(double)(float)((ulonglong)uVar5 >> 0x20))
  ;
  local_80 = *unaff_RSI;
  local_78 = '\0';
  (*(code *)puVar1)(uVar4,&local_80);
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  uVar4 = FUN_00d50b00();
  uVar4 = (*(code *)PTR__objc_msgSend_024a9998)(uVar4,&stack0xffffffffffffff90);
  if (unaff_RDI != 0) {
    uVar4 = FUN_00d50b20();
  }
  puVar1 = PTR__objc_msgSend_024a9998;
  uVar4 = (*(code *)PTR__objc_msgSend_024a9998)(uVar4,0);
  (*(code *)puVar1)(uVar4,1);
  (*(code *)puVar1)();
  (*(code *)PTR__objc_release_024a99a0)();
  return;
}


