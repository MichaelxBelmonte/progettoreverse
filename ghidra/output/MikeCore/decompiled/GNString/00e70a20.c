// Function: FUN_00e70a20
// Address: 00e70a20
// Size: 3450 bytes
// Class: GNString
// String references:
//   "%@supportRequest?%@"
//   "GNString"


/* WARNING: Removing unreachable block (ram,0x00e70d48) */
/* WARNING: Removing unreachable block (ram,0x00e70d58) */
/* WARNING: Removing unreachable block (ram,0x00e70d72) */
/* WARNING: Removing unreachable block (ram,0x00e70d77) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_00e70a20(ulonglong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  undefined8 *unaff_RDI;
  uint uVar7;
  undefined7 uVar9;
  ulonglong uVar8;
  undefined8 *puVar10;
  char cVar11;
  longlong **pplVar12;
  undefined4 uVar13;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined8 local_1c0;
  undefined1 local_1b8;
  longlong *local_1b0;
  undefined1 local_1a8;
  longlong *local_1a0;
  undefined1 local_198;
  longlong local_190;
  undefined1 local_188;
  longlong *local_180;
  undefined1 local_178;
  longlong local_170;
  undefined1 local_168;
  ulonglong local_160 [2];
  undefined1 local_150;
  longlong local_148;
  char local_140;
  longlong local_138;
  char local_130;
  longlong local_128;
  char local_120;
  longlong *local_118;
  char local_110;
  longlong local_108;
  char local_100;
  longlong *local_f8;
  char local_f0;
  longlong local_e8;
  longlong local_e0;
  ulonglong local_d8;
  undefined8 *local_d0;
  undefined8 *local_c8;
  longlong *local_c0;
  char local_b8;
  longlong local_b0;
  longlong *local_a8;
  longlong local_98;
  char local_90;
  longlong *local_88;
  char local_80;
  longlong local_78;
  char local_70;
  longlong local_68;
  char local_60;
  longlong local_58;
  char local_50;
  longlong *local_48;
  longlong local_40;
  
  FUN_00e67a40(param_1,param_1 & 0xffffffff);
  if ((local_80 == '\0') && (local_88 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  lVar4 = DAT_02787870;
  local_a8 = local_88;
  if (DAT_02787870 != 0) {
    FUN_00d50b00();
  }
  lVar3 = DAT_027855b8;
  if (DAT_027855b8 != 0) {
    FUN_00d50b00();
  }
  uVar8 = DAT_027d2068;
  if (DAT_027d2068 != 0) {
    FUN_00d50b00();
  }
  local_e8 = lVar4;
  local_e0 = lVar3;
  local_160[0] = uVar8;
  FUN_002bd7b0(local_160,&local_e0,3);
  FUN_000b6830();
  if (local_90 == '\0') {
    if (local_98 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_90 = '\0';
  }
  local_150 = 1;
  FUN_00e600c0();
  if (local_98 != 0) {
    FUN_00d50b20();
  }
  if ((local_90 != '\0') && (local_98 != 0)) {
    FUN_00d50b20();
  }
  local_88 = (longlong *)&DAT_025df260;
  local_d0 = param_2;
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  local_88 = (longlong *)&DAT_0253d630;
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  local_88 = &DAT_024c5048;
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  if (uVar8 != 0) {
    FUN_00d50b20();
  }
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  lVar4 = DAT_02787970;
  if (DAT_02787970 != 0) {
    FUN_00d50b00();
  }
  lVar3 = DAT_02787880;
  if (DAT_02787880 != 0) {
    FUN_00d50b00();
  }
  local_e8 = lVar4;
  local_e0 = lVar3;
  uVar13 = FUN_00083ea0(2,&local_e0);
  FUN_00d8cb40(uVar13,&local_88);
  local_b0 = local_98;
  if (local_90 == '\0') {
    if (local_98 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_90 = '\0';
  }
  local_88 = (longlong *)&DAT_0253d630;
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  local_88 = &DAT_024c5048;
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  local_80 = '\0';
  local_88 = (longlong *)0x0;
  FUN_00da5ad0();
  local_70 = local_90 != '\0';
  local_78 = local_98;
  if ((bool)local_70) {
    local_90 = '\0';
  }
  local_68 = FUN_00da7170();
  uVar13 = FUN_00da7180();
  if (local_78 == 0) {
    local_40 = 0;
    local_48 = (longlong *)0x0;
    cVar11 = '\0';
    local_d8 = 0;
  }
  else {
    cVar11 = '\0';
    local_48 = (longlong *)0x0;
    local_40 = 0;
    uVar7 = 0;
    do {
      local_148 = local_b0;
      local_140 = '\0';
      local_1c0 = 0;
      local_1b8 = 0;
      uVar13 = FUN_00e69550((int)DAT_02394dd8,&local_148,&local_1c0);
      uVar9 = (undefined7)(uVar8 >> 8);
      cVar5 = (char)uVar7;
      if (local_98 == local_40) {
        if ((cVar5 == '\0') && (local_98 != 0)) {
          uVar8 = CONCAT71(uVar9,1);
          if (local_90 == '\0') {
            uVar13 = FUN_00d50b00();
          }
        }
        else if ((local_90 == '\0') || (local_98 == 0)) {
          uVar8 = (ulonglong)uVar7;
        }
        else {
          uVar13 = FUN_00d50b20();
          uVar8 = (ulonglong)uVar7;
        }
      }
      else if (local_90 == '\0') {
        if (local_98 != 0) {
          uVar13 = FUN_00d50b00();
        }
        uVar8 = CONCAT71(uVar9,1);
        if ((cVar5 == '\0') || (local_40 == 0)) goto LAB_00e70ed0;
        uVar13 = FUN_00d50b20();
        local_40 = local_98;
      }
      else {
        uVar8 = CONCAT71(uVar9,1);
        if ((cVar5 == '\0') || (local_40 == 0)) {
LAB_00e70ed0:
          uVar8 = CONCAT71(uVar9,1);
          local_40 = local_98;
        }
        else {
          uVar13 = FUN_00d50b20();
          local_40 = local_98;
        }
      }
      if ((local_140 != '\0') && (local_148 != 0)) {
        uVar13 = FUN_00d50b20();
      }
      if (local_88 != (longlong *)0x0) {
        local_1b0 = local_88;
        local_1a8 = 0;
        local_1a0 = local_a8;
        local_198 = 0;
        local_190 = local_40;
        local_188 = 0;
        FUN_00e6a750(uVar13,&local_190);
        FUN_00e97f20();
        cVar5 = local_80;
        plVar2 = local_88;
        if (local_88 == local_48) {
          if (((local_80 != '\0') && (cVar11 == '\0')) && (local_88 != (longlong *)0x0)) {
            cVar11 = '\x01';
            FUN_00d50b00();
          }
        }
        else {
          if ((local_80 != '\0') && (local_88 != (longlong *)0x0)) {
            FUN_00d50b00();
          }
          if ((cVar11 == '\0') || (local_48 == (longlong *)0x0)) {
            local_48 = plVar2;
            cVar11 = cVar5;
          }
          else {
            FUN_00d50b20();
            local_48 = plVar2;
            cVar11 = cVar5;
          }
        }
      }
      uVar13 = FUN_00da7180();
      local_d8 = uVar8;
      if (local_78 == 0) break;
      local_78 = 0;
      if (local_70 == '\0') {
        local_70 = '\0';
        break;
      }
      uVar13 = FUN_00d50b20();
      local_70 = '\0';
      uVar7 = (uint)uVar8;
    } while (local_78 != 0);
  }
  local_78 = 0;
  if ((local_80 != '\0') && (local_88 != (longlong *)0x0)) {
    uVar13 = FUN_00d50b20();
  }
  if (local_48 != (longlong *)0x0) {
    uVar13 = FUN_00e971f0();
  }
  plVar2 = DAT_02783f20;
  if (local_40 != 0) {
    if (DAT_02783f20 != (longlong *)0x0) {
      uVar13 = FUN_00d50b00();
    }
    lVar4 = DAT_02787890;
    if (DAT_02787890 != 0) {
      uVar13 = FUN_00d50b00();
    }
    local_138 = lVar4;
    local_130 = '\x01';
    pplVar12 = &local_88;
    FUN_000175c0(uVar13,&local_138);
    plVar1 = local_88;
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
    if (plVar1 == (longlong *)0x0) {
LAB_00e71138:
      pplVar12 = (longlong **)&DAT_02802688;
    }
    else {
      (**(code **)(*plVar1 + 0x360))();
      cVar5 = FUN_00e85ea0();
      if (cVar5 == '\0') goto LAB_00e71138;
    }
    local_b8 = 0;
    plVar1 = *pplVar12;
    if (*(char *)(pplVar12 + 1) == '\0') {
      if (plVar1 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      *(undefined1 *)(pplVar12 + 1) = 0;
    }
    local_b8 = '\x01';
    local_c0 = plVar1;
    cVar5 = (**(code **)(*plVar2 + 0x50))();
    if ((local_b8 != '\0') && (local_c0 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_80 != '\0') && (local_88 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    puVar10 = local_d0;
    if ((local_130 != '\0') && (local_138 != 0)) {
      FUN_00d50b20();
    }
    uVar13 = FUN_00d50b20();
    lVar4 = DAT_027878a0;
    if (cVar5 != '\0') {
      if (puVar10 != (undefined8 *)0x0) {
        if (DAT_027878a0 != 0) {
          uVar13 = FUN_00d50b00();
        }
        local_128 = lVar4;
        local_120 = '\x01';
        pplVar12 = &local_88;
        uVar13 = FUN_000175c0(uVar13,&local_128);
        plVar2 = local_88;
        if ((DAT_026fd0c0 == '\0') &&
           (iVar6 = ___cxa_guard_acquire(), uVar13 = extraout_XMM0_Da_00, iVar6 != 0)) {
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
          puVar10 = local_d0;
        }
        if (plVar2 == (longlong *)0x0) {
LAB_00e71272:
          pplVar12 = (longlong **)&DAT_02802688;
        }
        else {
          (**(code **)(*plVar2 + 0x360))();
          cVar5 = FUN_00e85ea0();
          uVar13 = extraout_XMM0_Da;
          if (cVar5 == '\0') goto LAB_00e71272;
        }
        plVar2 = *pplVar12;
        if (*(char *)(pplVar12 + 1) == '\0') {
          if (plVar2 != (longlong *)0x0) {
            uVar13 = FUN_00d50b00();
          }
        }
        else {
          *(undefined1 *)(pplVar12 + 1) = 0;
        }
        if ((local_80 != '\0') && (local_88 != (longlong *)0x0)) {
          uVar13 = FUN_00d50b20();
        }
        if ((local_120 != '\0') && (local_128 != 0)) {
          uVar13 = FUN_00d50b20();
        }
        if (plVar2 != (longlong *)0x0) {
          local_110 = '\0';
          local_118 = plVar2;
          FUN_00db9a70();
          plVar1 = local_88;
          plVar2 = (longlong *)*puVar10;
          if (plVar2 == local_88) {
            if ((*(char *)(puVar10 + 1) != '\0') || (local_88 == (longlong *)0x0))
            goto LAB_00e713b8;
            local_c8 = puVar10 + 1;
            if (local_80 == '\0') {
              FUN_00d50b00();
              goto LAB_00e713ae;
            }
LAB_00e71364:
            *(undefined1 *)local_c8 = 1;
            local_80 = '\0';
          }
          else {
            local_c8 = puVar10 + 1;
            cVar5 = *(char *)(puVar10 + 1);
            if (local_80 != '\0') {
              *puVar10 = local_88;
              if ((cVar5 != '\0') && (plVar2 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              goto LAB_00e71364;
            }
            if (local_88 != (longlong *)0x0) {
              FUN_00d50b00();
            }
            *local_d0 = plVar1;
            if ((cVar5 != '\0') && (plVar2 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
LAB_00e713ae:
            *(undefined1 *)local_c8 = 1;
LAB_00e713b8:
            if ((local_80 != '\0') && (local_88 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
          if ((local_110 != '\0') && (local_118 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          uVar13 = FUN_00d50b20();
        }
      }
      lVar4 = DAT_027855f0;
      if (DAT_027855f0 != 0) {
        uVar13 = FUN_00d50b00();
      }
      local_108 = lVar4;
      local_100 = '\x01';
      pplVar12 = &local_88;
      FUN_000175c0(uVar13,&local_108);
      plVar2 = local_88;
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
      if (plVar2 == (longlong *)0x0) {
LAB_00e7145d:
        pplVar12 = (longlong **)&DAT_02802688;
      }
      else {
        (**(code **)(*plVar2 + 0x360))();
        cVar5 = FUN_00e85ea0();
        if (cVar5 == '\0') goto LAB_00e7145d;
      }
      plVar2 = *pplVar12;
      if (*(char *)(pplVar12 + 1) == '\0') {
        if (plVar2 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        *(undefined1 *)(pplVar12 + 1) = 0;
      }
      if ((local_80 != '\0') && (local_88 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_100 != '\0') && (local_108 != 0)) {
        FUN_00d50b20();
      }
      if (plVar2 != (longlong *)0x0) {
        local_f0 = '\0';
        local_f8 = plVar2;
        FUN_00db9a70();
        if ((local_f0 != '\0') && (local_f8 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        FUN_00d50b20();
        goto joined_r0x00e71546;
      }
    }
  }
  local_180 = local_a8;
  local_178 = 0;
  local_170 = local_40;
  local_168 = 0;
  FUN_00e6b160();
  *(undefined1 *)(unaff_RDI + 1) = 0;
  *unaff_RDI = 0;
joined_r0x00e71546:
  if ((cVar11 != '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_d8 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if (local_b0 != 0) {
    FUN_00d50b20();
  }
  if (local_a8 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return unaff_RDI;
}


