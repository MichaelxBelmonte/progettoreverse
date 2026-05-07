// Function: FUN_01e5f4b0
// Address: 01e5f4b0
// Size: 600 bytes
// Class: GNString


/* WARNING: Removing unreachable block (ram,0x01e5f659) */
/* WARNING: Removing unreachable block (ram,0x01e5f662) */

void FUN_01e5f4b0(void)

{
  undefined *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *unaff_RSI;
  longlong local_58;
  char local_50;
  longlong local_48;
  char local_40;
  longlong local_38;
  char local_30;
  
  if ((longlong *)*unaff_RSI == (longlong *)0x0) {
    _objc_alloc();
    puVar1 = PTR__objc_msgSend_024a9998;
    (*(code *)PTR__objc_msgSend_024a9998)();
    (*(code *)puVar1)();
    (*(code *)PTR__objc_release_024a99a0)();
    lVar2 = DAT_027f3318;
    if (DAT_027f3318 != 0) {
      FUN_00d50b00();
    }
    lVar3 = DAT_02800600;
    if (DAT_02800600 != 0) {
      FUN_00d50b00();
    }
    local_58 = lVar3;
    local_50 = '\x01';
    local_48 = 0;
    local_40 = '\0';
    FUN_00d31230(&local_48,&local_58);
    lVar3 = local_38;
    if (local_30 == '\0') {
      if (local_38 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_30 = '\0';
    }
    FUN_01e5a050();
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    FUN_01e594e0();
  }
  else {
    (**(code **)(*(longlong *)*unaff_RSI + 0x388))();
    lVar2 = local_38;
    if (local_30 == '\0') {
      if (local_38 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_30 = '\0';
    }
    FUN_01e5a050();
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_024a9998)();
    FUN_00e1d020();
    (*(code *)PTR__objc_msgSend_024a9998)();
    (*(code *)PTR__objc_release_024a99a0)();
  }
  return;
}


