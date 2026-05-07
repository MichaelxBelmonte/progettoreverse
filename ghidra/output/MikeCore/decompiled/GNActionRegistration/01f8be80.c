// Function: FUN_01f8be80
// Address: 01f8be80
// Size: 1534 bytes
// Class: GNActionRegistration
// String references:
//   "GNActionRegistration"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_01f8be80(void)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  char cVar6;
  int iVar7;
  longlong **pplVar8;
  ulonglong uVar9;
  longlong *unaff_RSI;
  undefined8 unaff_RDI;
  bool bVar10;
  bool bVar11;
  undefined4 uVar12;
  longlong local_138;
  char local_130;
  longlong local_128;
  char local_120;
  longlong *local_118;
  char local_110;
  longlong local_108;
  char local_100;
  longlong local_f8;
  char local_f0;
  longlong local_e8;
  char local_e0;
  longlong *local_d8;
  char local_d0;
  longlong local_88;
  char local_80;
  longlong local_78;
  char local_70;
  longlong *local_68;
  char local_60;
  longlong local_58;
  char local_50;
  longlong *local_48;
  longlong *local_40;
  char local_38;
  
  uVar12 = FUN_01da4890();
  local_128 = *unaff_RSI;
  local_120 = '\0';
  FUN_01da5610(uVar12,&local_128);
  plVar5 = local_d8;
  if (local_d0 == '\0') {
    if (((local_d8 != (longlong *)0x0) && (FUN_00d50b00(), local_d0 != '\0')) &&
       (local_d8 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_d0 = '\0';
  }
  if ((local_120 != '\0') && (local_128 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar5 == (longlong *)0x0) {
    uVar9 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
    goto LAB_01f8c37d;
  }
  pplVar8 = &local_d8;
  FUN_01eda0f0();
  plVar1 = local_d8;
  if ((DAT_026e7b78 == '\0') && (iVar7 = ___cxa_guard_acquire(), iVar7 != 0)) {
    _DAT_026e7ac8 = FUN_00d4fe50();
    _DAT_026e7ab0 = "GNActionRegistration";
    _DAT_026e7ab8 = 0x38;
    _DAT_026e7ac0 = FUN_001a8af0;
    _DAT_026e7ad0 = 0;
    uRam00000000026e7ad8 = 0;
    _DAT_026e7ae0 = 0;
    uRam00000000026e7ae8 = 0;
    _DAT_026e7af0 = 0;
    uRam00000000026e7af8 = 0;
    _DAT_026e7b00 = 0;
    uRam00000000026e7b08 = 0;
    _DAT_026e7b10 = 0;
    uRam00000000026e7b18 = 0;
    _DAT_026e7b20 = 0;
    uRam00000000026e7b28 = 0;
    _DAT_026e7b30 = 0;
    uRam00000000026e7b38 = 0;
    _DAT_026e7b40 = 0;
    uRam00000000026e7b48 = 0;
    _DAT_026e7b50 = 0;
    uRam00000000026e7b58 = 0;
    _DAT_026e7b60 = 0;
    uRam00000000026e7b68 = 0;
    _DAT_026e7b70 = 0;
    ___cxa_guard_release();
  }
  if (plVar1 == (longlong *)0x0) {
LAB_01f8bf6c:
    pplVar8 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar6 = FUN_00e85ea0();
    if (cVar6 == '\0') goto LAB_01f8bf6c;
  }
  plVar1 = *pplVar8;
  if (*(char *)(pplVar8 + 1) == '\0') {
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar8 + 1) = 0;
  }
  if ((local_d0 != '\0') && (local_d8 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 == (longlong *)0x0) {
LAB_01f8c08c:
    local_48 = plVar1;
    uVar12 = FUN_01caf660();
    local_118 = plVar5;
    local_110 = '\0';
    FUN_01caffb0(uVar12,&local_118);
    local_40 = local_d8;
    local_38 = 0;
    if (local_d0 == '\0') {
      if (local_d8 == (longlong *)0x0) {
        local_40 = (longlong *)0x0;
        local_38 = '\x01';
      }
      else {
        FUN_00d50b00();
        local_38 = '\x01';
        if ((local_d0 != '\0') && (local_d8 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    else {
      local_40 = local_d8;
      local_38 = '\x01';
      local_d0 = '\0';
    }
    if ((local_110 != '\0') && (local_118 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    bVar10 = local_40 == (longlong *)0x0;
    if (bVar10) {
      bVar11 = true;
    }
    else {
      FUN_01d3d730();
      local_88 = DAT_02801088;
      local_80 = 0;
      if (DAT_02801088 != 0) {
        FUN_00d50b00();
      }
      lVar3 = DAT_02801090;
      local_80 = '\x01';
      local_70 = 0;
      if (DAT_02801090 != 0) {
        FUN_00d50b00();
      }
      local_78 = lVar3;
      local_70 = '\x01';
      FUN_01f8c8c0(&local_40,&local_88,&local_78);
      FUN_000b4da0();
      lVar3 = local_58;
      if (local_50 == '\0') {
        if (((local_58 != 0) && (FUN_00d50b00(), local_50 != '\0')) && (local_58 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_50 = '\0';
      }
      uVar12 = FUN_002d10d0();
      if ((local_70 != '\0') && (local_78 != 0)) {
        uVar12 = FUN_00d50b20();
      }
      if ((local_80 != '\0') && (local_88 != 0)) {
        uVar12 = FUN_00d50b20();
      }
      if ((local_130 != '\0') && (local_138 != 0)) {
        uVar12 = FUN_00d50b20();
      }
      lVar2 = DAT_027f1fc8;
      if (DAT_027f1fc8 != 0) {
        uVar12 = FUN_00d50b00();
      }
      lVar4 = DAT_02801098;
      local_108 = lVar2;
      local_100 = '\x01';
      if (DAT_02801098 != 0) {
        uVar12 = FUN_00d50b00();
      }
      local_f8 = lVar4;
      local_f0 = '\x01';
      FUN_01f6ca30(uVar12,&local_f8);
      local_e8 = lVar3;
      local_e0 = '\0';
      iVar7 = (**(code **)(*local_d8 + 0x5d8))();
      bVar11 = iVar7 == 1;
      if ((local_e0 != '\0') && (local_e8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_d0 != '\0') && (local_d8 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_f0 != '\0') && (local_f8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_100 != '\0') && (local_108 != 0)) {
        FUN_00d50b20();
      }
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (local_48 != (longlong *)0x0) goto LAB_01f8c368;
  }
  else {
    FUN_01caf470();
    local_68 = local_d8;
    local_60 = 0;
    if (local_d0 == '\0') {
      if (local_d8 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_d0 = '\0';
    }
    local_60 = '\x01';
    cVar6 = (**(code **)(*plVar5 + 0x50))();
    if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_d0 != '\0') && (local_d8 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (cVar6 == '\0') goto LAB_01f8c08c;
    bVar10 = true;
    bVar11 = true;
LAB_01f8c368:
    FUN_00d50b20();
  }
  FUN_00d50b20();
  uVar9 = (ulonglong)(byte)(!bVar11 | bVar10);
LAB_01f8c37d:
  return uVar9 & 0xffffffff;
}


