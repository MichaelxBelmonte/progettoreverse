// Function: FUN_01c707d0
// Address: 01c707d0
// Size: 869 bytes
// Class: MUBeatSelection
// String references:
//   "MUBeatSelection"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_01c707d0(undefined8 param_1,undefined4 param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  longlong unaff_RDI;
  longlong **pplVar7;
  undefined4 uVar8;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  longlong *local_98;
  undefined1 local_90;
  longlong local_88;
  char local_80;
  longlong local_78;
  char local_70;
  longlong *local_68;
  char local_60;
  undefined8 local_58;
  longlong *local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  uVar8 = FUN_01ca6970();
  local_88 = DAT_027ebec8;
  if (DAT_027ebec8 != 0) {
    uVar8 = FUN_00d50b00();
  }
  local_80 = '\x01';
  pplVar7 = &local_50;
  FUN_01cacbe0(uVar8,&local_88);
  plVar1 = local_50;
  FUN_0119c4c0();
  if (plVar1 == (longlong *)0x0) {
LAB_01c7084f:
    pplVar7 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 == '\0') goto LAB_01c7084f;
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
  if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if (plVar1 == (longlong *)0x0) {
    uVar6 = 0;
    goto LAB_01c70a5e;
  }
  local_58 = CONCAT44(local_58._4_4_,param_2);
  uVar8 = FUN_01ca6970();
  local_78 = DAT_027ebed0;
  if (DAT_027ebed0 != 0) {
    uVar8 = FUN_00d50b00();
  }
  local_70 = '\x01';
  pplVar7 = &local_50;
  uVar8 = FUN_01cacbe0(uVar8,&local_78);
  plVar1 = local_50;
  if (DAT_027cb558 == '\0') {
    iVar5 = ___cxa_guard_acquire();
    uVar8 = extraout_XMM0_Da_00;
    if (iVar5 != 0) {
      _DAT_027cb4a8 = FUN_00d4fe50();
      _DAT_027cb490 = "MUBeatSelection";
      _DAT_027cb498 = 0x20;
      _DAT_027cb4a0 = FUN_017063c0;
      _DAT_027cb4b0 = 0;
      uRam00000000027cb4b8 = 0;
      _DAT_027cb4c0 = 0;
      _DAT_027cb538 = 0;
      uRam00000000027cb540 = 0;
      _DAT_027cb548 = 0;
      DAT_027cb54a = 2;
      _DAT_027cb4c8 = 0;
      uRam00000000027cb4d0 = 0;
      _DAT_027cb4d8 = 0;
      uRam00000000027cb4e0 = 0;
      _DAT_027cb4e8 = 0;
      uRam00000000027cb4f0 = 0;
      _DAT_027cb4f8 = 0;
      uRam00000000027cb500 = 0;
      _DAT_027cb508 = 0;
      uRam00000000027cb510 = 0;
      _DAT_027cb518 = 0;
      uRam00000000027cb520 = 0;
      _DAT_027cb528 = 0;
      uRam00000000027cb530 = 0;
      DAT_027cb553 = 0;
      _DAT_027cb54b = 0;
      uVar8 = ___cxa_guard_release();
    }
  }
  if (plVar1 == (longlong *)0x0) {
LAB_01c70930:
    pplVar7 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar3 = FUN_00e85ea0();
    uVar8 = extraout_XMM0_Da;
    if (cVar3 == '\0') goto LAB_01c70930;
  }
  plVar1 = *pplVar7;
  if (*(char *)(pplVar7 + 1) == '\0') {
    if (plVar1 != (longlong *)0x0) {
      uVar8 = FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar7 + 1) = 0;
  }
  if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
    uVar8 = FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    uVar8 = FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    uVar8 = FUN_00d50b20();
  }
  if (plVar1 == (longlong *)0x0) {
    uVar6 = 0;
  }
  else {
    local_60 = '\0';
    local_68 = plVar1;
    uVar4 = FUN_016bf700(uVar8,0);
    uVar6 = (ulonglong)uVar4;
    if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (((byte)local_58 & (byte)uVar4) != 0) {
      plVar2 = *(longlong **)(unaff_RDI + 0x170);
      if (plVar2 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      local_58 = (**(code **)(*plVar2 + 0x388))(*(undefined4 *)(unaff_RDI + 0x254));
      FUN_00d50b20();
      local_90 = 0;
      uVar6 = CONCAT71((int7)((ulonglong)plVar2 >> 8),1);
      local_98 = plVar1;
      FUN_01c70ce0((int)local_58,&local_98);
    }
    FUN_00d50b20();
  }
  FUN_00d50b20();
LAB_01c70a5e:
  return uVar6 & 0xffffffff;
}


