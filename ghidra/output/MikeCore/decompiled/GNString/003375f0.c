// Function: FUN_003375f0
// Address: 003375f0
// Size: 3668 bytes
// Class: GNString
// String references:
//   "GNString"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_003375f0(void)

{
  longlong *plVar1;
  undefined1 auVar2 [16];
  code *pcVar3;
  longlong *plVar4;
  char cVar5;
  bool bVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  ulonglong uVar9;
  longlong **pplVar10;
  longlong lVar11;
  int iVar12;
  longlong *unaff_RDI;
  uint uVar13;
  longlong lVar14;
  longlong lVar15;
  float fVar16;
  float extraout_XMM0_Da;
  undefined8 uVar17;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  uint extraout_XMM0_Db;
  undefined8 extraout_XMM0_Qb_02;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined8 local_168;
  undefined8 uStack_160;
  longlong local_140;
  char local_138;
  longlong local_130;
  char local_128;
  longlong *local_120;
  char local_118;
  longlong *local_110;
  char local_108;
  longlong local_100;
  char local_f8;
  longlong *local_f0;
  char local_e8;
  float local_e0;
  float local_dc;
  float local_d8;
  undefined4 uStack_d4;
  undefined8 uStack_d0;
  longlong *local_c8;
  char local_c0;
  longlong local_b8;
  char local_b0;
  longlong *local_a8;
  char local_a0;
  longlong local_98;
  char local_90;
  undefined8 local_88;
  uint uStack_80;
  uint uStack_7c;
  longlong *local_78;
  char local_70;
  longlong *local_68;
  undefined8 local_60;
  int local_58;
  longlong *local_50;
  char local_48;
  longlong *local_40;
  longlong *local_38;
  undefined8 extraout_XMM0_Qb_00;
  undefined8 extraout_XMM0_Qb_01;
  undefined8 extraout_XMM0_Qb_03;
  
  puVar7 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar7 = &DAT_02572358;
  pcVar3 = DAT_02572370;
  (*DAT_02572370)();
  plVar8 = (longlong *)FUN_00e8fc40();
  FUN_00d4ff40();
  *plVar8 = (longlong)&DAT_02572358;
  (*pcVar3)();
  local_40 = plVar8;
  (**(code **)(*unaff_RDI + 0x4a0))();
  plVar8 = local_78;
  if (local_70 == '\0') {
    if (local_78 != (longlong *)0x0) {
      FUN_00d50b00();
      if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_003376a3;
    }
  }
  else if (local_78 != (longlong *)0x0) {
LAB_003376a3:
    local_70 = '\0';
    local_78 = (longlong *)0x0;
    local_68 = plVar8;
    local_60 = 0xffffffff;
    local_58 = 0;
    local_60._4_4_ = 0;
    local_38 = plVar8;
    while( true ) {
      if (local_60._4_4_ != 0) {
        if (local_60._4_4_ < 1) {
          iVar12 = -local_60._4_4_;
        }
        else {
          iVar12 = (int)local_60 - local_60._4_4_;
          local_60 = CONCAT44(local_60._4_4_,iVar12);
          FUN_00d23690();
          local_58 = local_58 + local_60._4_4_;
          iVar12 = 0;
        }
        local_60 = CONCAT44(iVar12,(int)local_60);
      }
      lVar14 = (longlong)(int)local_60;
      iVar12 = (int)local_60 + 1;
      local_60 = CONCAT44(local_60._4_4_,iVar12);
      if (*(int *)((longlong)local_68 + 0xc) <= iVar12) break;
      plVar8 = *(longlong **)(local_68[2] + 8 + lVar14 * 8);
      local_78 = plVar8;
      FUN_000f5df0();
      pplVar10 = (longlong **)&DAT_02802688;
      if (plVar8 != (longlong *)0x0) {
        (**(code **)(*plVar8 + 0x360))();
        cVar5 = FUN_00e85ea0();
        pplVar10 = &local_78;
        if (cVar5 == '\0') {
          pplVar10 = (longlong **)&DAT_02802688;
        }
      }
      plVar8 = *pplVar10;
      if (*(char *)(pplVar10 + 1) == '\0') {
        if (plVar8 != (longlong *)0x0) {
          FUN_00d50b00();
          goto LAB_00337791;
        }
      }
      else {
        *(undefined1 *)(pplVar10 + 1) = 0;
        if (plVar8 != (longlong *)0x0) {
LAB_00337791:
          FUN_01e4ec80();
          plVar1 = local_50;
          if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (plVar1 != (longlong *)0x0) {
            uVar17 = FUN_01e4ec80();
            lVar14 = DAT_02702950;
            if (DAT_02702950 != 0) {
              uVar17 = FUN_00d50b00();
            }
            local_140 = lVar14;
            local_138 = '\x01';
            FUN_000175c0(uVar17,&local_140);
            plVar1 = local_50;
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
            pplVar10 = (longlong **)&DAT_02802688;
            if (plVar1 != (longlong *)0x0) {
              (**(code **)(*plVar1 + 0x360))();
              cVar5 = FUN_00e85ea0();
              pplVar10 = &local_50;
              if (cVar5 == '\0') {
                pplVar10 = (longlong **)&DAT_02802688;
              }
            }
            local_88 = *pplVar10;
            if (*(char *)(pplVar10 + 1) == '\0') {
              if (local_88 != (longlong *)0x0) {
                FUN_00d50b00();
              }
            }
            else {
              *(undefined1 *)(pplVar10 + 1) = 0;
            }
            if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_138 != '\0') && (local_140 != 0)) {
              FUN_00d50b20();
            }
            if ((local_90 != '\0') && (local_98 != 0)) {
              FUN_00d50b20();
            }
            uVar17 = FUN_01e4ec80();
            lVar14 = DAT_02702968;
            if (DAT_02702968 != 0) {
              uVar17 = FUN_00d50b00();
            }
            local_130 = lVar14;
            local_128 = '\x01';
            FUN_000175c0(uVar17,&local_130);
            plVar1 = local_50;
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
            pplVar10 = (longlong **)&DAT_02802688;
            if (plVar1 != (longlong *)0x0) {
              (**(code **)(*plVar1 + 0x360))();
              cVar5 = FUN_00e85ea0();
              pplVar10 = &local_50;
              if (cVar5 == '\0') {
                pplVar10 = (longlong **)&DAT_02802688;
              }
            }
            plVar1 = *pplVar10;
            if (*(char *)(pplVar10 + 1) == '\0') {
              if (plVar1 != (longlong *)0x0) {
                FUN_00d50b00();
              }
            }
            else {
              *(undefined1 *)(pplVar10 + 1) = 0;
            }
            if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_128 != '\0') && (local_130 != 0)) {
              FUN_00d50b20();
            }
            if ((local_90 != '\0') && (local_98 != 0)) {
              FUN_00d50b20();
            }
            if ((local_88 != (longlong *)0x0) && (plVar1 != (longlong *)0x0)) {
              local_118 = '\0';
              local_110 = local_88;
              local_108 = '\0';
              local_100 = 0;
              local_f8 = '\0';
              local_120 = plVar1;
              FUN_00d31230(&local_100,&local_110);
              plVar4 = local_50;
              local_c0 = 0;
              if (local_48 == '\0') {
                if (local_50 != (longlong *)0x0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_48 = '\0';
              }
              local_c0 = '\x01';
              local_c8 = plVar4;
              (**(code **)(*plVar8 + 0x958))();
              if ((local_c0 != '\0') && (local_c8 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              if ((local_f8 != '\0') && (local_100 != 0)) {
                FUN_00d50b20();
              }
              if ((local_108 != '\0') && (local_110 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              if ((local_118 != '\0') && (local_120 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              local_48 = '\0';
              local_50 = plVar8;
              FUN_00d21140();
              if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
            }
            if (plVar1 != (longlong *)0x0) {
              FUN_00d50b20();
            }
            if (local_88 != (longlong *)0x0) {
              FUN_00d50b20();
            }
          }
          FUN_00d50b20();
        }
      }
    }
    FUN_000a9680();
    FUN_00d50b20();
  }
  iVar12 = *(int *)((longlong)puVar7 + 0xc);
  plVar8 = local_40;
  if (iVar12 == 0) {
LAB_0033848a:
    if (plVar8 != (longlong *)0x0) goto LAB_0033849a;
  }
  else {
    if (0 < iVar12) {
      local_e0 = DAT_023b27b8 / (float)iVar12;
      local_dc = (DAT_02390d38 - (float)iVar12 * local_e0) * DAT_0239011c + DAT_02390d00;
      auVar25 = ZEXT416(_DAT_023945e0 & (uint)(DAT_02390d34 + local_e0)) | _DAT_023945f0;
      auVar25._0_4_ = auVar25._0_4_ + DAT_02390d34 + local_e0;
      auVar25 = roundss(ZEXT816(0),auVar25,0xb);
      auVar25 = blendps(auVar25,_DAT_023b27c0,0xe);
      lVar14 = 0;
      do {
        plVar8 = *(longlong **)(puVar7[2] + lVar14 * 8);
        fVar16 = (float)(int)lVar14 * local_e0 + local_dc;
        auVar26 = ZEXT416((uint)fVar16 & _DAT_023945e0) | _DAT_023945f0;
        auVar26._0_4_ = auVar26._0_4_ + fVar16;
        auVar26 = roundss(ZEXT816(0),auVar26,0xb);
        auVar26 = blendps(auVar26,_DAT_023b27d0,0xe);
        local_168 = auVar25._0_8_;
        uStack_160 = auVar25._8_8_;
        (**(code **)(*plVar8 + 0x4d0))(auVar26._0_8_);
        (**(code **)(*plVar8 + 0x640))();
        local_88 = local_78;
        if ((((local_70 == '\0') && (local_78 != (longlong *)0x0)) &&
            (FUN_00d50b00(), local_70 != '\0')) && (local_78 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        (**(code **)(*plVar8 + 0x9e0))();
        plVar1 = local_78;
        if (local_70 == '\0') {
          if (local_78 == (longlong *)0x0) goto LAB_00337e40;
          FUN_00d50b00();
          if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
LAB_00337e90:
          local_38 = plVar1;
        }
        else {
          local_38 = local_78;
          if (local_78 == (longlong *)0x0) {
LAB_00337e40:
            (**(code **)(*local_88 + 0x370))();
            local_38 = local_78;
            if (local_78 == (longlong *)0x0) goto LAB_00337e90;
            if (((local_70 == '\0') && (FUN_00d50b00(), local_70 != '\0')) &&
               (local_78 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
        }
        uVar17 = FUN_01e3f820();
        local_d8 = (float)uVar17;
        uStack_d4 = (undefined4)((ulonglong)uVar17 >> 0x20);
        (**(code **)(*plVar8 + 0xa68))();
        (**(code **)(*local_88 + 0x548))();
        local_d8 = (float)local_168;
        uStack_d4 = (undefined4)((ulonglong)local_168 >> 0x20);
        uStack_d0 = uStack_160;
        (**(code **)(*plVar8 + 0x960))();
        plVar8 = local_38;
        local_b8 = local_98;
        local_b0 = 0;
        if (local_90 == '\0') {
          if (local_98 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_90 = '\0';
        }
        local_b0 = '\x01';
        uVar17 = FUN_01d43d10();
        fVar16 = (float)uVar17 + DAT_02390d2c;
        auVar27._0_4_ = (uint)fVar16 & _DAT_023945e0;
        auVar27._4_4_ = (uint)((ulonglong)uVar17 >> 0x20) & _UNK_023945e4;
        auVar27._8_4_ = (uint)extraout_XMM0_Qb & _UNK_023945e8;
        auVar27._12_4_ = (uint)((ulonglong)extraout_XMM0_Qb >> 0x20) & _UNK_023945ec;
        auVar28._4_12_ = SUB1612(auVar27 | _DAT_023945f0,4);
        auVar28._0_4_ = SUB164(auVar27 | _DAT_023945f0,0) + fVar16;
        auVar26 = roundss(auVar28,auVar28,0xb);
        auVar2._4_4_ = uStack_d4;
        auVar2._0_4_ = local_d8;
        auVar2._8_8_ = uStack_d0;
        auVar18._4_12_ = auVar2._4_12_;
        auVar18._0_4_ = local_d8 - auVar26._0_4_;
        FUN_00d46dc0(auVar18._0_8_);
        plVar1 = local_50;
        if (local_48 == '\0') {
          if (local_50 != (longlong *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_48 = '\0';
        }
        local_78 = plVar1;
        local_70 = '\0';
        FUN_00d21140();
        if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar1 != (longlong *)0x0) {
          FUN_00d50b20();
        }
        if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_b0 != '\0') && (local_b8 != 0)) {
          FUN_00d50b20();
        }
        if ((local_90 != '\0') && (local_98 != 0)) {
          FUN_00d50b20();
        }
        if (plVar8 != (longlong *)0x0) {
          FUN_00d50b20();
        }
        FUN_00d50b20();
        lVar14 = lVar14 + 1;
      } while (lVar14 < *(int *)((longlong)puVar7 + 0xc));
    }
    plVar8 = local_40;
    if (local_40 == (longlong *)0x0) goto LAB_003384a7;
    local_70 = '\0';
    local_78 = (longlong *)0x0;
    local_68 = local_40;
    local_60 = 0xffffffff;
    local_58 = 0;
    local_60._4_4_ = 0;
    local_38 = (longlong *)((ulonglong)local_38 & 0xffffffff00000000);
    while( true ) {
      if (local_60._4_4_ != 0) {
        if (local_60._4_4_ < 1) {
          iVar12 = -local_60._4_4_;
        }
        else {
          iVar12 = (int)local_60 - local_60._4_4_;
          local_60 = CONCAT44(local_60._4_4_,iVar12);
          FUN_00d23690();
          local_58 = local_58 + local_60._4_4_;
          iVar12 = 0;
        }
        local_60 = CONCAT44(iVar12,(int)local_60);
      }
      lVar14 = (longlong)(int)local_60;
      iVar12 = (int)local_60 + 1;
      local_60 = CONCAT44(local_60._4_4_,iVar12);
      if (*(int *)((longlong)local_68 + 0xc) <= iVar12) break;
      local_78 = *(longlong **)(local_68[2] + 8 + lVar14 * 8);
      fVar16 = (float)FUN_00d459e0();
      if (fVar16 < 0.0) {
        fVar16 = (float)FUN_00d459e0();
        local_38 = (longlong *)CONCAT44(local_38._4_4_,local_38._0_4_ - fVar16);
      }
    }
    FUN_00136b80();
    if ((local_38._0_4_ == 0.0) && (!NAN(local_38._0_4_))) goto LAB_0033848a;
    uVar9 = (ulonglong)*(uint *)((longlong)plVar8 + 0xc);
    local_d8 = 0.0;
    while (0 < (int)uVar9) {
      lVar15 = 1;
      lVar14 = 0;
      bVar6 = false;
      do {
        plVar1 = *(longlong **)(plVar8[2] + lVar14 * 8);
        if (plVar1 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        local_88 = plVar1;
        auVar19._0_8_ = FUN_00d459e0();
        auVar19._8_8_ = extraout_XMM0_Qb_00;
        if ((0.0 < local_38._0_4_) && (0.0 < (float)auVar19._0_8_)) {
          local_f0 = local_88;
          local_e8 = '\0';
          auVar20._4_12_ = auVar19._4_12_;
          auVar20._0_4_ = (float)auVar19._0_8_ + DAT_02390d00;
          uVar17 = FUN_00d46dc0(auVar20._0_8_);
          plVar8 = local_78;
          local_a0 = 0;
          if (local_70 == '\0') {
            if (local_78 != (longlong *)0x0) {
              uVar17 = FUN_00d50b00();
            }
          }
          else {
            local_70 = '\0';
          }
          local_a0 = '\x01';
          local_a8 = plVar8;
          FUN_00338bc0(uVar17,&local_a8);
          if ((local_a0 != '\0') && (local_a8 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_e8 != '\0') && (local_f0 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          local_38 = (longlong *)CONCAT44(local_38._4_4_,local_38._0_4_ + DAT_02390d00);
          (**(code **)(**(longlong **)(puVar7[2] + lVar14 * 8) + 0x4d8))();
          (**(code **)(**(longlong **)(puVar7[2] + lVar14 * 8) + 0x4d0))();
          for (lVar11 = lVar15; lVar11 < *(int *)((longlong)puVar7 + 0xc); lVar11 = lVar11 + 1) {
            auVar21._0_8_ = (**(code **)(**(longlong **)(puVar7[2] + lVar11 * 8) + 0x4d8))();
            auVar21._8_8_ = extraout_XMM0_Qb_01;
            auVar22._4_12_ = auVar21._4_12_;
            auVar22._0_4_ = (float)auVar21._0_8_ + DAT_02390d00;
            (**(code **)(**(longlong **)(puVar7[2] + lVar11 * 8) + 0x4d0))(auVar22._0_8_);
          }
          local_d8 = local_d8 + DAT_02390124;
          bVar6 = true;
          plVar8 = local_40;
        }
        if (local_88 != (longlong *)0x0) {
          FUN_00d50b20();
        }
        lVar14 = lVar14 + 1;
        uVar9 = (ulonglong)*(int *)((longlong)plVar8 + 0xc);
        lVar15 = lVar15 + 1;
      } while (lVar14 < (longlong)uVar9);
      if (((local_38._0_4_ == DAT_0239424c) && (!NAN(local_38._0_4_) && !NAN(DAT_0239424c))) ||
         (!bVar6)) break;
    }
    local_70 = '\0';
    local_78 = (longlong *)0x0;
    local_58 = 0;
    local_60 = 0;
    local_68 = plVar8;
    if (0 < *(int *)((longlong)plVar8 + 0xc)) {
      uVar13 = 0;
      lVar14 = 1;
      do {
        uVar9 = (ulonglong)uVar13;
        local_78 = *(longlong **)(plVar8[2] + uVar9 * 8);
        FUN_00d459e0();
        if ((0.0 < local_d8) && (extraout_XMM0_Da < 0.0)) {
          uStack_80 = (uint)extraout_XMM0_Qb_02;
          uStack_7c = (uint)((ulonglong)extraout_XMM0_Qb_02 >> 0x20);
          local_88._0_4_ = extraout_XMM0_Da;
          local_88._4_4_ = extraout_XMM0_Db;
          (**(code **)(**(longlong **)(puVar7[2] + uVar9 * 8) + 0x4d8))();
          uStack_80 = uStack_80 ^ _UNK_023945e8;
          uStack_7c = uStack_7c ^ _UNK_023945ec;
          fVar16 = (float)((uint)(float)local_88 ^ _DAT_023945e0);
          if (local_d8 <= (float)((uint)(float)local_88 ^ _DAT_023945e0)) {
            fVar16 = local_d8;
          }
          local_88 = (longlong *)CONCAT44(local_88._4_4_ ^ _UNK_023945e4,fVar16);
          (**(code **)(**(longlong **)(puVar7[2] + uVar9 * 8) + 0x4d0))();
          local_d8 = local_d8 - (float)local_88;
          for (lVar15 = lVar14; plVar8 = local_40, lVar15 < *(int *)((longlong)puVar7 + 0xc);
              lVar15 = lVar15 + 1) {
            auVar23._0_8_ = (**(code **)(**(longlong **)(puVar7[2] + lVar15 * 8) + 0x4d8))();
            auVar23._8_8_ = extraout_XMM0_Qb_03;
            auVar24._4_12_ = auVar23._4_12_;
            auVar24._0_4_ = (float)auVar23._0_8_ + (float)local_88;
            (**(code **)(**(longlong **)(puVar7[2] + lVar15 * 8) + 0x4d0))(auVar24._0_8_);
          }
        }
        uVar13 = uVar13 + 1;
        local_60 = CONCAT44(local_60._4_4_,uVar13);
        lVar14 = lVar14 + 1;
      } while ((int)uVar13 < *(int *)((longlong)plVar8 + 0xc));
    }
    FUN_00136b80();
LAB_0033849a:
    FUN_00d50b20();
  }
  if (puVar7 == (undefined8 *)0x0) {
    return;
  }
LAB_003384a7:
  FUN_00d50b20();
  return;
}


