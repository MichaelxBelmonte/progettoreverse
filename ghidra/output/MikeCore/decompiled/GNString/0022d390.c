// Function: FUN_0022d390
// Address: 0022d390
// Size: 678 bytes
// Class: GNString


void FUN_0022d390(void)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  bool bVar4;
  char cVar5;
  char *pcVar6;
  longlong unaff_RDI;
  longlong *plVar7;
  longlong local_88;
  char local_80;
  longlong *local_78;
  char local_70;
  longlong *local_68;
  char local_60;
  longlong *local_58;
  char local_50 [8];
  longlong *local_48;
  char local_40;
  char local_38 [8];
  
  FUN_01f27fe0();
  cVar5 = (**(code **)(*local_48 + 0x450))();
  if ((cVar5 == '\0') && (*(longlong *)(unaff_RDI + 0xc0) != 0)) {
    FUN_00d50b00();
    if (*(longlong **)(unaff_RDI + 0x90) == (longlong *)0x0) {
LAB_0022d44a:
      bVar4 = false;
    }
    else {
      (**(code **)(&UNK_00001550 + **(longlong **)(unaff_RDI + 0x90)))();
      plVar1 = local_58;
      pcVar6 = local_38;
      if (local_50[0] != '\0') {
        pcVar6 = local_50;
      }
      local_38[0] = local_50[0];
      *pcVar6 = '\0';
      if ((local_50[0] != '\0') && (local_58 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar1 == (longlong *)0x0) {
        if (*(longlong *)(unaff_RDI + 0x90) == 0) goto LAB_0022d44a;
LAB_0022d436:
        FUN_00d50b00();
      }
      else if (local_38[0] == '\0') goto LAB_0022d436;
      bVar4 = true;
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  else {
    bVar4 = false;
  }
  if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (!bVar4) {
    return;
  }
  plVar1 = *(longlong **)(unaff_RDI + 0xc0);
  if (plVar1 != (longlong *)0x0) {
    FUN_00d50b00();
  }
  plVar2 = *(longlong **)(unaff_RDI + 0x90);
  (**(code **)(&UNK_00001550 + *plVar2))();
  plVar7 = local_58;
  pcVar6 = local_38;
  if (local_50[0] != '\0') {
    pcVar6 = local_50;
  }
  local_38[0] = local_50[0];
  *pcVar6 = '\0';
  if ((local_50[0] != '\0') && (local_58 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar7 == (longlong *)0x0) {
    plVar7 = *(longlong **)(unaff_RDI + 0x90);
  }
  else if (local_38[0] != '\0') goto LAB_0022d4f0;
  FUN_00d50b00();
LAB_0022d4f0:
  (**(code **)(*plVar7 + 0xa00))();
  local_78 = local_48;
  local_70 = 0;
  if (local_40 == '\0') {
    if (local_48 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_40 = '\0';
  }
  local_70 = '\x01';
  FUN_00226f20();
  local_60 = 0;
  if (local_50[0] == '\0') {
    if (local_58 != (longlong *)0x0) {
      FUN_00d50b00();
    }
    lVar3 = *(longlong *)(unaff_RDI + 0x1b8);
  }
  else {
    local_50[0] = '\0';
    lVar3 = *(longlong *)(unaff_RDI + 0x1b8);
  }
  local_60 = '\x01';
  local_68 = local_58;
  if (lVar3 != 0) {
    local_60 = '\x01';
    local_80 = 0;
    FUN_00d50b00();
  }
  local_80 = '\x01';
  local_88 = lVar3;
  (**(code **)(*plVar1 + 0x4e8))(&local_68,&local_78,&local_88);
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar2 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}


