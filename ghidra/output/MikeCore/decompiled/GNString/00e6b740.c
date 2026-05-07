// Function: FUN_00e6b740
// Address: 00e6b740
// Size: 3353 bytes
// Class: GNString
// String references:
//   "%@getServiceUrl?%@"
//   "GNString"


/* WARNING: Removing unreachable block (ram,0x00e6ba44) */
/* WARNING: Removing unreachable block (ram,0x00e6ba51) */
/* WARNING: Removing unreachable block (ram,0x00e6ba68) */
/* WARNING: Removing unreachable block (ram,0x00e6ba6d) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_00e6b740(undefined8 *param_1,longlong *param_2,undefined4 param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  char cVar6;
  int iVar7;
  undefined8 *unaff_RDI;
  uint uVar8;
  undefined7 uVar10;
  longlong **pplVar9;
  char cVar11;
  undefined8 *puVar12;
  undefined4 uVar13;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined8 local_1b0;
  undefined1 local_1a8;
  longlong *local_1a0;
  undefined1 local_198;
  longlong *local_190;
  undefined1 local_188;
  longlong local_180;
  undefined1 local_178;
  longlong *local_170;
  undefined1 local_168;
  longlong local_160;
  undefined1 local_158;
  longlong local_150;
  longlong local_148 [2];
  undefined1 local_138;
  longlong local_130;
  char local_128;
  longlong local_120;
  char local_118;
  longlong local_110;
  char local_108;
  longlong local_100;
  char local_f8;
  longlong *local_f0;
  char local_e8;
  longlong local_e0;
  char local_d8;
  longlong *local_d0;
  char local_c8;
  undefined8 *local_c0;
  undefined8 *local_b8;
  longlong *local_b0;
  char local_a8;
  longlong local_a0;
  longlong local_88;
  char local_80;
  longlong *local_78;
  longlong *local_70;
  uint local_68;
  longlong *local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong local_40;
  
  uVar13 = FUN_00e67a40(param_1,param_3);
  plVar5 = local_70;
  if (((char)local_68 == '\0') && (local_70 != (longlong *)0x0)) {
    uVar13 = FUN_00d50b00();
  }
  plVar2 = DAT_027878b8;
  local_130 = *param_2;
  local_128 = '\0';
  if (DAT_027878b8 != (longlong *)0x0) {
    uVar13 = FUN_00d50b00();
  }
  local_70 = plVar2;
  local_68 = local_68 & 0xffffff00;
  FUN_00ca0840(uVar13,&local_70);
  if (((char)local_68 != '\0') && (local_70 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar2 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_128 != '\0') && (local_130 != 0)) {
    FUN_00d50b20();
  }
  plVar2 = DAT_027878b8;
  if (DAT_027878b8 == (longlong *)0x0) {
    local_68 = 1;
    local_70 = &DAT_024c5048;
  }
  else {
    FUN_00d50b00();
    local_68 = 1;
    local_70 = &DAT_024c5048;
    local_58 = 0;
    FUN_00d50b00();
  }
  local_60 = plVar2;
  local_58 = '\x01';
  FUN_000b6830();
  if (local_80 == '\0') {
    if (local_88 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_80 = '\0';
  }
  local_138 = 1;
  FUN_00e600c0();
  if (local_88 != 0) {
    FUN_00d50b20();
  }
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  local_70 = &DAT_024c5048;
  if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar2 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  lVar3 = DAT_02787970;
  if (DAT_02787970 != 0) {
    FUN_00d50b00();
  }
  lVar4 = DAT_02787880;
  if (DAT_02787880 != 0) {
    FUN_00d50b00();
  }
  local_150 = lVar3;
  local_148[0] = lVar4;
  uVar13 = FUN_00083ea0(2,local_148);
  FUN_00d8cb40(uVar13,&local_70);
  local_a0 = local_88;
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
  if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  local_68 = local_68 & 0xffffff00;
  local_70 = (longlong *)0x0;
  FUN_00da5ad0();
  local_58 = local_80 != '\0';
  local_60 = (longlong *)local_88;
  if ((bool)local_58) {
    local_80 = '\0';
  }
  local_50 = FUN_00da7170();
  uVar13 = FUN_00da7180();
  local_b8 = param_1;
  if (local_60 == (longlong *)0x0) {
    local_40 = 0;
    param_1 = (undefined8 *)0x0;
    local_78 = (longlong *)0x0;
    cVar11 = '\0';
  }
  else {
    cVar11 = '\0';
    local_78 = (longlong *)0x0;
    uVar8 = 0;
    local_40 = 0;
    do {
      local_120 = local_a0;
      local_118 = '\0';
      local_1b0 = 0;
      local_1a8 = 0;
      uVar13 = FUN_00e69550((int)DAT_02394dd8,&local_120,&local_1b0);
      uVar10 = (undefined7)((ulonglong)param_1 >> 8);
      cVar6 = (char)uVar8;
      if (local_88 == local_40) {
        if ((cVar6 == '\0') && (local_88 != 0)) {
          param_1 = (undefined8 *)CONCAT71(uVar10,1);
          if (local_80 == '\0') {
            uVar13 = FUN_00d50b00();
          }
        }
        else if ((local_80 == '\0') || (local_88 == 0)) {
          param_1 = (undefined8 *)(ulonglong)uVar8;
        }
        else {
          uVar13 = FUN_00d50b20();
          param_1 = (undefined8 *)(ulonglong)uVar8;
        }
      }
      else if (local_80 == '\0') {
        if (local_88 != 0) {
          uVar13 = FUN_00d50b00();
        }
        param_1 = (undefined8 *)CONCAT71(uVar10,1);
        if ((cVar6 == '\0') || (local_40 == 0)) goto LAB_00e6bba0;
        uVar13 = FUN_00d50b20();
        local_40 = local_88;
      }
      else {
        param_1 = (undefined8 *)CONCAT71(uVar10,1);
        if ((cVar6 == '\0') || (local_40 == 0)) {
LAB_00e6bba0:
          param_1 = (undefined8 *)CONCAT71(uVar10,1);
          local_40 = local_88;
        }
        else {
          uVar13 = FUN_00d50b20();
          local_40 = local_88;
        }
      }
      if ((local_118 != '\0') && (local_120 != 0)) {
        uVar13 = FUN_00d50b20();
      }
      if (local_70 != (longlong *)0x0) {
        local_1a0 = local_70;
        local_198 = 0;
        local_190 = plVar5;
        local_188 = 0;
        local_180 = local_40;
        local_178 = 0;
        FUN_00e6a750(uVar13,&local_180);
        FUN_00e97f20();
        plVar2 = local_70;
        cVar6 = (char)local_68;
        if (local_70 == local_78) {
          if ((((char)local_68 != '\0') && (cVar11 == '\0')) && (local_70 != (longlong *)0x0)) {
            cVar11 = '\x01';
            FUN_00d50b00();
          }
        }
        else {
          if (((char)local_68 != '\0') && (local_70 != (longlong *)0x0)) {
            FUN_00d50b00();
          }
          if ((cVar11 == '\0') || (local_78 == (longlong *)0x0)) {
            local_78 = plVar2;
            cVar11 = cVar6;
          }
          else {
            FUN_00d50b20();
            local_78 = plVar2;
            cVar11 = cVar6;
          }
        }
      }
      uVar13 = FUN_00da7180();
      if (local_60 == (longlong *)0x0) break;
      local_60 = (longlong *)0x0;
      if (local_58 == '\0') {
        local_58 = '\0';
        local_c0 = param_1;
        goto joined_r0x00e6bf6d;
      }
      uVar13 = FUN_00d50b20();
      local_58 = '\0';
      uVar8 = (uint)param_1;
    } while (local_60 != (longlong *)0x0);
  }
  local_c0 = param_1;
joined_r0x00e6bf6d:
  if (((char)local_68 != '\0') && (local_70 != (longlong *)0x0)) {
    uVar13 = FUN_00d50b20();
  }
  lVar3 = local_40;
  puVar12 = local_b8;
  if (local_78 != (longlong *)0x0) {
    uVar13 = FUN_00e971f0();
  }
  plVar2 = DAT_02783f20;
  local_40 = lVar3;
  if (lVar3 != 0) {
    if (DAT_02783f20 != (longlong *)0x0) {
      uVar13 = FUN_00d50b00();
    }
    lVar3 = DAT_02787890;
    if (DAT_02787890 != 0) {
      uVar13 = FUN_00d50b00();
    }
    local_110 = lVar3;
    local_108 = '\x01';
    pplVar9 = &local_70;
    FUN_000175c0(uVar13,&local_110);
    plVar1 = local_70;
    if ((DAT_026fd0c0 == '\0') && (iVar7 = ___cxa_guard_acquire(), iVar7 != 0)) {
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
      puVar12 = local_b8;
    }
    if (plVar1 == (longlong *)0x0) {
LAB_00e6be0b:
      pplVar9 = (longlong **)&DAT_02802688;
    }
    else {
      (**(code **)(*plVar1 + 0x360))();
      cVar6 = FUN_00e85ea0();
      if (cVar6 == '\0') goto LAB_00e6be0b;
    }
    local_a8 = 0;
    plVar1 = *pplVar9;
    if (*(char *)(pplVar9 + 1) == '\0') {
      if (plVar1 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      *(undefined1 *)(pplVar9 + 1) = 0;
    }
    local_a8 = '\x01';
    local_b0 = plVar1;
    cVar6 = (**(code **)(*plVar2 + 0x50))();
    if ((local_a8 != '\0') && (local_b0 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (((char)local_68 != '\0') && (local_70 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_108 != '\0') && (local_110 != 0)) {
      FUN_00d50b20();
    }
    uVar13 = FUN_00d50b20();
    lVar3 = DAT_027878a0;
    if (cVar6 != '\0') {
      if (puVar12 != (undefined8 *)0x0) {
        if (DAT_027878a0 != 0) {
          uVar13 = FUN_00d50b00();
        }
        local_100 = lVar3;
        local_f8 = '\x01';
        pplVar9 = &local_70;
        uVar13 = FUN_000175c0(uVar13,&local_100);
        plVar2 = local_70;
        if ((DAT_026fd0c0 == '\0') &&
           (iVar7 = ___cxa_guard_acquire(), uVar13 = extraout_XMM0_Da_00, iVar7 != 0)) {
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
          uVar13 = ___cxa_guard_release();
          puVar12 = local_b8;
        }
        if (plVar2 == (longlong *)0x0) {
LAB_00e6bf41:
          pplVar9 = (longlong **)&DAT_02802688;
        }
        else {
          (**(code **)(*plVar2 + 0x360))();
          cVar6 = FUN_00e85ea0();
          uVar13 = extraout_XMM0_Da;
          if (cVar6 == '\0') goto LAB_00e6bf41;
        }
        plVar2 = *pplVar9;
        if (*(char *)(pplVar9 + 1) == '\0') {
          if (plVar2 != (longlong *)0x0) {
            uVar13 = FUN_00d50b00();
          }
        }
        else {
          *(undefined1 *)(pplVar9 + 1) = 0;
        }
        if (((char)local_68 != '\0') && (local_70 != (longlong *)0x0)) {
          uVar13 = FUN_00d50b20();
        }
        if ((local_f8 != '\0') && (local_100 != 0)) {
          uVar13 = FUN_00d50b20();
        }
        if (plVar2 != (longlong *)0x0) {
          local_e8 = '\0';
          local_f0 = plVar2;
          FUN_00db9a70();
          plVar1 = local_70;
          plVar2 = (longlong *)*puVar12;
          if (plVar2 == local_70) {
            if ((*(char *)(puVar12 + 1) != '\0') || (local_70 == (longlong *)0x0))
            goto LAB_00e6c06c;
            if ((char)local_68 == '\0') {
              FUN_00d50b00();
              goto LAB_00e6c068;
            }
LAB_00e6c028:
            *(undefined1 *)(puVar12 + 1) = 1;
            local_68 = local_68 & 0xffffff00;
          }
          else {
            cVar6 = *(char *)(puVar12 + 1);
            if ((char)local_68 != '\0') {
              *puVar12 = local_70;
              if ((cVar6 != '\0') && (plVar2 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              goto LAB_00e6c028;
            }
            if (local_70 != (longlong *)0x0) {
              FUN_00d50b00();
            }
            *local_b8 = plVar1;
            if ((cVar6 != '\0') && (plVar2 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
LAB_00e6c068:
            *(undefined1 *)(puVar12 + 1) = 1;
LAB_00e6c06c:
            if (((char)local_68 != '\0') && (local_70 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
          if ((local_e8 != '\0') && (local_f0 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          uVar13 = FUN_00d50b20();
        }
      }
      lVar3 = DAT_027855f0;
      if (DAT_027855f0 != 0) {
        uVar13 = FUN_00d50b00();
      }
      local_e0 = lVar3;
      local_d8 = '\x01';
      pplVar9 = &local_70;
      FUN_000175c0(uVar13,&local_e0);
      plVar2 = local_70;
      if ((DAT_026fd0c0 == '\0') && (iVar7 = ___cxa_guard_acquire(), iVar7 != 0)) {
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
      if (plVar2 == (longlong *)0x0) {
LAB_00e6c111:
        pplVar9 = (longlong **)&DAT_02802688;
      }
      else {
        (**(code **)(*plVar2 + 0x360))();
        cVar6 = FUN_00e85ea0();
        if (cVar6 == '\0') goto LAB_00e6c111;
      }
      plVar2 = *pplVar9;
      if (*(char *)(pplVar9 + 1) == '\0') {
        if (plVar2 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        *(undefined1 *)(pplVar9 + 1) = 0;
      }
      if (((char)local_68 != '\0') && (local_70 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_d8 != '\0') && (local_e0 != 0)) {
        FUN_00d50b20();
      }
      if (plVar2 != (longlong *)0x0) {
        local_c8 = '\0';
        local_d0 = plVar2;
        FUN_00db9a70();
        if ((local_c8 != '\0') && (local_d0 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        FUN_00d50b20();
        lVar3 = local_40;
        goto joined_r0x00e6c206;
      }
    }
  }
  lVar3 = local_40;
  local_170 = plVar5;
  local_168 = 0;
  local_160 = local_40;
  local_158 = 0;
  FUN_00e6b160();
  *(undefined1 *)(unaff_RDI + 1) = 0;
  *unaff_RDI = 0;
joined_r0x00e6c206:
  if ((cVar11 != '\0') && (local_78 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_c0 != '\0') && (lVar3 != 0)) {
    FUN_00d50b20();
  }
  if (local_a0 != 0) {
    FUN_00d50b20();
  }
  if (plVar5 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return unaff_RDI;
}


