// Function: FUN_00d6de90
// Address: 00d6de90
// Size: 784 bytes
// Class: GNObject


/* WARNING: Removing unreachable block (ram,0x00d6e155) */
/* WARNING: Removing unreachable block (ram,0x00d6e15e) */

void FUN_00d6de90(void)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong *unaff_RSI;
  undefined8 *unaff_RDI;
  longlong local_90;
  char local_88;
  longlong local_60;
  char local_58;
  longlong *local_50;
  char local_48;
  longlong *local_40;
  char local_38;
  
  plVar4 = (longlong *)FUN_00e8fc40();
  FUN_00055590();
  (**(code **)(*plVar4 + 0x18))();
  lVar1 = *unaff_RSI;
  lVar2 = plVar4[2];
  if (lVar2 != lVar1) {
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    plVar4[2] = lVar1;
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  (**(code **)(*(longlong *)*unaff_RSI + 0x3c0))();
  plVar5 = (longlong *)plVar4[6];
  plVar7 = plVar5;
  if (plVar5 != local_40) {
    if (local_38 == '\0') {
      if (local_40 == (longlong *)0x0) {
        plVar7 = (longlong *)0x0;
        goto LAB_00d6df1a;
      }
      FUN_00d50b00();
      plVar5 = (longlong *)plVar4[6];
      plVar4[6] = (longlong)local_40;
      plVar7 = local_40;
    }
    else {
      local_38 = '\0';
      plVar7 = local_40;
LAB_00d6df1a:
      plVar4[6] = (longlong)plVar7;
    }
    if (plVar5 != (longlong *)0x0) {
      FUN_00d50b20();
      plVar7 = local_40;
    }
  }
  if ((local_38 != '\0') && (plVar7 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d6e310();
  plVar5 = local_40;
  if (local_38 == '\0') {
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b00();
      goto LAB_00d6e047;
    }
  }
  else if (local_40 != (longlong *)0x0) goto LAB_00d6e047;
  FUN_00d6ebd0();
  plVar7 = local_40;
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar7 != (longlong *)0x0) {
    FUN_00d6ebd0();
    if ((local_88 == '\0') && (local_90 != 0)) {
      FUN_00d50b00();
    }
    FUN_00d6e310();
    if ((local_40 != (longlong *)0x0) && (plVar5 = local_40, local_38 == '\0')) {
      FUN_00d50b00();
    }
    if (local_90 != 0) {
      FUN_00d50b20();
    }
  }
LAB_00d6e047:
  if (plVar5 == (longlong *)0x0) {
    plVar5 = (longlong *)FUN_00e8fc40();
    FUN_00022d50();
    (**(code **)(*plVar5 + 0x18))();
  }
  plVar7 = (longlong *)plVar4[3];
  if (plVar7 != plVar5) {
    FUN_00d50b00();
    plVar4[3] = (longlong)plVar5;
    if (plVar7 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  puVar6 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar6 = &DAT_02578b00;
  (*DAT_02578b18)();
  puVar3 = (undefined8 *)plVar4[4];
  if (puVar3 == puVar6) {
    FUN_00d50b20();
  }
  else {
    plVar4[4] = (longlong)puVar6;
    if (puVar3 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
  }
  FUN_00d403d0();
  local_60 = DAT_0277e5d8;
  if (DAT_0277e5d8 != 0) {
    FUN_00d50b00();
  }
  local_58 = '\x01';
  local_48 = '\0';
  local_50 = plVar4;
  FUN_00d41430(&local_50,&local_60);
  if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  *unaff_RDI = plVar4;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  FUN_00d50b20();
  return;
}


