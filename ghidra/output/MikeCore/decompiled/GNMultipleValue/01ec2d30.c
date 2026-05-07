// Function: FUN_01ec2d30
// Address: 01ec2d30
// Size: 4995 bytes
// Class: GNMultipleValue
// String references:
//   "GNMultipleValue"
//   "GNControl"
//   "value%I"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01ec2d30(void)

{
  longlong *plVar1;
  undefined8 *puVar2;
  bool bVar3;
  bool bVar4;
  longlong lVar5;
  char cVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined7 extraout_var;
  undefined7 extraout_var_00;
  undefined7 extraout_var_01;
  undefined7 extraout_var_02;
  undefined7 extraout_var_03;
  undefined7 uVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong *plVar13;
  longlong *plVar14;
  longlong *unaff_RDI;
  undefined8 **ppuVar15;
  longlong **pplVar16;
  undefined4 uVar17;
  undefined4 extraout_XMM0_Da;
  longlong *local_2c8;
  undefined1 local_2c0;
  longlong *local_2b8;
  char local_2b0;
  longlong local_2a8;
  char local_2a0;
  undefined8 *local_298;
  char local_290;
  undefined8 *local_288;
  char local_280;
  longlong local_278;
  longlong local_270;
  longlong *local_268;
  longlong local_260;
  char local_258;
  longlong local_250;
  char local_248;
  longlong local_240;
  char local_238;
  longlong local_230;
  char local_228;
  longlong local_220;
  char local_218;
  longlong local_210;
  char local_208;
  longlong local_200;
  char local_1f8;
  longlong local_1f0;
  undefined8 *local_1e8;
  undefined4 local_1e0;
  undefined4 local_1dc;
  undefined8 *local_1d8;
  longlong local_1d0;
  undefined8 local_1c8;
  longlong *local_1c0;
  uint local_1b8;
  undefined8 *local_1b0;
  char local_1a8;
  longlong local_1a0;
  char local_198;
  longlong local_190;
  char local_188;
  longlong local_170;
  char local_168;
  longlong *local_160;
  longlong *local_158;
  undefined8 *local_138;
  char local_130 [8];
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
  longlong local_98;
  char local_90;
  longlong local_88;
  char local_80;
  longlong local_78;
  char local_70;
  longlong local_68;
  char local_60;
  longlong local_58;
  char local_50;
  longlong local_48;
  char local_40;
  longlong local_38;
  
  local_38 = *(longlong *)PTR____stack_chk_guard_024a9898;
  local_130[0] = '\0';
  local_138 = (undefined8 *)0x0;
  local_128 = 0;
  local_120 = '\0';
  local_118 = 0;
  local_110 = '\0';
  local_108 = 0;
  local_100 = '\0';
  local_f8 = 0;
  local_f0 = '\0';
  local_e8 = 0;
  local_e0 = '\0';
  local_d8 = 0;
  local_d0 = '\0';
  local_c0 = '\0';
  local_c8 = 0;
  local_b0 = '\0';
  local_b8 = 0;
  local_a0 = '\0';
  local_a8 = 0;
  local_90 = '\0';
  local_98 = 0;
  local_80 = '\0';
  local_88 = 0;
  local_70 = '\0';
  local_78 = 0;
  local_60 = '\0';
  local_68 = 0;
  local_50 = '\0';
  local_58 = 0;
  local_40 = '\0';
  local_48 = 0;
  puVar8 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar8 = &DAT_025795a8;
  (*DAT_025795c0)();
  local_270 = 0;
  local_1c8 = 0;
  bVar3 = false;
  local_158 = (longlong *)0x0;
  plVar11 = (longlong *)0x0;
  local_1d8 = puVar8;
LAB_01ec2eb2:
  do {
    plVar14 = plVar11;
    plVar11 = (longlong *)(local_130 + local_270 * 0x10 + -8);
    do {
      plVar13 = plVar11;
      lVar12 = local_270;
      iVar7 = FUN_01cc9c20();
      puVar8 = local_1d8;
      if (iVar7 < lVar12) {
        ppuVar15 = &local_138;
        lVar12 = -1;
        goto LAB_01ec3680;
      }
      local_270 = lVar12 + 1;
      local_1e0 = 1;
      local_1e8 = &DAT_024cc6f0;
      local_1dc = (undefined4)local_270;
      uVar17 = FUN_00d8cb40(local_270,&local_1e8);
      plVar11 = local_1c0;
      local_160 = (longlong *)lVar12;
      if (local_158 == local_1c0) {
        plVar11 = local_158;
        if (bVar3) {
          bVar4 = true;
        }
        else if (local_158 == (longlong *)0x0) {
          bVar4 = false;
        }
        else {
          bVar3 = true;
          if ((char)local_1b8 != '\0') goto LAB_01ec30cd;
          bVar4 = true;
          uVar17 = FUN_00d50b00();
        }
LAB_01ec3090:
        bVar3 = bVar4;
        if (((char)local_1b8 != '\0') && (local_1c0 != (longlong *)0x0)) {
          uVar17 = FUN_00d50b20();
        }
      }
      else {
        if ((char)local_1b8 == '\0') {
          if (local_1c0 != (longlong *)0x0) {
            uVar17 = FUN_00d50b00();
          }
          bVar4 = true;
          if ((bVar3) && (local_158 != (longlong *)0x0)) {
            uVar17 = FUN_00d50b20();
          }
          goto LAB_01ec3090;
        }
        if ((bVar3) && (local_158 != (longlong *)0x0)) {
          uVar17 = FUN_00d50b20();
          bVar3 = true;
        }
        else {
          bVar3 = true;
        }
      }
LAB_01ec30cd:
      local_2b0 = '\0';
      local_2b8 = plVar11;
      local_158 = plVar11;
      (**(code **)(*unaff_RDI + 0x4c8))(uVar17,&local_2b8);
      plVar1 = local_1c0;
      plVar11 = (longlong *)*plVar13;
      if (plVar11 == local_1c0) {
        if (((char)plVar13[1] == '\0') && (local_1c0 != (longlong *)0x0)) {
          plVar10 = (longlong *)(local_130 + (longlong)local_160 * 0x10);
          if ((char)local_1b8 != '\0') goto LAB_01ec3177;
          FUN_00d50b00();
          goto LAB_01ec31bd;
        }
LAB_01ec31c8:
        plVar11 = local_160;
        if (((char)local_1b8 != '\0') && (local_1c0 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        plVar10 = plVar13 + 1;
        lVar12 = plVar13[1];
        if ((char)local_1b8 == '\0') {
          if (local_1c0 != (longlong *)0x0) {
            FUN_00d50b00();
          }
          *plVar13 = (longlong)plVar1;
          if (((char)lVar12 != '\0') && (plVar11 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
LAB_01ec31bd:
          *(undefined1 *)plVar10 = 1;
          goto LAB_01ec31c8;
        }
        *plVar13 = (longlong)local_1c0;
        if (((char)lVar12 != '\0') && (plVar11 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
LAB_01ec3177:
        *(undefined1 *)plVar10 = 1;
        local_1b8 = local_1b8 & 0xffffff00;
        plVar11 = local_160;
      }
      if ((local_2b0 != '\0') && (local_2b8 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      plVar1 = (longlong *)*plVar13;
      if ((DAT_0277a3a0 == '\0') && (iVar7 = ___cxa_guard_acquire(), iVar7 != 0)) {
        _DAT_026d3c38 = FUN_00d4fe50();
        _DAT_026d3c20 = "GNMultipleValue";
        _DAT_026d3c28 = 0x18;
        _DAT_026d3c30 = FUN_00050c70;
        _DAT_026d3c40 = 0;
        uRam00000000026d3c48 = 0;
        _DAT_026d3c50 = 0;
        uRam00000000026d3c58 = 0;
        _DAT_026d3c60 = 0;
        uRam00000000026d3c68 = 0;
        _DAT_026d3c70 = 0;
        uRam00000000026d3c78 = 0;
        _DAT_026d3c80 = 0;
        uRam00000000026d3c88 = 0;
        _DAT_026d3c90 = 0;
        uRam00000000026d3c98 = 0;
        _DAT_026d3ca0 = 0;
        uRam00000000026d3ca8 = 0;
        _DAT_026d3cb0 = 0;
        uRam00000000026d3cb8 = 0;
        _DAT_026d3cc0 = 0;
        uRam00000000026d3cc8 = 0;
        _DAT_026d3cd0 = 0;
        uRam00000000026d3cd8 = 0;
        _DAT_026d3ce0 = 0;
        ___cxa_guard_release();
        plVar11 = local_160;
      }
      plVar10 = &DAT_02802688;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x360))();
        cVar6 = FUN_00e85ea0();
        plVar10 = plVar13;
        if (cVar6 == '\0') {
          plVar10 = &DAT_02802688;
        }
      }
      local_160 = (longlong *)CONCAT71(local_160._1_7_,(char)plVar10[1]);
      if (((char)plVar10[1] == '\0') || (*plVar10 == 0)) {
        if (*plVar10 != 0) goto LAB_01ec3279;
      }
      else {
        FUN_00d50b00();
LAB_01ec3279:
        FUN_00e987e0();
        plVar10 = local_1c0;
        plVar1 = (longlong *)*plVar13;
        if (plVar1 == local_1c0) {
          if (((char)plVar13[1] == '\0') && (local_1c0 != (longlong *)0x0)) {
            local_268 = (longlong *)(local_130 + (longlong)plVar11 * 0x10);
            if ((char)local_1b8 != '\0') goto LAB_01ec32fa;
            FUN_00d50b00();
            goto LAB_01ec3333;
          }
LAB_01ec333d:
          if (((char)local_1b8 != '\0') && (local_1c0 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_268 = plVar13 + 1;
          lVar12 = plVar13[1];
          if ((char)local_1b8 == '\0') {
            if (local_1c0 != (longlong *)0x0) {
              FUN_00d50b00();
            }
            *plVar13 = (longlong)plVar10;
            if (((char)lVar12 != '\0') && (plVar1 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
LAB_01ec3333:
            *(undefined1 *)local_268 = 1;
            goto LAB_01ec333d;
          }
          *plVar13 = (longlong)local_1c0;
          if (((char)lVar12 != '\0') && (plVar1 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
LAB_01ec32fa:
          *(undefined1 *)local_268 = 1;
        }
        if ((char)local_160 != '\0') {
          FUN_00d50b20();
        }
      }
      plVar11 = plVar13 + 2;
    } while (*plVar13 == 0);
    local_2c8 = local_158;
    local_2c0 = 0;
    uVar17 = FUN_01ec2c30(local_270,&local_2c8);
    plVar11 = local_1c0;
    uVar9 = extraout_var;
    if (local_1c0 != plVar14) {
      if ((char)local_1b8 == '\0') {
        if (local_1c0 != (longlong *)0x0) {
          uVar17 = FUN_00d50b00();
          uVar9 = extraout_var_01;
        }
        if (((char)local_1c8 != '\0') && (plVar14 != (longlong *)0x0)) {
          uVar17 = FUN_00d50b20();
          uVar9 = extraout_var_02;
        }
      }
      else if (((char)local_1c8 != '\0') && (plVar14 != (longlong *)0x0)) {
        uVar17 = FUN_00d50b20();
        uVar9 = extraout_var_00;
      }
LAB_01ec3527:
      plVar14 = plVar11;
      local_1c8 = CONCAT71(uVar9,1);
      plVar11 = (longlong *)0x0;
      if (plVar14 != (longlong *)0x0) break;
      goto LAB_01ec2eb2;
    }
    if (((char)local_1c8 == '\0') && (local_1c0 != (longlong *)0x0)) {
      plVar11 = plVar14;
      if ((char)local_1b8 == '\0') {
        uVar17 = FUN_00d50b00();
        uVar9 = extraout_var_03;
      }
      goto LAB_01ec3527;
    }
    if (((char)local_1b8 != '\0') && (local_1c0 != (longlong *)0x0)) {
      uVar17 = FUN_00d50b20();
    }
    plVar11 = (longlong *)0x0;
  } while (plVar14 == (longlong *)0x0);
  local_2a8 = *plVar13;
  local_2a0 = '\0';
  (**(code **)(*plVar14 + 0x388))(uVar17,&local_2a8);
  plVar1 = local_1c0;
  plVar11 = (longlong *)*plVar13;
  if (plVar11 == local_1c0) {
    if (((char)plVar13[1] != '\0') || (local_1c0 == (longlong *)0x0)) goto LAB_01ec361d;
    if ((char)local_1b8 == '\0') {
      FUN_00d50b00();
      goto LAB_01ec3618;
    }
  }
  else {
    local_160 = plVar13;
    lVar12 = plVar13[1];
    if ((char)local_1b8 == '\0') {
      if (local_1c0 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      *local_160 = (longlong)plVar1;
      if (((char)lVar12 != '\0') && (plVar11 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
LAB_01ec3618:
      *(undefined1 *)(plVar13 + 1) = 1;
LAB_01ec361d:
      if (((char)local_1b8 != '\0') && (local_1c0 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_01ec3637;
    }
    *plVar13 = (longlong)local_1c0;
    if (((char)lVar12 != '\0') && (plVar11 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  *(undefined1 *)(plVar13 + 1) = 1;
  local_1b8 = local_1b8 & 0xffffff00;
LAB_01ec3637:
  plVar11 = plVar14;
  if ((local_2a0 != '\0') && (local_2a8 != 0)) {
    FUN_00d50b20();
  }
  goto LAB_01ec2eb2;
  while (puVar2 = *ppuVar15, ppuVar15 = ppuVar15 + 2, puVar2 == (undefined8 *)0x0) {
LAB_01ec3680:
    iVar7 = FUN_01cc9c20();
    lVar12 = lVar12 + 1;
    if (iVar7 <= lVar12) {
      lVar12 = unaff_RDI[0xb];
      if (lVar12 != 0) {
        local_258 = 0;
        uVar17 = FUN_00d50b00();
        local_258 = '\x01';
        local_260 = lVar12;
        FUN_00d93870(uVar17,DAT_025908a0);
        if ((local_258 != '\0') && (local_260 != 0)) {
          FUN_00d50b20();
        }
      }
      goto switchD_01ec36ca_default;
    }
  }
  uVar17 = FUN_01cc9c20();
  switch(uVar17) {
  case 0:
    local_248 = 0;
    lVar12 = unaff_RDI[10];
    uVar17 = extraout_XMM0_Da;
    if (lVar12 != 0) {
      uVar17 = FUN_00d50b00();
    }
    local_248 = '\x01';
    local_250 = lVar12;
    FUN_00d93870(uVar17,DAT_025908a0);
    if ((local_248 != '\0') && (local_250 != 0)) {
      FUN_00d50b20();
    }
    break;
  case 1:
    local_238 = 0;
    lVar12 = unaff_RDI[10];
    uVar17 = extraout_XMM0_Da;
    if (lVar12 != 0) {
      uVar17 = FUN_00d50b00();
    }
    puVar2 = local_138;
    local_238 = '\x01';
    local_1b8 = 1;
    local_1c0 = &DAT_024c5048;
    local_1a8 = 0;
    local_240 = lVar12;
    if (local_138 != (undefined8 *)0x0) {
      uVar17 = FUN_00d50b00();
    }
    local_1b0 = puVar2;
    local_1a8 = '\x01';
    FUN_00d93870(uVar17,&local_1c0);
    local_1c0 = &DAT_024c5048;
    if ((local_1a8 != '\0') && (local_1b0 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_238 != '\0') && (local_240 != 0)) {
      FUN_00d50b20();
    }
    break;
  case 2:
    local_228 = 0;
    lVar12 = unaff_RDI[10];
    if (lVar12 != 0) {
      FUN_00d50b00();
    }
    local_228 = '\x01';
    local_1e8 = local_138;
    local_1d0 = local_128;
    local_230 = lVar12;
    uVar17 = FUN_00083ea0(2,&local_1d0);
    FUN_00d93870(uVar17,&local_1c0);
    local_1c0 = (longlong *)&DAT_0253d630;
    if ((local_198 != '\0') && (local_1a0 != 0)) {
      FUN_00d50b20();
    }
    local_1c0 = &DAT_024c5048;
    if ((local_1a8 != '\0') && (local_1b0 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_228 != '\0') && (local_230 != 0)) {
      FUN_00d50b20();
    }
    break;
  case 3:
    local_218 = 0;
    lVar12 = unaff_RDI[10];
    if (lVar12 != 0) {
      FUN_00d50b00();
    }
    local_218 = '\x01';
    local_1e8 = local_138;
    local_1d0 = local_128;
    local_1f0 = local_118;
    local_220 = lVar12;
    uVar17 = FUN_002bd7b0(&local_1f0,&local_1d0,3);
    FUN_00d93870(uVar17,&local_1c0);
    local_1c0 = (longlong *)&DAT_025df260;
    if ((local_188 != '\0') && (local_190 != 0)) {
      FUN_00d50b20();
    }
    local_1c0 = (longlong *)&DAT_0253d630;
    if ((local_198 != '\0') && (local_1a0 != 0)) {
      FUN_00d50b20();
    }
    local_1c0 = &DAT_024c5048;
    if ((local_1a8 != '\0') && (local_1b0 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_218 != '\0') && (local_220 != 0)) {
      FUN_00d50b20();
    }
    break;
  case 4:
    local_208 = 0;
    lVar12 = unaff_RDI[10];
    if (lVar12 != 0) {
      FUN_00d50b00();
    }
    local_208 = '\x01';
    local_1e8 = local_138;
    local_1d0 = local_128;
    local_1f0 = local_118;
    local_278 = local_108;
    local_210 = lVar12;
    uVar17 = FUN_00b8f440(&local_1f0,&local_1d0,&local_278,4);
    FUN_00d93870(uVar17,&local_1c0);
    FUN_007f76c0();
    if ((local_208 != '\0') && (local_210 != 0)) {
      FUN_00d50b20();
    }
    break;
  case 5:
    local_1f8 = 0;
    lVar12 = unaff_RDI[10];
    if (lVar12 != 0) {
      FUN_00d50b00();
    }
    lVar5 = local_f8;
    local_1f8 = '\x01';
    local_1e8 = local_138;
    local_1d0 = local_128;
    local_1f0 = local_118;
    local_278 = local_108;
    local_200 = lVar12;
    uVar17 = FUN_00b8f440(&local_1f0,&local_1d0,&local_278,5);
    local_1c0 = &DAT_02511780;
    local_168 = 0;
    if (lVar5 != 0) {
      uVar17 = FUN_00d50b00();
    }
    local_170 = lVar5;
    local_168 = '\x01';
    FUN_00d93870(uVar17,&local_1c0);
    local_1c0 = &DAT_02511780;
    if ((local_168 != '\0') && (local_170 != 0)) {
      FUN_00d50b20();
    }
    FUN_007f76c0();
    if ((local_1f8 != '\0') && (local_200 != 0)) {
      FUN_00d50b20();
    }
  }
switchD_01ec36ca_default:
  FUN_00d8c7d0();
  pplVar16 = &local_1c0;
  FUN_01ccad60();
  plVar11 = local_1c0;
  FUN_0020e360();
  if (plVar11 == (longlong *)0x0) {
LAB_01ec37db:
    pplVar16 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar11 + 0x360))();
    cVar6 = FUN_00e85ea0();
    if (cVar6 == '\0') goto LAB_01ec37db;
  }
  plVar11 = *pplVar16;
  if (((char)local_1b8 != '\0') && (local_1c0 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  plVar13 = local_158;
  if (plVar11 != (longlong *)0x0) {
    FUN_01ccad60();
    local_298 = puVar8;
    local_290 = '\0';
    FUN_01e5a050();
    if ((local_290 != '\0') && (local_298 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
    if (((char)local_1b8 != '\0') && (local_1c0 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    goto LAB_01ec396b;
  }
  pplVar16 = &local_1c0;
  FUN_01ccad60();
  plVar11 = local_1c0;
  if ((DAT_026e43b0 == '\0') && (iVar7 = ___cxa_guard_acquire(), iVar7 != 0)) {
    _DAT_026df898 = FUN_0006d940();
    _DAT_026df880 = "GNControl";
    _DAT_026df888 = 0x1c8;
    _DAT_026df890 = FUN_000858d0;
    _DAT_026df8a0 = 0;
    uRam00000000026df8a8 = 0;
    _DAT_026df8b0 = 0;
    uRam00000000026df8b8 = 0;
    _DAT_026df8c0 = 0;
    uRam00000000026df8c8 = 0;
    _DAT_026df8d0 = 0;
    uRam00000000026df8d8 = 0;
    _DAT_026df8e0 = 0;
    uRam00000000026df8e8 = 0;
    _DAT_026df8f0 = 0;
    uRam00000000026df8f8 = 0;
    _DAT_026df900 = 0;
    uRam00000000026df908 = 0;
    _DAT_026df910 = 0;
    uRam00000000026df918 = 0;
    _DAT_026df920 = 0;
    uRam00000000026df928 = 0;
    _DAT_026df930 = 0;
    uRam00000000026df938 = 0;
    _DAT_026df940 = 0;
    ___cxa_guard_release();
    puVar8 = local_1d8;
  }
  if (plVar11 == (longlong *)0x0) {
LAB_01ec38cf:
    pplVar16 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar11 + 0x360))();
    cVar6 = FUN_00e85ea0();
    if (cVar6 == '\0') goto LAB_01ec38cf;
  }
  plVar11 = *pplVar16;
  if (((char)local_1b8 != '\0') && (local_1c0 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  plVar13 = local_158;
  if (plVar11 != (longlong *)0x0) {
    FUN_01ccad60();
    local_280 = '\0';
    local_288 = puVar8;
    (**(code **)(*local_1c0 + 0x958))();
    if ((local_280 != '\0') && (local_288 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
    if (((char)local_1b8 != '\0') && (local_1c0 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
LAB_01ec396b:
  if (((char)local_1c8 != '\0') && (plVar14 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  if ((local_80 != '\0') && (local_88 != 0)) {
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
  if ((local_c0 != '\0') && (local_c8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_d0 != '\0') && (local_d8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_e0 != '\0') && (local_e8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_f0 != '\0') && (local_f8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_100 != '\0') && (local_108 != 0)) {
    FUN_00d50b20();
  }
  if ((local_110 != '\0') && (local_118 != 0)) {
    FUN_00d50b20();
  }
  if ((local_120 != '\0') && (local_128 != 0)) {
    FUN_00d50b20();
  }
  if ((local_130[0] != '\0') && (local_138 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  if ((bVar3) && (plVar13 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (puVar8 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  if (*(longlong *)PTR____stack_chk_guard_024a9898 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}


