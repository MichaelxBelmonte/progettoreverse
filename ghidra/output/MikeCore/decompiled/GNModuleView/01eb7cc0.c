// Function: FUN_01eb7cc0
// Address: 01eb7cc0
// Size: 3706 bytes
// Class: GNModuleView
// String references:
//   "%@ not found."


/* WARNING: Removing unreachable block (ram,0x01eb7d8e) */
/* WARNING: Removing unreachable block (ram,0x01eb7d9a) */
/* WARNING: Removing unreachable block (ram,0x01eb7e75) */
/* WARNING: Removing unreachable block (ram,0x01eb7e81) */

void FUN_01eb7cc0(undefined8 param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  char cVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  longlong lVar14;
  char cVar15;
  ulonglong uVar16;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  char cVar17;
  longlong lVar18;
  longlong *plVar19;
  undefined1 auVar20 [8];
  bool bVar21;
  undefined8 uVar22;
  undefined1 auVar23 [16];
  float fVar24;
  float fVar25;
  float in_XMM1_Dc;
  float in_XMM1_Dd;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined8 *local_238;
  char local_230;
  longlong local_218;
  char local_210;
  longlong local_208;
  char local_200;
  longlong local_1f8;
  char local_1f0;
  longlong *local_1e8;
  char local_1e0;
  undefined8 *local_1d8;
  char local_1d0;
  longlong *local_1c8;
  char local_1c0;
  longlong *local_1b8;
  char local_1b0;
  longlong local_1a8;
  char local_1a0;
  longlong *local_198;
  char local_190;
  longlong local_178;
  char local_170;
  longlong *local_168;
  char local_160;
  longlong local_158;
  char local_150;
  undefined8 local_148;
  float fStack_140;
  float fStack_13c;
  longlong local_138;
  char local_130;
  longlong local_118;
  char local_110;
  longlong *local_108;
  char local_100;
  longlong local_f8;
  char local_f0;
  undefined8 *local_d8;
  longlong local_d0;
  char local_c8;
  longlong *local_c0;
  longlong *local_b8;
  longlong local_b0;
  char local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong *local_80;
  undefined1 local_78 [16];
  undefined1 local_68 [8];
  undefined8 uStack_60;
  longlong *local_58;
  uint local_50;
  longlong local_48;
  char local_40;
  
  fVar25 = (float)((ulonglong)param_2 >> 0x20);
  fVar24 = (float)param_2;
  if (unaff_RDI[0x27] == 0) {
    return;
  }
  if (unaff_RDI[0x2a] != 0) {
    return;
  }
  plVar11 = (longlong *)FUN_00e8fc40();
  FUN_00022d50();
  uVar22 = (**(code **)(*plVar11 + 0x18))();
  plVar19 = DAT_027fe460;
  local_b8 = plVar11;
  if (*unaff_RSI != 0) {
    if (DAT_027fe460 != (longlong *)0x0) {
      uVar22 = FUN_00d50b00();
    }
    local_58 = plVar19;
    local_50 = local_50 & 0xffffff00;
    FUN_00ca0840(uVar22,&local_58);
    if (((char)local_50 != '\0') && (local_58 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar19 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  puVar12 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar12 = &DAT_02572358;
  (*DAT_02572370)();
  local_d8 = puVar12;
  FUN_01e5b340();
  uVar22 = FUN_01e5b320();
  local_130 = 0;
  local_138 = unaff_RDI[0x27];
  lVar18 = 0;
  if (local_138 != 0) {
    uVar22 = FUN_00d50b00();
  }
  local_130 = '\x01';
  local_238 = local_d8;
  local_230 = '\0';
  cVar10 = FUN_01e2af10(uVar22,&local_238);
  if ((local_230 != '\0') && (local_238 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_130 != '\0') && (local_138 != 0)) {
    FUN_00d50b20();
  }
  uVar22 = FUN_01e5b320();
  lVar14 = DAT_027fe468;
  if (cVar10 == '\0') {
    if (DAT_027fe468 != 0) {
      uVar22 = FUN_00d50b00();
    }
    local_218 = lVar14;
    local_210 = '\x01';
    lVar14 = unaff_RDI[0x27];
    local_50 = 1;
    local_58 = &DAT_024c5048;
    local_40 = 0;
    if (lVar14 != 0) {
      uVar22 = FUN_00d50b00();
    }
    local_40 = '\x01';
    local_48 = lVar14;
    uVar22 = FUN_00cc7b40(uVar22,&local_58);
    local_58 = &DAT_024c5048;
    if ((local_40 != '\0') && (local_48 != 0)) {
      uVar22 = FUN_00d50b20();
    }
    if ((local_210 != '\0') && (local_218 != 0)) {
      uVar22 = FUN_00d50b20();
    }
  }
  plVar19 = (longlong *)unaff_RDI[0x2b];
  if (plVar19 != local_b8) {
    uVar22 = FUN_00d50b00();
    unaff_RDI[0x2b] = (longlong)local_b8;
    if (plVar19 != (longlong *)0x0) {
      uVar22 = FUN_00d50b20();
    }
  }
  if (*unaff_RSI != 0) {
    local_200 = '\0';
    local_208 = *unaff_RSI;
    uVar22 = (**(code **)(*unaff_RDI + 0x960))();
    if ((local_200 != '\0') && (local_208 != 0)) {
      uVar22 = FUN_00d50b20();
    }
  }
  lVar14 = DAT_027f3818;
  if (DAT_027f3818 != 0) {
    uVar22 = FUN_00d50b00();
  }
  local_1f8 = lVar14;
  local_1f0 = '\x01';
  FUN_000175c0(uVar22,&local_1f8);
  plVar19 = unaff_RDI + 0x2a;
  plVar11 = (longlong *)*plVar19;
  plVar13 = plVar11;
  if (plVar11 != local_58) {
    if ((char)local_50 == '\0') {
      if (local_58 == (longlong *)0x0) {
        plVar13 = (longlong *)0x0;
        goto LAB_01eb8022;
      }
      FUN_00d50b00();
      plVar11 = (longlong *)*plVar19;
      *plVar19 = (longlong)local_58;
      plVar13 = local_58;
    }
    else {
      local_50 = local_50 & 0xffffff00;
      plVar13 = local_58;
LAB_01eb8022:
      *plVar19 = (longlong)plVar13;
    }
    if (plVar11 != (longlong *)0x0) {
      FUN_00d50b20();
      plVar13 = local_58;
    }
  }
  if (((char)local_50 != '\0') && (plVar13 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_1f0 != '\0') && (local_1f8 != 0)) {
    FUN_00d50b20();
  }
  if (*plVar19 == 0) {
    local_80 = (longlong *)0x0;
    cVar17 = '\0';
    auVar20 = (undefined1  [8])0x0;
    cVar10 = '\0';
    plVar19 = (longlong *)0x0;
    cVar15 = '\0';
  }
  else {
    local_c0 = plVar19;
    FUN_01eb9990();
    plVar19 = local_58;
    if (local_58 == (longlong *)0x0) {
      uVar22 = 0;
      local_80 = (longlong *)0x0;
LAB_01eb815b:
      auVar4._8_8_ = 0;
      auVar4._0_8_ = local_78._8_8_;
      local_78 = auVar4 << 0x40;
      plVar19 = (longlong *)0x0;
      local_98 = 0;
      auVar5._8_8_ = 0;
      auVar5._0_8_ = uStack_60;
      _local_68 = auVar5 << 0x40;
    }
    else {
      if ((char)local_50 == '\0') {
        FUN_00d50b00();
      }
      local_80 = plVar19;
      if (*(char *)((longlong)unaff_RDI + 0xab) == '\0') {
        _local_68 = ZEXT416(*(uint *)(unaff_RDI + 0x2d));
        local_78 = ZEXT416(*(uint *)((longlong)unaff_RDI + 0x16c));
        FUN_01e3f820();
        auVar27 = ZEXT816(0);
        if (fVar24 < (float)local_68._0_4_) {
          auVar3._4_4_ = local_68._4_4_;
          auVar3._0_4_ = (float)local_68._0_4_ - fVar24;
          auVar3._8_4_ = (float)uStack_60;
          auVar3._12_4_ = uStack_60._4_4_;
          auVar27 = blendps(auVar27,auVar3,1);
          if ((float)local_78._0_4_ <= fVar25) goto LAB_01eb8113;
LAB_01eb8192:
          auVar2._4_4_ = local_78._4_4_;
          auVar2._0_4_ = (float)local_78._0_4_ - fVar25;
          auVar2._8_4_ = local_78._8_4_;
          auVar2._12_4_ = local_78._12_4_;
          auVar27 = insertps(auVar27,auVar2,0x10);
          cVar10 = *(char *)((longlong)unaff_RDI + 0x14d);
        }
        else {
          if (fVar25 < (float)local_78._0_4_) goto LAB_01eb8192;
LAB_01eb8113:
          cVar10 = *(char *)((longlong)unaff_RDI + 0x14d);
        }
        local_78._4_4_ = fVar25;
        local_78._0_4_ = fVar25;
        local_78._8_4_ = in_XMM1_Dd;
        local_78._12_4_ = in_XMM1_Dd;
        local_148 = (longlong *)CONCAT44(fVar25,fVar24);
        if (cVar10 != '\0') {
          local_148 = (longlong *)CONCAT44(fVar25,fVar24);
          fStack_140 = in_XMM1_Dc;
          fStack_13c = in_XMM1_Dd;
          (**(code **)(*plVar19 + 0x4d8))();
          local_68._4_4_ = fVar25;
          local_68._0_4_ = fVar24;
          uStack_60._0_4_ = in_XMM1_Dc;
          uStack_60._4_4_ = in_XMM1_Dd;
          (**(code **)(*plVar19 + 0x4d8))();
          auVar27._0_4_ = (float)local_68._0_4_ - (float)local_148;
          auVar27._4_4_ = (float)local_68._4_4_ - local_148._4_4_;
          auVar27._8_4_ = (float)uStack_60 - fStack_140;
          auVar27._12_4_ = uStack_60._4_4_ - fStack_13c;
          auVar26._0_4_ = fVar24 - (float)local_148;
          auVar26._4_4_ = fVar25 - local_148._4_4_;
          auVar26._8_4_ = in_XMM1_Dc - fStack_140;
          auVar26._12_4_ = in_XMM1_Dd - fStack_13c;
          auVar27 = blendps(auVar26,auVar27,0xd);
        }
        fVar24 = auVar27._4_4_;
        if (((auVar27._0_4_ != 0.0) || (fVar24 != 0.0)) || (NAN(fVar24))) {
          local_98 = CONCAT44(fVar24,fVar24);
          uStack_90 = auVar27._12_4_;
          uStack_8c = auVar27._12_4_;
          _local_68 = auVar27;
          cVar10 = (**(code **)(*unaff_RDI + 0x598))();
          if (cVar10 == '\0') {
            uVar22 = 1;
            goto LAB_01eb815b;
          }
          (**(code **)(*unaff_RDI + 0x580))();
          auVar23._4_12_ = local_68._4_12_;
          auVar23._0_4_ = local_68._0_4_ + (float)local_148;
          auVar1._4_4_ = local_78._4_4_;
          auVar1._0_4_ = (float)local_78._0_4_ + (float)local_98;
          auVar1._8_4_ = local_78._8_4_;
          auVar1._12_4_ = local_78._12_4_;
          _local_68 = insertps(auVar23,auVar1,0x10);
          (**(code **)(*unaff_RDI + 0x4e8))();
          (**(code **)(*unaff_RDI + 0x580))();
          (**(code **)(*plVar19 + 0x4e8))();
        }
        else {
          (**(code **)(*plVar19 + 0x4e8))();
        }
      }
      local_1e8 = plVar19;
      local_1e0 = '\0';
      (**(code **)(*unaff_RDI + 0x450))();
      if ((local_1e0 != '\0') && (local_1e8 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      FUN_01eb7b40();
      plVar19 = local_58;
      if (((char)local_50 != '\0') && (local_58 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar19 == (longlong *)0x0) {
        auVar6._8_8_ = 0;
        auVar6._0_8_ = local_78._8_8_;
        local_78 = auVar6 << 0x40;
        plVar19 = (longlong *)0x0;
        local_98 = 0;
        auVar7._8_8_ = 0;
        auVar7._0_8_ = uStack_60;
        _local_68 = auVar7 << 0x40;
      }
      else {
        FUN_01eb7b40();
        uVar22 = FUN_01eb9dd0();
        local_118 = local_d0;
        local_110 = 0;
        if (local_c8 == '\0') {
          if (local_d0 != 0) {
            uVar22 = FUN_00d50b00();
          }
        }
        else {
          local_c8 = '\0';
        }
        local_110 = '\x01';
        FUN_01d26420(uVar22,&local_118);
        local_68 = (undefined1  [8])local_58;
        if (local_58 == (longlong *)0x0) {
          auVar9._8_8_ = 0;
          auVar9._0_8_ = uStack_60;
          _local_68 = auVar9 << 0x40;
          local_98 = 0;
        }
        else if ((char)local_50 == '\0') {
          uVar22 = FUN_00d50b00();
          local_98 = CONCAT71((int7)((ulonglong)uVar22 >> 8),1);
          if (((char)local_50 != '\0') && (local_58 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_50 = local_50 & 0xffffff00;
          local_98 = CONCAT71((int7)((ulonglong)local_58 >> 8),1);
        }
        if ((local_110 != '\0') && (local_118 != 0)) {
          FUN_00d50b20();
        }
        if ((local_a8 != '\0') && (local_b0 != 0)) {
          FUN_00d50b20();
        }
        if (*(int *)((longlong)local_68 + 0xc) < 1) {
          auVar8._8_8_ = 0;
          auVar8._0_8_ = local_78._8_8_;
          local_78 = auVar8 << 0x40;
          plVar19 = (longlong *)0x0;
        }
        else {
          lVar18 = 0;
          uVar16 = 0;
          plVar11 = (longlong *)0x0;
          do {
            lVar14 = *(longlong *)((longlong)local_68 + 0x10);
            plVar19 = *(longlong **)(lVar14 + lVar18 * 8);
            if (plVar11 == plVar19) {
              plVar19 = plVar11;
              if (((char)uVar16 == '\0') && (plVar11 != (longlong *)0x0)) {
                local_78._1_7_ = (int7)((ulonglong)lVar14 >> 8);
                local_78[0] = 1;
                FUN_00d50b00();
              }
              else {
                local_78._0_8_ = uVar16;
              }
            }
            else {
              if (plVar19 != (longlong *)0x0) {
                lVar14 = FUN_00d50b00();
              }
              auVar27 = local_78;
              local_78._1_7_ = (int7)((ulonglong)lVar14 >> 8);
              local_78[0] = 1;
              local_78._8_8_ = auVar27._8_8_;
              if (((char)uVar16 != '\0') && (plVar11 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
            }
            (**(code **)(*plVar19 + 0x480))();
            FUN_01e42030();
            FUN_01d8c6e0();
            plVar11 = local_58;
            local_100 = 0;
            if ((char)local_50 == '\0') {
              if (local_58 != (longlong *)0x0) {
                FUN_00d50b00();
              }
            }
            else {
              local_50 = local_50 & 0xffffff00;
            }
            local_100 = '\x01';
            local_108 = plVar11;
            FUN_01ccad10();
            if ((local_100 != '\0') && (local_108 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if (((char)local_50 != '\0') && (local_58 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_a8 != '\0') && (local_b0 != 0)) {
              FUN_00d50b20();
            }
            (**(code **)(*plVar19 + 0x478))();
            lVar18 = lVar18 + 1;
            uVar16 = local_78._0_8_ & 0xffffffff;
            plVar11 = plVar19;
          } while (lVar18 < *(int *)((longlong)local_68 + 0xc));
        }
      }
      plVar11 = (longlong *)*local_c0;
      FUN_00015ff0();
      if (plVar11 == (longlong *)0x0) {
        plVar11 = &DAT_02802688;
      }
      else {
        (**(code **)(*plVar11 + 0x360))();
        cVar10 = FUN_00e85ea0();
        plVar11 = local_c0;
        if (cVar10 == '\0') {
          plVar11 = &DAT_02802688;
        }
      }
      plVar13 = local_c0;
      uVar22 = CONCAT71((int7)((ulonglong)lVar18 >> 8),1);
      if (*plVar11 != 0) {
        local_1d8 = local_d8;
        local_1d0 = '\0';
        FUN_01e511c0();
        if ((local_1d0 != '\0') && (local_1d8 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
        local_1c8 = local_b8;
        local_1c0 = '\0';
        FUN_01e51330();
        if ((local_1c0 != '\0') && (local_1c8 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        local_1b8 = local_80;
        local_1b0 = '\0';
        FUN_01e55ee0();
        if ((local_1b0 != '\0') && (local_1b8 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        (**(code **)(*(longlong *)*plVar13 + 0x518))();
        (**(code **)(*(longlong *)*local_c0 + 0x4e8))();
      }
    }
    plVar11 = local_c0;
    FUN_00d6f370();
    local_148 = local_58;
    if (local_58 != (longlong *)0x0) {
      local_a0 = uVar22;
      if ((char)local_50 == '\0') {
        FUN_00d50b00();
        if (((char)local_50 != '\0') && (local_58 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      FUN_01e42030();
      if (local_58 == (longlong *)0x0) {
        bVar21 = false;
      }
      else {
        FUN_01e42030();
        FUN_01e4c160();
        bVar21 = local_b0 != 0;
        if ((local_a8 != '\0') && (local_b0 != 0)) {
          FUN_00d50b20();
        }
        if ((local_c8 != '\0') && (local_d0 != 0)) {
          FUN_00d50b20();
        }
      }
      if (((char)local_50 != '\0') && (local_58 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (bVar21) {
        FUN_01e42030();
        FUN_01e4c160();
        local_f8 = local_b0;
        local_f0 = 0;
        if (local_a8 == '\0') {
          if (local_b0 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_a8 = '\0';
        }
        local_f0 = '\x01';
        local_1a0 = '\0';
        local_1a8 = 0;
        FUN_00d704d0(&local_1a8,&local_f8);
        plVar13 = local_58;
        if (local_58 == (longlong *)0x0) {
          plVar13 = (longlong *)0x0;
LAB_01eb89da:
          bVar21 = plVar13 == (longlong *)0x0;
          if (((char)local_50 != '\0') && (local_58 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          if ((char)local_50 == '\0') {
            FUN_00d50b00();
            goto LAB_01eb89da;
          }
          local_50 = local_50 & 0xffffff00;
          bVar21 = false;
        }
        if ((local_1a0 != '\0') && (local_1a8 != 0)) {
          FUN_00d50b20();
        }
        if ((local_f0 != '\0') && (local_f8 != 0)) {
          FUN_00d50b20();
        }
        if ((local_a8 != '\0') && (local_b0 != 0)) {
          FUN_00d50b20();
        }
        if ((local_c8 != '\0') && (local_d0 != 0)) {
          FUN_00d50b20();
        }
        if (!bVar21) {
          local_190 = '\0';
          local_198 = plVar13;
          (**(code **)(*unaff_RDI + 0x868))();
          if ((local_190 != '\0') && (local_198 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          goto LAB_01eb8813;
        }
      }
      else {
        plVar13 = (longlong *)0x0;
LAB_01eb8813:
        plVar11 = (longlong *)*plVar11;
        FUN_00015ff0();
        if (plVar11 == (longlong *)0x0) {
LAB_01eb8845:
          plVar11 = &DAT_02802688;
        }
        else {
          (**(code **)(*plVar11 + 0x360))();
          cVar10 = FUN_00e85ea0();
          plVar11 = local_c0;
          if (cVar10 == '\0') goto LAB_01eb8845;
        }
        plVar11 = (longlong *)*plVar11;
        if (plVar11 == (longlong *)0x0) {
          FUN_00d50b00();
        }
        else {
          FUN_00d50b00();
          unaff_RDI = plVar11;
        }
        FUN_00d403d0();
        local_178 = DAT_027fe470;
        if (DAT_027fe470 != 0) {
          FUN_00d50b00();
        }
        local_170 = '\x01';
        local_160 = '\0';
        local_158 = 0;
        local_150 = '\0';
        local_168 = unaff_RDI;
        FUN_00d40470(&local_158,&local_168,1,1);
        if ((local_150 != '\0') && (local_158 != 0)) {
          FUN_00d50b20();
        }
        if ((local_160 != '\0') && (local_168 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_170 != '\0') && (local_178 != 0)) {
          FUN_00d50b20();
        }
        if (((char)local_50 != '\0') && (local_58 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (unaff_RDI != (longlong *)0x0) {
          FUN_00d50b20();
        }
        if (plVar13 != (longlong *)0x0) {
          FUN_00d50b20();
        }
      }
      FUN_00d50b20();
      uVar22 = local_a0;
    }
    cVar17 = (char)uVar22;
    cVar10 = (char)local_98;
    cVar15 = local_78[0];
    auVar20 = local_68;
    if (local_d8 == (undefined8 *)0x0) goto LAB_01eb8a9a;
  }
  FUN_00d50b20();
LAB_01eb8a9a:
  if ((cVar15 != '\0') && (plVar19 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((cVar10 != '\0') && (auVar20 != (undefined1  [8])0x0)) {
    FUN_00d50b20();
  }
  if ((cVar17 != '\0') && (local_80 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (local_b8 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}


