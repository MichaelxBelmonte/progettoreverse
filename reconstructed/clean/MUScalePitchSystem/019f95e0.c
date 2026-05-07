// Function: FUN_019f95e0
// Address: 019f95e0
// Size: 5442 bytes
// Class: MUScalePitchSystem
// === MUScalePitchSystem properties ===
//   bool            _tuningIsSuggestedRelevant
//   bool            _modeIsSuggestedRelevant
//   bool            _tuningPitchAnchorIsSuggestedRelevant
//   bool            _modeFundamentalOffsetIsSuggestedRelevant
//   bool            _stretchingIsSuggestedRelevant
//   double          _startPulse
//   double          _startTime
//   double          _width
//   double          _scope


void* FUN_019f95e0(float param_1,float param_2)

{
  bool bVar1;
  uint8_t auVar2 [16];
  code *pcVar3;
  void*******pppppppuVar4;
  char cVar5;
  void *pvVar6;
  int64_t lVar7;
  void*puVar8;
  void******ppppppuVar9;
  void*******pppppppuVar10;
  void* pVar11;
  void*******in_RCX;
  void*******pppppppuVar12;
  int64_t *in_RDX;
  int iVar13;
  int64_t *plVar14;
  int64_t arg1;
  void*this_ptr;
  int64_t lVar15;
  void******ppppppuVar16;
  void*******pppppppuVar17;
  float fVar18;
  float fVar19;
  uint64_t uVar20;
  uint8_t auVar22 [16];
  uint64_t uVar21;
  uint64_t extraout_XMM0_Qb_00;
  uint64_t extraout_XMM0_Qb_01;
  uint64_t extraout_XMM0_Qb_02;
  uint64_t extraout_XMM0_Qb_03;
  uint8_t auVar23 [16];
  uint8_t auVar24 [16];
  uint8_t auVar25 [16];
  uint8_t auVar26 [16];
  uint8_t auVar27 [16];
  uint8_t auVar28 [16];
  float fVar29;
  uint8_t local_1f0 [4];
  int iStack_1ec;
  int64_t *local_1e8;
  int64_t local_1e0;
  char local_1d8;
  void*******local_1d0;
  char local_1c8;
  void*******local_1c0;
  char local_1b8;
  void*******local_1b0;
  char local_1a8;
  void*******local_1a0;
  char local_198;
  int64_t local_190;
  char local_188;
  void*******local_180;
  char local_178;
  void******local_170;
  char local_168;
  void*******local_160;
  char local_158;
  void******local_150;
  char local_148;
  uint32_t local_13c;
  void*******local_138;
  char local_130;
  void*******local_128;
  char local_120;
  void*******local_118;
  char local_110;
  void*******local_108;
  char local_100;
  void*******local_f8;
  char local_f0;
  void*******local_e8;
  char local_e0;
  uint8_t local_d8 [16];
  float local_bc;
  uint8_t local_b8 [16];
  uint32_t local_a8;
  int iStack_a4;
  uint64_t local_a0;
  float local_88;
  float local_84;
  void*******local_80;
  char local_78;
  void*******local_70;
  void*******local_68;
  void******local_60;
  char local_58;
  void*******local_50;
  void*local_48;
  void*******local_40;
  char local_38 [8];
  uint64_t extraout_XMM0_Qb;
  
  local_1e8 = in_RDX;
  local_bc = param_2;
  (**(code **)(**(int64_t **)(arg1 + 0x40) + 0xa18))();
  local_50 = local_40;
  if ((((local_38[0] == '\0') && (local_40 != (void*******)0x0)) &&
      (FUN_00d50b00(), local_38[0] != '\0')) && (local_40 != (void*******)0x0)) {
    FUN_00d50b20();
  }
  local_78 = '\0';
  local_80 = (void*******)0x0;
  (**(code **)(**(int64_t **)(arg1 + 0x40) + 0xa20))();
  pvVar6 = _pthread_getspecific((void*)in_RCX);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01510280();
  local_68 = local_40;
  if (local_38[0] == '\0') {
    if (((local_40 != (void*******)0x0) && (FUN_00d50b00(), local_38[0] != '\0')) &&
       (local_40 != (void*******)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38[0] = '\0';
  }
  if ((local_58 != '\0') && (CONCAT71(local_60._1_7_,(char)local_60) != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(**(int64_t **)(arg1 + 0x40) + 0xa20))();
  pvVar6 = _pthread_getspecific((void*)in_RCX);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01510e20();
  pppppppuVar4 = local_40;
  if (local_38[0] == '\0') {
    if (((local_40 != (void*******)0x0) && (FUN_00d50b00(), local_38[0] != '\0')) &&
       (local_40 != (void*******)0x0)) {
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
  pvVar6 = _pthread_getspecific((void*)in_RCX);
  if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
    in_RCX = local_50;
  }
  (**(code **)(**(int64_t **)(arg1 + 0x40) + 0x930))();
  uVar20 = FUN_016c25f0();
  pvVar6 = _pthread_getspecific((void*)in_RCX);
  if ((pvVar6 == (void *)0x0) || (lVar7 = FUN_00e8b990(), pppppppuVar12 = local_50, lVar7 == 0)) {
    pppppppuVar12 = in_RCX;
  }
  (**(code **)(**(int64_t **)(arg1 + 0x40) + 0x930))();
  fVar18 = (float)FUN_016c25f0();
  (**(code **)(**(int64_t **)(arg1 + 0x40) + 0xa20))();
  pvVar6 = _pthread_getspecific((void*)pppppppuVar12);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01510d50();
  local_70 = local_40;
  if (local_38[0] == '\0') {
    if (((local_40 != (void*******)0x0) && (FUN_00d50b00(), local_38[0] != '\0')) &&
       (local_40 != (void*******)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38[0] = '\0';
  }
  if ((local_58 != '\0') && (CONCAT71(local_60._1_7_,(char)local_60) != 0)) {
    FUN_00d50b20();
  }
  pcVar3 = g_02572370;
  local_a0 = 0;
  local_88 = 0.0;
  local_48 = (void*)0x0;
  local_84 = param_1;
  do {
    pvVar6 = _pthread_getspecific((void*)pppppppuVar12);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    pppppppuVar12 = (void*******)&local_a8;
    fVar29 = fVar18;
    cVar5 = FUN_01252f30(uVar20,&local_80,local_1f0,&local_13c);
    if (cVar5 == '\0') goto LAB_019faa43;
    if (local_48 == (void*)0x0) {
      local_48 = (void*)0x0;
      puVar8 = (void*)FUN_00e8fc40();
      local_48 = (void*)0x0;
      FUN_00d4ff40();
      *puVar8 = &g_02572358;
      local_48 = (void*)0x0;
      (*pcVar3)();
      uVar21 = FUN_00d227d0();
      local_a0 = CONCAT71((int7)((uint64_t)uVar21 >> 8),1);
      plVar14 = *(int64_t **)(arg1 + 0x40);
      local_48 = puVar8;
      if (iStack_1ec == 0) goto LAB_019f9a60;
LAB_019f99ab:
      pvVar6 = _pthread_getspecific((void*)pppppppuVar12);
      if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
        pppppppuVar12 = local_50;
      }
      FUN_016c98e0();
      uVar21 = (**(code **)(*plVar14 + 0x938))();
      auVar24._0_4_ = (uint)(float)uVar21 & g_023945e0;
      auVar24._4_4_ = (uint)((uint64_t)uVar21 >> 0x20) & _UNK_023945e4;
      auVar24._8_4_ = (uint)extraout_XMM0_Qb_00 & _UNK_023945e8;
      auVar24._12_4_ = (uint)((uint64_t)extraout_XMM0_Qb_00 >> 0x20) & _UNK_023945ec;
      auVar25._4_12_ = SUB1612(auVar24 | g_023945f0,4);
      auVar25._0_4_ = SUB164(auVar24 | g_023945f0,0) + (float)uVar21;
      local_d8 = roundss(ZEXT816(0),auVar25,0xb);
    }
    else {
      plVar14 = *(int64_t **)(arg1 + 0x40);
      if (iStack_1ec != 0) goto LAB_019f99ab;
LAB_019f9a60:
      auVar22._0_8_ = FUN_01e3f820();
      auVar22._8_8_ = extraout_XMM0_Qb;
      local_d8._4_12_ = auVar22._4_12_;
      local_d8._0_4_ = (float)auVar22._0_8_ + fVar29 + g_02390d00;
    }
    if (local_80 != (void*******)0x0) {
      plVar14 = *(int64_t **)(arg1 + 0x40);
      if (iStack_a4 == 0) {
        uVar21 = FUN_01e3f820();
        fVar29 = (float)uVar21;
        auVar28._8_4_ = (int)extraout_XMM0_Qb_01;
        auVar28._0_8_ = uVar21;
        auVar28._12_4_ = (int)((uint64_t)extraout_XMM0_Qb_01 >> 0x20);
      }
      else {
        pvVar6 = _pthread_getspecific((void*)pppppppuVar12);
        if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
          pppppppuVar12 = local_50;
        }
        FUN_016c98e0();
        uVar21 = (**(code **)(*plVar14 + 0x938))();
        auVar26._0_4_ = (uint)(float)uVar21 & g_023945e0;
        auVar26._4_4_ = (uint)((uint64_t)uVar21 >> 0x20) & _UNK_023945e4;
        auVar26._8_4_ = (uint)extraout_XMM0_Qb_02 & _UNK_023945e8;
        auVar26._12_4_ = (uint)((uint64_t)extraout_XMM0_Qb_02 >> 0x20) & _UNK_023945ec;
        auVar27._4_12_ = SUB1612(auVar26 | g_023945f0,4);
        auVar27._0_4_ = SUB164(auVar26 | g_023945f0,0) + (float)uVar21;
        auVar28 = roundss(auVar27,auVar27,0xb);
        fVar29 = auVar28._0_4_;
      }
      if (local_84 < fVar29) {
        if ((local_bc < auVar28._0_4_) ||
           (local_b8._4_12_ = auVar28._4_12_, local_b8._0_4_ = auVar28._0_4_ - local_84,
           (float)local_b8._0_4_ < g_02390124)) {
LAB_019faa43:
          puVar8 = local_48;
          *(void*)(this_ptr + 1) = 0;
          if (((char)local_a0 == '\0') && (local_48 != (void*)0x0)) {
            FUN_00d50b00();
          }
          *this_ptr = puVar8;
          *(void*)(this_ptr + 1) = 1;
          if (local_70 != (void*******)0x0) {
            FUN_00d50b20();
          }
          if (pppppppuVar4 != (void*******)0x0) {
            FUN_00d50b20();
          }
          if (local_68 != (void*******)0x0) {
            FUN_00d50b20();
          }
          if ((local_78 != '\0') && (local_80 != (void*******)0x0)) {
            FUN_00d50b20();
          }
          if (local_50 != (void*******)0x0) {
            FUN_00d50b20();
          }
          return this_ptr;
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
          if (local_40 != (void*******)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38[0] = '\0';
        }
        local_130 = '\x01';
        FUN_00d21140();
        if ((local_130 != '\0') && (local_138 != (void*******)0x0)) {
          FUN_00d50b20();
        }
        if ((local_38[0] != '\0') && (local_40 != (void*******)0x0)) {
          FUN_00d50b20();
        }
        local_84 = local_84 + (float)local_b8._0_4_;
        local_88 = local_88 + (float)local_b8._0_4_;
      }
    }
    fVar29 = ((float)local_d8._0_4_ - local_84) + g_02390124;
    local_84 = local_84 + fVar29;
    local_d8._0_4_ =
         (uint)(fVar29 - ((local_84 - local_bc) + g_02390d00)) & -(uint)(local_bc < local_84) |
         ~-(uint)(local_bc < local_84) & (uint)fVar29;
    if ((float)local_d8._0_4_ < g_02390124) goto LAB_019faa43;
    lVar7 = *local_1e8;
    if (lVar7 == 0) {
      if (local_80 == (void*******)0x0) {
        if (iStack_a4 == 0) {
          pvVar6 = _pthread_getspecific((void*)pppppppuVar12);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01252670(0,1,0,0);
          pppppppuVar17 = local_40;
          local_60._0_1_ = local_38[0];
          pppppppuVar12 = &local_60;
          pppppppuVar10 = (void*******)local_38;
          if (local_38[0] == '\0') {
            pppppppuVar10 = pppppppuVar12;
          }
          *(void*)pppppppuVar10 = 0;
          if ((local_38[0] != '\0') && (pppppppuVar17 != (void*******)0x0)) {
            FUN_00d50b20();
          }
          cVar5 = local_78;
          pppppppuVar10 = local_80;
          if (local_80 == pppppppuVar17) {
            if ((local_78 != '\0') || (pppppppuVar17 == (void*******)0x0)) {
              if (((char)local_60 != '\0') && (pppppppuVar17 != (void*******)0x0)) {
                FUN_00d50b20();
              }
              goto LAB_019fa414;
            }
            if ((char)local_60 == '\0') {
              FUN_00d50b00();
            }
          }
          else if ((char)local_60 == '\0') {
            if (pppppppuVar17 != (void*******)0x0) {
              FUN_00d50b00();
            }
            local_80 = pppppppuVar17;
            if ((cVar5 != '\0') && (pppppppuVar10 != (void*******)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            local_80 = pppppppuVar17;
            if ((local_78 != '\0') && (pppppppuVar10 != (void*******)0x0)) {
              FUN_00d50b20();
            }
          }
        }
        else {
          pvVar6 = _pthread_getspecific((void*)pppppppuVar12);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012521f0(CONCAT44(iStack_a4,local_a8),1,0,0);
          pppppppuVar17 = local_40;
          local_60._0_1_ = local_38[0];
          pppppppuVar12 = &local_60;
          pppppppuVar10 = (void*******)local_38;
          if (local_38[0] == '\0') {
            pppppppuVar10 = pppppppuVar12;
          }
          *(void*)pppppppuVar10 = 0;
          if ((local_38[0] != '\0') && (pppppppuVar17 != (void*******)0x0)) {
            FUN_00d50b20();
          }
          cVar5 = local_78;
          pppppppuVar10 = local_80;
          if (local_80 == pppppppuVar17) {
            if ((local_78 != '\0') || (pppppppuVar17 == (void*******)0x0)) {
              if (((char)local_60 != '\0') && (pppppppuVar17 != (void*******)0x0)) {
                FUN_00d50b20();
              }
              goto LAB_019fa414;
            }
            if ((char)local_60 == '\0') {
              FUN_00d50b00();
            }
          }
          else if ((char)local_60 == '\0') {
            if (pppppppuVar17 != (void*******)0x0) {
              FUN_00d50b00();
            }
            local_80 = pppppppuVar17;
            if ((cVar5 != '\0') && (pppppppuVar10 != (void*******)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            local_80 = pppppppuVar17;
            if ((local_78 != '\0') && (pppppppuVar10 != (void*******)0x0)) {
              FUN_00d50b20();
            }
          }
        }
        local_78 = '\x01';
      }
LAB_019fa414:
      if (local_70 == (void*******)0x0) {
joined_r0x019fa47c:
        auVar2._8_8_ = 0;
        auVar2._0_8_ = local_b8._8_8_;
        local_b8 = auVar2 << 0x40;
        pppppppuVar17 = (void*******)0x0;
        if (local_80 == (void*******)0x0) goto LAB_019fa482;
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
          if (local_40 != (void*******)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38[0] = '\0';
        }
        local_120 = '\x01';
        FUN_00d21140();
        if ((local_120 != '\0') && (local_128 != (void*******)0x0)) {
          FUN_00d50b20();
        }
        if ((local_38[0] != '\0') && (local_40 != (void*******)0x0)) {
          FUN_00d50b20();
        }
        if ((local_1b8 != '\0') && (local_1c0 != (void*******)0x0)) {
          FUN_00d50b20();
        }
        if ((local_1c8 != '\0') && (local_1d0 != (void*******)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        if (iStack_a4 == 0) {
          pvVar6 = _pthread_getspecific((void*)pppppppuVar12);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01252670(0,1,0,0);
          pppppppuVar17 = local_40;
          local_60._0_1_ = local_38[0];
          pppppppuVar12 = &local_60;
          pppppppuVar10 = (void*******)local_38;
          if (local_38[0] == '\0') {
            pppppppuVar10 = pppppppuVar12;
          }
          *(void*)pppppppuVar10 = 0;
          if ((local_38[0] != '\0') && (pppppppuVar17 != (void*******)0x0)) {
            pppppppuVar10 = (void*******)FUN_00d50b20();
          }
          auVar22 = local_b8;
          if (pppppppuVar17 == (void*******)0x0) goto LAB_019fa746;
          local_b8._1_7_ = (int7)((uint64_t)pppppppuVar10 >> 8);
          local_b8[0] = 1;
          local_b8._8_8_ = auVar22._8_8_;
          if ((char)local_60 == '\0') {
            FUN_00d50b00();
          }
        }
        else {
          pvVar6 = _pthread_getspecific((void*)pppppppuVar12);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012521f0(CONCAT44(iStack_a4,local_a8),1,0,0);
          pppppppuVar17 = local_40;
          local_60._0_1_ = local_38[0];
          pppppppuVar12 = &local_60;
          pppppppuVar10 = (void*******)local_38;
          if (local_38[0] == '\0') {
            pppppppuVar10 = pppppppuVar12;
          }
          *(void*)pppppppuVar10 = 0;
          if ((local_38[0] != '\0') && (pppppppuVar17 != (void*******)0x0)) {
            pppppppuVar10 = (void*******)FUN_00d50b20();
          }
          auVar22 = local_b8;
          if (pppppppuVar17 == (void*******)0x0) {
LAB_019fa746:
            goto joined_r0x019fa47c;
          }
          local_b8._1_7_ = (int7)((uint64_t)pppppppuVar10 >> 8);
          local_b8[0] = 1;
          local_b8._8_8_ = auVar22._8_8_;
          if ((char)local_60 == '\0') {
            FUN_00d50b00();
          }
        }
        if (local_80 != (void*******)0x0) goto LAB_019fa64d;
LAB_019fa482:
        pvVar6 = _pthread_getspecific((void*)pppppppuVar12);
        pppppppuVar10 = local_68;
        if ((pvVar6 != (void *)0x0) &&
           (lVar7 = FUN_00e8b990(), pppppppuVar10 = local_68, lVar7 != 0)) {
          pppppppuVar10 =
               (void*******)local_68[(uint64_t)(*(uint *)(lVar7 + 0x154) & 1) + 4];
          pppppppuVar12 = local_68;
        }
        if ((*(int *)(pppppppuVar10[9] + 3) + 7U < 0xf) &&
           (pppppppuVar17 != (void*******)0x0)) {
          pvVar6 = _pthread_getspecific((void*)pppppppuVar12);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0176a580();
          pppppppuVar10 = local_40;
          cVar5 = local_78;
          pppppppuVar12 = local_80;
          if (local_80 == local_40) {
            if ((local_78 != '\0') || (local_40 == (void*******)0x0)) goto LAB_019fa873;
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
              if ((local_78 != '\0') && (pppppppuVar12 != (void*******)0x0)) {
                FUN_00d50b20();
              }
              goto LAB_019fa7fd;
            }
            if (local_40 != (void*******)0x0) {
              FUN_00d50b00();
            }
            local_80 = pppppppuVar10;
            if ((cVar5 != '\0') && (pppppppuVar12 != (void*******)0x0)) {
              FUN_00d50b20();
            }
LAB_019fa86f:
            local_78 = '\x01';
LAB_019fa873:
            if ((local_38[0] != '\0') && (local_40 != (void*******)0x0)) {
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
            if (local_40 != (void*******)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_38[0] = '\0';
          }
          local_110 = '\x01';
          FUN_00d21140();
          if ((local_110 != '\0') && (local_118 != (void*******)0x0)) {
            FUN_00d50b20();
          }
          if ((local_38[0] != '\0') && (local_40 != (void*******)0x0)) {
            FUN_00d50b20();
          }
          if ((local_198 != '\0') && (local_1a0 != (void*******)0x0)) {
            FUN_00d50b20();
          }
          if ((local_1a8 != '\0') && (local_1b0 != (void*******)0x0)) {
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
        if (local_40 != (void*******)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38[0] = '\0';
      }
      local_100 = '\x01';
      FUN_00d21140();
      if ((local_100 != '\0') && (local_108 != (void*******)0x0)) {
        FUN_00d50b20();
      }
      if ((local_38[0] != '\0') && (local_40 != (void*******)0x0)) {
        FUN_00d50b20();
      }
      local_88 = local_88 + (float)local_d8._0_4_;
      if ((local_b8[0] != '\0') && (pppppppuVar17 != (void*******)0x0)) {
        FUN_00d50b20();
      }
    }
    else if (g_0239424c < (float)local_d8._0_4_) {
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
              ppppppuVar16 = *(void*******)(*(int64_t *)(lVar7 + 0x10) + (lVar15 >> 0x1d));
              if (ppppppuVar16 == (void******)0x0) goto LAB_019fa08f;
              FUN_00d50b00();
              pVar11 = (void*)pppppppuVar12;
              goto joined_r0x019f9dd5;
            }
            iVar13 = iVar13 + 2;
            fVar29 = fVar29 - fVar19;
            lVar15 = lVar15 + 0x200000000;
          } while (iVar13 < *(int *)(lVar7 + 0xc));
        }
        local_b8._0_4_ = local_d8._0_4_;
LAB_019fa08f:
        pVar11 = (void*)pppppppuVar12;
        ppppppuVar16 = (void******)0x0;
joined_r0x019f9dd5:
        if (local_80 == (void*******)0x0) {
          local_148 = '\0';
          local_150 = ppppppuVar16;
          FUN_00d21140();
          if ((local_148 != '\0') && (local_150 != (void******)0x0)) {
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
            ppppppuVar9 = (void******)local_38;
            if (local_38[0] == '\0') {
              ppppppuVar9 = &local_60;
            }
            *(char *)ppppppuVar9 = '\0';
            if ((local_38[0] != '\0') && (pppppppuVar17 != (void*******)0x0)) {
              FUN_00d50b20();
            }
            if (pppppppuVar17 == (void*******)0x0) goto LAB_019f9f40;
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
            ppppppuVar9 = (void******)local_38;
            if (local_38[0] == '\0') {
              ppppppuVar9 = &local_60;
            }
            *(char *)ppppppuVar9 = '\0';
            if ((local_38[0] != '\0') && (pppppppuVar17 != (void*******)0x0)) {
              FUN_00d50b20();
            }
            if (pppppppuVar17 == (void*******)0x0) {
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
            if (local_40 != (void*******)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_38[0] = '\0';
          }
          local_f0 = '\x01';
          FUN_00d21140();
          if ((local_f0 != '\0') && (local_f8 != (void*******)0x0)) {
            FUN_00d50b20();
          }
          if ((local_38[0] != '\0') && (local_40 != (void*******)0x0)) {
            FUN_00d50b20();
          }
          if ((local_158 != '\0') && (local_160 != (void*******)0x0)) {
            FUN_00d50b20();
          }
          if ((local_168 != '\0') && (local_170 != (void******)0x0)) {
            FUN_00d50b20();
          }
          if ((local_178 != '\0') && (local_180 != (void*******)0x0)) {
            FUN_00d50b20();
          }
          if ((bVar1) && (pppppppuVar17 != (void*******)0x0)) {
            FUN_00d50b20();
          }
        }
        FUN_00d46dc0();
        local_e8 = local_40;
        local_e0 = 0;
        if (local_38[0] == '\0') {
          if (local_40 != (void*******)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38[0] = '\0';
        }
        local_e0 = '\x01';
        FUN_00d21140();
        if ((local_e0 != '\0') && (local_e8 != (void*******)0x0)) {
          FUN_00d50b20();
        }
        if ((local_38[0] != '\0') && (local_40 != (void*******)0x0)) {
          FUN_00d50b20();
        }
        if (ppppppuVar16 != (void******)0x0) {
          FUN_00d50b20();
        }
        local_d8._0_4_ = (float)local_d8._0_4_ - (float)local_b8._0_4_;
        local_88 = local_88 + (float)local_b8._0_4_;
        if ((float)local_d8._0_4_ <= g_0239424c) break;
        lVar7 = *local_1e8;
        iVar13 = *(int *)(lVar7 + 0xc);
      } while( true );
    }
  } while( true );
}

