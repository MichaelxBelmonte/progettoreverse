// Function: FUN_00249a80
// Address: 00249a80
// Size: 1051 bytes
// Class: GNFilePath


/* WARNING: Removing unreachable block (ram,0x00249c49) */
/* WARNING: Removing unreachable block (ram,0x00249c55) */
/* WARNING: Removing unreachable block (ram,0x00249bcf) */
/* WARNING: Removing unreachable block (ram,0x00249bdb) */
/* WARNING: Removing unreachable block (ram,0x00249b94) */
/* WARNING: Removing unreachable block (ram,0x00249ba0) */
/* WARNING: Removing unreachable block (ram,0x00249c0a) */
/* WARNING: Removing unreachable block (ram,0x00249c16) */
/* WARNING: Removing unreachable block (ram,0x00249e65) */
/* WARNING: Removing unreachable block (ram,0x00249e71) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00249a80(void)

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
  
  if ((*(longlong *)(unaff_RDI + 0xa0) != 0) == (bool)unaff_SIL) goto LAB_00249e83;
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
LAB_00249b03:
    FUN_00d50b00();
  }
  else if (local_30[0] == '\0') goto LAB_00249b03;
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
  plVar1 = *(longlong **)(unaff_RDI + 0xa0);
  if (plVar1 == (longlong *)0x0) {
    puVar5 = (undefined8 *)FUN_00e8fc40();
    FUN_0010c6d0();
    *(undefined8 *)((longlong)puVar5 + 0x1fd) = 0;
    puVar5[0x3f] = 0;
    *puVar5 = &DAT_024fb340;
    puVar5[2] = &DAT_024fbed8;
    puVar5[0x27] = &DAT_024fbf18;
    puVar5[0x28] = &DAT_024fbf68;
    (*DAT_024fb358)();
    puVar2 = *(undefined8 **)(unaff_RDI + 0xa0);
    if (puVar2 == puVar5) {
      FUN_00d50b20();
    }
    else {
      *(undefined8 **)(unaff_RDI + 0xa0) = puVar5;
      if (puVar2 != (undefined8 *)0x0) {
        FUN_00d50b20();
      }
    }
    (**(code **)(**(longlong **)(unaff_RDI + 0xa0) + 0x4d0))(_DAT_02394e00,_DAT_02394e10);
    plVar1 = *(longlong **)(unaff_RDI + 0xa0);
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
    lVar3 = *(longlong *)(unaff_RDI + 0xa0);
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
    if (*(longlong *)(unaff_RDI + 0xa0) != 0) {
      *(undefined8 *)(unaff_RDI + 0xa0) = 0;
      FUN_00d50b20();
    }
    FUN_01d98b80();
    FUN_01b6d800();
    FUN_01a70ac0();
    (**(code **)(*plVar1 + 0x960))();
    FUN_00d50130();
    FUN_00d50b20();
  }
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
LAB_00249e83:
  FUN_00223fa0();
  return;
}


