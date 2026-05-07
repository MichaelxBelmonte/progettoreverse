// Function: FUN_01d657b0
// Address: 01d657b0
// Size: 1045 bytes
// Class: GNMenuItem


/* WARNING: Removing unreachable block (ram,0x01d65853) */
/* WARNING: Removing unreachable block (ram,0x01d6585c) */
/* WARNING: Removing unreachable block (ram,0x01d65b03) */
/* WARNING: Removing unreachable block (ram,0x01d65b0f) */

void FUN_01d657b0(void)

{
  longlong lVar1;
  longlong lVar2;
  byte bVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  int iVar8;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  longlong local_b8;
  char local_b0;
  longlong in_stack_ffffffffffffffb8;
  char local_40;
  
  lVar1 = *(longlong *)(unaff_RDI + 0x30);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  *(undefined1 *)(unaff_RDI + 0x70) = 1;
  _objc_alloc();
  (*(code *)PTR__objc_msgSend_024a9998)();
  if (*(longlong *)(*unaff_RSI + 0x48) != 0) {
    FUN_01d5e2b0();
    FUN_00d50b00();
    local_40 = '\0';
    iVar5 = FUN_00d237a0();
    FUN_00d50b20();
    if ((local_b0 != '\0') && (local_b8 != 0)) {
      FUN_00d50b20();
    }
    bVar3 = FUN_01d5b410();
    if (lVar1 != 0) {
      if (*(longlong *)(lVar1 + 0x48) != 0) {
        (*(code *)PTR__objc_msgSend_024a9998)();
      }
      _objc_alloc();
      uVar6 = (*(code *)PTR__objc_msgSend_024a9998)();
      *(undefined8 *)(lVar1 + 0x48) = uVar6;
    }
    cVar4 = FUN_01d65330();
    in_stack_ffffffffffffffb8 = unaff_RDI;
    if (cVar4 == '\0') {
      _objc_alloc();
      uVar6 = (*(code *)PTR__objc_msgSend_024a9998)();
      FUN_00d50b00();
      (*(code *)PTR__objc_msgSend_024a9998)();
      if (unaff_RDI != 0) {
        FUN_00d50b20();
      }
      lVar2 = *(longlong *)(unaff_RDI + 0x20);
      if (lVar2 != 0) {
        FUN_00d50b00();
      }
      FUN_01f1fc80();
      (*(code *)PTR__objc_msgSend_024a9998)();
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      lVar2 = *(longlong *)(unaff_RDI + 0x28);
      if (lVar2 != 0) {
        FUN_00d50b00();
      }
      lVar7 = FUN_00e1cfc0();
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      if (lVar7 != 0) {
        (*(code *)PTR__objc_msgSend_024a9998)();
      }
      (*(code *)PTR__objc_msgSend_024a9998)();
      (*(code *)PTR__objc_msgSend_024a9998)();
      (*(code *)PTR__objc_msgSend_024a9998)((longlong)(int)(iVar5 + (uint)bVar3),uVar6);
      if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x48) != 0)) {
        (*(code *)PTR__objc_msgSend_024a9998)();
        (*(code *)PTR__objc_msgSend_024a9998)();
        (*(code *)PTR__objc_msgSend_024a9998)();
      }
      FUN_00d50b00();
      FUN_01f25af0();
      if (unaff_RDI != 0) {
        FUN_00d50b20();
      }
      (*(code *)PTR__objc_release_024a99a0)();
    }
    else {
      (*(code *)PTR__objc_msgSend_024a9998)();
      (*(code *)PTR__objc_msgSend_024a9998)();
    }
  }
  (*(code *)PTR__objc_release_024a99a0)();
  if (lVar1 != 0) {
    if (((*(longlong *)(lVar1 + 0x48) != 0) && (*(longlong *)(*unaff_RSI + 0x48) != 0)) &&
       (iVar5 = FUN_01d5b230(), 0 < iVar5)) {
      iVar8 = 0;
      do {
        FUN_01d5b240();
        FUN_01d657b0();
        if ((local_40 != '\0') && (in_stack_ffffffffffffffb8 != 0)) {
          FUN_00d50b20();
        }
        iVar8 = iVar8 + 1;
      } while (iVar5 != iVar8);
    }
    FUN_00d50b20();
  }
  return;
}


