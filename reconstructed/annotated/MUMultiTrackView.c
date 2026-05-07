// ===== MUMultiTrackView — Annotated small functions =====
// 13 readable functions
// Known properties: 2
//   MUFollowCursorState _followCursorState
//   MUMultiTrackDisplayMode _displayMode

// ==================================================
// @00652d70 (2650 bytes) — calculation
// Known properties of MUMultiTrackView:
// _followCursorState, _displayMode

{
  code *pcVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  char cVar5;
  byte bVar6;
  uint uVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  longlong *this;
  ulonglong uVar10;
  bool bVar11;
  undefined8 uVar12;
  double dVar13;
  undefined8 *local_c0;
  char local_b8;
  undefined8 *local_b0;
  char local_a8;
  undefined8 *local_a0;
  char local_98;
  undefined8 *local_90;
  char local_88;
  longlong local_80;
  char local_78;
  undefined8 *local_70;
  ulonglong local_68;
  undefined8 *local_60;
  longlong *local_58;
  ulonglong local_50;
  char local_48;
  longlong *local_40;
  char local_38;
  
  (**(code **)(*this + 0x5d8))();
  plVar3 = local_40;
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar3 != (longlong *)0x0) {
    FUN_00637870();
    plVar3 = local_40;
    if ((((local_38 == '\0') && (local_40 != (longlong *)0x0)) && (FUN_00d50b00(), local_38 != '\0')
        ) && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    local_58 = plVar3;
    puVar8 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar8 = &DAT_02572358;
    pcVar1 = DAT_02572370;
    (*DAT_02572370)();
    local_60 = puVar8;
    puVar8 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar8 = &DAT_02572358;
    (*pcVar1)();
    uVar10 = DAT_026f6fd0;
    local_70 = puVar8;
    if (DAT_026f6fd0 != 0) {
      FUN_00d50b00();
    }
    local_68 = uVar10;
    FUN_00e7d6f0();
    uVar12 = FUN_0071a120();
    if (((local_38 == '\0') && (local_40 != (longlong *)0x0)) &&
       ((uVar12 = FUN_00d50b00(), local_38 != '\0' && (local_40 != (longlong *)0x0)))) {
      uVar12 = FUN_00d50b20();
    }
    local_50 = uVar10;
    local_48 = '\0';
    FUN_000175c0(uVar12,&local_50);
    plVar3 = local_40;
    if (local_38 == '\0') {
      if (((local_40 != (longlong *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
         (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38 = '\0';
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if (plVar3 != (longlong *)0x0) {
      local_38 = '\0';
      local_40 = plVar3;
      uVar7 = FUN_00c70bc0();
      uVar10 = (ulonglong)uVar7;
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    FUN_00d50b20();
    if (local_68 != 0) {
      FUN_00d50b20();
    }
    if (((plVar3 != (longlong *)0x0 & (byte)uVar10) == 0) && (cVar5 = FUN_00645730(), cVar5 != '\0')
       ) {
      FUN_00645a20();
    }
    uVar10 = DAT_026e1800;
    if (DAT_026e1800 != 0) {
      FUN_00d50b00();
    }
    dVar13 = (double)FUN_00e7d6f0();
    uVar9 = (ulonglong)(dVar13 * DAT_023907c0);
    dVar13 = dVar13 * DAT_023907c0 - _DAT_023907c8;
    uVar12 = FUN_0071a120();
    if ((((local_38 == '\0') && (local_40 != (longlong *)0x0)) &&
        (uVar12 = FUN_00d50b00(), local_38 != '\0')) && (local_40 != (longlong *)0x0)) {
      uVar12 = FUN_00d50b20();
    }
    bVar6 = (byte)(((longlong)dVar13 & (longlong)uVar9 >> 0x3f | uVar9) / 3);
    local_50 = uVar10;
    local_48 = '\0';
    FUN_000175c0(uVar12,&local_50);
    plVar3 = local_40;
    if (local_38 == '\0') {
      if (((local_40 != (longlong *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
         (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38 = '\0';
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if (plVar3 != (longlong *)0x0) {
      local_38 = '\0';
      local_40 = plVar3;
      bVar6 = FUN_00c70bc0();
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    FUN_00d50b20();
    if (uVar10 != 0) {
      FUN_00d50b20();
    }
    if ((plVar3 != (longlong *)0x0 & bVar6) == 0) {
      cVar5 = FUN_006e2020();
      if (cVar5 != '\0') {
        FUN_006470d0();
        cVar5 = FUN_0063f180();
        if (cVar5 == '\0') {
          FUN_00642f60();
        }
      }
      plVar3 = DAT_027259d0;
      if (DAT_027259d0 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      local_40 = plVar3;
      local_38 = '\0';
      FUN_00d21140();
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar3 != (longlong *)0x0) {
        FUN_00d50b20();
      }
    }
    uVar10 = DAT_02708e90;
    if (DAT_02708e90 != 0) {
      FUN_00d50b00();
    }
    dVar13 = (double)FUN_00e7d6f0();
    uVar9 = (ulonglong)(dVar13 * DAT_023907c0);
    dVar13 = dVar13 * DAT_023907c0 - _DAT_023907c8;
    uVar12 = FUN_0071a120();
    if ((((local_38 == '\0') && (local_40 != (longlong *)0x0)) &&
        (uVar12 = FUN_00d50b00(), local_38 != '\0')) && (local_40 != (longlong *)0x0)) {
      uVar12 = FUN_00d50b20();
    }
    bVar6 = (byte)(((longlong)dVar13 & (longlong)uVar9 >> 0x3f | uVar9) / 3);
    local_50 = uVar10;
    local_48 = '\0';
    FUN_000175c0(uVar12,&local_50);
    plVar3 = local_40;
    if (local_38 == '\0') {
      if (((local_40 != (longlong *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
         (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38 = '\0';
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if (plVar3 != (longlong *)0x0) {
      local_38 = '\0';
      local_40 = plVar3;
      bVar6 = FUN_00c70bc0();
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    FUN_00d50b20();
    if (uVar10 != 0) {
      FUN_00d50b20();
    }
    if ((plVar3 != (longlong *)0x0 & bVar6) != 0) {
      FUN_01f27fe0();
      cVar5 = (**(code **)(*local_40 + 0x450))();
      if (cVar5 == '\0') {
        bVar11 = *(longlong *)(this[0x10] + 0x308) != 0;
      }
      else {
        bVar11 = false;
      }
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (bVar11) {
        FUN_006447a0();
      }
      lVar2 = DAT_026fba80;
      if (DAT_026fba80 != 0) {
        FUN_00d50b00();
      }
      local_40 = (longlong *)lVar2;
      local_38 = '\0';
      FUN_00d21140();
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      lVar2 = DAT_026fba80;
      if (DAT_026fba80 != 0) {
        FUN_00d50b00();
      }
      local_40 = (longlong *)lVar2;
      local_38 = '\0';
      FUN_00d21140();
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      plVar3 = DAT_027259d0;
      if (DAT_027259d0 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      local_40 = plVar3;
      local_38 = '\0';
      FUN_00d21140();
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar3 != (longlong *)0x0) {
        FUN_00d50b20();
      }
    }
    plVar3 = DAT_026fce40;
    if (this[0x10] != 0) {
      if (*(longlong *)(this[0x10] + 0x308) != 0) {
        if (DAT_026fce40 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        local_40 = plVar3;
        local_38 = '\0';
        FUN_00d21140();
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar3 != (longlong *)0x0) {
          FUN_00d50b20();
        }
        plVar3 = DAT_026fce40;
        if (DAT_026fce40 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        local_40 = plVar3;
        local_38 = '\0';
        FUN_00d21140();
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar3 != (longlong *)0x0) {
          FUN_00d50b20();
        }
      }
      plVar3 = DAT_027259d0;
      if (DAT_027259d0 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      local_40 = plVar3;
      local_38 = '\0';
      FUN_00d235a0();
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar3 != (longlong *)0x0) {
        FUN_00d50b20();
      }
    }
    uVar10 = DAT_026d85b0;
    if (DAT_026d85b0 != 0) {
      FUN_00d50b00();
    }
    dVar13 = (double)FUN_00e7d6f0();
    uVar9 = (ulonglong)(dVar13 * DAT_023907c0);
    dVar13 = dVar13 * DAT_023907c0 - _DAT_023907c8;
    uVar12 = FUN_0071a120();
    if ((((local_38 == '\0') && (local_40 != (longlong *)0x0)) &&
        (uVar12 = FUN_00d50b00(), local_38 != '\0')) && (local_40 != (longlong *)0x0)) {
      uVar12 = FUN_00d50b20();
    }
    bVar6 = (byte)(((longlong)dVar13 & (longlong)uVar9 >> 0x3f | uVar9) / 3);
    local_50 = uVar10;
    local_48 = '\0';
    FUN_000175c0(uVar12,&local_50);
    plVar3 = local_40;
    if (local_38 == '\0') {
      if (((local_40 != (longlong *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
         (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38 = '\0';
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if (plVar3 != (longlong *)0x0) {
      local_38 = '\0';
      local_40 = plVar3;
      bVar6 = FUN_00c70bc0();
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    FUN_00d50b20();
    if (uVar10 != 0) {
      FUN_00d50b20();
    }
    if ((plVar3 != (longlong *)0x0 & bVar6) == 0) {
      FUN_00644460();
    }
    FUN_00643150();
    uVar12 = FUN_00652bd0();
    plVar3 = local_58;
    puVar4 = local_60;
    puVar8 = local_70;
    if (this[0x18] != 0) {
      local_c0 = local_60;
      local_b8 = '\0';
      uVar12 = FUN_0009ea90(uVar12,&local_c0);
      if ((local_b8 != '\0') && (local_c0 != (undefined8 *)0x0)) {
        uVar12 = FUN_00d50b20();
      }
      local_b0 = puVar8;
      local_a8 = '\0';
      uVar12 = FUN_0009ea90(uVar12,&local_b0);
      if ((local_a8 != '\0') && (local_b0 != (undefined8 *)0x0)) {
        uVar12 = FUN_00d50b20();
      }
    }
    if (this[0x19] != 0) {
      local_a0 = puVar4;
      local_98 = '\0';
      uVar12 = FUN_0009ea90(uVar12,&local_a0);
      if ((local_98 != '\0') && (local_a0 != (undefined8 *)0x0)) {
        uVar12 = FUN_00d50b20();
      }
      local_90 = puVar8;
      local_88 = '\0';
      FUN_0009ea90(uVar12,&local_90);
      if ((local_88 != '\0') && (local_90 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
    }
    local_78 = '\0';
    local_80 = 0;
    (**(code **)(*this + 0x668))();
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
    FUN_00d50b20();
    if (plVar3 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  return;
}




// ==================================================
// @00650980 (2430 bytes) — math_loop
// Known properties of MUMultiTrackView:
// _followCursorState, _displayMode

{
  bool bVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong *this;
  bool bVar6;
  longlong local_120;
  char local_118;
  longlong local_90;
  char local_88;
  longlong *local_70;
  char local_68;
  longlong *local_60;
  char local_58;
  int local_48;
  
  plVar2 = local_60;
  FUN_00637870();
  if ((local_58 == '\0') && (local_60 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  cVar3 = FUN_00637950();
  if ((cVar3 != '\0') &&
     ((cVar3 = FUN_0063f180(), cVar3 != '\0' || (cVar3 = FUN_006443a0(), cVar3 != '\0')))) {
    FUN_006c5ea0();
    if (local_58 == '\0') {
      if (local_60 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_58 = '\0';
    }
    FUN_006e28a0();
    if (local_60 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  cVar3 = FUN_0063f180();
  if (((cVar3 != '\0') && (cVar3 = FUN_006443a0(), cVar3 != '\0')) && (this[0x2c] != 0)) {
    FUN_006c5ea0();
    if (local_58 == '\0') {
      if (local_60 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_58 = '\0';
    }
    FUN_006e3800();
    if (local_60 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_01bd0b60();
    if (local_58 == '\0') {
      if (local_60 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_58 = '\0';
    }
    FUN_006e3b90();
    if (local_60 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  if (this[0x18] != 0) {
    FUN_0009edf0();
    if (local_58 == '\0') {
      if (local_60 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_58 = '\0';
    }
    FUN_006e2b20();
    if (local_60 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_000a05d0();
    if (local_58 == '\0') {
      if (local_60 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_58 = '\0';
    }
    FUN_006e22f0();
    if (local_60 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  if (this[0x19] != 0) {
    FUN_0009edf0();
    if (local_58 == '\0') {
      if (local_60 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_58 = '\0';
    }
    FUN_006e2e20();
    if (local_60 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_000a05d0();
    if (local_58 == '\0') {
      if (local_60 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_58 = '\0';
    }
    FUN_006e2520();
    if (local_60 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  FUN_00643590();
  if (local_58 == '\0') {
    if (local_60 != (longlong *)0x0) {
      FUN_00d50b00();
      goto LAB_00650e4e;
    }
  }
  else if (local_60 != (longlong *)0x0) {
LAB_00650e4e:
    local_58 = '\0';
    local_60 = (longlong *)0x0;
    local_48 = -1;
    while( true ) {
      lVar5 = (longlong)local_48;
      local_48 = local_48 + 1;
      if (*(int *)((longlong)plVar2 + 0xc) <= local_48) break;
      local_60 = *(longlong **)(plVar2[2] + 8 + lVar5 * 8);
      cVar3 = FUN_00212c70();
      if (cVar3 == '\0') {
        FUN_0025c360();
        FUN_0021e4e0();
        if ((local_88 != '\0') && (local_90 != 0)) {
          FUN_00d50b20();
        }
        if (local_90 != 0) {
          FUN_0021e4e0();
          FUN_01c446f0();
        }
        FUN_006e30e0();
        if (((local_90 != 0) && (local_118 != '\0')) && (local_120 != 0)) {
          FUN_00d50b20();
        }
      }
    }
    FUN_0065ca40();
    FUN_00d50b20();
  }
  (**(code **)(*this + 0x5d8))();
  if (local_58 == '\0') {
    if (local_60 != (longlong *)0x0) {
      FUN_00d50b00();
      goto LAB_00650fd8;
    }
LAB_00651025:
    bVar1 = true;
  }
  else {
    if (local_60 == (longlong *)0x0) goto LAB_00651025;
LAB_00650fd8:
    cVar3 = FUN_00651a90();
    if (cVar3 == '\0') {
      FUN_006fc300();
      if (local_58 == '\0') {
        if (local_60 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_58 = '\0';
      }
      FUN_006e3aa0();
      if (local_60 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      FUN_006e3aa0();
    }
    bVar1 = false;
  }
  FUN_01e561b0();
  if (local_60 == (longlong *)0x0) {
    bVar6 = false;
  }
  else {
    FUN_01e561b0();
    FUN_01d8b220();
    bVar6 = local_90 != 0;
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
    if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (!bVar6) goto LAB_0065120d;
  FUN_01e561b0();
  FUN_01d8b220();
  local_70 = local_60;
  if (local_58 == '\0') {
    if (local_60 == (longlong *)0x0) {
      local_70 = (longlong *)0x0;
    }
    else {
      FUN_00d50b00();
    }
  }
  else {
  }
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  if ((DAT_026fe4d0 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
    _DAT_02726438 = FUN_0006d940();
    _DAT_02726420 = "MUMultiTrackView";
    _DAT_02726428 = 0x228;
    _DAT_02726430 = FUN_00082de0;
    _DAT_02726440 = 0;
    uRam0000000002726448 = 0;
    _DAT_02726450 = 0;
    _DAT_027264c8 = 0;
    uRam00000000027264d0 = 0;
    _DAT_027264d8 = 0;
    DAT_027264da = 1;
    _DAT_02726458 = 0;
    uRam0000000002726460 = 0;
    _DAT_02726468 = 0;
    uRam0000000002726470 = 0;
    _DAT_02726478 = 0;
    uRam0000000002726480 = 0;
    _DAT_02726488 = 0;
    uRam0000000002726490 = 0;
    _DAT_02726498 = 0;
    uRam00000000027264a0 = 0;
    _DAT_027264a8 = 0;
    uRam00000000027264b0 = 0;
    _DAT_027264b8 = 0;
    uRam00000000027264c0 = 0;
    DAT_027264e3 = 0;
    _DAT_027264db = 0;
    ___cxa_guard_release();
  }
  if (local_70 == (longlong *)0x0) {
LAB_0065119e:
    if (DAT_02802688 != 0) goto LAB_006511ab;
LAB_006511f2:
    FUN_006e3fc0();
  }
  else {
    (**(code **)(*local_70 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 == '\0') goto LAB_0065119e;
    if (local_70 == (longlong *)0x0) goto LAB_006511f2;
LAB_006511ab:
    FUN_006e3fc0();
  }
  if (local_70 != (longlong *)0x0) {
    FUN_00d50b20();
  }
LAB_0065120d:
  if (!bVar1) {
    FUN_00d50b20();
  }
  if (plVar2 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}




// ==================================================
// @00656960 (1229 bytes) — calculation
// Known properties of MUMultiTrackView:
// _followCursorState, _displayMode

{
  longlong lVar1;
  void *pvVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  pthread_key_t pVar5;
  longlong *arg1;
  longlong lVar6;
  longlong local_e8;
  char local_e0;
  longlong local_d8;
  char local_d0;
  longlong local_c8;
  char local_c0;
  longlong local_b8;
  char local_b0;
  longlong local_a8;
  char local_a0;
  longlong local_98;
  char local_90;
  longlong local_88;
  char local_80;
  longlong local_78;
  char local_70;
  longlong local_68;
  char local_60;
  longlong local_58;
  char local_50;
  longlong local_48;
  longlong local_40;
  char local_38;
  
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0132d610();
  lVar6 = local_40;
  if ((((local_38 == '\0') && (local_40 != 0)) && (FUN_00d50b00(), local_38 != '\0')) &&
     (local_40 != 0)) {
    FUN_00d50b20();
  }
  local_48 = lVar6;
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_016c1150();
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0132d960();
  if (lVar6 != 0) {
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0132d900();
    lVar1 = local_40;
    if (((local_38 == '\0') && (local_40 != 0)) &&
       ((FUN_00d50b00(), local_38 != '\0' && (local_40 != 0)))) {
      FUN_00d50b20();
    }
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_e8 = local_48;
    local_e0 = '\0';
    local_d8 = *arg1;
    local_d0 = '\0';
    uVar3 = FUN_00e7bdb0();
    uVar4 = FUN_00e7bdb0();
    local_c0 = '\0';
    local_c8 = 0;
    pVar5 = (pthread_key_t)&local_d8;
    FUN_01516650(0,&local_e8,uVar3,uVar4);
    if ((local_c0 != '\0') && (local_c8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_d0 != '\0') && (local_d8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_e0 != '\0') && (local_e8 != 0)) {
      FUN_00d50b20();
    }
    pvVar2 = _pthread_getspecific(pVar5);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_b8 = lVar1;
    local_b0 = '\0';
    local_a8 = local_48;
    local_a0 = '\0';
    local_98 = *arg1;
    local_90 = '\0';
    uVar3 = FUN_00e7bdb0();
    uVar4 = FUN_00e7bdb0();
    local_80 = '\0';
    local_88 = 0;
    FUN_01516720(0,&local_a8,uVar3,uVar4);
    lVar6 = local_48;
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
    if ((local_a0 != '\0') && (local_a8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_b0 != '\0') && (local_b8 != 0)) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_00d403d0();
  local_78 = DAT_027ebe30;
  if (DAT_027ebe30 != 0) {
    FUN_00d50b00();
  }
  local_70 = '\x01';
  local_68 = *arg1;
  local_60 = '\0';
  local_58 = 0;
  local_50 = '\0';
  FUN_00d40470(&local_58,&local_68,3,3);
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if (lVar6 != 0) {
    FUN_00d50b20();
  }
  return;
}




// ==================================================
// @0032b5c0 (1209 bytes) — calculation
// Known properties of MUMultiTrackView:
// _followCursorState, _displayMode

{
  longlong lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  bool bVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  char cVar8;
  int iVar9;
  void *pvVar10;
  pthread_key_t pVar11;
  undefined8 in_RCX;
  char *pcVar12;
  longlong *this;
  longlong **pplVar13;
  bool bVar14;
  undefined4 uVar15;
  undefined8 uVar16;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  float fVar18;
  undefined4 in_XMM1_Dd;
  undefined1 auVar17 [16];
  double dVar19;
  undefined1 auVar20 [16];
  undefined4 local_88;
  float fStack_84;
  undefined4 uStack_7c;
  longlong *local_78;
  char local_70;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong *local_50;
  longlong *local_48;
  char local_40 [8];
  char local_38 [8];
  
  fVar18 = (float)((ulonglong)param_2 >> 0x20);
  pVar11 = (pthread_key_t)in_RCX;
  if ((char)this[0x3a] == '\0') {
LAB_0032b839:
    if (this[0x2a] == 0) {
      if ((longlong *)this[0x28] == (longlong *)0x0) goto LAB_0032b994;
      local_68 = (double)(**(code **)(*(longlong *)this[0x28] + 0xc0))(param_1);
      dVar19 = (double)(**(code **)(*(longlong *)this[0x28] + 0xd0))();
      lVar1 = this[0x28];
    }
    else {
      pvVar10 = _pthread_getspecific(pVar11);
      if (pvVar10 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_68 = (double)FUN_013201a0();
      pvVar10 = _pthread_getspecific(pVar11);
      if (pvVar10 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar19 = (double)FUN_01320130();
      lVar1 = this[0x28];
    }
    uVar15 = SUB84(local_68,0);
    if (lVar1 != 0) {
      fVar18 = 0.0;
      in_XMM1_Dd = 0;
      uVar15 = SUB84(local_68 + 0.0,0);
      dVar19 = dVar19 + 0.0;
    }
    local_88 = SUB84(dVar19,0);
    uVar16 = (**(code **)(*(longlong *)this[0x2d] + 0x390))(uVar15);
    uStack_60 = extraout_XMM0_Dc;
    uStack_5c = extraout_XMM0_Dd;
    local_68 = (double)uVar16;
    uVar16 = (**(code **)(*(longlong *)this[0x2d] + 0x390))(local_88);
    FUN_01e3f820();
    auVar2._8_4_ = extraout_XMM0_Dc_00;
    auVar2._0_8_ = uVar16;
    auVar2._12_4_ = extraout_XMM0_Dd_00;
    auVar3._8_4_ = uStack_60;
    auVar3._0_8_ = local_68;
    auVar3._12_4_ = uStack_5c;
    auVar17._4_12_ = auVar2._4_12_;
    auVar17._0_4_ = (float)uVar16 - (float)local_68;
    auVar20._4_4_ = fVar18;
    auVar20._0_4_ = fVar18 + DAT_023b2664;
    auVar20._8_4_ = in_XMM1_Dd;
    auVar20._12_4_ = in_XMM1_Dd;
    auVar20 = insertps(auVar3,auVar20,0x10);
    local_68._0_4_ = auVar20._0_4_;
    local_68._4_4_ = auVar20._4_4_;
    blendps(auVar17,_DAT_023907b0,0xe);
  }
  else {
    FUN_01e42030();
    plVar7 = local_48;
    if (local_40[0] == '\0') {
      if (local_48 != (longlong *)0x0) {
        FUN_00d50b00();
        if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        goto LAB_0032b626;
      }
    }
    else if (local_48 != (longlong *)0x0) {
LAB_0032b626:
      local_50 = plVar7;
      (**(code **)(*this + 0x7b8))();
      plVar7 = local_48;
      pVar11 = (pthread_key_t)CONCAT71((int7)((ulonglong)in_RCX >> 8),local_40[0]);
      pcVar12 = local_38;
      if (local_40[0] != '\0') {
        pcVar12 = local_40;
      }
      local_38[0] = local_40[0];
      *pcVar12 = '\0';
      if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar7 == (longlong *)0x0) {
LAB_0032b781:
        pplVar13 = &local_48;
        FUN_01d8b220();
        plVar6 = local_48;
        if ((DAT_026fe4d0 == '\0') && (iVar9 = ___cxa_guard_acquire(), iVar9 != 0)) {
          _DAT_02726438 = FUN_0006d940();
          _DAT_02726420 = "MUMultiTrackView";
          _DAT_02726428 = 0x228;
          pVar11 = 0x82de0;
          _DAT_02726430 = FUN_00082de0;
          _DAT_02726440 = 0;
          uRam0000000002726448 = 0;
          _DAT_02726450 = 0;
          _DAT_027264c8 = 0;
          uRam00000000027264d0 = 0;
          _DAT_027264d8 = 0;
          DAT_027264da = 1;
          _DAT_02726458 = 0;
          uRam0000000002726460 = 0;
          _DAT_02726468 = 0;
          uRam0000000002726470 = 0;
          _DAT_02726478 = 0;
          uRam0000000002726480 = 0;
          _DAT_02726488 = 0;
          uRam0000000002726490 = 0;
          _DAT_02726498 = 0;
          uRam00000000027264a0 = 0;
          _DAT_027264a8 = 0;
          uRam00000000027264b0 = 0;
          _DAT_027264b8 = 0;
          uRam00000000027264c0 = 0;
          DAT_027264e3 = 0;
          _DAT_027264db = 0;
          ___cxa_guard_release();
        }
        plVar5 = DAT_02802688;
        if (plVar6 != (longlong *)0x0) {
          (**(code **)(*plVar6 + 0x360))();
          cVar8 = FUN_00e85ea0();
          if (cVar8 == '\0') {
            pplVar13 = &DAT_02802688;
          }
          plVar5 = *pplVar13;
        }
        if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar5 == (longlong *)0x0) goto LAB_0032b758;
LAB_0032b80a:
        bVar4 = true;
        bVar14 = true;
        in_XMM1_Dd = uStack_7c;
        fVar18 = fStack_84;
      }
      else {
        FUN_01d97850();
        if (local_48 == (longlong *)0x0) {
          bVar14 = false;
        }
        else {
          pplVar13 = &local_78;
          FUN_01d97850();
          plVar6 = local_78;
          FUN_000914a0();
          if (plVar6 == (longlong *)0x0) {
LAB_0032b6bf:
            pplVar13 = &DAT_02802688;
          }
          else {
            (**(code **)(*plVar6 + 0x360))();
            cVar8 = FUN_00e85ea0();
            if (cVar8 == '\0') goto LAB_0032b6bf;
          }
          bVar14 = *pplVar13 != (longlong *)0x0;
          if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (!bVar14) goto LAB_0032b781;
        FUN_01d8b220();
        FUN_01d97850();
        plVar6 = local_48;
        if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar6 == local_78) goto LAB_0032b80a;
LAB_0032b758:
        local_68._0_4_ = (float)DAT_023dccec;
        local_68._4_4_ = (undefined4)((ulonglong)DAT_023dccec >> 0x20);
        uStack_60 = 0;
        uStack_5c = 0;
        fStack_84 = (float)((ulonglong)DAT_023dccf4 >> 0x20);
        uStack_7c = 0;
        bVar4 = false;
        bVar14 = false;
        in_XMM1_Dd = uStack_7c;
        fVar18 = fStack_84;
      }
      if ((local_38[0] != '\0') && (bVar14 = bVar4, plVar7 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
      param_1 = (float)local_68;
      if (!bVar14) goto LAB_0032b9a4;
      goto LAB_0032b839;
    }
LAB_0032b994:
    local_68._0_4_ = (float)DAT_023dccec;
    local_68._4_4_ = (undefined4)((ulonglong)DAT_023dccec >> 0x20);
  }
LAB_0032b9a4:
  return CONCAT44(local_68._4_4_,(float)local_68);
}




// ==================================================
// @00651de0 (1019 bytes) — math_loop
// Known properties of MUMultiTrackView:
// _followCursorState, _displayMode

{
  longlong *plVar1;
  char cVar2;
  char *pcVar3;
  longlong lVar4;
  int iVar5;
  longlong this;
  undefined8 uVar6;
  longlong local_88;
  char local_80;
  longlong local_70;
  char local_68 [8];
  longlong local_60;
  undefined8 local_58;
  int local_50;
  char local_48 [8];
  char local_40 [8];
  char local_38 [8];
  
  if (*(int *)(this + 0x10c) < 1) {
    FUN_00631670();
    local_48[0] = local_68[0];
    pcVar3 = local_48;
    if (local_68[0] != '\0') {
      pcVar3 = local_68;
    }
    *pcVar3 = '\0';
    if ((local_68[0] != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    if (local_70 == 0) {
      *(undefined4 *)(this + 0x10c) = 10;
    }
    else {
      FUN_006f3f00();
      local_40[0] = local_68[0];
      pcVar3 = local_40;
      if (local_68[0] != '\0') {
        pcVar3 = local_68;
      }
      *pcVar3 = '\0';
      if ((local_68[0] != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      if (local_70 == 0) {
        *(undefined4 *)(this + 0x10c) = 10;
      }
      else {
        FUN_00756eb0();
        pcVar3 = local_68;
        if (local_68[0] == '\0') {
          pcVar3 = local_38;
        }
        local_38[0] = local_68[0];
        *pcVar3 = '\0';
        if ((local_68[0] != '\0') && (local_70 != 0)) {
          FUN_00d50b20();
        }
        if (local_70 == 0) {
          *(undefined4 *)(this + 0x10c) = 10;
        }
        else {
          uVar6 = (**(code **)(*(longlong *)(local_70 + 0x10) + 0x70))();
          if (*(longlong *)(this + 0x100) != 0) {
            local_68[0] = '\0';
            local_58 = 0xffffffff;
            local_50 = 0;
            local_60 = *(longlong *)(this + 0x100);
LAB_00651f45:
            lVar4 = (longlong)(int)local_58;
            iVar5 = (int)local_58 + 1;
            local_58 = CONCAT44(local_58._4_4_,iVar5);
            if (iVar5 < *(int *)(local_60 + 0xc)) {
              lVar4 = *(longlong *)(*(longlong *)(local_60 + 0x10) + 8 + lVar4 * 8);
              cVar2 = FUN_00212c70();
              if (cVar2 == '\0') goto code_r0x00651f72;
              FUN_0065ca40();
              FUN_006f4810();
              if (lVar4 == 0) {
                cVar2 = '\0';
              }
              else {
                FUN_006f4810();
                cVar2 = FUN_01e42170();
                if ((local_80 != '\0') && (local_88 != 0)) {
                  FUN_00d50b20();
                }
              }
              if ((local_68[0] != '\0') && (lVar4 != 0)) {
                FUN_00d50b20();
              }
              if (cVar2 == '\0') {
                if (*(longlong *)(this + 0x100) != 0) {
                  local_68[0] = '\0';
                  local_58 = 0xffffffff;
                  local_50 = 0;
                  local_60 = *(longlong *)(this + 0x100);
                  while( true ) {
                    iVar5 = (int)local_58 + 1;
                    local_58 = CONCAT44(local_58._4_4_,iVar5);
                    if (*(int *)(local_60 + 0xc) <= iVar5) break;
                    FUN_00235240(uVar6);
                    if (local_58._4_4_ != 0) {
                      if (local_58._4_4_ < 1) {
                        iVar5 = -local_58._4_4_;
                      }
                      else {
                        local_58 = CONCAT44(local_58._4_4_,(int)local_58 - local_58._4_4_);
                        FUN_00d23690();
                        local_50 = local_50 + local_58._4_4_;
                        iVar5 = 0;
                      }
                      local_58 = CONCAT44(iVar5,(int)local_58);
                    }
                  }
                  goto LAB_0065215c;
                }
              }
              else {
                FUN_006fdae0(uVar6);
              }
              goto LAB_00652165;
            }
            FUN_0065ca40();
          }
          FUN_006fdae0(uVar6);
          if (*(longlong *)(this + 0x100) != 0) {
            local_68[0] = '\0';
            local_58 = 0xffffffff;
            local_50 = 0;
            local_60 = *(longlong *)(this + 0x100);
            while( true ) {
              iVar5 = (int)local_58 + 1;
              local_58 = CONCAT44(local_58._4_4_,iVar5);
              if (*(int *)(local_60 + 0xc) <= iVar5) break;
              FUN_00235240(uVar6);
              if (local_58._4_4_ != 0) {
                if (local_58._4_4_ < 1) {
                  iVar5 = -local_58._4_4_;
                }
                else {
                  local_58 = CONCAT44(local_58._4_4_,(int)local_58 - local_58._4_4_);
                  FUN_00d23690();
                  local_50 = local_50 + local_58._4_4_;
                  iVar5 = 0;
                }
                local_58 = CONCAT44(iVar5,(int)local_58);
              }
            }
LAB_0065215c:
            FUN_0065ca40();
          }
LAB_00652165:
          if (*(longlong *)(this + 0x140) != 0) {
            FUN_00d50b00();
            FUN_00d50b20();
            plVar1 = *(longlong **)(this + 0x140);
            if (plVar1 != (longlong *)0x0) {
              FUN_00d50b00();
            }
            (**(code **)(*plVar1 + 0x5d0))(uVar6);
            FUN_00d50b20();
          }
          if (local_38[0] != '\0') {
            FUN_00d50b20();
          }
        }
        if (local_40[0] != '\0') {
          FUN_00d50b20();
        }
      }
      if (local_48[0] != '\0') {
        FUN_00d50b20();
      }
    }
  }
  else {
    *(int *)(this + 0x10c) = *(int *)(this + 0x10c) + -1;
  }
  return;
code_r0x00651f72:
  if (local_58._4_4_ != 0) {
    if (local_58._4_4_ < 1) {
      iVar5 = -local_58._4_4_;
    }
    else {
      local_58 = CONCAT44(local_58._4_4_,(int)local_58 - local_58._4_4_);
      FUN_00d23690();
      local_50 = local_50 + local_58._4_4_;
      iVar5 = 0;
    }
    local_58 = CONCAT44(iVar5,(int)local_58);
  }
  goto LAB_00651f45;
}




// ==================================================
// @000ea4c0 (992 bytes) — calculation
// Known properties of MUMultiTrackView:
// _followCursorState, _displayMode

{
  longlong lVar1;
  bool bVar2;
  bool bVar3;
  longlong *plVar4;
  char cVar5;
  int iVar6;
  longlong **pplVar7;
  undefined8 uVar8;
  longlong this;
  longlong *plVar9;
  undefined4 uVar10;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  longlong local_80;
  char local_78;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong *local_50;
  undefined8 local_48;
  longlong *local_40;
  char local_38;
  
  if (*(longlong *)(this + 0xb8) == 0) {
    return;
  }
  FUN_01e561b0();
  if (local_38 == '\0') {
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b00();
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_000ea524;
    }
LAB_000ea57a:
    bVar2 = true;
    local_48 = 0;
  }
  else {
    if (local_40 == (longlong *)0x0) goto LAB_000ea57a;
LAB_000ea524:
    FUN_01d8b220();
    plVar9 = local_40;
    local_50 = local_40;
    if (local_38 == '\0') {
      if (local_40 == (longlong *)0x0) {
        local_50 = (longlong *)0x0;
        plVar9 = (longlong *)0x0;
      }
      else {
        FUN_00d50b00();
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    else {
    }
    uVar10 = FUN_000914a0();
    if (plVar9 == (longlong *)0x0) {
LAB_000ea567:
      if (DAT_02802688 != (longlong *)0x0) goto LAB_000ea609;
LAB_000ea5bd:
      if ((DAT_026fe4d0 == '\0') &&
         (iVar6 = ___cxa_guard_acquire(), uVar10 = extraout_XMM0_Da_01, iVar6 != 0)) {
        _DAT_02726438 = FUN_0006d940();
        _DAT_02726420 = "MUMultiTrackView";
        _DAT_02726428 = 0x228;
        _DAT_02726430 = FUN_00082de0;
        _DAT_02726440 = 0;
        uRam0000000002726448 = 0;
        _DAT_02726450 = 0;
        _DAT_027264c8 = 0;
        uRam00000000027264d0 = 0;
        _DAT_027264d8 = 0;
        DAT_027264da = 1;
        _DAT_02726458 = 0;
        uRam0000000002726460 = 0;
        _DAT_02726468 = 0;
        uRam0000000002726470 = 0;
        _DAT_02726478 = 0;
        uRam0000000002726480 = 0;
        _DAT_02726488 = 0;
        uRam0000000002726490 = 0;
        _DAT_02726498 = 0;
        uRam00000000027264a0 = 0;
        _DAT_027264a8 = 0;
        uRam00000000027264b0 = 0;
        _DAT_027264b8 = 0;
        uRam00000000027264c0 = 0;
        DAT_027264e3 = 0;
        _DAT_027264db = 0;
        uVar10 = ___cxa_guard_release();
      }
      plVar4 = DAT_02802688;
      if (plVar9 != (longlong *)0x0) {
        (**(code **)(*plVar9 + 0x360))();
        cVar5 = FUN_00e85ea0();
        uVar10 = extraout_XMM0_Da_00;
        plVar4 = DAT_02802688;
        if (cVar5 != '\0') {
          plVar4 = local_50;
        }
      }
      plVar9 = local_50;
      local_50 = plVar9;
      if (plVar4 != (longlong *)0x0) goto LAB_000ea609;
      if (plVar9 != (longlong *)0x0) {
        plVar9 = (longlong *)0x0;
        uVar8 = 0;
        goto LAB_000ea6f1;
      }
      local_48 = 0;
    }
    else {
      (**(code **)(*plVar9 + 0x360))();
      cVar5 = FUN_00e85ea0();
      uVar10 = extraout_XMM0_Da;
      if (cVar5 == '\0') goto LAB_000ea567;
      if (local_50 == (longlong *)0x0) goto LAB_000ea5bd;
LAB_000ea609:
      lVar1 = DAT_026defa8;
      if (DAT_026defa8 != 0) {
        uVar10 = FUN_00d50b00();
      }
      local_80 = lVar1;
      local_78 = '\x01';
      pplVar7 = &local_40;
      (**(code **)(*plVar9 + 0x88))(uVar10,&local_80);
      plVar9 = local_40;
      FUN_00083c20();
      if (plVar9 == (longlong *)0x0) {
LAB_000ea669:
        pplVar7 = &DAT_02802688;
      }
      else {
        (**(code **)(*plVar9 + 0x360))();
        cVar5 = FUN_00e85ea0();
        if (cVar5 == '\0') goto LAB_000ea669;
      }
      plVar9 = *pplVar7;
      if (plVar9 == (longlong *)0x0) {
        uVar8 = 0;
        plVar9 = (longlong *)0x0;
      }
      else {
        if (*(char *)(pplVar7 + 1) == '\0') {
          FUN_00d50b00();
        }
        else {
          *(undefined1 *)(pplVar7 + 1) = 0;
        }
        uVar8 = CONCAT71((int7)((ulonglong)pplVar7 >> 8),1);
      }
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_78 != '\0') && (local_80 != 0)) {
        FUN_00d50b20();
      }
LAB_000ea6f1:
      FUN_00d50b20();
      local_48 = uVar8;
      if (plVar9 != (longlong *)0x0) {
        local_68 = 0;
        lVar1 = *(longlong *)(this + 0xd0);
        if (lVar1 != 0) {
          FUN_00d50b00();
        }
        local_68 = '\x01';
        local_70 = lVar1;
        FUN_01e058f0();
        if ((local_68 != '\0') && (local_70 != 0)) {
          FUN_00d50b20();
        }
        bVar3 = false;
        bVar2 = false;
        goto LAB_000ea7aa;
      }
    }
    bVar2 = false;
  }
  local_58 = 0;
  lVar1 = *(longlong *)(this + 200);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  local_58 = '\x01';
  local_60 = lVar1;
  FUN_01e058f0();
  bVar3 = true;
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
LAB_000ea7aa:
  if (!bVar2) {
    FUN_00d50b20();
  }
  if ((char)local_48 != '\0' && !bVar3) {
    FUN_00d50b20();
  }
  return;
}




// ==================================================
// @01bf4a10 (946 bytes) — calculation
// Known properties of MUMultiTrackView:
// _followCursorState, _displayMode

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined4 in_ECX;
  longlong **pplVar7;
  longlong *arg1;
  longlong local_a8;
  char local_a0;
  longlong local_98;
  char local_90;
  longlong local_88;
  char local_80;
  longlong local_78;
  char local_70;
  longlong local_68;
  char local_60;
  undefined4 local_54;
  longlong *local_50;
  undefined4 local_44;
  longlong *local_40;
  char local_38;
  
  lVar2 = DAT_02800140;
  local_54 = param_3;
  if (DAT_02800140 != 0) {
    param_1 = FUN_00d50b00();
  }
  local_a8 = lVar2;
  local_a0 = '\x01';
  FUN_01ccaae0(param_1,&local_a8);
  local_50 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != (longlong *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
       (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_a0 != '\0') && (local_a8 != 0)) {
    FUN_00d50b20();
  }
  uVar5 = FUN_01d26010();
  if (local_40 == (longlong *)0x0) {
    plVar6 = (longlong *)0x0;
    uVar5 = CONCAT71((int7)((ulonglong)uVar5 >> 8),DAT_026fe4d0);
  }
  else {
    plVar6 = (longlong *)(**(code **)(*local_40 + 0x10))();
    uVar5 = CONCAT71((int7)((ulonglong)plVar6 >> 8),DAT_026fe4d0);
  }
  if ((DAT_026fe4d0 == '\0') && (uVar5 = ___cxa_guard_acquire(), (int)uVar5 != 0)) {
    _DAT_02726438 = FUN_0006d940();
    _DAT_02726420 = "MUMultiTrackView";
    _DAT_02726428 = 0x228;
    _DAT_02726430 = FUN_00082de0;
    _DAT_02726440 = 0;
    uRam0000000002726448 = 0;
    _DAT_02726450 = 0;
    _DAT_027264c8 = 0;
    uRam00000000027264d0 = 0;
    _DAT_027264d8 = 0;
    DAT_027264da = 1;
    _DAT_02726458 = 0;
    uRam0000000002726460 = 0;
    _DAT_02726468 = 0;
    uRam0000000002726470 = 0;
    _DAT_02726478 = 0;
    uRam0000000002726480 = 0;
    _DAT_02726488 = 0;
    uRam0000000002726490 = 0;
    _DAT_02726498 = 0;
    uRam00000000027264a0 = 0;
    _DAT_027264a8 = 0;
    uRam00000000027264b0 = 0;
    _DAT_027264b8 = 0;
    uRam00000000027264c0 = 0;
    DAT_027264e3 = 0;
    _DAT_027264db = 0;
    uVar5 = ___cxa_guard_release();
  }
  local_44 = (undefined4)CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
  if (plVar6 == (longlong *)0x0) {
LAB_01bf4b47:
    plVar6 = (longlong *)0x0;
  }
  else {
    (**(code **)(*plVar6 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 == '\0') goto LAB_01bf4b47;
    FUN_00d50b00();
    local_44 = 0;
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    (**(code **)(*local_40 + 0x10))();
    FUN_00d50b20();
  }
  pplVar7 = &local_40;
  FUN_01ccad60();
  plVar1 = local_40;
  FUN_00192f30();
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 != '\0') goto LAB_01bf4bac;
  }
  pplVar7 = (longlong **)&DAT_02802688;
LAB_01bf4bac:
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
  if ((char)local_54 == '\0') {
    local_78 = *arg1;
    local_70 = '\0';
    local_68 = *param_2;
    local_60 = '\0';
    uVar4 = (**(code **)(*plVar6 + 0xa00))(in_ECX,&local_68);
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_98 = *arg1;
    local_90 = '\0';
    local_88 = *param_2;
    local_80 = '\0';
    uVar4 = (**(code **)(*plVar6 + 0x9f8))(in_ECX,&local_88);
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
  }
  if (plVar1 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((char)local_44 == '\0') {
    FUN_00d50b20();
  }
  if (local_50 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return uVar4;
}




// ==================================================
// @00657180 (831 bytes) — math_loop
// Known properties of MUMultiTrackView:
// _followCursorState, _displayMode

{
  undefined4 uVar1;
  void *pvVar2;
  pthread_key_t pVar3;
  undefined8 in_RCX;
  char unaff_SIL;
  int iVar4;
  undefined8 uVar5;
  longlong local_a0;
  char local_98;
  longlong local_90;
  char local_88;
  longlong local_80;
  char local_78;
  longlong local_40;
  char local_38;
  
  FUN_0063f230();
  if ((local_78 == '\0') && (local_80 != 0)) {
    FUN_00d50b00();
  }
  FUN_00261fb0();
  if ((local_78 == '\0') && (local_80 != 0)) {
    FUN_00d50b00();
  }
  if (*(int *)(local_80 + 0xc) == 0) {
    iVar4 = 0;
  }
  else {
    if (*(int *)(local_80 + 0xc) < 1) {
      iVar4 = 0;
    }
    else {
      iVar4 = 0;
      do {
        if (unaff_SIL != '\0') {
          pvVar2 = _pthread_getspecific((pthread_key_t)in_RCX);
          if (pvVar2 != (void *)0x0) {
            FUN_00e8b990();
          }
          uVar5 = FUN_0132d610();
          pVar3 = (pthread_key_t)in_RCX;
          if (local_a0 == 0) {
            FUN_0123fbe0(uVar5,4);
          }
          else {
            pvVar2 = _pthread_getspecific(pVar3);
            if (pvVar2 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0132d610();
            pvVar2 = _pthread_getspecific(pVar3);
            if (pvVar2 != (void *)0x0) {
              FUN_00e8b990();
            }
            uVar5 = FUN_00e7bdb0();
            in_RCX = 0;
            FUN_016c47d0(0,uVar5);
          }
          if (local_38 == '\0') {
            if (local_40 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_38 = '\0';
          }
          if (((local_a0 != 0) && (local_88 != '\0')) && (local_90 != 0)) {
            FUN_00d50b20();
          }
          if ((local_98 != '\0') && (local_a0 != 0)) {
            FUN_00d50b20();
          }
          FUN_0123fef0();
          uVar1 = FUN_0123ff00();
          FUN_016c0b50(param_1,uVar1);
          if ((local_38 == '\0') && (local_40 != 0)) {
            FUN_00d50b00();
          }
          FUN_00656960();
          if (local_40 != 0) {
            FUN_00d50b20();
            FUN_00d50b20();
          }
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < *(int *)(local_80 + 0xc));
    }
    FUN_00115190();
  }
  FUN_00d50b20();
  if (local_80 != 0) {
    FUN_00d50b20();
  }
  return iVar4;
}




// ==================================================
// @00655fa0 (737 bytes) — calculation
// Known properties of MUMultiTrackView:
// _followCursorState, _displayMode

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  longlong **pplVar4;
  longlong *this;
  bool bVar5;
  longlong *local_68;
  char local_60;
  longlong *local_58;
  longlong *local_50;
  char local_48;
  longlong *local_40;
  char local_38;
  
  FUN_01d838d0();
  FUN_01e561b0();
  if (local_38 == '\0') {
    if (local_40 == (longlong *)0x0) {
      return;
    }
    FUN_00d50b00();
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else if (local_40 == (longlong *)0x0) {
    return;
  }
  FUN_01d8b220();
  plVar1 = local_40;
  if (local_38 == '\0') {
    if (local_40 == (longlong *)0x0) goto LAB_00656136;
    FUN_00d50b00();
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else if (local_40 == (longlong *)0x0) goto LAB_00656136;
  local_58 = plVar1;
  (**(code **)(*plVar1 + 0x3f8))();
  local_50 = local_40;
  local_48 = 0;
  if (local_38 == '\0') {
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  local_48 = '\x01';
  (**(code **)(*this + 0x630))();
  if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  pplVar4 = &local_40;
  FUN_01d8b200();
  plVar1 = local_40;
  FUN_000914a0();
  if (plVar1 == (longlong *)0x0) {
LAB_006560fc:
    pplVar4 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar2 = FUN_00e85ea0();
    if (cVar2 == '\0') goto LAB_006560fc;
  }
  bVar5 = true;
  if (*pplVar4 == (longlong *)0x0) {
    pplVar4 = &local_68;
    FUN_01d8b200();
    plVar1 = local_68;
    if ((DAT_026fe4d0 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
      _DAT_02726438 = FUN_0006d940();
      _DAT_02726420 = "MUMultiTrackView";
      _DAT_02726428 = 0x228;
      _DAT_02726430 = FUN_00082de0;
      _DAT_02726440 = 0;
      uRam0000000002726448 = 0;
      _DAT_02726450 = 0;
      _DAT_027264c8 = 0;
      uRam00000000027264d0 = 0;
      _DAT_027264d8 = 0;
      DAT_027264da = 1;
      _DAT_02726458 = 0;
      uRam0000000002726460 = 0;
      _DAT_02726468 = 0;
      uRam0000000002726470 = 0;
      _DAT_02726478 = 0;
      uRam0000000002726480 = 0;
      _DAT_02726488 = 0;
      uRam0000000002726490 = 0;
      _DAT_02726498 = 0;
      uRam00000000027264a0 = 0;
      _DAT_027264a8 = 0;
      uRam00000000027264b0 = 0;
      _DAT_027264b8 = 0;
      uRam00000000027264c0 = 0;
      DAT_027264e3 = 0;
      _DAT_027264db = 0;
      ___cxa_guard_release();
    }
    if (plVar1 == (longlong *)0x0) {
LAB_0065618f:
      pplVar4 = (longlong **)&DAT_02802688;
    }
    else {
      (**(code **)(*plVar1 + 0x360))();
      cVar2 = FUN_00e85ea0();
      if (cVar2 == '\0') goto LAB_0065618f;
    }
    bVar5 = *pplVar4 != (longlong *)0x0;
    if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (bVar5) {
    FUN_0063a4a0();
  }
  FUN_00d50b20();
LAB_00656136:
  FUN_00d50b20();
  return;
}




// ==================================================
// @006577f0 (639 bytes) — calculation
// Known properties of MUMultiTrackView:
// _followCursorState, _displayMode

{
  longlong *plVar1;
  char cVar2;
  longlong **pplVar3;
  longlong *arg1;
  undefined8 *this;
  bool bVar4;
  longlong local_78;
  char local_70;
  longlong *local_68;
  char local_60;
  longlong local_58;
  char local_50;
  longlong *local_40;
  char local_38;
  
  FUN_0063f230();
  if ((local_38 == '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  FUN_01f27fe0();
  cVar2 = (**(code **)(*local_40 + 0x450))();
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar2 == '\0') {
LAB_00657987:
    if (local_40 != (longlong *)0x0) {
      FUN_0021a630();
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (local_40 != (longlong *)0x0) {
        FUN_0021a630();
        (**(code **)(*local_40 + 0xa00))();
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        goto LAB_00657a41;
      }
    }
    (**(code **)(*arg1 + 0x5e0))();
    if (local_38 == '\0') {
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
        goto LAB_00657a29;
      }
    }
    else if (local_40 != (longlong *)0x0) {
LAB_00657a29:
      FUN_00757c60();
      FUN_00d50b20();
      goto joined_r0x00657a6b;
    }
    *(undefined1 *)(this + 1) = 0;
    *this = 0;
  }
  else {
    FUN_01e561b0();
    if (local_40 == (longlong *)0x0) {
      bVar4 = false;
    }
    else {
      FUN_01e561b0();
      pplVar3 = &local_68;
      FUN_01d8b220();
      plVar1 = local_68;
      FUN_000914a0();
      if (plVar1 == (longlong *)0x0) {
LAB_006578be:
        pplVar3 = (longlong **)&DAT_02802688;
      }
      else {
        (**(code **)(*plVar1 + 0x360))();
        cVar2 = FUN_00e85ea0();
        if (cVar2 == '\0') goto LAB_006578be;
      }
      bVar4 = false;
      if ((*pplVar3 != (longlong *)0x0) && (local_40 != (longlong *)0x0)) {
        FUN_0021a630();
        bVar4 = local_78 != 0;
        if ((local_70 != '\0') && (local_78 != 0)) {
          FUN_00d50b20();
        }
      }
      if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (!bVar4) goto LAB_00657987;
    FUN_0021a630();
    (**(code **)(*local_40 + 0xa00))();
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
joined_r0x00657a6b:
  if (local_40 == (longlong *)0x0) {
    return this;
  }
LAB_00657a41:
  FUN_00d50b20();
  return this;
}




// ==================================================
// @01bf3920 (561 bytes) — calculation
// Known properties of MUMultiTrackView:
// _followCursorState, _displayMode

{
  bool bVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  longlong local_48;
  char local_40;
  longlong *local_38;
  char local_30;
  
  lVar2 = DAT_02800140;
  if (DAT_02800140 != 0) {
    param_1 = FUN_00d50b00();
  }
  local_48 = lVar2;
  local_40 = '\x01';
  FUN_01ccaae0(param_1,&local_48);
  plVar3 = local_38;
  if (local_30 == '\0') {
    if (((local_38 != (longlong *)0x0) && (FUN_00d50b00(), local_30 != '\0')) &&
       (local_38 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_30 = '\0';
  }
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if (plVar3 != (longlong *)0x0) {
    FUN_01d26010();
    if (local_38 == (longlong *)0x0) {
      plVar6 = (longlong *)0x0;
    }
    else {
      plVar6 = (longlong *)(**(code **)(*local_38 + 0x10))();
    }
    if ((DAT_026fe4d0 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
      _DAT_02726438 = FUN_0006d940();
      _DAT_02726420 = "MUMultiTrackView";
      _DAT_02726428 = 0x228;
      _DAT_02726430 = FUN_00082de0;
      _DAT_02726440 = 0;
      uRam0000000002726448 = 0;
      _DAT_02726450 = 0;
      _DAT_027264c8 = 0;
      uRam00000000027264d0 = 0;
      _DAT_027264d8 = 0;
      DAT_027264da = 1;
      _DAT_02726458 = 0;
      uRam0000000002726460 = 0;
      _DAT_02726468 = 0;
      uRam0000000002726470 = 0;
      _DAT_02726478 = 0;
      uRam0000000002726480 = 0;
      _DAT_02726488 = 0;
      uRam0000000002726490 = 0;
      _DAT_02726498 = 0;
      uRam00000000027264a0 = 0;
      _DAT_027264a8 = 0;
      uRam00000000027264b0 = 0;
      _DAT_027264b8 = 0;
      uRam00000000027264c0 = 0;
      DAT_027264e3 = 0;
      _DAT_027264db = 0;
      ___cxa_guard_release();
    }
    bVar1 = true;
    if (plVar6 == (longlong *)0x0) {
LAB_01bf3a23:
      plVar6 = (longlong *)0x0;
    }
    else {
      (**(code **)(*plVar6 + 0x360))();
      cVar4 = FUN_00e85ea0();
      if (cVar4 == '\0') goto LAB_01bf3a23;
      FUN_00d50b00();
      bVar1 = false;
    }
    if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
      (**(code **)(*local_38 + 0x10))();
      FUN_00d50b20();
    }
    if (!bVar1) {
      cVar4 = (**(code **)(*plVar6 + 0x920))();
      if (cVar4 != '\0') {
        FUN_00d50b20();
        goto LAB_01bf3a76;
      }
      FUN_00d50b20();
    }
  }
  FUN_01df7da0();
  if (plVar3 == (longlong *)0x0) {
    return;
  }
LAB_01bf3a76:
  FUN_00d50b20();
  return;
}




// ==================================================
// @002fcbc0 (560 bytes) — logic_branch
// Known properties of MUMultiTrackView:
// _followCursorState, _displayMode

{
  int iVar1;
  
  if (DAT_026fef70 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026fef60 = 0x100000000;
      _DAT_026fef68 = 2;
      DAT_026fef6c = 1;
      ___cxa_guard_release();
    }
  }
  if (DAT_026fefa8 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026fef78 = "MUFollowCursorState";
      _DAT_026fef80 = 3;
      DAT_026fef84 = DAT_026fef6c;
      _DAT_026fef88 = &DAT_026fef60;
      _DAT_026fef90 = &DAT_026fef40;
      _DAT_026fef98 = 0;
      uRam00000000026fefa0 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e876a0();
  if (DAT_026fef38 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_026fe4d0 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_02726438 = FUN_0006d940();
          _DAT_02726420 = "MUMultiTrackView";
          _DAT_02726428 = 0x228;
          _DAT_02726430 = FUN_00082de0;
          _DAT_02726440 = 0;
          uRam0000000002726448 = 0;
          _DAT_02726450 = 0;
          _DAT_027264c8 = 0;
          uRam00000000027264d0 = 0;
          _DAT_027264d8 = 0;
          DAT_027264da = 1;
          _DAT_02726458 = 0;
          uRam0000000002726460 = 0;
          _DAT_02726468 = 0;
          uRam0000000002726470 = 0;
          _DAT_02726478 = 0;
          uRam0000000002726480 = 0;
          _DAT_02726488 = 0;
          uRam0000000002726490 = 0;
          _DAT_02726498 = 0;
          uRam00000000027264a0 = 0;
          _DAT_027264a8 = 0;
          uRam00000000027264b0 = 0;
          _DAT_027264b8 = 0;
          uRam00000000027264c0 = 0;
          DAT_027264e3 = 0;
          _DAT_027264db = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_026feef8 = "_followCursorState";
      _DAT_026fef00 = &DAT_02726420;
      _DAT_026fef08 = 0;
      _DAT_026fef10 = 0x6500;
      _DAT_026fef18 = "MUFollowCursorState";
      _DAT_026fef20 = &DAT_026fef78;
      _DAT_026fef28 = 0;
      uRam00000000026fef30 = 0;
      ___cxa_guard_release();
    }
  }
  return &DAT_026feef8;
}




// ==================================================
// @00300f60 (550 bytes) — logic_branch
// Known properties of MUMultiTrackView:
// _followCursorState, _displayMode

{
  int iVar1;
  
  if (DAT_026ff658 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026ff648 = 0x100000000;
      DAT_026ff650 = 1;
      ___cxa_guard_release();
    }
  }
  if (DAT_026ff690 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026ff660 = "MUMultiTrackDisplayMode";
      _DAT_026ff668 = 2;
      DAT_026ff66c = DAT_026ff650;
      _DAT_026ff670 = &DAT_026ff648;
      _DAT_026ff678 = &DAT_026ff630;
      _DAT_026ff680 = 0;
      uRam00000000026ff688 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e876a0();
  if (DAT_026ff620 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_026fe4d0 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_02726438 = FUN_0006d940();
          _DAT_02726420 = "MUMultiTrackView";
          _DAT_02726428 = 0x228;
          _DAT_02726430 = FUN_00082de0;
          _DAT_02726440 = 0;
          uRam0000000002726448 = 0;
          _DAT_02726450 = 0;
          _DAT_027264c8 = 0;
          uRam00000000027264d0 = 0;
          _DAT_027264d8 = 0;
          DAT_027264da = 1;
          _DAT_02726458 = 0;
          uRam0000000002726460 = 0;
          _DAT_02726468 = 0;
          uRam0000000002726470 = 0;
          _DAT_02726478 = 0;
          uRam0000000002726480 = 0;
          _DAT_02726488 = 0;
          uRam0000000002726490 = 0;
          _DAT_02726498 = 0;
          uRam00000000027264a0 = 0;
          _DAT_027264a8 = 0;
          uRam00000000027264b0 = 0;
          _DAT_027264b8 = 0;
          uRam00000000027264c0 = 0;
          DAT_027264e3 = 0;
          _DAT_027264db = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_026ff5e0 = "_displayMode";
      _DAT_026ff5e8 = &DAT_02726420;
      _DAT_026ff5f0 = 0;
      _DAT_026ff5f8 = 0x6500;
      _DAT_026ff600 = "MUMultiTrackDisplayMode";
      _DAT_026ff608 = &DAT_026ff660;
      _DAT_026ff610 = 0;
      uRam00000000026ff618 = 0;
      ___cxa_guard_release();
    }
  }
  return &DAT_026ff5e0;
}



