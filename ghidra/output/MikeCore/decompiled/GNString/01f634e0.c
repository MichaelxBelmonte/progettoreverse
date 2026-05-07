// Function: FUN_01f634e0
// Address: 01f634e0
// Size: 3398 bytes
// Class: GNString
// String references:
//   "%@: "
//   "GNString"
//   "GNDictionary"


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_01f634e0(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  float fVar4;
  undefined4 uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  bool bVar9;
  longlong *plVar10;
  char cVar11;
  int iVar12;
  uint *puVar13;
  longlong *plVar14;
  int in_EDX;
  longlong unaff_RDI;
  longlong *plVar15;
  longlong **pplVar16;
  undefined8 uVar17;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 uVar18;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  undefined8 extraout_XMM0_Qb;
  undefined8 in_XMM1_Qb;
  undefined1 auVar19 [16];
  float local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  longlong local_170;
  undefined1 local_168;
  longlong local_160;
  undefined1 local_158;
  longlong local_150;
  char local_148;
  longlong *local_140;
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
  longlong local_e0;
  char local_d8;
  longlong *local_88;
  undefined8 local_78;
  char local_70;
  undefined4 local_64;
  undefined8 local_60;
  char local_58;
  longlong *local_50;
  uint local_48 [2];
  longlong local_40;
  char local_38;
  
  if (in_EDX == 0) {
    return 1;
  }
  uVar17 = FUN_01ce9490();
  plVar2 = local_50;
  if (((char)local_48[0] == '\0') && (local_50 != (longlong *)0x0)) {
    uVar17 = FUN_00d50b00();
    if (((char)local_48[0] != '\0') && (local_50 != (longlong *)0x0)) {
      uVar17 = FUN_00d50b20();
    }
  }
  lVar3 = DAT_027e7c20;
  if (*(int *)((longlong)plVar2 + 0xc) < 2) {
    lVar3 = *(longlong *)(unaff_RDI + 0x90);
    lVar1 = *(longlong *)(unaff_RDI + 0xa0);
    if (lVar1 != lVar3) {
      if (lVar3 != 0) {
        uVar17 = FUN_00d50b00();
      }
      *(longlong *)(unaff_RDI + 0xa0) = lVar3;
      if (lVar1 != 0) {
        uVar17 = FUN_00d50b20();
      }
    }
  }
  else {
    plVar15 = *(longlong **)(plVar2[2] + (ulonglong)(*(int *)((longlong)plVar2 + 0xc) - 2) * 8);
    if (DAT_027e7c20 != 0) {
      uVar17 = FUN_00d50b00();
    }
    local_138 = lVar3;
    local_130 = '\x01';
    uVar17 = (**(code **)(*plVar15 + 0x88))(uVar17,&local_138);
    plVar15 = *(longlong **)(unaff_RDI + 0xa0);
    plVar14 = plVar15;
    if (plVar15 != local_50) {
      if ((char)local_48[0] == '\0') {
        if (local_50 == (longlong *)0x0) {
          plVar14 = (longlong *)0x0;
          goto LAB_01f635b6;
        }
        uVar17 = FUN_00d50b00();
        plVar15 = *(longlong **)(unaff_RDI + 0xa0);
        *(longlong **)(unaff_RDI + 0xa0) = local_50;
        plVar14 = local_50;
      }
      else {
        local_48[0] = local_48[0] & 0xffffff00;
        plVar14 = local_50;
LAB_01f635b6:
        *(longlong **)(unaff_RDI + 0xa0) = plVar14;
      }
      if (plVar15 != (longlong *)0x0) {
        uVar17 = FUN_00d50b20();
        plVar14 = local_50;
      }
    }
    if (((char)local_48[0] != '\0') && (plVar14 != (longlong *)0x0)) {
      uVar17 = FUN_00d50b20();
    }
    if ((local_130 != '\0') && (local_138 != 0)) {
      uVar17 = FUN_00d50b20();
    }
  }
  bVar9 = true;
  if (*(longlong *)(unaff_RDI + 0xa0) == 0) goto LAB_01f63fdd;
  plVar2 = *(longlong **)(plVar2[2] + -8 + (longlong)*(int *)((longlong)plVar2 + 0xc) * 8);
  local_50 = plVar2;
  local_48[0] = local_48[0] & 0xffffff00;
  if ((DAT_026fdd40 == '\0') &&
     (iVar12 = ___cxa_guard_acquire(), uVar17 = extraout_XMM0_Qa_02, iVar12 != 0)) {
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
    uVar17 = ___cxa_guard_release();
  }
  pplVar16 = (longlong **)&DAT_02802688;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x360))();
    cVar11 = FUN_00e85ea0();
    uVar17 = extraout_XMM0_Qa;
    if (cVar11 != '\0') {
      if ((DAT_026fd0c0 == '\0') && (iVar12 = ___cxa_guard_acquire(), iVar12 != 0)) {
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
      cVar11 = FUN_00e8db60();
      pplVar16 = &local_50;
      uVar17 = extraout_XMM0_Qa_00;
      if (cVar11 == '\0') {
        pplVar16 = (longlong **)&DAT_02802688;
      }
    }
  }
  local_88 = *pplVar16;
  if (local_88 == (longlong *)0x0) {
    local_64 = 1;
    local_88 = (longlong *)0x0;
  }
  else {
    if (*(char *)(pplVar16 + 1) == '\0') {
      uVar17 = FUN_00d50b00();
    }
    else {
      *(undefined1 *)(pplVar16 + 1) = 0;
    }
    local_64 = 0;
  }
  if (((char)local_48[0] != '\0') && (local_50 != (longlong *)0x0)) {
    uVar17 = FUN_00d50b20();
  }
  lVar3 = DAT_02704000;
  if (local_88 == (longlong *)0x0) goto LAB_01f63fdd;
  if (DAT_02704000 != 0) {
    uVar17 = FUN_00d50b00();
  }
  local_128 = lVar3;
  local_120 = '\x01';
  pplVar16 = &local_50;
  FUN_000175c0(uVar17,&local_128);
  plVar2 = local_50;
  if ((DAT_026fd0c0 == '\0') && (iVar12 = ___cxa_guard_acquire(), iVar12 != 0)) {
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
LAB_01f637c6:
    pplVar16 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar2 + 0x360))();
    cVar11 = FUN_00e85ea0();
    if (cVar11 == '\0') goto LAB_01f637c6;
  }
  plVar15 = *(longlong **)(unaff_RDI + 0xb0);
  plVar2 = *pplVar16;
  if (plVar15 != plVar2) {
    if (*(char *)(pplVar16 + 1) == '\0') {
      if (plVar2 == (longlong *)0x0) {
        *(undefined8 *)(unaff_RDI + 0xb0) = 0;
      }
      else {
        FUN_00d50b00();
        plVar15 = *(longlong **)(unaff_RDI + 0xb0);
        *(longlong **)(unaff_RDI + 0xb0) = *pplVar16;
      }
    }
    else {
      *(undefined1 *)(pplVar16 + 1) = 0;
      *(longlong **)(unaff_RDI + 0xb0) = plVar2;
    }
    if (plVar15 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  if (((char)local_48[0] != '\0') && (local_50 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_120 != '\0') && (local_128 != 0)) {
    FUN_00d50b20();
  }
  if (*(longlong *)(unaff_RDI + 0xb0) == 0) {
    bVar9 = true;
  }
  else {
    FUN_01ceb850();
    plVar2 = (longlong *)local_50[5];
    if (plVar2 != (longlong *)0x0) {
      FUN_00d50b00();
    }
    if (((char)local_48[0] != '\0') && (local_50 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_01dd4a30();
    plVar15 = local_50;
    if ((char)local_48[0] == '\0') {
      if (local_50 == (longlong *)0x0) goto LAB_01f63a31;
      FUN_00d50b00();
      if (((char)local_48[0] != '\0') && (local_50 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
LAB_01f638fa:
      bVar9 = true;
      local_140 = plVar15;
      if (*(int *)((longlong)plVar15 + 0xc) == 1) {
        FUN_00d23340();
        plVar15 = local_50;
        local_60._0_1_ = (char)local_48[0];
        puVar13 = (uint *)&local_60;
        if ((char)local_48[0] != '\0') {
          puVar13 = local_48;
        }
        *(undefined1 *)puVar13 = 0;
        if (((char)local_48[0] != '\0') && (plVar15 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        FUN_00d45870();
        uVar17 = FUN_01dcf710();
        if (((char)local_60 != '\0') && (plVar15 != (longlong *)0x0)) {
          uVar17 = FUN_00d50b20();
        }
        FUN_01dcc290(uVar17,0);
        FUN_01db9a00();
        uVar17 = (**(code **)(*(longlong *)CONCAT71(local_78._1_7_,(char)local_78) + 0x9e8))();
        local_40 = *(longlong *)(unaff_RDI + 0xb0);
        local_48[0] = 1;
        local_50 = &DAT_024c5048;
        local_38 = 0;
        if (local_40 != 0) {
          uVar17 = FUN_00d50b00();
        }
        local_38 = '\x01';
        FUN_00d8cb40(uVar17,&local_50);
        lVar3 = local_f8;
        if (local_f0 == '\0') {
          if (local_f8 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_f0 = '\0';
        }
        uVar18 = FUN_01d43d10();
        uVar17 = uVar18;
        if (lVar3 != 0) {
          uVar17 = FUN_00d50b20();
        }
        if ((local_f0 != '\0') && (local_f8 != 0)) {
          uVar17 = FUN_00d50b20();
        }
        local_50 = &DAT_024c5048;
        if ((local_38 != '\0') && (local_40 != 0)) {
          uVar17 = FUN_00d50b20();
        }
        if ((local_58 != '\0') && (CONCAT71(local_60._1_7_,(char)local_60) != 0)) {
          uVar17 = FUN_00d50b20();
        }
        if ((local_70 != '\0') && (CONCAT71(local_78._1_7_,(char)local_78) != 0)) {
          uVar17 = FUN_00d50b20();
        }
        if ((local_148 != '\0') && (local_150 != 0)) {
          uVar17 = FUN_00d50b20();
        }
        lVar3 = *(longlong *)(unaff_RDI + 0xa0);
        if (lVar3 != 0) {
          uVar17 = FUN_00d50b00();
        }
        local_168 = 1;
        local_170 = lVar3;
        local_e8 = lVar3;
        uVar17 = FUN_01f5f5b0(uVar17,&local_170);
        local_d8 = 0;
        local_e0 = *(longlong *)(unaff_RDI + 0xb0);
        if (local_e0 != 0) {
          uVar17 = FUN_00d50b00();
        }
        local_d8 = '\x01';
        plVar15 = &local_60;
        FUN_00c841b0(uVar17,&local_e0);
        plVar14 = (longlong *)CONCAT71(local_60._1_7_,(char)local_60);
        uVar17 = FUN_000274b0();
        if (plVar14 == (longlong *)0x0) {
LAB_01f63ba6:
          plVar15 = &DAT_02802688;
        }
        else {
          (**(code **)(*plVar14 + 0x360))();
          cVar11 = FUN_00e85ea0();
          uVar17 = extraout_XMM0_Qa_01;
          if (cVar11 == '\0') goto LAB_01f63ba6;
        }
        lVar3 = *plVar15;
        if ((char)plVar15[1] == '\0') {
          if (lVar3 != 0) {
            uVar17 = FUN_00d50b00();
          }
        }
        else {
          *(undefined1 *)(plVar15 + 1) = 0;
        }
        local_158 = 1;
        local_160 = lVar3;
        FUN_01f62050(uVar17,&local_160);
        plVar10 = local_50;
        plVar15 = (longlong *)(unaff_RDI + 0x98);
        plVar14 = *(longlong **)(unaff_RDI + 0x98);
        if (plVar14 == local_50) {
          if (((char)local_48[0] != '\0') && (local_50 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          if ((char)local_48[0] == '\0') {
            if (local_50 != (longlong *)0x0) {
              FUN_00d50b00();
              plVar14 = (longlong *)*plVar15;
            }
          }
          else {
            local_48[0] = local_48[0] & 0xffffff00;
          }
          *plVar15 = (longlong)plVar10;
          if (plVar14 != (longlong *)0x0) {
            FUN_00d50b20();
          }
        }
        if (lVar3 != 0) {
          FUN_00d50b20();
        }
        if ((local_58 != '\0') && (CONCAT71(local_60._1_7_,(char)local_60) != 0)) {
          FUN_00d50b20();
        }
        if ((local_d8 != '\0') && (local_e0 != 0)) {
          FUN_00d50b20();
        }
        if ((local_70 != '\0') && (CONCAT71(local_78._1_7_,(char)local_78) != 0)) {
          FUN_00d50b20();
        }
        if (local_e8 != 0) {
          FUN_00d50b20();
        }
        if ((longlong *)*plVar15 != (longlong *)0x0) {
          local_188 = (float)uVar18;
          uStack_184 = (undefined4)((ulonglong)uVar18 >> 0x20);
          uStack_180 = (undefined4)extraout_XMM0_Qb;
          uStack_17c = (undefined4)((ulonglong)extraout_XMM0_Qb >> 0x20);
          auVar7._4_4_ = uStack_184;
          auVar7._0_4_ = local_188 + DAT_02394298;
          auVar7._8_4_ = uStack_180;
          auVar7._12_4_ = uStack_17c;
          blendps(_DAT_0241c730,auVar7,1);
          auVar8._8_8_ = in_XMM1_Qb;
          auVar8._0_8_ = param_2;
          fVar4 = (float)((ulonglong)param_2 >> 0x20);
          uVar5 = (undefined4)((ulonglong)in_XMM1_Qb >> 0x20);
          auVar19._4_12_ = auVar8._4_12_;
          auVar19._0_4_ = (float)param_2 - (local_188 + DAT_02394298);
          auVar6._4_4_ = fVar4;
          auVar6._0_4_ = fVar4 + DAT_02390d34;
          auVar6._8_4_ = uVar5;
          auVar6._12_4_ = uVar5;
          insertps(auVar19,auVar6,0x10);
          (**(code **)(*(longlong *)*plVar15 + 0x4d0))();
          local_118 = DAT_027ebf00;
          plVar14 = (longlong *)*plVar15;
          if (DAT_027ebf00 != 0) {
            FUN_00d50b00();
          }
          local_110 = '\x01';
          (**(code **)(*plVar14 + 0xa10))();
          if ((local_110 != '\0') && (local_118 != 0)) {
            FUN_00d50b20();
          }
          plVar14 = *(longlong **)(unaff_RDI + 0x98);
          FUN_00d50b00();
          (**(code **)(*plVar14 + 0xa20))();
          if (unaff_RDI != 0) {
            FUN_00d50b20();
          }
          (**(code **)(*(longlong *)*plVar15 + 0x3a0))();
          plVar14 = (longlong *)*plVar15;
          uVar17 = FUN_00d23340();
          plVar10 = local_50;
          puVar13 = local_48;
          if ((char)local_48[0] == '\0') {
            puVar13 = (uint *)&local_78;
          }
          local_78._0_1_ = (char)local_48[0];
          *(undefined1 *)puVar13 = 0;
          if (((char)local_48[0] != '\0') && (plVar10 != (longlong *)0x0)) {
            uVar17 = FUN_00d50b20();
          }
          lVar3 = DAT_027e7c20;
          if (DAT_027e7c20 != 0) {
            uVar17 = FUN_00d50b00();
          }
          local_108 = lVar3;
          local_100 = '\x01';
          FUN_000175c0(uVar17,&local_108);
          lVar3 = CONCAT71(local_60._1_7_,(char)local_60);
          if (local_58 == '\0') {
            if (lVar3 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_58 = '\0';
          }
          (**(code **)(*plVar14 + 0x978))();
          if (lVar3 != 0) {
            FUN_00d50b20();
          }
          if ((local_58 != '\0') && (CONCAT71(local_60._1_7_,(char)local_60) != 0)) {
            FUN_00d50b20();
          }
          if ((local_100 != '\0') && (local_108 != 0)) {
            FUN_00d50b20();
          }
          if (((char)local_78 != '\0') && (plVar10 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          lVar3 = *plVar15;
          if (lVar3 != 0) {
            FUN_00d50b00();
          }
          (**(code **)(*plVar2 + 0x450))();
          if (lVar3 != 0) {
            FUN_00d50b20();
          }
          plVar14 = (longlong *)*plVar15;
          FUN_001f8a30();
          if (plVar14 == (longlong *)0x0) {
LAB_01f63f67:
            plVar14 = &DAT_02802688;
          }
          else {
            (**(code **)(*plVar14 + 0x360))();
            cVar11 = FUN_00e85ea0();
            plVar14 = plVar15;
            if (cVar11 == '\0') goto LAB_01f63f67;
          }
          if (*plVar14 != 0) {
            (**(code **)(*(longlong *)*plVar15 + 0xab8))();
          }
          FUN_01ceb850();
          FUN_01ce6530();
          if (((char)local_48[0] != '\0') && (local_50 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          bVar9 = false;
        }
      }
      FUN_00d50b20();
    }
    else {
      if (local_50 != (longlong *)0x0) goto LAB_01f638fa;
LAB_01f63a31:
      bVar9 = true;
    }
    if (plVar2 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  if ((char)local_64 == '\0') {
    FUN_00d50b20();
  }
LAB_01f63fdd:
  FUN_00d50b20();
  if (!bVar9) {
    return 1;
  }
  return 0;
}


