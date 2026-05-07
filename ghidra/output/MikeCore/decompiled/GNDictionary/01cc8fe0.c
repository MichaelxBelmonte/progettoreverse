// Function: FUN_01cc8fe0
// Address: 01cc8fe0
// Size: 656 bytes
// Class: GNDictionary
// String references:
//   "GNDictionary"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01cc8fe0(void)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar7;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong *local_40;
  char local_38;
  longlong *local_30;
  
  lVar3 = DAT_027edfb8;
  plVar6 = (longlong *)*unaff_RSI;
  if (DAT_027edfb8 != 0) {
    FUN_00d50b00();
  }
  cVar4 = (**(code **)(*plVar6 + 0x590))();
  uVar7 = extraout_XMM0_Da;
  if (lVar3 != 0) {
    uVar7 = FUN_00d50b20();
  }
  lVar3 = DAT_027edfb8;
  if (cVar4 != '\0') {
    plVar6 = (longlong *)*unaff_RSI;
    if (DAT_027edfb8 != 0) {
      uVar7 = FUN_00d50b00();
    }
    local_60 = lVar3;
    local_58 = '\x01';
    (**(code **)(*plVar6 + 0x578))(uVar7,&local_60);
    plVar6 = local_40;
    local_30 = local_40;
    if (local_38 == '\0') {
      if (local_40 == (longlong *)0x0) {
        local_30 = (longlong *)0x0;
        plVar6 = (longlong *)0x0;
      }
      else {
        FUN_00d50b00();
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    else {
      local_38 = '\0';
    }
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if ((DAT_026fdd40 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
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
      ___cxa_guard_release();
    }
    plVar1 = local_30;
    plVar2 = DAT_02802688;
    if (plVar6 != (longlong *)0x0) {
      (**(code **)(*plVar6 + 0x360))();
      cVar4 = FUN_00e85ea0();
      plVar1 = local_30;
      plVar2 = DAT_02802688;
      if (cVar4 != '\0') {
        plVar2 = local_30;
      }
    }
    local_30 = plVar1;
    if ((plVar2 != (longlong *)0x0) && (plVar6 = *(longlong **)(unaff_RDI + 0x38), plVar6 != plVar1)
       ) {
      if (plVar1 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      *(longlong **)(unaff_RDI + 0x38) = plVar1;
      if (plVar6 != (longlong *)0x0) {
        FUN_00d50b20();
      }
    }
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  local_50 = *unaff_RSI;
  local_48 = '\0';
  FUN_00d61ea0();
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  return;
}


