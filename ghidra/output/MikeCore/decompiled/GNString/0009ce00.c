// Function: FUN_0009ce00
// Address: 0009ce00
// Size: 1174 bytes
// Class: GNString


/* WARNING: Removing unreachable block (ram,0x0009d0ca) */
/* WARNING: Removing unreachable block (ram,0x0009d0d6) */

void FUN_0009ce00(undefined1 param_1)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  char cVar5;
  undefined8 *puVar6;
  char *pcVar7;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  longlong local_d0;
  undefined1 local_c8;
  longlong local_a8;
  char local_a0;
  longlong local_48;
  char local_40 [8];
  char local_38 [8];
  
  local_d0 = *unaff_RSI;
  local_c8 = 0;
  FUN_0009cc20(param_1,&local_d0);
  pcVar7 = local_38;
  if (local_40[0] != '\0') {
    pcVar7 = local_40;
  }
  local_38[0] = local_40[0];
  *pcVar7 = '\0';
  if ((local_40[0] != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  lVar2 = *(longlong *)(unaff_RDI + 0x88);
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  FUN_00017670();
  if (local_40[0] == '\0') {
    if (local_48 != 0) {
      FUN_00d50b00();
    }
    plVar3 = *(longlong **)(unaff_RDI + 0x88);
  }
  else {
    local_40[0] = '\0';
    plVar3 = *(longlong **)(unaff_RDI + 0x88);
  }
  if (plVar3 != (longlong *)0x0) {
    FUN_00d50b00();
  }
  (**(code **)(*plVar3 + 0x4a0))();
  cVar5 = FUN_006c60a0();
  if (cVar5 == '\0') {
    iVar1 = *(int *)(*(longlong *)(unaff_RDI + 0xd0) + 0xc);
    if ((local_a0 != '\0') && (local_a8 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
    if (local_48 != 0) {
      FUN_00d50b20();
    }
    if ((local_40[0] != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    if (iVar1 != 0) goto LAB_0009d271;
  }
  else {
    if ((local_a0 != '\0') && (local_a8 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
    if (local_48 != 0) {
      FUN_00d50b20();
    }
    if ((local_40[0] != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  plVar3 = *(longlong **)(unaff_RDI + 0x88);
  if (plVar3 != (longlong *)0x0) {
    FUN_00d50b00();
  }
  FUN_00017670();
  if (local_40[0] == '\0') {
    if (local_48 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_40[0] = '\0';
  }
  (**(code **)(*plVar3 + 0x450))();
  if (local_48 != 0) {
    FUN_00d50b20();
  }
  if ((local_40[0] != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  lVar2 = *unaff_RSI;
  local_40[0] = '\0';
  FUN_00d21140();
  if ((local_40[0] != '\0') && (lVar2 != 0)) {
    FUN_00d50b20();
  }
  FUN_01efd970();
  local_40[0] = '\0';
  FUN_00d21140();
  if ((local_40[0] != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d45870();
  FUN_00017760();
  if (*(longlong *)(unaff_RDI + 0x90) == 0) {
LAB_0009d157:
    puVar6 = (undefined8 *)(unaff_RDI + 0x88);
  }
  else {
    FUN_01e40eb0();
    if ((local_40[0] != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if (local_48 == 0) goto LAB_0009d157;
    puVar6 = (undefined8 *)(unaff_RDI + 0x90);
  }
  (**(code **)(*(longlong *)*puVar6 + 0xa10))();
  lVar2 = *(longlong *)(unaff_RDI + 0xd0);
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  FUN_0009d720();
  if (local_40[0] == '\0') {
    if (local_48 != 0) {
      FUN_00d50b00();
    }
    lVar4 = *(longlong *)(unaff_RDI + 0xb8);
  }
  else {
    local_40[0] = '\0';
    lVar4 = *(longlong *)(unaff_RDI + 0xb8);
  }
  if (lVar4 != 0) {
    FUN_00d50b00();
  }
  FUN_0009d670();
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  if (local_48 != 0) {
    FUN_00d50b20();
  }
  if ((local_40[0] != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
LAB_0009d271:
  if ((local_38[0] != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  return;
}


