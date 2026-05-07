// Function: FUN_0024d690
// Address: 0024d690
// Size: 782 bytes
// Class: GNFilePath


undefined8 FUN_0024d690(undefined8 param_1,int param_2)

{
  byte bVar1;
  longlong lVar2;
  bool bVar3;
  char *pcVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong unaff_RDI;
  longlong *local_58;
  char local_50 [9];
  undefined7 uStack_47;
  char local_40;
  char local_38 [8];
  
  if (param_2 == 0) {
    return 1;
  }
  bVar1 = 1;
  if (*(longlong **)(unaff_RDI + 0x90) == (longlong *)0x0) {
    plVar6 = (longlong *)0x0;
    bVar3 = true;
    plVar5 = (longlong *)0x0;
  }
  else {
    (**(code **)(&UNK_00001550 + **(longlong **)(unaff_RDI + 0x90)))();
    local_50[8] = local_50[0];
    pcVar4 = local_50;
    if (local_50[0] == '\0') {
      pcVar4 = local_50 + 8;
    }
    *pcVar4 = '\0';
    if ((local_50[0] != '\0') && (local_58 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (local_58 == (longlong *)0x0) {
      plVar6 = *(longlong **)(unaff_RDI + 0x90);
      if (*(longlong **)(unaff_RDI + 0x90) != (longlong *)0x0) goto LAB_0024d727;
      plVar6 = (longlong *)0x0;
    }
    else {
      plVar6 = local_58;
      if (local_50[8] == '\0') {
LAB_0024d727:
        FUN_00d50b00();
      }
      if (*(longlong **)(unaff_RDI + 0x90) != (longlong *)0x0) {
        (**(code **)(&UNK_00001550 + **(longlong **)(unaff_RDI + 0x90)))();
        pcVar4 = local_50;
        if (local_50[0] == '\0') {
          pcVar4 = local_50 + 8;
        }
        local_50[8] = local_50[0];
        *pcVar4 = '\0';
        if ((local_50[0] != '\0') && (local_58 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (local_58 == (longlong *)0x0) {
          plVar5 = *(longlong **)(unaff_RDI + 0x90);
          if (*(longlong **)(unaff_RDI + 0x90) != (longlong *)0x0) goto LAB_0024d791;
          plVar5 = (longlong *)0x0;
        }
        else {
          plVar5 = local_58;
          if (local_50[8] == '\0') {
LAB_0024d791:
            FUN_00d50b00();
          }
        }
        bVar3 = false;
        bVar1 = 0;
        goto LAB_0024d7b2;
      }
    }
    bVar3 = false;
    plVar5 = (longlong *)0x0;
  }
LAB_0024d7b2:
  FUN_019f2900();
  FUN_019f2910();
  if (!(bool)(bVar1 | plVar5 == (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (!bVar3 && plVar6 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  plVar5 = *(longlong **)(unaff_RDI + 0x90);
  (**(code **)(&UNK_00001550 + *plVar5))();
  local_38[0] = local_50[0];
  pcVar4 = local_50;
  if (local_50[0] == '\0') {
    pcVar4 = local_38;
  }
  *pcVar4 = '\0';
  if ((local_50[0] != '\0') && (local_58 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (local_58 == (longlong *)0x0) {
    plVar6 = *(longlong **)(unaff_RDI + 0x90);
LAB_0024d852:
    FUN_00d50b00();
  }
  else {
    plVar6 = local_58;
    if (local_38[0] == '\0') goto LAB_0024d852;
  }
  (**(code **)(*plVar6 + 0x7b8))();
  lVar2 = CONCAT71(uStack_47,local_50[8]);
  if (local_40 == '\0') {
    if (((lVar2 != 0) && (FUN_00d50b00(), local_40 != '\0')) &&
       (CONCAT71(uStack_47,local_50[8]) != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_40 = '\0';
  }
  if (plVar5 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  FUN_00505840();
  plVar6 = (longlong *)CONCAT71(uStack_47,local_50[8]);
  plVar5 = *(longlong **)(unaff_RDI + 0x90);
  if (plVar5 == (longlong *)0x0) {
LAB_0024d93c:
    local_58 = (longlong *)0x0;
  }
  else {
    (**(code **)(&UNK_00001550 + *plVar5))();
    pcVar4 = local_50;
    if (local_50[0] == '\0') {
      pcVar4 = local_38;
    }
    local_38[0] = local_50[0];
    *pcVar4 = '\0';
    if ((local_50[0] != '\0') && (local_58 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (local_58 == (longlong *)0x0) {
      local_58 = *(longlong **)(unaff_RDI + 0x90);
      if (local_58 == (longlong *)0x0) goto LAB_0024d93c;
    }
    else if (local_38[0] != '\0') goto LAB_0024d93e;
    FUN_00d50b00();
  }
LAB_0024d93e:
  FUN_019f2900();
  (**(code **)(*plVar6 + 0x918))();
  if ((plVar5 != (longlong *)0x0) && (local_58 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_40 != '\0') && (CONCAT71(uStack_47,local_50[8]) != 0)) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  return 1;
}


