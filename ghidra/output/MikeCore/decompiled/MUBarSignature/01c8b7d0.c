// Function: FUN_01c8b7d0
// Address: 01c8b7d0
// Size: 4387 bytes
// Class: MUBarSignature


/* WARNING: Removing unreachable block (ram,0x01c8c50a) */
/* WARNING: Removing unreachable block (ram,0x01c8c516) */
/* WARNING: Removing unreachable block (ram,0x01c8b8d8) */
/* WARNING: Removing unreachable block (ram,0x01c8b8e4) */
/* WARNING: Removing unreachable block (ram,0x01c8ba0c) */
/* WARNING: Removing unreachable block (ram,0x01c8ba18) */
/* WARNING: Removing unreachable block (ram,0x01c8bb67) */
/* WARNING: Removing unreachable block (ram,0x01c8bb73) */
/* WARNING: Removing unreachable block (ram,0x01c8c4c8) */
/* WARNING: Removing unreachable block (ram,0x01c8c4d4) */
/* WARNING: Removing unreachable block (ram,0x01c8c6d2) */
/* WARNING: Removing unreachable block (ram,0x01c8c6df) */
/* WARNING: Removing unreachable block (ram,0x01c8bff6) */
/* WARNING: Removing unreachable block (ram,0x01c8bfff) */
/* WARNING: Removing unreachable block (ram,0x01c8be37) */
/* WARNING: Removing unreachable block (ram,0x01c8be44) */
/* WARNING: Removing unreachable block (ram,0x01c8bd79) */
/* WARNING: Removing unreachable block (ram,0x01c8bd86) */
/* WARNING: Removing unreachable block (ram,0x01c8b85b) */
/* WARNING: Removing unreachable block (ram,0x01c8b864) */
/* WARNING: Removing unreachable block (ram,0x01c8bdd8) */
/* WARNING: Removing unreachable block (ram,0x01c8bde5) */
/* WARNING: Removing unreachable block (ram,0x01c8b9d1) */
/* WARNING: Removing unreachable block (ram,0x01c8b9da) */
/* WARNING: Removing unreachable block (ram,0x01c8c69c) */
/* WARNING: Removing unreachable block (ram,0x01c8c6a9) */
/* WARNING: Removing unreachable block (ram,0x01c8c551) */
/* WARNING: Removing unreachable block (ram,0x01c8c55d) */
/* WARNING: Removing unreachable block (ram,0x01c8ba87) */
/* WARNING: Removing unreachable block (ram,0x01c8bab0) */
/* WARNING: Removing unreachable block (ram,0x01c8ba89) */
/* WARNING: Removing unreachable block (ram,0x01c8bab2) */
/* WARNING: Removing unreachable block (ram,0x01c8bbc7) */
/* WARNING: Removing unreachable block (ram,0x01c8bbf0) */
/* WARNING: Removing unreachable block (ram,0x01c8bbc9) */
/* WARNING: Removing unreachable block (ram,0x01c8bbf2) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01c8b7d0(longlong *param_1,undefined8 param_2)

{
  pthread_key_t pVar1;
  longlong *plVar2;
  ulonglong uVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  void *pvVar8;
  longlong lVar9;
  pthread_key_t pVar10;
  longlong *in_RCX;
  longlong *plVar11;
  undefined1 *puVar12;
  undefined8 *unaff_RSI;
  longlong *unaff_RDI;
  bool bVar13;
  undefined4 uVar14;
  float fVar15;
  undefined8 in_XMM0_Qb;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined8 extraout_XMM0_Qb_00;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined8 extraout_XMM0_Qb_01;
  undefined8 in_XMM1_Qb;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  longlong local_160;
  char local_158;
  undefined1 local_150 [8];
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined1 local_138 [4];
  int iStack_134;
  longlong *local_130;
  undefined4 local_124;
  longlong *local_120;
  char local_118;
  longlong *local_110;
  char local_108;
  longlong *local_100;
  char local_f8;
  longlong *local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined1 local_d8 [8];
  undefined8 uStack_d0;
  undefined4 local_c4;
  longlong *local_c0;
  longlong *local_b8;
  undefined8 local_b0;
  longlong *local_a8;
  longlong *local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  longlong *local_80;
  longlong *local_70;
  char local_68;
  undefined8 local_60;
  float local_58;
  undefined4 uStack_54;
  int local_48;
  
  uStack_d0 = in_XMM1_Qb;
  local_d8 = (undefined1  [8])param_2;
  local_e8 = param_1;
  uStack_e0 = in_XMM0_Qb;
  FUN_01d48370();
  (**(code **)(*(longlong *)*unaff_RSI + 0x390))();
  (**(code **)(*unaff_RDI + 0x640))();
  local_a8 = local_60;
  if ((local_58._0_1_ == '\0') && (local_60 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  plVar11 = (longlong *)unaff_RDI[0x29];
  if (plVar11 != (longlong *)0x0) {
    FUN_00d50b00();
  }
  local_80 = (longlong *)unaff_RDI[0x2d];
  local_130 = plVar11;
  if (local_80 == (longlong *)0x0) {
    FUN_01cfc6a0();
    local_80 = local_60;
    in_RCX = local_60;
    if (local_60 == (longlong *)0x0) {
      local_80 = (longlong *)0x0;
      local_b0 = 0;
    }
    else {
      local_b0 = CONCAT71((int7)((ulonglong)local_60 >> 8),1);
      if (local_58._0_1_ == '\0') {
        FUN_00d50b00();
      }
    }
  }
  else {
    uVar6 = FUN_00d50b00();
    local_b0 = CONCAT71((int7)((ulonglong)uVar6 >> 8),1);
  }
  pVar10 = (pthread_key_t)in_RCX;
  FUN_01d488d0();
  plVar11 = (longlong *)*unaff_RSI;
  FUN_00d05530();
  (**(code **)(*plVar11 + 0x3b0))();
  FUN_01d48b40();
  plVar11 = (longlong *)unaff_RDI[0x2e];
  if (plVar11 == (longlong *)0x0) {
    (**(code **)(*local_a8 + 0x3a0))();
    local_c0 = local_60;
    if ((local_60 != (longlong *)0x0) && (plVar11 = local_c0, local_58._0_1_ == '\0')) {
      FUN_00d50b00();
      plVar11 = local_c0;
    }
  }
  else {
    FUN_00d50b00();
  }
  local_c0 = plVar11;
  plVar11 = (longlong *)unaff_RDI[0x2f];
  if (plVar11 == (longlong *)0x0) {
    (**(code **)(*local_a8 + 0x3a8))();
    local_b8 = local_60;
    if ((local_60 != (longlong *)0x0) && (plVar11 = local_b8, local_58._0_1_ == '\0')) {
      FUN_00d50b00();
      plVar11 = local_b8;
    }
  }
  else {
    FUN_00d50b00();
  }
  local_b8 = plVar11;
  local_d8._0_4_ = (float)local_d8._0_4_ + (float)local_e8;
  local_d8._4_4_ = (float)local_d8._4_4_ + local_e8._4_4_;
  uStack_d0._0_4_ = (float)uStack_d0 + (float)uStack_e0;
  uStack_d0._4_4_ = uStack_d0._4_4_ + uStack_e0._4_4_;
  auVar20._4_12_ = local_d8._4_12_;
  auVar20._0_4_ = (float)local_d8._0_4_ + DAT_02390d00;
  auVar24 = auVar20;
  (**(code **)(*local_130 + 0x368))();
  local_a0 = local_60;
  if ((local_58._0_1_ == '\0') && (local_60 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  FUN_01d488d0();
  plVar11 = local_a0;
  local_148 = local_e8._4_4_;
  uStack_144 = local_e8._4_4_;
  uStack_140 = uStack_e0._4_4_;
  uStack_13c = uStack_e0._4_4_;
  auVar16._4_4_ = local_d8._4_4_;
  auVar16._0_4_ = local_d8._4_4_;
  auVar16._8_4_ = uStack_d0._4_4_;
  auVar16._12_4_ = uStack_d0._4_4_;
  auVar17._4_12_ = auVar16._4_12_;
  auVar17._0_4_ = (float)local_d8._4_4_ + DAT_02390d00;
  _local_d8 = auVar17;
  if (local_a0 != (longlong *)0x0) {
    local_58 = (float)((uint)local_58 & 0xffffff00);
    local_60 = (longlong *)0x0;
    local_48 = -1;
    while( true ) {
      lVar7 = (longlong)local_48;
      local_48 = local_48 + 1;
      if (*(int *)((longlong)plVar11 + 0xc) <= local_48) break;
      local_60 = *(longlong **)(plVar11[2] + 8 + lVar7 * 8);
      iVar5 = (**(code **)(*local_60 + 0x380))();
      if (iVar5 == 0) {
        plVar2 = (longlong *)*unaff_RSI;
        uVar14 = (**(code **)(*local_60 + 0x368))();
        local_98 = CONCAT44(local_98._4_4_,uVar14);
        (**(code **)(*local_60 + 0x368))();
        auVar24._4_4_ = uStack_144;
        auVar24._0_4_ = (float)local_148;
        auVar24._8_4_ = uStack_140;
        auVar24._12_4_ = uStack_13c;
        (**(code **)(*plVar2 + 0x3e0))();
      }
    }
    FUN_01a01420();
    pVar10 = (pthread_key_t)plVar11;
  }
  FUN_01d488d0();
  plVar11 = local_a0;
  if (local_a0 != (longlong *)0x0) {
    local_58 = (float)((uint)local_58 & 0xffffff00);
    local_60 = (longlong *)0x0;
    local_48 = -1;
    while( true ) {
      lVar7 = (longlong)local_48;
      local_48 = local_48 + 1;
      if (*(int *)((longlong)plVar11 + 0xc) <= local_48) break;
      local_60 = *(longlong **)(plVar11[2] + 8 + lVar7 * 8);
      iVar5 = (**(code **)(*local_60 + 0x380))();
      if (iVar5 != 0) {
        plVar2 = (longlong *)*unaff_RSI;
        uVar14 = (**(code **)(*local_60 + 0x368))();
        local_98 = CONCAT44(local_98._4_4_,uVar14);
        (**(code **)(*local_60 + 0x368))();
        auVar24._4_4_ = uStack_144;
        auVar24._0_4_ = (float)local_148;
        auVar24._8_4_ = uStack_140;
        auVar24._12_4_ = uStack_13c;
        (**(code **)(*plVar2 + 0x3e0))();
      }
    }
    FUN_01a01420();
    pVar10 = (pthread_key_t)plVar11;
  }
  lVar7 = unaff_RDI[0x2b];
  if (lVar7 != 0) {
    FUN_00d50b00();
  }
  pvVar8 = _pthread_getspecific(pVar10);
  pVar1 = (pthread_key_t)lVar7;
  if ((pvVar8 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
    pVar10 = pVar1;
  }
  iVar5 = FUN_016c2ea0();
  if (0 < iVar5) {
    (**(code **)(*unaff_RDI + 0x640))();
    (**(code **)(*local_70 + 0x370))();
    local_118 = 0;
    if (local_58._0_1_ == '\0') {
      if (local_60 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_58 = (float)((uint)local_58 & 0xffffff00);
    }
    local_118 = '\x01';
    local_120 = local_60;
    FUN_01d48a10();
    if ((local_118 != '\0') && (local_120 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_58._0_1_ != '\0') && (local_60 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    pvVar8 = _pthread_getspecific(pVar10);
    if ((pvVar8 == (void *)0x0) || (lVar9 = FUN_00e8b990(), lVar9 == 0)) {
      plVar11 = (longlong *)unaff_RDI[0x28];
    }
    else {
      plVar11 = (longlong *)unaff_RDI[0x28];
    }
    if (plVar11 != (longlong *)0x0) {
      FUN_00d50b00();
    }
    local_98 = (**(code **)(*plVar11 + 0x388))(DAT_02390d00 + (float)local_e8);
    FUN_0123fd00();
    pVar10 = 0;
    uVar6 = FUN_016cb9d0(local_98,1);
    FUN_00d50b20();
    local_c4 = 0xffffffff;
    local_124 = 0xffffffff;
    pvVar8 = _pthread_getspecific(pVar10);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    puVar12 = local_150;
    FUN_016ca840(puVar12,uVar6,local_138,&local_c4);
    pVar10 = (pthread_key_t)puVar12;
    if ((local_58._0_1_ == '\0') && (local_60 != (longlong *)0x0)) {
      FUN_00d50b00();
    }
    plVar11 = (longlong *)unaff_RDI[0x28];
    if (plVar11 != (longlong *)0x0) {
      FUN_00d50b00();
    }
    pvVar8 = _pthread_getspecific(pVar10);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_016c98e0();
    local_98 = (**(code **)(*plVar11 + 0x390))();
    uStack_90 = extraout_XMM0_Qb;
    FUN_00d50b20();
    (**(code **)(*unaff_RDI + 0x640))();
    (**(code **)(*local_70 + 0x490))(0,0x11,0);
    local_f0 = local_60;
    if (local_58._0_1_ == '\0') {
      if (local_60 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_58 = (float)((uint)local_58 & 0xffffff00);
    }
    if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    (**(code **)(*unaff_RDI + 0x640))();
    puVar12 = (undefined1 *)((longlong)&MACH_HEADER.magic + 1);
    (**(code **)(*local_70 + 0x490))(1,0x11,0);
    local_e8 = local_60;
    if (local_58._0_1_ == '\0') {
      if (local_60 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_58 = (float)((uint)local_58 & 0xffffff00);
    }
    if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    auVar23._0_4_ = auVar20._0_4_ + DAT_02390124;
    auVar23._4_12_ = auVar20._4_12_;
    auVar18._0_4_ = _DAT_023945e0 & (uint)(float)local_98;
    auVar18._4_4_ = _UNK_023945e4 & local_98._4_4_;
    auVar18._8_4_ = _UNK_023945e8 & (uint)uStack_90;
    auVar18._12_4_ = _UNK_023945ec & uStack_90._4_4_;
    auVar19._4_12_ = SUB1612(auVar18 | _DAT_023945f0,4);
    auVar19._0_4_ = SUB164(auVar18 | _DAT_023945f0,0) + (float)local_98;
    auVar20 = roundss(auVar19,auVar19,0xb);
    local_98 = CONCAT44(local_98._4_4_,auVar20._0_4_);
    auVar24 = auVar23;
    plVar11 = local_60;
    fVar15 = auVar20._0_4_;
    while (fVar15 <= auVar23._0_4_) {
      pVar10 = (pthread_key_t)puVar12;
      FUN_01c8b390();
      if ((local_68 == '\0') && (local_70 != (longlong *)0x0)) {
        FUN_00d50b00();
      }
      fVar15 = (float)local_60 + (float)local_98;
      uVar3 = (ulonglong)local_60 >> 0x20;
      local_60 = (longlong *)CONCAT44((int)uVar3,fVar15);
      lVar9 = unaff_RDI[0x2d];
      if (lVar9 != 0) {
        FUN_00d50b00();
      }
      FUN_01d488d0();
      if (lVar9 != 0) {
        FUN_00d50b20();
      }
      (**(code **)(*(longlong *)*unaff_RSI + 0x3e0))();
      (**(code **)(*local_a8 + 0x3a0))();
      local_108 = 0;
      if (local_68 == '\0') {
        if (local_70 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_68 = '\0';
      }
      local_108 = '\x01';
      local_110 = local_70;
      FUN_01d488d0();
      if ((local_108 != '\0') && (local_110 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      (**(code **)(*(longlong *)*unaff_RSI + 0x3e0))();
      (**(code **)(*(longlong *)*unaff_RSI + 0x3e0))();
      if (iStack_134 == 0) {
LAB_01c8c443:
        pvVar8 = _pthread_getspecific(pVar10);
        if ((pvVar8 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
          pVar10 = pVar1;
        }
        cVar4 = FUN_016cb720();
        if (cVar4 == '\0') {
          FUN_01d488d0();
        }
        else {
          FUN_01d488d0();
        }
        auVar24._4_4_ = uStack_54;
        auVar24._0_4_ = local_58;
        auVar24._8_8_ = 0;
        (**(code **)(*(longlong *)*unaff_RSI + 0x3f8))(local_60,0);
      }
      else {
        plVar2 = (longlong *)unaff_RDI[0x28];
        if (plVar2 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        pvVar8 = _pthread_getspecific(pVar10);
        if ((pvVar8 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
          pVar10 = pVar1;
        }
        FUN_016c98e0();
        local_98 = (**(code **)(*plVar2 + 0x390))();
        uStack_90 = extraout_XMM0_Qb_00;
        FUN_00d50b20();
        auVar21._0_4_ = (uint)(float)local_98 & _DAT_023945e0;
        auVar21._4_4_ = local_98._4_4_ & _UNK_023945e4;
        auVar21._8_4_ = (uint)uStack_90 & _UNK_023945e8;
        auVar21._12_4_ = uStack_90._4_4_ & _UNK_023945ec;
        auVar22._4_12_ = SUB1612(auVar21 | _DAT_023945f0,4);
        auVar22._0_4_ = SUB164(auVar21 | _DAT_023945f0,0) + (float)local_98;
        auVar24 = roundss(ZEXT816(0),auVar22,0xb);
        local_98 = CONCAT44(local_98._4_4_,auVar24._0_4_);
        auVar24._0_4_ = auVar24._0_4_ + DAT_02394210;
        if (fVar15 + local_58 + DAT_02390d00 < auVar24._0_4_) goto LAB_01c8c443;
      }
      if (iStack_134 == 0) {
        if (local_70 != (longlong *)0x0) {
          FUN_00d50b20();
        }
        break;
      }
      pvVar8 = _pthread_getspecific(pVar10);
      if (pvVar8 != (void *)0x0) {
        FUN_00e8b990();
      }
      puVar12 = local_138;
      FUN_016ca9d0(puVar12,local_150,&local_c4);
      if (plVar11 == local_70) {
LAB_01c8c62d:
        if (local_68 == '\0') {
LAB_01c8c650:
          if (local_70 != (longlong *)0x0) goto LAB_01c8c670;
        }
        else if (local_70 != (longlong *)0x0) {
          FUN_00d50b20();
          goto LAB_01c8c644;
        }
      }
      else {
        if (local_68 == '\0') {
          if (local_70 != (longlong *)0x0) {
            FUN_00d50b00();
          }
          bVar13 = plVar11 != (longlong *)0x0;
          plVar11 = local_70;
          if (bVar13) {
            FUN_00d50b20();
          }
          goto LAB_01c8c62d;
        }
        bVar13 = plVar11 == (longlong *)0x0;
        plVar11 = local_70;
        if (bVar13) goto LAB_01c8c650;
        FUN_00d50b20();
LAB_01c8c644:
        if (local_70 == (longlong *)0x0) goto LAB_01c8c190;
LAB_01c8c670:
        FUN_00d50b20();
      }
LAB_01c8c190:
      fVar15 = (float)local_98;
    }
    if (local_e8 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if (local_f0 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if (plVar11 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  uVar6 = (**(code **)(*unaff_RDI + 0x640))();
  local_160 = DAT_026e41f0;
  if (DAT_026e41f0 != 0) {
    uVar6 = FUN_00d50b00();
  }
  local_158 = '\x01';
  (**(code **)(*local_70 + 0x3b0))(uVar6,&local_160);
  local_f8 = 0;
  if (local_58._0_1_ == '\0') {
    if (local_60 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_58._0_1_ = '\0';
  }
  local_f8 = '\x01';
  local_100 = local_60;
  FUN_01d488d0();
  if ((local_f8 != '\0') && (local_100 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_58._0_1_ != '\0') && (local_60 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_158 != '\0') && (local_160 != 0)) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  plVar11 = (longlong *)*unaff_RSI;
  uVar6 = FUN_01e3f820();
  local_148 = (undefined4)uVar6;
  uStack_144 = (undefined4)((ulonglong)uVar6 >> 0x20);
  uStack_140 = (undefined4)extraout_XMM0_Qb_01;
  uStack_13c = (undefined4)((ulonglong)extraout_XMM0_Qb_01 >> 0x20);
  _local_d8 = auVar24;
  local_98 = FUN_01e3f820();
  FUN_01e3f820();
  (**(code **)(*plVar11 + 0x3e0))();
  FUN_01d48390();
  if (lVar7 != 0) {
    FUN_00d50b20();
  }
  if (local_a0 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (local_b8 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (local_c0 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (local_130 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (local_a8 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (((char)local_b0 != '\0') && (local_80 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  return;
}


