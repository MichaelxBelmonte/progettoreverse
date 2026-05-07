// Function: FUN_003ad1d0
// Address: 003ad1d0
// Size: 1927 bytes
// Class: MDMetaWindowController
// String references:
//   "MDMetaWindowController"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_003ad1d0(undefined8 param_1,char param_2)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  uint *puVar8;
  longlong *plVar9;
  longlong *unaff_RDI;
  undefined8 unaff_R12;
  undefined7 uVar11;
  ulonglong uVar10;
  undefined4 uVar12;
  longlong local_130;
  char local_128;
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
  longlong *local_c0;
  longlong *local_b8;
  char local_b0;
  char local_68;
  undefined8 local_60;
  char local_58;
  longlong *local_50;
  uint local_48 [2];
  longlong local_40;
  char local_38;
  
  if ((unaff_RDI[0xf] == 0) && (section_000002e8.addr == 0)) {
    uVar10 = 0;
    goto LAB_003ad94a;
  }
  uVar11 = (undefined7)((ulonglong)unaff_R12 >> 8);
  if (param_2 != '\0') {
    bVar1 = *(byte *)((longlong)unaff_RDI + 0xd1);
    *(byte *)((longlong)unaff_RDI + 0xd1) = bVar1 ^ 1;
    uVar10 = CONCAT71(uVar11,1);
    if ((bVar1 == 0) && (0.0 < (double)unaff_RDI[0x1b])) {
      FUN_00d48ad0();
      FUN_00d48ac0();
      plVar9 = (longlong *)unaff_RDI[0x12];
      (**(code **)(*(longlong *)unaff_RDI[0x18] + 0x378))((float)(double)unaff_RDI[0x1b]);
      local_b8 = local_50;
      local_b0 = 0;
      if ((char)local_48[0] == '\0') {
        if (local_50 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_48[0] = local_48[0] & 0xffffff00;
      }
      local_b0 = '\x01';
      (**(code **)(*plVar9 + 0x958))();
      if ((local_b0 != '\0') && (local_b8 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (((char)local_48[0] != '\0') && (local_50 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d48ac0();
    }
    goto LAB_003ad94a;
  }
  FUN_01caeae0();
  plVar9 = local_50;
  if ((char)local_48[0] == '\0') {
    if (local_50 != (longlong *)0x0) {
      FUN_00d50b00();
      if (((char)local_48[0] != '\0') && (local_50 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_003ad2ec;
    }
  }
  else if (local_50 != (longlong *)0x0) {
LAB_003ad2ec:
    local_c0 = plVar9;
    FUN_00d50b00();
    local_60._0_1_ = '\0';
    do {
      (**(code **)(*unaff_RDI + 0x370))();
      plVar9 = local_50;
      if (local_50 == unaff_RDI) {
        if ((((char)local_60 == '\0') && (local_50 != (longlong *)0x0)) &&
           ((char)local_48[0] != '\0')) {
          local_60._0_1_ = 1;
          goto LAB_003ad377;
        }
      }
      else {
        if ((char)local_48[0] == '\0') {
          if ((char)local_60 == '\0') {
            puVar8 = (uint *)&local_60;
          }
          else {
            FUN_00d50b20();
            puVar8 = (uint *)&local_60;
          }
        }
        else {
          if ((char)local_60 != '\0') {
            FUN_00d50b20();
          }
          local_60._0_1_ = 1;
          unaff_RDI = plVar9;
LAB_003ad377:
          local_60._0_1_ = '\x01';
          puVar8 = local_48;
          plVar9 = unaff_RDI;
        }
        *(undefined1 *)puVar8 = 0;
        unaff_RDI = plVar9;
      }
      if (((char)local_48[0] != '\0') && (local_50 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((DAT_026fddb0 == '\0') && (iVar6 = ___cxa_guard_acquire(), iVar6 != 0)) {
        _DAT_026e0ab8 = FUN_00015ff0();
        _DAT_026e0aa0 = "MDMetaWindowController";
        _DAT_026e0aa8 = 0x198;
        _DAT_026e0ab0 = FUN_0006dea0;
        _DAT_026e0ac0 = 0;
        uRam00000000026e0ac8 = 0;
        _DAT_026e0ad0 = 0;
        _DAT_026e0b48 = 0;
        uRam00000000026e0b50 = 0;
        _DAT_026e0b58 = 0;
        DAT_026e0b5a = 1;
        _DAT_026e0ad8 = 0;
        uRam00000000026e0ae0 = 0;
        _DAT_026e0ae8 = 0;
        uRam00000000026e0af0 = 0;
        _DAT_026e0af8 = 0;
        uRam00000000026e0b00 = 0;
        _DAT_026e0b08 = 0;
        uRam00000000026e0b10 = 0;
        _DAT_026e0b18 = 0;
        uRam00000000026e0b20 = 0;
        _DAT_026e0b28 = 0;
        uRam00000000026e0b30 = 0;
        _DAT_026e0b38 = 0;
        uRam00000000026e0b40 = 0;
        DAT_026e0b63 = 0;
        _DAT_026e0b5b = 0;
        ___cxa_guard_release();
      }
      plVar9 = &DAT_02802688;
      if (unaff_RDI != (longlong *)0x0) {
        (**(code **)(*unaff_RDI + 0x360))();
        cVar5 = FUN_00e85ea0();
        plVar9 = (longlong *)&stack0xffffffffffffff90;
        if (cVar5 == '\0') {
          plVar9 = &DAT_02802688;
        }
      }
      if (*plVar9 != 0) {
        plVar9 = unaff_RDI;
        if (((char)local_60 == '\0') && (unaff_RDI != (longlong *)0x0)) {
          FUN_00d50b00();
        }
        goto LAB_003ad4fa;
      }
    } while (unaff_RDI != (longlong *)0x0);
    plVar9 = (longlong *)0x0;
LAB_003ad4fa:
    FUN_00d50b20();
    if (plVar9 == (longlong *)0x0) {
      uVar10 = 1;
LAB_003ad5d7:
      lVar3 = DAT_026f6f70;
      if (DAT_026f6f70 != 0) {
        FUN_00d50b00();
      }
      lVar2 = DAT_02705118;
      local_f0 = lVar3;
      local_e8 = '\x01';
      if (DAT_02705118 != 0) {
        FUN_00d50b00();
      }
      local_e0 = lVar2;
      local_d8 = '\x01';
      local_d0 = 0;
      local_c8 = '\0';
      FUN_00d31230(&local_d0,&local_e0);
      plVar4 = local_50;
      if ((char)local_48[0] == '\0') {
        if (local_50 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_48[0] = local_48[0] & 0xffffff00;
      }
      FUN_01d64eb0();
      if (plVar4 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if (((char)local_48[0] != '\0') && (local_50 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_c8 != '\0') && (local_d0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_d8 != '\0') && (local_e0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_e8 != '\0') && (local_f0 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      uVar7 = FUN_00657180((int)DAT_02395720);
      lVar3 = DAT_026f6f70;
      uVar10 = (ulonglong)uVar7;
      if ((int)uVar7 < 2) goto LAB_003ad5d7;
      if (DAT_026f6f70 != 0) {
        FUN_00d50b00();
      }
      lVar2 = DAT_02705110;
      if (DAT_02705110 != 0) {
        FUN_00d50b00();
      }
      local_110 = lVar2;
      local_108 = '\x01';
      local_100 = 0;
      local_f8 = '\0';
      FUN_00d31230(&local_100,&local_110);
      lVar2 = CONCAT71(local_60._1_7_,(char)local_60);
      if (local_58 == '\0') {
        if (lVar2 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_58 = '\0';
      }
      uVar12 = FUN_00d46530();
      local_48[0] = 1;
      local_50 = &DAT_024c5048;
      local_38 = 0;
      if (local_130 != 0) {
        uVar12 = FUN_00d50b00();
      }
      local_40 = local_130;
      local_38 = '\x01';
      FUN_00d93690(uVar12,&local_50);
      if (local_68 == '\0') {
        if (unaff_RDI != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_68 = '\0';
      }
      FUN_01d64eb0();
      if (unaff_RDI != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if ((local_68 != '\0') && (unaff_RDI != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      local_50 = &DAT_024c5048;
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if ((local_128 != '\0') && (local_130 != 0)) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      if ((local_58 != '\0') && (CONCAT71(local_60._1_7_,(char)local_60) != 0)) {
        FUN_00d50b20();
      }
      if ((local_f8 != '\0') && (local_100 != 0)) {
        FUN_00d50b20();
      }
      if ((local_108 != '\0') && (local_110 != 0)) {
        FUN_00d50b20();
      }
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      uVar10 = 1;
    }
    FUN_01d66ab0();
    uVar10 = CONCAT71((int7)(uVar10 >> 8),(int)uVar10 != 0);
    if (plVar9 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
    goto LAB_003ad94a;
  }
  uVar10 = CONCAT71(uVar11,1);
LAB_003ad94a:
  return uVar10 & 0xffffffff;
}


