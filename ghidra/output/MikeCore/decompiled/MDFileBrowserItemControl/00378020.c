// Function: FUN_00378020
// Address: 00378020
// Size: 1687 bytes
// Class: MDFileBrowserItemControl


void FUN_00378020(void)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong unaff_RDI;
  longlong **pplVar7;
  longlong *local_48;
  char local_40;
  longlong *local_38;
  char local_30;
  
  FUN_01e534b0();
  FUN_01c21680();
  puVar5 = (undefined8 *)FUN_00e8fc40();
  FUN_0006daf0();
  *(undefined4 *)(puVar5 + 0x27) = 0;
  puVar5[0x2e] = 0;
  *(undefined4 *)(puVar5 + 0x2f) = 0;
  puVar5[0x30] = 0;
  *(undefined1 *)(puVar5 + 0x31) = 0;
  puVar5[0x28] = 0;
  puVar5[0x29] = 0;
  *(undefined4 *)(puVar5 + 0x2a) = 0;
  puVar5[0x2b] = 0;
  puVar5[0x2c] = 0;
  *(undefined8 *)((longlong)puVar5 + 0x165) = 0;
  *(undefined8 *)((longlong)puVar5 + 0x18c) = 0;
  *(undefined8 *)((longlong)puVar5 + 0x194) = 0;
  *(undefined8 *)((longlong)puVar5 + 0x199) = 0;
  puVar5[0x35] = 0;
  puVar5[0x36] = 0;
  puVar5[0x37] = 0;
  puVar5[0x38] = 0;
  *(undefined8 *)((longlong)puVar5 + 0x1c1) = 0;
  *(undefined8 *)((longlong)puVar5 + 0x1c9) = 0;
  puVar5[0x3c] = 0;
  *(undefined1 *)(puVar5 + 0x3d) = 0;
  puVar5[0x3e] = 0;
  *(undefined1 *)(puVar5 + 0x3f) = 0;
  *puVar5 = &DAT_024ebea8;
  puVar5[2] = &DAT_024eca78;
  puVar5[0x3b] = &DAT_024ecab8;
  puVar5[0x40] = 0;
  FUN_00d500e0();
  FUN_01c23100();
  if (puVar5 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  FUN_01c21100();
  FUN_01c21610();
  FUN_01c215e0();
  (**(code **)(*(longlong *)(unaff_RDI + 0xd0) + 0x10))();
  FUN_00d50b00();
  FUN_01c216a0();
  if ((longlong *)(unaff_RDI + 0xd0) != (longlong *)0x0) {
    (**(code **)(*(longlong *)(unaff_RDI + 0xd0) + 0x10))();
    FUN_00d50b20();
  }
  lVar2 = DAT_02703fc8;
  if (DAT_02703fc8 != 0) {
    FUN_00d50b00();
  }
  FUN_01c25a20();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  FUN_00d50b00();
  FUN_01c25a80();
  if (unaff_RDI != 0) {
    FUN_00d50b20();
  }
  lVar2 = DAT_02703fd0;
  if (DAT_02703fd0 != 0) {
    FUN_00d50b00();
  }
  FUN_01c23160();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  FUN_00d50b00();
  FUN_01c25980();
  if (unaff_RDI != 0) {
    FUN_00d50b20();
  }
  FUN_00378ba0();
  if (*(longlong *)(unaff_RDI + 0x100) != 0) {
    FUN_01d6f8d0();
    plVar1 = *(longlong **)(unaff_RDI + 0x100);
    FUN_00379d20();
    plVar6 = local_38;
    if (local_30 == '\0') {
      if (local_38 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_30 = '\0';
    }
    (**(code **)(*plVar1 + 0x958))();
    if (plVar6 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  pplVar7 = &local_38;
  FUN_01f27fe0();
  plVar1 = local_38;
  FUN_003708c0();
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x360))();
    cVar4 = FUN_00e85ea0();
    if (cVar4 != '\0') goto LAB_00378411;
  }
  pplVar7 = (longlong **)&DAT_02802688;
LAB_00378411:
  plVar1 = *pplVar7;
  if (*(char *)(pplVar7 + 1) == '\0') {
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar7 + 1) = 0;
  }
  if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 != (longlong *)0x0) {
    plVar6 = (longlong *)FUN_00e8fc40();
    FUN_0038cc50();
    (**(code **)(*plVar6 + 0x18))();
    lVar2 = *(longlong *)(unaff_RDI + 0xd8);
    *(longlong **)(unaff_RDI + 0xd8) = plVar6;
    if (lVar2 != 0) {
      FUN_00d50b20();
      plVar6 = *(longlong **)(unaff_RDI + 0xd8);
    }
    (**(code **)(*plVar1 + 0x7b0))();
    plVar3 = local_38;
    if (local_30 == '\0') {
      if (local_38 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_30 = '\0';
    }
    (**(code **)(*plVar6 + 0x3b8))();
    if (plVar3 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    (**(code **)(*plVar1 + 0x7b0))();
    cVar4 = (**(code **)(*local_38 + 0x390))();
    if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (cVar4 != '\0') {
      (**(code **)(**(longlong **)(unaff_RDI + 0xd8) + 0x368))();
    }
    (**(code **)(*plVar1 + 0x7b0))();
    lVar2 = *(longlong *)(unaff_RDI + 0xd8);
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    FUN_01257a80();
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  FUN_01c26ac0();
  plVar6 = local_38;
  if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar6 != (longlong *)0x0) {
    FUN_01c26ac0();
    (**(code **)(*local_48 + 0x7b0))();
    FUN_01cf4060();
    if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_01c26ac0();
    (**(code **)(*local_48 + 0x7b0))();
    FUN_01cf4120();
    if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  FUN_00379f30();
  if (plVar1 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}


