// Function: FUN_01ee4a10
// Address: 01ee4a10
// Size: 1396 bytes
// Class: GNData
// String references:
//   "GNData"
//   "GNDictionary"


/* WARNING: Removing unreachable block (ram,0x01ee4ab1) */
/* WARNING: Removing unreachable block (ram,0x01ee4abd) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01ee4a10(void)

{
  bool bVar1;
  bool bVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  longlong **pplVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong unaff_RDI;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 uVar10;
  longlong local_e0;
  char local_d8;
  longlong local_d0;
  char local_c8;
  longlong local_b0;
  char local_a8;
  longlong *local_a0;
  char local_98;
  longlong *local_90;
  char local_88;
  longlong *local_80;
  char local_78;
  longlong *local_70;
  char local_68;
  undefined8 local_60;
  longlong *local_58;
  longlong *local_50;
  char local_48;
  longlong *local_40;
  char local_38;
  
  local_48 = '\0';
  local_50 = (longlong *)0x0;
  uVar6 = FUN_00ca94c0();
  plVar9 = local_40;
  uVar10 = extraout_XMM0_Da;
  if (local_40 == (longlong *)0x0) {
    bVar1 = true;
    plVar9 = (longlong *)0x0;
    local_60 = 0;
  }
  else {
    if (local_38 == '\0') {
      uVar6 = FUN_00d50b00();
      bVar1 = false;
      local_60 = CONCAT71((int7)((ulonglong)uVar6 >> 8),1);
      uVar10 = extraout_XMM0_Da_00;
      if ((local_38 == '\0') || (local_40 == (longlong *)0x0)) goto LAB_01ee4aa4;
      uVar10 = FUN_00d50b20();
    }
    else {
      local_38 = '\0';
      local_60 = CONCAT71((int7)((ulonglong)uVar6 >> 8),1);
    }
    bVar1 = false;
  }
LAB_01ee4aa4:
  lVar3 = DAT_027648d0;
  local_58 = plVar9;
  if (DAT_027648d0 != 0) {
    uVar10 = FUN_00d50b00();
  }
  local_b0 = lVar3;
  local_a8 = '\x01';
  FUN_000175c0(uVar10,&local_b0);
  plVar9 = local_40;
  if (local_40 == (longlong *)0x0) {
    plVar9 = (longlong *)0x0;
  }
  else if (local_38 == '\0') {
    FUN_00d50b00();
    local_50 = plVar9;
    local_48 = '\x01';
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_50 = local_40;
    local_48 = '\x01';
    local_38 = '\0';
  }
  if ((local_a8 != '\0') && (local_b0 != 0)) {
    FUN_00d50b20();
  }
  if ((DAT_026d0220 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
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
  if (plVar9 == (longlong *)0x0) {
LAB_01ee4b8d:
    pplVar7 = &DAT_02802688;
    plVar9 = DAT_02802688;
    if (DAT_02802688 != (longlong *)0x0) goto LAB_01ee4ba0;
LAB_01ee4c9e:
    plVar9 = local_50;
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
    if (plVar9 != (longlong *)0x0) {
      (**(code **)(*plVar9 + 0x360))();
      cVar4 = FUN_00e85ea0();
      if (cVar4 == '\0') goto LAB_01ee4cd8;
      if (local_50 != (longlong *)0x0) goto LAB_01ee4ce9;
LAB_01ee4e07:
      bVar2 = true;
      plVar8 = (longlong *)0x0;
      goto joined_r0x01ee4e10;
    }
LAB_01ee4cd8:
    if (DAT_02802688 == (longlong *)0x0) goto LAB_01ee4e07;
LAB_01ee4ce9:
    plVar8 = (longlong *)FUN_00e8fc40();
    FUN_0004b090();
    (**(code **)(*plVar8 + 0x18))();
    local_68 = 0;
    (**(code **)(*(longlong *)(unaff_RDI + 0x38) + 0x10))();
    FUN_00d50b00();
    local_68 = '\x01';
    local_70 = (longlong *)(unaff_RDI + 0x38);
    uVar10 = FUN_00d1fc70();
    if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
      (**(code **)(*local_70 + 0x10))();
      uVar10 = FUN_00d50b20();
    }
    local_90 = local_50;
    local_88 = '\0';
    FUN_00d18390(uVar10,&local_90);
    if ((local_c8 != '\0') && (local_d0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_88 != '\0') && (local_90 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    (**(code **)(*plVar9 + 0x360))();
    cVar4 = FUN_00e85ea0();
    if (cVar4 == '\0') goto LAB_01ee4b8d;
    pplVar7 = &local_50;
    plVar9 = local_50;
    if (local_50 == (longlong *)0x0) goto LAB_01ee4c9e;
LAB_01ee4ba0:
    cVar4 = *(char *)(pplVar7 + 1);
    if (cVar4 != '\0') {
      FUN_00d50b00();
    }
    plVar8 = (longlong *)FUN_00e8fc40();
    FUN_0004b090();
    (**(code **)(*plVar8 + 0x18))();
    local_78 = 0;
    (**(code **)(*(longlong *)(unaff_RDI + 0x38) + 0x10))();
    FUN_00d50b00();
    local_78 = '\x01';
    local_80 = (longlong *)(unaff_RDI + 0x38);
    uVar10 = FUN_00d1fc70();
    if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
      (**(code **)(*local_80 + 0x10))();
      uVar10 = FUN_00d50b20();
    }
    local_98 = '\0';
    local_a0 = plVar9;
    (**(code **)(*plVar8 + 0x5f8))(uVar10,&local_a0);
    if ((local_d8 != '\0') && (local_e0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_98 != '\0') && (local_a0 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (cVar4 != '\0') {
      FUN_00d50b20();
    }
  }
  bVar2 = false;
joined_r0x01ee4e10:
  if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (!bVar1 && local_58 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (!bVar2 && plVar8 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}


