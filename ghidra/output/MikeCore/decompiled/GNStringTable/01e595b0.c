// Function: FUN_01e595b0
// Address: 01e595b0
// Size: 636 bytes
// Class: GNStringTable
// String references:
//   "setRootView:"
//   "objectAtIndex:"
//   "removeFromSuperview"


void FUN_01e595b0(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong unaff_RDI;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  puVar1 = PTR__objc_msgSend_024a9998;
  (*(code *)PTR__objc_msgSend_024a9998)();
  (*(code *)puVar1)();
  lVar4 = (*(code *)puVar1)();
  if (-1 < lVar4 + -1) {
    do {
      lVar4 = lVar4 + -1;
      (*(code *)puVar1)(param_1,lVar4);
      uVar5 = (*(code *)puVar1)();
      cVar3 = (*(code *)puVar1)(param_1,uVar5);
      if (cVar3 != '\0') {
        local_48 = '\0';
        local_50 = 0;
        (*(code *)puVar1)(param_1,&local_50);
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
        (*(code *)puVar1)();
      }
    } while (0 < lVar4);
  }
  (*(code *)puVar1)(param_1,*(undefined8 *)(unaff_RDI + 0xa0));
  lVar4 = (*(code *)puVar1)();
  if (lVar4 == 0) {
    (*(code *)PTR__objc_release_024a99a0)();
    DAT_028b9e10 = 0;
  }
  (*(code *)puVar1)();
  (*(code *)puVar1)(param_1,0);
  puVar2 = PTR__objc_release_024a99a0;
  (*(code *)PTR__objc_release_024a99a0)();
  (*(code *)puVar1)();
  (*(code *)puVar2)();
  FUN_00d50b00();
  if (DAT_028b9df0 != 0) {
    FUN_01e583a0();
    if (local_38 == '\0') {
      if (local_40 == 0) goto LAB_01e59811;
      FUN_00d50b00();
    }
    else if (local_40 == 0) goto LAB_01e59811;
    FUN_00dd6a00();
    lVar4 = local_40;
    if ((((local_38 == '\0') && (local_40 != 0)) && (FUN_00d50b00(), local_38 != '\0')) &&
       (local_40 != 0)) {
      FUN_00d50b20();
    }
    local_38 = '\0';
    local_40 = lVar4;
    FUN_00e383c0();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
LAB_01e59811:
  FUN_00d50b20();
  *(undefined8 *)(unaff_RDI + 0xa0) = 0;
  return;
}


