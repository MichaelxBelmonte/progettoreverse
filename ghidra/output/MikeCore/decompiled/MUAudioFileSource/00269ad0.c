// Function: FUN_00269ad0
// Address: 00269ad0
// Size: 753 bytes
// Class: MUAudioFileSource


undefined4 FUN_00269ad0(undefined8 param_1,undefined4 param_2)

{
  longlong *plVar1;
  char *pcVar2;
  byte in_DL;
  longlong lVar3;
  longlong unaff_RDI;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong local_68;
  char local_58;
  undefined7 uStack_57;
  char local_50;
  longlong local_48;
  char local_40 [8];
  char local_38 [8];
  
  uVar4 = FUN_00d6f370();
  lVar3 = DAT_026f7000;
  if (DAT_026f7000 != 0) {
    uVar4 = FUN_00d50b00();
  }
  uVar4 = FUN_00d70f90(uVar4,0);
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  if ((local_40[0] != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if (((byte)uVar4 & in_DL) == 0) {
    return uVar4;
  }
  plVar1 = *(longlong **)(unaff_RDI + 0x90);
  if (plVar1 == (longlong *)0x0) {
LAB_00269bc1:
    lVar3 = 0;
  }
  else {
    (**(code **)(&UNK_00001550 + *plVar1))();
    lVar3 = local_48;
    pcVar2 = &local_58;
    if (local_40[0] != '\0') {
      pcVar2 = local_40;
    }
    local_58 = local_40[0];
    *pcVar2 = '\0';
    if ((local_40[0] != '\0') && (lVar3 != 0)) {
      FUN_00d50b20();
    }
    if (lVar3 == 0) {
      lVar3 = *(longlong *)(unaff_RDI + 0x90);
      if (lVar3 == 0) goto LAB_00269bc1;
    }
    else if (local_58 != '\0') goto LAB_00269bc3;
    FUN_00d50b00();
  }
LAB_00269bc3:
  uVar5 = FUN_01e436c0();
  if ((plVar1 != (longlong *)0x0) && (lVar3 != 0)) {
    FUN_00d50b20();
  }
  if (*(longlong **)(unaff_RDI + 0x90) == (longlong *)0x0) {
    section_00000388.nrelocs._3_1_ = 1;
  }
  else {
    (**(code **)(&UNK_00001550 + **(longlong **)(unaff_RDI + 0x90)))();
    lVar3 = local_48;
    pcVar2 = &local_58;
    if (local_40[0] != '\0') {
      pcVar2 = local_40;
    }
    local_58 = local_40[0];
    *pcVar2 = '\0';
    if ((local_40[0] != '\0') && (lVar3 != 0)) {
      FUN_00d50b20();
    }
    if (lVar3 == 0) {
      lVar3 = *(longlong *)(unaff_RDI + 0x90);
LAB_00269c4f:
      FUN_00d50b00();
    }
    else if (local_58 == '\0') goto LAB_00269c4f;
    *(undefined1 *)(lVar3 + 0x3c7) = 1;
    FUN_00d50b20();
  }
  FUN_01f27fe0();
  if (*(longlong **)(unaff_RDI + 0x90) == (longlong *)0x0) {
    local_68 = 0;
  }
  else {
    (**(code **)(&UNK_00001550 + **(longlong **)(unaff_RDI + 0x90)))();
    local_68 = local_48;
    pcVar2 = local_38;
    if (local_40[0] != '\0') {
      pcVar2 = local_40;
    }
    local_38[0] = local_40[0];
    *pcVar2 = '\0';
    if ((local_40[0] != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if (local_68 == 0) {
      local_68 = *(longlong *)(unaff_RDI + 0x90);
      if (local_68 != 0) goto LAB_00269ce2;
      local_68 = 0;
    }
    else if (local_38[0] == '\0') {
LAB_00269ce2:
      FUN_00d50b00();
    }
  }
  FUN_0027e3a0(uVar5,param_2);
  if (local_68 != 0) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (CONCAT71(uStack_57,local_58) != 0)) {
    FUN_00d50b20();
  }
  if (*(longlong **)(unaff_RDI + 0x90) == (longlong *)0x0) {
    section_00000388.nrelocs._3_1_ = 0;
    return uVar4;
  }
  (**(code **)(&UNK_00001550 + **(longlong **)(unaff_RDI + 0x90)))();
  pcVar2 = local_40;
  if (local_40[0] == '\0') {
    pcVar2 = &local_58;
  }
  local_58 = local_40[0];
  *pcVar2 = '\0';
  if ((local_40[0] != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if (local_48 == 0) {
    lVar3 = *(longlong *)(unaff_RDI + 0x90);
  }
  else {
    lVar3 = local_48;
    if (local_58 != '\0') goto LAB_00269da0;
  }
  FUN_00d50b00();
LAB_00269da0:
  *(undefined1 *)(lVar3 + 0x3c7) = 0;
  FUN_00d50b20();
  return uVar4;
}


