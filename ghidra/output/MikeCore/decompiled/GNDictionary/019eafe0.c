// Function: FUN_019eafe0
// Address: 019eafe0
// Size: 1595 bytes
// Class: GNDictionary


/* WARNING: Removing unreachable block (ram,0x019eb59c) */
/* WARNING: Removing unreachable block (ram,0x019eb5a5) */
/* WARNING: Removing unreachable block (ram,0x019eb358) */
/* WARNING: Removing unreachable block (ram,0x019eb361) */
/* WARNING: Removing unreachable block (ram,0x019eb27f) */
/* WARNING: Removing unreachable block (ram,0x019eb288) */
/* WARNING: Removing unreachable block (ram,0x019eb1ab) */
/* WARNING: Removing unreachable block (ram,0x019eb1b7) */
/* WARNING: Removing unreachable block (ram,0x019eb184) */
/* WARNING: Removing unreachable block (ram,0x019eb18d) */
/* WARNING: Removing unreachable block (ram,0x019eb506) */
/* WARNING: Removing unreachable block (ram,0x019eb50f) */
/* WARNING: Removing unreachable block (ram,0x019eb5c0) */
/* WARNING: Removing unreachable block (ram,0x019eb5cc) */
/* WARNING: Removing unreachable block (ram,0x019eb0d4) */
/* WARNING: Removing unreachable block (ram,0x019eb0dd) */
/* WARNING: Removing unreachable block (ram,0x019eb08a) */
/* WARNING: Removing unreachable block (ram,0x019eb097) */
/* WARNING: Removing unreachable block (ram,0x019eb11a) */
/* WARNING: Removing unreachable block (ram,0x019eb123) */
/* WARNING: Removing unreachable block (ram,0x019eb3e0) */
/* WARNING: Removing unreachable block (ram,0x019eb3e9) */
/* WARNING: Removing unreachable block (ram,0x019eb467) */
/* WARNING: Removing unreachable block (ram,0x019eb490) */
/* WARNING: Removing unreachable block (ram,0x019eb469) */
/* WARNING: Removing unreachable block (ram,0x019eb492) */
/* WARNING: Removing unreachable block (ram,0x019eb2ed) */
/* WARNING: Removing unreachable block (ram,0x019eb2ba) */
/* WARNING: Removing unreachable block (ram,0x019eb2c3) */
/* WARNING: Removing unreachable block (ram,0x019eb390) */
/* WARNING: Removing unreachable block (ram,0x019eb399) */

undefined8 * FUN_019eafe0(void)

{
  bool bVar1;
  bool bVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong *unaff_RSI;
  undefined8 *unaff_RDI;
  longlong local_b8;
  char local_b0;
  longlong local_70;
  char local_68;
  longlong local_60;
  longlong local_58;
  char local_50;
  int local_40;
  
  plVar5 = (longlong *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar5 + 0x18))();
  iVar4 = (**(code **)(*unaff_RSI + 0xd08))();
  bVar2 = true;
  if (iVar4 == 0) {
    FUN_00d46530();
    local_60 = local_58;
    if (local_58 == 0) {
LAB_019eb12a:
      local_60 = 0;
      bVar1 = false;
    }
    else {
      bVar1 = true;
      if (local_50 == '\0') {
        FUN_00d50b00();
      }
    }
LAB_019eb133:
    lVar3 = DAT_026dc290;
    if (local_60 != 0) {
      if (DAT_026dc290 != 0) {
        FUN_00d50b00();
      }
      local_58 = lVar3;
      local_50 = '\0';
      FUN_00ca0840();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      bVar2 = false;
    }
  }
  else {
    if (iVar4 == 1) {
      FUN_00d46530();
      local_60 = local_58;
      if (local_58 == 0) goto LAB_019eb12a;
      bVar1 = true;
      if (local_50 == '\0') {
        FUN_00d50b00();
      }
      goto LAB_019eb133;
    }
    if (iVar4 == 2) {
      FUN_00d46530();
      local_60 = local_58;
      if (local_58 == 0) goto LAB_019eb12a;
      bVar1 = true;
      if (local_50 == '\0') {
        FUN_00d50b00();
      }
      goto LAB_019eb133;
    }
    bVar1 = false;
  }
  if (unaff_RSI[0x7f] != 0) {
    FUN_01e1f170();
    FUN_00d46530();
    lVar3 = DAT_027e1498;
    if ((local_68 == '\0') && (local_70 != 0)) {
      FUN_00d50b00();
      lVar3 = DAT_027e1498;
    }
    DAT_027e1498 = lVar3;
    if (lVar3 != 0) {
      FUN_00d50b00();
    }
    FUN_00ca0840();
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    if (local_70 != 0) {
      FUN_00d50b20();
    }
    FUN_01e1f180();
    FUN_00d46530();
    if (local_70 != 0) {
      FUN_00d50b00();
    }
    lVar3 = DAT_027e14a0;
    local_58 = DAT_027e14a0;
    if (DAT_027e14a0 != 0) {
      FUN_00d50b00();
    }
    local_50 = '\0';
    FUN_00ca0840();
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    if (local_70 != 0) {
      FUN_00d50b20();
    }
  }
  (**(code **)(*unaff_RSI + 0xe20))();
  if (local_50 == '\0') {
    if (local_58 == 0) goto LAB_019eb603;
    FUN_00d50b00();
  }
  else if (local_58 == 0) {
LAB_019eb603:
    *unaff_RDI = plVar5;
    *(undefined1 *)(unaff_RDI + 1) = 1;
    goto joined_r0x019eb61c;
  }
  if (*(int *)(local_58 + 0xc) != 0) {
    puVar6 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar6 = &DAT_02572358;
    (*DAT_02572370)();
    local_40 = -1;
    while (local_40 = local_40 + 1, local_40 < *(int *)(local_58 + 0xc)) {
      FUN_00dd6a00();
      if (local_b0 == '\0') {
        if (local_b8 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_b0 = '\0';
      }
      FUN_00d21140();
      if (local_b8 != 0) {
        FUN_00d50b20();
      }
      if ((local_b0 != '\0') && (local_b8 != 0)) {
        FUN_00d50b20();
      }
    }
    FUN_001159b0();
    lVar3 = DAT_027e14a8;
    if (DAT_027e14a8 != 0) {
      FUN_00d50b00();
    }
    FUN_00ca0840();
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    if (puVar6 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
  }
  *unaff_RDI = plVar5;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  FUN_00d50b20();
joined_r0x019eb61c:
  if (bVar1 && !bVar2) {
    FUN_00d50b20();
  }
  return unaff_RDI;
}


