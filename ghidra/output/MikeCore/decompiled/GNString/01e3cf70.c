// Function: FUN_01e3cf70
// Address: 01e3cf70
// Size: 6524 bytes
// Class: GNString
// String references:
//   "%@ is not able to resize %@ due to conflicting views: %@"


void FUN_01e3cf70(undefined8 param_1,longlong *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  bool bVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  bool bVar26;
  code *pcVar27;
  longlong lVar28;
  undefined1 uVar29;
  ulonglong uVar30;
  longlong *plVar31;
  undefined1 auVar32 [8];
  undefined8 *puVar33;
  undefined8 in_RCX;
  longlong *plVar34;
  undefined8 *unaff_RSI;
  longlong *unaff_RDI;
  bool bVar35;
  longlong lVar36;
  longlong lVar37;
  longlong *plVar38;
  float fVar39;
  undefined4 uVar40;
  float fVar42;
  float extraout_XMM0_Db;
  undefined8 uVar41;
  float in_XMM0_Dc;
  undefined4 extraout_XMM0_Dc;
  float extraout_XMM0_Dc_00;
  float extraout_XMM0_Dc_01;
  float extraout_XMM0_Dc_02;
  undefined4 extraout_XMM0_Dc_03;
  float extraout_XMM0_Dc_04;
  float in_XMM0_Dd;
  float extraout_XMM0_Dd;
  float extraout_XMM0_Dd_00;
  float extraout_XMM0_Dd_01;
  float extraout_XMM0_Dd_02;
  float extraout_XMM0_Dd_03;
  undefined4 extraout_XMM0_Dd_04;
  float extraout_XMM0_Dd_05;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  longlong local_1d8;
  char local_1d0;
  longlong local_1c8;
  char local_1c0;
  longlong local_1b8;
  char local_1b0;
  float local_1a8;
  float fStack_1a4;
  float fStack_1a0;
  float fStack_19c;
  longlong local_190;
  longlong local_188;
  longlong local_180;
  longlong *local_178;
  char local_170;
  longlong *local_168;
  char local_160;
  undefined1 local_158 [8];
  float fStack_150;
  float fStack_14c;
  undefined4 local_13c;
  longlong local_138;
  char local_130;
  longlong local_128;
  char local_120;
  longlong local_118;
  char local_110;
  undefined8 *local_c0;
  longlong *local_b8;
  char local_b0;
  longlong local_a8;
  char local_a0;
  longlong local_98;
  char local_90;
  longlong local_88;
  char local_80;
  undefined *local_78;
  undefined8 *local_70;
  undefined8 *local_68;
  longlong *local_60;
  undefined1 local_58 [8];
  undefined8 uStack_50;
  undefined1 local_48 [8];
  undefined8 uStack_40;
  
  fVar42 = (float)((ulonglong)param_1 >> 0x20);
  fVar39 = (float)param_1;
  fVar44 = (float)*(undefined8 *)((longlong)unaff_RDI + 0x114);
  fVar46 = (float)((ulonglong)*(undefined8 *)((longlong)unaff_RDI + 0x114) >> 0x20);
  fVar43 = fVar44 + fVar39;
  fVar45 = fVar46 + fVar42;
  fVar47 = in_XMM0_Dc + 0.0;
  fVar49 = in_XMM0_Dd + 0.0;
  if ((fVar43 == fVar44) && (!NAN(fVar43) && !NAN(fVar44))) {
    fVar43 = (float)-(uint)(fVar43 == fVar44);
    fVar45 = (float)-(uint)(fVar45 == fVar46);
    fVar47 = (float)-(uint)(fVar47 == 0.0);
    fVar49 = (float)-(uint)(fVar49 == 0.0);
    if (((uint)fVar45 & 1) != 0) {
      return;
    }
  }
  local_158 = (undefined1  [8])(**(code **)(*(longlong *)*unaff_RSI + 0x4d8))();
  pcVar27 = DAT_02572370;
  fVar44 = (float)((ulonglong)local_158 >> 0x20);
  fStack_150 = (float)extraout_XMM0_Dc;
  fStack_14c = extraout_XMM0_Dd;
  fVar46 = fVar42;
  fVar50 = in_XMM0_Dd;
  fVar52 = in_XMM0_Dd;
  local_1a8 = fVar43;
  fStack_1a4 = fVar45;
  fStack_1a0 = fVar47;
  fStack_19c = fVar49;
  if ((fVar42 != 0.0) || (NAN(fVar42))) {
    lVar37 = unaff_RDI[7];
    local_13c = (undefined4)CONCAT71((int7)((ulonglong)in_RCX >> 8),1);
    if (*(int *)(lVar37 + 0xc) < 1) {
      local_60 = (longlong *)0x0;
      local_70 = (undefined8 *)0x0;
      local_68 = (undefined8 *)0x0;
      local_c0 = (undefined8 *)0x0;
      bVar35 = false;
      plVar38 = (longlong *)0x0;
      fVar44 = fVar42;
LAB_01e3d702:
      plVar31 = (longlong *)unaff_RDI[6];
joined_r0x01e3d72b:
      if (plVar31 != (longlong *)0x0) {
        local_170 = 0;
        FUN_00d50b00();
        local_170 = '\x01';
        local_1d8 = *param_2;
        local_1d0 = '\0';
        local_178 = unaff_RDI;
        (**(code **)(*plVar31 + 0x5a8))(fVar39,&local_1d8);
        if ((local_1d0 != '\0') && (local_1d8 != 0)) {
          FUN_00d50b20();
        }
        if ((local_170 != '\0') && (local_178 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      bVar9 = false;
    }
    else {
      local_48._4_4_ = fVar44;
      local_48._0_4_ = fVar44;
      uStack_40._0_4_ = extraout_XMM0_Dd;
      uStack_40._4_4_ = extraout_XMM0_Dd;
      local_58._4_4_ = fVar44 + fVar45;
      local_58._0_4_ = fVar44 + fVar45 + DAT_02390d00;
      uStack_50._0_4_ = extraout_XMM0_Dd + fVar49;
      uStack_50._4_4_ = extraout_XMM0_Dd + fVar49;
      lVar36 = 0;
      local_78 = &DAT_02572358;
      bVar26 = false;
      plVar38 = (longlong *)0x0;
      bVar35 = false;
      local_c0 = (undefined8 *)0x0;
      local_68 = (undefined8 *)0x0;
      local_70 = (undefined8 *)0x0;
      local_60 = (longlong *)0x0;
      fVar46 = fVar44;
      fVar50 = extraout_XMM0_Dd;
      fVar52 = extraout_XMM0_Dd;
      do {
        plVar31 = *(longlong **)(*(longlong *)(lVar37 + 0x10) + lVar36 * 8);
        if (plVar38 == plVar31) {
          if ((!bVar35) && (plVar38 != (longlong *)0x0)) {
            bVar35 = true;
            FUN_00d50b00();
          }
        }
        else {
          if (plVar31 != (longlong *)0x0) {
            FUN_00d50b00();
          }
          if ((bVar35) && (plVar38 != (longlong *)0x0)) {
            FUN_00d50b20();
            bVar35 = true;
            plVar38 = plVar31;
          }
          else {
            bVar35 = true;
            plVar38 = plVar31;
          }
        }
        if ((longlong *)*unaff_RSI != plVar38) {
          (**(code **)(*plVar38 + 0x4d8))();
          fVar46 = fVar46 + extraout_XMM0_Db;
          fVar50 = fVar52 + extraout_XMM0_Dd_00;
          fVar44 = fVar46 + DAT_02390d00;
          fVar52 = fVar50;
          if (fVar44 <= (float)local_48._0_4_) {
            if (local_c0 == (undefined8 *)0x0) {
              local_c0 = (undefined8 *)FUN_00e8fc40();
              FUN_00d4ff40();
              *local_c0 = local_78;
              (*pcVar27)();
            }
            local_b0 = '\0';
            local_b8 = plVar38;
            FUN_00d21140();
            if ((local_b0 != '\0') && (local_b8 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
          else if ((float)local_58._0_4_ <= extraout_XMM0_Db) {
            puVar33 = local_68;
            if (local_68 == (undefined8 *)0x0) {
              puVar33 = (undefined8 *)FUN_00e8fc40();
              FUN_00d4ff40();
              *puVar33 = local_78;
              (*pcVar27)();
            }
            local_b0 = '\0';
            local_b8 = plVar38;
            local_68 = puVar33;
            FUN_00d21140();
            if ((local_b0 != '\0') && (local_b8 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            uVar30 = (**(code **)(*plVar38 + 0x560))();
            if ((uVar30 & 0x10) != 0) {
              (**(code **)(*plVar38 + 0x4d8))();
              uVar41 = (**(code **)(*plVar38 + 0x528))();
              fVar44 = (float)-(uint)(fVar44 - fVar39 < (float)uVar41);
              fVar46 = (float)-(uint)(fVar46 - fVar42 < (float)((ulonglong)uVar41 >> 0x20));
              fVar50 = (float)-(uint)(fVar50 - in_XMM0_Dc < extraout_XMM0_Dc_00);
              fVar52 = (float)-(uint)(fVar52 - in_XMM0_Dd < extraout_XMM0_Dd_01);
              if (((uint)fVar46 & 1) == 0) goto LAB_01e3d0a0;
            }
            bVar26 = true;
          }
          else {
            uVar30 = (**(code **)(*plVar38 + 0x560))();
            if ((uVar30 & 8) == 0) {
              uVar30 = (**(code **)(*plVar38 + 0x560))();
              if ((uVar30 & 0x20) == 0) {
                uVar30 = (**(code **)(*plVar38 + 0x560))();
                if ((uVar30 & 0x10) == 0) {
                  plVar31 = local_60;
                  if (local_60 == (longlong *)0x0) {
                    plVar31 = (longlong *)FUN_00e8fc40();
                    FUN_00d4ff40();
                    *plVar31 = (longlong)local_78;
                    (*pcVar27)();
                  }
                  local_b0 = '\0';
                  local_b8 = plVar38;
                  local_60 = plVar31;
                  FUN_00d21140();
                  if ((local_b0 != '\0') && (local_b8 != (longlong *)0x0)) {
                    FUN_00d50b20();
                  }
                }
                else {
                  puVar33 = local_70;
                  if (local_70 == (undefined8 *)0x0) {
                    puVar33 = (undefined8 *)FUN_00e8fc40();
                    FUN_00d4ff40();
                    *puVar33 = local_78;
                    (*pcVar27)();
                  }
                  local_b0 = '\0';
                  local_b8 = plVar38;
                  local_70 = puVar33;
                  FUN_00d21140();
                  if ((local_b0 != '\0') && (local_b8 != (longlong *)0x0)) {
                    FUN_00d50b20();
                  }
                }
              }
              else {
                if (local_c0 == (undefined8 *)0x0) {
                  local_c0 = (undefined8 *)FUN_00e8fc40();
                  FUN_00d4ff40();
                  *local_c0 = local_78;
                  (*pcVar27)();
                }
                local_b0 = '\0';
                local_b8 = plVar38;
                FUN_00d21140();
                if ((local_b0 != '\0') && (local_b8 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
              }
            }
            else {
              puVar33 = local_68;
              if (local_68 == (undefined8 *)0x0) {
                puVar33 = (undefined8 *)FUN_00e8fc40();
                FUN_00d4ff40();
                *puVar33 = local_78;
                (*pcVar27)();
              }
              local_b0 = '\0';
              local_b8 = plVar38;
              local_68 = puVar33;
              FUN_00d21140();
              if ((local_b0 != '\0') && (local_b8 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
            }
          }
        }
LAB_01e3d0a0:
        lVar28 = DAT_027f1438;
        lVar36 = lVar36 + 1;
        lVar37 = unaff_RDI[7];
      } while (lVar36 < *(int *)(lVar37 + 0xc));
      if ((local_60 != (longlong *)0x0) && (*(int *)((longlong)local_60 + 0xc) != 0)) {
        if (DAT_027f1438 != 0) {
          FUN_00d50b00();
        }
        (**(code **)(*unaff_RDI + 400))();
        (**(code **)(*(longlong *)*unaff_RSI + 400))();
        (**(code **)(*local_60 + 400))();
        local_190 = local_138;
        local_188 = local_128;
        local_180 = local_118;
        uVar40 = FUN_002bd7b0(&local_180,&local_188,3);
        FUN_00cc7b40(uVar40,&local_b8);
        local_b8 = (longlong *)&DAT_025df260;
        if ((local_80 != '\0') && (local_88 != 0)) {
          FUN_00d50b20();
        }
        local_b8 = (longlong *)&DAT_0253d630;
        if ((local_90 != '\0') && (local_98 != 0)) {
          FUN_00d50b20();
        }
        local_b8 = &DAT_024c5048;
        if ((local_a0 != '\0') && (local_a8 != 0)) {
          FUN_00d50b20();
        }
        if ((local_110 != '\0') && (local_118 != 0)) {
          FUN_00d50b20();
        }
        if ((local_120 != '\0') && (local_128 != 0)) {
          FUN_00d50b20();
        }
        if ((local_130 != '\0') && (local_138 != 0)) {
          FUN_00d50b20();
        }
        if (lVar28 != 0) {
          FUN_00d50b20();
        }
      }
      if (local_68 == (undefined8 *)0x0) {
        local_68 = (undefined8 *)0x0;
        plVar31 = (longlong *)unaff_RDI[6];
        goto joined_r0x01e3d72b;
      }
      local_13c = 0;
      if ((*(int *)((longlong)local_68 + 0xc) == 0) || (bVar9 = true, bVar26)) goto LAB_01e3d702;
    }
    auVar58._8_8_ = 0;
    auVar58._0_8_ = uStack_40;
    _local_48 = auVar58 << 0x40;
    auVar64._8_8_ = 0;
    auVar64._0_8_ = uStack_50;
    _local_58 = auVar64 << 0x40;
    uVar29 = (**(code **)(*unaff_RDI + 0x578))();
    local_78 = (undefined *)CONCAT71(local_78._1_7_,uVar29);
    auVar7._8_8_ = 0;
    auVar7._0_8_ = uStack_40;
    _local_48 = auVar7 << 0x40;
    auVar8._8_8_ = 0;
    auVar8._0_8_ = uStack_50;
    _local_58 = auVar8 << 0x40;
    (**(code **)(*unaff_RDI + 0x570))();
    uVar41 = (**(code **)(*unaff_RDI + 0x4d8))();
    fVar45 = (float)((ulonglong)uVar41 >> 0x20);
    fVar43 = (float)uVar41;
    if (!bVar9) {
      auVar53._0_4_ = fVar44 + fVar39;
      auVar53._4_4_ = fVar46 + fVar42;
      auVar53._8_4_ = fVar50 + in_XMM0_Dc;
      auVar53._12_4_ = fVar52 + in_XMM0_Dd;
      auVar57._4_4_ = fVar46;
      auVar57._0_4_ = fVar44;
      auVar57._8_4_ = fVar50;
      auVar57._12_4_ = fVar52;
      auVar58 = blendps(auVar57,auVar53,2);
      fVar47 = auVar58._0_4_;
      fVar49 = auVar58._4_4_;
      fVar48 = auVar58._8_4_;
      fVar51 = auVar58._12_4_;
      if (DAT_028b9db8 == 0) {
        auVar16._8_8_ = 0;
        auVar16._0_8_ = uStack_40;
        _local_48 = auVar16 << 0x40;
        auVar17._8_8_ = 0;
        auVar17._0_8_ = uStack_50;
        _local_58 = auVar17 << 0x40;
        (**(code **)(*unaff_RDI + 0x4d0))();
        fVar44 = fVar47;
        fVar46 = fVar49;
        fVar50 = fVar48;
        fVar52 = fVar51;
      }
      else {
        if ((*(float *)((longlong)unaff_RDI + 0x10c) == fVar43) &&
           (!NAN(*(float *)((longlong)unaff_RDI + 0x10c)) && !NAN(fVar43))) {
          if ((*(float *)(unaff_RDI + 0x22) == fVar45) &&
             (!NAN(*(float *)(unaff_RDI + 0x22)) && !NAN(fVar45))) {
            if ((*(float *)((longlong)unaff_RDI + 0x114) == fVar44) &&
               (!NAN(*(float *)((longlong)unaff_RDI + 0x114)) && !NAN(fVar44))) {
              fVar44 = *(float *)(unaff_RDI + 0x23);
              if ((fVar44 == auVar53._4_4_) &&
                 (fVar46 = 0.0, fVar50 = 0.0, fVar52 = 0.0, !NAN(fVar44) && !NAN(auVar53._4_4_)))
              goto LAB_01e3d924;
            }
          }
        }
        auVar10._8_8_ = 0;
        auVar10._0_8_ = uStack_40;
        _local_48 = auVar10 << 0x40;
        auVar11._8_8_ = 0;
        auVar11._0_8_ = uStack_50;
        _local_58 = auVar11 << 0x40;
        FUN_00d64850();
        auVar12._8_8_ = 0;
        auVar12._0_8_ = uStack_40;
        _local_48 = auVar12 << 0x40;
        auVar13._8_8_ = 0;
        auVar13._0_8_ = uStack_50;
        _local_58 = auVar13 << 0x40;
        (**(code **)(*unaff_RDI + 0x4d0))(fVar43);
        auVar14._8_8_ = 0;
        auVar14._0_8_ = uStack_40;
        _local_48 = auVar14 << 0x40;
        auVar15._8_8_ = 0;
        auVar15._0_8_ = uStack_50;
        _local_58 = auVar15 << 0x40;
        FUN_00d64910();
        plVar31 = unaff_RDI;
        do {
          plVar34 = plVar31;
          plVar31 = (longlong *)plVar34[6];
        } while (plVar31 != (longlong *)0x0);
        *(undefined1 *)((longlong)plVar34 + 0xac) = 1;
        fVar44 = fVar47;
        fVar46 = fVar49;
        fVar50 = fVar48;
        fVar52 = fVar51;
      }
    }
LAB_01e3d924:
    if (((char)local_13c == '\0') && (0 < *(int *)((longlong)local_68 + 0xc))) {
      if (bVar9) {
        lVar37 = 0;
        fVar43 = fVar44;
        fVar45 = fVar50;
        do {
          plVar31 = *(longlong **)(local_68[2] + lVar37 * 8);
          if (plVar38 == plVar31) {
            if ((!bVar35) && (plVar38 != (longlong *)0x0)) {
              bVar35 = true;
              FUN_00d50b00();
            }
          }
          else {
            if (plVar31 != (longlong *)0x0) {
              FUN_00d50b00();
            }
            if ((bVar35) && (plVar38 != (longlong *)0x0)) {
              FUN_00d50b20();
              bVar35 = true;
              plVar38 = plVar31;
            }
            else {
              bVar35 = true;
              plVar38 = plVar31;
            }
          }
          uVar41 = (**(code **)(*plVar38 + 0x4d8))();
          fVar47 = (float)uVar41;
          fVar49 = (float)((ulonglong)uVar41 >> 0x20) + fVar42;
          auVar59._8_4_ = extraout_XMM0_Dc_01;
          auVar59._0_8_ = uVar41;
          auVar59._12_4_ = extraout_XMM0_Dd_02;
          auVar5._4_4_ = fVar49;
          auVar5._0_4_ = fVar47 + fVar39;
          auVar5._8_4_ = extraout_XMM0_Dc_01 + in_XMM0_Dc;
          auVar5._12_4_ = extraout_XMM0_Dd_02 + in_XMM0_Dd;
          auVar58 = blendps(auVar59,auVar5,2);
          fVar44 = fVar46 - fVar42;
          fVar50 = fVar52 - in_XMM0_Dd;
          auVar63._4_4_ = fVar46;
          auVar63._0_4_ = fVar43;
          auVar63._8_4_ = fVar45;
          auVar63._12_4_ = fVar52;
          auVar4._4_4_ = fVar44;
          auVar4._0_4_ = fVar43 - fVar39;
          auVar4._8_4_ = fVar45 - in_XMM0_Dc;
          auVar4._12_4_ = fVar50;
          auVar64 = blendps(auVar63,auVar4,2);
          if (DAT_028b9db8 == 0) {
            fVar44 = auVar64._0_4_;
            fVar46 = auVar64._4_4_;
            fVar50 = auVar64._8_4_;
            fVar52 = auVar64._12_4_;
            (**(code **)(*plVar38 + 0x4d0))(auVar58._0_4_);
          }
          else {
            if ((*(float *)((longlong)plVar38 + 0x10c) == fVar47) &&
               (!NAN(*(float *)((longlong)plVar38 + 0x10c)) && !NAN(fVar47))) {
              if ((*(float *)(plVar38 + 0x22) == fVar49) &&
                 (!NAN(*(float *)(plVar38 + 0x22)) && !NAN(fVar49))) {
                if ((*(float *)((longlong)plVar38 + 0x114) == fVar43) &&
                   (!NAN(*(float *)((longlong)plVar38 + 0x114)) && !NAN(fVar43))) {
                  if ((*(float *)(plVar38 + 0x23) == fVar44) &&
                     (fVar46 = fVar44, fVar52 = fVar50,
                     !NAN(*(float *)(plVar38 + 0x23)) && !NAN(fVar44))) goto LAB_01e3d972;
                }
              }
            }
            _local_58 = auVar64;
            _local_48 = auVar58;
            FUN_00d64850();
            fVar44 = (float)local_58._0_4_;
            fVar46 = (float)local_58._4_4_;
            fVar50 = (float)uStack_50;
            fVar52 = uStack_50._4_4_;
            (**(code **)(*plVar38 + 0x4d0))(local_48._0_4_);
            FUN_00d64910();
            plVar31 = plVar38;
            do {
              plVar34 = plVar31;
              plVar31 = (longlong *)plVar34[6];
            } while (plVar31 != (longlong *)0x0);
            *(undefined1 *)((longlong)plVar34 + 0xac) = 1;
          }
LAB_01e3d972:
          lVar37 = lVar37 + 1;
          fVar43 = fVar44;
          fVar45 = fVar50;
        } while (lVar37 < *(int *)((longlong)local_68 + 0xc));
      }
      else {
        lVar37 = 0;
        do {
          plVar31 = *(longlong **)(local_68[2] + lVar37 * 8);
          if (plVar38 == plVar31) {
            if ((!bVar35) && (plVar38 != (longlong *)0x0)) {
              bVar35 = true;
              FUN_00d50b00();
            }
          }
          else {
            if (plVar31 != (longlong *)0x0) {
              FUN_00d50b00();
            }
            if ((bVar35) && (plVar38 != (longlong *)0x0)) {
              FUN_00d50b20();
              bVar35 = true;
              plVar38 = plVar31;
            }
            else {
              bVar35 = true;
              plVar38 = plVar31;
            }
          }
          uVar41 = (**(code **)(*plVar38 + 0x4d8))();
          fVar43 = (float)uVar41;
          fVar45 = (float)((ulonglong)uVar41 >> 0x20) + fVar42;
          auVar54._8_4_ = extraout_XMM0_Dc_02;
          auVar54._0_8_ = uVar41;
          auVar54._12_4_ = extraout_XMM0_Dd_03;
          auVar6._4_4_ = fVar45;
          auVar6._0_4_ = fVar43 + fVar39;
          auVar6._8_4_ = extraout_XMM0_Dc_02 + in_XMM0_Dc;
          auVar6._12_4_ = extraout_XMM0_Dd_03 + in_XMM0_Dd;
          auVar58 = blendps(auVar54,auVar6,2);
          if (DAT_028b9db8 == 0) {
            (**(code **)(*plVar38 + 0x4d0))(auVar58._0_4_);
          }
          else {
            if ((*(float *)((longlong)plVar38 + 0x10c) == fVar43) &&
               (!NAN(*(float *)((longlong)plVar38 + 0x10c)) && !NAN(fVar43))) {
              if ((*(float *)(plVar38 + 0x22) == fVar45) &&
                 (!NAN(*(float *)(plVar38 + 0x22)) && !NAN(fVar45))) {
                if ((*(float *)((longlong)plVar38 + 0x114) == fVar44) &&
                   (!NAN(*(float *)((longlong)plVar38 + 0x114)) && !NAN(fVar44))) {
                  if ((*(float *)(plVar38 + 0x23) == fVar46) &&
                     (!NAN(*(float *)(plVar38 + 0x23)) && !NAN(fVar46))) goto LAB_01e3daff;
                }
              }
            }
            local_48._4_4_ = fVar46;
            local_48._0_4_ = fVar44;
            uStack_40._0_4_ = fVar50;
            uStack_40._4_4_ = fVar52;
            _local_58 = auVar58;
            FUN_00d64850();
            fVar44 = (float)local_48._0_4_;
            fVar46 = (float)local_48._4_4_;
            fVar50 = (float)uStack_40;
            fVar52 = uStack_40._4_4_;
            (**(code **)(*plVar38 + 0x4d0))(local_58._0_4_);
            FUN_00d64910();
            plVar31 = plVar38;
            do {
              plVar34 = plVar31;
              plVar31 = (longlong *)plVar34[6];
            } while (plVar31 != (longlong *)0x0);
            *(undefined1 *)((longlong)plVar34 + 0xac) = 1;
          }
LAB_01e3daff:
          lVar37 = lVar37 + 1;
        } while (lVar37 < *(int *)((longlong)local_68 + 0xc));
      }
    }
    if ((local_70 != (undefined8 *)0x0) && (0 < *(int *)((longlong)local_70 + 0xc))) {
      lVar37 = 0;
      do {
        plVar31 = *(longlong **)(local_70[2] + lVar37 * 8);
        if (plVar38 == plVar31) {
          if ((!bVar35) && (plVar38 != (longlong *)0x0)) {
            bVar35 = true;
            FUN_00d50b00();
          }
        }
        else {
          if (plVar31 != (longlong *)0x0) {
            FUN_00d50b00();
          }
          if ((bVar35) && (plVar38 != (longlong *)0x0)) {
            FUN_00d50b20();
            bVar35 = true;
            plVar38 = plVar31;
          }
          else {
            bVar35 = true;
            plVar38 = plVar31;
          }
        }
        uVar41 = (**(code **)(*plVar38 + 0x4d8))();
        fVar43 = (float)((ulonglong)uVar41 >> 0x20);
        auVar55._0_4_ = fVar44 + fVar39;
        auVar55._4_4_ = fVar46 + fVar42;
        auVar55._8_4_ = fVar50 + in_XMM0_Dc;
        auVar55._12_4_ = fVar52 + in_XMM0_Dd;
        auVar60._4_4_ = fVar46;
        auVar60._0_4_ = fVar44;
        auVar60._8_4_ = fVar50;
        auVar60._12_4_ = fVar52;
        auVar58 = blendps(auVar60,auVar55,2);
        if (DAT_028b9db8 == 0) {
          fVar44 = auVar58._0_4_;
          fVar46 = auVar58._4_4_;
          fVar50 = auVar58._8_4_;
          fVar52 = auVar58._12_4_;
          (**(code **)(*plVar38 + 0x4d0))();
        }
        else {
          if ((*(float *)((longlong)plVar38 + 0x10c) == (float)uVar41) &&
             (!NAN(*(float *)((longlong)plVar38 + 0x10c)) && !NAN((float)uVar41))) {
            if ((*(float *)(plVar38 + 0x22) == fVar43) &&
               (!NAN(*(float *)(plVar38 + 0x22)) && !NAN(fVar43))) {
              if ((*(float *)((longlong)plVar38 + 0x114) == fVar44) &&
                 (!NAN(*(float *)((longlong)plVar38 + 0x114)) && !NAN(fVar44))) {
                fVar44 = *(float *)(plVar38 + 0x23);
                fVar46 = 0.0;
                fVar50 = 0.0;
                fVar52 = 0.0;
                if ((fVar44 == auVar55._4_4_) && (!NAN(fVar44) && !NAN(auVar55._4_4_)))
                goto LAB_01e3dc7f;
              }
            }
          }
          uStack_40._0_4_ = (float)extraout_XMM0_Dc_03;
          local_48 = (undefined1  [8])uVar41;
          uStack_40._4_4_ = (float)extraout_XMM0_Dd_04;
          _local_58 = auVar58;
          FUN_00d64850();
          fVar44 = (float)local_58._0_4_;
          fVar46 = (float)local_58._4_4_;
          fVar50 = (float)uStack_50;
          fVar52 = uStack_50._4_4_;
          (**(code **)(*plVar38 + 0x4d0))(local_48._0_4_);
          FUN_00d64910();
          plVar31 = plVar38;
          do {
            plVar34 = plVar31;
            plVar31 = (longlong *)plVar34[6];
          } while (plVar31 != (longlong *)0x0);
          *(undefined1 *)((longlong)plVar34 + 0xac) = 1;
        }
LAB_01e3dc7f:
        lVar37 = lVar37 + 1;
      } while (lVar37 < *(int *)((longlong)local_70 + 0xc));
    }
    auVar18._8_8_ = 0;
    auVar18._0_8_ = uStack_40;
    _local_48 = auVar18 << 0x40;
    auVar19._8_8_ = 0;
    auVar19._0_8_ = uStack_50;
    _local_58 = auVar19 << 0x40;
    (**(code **)(*unaff_RDI + 0x570))();
  }
  else {
    local_60 = (longlong *)0x0;
    local_70 = (undefined8 *)0x0;
    local_68 = (undefined8 *)0x0;
    local_c0 = (undefined8 *)0x0;
    bVar35 = false;
    plVar38 = (longlong *)0x0;
    fVar44 = fVar42;
  }
  pcVar27 = DAT_02572370;
  if ((fVar39 == DAT_0239424c) && (!NAN(fVar39) && !NAN(DAT_0239424c))) {
    auVar22._8_8_ = 0;
    auVar22._0_8_ = uStack_40;
    _local_48 = auVar22 << 0x40;
    auVar23._8_8_ = 0;
    auVar23._0_8_ = uStack_50;
    _local_58 = auVar23 << 0x40;
    goto LAB_01e3e8ff;
  }
  lVar37 = unaff_RDI[7];
  if (*(int *)(lVar37 + 0xc) < 1) {
    auVar24._8_8_ = 0;
    auVar24._0_8_ = uStack_40;
    _local_48 = auVar24 << 0x40;
    auVar25._8_8_ = 0;
    auVar25._0_8_ = uStack_50;
    _local_58 = auVar25 << 0x40;
  }
  else {
    local_1a8 = local_1a8 + (float)local_158._0_4_ + DAT_02390d00;
    lVar36 = 0;
    local_78 = &DAT_02572358;
    auVar20._8_8_ = 0;
    auVar20._0_8_ = uStack_50;
    _local_58 = auVar20 << 0x40;
    auVar21._8_8_ = 0;
    auVar21._0_8_ = uStack_40;
    _local_48 = auVar21 << 0x40;
    do {
      plVar31 = *(longlong **)(*(longlong *)(lVar37 + 0x10) + lVar36 * 8);
      if (plVar38 == plVar31) {
        if ((!bVar35) && (plVar38 != (longlong *)0x0)) {
          bVar35 = true;
          FUN_00d50b00();
        }
      }
      else {
        if (plVar31 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        if ((bVar35) && (plVar38 != (longlong *)0x0)) {
          FUN_00d50b20();
          bVar35 = true;
          plVar38 = plVar31;
        }
        else {
          bVar35 = true;
          plVar38 = plVar31;
        }
      }
      if ((longlong *)*unaff_RSI != plVar38) {
        fVar43 = (float)(**(code **)(*plVar38 + 0x4d8))();
        fVar44 = fVar44 + fVar43 + DAT_02390d00;
        if (fVar44 <= (float)local_158._0_4_) {
          auVar32 = local_58;
          if (local_58 == (undefined1  [8])0x0) {
            auVar32 = (undefined1  [8])FUN_00e8fc40();
            FUN_00d4ff40();
            *(undefined **)auVar32 = local_78;
            (*pcVar27)();
          }
          local_b0 = '\0';
          local_58 = auVar32;
          local_b8 = plVar38;
          FUN_00d21140();
          if ((local_b0 != '\0') && (local_b8 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        else if (local_1a8 <= fVar43) {
          auVar32 = local_48;
          if (local_48 == (undefined1  [8])0x0) {
            auVar32 = (undefined1  [8])FUN_00e8fc40();
            FUN_00d4ff40();
            *(undefined **)auVar32 = local_78;
            (*pcVar27)();
          }
          local_b0 = '\0';
          local_48 = auVar32;
          local_b8 = plVar38;
          FUN_00d21140();
          if ((local_b0 != '\0') && (local_b8 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          uVar30 = (**(code **)(*plVar38 + 0x560))();
          if ((uVar30 & 1) == 0) {
            uVar30 = (**(code **)(*plVar38 + 0x560))();
            if ((uVar30 & 4) == 0) {
              uVar30 = (**(code **)(*plVar38 + 0x560))();
              if ((uVar30 & 2) == 0) {
                plVar31 = local_60;
                if (local_60 == (longlong *)0x0) {
                  plVar31 = (longlong *)FUN_00e8fc40();
                  FUN_00d4ff40();
                  *plVar31 = (longlong)local_78;
                  (*pcVar27)();
                }
                local_b0 = '\0';
                local_b8 = plVar38;
                local_60 = plVar31;
                FUN_00d21140();
                if ((local_b0 != '\0') && (local_b8 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
              }
              else {
                puVar33 = local_70;
                if (local_70 == (undefined8 *)0x0) {
                  puVar33 = (undefined8 *)FUN_00e8fc40();
                  FUN_00d4ff40();
                  *puVar33 = local_78;
                  (*pcVar27)();
                }
                local_b0 = '\0';
                local_b8 = plVar38;
                local_70 = puVar33;
                FUN_00d21140();
                if ((local_b0 != '\0') && (local_b8 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
              }
            }
            else {
              auVar32 = local_58;
              if (local_58 == (undefined1  [8])0x0) {
                auVar32 = (undefined1  [8])FUN_00e8fc40();
                FUN_00d4ff40();
                *(undefined **)auVar32 = local_78;
                (*pcVar27)();
              }
              local_b0 = '\0';
              local_58 = auVar32;
              local_b8 = plVar38;
              FUN_00d21140();
              if ((local_b0 != '\0') && (local_b8 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
            }
          }
          else {
            auVar32 = local_48;
            if (local_48 == (undefined1  [8])0x0) {
              auVar32 = (undefined1  [8])FUN_00e8fc40();
              FUN_00d4ff40();
              *(undefined **)auVar32 = local_78;
              (*pcVar27)();
            }
            local_b0 = '\0';
            local_48 = auVar32;
            local_b8 = plVar38;
            FUN_00d21140();
            if ((local_b0 != '\0') && (local_b8 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
        }
      }
      lVar36 = lVar36 + 1;
      lVar37 = unaff_RDI[7];
    } while (lVar36 < *(int *)(lVar37 + 0xc));
  }
  lVar37 = DAT_027f1438;
  if ((local_60 != (longlong *)0x0) && (*(int *)((longlong)local_60 + 0xc) != 0)) {
    if (DAT_027f1438 != 0) {
      FUN_00d50b00();
    }
    local_1c8 = lVar37;
    local_1c0 = '\x01';
    (**(code **)(*unaff_RDI + 400))();
    (**(code **)(*(longlong *)*unaff_RSI + 400))();
    (**(code **)(*local_60 + 400))();
    local_190 = local_138;
    local_188 = local_128;
    local_180 = local_118;
    uVar40 = FUN_002bd7b0(&local_180,&local_188,3);
    FUN_00cc7b40(uVar40,&local_b8);
    local_b8 = (longlong *)&DAT_025df260;
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    local_b8 = (longlong *)&DAT_0253d630;
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
    local_b8 = &DAT_024c5048;
    if ((local_a0 != '\0') && (local_a8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_110 != '\0') && (local_118 != 0)) {
      FUN_00d50b20();
    }
    if ((local_120 != '\0') && (local_128 != 0)) {
      FUN_00d50b20();
    }
    if ((local_130 != '\0') && (local_138 != 0)) {
      FUN_00d50b20();
    }
    if ((local_1c0 != '\0') && (local_1c8 != 0)) {
      FUN_00d50b20();
    }
  }
  plVar31 = (longlong *)unaff_RDI[6];
  if (plVar31 != (longlong *)0x0) {
    local_160 = 0;
    FUN_00d50b00();
    local_160 = '\x01';
    local_1b8 = *param_2;
    local_1b0 = '\0';
    local_168 = unaff_RDI;
    (**(code **)(*plVar31 + 0x5a8))(fVar39,&local_1b8);
    if ((local_1b0 != '\0') && (local_1b8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_160 != '\0') && (local_168 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  uVar29 = (**(code **)(*unaff_RDI + 0x578))();
  (**(code **)(*unaff_RDI + 0x570))();
  uVar41 = (**(code **)(*unaff_RDI + 0x4d8))();
  fVar45 = (float)((ulonglong)uVar41 >> 0x20);
  fVar43 = (float)uVar41;
  fVar47 = fVar44 + fVar39;
  auVar61._4_4_ = fVar46 + fVar42;
  auVar61._0_4_ = fVar47;
  auVar61._8_4_ = fVar50 + in_XMM0_Dc;
  auVar61._12_4_ = fVar52 + in_XMM0_Dd;
  auVar2._4_4_ = fVar46;
  auVar2._0_4_ = fVar44;
  auVar2._8_4_ = fVar50;
  auVar2._12_4_ = fVar52;
  auVar58 = blendps(auVar61,auVar2,2);
  if (DAT_028b9db8 == 0) {
    fVar46 = auVar58._0_4_;
    fVar45 = auVar58._4_4_;
    fVar52 = auVar58._8_4_;
    fVar47 = auVar58._12_4_;
    (**(code **)(*unaff_RDI + 0x4d0))();
  }
  else {
    if ((*(float *)((longlong)unaff_RDI + 0x10c) == fVar43) &&
       (!NAN(*(float *)((longlong)unaff_RDI + 0x10c)) && !NAN(fVar43))) {
      if ((*(float *)(unaff_RDI + 0x22) == fVar45) &&
         (!NAN(*(float *)(unaff_RDI + 0x22)) && !NAN(fVar45))) {
        if ((*(float *)((longlong)unaff_RDI + 0x114) == fVar47) &&
           (!NAN(*(float *)((longlong)unaff_RDI + 0x114)) && !NAN(fVar47))) {
          if ((*(float *)(unaff_RDI + 0x23) == fVar46) &&
             (fVar45 = fVar46, fVar47 = fVar52, !NAN(*(float *)(unaff_RDI + 0x23)) && !NAN(fVar46)))
          goto LAB_01e3e5c8;
        }
      }
    }
    _local_158 = auVar58;
    FUN_00d64850();
    fVar46 = (float)local_158._0_4_;
    fVar45 = (float)local_158._4_4_;
    fVar52 = fStack_150;
    fVar47 = fStack_14c;
    (**(code **)(*unaff_RDI + 0x4d0))(fVar43);
    FUN_00d64910();
    plVar31 = unaff_RDI;
    do {
      plVar34 = plVar31;
      plVar31 = (longlong *)plVar34[6];
    } while (plVar31 != (longlong *)0x0);
    *(undefined1 *)((longlong)plVar34 + 0xac) = 1;
  }
LAB_01e3e5c8:
  local_1a8 = (float)CONCAT31(local_1a8._1_3_,uVar29);
  if ((local_48 != (undefined1  [8])0x0) && (0 < *(int *)((longlong)local_48 + 0xc))) {
    lVar37 = 0;
    do {
      plVar31 = *(longlong **)(*(longlong *)((longlong)local_48 + 0x10) + lVar37 * 8);
      if (plVar38 == plVar31) {
        if ((!bVar35) && (plVar38 != (longlong *)0x0)) {
          bVar35 = true;
          FUN_00d50b00();
        }
      }
      else {
        if (plVar31 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        if ((bVar35) && (plVar38 != (longlong *)0x0)) {
          FUN_00d50b20();
          bVar35 = true;
          plVar38 = plVar31;
        }
        else {
          bVar35 = true;
          plVar38 = plVar31;
        }
      }
      uVar41 = (**(code **)(*plVar38 + 0x4d8))();
      fVar43 = (float)((ulonglong)uVar41 >> 0x20);
      fVar49 = (float)uVar41 + fVar39;
      auVar56._4_4_ = fVar43 + fVar42;
      auVar56._0_4_ = fVar49;
      auVar56._8_4_ = extraout_XMM0_Dc_04 + in_XMM0_Dc;
      auVar56._12_4_ = extraout_XMM0_Dd_05 + in_XMM0_Dd;
      auVar1._8_4_ = extraout_XMM0_Dc_04;
      auVar1._0_8_ = uVar41;
      auVar1._12_4_ = extraout_XMM0_Dd_05;
      auVar58 = blendps(auVar56,auVar1,2);
      if (DAT_028b9db8 == 0) {
        (**(code **)(*plVar38 + 0x4d0))(auVar58._0_4_);
      }
      else {
        if ((*(float *)((longlong)plVar38 + 0x10c) == fVar49) &&
           (!NAN(*(float *)((longlong)plVar38 + 0x10c)) && !NAN(fVar49))) {
          if ((*(float *)(plVar38 + 0x22) == fVar43) &&
             (!NAN(*(float *)(plVar38 + 0x22)) && !NAN(fVar43))) {
            if ((*(float *)((longlong)plVar38 + 0x114) == fVar46) &&
               (!NAN(*(float *)((longlong)plVar38 + 0x114)) && !NAN(fVar46))) {
              if ((*(float *)(plVar38 + 0x23) == fVar45) &&
                 (!NAN(*(float *)(plVar38 + 0x23)) && !NAN(fVar45))) goto LAB_01e3e5ff;
            }
          }
        }
        _local_158 = auVar58;
        FUN_00d64850();
        (**(code **)(*plVar38 + 0x4d0))(local_158._0_4_);
        FUN_00d64910();
        plVar31 = plVar38;
        do {
          plVar34 = plVar31;
          plVar31 = (longlong *)plVar34[6];
        } while (plVar31 != (longlong *)0x0);
        *(undefined1 *)((longlong)plVar34 + 0xac) = 1;
      }
LAB_01e3e5ff:
      lVar37 = lVar37 + 1;
    } while (lVar37 < *(int *)((longlong)local_48 + 0xc));
  }
  if ((local_70 != (undefined8 *)0x0) && (0 < *(int *)((longlong)local_70 + 0xc))) {
    lVar37 = 0;
    do {
      plVar31 = *(longlong **)(local_70[2] + lVar37 * 8);
      if (plVar38 == plVar31) {
        if ((!bVar35) && (plVar38 != (longlong *)0x0)) {
          bVar35 = true;
          FUN_00d50b00();
        }
      }
      else {
        if (plVar31 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        if ((bVar35) && (plVar38 != (longlong *)0x0)) {
          FUN_00d50b20();
          bVar35 = true;
          plVar38 = plVar31;
        }
        else {
          bVar35 = true;
          plVar38 = plVar31;
        }
      }
      uVar41 = (**(code **)(*plVar38 + 0x4d8))();
      fVar49 = (float)((ulonglong)uVar41 >> 0x20);
      fVar43 = (float)uVar41;
      fVar44 = fVar46 + fVar39;
      auVar62._4_4_ = fVar45 + fVar42;
      auVar62._0_4_ = fVar44;
      auVar62._8_4_ = fVar52 + in_XMM0_Dc;
      auVar62._12_4_ = fVar47 + in_XMM0_Dd;
      auVar3._4_4_ = fVar45;
      auVar3._0_4_ = fVar46;
      auVar3._8_4_ = fVar52;
      auVar3._12_4_ = fVar47;
      auVar58 = blendps(auVar62,auVar3,2);
      if (DAT_028b9db8 == 0) {
        fVar45 = auVar58._0_4_;
        fVar49 = auVar58._4_4_;
        fVar47 = auVar58._8_4_;
        fVar44 = auVar58._12_4_;
        (**(code **)(*plVar38 + 0x4d0))();
      }
      else {
        if ((*(float *)((longlong)plVar38 + 0x10c) == fVar43) &&
           (!NAN(*(float *)((longlong)plVar38 + 0x10c)) && !NAN(fVar43))) {
          if ((*(float *)(plVar38 + 0x22) == fVar49) &&
             (!NAN(*(float *)(plVar38 + 0x22)) && !NAN(fVar49))) {
            if ((*(float *)((longlong)plVar38 + 0x114) == fVar44) &&
               (!NAN(*(float *)((longlong)plVar38 + 0x114)) && !NAN(fVar44))) {
              if ((*(float *)(plVar38 + 0x23) == fVar45) &&
                 (fVar49 = fVar45, fVar44 = fVar47, !NAN(*(float *)(plVar38 + 0x23)) && !NAN(fVar45)
                 )) goto LAB_01e3e78f;
            }
          }
        }
        _local_158 = auVar58;
        FUN_00d64850();
        fVar45 = (float)local_158._0_4_;
        fVar49 = (float)local_158._4_4_;
        fVar47 = fStack_150;
        fVar44 = fStack_14c;
        (**(code **)(*plVar38 + 0x4d0))(fVar43);
        FUN_00d64910();
        plVar31 = plVar38;
        do {
          plVar34 = plVar31;
          plVar31 = (longlong *)plVar34[6];
        } while (plVar31 != (longlong *)0x0);
        *(undefined1 *)((longlong)plVar34 + 0xac) = 1;
      }
LAB_01e3e78f:
      lVar37 = lVar37 + 1;
      fVar46 = fVar45;
      fVar45 = fVar49;
      fVar52 = fVar47;
      fVar47 = fVar44;
    } while (lVar37 < *(int *)((longlong)local_70 + 0xc));
  }
  (**(code **)(*unaff_RDI + 0x570))();
LAB_01e3e8ff:
  if (local_60 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (local_70 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  if (local_68 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  if (local_c0 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  if (local_48 != (undefined1  [8])0x0) {
    FUN_00d50b20();
  }
  if (local_58 != (undefined1  [8])0x0) {
    FUN_00d50b20();
  }
  if ((bVar35) && (plVar38 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  return;
}


