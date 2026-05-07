// Function: FUN_01c34010
// Address: 01c34010
// Size: 882 bytes
// Class: GNTableView


void FUN_01c34010(void)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong **pplVar4;
  longlong local_d0;
  char local_c8;
  longlong local_c0;
  char local_b8;
  longlong *local_b0;
  char local_a8;
  longlong local_a0;
  char local_98;
  longlong *local_90;
  char local_88;
  longlong local_80;
  char local_78;
  longlong *local_40;
  char local_38;
  
  FUN_00d654d0();
  FUN_00d4efa0();
  plVar1 = unaff_RDI + 0x3c;
  FUN_00c88450(plVar1);
  plVar2 = local_40;
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_c8 != '\0') && (local_d0 != 0)) {
    FUN_00d50b20();
  }
  if (plVar2 != unaff_RSI) {
    return;
  }
  if ((longlong *)*plVar1 != (longlong *)0x0) {
    pplVar4 = &local_40;
    (**(code **)(*(longlong *)*plVar1 + 0x388))();
    plVar2 = local_40;
    FUN_01152ba0();
    if (plVar2 == (longlong *)0x0) {
LAB_01c340de:
      pplVar4 = (longlong **)&DAT_02802688;
    }
    else {
      (**(code **)(*plVar2 + 0x360))();
      cVar3 = FUN_00e85ea0();
      if (cVar3 == '\0') goto LAB_01c340de;
    }
    plVar2 = *pplVar4;
    if (*(char *)(pplVar4 + 1) == '\0') {
      if (plVar2 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      *(undefined1 *)(pplVar4 + 1) = 0;
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar2 != (longlong *)0x0) {
      FUN_00d403d0();
      FUN_00d50b00();
      local_c0 = DAT_027eb298;
      if (DAT_027eb298 != 0) {
        FUN_00d50b00();
      }
      local_b8 = '\x01';
      local_a8 = '\0';
      local_b0 = plVar2;
      FUN_00d41430(&local_b0,&local_c0);
      if ((local_a8 != '\0') && (local_b0 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_b8 != '\0') && (local_c0 != 0)) {
        FUN_00d50b20();
      }
      if (unaff_RDI != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d403d0();
      FUN_00d50b00();
      local_a0 = DAT_027eb2a0;
      if (DAT_027eb2a0 != 0) {
        FUN_00d50b00();
      }
      local_98 = '\x01';
      local_88 = '\0';
      local_90 = plVar2;
      FUN_00d41430(&local_90,&local_a0);
      if ((local_88 != '\0') && (local_90 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_98 != '\0') && (local_a0 != 0)) {
        FUN_00d50b20();
      }
      if (unaff_RDI != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    if ((longlong *)*plVar1 != (longlong *)0x0) {
      (**(code **)(*(longlong *)*plVar1 + 0x368))();
      plVar1 = local_40;
      if (local_38 == '\0') {
        if (local_40 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      (**(code **)(*unaff_RDI + 0x968))();
      if (plVar1 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_01c34363;
    }
  }
  local_78 = '\0';
  local_80 = 0;
  (**(code **)(*unaff_RDI + 0x968))();
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
LAB_01c34363:
  (**(code **)(*unaff_RDI + 0x620))();
  return;
}


