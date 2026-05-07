// Function: FUN_0024a180
// Address: 0024a180
// Size: 1079 bytes
// Class: GNFilePath


/* WARNING: Removing unreachable block (ram,0x0024a349) */
/* WARNING: Removing unreachable block (ram,0x0024a355) */
/* WARNING: Removing unreachable block (ram,0x0024a2cf) */
/* WARNING: Removing unreachable block (ram,0x0024a2db) */
/* WARNING: Removing unreachable block (ram,0x0024a294) */
/* WARNING: Removing unreachable block (ram,0x0024a2a0) */
/* WARNING: Removing unreachable block (ram,0x0024a30a) */
/* WARNING: Removing unreachable block (ram,0x0024a316) */
/* WARNING: Removing unreachable block (ram,0x0024a581) */
/* WARNING: Removing unreachable block (ram,0x0024a58d) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0024a180(void)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  char *pcVar6;
  longlong *plVar7;
  char unaff_SIL;
  longlong unaff_RDI;
  longlong local_80;
  char local_78;
  longlong local_70;
  char local_68;
  longlong *local_60;
  char local_58;
  longlong *local_50;
  char local_48 [8];
  longlong local_40;
  char local_38;
  char local_30 [8];
  
  if ((*(longlong *)(unaff_RDI + 0xa8) != 0) == (bool)unaff_SIL) goto LAB_0024a59f;
  plVar1 = *(longlong **)(unaff_RDI + 0x90);
  (**(code **)(&UNK_00001550 + *plVar1))();
  plVar7 = local_50;
  pcVar6 = local_30;
  if (local_48[0] != '\0') {
    pcVar6 = local_48;
  }
  local_30[0] = local_48[0];
  *pcVar6 = '\0';
  if ((local_48[0] != '\0') && (local_50 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar7 == (longlong *)0x0) {
    plVar7 = *(longlong **)(unaff_RDI + 0x90);
LAB_0024a203:
    FUN_00d50b00();
  }
  else if (local_30[0] == '\0') goto LAB_0024a203;
  (**(code **)(*plVar7 + 0x7b8))();
  lVar4 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if (plVar1 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  plVar1 = *(longlong **)(unaff_RDI + 0xa8);
  if (plVar1 == (longlong *)0x0) {
    puVar5 = (undefined8 *)FUN_00e8fc40();
    FUN_0010c6d0();
    puVar5[0x3f] = 0;
    *(undefined1 *)(puVar5 + 0x40) = 0;
    *(undefined4 *)(puVar5 + 0x43) = 0;
    puVar5[0x41] = 0;
    *(undefined8 *)((longlong)puVar5 + 0x20e) = 0;
    *puVar5 = &DAT_0250d510;
    puVar5[2] = &DAT_0250e090;
    puVar5[0x27] = &DAT_0250e0d0;
    puVar5[0x28] = &DAT_0250e120;
    (*DAT_0250d528)();
    puVar2 = *(undefined8 **)(unaff_RDI + 0xa8);
    if (puVar2 == puVar5) {
      FUN_00d50b20();
    }
    else {
      *(undefined8 **)(unaff_RDI + 0xa8) = puVar5;
      if (puVar2 != (undefined8 *)0x0) {
        FUN_00d50b20();
      }
    }
    (**(code **)(**(longlong **)(unaff_RDI + 0xa8) + 0x4d0))(_DAT_02394e00,_DAT_02394e10);
    plVar1 = *(longlong **)(unaff_RDI + 0xa8);
    FUN_0021c9b0();
    FUN_0010bc80();
    local_60 = local_50;
    local_58 = 0;
    if (local_48[0] == '\0') {
      if (local_50 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_48[0] = '\0';
    }
    local_58 = '\x01';
    (**(code **)(*plVar1 + 0x960))();
    if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_48[0] != '\0') && (local_50 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    local_68 = 0;
    lVar3 = *(longlong *)(unaff_RDI + 0xa8);
    if (lVar3 != 0) {
      FUN_00d50b00();
    }
    local_68 = '\x01';
    local_80 = 0;
    local_78 = '\0';
    local_70 = lVar3;
    FUN_0071fc50(0,&local_80);
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    FUN_00d50b00();
    if (*(longlong *)(unaff_RDI + 0xa8) != 0) {
      *(undefined8 *)(unaff_RDI + 0xa8) = 0;
      FUN_00d50b20();
    }
    FUN_01d98b80();
    FUN_01b6d800();
    FUN_01b926b0();
    (**(code **)(*plVar1 + 0x960))();
    FUN_00d50130();
    FUN_00d50b20();
  }
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
LAB_0024a59f:
  FUN_00223fa0();
  return;
}


