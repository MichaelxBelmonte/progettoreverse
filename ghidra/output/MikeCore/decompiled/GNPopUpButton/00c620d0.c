// Function: FUN_00c620d0
// Address: 00c620d0
// Size: 792 bytes
// Class: GNPopUpButton
// String references:
//   "GNPopUpButton"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_00c620d0(undefined8 param_1,char param_2)

{
  longlong lVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  longlong **pplVar5;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  ulonglong uVar6;
  longlong *plVar7;
  undefined4 uVar8;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  longlong local_98;
  char local_90;
  longlong local_78;
  char local_70;
  longlong local_68;
  char local_60;
  longlong *local_58;
  longlong *local_50;
  char local_48;
  longlong *local_40;
  char local_38;
  
  pplVar5 = &local_40;
  uVar8 = FUN_01ccad60();
  plVar7 = local_40;
  if ((DAT_027f94e0 == '\0') &&
     (iVar4 = ___cxa_guard_acquire(), uVar8 = extraout_XMM0_Da_02, iVar4 != 0)) {
    _DAT_026efe08 = FUN_000f5df0();
    _DAT_026efdf0 = "GNPopUpButton";
    _DAT_026efdf8 = 0x240;
    _DAT_026efe00 = FUN_001e3bf0;
    _DAT_026efe10 = 0;
    uRam00000000026efe18 = 0;
    _DAT_026efe20 = 0;
    uRam00000000026efe28 = 0;
    _DAT_026efe30 = 0;
    uRam00000000026efe38 = 0;
    _DAT_026efe40 = 0;
    uRam00000000026efe48 = 0;
    _DAT_026efe50 = 0;
    uRam00000000026efe58 = 0;
    _DAT_026efe60 = 0;
    uRam00000000026efe68 = 0;
    _DAT_026efe70 = 0;
    uRam00000000026efe78 = 0;
    _DAT_026efe80 = 0;
    uRam00000000026efe88 = 0;
    _DAT_026efe90 = 0;
    uRam00000000026efe98 = 0;
    _DAT_026efea0 = 0;
    uRam00000000026efea8 = 0;
    _DAT_026efeb0 = 0;
    uVar8 = ___cxa_guard_release();
  }
  if (plVar7 == (longlong *)0x0) {
LAB_00c6212f:
    pplVar5 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar7 + 0x360))();
    cVar2 = FUN_00e85ea0();
    uVar8 = extraout_XMM0_Da;
    if (cVar2 == '\0') goto LAB_00c6212f;
  }
  plVar7 = *pplVar5;
  if (*(char *)(pplVar5 + 1) == '\0') {
    if (plVar7 != (longlong *)0x0) {
      uVar8 = FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar5 + 1) = 0;
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    uVar8 = FUN_00d50b20();
  }
  if (plVar7 == (longlong *)0x0) {
LAB_00c62243:
    local_68 = *unaff_RSI;
    local_60 = '\0';
    uVar3 = FUN_01ec81d0(uVar8,param_2);
    uVar6 = (ulonglong)uVar3;
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if (plVar7 == (longlong *)0x0) goto LAB_00c62283;
  }
  else {
    local_58 = plVar7;
    FUN_01cae990();
    plVar7 = local_40;
    lVar1 = DAT_027fe668;
    if (DAT_027fe668 != 0) {
      FUN_00d50b00();
    }
    cVar2 = (**(code **)(*plVar7 + 0x50))();
    plVar7 = local_58;
    uVar8 = extraout_XMM0_Da_00;
    if (lVar1 != 0) {
      uVar8 = FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      uVar8 = FUN_00d50b20();
    }
    if (cVar2 == '\0') goto LAB_00c62243;
    uVar6 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
    if (param_2 != '\0') {
      uVar8 = FUN_01d70da0();
      FUN_01d701d0(extraout_XMM0_Da_01,uVar8);
      FUN_01d654a0();
      uVar8 = FUN_00d46530();
      local_50 = local_40;
      local_48 = 0;
      local_78 = DAT_027e7c20;
      if (local_38 == '\0') {
        if (local_40 != (longlong *)0x0) {
          uVar8 = FUN_00d50b00();
          local_78 = DAT_027e7c20;
        }
      }
      else {
        local_38 = '\0';
      }
      local_48 = '\x01';
      DAT_027e7c20 = local_78;
      if (local_78 != 0) {
        local_48 = '\x01';
        uVar8 = FUN_00d50b00();
      }
      local_70 = '\x01';
      (**(code **)(*unaff_RDI + 0x4d0))(uVar8,&local_78);
      if ((local_70 != '\0') && (local_78 != 0)) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_90 != '\0') && (local_98 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  FUN_00d50b20();
LAB_00c62283:
  return uVar6 & 0xffffffff;
}


