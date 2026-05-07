// Function: FUN_00ce55a0
// Address: 00ce55a0
// Size: 562 bytes
// Class: GNFilePath


bool FUN_00ce55a0(void)

{
  longlong *plVar1;
  undefined *puVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  undefined1 local_90 [8];
  longlong local_88;
  char local_80;
  longlong local_78;
  char local_70;
  longlong local_68;
  char local_60;
  
  _objc_alloc();
  (*(code *)PTR__objc_msgSend_024a9998)();
  if (unaff_RDI != (longlong *)0x0) {
    FUN_00d50b00();
  }
  uVar6 = FUN_00e1d020();
  if (unaff_RDI != (longlong *)0x0) {
    FUN_00d50b20();
  }
  cVar5 = (**(code **)(*unaff_RDI + 0x398))();
  if ((cVar5 == '\0') || (cVar5 = (**(code **)(*(longlong *)*unaff_RSI + 0x3a0))(), cVar5 == '\0'))
  {
    local_88 = *unaff_RSI;
    local_80 = '\0';
    uVar7 = FUN_00e1d020();
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    plVar1 = (longlong *)*unaff_RSI;
    (**(code **)(*unaff_RDI + 0x388))();
    lVar4 = local_68;
    if (local_60 == '\0') {
      if (local_68 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_60 = '\0';
    }
    (**(code **)(*plVar1 + 0x400))();
    lVar3 = local_78;
    if (local_70 == '\0') {
      if (local_78 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_70 = '\0';
    }
    uVar7 = FUN_00e1d020();
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
  }
  puVar2 = PTR__objc_msgSend_024a9998;
  (*(code *)PTR__objc_msgSend_024a9998)();
  cVar5 = (*(code *)puVar2)(uVar6,uVar7,local_90);
  if (cVar5 == '\0') {
    (*(code *)puVar2)();
    (*(code *)puVar2)();
    _NSLog();
  }
  (*(code *)PTR__objc_release_024a99a0)();
  return cVar5 != '\0';
}


