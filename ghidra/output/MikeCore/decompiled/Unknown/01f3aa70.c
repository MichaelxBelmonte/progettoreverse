// Function: FUN_01f3aa70
// Address: 01f3aa70
// Size: 1192 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x01f3abaf) */
/* WARNING: Removing unreachable block (ram,0x01f3abbb) */
/* WARNING: Removing unreachable block (ram,0x01f3ad0c) */
/* WARNING: Removing unreachable block (ram,0x01f3ab5d) */
/* WARNING: Removing unreachable block (ram,0x01f3ab66) */
/* WARNING: Removing unreachable block (ram,0x01f3ad41) */
/* WARNING: Removing unreachable block (ram,0x01f3ad4a) */

undefined8 FUN_01f3aa70(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  bool bVar3;
  bool bVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 uVar7;
  undefined7 uVar8;
  undefined7 extraout_var;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  longlong local_e8;
  char local_e0;
  longlong *local_c0;
  char local_b8;
  longlong local_b0;
  char local_a8;
  longlong local_a0;
  char local_98;
  longlong *local_90;
  char local_88;
  longlong local_80;
  char local_78;
  longlong *local_70;
  longlong *local_48;
  longlong *local_40;
  char local_38;
  
  lVar1 = *param_1;
  uVar8 = 0;
  if (lVar1 == 0) goto LAB_01f3aefb;
  plVar6 = (longlong *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar6 + 0x18))();
  local_b8 = '\0';
  local_b0 = 0;
  local_a8 = '\0';
  local_c0 = plVar6;
  local_70 = plVar6;
  FUN_01e4fcf0(&local_b0,&local_c0);
  local_48 = local_40;
  if (local_40 == (longlong *)0x0) {
    bVar3 = true;
    local_48 = (longlong *)0x0;
  }
  else if (local_38 == '\0') {
    FUN_00d50b00();
    bVar3 = false;
  }
  else {
    local_38 = '\0';
    bVar3 = false;
  }
  if ((local_a8 != '\0') && (local_b0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_b8 != '\0') && (local_c0 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01e56750();
  FUN_01e5e3f0();
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_e0 != '\0') && (local_e8 != 0)) {
    FUN_00d50b20();
  }
  if (local_40 == (longlong *)0x0) {
    FUN_01e56750();
    local_a0 = *param_1;
    local_98 = '\0';
    FUN_01e5e380();
    if ((local_98 != '\0') && (local_a0 != 0)) {
      FUN_00d50b20();
    }
  }
  FUN_01e56750();
  FUN_01e5e430();
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (unaff_RDI != 0) {
    FUN_00d50b00();
  }
  local_90 = local_70;
  local_88 = '\0';
  FUN_01e2fa60();
  if (local_40 == (longlong *)0x0) {
    bVar4 = true;
    plVar6 = (longlong *)0x0;
  }
  else {
    plVar6 = local_40;
    if (local_38 == '\0') {
      FUN_00d50b00();
      bVar4 = false;
    }
    else {
      local_38 = '\0';
      bVar4 = false;
    }
  }
  if ((local_88 != '\0') && (local_90 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (unaff_RDI != 0) {
    FUN_00d50b20();
  }
  if ((*unaff_RSI == 0) && (plVar6 != (longlong *)0x0)) {
    FUN_01d25f70();
    plVar2 = (longlong *)*unaff_RSI;
    if (plVar2 == local_40) {
      if (((char)unaff_RSI[1] != '\0') || (local_40 == (longlong *)0x0)) goto LAB_01f3ae32;
      if (local_38 == '\0') {
        FUN_00d50b00();
        goto LAB_01f3ae2d;
      }
    }
    else {
      lVar5 = unaff_RSI[1];
      if (local_38 == '\0') {
        if (local_40 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        *unaff_RSI = (longlong)local_40;
        if (((char)lVar5 != '\0') && (plVar2 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
LAB_01f3ae2d:
        *(undefined1 *)(unaff_RSI + 1) = 1;
LAB_01f3ae32:
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        goto LAB_01f3ae46;
      }
      *unaff_RSI = (longlong)local_40;
      if (((char)lVar5 != '\0') && (plVar2 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    *(undefined1 *)(unaff_RSI + 1) = 1;
  }
LAB_01f3ae46:
  if ((*param_2 == 0) || (plVar6 == (longlong *)0x0)) {
    if (plVar6 != (longlong *)0x0) {
      FUN_01d2ead0();
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (local_40 != (longlong *)0x0) {
        FUN_01d2bdc0();
      }
    }
  }
  else {
    local_78 = '\0';
    local_80 = *param_2;
    FUN_01d2e9e0();
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    FUN_01d2bdc0();
  }
  (**(code **)(*local_48 + 0x460))();
  uVar7 = FUN_00d50b20();
  if (!bVar3) {
    uVar7 = FUN_00d50b20();
  }
  uVar8 = (undefined7)((ulonglong)uVar7 >> 8);
  if (!bVar4 && plVar6 != (longlong *)0x0) {
    FUN_00d50b20();
    uVar8 = extraout_var;
  }
LAB_01f3aefb:
  return CONCAT71(uVar8,lVar1 != 0);
}


