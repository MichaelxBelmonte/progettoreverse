// Function: FUN_006f9d50
// Address: 006f9d50
// Size: 2037 bytes
// Class: GNFilePath


/* WARNING: Removing unreachable block (ram,0x006f9ffd) */
/* WARNING: Removing unreachable block (ram,0x006fa3aa) */
/* WARNING: Removing unreachable block (ram,0x006fa3b6) */
/* WARNING: Removing unreachable block (ram,0x006fa50d) */
/* WARNING: Removing unreachable block (ram,0x006fa519) */
/* WARNING: Removing unreachable block (ram,0x006fa009) */

void FUN_006f9d50(void)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  void *pvVar5;
  pthread_key_t pVar6;
  char unaff_SIL;
  longlong unaff_RDI;
  longlong lVar7;
  longlong local_110;
  char local_108;
  longlong local_e0;
  char local_d8;
  undefined8 *local_c0;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  if ((*(longlong *)(unaff_RDI + 0xa8) != 0) == (bool)unaff_SIL) {
    return;
  }
  lVar7 = *(longlong *)(unaff_RDI + 0x10);
  if (lVar7 != 0) {
    FUN_00d50b00();
  }
  FUN_01beab60();
  lVar3 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if (lVar7 != 0) {
    FUN_00d50b20();
  }
  if (unaff_SIL == '\0') {
    lVar7 = *(longlong *)(unaff_RDI + 0xa8);
    if (lVar7 != 0) {
      FUN_00d50b00();
    }
    FUN_01d98b80();
    if (lVar7 != 0) {
      FUN_00d50b20();
    }
    lVar7 = *(longlong *)(unaff_RDI + 0xa8);
    if (lVar7 != 0) {
      FUN_00d50b00();
    }
    FUN_00d50130();
    if (lVar7 != 0) {
      FUN_00d50b20();
    }
    if (*(longlong *)(unaff_RDI + 0xa8) != 0) {
      *(undefined8 *)(unaff_RDI + 0xa8) = 0;
      FUN_00d50b20();
    }
    if (*(longlong *)(unaff_RDI + 0xa0) != 0) {
      FUN_00d50b00();
      FUN_00d50b20();
      lVar7 = *(longlong *)(unaff_RDI + 0xa0);
      if (lVar7 != 0) {
        FUN_00d50b00();
      }
      FUN_01c73160();
      if (lVar7 != 0) {
        FUN_00d50b20();
      }
    }
    goto LAB_006fa526;
  }
  local_c0 = (undefined8 *)FUN_00e8fc40();
  FUN_0006daf0();
  *local_c0 = &DAT_0266fa08;
  local_c0[2] = &DAT_02670338;
  local_c0[0x27] = &DAT_02670378;
  local_c0[0x28] = 0;
  local_c0[0x29] = 0;
  local_c0[0x2a] = 0;
  local_c0[0x2b] = 0;
  local_c0[0x2c] = 0;
  local_c0[0x2d] = 0;
  local_c0[0x2e] = 0;
  local_c0[0x2f] = 0;
  local_c0[0x30] = 0;
  pVar6 = 0;
  local_c0[0x31] = 0x100000000;
  *(undefined4 *)(local_c0 + 0x32) = 0;
  *(undefined1 *)((longlong)local_c0 + 0x194) = 0;
  local_c0[0x33] = 0;
  *(undefined4 *)(local_c0 + 0x34) = 0;
  local_c0[0x35] = 0;
  (*DAT_0266fa20)();
  FUN_006f3f00();
  FUN_00757c60();
  pvVar5 = _pthread_getspecific(pVar6);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012caf10();
  lVar7 = local_40;
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  FUN_01c878e0();
  if (lVar7 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_d8 != '\0') && (local_e0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_108 != '\0') && (local_110 != 0)) {
    FUN_00d50b20();
  }
  lVar7 = *(longlong *)(unaff_RDI + 0x10);
  if (lVar7 != 0) {
    FUN_00d50b00();
  }
  FUN_01be81a0();
  lVar4 = local_40;
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  FUN_01c87b20();
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if (lVar7 != 0) {
    FUN_00d50b20();
  }
  FUN_01c87040();
  FUN_01c86380();
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  plVar1 = *(longlong **)(unaff_RDI + 0x10);
  if (plVar1 != (longlong *)0x0) {
    FUN_00d50b00();
  }
  (**(code **)(*plVar1 + 0x990))();
  lVar7 = local_40;
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  FUN_01c87a60();
  if (lVar7 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  plVar1 = *(longlong **)(unaff_RDI + 0x10);
  if (plVar1 != (longlong *)0x0) {
    FUN_00d50b00();
  }
  (**(code **)(*plVar1 + 0x988))();
  lVar7 = local_40;
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  FUN_01c87a00();
  if (lVar7 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  plVar1 = *(longlong **)(unaff_RDI + 0x10);
  if (plVar1 != (longlong *)0x0) {
    FUN_00d50b00();
  }
  (**(code **)(*plVar1 + 0x978))();
  lVar7 = local_40;
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  FUN_01c87ac0();
  if (lVar7 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  if (*(longlong *)(unaff_RDI + 0xa0) != 0) {
    FUN_00d50b00();
    FUN_00d50b20();
    lVar7 = *(longlong *)(unaff_RDI + 0xa0);
    if (lVar7 != 0) {
      FUN_00d50b00();
    }
    FUN_01c73160();
    if (lVar7 != 0) {
      FUN_00d50b20();
    }
  }
  puVar2 = *(undefined8 **)(unaff_RDI + 0xa8);
  if (puVar2 == local_c0) {
LAB_006fa435:
    FUN_00d50b00();
    lVar7 = *(longlong *)(unaff_RDI + 0xa8);
    if (lVar7 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    FUN_00d50b00();
    *(undefined8 **)(unaff_RDI + 0xa8) = local_c0;
    if (puVar2 == (undefined8 *)0x0) goto LAB_006fa435;
    FUN_00d50b20();
    local_c0 = *(undefined8 **)(unaff_RDI + 0xa8);
    if (local_c0 != (undefined8 *)0x0) goto LAB_006fa435;
    lVar7 = 0;
    local_c0 = (undefined8 *)0x0;
  }
  FUN_01c87040();
  local_50 = local_40;
  local_48 = 0;
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  local_48 = '\x01';
  FUN_0071fc50(0,&local_50);
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if (lVar7 != 0) {
    FUN_00d50b20();
  }
  if (local_c0 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
LAB_006fa526:
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  return;
}


