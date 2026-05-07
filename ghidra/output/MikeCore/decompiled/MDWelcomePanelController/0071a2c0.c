// Function: FUN_0071a2c0
// Address: 0071a2c0
// Size: 817 bytes
// Class: MDWelcomePanelController


/* WARNING: Removing unreachable block (ram,0x0071a516) */
/* WARNING: Removing unreachable block (ram,0x0071a51f) */
/* WARNING: Removing unreachable block (ram,0x0071a3d7) */
/* WARNING: Removing unreachable block (ram,0x0071a3e0) */
/* WARNING: Removing unreachable block (ram,0x0071a322) */
/* WARNING: Removing unreachable block (ram,0x0071a32b) */
/* WARNING: Removing unreachable block (ram,0x0071a457) */
/* WARNING: Removing unreachable block (ram,0x0071a460) */
/* WARNING: Removing unreachable block (ram,0x0071a592) */
/* WARNING: Removing unreachable block (ram,0x0071a59b) */

void FUN_0071a2c0(void)

{
  bool bVar1;
  code *pcVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  int iVar6;
  int iVar7;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  FUN_0071a120();
  if ((local_38 == '\0') && (local_40 != 0)) {
    FUN_00d50b00();
  }
  FUN_00d216c0();
  FUN_00d21140();
  puVar4 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar4 = &DAT_02572358;
  pcVar2 = DAT_02572370;
  (*DAT_02572370)();
  uVar3 = FUN_00e7dff0();
  iVar7 = (uVar3 & 0x1ff) + 1;
  do {
    FUN_00e7dff0();
    FUN_00d46530();
    if (local_48 == '\0') {
      if (local_50 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_48 = '\0';
    }
    FUN_00d21140();
    if (local_50 != 0) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    iVar6 = iVar7 + -1;
    bVar1 = 0 < iVar7;
    iVar7 = iVar6;
  } while (iVar6 != 0 && bVar1);
  FUN_00d51d20();
  if (local_48 == '\0') {
    if (local_50 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_48 = '\0';
  }
  FUN_00d21140();
  if (local_50 != 0) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  puVar5 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar5 = &DAT_02572358;
  (*pcVar2)();
  uVar3 = FUN_00e7dff0();
  iVar7 = (uVar3 & 0x1ff) + 1;
  do {
    FUN_00e7dff0();
    FUN_00d46530();
    if (local_48 == '\0') {
      if (local_50 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_48 = '\0';
    }
    FUN_00d21140();
    if (local_50 != 0) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    iVar6 = iVar7 + -1;
    bVar1 = 0 < iVar7;
    iVar7 = iVar6;
  } while (iVar6 != 0 && bVar1);
  FUN_00d51d20();
  if (local_48 == '\0') {
    if (local_50 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_48 = '\0';
  }
  FUN_00d21140();
  if (local_50 != 0) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if (puVar5 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  if (puVar4 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  if (local_40 != 0) {
    FUN_00d50b20();
  }
  return;
}


