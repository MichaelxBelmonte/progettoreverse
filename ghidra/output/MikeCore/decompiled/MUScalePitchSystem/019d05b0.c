// Function: FUN_019d05b0
// Address: 019d05b0
// Size: 6243 bytes
// Class: MUScalePitchSystem


/* WARNING: Removing unreachable block (ram,0x019d13bc) */
/* WARNING: Removing unreachable block (ram,0x019d13c8) */
/* WARNING: Removing unreachable block (ram,0x019d129f) */
/* WARNING: Removing unreachable block (ram,0x019d12ab) */
/* WARNING: Removing unreachable block (ram,0x019d108c) */
/* WARNING: Removing unreachable block (ram,0x019d1098) */
/* WARNING: Removing unreachable block (ram,0x019d118b) */
/* WARNING: Removing unreachable block (ram,0x019d1197) */
/* WARNING: Removing unreachable block (ram,0x019d12f7) */
/* WARNING: Removing unreachable block (ram,0x019d1303) */
/* WARNING: Removing unreachable block (ram,0x019d159c) */
/* WARNING: Removing unreachable block (ram,0x019d15a8) */

ulonglong FUN_019d05b0(undefined8 param_1,char param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  char cVar3;
  void *pvVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 uVar8;
  undefined8 **ppuVar9;
  pthread_key_t pVar10;
  undefined8 uVar11;
  longlong lVar12;
  char *pcVar13;
  ulonglong uVar14;
  int iVar15;
  longlong *unaff_RDI;
  undefined8 *puVar16;
  byte bVar17;
  undefined8 extraout_XMM0_Qa;
  undefined8 *local_1a8;
  char local_1a0;
  longlong local_198;
  char local_190;
  undefined8 *local_188;
  char local_180;
  undefined8 *local_178;
  char local_170;
  undefined8 *local_168;
  char local_160;
  undefined8 *local_158;
  char local_150;
  undefined8 *local_148;
  char local_140;
  undefined8 *local_138;
  char local_130;
  undefined8 *local_128;
  char local_120;
  undefined8 *local_118;
  char local_110;
  undefined8 *local_108;
  char local_100;
  undefined8 *local_f8;
  char local_f0;
  ulonglong local_e8;
  undefined8 local_e0;
  undefined8 *local_d8;
  undefined8 **local_d0;
  undefined8 *local_c8;
  char local_c0;
  undefined7 uStack_bf;
  char local_b8;
  longlong *local_b0;
  undefined8 *local_a8;
  undefined8 *local_a0;
  undefined8 *local_98;
  undefined8 *local_90;
  undefined8 *local_88;
  undefined8 *local_80;
  char local_78 [8];
  undefined8 *local_70;
  undefined8 local_68;
  int local_60;
  undefined8 *local_58;
  char local_50;
  byte local_41;
  undefined8 *local_40;
  char local_38;
  
  bVar17 = (byte)param_1;
  uVar14 = 0;
  uVar8 = param_1;
  cVar3 = (**(code **)("/System/Library/Frameworks/ImageIO.framework/Versions/A/ImageIO" +
                      *unaff_RDI))();
  if (cVar3 == '\0') goto LAB_019d1e96;
  FUN_01993800(extraout_XMM0_Qa,0);
  puVar5 = local_80;
  if (local_78[0] == '\0') {
    if (local_80 != (undefined8 *)0x0) {
      FUN_00d50b00();
      if ((local_78[0] != '\0') && (local_80 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_019d05fe;
    }
  }
  else {
LAB_019d05fe:
    local_90 = puVar5;
    if ((puVar5 != (undefined8 *)0x0) && (param_2 != '\0')) {
      (**(code **)(*unaff_RDI + 0xa10))();
      if (local_40 == (undefined8 *)0x0) {
        local_78[0] = '\0';
        local_80 = (undefined8 *)0x0;
        local_d8 = (undefined8 *)0x0;
      }
      else {
        (**(code **)(*unaff_RDI + 0xa10))();
        pvVar4 = _pthread_getspecific((pthread_key_t)uVar8);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01505b90();
        if (local_78[0] == '\0') {
          if (local_80 == (undefined8 *)0x0) {
            local_d8 = (undefined8 *)0x0;
          }
          else {
            local_d8 = local_80;
            FUN_00d50b00();
            if ((local_78[0] != '\0') && (local_80 != (undefined8 *)0x0)) {
              FUN_00d50b20();
            }
          }
        }
        else {
          local_d8 = local_80;
          local_78[0] = '\0';
        }
        if ((local_50 != '\0') && (local_58 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
      }
      if ((local_38 != '\0') && (local_40 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      (**(code **)(*unaff_RDI + 0xe30))();
      FUN_00d23310();
      puVar5 = local_80;
      pVar10 = (pthread_key_t)CONCAT71((int7)((ulonglong)uVar8 >> 8),local_78[0]);
      pcVar13 = &local_c0;
      if (local_78[0] != '\0') {
        pcVar13 = local_78;
      }
      local_c0 = local_78[0];
      *pcVar13 = '\0';
      if ((local_78[0] != '\0') && (puVar5 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      pvVar4 = _pthread_getspecific(pVar10);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01266fe0();
      local_88 = local_40;
      if (local_38 == '\0') {
        if (((local_40 != (undefined8 *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
           (local_40 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_38 = '\0';
      }
      if ((local_c0 != '\0') && (puVar5 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      puVar5 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      pVar10 = 0x2572358;
      *puVar5 = &DAT_02572358;
      (*DAT_02572370)();
      local_a8 = puVar5;
      pvVar4 = _pthread_getspecific(pVar10);
      if ((pvVar4 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
        pVar10 = (pthread_key_t)local_88;
      }
      FUN_012e5ae0();
      puVar5 = local_80;
      if (local_78[0] == '\0') {
        if (local_80 != (undefined8 *)0x0) {
          FUN_00d50b00();
          if ((local_78[0] != '\0') && (local_80 != (undefined8 *)0x0)) {
            FUN_00d50b20();
          }
          goto LAB_019d08cb;
        }
      }
      else if (local_80 != (undefined8 *)0x0) {
LAB_019d08cb:
        local_78[0] = '\0';
        local_80 = (undefined8 *)0x0;
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
          lVar6 = (longlong)(int)local_68;
          iVar15 = (int)local_68 + 1;
          local_68 = CONCAT44(local_68._4_4_,iVar15);
          if (*(int *)((longlong)local_70 + 0xc) <= iVar15) break;
          local_80 = *(undefined8 **)(local_70[2] + 8 + lVar6 * 8);
          pvVar4 = _pthread_getspecific((pthread_key_t)local_70[2]);
          if (pvVar4 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01264240();
          puVar5 = local_40;
          if ((local_38 != '\0') && (local_40 != (undefined8 *)0x0)) {
            FUN_00d50b20();
          }
          if (puVar5 == local_90) {
            local_40 = local_80;
            local_38 = '\0';
            FUN_00d21140();
            if ((local_38 != '\0') && (local_40 != (undefined8 *)0x0)) {
              FUN_00d50b20();
            }
          }
        }
        puVar5 = local_70;
        FUN_001159b0();
        pVar10 = (pthread_key_t)puVar5;
        FUN_00d50b20();
      }
      if (bVar17 == 0) {
        local_e0 = 0;
        ppuVar9 = (undefined8 **)0x0;
        plVar7 = (longlong *)0x0;
      }
      else {
        local_e0 = 0;
        plVar7 = (longlong *)FUN_00e8fc40();
        local_e0 = 0;
        FUN_00022d50();
        uVar11 = 0;
        local_e0 = 0;
        uVar8 = (**(code **)(*plVar7 + 0x18))();
        local_e0 = CONCAT71((int7)((ulonglong)uVar8 >> 8),1);
        ppuVar9 = (undefined8 **)FUN_00e8fc40();
        FUN_00022d50();
        uVar8 = CONCAT71((int7)((ulonglong)uVar11 >> 8),1);
        local_e0 = uVar8;
        (*(code *)(*ppuVar9)[3])();
        pVar10 = (pthread_key_t)uVar8;
      }
      local_41 = bVar17 ^ 1;
      local_d0 = ppuVar9;
      local_b0 = plVar7;
      if (local_a8 != (undefined8 *)0x0) {
        local_98 = (undefined8 *)CONCAT44(local_98._4_4_,(int)param_1);
        local_78[0] = '\0';
        local_80 = (undefined8 *)0x0;
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
          lVar6 = (longlong)(int)local_68;
          iVar15 = (int)local_68 + 1;
          local_68 = CONCAT44(local_68._4_4_,iVar15);
          if (*(int *)((longlong)local_70 + 0xc) <= iVar15) break;
          lVar12 = local_70[2];
          local_80 = *(undefined8 **)(lVar12 + 8 + lVar6 * 8);
          pvVar4 = _pthread_getspecific((pthread_key_t)lVar12);
          pVar10 = (pthread_key_t)lVar12;
          if (pvVar4 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0125e930();
          if (local_58 == (undefined8 *)0x0) {
            local_38 = '\0';
            local_40 = (undefined8 *)0x0;
            puVar5 = (undefined8 *)0x0;
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
              if (local_40 == (undefined8 *)0x0) {
                puVar5 = (undefined8 *)0x0;
              }
              else {
                FUN_00d50b00();
                if ((local_38 != '\0') && (local_40 != (undefined8 *)0x0)) {
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
          if ((local_50 != '\0') && (local_58 != (undefined8 *)0x0)) {
            FUN_00d50b20();
          }
          if (((puVar5 != (undefined8 *)0x0) && (local_b0 != (longlong *)0x0)) &&
             (local_d0 != (undefined8 **)0x0)) {
            pvVar4 = _pthread_getspecific(pVar10);
            if (pvVar4 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_01507970();
            FUN_00dd67f0();
            puVar16 = local_40;
            local_170 = 0;
            if (local_38 == '\0') {
              if (local_40 != (undefined8 *)0x0) {
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
              if (local_58 != (undefined8 *)0x0) {
                uVar8 = FUN_00d50b00();
              }
            }
            else {
              local_50 = '\0';
            }
            local_160 = '\x01';
            FUN_019d2cc0(uVar8,&local_168);
            if ((local_160 != '\0') && (local_168 != (undefined8 *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_50 != '\0') && (local_58 != (undefined8 *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_170 != '\0') && (local_178 != (undefined8 *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_38 != '\0') && (local_40 != (undefined8 *)0x0)) {
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
              if (local_40 != (undefined8 *)0x0) {
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
              if (local_58 != (undefined8 *)0x0) {
                uVar8 = FUN_00d50b00();
              }
            }
            else {
              local_50 = '\0';
            }
            local_140 = '\x01';
            FUN_019d2cc0(uVar8,&local_148);
            if ((local_140 != '\0') && (local_148 != (undefined8 *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_50 != '\0') && (local_58 != (undefined8 *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_150 != '\0') && (local_158 != (undefined8 *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_38 != '\0') && (local_40 != (undefined8 *)0x0)) {
              FUN_00d50b20();
            }
          }
          if (puVar5 != (undefined8 *)0x0) {
            FUN_00d50b20();
          }
        }
        puVar5 = local_70;
        FUN_001159b0();
        pVar10 = (pthread_key_t)puVar5;
        bVar17 = (byte)local_98;
      }
      uVar14 = CONCAT71((int7)((ulonglong)ppuVar9 >> 8),1);
      local_e8 = 0;
      if ((bVar17 == 0) && (cVar3 = FUN_019c98c0(), cVar3 == '\0')) {
        pVar10 = 0;
        local_e8 = FUN_012912a0(0,0,0);
        uVar14 = 0;
      }
      pvVar4 = _pthread_getspecific(pVar10);
      if ((pvVar4 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
        pVar10 = (pthread_key_t)local_90;
      }
      FUN_01320d00();
      local_98 = local_80;
      if ((((local_78[0] == '\0') && (local_80 != (undefined8 *)0x0)) &&
          (FUN_00d50b00(), local_78[0] != '\0')) && (local_80 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      pvVar4 = _pthread_getspecific(pVar10);
      if ((pvVar4 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
        pVar10 = (pthread_key_t)local_88;
      }
      FUN_012edae0();
      pvVar4 = _pthread_getspecific(pVar10);
      if ((pvVar4 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
        pVar10 = (pthread_key_t)local_98;
      }
      FUN_0124c6e0();
      local_80 = local_90;
      local_78[0] = '\0';
      cVar3 = FUN_00d23d70();
      if ((local_78[0] != '\0') && (local_80 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      if (cVar3 == '\0') {
        pvVar4 = _pthread_getspecific(pVar10);
        if ((pvVar4 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
          pVar10 = (pthread_key_t)local_98;
        }
        FUN_0124c710();
      }
      FUN_01275b30();
      local_a0 = local_80;
      if (local_78[0] == '\0') {
        if (((local_80 != (undefined8 *)0x0) && (FUN_00d50b00(), local_78[0] != '\0')) &&
           (local_80 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_78[0] = '\0';
      }
      pvVar4 = _pthread_getspecific(pVar10);
      if ((pvVar4 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
        pVar10 = (pthread_key_t)local_a0;
      }
      FUN_012642b0(local_e8);
      pvVar4 = _pthread_getspecific(pVar10);
      if ((pvVar4 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
        pVar10 = (pthread_key_t)local_88;
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
        if (local_40 != (undefined8 *)0x0) {
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
      pVar10 = (pthread_key_t)ppuVar9;
      local_c8 = local_80;
      if (local_78[0] == '\0') {
        if (((local_80 != (undefined8 *)0x0) && (FUN_00d50b00(), local_78[0] != '\0')) &&
           (local_80 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_78[0] = '\0';
      }
      if ((local_190 != '\0') && (local_198 != 0)) {
        FUN_00d50b20();
      }
      if ((local_1a0 != '\0') && (local_1a8 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_130 != '\0') && (local_138 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      pvVar4 = _pthread_getspecific(pVar10);
      if ((pvVar4 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
        pVar10 = (pthread_key_t)local_90;
      }
      iVar15 = FUN_013d9030();
      if (iVar15 == 1) {
        local_188 = local_c8;
        local_180 = '\0';
        pvVar4 = _pthread_getspecific(pVar10);
        if ((pvVar4 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
          pVar10 = (pthread_key_t)local_90;
        }
        FUN_0132d610();
        local_128 = local_80;
        local_120 = 0;
        if (local_78[0] == '\0') {
          if (local_80 != (undefined8 *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_78[0] = '\0';
        }
        local_120 = '\x01';
        (**(code **)(*unaff_RDI + 0xa00))();
        pvVar4 = _pthread_getspecific(pVar10);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012caf10();
        puVar5 = local_40;
        local_110 = 0;
        if (local_38 == '\0') {
          if (local_40 != (undefined8 *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        local_110 = '\x01';
        local_118 = puVar5;
        FUN_01297c10(local_e8);
        if ((local_110 != '\0') && (local_118 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_50 != '\0') && (local_58 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_120 != '\0') && (local_128 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_78[0] != '\0') && (local_80 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_180 != '\0') && (local_188 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
      }
      if (((local_b0 != (longlong *)0x0) && (local_d0 != (undefined8 **)0x0)) &&
         (local_c8 != (undefined8 *)0x0)) {
        local_e8 = CONCAT44(local_e8._4_4_,(int)uVar14);
        local_78[0] = '\0';
        local_80 = (undefined8 *)0x0;
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
          lVar6 = (longlong)(int)local_68;
          iVar15 = (int)local_68 + 1;
          local_68 = CONCAT44(local_68._4_4_,iVar15);
          if (*(int *)((longlong)local_70 + 0xc) <= iVar15) break;
          lVar12 = local_70[2];
          puVar5 = *(undefined8 **)(lVar12 + 8 + lVar6 * 8);
          local_80 = puVar5;
          pvVar4 = _pthread_getspecific((pthread_key_t)lVar12);
          puVar16 = local_80;
          pVar10 = (pthread_key_t)lVar12;
          if ((pvVar4 != (void *)0x0) && (lVar6 = FUN_00e8b990(), puVar5 = puVar16, lVar6 != 0)) {
            puVar5 = (undefined8 *)puVar16[(ulonglong)(*(uint *)(lVar6 + 0x154) & 1) + 4];
          }
          FUN_0125e930();
          if (local_58 == (undefined8 *)0x0) {
            local_38 = '\0';
            local_40 = (undefined8 *)0x0;
            puVar16 = (undefined8 *)0x0;
          }
          else {
            pvVar4 = _pthread_getspecific(pVar10);
            if (pvVar4 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0125e930();
            puVar5 = (undefined8 *)CONCAT71(uStack_bf,local_c0);
            pvVar4 = _pthread_getspecific(pVar10);
            if (pvVar4 != (void *)0x0) {
              puVar5 = (undefined8 *)CONCAT71(uStack_bf,local_c0);
              lVar6 = FUN_00e8b990();
              if (lVar6 != 0) {
                puVar5 = (undefined8 *)puVar5[(ulonglong)(*(uint *)(lVar6 + 0x154) & 1) + 4];
              }
            }
            FUN_0152ebe0();
            puVar16 = local_40;
            if (local_38 == '\0') {
              if (local_40 == (undefined8 *)0x0) {
                puVar16 = (undefined8 *)0x0;
              }
              else {
                FUN_00d50b00();
                if ((local_38 != '\0') && (local_40 != (undefined8 *)0x0)) {
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
          if ((local_50 != '\0') && (local_58 != (undefined8 *)0x0)) {
            FUN_00d50b20();
          }
          if (puVar16 != (undefined8 *)0x0) {
            pvVar4 = _pthread_getspecific(pVar10);
            if (pvVar4 != (void *)0x0) {
              FUN_00e8b990();
            }
            uVar8 = FUN_0125e7c0();
            local_108 = local_58;
            local_100 = 0;
            if (local_50 == '\0') {
              if (local_58 != (undefined8 *)0x0) {
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
              if (((local_40 != (undefined8 *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
                 (local_40 != (undefined8 *)0x0)) {
                FUN_00d50b20();
              }
            }
            else {
              local_38 = '\0';
            }
            if ((local_100 != '\0') && (local_108 != (undefined8 *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_50 != '\0') && (local_58 != (undefined8 *)0x0)) {
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
              if (local_58 != (undefined8 *)0x0) {
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
              if (((local_40 != (undefined8 *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
                 (local_40 != (undefined8 *)0x0)) {
                FUN_00d50b20();
              }
            }
            else {
              local_38 = '\0';
            }
            if ((local_f0 != '\0') && (local_f8 != (undefined8 *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_50 != '\0') && (local_58 != (undefined8 *)0x0)) {
              FUN_00d50b20();
            }
            if ((puVar1 != (undefined8 *)0x0) && (puVar2 != (undefined8 *)0x0)) {
              pvVar4 = _pthread_getspecific(pVar10);
              if (pvVar4 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_00dd6320();
              FUN_015084d0();
              pvVar4 = _pthread_getspecific(pVar10);
              if ((pvVar4 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
                puVar16 = (undefined8 *)puVar16[(ulonglong)(*(uint *)(lVar6 + 0x154) & 1) + 4];
              }
              FUN_00dd6320();
              FUN_015085a0();
              puVar5 = puVar16;
            }
            if (puVar2 != (undefined8 *)0x0) {
              FUN_00d50b20();
            }
            if (puVar1 != (undefined8 *)0x0) {
              FUN_00d50b20();
            }
            FUN_00d50b20();
          }
        }
        puVar16 = local_70;
        FUN_001159b0();
        pVar10 = (pthread_key_t)puVar16;
        uVar14 = local_e8 & 0xffffffff;
      }
      if ((char)uVar14 != '\0') {
        pvVar4 = _pthread_getspecific(pVar10);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012f49a0();
      }
      if (local_c8 != (undefined8 *)0x0) {
        FUN_00d50b20();
      }
      if (local_a0 != (undefined8 *)0x0) {
        FUN_00d50b20();
      }
      if (local_98 != (undefined8 *)0x0) {
        FUN_00d50b20();
      }
      if (local_d0 != (undefined8 **)0x0 && local_41 == 0) {
        FUN_00d50b20();
      }
      local_41 = local_41 | local_b0 == (longlong *)0x0;
      if (local_41 == 0) {
        FUN_00d50b20();
      }
      if (local_a8 != (undefined8 *)0x0) {
        FUN_00d50b20();
      }
      if (local_88 != (undefined8 *)0x0) {
        FUN_00d50b20();
      }
      if (local_d8 != (undefined8 *)0x0) {
        FUN_00d50b20();
      }
    }
    if (local_90 != (undefined8 *)0x0) {
      uVar14 = CONCAT71((int7)((ulonglong)puVar5 >> 8),1);
      FUN_00d50b20();
      goto LAB_019d1e96;
    }
  }
  uVar14 = 0;
LAB_019d1e96:
  return uVar14 & 0xffffffff;
}


