// ===== MUMultiTrackItem — Annotated small functions =====
// 8 readable functions

// ==================================================
// @004f6020 (2305 bytes) — math_loop

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  uint uVar6;
  longlong lVar7;
  longlong **pplVar8;
  int iVar9;
  ulonglong uVar10;
  longlong this;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar11;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  longlong local_f0;
  char local_e8;
  longlong *local_e0;
  char local_d8;
  longlong local_d0;
  char local_c8;
  longlong *local_c0;
  longlong *local_b8;
  undefined4 local_ac;
  longlong *local_a8;
  char local_a0;
  longlong *local_98;
  char local_90;
  longlong local_88;
  char local_80;
  longlong *local_78;
  char local_70;
  longlong *local_68;
  undefined8 local_60;
  int local_58;
  longlong *local_50;
  longlong *local_48;
  longlong *local_40;
  char local_38;
  
  FUN_004f5840();
  if (local_70 == '\0') {
    if (local_78 == (longlong *)0x0) {
      return 0;
    }
    local_c0 = local_78;
    FUN_00d50b00();
    if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_c0 = local_78;
    if (local_78 == (longlong *)0x0) {
      return 0;
    }
  }
  if (*(longlong *)(this + 0xd0) == 0) {
LAB_004f61d8:
    uVar10 = 0;
    goto LAB_004f68e8;
  }
  uVar6 = FUN_004f5d60();
  uVar10 = (ulonglong)uVar6;
  if ((param_2 & (byte)uVar6) != 1) goto LAB_004f68e8;
  FUN_01c00e50();
  FUN_01bbfb40();
  plVar1 = local_40;
  FUN_000829c0();
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x360))();
    FUN_00e85ea0();
  }
  FUN_002efed0();
  plVar1 = local_78;
  if (local_70 == '\0') {
    if (((local_78 != (longlong *)0x0) && (FUN_00d50b00(), local_70 != '\0')) &&
       (local_78 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_70 = '\0';
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  if (plVar1 == (longlong *)0x0) goto LAB_004f61d8;
  FUN_01c00e50();
  FUN_01bbfb40();
  FUN_01beea30();
  local_50 = local_78;
  if (local_70 == '\0') {
    if (((local_78 != (longlong *)0x0) && (FUN_00d50b00(), local_70 != '\0')) &&
       (local_78 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_70 = '\0';
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  FUN_01c00e50();
  plVar2 = local_40;
  if (local_38 == '\0') {
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  local_78 = plVar2;
  local_70 = '\0';
  cVar3 = FUN_00d23d70();
  if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar2 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar3 == '\0') {
    FUN_01c00e50();
    local_a8 = local_40;
    local_a0 = 0;
    if (local_38 == '\0') {
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_a0 = '\x01';
    FUN_003bc740();
    plVar2 = local_78;
    if (local_50 == local_78) {
LAB_004f6356:
      if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      if (local_70 == '\0') {
        if (local_78 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        if (local_50 == (longlong *)0x0) {
          local_50 = plVar2;
        }
        else {
          local_50 = plVar2;
          FUN_00d50b20();
        }
        goto LAB_004f6356;
      }
      if (local_50 != (longlong *)0x0) {
        local_50 = local_78;
        FUN_00d50b20();
      }
      local_70 = '\0';
      local_50 = plVar2;
    }
    if ((local_a0 != '\0') && (local_a8 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  local_e0 = local_50;
  local_d8 = '\0';
  FUN_01c00e50();
  FUN_01bbfb40();
  FUN_01beead0();
  local_98 = local_40;
  local_90 = 0;
  if (local_38 == '\0') {
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  local_90 = '\x01';
  uVar4 = FUN_0071fb80();
  uVar5 = FUN_0071fab0();
  local_c8 = '\0';
  local_d0 = 0;
  FUN_004b0830(&local_98,&local_e0,uVar4,uVar5);
  plVar2 = local_78;
  if (local_70 == '\0') {
    if (((local_78 != (longlong *)0x0) && (FUN_00d50b00(), local_70 != '\0')) &&
       (local_78 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_70 = '\0';
  }
  if ((local_c8 != '\0') && (local_d0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_90 != '\0') && (local_98 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  if ((local_e8 != '\0') && (local_f0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_d8 != '\0') && (local_e0 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  local_ac = (**(code **)(**(longlong **)(this + 0xd0) + 0x920))();
  uVar10 = 0;
  if (plVar2 != (longlong *)0x0) {
    local_48 = plVar1;
    local_70 = '\0';
    local_78 = (longlong *)0x0;
    local_b8 = plVar2;
    local_68 = plVar2;
    local_60 = 0xffffffff;
    local_58 = 0;
    uVar10 = 0;
    uVar11 = extraout_XMM0_Da;
    while( true ) {
      iVar9 = (int)uVar10;
      if (iVar9 != 0) {
        if (iVar9 < 1) {
          uVar10 = (ulonglong)(uint)-iVar9;
        }
        else {
          local_60 = CONCAT44(local_60._4_4_,(int)local_60 - iVar9);
          FUN_00d23690(uVar11,uVar10);
          local_58 = local_58 + iVar9;
          uVar10 = 0;
        }
        local_60 = CONCAT44((int)uVar10,(int)local_60);
      }
      lVar7 = (longlong)(int)local_60;
      iVar9 = (int)local_60 + 1;
      local_60 = CONCAT44(local_60._4_4_,iVar9);
      if (*(int *)((longlong)local_68 + 0xc) <= iVar9) break;
      plVar1 = *(longlong **)(local_68[2] + 8 + lVar7 * 8);
      local_78 = plVar1;
      if ((DAT_026fe4e0 == '\0') && (iVar9 = ___cxa_guard_acquire(), iVar9 != 0)) {
        _DAT_026d7a88 = FUN_00d4fe50();
        _DAT_026d7a70 = "MUMultiTrackItem";
        _DAT_026d7a78 = 0x60;
        _DAT_026d7a80 = FUN_0006eae0;
        _DAT_026d7a90 = 0;
        uRam00000000026d7a98 = 0;
        _DAT_026d7aa0 = 0;
        _DAT_026d7b18 = 0;
        uRam00000000026d7b20 = 0;
        _DAT_026d7b28 = 0;
        DAT_026d7b2a = 1;
        _DAT_026d7aa8 = 0;
        uRam00000000026d7ab0 = 0;
        _DAT_026d7ab8 = 0;
        uRam00000000026d7ac0 = 0;
        _DAT_026d7ac8 = 0;
        uRam00000000026d7ad0 = 0;
        _DAT_026d7ad8 = 0;
        uRam00000000026d7ae0 = 0;
        _DAT_026d7ae8 = 0;
        uRam00000000026d7af0 = 0;
        _DAT_026d7af8 = 0;
        uRam00000000026d7b00 = 0;
        _DAT_026d7b08 = 0;
        uRam00000000026d7b10 = 0;
        DAT_026d7b33 = 0;
        _DAT_026d7b2b = 0;
        ___cxa_guard_release();
      }
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x360))();
        FUN_00e85ea0();
      }
      uVar11 = FUN_01bc1260();
      plVar1 = local_40;
      if ((DAT_02700410 == '\0') &&
         (iVar9 = ___cxa_guard_acquire(), uVar11 = extraout_XMM0_Da_01, iVar9 != 0)) {
        _DAT_02700360 = FUN_00138900();
        _DAT_02700348 = "MDTransferPluginTrackHeaderViewController";
        _DAT_02700350 = 0xd8;
        _DAT_02700358 = FUN_00306f50;
        _DAT_02700368 = 0;
        uRam0000000002700370 = 0;
        _DAT_02700378 = 0;
        _DAT_027003f0 = 0;
        uRam00000000027003f8 = 0;
        _DAT_02700400 = 0;
        DAT_02700402 = 1;
        _DAT_02700380 = 0;
        uRam0000000002700388 = 0;
        _DAT_02700390 = 0;
        uRam0000000002700398 = 0;
        _DAT_027003a0 = 0;
        uRam00000000027003a8 = 0;
        _DAT_027003b0 = 0;
        uRam00000000027003b8 = 0;
        _DAT_027003c0 = 0;
        uRam00000000027003c8 = 0;
        _DAT_027003d0 = 0;
        uRam00000000027003d8 = 0;
        _DAT_027003e0 = 0;
        uRam00000000027003e8 = 0;
        DAT_0270040b = 0;
        _DAT_02700403 = 0;
        uVar11 = ___cxa_guard_release();
      }
      pplVar8 = (longlong **)&DAT_02802688;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x360))();
        cVar3 = FUN_00e85ea0();
        pplVar8 = &local_40;
        uVar11 = extraout_XMM0_Da_00;
        if (cVar3 == '\0') {
          pplVar8 = (longlong **)&DAT_02802688;
        }
      }
      plVar1 = *pplVar8;
      if (*(char *)(pplVar8 + 1) == '\0') {
        if (plVar1 != (longlong *)0x0) {
          uVar11 = FUN_00d50b00();
        }
      }
      else {
        *(undefined1 *)(pplVar8 + 1) = 0;
      }
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        uVar11 = FUN_00d50b20();
      }
      if (plVar1 != (longlong *)0x0) {
        FUN_004f5840();
        if (local_38 == '\0') {
          if (local_40 != (longlong *)0x0) {
            FUN_00d50b00();
            if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            goto LAB_004f66e0;
          }
        }
        else if (local_40 != (longlong *)0x0) {
LAB_004f66e0:
          if (plVar1[0x1a] != 0) {
            FUN_005366c0();
            FUN_004f5aa0();
            FUN_01cee390();
          }
          FUN_00d50b20();
        }
        uVar11 = FUN_00d50b20();
      }
      uVar10 = local_60 >> 0x20;
    }
    FUN_00083b20();
    FUN_00d50b20();
  }
  if (local_50 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  uVar10 = CONCAT71((int7)(uVar10 >> 8),1);
  FUN_00d50b20();
LAB_004f68e8:
  FUN_00d50b20();
  return uVar10;
}




// ==================================================
// @002e8930 (1825 bytes) — calculation

{
  longlong *plVar1;
  char cVar2;
  longlong *plVar3;
  longlong *arg1;
  longlong *this;
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
  
  lVar4 = *arg1;
  if (this[0x4b] == lVar4) {
    return;
  }
  this[0x4b] = lVar4;
  if (lVar4 == 0) {
    lVar4 = 0;
    if (this[0x47] != 0) {
      FUN_00d50130();
      lVar4 = this[0x47];
    }
    if (lVar4 != 0) {
      this[0x47] = 0;
      FUN_00d50b20();
    }
    if (this[0x58] == 0) {
      return;
    }
    this[0x58] = 0;
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
  local_138 = this[0x4b];
  local_130 = '\0';
  FUN_000bf690(&local_148,&local_158,&local_138);
  plVar1 = (longlong *)this[0x47];
  plVar3 = plVar1;
  if (plVar1 != local_38) {
    if (local_30 == '\0') {
      if (local_38 == (longlong *)0x0) {
        plVar3 = (longlong *)0x0;
        goto LAB_002e8a1e;
      }
      FUN_00d50b00();
      plVar1 = (longlong *)this[0x47];
      this[0x47] = (longlong)local_38;
      plVar3 = local_38;
    }
    else {
      local_30 = '\0';
      plVar3 = local_38;
LAB_002e8a1e:
      this[0x47] = (longlong)plVar3;
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
  if (this != (longlong *)0x0) {
    FUN_00d50b20();
  }
  FUN_00d50b00();
  local_128 = DAT_026fe478;
  if (DAT_026fe478 != 0) {
    FUN_00d50b00();
  }
  local_120 = '\x01';
  (**(code **)(*(longlong *)this[0x4b] + 0x498))();
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
  plVar1 = (longlong *)this[0x58];
  plVar3 = plVar1;
  if (plVar1 == local_38) goto LAB_002e8cf1;
  if (local_30 == '\0') {
    if (local_38 == (longlong *)0x0) {
      plVar3 = (longlong *)0x0;
      goto LAB_002e8ca6;
    }
    FUN_00d50b00();
    plVar1 = (longlong *)this[0x58];
    this[0x58] = (longlong)local_38;
    plVar3 = local_38;
  }
  else {
    local_30 = '\0';
    plVar3 = local_38;
LAB_002e8ca6:
    this[0x58] = (longlong)plVar3;
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
  if (this != (longlong *)0x0) {
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
    (**(code **)(*this + 0x9e8))();
  }
  else {
    (**(code **)(*this + 0x9e8))();
  }
  return;
}




// ==================================================
// @002e7520 (1427 bytes) — calculation

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  char cVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined8 *this;
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
    *this = plVar7;
    *(undefined1 *)(this + 1) = 1;
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
  *this = plVar1;
  *(undefined1 *)(this + 1) = 1;
  if (plVar8 != (longlong *)0x0) {
    FUN_00d50b20();
  }
LAB_002e7a7f:
  if (plVar7 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (plVar4 == (longlong *)0x0) {
    *(undefined1 *)(this + 1) = 0;
    *this = 0;
  }
  return;
}




// ==================================================
// @004f7da0 (1253 bytes) — calculation

{
  char cVar1;
  undefined8 *puVar2;
  void *pvVar3;
  longlong lVar4;
  undefined8 *this;
  undefined8 *puVar5;
  undefined4 uVar6;
  float fVar7;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  puVar2 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar2 = &DAT_024ff098;
  puVar2[7] = 0;
  *(undefined2 *)(puVar2 + 8) = 0;
  *(undefined8 *)((longlong)puVar2 + 0x44) = 0;
  *(undefined8 *)((longlong)puVar2 + 0x4c) = 0;
  *(undefined1 *)((longlong)puVar2 + 0x54) = 0;
  FUN_00d500e0();
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar6 = FUN_012f4ba0();
  lVar4 = DAT_02708bf0;
  if (DAT_02708bf0 != 0) {
    uVar6 = FUN_00d50b00();
  }
  local_40 = lVar4;
  local_38 = '\0';
  FUN_00ca0840(uVar6,&local_40);
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  pvVar3 = _pthread_getspecific(param_1);
  puVar5 = puVar2;
  if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
    puVar5 = (undefined8 *)puVar2[(ulonglong)(*(uint *)(lVar4 + 0x154) & 1) + 4];
  }
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  cVar1 = FUN_012f49e0();
  if (*(char *)(puVar5 + 8) != cVar1) {
    if ((*(char *)(puVar5 + 8) == '\0') && (*(char *)((longlong)puVar5 + 0x41) != '\0')) {
      FUN_00d64850();
      *(undefined1 *)((longlong)puVar5 + 0x41) = 0;
      FUN_00d64910();
      FUN_004f7ad0();
    }
    FUN_00d64850();
    *(char *)(puVar5 + 8) = cVar1;
    FUN_00d64910();
    FUN_004f7ad0();
  }
  pvVar3 = _pthread_getspecific(param_1);
  puVar5 = puVar2;
  if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
    puVar5 = (undefined8 *)puVar2[(ulonglong)(*(uint *)(lVar4 + 0x154) & 1) + 4];
  }
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  cVar1 = FUN_012f49f0();
  if (*(char *)((longlong)puVar5 + 0x41) != cVar1) {
    if ((*(char *)((longlong)puVar5 + 0x41) == '\0') && (*(char *)(puVar5 + 8) != '\0')) {
      FUN_00d64850();
      *(undefined1 *)(puVar5 + 8) = 0;
      FUN_00d64910();
      FUN_004f7ad0();
    }
    FUN_00d64850();
    *(char *)((longlong)puVar5 + 0x41) = cVar1;
    FUN_00d64910();
    FUN_004f7ad0();
  }
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e7d10();
  lVar4 = local_40;
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if (lVar4 != 0) {
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e7d10();
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_011f2610();
    lVar4 = local_40;
    if (local_38 == '\0') {
      if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38 = '\0';
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if (lVar4 != 0) {
      pvVar3 = _pthread_getspecific(param_1);
      puVar5 = puVar2;
      if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
        puVar5 = (undefined8 *)puVar2[(ulonglong)(*(uint *)(lVar4 + 0x154) & 1) + 4];
      }
      pvVar3 = _pthread_getspecific(param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      fVar7 = (float)FUN_012a46e0();
      if ((*(float *)((longlong)puVar5 + 0x44) != fVar7) ||
         (NAN(*(float *)((longlong)puVar5 + 0x44)) || NAN(fVar7))) {
        FUN_00d64850();
        *(float *)((longlong)puVar5 + 0x44) = fVar7;
        FUN_00d64910();
        FUN_004f7ad0();
      }
      FUN_00d50b20();
    }
  }
  *this = puVar2;
  *(undefined1 *)(this + 1) = 1;
  return;
}




// ==================================================
// @004f73e0 (1251 bytes) — logic_branch

{
  int iVar1;
  
  if (DAT_028098e8 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_028098b0 = FUN_004fb760();
      _DAT_028098a8 = "isSolo";
      _DAT_028098b8 = 0;
      _DAT_028098c0 = &DAT_02709a40;
      _DAT_028098c8 = FUN_004fb960;
      _DAT_028098d0 = FUN_004f78f0;
      _DAT_028098d8 = 0;
      uRam00000000028098e0 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_02809930 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_028098f8 = FUN_004fb760();
      _DAT_028098f0 = "setIsSolo";
      _DAT_02809900 = 0;
      _DAT_02809908 = &DAT_02709a42;
      _DAT_02809910 = FUN_004fb990;
      _DAT_02809918 = FUN_004f7900;
      _DAT_02809920 = 0;
      uRam0000000002809928 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_02809978 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_02809940 = FUN_004fb760();
      _DAT_02809938 = "isMuted";
      _DAT_02809948 = 0;
      _DAT_02809950 = &DAT_02709a40;
      _DAT_02809958 = FUN_004fb960;
      _DAT_02809960 = FUN_004f7980;
      _DAT_02809968 = 0;
      uRam0000000002809970 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028099c0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_02809988 = FUN_004fb760();
      _DAT_02809980 = "setIsMuted";
      _DAT_02809990 = 0;
      _DAT_02809998 = &DAT_02709a42;
      _DAT_028099a0 = FUN_004fb990;
      _DAT_028099a8 = FUN_004f7990;
      _DAT_028099b0 = 0;
      uRam00000000028099b8 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_02809a08 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_028099d0 = FUN_004fb760();
      _DAT_028099c8 = "setTrackHeaderHeight";
      _DAT_028099d8 = 0;
      _DAT_028099e0 = &DAT_02709a45;
      _DAT_028099e8 = FUN_004fb9b0;
      _DAT_028099f0 = FUN_004f7a00;
      _DAT_028099f8 = 0;
      uRam0000000002809a00 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_02809a50 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_02809a18 = FUN_004fb760();
      _DAT_02809a10 = "setVolume";
      _DAT_02809a20 = 0;
      _DAT_02809a28 = &DAT_02709a48;
      _DAT_02809a30 = FUN_004fb9d0;
      _DAT_02809a38 = FUN_004f7a20;
      _DAT_02809a40 = 0;
      uRam0000000002809a48 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_02809a98 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_02809a60 = FUN_004fb760();
      _DAT_02809a58 = "getVolume";
      _DAT_02809a68 = 0;
      _DAT_02809a70 = &DAT_02709a4b;
      _DAT_02809a78 = FUN_004fba00;
      _DAT_02809a80 = FUN_004f7a80;
      _DAT_02809a88 = 0;
      uRam0000000002809a90 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_02809ae0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_02809aa8 = FUN_004fb760();
      _DAT_02809aa0 = "_setVolume";
      _DAT_02809ab0 = 0;
      _DAT_02809ab8 = &DAT_02709a4d;
      _DAT_02809ac0 = FUN_004fba30;
      _DAT_02809ac8 = FUN_004fac10;
      _DAT_02809ad0 = 0;
      uRam0000000002809ad8 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  return;
}




// ==================================================
// @01be82b0 (1080 bytes) — calculation

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *this;
  
  FUN_01e3b710();
  *(undefined4 *)((longlong)this + 0x204) = 0x43480000;
  *(undefined1 *)((longlong)this + 0x20c) = 1;
  (**(code **)(*this + 0x4d0))(0,_DAT_0241e200);
  (**(code **)(*this + 0x570))();
  (**(code **)(*this + 0x558))();
  plVar3 = (longlong *)FUN_00e8fc40();
  func_0x00081f40();
  (**(code **)(*plVar3 + 0x18))();
  plVar1 = (longlong *)this[0x2a];
  if (plVar1 == plVar3) {
    FUN_00d50b20();
  }
  else {
    this[0x2a] = (longlong)plVar3;
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  if ((DAT_026fe4e0 == '\0') && (iVar2 = ___cxa_guard_acquire(), iVar2 != 0)) {
    _DAT_026d7a88 = FUN_00d4fe50();
    _DAT_026d7a70 = "MUMultiTrackItem";
    _DAT_026d7a78 = 0x60;
    _DAT_026d7a80 = FUN_0006eae0;
    _DAT_026d7a90 = 0;
    uRam00000000026d7a98 = 0;
    _DAT_026d7aa0 = 0;
    _DAT_026d7b18 = 0;
    uRam00000000026d7b20 = 0;
    _DAT_026d7b28 = 0;
    DAT_026d7b2a = 1;
    _DAT_026d7aa8 = 0;
    uRam00000000026d7ab0 = 0;
    _DAT_026d7ab8 = 0;
    uRam00000000026d7ac0 = 0;
    _DAT_026d7ac8 = 0;
    uRam00000000026d7ad0 = 0;
    _DAT_026d7ad8 = 0;
    uRam00000000026d7ae0 = 0;
    _DAT_026d7ae8 = 0;
    uRam00000000026d7af0 = 0;
    _DAT_026d7af8 = 0;
    uRam00000000026d7b00 = 0;
    _DAT_026d7b08 = 0;
    uRam00000000026d7b10 = 0;
    DAT_026d7b33 = 0;
    _DAT_026d7b2b = 0;
    ___cxa_guard_release();
  }
  lVar4 = FUN_00e86210();
  if (lVar4 != 0) {
    FUN_00d50b00();
  }
  FUN_01d25f20();
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  FUN_01d2d3a0();
  FUN_01d2d390();
  plVar1 = this + 0x27;
  (**(code **)(this[0x27] + 0x10))();
  FUN_00d50b00();
  FUN_01d25fa0();
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x10))();
    FUN_00d50b20();
  }
  plVar5 = (longlong *)FUN_00e8fc40();
  func_0x00081f40();
  (**(code **)(*plVar5 + 0x18))();
  plVar3 = (longlong *)this[0x2b];
  if (plVar3 == plVar5) {
    FUN_00d50b20();
  }
  else {
    this[0x2b] = (longlong)plVar5;
    if (plVar3 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  if ((DAT_026fe4e0 == '\0') && (iVar2 = ___cxa_guard_acquire(), iVar2 != 0)) {
    _DAT_026d7a88 = FUN_00d4fe50();
    _DAT_026d7a70 = "MUMultiTrackItem";
    _DAT_026d7a78 = 0x60;
    _DAT_026d7a80 = FUN_0006eae0;
    _DAT_026d7a90 = 0;
    uRam00000000026d7a98 = 0;
    _DAT_026d7aa0 = 0;
    _DAT_026d7b18 = 0;
    uRam00000000026d7b20 = 0;
    _DAT_026d7b28 = 0;
    DAT_026d7b2a = 1;
    _DAT_026d7aa8 = 0;
    uRam00000000026d7ab0 = 0;
    _DAT_026d7ab8 = 0;
    uRam00000000026d7ac0 = 0;
    _DAT_026d7ac8 = 0;
    uRam00000000026d7ad0 = 0;
    _DAT_026d7ad8 = 0;
    uRam00000000026d7ae0 = 0;
    _DAT_026d7ae8 = 0;
    uRam00000000026d7af0 = 0;
    _DAT_026d7af8 = 0;
    uRam00000000026d7b00 = 0;
    _DAT_026d7b08 = 0;
    uRam00000000026d7b10 = 0;
    DAT_026d7b33 = 0;
    _DAT_026d7b2b = 0;
    ___cxa_guard_release();
  }
  lVar4 = FUN_00e86210();
  if (lVar4 != 0) {
    FUN_00d50b00();
  }
  FUN_01d25f20();
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  FUN_01d2d3a0();
  FUN_01d2d390();
  (**(code **)(this[0x27] + 0x10))();
  FUN_00d50b00();
  FUN_01d25fa0();
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x10))();
    FUN_00d50b20();
  }
  *(undefined4 *)(this + 0x3d) = 1;
  return;
}




// ==================================================
// @00309440 (1050 bytes) — calculation

{
  int iVar1;
  undefined8 *this;
  
  FUN_00d4ff80();
  this[2] = &DAT_025768d0;
  if (DAT_026ea710 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026f7680 = "GNPropertyObserver";
      DAT_026f7690 = 0;
      _DAT_026f7688 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c40();
  *this = &DAT_02657e20;
  this[2] = &DAT_02658230;
  FUN_00309930();
  FUN_00309c60();
  FUN_00309f90();
  FUN_0030a2c0();
  FUN_0030a5e0();
  FUN_0030a910();
  FUN_0030ac40();
  *(undefined1 *)(this + 10) = 0;
  if (DAT_026fe4e0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026d7a88 = FUN_00d4fe50();
      _DAT_026d7a70 = "MUMultiTrackItem";
      _DAT_026d7a78 = 0x60;
      _DAT_026d7a80 = FUN_0006eae0;
      _DAT_026d7a90 = 0;
      uRam00000000026d7a98 = 0;
      _DAT_026d7aa0 = 0;
      _DAT_026d7b18 = 0;
      uRam00000000026d7b20 = 0;
      _DAT_026d7b28 = 0;
      DAT_026d7b2a = 1;
      _DAT_026d7aa8 = 0;
      uRam00000000026d7ab0 = 0;
      _DAT_026d7ab8 = 0;
      uRam00000000026d7ac0 = 0;
      _DAT_026d7ac8 = 0;
      uRam00000000026d7ad0 = 0;
      _DAT_026d7ad8 = 0;
      uRam00000000026d7ae0 = 0;
      _DAT_026d7ae8 = 0;
      uRam00000000026d7af0 = 0;
      _DAT_026d7af8 = 0;
      uRam00000000026d7b00 = 0;
      _DAT_026d7b08 = 0;
      uRam00000000026d7b10 = 0;
      DAT_026d7b33 = 0;
      _DAT_026d7b2b = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_026d7b2b == '\0') {
    FUN_0030af70();
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)this + 0x54) = 0;
  if (DAT_026fe4e0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026d7a88 = FUN_00d4fe50();
      _DAT_026d7a70 = "MUMultiTrackItem";
      _DAT_026d7a78 = 0x60;
      _DAT_026d7a80 = FUN_0006eae0;
      _DAT_026d7a90 = 0;
      uRam00000000026d7a98 = 0;
      _DAT_026d7aa0 = 0;
      _DAT_026d7b18 = 0;
      uRam00000000026d7b20 = 0;
      _DAT_026d7b28 = 0;
      DAT_026d7b2a = 1;
      _DAT_026d7aa8 = 0;
      uRam00000000026d7ab0 = 0;
      _DAT_026d7ab8 = 0;
      uRam00000000026d7ac0 = 0;
      _DAT_026d7ac8 = 0;
      uRam00000000026d7ad0 = 0;
      _DAT_026d7ad8 = 0;
      uRam00000000026d7ae0 = 0;
      _DAT_026d7ae8 = 0;
      uRam00000000026d7af0 = 0;
      _DAT_026d7af8 = 0;
      uRam00000000026d7b00 = 0;
      _DAT_026d7b08 = 0;
      uRam00000000026d7b10 = 0;
      DAT_026d7b33 = 0;
      _DAT_026d7b2b = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_026d7b2b == '\0') {
    FUN_0030b100();
    FUN_00e87980();
  }
  *(undefined4 *)(this + 0xb) = 0;
  if (DAT_026fe4e0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026d7a88 = FUN_00d4fe50();
      _DAT_026d7a70 = "MUMultiTrackItem";
      _DAT_026d7a78 = 0x60;
      _DAT_026d7a80 = FUN_0006eae0;
      _DAT_026d7a90 = 0;
      uRam00000000026d7a98 = 0;
      _DAT_026d7aa0 = 0;
      _DAT_026d7b18 = 0;
      uRam00000000026d7b20 = 0;
      _DAT_026d7b28 = 0;
      DAT_026d7b2a = 1;
      _DAT_026d7aa8 = 0;
      uRam00000000026d7ab0 = 0;
      _DAT_026d7ab8 = 0;
      uRam00000000026d7ac0 = 0;
      _DAT_026d7ac8 = 0;
      uRam00000000026d7ad0 = 0;
      _DAT_026d7ad8 = 0;
      uRam00000000026d7ae0 = 0;
      _DAT_026d7ae8 = 0;
      uRam00000000026d7af0 = 0;
      _DAT_026d7af8 = 0;
      uRam00000000026d7b00 = 0;
      _DAT_026d7b08 = 0;
      uRam00000000026d7b10 = 0;
      DAT_026d7b33 = 0;
      _DAT_026d7b2b = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_026d7b2b == '\0') {
    FUN_0030b290();
    FUN_00e87980();
  }
  return;
}




// ==================================================
// @002e82b0 (675 bytes) — calculation

{
  bool bVar1;
  longlong *this;
  longlong lVar2;
  byte bVar3;
  bool bVar4;
  longlong *local_58;
  char local_50;
  longlong local_40;
  char local_38;
  
  (**(code **)(*this + 0x980))();
  if ((local_38 == '\0') && (local_40 != 0)) {
    FUN_00d50b00();
  }
  (**(code **)(*this + 0x9a0))();
  (**(code **)(*local_58 + 0x7b0))();
  lVar2 = local_40;
  if (local_40 == 0) {
    bVar3 = 1;
    bVar1 = false;
    lVar2 = 0;
  }
  else if (local_38 == '\0') {
    FUN_00d50b00();
    bVar3 = 0;
    bVar1 = true;
  }
  else {
    local_38 = '\0';
    bVar1 = true;
    bVar3 = 0;
  }
  if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01cf3e00();
  FUN_01cf3f20();
  FUN_01be8270();
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if (local_40 != 0) {
    FUN_01be8270();
    FUN_01bcb030();
    if (local_40 == lVar2) {
      if ((bool)(bVar3 & local_40 != 0)) {
        if (local_38 != '\0') goto LAB_002e8444;
        bVar1 = true;
        FUN_00d50b00();
      }
LAB_002e84a0:
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
        bVar4 = (bool)(bVar1 & lVar2 != 0);
        bVar1 = true;
        lVar2 = local_40;
        if (bVar4) {
          FUN_00d50b20();
        }
        goto LAB_002e84a0;
      }
      bVar4 = lVar2 != 0;
      lVar2 = local_40;
      if ((bool)(bVar1 & bVar4)) {
        FUN_00d50b20();
      }
LAB_002e8444:
      bVar1 = true;
    }
    if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (lVar2 == 0) goto LAB_002e8524;
    FUN_01cf3e00();
    FUN_01cf3f20();
  }
  if ((bVar1) && (lVar2 != 0)) {
    FUN_00d50b20();
  }
LAB_002e8524:
  if (local_40 != 0) {
    FUN_00d50b20();
  }
  return;
}



