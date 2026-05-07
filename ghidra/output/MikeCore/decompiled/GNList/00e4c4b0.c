// Function: FUN_00e4c4b0
// Address: 00e4c4b0
// Size: 1109 bytes
// Class: GNList
// String references:
//   "GNList"
//   "\t"
//   "null"
//   "GNString"
//   "GNDictionary"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_00e4c4b0(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  char *pcVar5;
  longlong unaff_RBX;
  ulonglong uVar6;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  longlong local_58;
  char local_50 [8];
  longlong local_48;
  char local_40;
  char local_38 [8];
  
  if (*unaff_RSI == 0) {
    if ((-1 < param_2) && ((char)unaff_RDI[3] != '\0')) {
      for (; param_2 != 0; param_2 = param_2 + -1) {
        unaff_RBX = unaff_RDI[2];
        uVar2 = FUN_00e7dde0();
        FUN_00d8db70(extraout_XMM0_Da_03,uVar2);
      }
    }
    FUN_00d8db40();
    uVar6 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
    goto LAB_00e4c6be;
  }
  FUN_00d4efa0();
  pcVar5 = local_38;
  if (local_50[0] != '\0') {
    pcVar5 = local_50;
  }
  local_38[0] = local_50[0];
  *pcVar5 = '\0';
  if ((local_50[0] != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  if ((DAT_026fd0c0 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
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
  lVar4 = FUN_00e86210();
  if (lVar4 == local_58) {
    uVar1 = FUN_00e4ca00(extraout_XMM0_Da,param_2);
LAB_00e4c6a9:
    uVar6 = (ulonglong)uVar1;
  }
  else {
    FUN_00053ac0();
    lVar4 = FUN_00e86210();
    if (lVar4 == local_58) {
      uVar1 = FUN_00e4cc70(extraout_XMM0_Da_00,param_2);
      goto LAB_00e4c6a9;
    }
    if ((DAT_026fdd40 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
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
    lVar4 = FUN_00e86210();
    if (lVar4 == local_58) {
      uVar1 = FUN_00e4cf10(extraout_XMM0_Da_01,param_2,param_3,param_4,*unaff_RSI,0);
      uVar6 = (ulonglong)uVar1;
    }
    else {
      if ((DAT_027048b0 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
        _DAT_026cd478 = FUN_00d4fe50();
        DAT_026cd460 = "GNList";
        _DAT_026cd468 = 0x20;
        _DAT_026cd470 = FUN_00018210;
        _DAT_026cd480 = 0;
        uRam00000000026cd488 = 0;
        _DAT_026cd490 = 0;
        _DAT_026cd508 = 0;
        uRam00000000026cd510 = 0;
        _DAT_026cd518 = 0;
        DAT_026cd51a = 6;
        _DAT_026cd498 = 0;
        uRam00000000026cd4a0 = 0;
        _DAT_026cd4a8 = 0;
        uRam00000000026cd4b0 = 0;
        _DAT_026cd4b8 = 0;
        uRam00000000026cd4c0 = 0;
        _DAT_026cd4c8 = 0;
        uRam00000000026cd4d0 = 0;
        _DAT_026cd4d8 = 0;
        uRam00000000026cd4e0 = 0;
        _DAT_026cd4e8 = 0;
        uRam00000000026cd4f0 = 0;
        _DAT_026cd4f8 = 0;
        uRam00000000026cd500 = 0;
        DAT_026cd523 = 0;
        _DAT_026cd51b = 0;
        ___cxa_guard_release();
      }
      lVar4 = FUN_00e86210();
      if (lVar4 == local_58) {
        uVar1 = FUN_00e4d310(extraout_XMM0_Da_02,param_2);
        goto LAB_00e4c6a9;
      }
      local_48 = *unaff_RSI;
      local_40 = '\0';
      uVar1 = (**(code **)(*unaff_RDI + 0x388))(extraout_XMM0_Da_02,param_2);
      uVar6 = (ulonglong)uVar1;
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  if ((local_38[0] != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
LAB_00e4c6be:
  return uVar6 & 0xffffffff;
}


