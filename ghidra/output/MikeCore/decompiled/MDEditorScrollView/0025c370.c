// Function: FUN_0025c370
// Address: 0025c370
// Size: 666 bytes
// Class: MDEditorScrollView


void FUN_0025c370(undefined4 param_1)

{
  longlong *plVar1;
  char cVar2;
  void *pvVar3;
  pthread_key_t pVar4;
  char *pcVar5;
  longlong unaff_RDI;
  longlong *plVar6;
  longlong **pplVar7;
  char local_50;
  undefined7 uStack_4f;
  char local_48;
  longlong *local_40;
  char local_38 [8];
  
  if (*(longlong **)(unaff_RDI + 0x90) == (longlong *)0x0) {
    return;
  }
  (**(code **)(&UNK_00001550 + **(longlong **)(unaff_RDI + 0x90)))();
  plVar6 = local_40;
  pVar4 = CONCAT31((int3)((uint)param_1 >> 8),local_38[0]);
  pcVar5 = &local_50;
  if (local_38[0] != '\0') {
    pcVar5 = local_38;
  }
  local_50 = local_38[0];
  *pcVar5 = '\0';
  if ((local_38[0] != '\0') && (plVar6 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar6 == (longlong *)0x0) {
    plVar6 = *(longlong **)(unaff_RDI + 0x90);
    if (plVar6 == (longlong *)0x0) {
      return;
    }
LAB_0025c3ef:
    FUN_00d50b00();
  }
  else if (local_50 == '\0') goto LAB_0025c3ef;
  if (plVar6 == (longlong *)0x0) {
    return;
  }
  pplVar7 = &local_40;
  FUN_00d3ecf0();
  plVar1 = local_40;
  FUN_000fe4b0();
  if (plVar1 == (longlong *)0x0) {
LAB_0025c43b:
    pplVar7 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar2 = FUN_00e85ea0();
    if (cVar2 == '\0') goto LAB_0025c43b;
  }
  plVar1 = *pplVar7;
  if (*(char *)(pplVar7 + 1) == '\0') {
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar7 + 1) = 0;
  }
  if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 == (longlong *)0x0) goto LAB_0025c5f3;
  (**(code **)(*plVar6 + 0x988))();
  if (local_38[0] == '\0') {
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b00();
      if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_0025c4c7;
    }
  }
  else if (local_40 != (longlong *)0x0) {
LAB_0025c4c7:
    FUN_013fe9a0();
    plVar6 = (longlong *)CONCAT71(uStack_4f,local_50);
    if (local_48 == '\0') {
      if (plVar6 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_48 = '\0';
    }
    local_38[0] = '\0';
    local_40 = plVar6;
    cVar2 = FUN_00d23d70();
    if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar6 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (CONCAT71(uStack_4f,local_50) != 0)) {
      FUN_00d50b20();
    }
    if (cVar2 != '\0') {
      FUN_013fe9d0();
      plVar6 = local_40;
      if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar6 != (longlong *)0x0) {
        FUN_013fe9d0();
        pvVar3 = _pthread_getspecific(pVar4);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0125a280();
        FUN_019af490();
        if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    FUN_00d50b20();
  }
  FUN_00d50b20();
LAB_0025c5f3:
  FUN_00d50b20();
  return;
}


