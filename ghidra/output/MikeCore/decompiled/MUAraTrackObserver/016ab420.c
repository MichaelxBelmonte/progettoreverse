// Function: FUN_016ab420
// Address: 016ab420
// Size: 1470 bytes
// Class: MUAraTrackObserver


/* WARNING: Removing unreachable block (ram,0x016ab893) */
/* WARNING: Removing unreachable block (ram,0x016ab89c) */
/* WARNING: Removing unreachable block (ram,0x016ab98b) */
/* WARNING: Removing unreachable block (ram,0x016ab998) */
/* WARNING: Removing unreachable block (ram,0x016ab635) */
/* WARNING: Removing unreachable block (ram,0x016ab63e) */
/* WARNING: Removing unreachable block (ram,0x016ab67e) */
/* WARNING: Removing unreachable block (ram,0x016ab687) */
/* WARNING: Removing unreachable block (ram,0x016ab7d1) */
/* WARNING: Removing unreachable block (ram,0x016ab7da) */
/* WARNING: Removing unreachable block (ram,0x016ab80b) */
/* WARNING: Removing unreachable block (ram,0x016ab814) */

void FUN_016ab420(void)

{
  longlong lVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  uint uVar5;
  longlong unaff_RDI;
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
  if (unaff_RDI != 0) {
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
  if (unaff_RDI != 0) {
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
  lVar1 = *(longlong *)(unaff_RDI + 0x10);
  lVar4 = lVar1;
  if (lVar1 != local_68) {
    lVar4 = local_68;
    if (local_60 == '\0') {
      if (local_68 == 0) {
        lVar4 = 0;
        goto LAB_016ab55d;
      }
      FUN_00d50b00();
      lVar1 = *(longlong *)(unaff_RDI + 0x10);
      *(longlong *)(unaff_RDI + 0x10) = local_68;
    }
    else {
      local_60 = '\0';
LAB_016ab55d:
      *(longlong *)(unaff_RDI + 0x10) = lVar4;
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
  lVar1 = *(longlong *)(unaff_RDI + 0x18);
  *(undefined8 **)(unaff_RDI + 0x18) = puVar3;
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


