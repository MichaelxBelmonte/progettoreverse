// Function: FUN_00652d70
// Address: 00652d70
// Size: 2650 bytes
// Class: MUMultiTrackView


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00652d70(void)

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
  longlong *unaff_RDI;
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
  
  (**(code **)(*unaff_RDI + 0x5d8))();
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
        bVar11 = *(longlong *)(unaff_RDI[0x10] + 0x308) != 0;
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
    if (unaff_RDI[0x10] != 0) {
      if (*(longlong *)(unaff_RDI[0x10] + 0x308) != 0) {
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
    if (unaff_RDI[0x18] != 0) {
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
    if (unaff_RDI[0x19] != 0) {
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
    (**(code **)(*unaff_RDI + 0x668))();
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


