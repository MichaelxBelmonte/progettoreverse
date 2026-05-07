// Function: FUN_01da28b0
// Address: 01da28b0
// Size: 1727 bytes
// Class: GNData
// String references:
//   "GNData"
//   "GNEvent"
//   "GNString"
//   "GNDictionary"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01da28b0(void)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  longlong **pplVar6;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong **pplVar7;
  undefined4 uVar8;
  longlong local_d0;
  char local_c8;
  longlong local_c0;
  char local_b8;
  longlong local_b0;
  char local_a8;
  longlong *local_a0;
  char local_98;
  longlong *local_50;
  undefined1 *local_48;
  longlong *local_40;
  char local_38;
  
  FUN_00d6f370();
  local_c0 = *unaff_RSI;
  local_b8 = '\0';
  local_b0 = 0;
  local_a8 = '\0';
  pplVar6 = &local_40;
  FUN_00d704d0(&local_b0,&local_c0);
  plVar5 = local_40;
  if ((DAT_026d0220 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
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
  if (plVar5 == (longlong *)0x0) {
LAB_01da2950:
    pplVar6 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar5 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 == '\0') goto LAB_01da2950;
  }
  local_50 = *pplVar6;
  if (*(char *)(pplVar6 + 1) == '\0') {
    if (local_50 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar6 + 1) = 0;
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_a8 != '\0') && (local_b0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_b8 != '\0') && (local_c0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_c8 != '\0') && (local_d0 != 0)) {
    FUN_00d50b20();
  }
  if (local_50 == (longlong *)0x0) goto LAB_01da3345;
  plVar5 = (longlong *)FUN_00e8fc40();
  FUN_0002cb50();
  uVar8 = (**(code **)(*plVar5 + 0x18))();
  local_a0 = local_50;
  local_98 = '\0';
  pplVar6 = &local_40;
  FUN_00e549d0(uVar8,&local_a0);
  plVar5 = local_40;
  if ((DAT_026fdd40 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
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
  if (plVar5 == (longlong *)0x0) {
LAB_01da2a63:
    pplVar6 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar5 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 == '\0') goto LAB_01da2a63;
  }
  plVar5 = *pplVar6;
  if (DAT_026fdd40 == '\0') {
    local_48 = &DAT_026fdd40;
    iVar4 = ___cxa_guard_acquire();
    if (iVar4 != 0) {
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
  }
  pplVar7 = (longlong **)&DAT_02802688;
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 != '\0') {
      if (DAT_026ec420 == '\0') {
        local_48 = &DAT_026ec420;
        iVar4 = ___cxa_guard_acquire();
        if (iVar4 != 0) {
          _DAT_027e3fc8 = FUN_00d4fe50();
          _DAT_027e3fb0 = "GNEvent";
          _DAT_027e3fb8 = 0x50;
          _DAT_027e3fc0 = FUN_001c75c0;
          _DAT_027e3fd0 = 0;
          uRam00000000027e3fd8 = 0;
          _DAT_027e3fe0 = 0;
          uRam00000000027e3fe8 = 0;
          _DAT_027e3ff0 = 0;
          uRam00000000027e3ff8 = 0;
          _DAT_027e4000 = 0;
          uRam00000000027e4008 = 0;
          _DAT_027e4010 = 0;
          uRam00000000027e4018 = 0;
          _DAT_027e4020 = 0;
          uRam00000000027e4028 = 0;
          _DAT_027e4030 = 0;
          uRam00000000027e4038 = 0;
          _DAT_027e4040 = 0;
          uRam00000000027e4048 = 0;
          _DAT_027e4050 = 0;
          uRam00000000027e4058 = 0;
          _DAT_027e4060 = 0;
          uRam00000000027e4068 = 0;
          _DAT_027e4070 = 0;
          ___cxa_guard_release();
        }
      }
      cVar3 = FUN_00e8db60();
      if (cVar3 != '\0') {
        if (DAT_026fd0c0 == '\0') {
          local_48 = &DAT_026fd0c0;
          iVar4 = ___cxa_guard_acquire();
          if (iVar4 != 0) {
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
        }
        cVar3 = FUN_00e8dc10();
        pplVar7 = pplVar6;
        if (cVar3 == '\0') {
          pplVar7 = (longlong **)&DAT_02802688;
        }
      }
    }
  }
  plVar5 = *pplVar7;
  if (plVar5 == (longlong *)0x0) {
    bVar2 = false;
    bVar1 = false;
    plVar5 = (longlong *)0x0;
  }
  else {
    if (*(char *)(pplVar7 + 1) == '\0') {
      FUN_00d50b00();
    }
    else {
      *(undefined1 *)(pplVar7 + 1) = 0;
    }
    bVar2 = true;
    bVar1 = true;
  }
  if ((local_38 != '\0') && (bVar1 = bVar2, local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_98 != '\0') && (local_a0 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar5 != (longlong *)0x0) {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    if (!bVar1) {
      FUN_00d50b00();
    }
    *unaff_RDI = (longlong)plVar5;
    *(undefined1 *)(unaff_RDI + 1) = 1;
    FUN_00d50b20();
    FUN_00d50b20();
    return;
  }
  FUN_00d50b20();
  FUN_00d50b20();
LAB_01da3345:
  plVar5 = (longlong *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar5 + 0x18))();
  *unaff_RDI = (longlong)plVar5;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}


