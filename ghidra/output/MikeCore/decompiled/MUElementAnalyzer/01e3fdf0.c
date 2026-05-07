// Function: FUN_01e3fdf0
// Address: 01e3fdf0
// Size: 3550 bytes
// Class: MUElementAnalyzer
// String references:
//   "No sharedSizeScope in place for %s\n"


/* WARNING: Removing unreachable block (ram,0x01e409ee) */
/* WARNING: Removing unreachable block (ram,0x01e409cf) */
/* WARNING: Removing unreachable block (ram,0x01e409e1) */
/* WARNING: Removing unreachable block (ram,0x01e408f1) */
/* WARNING: Type propagation algorithm not settling */

void FUN_01e3fdf0(undefined8 param_1)

{
  float fVar1;
  uint uVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  longlong lVar10;
  uint uVar11;
  ulonglong uVar12;
  int iVar13;
  longlong *unaff_RDI;
  bool bVar14;
  float fVar15;
  float fVar24;
  undefined4 in_XMM0_Dc;
  undefined4 in_XMM0_Dd;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined8 uVar16;
  undefined1 auVar23 [16];
  undefined8 extraout_XMM0_Qb_01;
  undefined8 extraout_XMM0_Qb_02;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  longlong local_120;
  char local_118;
  longlong *local_110;
  char local_108;
  longlong local_100;
  char local_f8;
  longlong local_f0;
  char local_e8;
  longlong *local_e0;
  uint local_d8;
  undefined8 local_d4;
  undefined1 local_c8 [8];
  float fStack_c0;
  float fStack_bc;
  undefined1 local_b8 [8];
  float fStack_b0;
  float fStack_ac;
  undefined1 local_a8 [8];
  undefined8 uStack_a0;
  undefined1 local_98 [8];
  undefined8 uStack_90;
  undefined1 local_88 [8];
  float fStack_80;
  float fStack_7c;
  longlong *in_stack_ffffffffffffff88;
  longlong *plVar29;
  longlong local_70;
  longlong *local_68;
  undefined8 local_60;
  int local_58;
  longlong *local_50;
  undefined1 local_48 [8];
  float fStack_40;
  float fStack_3c;
  char local_38 [8];
  
  fVar24 = (float)((ulonglong)param_1 >> 0x20);
  fVar15 = (float)param_1;
  if ((*(float *)((longlong)unaff_RDI + 0xfc) == fVar15) &&
     (!NAN(*(float *)((longlong)unaff_RDI + 0xfc)) && !NAN(fVar15))) {
    if ((*(float *)(unaff_RDI + 0x20) == fVar24) &&
       (!NAN(*(float *)(unaff_RDI + 0x20)) && !NAN(fVar24))) {
      return;
    }
  }
  fVar1 = *(float *)((longlong)unaff_RDI + 0x104);
  if ((!NAN(fVar1)) && (fVar1 = *(float *)(unaff_RDI + 0x21), !NAN(fVar1))) {
    return;
  }
  auVar18 = ZEXT416((uint)fVar1);
  fStack_40 = (float)in_XMM0_Dc;
  local_48 = (undefined1  [8])param_1;
  fStack_3c = (float)in_XMM0_Dd;
  *(float *)((longlong)unaff_RDI + 0xfc) = fVar15;
  *(float *)(unaff_RDI + 0x20) = fVar24;
  if ((DAT_028b9dc0 == (undefined8 *)0x0) || (DAT_028b9dc9 == '\0')) {
    FUN_00e8cb50();
    if (DAT_028b9dc0 == (undefined8 *)0x0) {
      puVar9 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar9 = &DAT_02572358;
      (*DAT_02572370)();
      bVar14 = DAT_028b9dc0 == (undefined8 *)0x0;
      DAT_028b9dc0 = puVar9;
      if (((bVar14) || (FUN_00d50b20(), DAT_028b9dc0 != (undefined8 *)0x0)) &&
         (DAT_028b9dc8 == '\0')) {
        DAT_028b9dc8 = '\x01';
        FUN_00e8cb90();
      }
      DAT_028b9dc9 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028b9dc9 = '\x01';
      FUN_00e8cb70();
    }
  }
  if ((char)unaff_RDI[0x1e] != '\0') {
    in_stack_ffffffffffffff88 = (longlong *)FUN_00e8fc40();
    FUN_00022d50();
    (**(code **)(*in_stack_ffffffffffffff88 + 0x18))();
    local_70._0_1_ = '\0';
    FUN_00d21140();
    if (((char)local_70 != '\0') && (in_stack_ffffffffffffff88 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  FUN_00d23340();
  local_f0 = CONCAT71(local_f0._1_7_,(char)local_70);
  plVar29 = &local_70;
  if ((char)local_70 == '\0') {
    plVar29 = &local_f0;
  }
  *(undefined1 *)plVar29 = 0;
  local_50 = in_stack_ffffffffffffff88;
  if (((char)local_70 != '\0') && (in_stack_ffffffffffffff88 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_f0 == '\0') && (local_50 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  if ((((NAN(*(float *)(unaff_RDI + 0x1b))) || (NAN(*(float *)(unaff_RDI + 0x1c)))) ||
      (NAN(*(float *)((longlong)unaff_RDI + 0xdc)))) ||
     (NAN(*(float *)((longlong)unaff_RDI + 0xe4)))) {
    local_a8 = (undefined1  [8])(**(code **)(*unaff_RDI + 0x600))();
    uStack_a0 = extraout_XMM0_Qb_01;
    fVar15 = *(float *)(unaff_RDI + 0x1b);
    if (NAN(fVar15) || NAN(fVar15)) {
      auVar17 = ZEXT416(*(uint *)((longlong)unaff_RDI + 0xdc));
      auVar19 = ZEXT416((uint)*(float *)(unaff_RDI + 0x1c));
      if (!NAN(*(float *)(unaff_RDI + 0x1c))) goto LAB_01e40aeb;
LAB_01e40a3c:
      _local_c8 = auVar18;
      if (!NAN(auVar17._0_4_)) goto LAB_01e40b08;
LAB_01e40a45:
      fVar15 = *(float *)((longlong)unaff_RDI + 0xe4);
      auVar18 = auVar19;
    }
    else {
      _local_a8 = blendps(_local_a8,ZEXT416((uint)fVar15),1);
      auVar17 = ZEXT416(*(uint *)((longlong)unaff_RDI + 0xdc));
      auVar19 = ZEXT416((uint)*(float *)(unaff_RDI + 0x1c));
      if (NAN(*(float *)(unaff_RDI + 0x1c))) goto LAB_01e40a3c;
LAB_01e40aeb:
      _local_c8 = blendps(auVar18,auVar19,1);
      if (NAN(auVar17._0_4_)) goto LAB_01e40a45;
LAB_01e40b08:
      _local_a8 = insertps(_local_a8,auVar17,0x10);
      fVar15 = *(float *)((longlong)unaff_RDI + 0xe4);
      auVar18 = _local_a8;
    }
    if (!NAN(fVar15)) {
      auVar18 = insertps(_local_c8,ZEXT416((uint)fVar15),0x10);
      _local_c8 = auVar18;
    }
  }
  else {
    uStack_a0 = 0;
    local_a8 = (undefined1  [8])unaff_RDI[0x1b];
    _fStack_c0 = 0;
    local_c8 = (undefined1  [8])unaff_RDI[0x1c];
  }
  uVar6 = local_a8._4_4_;
  local_88._0_4_ = local_48._0_4_;
  local_88._4_4_ = local_48._4_4_;
  fStack_80 = fStack_40;
  fStack_7c = fStack_3c;
  if (!NAN((float)local_a8._4_4_) && !NAN((float)local_a8._4_4_)) {
    local_88._0_4_ = (float)local_48._0_4_ - (float)local_a8._0_4_;
    local_88._4_4_ = (float)local_48._4_4_ - (float)local_a8._4_4_;
    fStack_80 = fStack_40 - (float)uStack_a0;
    fStack_7c = fStack_3c - uStack_a0._4_4_;
  }
  _local_88 = blendps(_local_88,_local_48,0xd);
  uVar4 = local_c8._4_4_;
  if (!NAN((float)local_c8._4_4_)) {
    local_88._4_4_ = (float)local_88._4_4_ - (float)local_c8._4_4_;
    local_88._0_4_ = (float)local_88._0_4_ - (float)local_c8._0_4_;
    fStack_80 = fStack_80 - fStack_c0;
    fStack_7c = fStack_7c - fStack_bc;
  }
  _local_48 = blendps(_local_48,_local_88,2);
  if (!NAN((float)local_a8._0_4_)) {
    local_48._4_4_ = (float)local_48._4_4_ - (float)local_a8._4_4_;
    local_48._0_4_ = (float)local_48._0_4_ - (float)local_a8._0_4_;
    fStack_40 = fStack_40 - (float)uStack_a0;
    fStack_3c = fStack_3c - uStack_a0._4_4_;
  }
  _local_48 = blendps(_local_48,_local_88,2);
  if (!NAN((float)local_c8._0_4_)) {
    local_48._4_4_ = (float)local_48._4_4_ - (float)local_c8._4_4_;
    local_48._0_4_ = (float)local_48._0_4_ - (float)local_c8._0_4_;
    fStack_40 = fStack_40 - fStack_c0;
    fStack_3c = fStack_3c - fStack_bc;
  }
  if (((NAN(*(float *)(unaff_RDI + 0x19))) || (NAN(*(float *)(unaff_RDI + 0x1a)))) ||
     ((NAN(*(float *)((longlong)unaff_RDI + 0xcc)) || (NAN(*(float *)((longlong)unaff_RDI + 0xd4))))
     )) {
    local_98 = (undefined1  [8])(**(code **)(*unaff_RDI + 0x5f8))();
    uStack_90 = extraout_XMM0_Qb_02;
    fVar15 = *(float *)(unaff_RDI + 0x19);
    if (NAN(fVar15) || NAN(fVar15)) {
      auVar17 = ZEXT416(*(uint *)((longlong)unaff_RDI + 0xcc));
      fVar15 = *(float *)(unaff_RDI + 0x1a);
      if (!NAN(fVar15)) goto LAB_01e40b73;
LAB_01e40a9f:
      _local_b8 = auVar18;
      if (!NAN(auVar17._0_4_)) goto LAB_01e40b90;
LAB_01e40aa8:
      fVar15 = *(float *)((longlong)unaff_RDI + 0xd4);
    }
    else {
      _local_98 = blendps(_local_98,ZEXT416((uint)fVar15),1);
      auVar17 = ZEXT416(*(uint *)((longlong)unaff_RDI + 0xcc));
      fVar15 = *(float *)(unaff_RDI + 0x1a);
      if (NAN(fVar15)) goto LAB_01e40a9f;
LAB_01e40b73:
      _local_b8 = blendps(auVar18,ZEXT416((uint)fVar15),1);
      if (NAN(auVar17._0_4_)) goto LAB_01e40aa8;
LAB_01e40b90:
      _local_98 = insertps(_local_98,auVar17,0x10);
      fVar15 = *(float *)((longlong)unaff_RDI + 0xd4);
    }
    if (!NAN(fVar15)) {
      _local_b8 = insertps(_local_b8,ZEXT416((uint)fVar15),0x10);
    }
  }
  else {
    uStack_90 = 0;
    local_98 = (undefined1  [8])unaff_RDI[0x19];
    _fStack_b0 = 0;
    local_b8 = (undefined1  [8])unaff_RDI[0x1a];
  }
  auVar17 = blendps(_local_48,_local_88,2);
  uVar7 = local_98._4_4_;
  auVar18 = auVar17;
  if (!NAN((float)local_98._4_4_) && !NAN((float)local_98._4_4_)) {
    local_48._0_4_ = auVar17._0_4_;
    local_48._4_4_ = auVar17._4_4_;
    fStack_40 = auVar17._8_4_;
    fStack_3c = auVar17._12_4_;
    auVar18._0_4_ = (float)local_48._0_4_ - (float)local_98._0_4_;
    auVar18._4_4_ = (float)local_48._4_4_ - (float)local_98._4_4_;
    auVar18._8_4_ = fStack_40 - (float)uStack_90;
    auVar18._12_4_ = fStack_3c - uStack_90._4_4_;
  }
  auVar18 = blendps(auVar18,auVar17,0xd);
  uVar5 = local_b8._4_4_;
  auVar19 = auVar18;
  if (!NAN((float)local_b8._4_4_)) {
    auVar19._0_4_ = auVar18._0_4_ - (float)local_b8._0_4_;
    auVar19._4_4_ = auVar18._4_4_ - (float)local_b8._4_4_;
    auVar19._8_4_ = auVar18._8_4_ - fStack_b0;
    auVar19._12_4_ = auVar18._12_4_ - fStack_ac;
  }
  _local_48 = blendps(auVar17,auVar19,2);
  if (!NAN((float)local_98._0_4_)) {
    local_48._4_4_ = (float)local_48._4_4_ - (float)local_98._4_4_;
    local_48._0_4_ = (float)local_48._0_4_ - (float)local_98._0_4_;
    fStack_40 = fStack_40 - (float)uStack_90;
    fStack_3c = fStack_3c - uStack_90._4_4_;
  }
  _local_48 = blendps(_local_48,auVar19,2);
  if (!NAN((float)local_b8._0_4_)) {
    local_48._4_4_ = (float)local_48._4_4_ - (float)local_b8._4_4_;
    local_48._0_4_ = (float)local_48._0_4_ - (float)local_b8._0_4_;
    fStack_40 = fStack_40 - fStack_b0;
    fStack_3c = fStack_3c - fStack_ac;
  }
  auVar17 = blendps(auVar19,_local_48,0xd);
  fVar15 = *(float *)(unaff_RDI + 0x18);
  auVar18 = auVar17;
  if (fVar15 < local_48._0_4_) {
    auVar18 = blendps(auVar17,ZEXT416((uint)fVar15),1);
  }
  if (NAN(fVar15)) {
    auVar18 = auVar17;
  }
  fVar15 = *(float *)((longlong)unaff_RDI + 0xc4);
  _local_88 = auVar18;
  if (fVar15 < auVar18._4_4_) {
    _local_88 = insertps(auVar18,ZEXT416((uint)fVar15),0x10);
  }
  if (NAN(fVar15)) {
    _local_88 = auVar18;
  }
  auVar17._0_8_ = (**(code **)(*unaff_RDI + 0x5d0))();
  auVar17._8_8_ = extraout_XMM0_Qb;
  if ((char)unaff_RDI[0x1e] != '\0') {
    FUN_00ca1380();
    local_f0 = CONCAT71(local_f0._1_7_,(char)local_70);
    plVar29 = &local_70;
    if ((char)local_70 == '\0') {
      plVar29 = &local_f0;
    }
    *(undefined1 *)plVar29 = 0;
    if (((char)local_70 != '\0') && (in_stack_ffffffffffffff88 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((char)local_f0 == '\0') {
      if (in_stack_ffffffffffffff88 != (longlong *)0x0) {
        FUN_00d50b00();
        goto LAB_01e402bc;
      }
    }
    else if (in_stack_ffffffffffffff88 != (longlong *)0x0) {
LAB_01e402bc:
      local_70._0_1_ = '\0';
      plVar29 = (longlong *)0x0;
      local_60 = 0xffffffff;
      local_58 = 0;
      local_60._4_4_ = 0;
      local_68 = in_stack_ffffffffffffff88;
      while( true ) {
        if (local_60._4_4_ != 0) {
          if (local_60._4_4_ < 1) {
            iVar13 = -local_60._4_4_;
          }
          else {
            iVar13 = (int)local_60 - local_60._4_4_;
            local_60 = CONCAT44(local_60._4_4_,iVar13);
            FUN_00d23690();
            local_58 = local_58 + local_60._4_4_;
            iVar13 = 0;
          }
          local_60 = CONCAT44(iVar13,(int)local_60);
        }
        lVar10 = (longlong)(int)local_60;
        iVar13 = (int)local_60 + 1;
        local_60 = CONCAT44(local_60._4_4_,iVar13);
        if (*(int *)((longlong)local_68 + 0xc) <= iVar13) break;
        plVar29 = *(longlong **)(local_68[2] + 8 + lVar10 * 8);
        if (1 < *(int *)((longlong)plVar29 + 0xc)) {
          local_e8 = '\0';
          local_f0 = 0;
          local_d4 = 0;
          uVar2 = *(uint *)((longlong)plVar29 + 0xc);
          if ((int)uVar2 < 1) {
            uVar12 = 0;
            local_48._0_4_ = 0.0;
            fStack_40 = 0.0;
            fStack_3c = 0.0;
LAB_01e4042e:
            local_d8 = (uint)uVar12;
            local_48._4_4_ = 0;
          }
          else {
            lVar10 = plVar29[2];
            uVar11 = uVar2 & 3;
            if (uVar2 - 1 < 3) {
              _local_48 = ZEXT816(0);
              uVar12 = 0;
            }
            else {
              fVar15 = 0.0;
              uVar12 = 0;
              do {
                fVar24 = *(float *)(*(longlong *)(lVar10 + uVar12 * 8) + 0xf4);
                if (fVar15 <= fVar24) {
                  fVar15 = fVar24;
                }
                fVar24 = *(float *)(*(longlong *)(lVar10 + 8 + uVar12 * 8) + 0xf4);
                if (fVar15 <= fVar24) {
                  fVar15 = fVar24;
                }
                fVar24 = *(float *)(*(longlong *)(lVar10 + 0x10 + uVar12 * 8) + 0xf4);
                if (fVar15 <= fVar24) {
                  fVar15 = fVar24;
                }
                local_f0 = *(longlong *)(lVar10 + 0x18 + uVar12 * 8);
                if (fVar15 <= *(float *)(local_f0 + 0xf4)) {
                  fVar15 = *(float *)(local_f0 + 0xf4);
                }
                uVar12 = uVar12 + 4;
              } while ((uVar2 & 0xfffffffc) != (uint)uVar12);
              _local_48 = ZEXT416((uint)fVar15);
            }
            local_d8 = (uint)uVar12;
            if (uVar11 != 0) {
              uVar12 = uVar12 & 0xffffffff;
              do {
                local_f0 = *(longlong *)(lVar10 + uVar12 * 8);
                if ((float)local_48._0_4_ <= *(float *)(local_f0 + 0xf4)) {
                  local_48._0_4_ = *(float *)(local_f0 + 0xf4);
                }
                uVar12 = uVar12 + 1;
                uVar11 = uVar11 - 1;
              } while (uVar11 != 0);
              goto LAB_01e4042e;
            }
          }
          local_e0 = plVar29;
          FUN_000a9680();
          if (plVar29 != (longlong *)0x0) {
            local_e8 = '\0';
            local_f0 = 0;
            local_d4 = 0;
            if (*(int *)((longlong)plVar29 + 0xc) < 1) {
              local_d8 = 0;
            }
            else {
              uVar12 = 0;
              do {
                local_f0 = *(longlong *)(plVar29[2] + uVar12 * 8);
                if (DAT_0239424c < local_48._0_4_ - *(float *)(local_f0 + 0xf4)) {
                  plVar8 = *(longlong **)(local_f0 + 0x30);
                  while ((plVar3 = plVar8, plVar3 != (longlong *)0x0 && (plVar3 != unaff_RDI))) {
                    *(undefined8 *)((longlong)plVar3 + 0xf4) = 0x7fc000007fc00000;
                    *(undefined8 *)((longlong)plVar3 + 0xfc) = 0x7fc000007fc00000;
                    *(undefined8 *)((longlong)plVar3 + 0x104) = 0x7fc000007fc00000;
                    plVar8 = (longlong *)plVar3[6];
                    if ((longlong *)plVar3[6] == plVar3) {
                      plVar8 = plVar3;
                    }
                  }
                }
                auVar18 = insertps(_local_48,*(undefined4 *)(local_f0 + 0xf8),0x10);
                *(longlong *)(local_f0 + 0x104) = auVar18._0_8_;
                local_d8 = (int)uVar12 + 1;
                uVar12 = (ulonglong)local_d8;
              } while ((int)local_d8 < *(int *)((longlong)plVar29 + 0xc));
            }
            local_e0 = plVar29;
            FUN_000a9680();
          }
        }
      }
      FUN_01e4efd0();
      FUN_00d50b20();
      in_stack_ffffffffffffff88 = plVar29;
    }
    FUN_00d23740();
    FUN_00d23340();
    plVar29 = &local_f0;
    if ((char)local_70 != '\0') {
      plVar29 = &local_70;
    }
    local_f0 = CONCAT71(local_f0._1_7_,(char)local_70);
    *(undefined1 *)plVar29 = 0;
    if (((char)local_70 != '\0') && (in_stack_ffffffffffffff88 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (local_50 == in_stack_ffffffffffffff88) {
      plVar29 = local_50;
      if (((char)local_f0 != '\0') && (in_stack_ffffffffffffff88 != (longlong *)0x0)) {
        FUN_00d50b20();
        plVar29 = local_50;
      }
    }
    else if ((char)local_f0 == '\0') {
      if (in_stack_ffffffffffffff88 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      plVar29 = in_stack_ffffffffffffff88;
      if (local_50 != (longlong *)0x0) {
        local_50 = in_stack_ffffffffffffff88;
        FUN_00d50b20();
        plVar29 = local_50;
      }
    }
    else {
      plVar29 = in_stack_ffffffffffffff88;
      if (local_50 != (longlong *)0x0) {
        FUN_00d50b20();
        plVar29 = in_stack_ffffffffffffff88;
      }
    }
    local_50 = plVar29;
    auVar17._0_8_ = (**(code **)(*unaff_RDI + 0x5d0))();
    auVar17._8_8_ = extraout_XMM0_Qb_00;
  }
  auVar25 = auVar17;
  if (!NAN((float)uVar7) && !NAN((float)uVar7)) {
    auVar25._0_4_ = (float)local_98._0_4_ + auVar17._0_4_;
    auVar25._4_4_ = (float)local_98._4_4_ + auVar17._4_4_;
    auVar25._8_4_ = (float)uStack_90 + auVar17._8_4_;
    auVar25._12_4_ = uStack_90._4_4_ + auVar17._12_4_;
  }
  auVar18 = blendps(auVar25,auVar17,0xd);
  if (NAN((float)uVar5) || NAN((float)uVar5)) {
    auVar17 = blendps(auVar17,auVar18,2);
    auVar26 = auVar18;
    if (!NAN((float)local_98._0_4_)) goto LAB_01e4064e;
LAB_01e4060b:
    auVar18 = blendps(auVar17,auVar26,2);
    if (!NAN((float)local_b8._0_4_)) goto LAB_01e40667;
LAB_01e4061d:
    auVar17 = blendps(auVar26,auVar18,0xd);
    auVar25 = ZEXT416((uint)*(float *)(unaff_RDI + 0x17));
    auVar19 = auVar17;
    if (auVar18._0_4_ < *(float *)(unaff_RDI + 0x17)) {
LAB_01e40681:
      auVar17 = blendps(auVar19,auVar25,1);
    }
  }
  else {
    auVar26._0_4_ = auVar18._0_4_ + (float)local_b8._0_4_;
    auVar26._4_4_ = auVar18._4_4_ + (float)local_b8._4_4_;
    auVar26._8_4_ = auVar18._8_4_ + fStack_b0;
    auVar26._12_4_ = auVar18._12_4_ + fStack_ac;
    auVar17 = blendps(auVar17,auVar26,2);
    if (NAN((float)local_98._0_4_)) goto LAB_01e4060b;
LAB_01e4064e:
    auVar20._0_4_ = auVar17._0_4_ + (float)local_98._0_4_;
    auVar20._4_4_ = auVar17._4_4_ + (float)local_98._4_4_;
    auVar20._8_4_ = auVar17._8_4_ + (float)uStack_90;
    auVar20._12_4_ = auVar17._12_4_ + uStack_90._4_4_;
    auVar18 = blendps(auVar20,auVar26,2);
    if (NAN((float)local_b8._0_4_)) goto LAB_01e4061d;
LAB_01e40667:
    auVar21._0_4_ = auVar18._0_4_ + (float)local_b8._0_4_;
    auVar21._4_4_ = auVar18._4_4_ + (float)local_b8._4_4_;
    auVar21._8_4_ = auVar18._8_4_ + fStack_b0;
    auVar21._12_4_ = auVar18._12_4_ + fStack_ac;
    auVar17 = blendps(auVar26,auVar21,0xd);
    auVar25 = ZEXT416((uint)*(float *)(unaff_RDI + 0x17));
    auVar19 = auVar17;
    if (auVar21._0_4_ < *(float *)(unaff_RDI + 0x17)) goto LAB_01e40681;
  }
  fVar15 = *(float *)((longlong)unaff_RDI + 0xbc);
  if (NAN(auVar25._0_4_) || NAN(auVar25._0_4_)) {
    auVar17 = auVar19;
    if (fVar15 <= auVar19._4_4_) goto LAB_01e406f1;
LAB_01e406a6:
    auVar18 = insertps(auVar17,ZEXT416((uint)fVar15),0x10);
    if (NAN(fVar15)) goto LAB_01e406f6;
LAB_01e406b1:
    fVar15 = *(float *)(unaff_RDI + 0x18);
    auVar17 = auVar18;
    if (fVar15 < auVar18._0_4_) goto LAB_01e40709;
LAB_01e406c1:
    auVar17 = auVar18;
    if (!NAN(fVar15)) goto LAB_01e40714;
LAB_01e406c6:
    auVar18 = auVar17;
    auVar19 = ZEXT416((uint)*(float *)((longlong)unaff_RDI + 0xc4));
    auVar17 = auVar18;
    if (auVar18._4_4_ <= *(float *)((longlong)unaff_RDI + 0xc4)) goto LAB_01e40728;
  }
  else {
    if (auVar17._4_4_ < fVar15) goto LAB_01e406a6;
LAB_01e406f1:
    auVar18 = auVar17;
    if (!NAN(fVar15)) goto LAB_01e406b1;
LAB_01e406f6:
    fVar15 = *(float *)(unaff_RDI + 0x18);
    auVar18 = auVar17;
    if (auVar17._0_4_ <= fVar15) goto LAB_01e406c1;
LAB_01e40709:
    auVar18 = blendps(auVar17,ZEXT416((uint)fVar15),1);
    if (NAN(fVar15)) goto LAB_01e406c6;
LAB_01e40714:
    auVar19 = ZEXT416((uint)*(float *)((longlong)unaff_RDI + 0xc4));
    auVar17 = auVar18;
    if (auVar18._4_4_ <= *(float *)((longlong)unaff_RDI + 0xc4)) goto LAB_01e40728;
  }
  auVar18 = insertps(auVar17,auVar19,0x10);
LAB_01e40728:
  if (NAN(auVar19._0_4_)) {
    auVar18 = auVar17;
  }
  auVar27 = auVar18;
  if (!NAN((float)uVar6) && !NAN((float)uVar6)) {
    auVar27._0_4_ = (float)local_a8._0_4_ + auVar18._0_4_;
    auVar27._4_4_ = (float)local_a8._4_4_ + auVar18._4_4_;
    auVar27._8_4_ = (float)uStack_a0 + auVar18._8_4_;
    auVar27._12_4_ = uStack_a0._4_4_ + auVar18._12_4_;
  }
  auVar17 = blendps(auVar27,auVar18,0xd);
  if (NAN((float)uVar4) || NAN((float)uVar4)) {
    auVar18 = blendps(auVar18,auVar17,2);
  }
  else {
    auVar28._0_4_ = auVar17._0_4_ + (float)local_c8._0_4_;
    auVar28._4_4_ = auVar17._4_4_ + (float)local_c8._4_4_;
    auVar28._8_4_ = auVar17._8_4_ + fStack_c0;
    auVar28._12_4_ = auVar17._12_4_ + fStack_bc;
    auVar18 = blendps(auVar18,auVar28,2);
    auVar17 = auVar28;
  }
  if (NAN((float)local_a8._0_4_)) {
    auVar18 = blendps(auVar18,auVar17,2);
  }
  else {
    auVar23._0_4_ = auVar18._0_4_ + (float)local_a8._0_4_;
    auVar23._4_4_ = auVar18._4_4_ + (float)local_a8._4_4_;
    auVar23._8_4_ = auVar18._8_4_ + (float)uStack_a0;
    auVar23._12_4_ = auVar18._12_4_ + uStack_a0._4_4_;
    auVar18 = blendps(auVar23,auVar17,2);
  }
  auVar22 = auVar18;
  if (!NAN((float)local_c8._0_4_)) {
    auVar22._0_4_ = auVar18._0_4_ + (float)local_c8._0_4_;
    auVar22._4_4_ = auVar18._4_4_ + (float)local_c8._4_4_;
    auVar22._8_4_ = auVar18._8_4_ + fStack_c0;
    auVar22._12_4_ = auVar18._12_4_ + fStack_bc;
  }
  auVar18 = blendps(auVar22,auVar17,2);
  *(longlong *)((longlong)unaff_RDI + 0xf4) = auVar18._0_8_;
  lVar10 = unaff_RDI[0x1d];
  if (lVar10 != 0) {
    uVar16 = FUN_00d50b00();
    if (local_50 == (longlong *)0x0) {
      FUN_00d8b910();
      FUN_00e82990();
    }
    else {
      local_118 = '\0';
      local_120 = lVar10;
      FUN_01e40ed0(uVar16,&local_120);
      plVar29 = &local_70;
      if ((char)local_70 == '\0') {
        plVar29 = (longlong *)local_38;
      }
      local_38[0] = (char)local_70;
      *(char *)plVar29 = '\0';
      if (((char)local_70 != '\0') && (in_stack_ffffffffffffff88 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_118 != '\0') && (local_120 != 0)) {
        FUN_00d50b20();
      }
      if (in_stack_ffffffffffffff88 == (longlong *)0x0) {
        (**(code **)(*unaff_RDI + 0x4a0))();
        uVar16 = FUN_01e40f80();
        if ((char)local_70 != '\0') {
          local_70._0_1_ = '\0';
        }
        if ((local_e8 != '\0') && (local_f0 != 0)) {
          uVar16 = FUN_00d50b20();
        }
        local_108 = '\0';
        local_f8 = '\0';
        local_110 = in_stack_ffffffffffffff88;
        local_100 = lVar10;
        FUN_01e41020(uVar16,&local_100);
        if ((local_f8 != '\0') && (local_100 != 0)) {
          FUN_00d50b20();
        }
        if ((local_108 != '\0') && (local_110 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      FUN_00d50b00();
      local_70._0_1_ = '\0';
      FUN_00d21140();
      if (((char)local_70 != '\0') && (unaff_RDI != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
      if ((local_38[0] != '\0') && (in_stack_ffffffffffffff88 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    FUN_00d50b20();
  }
  if (local_50 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}


