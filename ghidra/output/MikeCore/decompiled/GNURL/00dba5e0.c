// Function: FUN_00dba5e0
// Address: 00dba5e0
// Size: 2256 bytes
// Class: GNURL


void FUN_00dba5e0(void)

{
  int iVar1;
  longlong *plVar2;
  char *pcVar3;
  longlong lVar4;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  longlong lVar5;
  longlong lVar6;
  longlong local_120;
  char local_118;
  longlong local_110;
  char local_108;
  longlong local_100;
  char local_f8;
  longlong local_f0;
  char local_e8;
  longlong local_e0;
  char local_d8;
  longlong local_d0;
  char local_c8;
  longlong local_c0;
  char local_b8;
  longlong local_b0;
  longlong local_a8;
  char local_a0;
  longlong local_98;
  char local_90;
  longlong local_88;
  char local_80;
  longlong local_78;
  char local_70;
  longlong local_68;
  char local_60;
  undefined7 uStack_5f;
  char local_58;
  longlong local_50;
  longlong local_48;
  char local_40 [8];
  char local_38 [8];
  
  lVar4 = *(longlong *)(unaff_RSI + 0x20);
  if (lVar4 != 0) {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    FUN_00d50b00();
LAB_00dba611:
    *unaff_RDI = lVar4;
    *(undefined1 *)(unaff_RDI + 1) = 1;
    return;
  }
  plVar2 = (longlong *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar2 + 0x18))();
  lVar4 = *(longlong *)(unaff_RSI + 0x20);
  *(longlong **)(unaff_RSI + 0x20) = plVar2;
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  lVar4 = DAT_027837c0;
  if (DAT_027837c0 != 0) {
    FUN_00d50b00();
  }
  iVar1 = FUN_00d90650();
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  if (iVar1 == -1) {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    lVar4 = *(longlong *)(unaff_RSI + 0x20);
    if (lVar4 != 0) {
      FUN_00d50b00();
    }
    goto LAB_00dba611;
  }
  FUN_00d8f140();
  lVar4 = local_48;
  if ((((local_40[0] == '\0') && (local_48 != 0)) && (FUN_00d50b00(), local_40[0] != '\0')) &&
     (local_48 != 0)) {
    FUN_00d50b20();
  }
  lVar6 = DAT_02704060;
  if (DAT_02704060 != 0) {
    FUN_00d50b00();
  }
  iVar1 = FUN_00d90650();
  if (lVar6 != 0) {
    FUN_00d50b20();
  }
  lVar6 = lVar4;
  if (iVar1 != -1) {
    FUN_00d97ce0();
    lVar6 = local_48;
    lVar5 = lVar4;
    if (lVar4 != local_48) {
      if (local_40[0] != '\0') {
        if (lVar4 != 0) {
          FUN_00d50b20();
        }
        goto LAB_00dba7dc;
      }
      if (local_48 != 0) {
        FUN_00d50b00();
      }
      lVar5 = lVar6;
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
    }
    lVar6 = lVar5;
    if ((local_40[0] != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
  }
LAB_00dba7dc:
  iVar1 = FUN_00d8c7a0();
  lVar4 = DAT_02781680;
  if (iVar1 == 0) {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    lVar4 = *(longlong *)(unaff_RSI + 0x20);
    if (lVar4 != 0) {
      FUN_00d50b00();
    }
    *unaff_RDI = lVar4;
    *(undefined1 *)(unaff_RDI + 1) = 1;
    goto LAB_00dbae9a;
  }
  local_68 = lVar6;
  if (DAT_02781680 != 0) {
    FUN_00d50b00();
  }
  local_120 = lVar4;
  local_118 = '\x01';
  FUN_00d91000(1,&local_120);
  lVar4 = local_48;
  if (local_40[0] == '\0') {
    if (((local_48 != 0) && (FUN_00d50b00(), local_40[0] != '\0')) && (local_48 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_40[0] = '\0';
  }
  if ((local_118 != '\0') && (local_120 != 0)) {
    FUN_00d50b20();
  }
  local_b0 = lVar4;
  FUN_00d23340();
  lVar4 = local_48;
  local_38[0] = local_40[0];
  pcVar3 = local_40;
  if (local_40[0] == '\0') {
    pcVar3 = local_38;
  }
  *pcVar3 = '\0';
  if ((local_40[0] != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  lVar6 = DAT_027d3890;
  if (DAT_027d3890 != 0) {
    FUN_00d50b00();
  }
  local_110 = lVar6;
  local_108 = '\x01';
  FUN_00d91000(1,&local_110);
  local_50 = CONCAT71(uStack_5f,local_60);
  if (local_58 == '\0') {
    if (((local_50 != 0) && (FUN_00d50b00(), local_58 != '\0')) &&
       (CONCAT71(uStack_5f,local_60) != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_58 = '\0';
  }
  if ((local_108 != '\0') && (local_110 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38[0] != '\0') && (lVar4 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d23310();
  lVar4 = local_48;
  local_60 = local_40[0];
  pcVar3 = local_40;
  if (local_40[0] == '\0') {
    pcVar3 = &local_60;
  }
  *pcVar3 = '\0';
  if ((local_40[0] != '\0') && (lVar4 != 0)) {
    FUN_00d50b20();
  }
  local_a0 = 0;
  local_100 = DAT_027861f0;
  if (local_60 == '\0') {
    if (lVar4 != 0) {
      FUN_00d50b00();
      local_100 = DAT_027861f0;
    }
  }
  else {
    local_60 = '\0';
  }
  local_a0 = '\x01';
  local_a8 = lVar4;
  DAT_027861f0 = local_100;
  if (local_100 != 0) {
    local_a0 = '\x01';
    FUN_00d50b00();
  }
  local_f8 = '\x01';
  FUN_00cd2930();
  lVar4 = local_b0;
  if ((local_f8 != '\0') && (local_100 != 0)) {
    FUN_00d50b20();
  }
  if ((local_a0 != '\0') && (local_a8 != 0)) {
    FUN_00d50b20();
  }
  if (*(int *)(local_50 + 0xc) == 2) {
    FUN_00d23340();
    lVar4 = local_48;
    pcVar3 = &local_60;
    if (local_40[0] != '\0') {
      pcVar3 = local_40;
    }
    local_60 = local_40[0];
    *pcVar3 = '\0';
    if ((local_40[0] != '\0') && (lVar4 != 0)) {
      FUN_00d50b20();
    }
    local_90 = 0;
    local_f0 = DAT_02763508;
    if (local_60 == '\0') {
      if (lVar4 != 0) {
        FUN_00d50b00();
        local_f0 = DAT_02763508;
      }
    }
    else {
      local_60 = '\0';
    }
    local_90 = '\x01';
    local_98 = lVar4;
    DAT_02763508 = local_f0;
    if (local_f0 != 0) {
      local_90 = '\x01';
      FUN_00d50b00();
    }
    local_e8 = '\x01';
    FUN_00cd2930();
    lVar4 = local_b0;
    if ((local_e8 != '\0') && (local_f0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
  }
  lVar6 = local_68;
  if (*(int *)(lVar4 + 0xc) == 2) {
    FUN_00d23310();
    lVar4 = local_48;
    pcVar3 = local_38;
    if (local_40[0] != '\0') {
      pcVar3 = local_40;
    }
    local_38[0] = local_40[0];
    *pcVar3 = '\0';
    if ((local_40[0] != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    lVar6 = DAT_027d3890;
    if (DAT_027d3890 != 0) {
      FUN_00d50b00();
    }
    local_e0 = lVar6;
    local_d8 = '\x01';
    FUN_00d91000(1,&local_e0);
    lVar6 = CONCAT71(uStack_5f,local_60);
    if (local_50 == lVar6) {
LAB_00dbac6d:
      if ((local_58 != '\0') && (CONCAT71(uStack_5f,local_60) != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_50 = lVar6;
      if (local_58 == '\0') {
        if (lVar6 != 0) {
          FUN_00d50b00();
        }
        FUN_00d50b20();
        goto LAB_00dbac6d;
      }
      FUN_00d50b20();
      local_58 = '\0';
      local_50 = lVar6;
    }
    if ((local_d8 != '\0') && (local_e0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38[0] != '\0') && (lVar4 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d23310();
    lVar4 = local_48;
    local_60 = local_40[0];
    pcVar3 = local_40;
    if (local_40[0] == '\0') {
      pcVar3 = &local_60;
    }
    *pcVar3 = '\0';
    if ((local_40[0] != '\0') && (lVar4 != 0)) {
      FUN_00d50b20();
    }
    local_80 = 0;
    local_d0 = DAT_026f6f98;
    if (local_60 == '\0') {
      if (lVar4 != 0) {
        FUN_00d50b00();
        local_d0 = DAT_026f6f98;
      }
    }
    else {
      local_60 = '\0';
    }
    local_80 = '\x01';
    local_88 = lVar4;
    DAT_026f6f98 = local_d0;
    if (local_d0 != 0) {
      local_80 = '\x01';
      FUN_00d50b00();
    }
    local_c8 = '\x01';
    FUN_00cd2930();
    lVar4 = local_50;
    if ((local_c8 != '\0') && (local_d0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    lVar6 = local_68;
    if (*(int *)(lVar4 + 0xc) == 2) {
      FUN_00d23340();
      pcVar3 = local_40;
      if (local_40[0] == '\0') {
        pcVar3 = &local_60;
      }
      local_60 = local_40[0];
      *pcVar3 = '\0';
      if ((local_40[0] != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      local_70 = 0;
      if (local_60 == '\0') {
        if (local_48 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_60 = '\0';
      }
      lVar4 = DAT_027837e8;
      local_70 = '\x01';
      local_78 = local_48;
      if (DAT_027837e8 != 0) {
        FUN_00d50b00();
      }
      local_c0 = lVar4;
      local_b8 = '\x01';
      FUN_00cd2930();
      if ((local_b8 != '\0') && (local_c0 != 0)) {
        FUN_00d50b20();
      }
      lVar6 = local_68;
      if ((local_70 != '\0') && (local_78 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  *(undefined1 *)(unaff_RDI + 1) = 0;
  lVar4 = *(longlong *)(unaff_RSI + 0x20);
  if (lVar4 != 0) {
    FUN_00d50b00();
  }
  *unaff_RDI = lVar4;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  FUN_00d50b20();
  FUN_00d50b20();
LAB_00dbae9a:
  if (lVar6 == 0) {
    return;
  }
  FUN_00d50b20();
  return;
}


