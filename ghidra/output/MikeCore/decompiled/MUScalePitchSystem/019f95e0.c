// Function: FUN_019f95e0
// Address: 019f95e0
// Size: 5442 bytes
// Class: MUScalePitchSystem


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_019f95e0(float param_1,float param_2)

{
  bool bVar1;
  undefined1 auVar2 [16];
  code *pcVar3;
  undefined8 *******pppppppuVar4;
  char cVar5;
  void *pvVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 ******ppppppuVar9;
  undefined8 *******pppppppuVar10;
  pthread_key_t pVar11;
  undefined8 *******in_RCX;
  undefined8 *******pppppppuVar12;
  longlong *in_RDX;
  int iVar13;
  longlong *plVar14;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  longlong lVar15;
  undefined8 ******ppppppuVar16;
  undefined8 *******pppppppuVar17;
  float fVar18;
  float fVar19;
  undefined8 uVar20;
  undefined1 auVar22 [16];
  undefined8 uVar21;
  undefined8 extraout_XMM0_Qb_00;
  undefined8 extraout_XMM0_Qb_01;
  undefined8 extraout_XMM0_Qb_02;
  undefined8 extraout_XMM0_Qb_03;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  float fVar29;
  undefined1 local_1f0 [4];
  int iStack_1ec;
  longlong *local_1e8;
  longlong local_1e0;
  char local_1d8;
  undefined8 *******local_1d0;
  char local_1c8;
  undefined8 *******local_1c0;
  char local_1b8;
  undefined8 *******local_1b0;
  char local_1a8;
  undefined8 *******local_1a0;
  char local_198;
  longlong local_190;
  char local_188;
  undefined8 *******local_180;
  char local_178;
  undefined8 ******local_170;
  char local_168;
  undefined8 *******local_160;
  char local_158;
  undefined8 ******local_150;
  char local_148;
  undefined4 local_13c;
  undefined8 *******local_138;
  char local_130;
  undefined8 *******local_128;
  char local_120;
  undefined8 *******local_118;
  char local_110;
  undefined8 *******local_108;
  char local_100;
  undefined8 *******local_f8;
  char local_f0;
  undefined8 *******local_e8;
  char local_e0;
  undefined1 local_d8 [16];
  float local_bc;
  undefined1 local_b8 [16];
  undefined4 local_a8;
  int iStack_a4;
  undefined8 local_a0;
  float local_88;
  float local_84;
  undefined8 *******local_80;
  char local_78;
  undefined8 *******local_70;
  undefined8 *******local_68;
  undefined8 ******local_60;
  char local_58;
  undefined8 *******local_50;
  undefined8 *local_48;
  undefined8 *******local_40;
  char local_38 [8];
  undefined8 extraout_XMM0_Qb;
  
  local_1e8 = in_RDX;
  local_bc = param_2;
  (**(code **)(**(longlong **)(unaff_RSI + 0x40) + 0xa18))();
  local_50 = local_40;
  if ((((local_38[0] == '\0') && (local_40 != (undefined8 *******)0x0)) &&
      (FUN_00d50b00(), local_38[0] != '\0')) && (local_40 != (undefined8 *******)0x0)) {
    FUN_00d50b20();
  }
  local_78 = '\0';
  local_80 = (undefined8 *******)0x0;
  (**(code **)(**(longlong **)(unaff_RSI + 0x40) + 0xa20))();
  pvVar6 = _pthread_getspecific((pthread_key_t)in_RCX);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01510280();
  local_68 = local_40;
  if (local_38[0] == '\0') {
    if (((local_40 != (undefined8 *******)0x0) && (FUN_00d50b00(), local_38[0] != '\0')) &&
       (local_40 != (undefined8 *******)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38[0] = '\0';
  }
  if ((local_58 != '\0') && (CONCAT71(local_60._1_7_,(char)local_60) != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(**(longlong **)(unaff_RSI + 0x40) + 0xa20))();
  pvVar6 = _pthread_getspecific((pthread_key_t)in_RCX);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01510e20();
  pppppppuVar4 = local_40;
  if (local_38[0] == '\0') {
    if (((local_40 != (undefined8 *******)0x0) && (FUN_00d50b00(), local_38[0] != '\0')) &&
       (local_40 != (undefined8 *******)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38[0] = '\0';
  }
  if ((local_58 != '\0') && (CONCAT71(local_60._1_7_,(char)local_60) != 0)) {
    FUN_00d50b20();
  }
  local_13c = 0xffffffff;
  pvVar6 = _pthread_getspecific((pthread_key_t)in_RCX);
  if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
    in_RCX = local_50;
  }
  (**(code **)(**(longlong **)(unaff_RSI + 0x40) + 0x930))();
  uVar20 = FUN_016c25f0();
  pvVar6 = _pthread_getspecific((pthread_key_t)in_RCX);
  if ((pvVar6 == (void *)0x0) || (lVar7 = FUN_00e8b990(), pppppppuVar12 = local_50, lVar7 == 0)) {
    pppppppuVar12 = in_RCX;
  }
  (**(code **)(**(longlong **)(unaff_RSI + 0x40) + 0x930))();
  fVar18 = (float)FUN_016c25f0();
  (**(code **)(**(longlong **)(unaff_RSI + 0x40) + 0xa20))();
  pvVar6 = _pthread_getspecific((pthread_key_t)pppppppuVar12);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01510d50();
  local_70 = local_40;
  if (local_38[0] == '\0') {
    if (((local_40 != (undefined8 *******)0x0) && (FUN_00d50b00(), local_38[0] != '\0')) &&
       (local_40 != (undefined8 *******)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38[0] = '\0';
  }
  if ((local_58 != '\0') && (CONCAT71(local_60._1_7_,(char)local_60) != 0)) {
    FUN_00d50b20();
  }
  pcVar3 = DAT_02572370;
  local_a0 = 0;
  local_88 = 0.0;
  local_48 = (undefined8 *)0x0;
  local_84 = param_1;
  do {
    pvVar6 = _pthread_getspecific((pthread_key_t)pppppppuVar12);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    pppppppuVar12 = (undefined8 *******)&local_a8;
    fVar29 = fVar18;
    cVar5 = FUN_01252f30(uVar20,&local_80,local_1f0,&local_13c);
    if (cVar5 == '\0') goto LAB_019faa43;
    if (local_48 == (undefined8 *)0x0) {
      local_48 = (undefined8 *)0x0;
      puVar8 = (undefined8 *)FUN_00e8fc40();
      local_48 = (undefined8 *)0x0;
      FUN_00d4ff40();
      *puVar8 = &DAT_02572358;
      local_48 = (undefined8 *)0x0;
      (*pcVar3)();
      uVar21 = FUN_00d227d0();
      local_a0 = CONCAT71((int7)((ulonglong)uVar21 >> 8),1);
      plVar14 = *(longlong **)(unaff_RSI + 0x40);
      local_48 = puVar8;
      if (iStack_1ec == 0) goto LAB_019f9a60;
LAB_019f99ab:
      pvVar6 = _pthread_getspecific((pthread_key_t)pppppppuVar12);
      if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
        pppppppuVar12 = local_50;
      }
      FUN_016c98e0();
      uVar21 = (**(code **)(*plVar14 + 0x938))();
      auVar24._0_4_ = (uint)(float)uVar21 & _DAT_023945e0;
      auVar24._4_4_ = (uint)((ulonglong)uVar21 >> 0x20) & _UNK_023945e4;
      auVar24._8_4_ = (uint)extraout_XMM0_Qb_00 & _UNK_023945e8;
      auVar24._12_4_ = (uint)((ulonglong)extraout_XMM0_Qb_00 >> 0x20) & _UNK_023945ec;
      auVar25._4_12_ = SUB1612(auVar24 | _DAT_023945f0,4);
      auVar25._0_4_ = SUB164(auVar24 | _DAT_023945f0,0) + (float)uVar21;
      local_d8 = roundss(ZEXT816(0),auVar25,0xb);
    }
    else {
      plVar14 = *(longlong **)(unaff_RSI + 0x40);
      if (iStack_1ec != 0) goto LAB_019f99ab;
LAB_019f9a60:
      auVar22._0_8_ = FUN_01e3f820();
      auVar22._8_8_ = extraout_XMM0_Qb;
      local_d8._4_12_ = auVar22._4_12_;
      local_d8._0_4_ = (float)auVar22._0_8_ + fVar29 + DAT_02390d00;
    }
    if (local_80 != (undefined8 *******)0x0) {
      plVar14 = *(longlong **)(unaff_RSI + 0x40);
      if (iStack_a4 == 0) {
        uVar21 = FUN_01e3f820();
        fVar29 = (float)uVar21;
        auVar28._8_4_ = (int)extraout_XMM0_Qb_01;
        auVar28._0_8_ = uVar21;
        auVar28._12_4_ = (int)((ulonglong)extraout_XMM0_Qb_01 >> 0x20);
      }
      else {
        pvVar6 = _pthread_getspecific((pthread_key_t)pppppppuVar12);
        if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
          pppppppuVar12 = local_50;
        }
        FUN_016c98e0();
        uVar21 = (**(code **)(*plVar14 + 0x938))();
        auVar26._0_4_ = (uint)(float)uVar21 & _DAT_023945e0;
        auVar26._4_4_ = (uint)((ulonglong)uVar21 >> 0x20) & _UNK_023945e4;
        auVar26._8_4_ = (uint)extraout_XMM0_Qb_02 & _UNK_023945e8;
        auVar26._12_4_ = (uint)((ulonglong)extraout_XMM0_Qb_02 >> 0x20) & _UNK_023945ec;
        auVar27._4_12_ = SUB1612(auVar26 | _DAT_023945f0,4);
        auVar27._0_4_ = SUB164(auVar26 | _DAT_023945f0,0) + (float)uVar21;
        auVar28 = roundss(auVar27,auVar27,0xb);
        fVar29 = auVar28._0_4_;
      }
      if (local_84 < fVar29) {
        if ((local_bc < auVar28._0_4_) ||
           (local_b8._4_12_ = auVar28._4_12_, local_b8._0_4_ = auVar28._0_4_ - local_84,
           (float)local_b8._0_4_ < DAT_02390124)) {
LAB_019faa43:
          puVar8 = local_48;
          *(undefined1 *)(unaff_RDI + 1) = 0;
          if (((char)local_a0 == '\0') && (local_48 != (undefined8 *)0x0)) {
            FUN_00d50b00();
          }
          *unaff_RDI = puVar8;
          *(undefined1 *)(unaff_RDI + 1) = 1;
          if (local_70 != (undefined8 *******)0x0) {
            FUN_00d50b20();
          }
          if (pppppppuVar4 != (undefined8 *******)0x0) {
            FUN_00d50b20();
          }
          if (local_68 != (undefined8 *******)0x0) {
            FUN_00d50b20();
          }
          if ((local_78 != '\0') && (local_80 != (undefined8 *******)0x0)) {
            FUN_00d50b20();
          }
          if (local_50 != (undefined8 *******)0x0) {
            FUN_00d50b20();
          }
          return unaff_RDI;
        }
        local_1d8 = '\0';
        local_1e0 = 0;
        FUN_00d21140();
        if ((local_1d8 != '\0') && (local_1e0 != 0)) {
          FUN_00d50b20();
        }
        FUN_00d46dc0();
        local_138 = local_40;
        local_130 = 0;
        if (local_38[0] == '\0') {
          if (local_40 != (undefined8 *******)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38[0] = '\0';
        }
        local_130 = '\x01';
        FUN_00d21140();
        if ((local_130 != '\0') && (local_138 != (undefined8 *******)0x0)) {
          FUN_00d50b20();
        }
        if ((local_38[0] != '\0') && (local_40 != (undefined8 *******)0x0)) {
          FUN_00d50b20();
        }
        local_84 = local_84 + (float)local_b8._0_4_;
        local_88 = local_88 + (float)local_b8._0_4_;
      }
    }
    fVar29 = ((float)local_d8._0_4_ - local_84) + DAT_02390124;
    local_84 = local_84 + fVar29;
    local_d8._0_4_ =
         (uint)(fVar29 - ((local_84 - local_bc) + DAT_02390d00)) & -(uint)(local_bc < local_84) |
         ~-(uint)(local_bc < local_84) & (uint)fVar29;
    if ((float)local_d8._0_4_ < DAT_02390124) goto LAB_019faa43;
    lVar7 = *local_1e8;
    if (lVar7 == 0) {
      if (local_80 == (undefined8 *******)0x0) {
        if (iStack_a4 == 0) {
          pvVar6 = _pthread_getspecific((pthread_key_t)pppppppuVar12);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01252670(0,1,0,0);
          pppppppuVar17 = local_40;
          local_60._0_1_ = local_38[0];
          pppppppuVar12 = &local_60;
          pppppppuVar10 = (undefined8 *******)local_38;
          if (local_38[0] == '\0') {
            pppppppuVar10 = pppppppuVar12;
          }
          *(undefined1 *)pppppppuVar10 = 0;
          if ((local_38[0] != '\0') && (pppppppuVar17 != (undefined8 *******)0x0)) {
            FUN_00d50b20();
          }
          cVar5 = local_78;
          pppppppuVar10 = local_80;
          if (local_80 == pppppppuVar17) {
            if ((local_78 != '\0') || (pppppppuVar17 == (undefined8 *******)0x0)) {
              if (((char)local_60 != '\0') && (pppppppuVar17 != (undefined8 *******)0x0)) {
                FUN_00d50b20();
              }
              goto LAB_019fa414;
            }
            if ((char)local_60 == '\0') {
              FUN_00d50b00();
            }
          }
          else if ((char)local_60 == '\0') {
            if (pppppppuVar17 != (undefined8 *******)0x0) {
              FUN_00d50b00();
            }
            local_80 = pppppppuVar17;
            if ((cVar5 != '\0') && (pppppppuVar10 != (undefined8 *******)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            local_80 = pppppppuVar17;
            if ((local_78 != '\0') && (pppppppuVar10 != (undefined8 *******)0x0)) {
              FUN_00d50b20();
            }
          }
        }
        else {
          pvVar6 = _pthread_getspecific((pthread_key_t)pppppppuVar12);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012521f0(CONCAT44(iStack_a4,local_a8),1,0,0);
          pppppppuVar17 = local_40;
          local_60._0_1_ = local_38[0];
          pppppppuVar12 = &local_60;
          pppppppuVar10 = (undefined8 *******)local_38;
          if (local_38[0] == '\0') {
            pppppppuVar10 = pppppppuVar12;
          }
          *(undefined1 *)pppppppuVar10 = 0;
          if ((local_38[0] != '\0') && (pppppppuVar17 != (undefined8 *******)0x0)) {
            FUN_00d50b20();
          }
          cVar5 = local_78;
          pppppppuVar10 = local_80;
          if (local_80 == pppppppuVar17) {
            if ((local_78 != '\0') || (pppppppuVar17 == (undefined8 *******)0x0)) {
              if (((char)local_60 != '\0') && (pppppppuVar17 != (undefined8 *******)0x0)) {
                FUN_00d50b20();
              }
              goto LAB_019fa414;
            }
            if ((char)local_60 == '\0') {
              FUN_00d50b00();
            }
          }
          else if ((char)local_60 == '\0') {
            if (pppppppuVar17 != (undefined8 *******)0x0) {
              FUN_00d50b00();
            }
            local_80 = pppppppuVar17;
            if ((cVar5 != '\0') && (pppppppuVar10 != (undefined8 *******)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            local_80 = pppppppuVar17;
            if ((local_78 != '\0') && (pppppppuVar10 != (undefined8 *******)0x0)) {
              FUN_00d50b20();
            }
          }
        }
        local_78 = '\x01';
      }
LAB_019fa414:
      if (local_70 == (undefined8 *******)0x0) {
joined_r0x019fa47c:
        auVar2._8_8_ = 0;
        auVar2._0_8_ = local_b8._8_8_;
        local_b8 = auVar2 << 0x40;
        pppppppuVar17 = (undefined8 *******)0x0;
        if (local_80 == (undefined8 *******)0x0) goto LAB_019fa482;
LAB_019fa64d:
        local_1c8 = '\0';
        local_1b8 = '\0';
        pppppppuVar12 = &local_1c0;
        local_1d0 = local_80;
        local_1c0 = pppppppuVar17;
        FUN_019fbe00(pppppppuVar12,&local_1d0);
        local_128 = local_40;
        local_120 = 0;
        if (local_38[0] == '\0') {
          if (local_40 != (undefined8 *******)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38[0] = '\0';
        }
        local_120 = '\x01';
        FUN_00d21140();
        if ((local_120 != '\0') && (local_128 != (undefined8 *******)0x0)) {
          FUN_00d50b20();
        }
        if ((local_38[0] != '\0') && (local_40 != (undefined8 *******)0x0)) {
          FUN_00d50b20();
        }
        if ((local_1b8 != '\0') && (local_1c0 != (undefined8 *******)0x0)) {
          FUN_00d50b20();
        }
        if ((local_1c8 != '\0') && (local_1d0 != (undefined8 *******)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        if (iStack_a4 == 0) {
          pvVar6 = _pthread_getspecific((pthread_key_t)pppppppuVar12);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01252670(0,1,0,0);
          pppppppuVar17 = local_40;
          local_60._0_1_ = local_38[0];
          pppppppuVar12 = &local_60;
          pppppppuVar10 = (undefined8 *******)local_38;
          if (local_38[0] == '\0') {
            pppppppuVar10 = pppppppuVar12;
          }
          *(undefined1 *)pppppppuVar10 = 0;
          if ((local_38[0] != '\0') && (pppppppuVar17 != (undefined8 *******)0x0)) {
            pppppppuVar10 = (undefined8 *******)FUN_00d50b20();
          }
          auVar22 = local_b8;
          if (pppppppuVar17 == (undefined8 *******)0x0) goto LAB_019fa746;
          local_b8._1_7_ = (int7)((ulonglong)pppppppuVar10 >> 8);
          local_b8[0] = 1;
          local_b8._8_8_ = auVar22._8_8_;
          if ((char)local_60 == '\0') {
            FUN_00d50b00();
          }
        }
        else {
          pvVar6 = _pthread_getspecific((pthread_key_t)pppppppuVar12);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012521f0(CONCAT44(iStack_a4,local_a8),1,0,0);
          pppppppuVar17 = local_40;
          local_60._0_1_ = local_38[0];
          pppppppuVar12 = &local_60;
          pppppppuVar10 = (undefined8 *******)local_38;
          if (local_38[0] == '\0') {
            pppppppuVar10 = pppppppuVar12;
          }
          *(undefined1 *)pppppppuVar10 = 0;
          if ((local_38[0] != '\0') && (pppppppuVar17 != (undefined8 *******)0x0)) {
            pppppppuVar10 = (undefined8 *******)FUN_00d50b20();
          }
          auVar22 = local_b8;
          if (pppppppuVar17 == (undefined8 *******)0x0) {
LAB_019fa746:
            goto joined_r0x019fa47c;
          }
          local_b8._1_7_ = (int7)((ulonglong)pppppppuVar10 >> 8);
          local_b8[0] = 1;
          local_b8._8_8_ = auVar22._8_8_;
          if ((char)local_60 == '\0') {
            FUN_00d50b00();
          }
        }
        if (local_80 != (undefined8 *******)0x0) goto LAB_019fa64d;
LAB_019fa482:
        pvVar6 = _pthread_getspecific((pthread_key_t)pppppppuVar12);
        pppppppuVar10 = local_68;
        if ((pvVar6 != (void *)0x0) &&
           (lVar7 = FUN_00e8b990(), pppppppuVar10 = local_68, lVar7 != 0)) {
          pppppppuVar10 =
               (undefined8 *******)local_68[(ulonglong)(*(uint *)(lVar7 + 0x154) & 1) + 4];
          pppppppuVar12 = local_68;
        }
        if ((*(int *)(pppppppuVar10[9] + 3) + 7U < 0xf) &&
           (pppppppuVar17 != (undefined8 *******)0x0)) {
          pvVar6 = _pthread_getspecific((pthread_key_t)pppppppuVar12);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0176a580();
          pppppppuVar10 = local_40;
          cVar5 = local_78;
          pppppppuVar12 = local_80;
          if (local_80 == local_40) {
            if ((local_78 != '\0') || (local_40 == (undefined8 *******)0x0)) goto LAB_019fa873;
            if (local_38[0] == '\0') {
              FUN_00d50b00();
              goto LAB_019fa86f;
            }
LAB_019fa7fd:
            local_78 = '\x01';
          }
          else {
            if (local_38[0] != '\0') {
              local_80 = local_40;
              if ((local_78 != '\0') && (pppppppuVar12 != (undefined8 *******)0x0)) {
                FUN_00d50b20();
              }
              goto LAB_019fa7fd;
            }
            if (local_40 != (undefined8 *******)0x0) {
              FUN_00d50b00();
            }
            local_80 = pppppppuVar10;
            if ((cVar5 != '\0') && (pppppppuVar12 != (undefined8 *******)0x0)) {
              FUN_00d50b20();
            }
LAB_019fa86f:
            local_78 = '\x01';
LAB_019fa873:
            if ((local_38[0] != '\0') && (local_40 != (undefined8 *******)0x0)) {
              FUN_00d50b20();
            }
          }
          local_1b0 = local_80;
          local_1a8 = '\0';
          local_198 = '\0';
          pppppppuVar12 = &local_1a0;
          local_1a0 = pppppppuVar17;
          FUN_019fbe00(pppppppuVar12,&local_1b0);
          local_118 = local_40;
          local_110 = 0;
          if (local_38[0] == '\0') {
            if (local_40 != (undefined8 *******)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_38[0] = '\0';
          }
          local_110 = '\x01';
          FUN_00d21140();
          if ((local_110 != '\0') && (local_118 != (undefined8 *******)0x0)) {
            FUN_00d50b20();
          }
          if ((local_38[0] != '\0') && (local_40 != (undefined8 *******)0x0)) {
            FUN_00d50b20();
          }
          if ((local_198 != '\0') && (local_1a0 != (undefined8 *******)0x0)) {
            FUN_00d50b20();
          }
          if ((local_1a8 != '\0') && (local_1b0 != (undefined8 *******)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_188 = '\0';
          local_190 = 0;
          FUN_00d21140();
          if ((local_188 != '\0') && (local_190 != 0)) {
            FUN_00d50b20();
          }
        }
      }
      FUN_00d46dc0();
      local_108 = local_40;
      local_100 = 0;
      if (local_38[0] == '\0') {
        if (local_40 != (undefined8 *******)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38[0] = '\0';
      }
      local_100 = '\x01';
      FUN_00d21140();
      if ((local_100 != '\0') && (local_108 != (undefined8 *******)0x0)) {
        FUN_00d50b20();
      }
      if ((local_38[0] != '\0') && (local_40 != (undefined8 *******)0x0)) {
        FUN_00d50b20();
      }
      local_88 = local_88 + (float)local_d8._0_4_;
      if ((local_b8[0] != '\0') && (pppppppuVar17 != (undefined8 *******)0x0)) {
        FUN_00d50b20();
      }
    }
    else if (DAT_0239424c < (float)local_d8._0_4_) {
      iVar13 = *(int *)(lVar7 + 0xc);
      do {
        if (1 < iVar13) {
          iVar13 = 1;
          lVar15 = 0;
          fVar29 = local_88;
          do {
            local_b8 = ZEXT416((uint)fVar29);
            auVar23._0_8_ = FUN_00d459e0();
            auVar23._8_8_ = extraout_XMM0_Qb_03;
            fVar29 = (float)auVar23._0_8_;
            if ((float)local_b8._0_4_ < fVar29) {
              auVar23._0_4_ = fVar29 - (float)local_b8._0_4_;
            }
            fVar19 = auVar23._0_4_;
            fVar29 = (float)(~-(uint)((float)local_b8._0_4_ < fVar29) & local_b8._0_4_);
            if (fVar29 < fVar19) {
              if ((float)local_d8._0_4_ <= fVar19) {
                fVar19 = (float)local_d8._0_4_;
              }
              local_b8._0_4_ = fVar19;
              ppppppuVar16 = *(undefined8 *******)(*(longlong *)(lVar7 + 0x10) + (lVar15 >> 0x1d));
              if (ppppppuVar16 == (undefined8 ******)0x0) goto LAB_019fa08f;
              FUN_00d50b00();
              pVar11 = (pthread_key_t)pppppppuVar12;
              goto joined_r0x019f9dd5;
            }
            iVar13 = iVar13 + 2;
            fVar29 = fVar29 - fVar19;
            lVar15 = lVar15 + 0x200000000;
          } while (iVar13 < *(int *)(lVar7 + 0xc));
        }
        local_b8._0_4_ = local_d8._0_4_;
LAB_019fa08f:
        pVar11 = (pthread_key_t)pppppppuVar12;
        ppppppuVar16 = (undefined8 ******)0x0;
joined_r0x019f9dd5:
        if (local_80 == (undefined8 *******)0x0) {
          local_148 = '\0';
          local_150 = ppppppuVar16;
          FUN_00d21140();
          if ((local_148 != '\0') && (local_150 != (undefined8 ******)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          if (iStack_a4 == 0) {
            pvVar6 = _pthread_getspecific(pVar11);
            if (pvVar6 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_01252670(0,0,0,0);
            pppppppuVar17 = local_40;
            local_60._0_1_ = local_38[0];
            ppppppuVar9 = (undefined8 ******)local_38;
            if (local_38[0] == '\0') {
              ppppppuVar9 = &local_60;
            }
            *(char *)ppppppuVar9 = '\0';
            if ((local_38[0] != '\0') && (pppppppuVar17 != (undefined8 *******)0x0)) {
              FUN_00d50b20();
            }
            if (pppppppuVar17 == (undefined8 *******)0x0) goto LAB_019f9f40;
            bVar1 = true;
            if ((char)local_60 == '\0') {
              FUN_00d50b00();
            }
          }
          else {
            pvVar6 = _pthread_getspecific(pVar11);
            if (pvVar6 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_012521f0(CONCAT44(iStack_a4,local_a8),0,0);
            pppppppuVar17 = local_40;
            local_60._0_1_ = local_38[0];
            ppppppuVar9 = (undefined8 ******)local_38;
            if (local_38[0] == '\0') {
              ppppppuVar9 = &local_60;
            }
            *(char *)ppppppuVar9 = '\0';
            if ((local_38[0] != '\0') && (pppppppuVar17 != (undefined8 *******)0x0)) {
              FUN_00d50b20();
            }
            if (pppppppuVar17 == (undefined8 *******)0x0) {
LAB_019f9f40:
              bVar1 = false;
            }
            else {
              bVar1 = true;
              if ((char)local_60 == '\0') {
                FUN_00d50b00();
              }
            }
          }
          local_180 = local_80;
          local_178 = '\0';
          local_168 = '\0';
          local_158 = '\0';
          pppppppuVar12 = &local_170;
          local_170 = ppppppuVar16;
          local_160 = pppppppuVar17;
          FUN_019fc330();
          local_f8 = local_40;
          local_f0 = 0;
          if (local_38[0] == '\0') {
            if (local_40 != (undefined8 *******)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_38[0] = '\0';
          }
          local_f0 = '\x01';
          FUN_00d21140();
          if ((local_f0 != '\0') && (local_f8 != (undefined8 *******)0x0)) {
            FUN_00d50b20();
          }
          if ((local_38[0] != '\0') && (local_40 != (undefined8 *******)0x0)) {
            FUN_00d50b20();
          }
          if ((local_158 != '\0') && (local_160 != (undefined8 *******)0x0)) {
            FUN_00d50b20();
          }
          if ((local_168 != '\0') && (local_170 != (undefined8 ******)0x0)) {
            FUN_00d50b20();
          }
          if ((local_178 != '\0') && (local_180 != (undefined8 *******)0x0)) {
            FUN_00d50b20();
          }
          if ((bVar1) && (pppppppuVar17 != (undefined8 *******)0x0)) {
            FUN_00d50b20();
          }
        }
        FUN_00d46dc0();
        local_e8 = local_40;
        local_e0 = 0;
        if (local_38[0] == '\0') {
          if (local_40 != (undefined8 *******)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38[0] = '\0';
        }
        local_e0 = '\x01';
        FUN_00d21140();
        if ((local_e0 != '\0') && (local_e8 != (undefined8 *******)0x0)) {
          FUN_00d50b20();
        }
        if ((local_38[0] != '\0') && (local_40 != (undefined8 *******)0x0)) {
          FUN_00d50b20();
        }
        if (ppppppuVar16 != (undefined8 ******)0x0) {
          FUN_00d50b20();
        }
        local_d8._0_4_ = (float)local_d8._0_4_ - (float)local_b8._0_4_;
        local_88 = local_88 + (float)local_b8._0_4_;
        if ((float)local_d8._0_4_ <= DAT_0239424c) break;
        lVar7 = *local_1e8;
        iVar13 = *(int *)(lVar7 + 0xc);
      } while( true );
    }
  } while( true );
}


