// Function: FUN_002e7520
// Address: 002e7520
// Size: 1427 bytes
// Class: MUMultiTrackItem


void FUN_002e7520(void)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  char cVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined8 *unaff_RDI;
  bool bVar9;
  longlong local_f8;
  char local_f0;
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
  longlong *local_68;
  longlong *local_60;
  char local_58;
  longlong *local_50;
  char local_48;
  longlong *local_40;
  char local_38;
  
  FUN_01f27fe0();
  cVar6 = (**(code **)(*local_40 + 0x450))();
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar6 == '\0') {
    plVar7 = (longlong *)FUN_00e8fc40();
    FUN_001d7da0();
    (**(code **)(*plVar7 + 0x18))();
    lVar2 = DAT_027296a0;
    if (DAT_027296a0 != 0) {
      FUN_00d50b00();
    }
    lVar3 = DAT_026fe440;
    if (DAT_026fe440 != 0) {
      FUN_00d50b00();
    }
    local_f8 = lVar3;
    local_f0 = '\x01';
    local_e8 = 0;
    local_e0 = '\0';
    FUN_00d31230(&local_e8,&local_f8);
    local_60 = local_40;
    local_58 = 0;
    local_d8 = DAT_026fe448;
    if (local_38 == '\0') {
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
        local_d8 = DAT_026fe448;
      }
    }
    else {
      local_38 = '\0';
    }
    local_58 = '\x01';
    DAT_026fe448 = local_d8;
    if (local_d8 != 0) {
      local_58 = '\x01';
      FUN_00d50b00();
    }
    local_d0 = '\x01';
    FUN_01d5d9b0();
    if ((local_d0 != '\0') && (local_d8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_e0 != '\0') && (local_e8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_f0 != '\0') && (local_f8 != 0)) {
      FUN_00d50b20();
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    *unaff_RDI = plVar7;
    *(undefined1 *)(unaff_RDI + 1) = 1;
    return;
  }
  FUN_0027c9f0();
  plVar7 = local_40;
  if ((((local_38 == '\0') && (local_40 != (longlong *)0x0)) && (FUN_00d50b00(), local_38 != '\0'))
     && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  lVar2 = DAT_026fe450;
  if (DAT_026fe450 != 0) {
    FUN_00d50b00();
  }
  local_c8 = lVar2;
  local_c0 = '\x01';
  FUN_01d5e6e0();
  plVar4 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != (longlong *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
       (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_c0 != '\0') && (local_c8 != 0)) {
    FUN_00d50b20();
  }
  if (plVar4 == (longlong *)0x0) goto LAB_002e7a7f;
  FUN_01d64cb0();
  plVar8 = local_40;
  if ((((local_38 == '\0') && (local_40 != (longlong *)0x0)) && (FUN_00d50b00(), local_38 != '\0'))
     && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  local_68 = plVar8;
  FUN_01d5dc80();
  local_b8 = DAT_027296a0;
  if (DAT_027296a0 != 0) {
    FUN_00d50b00();
  }
  lVar2 = DAT_026fe440;
  local_b0 = '\x01';
  if (DAT_026fe440 != 0) {
    FUN_00d50b00();
  }
  local_a8 = lVar2;
  local_a0 = '\x01';
  local_98 = 0;
  local_90 = '\0';
  FUN_00d31230(&local_98,&local_a8);
  local_50 = local_40;
  local_48 = 0;
  local_88 = DAT_026fe448;
  if (local_38 == '\0') {
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b00();
      local_88 = DAT_026fe448;
    }
  }
  else {
    local_38 = '\0';
  }
  local_48 = '\x01';
  DAT_026fe448 = local_88;
  if (local_88 != 0) {
    local_48 = '\x01';
    FUN_00d50b00();
  }
  local_80 = '\x01';
  FUN_01d5d9b0();
  if ((local_80 != '\0') && (local_88 != 0)) {
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
  if ((local_a0 != '\0') && (local_a8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_b0 != '\0') && (local_b8 != 0)) {
    FUN_00d50b20();
  }
  lVar2 = DAT_026fe458;
  if (DAT_026fe458 != 0) {
    FUN_00d50b00();
  }
  local_78 = lVar2;
  local_70 = '\x01';
  FUN_01d5e6e0();
  plVar5 = local_40;
  plVar8 = plVar4;
  plVar1 = plVar4;
  if (plVar4 == local_40) {
joined_r0x002e7a04:
    bVar9 = plVar8 == (longlong *)0x0;
    if ((local_38 != '\0') && (plVar1 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    if (local_38 == '\0') {
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      FUN_00d50b20();
      plVar8 = plVar5;
      plVar1 = local_40;
      goto joined_r0x002e7a04;
    }
    FUN_00d50b20();
    local_38 = '\0';
    bVar9 = local_40 == (longlong *)0x0;
    plVar8 = local_40;
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  plVar1 = local_68;
  if (!bVar9) {
    FUN_01d66e50();
  }
  *unaff_RDI = plVar1;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  if (plVar8 != (longlong *)0x0) {
    FUN_00d50b20();
  }
LAB_002e7a7f:
  if (plVar7 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (plVar4 == (longlong *)0x0) {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
  }
  return;
}


