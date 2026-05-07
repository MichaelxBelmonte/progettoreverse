// ===== MUAraTrackObserver — Annotated small functions =====
// 3 readable functions

// ==================================================
// @016ab420 (1470 bytes) — math_loop

{
  longlong lVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  uint uVar5;
  longlong this;
  int iVar6;
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
  uint local_94;
  longlong local_90;
  longlong local_68;
  char local_60;
  longlong local_40;
  char local_38;
  
  FUN_00d50100();
  FUN_00d403d0();
  if (this != 0) {
    FUN_00d50b00();
  }
  lVar1 = DAT_026fce70;
  if (DAT_026fce70 != 0) {
    FUN_00d50b00();
  }
  local_128 = lVar1;
  local_120 = '\x01';
  local_118 = 0;
  local_110 = '\0';
  FUN_00d41430(&local_118,&local_128);
  if ((local_110 != '\0') && (local_118 != 0)) {
    FUN_00d50b20();
  }
  if ((local_120 != '\0') && (local_128 != 0)) {
    FUN_00d50b20();
  }
  if (this != 0) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  lVar1 = DAT_027cb0e8;
  if (DAT_027cb0e8 != 0) {
    FUN_00d50b00();
  }
  local_108 = lVar1;
  local_100 = '\x01';
  FUN_00e42580();
  lVar1 = *(longlong *)(this + 0x10);
  lVar4 = lVar1;
  if (lVar1 != local_68) {
    lVar4 = local_68;
    if (local_60 == '\0') {
      if (local_68 == 0) {
        lVar4 = 0;
        goto LAB_016ab55d;
      }
      FUN_00d50b00();
      lVar1 = *(longlong *)(this + 0x10);
      *(longlong *)(this + 0x10) = local_68;
    }
    else {
      local_60 = '\0';
LAB_016ab55d:
      *(longlong *)(this + 0x10) = lVar4;
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
      lVar4 = local_68;
    }
  }
  if ((local_60 != '\0') && (lVar4 != 0)) {
    FUN_00d50b20();
  }
  if ((local_100 != '\0') && (local_108 != 0)) {
    FUN_00d50b20();
  }
  puVar3 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar3 = &DAT_0258a670;
  (*DAT_0258a688)();
  lVar1 = *(longlong *)(this + 0x18);
  *(undefined8 **)(this + 0x18) = puVar3;
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  FUN_00d30620();
  if ((local_60 == '\0') && (local_68 != 0)) {
    FUN_00d50b00();
  }
  FUN_00d2fd00();
  local_90 = local_68;
  if (local_60 == '\0') {
    if (local_68 == 0) goto LAB_016ab9b3;
    FUN_00d50b00();
  }
  else if (local_68 == 0) goto LAB_016ab9b3;
  if (0 < *(int *)(local_90 + 0xc)) {
    uVar5 = 0;
    do {
      local_f8 = *(longlong *)(*(longlong *)(local_90 + 0x10) + (ulonglong)uVar5 * 8);
      local_f0 = '\0';
      local_94 = uVar5;
      FUN_00d307e0();
      if ((local_f0 != '\0') && (local_f8 != 0)) {
        FUN_00d50b20();
      }
      lVar1 = DAT_027cb0e8;
      if (DAT_027cb0e8 != 0) {
        FUN_00d50b00();
      }
      local_e8 = lVar1;
      local_e0 = '\x01';
      FUN_00e42580();
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      if ((local_e0 != '\0') && (local_e8 != 0)) {
        FUN_00d50b20();
      }
      for (iVar6 = 0; iVar2 = FUN_00e42300(), iVar6 < iVar2; iVar6 = iVar6 + 1) {
        FUN_00e42380();
        if ((local_38 == '\0') && (local_40 != 0)) {
          FUN_00d50b00();
        }
        FUN_00e42450();
        if ((local_38 == '\0') && (local_40 != 0)) {
          FUN_00d50b00();
        }
        local_d8 = local_40;
        local_d0 = '\0';
        FUN_00cabdd0();
        if (local_38 == '\0') {
          if (local_40 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        if ((local_d0 != '\0') && (local_d8 != 0)) {
          FUN_00d50b20();
        }
        if (local_40 == 0) {
          local_c8 = local_40;
          local_c0 = '\0';
          local_b8 = local_40;
          local_b0 = '\0';
          FUN_00cabe80();
          if ((local_b0 != '\0') && (local_b8 != 0)) {
            FUN_00d50b20();
          }
          if ((local_c0 != '\0') && (local_c8 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          FUN_00d50b20();
        }
        if (local_40 != 0) {
          FUN_00d50b20();
          FUN_00d50b20();
        }
      }
      if (local_40 != 0) {
        FUN_00d50b20();
      }
      uVar5 = local_94 + 1;
    } while ((int)uVar5 < *(int *)(local_90 + 0xc));
  }
  FUN_016ac9a0();
  FUN_00d50b20();
LAB_016ab9b3:
  local_a8 = local_68;
  local_a0 = '\0';
  FUN_00d307e0();
  if ((local_a0 != '\0') && (local_a8 != 0)) {
    FUN_00d50b20();
  }
  if (local_68 != 0) {
    FUN_00d50b20();
  }
  return;
}




// ==================================================
// @016ac280 (620 bytes) — calculation

{
  longlong lVar1;
  longlong lVar2;
  longlong arg1;
  longlong *this;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  lVar1 = *param_2;
  if (lVar1 == 0) {
    *(undefined1 *)(this + 1) = 0;
    *this = 0;
    return;
  }
  if (*(longlong *)(arg1 + 0x10) == 0) {
    *(undefined1 *)(this + 1) = 0;
    if ((char)param_2[1] != '\0') {
      *this = lVar1;
      *(undefined1 *)(this + 1) = 1;
      *(undefined1 *)(param_2 + 1) = 0;
      return;
    }
    FUN_00d50b00();
    *this = lVar1;
LAB_016ac44e:
    *(undefined1 *)(this + 1) = 1;
    return;
  }
  local_68 = '\0';
  local_70 = lVar1;
  FUN_00e427c0(param_1,&local_70);
  lVar1 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  local_60 = *param_2;
  if ((lVar1 != 0) && (local_60 = lVar1, lVar1 != *param_2)) {
    *this = lVar1;
    goto LAB_016ac44e;
  }
  local_58 = '\0';
  FUN_00cabdd0(local_60,&local_60);
  lVar2 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    local_50 = lVar2;
    local_48 = '\0';
    FUN_00e427c0();
    lVar2 = local_40;
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
    if (lVar2 != 0) {
      *this = lVar2;
      *(undefined1 *)(this + 1) = 1;
      FUN_00d50b20();
      goto joined_r0x016ac4e8;
    }
    FUN_00d50b20();
  }
  *(undefined1 *)(this + 1) = 0;
  lVar2 = *param_2;
  if ((char)param_2[1] == '\0') {
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    *this = lVar2;
    *(undefined1 *)(this + 1) = 1;
  }
  else {
    *this = lVar2;
    *(undefined1 *)(this + 1) = 1;
    *(undefined1 *)(param_2 + 1) = 0;
  }
joined_r0x016ac4e8:
  if (lVar1 == 0) {
    return;
  }
  FUN_00d50b20();
  return;
}




// ==================================================
// @016a97f0 (512 bytes) — logic_branch

{
  int iVar1;
  int iVar2;
  
  if (DAT_027cae30 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      iVar1 = FUN_00e7ddf0();
      if (DAT_027cadf0 == '\0') {
        iVar2 = ___cxa_guard_acquire();
        if (iVar2 != 0) {
          _DAT_027cad40 = FUN_00d4fe50();
          _DAT_027cad28 = "MUAraTrackObservationHelper";
          _DAT_027cad30 = 0x50;
          _DAT_027cad38 = FUN_016a9240;
          _DAT_027cad48 = 0;
          uRam00000000027cad50 = 0;
          _DAT_027cad58 = 0;
          _DAT_027cadd0 = 0;
          uRam00000000027cadd8 = 0;
          _DAT_027cade0 = 0;
          DAT_027cade2 = 3;
          _DAT_027cad60 = 0;
          uRam00000000027cad68 = 0;
          _DAT_027cad70 = 0;
          uRam00000000027cad78 = 0;
          _DAT_027cad80 = 0;
          uRam00000000027cad88 = 0;
          _DAT_027cad90 = 0;
          uRam00000000027cad98 = 0;
          _DAT_027cada0 = 0;
          uRam00000000027cada8 = 0;
          _DAT_027cadb0 = 0;
          uRam00000000027cadb8 = 0;
          _DAT_027cadc0 = 0;
          uRam00000000027cadc8 = 0;
          DAT_027cadeb = 0;
          _DAT_027cade3 = 0;
          ___cxa_guard_release();
        }
      }
      DAT_027cae10 = (iVar1 != 0) << 6 | 0x82;
      _DAT_027cadf8 = "_observer";
      _DAT_027cae00 = &DAT_027cad28;
      _DAT_027cae08 = 0;
      _DAT_027cae18 = 0;
      uRam00000000027cae20 = 0;
      _DAT_027cae28 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_027cae38 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_027c8978 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_027c8960 = "MUAraTrackObserver";
          DAT_027c8970 = 0;
          _DAT_027c8968 = 0;
          ___cxa_guard_release();
        }
      }
      FUN_00e87b80();
      ___cxa_guard_release();
    }
  }
  return &DAT_027cadf8;
}



