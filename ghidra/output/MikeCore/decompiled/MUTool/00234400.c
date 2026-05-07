// Function: FUN_00234400
// Address: 00234400
// Size: 1879 bytes
// Class: MUTool
// String references:
//   "MUTool"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00234400(void)

{
  bool bVar1;
  bool bVar2;
  code *pcVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong **pplVar10;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar11;
  longlong local_f8;
  char local_f0;
  longlong local_e8;
  char local_e0;
  longlong *local_d8;
  char local_d0;
  longlong local_c8;
  char local_c0;
  longlong local_b8;
  char local_b0;
  longlong *local_a8;
  longlong *local_a0;
  undefined4 local_94;
  longlong *local_90;
  char local_88;
  longlong *local_80;
  longlong *local_78;
  char local_70;
  longlong *local_68;
  char local_60;
  longlong *local_58;
  int local_50;
  int iStack_4c;
  int local_48;
  longlong *local_40;
  char local_38;
  
  plVar7 = (longlong *)FUN_00e8fc40();
  FUN_00022d50();
  local_a0 = plVar7;
  (**(code **)(*plVar7 + 0x18))();
  plVar8 = (longlong *)FUN_00e8fc40();
  FUN_00d4ff40();
  *plVar8 = (longlong)&DAT_02572358;
  pcVar3 = DAT_02572370;
  (*DAT_02572370)();
  plVar7 = (longlong *)FUN_00e8fc40();
  FUN_00d4ff40();
  *plVar7 = (longlong)&DAT_02572358;
  (*pcVar3)();
  local_a8 = plVar7;
  FUN_01e1f270();
  plVar7 = local_68;
  if (local_60 == '\0') {
    if (local_68 != (longlong *)0x0) {
      FUN_00d50b00();
      if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_002344d3;
    }
  }
  else if (local_68 != (longlong *)0x0) {
LAB_002344d3:
    local_60 = 0;
    local_68 = (longlong *)0x0;
    local_80 = plVar7;
    local_58 = plVar7;
    local_50 = -1;
    iStack_4c = 0;
    local_48 = 0;
    while( true ) {
      if (iStack_4c != 0) {
        if (iStack_4c < 1) {
          iStack_4c = -iStack_4c;
        }
        else {
          local_50 = local_50 - iStack_4c;
          FUN_00d23690();
          local_48 = local_48 + iStack_4c;
          iStack_4c = 0;
        }
      }
      lVar9 = (longlong)local_50;
      local_50 = local_50 + 1;
      if (*(int *)((longlong)local_58 + 0xc) <= local_50) break;
      local_68 = *(longlong **)(local_58[2] + 8 + lVar9 * 8);
      local_38 = '\0';
      local_40 = local_68;
      FUN_00d21140();
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      for (iVar6 = 0; iVar5 = FUN_01e26080(), iVar6 < iVar5; iVar6 = iVar6 + 1) {
        FUN_01e26090(extraout_XMM0_Da,iVar6);
        plVar7 = local_78;
        if (local_70 == '\0') {
          if (local_78 != (longlong *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_70 = '\0';
        }
        local_40 = plVar7;
        local_38 = '\0';
        FUN_00d21140();
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar7 != (longlong *)0x0) {
          FUN_00d50b20();
        }
        if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    FUN_00274dd0();
    FUN_00d50b20();
    if (plVar8 == (longlong *)0x0) {
      bVar2 = true;
      bVar1 = true;
      plVar7 = local_a8;
      goto joined_r0x00234b04;
    }
  }
  local_60 = 0;
  local_68 = (longlong *)0x0;
  local_50 = -1;
  iStack_4c = 0;
  local_48 = 0;
  local_58 = plVar8;
  while( true ) {
    if (iStack_4c != 0) {
      if (iStack_4c < 1) {
        iStack_4c = -iStack_4c;
      }
      else {
        local_50 = local_50 - iStack_4c;
        FUN_00d23690();
        local_48 = local_48 + iStack_4c;
        iStack_4c = 0;
      }
    }
    lVar9 = (longlong)local_50;
    local_50 = local_50 + 1;
    if (*(int *)((longlong)local_58 + 0xc) <= local_50) break;
    local_68 = *(longlong **)(local_58[2] + 8 + lVar9 * 8);
    FUN_01e26150();
    plVar7 = local_40;
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar7 != (longlong *)0x0) {
      uVar11 = FUN_01e26150();
      lVar9 = DAT_026f6e60;
      if (DAT_026f6e60 != 0) {
        uVar11 = FUN_00d50b00();
      }
      local_f8 = lVar9;
      local_f0 = '\x01';
      FUN_000175c0(uVar11,&local_f8);
      plVar7 = local_40;
      if ((DAT_0272ffd0 == '\0') && (iVar6 = ___cxa_guard_acquire(), iVar6 != 0)) {
        _DAT_026f8f48 = FUN_00d4fe50();
        _DAT_026f8f30 = "MUTool";
        _DAT_026f8f38 = 0x38;
        _DAT_026f8f40 = FUN_00274e70;
        _DAT_026f8f50 = 0;
        uRam00000000026f8f58 = 0;
        _DAT_026f8f60 = 0;
        _DAT_026f8fd8 = 0;
        uRam00000000026f8fe0 = 0;
        _DAT_026f8fe8 = 0;
        DAT_026f8fea = 1;
        _DAT_026f8f68 = 0;
        uRam00000000026f8f70 = 0;
        _DAT_026f8f78 = 0;
        uRam00000000026f8f80 = 0;
        _DAT_026f8f88 = 0;
        uRam00000000026f8f90 = 0;
        _DAT_026f8f98 = 0;
        uRam00000000026f8fa0 = 0;
        _DAT_026f8fa8 = 0;
        uRam00000000026f8fb0 = 0;
        _DAT_026f8fb8 = 0;
        uRam00000000026f8fc0 = 0;
        _DAT_026f8fc8 = 0;
        uRam00000000026f8fd0 = 0;
        DAT_026f8ff3 = 0;
        _DAT_026f8feb = 0;
        ___cxa_guard_release();
      }
      pplVar10 = (longlong **)&DAT_02802688;
      if (plVar7 != (longlong *)0x0) {
        (**(code **)(*plVar7 + 0x360))();
        cVar4 = FUN_00e85ea0();
        pplVar10 = &local_40;
        if (cVar4 == '\0') {
          pplVar10 = (longlong **)&DAT_02802688;
        }
      }
      plVar8 = *pplVar10;
      if (plVar8 == (longlong *)0x0) {
        uVar11 = (undefined4)CONCAT71((int7)((ulonglong)plVar7 >> 8),1);
        plVar8 = (longlong *)0x0;
      }
      else {
        if (*(char *)(pplVar10 + 1) == '\0') {
          FUN_00d50b00();
        }
        else {
          *(undefined1 *)(pplVar10 + 1) = 0;
        }
        uVar11 = 0;
      }
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_f0 != '\0') && (local_f8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar8 != (longlong *)0x0) {
        local_94 = uVar11;
        FUN_00d4efa0();
        FUN_00c82bb0();
        local_80 = local_40;
        if (local_38 == '\0') {
          if (((local_40 != (longlong *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
             (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_38 = '\0';
        }
        if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        lVar9 = DAT_026f6e68;
        if (DAT_026f6e68 != 0) {
          FUN_00d50b00();
        }
        local_e8 = lVar9;
        local_e0 = '\x01';
        local_d8 = local_80;
        local_d0 = '\0';
        local_c8 = 0;
        local_c0 = '\0';
        FUN_00d31230(&local_c8,&local_d8);
        plVar7 = local_40;
        local_88 = 0;
        if (local_38 == '\0') {
          if (local_40 != (longlong *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        local_88 = '\x01';
        local_90 = plVar7;
        FUN_01e260d0();
        if ((local_88 != '\0') && (local_90 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_c0 != '\0') && (local_c8 != 0)) {
          FUN_00d50b20();
        }
        if ((local_d0 != '\0') && (local_d8 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_e0 != '\0') && (local_e8 != 0)) {
          FUN_00d50b20();
        }
        if (local_a0 == (longlong *)0x0) {
          local_b8 = 0;
          local_b0 = '\0';
          FUN_01e25f80();
          if ((local_b0 != '\0') && (local_b8 != 0)) {
            FUN_00d50b20();
          }
        }
        if (local_80 != (longlong *)0x0) {
          FUN_00d50b20();
        }
        if ((char)local_94 == '\0') {
          FUN_00d50b20();
        }
      }
    }
  }
  FUN_00274dd0();
  bVar2 = false;
  bVar1 = false;
  plVar7 = local_a8;
joined_r0x00234b04:
  local_a8 = plVar7;
  if (plVar7 != (longlong *)0x0) {
    local_60 = 0;
    local_68 = (longlong *)0x0;
    iStack_4c = 0;
    local_48 = 0;
    local_58 = plVar7;
    for (lVar9 = 0; local_50 = (int)lVar9, local_50 < *(int *)((longlong)plVar7 + 0xc);
        lVar9 = lVar9 + 1) {
      local_68 = *(longlong **)(plVar7[2] + lVar9 * 8);
      FUN_00d50130();
    }
    FUN_00083b20();
    FUN_00d50b20();
    bVar1 = bVar2;
  }
  if (!bVar1) {
    FUN_00d50b20();
  }
  if (local_a0 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}


