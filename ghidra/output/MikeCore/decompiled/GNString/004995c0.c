// Function: FUN_004995c0
// Address: 004995c0
// Size: 1866 bytes
// Class: GNString
// String references:
//   "%@: "


void FUN_004995c0(undefined8 param_1)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  longlong unaff_RDI;
  longlong **pplVar4;
  longlong local_e8;
  char local_e0;
  longlong local_d8;
  char local_d0;
  longlong local_c8;
  char local_c0;
  longlong local_b8;
  char local_b0;
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
  longlong local_58;
  char local_50;
  longlong *local_48;
  undefined4 local_40;
  longlong local_38;
  char local_30;
  
  FUN_00498b30();
  if (*(longlong **)(unaff_RDI + 0xe8) != (longlong *)0x0) {
    pplVar4 = &local_48;
    (**(code **)(**(longlong **)(unaff_RDI + 0xe8) + 0x9c0))();
    plVar1 = local_48;
    FUN_0049bd70();
    if (plVar1 == (longlong *)0x0) {
LAB_00499626:
      pplVar4 = (longlong **)&DAT_02802688;
    }
    else {
      (**(code **)(*plVar1 + 0x360))();
      cVar3 = FUN_00e85ea0();
      if (cVar3 == '\0') goto LAB_00499626;
    }
    plVar1 = *pplVar4;
    if (*(char *)(pplVar4 + 1) == '\0') {
      if (plVar1 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      *(undefined1 *)(pplVar4 + 1) = 0;
    }
    if (((char)local_40 != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    lVar2 = DAT_027086c8;
    if (plVar1 != (longlong *)0x0) {
      if (DAT_027086c8 != 0) {
        FUN_00d50b00();
      }
      local_e8 = lVar2;
      local_e0 = '\x01';
      FUN_01e57260(param_1,&local_e8);
      local_38 = local_68;
      local_40 = 1;
      local_48 = &DAT_024c5048;
      local_30 = 0;
      if (local_68 != 0) {
        FUN_00d50b00();
      }
      local_30 = '\x01';
      FUN_00d8cb40(param_1,&local_48);
      local_a8 = local_58;
      local_a0 = 0;
      if (local_50 == '\0') {
        if (local_58 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_50 = '\0';
      }
      local_a0 = '\x01';
      FUN_00d4c980();
      if ((local_a0 != '\0') && (local_a8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      local_48 = &DAT_024c5048;
      if ((local_30 != '\0') && (local_38 != 0)) {
        FUN_00d50b20();
      }
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
      if ((local_e0 != '\0') && (local_e8 != 0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
  }
  if (*(longlong **)(unaff_RDI + 0xf0) != (longlong *)0x0) {
    pplVar4 = &local_48;
    (**(code **)(**(longlong **)(unaff_RDI + 0xf0) + 0x9c0))();
    plVar1 = local_48;
    FUN_0049bd70();
    if (plVar1 == (longlong *)0x0) {
LAB_004997fa:
      pplVar4 = (longlong **)&DAT_02802688;
    }
    else {
      (**(code **)(*plVar1 + 0x360))();
      cVar3 = FUN_00e85ea0();
      if (cVar3 == '\0') goto LAB_004997fa;
    }
    plVar1 = *pplVar4;
    if (*(char *)(pplVar4 + 1) == '\0') {
      if (plVar1 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      *(undefined1 *)(pplVar4 + 1) = 0;
    }
    if (((char)local_40 != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    lVar2 = DAT_027086d0;
    if (plVar1 != (longlong *)0x0) {
      if (DAT_027086d0 != 0) {
        FUN_00d50b00();
      }
      local_d8 = lVar2;
      local_d0 = '\x01';
      FUN_01e57260(param_1,&local_d8);
      lVar2 = local_68;
      local_40 = 1;
      local_48 = &DAT_024c5048;
      local_30 = 0;
      if (local_68 != 0) {
        FUN_00d50b00();
      }
      local_38 = lVar2;
      local_30 = '\x01';
      FUN_00d8cb40(param_1,&local_48);
      local_98 = local_58;
      local_90 = 0;
      if (local_50 == '\0') {
        if (local_58 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_50 = '\0';
      }
      local_90 = '\x01';
      FUN_00d4c980();
      if ((local_90 != '\0') && (local_98 != 0)) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      local_48 = &DAT_024c5048;
      if ((local_30 != '\0') && (local_38 != 0)) {
        FUN_00d50b20();
      }
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
      if ((local_d0 != '\0') && (local_d8 != 0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
  }
  if (*(longlong **)(unaff_RDI + 0xf8) != (longlong *)0x0) {
    pplVar4 = &local_48;
    (**(code **)(**(longlong **)(unaff_RDI + 0xf8) + 0x9c0))();
    plVar1 = local_48;
    FUN_0049bd70();
    if (plVar1 == (longlong *)0x0) {
LAB_004999ce:
      pplVar4 = (longlong **)&DAT_02802688;
    }
    else {
      (**(code **)(*plVar1 + 0x360))();
      cVar3 = FUN_00e85ea0();
      if (cVar3 == '\0') goto LAB_004999ce;
    }
    plVar1 = *pplVar4;
    if (*(char *)(pplVar4 + 1) == '\0') {
      if (plVar1 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      *(undefined1 *)(pplVar4 + 1) = 0;
    }
    if (((char)local_40 != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    lVar2 = DAT_027086d8;
    if (plVar1 != (longlong *)0x0) {
      if (DAT_027086d8 != 0) {
        FUN_00d50b00();
      }
      local_c8 = lVar2;
      local_c0 = '\x01';
      FUN_01e57260(param_1,&local_c8);
      lVar2 = local_68;
      local_40 = 1;
      local_48 = &DAT_024c5048;
      local_30 = 0;
      if (local_68 != 0) {
        FUN_00d50b00();
      }
      local_38 = lVar2;
      local_30 = '\x01';
      FUN_00d8cb40(param_1,&local_48);
      local_88 = local_58;
      local_80 = 0;
      if (local_50 == '\0') {
        if (local_58 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_50 = '\0';
      }
      local_80 = '\x01';
      FUN_00d4c980();
      if ((local_80 != '\0') && (local_88 != 0)) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      local_48 = &DAT_024c5048;
      if ((local_30 != '\0') && (local_38 != 0)) {
        FUN_00d50b20();
      }
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
      if ((local_c0 != '\0') && (local_c8 != 0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
  }
  if (*(longlong **)(unaff_RDI + 0x100) == (longlong *)0x0) {
    return;
  }
  pplVar4 = &local_48;
  (**(code **)(**(longlong **)(unaff_RDI + 0x100) + 0x9c0))();
  plVar1 = local_48;
  FUN_0049bd70();
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 != '\0') goto LAB_00499b91;
  }
  pplVar4 = (longlong **)&DAT_02802688;
LAB_00499b91:
  plVar1 = *pplVar4;
  if (*(char *)(pplVar4 + 1) == '\0') {
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar4 + 1) = 0;
  }
  if (((char)local_40 != '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  lVar2 = DAT_027087d8;
  if (plVar1 != (longlong *)0x0) {
    if (DAT_027087d8 != 0) {
      FUN_00d50b00();
    }
    local_b8 = lVar2;
    local_b0 = '\x01';
    FUN_01e57260(param_1,&local_b8);
    lVar2 = local_68;
    local_40 = 1;
    local_48 = &DAT_024c5048;
    local_30 = 0;
    if (local_68 != 0) {
      FUN_00d50b00();
    }
    local_38 = lVar2;
    local_30 = '\x01';
    FUN_00d8cb40(param_1,&local_48);
    local_78 = local_58;
    local_70 = 0;
    if (local_50 == '\0') {
      if (local_58 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_50 = '\0';
    }
    local_70 = '\x01';
    FUN_00d4c980();
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    local_48 = &DAT_024c5048;
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if ((local_b0 != '\0') && (local_b8 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  return;
}


