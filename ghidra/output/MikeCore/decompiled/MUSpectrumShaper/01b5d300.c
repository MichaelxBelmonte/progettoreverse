// Function: FUN_01b5d300
// Address: 01b5d300
// Size: 2507 bytes
// Class: MUSpectrumShaper
// String references:
//   "MUSpectrumShaperSlider"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b5d300(undefined4 param_1)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  longlong **pplVar5;
  undefined4 uVar6;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined4 extraout_XMM0_Da_04;
  longlong local_130;
  char local_128;
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
  char local_a8;
  longlong local_a0;
  char local_98;
  longlong local_90;
  char local_88;
  longlong local_80;
  char local_78;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  longlong *local_30;
  char local_28;
  
  lVar2 = DAT_027e4c10;
  if (DAT_027e4c10 != 0) {
    param_1 = FUN_00d50b00();
  }
  local_130 = lVar2;
  local_128 = '\x01';
  pplVar5 = &local_30;
  uVar6 = FUN_01e57490(param_1,&local_130);
  plVar1 = local_30;
  if (DAT_027e5dd8 == '\0') {
    iVar4 = ___cxa_guard_acquire();
    uVar6 = extraout_XMM0_Da_02;
    if (iVar4 != 0) {
      _DAT_027e5d28 = FUN_001b37d0();
      _DAT_027e5d10 = "MUSpectrumShaperSlider";
      _DAT_027e5d18 = 0x200;
      _DAT_027e5d20 = FUN_01bdaad0;
      _DAT_027e5d30 = 0;
      uRam00000000027e5d38 = 0;
      _DAT_027e5d40 = 0;
      uRam00000000027e5d48 = 0;
      _DAT_027e5d50 = 0;
      uRam00000000027e5d58 = 0;
      _DAT_027e5d60 = 0;
      uRam00000000027e5d68 = 0;
      _DAT_027e5d70 = 0;
      uRam00000000027e5d78 = 0;
      _DAT_027e5d80 = 0;
      uRam00000000027e5d88 = 0;
      _DAT_027e5d90 = 0;
      uRam00000000027e5d98 = 0;
      _DAT_027e5da0 = 0;
      uRam00000000027e5da8 = 0;
      _DAT_027e5db0 = 0;
      uRam00000000027e5db8 = 0;
      _DAT_027e5dc0 = 0;
      uRam00000000027e5dc8 = 0;
      _DAT_027e5dd0 = 0;
      uVar6 = ___cxa_guard_release();
    }
  }
  if (plVar1 == (longlong *)0x0) {
LAB_01b5d381:
    pplVar5 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar3 = FUN_00e85ea0();
    uVar6 = extraout_XMM0_Da;
    if (cVar3 == '\0') goto LAB_01b5d381;
  }
  plVar1 = *pplVar5;
  if (*(char *)(pplVar5 + 1) == '\0') {
    if (plVar1 != (longlong *)0x0) {
      uVar6 = FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar5 + 1) = 0;
  }
  if ((local_28 != '\0') && (local_30 != (longlong *)0x0)) {
    uVar6 = FUN_00d50b20();
  }
  if ((local_128 != '\0') && (local_130 != 0)) {
    uVar6 = FUN_00d50b20();
  }
  lVar2 = DAT_027e4c18;
  if (plVar1 != (longlong *)0x0) {
    if (DAT_027e4c18 != 0) {
      FUN_00d50b00();
    }
    local_120 = lVar2;
    local_118 = '\x01';
    FUN_01bd1950(0);
    if ((local_118 != '\0') && (local_120 != 0)) {
      FUN_00d50b20();
    }
    lVar2 = DAT_027e4c20;
    if (DAT_027e4c20 != 0) {
      FUN_00d50b00();
    }
    local_110 = lVar2;
    local_108 = '\x01';
    FUN_01bd1950(DAT_02390124);
    if ((local_108 != '\0') && (local_110 != 0)) {
      FUN_00d50b20();
    }
    lVar2 = DAT_027e4c28;
    if (DAT_027e4c28 != 0) {
      FUN_00d50b00();
    }
    local_100 = lVar2;
    local_f8 = '\x01';
    FUN_01bd1950(DAT_02390d34);
    if ((local_f8 != '\0') && (local_100 != 0)) {
      FUN_00d50b20();
    }
    FUN_01bd1fd0(DAT_02390124);
    uVar6 = FUN_00d50b20();
  }
  lVar2 = DAT_027e4c30;
  if (DAT_027e4c30 != 0) {
    uVar6 = FUN_00d50b00();
  }
  local_f0 = lVar2;
  local_e8 = '\x01';
  pplVar5 = &local_30;
  uVar6 = FUN_01e57490(uVar6,&local_f0);
  plVar1 = local_30;
  if (DAT_027e5dd8 == '\0') {
    iVar4 = ___cxa_guard_acquire();
    uVar6 = extraout_XMM0_Da_03;
    if (iVar4 != 0) {
      _DAT_027e5d28 = FUN_001b37d0();
      _DAT_027e5d10 = "MUSpectrumShaperSlider";
      _DAT_027e5d18 = 0x200;
      _DAT_027e5d20 = FUN_01bdaad0;
      _DAT_027e5d30 = 0;
      uRam00000000027e5d38 = 0;
      _DAT_027e5d40 = 0;
      uRam00000000027e5d48 = 0;
      _DAT_027e5d50 = 0;
      uRam00000000027e5d58 = 0;
      _DAT_027e5d60 = 0;
      uRam00000000027e5d68 = 0;
      _DAT_027e5d70 = 0;
      uRam00000000027e5d78 = 0;
      _DAT_027e5d80 = 0;
      uRam00000000027e5d88 = 0;
      _DAT_027e5d90 = 0;
      uRam00000000027e5d98 = 0;
      _DAT_027e5da0 = 0;
      uRam00000000027e5da8 = 0;
      _DAT_027e5db0 = 0;
      uRam00000000027e5db8 = 0;
      _DAT_027e5dc0 = 0;
      uRam00000000027e5dc8 = 0;
      _DAT_027e5dd0 = 0;
      uVar6 = ___cxa_guard_release();
    }
  }
  if (plVar1 == (longlong *)0x0) {
LAB_01b5d555:
    pplVar5 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar3 = FUN_00e85ea0();
    uVar6 = extraout_XMM0_Da_00;
    if (cVar3 == '\0') goto LAB_01b5d555;
  }
  plVar1 = *pplVar5;
  if (*(char *)(pplVar5 + 1) == '\0') {
    if (plVar1 != (longlong *)0x0) {
      uVar6 = FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar5 + 1) = 0;
  }
  if ((local_28 != '\0') && (local_30 != (longlong *)0x0)) {
    uVar6 = FUN_00d50b20();
  }
  if ((local_e8 != '\0') && (local_f0 != 0)) {
    uVar6 = FUN_00d50b20();
  }
  lVar2 = DAT_027e4c38;
  if (plVar1 != (longlong *)0x0) {
    if (DAT_027e4c38 != 0) {
      FUN_00d50b00();
    }
    local_e0 = lVar2;
    local_d8 = '\x01';
    FUN_01bd1950(DAT_02390d00);
    if ((local_d8 != '\0') && (local_e0 != 0)) {
      FUN_00d50b20();
    }
    lVar2 = DAT_027e4c40;
    if (DAT_027e4c40 != 0) {
      FUN_00d50b00();
    }
    local_d0 = lVar2;
    local_c8 = '\x01';
    FUN_01bd1950(DAT_02390118);
    if ((local_c8 != '\0') && (local_d0 != 0)) {
      FUN_00d50b20();
    }
    lVar2 = DAT_027e4c48;
    if (DAT_027e4c48 != 0) {
      FUN_00d50b00();
    }
    local_c0 = lVar2;
    local_b8 = '\x01';
    FUN_01bd1950(0);
    if ((local_b8 != '\0') && (local_c0 != 0)) {
      FUN_00d50b20();
    }
    lVar2 = DAT_027e4c50;
    if (DAT_027e4c50 != 0) {
      FUN_00d50b00();
    }
    local_b0 = lVar2;
    local_a8 = '\x01';
    FUN_01bd1950(DAT_02390124);
    if ((local_a8 != '\0') && (local_b0 != 0)) {
      FUN_00d50b20();
    }
    FUN_01bd1fd0(DAT_02390118);
    FUN_01bd1fd0(0);
    uVar6 = FUN_00d50b20();
  }
  lVar2 = DAT_027e4c58;
  if (DAT_027e4c58 != 0) {
    uVar6 = FUN_00d50b00();
  }
  local_a0 = lVar2;
  local_98 = '\x01';
  pplVar5 = &local_30;
  uVar6 = FUN_01e57490(uVar6,&local_a0);
  plVar1 = local_30;
  if (DAT_027e5dd8 == '\0') {
    iVar4 = ___cxa_guard_acquire();
    uVar6 = extraout_XMM0_Da_04;
    if (iVar4 != 0) {
      _DAT_027e5d28 = FUN_001b37d0();
      _DAT_027e5d10 = "MUSpectrumShaperSlider";
      _DAT_027e5d18 = 0x200;
      _DAT_027e5d20 = FUN_01bdaad0;
      _DAT_027e5d30 = 0;
      uRam00000000027e5d38 = 0;
      _DAT_027e5d40 = 0;
      uRam00000000027e5d48 = 0;
      _DAT_027e5d50 = 0;
      uRam00000000027e5d58 = 0;
      _DAT_027e5d60 = 0;
      uRam00000000027e5d68 = 0;
      _DAT_027e5d70 = 0;
      uRam00000000027e5d78 = 0;
      _DAT_027e5d80 = 0;
      uRam00000000027e5d88 = 0;
      _DAT_027e5d90 = 0;
      uRam00000000027e5d98 = 0;
      _DAT_027e5da0 = 0;
      uRam00000000027e5da8 = 0;
      _DAT_027e5db0 = 0;
      uRam00000000027e5db8 = 0;
      _DAT_027e5dc0 = 0;
      uRam00000000027e5dc8 = 0;
      _DAT_027e5dd0 = 0;
      uVar6 = ___cxa_guard_release();
    }
  }
  if (plVar1 == (longlong *)0x0) {
LAB_01b5d787:
    pplVar5 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar3 = FUN_00e85ea0();
    uVar6 = extraout_XMM0_Da_01;
    if (cVar3 == '\0') goto LAB_01b5d787;
  }
  plVar1 = *pplVar5;
  if (*(char *)(pplVar5 + 1) == '\0') {
    if (plVar1 != (longlong *)0x0) {
      uVar6 = FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar5 + 1) = 0;
  }
  if ((local_28 != '\0') && (local_30 != (longlong *)0x0)) {
    uVar6 = FUN_00d50b20();
  }
  if ((local_98 != '\0') && (local_a0 != 0)) {
    uVar6 = FUN_00d50b20();
  }
  lVar2 = DAT_027e4c60;
  if (plVar1 != (longlong *)0x0) {
    if (DAT_027e4c60 != 0) {
      FUN_00d50b00();
    }
    local_90 = lVar2;
    local_88 = '\x01';
    FUN_01bd1950(DAT_02390d00);
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
    lVar2 = DAT_027e4c68;
    if (DAT_027e4c68 != 0) {
      FUN_00d50b00();
    }
    local_80 = lVar2;
    local_78 = '\x01';
    FUN_01bd1950(0);
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    lVar2 = DAT_027e4c70;
    if (DAT_027e4c70 != 0) {
      FUN_00d50b00();
    }
    local_70 = lVar2;
    local_68 = '\x01';
    FUN_01bd1950(DAT_02390124);
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    FUN_01bd1fd0(0);
    uVar6 = FUN_00d50b20();
  }
  lVar2 = DAT_027e4c78;
  if (DAT_027e4c78 != 0) {
    uVar6 = FUN_00d50b00();
  }
  local_60 = lVar2;
  local_58 = '\x01';
  pplVar5 = &local_30;
  FUN_01e57490(uVar6,&local_60);
  plVar1 = local_30;
  if (DAT_027e5dd8 == '\0') {
    iVar4 = ___cxa_guard_acquire();
    if (iVar4 != 0) {
      _DAT_027e5d28 = FUN_001b37d0();
      _DAT_027e5d10 = "MUSpectrumShaperSlider";
      _DAT_027e5d18 = 0x200;
      _DAT_027e5d20 = FUN_01bdaad0;
      _DAT_027e5d30 = 0;
      uRam00000000027e5d38 = 0;
      _DAT_027e5d40 = 0;
      uRam00000000027e5d48 = 0;
      _DAT_027e5d50 = 0;
      uRam00000000027e5d58 = 0;
      _DAT_027e5d60 = 0;
      uRam00000000027e5d68 = 0;
      _DAT_027e5d70 = 0;
      uRam00000000027e5d78 = 0;
      _DAT_027e5d80 = 0;
      uRam00000000027e5d88 = 0;
      _DAT_027e5d90 = 0;
      uRam00000000027e5d98 = 0;
      _DAT_027e5da0 = 0;
      uRam00000000027e5da8 = 0;
      _DAT_027e5db0 = 0;
      uRam00000000027e5db8 = 0;
      _DAT_027e5dc0 = 0;
      uRam00000000027e5dc8 = 0;
      _DAT_027e5dd0 = 0;
      ___cxa_guard_release();
    }
  }
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 != '\0') goto LAB_01b5d930;
  }
  pplVar5 = (longlong **)&DAT_02802688;
LAB_01b5d930:
  plVar1 = *pplVar5;
  if (*(char *)(pplVar5 + 1) == '\0') {
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar5 + 1) = 0;
  }
  if ((local_28 != '\0') && (local_30 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  lVar2 = DAT_027e4c48;
  if (plVar1 != (longlong *)0x0) {
    if (DAT_027e4c48 != 0) {
      FUN_00d50b00();
    }
    local_50 = lVar2;
    local_48 = '\x01';
    FUN_01bd1950(DAT_02390d34);
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    lVar2 = DAT_027e4c80;
    if (DAT_027e4c80 != 0) {
      FUN_00d50b00();
    }
    local_40 = lVar2;
    local_38 = '\x01';
    FUN_01bd1950(DAT_02390d28);
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  FUN_01e534b0();
  return;
}


