// Function: FUN_01883ac0
// Address: 01883ac0
// Size: 1493 bytes
// Class: GNList
// String references:
//   "GNList"


/* WARNING: Removing unreachable block (ram,0x01883eca) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01883ac0(void)

{
  longlong lVar1;
  undefined8 *puVar2;
  bool bVar3;
  bool bVar4;
  code *pcVar5;
  char cVar6;
  int iVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  longlong lVar10;
  undefined8 *puVar11;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  longlong local_70;
  char local_68 [8];
  undefined8 *local_60;
  int local_58;
  int iStack_54;
  int local_50;
  longlong local_48;
  char local_40;
  char local_31;
  
  plVar8 = (longlong *)*unaff_RSI;
  if (plVar8 == (longlong *)0x0) {
    do {
      FUN_00d23340();
      local_48 = CONCAT71(local_48._1_7_,local_68[0]);
      plVar8 = (longlong *)local_68;
      if (local_68[0] == '\0') {
        plVar8 = &local_48;
      }
      *(undefined1 *)plVar8 = 0;
      if ((local_68[0] != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      if ((char)local_48 == '\0') {
        if (local_70 == 0) {
          return;
        }
        FUN_00d50b00();
      }
      else if (local_70 == 0) {
        return;
      }
      FUN_01883960();
      FUN_00d50b20();
    } while( true );
  }
  if ((DAT_027048b0 == '\0') && (iVar7 = ___cxa_guard_acquire(), iVar7 != 0)) {
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
  (**(code **)(*plVar8 + 0x360))();
  cVar6 = FUN_00e85ea0();
  if (cVar6 == '\0') {
LAB_01883b23:
    unaff_RSI = &DAT_02802688;
  }
  else {
    FUN_011b7780();
    cVar6 = FUN_00e8da30();
    if (cVar6 == '\0') goto LAB_01883b23;
  }
  lVar10 = *unaff_RSI;
  local_31 = (char)unaff_RSI[1];
  if ((local_31 == '\0') || (lVar10 == 0)) {
    if (lVar10 == 0) {
      return;
    }
  }
  else {
    FUN_00d50b00();
  }
  puVar9 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar9 = &DAT_02572358;
  pcVar5 = DAT_02572370;
  (*DAT_02572370)();
  local_68[0] = 0;
  local_58 = -1;
  iStack_54 = 0;
  local_50 = 0;
  local_60 = (undefined8 *)lVar10;
  while( true ) {
    if (iStack_54 != 0) {
      if (iStack_54 < 1) {
        iStack_54 = -iStack_54;
      }
      else {
        local_58 = local_58 - iStack_54;
        FUN_00d23690();
        local_50 = local_50 + iStack_54;
        iStack_54 = 0;
      }
    }
    lVar10 = (longlong)local_58;
    local_58 = local_58 + 1;
    if (*(int *)((longlong)local_60 + 0xc) <= local_58) break;
    lVar10 = *(longlong *)(*(longlong *)((longlong)local_60 + 0x10) + 8 + lVar10 * 8);
    lVar1 = *(longlong *)(unaff_RDI + 0x50);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    local_40 = '\0';
    local_48 = lVar10;
    cVar6 = FUN_00d23d70();
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if (cVar6 == '\0') {
      local_40 = '\0';
      local_48 = lVar10;
      FUN_00d21140();
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  FUN_01894e00();
  puVar11 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar11 = &DAT_02572358;
  (*pcVar5)();
  puVar2 = *(undefined8 **)(unaff_RDI + 0x50);
  if (puVar2 != (undefined8 *)0x0) {
    FUN_00d50b00();
    local_68[0] = 0;
    local_58 = -1;
    iStack_54 = 0;
    local_50 = 0;
    local_60 = puVar2;
    while( true ) {
      if (iStack_54 != 0) {
        if (iStack_54 < 1) {
          iStack_54 = -iStack_54;
        }
        else {
          local_58 = local_58 - iStack_54;
          FUN_00d23690();
          local_50 = local_50 + iStack_54;
          iStack_54 = 0;
        }
      }
      lVar10 = (longlong)local_58;
      local_58 = local_58 + 1;
      if (*(int *)((longlong)local_60 + 0xc) <= local_58) break;
      lVar10 = *(longlong *)(local_60[2] + 8 + lVar10 * 8);
      local_40 = '\0';
      local_48 = lVar10;
      cVar6 = FUN_00d23d70();
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if (cVar6 == '\0') {
        local_40 = '\0';
        local_48 = lVar10;
        FUN_00d21140();
        if ((local_40 != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
      }
    }
    FUN_01894e00();
    FUN_00d50b20();
    if (puVar11 == (undefined8 *)0x0) {
      bVar3 = true;
      bVar4 = true;
      goto joined_r0x01883f49;
    }
  }
  local_68[0] = 0;
  local_58 = -1;
  iStack_54 = 0;
  local_50 = 0;
  local_60 = puVar11;
  while (local_58 = local_58 + 1, local_58 < *(int *)((longlong)local_60 + 0xc)) {
    FUN_01883960();
    if (iStack_54 != 0) {
      if (iStack_54 < 1) {
        iStack_54 = -iStack_54;
      }
      else {
        local_58 = local_58 - iStack_54;
        FUN_00d23690();
        local_50 = local_50 + iStack_54;
        iStack_54 = 0;
      }
    }
  }
  FUN_01894e00();
  bVar3 = false;
  bVar4 = false;
joined_r0x01883f49:
  if (puVar9 != (undefined8 *)0x0) {
    local_68[0] = 0;
    iStack_54 = 0;
    local_50 = 0;
    local_60 = puVar9;
    for (iVar7 = 0; local_58 = iVar7, iVar7 < *(int *)((longlong)puVar9 + 0xc); iVar7 = iVar7 + 1) {
      FUN_018836f0();
    }
    FUN_01894e00();
    bVar3 = bVar4;
  }
  if (!bVar3) {
    FUN_00d50b20();
  }
  if (puVar9 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  if (local_31 != '\0') {
    FUN_00d50b20();
  }
  return;
}


