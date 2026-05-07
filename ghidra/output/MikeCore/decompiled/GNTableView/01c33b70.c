// Function: FUN_01c33b70
// Address: 01c33b70
// Size: 646 bytes
// Class: GNTableView


void FUN_01c33b70(void)

{
  longlong *plVar1;
  char cVar2;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  longlong **pplVar3;
  longlong local_a8;
  char local_a0;
  longlong local_98;
  char local_90;
  longlong *local_88;
  char local_80;
  longlong local_78;
  char local_70;
  longlong *local_68;
  char local_60;
  longlong *local_38;
  char local_30;
  
  FUN_00d652e0();
  FUN_00d4efa0();
  FUN_00c88450((longlong *)(unaff_RDI + 0x1e0));
  plVar1 = local_38;
  if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_a0 != '\0') && (local_a8 != 0)) {
    FUN_00d50b20();
  }
  if (plVar1 != unaff_RSI) {
    return;
  }
  plVar1 = *(longlong **)(unaff_RDI + 0x1e0);
  if (plVar1 == (longlong *)0x0) {
    return;
  }
  pplVar3 = &local_38;
  (**(code **)(*plVar1 + 0x388))();
  plVar1 = local_38;
  FUN_01152ba0();
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x360))();
    cVar2 = FUN_00e85ea0();
    if (cVar2 != '\0') goto LAB_01c33c4a;
  }
  pplVar3 = (longlong **)&DAT_02802688;
LAB_01c33c4a:
  plVar1 = *pplVar3;
  if (*(char *)(pplVar3 + 1) == '\0') {
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar3 + 1) = 0;
  }
  if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 != (longlong *)0x0) {
    FUN_00d403d0();
    FUN_00d50b00();
    local_98 = DAT_027eb298;
    if (DAT_027eb298 != 0) {
      FUN_00d50b00();
    }
    local_90 = '\x01';
    local_80 = '\0';
    local_88 = plVar1;
    FUN_00d41040(&local_88,&local_98);
    if ((local_80 != '\0') && (local_88 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
    if (unaff_RDI != 0) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d403d0();
    FUN_00d50b00();
    local_78 = DAT_027eb2a0;
    if (DAT_027eb2a0 != 0) {
      FUN_00d50b00();
    }
    local_70 = '\x01';
    local_60 = '\0';
    local_68 = plVar1;
    FUN_00d41040(&local_68,&local_78);
    if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    if (unaff_RDI != 0) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  return;
}


