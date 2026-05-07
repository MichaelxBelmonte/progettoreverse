// Function: FUN_003bfe00
// Address: 003bfe00
// Size: 1209 bytes
// Class: MDAudioTrackHeaderViewController


void FUN_003bfe00(undefined8 param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  void *pvVar5;
  pthread_key_t pVar6;
  longlong unaff_RDI;
  undefined4 uVar7;
  longlong *local_98;
  char local_90;
  longlong *local_38;
  char local_30;
  
  if (*(longlong *)(unaff_RDI + 0x98) != 0) {
    FUN_01e40eb0();
    if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (local_38 != (longlong *)0x0) {
      (**(code **)(**(longlong **)(unaff_RDI + 0x98) + 0x478))();
    }
    if (*(longlong *)(unaff_RDI + 0x98) != 0) {
      *(undefined8 *)(unaff_RDI + 0x98) = 0;
      FUN_00d50b20();
    }
  }
  (**(code **)(**(longlong **)(unaff_RDI + 0x90) + 0x4d8))();
  uVar7 = FUN_00d05530();
  puVar4 = (undefined8 *)FUN_00e8fc40();
  FUN_0006daf0();
  *(undefined4 *)(puVar4 + 0x27) = 0;
  puVar4[0x2e] = 0;
  *(undefined4 *)(puVar4 + 0x2f) = 0;
  puVar4[0x30] = 0;
  *(undefined1 *)(puVar4 + 0x31) = 0;
  puVar4[0x28] = 0;
  puVar4[0x29] = 0;
  *(undefined4 *)(puVar4 + 0x2a) = 0;
  puVar4[0x2b] = 0;
  puVar4[0x2c] = 0;
  *(undefined8 *)((longlong)puVar4 + 0x165) = 0;
  *(undefined8 *)((longlong)puVar4 + 0x18c) = 0;
  *(undefined8 *)((longlong)puVar4 + 0x194) = 0;
  *(undefined8 *)((longlong)puVar4 + 0x199) = 0;
  puVar4[0x35] = 0;
  puVar4[0x36] = 0;
  puVar4[0x37] = 0;
  puVar4[0x38] = 0;
  *puVar4 = &DAT_0269c118;
  puVar4[2] = &DAT_0269cc70;
  pVar6 = 0x269ccb0;
  puVar4[0x39] = &DAT_0269ccb0;
  puVar4[0x45] = 0;
  *(undefined2 *)(puVar4 + 0x46) = 0;
  puVar4[0x47] = 0;
  puVar4[0x3a] = 0;
  puVar4[0x3b] = 0;
  *(undefined4 *)(puVar4 + 0x3c) = 0;
  puVar4[0x3d] = 0;
  puVar4[0x3e] = 0;
  puVar4[0x3f] = 0;
  puVar4[0x40] = 0;
  *(undefined8 *)((longlong)puVar4 + 0x205) = 0;
  puVar4[0x42] = 0;
  puVar4[0x43] = 0;
  *(undefined8 *)((longlong)puVar4 + 0x21d) = 0;
  (*DAT_0269c130)();
  puVar1 = *(undefined8 **)(unaff_RDI + 0x98);
  if (puVar1 == puVar4) {
    FUN_00d50b20();
  }
  else {
    *(undefined8 **)(unaff_RDI + 0x98) = puVar4;
    if (puVar1 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
  }
  (**(code **)(**(longlong **)(unaff_RDI + 0x98) + 0x9c8))();
  (**(code **)(**(longlong **)(unaff_RDI + 0x98) + 0x4d0))(uVar7,param_2);
  plVar2 = *(longlong **)(unaff_RDI + 0x98);
  (**(code **)(**(longlong **)(unaff_RDI + 0x90) + 0x640))();
  (**(code **)(*local_98 + 0x370))();
  if (local_30 == '\0') {
    if (local_38 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_30 = '\0';
  }
  (**(code **)(*plVar2 + 0x9d8))();
  if (local_38 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_90 != '\0') && (local_98 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(**(longlong **)(unaff_RDI + 0x98) + 0x3a0))();
  plVar2 = *(longlong **)(unaff_RDI + 0x98);
  FUN_00d50b00();
  (**(code **)(*plVar2 + 0xa20))();
  if (unaff_RDI != 0) {
    FUN_00d50b20();
  }
  lVar3 = DAT_027057c8;
  plVar2 = *(longlong **)(unaff_RDI + 0x98);
  if (DAT_027057c8 != 0) {
    FUN_00d50b00();
  }
  (**(code **)(*plVar2 + 0xa10))();
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  plVar2 = *(longlong **)(unaff_RDI + 0x98);
  pvVar5 = _pthread_getspecific(pVar6);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e6000();
  if (local_30 == '\0') {
    if (local_38 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_30 = '\0';
  }
  (**(code **)(*plVar2 + 0x968))();
  if (local_38 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01e40eb0();
  lVar3 = *(longlong *)(unaff_RDI + 0x98);
  if (lVar3 != 0) {
    FUN_00d50b00();
  }
  (**(code **)(*local_38 + 0x450))();
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01e42250();
  (**(code **)(**(longlong **)(unaff_RDI + 0x98) + 0xab8))();
  return;
}


