// Function: FUN_00225280
// Address: 00225280
// Size: 949 bytes
// Class: GNString


/* WARNING: Removing unreachable block (ram,0x00225563) */
/* WARNING: Removing unreachable block (ram,0x0022556c) */

void FUN_00225280(void)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  char *pcVar4;
  longlong *plVar5;
  longlong unaff_RDI;
  longlong *local_50;
  char local_48 [15];
  char local_39;
  char local_38 [8];
  
  if (*(longlong *)(unaff_RDI + 0x1c0) == 0) {
    local_48[0] = '\0';
    local_50 = (longlong *)0x0;
  }
  else {
    FUN_006f3f00();
  }
  cVar3 = FUN_0078cda0();
  if ((local_48[0] != '\0') && (local_50 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (*(longlong **)(unaff_RDI + 0x90) == (longlong *)0x0) goto LAB_0022557e;
  (**(code **)(&UNK_00001550 + **(longlong **)(unaff_RDI + 0x90)))();
  local_38[0] = local_48[0];
  pcVar4 = local_48;
  if (local_48[0] == '\0') {
    pcVar4 = local_38;
  }
  *pcVar4 = '\0';
  if ((local_48[0] != '\0') && (local_50 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (local_50 == (longlong *)0x0) {
    if (*(longlong *)(unaff_RDI + 0x90) == 0) goto LAB_0022557e;
LAB_00225344:
    FUN_00d50b00();
  }
  else if (local_38[0] == '\0') goto LAB_00225344;
  FUN_00d50b20();
  plVar1 = *(longlong **)(unaff_RDI + 0x90);
  (**(code **)(&UNK_00001550 + *plVar1))();
  local_38[0] = local_48[0];
  pcVar4 = local_48;
  if (local_48[0] == '\0') {
    pcVar4 = local_38;
  }
  *pcVar4 = '\0';
  if ((local_48[0] != '\0') && (local_50 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (local_50 == (longlong *)0x0) {
    plVar5 = *(longlong **)(unaff_RDI + 0x90);
LAB_002253ad:
    FUN_00d50b00();
  }
  else {
    plVar5 = local_50;
    if (local_38[0] == '\0') goto LAB_002253ad;
  }
  (**(code **)(&UNK_00001688 + *plVar5))();
  local_39 = cVar3;
  if (plVar1 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  plVar1 = *(longlong **)(unaff_RDI + 0x90);
  (**(code **)(&UNK_00001550 + *plVar1))();
  local_38[0] = local_48[0];
  pcVar4 = local_48;
  if (local_48[0] == '\0') {
    pcVar4 = local_38;
  }
  *pcVar4 = '\0';
  if ((local_48[0] != '\0') && (local_50 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (local_50 == (longlong *)0x0) {
    plVar5 = *(longlong **)(unaff_RDI + 0x90);
LAB_0022542f:
    FUN_00d50b00();
  }
  else {
    plVar5 = local_50;
    if (local_38[0] == '\0') goto LAB_0022542f;
  }
  (**(code **)((longlong)&dylib_command_00001348.dylib.current_version + *plVar5))();
  if (plVar1 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  plVar1 = *(longlong **)(unaff_RDI + 0x90);
  (**(code **)(&UNK_00001550 + *plVar1))();
  local_38[0] = local_48[0];
  pcVar4 = local_48;
  if (local_48[0] == '\0') {
    pcVar4 = local_38;
  }
  *pcVar4 = '\0';
  if ((local_48[0] != '\0') && (local_50 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (local_50 == (longlong *)0x0) {
    plVar5 = *(longlong **)(unaff_RDI + 0x90);
LAB_002254b5:
    FUN_00d50b00();
  }
  else {
    plVar5 = local_50;
    if (local_38[0] == '\0') goto LAB_002254b5;
  }
  (**(code **)(*plVar5 + 0xee8))();
  if (plVar1 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  plVar1 = *(longlong **)(unaff_RDI + 0x90);
  (**(code **)(&UNK_00001550 + *plVar1))();
  pcVar4 = local_48;
  if (local_48[0] == '\0') {
    pcVar4 = local_38;
  }
  local_38[0] = local_48[0];
  *pcVar4 = '\0';
  cVar3 = local_39;
  if ((local_48[0] != '\0') && (local_50 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (local_50 == (longlong *)0x0) {
    local_50 = *(longlong **)(unaff_RDI + 0x90);
LAB_00225534:
    FUN_00d50b00();
  }
  else if (local_38[0] == '\0') goto LAB_00225534;
  (**(code **)(*local_50 + 0xdc8))();
  if (plVar1 != (longlong *)0x0) {
    FUN_00d50b20();
  }
LAB_0022557e:
  if (*(longlong *)(unaff_RDI + 0xb8) != 0) {
    FUN_0021a2c0();
  }
  FUN_0022d390();
  if (*(longlong *)(unaff_RDI + 0xc0) != 0) {
    FUN_00d50b00();
    FUN_00d50b20();
    plVar1 = *(longlong **)(unaff_RDI + 0xc0);
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b00();
    }
    (**(code **)(*plVar1 + 0x4b8))();
    FUN_00d50b20();
  }
  if ((cVar3 == '\0') && (*(longlong *)(unaff_RDI + 0x1c8) != 0)) {
    FUN_00d50b00();
    FUN_00d50b20();
    lVar2 = *(longlong *)(unaff_RDI + 0x1c8);
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    FUN_00442100();
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  return;
}


