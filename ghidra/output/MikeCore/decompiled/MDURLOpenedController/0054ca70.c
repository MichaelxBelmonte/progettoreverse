// Function: FUN_0054ca70
// Address: 0054ca70
// Size: 773 bytes
// Class: MDURLOpenedController


void FUN_0054ca70(void)

{
  longlong lVar1;
  longlong lVar2;
  longlong unaff_RDI;
  longlong local_c0;
  char local_b8;
  longlong *local_b0;
  char local_a8;
  longlong local_a0;
  char local_98;
  longlong local_90;
  char local_88;
  longlong local_80;
  char local_78;
  longlong local_70;
  char local_68;
  longlong local_30;
  char local_28;
  
  FUN_01e534b0();
  if (*(longlong *)(unaff_RDI + 0x80) == 0) goto LAB_0054cb06;
  FUN_01e10550();
  lVar1 = *(longlong *)(unaff_RDI + 0x78);
  lVar2 = lVar1;
  if (lVar1 != local_30) {
    lVar2 = local_30;
    if (local_28 == '\0') {
      if (local_30 == 0) {
        lVar2 = 0;
        goto LAB_0054cab4;
      }
      FUN_00d50b00();
      lVar1 = *(longlong *)(unaff_RDI + 0x78);
      *(longlong *)(unaff_RDI + 0x78) = local_30;
    }
    else {
      local_28 = '\0';
LAB_0054cab4:
      *(longlong *)(unaff_RDI + 0x78) = lVar2;
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
      lVar2 = local_30;
    }
  }
  if ((local_28 != '\0') && (lVar2 != 0)) {
    FUN_00d50b20();
  }
LAB_0054cb06:
  if (*(longlong **)(unaff_RDI + 0x88) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(unaff_RDI + 0x88) + 0x640))();
    (**(code **)(*local_b0 + 0x370))();
    FUN_01d44a40();
    if (local_28 == '\0') {
      if (local_30 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_28 = '\0';
    }
    FUN_01e12b60();
    if (local_30 != 0) {
      FUN_00d50b20();
    }
    if ((local_28 != '\0') && (local_30 != 0)) {
      FUN_00d50b20();
    }
    if ((local_b8 != '\0') && (local_c0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_a8 != '\0') && (local_b0 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  FUN_00d403d0();
  FUN_00d50b00();
  local_a0 = DAT_0270d078;
  if (DAT_0270d078 != 0) {
    FUN_00d50b00();
  }
  local_98 = '\x01';
  local_90 = 0;
  local_88 = '\0';
  FUN_00d41430(&local_90,&local_a0);
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  if (unaff_RDI != 0) {
    FUN_00d50b20();
  }
  if ((local_28 != '\0') && (local_30 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d403d0();
  FUN_00d50b00();
  local_80 = DAT_02787860;
  if (DAT_02787860 != 0) {
    FUN_00d50b00();
  }
  local_78 = '\x01';
  local_70 = 0;
  local_68 = '\0';
  FUN_00d41430(&local_70,&local_80);
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  if (unaff_RDI != 0) {
    FUN_00d50b20();
  }
  if ((local_28 != '\0') && (local_30 != 0)) {
    FUN_00d50b20();
  }
  return;
}


