// Function: FUN_01d1dc70
// Address: 01d1dc70
// Size: 1147 bytes
// Class: GNString
// String references:
//   "%@"
//   "GNString"
//   "GNDictionary"


/* WARNING: Removing unreachable block (ram,0x01d1dce4) */
/* WARNING: Removing unreachable block (ram,0x01d1dcf0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_01d1dc70(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  int iVar2;
  ulonglong uVar3;
  longlong *unaff_RSI;
  longlong lVar4;
  longlong **pplVar5;
  longlong *plVar6;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar7;
  undefined4 extraout_XMM0_Da_00;
  longlong local_b0;
  char local_a8;
  longlong local_90;
  char local_88;
  longlong local_80;
  char local_78;
  longlong *local_60;
  undefined4 local_58;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  local_b0 = *param_2;
  local_a8 = '\0';
  cVar1 = FUN_01ccbbc0(param_1,&local_b0);
  if ((local_a8 != '\0') && (local_b0 != 0)) {
    FUN_00d50b20();
  }
  lVar4 = DAT_027e7c20;
  if (cVar1 == '\0') {
LAB_01d1de4e:
    uVar3 = 0;
    goto LAB_01d1de50;
  }
  param_2 = (longlong *)*param_2;
  if (DAT_027e7c20 != 0) {
    FUN_00d50b00();
  }
  local_90 = lVar4;
  local_88 = '\x01';
  cVar1 = (**(code **)(*param_2 + 0x50))();
  if (cVar1 == '\0') {
    uVar3 = CONCAT71((int7)((ulonglong)lVar4 >> 8),1);
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
    goto LAB_01d1de50;
  }
  lVar4 = *unaff_RSI;
  uVar7 = extraout_XMM0_Da;
  if ((local_88 != '\0') && (local_90 != 0)) {
    uVar7 = FUN_00d50b20();
  }
  if (lVar4 == 0) {
    uVar3 = 1;
    goto LAB_01d1de50;
  }
  lVar4 = *unaff_RSI;
  local_58 = 1;
  local_60 = &DAT_024c5048;
  local_48 = 0;
  if (lVar4 != 0) {
    uVar7 = FUN_00d50b00();
  }
  local_48 = '\x01';
  local_50 = lVar4;
  FUN_00d8cb40(uVar7,&local_60);
  lVar4 = local_40;
  if (local_40 == 0) {
    lVar4 = 0;
  }
  else if (local_38 == '\0') {
    FUN_00d50b00();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  local_60 = &DAT_024c5048;
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if (lVar4 == 0) goto LAB_01d1de4e;
  iVar2 = FUN_00d8c7a0();
  if (iVar2 == 0) {
LAB_01d1e320:
    uVar3 = 0;
  }
  else {
    FUN_00d8cbf0(extraout_XMM0_Da_00,6);
    local_80 = local_40;
    local_78 = 0;
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_78 = '\x01';
    FUN_00de3e90();
    plVar6 = local_60;
    if ((DAT_026fdd40 == '\0') && (iVar2 = ___cxa_guard_acquire(), iVar2 != 0)) {
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
    pplVar5 = (longlong **)&DAT_02802688;
    if (plVar6 != (longlong *)0x0) {
      (**(code **)(*plVar6 + 0x360))();
      cVar1 = FUN_00e85ea0();
      if (cVar1 != '\0') {
        if ((DAT_026fd0c0 == '\0') && (iVar2 = ___cxa_guard_acquire(), iVar2 != 0)) {
          _DAT_026d5e58 = FUN_00d4fe50();
          DAT_026d5e40 = "GNString";
          _DAT_026d5e48 = 0x40;
          _DAT_026d5e50 = FUN_0005d920;
          _DAT_026d5e60 = 0;
          uRam00000000026d5e68 = 0;
          _DAT_026d5e70 = 0;
          uRam00000000026d5e78 = 0;
          _DAT_026d5e80 = 0;
          uRam00000000026d5e88 = 0;
          _DAT_026d5e90 = 0;
          uRam00000000026d5e98 = 0;
          _DAT_026d5ea0 = 0;
          uRam00000000026d5ea8 = 0;
          _DAT_026d5eb0 = 0;
          uRam00000000026d5eb8 = 0;
          _DAT_026d5ec0 = 0;
          uRam00000000026d5ec8 = 0;
          _DAT_026d5ed0 = 0;
          uRam00000000026d5ed8 = 0;
          _DAT_026d5ee0 = 0;
          uRam00000000026d5ee8 = 0;
          _DAT_026d5ef0 = 0;
          uRam00000000026d5ef8 = 0;
          _DAT_026d5f00 = 0;
          ___cxa_guard_release();
        }
        cVar1 = FUN_00e8db60();
        pplVar5 = &local_60;
        if (cVar1 == '\0') {
          pplVar5 = (longlong **)&DAT_02802688;
        }
      }
    }
    plVar6 = *pplVar5;
    if (plVar6 == (longlong *)0x0) {
      plVar6 = (longlong *)0x0;
    }
    else if (*(char *)(pplVar5 + 1) == '\0') {
      FUN_00d50b00();
    }
    else {
      *(undefined1 *)(pplVar5 + 1) = 0;
    }
    if (((char)local_58 != '\0') && (local_60 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (plVar6 == (longlong *)0x0) goto LAB_01d1e320;
    uVar3 = CONCAT71((int7)((ulonglong)pplVar5 >> 8),1);
    FUN_00d50b20();
  }
  FUN_00d50b20();
LAB_01d1de50:
  return uVar3 & 0xffffffff;
}


