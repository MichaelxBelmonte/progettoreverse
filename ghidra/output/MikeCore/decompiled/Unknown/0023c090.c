// Function: FUN_0023c090
// Address: 0023c090
// Size: 1239 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x0023c41a) */
/* WARNING: Removing unreachable block (ram,0x0023c2d1) */
/* WARNING: Removing unreachable block (ram,0x0023c2dd) */
/* WARNING: Removing unreachable block (ram,0x0023c52a) */
/* WARNING: Removing unreachable block (ram,0x0023c533) */
/* WARNING: Removing unreachable block (ram,0x0023c426) */
/* WARNING: Removing unreachable block (ram,0x0023c45c) */
/* WARNING: Removing unreachable block (ram,0x0023c469) */

void FUN_0023c090(void)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  char *pcVar5;
  longlong *plVar6;
  char unaff_SIL;
  longlong unaff_RDI;
  longlong lVar7;
  longlong local_68;
  char local_60;
  longlong *local_58;
  char local_50;
  longlong *local_48;
  char local_40 [8];
  char local_38 [8];
  
  lVar1 = *(longlong *)(unaff_RDI + 200);
  if (lVar1 != 0) {
    FUN_00d50b00();
    FUN_00d50b20();
  }
  if ((lVar1 == 0) != (bool)unaff_SIL) {
    return;
  }
  plVar2 = *(longlong **)(unaff_RDI + 0x90);
  (**(code **)(&UNK_00001550 + *plVar2))();
  plVar6 = local_48;
  pcVar5 = local_38;
  if (local_40[0] != '\0') {
    pcVar5 = local_40;
  }
  local_38[0] = local_40[0];
  *pcVar5 = '\0';
  if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar6 == (longlong *)0x0) {
    plVar6 = *(longlong **)(unaff_RDI + 0x90);
  }
  else if (local_38[0] != '\0') goto LAB_0023c137;
  FUN_00d50b00();
LAB_0023c137:
  (**(code **)(*plVar6 + 0x7b8))();
  if ((local_60 == '\0') && (local_68 != 0)) {
    FUN_00d50b00();
  }
  if (plVar2 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (unaff_SIL == '\0') {
    lVar1 = *(longlong *)(unaff_RDI + 200);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    FUN_01d98b80();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    lVar1 = *(longlong *)(unaff_RDI + 200);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    FUN_00d50130();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if (*(longlong *)(unaff_RDI + 200) != 0) {
      *(undefined8 *)(unaff_RDI + 200) = 0;
      FUN_00d50b20();
    }
    if (*(longlong *)(unaff_RDI + 0x98) != 0) {
      FUN_00d50b00();
      FUN_00d50b20();
      lVar1 = *(longlong *)(unaff_RDI + 0x98);
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      FUN_01c73160();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
    }
  }
  else {
    puVar4 = (undefined8 *)FUN_00e8fc40();
    FUN_0006daf0();
    *puVar4 = &DAT_0266fa08;
    puVar4[2] = &DAT_02670338;
    puVar4[0x27] = &DAT_02670378;
    puVar4[0x28] = 0;
    puVar4[0x29] = 0;
    puVar4[0x2a] = 0;
    puVar4[0x2b] = 0;
    puVar4[0x2c] = 0;
    puVar4[0x2d] = 0;
    puVar4[0x2e] = 0;
    puVar4[0x2f] = 0;
    puVar4[0x30] = 0;
    puVar4[0x31] = 0x100000000;
    *(undefined4 *)(puVar4 + 0x32) = 0;
    *(undefined1 *)((longlong)puVar4 + 0x194) = 0;
    puVar4[0x33] = 0;
    *(undefined4 *)(puVar4 + 0x34) = 0;
    puVar4[0x35] = 0;
    (*DAT_0266fa20)();
    FUN_01c87040();
    FUN_01c86380();
    if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    puVar3 = *(undefined8 **)(unaff_RDI + 200);
    if (puVar3 != puVar4) {
      FUN_00d50b00();
      *(undefined8 **)(unaff_RDI + 200) = puVar4;
      if (puVar3 != (undefined8 *)0x0) {
        FUN_00d50b20();
      }
    }
    if (*(longlong *)(unaff_RDI + 0x98) != 0) {
      FUN_00d50b00();
      FUN_00d50b20();
      lVar1 = *(longlong *)(unaff_RDI + 0x98);
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      FUN_01c73160();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
    }
    lVar1 = *(longlong *)(unaff_RDI + 200);
    if (lVar1 == 0) {
      lVar7 = 0;
    }
    else {
      FUN_00d50b00();
      lVar7 = *(longlong *)(unaff_RDI + 200);
      if (lVar7 != 0) {
        FUN_00d50b00();
      }
    }
    FUN_01c87040();
    local_58 = local_48;
    local_50 = 0;
    if (local_40[0] == '\0') {
      if (local_48 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_40[0] = '\0';
    }
    local_50 = '\x01';
    FUN_0071fc50(0,&local_58);
    if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (lVar7 != 0) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    FUN_0021f1f0();
    FUN_00d50b20();
  }
  if (local_68 != 0) {
    FUN_00d50b20();
  }
  return;
}


