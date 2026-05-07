// Function: FUN_00e6dc80
// Address: 00e6dc80
// Size: 3669 bytes
// Class: GNString
// String references:
//   "%@getLicenseManagerUrl?%@"
//   "GNString"


/* WARNING: Removing unreachable block (ram,0x00e6df94) */
/* WARNING: Removing unreachable block (ram,0x00e6dfa4) */
/* WARNING: Removing unreachable block (ram,0x00e6dfbb) */
/* WARNING: Removing unreachable block (ram,0x00e6dfc0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_00e6dc80(double *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  char cVar6;
  int iVar7;
  undefined8 *unaff_RDI;
  longlong lVar8;
  undefined8 *puVar9;
  uint uVar10;
  undefined7 uVar12;
  ulonglong uVar11;
  char cVar13;
  longlong **pplVar14;
  undefined4 uVar15;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  double dVar16;
  undefined8 local_1e0;
  undefined1 local_1d8;
  longlong *local_1d0;
  undefined1 local_1c8;
  longlong *local_1c0;
  undefined1 local_1b8;
  longlong local_1b0;
  undefined1 local_1a8;
  longlong *local_1a0;
  undefined1 local_198;
  longlong local_190;
  undefined1 local_188;
  longlong local_180 [2];
  undefined1 local_170;
  longlong local_168;
  char local_160;
  longlong local_158;
  char local_150;
  longlong local_148;
  char local_140;
  longlong *local_138;
  char local_130;
  longlong local_128;
  char local_120;
  longlong *local_118;
  char local_110;
  longlong local_108;
  char local_100;
  longlong *local_f8;
  char local_f0;
  ulonglong local_e8;
  longlong local_e0;
  ulonglong local_d8;
  undefined8 *local_d0;
  double *local_c8;
  undefined8 *local_c0;
  longlong *local_b8;
  char local_b0;
  longlong local_a8;
  longlong local_90;
  char local_88;
  longlong *local_80;
  char local_78;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong *local_40;
  
  local_c8 = param_1;
  FUN_00e67a40(param_1,0);
  plVar5 = local_80;
  if ((local_78 == '\0') && (local_80 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  lVar8 = DAT_02787870;
  if (DAT_02787870 != 0) {
    FUN_00d50b00();
  }
  lVar3 = DAT_027855b8;
  if (DAT_027855b8 != 0) {
    FUN_00d50b00();
  }
  lVar4 = DAT_027855c0;
  if (DAT_027855c0 != 0) {
    FUN_00d50b00();
  }
  local_e8 = lVar8;
  local_e0 = lVar3;
  local_180[0] = lVar4;
  FUN_002bd7b0(local_180,&local_e0,3);
  FUN_000b6830();
  if (local_88 == '\0') {
    if (local_90 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_88 = '\0';
  }
  local_170 = 1;
  FUN_00e600c0();
  if (local_90 != 0) {
    FUN_00d50b20();
  }
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  local_80 = (longlong *)&DAT_025df260;
  local_d0 = param_2;
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  local_80 = (longlong *)&DAT_0253d630;
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  local_80 = &DAT_024c5048;
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  if (lVar8 != 0) {
    FUN_00d50b20();
  }
  uVar11 = DAT_02787970;
  if (DAT_02787970 != 0) {
    FUN_00d50b00();
  }
  lVar8 = DAT_02787880;
  if (DAT_02787880 != 0) {
    FUN_00d50b00();
  }
  local_e8 = uVar11;
  local_e0 = lVar8;
  uVar15 = FUN_00083ea0(2,&local_e0);
  FUN_00d8cb40(uVar15,&local_80);
  local_a8 = local_90;
  if (local_88 == '\0') {
    if (local_90 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_88 = '\0';
  }
  local_80 = (longlong *)&DAT_0253d630;
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  local_80 = &DAT_024c5048;
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if (lVar8 != 0) {
    FUN_00d50b20();
  }
  if (uVar11 != 0) {
    FUN_00d50b20();
  }
  local_78 = '\0';
  local_80 = (longlong *)0x0;
  FUN_00da5ad0();
  local_68 = local_88 != '\0';
  local_70 = local_90;
  if ((bool)local_68) {
    local_88 = '\0';
  }
  local_60 = FUN_00da7170();
  uVar15 = FUN_00da7180();
  if (local_70 == 0) {
    cVar13 = '\0';
    local_40 = (longlong *)0x0;
    lVar8 = 0;
    local_d8 = 0;
  }
  else {
    lVar8 = 0;
    uVar10 = 0;
    local_40 = (longlong *)0x0;
    cVar13 = '\0';
    do {
      local_168 = local_a8;
      local_160 = '\0';
      local_1e0 = 0;
      local_1d8 = 0;
      uVar15 = FUN_00e69550((int)DAT_02394dd8,&local_168,&local_1e0);
      uVar12 = (undefined7)(uVar11 >> 8);
      cVar6 = (char)uVar10;
      if (local_90 == lVar8) {
        if ((cVar6 == '\0') && (local_90 != 0)) {
          uVar11 = CONCAT71(uVar12,1);
          if (local_88 == '\0') {
            uVar15 = FUN_00d50b00();
          }
        }
        else if ((local_88 == '\0') || (local_90 == 0)) {
          uVar11 = (ulonglong)uVar10;
        }
        else {
          uVar15 = FUN_00d50b20();
          uVar11 = (ulonglong)uVar10;
        }
      }
      else if (local_88 == '\0') {
        if (local_90 != 0) {
          uVar15 = FUN_00d50b00();
        }
        uVar11 = CONCAT71(uVar12,1);
        if ((cVar6 == '\0') || (lVar8 == 0)) goto LAB_00e6e0f0;
        uVar15 = FUN_00d50b20();
        lVar8 = local_90;
      }
      else {
        uVar11 = CONCAT71(uVar12,1);
        if ((cVar6 == '\0') || (lVar8 == 0)) {
LAB_00e6e0f0:
          uVar11 = CONCAT71(uVar12,1);
          lVar8 = local_90;
        }
        else {
          uVar15 = FUN_00d50b20();
          lVar8 = local_90;
        }
      }
      if ((local_160 != '\0') && (local_168 != 0)) {
        uVar15 = FUN_00d50b20();
      }
      if (local_80 != (longlong *)0x0) {
        local_1d0 = local_80;
        local_1c8 = 0;
        local_1c0 = plVar5;
        local_1b8 = 0;
        local_1a8 = 0;
        local_1b0 = lVar8;
        FUN_00e6a750(uVar15,&local_1b0);
        FUN_00e97f20();
        cVar6 = local_78;
        plVar2 = local_80;
        if (local_80 == local_40) {
          if (((local_78 != '\0') && (cVar13 == '\0')) && (local_80 != (longlong *)0x0)) {
            cVar13 = '\x01';
            FUN_00d50b00();
          }
        }
        else {
          if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
            FUN_00d50b00();
          }
          if ((cVar13 == '\0') || (local_40 == (longlong *)0x0)) {
            local_40 = plVar2;
            cVar13 = cVar6;
          }
          else {
            FUN_00d50b20();
            local_40 = plVar2;
            cVar13 = cVar6;
          }
        }
      }
      uVar15 = FUN_00da7180();
      local_d8 = uVar11;
      if (local_70 == 0) break;
      local_70 = 0;
      if (local_68 == '\0') {
        local_68 = '\0';
        break;
      }
      uVar15 = FUN_00d50b20();
      local_68 = '\0';
      uVar10 = (uint)uVar11;
    } while (local_70 != 0);
  }
  local_70 = 0;
  if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
    uVar15 = FUN_00d50b20();
  }
  if (local_40 != (longlong *)0x0) {
    uVar15 = FUN_00e971f0();
  }
  plVar2 = DAT_02783f20;
  if (lVar8 != 0) {
    if (DAT_02783f20 != (longlong *)0x0) {
      uVar15 = FUN_00d50b00();
    }
    lVar3 = DAT_02787890;
    if (DAT_02787890 != 0) {
      uVar15 = FUN_00d50b00();
    }
    local_158 = lVar3;
    local_150 = '\x01';
    pplVar14 = &local_80;
    FUN_000175c0(uVar15,&local_158);
    plVar1 = local_80;
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
    if (plVar1 == (longlong *)0x0) {
LAB_00e6e34a:
      pplVar14 = (longlong **)&DAT_02802688;
    }
    else {
      (**(code **)(*plVar1 + 0x360))();
      cVar6 = FUN_00e85ea0();
      if (cVar6 == '\0') goto LAB_00e6e34a;
    }
    local_b0 = 0;
    plVar1 = *pplVar14;
    if (*(char *)(pplVar14 + 1) == '\0') {
      if (plVar1 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      *(undefined1 *)(pplVar14 + 1) = 0;
    }
    local_b0 = '\x01';
    local_b8 = plVar1;
    cVar6 = (**(code **)(*plVar2 + 0x50))();
    if ((local_b0 != '\0') && (local_b8 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    puVar9 = local_d0;
    if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_150 != '\0') && (local_158 != 0)) {
      FUN_00d50b20();
    }
    uVar15 = FUN_00d50b20();
    lVar3 = DAT_027878a8;
    if (cVar6 != '\0') {
      if (puVar9 != (undefined8 *)0x0) {
        if (DAT_027878a8 != 0) {
          uVar15 = FUN_00d50b00();
        }
        local_148 = lVar3;
        local_140 = '\x01';
        pplVar14 = &local_80;
        uVar15 = FUN_000175c0(uVar15,&local_148);
        plVar2 = local_80;
        if ((DAT_026fd0c0 == '\0') &&
           (iVar7 = ___cxa_guard_acquire(), uVar15 = extraout_XMM0_Da_00, iVar7 != 0)) {
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
          uVar15 = ___cxa_guard_release();
          puVar9 = local_d0;
        }
        if (plVar2 == (longlong *)0x0) {
LAB_00e6e480:
          pplVar14 = (longlong **)&DAT_02802688;
        }
        else {
          (**(code **)(*plVar2 + 0x360))();
          cVar6 = FUN_00e85ea0();
          uVar15 = extraout_XMM0_Da;
          if (cVar6 == '\0') goto LAB_00e6e480;
        }
        plVar2 = *pplVar14;
        if (*(char *)(pplVar14 + 1) == '\0') {
          if (plVar2 != (longlong *)0x0) {
            uVar15 = FUN_00d50b00();
          }
        }
        else {
          *(undefined1 *)(pplVar14 + 1) = 0;
        }
        if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
          uVar15 = FUN_00d50b20();
        }
        if ((local_140 != '\0') && (local_148 != 0)) {
          uVar15 = FUN_00d50b20();
        }
        if (plVar2 != (longlong *)0x0) {
          local_130 = '\0';
          local_138 = plVar2;
          FUN_00db9a70();
          plVar1 = local_80;
          plVar2 = (longlong *)*puVar9;
          if (plVar2 == local_80) {
            if ((*(char *)(puVar9 + 1) != '\0') || (local_80 == (longlong *)0x0)) goto LAB_00e6e5c6;
            local_c0 = puVar9 + 1;
            if (local_78 == '\0') {
              FUN_00d50b00();
              goto LAB_00e6e5bc;
            }
LAB_00e6e572:
            *(undefined1 *)local_c0 = 1;
            local_78 = '\0';
          }
          else {
            local_c0 = puVar9 + 1;
            cVar6 = *(char *)(puVar9 + 1);
            if (local_78 != '\0') {
              *puVar9 = local_80;
              if ((cVar6 != '\0') && (plVar2 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              goto LAB_00e6e572;
            }
            if (local_80 != (longlong *)0x0) {
              FUN_00d50b00();
            }
            *local_d0 = plVar1;
            if ((cVar6 != '\0') && (plVar2 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
LAB_00e6e5bc:
            *(undefined1 *)local_c0 = 1;
LAB_00e6e5c6:
            if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
          if ((local_130 != '\0') && (local_138 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          uVar15 = FUN_00d50b20();
        }
      }
      if (local_c8 != (double *)0x0) {
        dVar16 = (double)FUN_00dcd050();
        uVar15 = SUB84(dVar16,0);
        *local_c8 = dVar16;
        local_128 = DAT_027878b0;
        if (DAT_027878b0 != 0) {
          uVar15 = FUN_00d50b00();
        }
        local_120 = '\x01';
        uVar15 = FUN_000175c0(uVar15,&local_128);
        plVar2 = local_80;
        if (local_78 == '\0') {
          if (((local_80 != (longlong *)0x0) && (uVar15 = FUN_00d50b00(), local_78 != '\0')) &&
             (local_80 != (longlong *)0x0)) {
            uVar15 = FUN_00d50b20();
          }
        }
        else {
          local_78 = '\0';
        }
        if ((local_120 != '\0') && (local_128 != 0)) {
          uVar15 = FUN_00d50b20();
        }
        if (plVar2 != (longlong *)0x0) {
          local_118 = plVar2;
          local_110 = '\0';
          iVar7 = FUN_00c716c0();
          if ((local_110 != '\0') && (local_118 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (0.0 < (double)iVar7 / DAT_023907c0) {
            *local_c8 = (double)iVar7 / DAT_023907c0;
          }
          uVar15 = FUN_00d50b20();
        }
      }
      lVar3 = DAT_027855f0;
      if (DAT_027855f0 != 0) {
        uVar15 = FUN_00d50b00();
      }
      local_108 = lVar3;
      local_100 = '\x01';
      pplVar14 = &local_80;
      FUN_000175c0(uVar15,&local_108);
      plVar2 = local_80;
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
LAB_00e6e750:
        pplVar14 = (longlong **)&DAT_02802688;
      }
      else {
        (**(code **)(*plVar2 + 0x360))();
        cVar6 = FUN_00e85ea0();
        if (cVar6 == '\0') goto LAB_00e6e750;
      }
      plVar2 = *pplVar14;
      if (*(char *)(pplVar14 + 1) == '\0') {
        if (plVar2 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        *(undefined1 *)(pplVar14 + 1) = 0;
      }
      if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
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
        goto joined_r0x00e6e83d;
      }
    }
  }
  local_1a0 = plVar5;
  local_198 = 0;
  local_188 = 0;
  local_190 = lVar8;
  FUN_00e6b160();
  *(undefined1 *)(unaff_RDI + 1) = 0;
  *unaff_RDI = 0;
joined_r0x00e6e83d:
  if ((cVar13 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_d8 != '\0') && (lVar8 != 0)) {
    FUN_00d50b20();
  }
  if (local_a8 != 0) {
    FUN_00d50b20();
  }
  if (plVar5 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return unaff_RDI;
}


