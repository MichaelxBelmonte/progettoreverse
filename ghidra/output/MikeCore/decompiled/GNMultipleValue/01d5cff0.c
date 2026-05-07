// Function: FUN_01d5cff0
// Address: 01d5cff0
// Size: 856 bytes
// Class: GNMultipleValue
// String references:
//   "removeItemAtIndex:"


void FUN_01d5cff0(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong unaff_RDI;
  longlong local_b0;
  char local_a8;
  longlong local_a0;
  char local_98;
  longlong local_90;
  char local_88;
  longlong local_80;
  char local_78;
  longlong local_40;
  char local_38;
  
  if (*(char *)(unaff_RDI + 0x21) != '\0') {
    FUN_00d403d0();
    FUN_00d50b00();
    local_b0 = 0;
    local_a8 = '\0';
    local_a0 = 0;
    local_98 = '\0';
    FUN_00d41040(&local_a0,&local_b0);
    if ((local_98 != '\0') && (local_a0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_a8 != '\0') && (local_b0 != 0)) {
      FUN_00d50b20();
    }
    if (unaff_RDI != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  *(undefined1 *)(unaff_RDI + 0x21) = 1;
  FUN_00d403d0();
  FUN_00d50b00();
  local_90 = DAT_026fce70;
  if (DAT_026fce70 != 0) {
    FUN_00d50b00();
  }
  local_88 = '\x01';
  local_80 = 0;
  local_78 = '\0';
  FUN_00d41430(&local_80,&local_90);
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  if (unaff_RDI != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  _objc_alloc();
  puVar1 = PTR__objc_msgSend_024a9998;
  (*(code *)PTR__objc_msgSend_024a9998)();
  (*(code *)PTR__objc_release_024a99a0)();
  (*(code *)puVar1)();
  uVar2 = (*(code *)PTR__objc_retain_024a99a8)();
  *(undefined8 *)(unaff_RDI + 0x48) = uVar2;
  (*(code *)puVar1)();
  (*(code *)puVar1)();
  uVar3 = (*(code *)puVar1)();
  while (1 < uVar3) {
    (*(code *)puVar1)();
    (*(code *)puVar1)();
    (*(code *)puVar1)();
    (*(code *)puVar1)();
    (*(code *)puVar1)();
    (*(code *)puVar1)();
    (*(code *)puVar1)();
    uVar3 = (*(code *)puVar1)();
  }
  (*(code *)PTR__objc_release_024a99a0)();
  lVar4 = *(longlong *)(unaff_RDI + 0x18);
  if (0 < *(int *)(lVar4 + 0xc)) {
    lVar5 = 0;
    do {
      lVar4 = *(longlong *)(*(longlong *)(lVar4 + 0x10) + lVar5 * 8);
      if (lVar4 != 0) {
        FUN_00d50b00();
      }
      FUN_00d50b00();
      FUN_01d657b0();
      if (unaff_RDI != 0) {
        FUN_00d50b20();
      }
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      lVar5 = lVar5 + 1;
      lVar4 = *(longlong *)(unaff_RDI + 0x18);
    } while (lVar5 < *(int *)(lVar4 + 0xc));
  }
  FUN_00d50b00();
  FUN_01d5b760();
  FUN_00d50b20();
  return;
}


