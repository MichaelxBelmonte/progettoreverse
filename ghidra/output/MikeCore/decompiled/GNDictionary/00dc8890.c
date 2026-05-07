// Function: FUN_00dc8890
// Address: 00dc8890
// Size: 4453 bytes
// Class: GNDictionary
// String references:
//   "GNDictionary"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00dc8890(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  char cVar5;
  short sVar6;
  int iVar7;
  int iVar8;
  longlong *plVar9;
  longlong lVar10;
  char *pcVar11;
  longlong **pplVar12;
  longlong *unaff_RSI;
  undefined8 *unaff_RDI;
  longlong *plVar13;
  longlong lVar14;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar15;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined4 extraout_XMM0_Da_04;
  undefined4 extraout_XMM0_Da_05;
  undefined4 extraout_XMM0_Da_06;
  undefined4 extraout_XMM0_Da_07;
  undefined4 extraout_XMM0_Da_08;
  undefined4 extraout_XMM0_Da_09;
  longlong local_2c0;
  undefined1 local_2b8;
  longlong local_2b0;
  undefined1 local_2a8;
  longlong local_2a0;
  undefined1 local_298;
  longlong local_290;
  undefined1 local_288;
  longlong local_280;
  undefined1 local_278;
  longlong local_270;
  undefined1 local_268;
  longlong local_260;
  undefined1 local_258;
  longlong local_250;
  undefined1 local_248;
  longlong *local_240;
  undefined1 local_238;
  longlong *local_230;
  undefined1 local_228;
  undefined8 local_220;
  char local_208;
  undefined7 uStack_207;
  char local_200;
  longlong local_1f8;
  char local_1f0;
  longlong *local_1e8;
  char local_1e0;
  longlong *local_1d8;
  char local_1d0;
  longlong local_1c8;
  char local_1c0;
  longlong local_1b8;
  char local_1b0;
  longlong local_1a8;
  char local_1a0;
  longlong local_198;
  char local_190;
  longlong local_188;
  char local_180;
  longlong local_178;
  char local_170;
  longlong *local_168;
  char local_160;
  longlong local_158;
  char local_150;
  longlong *local_148;
  char local_140;
  longlong *local_138;
  char local_130;
  longlong *local_128;
  char local_120;
  longlong local_118;
  char local_110;
  longlong *local_108;
  char local_100;
  longlong *local_f8;
  longlong *local_f0;
  char local_e8;
  longlong *local_e0;
  char local_d8;
  longlong *local_d0;
  char local_c8;
  longlong *local_c0;
  char local_b8;
  longlong *local_b0;
  char local_a8;
  longlong *local_a0;
  char local_98;
  char local_70 [8];
  longlong *local_68;
  char local_60 [8];
  longlong *local_58;
  char local_50 [8];
  longlong *local_48;
  int local_40;
  int iStack_3c;
  int local_38;
  
  FUN_00d6c870();
  plVar4 = local_58;
  if ((((local_50[0] == '\0') && (local_58 != (longlong *)0x0)) &&
      (FUN_00d50b00(), local_50[0] != '\0')) && (local_58 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  lVar14 = DAT_027c6f60;
  if (DAT_027c6f60 != 0) {
    FUN_00d50b00();
  }
  local_188 = lVar14;
  local_180 = '\x01';
  cVar5 = (**(code **)(*plVar4 + 0x50))();
  uVar15 = extraout_XMM0_Da;
  if ((local_180 != '\0') && (local_188 != 0)) {
    uVar15 = FUN_00d50b20();
  }
  lVar10 = DAT_02783b28;
  lVar14 = DAT_027648d0;
  if (cVar5 != '\0') {
    if (DAT_027648d0 != 0) {
      uVar15 = FUN_00d50b00();
    }
    local_178 = lVar14;
    local_170 = '\0';
    FUN_01de4130(uVar15,&local_178);
    plVar4 = local_58;
    if (local_50[0] == '\0') {
      if (((local_58 != (longlong *)0x0) && (FUN_00d50b00(), local_50[0] != '\0')) &&
         (local_58 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_50[0] = '\0';
    }
    if ((local_170 != '\0') && (local_178 != 0)) {
      FUN_00d50b20();
    }
    if (plVar4 == (longlong *)0x0) {
      *(undefined1 *)(unaff_RDI + 1) = 0;
      *unaff_RDI = 0;
    }
    else {
      local_168 = plVar4;
      local_160 = '\0';
      FUN_00c923f0();
      plVar4 = local_58;
      *(undefined1 *)(unaff_RDI + 1) = 0;
      if (local_50[0] == '\0') {
        if (local_58 == (longlong *)0x0) {
          *unaff_RDI = 0;
          *(undefined1 *)(unaff_RDI + 1) = 1;
        }
        else {
          FUN_00d50b00();
          *unaff_RDI = plVar4;
          *(undefined1 *)(unaff_RDI + 1) = 1;
          if ((local_50[0] != '\0') && (local_58 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
      }
      else {
        *unaff_RDI = local_58;
        *(undefined1 *)(unaff_RDI + 1) = 1;
        local_50[0] = '\0';
      }
      if ((local_160 != '\0') && (local_168 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    if (lVar14 != 0) {
      FUN_00d50b20();
    }
    goto LAB_00dc9a11;
  }
  local_2b0 = *unaff_RSI;
  local_2a8 = 0;
  if (DAT_02783b28 != 0) {
    uVar15 = FUN_00d50b00();
  }
  local_2a0 = lVar10;
  local_298 = 1;
  FUN_00dbdbc0(uVar15,&local_2a0);
  local_e0 = local_58;
  local_d8 = 0;
  if ((local_50[0] == '\0') && (local_58 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  local_d8 = '\x01';
  cVar5 = (**(code **)(*plVar4 + 0x50))();
  uVar15 = extraout_XMM0_Da_00;
  if ((local_d8 != '\0') && (local_e0 != (longlong *)0x0)) {
    uVar15 = FUN_00d50b20();
  }
  if (lVar10 != 0) {
    uVar15 = FUN_00d50b20();
  }
  lVar10 = DAT_02783b50;
  lVar14 = DAT_02783b18;
  if (cVar5 != '\0') {
    if (DAT_02783b18 != 0) {
      uVar15 = FUN_00d50b00();
    }
    local_158 = lVar14;
    local_150 = '\0';
    FUN_01de4130(uVar15,&local_158);
    plVar4 = local_58;
    *(undefined1 *)(unaff_RDI + 1) = 0;
    if (local_50[0] == '\0') {
      if (local_58 == (longlong *)0x0) {
        *unaff_RDI = 0;
        *(undefined1 *)(unaff_RDI + 1) = 1;
      }
      else {
        FUN_00d50b00();
        *unaff_RDI = plVar4;
        *(undefined1 *)(unaff_RDI + 1) = 1;
        if ((local_50[0] != '\0') && (local_58 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    else {
      *unaff_RDI = local_58;
      *(undefined1 *)(unaff_RDI + 1) = 1;
      local_50[0] = '\0';
    }
    if ((local_150 != '\0') && (local_158 != 0)) {
      FUN_00d50b20();
    }
    if (lVar14 != 0) {
      FUN_00d50b20();
    }
    goto LAB_00dc9a11;
  }
  local_290 = *unaff_RSI;
  local_288 = 0;
  if (DAT_02783b50 != 0) {
    uVar15 = FUN_00d50b00();
  }
  local_280 = lVar10;
  local_278 = 1;
  FUN_00dbdbc0(uVar15,&local_280);
  local_d0 = local_58;
  local_c8 = 0;
  if ((local_50[0] == '\0') && (local_58 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  local_c8 = '\x01';
  cVar5 = (**(code **)(*plVar4 + 0x50))();
  if ((local_c8 != '\0') && (local_d0 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (lVar10 != 0) {
    FUN_00d50b20();
  }
  if (cVar5 == '\0') {
    plVar9 = (longlong *)FUN_00e8fc40();
    FUN_00022d50();
    uVar15 = (**(code **)(*plVar9 + 0x18))();
    plVar13 = DAT_027f37d8;
    local_148 = plVar4;
    local_140 = '\0';
    if (DAT_027f37d8 != (longlong *)0x0) {
      uVar15 = FUN_00d50b00();
    }
    local_58 = plVar13;
    local_50[0] = '\0';
    uVar15 = FUN_00ca0840(uVar15,&local_58);
    if ((local_50[0] != '\0') && (local_58 != (longlong *)0x0)) {
      uVar15 = FUN_00d50b20();
    }
    if (plVar13 != (longlong *)0x0) {
      uVar15 = FUN_00d50b20();
    }
    if ((local_140 != '\0') && (local_148 != (longlong *)0x0)) {
      uVar15 = FUN_00d50b20();
    }
    lVar14 = DAT_02783b18;
    local_270 = *unaff_RSI;
    local_268 = 0;
    if (DAT_02783b18 != 0) {
      uVar15 = FUN_00d50b00();
    }
    local_260 = lVar14;
    local_258 = 1;
    FUN_00dbdbc0(uVar15,&local_260);
    plVar13 = local_58;
    if ((local_50[0] == '\0') && (local_58 != (longlong *)0x0)) {
      FUN_00d50b00();
    }
    if (lVar14 != 0) {
      FUN_00d50b20();
    }
    local_50[0] = '\0';
    local_f8 = plVar13;
    local_58 = plVar13;
    cVar5 = FUN_00ca18c0();
    uVar15 = extraout_XMM0_Da_01;
    if ((local_50[0] != '\0') && (local_58 != (longlong *)0x0)) {
      uVar15 = FUN_00d50b20();
    }
    if (cVar5 != '\0') {
      local_138 = plVar13;
      local_130 = '\0';
      uVar15 = FUN_01de4130(uVar15,&local_138);
      local_b0 = local_68;
      local_a8 = 0;
      plVar2 = DAT_0277c878;
      if (local_60[0] == '\0') {
        if (local_68 != (longlong *)0x0) {
          uVar15 = FUN_00d50b00();
          plVar2 = DAT_0277c878;
        }
      }
      else {
        local_60[0] = '\0';
      }
      local_a8 = '\x01';
      DAT_0277c878 = plVar2;
      if (plVar2 != (longlong *)0x0) {
        local_a8 = '\x01';
        uVar15 = FUN_00d50b00();
      }
      local_50[0] = '\0';
      local_58 = plVar2;
      FUN_00ca0840(uVar15,&local_58);
      if ((local_50[0] != '\0') && (local_58 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar2 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if ((local_a8 != '\0') && (local_b0 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_60[0] != '\0') && (local_68 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_130 != '\0') && (local_138 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    FUN_00c9fe20();
    plVar2 = local_58;
    pplVar12 = &local_68;
    if (local_50[0] != '\0') {
      pplVar12 = (longlong **)local_50;
    }
    local_68 = (longlong *)CONCAT71(local_68._1_7_,local_50[0]);
    *(char *)pplVar12 = '\0';
    if ((local_50[0] != '\0') && (plVar2 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((char)local_68 == '\0') {
      if (plVar2 != (longlong *)0x0) {
        FUN_00d50b00();
        goto LAB_00dc96ab;
      }
    }
    else if (plVar2 != (longlong *)0x0) {
LAB_00dc96ab:
      local_50[0] = '\0';
      local_58 = (longlong *)0x0;
      local_48 = plVar2;
      local_40 = -1;
      iStack_3c = 0;
      local_38 = 0;
      local_220 = param_2;
      while( true ) {
        if (iStack_3c != 0) {
          if (iStack_3c < 1) {
            iStack_3c = -iStack_3c;
          }
          else {
            local_40 = local_40 - iStack_3c;
            FUN_00d23690();
            local_38 = local_38 + iStack_3c;
            iStack_3c = 0;
          }
        }
        lVar14 = (longlong)local_40;
        local_40 = local_40 + 1;
        if (*(int *)((longlong)local_48 + 0xc) <= local_40) break;
        local_58 = *(longlong **)(local_48[2] + 8 + lVar14 * 8);
        local_68 = (longlong *)*unaff_RSI;
        local_60[0] = '\0';
        cVar5 = FUN_00d90870();
        uVar15 = extraout_XMM0_Da_07;
        if ((local_60[0] != '\0') && (local_68 != (longlong *)0x0)) {
          uVar15 = FUN_00d50b20();
        }
        if (cVar5 == '\0') goto LAB_00dc97c0;
        iVar7 = FUN_00d8c7a0();
        iVar8 = FUN_00d8c7a0();
        uVar15 = extraout_XMM0_Da_08;
        if (iVar7 <= iVar8) goto LAB_00dc97c0;
        FUN_00d8c7a0();
        sVar6 = FUN_00d8cbc0();
        uVar15 = extraout_XMM0_Da_09;
        if (sVar6 != 0x3a) {
LAB_00dc97c0:
          local_128 = local_58;
          local_120 = '\0';
          uVar15 = FUN_01de4130(uVar15,&local_128);
          local_a0 = local_f0;
          local_98 = 0;
          if (local_e8 == '\0') {
            if (local_f0 != (longlong *)0x0) {
              uVar15 = FUN_00d50b00();
            }
          }
          else {
            local_e8 = '\0';
          }
          local_98 = '\x01';
          local_68 = local_58;
          local_60[0] = '\0';
          FUN_00ca0840(uVar15,&local_68);
          if ((local_60[0] != '\0') && (local_68 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_98 != '\0') && (local_a0 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_e8 != '\0') && (local_f0 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_120 != '\0') && (local_128 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
      }
      FUN_00018280();
      FUN_00d50b20();
      plVar13 = local_f8;
    }
    FUN_00d6be50();
    plVar2 = local_58;
    if (local_50[0] == '\0') {
      if (local_58 != (longlong *)0x0) {
        FUN_00d50b00();
        if ((local_50[0] != '\0') && (local_58 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        goto LAB_00dc9936;
      }
    }
    else if (local_58 != (longlong *)0x0) {
LAB_00dc9936:
      local_50[0] = '\0';
      local_58 = (longlong *)0x0;
      local_48 = plVar2;
      iStack_3c = 0;
      local_38 = 0;
      for (lVar14 = 0; local_40 = (int)lVar14, local_40 < *(int *)((longlong)plVar2 + 0xc);
          lVar14 = lVar14 + 1) {
        local_240 = *(longlong **)(plVar2[2] + lVar14 * 8);
        local_250 = *unaff_RSI;
        local_248 = 0;
        local_238 = 0;
        local_228 = 0;
        local_230 = plVar9;
        local_58 = local_240;
        FUN_00dc6010(local_250,&local_230);
      }
      FUN_00bea5a0();
      FUN_00d50b20();
      plVar13 = local_f8;
    }
    *unaff_RDI = plVar9;
    *(undefined1 *)(unaff_RDI + 1) = 1;
    if (plVar13 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  else {
    lVar14 = *unaff_RSI;
    plVar9 = (longlong *)FUN_00e8fc40();
    FUN_00022d50();
    (**(code **)(*plVar9 + 0x18))();
    uVar15 = FUN_00d6be50();
    plVar13 = local_58;
    if (local_50[0] == '\0') {
      if (local_58 != (longlong *)0x0) {
        uVar15 = FUN_00d50b00();
        if ((local_50[0] != '\0') && (local_58 != (longlong *)0x0)) {
          uVar15 = FUN_00d50b20();
        }
        goto LAB_00dc8f2f;
      }
    }
    else if (local_58 != (longlong *)0x0) {
LAB_00dc8f2f:
      local_50[0] = '\0';
      local_58 = (longlong *)0x0;
      local_48 = plVar13;
      local_40 = -1;
      iStack_3c = 0;
      local_38 = 0;
      while( true ) {
        iVar7 = iStack_3c;
        if (iStack_3c != 0) {
          if (iStack_3c < 1) {
            iStack_3c = -iStack_3c;
          }
          else {
            local_40 = local_40 - iStack_3c;
            FUN_00d23690(uVar15,iStack_3c);
            local_38 = local_38 + iVar7;
            iStack_3c = 0;
          }
        }
        lVar10 = (longlong)local_40;
        local_40 = local_40 + 1;
        if (*(int *)((longlong)local_48 + 0xc) <= local_40) break;
        plVar13 = *(longlong **)(local_48[2] + 8 + lVar10 * 8);
        local_e8 = '\0';
        local_f0 = plVar13;
        local_58 = plVar13;
        FUN_00dc5330();
        plVar2 = local_68;
        if ((local_60[0] == '\0') && (local_68 != (longlong *)0x0)) {
          FUN_00d50b00();
        }
        uVar15 = FUN_00d6c870();
        plVar3 = local_68;
        lVar10 = DAT_02783b58;
        if (DAT_02783b58 != 0) {
          uVar15 = FUN_00d50b00();
        }
        local_2c0 = lVar10;
        local_2b8 = 1;
        FUN_00dbdbc0(uVar15,&local_2c0);
        local_110 = 0;
        lVar1 = CONCAT71(uStack_207,local_208);
        if ((local_200 == '\0') && (lVar1 != 0)) {
          FUN_00d50b00();
        }
        local_110 = '\x01';
        local_118 = lVar1;
        cVar5 = (**(code **)(*plVar3 + 0x50))();
        uVar15 = extraout_XMM0_Da_02;
        if ((local_110 != '\0') && (local_118 != 0)) {
          uVar15 = FUN_00d50b20();
        }
        if (lVar10 != 0) {
          uVar15 = FUN_00d50b20();
        }
        if ((local_60[0] != '\0') && (local_68 != (longlong *)0x0)) {
          uVar15 = FUN_00d50b20();
        }
        if (cVar5 != '\0') {
          local_1f0 = '\0';
          local_1e0 = '\0';
          local_1d8 = plVar2;
          local_1d0 = '\0';
          local_1f8 = lVar14;
          local_1e8 = plVar13;
          uVar15 = FUN_00dc8890(&local_1d8,&local_1e8);
          plVar13 = local_68;
          if ((DAT_026fdd40 == '\0') &&
             (iVar7 = ___cxa_guard_acquire(), uVar15 = extraout_XMM0_Da_06, iVar7 != 0)) {
            _DAT_026cd0e8 = FUN_00d4fe50();
            DAT_026cd0d0 = "GNDictionary";
            _DAT_026cd0d8 = 0x28;
            _DAT_026cd0e0 = FUN_00022d20;
            _DAT_026cd0f0 = 0;
            uRam00000000026cd0f8 = 0;
            _DAT_026cd100 = 0;
            _DAT_026cd178 = 0;
            uRam00000000026cd180 = 0;
            _DAT_026cd188 = 0;
            DAT_026cd18a = 6;
            _DAT_026cd108 = 0;
            uRam00000000026cd110 = 0;
            _DAT_026cd118 = 0;
            uRam00000000026cd120 = 0;
            _DAT_026cd128 = 0;
            uRam00000000026cd130 = 0;
            _DAT_026cd138 = 0;
            uRam00000000026cd140 = 0;
            _DAT_026cd148 = 0;
            uRam00000000026cd150 = 0;
            _DAT_026cd158 = 0;
            uRam00000000026cd160 = 0;
            _DAT_026cd168 = 0;
            uRam00000000026cd170 = 0;
            DAT_026cd193 = 0;
            _DAT_026cd18b = 0;
            uVar15 = ___cxa_guard_release();
          }
          pplVar12 = (longlong **)&DAT_02802688;
          if (plVar13 != (longlong *)0x0) {
            (**(code **)(*plVar13 + 0x360))();
            cVar5 = FUN_00e85ea0();
            pplVar12 = &local_68;
            uVar15 = extraout_XMM0_Da_03;
            if (cVar5 == '\0') {
              pplVar12 = (longlong **)&DAT_02802688;
            }
          }
          plVar13 = *pplVar12;
          if (*(char *)(pplVar12 + 1) == '\0') {
            if (plVar13 != (longlong *)0x0) {
              uVar15 = FUN_00d50b00();
            }
          }
          else {
            *(undefined1 *)(pplVar12 + 1) = 0;
          }
          if ((local_60[0] != '\0') && (local_68 != (longlong *)0x0)) {
            uVar15 = FUN_00d50b20();
          }
          if ((local_1d0 != '\0') && (local_1d8 != (longlong *)0x0)) {
            uVar15 = FUN_00d50b20();
          }
          if ((local_1e0 != '\0') && (local_1e8 != (longlong *)0x0)) {
            uVar15 = FUN_00d50b20();
          }
          if ((local_1f0 != '\0') && (local_1f8 != 0)) {
            uVar15 = FUN_00d50b20();
          }
          lVar10 = DAT_02704000;
          if (plVar13 != (longlong *)0x0) {
            if (DAT_02704000 != 0) {
              FUN_00d50b00();
            }
            local_1c8 = lVar10;
            local_1c0 = '\x01';
            cVar5 = FUN_00ca18c0();
            lVar10 = DAT_027e7c20;
            if (cVar5 == '\0') {
              cVar5 = '\0';
              uVar15 = extraout_XMM0_Da_04;
            }
            else {
              if (DAT_027e7c20 != 0) {
                FUN_00d50b00();
              }
              local_1b8 = lVar10;
              local_1b0 = '\x01';
              cVar5 = FUN_00ca18c0();
              uVar15 = extraout_XMM0_Da_05;
              if ((local_1b0 != '\0') && (local_1b8 != 0)) {
                uVar15 = FUN_00d50b20();
              }
            }
            if ((local_1c0 != '\0') && (local_1c8 != 0)) {
              uVar15 = FUN_00d50b20();
            }
            lVar10 = DAT_027e7c20;
            if (cVar5 != '\0') {
              if (DAT_027e7c20 != 0) {
                uVar15 = FUN_00d50b00();
              }
              local_1a8 = lVar10;
              local_1a0 = '\x01';
              uVar15 = FUN_00c9fe40(uVar15,&local_1a8);
              plVar13 = local_68;
              local_208 = local_60[0];
              pcVar11 = local_60;
              if (local_60[0] == '\0') {
                pcVar11 = &local_208;
              }
              *pcVar11 = '\0';
              if ((local_60[0] != '\0') && (plVar13 != (longlong *)0x0)) {
                uVar15 = FUN_00d50b20();
              }
              local_b8 = 0;
              lVar10 = DAT_02704000;
              if (local_208 == '\0') {
                if (plVar13 != (longlong *)0x0) {
                  uVar15 = FUN_00d50b00();
                  lVar10 = DAT_02704000;
                }
              }
              else {
                local_208 = '\0';
              }
              local_b8 = '\x01';
              local_c0 = plVar13;
              DAT_02704000 = lVar10;
              if (lVar10 != 0) {
                local_b8 = '\x01';
                uVar15 = FUN_00d50b00();
              }
              local_190 = '\x01';
              local_198 = lVar10;
              uVar15 = FUN_00c9fe40(uVar15,&local_198);
              plVar13 = local_68;
              local_70[0] = local_60[0];
              pcVar11 = local_60;
              if (local_60[0] == '\0') {
                pcVar11 = local_70;
              }
              *pcVar11 = '\0';
              if ((local_60[0] != '\0') && (plVar13 != (longlong *)0x0)) {
                uVar15 = FUN_00d50b20();
              }
              local_100 = 0;
              if ((local_70[0] == '\0') && (plVar13 != (longlong *)0x0)) {
                uVar15 = FUN_00d50b00();
              }
              local_108 = plVar13;
              local_100 = '\x01';
              FUN_00ca0840(uVar15,&local_108);
              if ((local_100 != '\0') && (local_108 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              if ((local_190 != '\0') && (local_198 != 0)) {
                FUN_00d50b20();
              }
              if ((local_b8 != '\0') && (local_c0 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              if ((local_1a0 != '\0') && (local_1a8 != 0)) {
                FUN_00d50b20();
              }
            }
            uVar15 = FUN_00d50b20();
          }
        }
        if (plVar2 != (longlong *)0x0) {
          uVar15 = FUN_00d50b20();
        }
      }
      FUN_00bea5a0();
      FUN_00d50b20();
    }
    *unaff_RDI = plVar9;
    *(undefined1 *)(unaff_RDI + 1) = 1;
  }
  if (plVar4 == (longlong *)0x0) {
    return;
  }
LAB_00dc9a11:
  FUN_00d50b20();
  return;
}


