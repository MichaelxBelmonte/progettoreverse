// Function: FUN_01e51a60
// Address: 01e51a60
// Size: 1757 bytes
// Class: Unknown
// String references:
//   "%@: No file owner found."
//   "%@: window not connected."
//   "%@ not found."


/* WARNING: Removing unreachable block (ram,0x01e52039) */
/* WARNING: Removing unreachable block (ram,0x01e52045) */
/* WARNING: Removing unreachable block (ram,0x01e51b92) */
/* WARNING: Removing unreachable block (ram,0x01e51b9e) */
/* WARNING: Removing unreachable block (ram,0x01e51bac) */
/* WARNING: Removing unreachable block (ram,0x01e51bb8) */
/* WARNING: Removing unreachable block (ram,0x01e51bc6) */
/* WARNING: Removing unreachable block (ram,0x01e51bd2) */
/* WARNING: Removing unreachable block (ram,0x01e52053) */
/* WARNING: Removing unreachable block (ram,0x01e5205f) */

undefined8 * FUN_01e51a60(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  undefined8 uVar8;
  longlong *unaff_RSI;
  undefined8 *unaff_RDI;
  longlong *plVar9;
  longlong **pplVar10;
  longlong *local_a0;
  char local_98;
  longlong local_90;
  char local_88;
  undefined8 *local_80;
  longlong *local_58;
  uint local_50;
  longlong local_48;
  char local_40;
  undefined4 local_38;
  
  puVar6 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar6 = &DAT_02572358;
  (*DAT_02572370)();
  local_80 = puVar6;
  if (*param_2 == 0) {
    plVar7 = (longlong *)FUN_00e8fc40();
    FUN_00022d50();
    (**(code **)(*plVar7 + 0x18))();
    plVar9 = (longlong *)*param_2;
    if (plVar9 == plVar7) {
      if ((char)param_2[1] != '\0') {
        FUN_00d50b20();
        goto LAB_01e51b06;
      }
    }
    else {
      *param_2 = (longlong)plVar7;
      if (((char)param_2[1] != '\0') && (plVar9 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    *(undefined1 *)(param_2 + 1) = 1;
  }
LAB_01e51b06:
  FUN_01e5b340();
  FUN_01e5b320();
  cVar5 = FUN_01e2af10();
  FUN_01e5b320();
  lVar4 = DAT_027fe468;
  if (cVar5 == '\0') {
    if (DAT_027fe468 != 0) {
      FUN_00d50b00();
    }
    lVar1 = *unaff_RSI;
    local_50 = 1;
    local_58 = &DAT_024c5048;
    local_40 = 0;
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    local_40 = '\x01';
    local_48 = lVar1;
    FUN_00cc7b40();
    local_58 = &DAT_024c5048;
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
  }
  lVar4 = DAT_027f3818;
  if (DAT_027f3818 != 0) {
    FUN_00d50b00();
  }
  pplVar10 = &local_58;
  FUN_000175c0();
  plVar9 = local_58;
  uVar8 = FUN_00015ff0();
  if (plVar9 == (longlong *)0x0) {
LAB_01e51cf9:
    pplVar10 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar9 + 0x360))();
    uVar8 = FUN_00e85ea0();
    if ((char)uVar8 == '\0') goto LAB_01e51cf9;
  }
  plVar9 = *pplVar10;
  if (plVar9 == (longlong *)0x0) {
    local_38 = (undefined4)CONCAT71((int7)((ulonglong)uVar8 >> 8),1);
    plVar9 = (longlong *)0x0;
  }
  else {
    if (*(char *)(pplVar10 + 1) == '\0') {
      FUN_00d50b00();
    }
    else {
      *(undefined1 *)(pplVar10 + 1) = 0;
    }
    local_38 = 0;
  }
  if (((char)local_50 != '\0') && (local_58 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  lVar4 = DAT_027fe468;
  if (plVar9 == (longlong *)0x0) {
    if (DAT_027fe468 != 0) {
      FUN_00d50b00();
    }
    lVar1 = *unaff_RSI;
    local_50 = 1;
    local_58 = &DAT_024c5048;
    local_40 = 0;
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    local_40 = '\x01';
    local_48 = lVar1;
    FUN_00cc7b40();
    local_58 = &DAT_024c5048;
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
  }
  if (plVar9[3] != 0) {
    plVar7 = (longlong *)0x0;
    goto LAB_01e51d84;
  }
  FUN_01e30780();
  plVar7 = local_58;
  if (local_58 == (longlong *)0x0) {
    bVar3 = true;
    plVar7 = (longlong *)0x0;
  }
  else {
    if ((char)local_50 == '\0') {
      FUN_00d50b00();
      bVar3 = false;
      if (((char)local_50 == '\0') || (local_58 == (longlong *)0x0)) goto LAB_01e52030;
      FUN_00d50b20();
    }
    else {
      local_50 = local_50 & 0xffffff00;
    }
    bVar3 = false;
  }
LAB_01e52030:
  lVar4 = DAT_027fe468;
  if (bVar3) {
    if (DAT_027fe468 != 0) {
      FUN_00d50b00();
    }
    lVar1 = *unaff_RSI;
    local_50 = 1;
    local_58 = &DAT_024c5048;
    local_40 = 0;
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    local_40 = '\x01';
    local_48 = lVar1;
    FUN_00cc7b40();
    local_58 = &DAT_024c5048;
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
  }
  plVar2 = (longlong *)plVar9[3];
  if (plVar2 != plVar7) {
    if (plVar7 != (longlong *)0x0) {
      FUN_00d50b00();
    }
    plVar9[3] = (longlong)plVar7;
    if (plVar2 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
LAB_01e51d84:
  FUN_01e511c0();
  FUN_01e51330();
  (**(code **)(*plVar9 + 0x4f8))();
  if (plVar9[3] != 0) {
    plVar9[3] = 0;
    FUN_00d50b20();
  }
  (**(code **)(*plVar9 + 0x518))();
  FUN_00d403d0();
  lVar4 = DAT_027fe470;
  if (DAT_027fe470 != 0) {
    FUN_00d50b00();
  }
  local_98 = '\0';
  local_90 = 0;
  local_88 = '\0';
  local_a0 = plVar9;
  FUN_00d40470(&local_90,&local_a0,1,1);
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  if ((local_98 != '\0') && (local_a0 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  if (((char)local_50 != '\0') && (local_58 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  *(undefined1 *)(unaff_RDI + 1) = 0;
  if ((char)local_38 != '\0') {
    FUN_00d50b00();
  }
  *unaff_RDI = plVar9;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  FUN_00d50b20();
  if (plVar7 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return unaff_RDI;
}


