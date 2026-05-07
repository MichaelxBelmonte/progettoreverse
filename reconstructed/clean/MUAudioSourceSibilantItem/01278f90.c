// Function: FUN_01278f90
// Address: 01278f90
// Size: 11313 bytes
// Class: MUAudioSourceSibilantItem
// === MUAudioSourceSibilantItem properties ===
//                   _audioSourceElement
//                   _suggestsSeparateComponentRenderers
//                   _polyphonicSeparationDirectoryIdentifier
//                   _pulseTimeline


void FUN_01278f90(uint32_t param_1,uint64_t param_2)

{
  void*****pppppuVar1;
  bool bVar2;
  bool bVar3;
  void*******pppppppuVar4;
  void*puVar5;
  char cVar6;
  char cVar7;
  uint32_t uVar8;
  void *pvVar9;
  int64_t lVar10;
  void*******pppppppuVar11;
  undefined7 uVar18;
  void******ppppppuVar12;
  uint64_t uVar13;
  void*******pppppppuVar14;
  int64_t lVar15;
  void****ppppuVar16;
  void*******pppppppuVar17;
  void* pVar19;
  void*******pppppppuVar20;
  int iVar21;
  int iVar22;
  uint64_t arg1;
  void******ppppppuVar23;
  int64_t *this_ptr;
  char cVar24;
  void*****pppppuVar25;
  void*puVar26;
  uint64_t uVar27;
  uint uVar28;
  char cVar29;
  void*puVar30;
  bool bVar31;
  void******ppppppuVar32;
  double dVar33;
  uint64_t local_1c8;
  uint8_t local_1c0;
  void*****local_1b8;
  uint8_t local_1b0;
  void*******local_1a8;
  uint8_t local_1a0;
  void*******local_198;
  uint8_t local_190;
  int64_t local_188;
  uint8_t local_180;
  void*******local_178;
  uint8_t local_170;
  int64_t local_168;
  uint8_t local_160;
  uint64_t local_158;
  int64_t local_150;
  char local_148;
  int64_t local_140;
  char local_138;
  uint64_t local_130;
  uint64_t local_128;
  uint64_t local_120;
  void******local_118;
  void*******local_110;
  uint32_t local_104;
  void******local_100;
  void*******local_d8;
  void******local_d0;
  void*******local_c8;
  uint64_t local_c0;
  int local_b8;
  void*******local_b0;
  void*******local_a8;
  void******local_a0;
  double local_98;
  void*****local_90;
  void*******local_88;
  void*local_80;
  void*******local_78;
  void*local_68;
  char local_60 [8];
  void*******local_58;
  void*******local_50;
  void*******local_48;
  uint local_3c;
  void*******local_38;
  
  local_110 = (void*******)CONCAT44(local_110._4_4_,param_1);
  local_130 = param_2;
  local_128 = FUN_00e7bcc0();
  local_80 = (void*)0x0;
  local_48 = (void*******)0x0;
  local_78 = (void*******)0x0;
  local_58 = (void*******)0x0;
  local_50 = (void*******)0x0;
  local_38 = (void*******)0x0;
  local_158 = FUN_00e7bcc0();
  iVar21 = (int)arg1;
  if (iVar21 == 0) {
    cVar7 = '\0';
    local_48 = (void*******)0x0;
    bVar3 = false;
    local_78 = (void*******)0x0;
    cVar24 = '\0';
    pppppppuVar20 = (void*******)0x0;
    local_50 = (void*******)0x0;
    local_38 = (void*******)0x0;
    cVar29 = '\0';
    pppppuVar25 = (void*****)0x0;
    bVar2 = false;
    local_b0 = (void*******)0x0;
    goto LAB_0127bbcf;
  }
  if (param_2 >> 0x20 == 0) {
    local_d8 = (void*******)CONCAT44(local_d8._4_4_,1);
    FUN_00e7c240();
  }
  local_150 = *this_ptr;
  local_148 = '\0';
  FUN_00243390();
  pppppppuVar20 = (void*******)*this_ptr;
  if (pppppppuVar20 == local_d8) {
    if (((char)this_ptr[1] != '\0') || (local_d8 == (void*******)0x0)) goto LAB_0127916f;
    if ((char)local_d0 == '\0') {
      FUN_00d50b00();
      goto LAB_0127916b;
    }
LAB_0127912e:
    *(void*)(this_ptr + 1) = 1;
    local_d0._0_1_ = '\0';
  }
  else {
    lVar15 = this_ptr[1];
    if ((char)local_d0 != '\0') {
      *this_ptr = (int64_t)local_d8;
      if (((char)lVar15 != '\0') && (pppppppuVar20 != (void*******)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_0127912e;
    }
    if (local_d8 != (void*******)0x0) {
      FUN_00d50b00();
    }
    *this_ptr = (int64_t)local_d8;
    if (((char)lVar15 != '\0') && (pppppppuVar20 != (void*******)0x0)) {
      FUN_00d50b20();
    }
LAB_0127916b:
    *(void*)(this_ptr + 1) = 1;
LAB_0127916f:
    if (((char)local_d0 != '\0') && (local_d8 != (void*******)0x0)) {
      FUN_00d50b20();
    }
  }
  puVar26 = (void*)0x0;
  if ((local_148 != '\0') && (local_150 != 0)) {
    FUN_00d50b20();
  }
  lVar15 = *this_ptr;
  uVar28 = *(uint *)(lVar15 + 0xc);
  puVar30 = (void*)(uint64_t)uVar28;
  if (0 < (int)uVar28) {
    puVar26 = &g_02802558;
    while( true ) {
      uVar28 = uVar28 - 1;
      lVar15 = *(int64_t *)(*(int64_t *)(lVar15 + 0x10) + (uint64_t)uVar28 * 8);
      pvVar9 = _pthread_getspecific(uVar28);
      if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
        lVar15 = *(int64_t *)(lVar15 + 0x20 + (uint64_t)(*(uint *)(lVar10 + 0x154) & 1) * 8);
      }
      if (*(int64_t *)(lVar15 + 200) == 0) {
        FUN_00d23620();
      }
      else {
        FUN_00d50b00();
        FUN_00d50b20();
      }
      if ((int64_t)puVar30 < 2) break;
      puVar30 = (void*)((int64_t)puVar30 + -1);
      lVar15 = *this_ptr;
    }
  }
  FUN_01271180();
  local_b0 = local_d8;
  uVar18 = (undefined7)((uint64_t)local_d8 >> 8);
  if (local_d8 == (void*******)0x0) {
    local_104 = 1;
    local_120 = 0;
    bVar2 = false;
    local_b0 = (void*******)0x0;
    if ((int)MACH_HEADER.filetype < 1) goto LAB_012792e2;
LAB_012793ed:
    ppppppuVar23 = (void******)0x0;
    puVar30 = &g_02802558;
    local_90 = (void*****)0x0;
    local_3c = 0;
    local_38 = (void*******)0x0;
    local_50 = (void*******)0x0;
    local_88 = (void*******)0x0;
    local_68 = (void*)0x0;
    local_78 = (void*******)0x0;
    bVar3 = false;
    local_48 = (void*******)0x0;
    local_80 = (void*)0x0;
    do {
      ppppppuVar12 = local_b0[2];
      pppppuVar25 = ppppppuVar12[(int64_t)ppppppuVar23];
      local_118 = ppppppuVar23;
      if (local_90 == pppppuVar25) {
        if (((char)local_3c == '\0') && (local_90 != (void*****)0x0)) {
          local_3c = (uint)CONCAT71((int7)((uint64_t)ppppppuVar12 >> 8),1);
          FUN_00d50b00();
        }
      }
      else {
        if (pppppuVar25 != (void*****)0x0) {
          ppppppuVar12 = (void******)FUN_00d50b00();
        }
        if (((char)local_3c == '\0') || (local_90 == (void*****)0x0)) {
          local_3c = (uint)CONCAT71((int7)((uint64_t)ppppppuVar12 >> 8),1);
          local_90 = pppppuVar25;
        }
        else {
          local_90 = pppppuVar25;
          uVar13 = FUN_00d50b20();
          local_3c = (uint)CONCAT71((int7)((uint64_t)uVar13 >> 8),1);
        }
      }
      FUN_00d23310();
      local_a8 = (void*******)CONCAT71(local_a8._1_7_,(char)local_d0);
      pppppppuVar11 = &local_a8;
      pppppppuVar14 = &local_d0;
      if ((char)local_d0 == '\0') {
        pppppppuVar14 = pppppppuVar11;
      }
      *(void*)pppppppuVar14 = 0;
      if (((char)local_d0 != '\0') && (local_d8 != (void*******)0x0)) {
        pppppppuVar14 = (void*******)FUN_00d50b20();
      }
      pppppppuVar20 = local_38;
      pVar19 = (void*)pppppppuVar11;
      if (local_d8 == local_38) {
        if (((char)local_50 == '\0') && (local_d8 != (void*******)0x0)) {
          pVar19 = (void*)CONCAT71((int7)((uint64_t)pppppppuVar11 >> 8),1);
          local_98 = (double)CONCAT44(local_98._4_4_,pVar19);
          if ((char)local_a8 == '\0') {
            FUN_00d50b00();
          }
        }
        else if (((char)local_a8 == '\0') || (local_d8 == (void*******)0x0)) {
          local_98 = (double)CONCAT44(local_98._4_4_,(int)local_50);
        }
        else {
          FUN_00d50b20();
          local_98 = (double)CONCAT44(local_98._4_4_,(int)local_50);
          pppppppuVar20 = local_38;
        }
      }
      else {
        pppppppuVar20 = local_d8;
        if ((char)local_a8 == '\0') {
          if (local_d8 != (void*******)0x0) {
            pppppppuVar14 = (void*******)FUN_00d50b00();
          }
          local_98 = (double)CONCAT44(local_98._4_4_,
                                      (int)CONCAT71((int7)((uint64_t)pppppppuVar14 >> 8),1));
          if (((char)local_50 != '\0') && (local_38 != (void*******)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_98 = (double)CONCAT44(local_98._4_4_,
                                      (int)CONCAT71((int7)((uint64_t)pppppppuVar14 >> 8),1));
          if (((char)local_50 != '\0') && (local_38 != (void*******)0x0)) {
            FUN_00d50b20();
          }
        }
      }
      pvVar9 = _pthread_getspecific(pVar19);
      if ((pvVar9 == (void *)0x0) || (lVar15 = FUN_00e8b990(), lVar15 == 0)) {
        ppppppuVar23 = pppppppuVar20[0x19];
      }
      else {
        ppppppuVar23 = (void******)
                       pppppppuVar20[(uint64_t)(*(uint *)(lVar15 + 0x154) & 1) + 4][0x19];
      }
      if (ppppppuVar23 != (void******)0x0) {
        FUN_00d50b00();
      }
      pvVar9 = _pthread_getspecific(pVar19);
      if (pvVar9 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar13 = FUN_0152ebe0();
      if (local_d8 == local_48) {
        if (((char)local_80 != '\0') || (local_d8 == (void*******)0x0)) {
          puVar26 = (void*)((uint64_t)local_80 & 0xffffffff);
          goto joined_r0x012797a0;
        }
        pppppppuVar11 = local_48;
        if ((char)local_d0 == '\0') {
          FUN_00d50b00();
          pppppppuVar11 = local_48;
          goto joined_r0x01279b80;
        }
LAB_01279738:
        local_d0._0_1_ = '\0';
        puVar5 = (void*)CONCAT71((int7)((uint64_t)uVar13 >> 8),1);
        local_48 = pppppppuVar11;
      }
      else {
        if ((char)local_d0 != '\0') {
          pppppppuVar11 = local_d8;
          if (((char)local_80 != '\0') && (local_48 != (void*******)0x0)) {
            uVar13 = FUN_00d50b20();
          }
          goto LAB_01279738;
        }
        if (local_d8 != (void*******)0x0) {
          FUN_00d50b00();
        }
        pppppppuVar11 = local_d8;
        if (((char)local_80 != '\0') && (local_48 != (void*******)0x0)) {
          FUN_00d50b20();
        }
joined_r0x01279b80:
        puVar26 = (void*)CONCAT71((int7)((uint64_t)puVar26 >> 8),1);
        local_48 = pppppppuVar11;
joined_r0x012797a0:
        puVar5 = puVar26;
        if (((char)local_d0 != '\0') && (local_d8 != (void*******)0x0)) {
          FUN_00d50b20();
        }
      }
      local_80 = puVar5;
      if (ppppppuVar23 != (void******)0x0) {
        FUN_00d50b20();
      }
      pvVar9 = _pthread_getspecific(pVar19);
      if ((pvVar9 == (void *)0x0) || (lVar15 = FUN_00e8b990(), lVar15 == 0)) {
        if (pppppppuVar20[0x20] == (void******)0x0) goto LAB_0127982a;
LAB_0127984f:
        pvVar9 = _pthread_getspecific(pVar19);
        if (pvVar9 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012e8920();
      }
      else {
        if (pppppppuVar20[(uint64_t)(*(uint *)(lVar15 + 0x154) & 1) + 4][0x20] !=
            (void*****)0x0) goto LAB_0127984f;
LAB_0127982a:
        local_a0._0_1_ = '\0';
        local_a8 = (void*******)0x0;
      }
      pvVar9 = _pthread_getspecific(pVar19);
      if (pvVar9 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012caf10();
      if (local_d8 == local_78) {
        if ((bVar3) || (local_d8 == (void*******)0x0)) goto joined_r0x012799a6;
        pppppppuVar11 = local_78;
        if ((char)local_d0 == '\0') {
          FUN_00d50b00();
          pppppppuVar11 = local_78;
          goto joined_r0x01279bc0;
        }
LAB_0127992f:
        local_d0._0_1_ = '\0';
        bVar3 = true;
        local_78 = pppppppuVar11;
      }
      else {
        if ((char)local_d0 != '\0') {
          pppppppuVar11 = local_d8;
          if ((bVar3) && (local_78 != (void*******)0x0)) {
            FUN_00d50b20();
          }
          goto LAB_0127992f;
        }
        if (local_d8 != (void*******)0x0) {
          FUN_00d50b00();
        }
        pppppppuVar11 = local_d8;
        if ((bVar3) && (local_78 != (void*******)0x0)) {
          FUN_00d50b20();
        }
joined_r0x01279bc0:
        bVar3 = true;
        local_78 = pppppppuVar11;
joined_r0x012799a6:
        if (((char)local_d0 != '\0') && (local_d8 != (void*******)0x0)) {
          FUN_00d50b20();
        }
      }
      if (((char)local_a0 != '\0') && (local_a8 != (void*******)0x0)) {
        FUN_00d50b20();
      }
      if (iVar21 < 0) {
        pvVar9 = _pthread_getspecific(pVar19);
        if ((pvVar9 == (void *)0x0) || (lVar15 = FUN_00e8b990(), lVar15 == 0)) {
          ppppppuVar23 = pppppppuVar20[0x15];
        }
        else {
          ppppppuVar23 = (void******)
                         pppppppuVar20[(uint64_t)(*(uint *)(lVar15 + 0x154) & 1) + 4][0x15];
        }
        if (ppppppuVar23 != (void******)0x0) {
          FUN_00d50b00();
          FUN_00d50b20();
          pvVar9 = _pthread_getspecific(pVar19);
          if ((pvVar9 == (void *)0x0) || (lVar15 = FUN_00e8b990(), lVar15 == 0)) {
            ppppppuVar23 = pppppppuVar20[0x15];
          }
          else {
            ppppppuVar23 = (void******)
                           pppppppuVar20[(uint64_t)(*(uint *)(lVar15 + 0x154) & 1) + 4][0x15];
          }
          if (ppppppuVar23 != (void******)0x0) {
            FUN_00d50b00();
          }
          pvVar9 = _pthread_getspecific(pVar19);
          if (pvVar9 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012dff70();
          pppppppuVar14 = local_88;
          local_58 = local_d8;
          uVar18 = (undefined7)((uint64_t)puVar26 >> 8);
          pppppppuVar11 = local_d8;
          if (local_d8 == local_88) {
            bVar31 = (char)local_68 != '\0';
            if ((bVar31) || (local_d8 == (void*******)0x0)) goto joined_r0x01279c3f;
            if ((char)local_d0 != '\0') {
              local_58 = local_88;
              goto LAB_01279b66;
            }
            local_68 = (void*)CONCAT71(uVar18,1);
            FUN_00d50b00();
            local_58 = pppppppuVar14;
            if ((char)local_d0 == '\0') goto LAB_01279c70;
LAB_01279c5f:
            if (local_d8 != (void*******)0x0) {
              FUN_00d50b20();
            }
          }
          else if ((char)local_d0 == '\0') {
            if (local_d8 != (void*******)0x0) {
              FUN_00d50b00();
            }
            puVar26 = (void*)CONCAT71(uVar18,1);
            bVar31 = (char)local_68 != '\0';
            pppppppuVar14 = local_58;
            local_68 = puVar26;
            if ((bVar31) && (local_88 != (void*******)0x0)) {
              FUN_00d50b20();
              pppppppuVar14 = local_58;
            }
joined_r0x01279c3f:
            local_58 = pppppppuVar14;
            if ((char)local_d0 != '\0') goto LAB_01279c5f;
          }
          else {
            if (((char)local_68 != '\0') && (local_88 != (void*******)0x0)) {
              FUN_00d50b20();
            }
LAB_01279b66:
            local_d0._0_1_ = '\0';
            local_68 = (void*)CONCAT71(uVar18,1);
          }
LAB_01279c70:
          if (ppppppuVar23 != (void******)0x0) {
            FUN_00d50b20();
          }
          local_50 = (void*******)((uint64_t)local_98 & 0xffffffff);
          pvVar9 = _pthread_getspecific((void*)pppppppuVar11);
          pppppppuVar14 = local_58;
          if (pvVar9 != (void *)0x0) {
            local_50 = (void*******)((uint64_t)local_98 & 0xffffffff);
            lVar15 = FUN_00e8b990();
            pppppppuVar14 = local_58;
            if (lVar15 != 0) {
              pppppppuVar14 =
                   (void*******)local_58[(uint64_t)(*(uint *)(lVar15 + 0x154) & 1) + 4];
              pppppppuVar11 = local_58;
            }
          }
          ppppppuVar23 = pppppppuVar14[0x1e];
          local_50 = (void*******)((uint64_t)local_98 & 0xffffffff);
          pvVar9 = _pthread_getspecific((void*)pppppppuVar11);
          pppppppuVar14 = local_58;
          if (pvVar9 != (void *)0x0) {
            local_50 = (void*******)((uint64_t)local_98 & 0xffffffff);
            lVar15 = FUN_00e8b990();
            pppppppuVar14 = local_58;
            if (lVar15 != 0) {
              pppppppuVar11 = local_58;
              pppppppuVar14 =
                   (void*******)local_58[(uint64_t)(*(uint *)(lVar15 + 0x154) & 1) + 4];
            }
          }
          if (iVar21 != 0) {
            ppppppuVar32 = (void******)
                           ((double)pppppppuVar14[0x28] + g_02391030 + g_02391030);
            ppppppuVar12 = g_0241b6a8;
            if ((double)g_0241b6a8 <= (double)ppppppuVar32) {
              ppppppuVar12 = ppppppuVar32;
            }
            ppppppuVar32 = pppppppuVar14[0x1e];
            if ((double)ppppppuVar12 <= (double)pppppppuVar14[0x1e]) {
              ppppppuVar32 = ppppppuVar12;
            }
            do {
              pvVar9 = _pthread_getspecific((void*)pppppppuVar11);
              if ((pvVar9 != (void *)0x0) && (lVar15 = FUN_00e8b990(), lVar15 != 0)) {
                pppppppuVar11 = local_78;
              }
              pvVar9 = _pthread_getspecific((void*)pppppppuVar11);
              if ((pvVar9 != (void *)0x0) && (lVar15 = FUN_00e8b990(), lVar15 != 0)) {
                pppppppuVar11 = local_48;
              }
              uVar13 = FUN_01507970();
              local_38 = (void*******)FUN_016c98e0(uVar13,0);
              pvVar9 = _pthread_getspecific((void*)pppppppuVar11);
              if ((pvVar9 != (void *)0x0) && (lVar15 = FUN_00e8b990(), lVar15 != 0)) {
                pppppppuVar11 = local_78;
              }
              pvVar9 = _pthread_getspecific((void*)pppppppuVar11);
              if ((pvVar9 != (void *)0x0) && (lVar15 = FUN_00e8b990(), lVar15 != 0)) {
                pppppppuVar11 = local_48;
              }
              local_d8 = (void*******)FUN_01507970();
              uVar13 = FUN_00e7b820();
              dVar33 = (double)FUN_016c98e0(uVar13,0);
              if ((double)local_38 - dVar33 <= (double)ppppppuVar23 - (double)ppppppuVar32) break;
              local_a8 = (void*******)CONCAT44(local_a8._4_4_,1);
              local_d8 = (void*******)FUN_00e7c4f0();
              FUN_00e7b820();
            } while (iVar21 != 0);
          }
          local_88 = local_58;
        }
      }
      FUN_00d23340();
      local_a8 = (void*******)CONCAT71(local_a8._1_7_,(char)local_d0);
      pppppppuVar11 = &local_a8;
      pppppppuVar14 = &local_d0;
      if ((char)local_d0 == '\0') {
        pppppppuVar14 = pppppppuVar11;
      }
      *(void*)pppppppuVar14 = 0;
      if (((char)local_d0 != '\0') && (local_d8 != (void*******)0x0)) {
        FUN_00d50b20();
      }
      local_38 = local_d8;
      if (local_d8 == pppppppuVar20) {
        pppppppuVar14 = pppppppuVar20;
        if ((local_98._0_1_ == '\0') && (local_d8 != (void*******)0x0)) {
          pppppppuVar11 = (void*******)CONCAT71((int7)((uint64_t)pppppppuVar11 >> 8),1);
          local_50 = pppppppuVar11;
          if ((char)local_a8 == '\0') {
            FUN_00d50b00();
          }
        }
        else if (((char)local_a8 == '\0') || (local_d8 == (void*******)0x0)) {
          local_50 = (void*******)((uint64_t)local_98 & 0xffffffff);
        }
        else {
          FUN_00d50b20();
          local_50 = (void*******)((uint64_t)local_98 & 0xffffffff);
        }
      }
      else if ((char)local_a8 == '\0') {
        uVar13 = 0;
        if (local_d8 != (void*******)0x0) {
          uVar13 = FUN_00d50b00();
        }
        local_50 = (void*******)CONCAT71((int7)((uint64_t)uVar13 >> 8),1);
        pppppppuVar14 = local_38;
        if ((local_98._0_1_ != '\0') && (pppppppuVar20 != (void*******)0x0)) {
          FUN_00d50b20();
          pppppppuVar14 = local_38;
        }
      }
      else {
        local_50 = (void*******)CONCAT71((int7)((uint64_t)local_d8 >> 8),1);
        pppppppuVar14 = local_38;
        if ((local_98._0_1_ != '\0') && (pppppppuVar20 != (void*******)0x0)) {
          FUN_00d50b20();
          pppppppuVar14 = local_38;
        }
      }
      local_38 = pppppppuVar14;
      pvVar9 = _pthread_getspecific((void*)pppppppuVar11);
      if ((pvVar9 == (void *)0x0) || (lVar15 = FUN_00e8b990(), lVar15 == 0)) {
        ppppppuVar23 = local_38[0x19];
      }
      else {
        ppppppuVar23 = (void******)
                       local_38[(uint64_t)(*(uint *)(lVar15 + 0x154) & 1) + 4][0x19];
        pppppppuVar11 = local_38;
      }
      if (ppppppuVar23 != (void******)0x0) {
        FUN_00d50b00();
      }
      pvVar9 = _pthread_getspecific((void*)pppppppuVar11);
      if (pvVar9 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar13 = FUN_0152ebe0();
      if (local_d8 == local_48) {
        if (((char)local_80 != '\0') || (local_d8 == (void*******)0x0)) {
          pppppppuVar20 = (void*******)((uint64_t)local_80 & 0xffffffff);
          goto joined_r0x0127a180;
        }
        pppppppuVar14 = local_48;
        if ((char)local_d0 == '\0') {
          FUN_00d50b00();
          pppppppuVar14 = local_48;
          goto joined_r0x0127a313;
        }
LAB_0127a118:
        local_d0._0_1_ = '\0';
        local_80 = (void*)CONCAT71((int7)((uint64_t)uVar13 >> 8),1);
        local_48 = pppppppuVar14;
      }
      else {
        if ((char)local_d0 != '\0') {
          pppppppuVar14 = local_d8;
          if (((char)local_80 != '\0') && (local_48 != (void*******)0x0)) {
            uVar13 = FUN_00d50b20();
          }
          goto LAB_0127a118;
        }
        if (local_d8 != (void*******)0x0) {
          FUN_00d50b00();
        }
        pppppppuVar14 = local_d8;
        if (((char)local_80 != '\0') && (local_48 != (void*******)0x0)) {
          FUN_00d50b20();
        }
joined_r0x0127a313:
        pppppppuVar20 = (void*******)CONCAT71((int7)((uint64_t)pppppppuVar20 >> 8),1);
        local_48 = pppppppuVar14;
joined_r0x0127a180:
        if (((char)local_d0 == '\0') || (local_d8 == (void*******)0x0)) {
          local_80 = (void*)((uint64_t)pppppppuVar20 & 0xffffffff);
        }
        else {
          FUN_00d50b20();
          local_80 = (void*)((uint64_t)pppppppuVar20 & 0xffffffff);
        }
      }
      if (ppppppuVar23 != (void******)0x0) {
        FUN_00d50b20();
      }
      if (0 < iVar21) {
        pvVar9 = _pthread_getspecific((void*)pppppppuVar11);
        if ((pvVar9 == (void *)0x0) || (lVar15 = FUN_00e8b990(), lVar15 == 0)) {
          ppppppuVar23 = local_38[0x14];
        }
        else {
          ppppppuVar23 = (void******)
                         local_38[(uint64_t)(*(uint *)(lVar15 + 0x154) & 1) + 4][0x14];
          pppppppuVar11 = local_38;
        }
        if (ppppppuVar23 != (void******)0x0) {
          FUN_00d50b00();
          FUN_00d50b20();
          pppppppuVar20 = local_38;
          cVar7 = (char)local_68;
          if (local_88 == local_38) {
            if ((((char)local_50 == '\0') || (cVar7 != '\0')) ||
               (local_88 == (void*******)0x0)) {
              local_58 = local_88;
            }
            else {
              local_68 = (void*)(CONCAT71((int7)((uint64_t)local_88 >> 8),1) & 0xffffffff);
              local_58 = local_88;
              FUN_00d50b00();
            }
          }
          else {
            if (((char)local_50 != '\0') && (local_38 != (void*******)0x0)) {
              local_58 = local_88;
              FUN_00d50b00();
            }
            local_68 = (void*)((uint64_t)local_50 & 0xffffffff);
            local_58 = pppppppuVar20;
            if (cVar7 != '\0') {
              local_68 = (void*)((uint64_t)local_50 & 0xffffffff);
              if (local_88 != (void*******)0x0) {
                FUN_00d50b20();
                local_68 = (void*)((uint64_t)local_50 & 0xffffffff);
              }
            }
          }
          pvVar9 = _pthread_getspecific((void*)pppppppuVar11);
          pppppppuVar14 = local_58;
          if ((pvVar9 != (void *)0x0) &&
             (lVar15 = FUN_00e8b990(), pppppppuVar14 = local_58, lVar15 != 0)) {
            pppppppuVar14 =
                 (void*******)local_58[(uint64_t)(*(uint *)(lVar15 + 0x154) & 1) + 4];
            pppppppuVar11 = local_58;
          }
          pppppppuVar20 = local_38;
          local_88 = (void*******)pppppppuVar14[0x1e];
          pvVar9 = _pthread_getspecific((void*)pppppppuVar11);
          pppppppuVar17 = local_38;
          pppppppuVar14 = local_58;
          if ((pvVar9 != (void *)0x0) &&
             (lVar15 = FUN_00e8b990(), pppppppuVar20 = pppppppuVar17, pppppppuVar14 = local_58,
             lVar15 != 0)) {
            pppppppuVar11 = local_58;
            pppppppuVar14 =
                 (void*******)local_58[(uint64_t)(*(uint *)(lVar15 + 0x154) & 1) + 4];
          }
          if (iVar21 != 0) {
            ppppppuVar12 = (void******)
                           ((double)pppppppuVar14[0x28] + g_02391030 + g_02391030);
            ppppppuVar23 = g_0241b6a8;
            if ((double)g_0241b6a8 <= (double)ppppppuVar12) {
              ppppppuVar23 = ppppppuVar12;
            }
            ppppppuVar12 = pppppppuVar14[0x1e];
            if ((double)ppppppuVar23 <= (double)pppppppuVar14[0x1e]) {
              ppppppuVar12 = ppppppuVar23;
            }
            local_88 = (void*******)((double)local_88 - (double)ppppppuVar12);
            do {
              pvVar9 = _pthread_getspecific((void*)pppppppuVar11);
              if ((pvVar9 != (void *)0x0) && (lVar15 = FUN_00e8b990(), lVar15 != 0)) {
                pppppppuVar11 = local_78;
              }
              pvVar9 = _pthread_getspecific((void*)pppppppuVar11);
              if ((pvVar9 != (void *)0x0) && (lVar15 = FUN_00e8b990(), lVar15 != 0)) {
                pppppppuVar11 = local_48;
              }
              uVar13 = FUN_01508610();
              local_98 = (double)FUN_016c98e0(uVar13,0);
              pvVar9 = _pthread_getspecific((void*)pppppppuVar11);
              if ((pvVar9 != (void *)0x0) && (lVar15 = FUN_00e8b990(), lVar15 != 0)) {
                pppppppuVar11 = local_78;
              }
              pvVar9 = _pthread_getspecific((void*)pppppppuVar11);
              if ((pvVar9 != (void *)0x0) && (lVar15 = FUN_00e8b990(), lVar15 != 0)) {
                pppppppuVar11 = local_48;
              }
              local_d8 = (void*******)FUN_01508610();
              uVar13 = FUN_00e7b820();
              dVar33 = (double)FUN_016c98e0(uVar13,0);
              if (dVar33 - local_98 <= (double)local_88) break;
              local_a8 = (void*******)CONCAT44(local_a8._4_4_,1);
              local_d8 = (void*******)FUN_00e7c4f0();
              FUN_00e7b970();
            } while (iVar21 != 0);
          }
          local_88 = local_58;
        }
      }
      ppppppuVar23 = (void******)((int64_t)local_118 + 1);
      uVar8 = SUB84(local_68,0);
      puVar26 = local_68;
    } while ((int64_t)ppppppuVar23 < (int64_t)*(int *)((int64_t)local_b0 + 0xc));
  }
  else {
    if ((char)local_d0 == '\0') {
      uVar13 = FUN_00d50b00();
      uVar18 = (undefined7)((uint64_t)uVar13 >> 8);
    }
    local_120 = CONCAT71(uVar18,1);
    local_104 = 0;
    bVar2 = true;
    if (0 < *(int *)((int64_t)local_d8 + 0xc)) goto LAB_012793ed;
LAB_012792e2:
    local_80 = (void*)0x0;
    local_48 = (void*******)0x0;
    bVar3 = false;
    local_78 = (void*******)0x0;
    uVar8 = 0;
    local_88 = (void*******)0x0;
    local_50 = (void*******)0x0;
    local_38 = (void*******)0x0;
    local_3c = 0;
    local_90 = (void*****)0x0;
    pppppppuVar20 = local_d8;
  }
  cVar24 = (char)uVar8;
  local_58 = local_88;
  pppppppuVar11 = (void*******)FUN_00e7bdb0();
  cVar7 = (char)local_110;
  cVar29 = cVar7;
  if (((uint64_t)pppppppuVar11 >> 0x20 != 0) && (local_158._4_4_ != 0)) {
    cVar6 = FUN_00e7c020();
    cVar29 = '\x01';
    if (cVar6 == '\0') {
      cVar29 = cVar7;
    }
  }
  iVar21 = (int)((uint64_t)arg1 >> 0x20);
  if (cVar29 == '\0') {
    puVar26 = (void*)CONCAT71((int7)((uint64_t)puVar30 >> 8),1);
  }
  else {
    if (0 < *(int *)((int64_t)local_b0 + 0xc)) {
      lVar15 = 0;
      pppppppuVar20 = (void*******)&g_02802558;
      do {
        ppppppuVar23 = local_b0[2];
        pppppuVar25 = ppppppuVar23[lVar15];
        if (local_90 == pppppuVar25) {
          if (((char)local_3c == '\0') && (local_90 != (void*****)0x0)) {
            local_3c = (uint)CONCAT71((int7)((uint64_t)ppppppuVar23 >> 8),1);
            puVar30 = (void*)0x0;
            FUN_00d50b00();
          }
        }
        else {
          if (pppppuVar25 != (void*****)0x0) {
            puVar30 = (void*)(uint64_t)local_3c;
            ppppppuVar23 = (void******)FUN_00d50b00();
          }
          if (((char)local_3c == '\0') || (local_90 == (void*****)0x0)) {
            local_3c = (uint)CONCAT71((int7)((uint64_t)ppppppuVar23 >> 8),1);
            local_90 = pppppuVar25;
          }
          else {
            puVar30 = (void*)(uint64_t)local_3c;
            local_90 = pppppuVar25;
            uVar13 = FUN_00d50b20();
            local_3c = (uint)CONCAT71((int7)((uint64_t)uVar13 >> 8),1);
          }
        }
        FUN_00d23310();
        local_a8 = (void*******)CONCAT71(local_a8._1_7_,(char)local_d0);
        pppppppuVar14 = &local_a8;
        pppppppuVar17 = &local_d0;
        if ((char)local_d0 == '\0') {
          pppppppuVar17 = pppppppuVar14;
        }
        *(void*)pppppppuVar17 = 0;
        if (((char)local_d0 != '\0') && (pppppppuVar11 != (void*******)0x0)) {
          FUN_00d50b20();
        }
        uVar18 = (undefined7)((uint64_t)puVar30 >> 8);
        if (pppppppuVar11 == local_38) {
          if (((char)local_50 == '\0') && (pppppppuVar11 != (void*******)0x0)) {
            puVar30 = (void*)CONCAT71(uVar18,1);
            if ((char)local_a8 == '\0') {
              FUN_00d50b00();
            }
          }
          else if (((char)local_a8 == '\0') || (pppppppuVar11 == (void*******)0x0)) {
            puVar30 = (void*)((uint64_t)local_50 & 0xffffffff);
          }
          else {
            FUN_00d50b20();
            puVar30 = (void*)((uint64_t)local_50 & 0xffffffff);
          }
        }
        else if ((char)local_a8 == '\0') {
          if (pppppppuVar11 != (void*******)0x0) {
            FUN_00d50b00();
          }
          puVar30 = (void*)CONCAT71(uVar18,1);
          if (((char)local_50 == '\0') || (local_38 == (void*******)0x0)) goto LAB_0127a8c0;
          FUN_00d50b20();
          local_38 = pppppppuVar11;
        }
        else {
          puVar30 = (void*)CONCAT71(uVar18,1);
          if (((char)local_50 == '\0') || (local_38 == (void*******)0x0)) {
LAB_0127a8c0:
            puVar30 = (void*)CONCAT71(uVar18,1);
            local_38 = pppppppuVar11;
          }
          else {
            FUN_00d50b20();
            local_38 = pppppppuVar11;
          }
        }
        pvVar9 = _pthread_getspecific((void*)pppppppuVar14);
        if ((pvVar9 == (void *)0x0) || (lVar10 = FUN_00e8b990(), lVar10 == 0)) {
          ppppppuVar23 = local_38[0x15];
        }
        else {
          ppppppuVar23 = (void******)
                         local_38[(uint64_t)(*(uint *)(lVar10 + 0x154) & 1) + 4][0x15];
          pppppppuVar14 = local_38;
        }
        if (ppppppuVar23 != (void******)0x0) {
          FUN_00d50b00();
          FUN_00d50b20();
          pvVar9 = _pthread_getspecific((void*)pppppppuVar14);
          if ((pvVar9 == (void *)0x0) || (lVar10 = FUN_00e8b990(), lVar10 == 0)) {
            ppppppuVar23 = local_38[0x15];
          }
          else {
            ppppppuVar23 = (void******)
                           local_38[(uint64_t)(*(uint *)(lVar10 + 0x154) & 1) + 4][0x15];
            pppppppuVar14 = local_38;
          }
          pVar19 = (void*)pppppppuVar14;
          if (ppppppuVar23 != (void******)0x0) {
            FUN_00d50b00();
          }
          pvVar9 = _pthread_getspecific(pVar19);
          if (pvVar9 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012dffb0();
          if (ppppppuVar23 != (void******)0x0) {
            FUN_00d50b20();
          }
        }
        FUN_00d23340();
        local_a8 = (void*******)CONCAT71(local_a8._1_7_,(char)local_d0);
        pppppppuVar14 = &local_a8;
        pppppppuVar17 = &local_d0;
        if ((char)local_d0 == '\0') {
          pppppppuVar17 = pppppppuVar14;
        }
        *(void*)pppppppuVar17 = 0;
        if (((char)local_d0 != '\0') && (pppppppuVar11 != (void*******)0x0)) {
          pppppppuVar17 = (void*******)FUN_00d50b20();
        }
        cVar7 = (char)puVar30;
        if (pppppppuVar11 == local_38) {
          pppppppuVar4 = local_38;
          if ((cVar7 == '\0') && (pppppppuVar11 != (void*******)0x0)) {
            pppppppuVar14 = (void*******)CONCAT71((int7)((uint64_t)pppppppuVar14 >> 8),1);
            local_50 = pppppppuVar14;
            if ((char)local_a8 == '\0') {
              FUN_00d50b00();
              pppppppuVar4 = local_38;
            }
          }
          else if (((char)local_a8 == '\0') || (pppppppuVar11 == (void*******)0x0)) {
            local_50 = (void*******)((uint64_t)puVar30 & 0xffffffff);
          }
          else {
            FUN_00d50b20();
            local_50 = (void*******)((uint64_t)puVar30 & 0xffffffff);
            pppppppuVar4 = local_38;
          }
        }
        else {
          pppppppuVar4 = pppppppuVar11;
          if ((char)local_a8 == '\0') {
            if (pppppppuVar11 != (void*******)0x0) {
              pppppppuVar17 = (void*******)FUN_00d50b00();
            }
            local_50 = (void*******)CONCAT71((int7)((uint64_t)pppppppuVar17 >> 8),1);
            if ((cVar7 != '\0') && (local_38 != (void*******)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            local_50 = (void*******)CONCAT71((int7)((uint64_t)pppppppuVar17 >> 8),1);
            if ((cVar7 != '\0') && (local_38 != (void*******)0x0)) {
              FUN_00d50b20();
            }
          }
        }
        local_38 = pppppppuVar4;
        pvVar9 = _pthread_getspecific((void*)pppppppuVar14);
        if ((pvVar9 == (void *)0x0) || (lVar10 = FUN_00e8b990(), lVar10 == 0)) {
          ppppppuVar23 = local_38[0x14];
        }
        else {
          ppppppuVar23 = (void******)
                         local_38[(uint64_t)(*(uint *)(lVar10 + 0x154) & 1) + 4][0x14];
          pppppppuVar14 = local_38;
        }
        if (ppppppuVar23 != (void******)0x0) {
          FUN_00d50b00();
          FUN_00d50b20();
          pvVar9 = _pthread_getspecific((void*)pppppppuVar14);
          if ((pvVar9 == (void *)0x0) || (lVar10 = FUN_00e8b990(), lVar10 == 0)) {
            ppppppuVar23 = local_38[0x14];
          }
          else {
            ppppppuVar23 = (void******)
                           local_38[(uint64_t)(*(uint *)(lVar10 + 0x154) & 1) + 4][0x14];
            pppppppuVar14 = local_38;
          }
          pVar19 = (void*)pppppppuVar14;
          if (ppppppuVar23 != (void******)0x0) {
            FUN_00d50b00();
          }
          pvVar9 = _pthread_getspecific(pVar19);
          if (pvVar9 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012dffb0();
          if (ppppppuVar23 != (void******)0x0) {
            FUN_00d50b20();
          }
        }
        lVar15 = lVar15 + 1;
      } while (lVar15 < *(int *)((int64_t)local_b0 + 0xc));
    }
    FUN_01271180();
    if (pppppppuVar11 == local_b0) {
      if (((byte)local_104 & pppppppuVar11 != (void*******)0x0) == 1) {
        bVar2 = true;
        if ((char)local_d0 == '\0') {
          FUN_00d50b00();
        }
      }
      else if (((char)local_d0 != '\0') && (pppppppuVar11 != (void*******)0x0)) {
        FUN_00d50b20();
      }
    }
    else if ((char)local_d0 == '\0') {
      if (pppppppuVar11 != (void*******)0x0) {
        FUN_00d50b00();
      }
      bVar2 = true;
      if ((char)local_120 == '\0') goto LAB_0127ace8;
      local_b0 = pppppppuVar11;
      FUN_00d50b20();
    }
    else {
      bVar2 = true;
      if ((char)local_120 == '\0') {
LAB_0127ace8:
        bVar2 = true;
        local_b0 = pppppppuVar11;
      }
      else {
        FUN_00d50b20();
        local_b0 = pppppppuVar11;
      }
    }
    puVar26 = (void*)0x0;
  }
  local_1c8 = 0;
  local_1c0 = 0;
  uVar13 = FUN_01271d60(&local_1c8);
  local_110 = pppppppuVar11;
  if ((char)local_d0 == '\0') {
    if (pppppppuVar11 != (void*******)0x0) {
      uVar13 = FUN_00d50b00();
      goto LAB_0127ad92;
    }
    local_98 = (double)CONCAT44(local_98._4_4_,(int)CONCAT71((int7)((uint64_t)uVar13 >> 8),1));
    iVar21 = *(int *)((int64_t)local_b0 + 0xc);
joined_r0x0127b994:
    if (0 < iVar21) goto LAB_0127b99a;
LAB_0127bb34:
    local_88 = local_58;
    puVar26 = (void*)(uint64_t)local_3c;
    pppppuVar25 = local_90;
  }
  else {
LAB_0127ad92:
    if (((char)puVar26 == '\0') || (pppppppuVar11 == (void*******)0x0)) {
      local_98 = (double)CONCAT44(local_98._4_4_,
                                  (int)CONCAT71((int7)((uint64_t)uVar13 >> 8),
                                                pppppppuVar11 == (void*******)0x0));
      iVar21 = *(int *)((int64_t)local_b0 + 0xc);
      goto joined_r0x0127b994;
    }
    local_d0._0_1_ = '\0';
    local_c0 = 0xffffffff;
    local_b8 = 0;
    local_c0._4_4_ = 0;
    puVar26 = &g_02802558;
    local_c8 = pppppppuVar11;
    while( true ) {
      cVar24 = (char)uVar8;
      if (local_c0._4_4_ != 0) {
        if (local_c0._4_4_ < 1) {
          iVar22 = -local_c0._4_4_;
        }
        else {
          iVar22 = (int)local_c0 - local_c0._4_4_;
          local_c0 = CONCAT44(local_c0._4_4_,iVar22);
          FUN_00d23690();
          local_b8 = local_b8 + local_c0._4_4_;
          iVar22 = 0;
        }
        local_c0 = CONCAT44(iVar22,(int)local_c0);
      }
      lVar15 = (int64_t)(int)local_c0;
      iVar22 = (int)local_c0 + 1;
      local_c0 = CONCAT44(local_c0._4_4_,iVar22);
      if (*(int *)((int64_t)local_c8 + 0xc) <= iVar22) break;
      pppppuVar25 = local_c8[2][lVar15 + 1];
      local_100 = (void******)((uint64_t)local_100 & 0xffffffff00000000);
      if ((iVar21 != 0) && (cVar7 = FUN_00e7c6b0(), cVar7 == '\0')) {
        FUN_00d23310();
        pppppppuVar14 = local_a8;
        local_60[0] = (char)local_a0;
        pppppppuVar11 = (void*******)local_60;
        pppppppuVar17 = &local_a0;
        if ((char)local_a0 == '\0') {
          pppppppuVar17 = pppppppuVar11;
        }
        *(void*)pppppppuVar17 = 0;
        if (((char)local_a0 != '\0') && (local_a8 != (void*******)0x0)) {
          FUN_00d50b20();
        }
        if (local_60[0] == '\0') {
          if (pppppppuVar14 != (void*******)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_60[0] = '\0';
        }
        local_a0._0_1_ = '\0';
        local_a8 = pppppppuVar14;
        cVar7 = FUN_00d24090();
        if (((char)local_a0 != '\0') && (local_a8 != (void*******)0x0)) {
          FUN_00d50b20();
        }
        if (pppppppuVar14 != (void*******)0x0) {
          FUN_00d50b20();
        }
        if (cVar7 == '\0') {
          ppppuVar16 = pppppuVar25[2];
          pppppppuVar14 = (void*******)ppppuVar16[1];
          if (local_38 == pppppppuVar14) {
            if (((char)local_50 == '\0') && (local_38 != (void*******)0x0)) {
              local_50 = (void*******)CONCAT71((int7)((uint64_t)ppppuVar16 >> 8),1);
              FUN_00d50b00();
            }
          }
          else {
            if (pppppppuVar14 != (void*******)0x0) {
              ppppuVar16 = (void****)FUN_00d50b00();
            }
            if (((char)local_50 == '\0') || (local_38 == (void*******)0x0)) {
              local_50 = (void*******)CONCAT71((int7)((uint64_t)ppppuVar16 >> 8),1);
              local_38 = pppppppuVar14;
            }
            else {
              local_38 = pppppppuVar14;
              uVar13 = FUN_00d50b20();
              local_50 = (void*******)CONCAT71((int7)((uint64_t)uVar13 >> 8),1);
            }
          }
          pppppppuVar14 = (void*******)*pppppuVar25[2];
          if (local_58 == pppppppuVar14) {
            if ((cVar24 == '\0') && (local_58 != (void*******)0x0)) {
              uVar8 = 1;
              FUN_00d50b00();
            }
          }
          else {
            if (pppppppuVar14 != (void*******)0x0) {
              FUN_00d50b00();
            }
            if ((cVar24 == '\0') || (local_58 == (void*******)0x0)) {
              uVar8 = 1;
              local_58 = pppppppuVar14;
            }
            else {
              local_58 = pppppppuVar14;
              FUN_00d50b20();
              uVar8 = 1;
            }
          }
          pvVar9 = _pthread_getspecific((void*)pppppppuVar11);
          if ((pvVar9 == (void *)0x0) || (lVar15 = FUN_00e8b990(), lVar15 == 0)) {
            ppppppuVar23 = local_38[0x19];
          }
          else {
            ppppppuVar23 = (void******)
                           local_38[(uint64_t)(*(uint *)(lVar15 + 0x154) & 1) + 4][0x19];
            pppppppuVar11 = local_38;
          }
          if (ppppppuVar23 != (void******)0x0) {
            FUN_00d50b00();
          }
          pvVar9 = _pthread_getspecific((void*)pppppppuVar11);
          if (pvVar9 != (void *)0x0) {
            FUN_00e8b990();
          }
          uVar13 = FUN_0152ebe0();
          pppppppuVar14 = local_a8;
          if (local_a8 == local_48) {
            if (((char)local_80 != '\0') || (local_a8 == (void*******)0x0)) {
              uVar27 = (uint64_t)local_80 & 0xffffffff;
              goto joined_r0x0127b171;
            }
            pppppppuVar14 = local_48;
            if ((char)local_a0 == '\0') {
              FUN_00d50b00();
              pppppppuVar14 = local_48;
              goto joined_r0x0127b91c;
            }
LAB_0127b112:
            local_a0._0_1_ = '\0';
            local_80 = (void*)CONCAT71((int7)((uint64_t)uVar13 >> 8),1);
            local_48 = pppppppuVar14;
          }
          else {
            if ((char)local_a0 != '\0') {
              if (((char)local_80 != '\0') && (local_48 != (void*******)0x0)) {
                uVar13 = FUN_00d50b20();
              }
              goto LAB_0127b112;
            }
            if (local_a8 != (void*******)0x0) {
              FUN_00d50b00();
            }
            if (((char)local_80 != '\0') && (local_48 != (void*******)0x0)) {
              FUN_00d50b20();
            }
joined_r0x0127b91c:
            uVar27 = CONCAT71((int7)((uint64_t)pppppppuVar20 >> 8),1);
            local_48 = pppppppuVar14;
joined_r0x0127b171:
            if (((char)local_a0 == '\0') || (local_a8 == (void*******)0x0)) {
              local_80 = (void*)(uVar27 & 0xffffffff);
            }
            else {
              FUN_00d50b20();
              local_80 = (void*)(uVar27 & 0xffffffff);
            }
          }
          if (ppppppuVar23 != (void******)0x0) {
            FUN_00d50b20();
          }
          pvVar9 = _pthread_getspecific((void*)pppppppuVar11);
          if ((pvVar9 != (void *)0x0) && (lVar15 = FUN_00e8b990(), lVar15 != 0)) {
            pppppppuVar11 = local_78;
          }
          pvVar9 = _pthread_getspecific((void*)pppppppuVar11);
          if ((pvVar9 != (void *)0x0) && (lVar15 = FUN_00e8b990(), lVar15 != 0)) {
            pppppppuVar11 = local_48;
          }
          uVar13 = FUN_01507970();
          local_98 = (double)FUN_016c98e0(uVar13,0);
          pvVar9 = _pthread_getspecific((void*)pppppppuVar11);
          if ((pvVar9 != (void *)0x0) && (lVar15 = FUN_00e8b990(), lVar15 != 0)) {
            pppppppuVar11 = local_78;
          }
          pvVar9 = _pthread_getspecific((void*)pppppppuVar11);
          if ((pvVar9 != (void *)0x0) && (lVar15 = FUN_00e8b990(), lVar15 != 0)) {
            pppppppuVar11 = local_48;
          }
          local_a8 = (void*******)FUN_01507970();
          uVar13 = FUN_00e7b820();
          local_88 = (void*******)FUN_016c98e0(uVar13,0);
          pvVar9 = _pthread_getspecific((void*)pppppppuVar11);
          pppppppuVar20 = local_58;
          if ((pvVar9 != (void *)0x0) &&
             (lVar15 = FUN_00e8b990(), pppppppuVar20 = local_58, lVar15 != 0)) {
            pppppppuVar20 =
                 (void*******)local_58[(uint64_t)(*(uint *)(lVar15 + 0x154) & 1) + 4];
            pppppppuVar11 = local_58;
          }
          local_118 = pppppppuVar20[0x1e];
          pvVar9 = _pthread_getspecific((void*)pppppppuVar11);
          pppppppuVar20 = local_58;
          if ((pvVar9 != (void *)0x0) &&
             (lVar15 = FUN_00e8b990(), pppppppuVar20 = local_58, lVar15 != 0)) {
            pppppppuVar20 =
                 (void*******)local_58[(uint64_t)(*(uint *)(lVar15 + 0x154) & 1) + 4];
          }
          ppppppuVar12 = (void******)
                         ((double)pppppppuVar20[0x28] + g_02391030 + g_02391030);
          ppppppuVar23 = g_0241b6a8;
          if ((double)g_0241b6a8 <= (double)ppppppuVar12) {
            ppppppuVar23 = ppppppuVar12;
          }
          ppppppuVar12 = pppppppuVar20[0x1e];
          if ((double)ppppppuVar23 <= (double)pppppppuVar20[0x1e]) {
            ppppppuVar12 = ppppppuVar23;
          }
          if (local_98 - (double)local_88 <= (double)local_118 - (double)ppppppuVar12) {
            FUN_00d23620();
          }
        }
      }
      pppppppuVar20 = (void*******)((uint64_t)local_50 & 0xffffffff);
      local_100 = (void******)((uint64_t)local_100 & 0xffffffff00000000);
      if ((iVar21 != 0) && (cVar7 = FUN_00e7c650(), cVar7 != '\0')) {
        FUN_00d23340();
        pppppppuVar11 = local_a8;
        local_60[0] = (char)local_a0;
        ppppppuVar23 = &local_a0;
        if ((char)local_a0 == '\0') {
          ppppppuVar23 = (void******)local_60;
        }
        *(void*)ppppppuVar23 = 0;
        if (((char)local_a0 != '\0') && (local_a8 != (void*******)0x0)) {
          FUN_00d50b20();
        }
        if (local_60[0] == '\0') {
          if (pppppppuVar11 != (void*******)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_60[0] = '\0';
        }
        local_a0._0_1_ = '\0';
        local_a8 = pppppppuVar11;
        cVar7 = FUN_00d24090();
        if (((char)local_a0 != '\0') && (local_a8 != (void*******)0x0)) {
          FUN_00d50b20();
        }
        if (pppppppuVar11 != (void*******)0x0) {
          FUN_00d50b20();
        }
        if (cVar7 == '\0') {
          FUN_00d23340();
          pppppppuVar14 = local_a8;
          local_100 = (void******)CONCAT71(local_100._1_7_,(char)local_a0);
          pppppppuVar11 = &local_100;
          pppppppuVar17 = &local_a0;
          if ((char)local_a0 == '\0') {
            pppppppuVar17 = pppppppuVar11;
          }
          *(void*)pppppppuVar17 = 0;
          if (((char)local_a0 != '\0') && (pppppppuVar14 != (void*******)0x0)) {
            pppppppuVar17 = (void*******)FUN_00d50b20();
          }
          cVar7 = (char)pppppppuVar20;
          if (pppppppuVar14 == local_38) {
            if ((cVar7 == '\0') && (pppppppuVar14 != (void*******)0x0)) {
              pppppppuVar11 = (void*******)CONCAT71((int7)((uint64_t)pppppppuVar11 >> 8),1);
              pppppppuVar17 = pppppppuVar11;
              if ((char)local_100 == '\0') {
                local_50 = pppppppuVar11;
                FUN_00d50b00();
                pppppppuVar17 = local_50;
              }
            }
            else {
              pppppppuVar17 = pppppppuVar20;
              if (((char)local_100 != '\0') && (pppppppuVar14 != (void*******)0x0)) {
                FUN_00d50b20();
              }
            }
          }
          else if ((char)local_100 == '\0') {
            if (pppppppuVar14 != (void*******)0x0) {
              pppppppuVar17 = (void*******)FUN_00d50b00();
            }
            local_50 = (void*******)CONCAT71((int7)((uint64_t)pppppppuVar17 >> 8),1);
            if ((cVar7 == '\0') || (local_38 == (void*******)0x0)) goto LAB_0127b57e;
            FUN_00d50b20();
            local_38 = pppppppuVar14;
            pppppppuVar17 = local_50;
          }
          else {
            local_50 = (void*******)CONCAT71((int7)((uint64_t)pppppppuVar17 >> 8),1);
            if ((cVar7 == '\0') || (local_38 == (void*******)0x0)) {
LAB_0127b57e:
              local_38 = pppppppuVar14;
              pppppppuVar17 = local_50;
            }
            else {
              FUN_00d50b20();
              local_38 = pppppppuVar14;
              pppppppuVar17 = local_50;
            }
          }
          local_50 = pppppppuVar17;
          pvVar9 = _pthread_getspecific((void*)pppppppuVar11);
          if ((pvVar9 == (void *)0x0) || (lVar15 = FUN_00e8b990(), lVar15 == 0)) {
            ppppppuVar23 = local_38[0x19];
          }
          else {
            ppppppuVar23 = (void******)
                           local_38[(uint64_t)(*(uint *)(lVar15 + 0x154) & 1) + 4][0x19];
            pppppppuVar11 = local_38;
          }
          if (ppppppuVar23 != (void******)0x0) {
            FUN_00d50b00();
          }
          pvVar9 = _pthread_getspecific((void*)pppppppuVar11);
          if (pvVar9 != (void *)0x0) {
            FUN_00e8b990();
          }
          uVar13 = FUN_0152ebe0();
          pppppppuVar14 = local_a8;
          if (local_a8 == local_48) {
            if (((char)local_80 != '\0') || (local_a8 == (void*******)0x0)) {
              uVar27 = (uint64_t)local_80 & 0xffffffff;
              goto joined_r0x0127b6d0;
            }
            pppppppuVar14 = local_48;
            if ((char)local_a0 == '\0') {
              FUN_00d50b00();
              pppppppuVar14 = local_48;
              goto joined_r0x0127b955;
            }
LAB_0127b671:
            local_a0._0_1_ = '\0';
            uVar27 = CONCAT71((int7)((uint64_t)uVar13 >> 8),1);
            local_48 = pppppppuVar14;
          }
          else {
            if ((char)local_a0 != '\0') {
              if (((char)local_80 != '\0') && (local_48 != (void*******)0x0)) {
                uVar13 = FUN_00d50b20();
              }
              goto LAB_0127b671;
            }
            if (local_a8 != (void*******)0x0) {
              FUN_00d50b00();
            }
            if (((char)local_80 != '\0') && (local_48 != (void*******)0x0)) {
              FUN_00d50b20();
            }
joined_r0x0127b955:
            uVar27 = CONCAT71((int7)((uint64_t)pppppppuVar20 >> 8),1);
            local_48 = pppppppuVar14;
joined_r0x0127b6d0:
            if (((char)local_a0 != '\0') && (local_a8 != (void*******)0x0)) {
              FUN_00d50b20();
            }
          }
          local_80 = (void*)uVar27;
          if (ppppppuVar23 != (void******)0x0) {
            FUN_00d50b20();
          }
          pvVar9 = _pthread_getspecific((void*)pppppppuVar11);
          if ((pvVar9 != (void *)0x0) && (lVar15 = FUN_00e8b990(), lVar15 != 0)) {
            pppppppuVar11 = local_78;
          }
          pvVar9 = _pthread_getspecific((void*)pppppppuVar11);
          if ((pvVar9 != (void *)0x0) && (lVar15 = FUN_00e8b990(), lVar15 != 0)) {
            pppppppuVar11 = local_48;
          }
          uVar13 = FUN_01507970();
          local_98 = (double)FUN_016c98e0(uVar13,0);
          pvVar9 = _pthread_getspecific((void*)pppppppuVar11);
          if ((pvVar9 != (void *)0x0) && (lVar15 = FUN_00e8b990(), lVar15 != 0)) {
            pppppppuVar11 = local_78;
          }
          pvVar9 = _pthread_getspecific((void*)pppppppuVar11);
          if ((pvVar9 != (void *)0x0) && (lVar15 = FUN_00e8b990(), lVar15 != 0)) {
            pppppppuVar11 = local_48;
          }
          local_a8 = (void*******)FUN_01507970();
          uVar13 = FUN_00e7b820();
          local_88 = (void*******)FUN_016c98e0(uVar13,0);
          pvVar9 = _pthread_getspecific((void*)pppppppuVar11);
          pppppppuVar20 = local_38;
          if ((pvVar9 != (void *)0x0) &&
             (lVar15 = FUN_00e8b990(), pppppppuVar20 = local_38, lVar15 != 0)) {
            pppppppuVar20 =
                 (void*******)local_38[(uint64_t)(*(uint *)(lVar15 + 0x154) & 1) + 4];
            pppppppuVar11 = local_38;
          }
          local_118 = pppppppuVar20[0x1e];
          pvVar9 = _pthread_getspecific((void*)pppppppuVar11);
          pppppppuVar20 = local_38;
          if ((pvVar9 != (void *)0x0) &&
             (lVar15 = FUN_00e8b990(), pppppppuVar20 = local_38, lVar15 != 0)) {
            pppppppuVar20 =
                 (void*******)local_38[(uint64_t)(*(uint *)(lVar15 + 0x154) & 1) + 4];
          }
          ppppppuVar12 = (void******)
                         ((double)pppppppuVar20[0x28] + g_02391030 + g_02391030);
          ppppppuVar23 = g_0241b6a8;
          if ((double)g_0241b6a8 <= (double)ppppppuVar12) {
            ppppppuVar23 = ppppppuVar12;
          }
          ppppppuVar12 = pppppppuVar20[0x1e];
          if ((double)ppppppuVar23 <= (double)pppppppuVar20[0x1e]) {
            ppppppuVar12 = ppppppuVar23;
          }
          if ((double)local_118 - (double)ppppppuVar12 < local_98 - (double)local_88) {
            pppppppuVar20 = (void*******)((uint64_t)local_50 & 0xffffffff);
          }
          else {
            FUN_00d23740();
            pppppppuVar20 = (void*******)((uint64_t)local_50 & 0xffffffff);
          }
        }
      }
      local_50 = pppppppuVar20;
    }
    FUN_01a02020();
    local_98 = (double)((uint64_t)local_98 & 0xffffffff00000000);
    if (*(int *)((int64_t)local_b0 + 0xc) < 1) goto LAB_0127bb34;
LAB_0127b99a:
    if (local_78 == (void*******)0x0) {
      local_88 = (void*******)0x0;
      lVar15 = 0;
      pppppppuVar20 = local_58;
      do {
        if (pppppppuVar20 != (void*******)0x0) {
          local_68._0_1_ = (char)uVar8;
          if ((char)local_68 != '\0') {
            FUN_00d50b20();
          }
          uVar8 = 0;
        }
        pppppuVar25 = local_90;
        cVar24 = (char)uVar8;
        pppppuVar1 = local_b0[2][lVar15];
        uVar18 = (undefined7)((uint64_t)puVar26 >> 8);
        if (local_90 == pppppuVar1) {
          if ((char)local_3c == '\0') {
            if (local_90 == (void*****)0x0) {
              puVar26 = (void*)(uint64_t)local_3c;
            }
            else {
              puVar26 = (void*)CONCAT71(uVar18,1);
              local_3c = 0;
              FUN_00d50b00();
            }
          }
          else {
            puVar26 = (void*)(uint64_t)local_3c;
          }
        }
        else {
          if (pppppuVar1 != (void*****)0x0) {
            FUN_00d50b00();
          }
          puVar26 = (void*)CONCAT71(uVar18,1);
          pppppuVar25 = pppppuVar1;
          if (((char)local_3c != '\0') && (local_90 != (void*****)0x0)) {
            local_90 = pppppuVar1;
            FUN_00d50b20();
          }
        }
        lVar15 = lVar15 + 1;
        local_3c = (uint)puVar26;
        pppppppuVar20 = (void*******)0x0;
        local_90 = pppppuVar25;
      } while (lVar15 < *(int *)((int64_t)local_b0 + 0xc));
    }
    else {
      local_88 = (void*******)0x0;
      lVar15 = 0;
      puVar26 = (void*)(uint64_t)local_3c;
      pppppppuVar20 = local_58;
      pppppuVar25 = local_90;
      do {
        if (pppppppuVar20 != (void*******)0x0) {
          local_68._0_1_ = (char)uVar8;
          if ((char)local_68 != '\0') {
            FUN_00d50b20();
          }
          uVar8 = 0;
        }
        cVar24 = (char)uVar8;
        pppppuVar1 = local_b0[2][lVar15];
        if (pppppuVar25 == pppppuVar1) {
          if (((char)puVar26 == '\0') && (pppppuVar25 != (void*****)0x0)) {
            puVar26 = (void*)0x1;
            FUN_00d50b00();
          }
        }
        else {
          if (pppppuVar1 != (void*****)0x0) {
            FUN_00d50b00();
          }
          if (((char)puVar26 == '\0') || (pppppuVar25 == (void*****)0x0)) {
            puVar26 = (void*)0x1;
            pppppuVar25 = pppppuVar1;
          }
          else {
            FUN_00d50b20();
            puVar26 = (void*)0x1;
            pppppuVar25 = pppppuVar1;
          }
        }
        local_1b0 = 0;
        local_1a8 = local_78;
        local_1a0 = 0;
        local_198 = local_78;
        local_190 = 0;
        local_140 = 0;
        local_138 = '\0';
        local_1b8 = pppppuVar25;
        FUN_0127c8a0(g_0238fee8,&local_198,&local_140);
        if ((local_138 != '\0') && (local_140 != 0)) {
          FUN_00d50b20();
        }
        lVar15 = lVar15 + 1;
        pppppppuVar20 = (void*******)0x0;
      } while (lVar15 < *(int *)((int64_t)local_b0 + 0xc));
    }
  }
  cVar29 = (char)puVar26;
  local_188 = *this_ptr;
  local_180 = 0;
  local_178 = local_110;
  local_170 = 0;
  FUN_0127e4d0(0);
  local_168 = *this_ptr;
  local_160 = 0;
  FUN_0127f8b0();
  pppppppuVar20 = local_88;
  if (local_98._0_1_ == '\0') {
    FUN_00d50b20();
    cVar7 = (char)local_80;
  }
  else {
    cVar7 = (char)local_80;
  }
LAB_0127bbcf:
  if ((cVar7 != '\0') && (local_48 != (void*******)0x0)) {
    FUN_00d50b20();
  }
  if ((bVar3) && (local_78 != (void*******)0x0)) {
    FUN_00d50b20();
  }
  if ((cVar24 != '\0') && (pppppppuVar20 != (void*******)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_50 != '\0') && (local_38 != (void*******)0x0)) {
    FUN_00d50b20();
  }
  if ((cVar29 != '\0') && (pppppuVar25 != (void*****)0x0)) {
    FUN_00d50b20();
  }
  if ((bVar2) && (local_b0 != (void*******)0x0)) {
    FUN_00d50b20();
  }
  return;
}

