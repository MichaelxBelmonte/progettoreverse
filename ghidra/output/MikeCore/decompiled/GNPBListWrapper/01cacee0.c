// Function: FUN_01cacee0
// Address: 01cacee0
// Size: 756 bytes
// Class: GNPBListWrapper


/* WARNING: Removing unreachable block (ram,0x01cad154) */
/* WARNING: Removing unreachable block (ram,0x01cad161) */

void FUN_01cacee0(undefined8 param_1,longlong *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  longlong local_c0;
  char local_b8;
  longlong local_b0;
  char local_a8;
  longlong *local_a0;
  char local_98;
  longlong local_90;
  char local_88;
  longlong local_80;
  char local_78;
  longlong *local_50;
  char local_48;
  
  local_c0 = *param_2;
  local_b8 = '\0';
  FUN_01cad410(param_1,&local_c0);
  if (local_48 == '\0') {
    if (local_50 != (longlong *)0x0) {
      (**(code **)(*local_50 + 0x10))();
      FUN_00d50b00();
    }
  }
  else {
    local_48 = '\0';
  }
  if ((local_b8 != '\0') && (local_c0 != 0)) {
    FUN_00d50b20();
  }
  if (local_50 != (longlong *)0x0) {
    if (local_50 == (longlong *)*unaff_RSI) {
      (**(code **)(*local_50 + 0x10))();
      FUN_00d50b20();
      return;
    }
    FUN_00d50b00();
    local_b0 = *param_2;
    local_a8 = '\0';
    (**(code **)(*local_50 + 0x20))();
    if ((local_a8 != '\0') && (local_b0 != 0)) {
      FUN_00d50b20();
    }
    if (unaff_RDI != 0) {
      FUN_00d50b20();
    }
    (**(code **)(*local_50 + 0x10))();
    FUN_00d50b20();
  }
  local_a0 = (longlong *)*unaff_RSI;
  local_98 = '\0';
  local_90 = *param_2;
  local_88 = '\0';
  FUN_01cad550();
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  if ((local_98 != '\0') && (local_a0 != (longlong *)0x0)) {
    (**(code **)(*local_a0 + 0x10))();
    FUN_00d50b20();
  }
  _objc_alloc();
  (*(code *)PTR__objc_msgSend_024a9998)();
  local_80 = *param_2;
  local_78 = '\0';
  FUN_01ca74b0();
  if ((local_48 == '\0') && (local_50 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  FUN_00e1cfc0();
  if (local_50 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  if (*(longlong *)(*(longlong *)(unaff_RDI + 0x10) + 0x18) == 0) {
    FUN_00d50b00();
    FUN_01f27160();
    if (unaff_RDI != 0) {
      FUN_00d50b20();
    }
  }
  puVar1 = PTR__objc_msgSend_024a9998;
  uVar2 = (*(code *)PTR__objc_msgSend_024a9998)();
  (*(code *)puVar1)(*(undefined8 *)(*(longlong *)(unaff_RDI + 0x10) + 0x18),uVar2);
  (*(code *)PTR__objc_release_024a99a0)();
  return;
}


