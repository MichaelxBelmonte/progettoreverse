// Function: FUN_01c6e850
// Address: 01c6e850
// Size: 1754 bytes
// Class: GNPopUpButton


void FUN_01c6e850(undefined4 param_1,undefined4 param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  bool bVar4;
  char *pcVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  void *pvVar8;
  int extraout_var;
  pthread_key_t pVar9;
  undefined4 in_EDX;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  undefined4 uVar10;
  longlong local_d0;
  char local_c8;
  longlong local_c0;
  char local_b8;
  undefined8 *local_b0;
  char local_a8;
  longlong *local_a0;
  longlong *local_58;
  char local_50;
  longlong *local_48;
  char local_40 [8];
  char local_38 [8];
  
  if ((int)unaff_RDI[0x4d] != 0) {
    *(undefined4 *)(unaff_RDI + 0x4d) = 0;
    (**(code **)(*(longlong *)unaff_RDI[0x2b] + 0x478))();
    if (unaff_RDI[0x2b] != 0) {
      unaff_RDI[0x2b] = 0;
      FUN_00d50b20();
    }
    if (unaff_RDI[0x4e] != 0) {
      unaff_RDI[0x4e] = 0;
      FUN_00d50b20();
    }
    FUN_01e436c0();
    param_1 = FUN_01c4d670();
  }
  local_d0 = *unaff_RSI;
  local_c8 = '\0';
  FUN_01c4de00(param_1,&local_d0);
  if (local_40[0] == '\0') {
    if (((local_48 != (longlong *)0x0) && (FUN_00d50b00(), local_40[0] != '\0')) &&
       (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_40[0] = '\0';
  }
  if ((local_c8 != '\0') && (local_d0 != 0)) {
    FUN_00d50b20();
  }
  *(undefined4 *)(unaff_RDI + 0x4d) = in_EDX;
  lVar1 = *unaff_RSI;
  lVar2 = unaff_RDI[0x4e];
  local_a0 = local_48;
  if (lVar2 != lVar1) {
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    unaff_RDI[0x4e] = lVar1;
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  (**(code **)(*local_48 + 0x4a0))();
  FUN_00d23310();
  local_38[0] = local_40[0];
  pcVar5 = local_40;
  if (local_40[0] == '\0') {
    pcVar5 = local_38;
  }
  *pcVar5 = '\0';
  if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  uVar10 = FUN_01e3f820();
  if ((local_38[0] != '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(*local_a0 + 0x4a0))();
  FUN_00d23310();
  pcVar5 = local_40;
  if (local_40[0] == '\0') {
    pcVar5 = local_38;
  }
  local_38[0] = local_40[0];
  *pcVar5 = '\0';
  if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_38[0] == '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  uVar10 = FUN_01e437f0(uVar10);
  if (local_48 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  puVar6 = (undefined8 *)FUN_00e8fc40();
  FUN_0006daf0();
  *(undefined4 *)(puVar6 + 0x27) = 0;
  puVar6[0x2e] = 0;
  *(undefined4 *)(puVar6 + 0x2f) = 0;
  puVar6[0x30] = 0;
  *(undefined1 *)(puVar6 + 0x31) = 0;
  puVar6[0x28] = 0;
  puVar6[0x29] = 0;
  *(undefined4 *)(puVar6 + 0x2a) = 0;
  puVar6[0x2b] = 0;
  puVar6[0x2c] = 0;
  *(undefined8 *)((longlong)puVar6 + 0x165) = 0;
  *(undefined8 *)((longlong)puVar6 + 0x18c) = 0;
  *(undefined8 *)((longlong)puVar6 + 0x194) = 0;
  *(undefined8 *)((longlong)puVar6 + 0x199) = 0;
  puVar6[0x35] = 0;
  puVar6[0x36] = 0;
  puVar6[0x37] = 0;
  puVar6[0x38] = 0;
  *puVar6 = &DAT_0269c118;
  puVar6[2] = &DAT_0269cc70;
  puVar6[0x39] = &DAT_0269ccb0;
  puVar6[0x45] = 0;
  *(undefined2 *)(puVar6 + 0x46) = 0;
  puVar6[0x47] = 0;
  puVar6[0x3a] = 0;
  puVar6[0x3b] = 0;
  *(undefined4 *)(puVar6 + 0x3c) = 0;
  puVar6[0x3f] = 0;
  puVar6[0x40] = 0;
  puVar6[0x3d] = 0;
  puVar6[0x3e] = 0;
  *(undefined8 *)((longlong)puVar6 + 0x205) = 0;
  puVar6[0x42] = 0;
  puVar6[0x43] = 0;
  *(undefined8 *)((longlong)puVar6 + 0x21d) = 0;
  (*DAT_0269c130)();
  puVar7 = (undefined8 *)unaff_RDI[0x2b];
  if (puVar7 == puVar6) {
    FUN_00d50b20();
  }
  else {
    unaff_RDI[0x2b] = (longlong)puVar6;
    if (puVar7 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
  }
  (**(code **)(*(longlong *)unaff_RDI[0x2b] + 0x9c8))();
  (**(code **)(*(longlong *)unaff_RDI[0x2b] + 0x4d0))(uVar10,param_2);
  plVar3 = (longlong *)unaff_RDI[0x2b];
  (**(code **)(*unaff_RDI + 0x640))();
  (**(code **)(*local_58 + 0x370))();
  if (local_40[0] == '\0') {
    if (local_48 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_40[0] = '\0';
  }
  (**(code **)(*plVar3 + 0x9d8))();
  if (local_48 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(*(longlong *)unaff_RDI[0x2b] + 0x3a0))();
  plVar3 = (longlong *)unaff_RDI[0x2b];
  FUN_00d50b00();
  (**(code **)(*plVar3 + 0xa20))();
  if (unaff_RDI != (longlong *)0x0) {
    FUN_00d50b20();
  }
  lVar1 = DAT_027ebf00;
  plVar3 = (longlong *)unaff_RDI[0x2b];
  if (DAT_027ebf00 != 0) {
    FUN_00d50b00();
  }
  local_c0 = lVar1;
  local_b8 = '\x01';
  (**(code **)(*plVar3 + 0xa10))();
  if ((local_b8 != '\0') && (local_c0 != 0)) {
    FUN_00d50b20();
  }
  lVar1 = unaff_RDI[0x2b];
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  (**(code **)(*unaff_RDI + 0x450))();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if ((int)unaff_RDI[0x4d] == 1) {
    puVar7 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    pVar9 = 0x2576110;
    *puVar7 = &DAT_02576110;
    *(undefined8 *)((longlong)puVar7 + 0xc) = 0;
    *(undefined8 *)((longlong)puVar7 + 0x14) = 0;
    *(undefined8 *)((longlong)puVar7 + 0x1a) = 0;
    puVar7[5] = 0;
    puVar7[6] = 0;
    puVar7[7] = 0;
    puVar7[8] = 0;
    puVar7[9] = 0;
    (*DAT_02576128)();
    local_a8 = '\0';
    local_b0 = puVar7;
    FUN_01e058f0();
    if ((local_a8 != '\0') && (local_b0 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
    pvVar8 = _pthread_getspecific(pVar9);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0190a000();
    if (extraout_var == 1) {
      (**(code **)(*(longlong *)unaff_RDI[0x2b] + 0x918))();
    }
    bVar4 = false;
  }
  else {
    bVar4 = true;
    puVar7 = (undefined8 *)0x0;
  }
  (**(code **)(*(longlong *)unaff_RDI[0x2b] + 0xab8))();
  if (!bVar4 && puVar7 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}


