// Function: FUN_00e65ef0
// Address: 00e65ef0
// Size: 4545 bytes
// Class: GNString
// String references:
//   "%@activateHost?%@"
//   "GNString"


/* WARNING: Removing unreachable block (ram,0x00e661af) */
/* WARNING: Removing unreachable block (ram,0x00e661bc) */
/* WARNING: Removing unreachable block (ram,0x00e661d3) */
/* WARNING: Removing unreachable block (ram,0x00e661d8) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_00e65ef0(int *param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  byte bVar4;
  char cVar5;
  int iVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  undefined8 *puVar9;
  undefined7 uVar10;
  char cVar11;
  longlong **pplVar12;
  bool bVar13;
  undefined4 uVar14;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  uint uVar15;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined8 local_210;
  undefined1 local_208;
  longlong *local_200;
  undefined1 local_1f8;
  longlong *local_1f0;
  undefined1 local_1e8;
  longlong local_1e0;
  undefined1 local_1d8;
  longlong local_1d0;
  undefined1 local_1c8;
  longlong *local_1c0;
  undefined1 local_1b8;
  longlong local_1b0;
  undefined1 local_1a8;
  undefined1 local_198;
  longlong local_190;
  char local_188;
  longlong local_180;
  char local_178;
  longlong local_170;
  char local_168;
  longlong *local_160;
  char local_158;
  longlong local_150;
  char local_148;
  longlong *local_140;
  char local_138;
  longlong local_130;
  char local_128;
  longlong local_120;
  char local_118;
  longlong *local_110;
  char local_108;
  longlong local_100;
  longlong local_f8;
  undefined8 *local_f0;
  undefined8 *local_e0;
  uint local_d8;
  longlong *local_90;
  longlong local_88;
  char local_80;
  longlong *local_78;
  longlong *local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong local_40;
  
  if (param_1 != (int *)0x0) {
    *param_1 = 0;
  }
  FUN_00e67a40(param_1,0);
  plVar3 = local_70;
  if ((local_68 == '\0') && (local_70 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  lVar1 = DAT_02787870;
  if (DAT_02787870 != 0) {
    FUN_00d50b00();
  }
  lVar2 = DAT_027855c0;
  if (DAT_027855c0 != 0) {
    FUN_00d50b00();
  }
  local_100 = lVar1;
  local_f8 = lVar2;
  FUN_00083ea0(2,&local_f8);
  FUN_000b6830();
  if (local_80 == '\0') {
    if (local_88 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_80 = '\0';
  }
  local_198 = 1;
  FUN_00e600c0();
  if (local_88 != 0) {
    FUN_00d50b20();
  }
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  local_70 = (longlong *)&DAT_0253d630;
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  local_70 = &DAT_024c5048;
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = DAT_02787970;
  puVar9 = &DAT_024c5048;
  if (DAT_02787970 != 0) {
    FUN_00d50b00();
  }
  lVar2 = DAT_02787880;
  if (DAT_02787880 != 0) {
    FUN_00d50b00();
  }
  local_100 = lVar1;
  local_f8 = lVar2;
  uVar14 = FUN_00083ea0(2,&local_f8);
  FUN_00d8cb40(uVar14,&local_70);
  if (local_80 == '\0') {
    if (local_88 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_80 = '\0';
  }
  local_70 = (longlong *)&DAT_0253d630;
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  local_70 = &DAT_024c5048;
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  local_68 = '\0';
  local_70 = (longlong *)0x0;
  FUN_00da5ad0();
  local_58 = local_80 != '\0';
  local_60 = local_88;
  if ((bool)local_58) {
    local_80 = '\0';
  }
  local_50 = FUN_00da7170();
  uVar14 = FUN_00da7180();
  if (local_60 == 0) {
    cVar11 = '\0';
    local_78 = (longlong *)0x0;
    local_40 = 0;
    local_f0 = (undefined8 *)0x0;
  }
  else {
    local_40 = 0;
    uVar15 = 0;
    local_78 = (longlong *)0x0;
    cVar11 = '\0';
    do {
      local_190 = local_88;
      local_188 = '\0';
      local_210 = 0;
      local_208 = 0;
      uVar14 = FUN_00e69550((int)DAT_02394dd8,&local_190,&local_210);
      uVar10 = (undefined7)((ulonglong)puVar9 >> 8);
      cVar5 = (char)uVar15;
      if (local_88 == local_40) {
        if ((cVar5 == '\0') && (local_88 != 0)) {
          puVar9 = (undefined8 *)CONCAT71(uVar10,1);
          if (local_80 == '\0') {
            uVar14 = FUN_00d50b00();
          }
        }
        else if ((local_80 == '\0') || (local_88 == 0)) {
          puVar9 = (undefined8 *)(ulonglong)uVar15;
        }
        else {
          uVar14 = FUN_00d50b20();
          puVar9 = (undefined8 *)(ulonglong)uVar15;
        }
      }
      else if (local_80 == '\0') {
        if (local_88 != 0) {
          uVar14 = FUN_00d50b00();
        }
        puVar9 = (undefined8 *)CONCAT71(uVar10,1);
        if ((cVar5 == '\0') || (local_40 == 0)) goto LAB_00e66310;
        uVar14 = FUN_00d50b20();
        local_40 = local_88;
      }
      else {
        puVar9 = (undefined8 *)CONCAT71(uVar10,1);
        if ((cVar5 == '\0') || (local_40 == 0)) {
LAB_00e66310:
          puVar9 = (undefined8 *)CONCAT71(uVar10,1);
          local_40 = local_88;
        }
        else {
          uVar14 = FUN_00d50b20();
          local_40 = local_88;
        }
      }
      if ((local_188 != '\0') && (local_190 != 0)) {
        uVar14 = FUN_00d50b20();
      }
      if (local_70 == (longlong *)0x0) goto LAB_00e66490;
      local_200 = local_70;
      local_1f8 = 0;
      local_1f0 = plVar3;
      local_1e8 = 0;
      local_1e0 = local_40;
      local_1d8 = 0;
      FUN_00e6a750(uVar14,&local_1e0);
      FUN_00e97f20();
      cVar5 = local_68;
      plVar8 = local_70;
      if (local_70 == local_78) {
        if ((local_68 == '\0') || (cVar11 != '\0')) {
          if (local_70 != (longlong *)0x0) goto LAB_00e66497;
        }
        else if (local_70 != (longlong *)0x0) {
          cVar11 = '\x01';
          FUN_00d50b00();
          plVar8 = local_78;
          goto joined_r0x00e66442;
        }
LAB_00e66490:
        if (local_40 == 0) goto LAB_00e66497;
      }
      else {
        if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
          FUN_00d50b00();
        }
        bVar13 = cVar11 != '\0';
        cVar11 = cVar5;
        if ((bVar13) && (local_78 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
joined_r0x00e66442:
        local_78 = plVar8;
        if (local_70 == (longlong *)0x0) goto LAB_00e66490;
LAB_00e66497:
        if (param_1 != (int *)0x0) {
          bVar4 = FUN_00dd1a20();
          *param_1 = bVar4 + 1;
        }
      }
      uVar14 = FUN_00da7180();
      local_f0 = puVar9;
      if (local_60 == 0) break;
      local_60 = 0;
      if (local_58 == '\0') {
        local_58 = '\0';
        break;
      }
      uVar14 = FUN_00d50b20();
      local_58 = '\0';
      uVar15 = (uint)puVar9;
    } while (local_60 != 0);
  }
  local_60 = 0;
  if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
    uVar14 = FUN_00d50b20();
  }
  if (local_78 != (longlong *)0x0) {
    uVar14 = FUN_00e971f0();
  }
  plVar8 = DAT_02783f20;
  if (local_40 != 0) {
    if (DAT_02783f20 != (longlong *)0x0) {
      uVar14 = FUN_00d50b00();
    }
    lVar1 = DAT_02787890;
    if (DAT_02787890 != 0) {
      uVar14 = FUN_00d50b00();
    }
    local_180 = lVar1;
    local_178 = '\x01';
    pplVar12 = &local_70;
    FUN_000175c0(uVar14,&local_180);
    plVar7 = local_70;
    if ((DAT_026fd0c0 == '\0') && (iVar6 = ___cxa_guard_acquire(), iVar6 != 0)) {
      _DAT_026d5e58 = FUN_00d4fe50();
      DAT_026d5e40 = "GNString";
      _DAT_026d5e48 = 0x40;
      _DAT_026d5e50 = FUN_0005d920;
      _DAT_026d5e60 = 0;
      uRam00000000026d5e68 = 0;
      _DAT_026d5e70 = 0;
      uRam00000000026d5e78 = 0;
      _DAT_026d5e80 = 0;
      uRam00000000026d5e88 = 0;
      _DAT_026d5e90 = 0;
      uRam00000000026d5e98 = 0;
      _DAT_026d5ea0 = 0;
      uRam00000000026d5ea8 = 0;
      _DAT_026d5eb0 = 0;
      uRam00000000026d5eb8 = 0;
      _DAT_026d5ec0 = 0;
      uRam00000000026d5ec8 = 0;
      _DAT_026d5ed0 = 0;
      uRam00000000026d5ed8 = 0;
      _DAT_026d5ee0 = 0;
      uRam00000000026d5ee8 = 0;
      _DAT_026d5ef0 = 0;
      uRam00000000026d5ef8 = 0;
      _DAT_026d5f00 = 0;
      ___cxa_guard_release();
    }
    if (plVar7 == (longlong *)0x0) {
LAB_00e665c5:
      pplVar12 = (longlong **)&DAT_02802688;
    }
    else {
      (**(code **)(*plVar7 + 0x360))();
      cVar5 = FUN_00e85ea0();
      if (cVar5 == '\0') goto LAB_00e665c5;
    }
    plVar7 = *pplVar12;
    if (*(char *)(pplVar12 + 1) == '\0') {
      if (plVar7 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      *(undefined1 *)(pplVar12 + 1) = 0;
    }
    cVar5 = (**(code **)(*plVar8 + 0x50))();
    if (plVar7 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_178 != '\0') && (local_180 != 0)) {
      FUN_00d50b20();
    }
    uVar14 = FUN_00d50b20();
    lVar1 = DAT_027855f0;
    if (cVar5 != '\0') {
      if (DAT_027855f0 != 0) {
        uVar14 = FUN_00d50b00();
      }
      local_170 = lVar1;
      local_168 = '\x01';
      pplVar12 = &local_70;
      uVar14 = FUN_000175c0(uVar14,&local_170);
      plVar8 = local_70;
      if ((DAT_026fd0c0 == '\0') &&
         (iVar6 = ___cxa_guard_acquire(), uVar14 = extraout_XMM0_Da_01, iVar6 != 0)) {
        _DAT_026d5e58 = FUN_00d4fe50();
        DAT_026d5e40 = "GNString";
        _DAT_026d5e48 = 0x40;
        _DAT_026d5e50 = FUN_0005d920;
        _DAT_026d5e60 = 0;
        uRam00000000026d5e68 = 0;
        _DAT_026d5e70 = 0;
        uRam00000000026d5e78 = 0;
        _DAT_026d5e80 = 0;
        uRam00000000026d5e88 = 0;
        _DAT_026d5e90 = 0;
        uRam00000000026d5e98 = 0;
        _DAT_026d5ea0 = 0;
        uRam00000000026d5ea8 = 0;
        _DAT_026d5eb0 = 0;
        uRam00000000026d5eb8 = 0;
        _DAT_026d5ec0 = 0;
        uRam00000000026d5ec8 = 0;
        _DAT_026d5ed0 = 0;
        uRam00000000026d5ed8 = 0;
        _DAT_026d5ee0 = 0;
        uRam00000000026d5ee8 = 0;
        _DAT_026d5ef0 = 0;
        uRam00000000026d5ef8 = 0;
        _DAT_026d5f00 = 0;
        uVar14 = ___cxa_guard_release();
      }
      if (plVar8 == (longlong *)0x0) {
LAB_00e666ee:
        pplVar12 = (longlong **)&DAT_02802688;
      }
      else {
        (**(code **)(*plVar8 + 0x360))();
        cVar5 = FUN_00e85ea0();
        uVar14 = extraout_XMM0_Da;
        if (cVar5 == '\0') goto LAB_00e666ee;
      }
      plVar8 = *pplVar12;
      if (*(char *)(pplVar12 + 1) == '\0') {
        if (plVar8 != (longlong *)0x0) {
          uVar14 = FUN_00d50b00();
        }
      }
      else {
        *(undefined1 *)(pplVar12 + 1) = 0;
      }
      if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
        uVar14 = FUN_00d50b20();
      }
      if ((local_168 != '\0') && (local_170 != 0)) {
        uVar14 = FUN_00d50b20();
      }
      if (plVar8 == (longlong *)0x0) {
        bVar13 = false;
        local_90 = (longlong *)0x0;
      }
      else {
        local_158 = '\0';
        local_160 = plVar8;
        FUN_00db9a70();
        local_90 = local_70;
        if (local_70 == (longlong *)0x0) {
          bVar13 = false;
          local_90 = (longlong *)0x0;
        }
        else if (local_68 == '\0') {
          FUN_00d50b00();
          bVar13 = true;
          if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_68 = '\0';
          bVar13 = true;
        }
        if ((local_158 != '\0') && (local_160 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        uVar14 = FUN_00d50b20();
      }
      lVar1 = DAT_027878a0;
      if (DAT_027878a0 != 0) {
        uVar14 = FUN_00d50b00();
      }
      local_150 = lVar1;
      local_148 = '\x01';
      pplVar12 = &local_70;
      uVar14 = FUN_000175c0(uVar14,&local_150);
      plVar8 = local_70;
      if ((DAT_026fd0c0 == '\0') &&
         (iVar6 = ___cxa_guard_acquire(), uVar14 = extraout_XMM0_Da_02, iVar6 != 0)) {
        _DAT_026d5e58 = FUN_00d4fe50();
        DAT_026d5e40 = "GNString";
        _DAT_026d5e48 = 0x40;
        _DAT_026d5e50 = FUN_0005d920;
        _DAT_026d5e60 = 0;
        uRam00000000026d5e68 = 0;
        _DAT_026d5e70 = 0;
        uRam00000000026d5e78 = 0;
        _DAT_026d5e80 = 0;
        uRam00000000026d5e88 = 0;
        _DAT_026d5e90 = 0;
        uRam00000000026d5e98 = 0;
        _DAT_026d5ea0 = 0;
        uRam00000000026d5ea8 = 0;
        _DAT_026d5eb0 = 0;
        uRam00000000026d5eb8 = 0;
        _DAT_026d5ec0 = 0;
        uRam00000000026d5ec8 = 0;
        _DAT_026d5ed0 = 0;
        uRam00000000026d5ed8 = 0;
        _DAT_026d5ee0 = 0;
        uRam00000000026d5ee8 = 0;
        _DAT_026d5ef0 = 0;
        uRam00000000026d5ef8 = 0;
        _DAT_026d5f00 = 0;
        uVar14 = ___cxa_guard_release();
      }
      if (plVar8 == (longlong *)0x0) {
LAB_00e6688d:
        pplVar12 = (longlong **)&DAT_02802688;
      }
      else {
        (**(code **)(*plVar8 + 0x360))();
        cVar5 = FUN_00e85ea0();
        uVar14 = extraout_XMM0_Da_00;
        if (cVar5 == '\0') goto LAB_00e6688d;
      }
      plVar8 = *pplVar12;
      if (*(char *)(pplVar12 + 1) == '\0') {
        if (plVar8 != (longlong *)0x0) {
          uVar14 = FUN_00d50b00();
        }
      }
      else {
        *(undefined1 *)(pplVar12 + 1) = 0;
      }
      if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
        uVar14 = FUN_00d50b20();
      }
      if ((local_148 != '\0') && (local_150 != 0)) {
        uVar14 = FUN_00d50b20();
      }
      if ((plVar8 == (longlong *)0x0) || (param_2 == (undefined8 *)0x0)) {
        if (plVar8 != (longlong *)0x0) goto LAB_00e669ef;
      }
      else {
        local_138 = '\0';
        local_140 = plVar8;
        FUN_00db9a70();
        plVar7 = local_70;
        plVar8 = (longlong *)*param_2;
        if (plVar8 == local_70) {
          if ((*(char *)(param_2 + 1) != '\0') || (local_70 == (longlong *)0x0)) goto LAB_00e669c1;
          if (local_68 == '\0') {
            FUN_00d50b00();
            goto LAB_00e669b7;
          }
LAB_00e6696d:
          local_e0 = param_2 + 1;
          *(undefined1 *)local_e0 = 1;
          local_68 = '\0';
        }
        else {
          cVar5 = *(char *)(param_2 + 1);
          if (local_68 != '\0') {
            *param_2 = local_70;
            if ((cVar5 != '\0') && (plVar8 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            goto LAB_00e6696d;
          }
          if (local_70 != (longlong *)0x0) {
            FUN_00d50b00();
          }
          *param_2 = plVar7;
          if ((cVar5 != '\0') && (plVar8 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
LAB_00e669b7:
          local_e0 = param_2 + 1;
          *(undefined1 *)local_e0 = 1;
LAB_00e669c1:
          if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        if ((local_138 != '\0') && (local_140 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
LAB_00e669ef:
        uVar14 = FUN_00d50b20();
      }
      lVar1 = DAT_027878a8;
      if (DAT_027878a8 != 0) {
        uVar14 = FUN_00d50b00();
      }
      local_130 = lVar1;
      local_128 = '\x01';
      pplVar12 = &local_70;
      FUN_000175c0(uVar14,&local_130);
      plVar8 = local_70;
      if ((DAT_026fd0c0 == '\0') && (iVar6 = ___cxa_guard_acquire(), iVar6 != 0)) {
        _DAT_026d5e58 = FUN_00d4fe50();
        DAT_026d5e40 = "GNString";
        _DAT_026d5e48 = 0x40;
        _DAT_026d5e50 = FUN_0005d920;
        _DAT_026d5e60 = 0;
        uRam00000000026d5e68 = 0;
        _DAT_026d5e70 = 0;
        uRam00000000026d5e78 = 0;
        _DAT_026d5e80 = 0;
        uRam00000000026d5e88 = 0;
        _DAT_026d5e90 = 0;
        uRam00000000026d5e98 = 0;
        _DAT_026d5ea0 = 0;
        uRam00000000026d5ea8 = 0;
        _DAT_026d5eb0 = 0;
        uRam00000000026d5eb8 = 0;
        _DAT_026d5ec0 = 0;
        uRam00000000026d5ec8 = 0;
        _DAT_026d5ed0 = 0;
        uRam00000000026d5ed8 = 0;
        _DAT_026d5ee0 = 0;
        uRam00000000026d5ee8 = 0;
        _DAT_026d5ef0 = 0;
        uRam00000000026d5ef8 = 0;
        _DAT_026d5f00 = 0;
        ___cxa_guard_release();
      }
      if (plVar8 == (longlong *)0x0) {
LAB_00e66a66:
        pplVar12 = (longlong **)&DAT_02802688;
      }
      else {
        (**(code **)(*plVar8 + 0x360))();
        cVar5 = FUN_00e85ea0();
        if (cVar5 == '\0') goto LAB_00e66a66;
      }
      plVar8 = *pplVar12;
      if (*(char *)(pplVar12 + 1) == '\0') {
        if (plVar8 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        *(undefined1 *)(pplVar12 + 1) = 0;
      }
      if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_128 != '\0') && (local_130 != 0)) {
        FUN_00d50b20();
      }
      if (plVar8 != (longlong *)0x0) {
        plVar7 = *(longlong **)(unaff_RSI + 0x38);
        if (plVar7 != plVar8) {
          FUN_00d50b00();
          *(longlong **)(unaff_RSI + 0x38) = plVar8;
          if (plVar7 != (longlong *)0x0) {
            FUN_00d50b20();
          }
        }
        FUN_00d50b20();
      }
      local_d8 = FUN_00dcd050();
      local_120 = DAT_027878b0;
      uVar15 = local_d8;
      if (DAT_027878b0 != 0) {
        uVar15 = FUN_00d50b00();
      }
      local_118 = '\x01';
      FUN_000175c0(uVar15,&local_120);
      plVar8 = local_70;
      if (local_68 == '\0') {
        if (((local_70 != (longlong *)0x0) && (FUN_00d50b00(), local_68 != '\0')) &&
           (local_70 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_68 = '\0';
      }
      if ((local_118 != '\0') && (local_120 != 0)) {
        FUN_00d50b20();
      }
      if (plVar8 != (longlong *)0x0) {
        local_110 = plVar8;
        local_108 = '\0';
        iVar6 = FUN_00c716c0();
        if ((local_108 != '\0') && (local_110 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        FUN_00d50b20();
        uVar15 = -(uint)(0.0 < (double)iVar6 / DAT_023907c0);
        local_d8 = ~uVar15 & local_d8 | SUB84((double)iVar6 / DAT_023907c0,0) & uVar15;
      }
      if (local_90 != (longlong *)0x0) {
        FUN_00dbbbc0();
        plVar8 = *(longlong **)(unaff_RSI + 0x40);
        plVar7 = plVar8;
        if (plVar8 != local_70) {
          if (local_68 == '\0') {
            if (local_70 == (longlong *)0x0) {
              plVar7 = (longlong *)0x0;
            }
            else {
              FUN_00d50b00();
              plVar8 = *(longlong **)(unaff_RSI + 0x40);
              plVar7 = local_70;
            }
          }
          else {
            local_68 = '\0';
            plVar7 = local_70;
          }
          *(longlong **)(unaff_RSI + 0x40) = plVar7;
          if (plVar8 != (longlong *)0x0) {
            FUN_00d50b20();
            plVar7 = local_70;
          }
        }
        if ((local_68 != '\0') && (plVar7 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        lVar1 = *(longlong *)(unaff_RSI + 0x38);
        if (lVar1 != 0) {
          FUN_00d50b00();
          local_1c8 = 1;
          local_1d0 = lVar1;
          FUN_00e658e0(local_d8);
          FUN_00d50b20();
        }
        *(undefined1 *)(unaff_RDI + 1) = 0;
        if (bVar13) {
          *unaff_RDI = local_90;
          *(undefined1 *)(unaff_RDI + 1) = 1;
        }
        else {
          FUN_00d50b00();
          *unaff_RDI = local_90;
          *(undefined1 *)(unaff_RDI + 1) = 1;
        }
        goto LAB_00e66c5c;
      }
    }
    local_1c0 = plVar3;
    local_1b8 = 0;
    local_1b0 = local_40;
    local_1a8 = 0;
    FUN_00e6b160();
  }
  *(undefined1 *)(unaff_RDI + 1) = 0;
  *unaff_RDI = 0;
LAB_00e66c5c:
  if ((cVar11 != '\0') && (local_78 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_f0 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if (local_88 != 0) {
    FUN_00d50b20();
  }
  if (plVar3 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return unaff_RDI;
}


