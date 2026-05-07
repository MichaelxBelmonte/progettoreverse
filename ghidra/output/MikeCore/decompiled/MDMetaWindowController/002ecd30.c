// Function: FUN_002ecd30
// Address: 002ecd30
// Size: 2479 bytes
// Class: MDMetaWindowController
// String references:
//   "MDMetaWindowController"


/* WARNING: Removing unreachable block (ram,0x002ecfe3) */
/* WARNING: Removing unreachable block (ram,0x002ecfef) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_002ecd30(void)

{
  longlong lVar1;
  char cVar2;
  char *pcVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong *plVar8;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar9;
  longlong local_180;
  char local_178;
  longlong local_150;
  char local_148;
  longlong local_140;
  char local_138;
  longlong *local_130;
  char local_128;
  longlong *local_120;
  char local_118;
  longlong *local_110;
  char local_108;
  longlong local_100;
  char local_f8;
  longlong local_f0;
  char local_e8;
  longlong local_e0;
  char local_d8;
  longlong *local_d0;
  char local_c8;
  longlong *local_c0;
  char local_b8;
  longlong local_b0;
  char local_a8;
  longlong *plVar10;
  char local_98;
  char local_80;
  undefined7 uStack_7f;
  char local_78;
  longlong *local_70;
  undefined4 local_64;
  longlong *local_60;
  char local_58 [8];
  longlong *local_50;
  undefined8 local_48;
  int local_40;
  undefined4 local_34;
  
  if (unaff_RDI != (longlong *)0x0) {
    FUN_00d50b00();
  }
  local_80 = '\0';
  plVar10 = unaff_RDI;
  do {
    (**(code **)(*plVar10 + 0x370))();
    plVar6 = local_60;
    if (local_60 == plVar10) {
      if (((local_80 == '\0') && (local_60 != (longlong *)0x0)) && (local_58[0] != '\0')) {
        local_80 = '\x01';
        goto LAB_002ecdd7;
      }
    }
    else {
      if (local_58[0] == '\0') {
        if (local_80 == '\0') {
          pcVar3 = &local_80;
        }
        else {
          FUN_00d50b20();
          pcVar3 = &local_80;
        }
      }
      else {
        if (local_80 != '\0') {
          FUN_00d50b20();
        }
        local_80 = '\x01';
        plVar10 = plVar6;
LAB_002ecdd7:
        local_80 = '\x01';
        pcVar3 = local_58;
        plVar6 = plVar10;
      }
      *pcVar3 = '\0';
      plVar10 = plVar6;
    }
    if ((local_58[0] != '\0') && (local_60 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((DAT_026fddb0 == '\0') && (iVar7 = ___cxa_guard_acquire(), iVar7 != 0)) {
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
    plVar6 = &DAT_02802688;
    if (plVar10 != (longlong *)0x0) {
      (**(code **)(*plVar10 + 0x360))();
      cVar2 = FUN_00e85ea0();
      plVar6 = (longlong *)&stack0xffffffffffffff60;
      if (cVar2 == '\0') {
        plVar6 = &DAT_02802688;
      }
    }
    if (*plVar6 != 0) {
      plVar6 = plVar10;
      if ((local_80 == '\0') && (plVar10 != (longlong *)0x0)) {
        FUN_00d50b00();
      }
      goto joined_r0x002ecf53;
    }
  } while (plVar10 != (longlong *)0x0);
  plVar6 = (longlong *)0x0;
joined_r0x002ecf53:
  if (unaff_RDI != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (plVar6 == (longlong *)0x0) {
    return;
  }
  FUN_0063f230();
  plVar6 = local_60;
  if ((local_58[0] != '\0') && (local_60 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar6 == (longlong *)0x0) {
    FUN_006472c0();
  }
  FUN_006500a0();
  plVar6 = local_60;
  if (local_58[0] == '\0') {
    if (((local_60 != (longlong *)0x0) && (FUN_00d50b00(), local_58[0] != '\0')) &&
       (local_60 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_58[0] = '\0';
  }
  if (plVar6 == (longlong *)0x0) goto LAB_002ed6ce;
  uVar4 = FUN_0063f230();
  plVar8 = local_60;
  if (local_58[0] == '\0') {
    if (local_60 != (longlong *)0x0) {
      FUN_00d50b00();
      if ((local_58[0] != '\0') && (local_60 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_002ed069;
    }
LAB_002ed13f:
    local_70 = local_60;
    local_34 = (undefined4)CONCAT71((int7)((ulonglong)uVar4 >> 8),1);
  }
  else {
    if (local_60 == (longlong *)0x0) goto LAB_002ed13f;
LAB_002ed069:
    cVar2 = FUN_00212c70();
    lVar5 = DAT_027259a0;
    if (cVar2 == '\0') {
      local_70 = plVar8;
      local_34 = 0;
    }
    else {
      uVar9 = extraout_XMM0_Da;
      if (DAT_027259a0 != 0) {
        uVar9 = FUN_00d50b00();
      }
      lVar1 = DAT_026fe4a0;
      if (DAT_026fe4a0 != 0) {
        uVar9 = FUN_00d50b00();
      }
      local_150 = lVar1;
      local_148 = '\x01';
      FUN_01f6ca30(uVar9,&local_150);
      iVar7 = (**(code **)(*local_60 + 0x5e0))();
      if ((local_58[0] != '\0') && (local_60 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_148 != '\0') && (local_150 != 0)) {
        FUN_00d50b20();
      }
      if (lVar5 != 0) {
        FUN_00d50b20();
      }
      if (iVar7 != 0) {
        FUN_00d50b20();
        goto LAB_002ed6ce;
      }
      FUN_002218f0();
      local_140 = *unaff_RSI;
      local_138 = '\0';
      local_70 = plVar8;
      FUN_006500a0();
      plVar8 = plVar6;
      if (plVar6 == local_60) {
LAB_002ed1db:
        if ((local_58[0] != '\0') && (plVar6 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        plVar8 = local_60;
        if (local_58[0] == '\0') {
          if (local_60 != (longlong *)0x0) {
            FUN_00d50b00();
          }
          FUN_00d50b20();
          plVar6 = local_60;
          goto LAB_002ed1db;
        }
        FUN_00d50b20();
        local_58[0] = '\0';
      }
      if ((local_138 != '\0') && (local_140 != 0)) {
        FUN_00d50b20();
      }
      local_34 = 0;
      plVar6 = plVar8;
    }
  }
  uVar4 = FUN_002eb090();
  plVar8 = local_60;
  if (local_58[0] == '\0') {
    if (local_60 != (longlong *)0x0) {
      FUN_00d50b00();
      goto LAB_002ed248;
    }
LAB_002ed344:
    local_64 = (undefined4)CONCAT71((int7)((ulonglong)uVar4 >> 8),1);
  }
  else {
    if (local_60 == (longlong *)0x0) goto LAB_002ed344;
LAB_002ed248:
    local_58[0] = '\0';
    local_60 = (longlong *)0x0;
    local_50 = plVar8;
    local_48 = 0xffffffff;
    local_40 = 0;
    local_48._4_4_ = 0;
    while( true ) {
      if (local_48._4_4_ != 0) {
        if (local_48._4_4_ < 1) {
          iVar7 = -local_48._4_4_;
        }
        else {
          iVar7 = (int)local_48 - local_48._4_4_;
          local_48 = CONCAT44(local_48._4_4_,iVar7);
          FUN_00d23690();
          local_40 = local_40 + local_48._4_4_;
          iVar7 = 0;
        }
        local_48 = CONCAT44(iVar7,(int)local_48);
      }
      lVar5 = (longlong)(int)local_48;
      iVar7 = (int)local_48 + 1;
      local_48 = CONCAT44(local_48._4_4_,iVar7);
      if (*(int *)((longlong)local_50 + 0xc) <= iVar7) break;
      local_130 = *(longlong **)(local_50[2] + 8 + lVar5 * 8);
      local_128 = '\0';
      local_60 = local_130;
      FUN_006500a0(local_50[2],&local_130);
      if ((local_178 != '\0') && (local_180 != 0)) {
        FUN_00d50b20();
      }
      if ((local_128 != '\0') && (local_130 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    FUN_000be170();
    local_64 = 0;
  }
  FUN_003bb720();
  local_118 = '\0';
  local_120 = plVar6;
  uVar9 = FUN_002edd50();
  local_b8 = 0;
  if (local_98 == '\0') {
    if (plVar10 != (longlong *)0x0) {
      uVar9 = FUN_00d50b00();
    }
  }
  else {
    local_98 = '\0';
  }
  local_b8 = '\x01';
  local_108 = '\0';
  local_110 = plVar8;
  local_c0 = plVar10;
  FUN_003b7a90(uVar9,&local_110);
  local_a8 = 0;
  local_b0 = CONCAT71(uStack_7f,local_80);
  local_100 = DAT_026fe4a8;
  if (local_78 == '\0') {
    if (local_b0 != 0) {
      FUN_00d50b00();
      local_100 = DAT_026fe4a8;
    }
  }
  else {
    local_78 = '\0';
  }
  local_a8 = '\x01';
  DAT_026fe4a8 = local_100;
  if (local_100 != 0) {
    local_a8 = '\x01';
    FUN_00d50b00();
  }
  local_f8 = '\x01';
  FUN_0071fb80();
  FUN_0071fab0();
  FUN_004b1320(&local_b0,2,&local_100,1);
  if ((local_f8 != '\0') && (local_100 != 0)) {
    FUN_00d50b20();
  }
  if ((local_a8 != '\0') && (local_b0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_78 != '\0') && (CONCAT71(uStack_7f,local_80) != 0)) {
    FUN_00d50b20();
  }
  if ((local_108 != '\0') && (local_110 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_b8 != '\0') && (local_c0 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_98 != '\0') && (plVar10 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_118 != '\0') && (local_120 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_58[0] != '\0') && (local_60 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((char)local_34 == '\0') {
    FUN_0021a630();
    plVar10 = local_60;
    if ((local_58[0] != '\0') && (local_60 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar10 != (longlong *)0x0) {
      FUN_0021a630();
      FUN_01e42250();
      if ((local_58[0] != '\0') && (local_60 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  FUN_00d403d0();
  local_f0 = DAT_026fe3f0;
  if (DAT_026fe3f0 != 0) {
    FUN_00d50b00();
  }
  local_e8 = '\x01';
  local_c8 = 0;
  if (unaff_RDI != (longlong *)0x0) {
    FUN_00d50b00();
  }
  local_c8 = '\x01';
  local_e0 = 0;
  local_d8 = '\0';
  local_d0 = unaff_RDI;
  FUN_00d40470(&local_e0,&local_d0,1,3);
  if ((local_d8 != '\0') && (local_e0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_c8 != '\0') && (local_d0 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_e8 != '\0') && (local_f0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_58[0] != '\0') && (local_60 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((char)local_64 == '\0') {
    FUN_00d50b20();
  }
  if ((char)local_34 == '\0') {
    FUN_00d50b20();
  }
LAB_002ed6ce:
  if (plVar6 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}


