// Function: FUN_00c1ea10
// Address: 00c1ea10
// Size: 1808 bytes
// Class: GNList
// String references:
//   "GNList"
//   "GNData"
//   "GNString"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00c1ea10(void *param_1,undefined8 param_2,size_t param_3)

{
  longlong *plVar1;
  float *pfVar2;
  longlong *plVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  longlong **pplVar7;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar8;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  longlong *local_f0;
  undefined1 local_e8;
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
  longlong *local_70;
  longlong local_68;
  char local_60;
  longlong *local_58;
  char local_50;
  undefined1 *local_48;
  longlong *local_40;
  char local_38;
  
  local_e0 = *unaff_RSI;
  local_d8 = '\0';
  FUN_00d61ea0();
  if ((local_d8 != '\0') && (local_e0 != 0)) {
    FUN_00d50b20();
  }
  lVar4 = DAT_0276c9d8;
  plVar1 = (longlong *)*unaff_RSI;
  if (DAT_0276c9d8 != 0) {
    FUN_00d50b00();
  }
  local_d0 = lVar4;
  local_c8 = '\x01';
  iVar6 = (**(code **)(*plVar1 + 0x598))();
  if ((local_c8 != '\0') && (local_d0 != 0)) {
    FUN_00d50b20();
  }
  lVar4 = DAT_0276c9d8;
  if (iVar6 == 2) {
    return;
  }
  plVar1 = (longlong *)*unaff_RSI;
  if (DAT_0276c9d8 != 0) {
    FUN_00d50b00();
  }
  local_c0 = lVar4;
  local_b8 = '\x01';
  iVar6 = (**(code **)(*plVar1 + 0x598))();
  if ((local_b8 != '\0') && (local_c0 != 0)) {
    FUN_00d50b20();
  }
  if (1 < iVar6) {
    return;
  }
  pfVar2 = *(float **)(*(longlong *)(unaff_RDI + 0x98) + 0x10);
  *pfVar2 = *pfVar2 + DAT_02390d34;
  *(undefined8 *)(pfVar2 + 7) = *(undefined8 *)(pfVar2 + 2);
  *(undefined8 *)(pfVar2 + 9) = *(undefined8 *)(pfVar2 + 4);
  *(undefined8 *)(pfVar2 + 0xb) = *(undefined8 *)(pfVar2 + 6);
  *(undefined8 *)(pfVar2 + 0xd) = *(undefined8 *)(pfVar2 + 8);
  *(undefined8 *)(pfVar2 + 0xf) = *(undefined8 *)(pfVar2 + 10);
  *(undefined8 *)(pfVar2 + 0x11) = *(undefined8 *)(pfVar2 + 0xc);
  _memset_pattern16(param_1,&MACH_HEADER.sizeofcmds,param_3);
  local_b0 = DAT_0276c9e0;
  plVar1 = (longlong *)*unaff_RSI;
  if (DAT_0276c9e0 != 0) {
    FUN_00d50b00();
  }
  local_a8 = '\x01';
  cVar5 = (**(code **)(*plVar1 + 0x590))();
  uVar8 = extraout_XMM0_Da;
  if ((local_a8 != '\0') && (local_b0 != 0)) {
    uVar8 = FUN_00d50b20();
  }
  lVar4 = DAT_0276c9e8;
  if (cVar5 == '\0') {
    return;
  }
  plVar1 = (longlong *)*unaff_RSI;
  if (DAT_0276c9e8 != 0) {
    uVar8 = FUN_00d50b00();
  }
  local_a0 = lVar4;
  local_98 = '\x01';
  pplVar7 = &local_40;
  uVar8 = (**(code **)(*plVar1 + 0x578))(uVar8,&local_a0);
  plVar1 = local_40;
  if ((DAT_026fd0c0 == '\0') &&
     (iVar6 = ___cxa_guard_acquire(), uVar8 = extraout_XMM0_Da_01, iVar6 != 0)) {
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
    uVar8 = ___cxa_guard_release();
  }
  if (plVar1 == (longlong *)0x0) {
LAB_00c1ec3c:
    pplVar7 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar5 = FUN_00e85ea0();
    uVar8 = extraout_XMM0_Da_00;
    if (cVar5 == '\0') goto LAB_00c1ec3c;
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
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    uVar8 = FUN_00d50b20();
  }
  local_70 = plVar1;
  if ((local_98 != '\0') && (local_a0 != 0)) {
    uVar8 = FUN_00d50b20();
  }
  lVar4 = DAT_0276c9e0;
  plVar1 = (longlong *)*unaff_RSI;
  if (DAT_0276c9e0 != 0) {
    uVar8 = FUN_00d50b00();
  }
  local_90 = lVar4;
  local_88 = '\x01';
  (**(code **)(*plVar1 + 0x578))(uVar8,&local_90);
  plVar1 = local_40;
  if (DAT_027048b0 == '\0') {
    local_48 = &DAT_027048b0;
    iVar6 = ___cxa_guard_acquire();
    if (iVar6 != 0) {
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
  }
  pplVar7 = (longlong **)&DAT_02802688;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x360))();
    cVar5 = FUN_00e85ea0();
    if (cVar5 != '\0') {
      if (DAT_026d0220 == '\0') {
        local_48 = &DAT_026d0220;
        iVar6 = ___cxa_guard_acquire();
        if (iVar6 != 0) {
          _DAT_02789148 = FUN_00d4fe50();
          DAT_02789130 = "GNData";
          _DAT_02789138 = 0x28;
          _DAT_02789140 = FUN_000378a0;
          _DAT_02789150 = 0;
          uRam0000000002789158 = 0;
          _DAT_02789160 = 0;
          uRam0000000002789168 = 0;
          _DAT_02789170 = 0;
          uRam0000000002789178 = 0;
          _DAT_02789180 = 0;
          uRam0000000002789188 = 0;
          _DAT_02789190 = 0;
          uRam0000000002789198 = 0;
          _DAT_027891a0 = 0;
          uRam00000000027891a8 = 0;
          _DAT_027891b0 = 0;
          uRam00000000027891b8 = 0;
          _DAT_027891c0 = 0;
          uRam00000000027891c8 = 0;
          _DAT_027891d0 = 0;
          uRam00000000027891d8 = 0;
          _DAT_027891e0 = 0;
          uRam00000000027891e8 = 0;
          _DAT_027891f0 = 0;
          ___cxa_guard_release();
        }
      }
      cVar5 = FUN_00e8da30();
      pplVar7 = &local_40;
      if (cVar5 == '\0') {
        pplVar7 = (longlong **)&DAT_02802688;
      }
    }
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
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  lVar4 = DAT_0276c9f0;
  plVar3 = (longlong *)*unaff_RSI;
  if (DAT_0276c9f0 != 0) {
    FUN_00d50b00();
  }
  local_80 = lVar4;
  local_78 = '\x01';
  local_48 = (undefined1 *)(**(code **)(*plVar3 + 0x540))();
  plVar3 = local_70;
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  if (((plVar3 == (longlong *)0x0) || (plVar1 == (longlong *)0x0)) ||
     (((double)local_48 == 0.0 && (!NAN((double)local_48))))) {
    if (plVar1 == (longlong *)0x0) goto LAB_00c1eebf;
  }
  else {
    lVar4 = **(longlong **)(*(longlong *)(unaff_RDI + 200) + 0x10);
    local_60 = 0;
    if (lVar4 != 0) {
      FUN_00d50b00();
    }
    local_60 = '\x01';
    local_e8 = 0;
    local_f0 = plVar1;
    local_68 = lVar4;
    uVar8 = FUN_00c1f4b0((int)local_48,&local_f0);
    local_50 = 0;
    if ((local_38 == '\0') && (local_40 != (longlong *)0x0)) {
      uVar8 = FUN_00d50b00();
    }
    local_58 = local_40;
    local_50 = '\x01';
    FUN_00c1f400(uVar8,&local_58);
    if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
  }
  FUN_00d50b20();
LAB_00c1eebf:
  if (plVar3 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}


