// Function: FUN_01d2cbb0
// Address: 01d2cbb0
// Size: 1153 bytes
// Class: GNList


/* WARNING: Removing unreachable block (ram,0x01d2cfe8) */
/* WARNING: Removing unreachable block (ram,0x01d2cff5) */
/* WARNING: Removing unreachable block (ram,0x01d2cc8f) */
/* WARNING: Removing unreachable block (ram,0x01d2cc98) */
/* WARNING: Removing unreachable block (ram,0x01d2d01a) */
/* WARNING: Removing unreachable block (ram,0x01d2d027) */

void FUN_01d2cbb0(undefined8 param_1,undefined4 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  char cVar4;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  longlong *plVar5;
  longlong local_e8;
  char local_e0;
  longlong *local_d8;
  char local_d0;
  longlong local_c8;
  char local_c0;
  longlong *local_b8;
  char local_b0;
  longlong local_a8;
  char local_a0;
  longlong *local_98;
  char local_90;
  longlong *local_88;
  char local_80;
  longlong *local_78;
  char local_70;
  longlong *local_40;
  char local_38;
  
  plVar5 = (longlong *)*unaff_RSI;
  if (plVar5 == (longlong *)0x0) {
    return;
  }
  if (*(char *)(unaff_RDI + 0x99) == '\0') {
    return;
  }
  if (*(longlong *)(unaff_RDI + 0x88) == 0) {
    cVar3 = '\0';
    if (plVar5 == (longlong *)0x0) goto LAB_01d2cce0;
LAB_01d2cc5b:
    cVar3 = (char)unaff_RSI[1];
    if (cVar3 != '\0') {
      FUN_00d50b00();
    }
  }
  else {
    FUN_00d50b00();
    local_e8 = *unaff_RSI;
    local_e0 = '\0';
    FUN_01d31e70(&local_e8,&stack0xffffffffffffffa8,param_2);
    if (local_40 == (longlong *)0x0) {
      plVar5 = (longlong *)0x0;
      cVar3 = '\0';
    }
    else {
      plVar5 = local_40;
      if (local_38 == '\0') {
        FUN_00d50b00();
        cVar3 = '\x01';
      }
      else {
        local_38 = '\0';
        cVar3 = '\x01';
      }
    }
    if ((local_e0 != '\0') && (local_e8 != 0)) {
      FUN_00d50b20();
    }
    if (unaff_RDI != 0) {
      FUN_00d50b20();
    }
    if (plVar5 != (longlong *)0x0) goto LAB_01d2cd67;
    plVar5 = (longlong *)*unaff_RSI;
    if (plVar5 != (longlong *)0x0) goto LAB_01d2cc5b;
LAB_01d2cce0:
    plVar5 = (longlong *)0x0;
  }
  FUN_01d28610();
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (local_40 != (longlong *)0x0) {
    FUN_01d28610();
    local_d0 = '\0';
    local_d8 = plVar5;
    (**(code **)(*local_40 + 0x3a0))();
    if ((local_d0 != '\0') && (local_d8 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
LAB_01d2cd67:
  lVar1 = *(longlong *)(unaff_RDI + 0x10);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  local_c0 = '\x01';
  local_c8 = lVar1;
  FUN_019ba260();
  if (local_38 == '\0') {
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_c0 != '\0') && (local_c8 != 0)) {
    FUN_00d50b20();
  }
  local_b0 = '\0';
  local_b8 = plVar5;
  FUN_00d23370();
  if ((local_b0 != '\0') && (local_b8 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01d2a8f0();
  if (*(longlong *)(unaff_RDI + 0x58) != 0) {
    if (*(char *)(unaff_RDI + 0x80) != '\0') {
      *(undefined1 *)(unaff_RDI + 0x80) = 0;
      FUN_01d2bdc0();
    }
    lVar1 = *(longlong *)(unaff_RDI + 0x18);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    local_a0 = '\x01';
    local_a8 = lVar1;
    FUN_019ba260();
    if ((local_38 == '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b00();
    }
    if ((local_a0 != '\0') && (local_a8 != 0)) {
      FUN_00d50b20();
    }
    local_90 = '\0';
    local_98 = plVar5;
    cVar4 = FUN_00d235a0();
    if ((local_90 != '\0') && (local_98 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (cVar4 != '\0') {
      local_88 = local_40;
      local_80 = '\0';
      FUN_01d2b660();
      if ((local_80 != '\0') && (local_88 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      FUN_01d2c1d0();
    }
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  if (*(longlong **)(unaff_RDI + 0x90) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(unaff_RDI + 0x90) + 0x8c0))();
  }
  plVar2 = *(longlong **)(unaff_RDI + 0x40);
  if (plVar2 != (longlong *)0x0) {
    FUN_00d50b00();
    local_70 = '\0';
    local_78 = plVar5;
    (**(code **)(*plVar2 + 0x30))();
    if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (unaff_RDI != 0) {
      FUN_00d50b20();
    }
  }
  if (local_40 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((cVar3 != '\0') && (plVar5 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  return;
}


