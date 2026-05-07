// Function: FUN_019d05b0
// Address: 019d05b0
// Size: 6243 bytes
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


uint64_t FUN_019d05b0(uint64_t param_1,char param_2)

{
  void*puVar1;
  void*puVar2;
  char cVar3;
  void *pvVar4;
  void*puVar5;
  int64_t lVar6;
  int64_t *plVar7;
  uint64_t uVar8;
  void**ppuVar9;
  void* pVar10;
  uint64_t uVar11;
  int64_t lVar12;
  char *pcVar13;
  uint64_t uVar14;
  int iVar15;
  int64_t *this_ptr;
  void*puVar16;
  byte bVar17;
  uint64_t extraout_XMM0_Qa;
  void*local_1a8;
  char local_1a0;
  int64_t local_198;
  char local_190;
  void*local_188;
  char local_180;
  void*local_178;
  char local_170;
  void*local_168;
  char local_160;
  void*local_158;
  char local_150;
  void*local_148;
  char local_140;
  void*local_138;
  char local_130;
  void*local_128;
  char local_120;
  void*local_118;
  char local_110;
  void*local_108;
  char local_100;
  void*local_f8;
  char local_f0;
  uint64_t local_e8;
  uint64_t local_e0;
  void*local_d8;
  void**local_d0;
  void*local_c8;
  char local_c0;
  undefined7 uStack_bf;
  char local_b8;
  int64_t *local_b0;
  void*local_a8;
  void*local_a0;
  void*local_98;
  void*local_90;
  void*local_88;
  void*local_80;
  char local_78 [8];
  void*local_70;
  uint64_t local_68;
  int local_60;
  void*local_58;
  char local_50;
  byte local_41;
  void*local_40;
  char local_38;
  
  bVar17 = (byte)param_1;
  uVar14 = 0;
  uVar8 = param_1;
  cVar3 = (**(code **)("/System/Library/Frameworks/ImageIO.framework/Versions/A/ImageIO" +
                      *this_ptr))();
  if (cVar3 == '\0') goto LAB_019d1e96;
  FUN_01993800(extraout_XMM0_Qa,0);
  puVar5 = local_80;
  if (local_78[0] == '\0') {
    if (local_80 != (void*)0x0) {
      FUN_00d50b00();
      if ((local_78[0] != '\0') && (local_80 != (void*)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_019d05fe;
    }
  }
  else {
LAB_019d05fe:
    local_90 = puVar5;
    if ((puVar5 != (void*)0x0) && (param_2 != '\0')) {
      (**(code **)(*this_ptr + 0xa10))();
      if (local_40 == (void*)0x0) {
        local_78[0] = '\0';
        local_80 = (void*)0x0;
        local_d8 = (void*)0x0;
      }
      else {
        (**(code **)(*this_ptr + 0xa10))();
        pvVar4 = _pthread_getspecific((void*)uVar8);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01505b90();
        if (local_78[0] == '\0') {
          if (local_80 == (void*)0x0) {
            local_d8 = (void*)0x0;
          }
          else {
            local_d8 = local_80;
            FUN_00d50b00();
            if ((local_78[0] != '\0') && (local_80 != (void*)0x0)) {
              FUN_00d50b20();
            }
          }
        }
        else {
          local_d8 = local_80;
          local_78[0] = '\0';
        }
        if ((local_50 != '\0') && (local_58 != (void*)0x0)) {
          FUN_00d50b20();
        }
      }
      if ((local_38 != '\0') && (local_40 != (void*)0x0)) {
        FUN_00d50b20();
      }
      (**(code **)(*this_ptr + 0xe30))();
      FUN_00d23310();
      puVar5 = local_80;
      pVar10 = (void*)CONCAT71((int7)((uint64_t)uVar8 >> 8),local_78[0]);
      pcVar13 = &local_c0;
      if (local_78[0] != '\0') {
        pcVar13 = local_78;
      }
      local_c0 = local_78[0];
      *pcVar13 = '\0';
      if ((local_78[0] != '\0') && (puVar5 != (void*)0x0)) {
        FUN_00d50b20();
      }
      pvVar4 = _pthread_getspecific(pVar10);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01266fe0();
      local_88 = local_40;
      if (local_38 == '\0') {
        if (((local_40 != (void*)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
           (local_40 != (void*)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_38 = '\0';
      }
      if ((local_c0 != '\0') && (puVar5 != (void*)0x0)) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != (void*)0x0)) {
        FUN_00d50b20();
      }
      puVar5 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      pVar10 = 0x2572358;
      *puVar5 = &g_02572358;
      (*g_02572370)();
      local_a8 = puVar5;
      pvVar4 = _pthread_getspecific(pVar10);
      if ((pvVar4 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
        pVar10 = (void*)local_88;
      }
      FUN_012e5ae0();
      puVar5 = local_80;
      if (local_78[0] == '\0') {
        if (local_80 != (void*)0x0) {
          FUN_00d50b00();
          if ((local_78[0] != '\0') && (local_80 != (void*)0x0)) {
            FUN_00d50b20();
          }
          goto LAB_019d08cb;
        }
      }
      else if (local_80 != (void*)0x0) {
LAB_019d08cb:
        local_78[0] = '\0';
        local_80 = (void*)0x0;
        local_70 = puVar5;
        local_68 = 0xffffffff;
        local_60 = 0;
        local_68._4_4_ = 0;
        while( true ) {
          if (local_68._4_4_ != 0) {
            if (local_68._4_4_ < 1) {
              iVar15 = -local_68._4_4_;
            }
            else {
              iVar15 = (int)local_68 - local_68._4_4_;
              local_68 = CONCAT44(local_68._4_4_,iVar15);
              FUN_00d23690();
              local_60 = local_60 + local_68._4_4_;
              iVar15 = 0;
            }
            local_68 = CONCAT44(iVar15,(int)local_68);
          }
          lVar6 = (int64_t)(int)local_68;
          iVar15 = (int)local_68 + 1;
          local_68 = CONCAT44(local_68._4_4_,iVar15);
          if (*(int *)((int64_t)local_70 + 0xc) <= iVar15) break;
          local_80 = *(void**)(local_70[2] + 8 + lVar6 * 8);
          pvVar4 = _pthread_getspecific((void*)local_70[2]);
          if (pvVar4 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01264240();
          puVar5 = local_40;
          if ((local_38 != '\0') && (local_40 != (void*)0x0)) {
            FUN_00d50b20();
          }
          if (puVar5 == local_90) {
            local_40 = local_80;
            local_38 = '\0';
            FUN_00d21140();
            if ((local_38 != '\0') && (local_40 != (void*)0x0)) {
              FUN_00d50b20();
            }
          }
        }
        puVar5 = local_70;
        FUN_001159b0();
        pVar10 = (void*)puVar5;
        FUN_00d50b20();
      }
      if (bVar17 == 0) {
        local_e0 = 0;
        ppuVar9 = (void**)0x0;
        plVar7 = (int64_t *)0x0;
      }
      else {
        local_e0 = 0;
        plVar7 = (int64_t *)FUN_00e8fc40();
        local_e0 = 0;
        FUN_00022d50();
        uVar11 = 0;
        local_e0 = 0;
        uVar8 = (**(code **)(*plVar7 + 0x18))();
        local_e0 = CONCAT71((int7)((uint64_t)uVar8 >> 8),1);
        ppuVar9 = (void**)FUN_00e8fc40();
        FUN_00022d50();
        uVar8 = CONCAT71((int7)((uint64_t)uVar11 >> 8),1);
        local_e0 = uVar8;
        (*(*ppuVar9)[3])();
        pVar10 = (void*)uVar8;
      }
      local_41 = bVar17 ^ 1;
      local_d0 = ppuVar9;
      local_b0 = plVar7;
      if (local_a8 != (void*)0x0) {
        local_98 = (void*)CONCAT44(local_98._4_4_,(int)param_1);
        local_78[0] = '\0';
        local_80 = (void*)0x0;
        local_70 = local_a8;
        local_68 = 0xffffffff;
        local_60 = 0;
        local_68._4_4_ = 0;
        ppuVar9 = &local_40;
        while( true ) {
          if (local_68._4_4_ != 0) {
            if (local_68._4_4_ < 1) {
              iVar15 = -local_68._4_4_;
            }
            else {
              iVar15 = (int)local_68 - local_68._4_4_;
              local_68 = CONCAT44(local_68._4_4_,iVar15);
              FUN_00d23690();
              local_60 = local_60 + local_68._4_4_;
              iVar15 = 0;
            }
            local_68 = CONCAT44(iVar15,(int)local_68);
          }
          lVar6 = (int64_t)(int)local_68;
          iVar15 = (int)local_68 + 1;
          local_68 = CONCAT44(local_68._4_4_,iVar15);
          if (*(int *)((int64_t)local_70 + 0xc) <= iVar15) break;
          lVar12 = local_70[2];
          local_80 = *(void**)(lVar12 + 8 + lVar6 * 8);
          pvVar4 = _pthread_getspecific((void*)lVar12);
          pVar10 = (void*)lVar12;
          if (pvVar4 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0125e930();
          if (local_58 == (void*)0x0) {
            local_38 = '\0';
            local_40 = (void*)0x0;
            puVar5 = (void*)0x0;
          }
          else {
            pvVar4 = _pthread_getspecific(pVar10);
            if (pvVar4 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0125e930();
            pvVar4 = _pthread_getspecific(pVar10);
            if (pvVar4 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0152ebe0();
            puVar5 = local_40;
            if (local_38 == '\0') {
              if (local_40 == (void*)0x0) {
                puVar5 = (void*)0x0;
              }
              else {
                FUN_00d50b00();
                if ((local_38 != '\0') && (local_40 != (void*)0x0)) {
                  FUN_00d50b20();
                }
              }
            }
            else {
              local_38 = '\0';
            }
            if ((local_b8 != '\0') && (CONCAT71(uStack_bf,local_c0) != 0)) {
              FUN_00d50b20();
            }
          }
          if ((local_50 != '\0') && (local_58 != (void*)0x0)) {
            FUN_00d50b20();
          }
          if (((puVar5 != (void*)0x0) && (local_b0 != (int64_t *)0x0)) &&
             (local_d0 != (void**)0x0)) {
            pvVar4 = _pthread_getspecific(pVar10);
            if (pvVar4 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_01507970();
            FUN_00dd67f0();
            puVar16 = local_40;
            local_170 = 0;
            if (local_38 == '\0') {
              if (local_40 != (void*)0x0) {
                FUN_00d50b00();
              }
            }
            else {
              local_38 = '\0';
            }
            local_170 = '\x01';
            local_178 = puVar16;
            pvVar4 = _pthread_getspecific(pVar10);
            if (pvVar4 != (void *)0x0) {
              FUN_00e8b990();
            }
            uVar8 = FUN_0125e7c0();
            local_168 = local_58;
            local_160 = 0;
            if (local_50 == '\0') {
              if (local_58 != (void*)0x0) {
                uVar8 = FUN_00d50b00();
              }
            }
            else {
              local_50 = '\0';
            }
            local_160 = '\x01';
            FUN_019d2cc0(uVar8,&local_168);
            if ((local_160 != '\0') && (local_168 != (void*)0x0)) {
              FUN_00d50b20();
            }
            if ((local_50 != '\0') && (local_58 != (void*)0x0)) {
              FUN_00d50b20();
            }
            if ((local_170 != '\0') && (local_178 != (void*)0x0)) {
              FUN_00d50b20();
            }
            if ((local_38 != '\0') && (local_40 != (void*)0x0)) {
              FUN_00d50b20();
            }
            pvVar4 = _pthread_getspecific(pVar10);
            if (pvVar4 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_01508610();
            FUN_00dd67f0();
            puVar16 = local_40;
            local_150 = 0;
            if (local_38 == '\0') {
              if (local_40 != (void*)0x0) {
                FUN_00d50b00();
              }
            }
            else {
              local_38 = '\0';
            }
            local_150 = '\x01';
            local_158 = puVar16;
            pvVar4 = _pthread_getspecific(pVar10);
            if (pvVar4 != (void *)0x0) {
              FUN_00e8b990();
            }
            uVar8 = FUN_0125e7c0();
            local_148 = local_58;
            local_140 = 0;
            if (local_50 == '\0') {
              if (local_58 != (void*)0x0) {
                uVar8 = FUN_00d50b00();
              }
            }
            else {
              local_50 = '\0';
            }
            local_140 = '\x01';
            FUN_019d2cc0(uVar8,&local_148);
            if ((local_140 != '\0') && (local_148 != (void*)0x0)) {
              FUN_00d50b20();
            }
            if ((local_50 != '\0') && (local_58 != (void*)0x0)) {
              FUN_00d50b20();
            }
            if ((local_150 != '\0') && (local_158 != (void*)0x0)) {
              FUN_00d50b20();
            }
            if ((local_38 != '\0') && (local_40 != (void*)0x0)) {
              FUN_00d50b20();
            }
          }
          if (puVar5 != (void*)0x0) {
            FUN_00d50b20();
          }
        }
        puVar5 = local_70;
        FUN_001159b0();
        pVar10 = (void*)puVar5;
        bVar17 = (byte)local_98;
      }
      uVar14 = CONCAT71((int7)((uint64_t)ppuVar9 >> 8),1);
      local_e8 = 0;
      if ((bVar17 == 0) && (cVar3 = FUN_019c98c0(), cVar3 == '\0')) {
        pVar10 = 0;
        local_e8 = FUN_012912a0(0,0,0);
        uVar14 = 0;
      }
      pvVar4 = _pthread_getspecific(pVar10);
      if ((pvVar4 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
        pVar10 = (void*)local_90;
      }
      FUN_01320d00();
      local_98 = local_80;
      if ((((local_78[0] == '\0') && (local_80 != (void*)0x0)) &&
          (FUN_00d50b00(), local_78[0] != '\0')) && (local_80 != (void*)0x0)) {
        FUN_00d50b20();
      }
      pvVar4 = _pthread_getspecific(pVar10);
      if ((pvVar4 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
        pVar10 = (void*)local_88;
      }
      FUN_012edae0();
      pvVar4 = _pthread_getspecific(pVar10);
      if ((pvVar4 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
        pVar10 = (void*)local_98;
      }
      FUN_0124c6e0();
      local_80 = local_90;
      local_78[0] = '\0';
      cVar3 = FUN_00d23d70();
      if ((local_78[0] != '\0') && (local_80 != (void*)0x0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (void*)0x0)) {
        FUN_00d50b20();
      }
      if (cVar3 == '\0') {
        pvVar4 = _pthread_getspecific(pVar10);
        if ((pvVar4 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
          pVar10 = (void*)local_98;
        }
        FUN_0124c710();
      }
      FUN_01275b30();
      local_a0 = local_80;
      if (local_78[0] == '\0') {
        if (((local_80 != (void*)0x0) && (FUN_00d50b00(), local_78[0] != '\0')) &&
           (local_80 != (void*)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_78[0] = '\0';
      }
      pvVar4 = _pthread_getspecific(pVar10);
      if ((pvVar4 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
        pVar10 = (void*)local_a0;
      }
      FUN_012642b0(local_e8);
      pvVar4 = _pthread_getspecific(pVar10);
      if ((pvVar4 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
        pVar10 = (void*)local_88;
      }
      FUN_012e6a70();
      pvVar4 = _pthread_getspecific(pVar10);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0039e8b0();
      puVar5 = local_40;
      local_130 = 0;
      if (local_38 == '\0') {
        if (local_40 != (void*)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      local_130 = '\x01';
      local_138 = puVar5;
      local_1a8 = local_90;
      local_1a0 = '\0';
      local_198 = 0;
      local_190 = '\0';
      ppuVar9 = &local_1a8;
      FUN_012f0b60(ppuVar9,&local_138,1,0,&local_198);
      pVar10 = (void*)ppuVar9;
      local_c8 = local_80;
      if (local_78[0] == '\0') {
        if (((local_80 != (void*)0x0) && (FUN_00d50b00(), local_78[0] != '\0')) &&
           (local_80 != (void*)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_78[0] = '\0';
      }
      if ((local_190 != '\0') && (local_198 != 0)) {
        FUN_00d50b20();
      }
      if ((local_1a0 != '\0') && (local_1a8 != (void*)0x0)) {
        FUN_00d50b20();
      }
      if ((local_130 != '\0') && (local_138 != (void*)0x0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (void*)0x0)) {
        FUN_00d50b20();
      }
      pvVar4 = _pthread_getspecific(pVar10);
      if ((pvVar4 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
        pVar10 = (void*)local_90;
      }
      iVar15 = FUN_013d9030();
      if (iVar15 == 1) {
        local_188 = local_c8;
        local_180 = '\0';
        pvVar4 = _pthread_getspecific(pVar10);
        if ((pvVar4 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
          pVar10 = (void*)local_90;
        }
        FUN_0132d610();
        local_128 = local_80;
        local_120 = 0;
        if (local_78[0] == '\0') {
          if (local_80 != (void*)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_78[0] = '\0';
        }
        local_120 = '\x01';
        (**(code **)(*this_ptr + 0xa00))();
        pvVar4 = _pthread_getspecific(pVar10);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012caf10();
        puVar5 = local_40;
        local_110 = 0;
        if (local_38 == '\0') {
          if (local_40 != (void*)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        local_110 = '\x01';
        local_118 = puVar5;
        FUN_01297c10(local_e8);
        if ((local_110 != '\0') && (local_118 != (void*)0x0)) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != (void*)0x0)) {
          FUN_00d50b20();
        }
        if ((local_50 != '\0') && (local_58 != (void*)0x0)) {
          FUN_00d50b20();
        }
        if ((local_120 != '\0') && (local_128 != (void*)0x0)) {
          FUN_00d50b20();
        }
        if ((local_78[0] != '\0') && (local_80 != (void*)0x0)) {
          FUN_00d50b20();
        }
        if ((local_180 != '\0') && (local_188 != (void*)0x0)) {
          FUN_00d50b20();
        }
      }
      if (((local_b0 != (int64_t *)0x0) && (local_d0 != (void**)0x0)) &&
         (local_c8 != (void*)0x0)) {
        local_e8 = CONCAT44(local_e8._4_4_,(int)uVar14);
        local_78[0] = '\0';
        local_80 = (void*)0x0;
        local_70 = local_c8;
        local_68 = 0xffffffff;
        local_60 = 0;
        local_68._4_4_ = 0;
        while( true ) {
          if (local_68._4_4_ != 0) {
            if (local_68._4_4_ < 1) {
              iVar15 = -local_68._4_4_;
            }
            else {
              iVar15 = (int)local_68 - local_68._4_4_;
              local_68 = CONCAT44(local_68._4_4_,iVar15);
              FUN_00d23690();
              local_60 = local_60 + local_68._4_4_;
              iVar15 = 0;
            }
            local_68 = CONCAT44(iVar15,(int)local_68);
          }
          lVar6 = (int64_t)(int)local_68;
          iVar15 = (int)local_68 + 1;
          local_68 = CONCAT44(local_68._4_4_,iVar15);
          if (*(int *)((int64_t)local_70 + 0xc) <= iVar15) break;
          lVar12 = local_70[2];
          puVar5 = *(void**)(lVar12 + 8 + lVar6 * 8);
          local_80 = puVar5;
          pvVar4 = _pthread_getspecific((void*)lVar12);
          puVar16 = local_80;
          pVar10 = (void*)lVar12;
          if ((pvVar4 != (void *)0x0) && (lVar6 = FUN_00e8b990(), puVar5 = puVar16, lVar6 != 0)) {
            puVar5 = (void*)puVar16[(uint64_t)(*(uint *)(lVar6 + 0x154) & 1) + 4];
          }
          FUN_0125e930();
          if (local_58 == (void*)0x0) {
            local_38 = '\0';
            local_40 = (void*)0x0;
            puVar16 = (void*)0x0;
          }
          else {
            pvVar4 = _pthread_getspecific(pVar10);
            if (pvVar4 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0125e930();
            puVar5 = (void*)CONCAT71(uStack_bf,local_c0);
            pvVar4 = _pthread_getspecific(pVar10);
            if (pvVar4 != (void *)0x0) {
              puVar5 = (void*)CONCAT71(uStack_bf,local_c0);
              lVar6 = FUN_00e8b990();
              if (lVar6 != 0) {
                puVar5 = (void*)puVar5[(uint64_t)(*(uint *)(lVar6 + 0x154) & 1) + 4];
              }
            }
            FUN_0152ebe0();
            puVar16 = local_40;
            if (local_38 == '\0') {
              if (local_40 == (void*)0x0) {
                puVar16 = (void*)0x0;
              }
              else {
                FUN_00d50b00();
                if ((local_38 != '\0') && (local_40 != (void*)0x0)) {
                  FUN_00d50b20();
                }
              }
            }
            else {
              local_38 = '\0';
            }
            if ((local_b8 != '\0') && (CONCAT71(uStack_bf,local_c0) != 0)) {
              FUN_00d50b20();
            }
          }
          if ((local_50 != '\0') && (local_58 != (void*)0x0)) {
            FUN_00d50b20();
          }
          if (puVar16 != (void*)0x0) {
            pvVar4 = _pthread_getspecific(pVar10);
            if (pvVar4 != (void *)0x0) {
              FUN_00e8b990();
            }
            uVar8 = FUN_0125e7c0();
            local_108 = local_58;
            local_100 = 0;
            if (local_50 == '\0') {
              if (local_58 != (void*)0x0) {
                uVar8 = FUN_00d50b00();
              }
            }
            else {
              local_50 = '\0';
            }
            local_100 = '\x01';
            FUN_019d2d70(uVar8,&local_108);
            puVar1 = local_40;
            if (local_38 == '\0') {
              if (((local_40 != (void*)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
                 (local_40 != (void*)0x0)) {
                FUN_00d50b20();
              }
            }
            else {
              local_38 = '\0';
            }
            if ((local_100 != '\0') && (local_108 != (void*)0x0)) {
              FUN_00d50b20();
            }
            if ((local_50 != '\0') && (local_58 != (void*)0x0)) {
              FUN_00d50b20();
            }
            pvVar4 = _pthread_getspecific(pVar10);
            if (pvVar4 != (void *)0x0) {
              FUN_00e8b990();
            }
            uVar8 = FUN_0125e7c0();
            puVar5 = local_58;
            local_f0 = 0;
            if (local_50 == '\0') {
              if (local_58 != (void*)0x0) {
                uVar8 = FUN_00d50b00();
              }
            }
            else {
              local_50 = '\0';
            }
            local_f0 = '\x01';
            local_f8 = puVar5;
            FUN_019d2d70(uVar8,&local_f8);
            puVar2 = local_40;
            if (local_38 == '\0') {
              if (((local_40 != (void*)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
                 (local_40 != (void*)0x0)) {
                FUN_00d50b20();
              }
            }
            else {
              local_38 = '\0';
            }
            if ((local_f0 != '\0') && (local_f8 != (void*)0x0)) {
              FUN_00d50b20();
            }
            if ((local_50 != '\0') && (local_58 != (void*)0x0)) {
              FUN_00d50b20();
            }
            if ((puVar1 != (void*)0x0) && (puVar2 != (void*)0x0)) {
              pvVar4 = _pthread_getspecific(pVar10);
              if (pvVar4 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_00dd6320();
              FUN_015084d0();
              pvVar4 = _pthread_getspecific(pVar10);
              if ((pvVar4 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
                puVar16 = (void*)puVar16[(uint64_t)(*(uint *)(lVar6 + 0x154) & 1) + 4];
              }
              FUN_00dd6320();
              FUN_015085a0();
              puVar5 = puVar16;
            }
            if (puVar2 != (void*)0x0) {
              FUN_00d50b20();
            }
            if (puVar1 != (void*)0x0) {
              FUN_00d50b20();
            }
            FUN_00d50b20();
          }
        }
        puVar16 = local_70;
        FUN_001159b0();
        pVar10 = (void*)puVar16;
        uVar14 = local_e8 & 0xffffffff;
      }
      if ((char)uVar14 != '\0') {
        pvVar4 = _pthread_getspecific(pVar10);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012f49a0();
      }
      if (local_c8 != (void*)0x0) {
        FUN_00d50b20();
      }
      if (local_a0 != (void*)0x0) {
        FUN_00d50b20();
      }
      if (local_98 != (void*)0x0) {
        FUN_00d50b20();
      }
      if (local_d0 != (void**)0x0 && local_41 == 0) {
        FUN_00d50b20();
      }
      local_41 = local_41 | local_b0 == (int64_t *)0x0;
      if (local_41 == 0) {
        FUN_00d50b20();
      }
      if (local_a8 != (void*)0x0) {
        FUN_00d50b20();
      }
      if (local_88 != (void*)0x0) {
        FUN_00d50b20();
      }
      if (local_d8 != (void*)0x0) {
        FUN_00d50b20();
      }
    }
    if (local_90 != (void*)0x0) {
      uVar14 = CONCAT71((int7)((uint64_t)puVar5 >> 8),1);
      FUN_00d50b20();
      goto LAB_019d1e96;
    }
  }
  uVar14 = 0;
LAB_019d1e96:
  return uVar14 & 0xffffffff;
}

