// Function: FUN_00ce7310
// Address: 00ce7310
// Size: 521 bytes
// Class: GNFilePath


undefined8 FUN_00ce7310(void)

{
  undefined *puVar1;
  longlong lVar2;
  char cVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 unaff_RDI;
  longlong *local_88;
  char local_80;
  undefined *puVar9;
  longlong local_40;
  char local_38;
  
  _objc_alloc();
  puVar1 = PTR__objc_msgSend_024a9998;
  uVar4 = (*(code *)PTR__objc_msgSend_024a9998)();
  _NSSearchPathForDirectoriesInDomains();
  (*(code *)puVar1)();
  (*(code *)puVar1)();
  uVar5 = (*(code *)puVar1)();
  if (4 < uVar5) {
    (*(code *)puVar1)();
    cVar3 = (*(code *)puVar1)();
    if (cVar3 != '\0') {
      puVar9 = PTR__OBJC_CLASS___NSString_026ca408;
      uVar6 = (*(code *)puVar1)();
      uVar7 = (*(code *)puVar1)();
      uVar8 = (*(code *)puVar1)();
      (*(code *)puVar1)(uVar6,&cf__________,uVar7,uVar8,uVar4,puVar9);
    }
  }
  FUN_00e1ccf0();
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  FUN_00cddf30();
  if ((local_80 == '\0') && (local_88 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  if (local_40 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  (*(code *)PTR__objc_release_024a99a0)();
  lVar2 = DAT_028001c0;
  if (DAT_028001c0 != 0) {
    FUN_00d50b00();
  }
  (**(code **)(*local_88 + 0x400))();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return unaff_RDI;
}


