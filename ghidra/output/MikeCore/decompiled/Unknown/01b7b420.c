// Function: FUN_01b7b420
// Address: 01b7b420
// Size: 1622 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x01b7b56a) */
/* WARNING: Removing unreachable block (ram,0x01b7b576) */

void FUN_01b7b420(void)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong local_d8;
  char local_d0;
  longlong local_c8;
  char local_c0;
  longlong local_b8;
  char local_b0;
  longlong local_68;
  char local_60;
  longlong local_58;
  char local_50;
  longlong local_48;
  char local_40;
  longlong *local_38;
  char local_30;
  
  if (unaff_RDI[0x2c] == *unaff_RSI) {
    return;
  }
  if ((longlong *)unaff_RDI[0x2d] != (longlong *)0x0) {
    (**(code **)(*(longlong *)unaff_RDI[0x2d] + 0x3a0))();
    plVar4 = local_38;
    if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*(longlong *)unaff_RDI[0x2d] + 0x3a0))();
      plVar4 = local_38;
      local_b0 = 0;
      local_b8 = unaff_RDI[0x2d];
      if (local_b8 != 0) {
        FUN_00d50b00();
      }
      local_b0 = '\x01';
      (**(code **)(*plVar4 + 0x3e0))();
      if ((local_b0 != '\0') && (local_b8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    if (unaff_RDI[0x2d] != 0) {
      FUN_01a8c310();
      plVar4 = local_38;
      if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar4 != (longlong *)0x0) {
        FUN_01a8bf00();
      }
    }
  }
  plVar4 = (longlong *)0x0;
  if ((longlong *)unaff_RDI[0x2c] != (longlong *)0x0) {
    (**(code **)(*(longlong *)unaff_RDI[0x2c] + 0x3a0))();
    plVar4 = local_38;
    if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar4 != (longlong *)0x0) {
      FUN_00d403d0();
      FUN_00d50b00();
      local_d8 = DAT_027ebc60;
      if (DAT_027ebc60 != 0) {
        FUN_00d50b00();
      }
      local_d0 = '\x01';
      (**(code **)(*(longlong *)unaff_RDI[0x2c] + 0x3a0))();
      local_68 = local_48;
      local_60 = 0;
      if (local_40 == '\0') {
        if (local_48 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_40 = '\0';
      }
      local_60 = '\x01';
      FUN_00d41040(&local_68,&local_d8);
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if ((local_d0 != '\0') && (local_d8 != 0)) {
        FUN_00d50b20();
      }
      if (unaff_RDI != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    plVar4 = (longlong *)unaff_RDI[0x2c];
  }
  plVar3 = (longlong *)*unaff_RSI;
  plVar2 = plVar4;
  if (plVar4 != plVar3) {
    if (plVar3 != (longlong *)0x0) {
      FUN_00d50b00();
    }
    unaff_RDI[0x2c] = (longlong)plVar3;
    plVar2 = plVar3;
    if (plVar4 != (longlong *)0x0) {
      FUN_00d50b20();
      plVar2 = (longlong *)unaff_RDI[0x2c];
    }
  }
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x3a0))();
    plVar4 = local_38;
    if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar4 != (longlong *)0x0) {
      FUN_00d403d0();
      FUN_00d50b00();
      local_c8 = DAT_027ebc60;
      if (DAT_027ebc60 != 0) {
        FUN_00d50b00();
      }
      local_c0 = '\x01';
      (**(code **)(*(longlong *)unaff_RDI[0x2c] + 0x3a0))();
      local_58 = local_48;
      local_50 = 0;
      if (local_40 == '\0') {
        if (local_48 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_40 = '\0';
      }
      local_50 = '\x01';
      FUN_00d41430(&local_58,&local_c8);
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if ((local_c0 != '\0') && (local_c8 != 0)) {
        FUN_00d50b20();
      }
      if (unaff_RDI != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  if (unaff_RDI[0x2d] == 0) {
    (**(code **)(*unaff_RDI + 0x968))();
    plVar4 = (longlong *)unaff_RDI[0x2d];
    plVar3 = plVar4;
    if (plVar4 != local_38) {
      if (local_30 == '\0') {
        if (local_38 == (longlong *)0x0) {
          plVar3 = (longlong *)0x0;
          goto LAB_01b7b8b7;
        }
        FUN_00d50b00();
        plVar4 = (longlong *)unaff_RDI[0x2d];
        unaff_RDI[0x2d] = (longlong)local_38;
        plVar3 = local_38;
      }
      else {
        local_30 = '\0';
        plVar3 = local_38;
LAB_01b7b8b7:
        unaff_RDI[0x2d] = (longlong)plVar3;
      }
      if (plVar4 != (longlong *)0x0) {
        FUN_00d50b20();
        plVar3 = local_38;
      }
    }
    if ((local_30 != '\0') && (plVar3 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (unaff_RDI[0x2d] == 0) goto LAB_01b7ba52;
  }
  if ((longlong *)unaff_RDI[0x2c] != (longlong *)0x0) {
    (**(code **)(*(longlong *)unaff_RDI[0x2c] + 0x3a0))();
    plVar4 = local_38;
    if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*(longlong *)unaff_RDI[0x2c] + 0x3a0))();
      plVar4 = local_38;
      lVar1 = unaff_RDI[0x2d];
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      (**(code **)(*plVar4 + 0x3d8))();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      FUN_01a8c310();
      plVar4 = local_38;
      if (local_30 == '\0') {
        if (local_38 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_30 = '\0';
      }
      FUN_01a8bf00();
      if (plVar4 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
LAB_01b7ba52:
  (**(code **)(*unaff_RDI + 0x620))();
  return;
}


