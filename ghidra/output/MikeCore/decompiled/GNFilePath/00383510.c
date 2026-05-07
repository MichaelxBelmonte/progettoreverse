// Function: FUN_00383510
// Address: 00383510
// Size: 4330 bytes
// Class: GNFilePath


/* WARNING: Removing unreachable block (ram,0x00383b58) */

void FUN_00383510(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  char cVar4;
  char cVar5;
  longlong lVar6;
  code *pcVar7;
  undefined8 *puVar8;
  int iVar9;
  char *pcVar10;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  code **ppcVar11;
  code *pcVar12;
  undefined8 unaff_R14;
  ulonglong uVar13;
  longlong local_1a8;
  char local_1a0;
  code *local_198;
  char local_190;
  longlong local_188;
  char local_180;
  code *local_178;
  char local_170;
  code *local_168;
  char local_160;
  uint local_154;
  longlong local_150;
  char local_148;
  code *local_140;
  code *local_138;
  code *local_130;
  code *local_128;
  char local_120;
  code *local_118;
  char local_110;
  code *local_108;
  char local_100;
  code *local_f8;
  char local_f0;
  code *local_e8;
  char local_e0;
  code *local_d8;
  char local_d0;
  code *local_c8;
  char local_c0;
  code *local_b8;
  char local_b0;
  code *local_a8;
  code *local_a0;
  code *local_98;
  code *local_90;
  char local_88;
  code *local_70;
  char local_68 [8];
  code *local_60;
  undefined8 local_58;
  int local_50;
  char local_48 [8];
  code *local_40;
  char local_38;
  
  FUN_0037ca50();
  local_140 = local_70;
  if ((local_68[0] == '\0') && (local_70 != (code *)0x0)) {
    FUN_00d50b00();
  }
  plVar1 = (longlong *)*unaff_RSI;
  FUN_0038aac0();
  if (plVar1 == (longlong *)0x0) {
LAB_00383584:
    unaff_RSI = &DAT_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar4 = FUN_00e85ea0();
    if (cVar4 == '\0') goto LAB_00383584;
  }
  pcVar12 = (code *)*unaff_RSI;
  cVar4 = (char)unaff_RSI[1];
  local_98 = (code *)CONCAT71(local_98._1_7_,pcVar12 != (code *)0x0 && cVar4 != '\0');
  if (pcVar12 != (code *)0x0 && cVar4 != '\0') {
    FUN_00d50b00();
LAB_003835c4:
    ppcVar11 = &local_70;
    FUN_01c19440();
    pcVar7 = local_70;
    FUN_0038ad10();
    if (pcVar7 == (code *)0x0) {
LAB_00383602:
      ppcVar11 = (code **)&DAT_02802688;
    }
    else {
      (**(code **)(*(longlong *)pcVar7 + 0x360))();
      cVar5 = FUN_00e85ea0();
      if (cVar5 == '\0') goto LAB_00383602;
    }
    local_a0 = *ppcVar11;
    if (*(char *)(ppcVar11 + 1) == '\0') {
      if (local_a0 != (code *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      *(undefined1 *)(ppcVar11 + 1) = 0;
    }
    if ((local_68[0] != '\0') && (local_70 != (code *)0x0)) {
      FUN_00d50b20();
    }
    uVar13 = 0;
    pcVar7 = *(code **)(unaff_RDI + 0x118);
    if (pcVar7 != pcVar12) {
LAB_00383660:
      if ((char)uVar13 == '\0') {
        FUN_00d50b00();
      }
      *(code **)(unaff_RDI + 0x118) = pcVar12;
      if (pcVar7 != (code *)0x0) {
        FUN_00d50b20();
      }
    }
  }
  else {
    if (pcVar12 != (code *)0x0) goto LAB_003835c4;
    uVar13 = CONCAT71((int7)((ulonglong)unaff_R14 >> 8),1);
    local_a0 = (code *)0x0;
    pcVar7 = *(code **)(unaff_RDI + 0x118);
    if (pcVar7 != (code *)0x0) goto LAB_00383660;
  }
  if ((char)uVar13 == '\0') {
    FUN_01c26490();
    FUN_01c0a900();
    pcVar7 = local_90;
    if (local_88 == '\0') {
      if (local_90 != (code *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_88 = '\0';
    }
    local_70 = pcVar7;
    local_68[0] = '\0';
    cVar5 = FUN_00d23d70();
    if ((local_68[0] != '\0') && (local_70 != (code *)0x0)) {
      FUN_00d50b20();
    }
    if (pcVar7 != (code *)0x0) {
      FUN_00d50b20();
    }
    if ((local_88 != '\0') && (local_90 != (code *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (code *)0x0)) {
      FUN_00d50b20();
    }
    if (cVar5 == '\0') goto LAB_0038379d;
    lVar6 = *(longlong *)(unaff_RDI + 0x118);
    lVar2 = *(longlong *)(unaff_RDI + 0x120);
    if (lVar2 != lVar6) {
      if (lVar6 != 0) {
        FUN_00d50b00();
      }
      *(longlong *)(unaff_RDI + 0x120) = lVar6;
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
    }
  }
  else {
LAB_0038379d:
    if (*(longlong *)(unaff_RDI + 0x120) != 0) {
      *(undefined8 *)(unaff_RDI + 0x120) = 0;
      FUN_00d50b20();
    }
  }
  FUN_01c19c80();
  FUN_01c19d80();
  local_70 = (code *)*param_2;
  local_68[0] = '\0';
  cVar5 = FUN_00d23d70();
  if ((local_68[0] != '\0') && (local_70 != (code *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (code *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_88 != '\0') && (local_90 != (code *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar5 != '\0') {
    lVar6 = *param_2;
    lVar2 = *(longlong *)(unaff_RDI + 0x130);
    if (lVar2 != lVar6) {
      if (lVar6 != 0) {
        FUN_00d50b00();
      }
      *(longlong *)(unaff_RDI + 0x130) = lVar6;
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
    }
  }
  local_1a0 = '\0';
  local_1a8 = 0;
  FUN_01c232c0();
  local_128 = local_90;
  local_120 = 0;
  if (local_88 == '\0') {
    if (local_90 != (code *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_88 = '\0';
  }
  local_120 = '\x01';
  FUN_01c0c140(&local_128,&local_1a8);
  FUN_00d23310();
  pcVar7 = local_70;
  pcVar10 = local_48;
  if (local_68[0] != '\0') {
    pcVar10 = local_68;
  }
  local_48[0] = local_68[0];
  *pcVar10 = '\0';
  if ((local_68[0] != '\0') && (local_70 != (code *)0x0)) {
    FUN_00d50b20();
  }
  local_a8 = pcVar7;
  if (local_48[0] == '\0') {
    if (pcVar7 != (code *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_48[0] = '\0';
  }
  if ((local_38 != '\0') && (local_40 != (code *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_120 != '\0') && (local_128 != (code *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_88 != '\0') && (local_90 != (code *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_1a0 != '\0') && (local_1a8 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d216c0();
  if (*(longlong *)(unaff_RDI + 0x118) == 0) {
    FUN_01c19c80();
    FUN_01c19d80();
    local_f8 = local_70;
    local_f0 = 0;
    if (local_68[0] == '\0') {
      if (local_70 != (code *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_68[0] = '\0';
    }
    local_f0 = '\x01';
    FUN_01c23a60();
    if ((local_f0 != '\0') && (local_f8 != (code *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_68[0] != '\0') && (local_70 != (code *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (code *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_190 = '\0';
    local_198 = pcVar12;
    FUN_01c232c0();
    local_118 = local_40;
    local_110 = 0;
    if (local_38 == '\0') {
      if (local_40 != (code *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_110 = '\x01';
    FUN_01c0c140(&local_118);
    pcVar7 = local_70;
    if (local_68[0] == '\0') {
      if (((local_70 != (code *)0x0) && (FUN_00d50b00(), local_68[0] != '\0')) &&
         (local_70 != (code *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_68[0] = '\0';
    }
    if ((local_110 != '\0') && (local_118 != (code *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (code *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_190 != '\0') && (local_198 != (code *)0x0)) {
      FUN_00d50b20();
    }
    pcVar3 = DAT_02664d88;
    if (pcVar7 != (code *)0x0) {
      local_154 = (uint)uVar13;
      local_68[0] = '\0';
      local_70 = (code *)0x0;
      local_130 = pcVar7;
      local_60 = pcVar7;
      local_58 = 0xffffffff;
      local_50 = 0;
      local_138 = pcVar12;
      while( true ) {
        lVar6 = (longlong)(int)local_58;
        iVar9 = (int)local_58 + 1;
        local_58 = CONCAT44(local_58._4_4_,iVar9);
        if (*(int *)(local_60 + 0xc) <= iVar9) break;
        local_70 = *(code **)(*(longlong *)(local_60 + 0x10) + 8 + lVar6 * 8);
        pcVar7 = (code *)FUN_00e8fc40();
        FUN_00d4ff40();
        *(undefined **)pcVar7 = &DAT_02664d70;
        *(longlong *)(pcVar7 + 0x10) = 0;
        *(longlong *)(pcVar7 + 0x18) = 0;
        *(undefined8 *)(pcVar7 + 0x1d) = 0;
        *(undefined8 *)(pcVar7 + 0x25) = 0;
        (*pcVar3)();
        FUN_01c0a900();
        pcVar12 = local_40;
        local_100 = 0;
        if (local_38 == '\0') {
          if (local_40 != (code *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        local_100 = '\x01';
        local_108 = pcVar12;
        FUN_01c0b7f0();
        if ((local_100 != '\0') && (local_108 != (code *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != (code *)0x0)) {
          FUN_00d50b20();
        }
        local_38 = '\0';
        local_40 = pcVar7;
        FUN_00d21140();
        if ((local_38 != '\0') && (local_40 != (code *)0x0)) {
          FUN_00d50b20();
        }
        FUN_00d50b20();
        if (local_58._4_4_ != 0) {
          if (local_58._4_4_ < 1) {
            iVar9 = -local_58._4_4_;
          }
          else {
            local_58 = CONCAT44(local_58._4_4_,(int)local_58 - local_58._4_4_);
            FUN_00d23690();
            local_50 = local_50 + local_58._4_4_;
            iVar9 = 0;
          }
          local_58 = CONCAT44(iVar9,(int)local_58);
        }
      }
      FUN_0038d680();
      FUN_00d50b20();
      uVar13 = (ulonglong)local_154;
      pcVar12 = local_138;
    }
    local_148 = 0;
    lVar6 = *(longlong *)(unaff_RDI + 0x128);
    if (lVar6 != 0) {
      FUN_00d50b00();
    }
    local_148 = '\x01';
    local_150 = lVar6;
    FUN_01c23a60();
    if ((local_148 != '\0') && (local_150 != 0)) {
      FUN_00d50b20();
    }
  }
  FUN_0037cca0();
  if (*(longlong *)(unaff_RDI + 0x100) == 0) goto LAB_003845d7;
  FUN_01d6f8d0();
  puVar8 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  local_138 = (code *)&DAT_02572358;
  *puVar8 = &DAT_02572358;
  pcVar7 = DAT_02572370;
  (*DAT_02572370)();
  lVar6 = *(longlong *)(unaff_RDI + 0x138);
  *(undefined8 **)(unaff_RDI + 0x138) = puVar8;
  if (lVar6 != 0) {
    FUN_00d50b20();
  }
  if ((char)uVar13 != '\0') {
    plVar1 = *(longlong **)(unaff_RDI + 0x100);
    FUN_00379d20();
    local_b8 = local_70;
    local_b0 = 0;
    if (local_68[0] == '\0') {
      if (local_70 != (code *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_68[0] = '\0';
    }
    local_b0 = '\x01';
    (**(code **)(*plVar1 + 0x958))();
    if ((local_b0 != '\0') && (local_b8 != (code *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_68[0] != '\0') && (local_70 != (code *)0x0)) {
      FUN_00d50b20();
    }
    goto LAB_003845d7;
  }
  plVar1 = *(longlong **)(unaff_RDI + 0x130);
  (**(code **)(*(longlong *)pcVar12 + 0x388))();
  local_e8 = local_40;
  local_e0 = 0;
  local_130 = pcVar7;
  if (local_38 == '\0') {
    if (local_40 != (code *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  local_e0 = '\x01';
  ppcVar11 = &local_70;
  (**(code **)(*plVar1 + 0x370))();
  pcVar7 = local_70;
  FUN_0038aac0();
  if (pcVar7 == (code *)0x0) {
LAB_00383fc2:
    ppcVar11 = (code **)&DAT_02802688;
  }
  else {
    (**(code **)(*(longlong *)pcVar7 + 0x360))();
    cVar5 = FUN_00e85ea0();
    if (cVar5 == '\0') goto LAB_00383fc2;
  }
  pcVar7 = *ppcVar11;
  if (pcVar12 == pcVar7) {
    if (cVar4 == '\0') {
      if (*(char *)(ppcVar11 + 1) != '\0') goto LAB_00384031;
      cVar4 = '\x01';
      FUN_00d50b00();
    }
  }
  else {
    pcVar12 = pcVar7;
    if (*(char *)(ppcVar11 + 1) == '\0') {
      if (pcVar7 != (code *)0x0) {
        FUN_00d50b00();
      }
      cVar4 = '\x01';
      if ((char)local_98 != '\0') {
        FUN_00d50b20();
      }
    }
    else {
      if ((char)local_98 != '\0') {
        FUN_00d50b20();
      }
LAB_00384031:
      *(undefined1 *)(ppcVar11 + 1) = 0;
      cVar4 = '\x01';
    }
  }
  if ((local_68[0] != '\0') && (local_70 != (code *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_e0 != '\0') && (local_e8 != (code *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (code *)0x0)) {
    FUN_00d50b20();
  }
  pcVar7 = (code *)FUN_00e8fc40();
  FUN_00d4ff40();
  *(code **)pcVar7 = local_138;
  (*local_130)();
  local_98 = pcVar7;
  if (pcVar12 == (code *)0x0) {
    pcVar12 = (code *)0x0;
  }
  else {
    do {
      (**(code **)(*(longlong *)pcVar12 + 0x368))();
      pcVar7 = local_40;
      if (local_38 == '\0') {
        if (local_40 != (code *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      local_70 = pcVar7;
      local_68[0] = '\0';
      FUN_00d23370();
      if ((local_68[0] != '\0') && (local_70 != (code *)0x0)) {
        FUN_00d50b20();
      }
      if (pcVar7 != (code *)0x0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (code *)0x0)) {
        FUN_00d50b20();
      }
      local_68[0] = '\0';
      local_70 = pcVar12;
      FUN_00d23370();
      if ((local_68[0] != '\0') && (local_70 != (code *)0x0)) {
        FUN_00d50b20();
      }
      FUN_01c0a900();
      pcVar7 = local_70;
      FUN_01c0a900();
      pcVar3 = local_40;
      local_d0 = 0;
      if (local_38 == '\0') {
        if (local_40 != (code *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      local_d0 = '\x01';
      local_d8 = pcVar3;
      cVar5 = (**(code **)(*(longlong *)pcVar7 + 0x50))();
      if ((local_d0 != '\0') && (local_d8 != (code *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (code *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_68[0] != '\0') && (local_70 != (code *)0x0)) {
        FUN_00d50b20();
      }
      if (cVar5 != '\0') goto LAB_003843cb;
      FUN_01c0a900();
      (**(code **)(*(longlong *)local_40 + 0x368))();
      pcVar7 = local_70;
      lVar6 = DAT_02704060;
      if (DAT_02704060 != 0) {
        FUN_00d50b00();
      }
      local_188 = lVar6;
      local_180 = '\x01';
      cVar5 = (**(code **)(*(longlong *)pcVar7 + 0x50))();
      if ((local_180 != '\0') && (local_188 != 0)) {
        FUN_00d50b20();
      }
      if ((local_68[0] != '\0') && (local_70 != (code *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (code *)0x0)) {
        FUN_00d50b20();
      }
      if (cVar5 != '\0') goto LAB_003843cb;
      local_170 = '\0';
      local_178 = pcVar12;
      FUN_01c0cd20();
      cVar5 = local_68[0];
      pcVar7 = local_70;
      if (local_70 == pcVar12) {
        if (local_68[0] != '\0') {
          pcVar7 = pcVar12;
          cVar5 = cVar4;
          if (cVar4 == '\0') {
            FUN_00d50b00();
            cVar5 = '\x01';
          }
          goto LAB_00384360;
        }
      }
      else {
        if ((local_68[0] != '\0') && (local_70 != (code *)0x0)) {
          FUN_00d50b00();
        }
        if (cVar4 != '\0') {
          FUN_00d50b20();
        }
LAB_00384360:
        pcVar12 = pcVar7;
        cVar4 = cVar5;
        if ((local_68[0] != '\0') && (local_70 != (code *)0x0)) {
          FUN_00d50b20();
        }
      }
      if ((local_170 != '\0') && (local_178 != (code *)0x0)) {
        FUN_00d50b20();
      }
    } while (pcVar12 != (code *)0x0);
    pcVar12 = (code *)0x0;
  }
LAB_003843cb:
  FUN_00379d20();
  local_c8 = local_70;
  local_c0 = 0;
  if (local_68[0] == '\0') {
    if (local_70 != (code *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_68[0] = '\0';
  }
  pcVar7 = local_98;
  local_c0 = '\x01';
  FUN_01d6f990();
  if ((local_c0 != '\0') && (local_c8 != (code *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_68[0] != '\0') && (local_70 != (code *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01d701d0();
  FUN_01d65ea0();
  FUN_01d5dc80();
  if ((local_68[0] != '\0') && (local_70 != (code *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (code *)0x0)) {
    FUN_00d50b20();
  }
  if (pcVar7 != (code *)0x0) {
    local_68[0] = '\0';
    local_70 = (code *)0x0;
    local_60 = local_98;
    local_58 = 0xffffffff;
    local_50 = 0;
    local_58._4_4_ = 0;
    while( true ) {
      if (local_58._4_4_ != 0) {
        if (local_58._4_4_ < 1) {
          iVar9 = -local_58._4_4_;
        }
        else {
          iVar9 = (int)local_58 - local_58._4_4_;
          local_58 = CONCAT44(local_58._4_4_,iVar9);
          FUN_00d23690();
          local_50 = local_50 + local_58._4_4_;
          iVar9 = 0;
        }
        local_58 = CONCAT44(iVar9,(int)local_58);
      }
      lVar6 = (longlong)(int)local_58;
      iVar9 = (int)local_58 + 1;
      local_58 = CONCAT44(local_58._4_4_,iVar9);
      if (*(int *)(local_60 + 0xc) <= iVar9) break;
      local_168 = *(code **)(*(longlong *)(local_60 + 0x10) + 8 + lVar6 * 8);
      local_160 = '\0';
      local_70 = local_168;
      FUN_01d6f990();
      if ((local_160 != '\0') && (local_168 != (code *)0x0)) {
        FUN_00d50b20();
      }
    }
    FUN_00018280();
  }
  plVar1 = *(longlong **)(unaff_RDI + 0x100);
  FUN_01d6fde0();
  (**(code **)(*plVar1 + 0x918))();
  if (local_98 != (code *)0x0) {
    FUN_00d50b20();
  }
LAB_003845d7:
  if (local_a8 != (code *)0x0) {
    FUN_00d50b20();
  }
  if (local_a0 != (code *)0x0) {
    FUN_00d50b20();
  }
  if ((cVar4 != '\0') && (pcVar12 != (code *)0x0)) {
    FUN_00d50b20();
  }
  if (local_140 != (code *)0x0) {
    FUN_00d50b20();
  }
  return;
}


