// Function: FUN_003194a0
// Address: 003194a0
// Size: 1523 bytes
// Class: GNString


void FUN_003194a0(void)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  void *pvVar4;
  longlong lVar5;
  pthread_key_t pVar6;
  longlong unaff_RDI;
  undefined4 uVar7;
  longlong local_130;
  char local_128;
  longlong local_120;
  char local_118;
  longlong local_110;
  char local_108;
  longlong local_100;
  char local_f8;
  longlong local_f0;
  char local_e8;
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
  longlong local_70;
  char local_68;
  longlong local_30;
  char local_28;
  
  FUN_00d50100();
  puVar3 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  pVar6 = 0x25d84d8;
  *puVar3 = &DAT_025d84d8;
  puVar3[7] = 0;
  puVar3[8] = 0;
  (*DAT_025d84f0)();
  puVar1 = *(undefined8 **)(unaff_RDI + 0x28);
  if (puVar1 == puVar3) {
    FUN_00d50b20();
  }
  else {
    *(undefined8 **)(unaff_RDI + 0x28) = puVar3;
    if (puVar1 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
  }
  pvVar4 = _pthread_getspecific(pVar6);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013200d0((int)DAT_023b2560);
  pvVar4 = _pthread_getspecific(pVar6);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01320140(0);
  FUN_00d50b00();
  local_130 = DAT_026f6d08;
  if (DAT_026f6d08 != 0) {
    FUN_00d50b00();
  }
  lVar2 = DAT_026f6d10;
  local_128 = '\x01';
  if (DAT_026f6d10 != 0) {
    FUN_00d50b00();
  }
  local_120 = lVar2;
  local_118 = '\x01';
  local_110 = 0;
  local_108 = '\0';
  FUN_000bf690(&local_120,&local_130,&local_110);
  lVar2 = *(longlong *)(unaff_RDI + 0x50);
  lVar5 = lVar2;
  if (lVar2 != local_30) {
    lVar5 = local_30;
    if (local_28 == '\0') {
      if (local_30 == 0) {
        lVar5 = 0;
        goto LAB_0031962e;
      }
      FUN_00d50b00();
      lVar2 = *(longlong *)(unaff_RDI + 0x50);
      *(longlong *)(unaff_RDI + 0x50) = local_30;
    }
    else {
      local_28 = '\0';
LAB_0031962e:
      *(longlong *)(unaff_RDI + 0x50) = lVar5;
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
      lVar5 = local_30;
    }
  }
  if ((local_28 != '\0') && (lVar5 != 0)) {
    FUN_00d50b20();
  }
  if ((local_108 != '\0') && (local_110 != 0)) {
    FUN_00d50b20();
  }
  if ((local_118 != '\0') && (local_120 != 0)) {
    FUN_00d50b20();
  }
  if ((local_128 != '\0') && (local_130 != 0)) {
    FUN_00d50b20();
  }
  if (unaff_RDI != 0) {
    FUN_00d50b20();
  }
  FUN_00d50b00();
  local_100 = DAT_027022f8;
  if (DAT_027022f8 != 0) {
    FUN_00d50b00();
  }
  lVar2 = DAT_027ebbf0;
  local_f8 = '\x01';
  if (DAT_027ebbf0 != 0) {
    FUN_00d50b00();
  }
  local_f0 = lVar2;
  local_e8 = '\x01';
  local_e0 = 0;
  local_d8 = '\0';
  uVar7 = FUN_000bf690(&local_f0,&local_100,&local_e0);
  lVar2 = *(longlong *)(unaff_RDI + 0x58);
  lVar5 = lVar2;
  if (lVar2 != local_30) {
    lVar5 = local_30;
    if (local_28 == '\0') {
      if (local_30 == 0) {
        lVar5 = 0;
        goto LAB_00319785;
      }
      uVar7 = FUN_00d50b00();
      lVar2 = *(longlong *)(unaff_RDI + 0x58);
      *(longlong *)(unaff_RDI + 0x58) = local_30;
    }
    else {
      local_28 = '\0';
LAB_00319785:
      *(longlong *)(unaff_RDI + 0x58) = lVar5;
    }
    if (lVar2 != 0) {
      uVar7 = FUN_00d50b20();
      lVar5 = local_30;
    }
  }
  if ((local_28 != '\0') && (lVar5 != 0)) {
    uVar7 = FUN_00d50b20();
  }
  if ((local_d8 != '\0') && (local_e0 != 0)) {
    uVar7 = FUN_00d50b20();
  }
  if ((local_e8 != '\0') && (local_f0 != 0)) {
    uVar7 = FUN_00d50b20();
  }
  if ((local_f8 != '\0') && (local_100 != 0)) {
    uVar7 = FUN_00d50b20();
  }
  if (unaff_RDI != 0) {
    uVar7 = FUN_00d50b20();
  }
  lVar2 = DAT_02702300;
  if (DAT_02702300 != 0) {
    uVar7 = FUN_00d50b00();
  }
  local_d0 = lVar2;
  local_c8 = '\x01';
  local_c0 = 0;
  local_b8 = '\0';
  FUN_000bf780(uVar7,&local_c0);
  if ((local_b8 != '\0') && (local_c0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_c8 != '\0') && (local_d0 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d50b00();
  local_b0 = DAT_02702308;
  if (DAT_02702308 != 0) {
    FUN_00d50b00();
  }
  lVar2 = DAT_02702310;
  local_a8 = '\x01';
  if (DAT_02702310 != 0) {
    FUN_00d50b00();
  }
  local_a0 = lVar2;
  local_98 = '\x01';
  local_90 = 0;
  local_88 = '\0';
  uVar7 = FUN_000bf690(&local_a0,&local_b0,&local_90);
  lVar2 = *(longlong *)(unaff_RDI + 0x60);
  lVar5 = lVar2;
  if (lVar2 == local_30) goto LAB_0031999d;
  lVar5 = local_30;
  if (local_28 == '\0') {
    if (local_30 == 0) {
      lVar5 = 0;
      goto LAB_0031995b;
    }
    uVar7 = FUN_00d50b00();
    lVar2 = *(longlong *)(unaff_RDI + 0x60);
    *(longlong *)(unaff_RDI + 0x60) = local_30;
  }
  else {
    local_28 = '\0';
LAB_0031995b:
    *(longlong *)(unaff_RDI + 0x60) = lVar5;
  }
  if (lVar2 != 0) {
    uVar7 = FUN_00d50b20();
    lVar5 = local_30;
  }
LAB_0031999d:
  if ((local_28 != '\0') && (lVar5 != 0)) {
    uVar7 = FUN_00d50b20();
  }
  if ((local_88 != '\0') && (local_90 != 0)) {
    uVar7 = FUN_00d50b20();
  }
  if ((local_98 != '\0') && (local_a0 != 0)) {
    uVar7 = FUN_00d50b20();
  }
  if ((local_a8 != '\0') && (local_b0 != 0)) {
    uVar7 = FUN_00d50b20();
  }
  if (unaff_RDI != 0) {
    uVar7 = FUN_00d50b20();
  }
  lVar2 = DAT_027e3b30;
  if (DAT_027e3b30 != 0) {
    uVar7 = FUN_00d50b00();
  }
  local_80 = lVar2;
  local_78 = '\x01';
  local_70 = 0;
  local_68 = '\0';
  FUN_000bf780(uVar7,&local_70);
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  return;
}


