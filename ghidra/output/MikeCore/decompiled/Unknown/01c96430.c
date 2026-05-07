// Function: FUN_01c96430
// Address: 01c96430
// Size: 811 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x01c96641) */
/* WARNING: Removing unreachable block (ram,0x01c9664a) */
/* WARNING: Removing unreachable block (ram,0x01c9670c) */
/* WARNING: Removing unreachable block (ram,0x01c96715) */

void FUN_01c96430(void)

{
  longlong lVar1;
  char cVar2;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  longlong local_a8;
  char local_a0;
  longlong local_98;
  char local_90;
  longlong local_88;
  char local_80;
  longlong local_78;
  char local_70;
  longlong *local_68;
  char local_60;
  longlong *local_38;
  char local_30;
  
  FUN_00d3ecc0();
  local_78 = DAT_026e0f70;
  if (DAT_026e0f70 != 0) {
    FUN_00d50b00();
  }
  local_70 = '\x01';
  cVar2 = (**(code **)(*local_38 + 0x50))();
  if (cVar2 == '\0') {
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    cVar2 = *(char *)(unaff_RDI + 0x2f);
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (cVar2 != '\0') {
      local_60 = 0;
      (**(code **)(*(longlong *)(unaff_RDI + 0x10) + 0x10))();
      FUN_00d50b00();
      lVar1 = DAT_027ed418;
      local_60 = '\x01';
      local_68 = (longlong *)(unaff_RDI + 0x10);
      if (DAT_027ed418 != 0) {
        FUN_00d50b00();
      }
      FUN_01cad620();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
        (**(code **)(*local_68 + 0x10))();
        FUN_00d50b20();
      }
      FUN_00d46300();
      lVar1 = DAT_027ed470;
      if ((local_30 == '\0') && (local_38 != (longlong *)0x0)) {
        FUN_00d50b00();
        lVar1 = DAT_027ed470;
      }
      DAT_027ed470 = lVar1;
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      FUN_01ca93d0();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      if (local_38 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      FUN_00d403d0();
      FUN_00d50b00();
      local_a8 = DAT_026e0f70;
      if (DAT_026e0f70 != 0) {
        FUN_00d50b00();
      }
      local_a0 = '\x01';
      local_98 = 0;
      local_90 = '\0';
      FUN_00d41040(&local_98,&local_a8);
      if ((local_90 != '\0') && (local_98 != 0)) {
        FUN_00d50b20();
      }
      if ((local_a0 != '\0') && (local_a8 != 0)) {
        FUN_00d50b20();
      }
      if (unaff_RDI != 0) {
        FUN_00d50b20();
      }
      *(undefined1 *)(unaff_RDI + 0x2f) = 0;
    }
  }
  local_88 = *unaff_RSI;
  local_80 = '\0';
  FUN_00d530a0();
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  return;
}


