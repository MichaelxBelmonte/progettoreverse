// Function: FUN_002cbf40
// Address: 002cbf40
// Size: 931 bytes
// Class: MDMetaWindowController


/* WARNING: Removing unreachable block (ram,0x002cc207) */
/* WARNING: Removing unreachable block (ram,0x002cc210) */
/* WARNING: Removing unreachable block (ram,0x002cc286) */
/* WARNING: Removing unreachable block (ram,0x002cc28f) */
/* WARNING: Removing unreachable block (ram,0x002cc10d) */
/* WARNING: Removing unreachable block (ram,0x002cc11a) */
/* WARNING: Removing unreachable block (ram,0x002cc0cd) */
/* WARNING: Removing unreachable block (ram,0x002cc0da) */
/* WARNING: Removing unreachable block (ram,0x002cc098) */
/* WARNING: Removing unreachable block (ram,0x002cc0a5) */
/* WARNING: Removing unreachable block (ram,0x002cc017) */
/* WARNING: Removing unreachable block (ram,0x002cc040) */
/* WARNING: Removing unreachable block (ram,0x002cc019) */
/* WARNING: Removing unreachable block (ram,0x002cc042) */

undefined8 * FUN_002cbf40(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  undefined8 *puVar8;
  undefined8 *local_68;
  char local_60;
  int local_50;
  undefined8 *local_40;
  char local_38;
  
  if (*(char *)(unaff_RSI + 0x130) == '\0') {
    FUN_002cc530(0,FUN_002c8da0);
    return unaff_RDI;
  }
  puVar4 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar4 = &DAT_02572358;
  pcVar3 = DAT_02572370;
  (*DAT_02572370)();
  puVar5 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar5 = &DAT_02572358;
  (*pcVar3)();
  puVar6 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar6 = &DAT_02572358;
  (*pcVar3)();
  lVar2 = *param_2;
  if (lVar2 != 0) {
    local_60 = '\0';
    local_68 = (undefined8 *)0x0;
    local_50 = -1;
    while( true ) {
      lVar7 = (longlong)local_50;
      local_50 = local_50 + 1;
      if (*(int *)(lVar2 + 0xc) <= local_50) break;
      local_68 = *(undefined8 **)(*(longlong *)(lVar2 + 0x10) + 8 + lVar7 * 8);
      iVar1 = *(int *)((longlong)local_68 + 0x24);
      if (iVar1 == 2) {
        local_38 = '\0';
        FUN_00d21140();
        local_40 = local_68;
      }
      else if (iVar1 == 1) {
        local_38 = '\0';
        FUN_00d21140();
        local_40 = local_68;
      }
      else if (iVar1 == 0) {
        local_38 = '\0';
        FUN_00d21140();
        local_40 = local_68;
      }
    }
    FUN_002d7300();
  }
  FUN_002cc530(0,FUN_002c8da0);
  if (puVar4 != local_68) {
    puVar8 = local_68;
    if (local_60 != '\0') {
      if (puVar4 != (undefined8 *)0x0) {
        FUN_00d50b20();
      }
      goto LAB_002cc1b6;
    }
    if (local_68 != (undefined8 *)0x0) {
      FUN_00d50b00();
    }
    if (puVar4 == (undefined8 *)0x0) goto LAB_002cc1b6;
    FUN_00d50b20();
    puVar4 = local_68;
  }
  puVar8 = puVar4;
  if ((local_60 != '\0') && (local_68 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
LAB_002cc1b6:
  FUN_002cc530(0,FUN_002c8da0);
  if (local_38 == '\0') {
    if (local_40 != (undefined8 *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  FUN_00d214d0();
  if (local_40 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  FUN_002cc530(0,FUN_002c8da0);
  if (local_38 == '\0') {
    if (local_40 != (undefined8 *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  FUN_00d214d0();
  if (local_40 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  *unaff_RDI = puVar8;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  if (puVar5 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  return unaff_RDI;
}


