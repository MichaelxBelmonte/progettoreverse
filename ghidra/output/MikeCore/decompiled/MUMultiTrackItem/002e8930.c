// Function: FUN_002e8930
// Address: 002e8930
// Size: 1825 bytes
// Class: MUMultiTrackItem


void FUN_002e8930(void)

{
  longlong *plVar1;
  char cVar2;
  longlong *plVar3;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong lVar4;
  longlong local_158;
  char local_150;
  longlong local_148;
  char local_140;
  longlong local_138;
  char local_130;
  longlong local_128;
  char local_120;
  longlong local_118;
  char local_110;
  longlong local_108;
  char local_100;
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
  longlong local_78;
  char local_70;
  longlong local_68;
  char local_60;
  longlong *local_58;
  char local_50;
  longlong *local_48;
  char local_40;
  longlong *local_38;
  char local_30;
  
  lVar4 = *unaff_RSI;
  if (unaff_RDI[0x4b] == lVar4) {
    return;
  }
  unaff_RDI[0x4b] = lVar4;
  if (lVar4 == 0) {
    lVar4 = 0;
    if (unaff_RDI[0x47] != 0) {
      FUN_00d50130();
      lVar4 = unaff_RDI[0x47];
    }
    if (lVar4 != 0) {
      unaff_RDI[0x47] = 0;
      FUN_00d50b20();
    }
    if (unaff_RDI[0x58] == 0) {
      return;
    }
    unaff_RDI[0x58] = 0;
    FUN_00d50b20();
    return;
  }
  FUN_00d50b00();
  local_158 = DAT_026fe468;
  if (DAT_026fe468 != 0) {
    FUN_00d50b00();
  }
  lVar4 = DAT_026fe470;
  local_150 = '\x01';
  if (DAT_026fe470 != 0) {
    FUN_00d50b00();
  }
  local_148 = lVar4;
  local_140 = '\x01';
  local_138 = unaff_RDI[0x4b];
  local_130 = '\0';
  FUN_000bf690(&local_148,&local_158,&local_138);
  plVar1 = (longlong *)unaff_RDI[0x47];
  plVar3 = plVar1;
  if (plVar1 != local_38) {
    if (local_30 == '\0') {
      if (local_38 == (longlong *)0x0) {
        plVar3 = (longlong *)0x0;
        goto LAB_002e8a1e;
      }
      FUN_00d50b00();
      plVar1 = (longlong *)unaff_RDI[0x47];
      unaff_RDI[0x47] = (longlong)local_38;
      plVar3 = local_38;
    }
    else {
      local_30 = '\0';
      plVar3 = local_38;
LAB_002e8a1e:
      unaff_RDI[0x47] = (longlong)plVar3;
    }
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b20();
      plVar3 = local_38;
    }
  }
  if ((local_30 != '\0') && (plVar3 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_130 != '\0') && (local_138 != 0)) {
    FUN_00d50b20();
  }
  if ((local_140 != '\0') && (local_148 != 0)) {
    FUN_00d50b20();
  }
  if ((local_150 != '\0') && (local_158 != 0)) {
    FUN_00d50b20();
  }
  if (unaff_RDI != (longlong *)0x0) {
    FUN_00d50b20();
  }
  FUN_00d50b00();
  local_128 = DAT_026fe478;
  if (DAT_026fe478 != 0) {
    FUN_00d50b00();
  }
  local_120 = '\x01';
  (**(code **)(*(longlong *)unaff_RDI[0x4b] + 0x498))();
  local_78 = local_b8;
  local_70 = 0;
  if (local_b0 == '\0') {
    if (local_b8 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_b0 = '\0';
  }
  local_70 = '\x01';
  FUN_0006e1c0();
  FUN_00e86210();
  local_118 = DAT_026fe480;
  if (DAT_026fe480 != 0) {
    FUN_00d50b00();
  }
  local_110 = '\x01';
  FUN_00c841b0();
  local_68 = local_a8;
  local_60 = 0;
  if (local_a0 == '\0') {
    if (local_a8 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_a0 = '\0';
  }
  local_60 = '\x01';
  local_100 = '\0';
  local_108 = 0;
  FUN_000bfbc0(&local_78,&local_128,0xa0,&local_68);
  plVar1 = (longlong *)unaff_RDI[0x58];
  plVar3 = plVar1;
  if (plVar1 == local_38) goto LAB_002e8cf1;
  if (local_30 == '\0') {
    if (local_38 == (longlong *)0x0) {
      plVar3 = (longlong *)0x0;
      goto LAB_002e8ca6;
    }
    FUN_00d50b00();
    plVar1 = (longlong *)unaff_RDI[0x58];
    unaff_RDI[0x58] = (longlong)local_38;
    plVar3 = local_38;
  }
  else {
    local_30 = '\0';
    plVar3 = local_38;
LAB_002e8ca6:
    unaff_RDI[0x58] = (longlong)plVar3;
  }
  if (plVar1 != (longlong *)0x0) {
    FUN_00d50b20();
    plVar3 = local_38;
  }
LAB_002e8cf1:
  if ((local_30 != '\0') && (plVar3 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_100 != '\0') && (local_108 != 0)) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  if ((local_a0 != '\0') && (local_a8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_110 != '\0') && (local_118 != 0)) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  if ((local_b0 != '\0') && (local_b8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_120 != '\0') && (local_128 != 0)) {
    FUN_00d50b20();
  }
  if (unaff_RDI != (longlong *)0x0) {
    FUN_00d50b20();
  }
  FUN_0006e1c0();
  FUN_00e86210();
  local_f8 = DAT_026d83d8;
  if (DAT_026d83d8 != 0) {
    FUN_00d50b00();
  }
  local_f0 = '\x01';
  FUN_00c841b0();
  local_58 = local_38;
  local_50 = 0;
  if (local_30 == '\0') {
    if (local_38 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_30 = '\0';
  }
  local_50 = '\x01';
  local_e0 = '\0';
  local_e8 = 0;
  FUN_000bfd00();
  if ((local_e0 != '\0') && (local_e8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_f0 != '\0') && (local_f8 != 0)) {
    FUN_00d50b20();
  }
  FUN_000823a0();
  FUN_00e86210();
  local_d8 = DAT_026f6f60;
  if (DAT_026f6f60 != 0) {
    FUN_00d50b00();
  }
  local_d0 = '\x01';
  FUN_00c841b0();
  local_48 = local_38;
  local_40 = 0;
  if (local_30 == '\0') {
    if (local_38 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_30 = '\0';
  }
  local_40 = '\x01';
  local_c0 = '\0';
  local_c8 = 0;
  FUN_000bfd00();
  if ((local_c0 != '\0') && (local_c8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_d0 != '\0') && (local_d8 != 0)) {
    FUN_00d50b20();
  }
  FUN_01f27fe0();
  cVar2 = (**(code **)(*local_38 + 0x450))();
  if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar2 == '\0') {
    cVar2 = FUN_00bd2290();
    if ((cVar2 == '\0') && (cVar2 = FUN_00751ba0(), cVar2 != '\0')) {
      FUN_016ae5f0();
    }
    (**(code **)(*unaff_RDI + 0x9e8))();
  }
  else {
    (**(code **)(*unaff_RDI + 0x9e8))();
  }
  return;
}


