// Function: FUN_019ebb20
// Address: 019ebb20
// Size: 672 bytes
// Class: GNDictionary
// String references:
//   "GNDictionary"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_019ebb20(undefined4 param_1)

{
  bool bVar1;
  bool bVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong *plVar7;
  longlong **pplVar8;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  longlong *local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_31;
  
  plVar7 = (longlong *)*unaff_RSI;
  if ((DAT_026fdd40 == '\0') &&
     (iVar5 = ___cxa_guard_acquire(), param_1 = extraout_XMM0_Da_00, iVar5 != 0)) {
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
    param_1 = ___cxa_guard_release();
  }
  if (plVar7 == (longlong *)0x0) {
LAB_019ebb6c:
    unaff_RSI = &DAT_02802688;
  }
  else {
    (**(code **)(*plVar7 + 0x360))();
    cVar4 = FUN_00e85ea0();
    param_1 = extraout_XMM0_Da;
    if (cVar4 == '\0') goto LAB_019ebb6c;
  }
  local_40 = *unaff_RSI;
  if (local_40 == 0) {
    return;
  }
  local_31 = (char)unaff_RSI[1];
  if (local_31 != '\0') {
    param_1 = FUN_00d50b00();
  }
  lVar3 = DAT_026dc290;
  if (DAT_026dc290 != 0) {
    param_1 = FUN_00d50b00();
  }
  local_50 = lVar3;
  local_48 = '\x01';
  pplVar8 = &local_60;
  FUN_000175c0(param_1,&local_50);
  plVar7 = local_60;
  FUN_00053ac0();
  if (plVar7 != (longlong *)0x0) {
    (**(code **)(*plVar7 + 0x360))();
    cVar4 = FUN_00e85ea0();
    if (cVar4 != '\0') goto LAB_019ebbfc;
  }
  pplVar8 = (longlong **)&DAT_02802688;
LAB_019ebbfc:
  plVar7 = *pplVar8;
  if (plVar7 == (longlong *)0x0) {
    bVar2 = true;
    bVar1 = true;
    plVar7 = (longlong *)0x0;
  }
  else {
    if (*(char *)(pplVar8 + 1) == '\0') {
      FUN_00d50b00();
    }
    else {
      *(undefined1 *)(pplVar8 + 1) = 0;
    }
    bVar2 = false;
    bVar1 = false;
  }
  if ((local_58 != '\0') && (bVar1 = bVar2, local_60 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if (plVar7 != (longlong *)0x0) {
    iVar5 = (**(code **)(*unaff_RDI + 0xd08))();
    iVar6 = FUN_00d45870();
    if (iVar6 == 0) {
      (**(code **)(*unaff_RDI + 0xd00))();
    }
    else if (iVar6 == 1) {
      (**(code **)(*unaff_RDI + 0xd00))();
    }
    else if (iVar6 == 2) {
      (**(code **)(*unaff_RDI + 0xd00))();
    }
    iVar6 = (**(code **)(*unaff_RDI + 0xd08))();
    if (iVar5 != iVar6) {
      (**(code **)("/System/Library/Frameworks/CoreGraphics.framework/Versions/A/CoreGraphics" +
                  *unaff_RDI + 0x40))();
    }
    if (!bVar1) {
      FUN_00d50b20();
    }
  }
  if (local_31 != '\0') {
    FUN_00d50b20();
  }
  return;
}


