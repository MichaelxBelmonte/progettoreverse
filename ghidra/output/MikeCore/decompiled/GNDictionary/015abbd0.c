// Function: FUN_015abbd0
// Address: 015abbd0
// Size: 607 bytes
// Class: GNDictionary
// String references:
//   "GNDictionary"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_015abbd0(undefined8 param_1,longlong *param_2)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  longlong **pplVar6;
  undefined4 uVar7;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  longlong *local_90;
  undefined1 local_88;
  longlong local_80;
  char local_78;
  longlong *local_60;
  char local_58;
  longlong *local_40;
  char local_38;
  
  plVar5 = (longlong *)FUN_00e8fc40();
  FUN_000649c0();
  (**(code **)(*plVar5 + 0x18))();
  local_58 = 0;
  (**(code **)(*(longlong *)(unaff_RSI + 0x10) + 0x10))();
  FUN_00d50b00();
  local_58 = '\x01';
  local_60 = (longlong *)(unaff_RSI + 0x10);
  uVar7 = FUN_00db1a90();
  if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
    (**(code **)(*local_60 + 0x10))();
    uVar7 = FUN_00d50b20();
  }
  local_80 = *param_2;
  local_78 = '\0';
  pplVar6 = &local_40;
  uVar7 = (**(code **)(*plVar5 + 0x610))(uVar7,&local_80);
  plVar5 = local_40;
  if ((DAT_026fdd40 == '\0') &&
     (iVar4 = ___cxa_guard_acquire(), uVar7 = extraout_XMM0_Da_00, iVar4 != 0)) {
    _DAT_026cd0e8 = FUN_00d4fe50();
    DAT_026cd0d0 = "GNDictionary";
    _DAT_026cd0d8 = 0x28;
    _DAT_026cd0e0 = FUN_00022d20;
    _DAT_026cd0f0 = 0;
    uRam00000000026cd0f8 = 0;
    _DAT_026cd100 = 0;
    _DAT_026cd178 = 0;
    uRam00000000026cd180 = 0;
    _DAT_026cd188 = 0;
    DAT_026cd18a = 6;
    _DAT_026cd108 = 0;
    uRam00000000026cd110 = 0;
    _DAT_026cd118 = 0;
    uRam00000000026cd120 = 0;
    _DAT_026cd128 = 0;
    uRam00000000026cd130 = 0;
    _DAT_026cd138 = 0;
    uRam00000000026cd140 = 0;
    _DAT_026cd148 = 0;
    uRam00000000026cd150 = 0;
    _DAT_026cd158 = 0;
    uRam00000000026cd160 = 0;
    _DAT_026cd168 = 0;
    uRam00000000026cd170 = 0;
    DAT_026cd193 = 0;
    _DAT_026cd18b = 0;
    uVar7 = ___cxa_guard_release();
  }
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x360))();
    cVar3 = FUN_00e85ea0();
    uVar7 = extraout_XMM0_Da;
    if (cVar3 != '\0') goto LAB_015abcb4;
  }
  pplVar6 = (longlong **)&DAT_02802688;
LAB_015abcb4:
  plVar5 = *pplVar6;
  if (plVar5 == (longlong *)0x0) {
    bVar2 = true;
    bVar1 = true;
    plVar5 = (longlong *)0x0;
  }
  else {
    if (*(char *)(pplVar6 + 1) == '\0') {
      uVar7 = FUN_00d50b00();
    }
    else {
      *(undefined1 *)(pplVar6 + 1) = 0;
    }
    bVar2 = false;
    bVar1 = false;
  }
  if ((local_38 != '\0') && (bVar1 = bVar2, local_40 != (longlong *)0x0)) {
    uVar7 = FUN_00d50b20();
  }
  if ((local_78 != '\0') && (local_80 != 0)) {
    uVar7 = FUN_00d50b20();
  }
  if (plVar5 == (longlong *)0x0) {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
  }
  else {
    local_88 = 0;
    local_90 = plVar5;
    FUN_0159aa90(uVar7,&local_90);
    if (!bVar1) {
      FUN_00d50b20();
    }
  }
  FUN_00d50b20();
  return;
}


