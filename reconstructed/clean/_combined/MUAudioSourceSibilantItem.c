// ===================================================================
// MUAudioSourceSibilantItem — Complete reconstructed pseudocode
// 27 functions
// ===================================================================

// Registered properties (4):
//                   _audioSourceElement
//                   _suggestsSeparateComponentRenderers
//                   _polyphonicSeparationDirectoryIdentifier
//                   _pulseTimeline


// ============================================================
// 01278f90
// ============================================================
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



// ============================================================
// 01271d60
// ============================================================
// Function: FUN_01271d60
// Address: 01271d60
// Size: 3478 bytes
// Class: MUAudioSourceSibilantItem
// === MUAudioSourceSibilantItem properties ===
//                   _audioSourceElement
//                   _suggestsSeparateComponentRenderers
//                   _polyphonicSeparationDirectoryIdentifier
//                   _pulseTimeline


void* FUN_01271d60(int64_t *param_1,char param_2)

{
  double dVar1;
  double dVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  code *pcVar6;
  char cVar7;
  int iVar8;
  void*puVar9;
  int64_t lVar10;
  void *pvVar11;
  int64_t lVar12;
  void*puVar13;
  int64_t lVar14;
  void*puVar15;
  char *pcVar16;
  char *pcVar17;
  int64_t lVar18;
  char *pcVar19;
  void* pVar20;
  int64_t *arg1;
  void*this_ptr;
  uint64_t uVar21;
  int local_70;
  void*local_60;
  int64_t local_48;
  char local_40 [8];
  char local_38 [8];
  
  puVar9 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar9 = &g_02572358;
  pcVar6 = g_02572370;
  (*g_02572370)();
  FUN_00d21370();
  lVar18 = *arg1;
  if (lVar18 != 0) {
    local_70 = -1;
    while( true ) {
      lVar10 = (int64_t)local_70;
      local_70 = local_70 + 1;
      if (*(int *)(lVar18 + 0xc) <= local_70) break;
      lVar14 = *(int64_t *)(lVar18 + 0x10);
      lVar10 = *(int64_t *)(lVar14 + 8 + lVar10 * 8);
      pvVar11 = _pthread_getspecific((void*)lVar14);
      pVar20 = (void*)lVar14;
      lVar14 = lVar10;
      if ((pvVar11 != (void *)0x0) && (lVar12 = FUN_00e8b990(), lVar12 != 0)) {
        lVar14 = *(int64_t *)(lVar10 + 0x20 + (uint64_t)(*(uint *)(lVar12 + 0x154) & 1) * 8);
      }
      if (*(int64_t *)(lVar14 + 0xd8) == 0) {
LAB_01271fb6:
        local_40[0] = '\0';
        FUN_00d21140();
        local_48 = lVar10;
        if ((local_40[0] != '\0') && (lVar10 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        pvVar11 = _pthread_getspecific(pVar20);
        if (pvVar11 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_011ef490();
        if (local_40[0] == '\0') {
          if (local_48 != 0) {
            FUN_00d50b00();
            if ((local_40[0] != '\0') && (local_48 != 0)) {
              FUN_00d50b20();
            }
            goto LAB_01271f30;
          }
          goto LAB_01271fb6;
        }
        if (local_48 == 0) goto LAB_01271fb6;
LAB_01271f30:
        pvVar11 = _pthread_getspecific(pVar20);
        if (pvVar11 != (void *)0x0) {
          FUN_00e8b990();
        }
        iVar8 = FUN_01326de0();
        if (iVar8 != 3) {
          FUN_00d50b20();
          goto LAB_01271fb6;
        }
        if (*param_1 == 0) {
          FUN_00d50b20();
        }
        else {
          local_40[0] = '\0';
          FUN_00d21140();
          if ((local_40[0] != '\0') && (lVar10 != 0)) {
            FUN_00d50b20();
          }
          FUN_00d50b20();
          local_48 = lVar10;
        }
      }
    }
    FUN_001159b0();
  }
  FUN_00d242c0();
  puVar13 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar13 = &g_02572358;
  (*pcVar6)();
  if (puVar9 == (void*)0x0) {
    bVar5 = false;
    local_60 = (void*)0x0;
  }
  else {
    local_70 = -1;
    bVar5 = false;
    local_60 = (void*)0x0;
    lVar18 = 0;
    while( true ) {
      lVar10 = (int64_t)local_70;
      local_70 = local_70 + 1;
      if (*(int *)((int64_t)puVar9 + 0xc) <= local_70) break;
      lVar14 = puVar9[2];
      local_48 = *(int64_t *)(lVar14 + 8 + lVar10 * 8);
      if (lVar18 == 0) {
LAB_01272192:
        puVar15 = (void*)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar15 = &g_02572358;
        (*pcVar6)();
        if ((bVar5) && (local_60 != (void*)0x0)) {
          FUN_00d50b20();
        }
        local_40[0] = '\0';
        FUN_00d21140();
        if ((local_40[0] != '\0') && (puVar15 != (void*)0x0)) {
          FUN_00d50b20();
        }
        bVar5 = true;
        local_60 = puVar15;
      }
      else {
        pvVar11 = _pthread_getspecific((void*)lVar14);
        pVar20 = (void*)lVar14;
        lVar10 = lVar18;
        if ((pvVar11 != (void *)0x0) && (lVar14 = FUN_00e8b990(), lVar14 != 0)) {
          lVar10 = *(int64_t *)(lVar18 + 0x20 + (uint64_t)(*(uint *)(lVar14 + 0x154) & 1) * 8);
        }
        dVar1 = *(double *)(lVar10 + 0xe8);
        dVar2 = *(double *)(lVar10 + 0xf0);
        pvVar11 = _pthread_getspecific(pVar20);
        lVar10 = local_48;
        if ((pvVar11 != (void *)0x0) && (lVar14 = FUN_00e8b990(), lVar14 != 0)) {
          lVar10 = *(int64_t *)(local_48 + 0x20 + (uint64_t)(*(uint *)(lVar14 + 0x154) & 1) * 8);
        }
        if (g_0240d190 <
            (double)((uint64_t)((dVar1 + dVar2) - *(double *)(lVar10 + 0xe8)) & g_023908f0))
        goto LAB_01272192;
      }
      local_40[0] = '\0';
      FUN_00d21140();
      if ((local_40[0] != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if (local_48 != lVar18) {
        lVar18 = local_48;
      }
    }
    FUN_001159b0();
  }
  if ((param_2 != '\0') && (puVar13 != (void*)0x0)) {
    if (0 < *(int *)((int64_t)puVar13 + 0xc)) {
      iVar8 = 0;
      do {
        lVar18 = local_48;
        FUN_00d23310();
        local_38[0] = local_40[0];
        pcVar19 = local_38;
        pcVar16 = local_40;
        if (local_40[0] == '\0') {
          pcVar16 = pcVar19;
        }
        *pcVar16 = '\0';
        if ((local_40[0] != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
        if ((local_38[0] == '\0') && (local_48 != 0)) {
          FUN_00d50b00();
        }
        pvVar11 = _pthread_getspecific((void*)pcVar19);
        if ((pvVar11 == (void *)0x0) || (lVar10 = FUN_00e8b990(), lVar10 == 0)) {
          pcVar16 = *(char **)(local_48 + 0x100);
        }
        else {
          pcVar16 = *(char **)(*(int64_t *)
                                (local_48 + 0x20 + (uint64_t)(*(uint *)(lVar10 + 0x154) & 1) * 8) +
                              0x100);
        }
        if (pcVar16 != (char *)0x0) {
          FUN_00d50b00();
          pvVar11 = _pthread_getspecific((void*)pcVar19);
          if ((pvVar11 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
            pcVar19 = pcVar16;
          }
          pVar20 = (void*)pcVar19;
          pvVar11 = _pthread_getspecific(pVar20);
          lVar10 = local_48;
          if ((pvVar11 != (void *)0x0) && (lVar14 = FUN_00e8b990(), lVar14 != 0)) {
            lVar10 = *(int64_t *)(local_48 + 0x20 + (uint64_t)(*(uint *)(lVar14 + 0x154) & 1) * 8)
            ;
          }
          FUN_012ea9e0(*(double *)(lVar10 + 0xe8) + g_0240cff0,g_0240cfd0);
          if (local_40[0] == '\0') {
            if (local_48 != 0) {
              FUN_00d50b00();
              if ((local_40[0] != '\0') && (local_48 != 0)) {
                FUN_00d50b20();
              }
              goto LAB_012724b0;
            }
          }
          else if (local_48 != 0) {
LAB_012724b0:
            lVar10 = local_48;
            if (*(int *)(local_48 + 0xc) == 1) {
              uVar21 = FUN_00d23310();
              local_38[0] = local_40[0];
              pcVar19 = local_40;
              if (local_40[0] == '\0') {
                pcVar19 = local_38;
              }
              *pcVar19 = '\0';
              if ((local_40[0] != '\0') && (local_48 != 0)) {
                uVar21 = FUN_00d50b20();
              }
              if (local_48 == 0) {
                lVar10 = 0;
                bVar4 = false;
              }
              else if (local_38[0] == '\0') {
                bVar4 = true;
                uVar21 = FUN_00d50b00();
              }
              else {
                bVar4 = true;
              }
LAB_01272664:
              if (lVar10 == 0) goto LAB_0127269d;
              local_40[0] = '\0';
              FUN_00d23370(uVar21,0);
              if ((local_40[0] != '\0') && (lVar10 != 0)) {
                FUN_00d50b20();
              }
              bVar3 = false;
              local_48 = lVar10;
            }
            else {
              if (1 < *(int *)(local_48 + 0xc)) {
                pvVar11 = _pthread_getspecific(pVar20);
                if (pvVar11 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_01268710();
                if (local_40[0] == '\0') {
                  if (local_48 == 0) goto LAB_012725e0;
                  FUN_00d50b00();
LAB_01272599:
                  local_40[0] = '\0';
                  cVar7 = FUN_00d23d70();
                  if ((local_40[0] != '\0') && (local_48 != 0)) {
                    FUN_00d50b20();
                  }
                  if (cVar7 == '\0') {
                    bVar3 = false;
                    goto LAB_012725f1;
                  }
                  FUN_00d50b00();
                  bVar4 = true;
                }
                else {
                  if (local_48 != 0) goto LAB_01272599;
LAB_012725e0:
                  bVar3 = true;
LAB_012725f1:
                  uVar21 = FUN_00d23310();
                  local_38[0] = local_40[0];
                  pcVar19 = local_40;
                  if (local_40[0] == '\0') {
                    pcVar19 = local_38;
                  }
                  *pcVar19 = '\0';
                  if ((local_40[0] != '\0') && (local_48 != 0)) {
                    uVar21 = FUN_00d50b20();
                  }
                  if (local_48 == 0) {
                    bVar4 = false;
                    lVar10 = 0;
                  }
                  else {
                    bVar4 = true;
                    if (local_38[0] == '\0') {
                      uVar21 = FUN_00d50b00();
                    }
                  }
                  if (bVar3) goto LAB_01272664;
                }
                uVar21 = FUN_00d50b20();
                goto LAB_01272664;
              }
              bVar4 = false;
LAB_0127269d:
              bVar3 = true;
            }
            FUN_00d50b20();
            if (bVar4 && !bVar3) {
              FUN_00d50b20();
            }
          }
        }
        FUN_00d23340();
        local_38[0] = local_40[0];
        pcVar19 = local_38;
        pcVar17 = local_40;
        if (local_40[0] == '\0') {
          pcVar17 = pcVar19;
        }
        *pcVar17 = '\0';
        if ((local_40[0] != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
        pVar20 = (void*)pcVar19;
        if (lVar18 == local_48) {
          lVar10 = lVar18;
          if ((local_38[0] != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          lVar10 = local_48;
          if (local_38[0] == '\0') {
            if (local_48 != 0) {
              FUN_00d50b00();
            }
            if (lVar18 != 0) {
              FUN_00d50b20();
            }
          }
          else if (lVar18 != 0) {
            FUN_00d50b20();
          }
        }
        pvVar11 = _pthread_getspecific(pVar20);
        if ((pvVar11 == (void *)0x0) || (lVar18 = FUN_00e8b990(), lVar18 == 0)) {
          pcVar19 = *(char **)(lVar10 + 0x100);
        }
        else {
          pcVar19 = *(char **)(*(int64_t *)
                                (lVar10 + 0x20 + (uint64_t)(*(uint *)(lVar18 + 0x154) & 1) * 8) +
                              0x100);
        }
        pcVar17 = pcVar16;
        if (pcVar16 != pcVar19) {
          if (pcVar19 != (char *)0x0) {
            FUN_00d50b00();
          }
          pcVar17 = pcVar19;
          if (pcVar16 != (char *)0x0) {
            FUN_00d50b20();
          }
        }
        if (pcVar17 != (char *)0x0) {
          pvVar11 = _pthread_getspecific(pVar20);
          if (pvVar11 != (void *)0x0) {
            FUN_00e8b990();
          }
          pvVar11 = _pthread_getspecific(pVar20);
          lVar18 = lVar10;
          if ((pvVar11 != (void *)0x0) && (lVar14 = FUN_00e8b990(), lVar14 != 0)) {
            lVar18 = *(int64_t *)(lVar10 + 0x20 + (uint64_t)(*(uint *)(lVar14 + 0x154) & 1) * 8);
          }
          FUN_012ea6f0(*(double *)(lVar18 + 0xe8) + *(double *)(lVar18 + 0xf0) + g_0240cff0,
                       g_0240cfd0);
          if (local_40[0] == '\0') {
            if (local_48 != 0) {
              FUN_00d50b00();
              if ((local_40[0] != '\0') && (local_48 != 0)) {
                FUN_00d50b20();
              }
              goto LAB_012728f0;
            }
          }
          else if (local_48 != 0) {
LAB_012728f0:
            lVar18 = local_48;
            if (*(int *)(local_48 + 0xc) == 1) {
              FUN_00d23310();
              local_38[0] = local_40[0];
              pcVar19 = local_40;
              if (local_40[0] == '\0') {
                pcVar19 = local_38;
              }
              *pcVar19 = '\0';
              if ((local_40[0] != '\0') && (local_48 != 0)) {
                FUN_00d50b20();
              }
              if (local_48 == 0) {
                bVar4 = false;
                lVar18 = 0;
              }
              else {
                bVar4 = true;
                if (local_38[0] == '\0') {
                  FUN_00d50b00();
                }
              }
LAB_01272abb:
              if (lVar18 == 0) {
                bVar3 = true;
              }
              else {
                local_40[0] = '\0';
                FUN_00d21140();
                if ((local_40[0] != '\0') && (lVar18 != 0)) {
                  FUN_00d50b20();
                }
                bVar3 = false;
                local_48 = lVar18;
              }
            }
            else {
              if (1 < *(int *)(local_48 + 0xc)) {
                pvVar11 = _pthread_getspecific(pVar20);
                if (pvVar11 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_01274c40(g_02391038);
                if (local_40[0] == '\0') {
                  if (local_48 == 0) goto LAB_01272a2d;
                  FUN_00d50b00();
LAB_012729e6:
                  local_40[0] = '\0';
                  cVar7 = FUN_00d23d70();
                  if ((local_40[0] != '\0') && (local_48 != 0)) {
                    FUN_00d50b20();
                  }
                  if (cVar7 == '\0') {
                    bVar3 = false;
                    goto LAB_01272a41;
                  }
                  FUN_00d50b00();
                  bVar4 = true;
                }
                else {
                  if (local_48 != 0) goto LAB_012729e6;
LAB_01272a2d:
                  bVar3 = true;
LAB_01272a41:
                  FUN_00d23310();
                  local_38[0] = local_40[0];
                  pcVar19 = local_40;
                  if (local_40[0] == '\0') {
                    pcVar19 = local_38;
                  }
                  *pcVar19 = '\0';
                  if ((local_40[0] != '\0') && (local_48 != 0)) {
                    FUN_00d50b20();
                  }
                  if (local_48 == 0) {
                    bVar4 = false;
                    lVar18 = 0;
                  }
                  else {
                    bVar4 = true;
                    if (local_38[0] == '\0') {
                      FUN_00d50b00();
                    }
                  }
                  if (bVar3) goto LAB_01272abb;
                }
                FUN_00d50b20();
                goto LAB_01272abb;
              }
              bVar3 = true;
              bVar4 = false;
            }
            FUN_00d50b20();
            if (bVar4 && !bVar3) {
              FUN_00d50b20();
            }
          }
          FUN_00d50b20();
        }
        if (lVar10 != 0) {
          FUN_00d50b20();
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 < *(int *)((int64_t)puVar13 + 0xc));
    }
    FUN_01a02020();
  }
  *this_ptr = puVar13;
  *(void*)(this_ptr + 1) = 1;
  if ((bVar5) && (local_60 != (void*)0x0)) {
    FUN_00d50b20();
  }
  if (puVar9 != (void*)0x0) {
    FUN_00d50b20();
  }
  return this_ptr;
}



// ============================================================
// 012771c0
// ============================================================
// Function: FUN_012771c0
// Address: 012771c0
// Size: 3613 bytes
// Class: MUAudioSourceSibilantItem
// === MUAudioSourceSibilantItem properties ===
//                   _audioSourceElement
//                   _suggestsSeparateComponentRenderers
//                   _polyphonicSeparationDirectoryIdentifier
//                   _pulseTimeline


void FUN_012771c0(double param_1,byte param_2)

{
  int iVar1;
  int64_t *plVar2;
  bool bVar3;
  int iVar4;
  code *pcVar5;
  int64_t *plVar6;
  char cVar7;
  int iVar8;
  void *pvVar9;
  int64_t lVar10;
  int64_t *plVar11;
  void*puVar12;
  void*puVar13;
  void* pVar14;
  int64_t *in_RCX;
  int64_t *plVar15;
  uint64_t uVar16;
  int64_t *plVar17;
  int64_t *arg1;
  void*this_ptr;
  int64_t **pplVar18;
  bool bVar19;
  int64_t lVar20;
  int64_t lVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  int64_t local_d8;
  char local_d0;
  double local_58;
  int64_t *local_50;
  int64_t *local_48;
  char local_40;
  int64_t *local_38;
  
  plVar15 = in_RCX;
  local_38 = (int64_t *)FUN_000bea40();
  pVar14 = (void*)plVar15;
  (**(code **)(*local_38 + 0x18))();
  plVar15 = (int64_t *)*in_RCX;
  if (plVar15 == (int64_t *)0x0) {
    local_50 = (int64_t *)0x0;
  }
  else {
    pvVar9 = _pthread_getspecific(pVar14);
    if (pvVar9 != (void *)0x0) {
      plVar15 = (int64_t *)*in_RCX;
      lVar10 = FUN_00e8b990();
      if (lVar10 != 0) {
        plVar15 = (int64_t *)plVar15[(uint64_t)(*(uint *)(lVar10 + 0x154) & 1) + 4];
      }
    }
    pplVar18 = &local_48;
    (**(code **)(*plVar15 + 0x378))();
    plVar15 = local_48;
    FUN_01131770();
    if (plVar15 == (int64_t *)0x0) {
LAB_0127727c:
      pplVar18 = (int64_t **)&g_02802688;
    }
    else {
      (**(code **)(*plVar15 + 0x360))();
      cVar7 = FUN_00e85ea0();
      if (cVar7 == '\0') goto LAB_0127727c;
    }
    local_50 = *pplVar18;
    if (*(char *)(pplVar18 + 1) == '\0') {
      if (local_50 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      *(void*)(pplVar18 + 1) = 0;
    }
    if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  FUN_01266770();
  plVar15 = local_48;
  if ((local_40 == '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  FUN_01266b80();
  plVar6 = local_48;
  if ((local_40 == '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  uVar16 = 0;
  FUN_004f2260(0,FUN_012759c0);
  plVar2 = local_48;
  plVar17 = (int64_t *)*arg1;
  if (plVar17 == local_48) {
    if (((char)arg1[1] == '\0') && (local_48 != (int64_t *)0x0)) {
      if (local_40 != '\0') goto LAB_012773ab;
      FUN_00d50b00();
      goto LAB_012773e1;
    }
  }
  else {
    lVar10 = arg1[1];
    if (local_40 != '\0') {
      *arg1 = (int64_t)local_48;
      if (((char)lVar10 != '\0') && (plVar17 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
LAB_012773ab:
      *(void*)(arg1 + 1) = 1;
      goto LAB_012773f9;
    }
    if (local_48 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    *arg1 = (int64_t)plVar2;
    if (((char)lVar10 != '\0') && (plVar17 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
LAB_012773e1:
    *(void*)(arg1 + 1) = 1;
  }
  if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
LAB_012773f9:
  plVar17 = (int64_t *)CONCAT71((int7)((uint64_t)uVar16 >> 8),!NAN(param_1));
  pVar14 = (void*)plVar17;
  lVar10 = *arg1;
  if (0 < *(int *)(lVar10 + 0xc)) {
    lVar20 = 0;
    do {
      plVar2 = *(int64_t **)(*(int64_t *)(lVar10 + 0x10) + lVar20 * 8);
      if (plVar2 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      pvVar9 = _pthread_getspecific((void*)plVar17);
      if ((pvVar9 == (void *)0x0) || (lVar10 = FUN_00e8b990(), lVar10 == 0)) {
        lVar10 = plVar2[0x19];
      }
      else {
        lVar10 = *(int64_t *)(plVar2[(uint64_t)(*(uint *)(lVar10 + 0x154) & 1) + 4] + 200);
      }
      if (lVar10 != 0) {
        FUN_00d50b00();
        if ((param_2 & !NAN(param_1)) != 0) {
          pvVar9 = _pthread_getspecific((void*)plVar17);
          if (pvVar9 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0152e7b0(param_1);
        }
        pvVar9 = _pthread_getspecific((void*)plVar17);
        if (pvVar9 != (void *)0x0) {
          FUN_00e8b990();
        }
        cVar7 = FUN_0126ee50();
        if (cVar7 == '\0') {
          pvVar9 = _pthread_getspecific((void*)plVar17);
          if ((pvVar9 == (void *)0x0) || (lVar10 = FUN_00e8b990(), lVar10 == 0)) {
            if (plVar2[0x1b] == 0) goto LAB_0127758f;
LAB_012775ae:
            pvVar9 = _pthread_getspecific((void*)plVar17);
            if (pvVar9 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_011ef490();
          }
          else {
            if (*(int64_t *)(plVar2[(uint64_t)(*(uint *)(lVar10 + 0x154) & 1) + 4] + 0xd8) != 0)
            goto LAB_012775ae;
LAB_0127758f:
            local_40 = '\0';
            local_48 = (int64_t *)0x0;
          }
          pvVar9 = _pthread_getspecific((void*)plVar17);
          if (pvVar9 != (void *)0x0) {
            FUN_00e8b990();
          }
          iVar8 = FUN_01326de0();
          if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((iVar8 != 3 || plVar15 == plVar2) || plVar6 == plVar2) goto LAB_0127766f;
        }
        else {
LAB_0127766f:
          pvVar9 = _pthread_getspecific((void*)plVar17);
          plVar11 = plVar2;
          if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
            plVar11 = (int64_t *)plVar2[(uint64_t)(*(uint *)(lVar10 + 0x154) & 1) + 4];
          }
          dVar24 = (double)plVar11[0x1d] + (double)plVar11[0x17];
          pvVar9 = _pthread_getspecific((void*)plVar17);
          if (pvVar9 != (void *)0x0) {
            FUN_00e8b990();
          }
          local_58 = (double)FUN_0152e9b0(param_1);
          pVar14 = (void*)plVar17;
          if (local_50 != (int64_t *)0x0) {
            pvVar9 = _pthread_getspecific(pVar14);
            plVar11 = local_50;
            if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
              plVar17 = local_50;
              plVar11 = (int64_t *)local_50[(uint64_t)(*(uint *)(lVar10 + 0x154) & 1) + 4];
            }
            pVar14 = (void*)plVar17;
            local_58 = (double)(**(code **)(*plVar11 + 0x3d8))(local_58,1);
          }
          pvVar9 = _pthread_getspecific(pVar14);
          if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
            pVar14 = (void*)local_38;
          }
          iVar8 = FUN_013f3690(dVar24);
          if (iVar8 == -1) {
            pvVar9 = _pthread_getspecific(pVar14);
            if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
              pVar14 = (void*)local_38;
            }
            FUN_013f2b00();
            iVar8 = *(int *)((int64_t)local_48 + 0xc);
            if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            bVar19 = true;
            iVar4 = -(uint)(iVar8 == 0);
          }
          else {
            pvVar9 = _pthread_getspecific(pVar14);
            if (pvVar9 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_013f2b00();
            lVar10 = (int64_t)iVar8;
            if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            pvVar9 = _pthread_getspecific((void*)lVar10);
            if (pvVar9 != (void *)0x0) {
              FUN_00e8b990();
            }
            dVar22 = (double)FUN_013faed0();
            pvVar9 = _pthread_getspecific((void*)lVar10);
            if (pvVar9 != (void *)0x0) {
              FUN_00e8b990();
            }
            dVar23 = (double)FUN_013faf20();
            pVar14 = (void*)lVar10;
            if ((dVar22 != dVar24) || (bVar19 = false, NAN(dVar22) || NAN(dVar24))) {
              if ((dVar23 != local_58) || (bVar19 = false, NAN(dVar23) || NAN(local_58))) {
                dVar22 = (dVar24 - dVar22) / (local_58 - dVar23);
                pVar14 = (void*)
                         CONCAT71((int7)((uint64_t)lVar10 >> 8),dVar22 <= g_023b1e98);
                bVar19 = g_023b3498 <= dVar22 && dVar22 <= g_023b1e98;
              }
            }
            pvVar9 = _pthread_getspecific(pVar14);
            if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
              pVar14 = (void*)local_38;
            }
            FUN_013f2b00();
            iVar1 = *(int *)((int64_t)local_48 + 0xc);
            if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            iVar4 = iVar8 + 1;
            if (iVar1 + -1 <= iVar8) {
              iVar4 = -1;
            }
          }
          bVar3 = bVar19;
          if ((iVar4 != -1) && (bVar3 = false, bVar19)) {
            pvVar9 = _pthread_getspecific(pVar14);
            if (pvVar9 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_013f2b00();
            lVar10 = (int64_t)iVar4;
            if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            pvVar9 = _pthread_getspecific((void*)lVar10);
            if (pvVar9 != (void *)0x0) {
              FUN_00e8b990();
            }
            dVar22 = (double)FUN_013faed0();
            pvVar9 = _pthread_getspecific((void*)lVar10);
            if (pvVar9 != (void *)0x0) {
              FUN_00e8b990();
            }
            dVar23 = (double)FUN_013faf20();
            pVar14 = (void*)lVar10;
            bVar3 = false;
            if ((dVar24 != dVar22) || (NAN(dVar24) || NAN(dVar22))) {
              if ((local_58 != dVar23) || (NAN(local_58) || NAN(dVar23))) {
                dVar22 = (dVar22 - dVar24) / (dVar23 - local_58);
                pVar14 = (void*)
                         CONCAT71((int7)((uint64_t)lVar10 >> 8),dVar22 <= g_023b1e98);
                bVar3 = g_023b3498 <= dVar22 && dVar22 <= g_023b1e98;
              }
            }
          }
          if (bVar3) {
            pvVar9 = _pthread_getspecific(pVar14);
            plVar17 = local_38;
            if ((pvVar9 != (void *)0x0) &&
               (lVar10 = FUN_00e8b990(), plVar17 = local_38, lVar10 != 0)) {
              plVar17 = (int64_t *)local_38[(uint64_t)(*(uint *)(lVar10 + 0x154) & 1) + 4];
            }
            (**(code **)(*plVar17 + 0x410))(dVar24,local_58);
            if ((local_d0 != '\0') && (local_d8 != 0)) {
              FUN_00d50b20();
            }
          }
        }
        FUN_00d50b20();
      }
      if (plVar2 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      lVar20 = lVar20 + 1;
      lVar10 = *arg1;
      pVar14 = *(void* *)(lVar10 + 0xc);
      plVar17 = (int64_t *)(int64_t)(int)pVar14;
    } while (lVar20 < (int64_t)plVar17);
  }
  pvVar9 = _pthread_getspecific(pVar14);
  if (pvVar9 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013f2b00();
  plVar17 = local_48;
  if ((((local_40 == '\0') && (local_48 != (int64_t *)0x0)) && (FUN_00d50b00(), local_40 != '\0'))
     && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((int64_t)*(int *)((int64_t)plVar17 + 0xc) != 0) {
    lVar10 = *(int64_t *)(plVar17[2] + -8 + (int64_t)*(int *)((int64_t)plVar17 + 0xc) * 8);
    if (lVar10 != 0) {
      FUN_00d50b00();
    }
    puVar12 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    pVar14 = 0x25ddb28;
    *puVar12 = &g_025ddb28;
    puVar12[0xb] = 0;
    puVar12[7] = 0;
    puVar12[8] = 0;
    *(void*)((int64_t)puVar12 + 0x43) = 0;
    *(void*)((int64_t)puVar12 + 0x4b) = 0;
    pcVar5 = g_025ddb40;
    (*g_025ddb40)();
    pvVar9 = _pthread_getspecific(pVar14);
    if (pvVar9 != (void *)0x0) {
      FUN_00e8b990();
    }
    pvVar9 = _pthread_getspecific(pVar14);
    if (pvVar9 != (void *)0x0) {
      FUN_00e8b990();
    }
    dVar24 = (double)FUN_013faed0();
    FUN_013fae90(dVar24 + g_023b4df8);
    pvVar9 = _pthread_getspecific(pVar14);
    if (pvVar9 != (void *)0x0) {
      FUN_00e8b990();
    }
    pvVar9 = _pthread_getspecific(pVar14);
    if (pvVar9 != (void *)0x0) {
      FUN_00e8b990();
    }
    dVar24 = (double)FUN_013faed0();
    FUN_013faee0(dVar24 + g_023b4df8);
    pvVar9 = _pthread_getspecific(pVar14);
    if ((pvVar9 != (void *)0x0) && (lVar20 = FUN_00e8b990(), lVar20 != 0)) {
      pVar14 = (void*)local_38;
    }
    FUN_013f2b30();
    lVar20 = *(int64_t *)plVar17[2];
    lVar21 = lVar10;
    if (lVar10 != lVar20) {
      if (lVar20 != 0) {
        FUN_00d50b00();
      }
      lVar21 = lVar20;
      if (lVar10 != 0) {
        FUN_00d50b20();
      }
    }
    puVar13 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar13 = &g_025ddb28;
    puVar13[0xb] = 0;
    puVar13[7] = 0;
    puVar13[8] = 0;
    *(void*)((int64_t)puVar13 + 0x43) = 0;
    *(void*)((int64_t)puVar13 + 0x4b) = 0;
    (*pcVar5)();
    if (puVar12 == puVar13) {
      FUN_00d50b20();
    }
    else {
      FUN_00d50b20();
    }
    pvVar9 = _pthread_getspecific(pVar14);
    if (pvVar9 != (void *)0x0) {
      FUN_00e8b990();
    }
    pvVar9 = _pthread_getspecific(pVar14);
    if (pvVar9 != (void *)0x0) {
      FUN_00e8b990();
    }
    dVar24 = (double)FUN_013faed0();
    FUN_013fae90(dVar24 + g_02410f70);
    pvVar9 = _pthread_getspecific(pVar14);
    if (pvVar9 != (void *)0x0) {
      FUN_00e8b990();
    }
    pvVar9 = _pthread_getspecific(pVar14);
    if (pvVar9 != (void *)0x0) {
      FUN_00e8b990();
    }
    dVar24 = (double)FUN_013faed0();
    FUN_013faee0(dVar24 + g_02410f70);
    pvVar9 = _pthread_getspecific(pVar14);
    if (pvVar9 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013f2cf0();
    FUN_00d50b20();
    if (lVar21 != 0) {
      FUN_00d50b20();
    }
  }
  *this_ptr = local_38;
  *(void*)(this_ptr + 1) = 1;
  FUN_00d50b20();
  if (plVar6 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (plVar15 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (local_50 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 0132b1c0
// ============================================================
// Function: FUN_0132b1c0
// Address: 0132b1c0
// Size: 3152 bytes
// Class: MUAudioSourceSibilantItem
// === MUAudioSourceSibilantItem properties ===
//                   _audioSourceElement
//                   _suggestsSeparateComponentRenderers
//                   _polyphonicSeparationDirectoryIdentifier
//                   _pulseTimeline


void* FUN_0132b1c0(uint64_t param_1)

{
  int64_t lVar1;
  code *pcVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t lVar5;
  void*puVar6;
  void *pvVar7;
  void*puVar8;
  int64_t *plVar9;
  void* pVar10;
  int64_t *plVar11;
  int64_t arg1;
  void*this_ptr;
  int64_t lVar12;
  int64_t lVar13;
  uint64_t uVar14;
  int64_t local_1b8;
  char local_1b0;
  int64_t local_1a8;
  uint8_t local_1a0;
  int64_t local_198;
  uint8_t local_190;
  int64_t local_188;
  char local_180;
  int64_t local_178;
  uint8_t local_170;
  int64_t local_168;
  uint8_t local_160;
  uint64_t local_158;
  int64_t local_150;
  char local_148;
  int64_t local_140;
  char local_138;
  int64_t local_130;
  char local_128;
  int64_t local_120;
  char local_118;
  int64_t local_110;
  char local_108;
  int64_t local_100;
  char local_f8;
  int64_t local_d0;
  char local_c8;
  int64_t local_c0;
  char local_b8;
  int64_t local_b0;
  int64_t local_a8;
  int64_t local_a0;
  uint64_t local_98;
  uint32_t local_90;
  int64_t local_88;
  void*local_80;
  void*local_78;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  void*local_58;
  char local_50 [8];
  int64_t local_48;
  int64_t local_40;
  int64_t local_38;
  
  lVar13 = *(int64_t *)(arg1 + 0x200);
  local_158 = param_1;
  puVar6 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  plVar11 = (int64_t *)&g_02572358;
  *puVar6 = &g_02572358;
  (*g_02572370)();
  if (lVar13 != 0) {
    pvVar7 = _pthread_getspecific((void*)plVar11);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01313ad0();
    pvVar7 = _pthread_getspecific((void*)plVar11);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012cb110();
    pvVar7 = _pthread_getspecific((void*)plVar11);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e6160();
    FUN_00d23310();
    uVar14 = CONCAT71((int7)((uint64_t)plVar11 >> 8),(char)local_a8);
    plVar11 = &local_38;
    if ((char)local_a8 != '\0') {
      plVar11 = &local_a8;
    }
    local_38._0_1_ = (char)local_a8;
    *(void*)plVar11 = 0;
    if (((char)local_a8 != '\0') && (local_b0 != 0)) {
      FUN_00d50b20();
    }
    pvVar7 = _pthread_getspecific((void*)uVar14);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e5ae0();
    lVar13 = local_48;
    if ((char)local_40 == '\0') {
      if (((local_48 != 0) && (FUN_00d50b00(), (char)local_40 != '\0')) && (local_48 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_40._0_1_ = '\0';
    }
    if (((char)local_38 != '\0') && (local_b0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_68 != '\0') && (CONCAT71(local_70._1_7_,(char)local_70) != 0)) {
      FUN_00d50b20();
    }
    if ((local_c8 != '\0') && (CONCAT71(local_d0._1_7_,(char)local_d0) != 0)) {
      FUN_00d50b20();
    }
    if ((local_b8 != '\0') && (CONCAT71(local_c0._1_7_,(char)local_c0) != 0)) {
      FUN_00d50b20();
    }
    local_58 = puVar6;
    if (lVar13 != 0) {
      local_a8._0_1_ = 0;
      local_b0 = 0;
      local_a0 = lVar13;
      local_90 = 0;
      local_98 = 0;
      if (0 < *(int *)(lVar13 + 0xc)) {
        lVar12 = 0;
        do {
          local_b0 = *(void*)(*(int64_t *)(lVar13 + 0x10) + lVar12 * 8);
          pvVar7 = _pthread_getspecific((void*)uVar14);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012649b0();
          lVar1 = CONCAT71(local_70._1_7_,(char)local_70);
          if (local_68 == '\0') {
            if (lVar1 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_68 = '\0';
          }
          local_40._0_1_ = '\0';
          local_48 = lVar1;
          FUN_00d21140();
          if (((char)local_40 != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
          if (lVar1 != 0) {
            FUN_00d50b20();
          }
          if ((local_68 != '\0') && (CONCAT71(local_70._1_7_,(char)local_70) != 0)) {
            FUN_00d50b20();
          }
          lVar12 = lVar12 + 1;
          local_98 = CONCAT44(local_98._4_4_,(int)lVar12);
        } while ((int)lVar12 < *(int *)(lVar13 + 0xc));
      }
      FUN_001159b0();
      FUN_00d50b20();
    }
    *this_ptr = local_58;
    *(void*)(this_ptr + 1) = 1;
    return this_ptr;
  }
  FUN_00d21370();
  puVar8 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar8 = &g_0258a670;
  pcVar2 = g_0258a688;
  (*g_0258a688)();
  local_78 = puVar8;
  puVar8 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar8 = &g_0258a670;
  (*pcVar2)();
  lVar13 = *(int64_t *)(arg1 + 0x40);
  local_80 = puVar8;
  if (lVar13 != 0) {
    FUN_00d50b00();
  }
  FUN_0147ce20();
  lVar12 = local_b0;
  if ((char)local_a8 == '\0') {
    if (((local_b0 != 0) && (FUN_00d50b00(), (char)local_a8 != '\0')) && (local_b0 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_a8._0_1_ = '\0';
  }
  if (lVar13 != 0) {
    FUN_00d50b20();
  }
  if (lVar12 == 0) {
    *this_ptr = puVar6;
    *(void*)(this_ptr + 1) = 1;
  }
  else {
    local_a8._0_1_ = '\0';
    local_b0 = 0;
    local_a0 = lVar12;
    local_90 = 0;
    local_98 = 0;
    local_58 = puVar6;
    if (0 < *(int *)(lVar12 + 0xc)) {
      lVar13 = 0;
      do {
        local_b0 = *(int64_t *)(*(int64_t *)(lVar12 + 0x10) + lVar13 * 8);
        pVar10 = (void*)plVar11;
        pvVar7 = _pthread_getspecific(pVar10);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_013e5700(local_158);
        lVar1 = local_48;
        if ((((char)local_40 == '\0') && (local_48 != 0)) &&
           ((FUN_00d50b00(), (char)local_40 != '\0' && (local_48 != 0)))) {
          FUN_00d50b20();
        }
        pvVar7 = _pthread_getspecific(pVar10);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0125a560();
        lVar3 = local_48;
        local_d0._0_1_ = (char)local_40;
        plVar11 = &local_d0;
        plVar9 = &local_40;
        if ((char)local_40 == '\0') {
          plVar9 = plVar11;
        }
        *(void*)plVar9 = 0;
        if (((char)local_40 != '\0') && (lVar3 != 0)) {
          FUN_00d50b20();
        }
        if (lVar3 != 0) {
          pvVar7 = _pthread_getspecific((void*)plVar11);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_011ef460();
          lVar4 = local_48;
          if (((char)local_40 != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
          pVar10 = (void*)plVar11;
          if (lVar4 != 0) {
            pvVar7 = _pthread_getspecific(pVar10);
            if (pvVar7 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_011ef460();
            pvVar7 = _pthread_getspecific(pVar10);
            if (pvVar7 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_013dd6a0();
            lVar4 = local_48;
            local_c0._0_1_ = (char)local_40;
            plVar11 = &local_c0;
            plVar9 = &local_40;
            if ((char)local_40 == '\0') {
              plVar9 = plVar11;
            }
            *(void*)plVar9 = 0;
            if (((char)local_40 != '\0') && (lVar4 != 0)) {
              FUN_00d50b20();
            }
            pVar10 = (void*)plVar11;
            local_60 = lVar4;
            if ((local_68 != '\0') && (CONCAT71(local_70._1_7_,(char)local_70) != 0)) {
              FUN_00d50b20();
            }
            pvVar7 = _pthread_getspecific(pVar10);
            if (pvVar7 != (void *)0x0) {
              FUN_00e8b990();
            }
            uVar14 = FUN_014bc420();
            lVar4 = local_48;
            local_70._0_1_ = (char)local_40;
            plVar11 = &local_70;
            plVar9 = &local_40;
            if ((char)local_40 == '\0') {
              plVar9 = plVar11;
            }
            *(void*)plVar9 = 0;
            if (((char)local_40 != '\0') && (lVar4 != 0)) {
              uVar14 = FUN_00d50b20();
            }
            pVar10 = (void*)plVar11;
            local_88 = lVar4;
            if (lVar4 != 0) {
              local_150 = lVar4;
              local_148 = '\0';
              uVar14 = FUN_0132c500(uVar14,&local_150);
              lVar4 = local_48;
              local_38._0_1_ = (char)local_40;
              plVar11 = &local_38;
              plVar9 = &local_40;
              if ((char)local_40 == '\0') {
                plVar9 = plVar11;
              }
              *(void*)plVar9 = 0;
              if (((char)local_40 != '\0') && (local_48 != 0)) {
                uVar14 = FUN_00d50b20();
              }
              pVar10 = (void*)plVar11;
              if ((local_148 != '\0') && (local_150 != 0)) {
                uVar14 = FUN_00d50b20();
              }
              if (lVar4 == 0) {
                local_140 = lVar1;
                local_138 = '\0';
                local_130 = local_60;
                local_128 = '\0';
                FUN_0132c5b0(uVar14,&local_130);
                if ((local_128 != '\0') && (local_130 != 0)) {
                  FUN_00d50b20();
                }
                if ((local_138 != '\0') && (local_140 != 0)) {
                  FUN_00d50b20();
                }
              }
              else {
                local_48 = local_88;
                local_40._0_1_ = '\0';
                FUN_00e383c0();
                if (((char)local_40 != '\0') && (local_48 != 0)) {
                  FUN_00d50b20();
                }
                local_1a8 = lVar1;
                local_1a0 = 0;
                local_198 = lVar4;
                local_190 = 0;
                plVar11 = &local_198;
                FUN_01329cf0(plVar11,&local_1a8);
                pVar10 = (void*)plVar11;
                if ((local_1b0 != '\0') && (local_1b8 != 0)) {
                  FUN_00d50b20();
                }
                if ((char)local_38 != '\0') {
                  FUN_00d50b20();
                }
              }
            }
            pvVar7 = _pthread_getspecific(pVar10);
            if (pvVar7 != (void *)0x0) {
              FUN_00e8b990();
            }
            uVar14 = FUN_014bc340();
            lVar4 = local_48;
            local_38._0_1_ = (char)local_40;
            plVar11 = &local_38;
            plVar9 = &local_40;
            if ((char)local_40 == '\0') {
              plVar9 = plVar11;
            }
            *(void*)plVar9 = 0;
            if (((char)local_40 != '\0') && (local_48 != 0)) {
              uVar14 = FUN_00d50b20();
            }
            if (lVar4 != 0) {
              local_120 = lVar4;
              local_118 = '\0';
              uVar14 = FUN_0132c500(uVar14,&local_120);
              lVar5 = local_48;
              local_50[0] = (char)local_40;
              plVar11 = (int64_t *)local_50;
              plVar9 = &local_40;
              if ((char)local_40 == '\0') {
                plVar9 = plVar11;
              }
              *(void*)plVar9 = 0;
              if (((char)local_40 != '\0') && (lVar5 != 0)) {
                uVar14 = FUN_00d50b20();
              }
              if ((local_118 != '\0') && (local_120 != 0)) {
                uVar14 = FUN_00d50b20();
              }
              if (lVar5 == 0) {
                local_110 = lVar1;
                local_108 = '\0';
                local_100 = local_60;
                local_f8 = '\0';
                FUN_0132c5b0(uVar14,&local_100);
                if ((local_f8 != '\0') && (local_100 != 0)) {
                  FUN_00d50b20();
                }
                if ((local_108 != '\0') && (local_110 != 0)) {
                  FUN_00d50b20();
                }
              }
              else {
                local_40._0_1_ = '\0';
                local_48 = lVar4;
                FUN_00e383c0();
                if (((char)local_40 != '\0') && (local_48 != 0)) {
                  FUN_00d50b20();
                }
                local_178 = lVar5;
                local_170 = 0;
                local_168 = lVar1;
                local_160 = 0;
                plVar11 = &local_168;
                FUN_01329cf0(plVar11,&local_178);
                if ((local_180 != '\0') && (local_188 != 0)) {
                  FUN_00d50b20();
                }
                if (local_50[0] != '\0') {
                  FUN_00d50b20();
                }
              }
              if ((char)local_38 != '\0') {
                FUN_00d50b20();
              }
            }
            if (((char)local_70 != '\0') && (local_88 != 0)) {
              FUN_00d50b20();
            }
            if (((char)local_c0 != '\0') && (local_60 != 0)) {
              FUN_00d50b20();
            }
          }
        }
        local_40._0_1_ = '\0';
        local_48 = lVar1;
        FUN_00d21140();
        if (((char)local_40 != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
        if (((char)local_d0 != '\0') && (lVar3 != 0)) {
          FUN_00d50b20();
        }
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
        lVar13 = lVar13 + 1;
        local_98 = CONCAT44(local_98._4_4_,(int)lVar13);
      } while ((int)lVar13 < *(int *)(lVar12 + 0xc));
    }
    FUN_001150f0();
    *this_ptr = local_58;
    *(void*)(this_ptr + 1) = 1;
    FUN_00d50b20();
    puVar6 = local_78;
    if (local_80 == (void*)0x0) goto LAB_0132be24;
  }
  puVar6 = local_78;
  FUN_00d50b20();
LAB_0132be24:
  if (puVar6 != (void*)0x0) {
    FUN_00d50b20();
  }
  return this_ptr;
}



// ============================================================
// 012762c0
// ============================================================
// Function: FUN_012762c0
// Address: 012762c0
// Size: 2673 bytes
// Class: MUAudioSourceSibilantItem
// === MUAudioSourceSibilantItem properties ===
//                   _audioSourceElement
//                   _suggestsSeparateComponentRenderers
//                   _polyphonicSeparationDirectoryIdentifier
//                   _pulseTimeline


void FUN_012762c0(uint64_t param_1)

{
  bool bVar1;
  void *pvVar2;
  int64_t lVar3;
  int64_t *plVar4;
  void* pVar5;
  uint64_t in_RCX;
  int64_t lVar6;
  int64_t *plVar7;
  int iVar8;
  int64_t *arg1;
  int64_t *this_ptr;
  uint32_t uVar9;
  int64_t *local_1d8;
  uint8_t local_1d0;
  int64_t *local_1c8;
  uint8_t local_1c0;
  int64_t *local_1b8;
  uint8_t local_1b0;
  int64_t *local_1a8;
  uint8_t local_1a0;
  int64_t local_198;
  char local_190;
  uint64_t local_188;
  uint8_t local_180;
  int64_t *local_178;
  uint8_t local_170;
  int64_t *local_168;
  uint8_t local_160;
  uint64_t local_158;
  int64_t *local_150;
  int64_t *local_148;
  int64_t local_140;
  int64_t local_138;
  char local_130;
  int64_t *local_128;
  char local_120;
  int64_t *local_118;
  char local_110;
  int64_t *local_108;
  char local_100;
  int64_t *local_f8;
  char local_f0;
  int64_t *local_e8;
  char local_e0;
  int64_t *local_d8;
  uint64_t local_d0;
  int64_t *local_c8;
  int64_t local_c0;
  char local_b8;
  int64_t local_b0;
  int local_a8;
  int64_t local_a0;
  char local_98;
  int64_t local_90;
  int local_88;
  int64_t *local_80;
  int64_t *local_78;
  uint64_t local_70;
  int64_t *local_68;
  int64_t *local_60;
  char local_58 [8];
  int64_t *local_50;
  uint64_t local_48;
  int local_40;
  int64_t *local_38;
  
  if (*(int *)(*this_ptr + 0xc) == 0) {
    return;
  }
  local_d0 = param_1;
  FUN_00d23310();
  plVar4 = local_60;
  pVar5 = (void*)CONCAT71((int7)((uint64_t)in_RCX >> 8),local_58[0]);
  plVar7 = &local_c0;
  if (local_58[0] != '\0') {
    plVar7 = (int64_t *)local_58;
  }
  local_c0 = CONCAT71(local_c0._1_7_,local_58[0]);
  *(char *)plVar7 = '\0';
  if ((local_58[0] != '\0') && (plVar4 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  pvVar2 = _pthread_getspecific(pVar5);
  if ((pvVar2 == (void *)0x0) || (lVar3 = FUN_00e8b990(), lVar3 == 0)) {
    lVar3 = plVar4[9];
  }
  else {
    lVar3 = *(int64_t *)(plVar4[(uint64_t)(*(uint *)(lVar3 + 0x154) & 1) + 4] + 0x48);
  }
  if (lVar3 != 0) {
    FUN_00d50b00();
    FUN_00d50b20();
  }
  local_140 = lVar3;
  if (((char)local_c0 != '\0') && (plVar4 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((*arg1 == 0) || (*(int *)(*arg1 + 0xc) == 0)) {
    local_70 = 0;
    local_68 = (int64_t *)0x0;
  }
  else {
    FUN_01273930();
    plVar4 = local_60;
    if ((local_58[0] == '\0') && (local_60 != (int64_t *)0x0)) {
      FUN_00d50b00();
    }
    local_138 = *arg1;
    local_130 = '\0';
    FUN_012771c0(local_d0,0);
    local_68 = local_60;
    if (local_60 == (int64_t *)0x0) {
      local_68 = (int64_t *)0x0;
      local_70 = 0;
    }
    else {
      local_70 = CONCAT71((int7)((uint64_t)local_60 >> 8),1);
      if (local_58[0] == '\0') {
        FUN_00d50b00();
      }
    }
    if ((local_130 != '\0') && (local_138 != 0)) {
      FUN_00d50b20();
    }
    if (plVar4 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  FUN_01273930();
  plVar4 = local_60;
  if (local_58[0] == '\0') {
    if (local_60 == (int64_t *)0x0) goto LAB_01276d6b;
    FUN_00d50b00();
  }
  else if (local_60 == (int64_t *)0x0) goto LAB_01276d6b;
  local_b8 = '\0';
  local_c0 = 0;
  local_c8 = plVar4;
  local_b0 = plVar4[2];
  local_a8 = 0;
  if (0 < *(int *)(local_b0 + 0xc)) {
    do {
      local_c0 = *(int64_t *)(*(int64_t *)(local_b0 + 0x10) + (int64_t)local_a8 * 8);
      FUN_01278310((int64_t)local_a8,&local_c0);
      plVar4 = local_60;
      if ((((local_58[0] == '\0') && (local_60 != (int64_t *)0x0)) &&
          (FUN_00d50b00(), local_58[0] != '\0')) && (local_60 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      local_78 = plVar4;
      local_128 = plVar4;
      local_120 = '\0';
      local_1d8 = local_68;
      local_1d0 = 0;
      pVar5 = (void*)&local_1d8;
      FUN_012771c0(local_d0,local_140 == 0);
      plVar4 = local_60;
      if ((local_58[0] == '\0') && (local_60 != (int64_t *)0x0)) {
        FUN_00d50b00();
      }
      local_38 = plVar4;
      if ((local_120 != '\0') && (local_128 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (local_140 == 0) {
        pvVar2 = _pthread_getspecific(pVar5);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_013f2b00();
        iVar8 = *(int *)((int64_t)local_60 + 0xc);
        if ((local_58[0] != '\0') && (local_60 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (iVar8 != 0) {
          local_1c8 = local_78;
          local_1c0 = 0;
          local_1b8 = local_38;
          local_1b0 = 0;
          FUN_012783e0();
        }
        if (local_68 != (int64_t *)0x0) {
          local_118 = local_78;
          local_110 = '\0';
          FUN_0152eef0();
          if ((local_110 != '\0') && (local_118 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
      }
      else {
        local_1a8 = local_78;
        local_1a0 = 0;
        FUN_01273200();
        plVar4 = local_60;
        if (local_58[0] == '\0') {
          if (local_60 != (int64_t *)0x0) {
            FUN_00d50b00();
            goto LAB_012766b4;
          }
        }
        else if (local_60 != (int64_t *)0x0) {
LAB_012766b4:
          local_98 = '\0';
          local_a0 = 0;
          local_d8 = plVar4;
          local_90 = plVar4[2];
          local_88 = 0;
          if (0 < *(int *)(local_90 + 0xc)) {
            do {
              lVar3 = (int64_t)local_88;
              local_a0 = *(int64_t *)(*(int64_t *)(local_90 + 0x10) + lVar3 * 8);
              FUN_019c6680();
              plVar4 = local_60;
              pVar5 = (void*)lVar3;
              if ((((local_58[0] == '\0') && (local_60 != (int64_t *)0x0)) &&
                  (FUN_00d50b00(), local_58[0] != '\0')) && (local_60 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              local_150 = plVar4;
              local_108 = plVar4;
              local_100 = '\0';
              FUN_01278c70();
              plVar4 = local_60;
              if ((local_58[0] == '\0') && (local_60 != (int64_t *)0x0)) {
                FUN_00d50b00();
              }
              local_80 = plVar4;
              if ((local_100 != '\0') && (local_108 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              if (local_68 == (int64_t *)0x0) {
                local_f8 = local_80;
                local_f0 = '\0';
                local_188 = 0;
                local_180 = 0;
                pVar5 = (void*)&local_188;
                FUN_012771c0(local_d0,1);
                plVar4 = local_60;
                if (local_60 == (int64_t *)0x0) {
                  bVar1 = false;
                  plVar4 = (int64_t *)0x0;
                }
                else {
                  bVar1 = true;
                  if (local_58[0] == '\0') {
                    FUN_00d50b00();
                  }
                }
                if ((local_f0 != '\0') && (local_f8 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
              }
              else {
                plVar4 = (int64_t *)FUN_000bea40();
                (**(code **)(*plVar4 + 0x18))();
                pvVar2 = _pthread_getspecific(pVar5);
                if ((pvVar2 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
                  pVar5 = (void*)local_38;
                }
                FUN_013f2b00();
                plVar7 = local_60;
                if (local_58[0] == '\0') {
                  if (local_60 != (int64_t *)0x0) {
                    FUN_00d50b00();
                    if ((local_58[0] != '\0') && (local_60 != (int64_t *)0x0)) {
                      FUN_00d50b20();
                    }
                    goto LAB_012768e8;
                  }
                }
                else if (local_60 != (int64_t *)0x0) {
LAB_012768e8:
                  local_58[0] = '\0';
                  local_60 = (int64_t *)0x0;
                  local_148 = plVar7;
                  local_50 = plVar7;
                  local_48 = 0xffffffff;
                  local_40 = 0;
                  local_48._4_4_ = 0;
                  while( true ) {
                    if (local_48._4_4_ != 0) {
                      if (local_48._4_4_ < 1) {
                        iVar8 = -local_48._4_4_;
                      }
                      else {
                        iVar8 = (int)local_48 - local_48._4_4_;
                        local_48 = CONCAT44(local_48._4_4_,iVar8);
                        FUN_00d23690();
                        local_40 = local_40 + local_48._4_4_;
                        iVar8 = 0;
                      }
                      local_48 = CONCAT44(iVar8,(int)local_48);
                    }
                    lVar3 = (int64_t)(int)local_48;
                    iVar8 = (int)local_48 + 1;
                    local_48 = CONCAT44(local_48._4_4_,iVar8);
                    if (*(int *)((int64_t)local_50 + 0xc) <= iVar8) break;
                    lVar6 = local_50[2];
                    local_60 = *(int64_t **)(lVar6 + 8 + lVar3 * 8);
                    pvVar2 = _pthread_getspecific((void*)lVar6);
                    pVar5 = (void*)lVar6;
                    plVar7 = plVar4;
                    if ((pvVar2 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
                      plVar7 = (int64_t *)plVar4[(uint64_t)(*(uint *)(lVar3 + 0x154) & 1) + 4];
                    }
                    pvVar2 = _pthread_getspecific(pVar5);
                    if (pvVar2 != (void *)0x0) {
                      FUN_00e8b990();
                    }
                    pvVar2 = _pthread_getspecific(pVar5);
                    if (pvVar2 != (void *)0x0) {
                      FUN_00e8b990();
                    }
                    FUN_013faed0();
                    local_158 = FUN_012f8e60();
                    pvVar2 = _pthread_getspecific(pVar5);
                    if (pvVar2 != (void *)0x0) {
                      FUN_00e8b990();
                    }
                    pvVar2 = _pthread_getspecific(pVar5);
                    if (pvVar2 != (void *)0x0) {
                      FUN_00e8b990();
                    }
                    FUN_013faf20();
                    uVar9 = FUN_012f8e60();
                    (**(code **)(*plVar7 + 0x418))(local_158,uVar9);
                    if ((local_190 != '\0') && (local_198 != 0)) {
                      FUN_00d50b20();
                    }
                  }
                  plVar7 = local_50;
                  FUN_01a81420();
                  pVar5 = (void*)plVar7;
                  bVar1 = true;
                  FUN_00d50b20();
                  goto LAB_01276b40;
                }
                bVar1 = true;
              }
LAB_01276b40:
              pvVar2 = _pthread_getspecific(pVar5);
              if (pvVar2 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_013f2b00();
              iVar8 = *(int *)((int64_t)local_60 + 0xc);
              if ((local_58[0] != '\0') && (local_60 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              if (iVar8 != 0) {
                local_178 = local_80;
                local_170 = 0;
                local_160 = 0;
                local_168 = plVar4;
                FUN_012783e0();
              }
              if (local_68 != (int64_t *)0x0) {
                local_e8 = local_80;
                local_e0 = '\0';
                FUN_0152eef0();
                if ((local_e0 != '\0') && (local_e8 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
              }
              if ((bVar1) && (plVar4 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              if (local_80 != (int64_t *)0x0) {
                FUN_00d50b20();
              }
              if (local_150 != (int64_t *)0x0) {
                FUN_00d50b20();
              }
              local_88 = local_88 + 1;
            } while (local_88 < *(int *)(local_90 + 0xc));
            if ((local_98 != '\0') && (local_a0 != 0)) {
              FUN_00d50b20();
            }
          }
          FUN_00d50b20();
        }
      }
      if (local_38 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if (local_78 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      local_a8 = local_a8 + 1;
    } while (local_a8 < *(int *)(local_b0 + 0xc));
    if ((local_b8 != '\0') && (local_c0 != 0)) {
      FUN_00d50b20();
    }
  }
  FUN_00d50b20();
LAB_01276d6b:
  if (((char)local_70 != '\0') && (local_68 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 01273930
// ============================================================
// Function: FUN_01273930
// Address: 01273930
// Size: 2807 bytes
// Class: MUAudioSourceSibilantItem
// === MUAudioSourceSibilantItem properties ===
//                   _audioSourceElement
//                   _suggestsSeparateComponentRenderers
//                   _polyphonicSeparationDirectoryIdentifier
//                   _pulseTimeline


void* FUN_01273930(void* param_1)

{
  int64_t lVar1;
  code *pcVar2;
  int64_t *plVar3;
  void *pvVar4;
  int64_t lVar5;
  void*puVar6;
  void*puVar7;
  void**ppuVar8;
  char *pcVar9;
  void* pVar10;
  int iVar12;
  int64_t *arg1;
  void*this_ptr;
  void*local_d8;
  char local_d0;
  void*local_c8;
  char local_c0;
  int64_t local_b8;
  char local_b0;
  void*local_a8;
  char local_a0;
  int64_t *local_98;
  void*local_90;
  void*local_88;
  void*local_80;
  void*local_78;
  uint64_t local_70;
  int local_68;
  char local_60;
  undefined7 uStack_5f;
  char local_58;
  void*local_50;
  void*local_48;
  char local_40 [8];
  char local_38 [8];
  int64_t lVar11;
  
  plVar3 = (int64_t *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar3 + 0x18))();
  if (*(int *)(*arg1 + 0xc) == 0) {
    *this_ptr = plVar3;
    *(void*)(this_ptr + 1) = 1;
  }
  else {
    local_98 = plVar3;
    FUN_00d23310();
    puVar6 = local_88;
    local_48 = (void*)CONCAT71(local_48._1_7_,(char)local_80);
    ppuVar8 = &local_48;
    if ((char)local_80 != '\0') {
      ppuVar8 = &local_80;
    }
    *(void*)ppuVar8 = 0;
    if (((char)local_80 != '\0') && (local_88 != (void*)0x0)) {
      FUN_00d50b20();
    }
    pvVar4 = _pthread_getspecific(param_1);
    if ((pvVar4 == (void *)0x0) || (lVar5 = FUN_00e8b990(), lVar5 == 0)) {
      lVar5 = puVar6[9];
    }
    else {
      lVar5 = *(int64_t *)(puVar6[(uint64_t)(*(uint *)(lVar5 + 0x154) & 1) + 4] + 0x48);
    }
    if (lVar5 != 0) {
      FUN_00d50b00();
      FUN_00d50b20();
    }
    if (((char)local_48 != '\0') && (puVar6 != (void*)0x0)) {
      FUN_00d50b20();
    }
    if (lVar5 == 0) {
      FUN_01273200();
      local_50 = local_88;
      if (((char)local_80 == '\0') && (local_88 != (void*)0x0)) {
        FUN_00d50b00();
      }
      FUN_00c9fe20();
      puVar6 = local_88;
      ppuVar8 = &local_80;
      if ((char)local_80 == '\0') {
        ppuVar8 = (void**)&local_60;
      }
      local_60 = (char)local_80;
      *(void*)ppuVar8 = 0;
      if (((char)local_80 != '\0') && (local_88 != (void*)0x0)) {
        FUN_00d50b20();
      }
      if (local_60 == '\0') {
        if (puVar6 != (void*)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_60 = '\0';
      }
      FUN_012e8850();
      puVar7 = local_48;
      if (local_40[0] == '\0') {
        if (((local_48 != (void*)0x0) && (FUN_00d50b00(), local_40[0] != '\0')) &&
           (local_48 != (void*)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_40[0] = '\0';
      }
      if (puVar6 != (void*)0x0) {
        FUN_00d50b20();
      }
      if (puVar7 == (void*)0x0) {
        *this_ptr = plVar3;
        *(void*)(this_ptr + 1) = 1;
      }
      else {
        local_80._0_1_ = '\0';
        local_88 = (void*)0x0;
        local_78 = puVar7;
        local_68 = 0;
        local_70 = 0;
        if (0 < *(int *)((int64_t)puVar7 + 0xc)) {
          lVar5 = 0;
          do {
            local_88 = *(void**)(puVar7[2] + lVar5 * 8);
            FUN_00805b20();
            lVar11 = CONCAT71(uStack_5f,local_60);
            if (local_58 == '\0') {
              if (lVar11 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_58 = '\0';
            }
            FUN_00c9fe20();
            puVar6 = local_48;
            local_38[0] = local_40[0];
            pcVar9 = local_40;
            if (local_40[0] == '\0') {
              pcVar9 = local_38;
            }
            *pcVar9 = '\0';
            if ((local_40[0] != '\0') && (local_48 != (void*)0x0)) {
              FUN_00d50b20();
            }
            local_c0 = 0;
            if (local_38[0] == '\0') {
              if (puVar6 != (void*)0x0) {
                FUN_00d50b00();
              }
            }
            else {
              local_38[0] = '\0';
            }
            local_c0 = '\x01';
            local_c8 = puVar6;
            FUN_012fceb0();
            lVar1 = CONCAT71(local_d8._1_7_,(char)local_d8);
            if (local_d0 == '\0') {
              if (lVar1 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_d0 = '\0';
            }
            FUN_01274b90();
            if (lVar1 != 0) {
              FUN_00d50b20();
            }
            if ((local_d0 != '\0') && (CONCAT71(local_d8._1_7_,(char)local_d8) != 0)) {
              FUN_00d50b20();
            }
            if ((local_c0 != '\0') && (local_c8 != (void*)0x0)) {
              FUN_00d50b20();
            }
            if (lVar11 != 0) {
              FUN_00d50b20();
            }
            if ((local_58 != '\0') && (CONCAT71(uStack_5f,local_60) != 0)) {
              FUN_00d50b20();
            }
            lVar5 = lVar5 + 1;
            local_70 = CONCAT44(local_70._4_4_,(int)lVar5);
          } while ((int)lVar5 < *(int *)((int64_t)puVar7 + 0xc));
        }
        FUN_000be170();
        *this_ptr = local_98;
        *(void*)(this_ptr + 1) = 1;
        FUN_00d50b20();
      }
      if (local_50 != (void*)0x0) {
        FUN_00d50b20();
      }
    }
    else {
      puVar6 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar6 = &g_02572358;
      pcVar2 = g_02572370;
      (*g_02572370)();
      local_90 = puVar6;
      puVar7 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar7 = &g_02572358;
      (*pcVar2)();
      local_50 = puVar7;
      if ((void*)*arg1 != (void*)0x0) {
        local_80._0_1_ = '\0';
        local_88 = (void*)0x0;
        local_70 = 0xffffffff;
        local_68 = 0;
        local_70._4_4_ = 0;
        local_78 = (void*)*arg1;
        while( true ) {
          if (local_70._4_4_ != 0) {
            if (local_70._4_4_ < 1) {
              iVar12 = -local_70._4_4_;
            }
            else {
              iVar12 = (int)local_70 - local_70._4_4_;
              local_70 = CONCAT44(local_70._4_4_,iVar12);
              FUN_00d23690();
              local_68 = local_68 + local_70._4_4_;
              iVar12 = 0;
            }
            local_70 = CONCAT44(iVar12,(int)local_70);
          }
          lVar5 = (int64_t)(int)local_70;
          iVar12 = (int)local_70 + 1;
          local_70 = CONCAT44(local_70._4_4_,iVar12);
          if (*(int *)((int64_t)local_78 + 0xc) <= iVar12) break;
          lVar11 = local_78[2];
          puVar6 = *(void**)(lVar11 + 8 + lVar5 * 8);
          local_88 = puVar6;
          pvVar4 = _pthread_getspecific((void*)lVar11);
          puVar7 = local_88;
          pVar10 = (void*)lVar11;
          if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), puVar6 = puVar7, lVar5 != 0)) {
            puVar6 = (void*)puVar7[(uint64_t)(*(uint *)(lVar5 + 0x154) & 1) + 4];
          }
          if (puVar6[0x20] != 0) {
            pvVar4 = _pthread_getspecific(pVar10);
            if (pvVar4 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_012f4d60();
            puVar6 = local_48;
            local_60 = local_40[0];
            pcVar9 = local_40;
            if (local_40[0] == '\0') {
              pcVar9 = &local_60;
            }
            *pcVar9 = '\0';
            if ((local_40[0] != '\0') && (puVar6 != (void*)0x0)) {
              FUN_00d50b20();
            }
            local_40[0] = '\0';
            local_48 = puVar6;
            iVar12 = FUN_00d237a0();
            if ((local_40[0] != '\0') && (local_48 != (void*)0x0)) {
              FUN_00d50b20();
            }
            if (iVar12 == -1) {
              local_40[0] = '\0';
              local_48 = puVar6;
              FUN_00d21140();
              if ((local_40[0] != '\0') && (local_48 != (void*)0x0)) {
                FUN_00d50b20();
              }
              puVar7 = (void*)FUN_00e8fc40();
              FUN_00d4ff40();
              *puVar7 = &g_02572358;
              (*pcVar2)();
              local_40[0] = '\0';
              local_48 = puVar7;
              FUN_00d21140();
              if ((local_40[0] != '\0') && (local_48 != (void*)0x0)) {
                FUN_00d50b20();
              }
              FUN_00d50b20();
            }
            local_48 = local_88;
            local_40[0] = '\0';
            FUN_00d21140();
            if ((local_40[0] != '\0') && (local_48 != (void*)0x0)) {
              FUN_00d50b20();
            }
            if ((local_60 != '\0') && (puVar6 != (void*)0x0)) {
              FUN_00d50b20();
            }
          }
        }
        FUN_001159b0();
        puVar6 = local_90;
      }
      FUN_012e8850();
      puVar7 = local_88;
      if ((char)local_80 == '\0') {
        if (((local_88 != (void*)0x0) && (FUN_00d50b00(), (char)local_80 != '\0')) &&
           (local_88 != (void*)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_80._0_1_ = '\0';
      }
      if (puVar7 == (void*)0x0) {
        *this_ptr = plVar3;
        *(void*)(this_ptr + 1) = 1;
      }
      else {
        local_80._0_1_ = '\0';
        local_88 = (void*)0x0;
        local_78 = puVar7;
        local_68 = 0;
        local_70 = 0;
        if (0 < *(int *)((int64_t)puVar7 + 0xc)) {
          lVar5 = 0;
          do {
            local_88 = *(void**)(puVar7[2] + lVar5 * 8);
            local_40[0] = '\0';
            local_48 = local_88;
            iVar12 = FUN_00d23d20();
            if ((local_40[0] != '\0') && (local_48 != (void*)0x0)) {
              FUN_00d50b20();
            }
            lVar11 = *(int64_t *)(local_90[2] + (int64_t)iVar12 * 8);
            if (lVar11 != 0) {
              FUN_00d50b00();
            }
            plVar3 = local_98;
            FUN_00c9fe20();
            puVar6 = local_48;
            local_d8._0_1_ = local_40[0];
            ppuVar8 = (void**)local_40;
            if (local_40[0] == '\0') {
              ppuVar8 = &local_d8;
            }
            *(char *)ppuVar8 = '\0';
            if ((local_40[0] != '\0') && (puVar6 != (void*)0x0)) {
              FUN_00d50b20();
            }
            local_a0 = 0;
            if ((char)local_d8 == '\0') {
              if (puVar6 != (void*)0x0) {
                FUN_00d50b00();
              }
            }
            else {
              local_d8._0_1_ = '\0';
            }
            local_a0 = '\x01';
            local_a8 = puVar6;
            FUN_012fceb0();
            local_b0 = 0;
            lVar1 = CONCAT71(uStack_5f,local_60);
            if (local_58 == '\0') {
              if (lVar1 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_58 = '\0';
            }
            local_b0 = '\x01';
            local_b8 = lVar1;
            FUN_01274b90();
            if ((local_b0 != '\0') && (local_b8 != 0)) {
              FUN_00d50b20();
            }
            if ((local_58 != '\0') && (CONCAT71(uStack_5f,local_60) != 0)) {
              FUN_00d50b20();
            }
            if ((local_a0 != '\0') && (local_a8 != (void*)0x0)) {
              FUN_00d50b20();
            }
            if (lVar11 != 0) {
              FUN_00d50b20();
            }
            lVar5 = lVar5 + 1;
            local_70 = CONCAT44(local_70._4_4_,(int)lVar5);
          } while ((int)lVar5 < *(int *)((int64_t)puVar7 + 0xc));
        }
        FUN_000be170();
        *this_ptr = plVar3;
        *(void*)(this_ptr + 1) = 1;
        FUN_00d50b20();
        puVar6 = local_90;
      }
      if (local_50 != (void*)0x0) {
        FUN_00d50b20();
      }
      if (puVar6 != (void*)0x0) {
        FUN_00d50b20();
      }
    }
  }
  return this_ptr;
}



// ============================================================
// 0132a0a0
// ============================================================
// Function: FUN_0132a0a0
// Address: 0132a0a0
// Size: 3214 bytes
// Class: MUAudioSourceSibilantItem
// === MUAudioSourceSibilantItem properties ===
//                   _audioSourceElement
//                   _suggestsSeparateComponentRenderers
//                   _polyphonicSeparationDirectoryIdentifier
//                   _pulseTimeline


void FUN_0132a0a0(uint64_t param_1,void*param_2)

{
  double dVar1;
  int64_t lVar2;
  void *pvVar3;
  void* pVar4;
  int64_t lVar5;
  void*puVar6;
  double *pdVar7;
  int64_t *arg1;
  bool bVar8;
  double dVar9;
  int64_t local_160;
  char local_158;
  double local_150;
  uint8_t local_148;
  uint64_t local_140;
  uint8_t local_138;
  int64_t local_130;
  char local_128;
  uint64_t local_120;
  uint8_t local_118;
  double local_110;
  uint8_t local_108;
  double local_100;
  uint8_t local_f8;
  int64_t local_f0;
  int local_e8;
  int iStack_e4;
  int local_e0;
  int64_t local_d8;
  char local_d0;
  double local_c8;
  int64_t local_b0;
  char local_a8;
  int64_t local_a0;
  char local_98;
  int64_t local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  local_f0 = *arg1;
  if (local_f0 != 0) {
    local_f8 = 0;
    local_100 = 0.0;
    local_e8 = -1;
    iStack_e4 = 0;
    local_e0 = 0;
    do {
      do {
        do {
          if (iStack_e4 != 0) {
            if (iStack_e4 < 1) {
              iStack_e4 = -iStack_e4;
            }
            else {
              local_e8 = local_e8 - iStack_e4;
              FUN_00d23690();
              local_e0 = local_e0 + iStack_e4;
              iStack_e4 = 0;
            }
          }
          lVar2 = (int64_t)local_e8;
          local_e8 = local_e8 + 1;
          if (*(int *)(local_f0 + 0xc) <= local_e8) goto LAB_0132ad3d;
          lVar5 = *(int64_t *)(local_f0 + 0x10);
          dVar1 = *(double *)(lVar5 + 8 + lVar2 * 8);
          local_100 = dVar1;
          pvVar3 = _pthread_getspecific((void*)lVar5);
          pVar4 = (void*)lVar5;
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0125a560();
          if (local_60 == 0) {
            bVar8 = false;
          }
          else {
            local_c8 = dVar1;
            pvVar3 = _pthread_getspecific(pVar4);
            if ((pvVar3 != (void *)0x0) && (lVar2 = FUN_00e8b990(), lVar2 != 0)) {
              pVar4 = SUB84(local_c8,0);
            }
            FUN_0125a560();
            pvVar3 = _pthread_getspecific(pVar4);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_011ef460();
            if (local_80 == 0) {
              bVar8 = false;
              dVar1 = local_c8;
            }
            else {
              pvVar3 = _pthread_getspecific(pVar4);
              if (pvVar3 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_0125a560();
              if (local_50 == 0) {
                bVar8 = false;
                dVar1 = local_c8;
              }
              else {
                pvVar3 = _pthread_getspecific(pVar4);
                if (pvVar3 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_0125a560();
                pvVar3 = _pthread_getspecific(pVar4);
                dVar1 = local_c8;
                if (pvVar3 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_011ef460();
                bVar8 = local_90 != 0;
                if ((local_88 != '\0') && (local_90 != 0)) {
                  FUN_00d50b20();
                }
                if ((local_38 != '\0') && (local_40 != 0)) {
                  FUN_00d50b20();
                }
              }
              if ((local_48 != '\0') && (local_50 != 0)) {
                FUN_00d50b20();
              }
            }
            if ((local_78 != '\0') && (local_80 != 0)) {
              FUN_00d50b20();
            }
            if ((local_68 != '\0') && (local_70 != 0)) {
              FUN_00d50b20();
            }
          }
          if ((local_58 != '\0') && (local_60 != 0)) {
            FUN_00d50b20();
          }
        } while (!bVar8);
        pvVar3 = _pthread_getspecific(pVar4);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01270ab0();
        if (local_60 == 0) {
          pvVar3 = _pthread_getspecific(pVar4);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012708c0();
          if (local_80 == 0) {
            pvVar3 = _pthread_getspecific(pVar4);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0125a560();
            pvVar3 = _pthread_getspecific(pVar4);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_011ef460();
            pvVar3 = _pthread_getspecific(pVar4);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_013dd6a0();
            pvVar3 = _pthread_getspecific(pVar4);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_014bc420();
            pvVar3 = _pthread_getspecific(pVar4);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0125a560();
            pvVar3 = _pthread_getspecific(pVar4);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_011ef460();
            pvVar3 = _pthread_getspecific(pVar4);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_013dd6a0();
            if (local_70 == local_d8) {
              pvVar3 = _pthread_getspecific(pVar4);
              if (pvVar3 != (void *)0x0) {
                FUN_00e8b990();
              }
              local_c8 = (double)FUN_01259520();
              pvVar3 = _pthread_getspecific(pVar4);
              if (pvVar3 != (void *)0x0) {
                FUN_00e8b990();
              }
              dVar9 = (double)FUN_0125a280();
              bVar8 = (double)((uint64_t)(local_c8 - dVar9) & g_023908f0) < g_02391030;
            }
            else {
              bVar8 = false;
            }
            if ((local_d0 != '\0') && (local_d8 != 0)) {
              FUN_00d50b20();
            }
            if ((local_a8 != '\0') && (local_b0 != 0)) {
              FUN_00d50b20();
            }
            if ((local_98 != '\0') && (local_a0 != 0)) {
              FUN_00d50b20();
            }
            if ((local_68 != '\0') && (local_70 != 0)) {
              FUN_00d50b20();
            }
            if ((local_48 != '\0') && (local_50 != 0)) {
              FUN_00d50b20();
            }
            if ((local_88 != '\0') && (local_90 != 0)) {
              FUN_00d50b20();
            }
            if ((local_38 != '\0') && (local_40 != 0)) {
              FUN_00d50b20();
            }
          }
          else {
            bVar8 = false;
          }
          if ((local_78 != '\0') && (local_80 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          bVar8 = false;
        }
        if ((local_58 != '\0') && (local_60 != 0)) {
          FUN_00d50b20();
        }
        if (bVar8) {
          local_148 = 0;
          local_140 = *param_2;
          local_138 = 0;
          puVar6 = &local_140;
          local_150 = dVar1;
          FUN_01329cf0(puVar6,&local_150);
          pVar4 = (void*)puVar6;
          if ((local_158 != '\0') && (local_160 != 0)) {
            FUN_00d50b20();
          }
          pvVar3 = _pthread_getspecific(pVar4);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012708c0();
          lVar2 = local_60;
          if ((local_58 != '\0') && (local_60 != 0)) {
            FUN_00d50b20();
          }
          if (lVar2 != 0) goto LAB_0132ad3d;
        }
        pvVar3 = _pthread_getspecific(pVar4);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012708c0();
        if (local_60 == 0) {
          pvVar3 = _pthread_getspecific(pVar4);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01270ab0();
          if (local_80 == 0) {
            pvVar3 = _pthread_getspecific(pVar4);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0125a560();
            pvVar3 = _pthread_getspecific(pVar4);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_011ef460();
            pvVar3 = _pthread_getspecific(pVar4);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_013dd6a0();
            pvVar3 = _pthread_getspecific(pVar4);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_014bc420();
            pvVar3 = _pthread_getspecific(pVar4);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0125a560();
            pvVar3 = _pthread_getspecific(pVar4);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_011ef460();
            pvVar3 = _pthread_getspecific(pVar4);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_013dd6a0();
            if (local_70 == local_d8) {
              pvVar3 = _pthread_getspecific(pVar4);
              if (pvVar3 != (void *)0x0) {
                FUN_00e8b990();
              }
              local_c8 = (double)FUN_01259520();
              pvVar3 = _pthread_getspecific(pVar4);
              if (pvVar3 != (void *)0x0) {
                FUN_00e8b990();
              }
              dVar9 = (double)FUN_0125a280();
              bVar8 = (double)((uint64_t)(local_c8 - dVar9) & g_023908f0) < g_02391030;
            }
            else {
              bVar8 = false;
            }
            if ((local_d0 != '\0') && (local_d8 != 0)) {
              FUN_00d50b20();
            }
            if ((local_a8 != '\0') && (local_b0 != 0)) {
              FUN_00d50b20();
            }
            if ((local_98 != '\0') && (local_a0 != 0)) {
              FUN_00d50b20();
            }
            if ((local_68 != '\0') && (local_70 != 0)) {
              FUN_00d50b20();
            }
            if ((local_48 != '\0') && (local_50 != 0)) {
              FUN_00d50b20();
            }
            if ((local_88 != '\0') && (local_90 != 0)) {
              FUN_00d50b20();
            }
            if ((local_38 != '\0') && (local_40 != 0)) {
              FUN_00d50b20();
            }
          }
          else {
            bVar8 = false;
          }
          if ((local_78 != '\0') && (local_80 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          bVar8 = false;
        }
        if ((local_58 != '\0') && (local_60 != 0)) {
          FUN_00d50b20();
        }
      } while (!bVar8);
      local_120 = *param_2;
      local_118 = 0;
      local_108 = 0;
      pdVar7 = &local_110;
      local_110 = dVar1;
      FUN_01329cf0(pdVar7,&local_120);
      pVar4 = (void*)pdVar7;
      if ((local_128 != '\0') && (local_130 != 0)) {
        FUN_00d50b20();
      }
      pvVar3 = _pthread_getspecific(pVar4);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01270ab0();
      lVar2 = local_60;
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
    } while (lVar2 == 0);
LAB_0132ad3d:
    FUN_001159b0();
  }
  return;
}



// ============================================================
// 0132df30
// ============================================================
// Function: FUN_0132df30
// Address: 0132df30
// Size: 2430 bytes
// Class: MUAudioSourceSibilantItem
// === MUAudioSourceSibilantItem properties ===
//                   _audioSourceElement
//                   _suggestsSeparateComponentRenderers
//                   _polyphonicSeparationDirectoryIdentifier
//                   _pulseTimeline


void FUN_0132df30(void* param_1)

{
  char cVar1;
  int iVar2;
  void *pvVar3;
  int64_t lVar4;
  void* pVar5;
  int64_t lVar6;
  int64_t *plVar7;
  char unaff_SIL;
  int64_t this_ptr;
  uint64_t local_f8;
  uint8_t local_f0;
  int64_t local_e8;
  int64_t local_e0;
  char local_d8;
  int64_t local_d0;
  char local_c8;
  int64_t *local_c0;
  char local_b8;
  uint local_ac;
  int64_t local_a8;
  char local_a0;
  int64_t *local_98;
  int64_t *local_90;
  char local_88;
  int64_t *local_80;
  uint64_t local_78;
  int local_70;
  int64_t local_68;
  char local_60;
  uint64_t local_58;
  uint8_t local_50;
  int64_t local_48;
  uint64_t local_40;
  int local_38;
  
  if (*(int64_t *)(this_ptr + 0x1f8) != 0) {
    return;
  }
  if (*(int64_t *)(this_ptr + 0x200) != 0) {
    return;
  }
  if (*(int64_t *)(this_ptr + 0x148) == 0) {
    return;
  }
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  iVar2 = FUN_0141bab0();
  if (iVar2 != 1) {
    return;
  }
  plVar7 = *(int64_t **)(this_ptr + 0x38);
  if (plVar7 == (int64_t *)0x0) {
    return;
  }
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    plVar7 = *(int64_t **)(this_ptr + 0x38);
    lVar4 = FUN_00e8b990();
    if (lVar4 != 0) {
      plVar7 = (int64_t *)plVar7[(uint64_t)(*(uint *)(lVar4 + 0x154) & 1) + 4];
    }
  }
  lVar4 = (**(code **)(*plVar7 + 0x378))();
  if (0x7eb851ea < lVar4) {
    return;
  }
  cVar1 = *(char *)(this_ptr + 0x1aa);
  if (cVar1 == unaff_SIL) {
    return;
  }
  if (unaff_SIL == '\0') {
    if (cVar1 != '\0') {
      FUN_00d64850();
      *(void*)(this_ptr + 0x1aa) = 0;
      FUN_00d64910();
    }
    lVar4 = local_48;
    if (*(int64_t *)(this_ptr + 0x40) == 0) goto LAB_0132e873;
    local_98 = (int64_t *)(this_ptr + 0x40);
    local_50 = 0;
    local_58 = 0;
    local_40 = 0xffffffff;
    local_38 = 0;
    local_40._4_4_ = 0;
    local_48 = *(int64_t *)(this_ptr + 0x40);
    while( true ) {
      if (local_40._4_4_ != 0) {
        if (local_40._4_4_ < 1) {
          iVar2 = -local_40._4_4_;
        }
        else {
          iVar2 = (int)local_40 - local_40._4_4_;
          local_40 = CONCAT44(local_40._4_4_,iVar2);
          FUN_00d23690();
          local_38 = local_38 + local_40._4_4_;
          iVar2 = 0;
        }
        local_40 = CONCAT44(iVar2,(int)local_40);
      }
      lVar4 = (int64_t)(int)local_40;
      iVar2 = (int)local_40 + 1;
      local_40 = CONCAT44(local_40._4_4_,iVar2);
      if (*(int *)(local_48 + 0xc) <= iVar2) break;
      lVar6 = *(int64_t *)(local_48 + 0x10);
      local_58 = *(void*)(lVar6 + 8 + lVar4 * 8);
      pvVar3 = _pthread_getspecific((void*)lVar6);
      pVar5 = (void*)lVar6;
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013de560();
      if (local_88 == '\0') {
        if (local_90 != (int64_t *)0x0) {
          FUN_00d50b00();
          if ((local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          goto LAB_0132e17b;
        }
      }
      else if (local_90 != (int64_t *)0x0) {
LAB_0132e17b:
        pvVar3 = _pthread_getspecific(pVar5);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_014bd1e0();
        pvVar3 = _pthread_getspecific(pVar5);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_013dfef0();
        pvVar3 = _pthread_getspecific(pVar5);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_013e0cc0();
        FUN_00d50b20();
      }
    }
  }
  else {
    if (cVar1 == '\0') {
      FUN_00d64850();
      *(void*)(this_ptr + 0x1aa) = 1;
      FUN_00d64910();
      if (*(char *)(this_ptr + 0x1ab) != '\0') goto LAB_0132e040;
LAB_0132e25b:
      FUN_0132ec50();
      lVar6 = *(int64_t *)(this_ptr + 0x40);
      lVar4 = local_48;
    }
    else {
      if (*(char *)(this_ptr + 0x1ab) == '\0') goto LAB_0132e25b;
LAB_0132e040:
      lVar6 = *(int64_t *)(this_ptr + 0x40);
      lVar4 = local_48;
    }
    local_48 = lVar6;
    if (local_48 == 0) goto LAB_0132e873;
    local_98 = (int64_t *)(this_ptr + 0x40);
    local_50 = 0;
    local_58 = 0;
    local_40 = 0xffffffff;
    local_38 = 0;
    local_40._4_4_ = 0;
    while( true ) {
      if (local_40._4_4_ != 0) {
        if (local_40._4_4_ < 1) {
          iVar2 = -local_40._4_4_;
        }
        else {
          iVar2 = (int)local_40 - local_40._4_4_;
          local_40 = CONCAT44(local_40._4_4_,iVar2);
          FUN_00d23690();
          local_38 = local_38 + local_40._4_4_;
          iVar2 = 0;
        }
        local_40 = CONCAT44(iVar2,(int)local_40);
      }
      lVar4 = (int64_t)(int)local_40;
      iVar2 = (int)local_40 + 1;
      local_40 = CONCAT44(local_40._4_4_,iVar2);
      if (*(int *)(local_48 + 0xc) <= iVar2) break;
      lVar6 = *(int64_t *)(local_48 + 0x10);
      local_58 = *(void*)(lVar6 + 8 + lVar4 * 8);
      pvVar3 = _pthread_getspecific((void*)lVar6);
      pVar5 = (void*)lVar6;
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013de560();
      if (local_88 == '\0') {
        if (local_90 != (int64_t *)0x0) {
          FUN_00d50b00();
          if ((local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          goto LAB_0132e36a;
        }
      }
      else if (local_90 != (int64_t *)0x0) {
LAB_0132e36a:
        pvVar3 = _pthread_getspecific(pVar5);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_d8 = '\0';
        local_e0 = 0;
        plVar7 = &local_e0;
        FUN_014c0100(plVar7,1);
        pVar5 = (void*)plVar7;
        if ((local_d8 != '\0') && (local_e0 != 0)) {
          FUN_00d50b20();
        }
        pvVar3 = _pthread_getspecific(pVar5);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_013dfef0();
        pvVar3 = _pthread_getspecific(pVar5);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_013e0cc0();
        FUN_00d50b20();
      }
    }
  }
  FUN_001150f0();
  lVar6 = *local_98;
  lVar4 = local_48;
  if (lVar6 != 0) {
    local_50 = 0;
    local_58 = 0;
    local_38 = 0;
    local_40 = 0;
    local_48 = lVar6;
    if (0 < *(int *)(lVar6 + 0xc)) {
      pVar5 = 0;
      local_e8 = lVar6;
      do {
        local_58 = *(void*)(*(int64_t *)(local_e8 + 0x10) + (uint64_t)pVar5 * 8);
        local_ac = pVar5;
        pvVar3 = _pthread_getspecific(pVar5);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_013dfcb0();
        pvVar3 = _pthread_getspecific(pVar5);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_013dd790();
        local_98 = local_90;
        if (local_88 == '\0') {
          if (((local_90 != (int64_t *)0x0) && (FUN_00d50b00(), local_88 != '\0')) &&
             (local_90 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_88 = '\0';
        }
        if ((local_60 != '\0') && (local_68 != 0)) {
          FUN_00d50b20();
        }
        if (local_98 != (int64_t *)0x0) {
          local_88 = '\0';
          local_90 = (int64_t *)0x0;
          local_80 = local_98;
          local_78 = 0xffffffff;
          local_70 = 0;
          local_78._4_4_ = 0;
          while( true ) {
            if (local_78._4_4_ != 0) {
              if (local_78._4_4_ < 1) {
                iVar2 = -local_78._4_4_;
              }
              else {
                iVar2 = (int)local_78 - local_78._4_4_;
                local_78 = CONCAT44(local_78._4_4_,iVar2);
                FUN_00d23690();
                local_70 = local_70 + local_78._4_4_;
                iVar2 = 0;
              }
              local_78 = CONCAT44(iVar2,(int)local_78);
            }
            lVar4 = (int64_t)(int)local_78;
            iVar2 = (int)local_78 + 1;
            local_78 = CONCAT44(local_78._4_4_,iVar2);
            if (*(int *)((int64_t)local_80 + 0xc) <= iVar2) break;
            lVar6 = local_80[2];
            local_90 = *(int64_t **)(lVar6 + 8 + lVar4 * 8);
            pvVar3 = _pthread_getspecific((void*)lVar6);
            pVar5 = (void*)lVar6;
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_011ef8d0();
            lVar4 = local_68;
            if (((local_60 == '\0') && (local_68 != 0)) &&
               ((FUN_00d50b00(), local_60 != '\0' && (local_68 != 0)))) {
              FUN_00d50b20();
            }
            pvVar3 = _pthread_getspecific(pVar5);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0126f610();
            pvVar3 = _pthread_getspecific(pVar5);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_01266020(0);
            pvVar3 = _pthread_getspecific(pVar5);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0125a5f0();
            local_d0 = lVar4;
            local_c8 = '\0';
            FUN_0039e8b0();
            local_a8 = local_68;
            local_a0 = 0;
            if (local_60 == '\0') {
              if (local_68 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_60 = '\0';
            }
            local_a0 = '\x01';
            FUN_00e7bdb0();
            FUN_01287c80();
            if ((local_a0 != '\0') && (local_a8 != 0)) {
              FUN_00d50b20();
            }
            if ((local_60 != '\0') && (local_68 != 0)) {
              FUN_00d50b20();
            }
            if ((local_c8 != '\0') && (local_d0 != 0)) {
              FUN_00d50b20();
            }
            if (lVar4 != 0) {
              FUN_00d50b20();
            }
          }
          FUN_0015edf0();
          FUN_00d50b20();
        }
        pVar5 = local_ac + 1;
        local_40 = CONCAT44(local_40._4_4_,pVar5);
      } while ((int)pVar5 < *(int *)(local_e8 + 0xc));
    }
    FUN_001150f0();
    lVar4 = local_48;
  }
LAB_0132e873:
  local_48 = lVar4;
  local_b8 = '\0';
  local_c0 = (int64_t *)0x0;
  local_f8 = 0;
  local_f0 = 0;
  FUN_0132f280(&local_f8,&local_c0,0,0);
  if ((local_b8 != '\0') && (local_c0 != (int64_t *)0x0)) {
    (**(code **)(*local_c0 + 0x10))();
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 012783e0
// ============================================================
// Function: FUN_012783e0
// Address: 012783e0
// Size: 1933 bytes
// Class: MUAudioSourceSibilantItem
// === MUAudioSourceSibilantItem properties ===
//                   _audioSourceElement
//                   _suggestsSeparateComponentRenderers
//                   _polyphonicSeparationDirectoryIdentifier
//                   _pulseTimeline


void FUN_012783e0(void)

{
  double dVar1;
  double dVar2;
  int64_t lVar3;
  uint64_t uVar4;
  void *pvVar5;
  int64_t lVar6;
  void* pVar7;
  uint64_t uVar8;
  int64_t *plVar9;
  int64_t lVar10;
  int64_t *arg1;
  int64_t *this_ptr;
  char cVar11;
  int64_t lVar12;
  double dVar13;
  double dVar14;
  int64_t local_c8;
  char local_c0;
  uint64_t local_a8;
  uint8_t local_a0;
  int64_t local_98;
  uint8_t local_90;
  int64_t local_88;
  uint8_t local_80;
  double local_78;
  int64_t local_70;
  double local_60;
  double local_48;
  uint64_t local_38;
  
  local_a8 = 0;
  local_a0 = 0;
  FUN_01271d60(&local_a8,1);
  if ((local_c0 == '\0') && (local_c8 != 0)) {
    FUN_00d50b00();
  }
  local_70 = local_c8;
  local_98 = *this_ptr;
  if (*(int *)(local_98 + 0xc) < 1) {
    local_38 = 0;
    lVar10 = 0;
  }
  else {
    lVar12 = 0;
    lVar10 = 0;
    lVar3 = 0;
    local_38 = 0;
    do {
      pVar7 = (void*)lVar3;
      lVar3 = *(int64_t *)(local_98 + 0x10);
      lVar6 = *(int64_t *)(lVar3 + lVar12 * 8);
      if (lVar10 == lVar6) {
        if (((char)local_38 == '\0') && (lVar10 != 0)) {
          local_38 = CONCAT71((int7)((uint64_t)lVar3 >> 8),1);
          FUN_00d50b00();
        }
      }
      else {
        if (lVar6 != 0) {
          lVar3 = FUN_00d50b00();
        }
        if (((char)local_38 == '\0') || (lVar10 == 0)) {
          local_38 = CONCAT71((int7)((uint64_t)lVar3 >> 8),1);
          lVar10 = lVar6;
        }
        else {
          uVar4 = FUN_00d50b20();
          local_38 = CONCAT71((int7)((uint64_t)uVar4 >> 8),1);
          lVar10 = lVar6;
        }
      }
      pvVar5 = _pthread_getspecific(pVar7);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      pvVar5 = _pthread_getspecific(pVar7);
      lVar3 = lVar10;
      if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
        lVar3 = *(int64_t *)(lVar10 + 0x20 + (uint64_t)(*(uint *)(lVar6 + 0x154) & 1) * 8);
      }
      local_78 = *(double *)(lVar3 + 0xe8) + *(double *)(lVar3 + 0xf0);
      pvVar5 = _pthread_getspecific(pVar7);
      lVar3 = lVar10;
      if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
        lVar3 = *(int64_t *)(lVar10 + 0x20 + (uint64_t)(*(uint *)(lVar6 + 0x154) & 1) * 8);
      }
      dVar13 = *(double *)(lVar3 + 0xe8);
      dVar14 = *(double *)(lVar3 + 0xb8);
      pvVar5 = _pthread_getspecific(pVar7);
      lVar3 = lVar10;
      if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
        lVar3 = *(int64_t *)(lVar10 + 0x20 + (uint64_t)(*(uint *)(lVar6 + 0x154) & 1) * 8);
      }
      dVar1 = *(double *)(lVar3 + 0xe8);
      dVar2 = *(double *)(lVar3 + 0xc0);
      plVar9 = (int64_t *)*arg1;
      pvVar5 = _pthread_getspecific(pVar7);
      if (pvVar5 != (void *)0x0) {
        plVar9 = (int64_t *)*arg1;
        lVar3 = FUN_00e8b990();
        if (lVar3 != 0) {
          plVar9 = (int64_t *)plVar9[(uint64_t)(*(uint *)(lVar3 + 0x154) & 1) + 4];
        }
      }
      dVar13 = (double)(**(code **)(*plVar9 + 0x3d8))(dVar13 + dVar14,1);
      plVar9 = (int64_t *)*arg1;
      pvVar5 = _pthread_getspecific(pVar7);
      if (pvVar5 != (void *)0x0) {
        plVar9 = (int64_t *)*arg1;
        lVar3 = FUN_00e8b990();
        if (lVar3 != 0) {
          plVar9 = (int64_t *)plVar9[(uint64_t)(*(uint *)(lVar3 + 0x154) & 1) + 4];
        }
      }
      local_60 = (double)(**(code **)(*plVar9 + 0x3d8))(dVar1 + dVar2,1);
      pvVar5 = _pthread_getspecific(pVar7);
      lVar3 = lVar10;
      if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
        lVar3 = *(int64_t *)(lVar10 + 0x20 + (uint64_t)(*(uint *)(lVar6 + 0x154) & 1) * 8);
      }
      dVar13 = dVar13 - *(double *)(lVar3 + 0xb8);
      plVar9 = (int64_t *)*arg1;
      pvVar5 = _pthread_getspecific(pVar7);
      if (pvVar5 != (void *)0x0) {
        plVar9 = (int64_t *)*arg1;
        lVar3 = FUN_00e8b990();
        if (lVar3 != 0) {
          plVar9 = (int64_t *)plVar9[(uint64_t)(*(uint *)(lVar3 + 0x154) & 1) + 4];
        }
      }
      local_48 = (double)(**(code **)(*plVar9 + 0x3d8))(local_78,1);
      pvVar5 = _pthread_getspecific(pVar7);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      if (local_48 - dVar13 < g_0241b6a8) {
        pvVar5 = _pthread_getspecific(pVar7);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_78 = dVar13 + g_0241b6a8;
        pvVar5 = _pthread_getspecific(pVar7);
        lVar3 = lVar10;
        if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
          lVar3 = *(int64_t *)(lVar10 + 0x20 + (uint64_t)(*(uint *)(lVar6 + 0x154) & 1) * 8);
        }
        dVar14 = local_78 - local_48;
        local_48 = local_48 + dVar14;
        local_60 = local_60 + dVar14;
        if (*(int64_t *)(lVar3 + 0xa0) != 0) {
          FUN_00d50b00();
          FUN_00d50b20();
          pvVar5 = _pthread_getspecific(pVar7);
          if ((pvVar5 == (void *)0x0) || (lVar3 = FUN_00e8b990(), lVar3 == 0)) {
            lVar3 = *(int64_t *)(lVar10 + 0xa0);
          }
          else {
            lVar3 = *(int64_t *)
                     (*(int64_t *)(lVar10 + 0x20 + (uint64_t)(*(uint *)(lVar3 + 0x154) & 1) * 8) +
                     0xa0);
          }
          if (lVar3 != 0) {
            FUN_00d50b00();
          }
          pvVar5 = _pthread_getspecific(pVar7);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012dffb0();
          if (lVar3 != 0) {
            FUN_00d50b20();
          }
        }
      }
      pvVar5 = _pthread_getspecific(pVar7);
      if ((pvVar5 == (void *)0x0) || (lVar3 = FUN_00e8b990(), lVar3 == 0)) {
        lVar3 = lVar10;
        if ((*(double *)(lVar10 + 0xe8) != dVar13) ||
           (NAN(*(double *)(lVar10 + 0xe8)) || NAN(dVar13))) goto LAB_01278914;
      }
      else {
        lVar3 = *(int64_t *)(lVar10 + 0x20 + (uint64_t)(*(uint *)(lVar3 + 0x154) & 1) * 8);
        if ((*(double *)(lVar3 + 0xe8) != dVar13) || (NAN(*(double *)(lVar3 + 0xe8)) || NAN(dVar13))
           ) {
LAB_01278914:
          FUN_00d64850();
          *(double *)(lVar3 + 0xe8) = dVar13;
          FUN_00d64910();
        }
      }
      pvVar5 = _pthread_getspecific(pVar7);
      lVar3 = lVar10;
      if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
        lVar3 = *(int64_t *)(lVar10 + 0x20 + (uint64_t)(*(uint *)(lVar6 + 0x154) & 1) * 8);
      }
      local_48 = local_48 - dVar13;
      if ((*(double *)(lVar3 + 0xf0) != local_48) ||
         (NAN(*(double *)(lVar3 + 0xf0)) || NAN(local_48))) {
        FUN_00d64850();
        *(double *)(lVar3 + 0xf0) = local_48;
        FUN_00d64910();
      }
      pvVar5 = _pthread_getspecific(pVar7);
      lVar3 = lVar10;
      if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
        lVar3 = *(int64_t *)(lVar10 + 0x20 + (uint64_t)(*(uint *)(lVar6 + 0x154) & 1) * 8);
      }
      local_60 = local_60 - dVar13;
      if ((*(double *)(lVar3 + 0xc0) != local_60) ||
         (NAN(*(double *)(lVar3 + 0xc0)) || NAN(local_60))) {
        FUN_00d64850();
        *(double *)(lVar3 + 0xc0) = local_60;
        FUN_00d64910();
      }
      lVar12 = lVar12 + 1;
      local_98 = *this_ptr;
      lVar3 = (int64_t)*(int *)(local_98 + 0xc);
    } while (lVar12 < lVar3);
  }
  local_90 = 0;
  local_88 = local_70;
  local_80 = 0;
  FUN_0127e4d0(0);
  lVar3 = *this_ptr;
  if (*(int *)(lVar3 + 0xc) < 1) {
    cVar11 = (char)local_38;
  }
  else {
    lVar12 = 0;
    uVar8 = local_38;
    do {
      pVar7 = (void*)uVar8;
      local_38 = local_38 & 0xffffffff;
      lVar3 = *(int64_t *)(*(int64_t *)(lVar3 + 0x10) + lVar12 * 8);
      cVar11 = (char)local_38;
      if (lVar10 == lVar3) {
        lVar3 = lVar10;
        if ((cVar11 == '\0') && (lVar10 != 0)) {
          local_38 = 1;
          FUN_00d50b00();
        }
      }
      else {
        if (lVar3 != 0) {
          FUN_00d50b00();
        }
        local_38 = 1;
        if ((cVar11 != '\0') && (lVar10 != 0)) {
          FUN_00d50b20();
        }
      }
      lVar10 = lVar3;
      pvVar5 = _pthread_getspecific(pVar7);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0125a5f0();
      lVar12 = lVar12 + 1;
      lVar3 = *this_ptr;
      uVar8 = (uint64_t)*(int *)(lVar3 + 0xc);
    } while (lVar12 < (int64_t)uVar8);
    cVar11 = (char)local_38;
  }
  if (local_70 != 0) {
    cVar11 = (char)local_38;
    FUN_00d50b20();
  }
  if ((cVar11 != '\0') && (lVar10 != 0)) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 01271180
// ============================================================
// Function: FUN_01271180
// Address: 01271180
// Size: 1940 bytes
// Class: MUAudioSourceSibilantItem
// === MUAudioSourceSibilantItem properties ===
//                   _audioSourceElement
//                   _suggestsSeparateComponentRenderers
//                   _polyphonicSeparationDirectoryIdentifier
//                   _pulseTimeline


void* FUN_01271180(void)

{
  bool bVar1;
  code *pcVar2;
  int iVar3;
  void*puVar4;
  void*puVar5;
  char *pcVar6;
  void*puVar7;
  void *pvVar8;
  int64_t lVar9;
  void*puVar10;
  void*puVar11;
  void*puVar12;
  void*puVar13;
  void*arg1;
  void*this_ptr;
  bool bVar14;
  void*local_70;
  void*local_58;
  char local_50 [32];
  
  puVar4 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar4 = &g_02572358;
  pcVar2 = g_02572370;
  (*g_02572370)();
  local_58 = (void*)*arg1;
  local_50[0] = '\0';
  FUN_00d243f0();
  if ((local_50[0] != '\0') && (local_58 != (void*)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d227d0();
  puVar5 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar5 = &g_02572358;
  (*pcVar2)();
  local_50[0x10] = '\0';
  local_50[0x18] = '\0';
  puVar12 = (void*)0x0;
  puVar10 = (void*)0x0;
  bVar1 = false;
  local_70 = (void*)0x0;
  do {
    if (*(int *)((int64_t)puVar4 + 0xc) == 0) {
      *this_ptr = puVar5;
      *(void*)(this_ptr + 1) = 1;
      if ((local_50[0x18] != '\0') && (puVar12 != (void*)0x0)) {
        FUN_00d50b20();
      }
      if ((local_50[0x10] != '\0') && (puVar10 != (void*)0x0)) {
        FUN_00d50b20();
      }
      if ((bVar1) && (local_70 != (void*)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
      return this_ptr;
    }
    FUN_00d23340();
    local_50[8] = local_50[0];
    pcVar6 = local_50;
    if (local_50[0] == '\0') {
      pcVar6 = local_50 + 8;
    }
    *pcVar6 = '\0';
    if ((local_50[0] != '\0') && (local_58 != (void*)0x0)) {
      FUN_00d50b20();
    }
    if (local_58 == puVar10) {
      if (((local_50[0x10] == '\0') && (local_58 != (void*)0x0)) && (local_50[8] != '\0'))
      goto LAB_012712e9;
    }
    else {
      bVar14 = puVar10 != (void*)0x0;
      puVar10 = local_58;
      if (local_50[8] == '\0') {
        pcVar6 = local_50 + 0x10;
        if (bVar14 && local_50[0x10] != '\0') {
          FUN_00d50b20();
          pcVar6 = local_50 + 0x10;
        }
      }
      else {
        if (bVar14 && local_50[0x10] != '\0') {
          FUN_00d50b20();
        }
LAB_012712e9:
        local_50[0x10] = '\x01';
        pcVar6 = local_50 + 8;
      }
      *pcVar6 = '\0';
    }
    if ((local_50[8] != '\0') && (local_58 != (void*)0x0)) {
      FUN_00d50b20();
    }
    if (puVar10 == (void*)0x0) {
      FUN_00d23740();
      puVar10 = (void*)0x0;
    }
    else {
      puVar7 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar7 = &g_02572358;
      (*pcVar2)();
      if (puVar7 == local_70) {
        puVar7 = local_70;
        if (bVar1) {
          FUN_00d50b20();
          bVar14 = bVar1;
        }
        else {
          bVar14 = true;
        }
      }
      else {
        bVar14 = true;
        if ((bVar1) && (local_70 != (void*)0x0)) {
          FUN_00d50b20();
        }
      }
      bVar1 = bVar14;
      local_50[0] = '\0';
      puVar11 = puVar7;
      FUN_00d21140();
      if ((local_50[0] != '\0') && (puVar7 != (void*)0x0)) {
        FUN_00d50b20();
      }
      local_50[0] = '\0';
      FUN_00d21140();
      if ((local_50[0] != '\0') && (puVar10 != (void*)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d23740();
      puVar13 = puVar12;
      local_58 = puVar10;
      if (puVar12 != puVar10) {
        if ((local_50[0x18] != '\0') && (puVar12 != (void*)0x0)) {
          FUN_00d50b20();
        }
        local_50[0x18] = '\0';
        puVar13 = puVar10;
      }
      while( true ) {
        pvVar8 = _pthread_getspecific((void*)puVar11);
        if ((pvVar8 == (void *)0x0) || (lVar9 = FUN_00e8b990(), lVar9 == 0)) {
          lVar9 = puVar13[0x14];
        }
        else {
          lVar9 = *(int64_t *)(puVar13[(uint64_t)(*(uint *)(lVar9 + 0x154) & 1) + 4] + 0xa0);
        }
        if (lVar9 == 0) break;
        FUN_00d50b00();
        FUN_00d50b20();
        pvVar8 = _pthread_getspecific((void*)puVar11);
        if ((pvVar8 == (void *)0x0) || (lVar9 = FUN_00e8b990(), lVar9 == 0)) {
          lVar9 = puVar13[0x14];
        }
        else {
          lVar9 = *(int64_t *)(puVar13[(uint64_t)(*(uint *)(lVar9 + 0x154) & 1) + 4] + 0xa0);
        }
        if (lVar9 != 0) {
          FUN_00d50b00();
        }
        pvVar8 = _pthread_getspecific((void*)puVar11);
        if (pvVar8 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012dff00();
        if (local_58 == puVar13) {
          if (((local_50[0x18] == '\0') && (local_58 != (void*)0x0)) &&
             (puVar12 = puVar13, local_50[0] != '\0')) goto LAB_0127158a;
        }
        else {
          if (local_50[0] == '\0') {
            pcVar6 = local_50 + 0x18;
            puVar11 = local_58;
            if (puVar13 != (void*)0x0 && local_50[0x18] != '\0') {
              FUN_00d50b20();
              pcVar6 = local_50 + 0x18;
            }
          }
          else {
            puVar12 = local_58;
            if (puVar13 != (void*)0x0 && local_50[0x18] != '\0') {
              FUN_00d50b20();
            }
LAB_0127158a:
            local_50[0x18] = '\x01';
            pcVar6 = local_50;
            puVar11 = puVar12;
          }
          *pcVar6 = '\0';
          puVar13 = puVar11;
        }
        if ((local_50[0] != '\0') && (local_58 != (void*)0x0)) {
          FUN_00d50b20();
        }
        if (lVar9 != 0) {
          FUN_00d50b20();
        }
        local_50[0] = '\0';
        iVar3 = FUN_00d23d20();
        if ((local_50[0] != '\0') && (puVar13 != (void*)0x0)) {
          FUN_00d50b20();
        }
        local_58 = puVar13;
        if (iVar3 == -1) break;
        local_50[0] = '\0';
        FUN_00d21140();
        if ((local_50[0] != '\0') && (puVar13 != (void*)0x0)) {
          FUN_00d50b20();
        }
        local_58 = (void*)0x0;
        local_50[0] = '\0';
        FUN_00d233f0();
      }
      puVar12 = puVar10;
      if (puVar13 != puVar10) {
        if ((local_50[0x18] != '\0') && (puVar13 != (void*)0x0)) {
          FUN_00d50b20();
        }
        local_50[0x18] = '\0';
      }
      while( true ) {
        pvVar8 = _pthread_getspecific((void*)puVar11);
        if ((pvVar8 == (void *)0x0) || (lVar9 = FUN_00e8b990(), lVar9 == 0)) {
          lVar9 = puVar12[0x15];
        }
        else {
          lVar9 = *(int64_t *)(puVar12[(uint64_t)(*(uint *)(lVar9 + 0x154) & 1) + 4] + 0xa8);
        }
        local_70 = puVar7;
        if (lVar9 == 0) break;
        FUN_00d50b00();
        FUN_00d50b20();
        pvVar8 = _pthread_getspecific((void*)puVar11);
        if ((pvVar8 == (void *)0x0) || (lVar9 = FUN_00e8b990(), lVar9 == 0)) {
          lVar9 = puVar12[0x15];
        }
        else {
          lVar9 = *(int64_t *)(puVar12[(uint64_t)(*(uint *)(lVar9 + 0x154) & 1) + 4] + 0xa8);
        }
        if (lVar9 != 0) {
          FUN_00d50b00();
        }
        pvVar8 = _pthread_getspecific((void*)puVar11);
        if (pvVar8 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012dff70();
        if (local_58 == puVar12) {
          if (((local_50[0x18] == '\0') && (local_58 != (void*)0x0)) &&
             (puVar13 = puVar12, local_50[0] != '\0')) goto LAB_0127180a;
        }
        else {
          if (local_50[0] == '\0') {
            pcVar6 = local_50 + 0x18;
            puVar11 = local_58;
            if (puVar12 != (void*)0x0 && local_50[0x18] != '\0') {
              FUN_00d50b20();
              pcVar6 = local_50 + 0x18;
            }
          }
          else {
            puVar13 = local_58;
            if (puVar12 != (void*)0x0 && local_50[0x18] != '\0') {
              FUN_00d50b20();
            }
LAB_0127180a:
            local_50[0x18] = '\x01';
            pcVar6 = local_50;
            puVar11 = puVar13;
          }
          *pcVar6 = '\0';
          puVar12 = puVar11;
        }
        if ((local_50[0] != '\0') && (local_58 != (void*)0x0)) {
          FUN_00d50b20();
        }
        if (lVar9 != 0) {
          FUN_00d50b20();
        }
        local_50[0] = '\0';
        iVar3 = FUN_00d23d20();
        if ((local_50[0] != '\0') && (puVar12 != (void*)0x0)) {
          FUN_00d50b20();
        }
        local_58 = puVar12;
        if (iVar3 == -1) break;
        local_50[0] = '\0';
        FUN_00d23370();
        if ((local_50[0] != '\0') && (puVar12 != (void*)0x0)) {
          FUN_00d50b20();
        }
        local_58 = (void*)0x0;
        local_50[0] = '\0';
        FUN_00d233f0();
      }
    }
  } while( true );
}



// ============================================================
// 0126f610
// ============================================================
// Function: FUN_0126f610
// Address: 0126f610
// Size: 2249 bytes
// Class: MUAudioSourceSibilantItem
// === MUAudioSourceSibilantItem properties ===
//                   _audioSourceElement
//                   _suggestsSeparateComponentRenderers
//                   _polyphonicSeparationDirectoryIdentifier
//                   _pulseTimeline


void FUN_0126f610(void)

{
  int iVar1;
  int64_t lVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  char cVar8;
  void *pvVar9;
  int64_t lVar10;
  int64_t lVar11;
  void* pVar12;
  int64_t lVar13;
  uint uVar14;
  int64_t this_ptr;
  int64_t lVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  int64_t local_80;
  int64_t local_78;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  int64_t local_38;
  
  FUN_0125e7c0();
  lVar11 = local_58;
  if (local_58 == 0) {
    bVar7 = true;
    local_48 = 0;
    lVar2 = *(int64_t *)(this_ptr + 0xe0);
  }
  else {
    if (local_50 == '\0') {
      FUN_00d50b00();
    }
    bVar7 = false;
    lVar2 = *(int64_t *)(this_ptr + 0xe0);
    local_48 = local_58;
  }
  pVar12 = (void*)lVar11;
  if (lVar2 == 0) {
    local_78 = 0;
  }
  else {
    FUN_00d50b00();
    local_78 = lVar2;
  }
  pvVar9 = _pthread_getspecific(pVar12);
  if (pvVar9 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013df790();
  local_80 = local_58;
  lVar11 = local_58;
  if (local_58 == 0) {
    bVar3 = true;
    local_80 = 0;
  }
  else if (local_50 == '\0') {
    FUN_00d50b00();
    bVar3 = false;
  }
  else {
    bVar3 = false;
  }
  uVar14 = *(uint *)(local_78 + 0xc);
  if ((int)uVar14 < 1) {
    bVar6 = false;
    lVar13 = 0;
    bVar4 = false;
    local_38 = 0;
  }
  else {
    lVar15 = (uint64_t)uVar14 + 1;
    local_38 = 0;
    bVar4 = false;
    bVar6 = false;
    lVar10 = 0;
    do {
      uVar14 = uVar14 - 1;
      lVar11 = *(int64_t *)(*(int64_t *)(local_78 + 0x10) + (uint64_t)uVar14 * 8);
      pVar12 = uVar14;
      if (local_38 == lVar11) {
        if ((!bVar4) && (local_38 != 0)) {
          bVar4 = true;
          FUN_00d50b00();
        }
      }
      else {
        if (lVar11 != 0) {
          FUN_00d50b00();
        }
        if ((bVar4) && (local_38 != 0)) {
          FUN_00d50b20();
          bVar4 = true;
          local_38 = lVar11;
        }
        else {
          bVar4 = true;
          local_38 = lVar11;
        }
      }
      pvVar9 = _pthread_getspecific(pVar12);
      if (pvVar9 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_011ef460();
      if (local_58 == lVar10) {
        if ((bVar6) || (local_58 == 0)) {
joined_r0x0126f929:
          lVar13 = lVar10;
          bVar5 = bVar6;
          if ((local_50 != '\0') && (local_58 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          lVar13 = lVar10;
          bVar5 = true;
          if (local_50 == '\0') {
            FUN_00d50b00();
            goto LAB_0126f915;
          }
        }
      }
      else {
        lVar13 = local_58;
        if (local_50 == '\0') {
          if (local_58 != 0) {
            FUN_00d50b00();
          }
          bVar5 = true;
          if ((bVar6) && (lVar10 != 0)) {
            FUN_00d50b20();
            lVar10 = local_58;
LAB_0126f915:
            bVar6 = true;
            goto joined_r0x0126f929;
          }
        }
        else {
          bVar5 = true;
          if ((bVar6) && (lVar10 != 0)) {
            FUN_00d50b20();
          }
        }
      }
      bVar6 = bVar5;
      local_50 = '\0';
      lVar11 = lVar13;
      cVar8 = FUN_00d24090();
      if (cVar8 == '\0') {
        pvVar9 = _pthread_getspecific((void*)lVar11);
        if (pvVar9 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_013ddad0();
        pvVar9 = _pthread_getspecific((void*)lVar11);
        if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
          lVar11 = local_38;
        }
        FUN_011ef3f0();
        FUN_0126e8b0();
      }
      lVar15 = lVar15 + -1;
      lVar10 = lVar13;
      local_58 = lVar13;
    } while (1 < lVar15);
  }
  if (0 < *(int *)(local_80 + 0xc)) {
    lVar10 = 0;
    do {
      lVar11 = *(int64_t *)(*(int64_t *)(local_80 + 0x10) + lVar10 * 8);
      if (lVar13 == lVar11) {
        if (bVar6) {
          iVar1 = *(int *)(local_78 + 0xc);
        }
        else {
          if (lVar13 != 0) {
            FUN_00d50b00();
            goto LAB_0126fb33;
          }
          iVar1 = *(int *)(local_78 + 0xc);
        }
      }
      else {
        if (lVar11 != 0) {
          FUN_00d50b00();
        }
        if ((bVar6) && (lVar13 != 0)) {
          FUN_00d50b20();
          lVar13 = lVar11;
LAB_0126fb33:
          bVar6 = true;
          iVar1 = *(int *)(local_78 + 0xc);
        }
        else {
          bVar6 = true;
          iVar1 = *(int *)(local_78 + 0xc);
          lVar13 = lVar11;
        }
      }
      if (0 < iVar1) {
        lVar11 = 0;
        do {
          pvVar9 = _pthread_getspecific((void*)local_78);
          if (pvVar9 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_011ef460();
          if ((local_50 != '\0') && (local_58 != 0)) {
            FUN_00d50b20();
          }
          if (local_58 == lVar13) goto LAB_0126fae0;
          lVar11 = lVar11 + 1;
        } while (lVar11 < *(int *)(local_78 + 0xc));
      }
      pvVar9 = _pthread_getspecific((void*)local_78);
      if (pvVar9 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013ddd70();
      if (local_58 == local_38) {
        lVar11 = local_38;
        bVar5 = bVar4;
        if ((!bVar4) && (local_58 != 0)) {
          bVar5 = true;
          if (local_50 != '\0') goto LAB_0126fd34;
          FUN_00d50b00();
          bVar5 = true;
        }
LAB_0126fd20:
        if ((local_50 != '\0') && (local_58 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        lVar11 = local_58;
        if (local_50 == '\0') {
          if (local_58 != 0) {
            FUN_00d50b00();
          }
          bVar5 = true;
          if ((bVar4) && (local_38 != 0)) {
            FUN_00d50b20();
          }
          goto LAB_0126fd20;
        }
        bVar5 = true;
        if ((bVar4) && (local_38 != 0)) {
          FUN_00d50b20();
        }
      }
LAB_0126fd34:
      FUN_01265db0();
      local_38 = lVar11;
      bVar4 = bVar5;
LAB_0126fae0:
      lVar10 = lVar10 + 1;
      lVar11 = local_80;
    } while (lVar10 < *(int *)(local_80 + 0xc));
  }
  pVar12 = (void*)lVar11;
  pvVar9 = _pthread_getspecific(pVar12);
  if ((pvVar9 != (void *)0x0) && (lVar11 = FUN_00e8b990(), lVar11 != 0)) {
    pVar12 = (void*)local_48;
  }
  dVar16 = (double)FUN_013def20();
  if ((*(double *)(this_ptr + 0xb8) != dVar16) ||
     (NAN(*(double *)(this_ptr + 0xb8)) || NAN(dVar16))) {
    FUN_00d64850();
    *(double *)(this_ptr + 0xb8) = dVar16;
    FUN_00d64910();
  }
  pvVar9 = _pthread_getspecific(pVar12);
  if ((pvVar9 != (void *)0x0) && (lVar11 = FUN_00e8b990(), lVar11 != 0)) {
    pVar12 = (void*)local_48;
  }
  dVar17 = (double)FUN_013defa0();
  dVar16 = *(double *)(this_ptr + 0xf0);
  pvVar9 = _pthread_getspecific(pVar12);
  if (pvVar9 != (void *)0x0) {
    FUN_00e8b990();
  }
  dVar18 = (double)FUN_013de9b0();
  dVar18 = (dVar17 + dVar16) - dVar18;
  if ((*(double *)(this_ptr + 0xc0) != dVar18) ||
     (NAN(*(double *)(this_ptr + 0xc0)) || NAN(dVar18))) {
    FUN_00d64850();
    *(double *)(this_ptr + 0xc0) = dVar18;
    FUN_00d64910();
  }
  if (!bVar3) {
    FUN_00d50b20();
  }
  if ((bVar6) && (lVar13 != 0)) {
    FUN_00d50b20();
  }
  if (!bVar7 && local_48 != 0) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if ((bVar4) && (local_38 != 0)) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 01327e70
// ============================================================
// Function: FUN_01327e70
// Address: 01327e70
// Size: 1431 bytes
// Class: MUAudioSourceSibilantItem
// String references:
//   "MUAudioSourceSibilantItem"
// === MUAudioSourceSibilantItem properties ===
//                   _audioSourceElement
//                   _suggestsSeparateComponentRenderers
//                   _polyphonicSeparationDirectoryIdentifier
//                   _pulseTimeline


void FUN_01327e70(void* param_1)

{
  int64_t lVar1;
  bool bVar2;
  bool bVar3;
  int64_t *plVar4;
  char cVar5;
  int iVar6;
  void *pvVar7;
  int64_t lVar8;
  uint64_t uVar9;
  undefined7 uVar10;
  uint uVar11;
  uint uVar12;
  void* pVar13;
  int64_t **pplVar14;
  int64_t *plVar15;
  int64_t lVar16;
  undefined7 uVar18;
  uint64_t uVar17;
  int64_t lVar19;
  int64_t *local_68;
  int64_t *local_60;
  int64_t *local_58;
  char local_50;
  uint64_t local_48;
  int64_t local_40;
  uint64_t local_38;
  
  local_68 = (int64_t *)0x0;
  pvVar7 = _pthread_getspecific(param_1);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013df790();
  local_60 = local_58;
  if (local_58 == (int64_t *)0x0) {
    bVar2 = true;
    bVar3 = true;
    local_60 = (int64_t *)0x0;
    uVar11 = MACH_HEADER.filetype;
  }
  else {
    if (((local_50 == '\0') && (FUN_00d50b00(), local_50 != '\0')) && (local_58 != (int64_t *)0x0))
    {
      FUN_00d50b20();
    }
    bVar2 = false;
    bVar3 = false;
    uVar11 = *(uint *)((int64_t)local_60 + 0xc);
  }
  if (0 < (int)uVar11) {
    lVar19 = (uint64_t)uVar11 + 1;
    plVar15 = (int64_t *)0x0;
    lVar16 = 0;
    local_48 = 0;
    local_38 = 0;
    do {
      uVar11 = uVar11 - 1;
      lVar8 = local_60[2];
      lVar1 = *(int64_t *)(lVar8 + (uint64_t)uVar11 * 8);
      uVar12 = uVar11;
      if (lVar16 == lVar1) {
        if (((char)local_48 == '\0') && (lVar16 != 0)) {
          local_48 = CONCAT71((int7)((uint64_t)lVar8 >> 8),1);
          FUN_00d50b00();
        }
      }
      else {
        if (lVar1 != 0) {
          lVar8 = FUN_00d50b00();
        }
        if (((char)local_48 == '\0') || (lVar16 == 0)) {
          local_48 = CONCAT71((int7)((uint64_t)lVar8 >> 8),1);
          lVar16 = lVar1;
        }
        else {
          uVar9 = FUN_00d50b20();
          local_48 = CONCAT71((int7)((uint64_t)uVar9 >> 8),1);
          lVar16 = lVar1;
        }
      }
      local_40 = lVar16;
      pvVar7 = _pthread_getspecific(uVar12);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar9 = FUN_013dd6a0();
      plVar4 = local_58;
      uVar10 = (undefined7)((uint64_t)uVar9 >> 8);
      uVar18 = (undefined7)((uint64_t)lVar16 >> 8);
      if (local_58 == plVar15) {
        if (((char)local_38 != '\0') || (local_58 == (int64_t *)0x0)) {
          uVar17 = local_38 & 0xffffffff;
          plVar4 = plVar15;
          goto joined_r0x0132810c;
        }
        local_38 = CONCAT71(uVar10,1);
        if (local_50 == '\0') {
          FUN_00d50b00();
          goto LAB_013280b0;
        }
      }
      else {
        if (local_50 == '\0') {
          if (local_58 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
          local_68 = plVar4;
          uVar17 = CONCAT71(uVar18,1);
          if (((char)local_38 != '\0') && (plVar15 != (int64_t *)0x0)) {
            FUN_00d50b20();
            plVar15 = plVar4;
LAB_013280b0:
            uVar17 = CONCAT71(uVar18,1);
            plVar4 = plVar15;
          }
joined_r0x0132810c:
          plVar15 = plVar4;
          if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
            FUN_00d50b20();
            local_38 = uVar17 & 0xffffffff;
            goto LAB_01328157;
          }
          local_38 = uVar17 & 0xffffffff;
        }
        else {
          local_68 = local_58;
          if (((char)local_38 != '\0') && (plVar15 != (int64_t *)0x0)) {
            uVar9 = FUN_00d50b20();
            local_38 = CONCAT71((int7)((uint64_t)uVar9 >> 8),1);
            plVar15 = plVar4;
            goto LAB_01328157;
          }
          local_38 = CONCAT71(uVar10,1);
          plVar15 = local_58;
        }
      }
LAB_01328157:
      lVar16 = local_40;
      if ((g_027c0190 == '\0') && (iVar6 = ___cxa_guard_acquire(), iVar6 != 0)) {
        g_027910a8 = FUN_007ef2d0();
        g_02791090 = "MUAudioSourceSibilantItem";
        g_02791098 = 200;
        g_027910a0 = FUN_01103980;
        g_027910b0 = 0;
        ram_00000000027910b8 = 0;
        g_027910c0 = 0;
        ram_00000000027910c8 = 0;
        g_027910d0 = 0;
        ram_00000000027910d8 = 0;
        g_027910e0 = 0;
        ram_00000000027910e8 = 0;
        g_027910f0 = 0;
        ram_00000000027910f8 = 0;
        g_02791100 = 0;
        ram_0000000002791108 = 0;
        g_02791110 = 0;
        ram_0000000002791118 = 0;
        g_02791120 = 0;
        ram_0000000002791128 = 0;
        g_02791130 = 0;
        ram_0000000002791138 = 0;
        g_02791140 = 0;
        ram_0000000002791148 = 0;
        g_02791150 = 0;
        ___cxa_guard_release();
        lVar16 = local_40;
      }
      pplVar14 = (int64_t **)&g_02802688;
      if (plVar15 != (int64_t *)0x0) {
        (**(code **)(*plVar15 + 0x360))();
        cVar5 = FUN_00e85ea0();
        pplVar14 = &local_68;
        if (cVar5 == '\0') {
          pplVar14 = (int64_t **)&g_02802688;
        }
      }
      plVar15 = local_68;
      if (*pplVar14 != (int64_t *)0x0) {
        if (((char)local_38 != '\0') && (local_68 != (int64_t *)0x0)) {
          FUN_00d50b00();
        }
        pvVar7 = _pthread_getspecific((void*)pplVar14);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_014bbe30();
        FUN_01328650();
        if (((char)local_38 != '\0') && (plVar15 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      pVar13 = (void*)pplVar14;
      pvVar7 = _pthread_getspecific(pVar13);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013dd650();
      plVar15 = local_68;
      if (local_68 != (int64_t *)0x0) {
        pvVar7 = _pthread_getspecific(pVar13);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_014bc570();
      }
      lVar19 = lVar19 + -1;
    } while (1 < lVar19);
    if (((char)local_38 != '\0') && (plVar15 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    bVar2 = bVar3;
    if (((char)local_48 != '\0') && (lVar16 != 0)) {
      FUN_00d50b20();
    }
  }
  if (!bVar2) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 0132c9b0
// ============================================================
// Function: FUN_0132c9b0
// Address: 0132c9b0
// Size: 1974 bytes
// Class: MUAudioSourceSibilantItem
// === MUAudioSourceSibilantItem properties ===
//                   _audioSourceElement
//                   _suggestsSeparateComponentRenderers
//                   _polyphonicSeparationDirectoryIdentifier
//                   _pulseTimeline


void FUN_0132c9b0(void* param_1)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t lVar3;
  void *pvVar4;
  int64_t lVar5;
  char *pcVar6;
  void* pVar7;
  int64_t arg1;
  int64_t *this_ptr;
  char *pcVar8;
  char local_90;
  undefined7 uStack_8f;
  char local_88;
  int64_t local_80;
  int64_t local_78;
  char local_70;
  int64_t local_68;
  char local_60;
  int64_t local_58;
  int64_t local_50;
  int64_t local_48;
  char local_40 [8];
  char local_38 [8];
  
  if (*(int64_t *)(arg1 + 0x200) == 0) {
    FUN_01505340();
    local_50 = local_48;
    if ((((local_40[0] == '\0') && (local_48 != 0)) && (FUN_00d50b00(), local_40[0] != '\0')) &&
       (local_48 != 0)) {
      FUN_00d50b20();
    }
    FUN_0132c660(param_1,0);
    local_80 = local_48;
    if ((local_40[0] == '\0') && (local_48 != 0)) {
      FUN_00d50b00();
    }
    pvVar4 = _pthread_getspecific(param_1);
    if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
      param_1 = (void*)local_50;
    }
    FUN_01505960();
    if (*(int64_t *)(arg1 + 0x58) != 0) {
      FUN_00d50b00();
      pvVar4 = _pthread_getspecific(param_1);
      if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
        param_1 = (void*)local_50;
      }
      FUN_016cbba0();
      local_78 = local_48;
      local_70 = 0;
      if (local_40[0] == '\0') {
        if (local_48 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_40[0] = '\0';
      }
      local_70 = '\x01';
      FUN_015056c0();
      if ((local_70 != '\0') && (local_78 != 0)) {
        FUN_00d50b20();
      }
      if ((local_40[0] != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    pvVar4 = _pthread_getspecific(param_1);
    if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
      param_1 = (void*)local_50;
    }
    FUN_015058d0();
    lVar5 = local_48;
    if ((((local_40[0] == '\0') && (local_48 != 0)) && (FUN_00d50b00(), local_40[0] != '\0')) &&
       (local_48 != 0)) {
      FUN_00d50b20();
    }
    local_58 = lVar5;
    if (*(int64_t *)(arg1 + 0x68) != 0) {
      pvVar4 = _pthread_getspecific(param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0150eb60();
      lVar5 = local_48;
      if ((local_40[0] != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if (lVar5 != 0) {
        pvVar4 = _pthread_getspecific(param_1);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        lVar5 = *(int64_t *)(arg1 + 0x68);
        if (lVar5 != 0) {
          FUN_00d50b00();
        }
        FUN_01512830();
        if (lVar5 != 0) {
          FUN_00d50b20();
        }
      }
      if (*(int64_t *)(arg1 + 0x68) != 0) {
        pvVar4 = _pthread_getspecific(param_1);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01510280();
        lVar5 = local_48;
        if ((local_40[0] != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
        if (lVar5 != 0) {
          pvVar4 = _pthread_getspecific(param_1);
          if (pvVar4 != (void *)0x0) {
            FUN_00e8b990();
          }
          lVar5 = *(int64_t *)(arg1 + 0x68);
          if (lVar5 != 0) {
            FUN_00d50b00();
          }
          FUN_01512890();
          if (lVar5 != 0) {
            FUN_00d50b20();
          }
        }
      }
    }
    pvVar4 = _pthread_getspecific(param_1);
    if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
      param_1 = (void*)local_58;
    }
    FUN_0150eff0();
    FUN_00d23310();
    lVar5 = local_48;
    local_90 = local_40[0];
    pcVar6 = &local_90;
    if (local_40[0] != '\0') {
      pcVar6 = local_40;
    }
    *pcVar6 = '\0';
    if ((local_40[0] != '\0') && (lVar5 != 0)) {
      FUN_00d50b20();
    }
    if ((local_90 == '\0') && (lVar5 != 0)) {
      FUN_00d50b00();
    }
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012cb110();
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e6160();
    FUN_00d23310();
    lVar2 = local_48;
    lVar1 = local_80;
    pcVar6 = local_38;
    pcVar8 = local_40;
    if (local_40[0] == '\0') {
      pcVar8 = pcVar6;
    }
    local_38[0] = local_40[0];
    *pcVar8 = '\0';
    if ((local_40[0] != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    pVar7 = (void*)pcVar6;
    if ((local_38[0] == '\0') && (lVar2 != 0)) {
      FUN_00d50b00();
    }
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if ((local_88 != '\0') && (CONCAT71(uStack_8f,local_90) != 0)) {
      FUN_00d50b20();
    }
    pvVar4 = _pthread_getspecific(pVar7);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e5ae0();
    lVar3 = local_48;
    if ((((local_40[0] == '\0') && (local_48 != 0)) && (FUN_00d50b00(), local_40[0] != '\0')) &&
       (local_48 != 0)) {
      FUN_00d50b20();
    }
    pvVar4 = _pthread_getspecific(pVar7);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0150ddd0();
    FUN_00e7bdb0();
    FUN_01287c80();
    *this_ptr = local_50;
    *(void*)(this_ptr + 1) = 1;
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    if (lVar5 != 0) {
      FUN_00d50b20();
    }
    if (local_58 != 0) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  else {
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01313b00();
  }
  return;
}



// ============================================================
// 01274c40
// ============================================================
// Function: FUN_01274c40
// Address: 01274c40
// Size: 1476 bytes
// Class: MUAudioSourceSibilantItem
// === MUAudioSourceSibilantItem properties ===
//                   _audioSourceElement
//                   _suggestsSeparateComponentRenderers
//                   _polyphonicSeparationDirectoryIdentifier
//                   _pulseTimeline


int64_t * FUN_01274c40(double param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  bool bVar4;
  bool bVar5;
  void *pvVar6;
  int64_t lVar7;
  int64_t lVar8;
  int64_t lVar9;
  void* in_ECX;
  void* pVar10;
  int64_t arg1;
  int64_t *this_ptr;
  int64_t lVar11;
  int64_t lVar12;
  int64_t local_40;
  char local_38;
  
  if (*(int64_t *)(arg1 + 0x100) == 0) {
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
    return this_ptr;
  }
  pvVar6 = _pthread_getspecific(in_ECX);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e5ae0();
  if (local_40 == 0) {
    bVar5 = true;
    lVar11 = 0;
  }
  else {
    lVar11 = local_40;
    if (local_38 == '\0') {
      FUN_00d50b00();
      bVar5 = false;
    }
    else {
      bVar5 = false;
    }
  }
  FUN_0125e7c0();
  if (local_40 != 0) {
    if (local_38 == '\0') {
      FUN_00d50b00();
    }
    pvVar6 = _pthread_getspecific(in_ECX);
    if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
      in_ECX = (void*)local_40;
    }
    FUN_013e61a0();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (local_40 != 0) {
      if (*(int64_t *)(arg1 + 0xa0) == 0) {
LAB_01274eb3:
        if (*(int *)(lVar11 + 0xc) < 1) {
          lVar7 = 0;
          bVar4 = false;
        }
        else {
          lVar7 = 0;
          bVar4 = false;
          lVar12 = 0;
          if (NAN(param_1)) {
            lVar7 = 0;
            bVar4 = false;
            lVar12 = **(int64_t **)(lVar11 + 0x10);
            lVar9 = lVar11;
            if (lVar12 != 0) {
              if (lVar12 != 0) {
                FUN_00d50b00();
              }
              bVar4 = true;
              lVar7 = lVar12;
            }
            pvVar6 = _pthread_getspecific((void*)lVar9);
            if (pvVar6 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0125e7c0();
            if (local_38 != '\0') {
              FUN_00d50b20();
            }
LAB_012751cc:
            *(void*)(this_ptr + 1) = 0;
            if ((!bVar4) && (lVar7 != 0)) {
              FUN_00d50b00();
            }
            *this_ptr = lVar7;
            *(void*)(this_ptr + 1) = 1;
            local_40 = lVar7;
            goto LAB_012751f5;
          }
          do {
            lVar9 = *(int64_t *)(*(int64_t *)(lVar11 + 0x10) + lVar12 * 8);
            lVar8 = lVar11;
            if (lVar7 == lVar9) {
              if ((!bVar4) && (lVar7 != 0)) {
                bVar4 = true;
                FUN_00d50b00();
              }
            }
            else {
              if (lVar9 != 0) {
                FUN_00d50b00();
              }
              if ((bVar4) && (lVar7 != 0)) {
                FUN_00d50b20();
                bVar4 = true;
                lVar7 = lVar9;
              }
              else {
                bVar4 = true;
                lVar7 = lVar9;
              }
            }
            pVar10 = (void*)lVar8;
            pvVar6 = _pthread_getspecific(pVar10);
            if (pvVar6 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0125e7c0();
            pvVar6 = _pthread_getspecific(pVar10);
            lVar9 = lVar7;
            if ((pvVar6 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
              lVar9 = *(int64_t *)(lVar7 + 0x20 + (uint64_t)(*(uint *)(lVar8 + 0x154) & 1) * 8);
            }
            dVar1 = *(double *)(lVar9 + 0xe8);
            dVar2 = *(double *)(arg1 + 0xe8);
            dVar3 = *(double *)(arg1 + 0xf0);
            if ((local_38 != '\0') && (local_40 != 0)) {
              FUN_00d50b20();
            }
            if ((double)((uint64_t)(dVar1 - (dVar2 + dVar3)) & g_023908f0) < param_1)
            goto LAB_012751cc;
            lVar12 = lVar12 + 1;
          } while (lVar12 < *(int *)(lVar11 + 0xc));
        }
        *(void*)(this_ptr + 1) = 0;
        *this_ptr = 0;
        local_40 = lVar7;
      }
      else {
        pvVar6 = _pthread_getspecific(in_ECX);
        lVar7 = arg1;
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        pVar10 = (void*)lVar7;
        FUN_012dff00();
        if (local_40 == 0) goto LAB_01274eb3;
        if (local_38 == '\0') {
          FUN_00d50b00();
        }
        pvVar6 = _pthread_getspecific(pVar10);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0125e7c0();
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        *this_ptr = local_40;
        *(void*)(this_ptr + 1) = 1;
LAB_012751f5:
        bVar4 = false;
      }
      FUN_00d50b20();
      if ((bVar4) && (local_40 != 0)) {
        FUN_00d50b20();
      }
      goto LAB_01275217;
    }
  }
  *(void*)(this_ptr + 1) = 0;
  *this_ptr = 0;
LAB_01275217:
  if (!bVar5 && lVar11 != 0) {
    FUN_00d50b20();
  }
  return this_ptr;
}



// ============================================================
// 01275b30
// ============================================================
// Function: FUN_01275b30
// Address: 01275b30
// Size: 1437 bytes
// Class: MUAudioSourceSibilantItem
// === MUAudioSourceSibilantItem properties ===
//                   _audioSourceElement
//                   _suggestsSeparateComponentRenderers
//                   _polyphonicSeparationDirectoryIdentifier
//                   _pulseTimeline


void* FUN_01275b30(void* param_1)

{
  void *pvVar1;
  int64_t lVar2;
  void*puVar3;
  int64_t *plVar4;
  int64_t *plVar5;
  char *pcVar6;
  void* pVar7;
  char *pcVar8;
  int64_t *arg1;
  void*this_ptr;
  double dVar9;
  int64_t local_a8;
  char local_a0;
  int64_t local_98;
  char local_90;
  int64_t local_88;
  char local_80;
  int64_t local_50;
  char local_48 [8];
  char local_40 [8];
  char local_38 [8];
  
  plVar4 = (int64_t *)*arg1;
  pvVar1 = _pthread_getspecific(param_1);
  if (pvVar1 != (void *)0x0) {
    plVar4 = (int64_t *)*arg1;
    lVar2 = FUN_00e8b990();
    if (lVar2 != 0) {
      plVar4 = (int64_t *)plVar4[(uint64_t)(*(uint *)(lVar2 + 0x154) & 1) + 4];
    }
  }
  dVar9 = (double)(**(code **)(*plVar4 + 0x398))();
  puVar3 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  pVar7 = 0x25c86c0;
  *puVar3 = &g_025c86c0;
  puVar3[7] = 0;
  puVar3[8] = 0;
  puVar3[9] = 0;
  puVar3[10] = 0;
  puVar3[0xb] = 0;
  puVar3[0xc] = 0;
  (*g_025c86d8)();
  plVar4 = (int64_t *)FUN_00e8fc40();
  FUN_0006e3a0();
  (**(code **)(*plVar4 + 0x18))();
  pvVar1 = _pthread_getspecific(pVar7);
  if ((pvVar1 == (void *)0x0) || (lVar2 = FUN_00e8b990(), lVar2 == 0)) {
    plVar5 = plVar4;
    if (((double)plVar4[0x1e] != dVar9) || (NAN((double)plVar4[0x1e]) || NAN(dVar9)))
    goto LAB_01275c4c;
  }
  else {
    plVar5 = (int64_t *)plVar4[(uint64_t)(*(uint *)(lVar2 + 0x154) & 1) + 4];
    if (((double)plVar5[0x1e] != dVar9) || (NAN((double)plVar5[0x1e]) || NAN(dVar9))) {
LAB_01275c4c:
      FUN_00d64850();
      plVar5[0x1e] = (int64_t)dVar9;
      FUN_00d64910();
    }
  }
  pvVar1 = _pthread_getspecific(pVar7);
  if ((pvVar1 == (void *)0x0) || (lVar2 = FUN_00e8b990(), lVar2 == 0)) {
    plVar5 = plVar4;
    if (((double)plVar4[0x18] == dVar9) && (!NAN((double)plVar4[0x18]) && !NAN(dVar9)))
    goto LAB_01275cf6;
  }
  else {
    plVar5 = (int64_t *)plVar4[(uint64_t)(*(uint *)(lVar2 + 0x154) & 1) + 4];
    if (((double)plVar5[0x18] == dVar9) && (!NAN((double)plVar5[0x18]) && !NAN(dVar9)))
    goto LAB_01275cf6;
  }
  FUN_00d64850();
  plVar5[0x18] = (int64_t)dVar9;
  FUN_00d64910();
LAB_01275cf6:
  pvVar1 = _pthread_getspecific(pVar7);
  if (pvVar1 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01265bc0();
  pvVar1 = _pthread_getspecific(pVar7);
  if (pvVar1 != (void *)0x0) {
    FUN_00e8b990();
  }
  pvVar1 = _pthread_getspecific(pVar7);
  plVar5 = plVar4;
  if ((pvVar1 != (void *)0x0) && (lVar2 = FUN_00e8b990(), lVar2 != 0)) {
    plVar5 = (int64_t *)plVar4[(uint64_t)(*(uint *)(lVar2 + 0x154) & 1) + 4];
  }
  FUN_013f82a0(g_0238fee8,plVar5[0x1e]);
  if (local_48[0] == '\0') {
    if (local_50 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_48[0] = '\0';
  }
  FUN_01265f70();
  if (local_50 != 0) {
    FUN_00d50b20();
  }
  if ((local_48[0] != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  pvVar1 = _pthread_getspecific(pVar7);
  if (pvVar1 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0124df30();
  pvVar1 = _pthread_getspecific(pVar7);
  if (pvVar1 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01327a50();
  FUN_00d23310();
  local_38[0] = local_48[0];
  pcVar6 = local_38;
  if (local_48[0] != '\0') {
    pcVar6 = local_48;
  }
  *pcVar6 = '\0';
  if ((local_48[0] != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  pvVar1 = _pthread_getspecific(pVar7);
  if (pvVar1 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013df790();
  FUN_00d23310();
  pcVar6 = local_40;
  pcVar8 = local_48;
  if (local_48[0] == '\0') {
    pcVar8 = pcVar6;
  }
  local_40[0] = local_48[0];
  *pcVar8 = '\0';
  if ((local_48[0] != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  pVar7 = (void*)pcVar6;
  if (local_40[0] == '\0') {
    if (local_50 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_40[0] = '\0';
  }
  if ((local_a0 != '\0') && (local_a8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38[0] != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((local_90 != '\0') && (local_98 != 0)) {
    FUN_00d50b20();
  }
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  pvVar1 = _pthread_getspecific(pVar7);
  if (pvVar1 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_011ef3f0();
  pvVar1 = _pthread_getspecific(pVar7);
  if (pvVar1 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013dd9a0();
  *this_ptr = plVar4;
  *(void*)(this_ptr + 1) = 1;
  if (local_50 != 0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return this_ptr;
}



// ============================================================
// 01270af0
// ============================================================
// Function: FUN_01270af0
// Address: 01270af0
// Size: 1301 bytes
// Class: MUAudioSourceSibilantItem
// === MUAudioSourceSibilantItem properties ===
//                   _audioSourceElement
//                   _suggestsSeparateComponentRenderers
//                   _polyphonicSeparationDirectoryIdentifier
//                   _pulseTimeline


void* FUN_01270af0(void)

{
  bool bVar1;
  void*puVar2;
  void *pvVar3;
  int64_t lVar4;
  void*puVar5;
  int64_t arg1;
  void*this_ptr;
  int64_t lVar6;
  bool bVar7;
  int64_t local_40;
  char local_38;
  
  puVar2 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  puVar5 = &g_02572358;
  *puVar2 = &g_02572358;
  (*g_02572370)();
  bVar7 = arg1 == 0;
  if (bVar7) {
    arg1 = 0;
  }
  else {
    FUN_00d50b00();
  }
  bVar7 = !bVar7;
  while( true ) {
    bVar1 = bVar7;
    lVar6 = arg1;
    pvVar3 = _pthread_getspecific((void*)puVar5);
    if ((pvVar3 == (void *)0x0) || (lVar4 = FUN_00e8b990(), lVar4 == 0)) {
      lVar4 = *(int64_t *)(lVar6 + 0xa8);
    }
    else {
      lVar4 = *(int64_t *)
               (*(int64_t *)(lVar6 + 0x20 + (uint64_t)(*(uint *)(lVar4 + 0x154) & 1) * 8) + 0xa8);
    }
    if (lVar4 == 0) break;
    pvVar3 = _pthread_getspecific((void*)puVar5);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012dff70();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (local_40 == 0) break;
    pvVar3 = _pthread_getspecific((void*)puVar5);
    if ((pvVar3 == (void *)0x0) || (lVar4 = FUN_00e8b990(), lVar4 == 0)) {
      if (*(int64_t *)(lVar6 + 0xa8) == 0) goto LAB_01270c49;
LAB_01270ca0:
      pvVar3 = _pthread_getspecific((void*)puVar5);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012dff70();
      if (local_40 != lVar6) goto LAB_01270ce9;
LAB_01270c60:
      arg1 = lVar6;
      bVar7 = bVar1;
      if ((bVar1) || (local_40 == 0)) goto LAB_01270d4a;
      bVar7 = true;
      if (local_38 == '\0') {
        FUN_00d50b00();
        bVar7 = true;
LAB_01270d4a:
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
      }
    }
    else {
      if (*(int64_t *)
           (*(int64_t *)(lVar6 + 0x20 + (uint64_t)(*(uint *)(lVar4 + 0x154) & 1) * 8) + 0xa8) != 0
         ) goto LAB_01270ca0;
LAB_01270c49:
      local_38 = '\0';
      local_40 = 0;
      if (lVar6 == 0) goto LAB_01270c60;
LAB_01270ce9:
      arg1 = local_40;
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
        bVar7 = true;
        if ((bVar1) && (lVar6 != 0)) {
          FUN_00d50b20();
        }
        goto LAB_01270d4a;
      }
      bVar7 = true;
      if ((bVar1) && (lVar6 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  FUN_00d21140();
  local_40 = lVar6;
  while( true ) {
    lVar6 = local_40;
    pvVar3 = _pthread_getspecific((void*)puVar5);
    if ((pvVar3 == (void *)0x0) || (lVar4 = FUN_00e8b990(), lVar4 == 0)) {
      lVar4 = *(int64_t *)(local_40 + 0xa0);
    }
    else {
      lVar4 = *(int64_t *)
               (*(int64_t *)(local_40 + 0x20 + (uint64_t)(*(uint *)(lVar4 + 0x154) & 1) * 8) +
               0xa0);
    }
    if (lVar4 == 0) break;
    pvVar3 = _pthread_getspecific((void*)puVar5);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012dff00();
    if (local_40 == 0) break;
    pvVar3 = _pthread_getspecific((void*)puVar5);
    if ((pvVar3 == (void *)0x0) || (lVar4 = FUN_00e8b990(), lVar4 == 0)) {
      if (*(int64_t *)(local_40 + 0xa0) == 0) goto LAB_01270e89;
LAB_01270ee0:
      pvVar3 = _pthread_getspecific((void*)puVar5);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012dff00();
LAB_01270ea0:
      lVar4 = lVar6;
      bVar7 = bVar1;
      if ((!bVar1) && (local_40 != 0)) {
        FUN_00d50b00();
        local_40 = lVar6;
LAB_01270f75:
        lVar4 = local_40;
        bVar7 = true;
      }
    }
    else {
      if (*(int64_t *)
           (*(int64_t *)(local_40 + 0x20 + (uint64_t)(*(uint *)(lVar4 + 0x154) & 1) * 8) + 0xa0)
          != 0) goto LAB_01270ee0;
LAB_01270e89:
      local_40 = 0;
      if (lVar6 == 0) goto LAB_01270ea0;
      local_40 = 0;
      lVar4 = local_40;
      bVar7 = true;
      if ((bVar1) && (lVar6 != 0)) {
        FUN_00d50b20();
        goto LAB_01270f75;
      }
    }
    bVar1 = bVar7;
    FUN_00d21140();
    local_40 = lVar4;
  }
  *this_ptr = puVar2;
  *(void*)(this_ptr + 1) = 1;
  if ((bVar1) && (local_40 != 0)) {
    FUN_00d50b20();
  }
  return this_ptr;
}



// ============================================================
// 0132ec50
// ============================================================
// Function: FUN_0132ec50
// Address: 0132ec50
// Size: 1034 bytes
// Class: MUAudioSourceSibilantItem
// === MUAudioSourceSibilantItem properties ===
//                   _audioSourceElement
//                   _suggestsSeparateComponentRenderers
//                   _polyphonicSeparationDirectoryIdentifier
//                   _pulseTimeline


void FUN_0132ec50(void)

{
  int64_t lVar1;
  void*puVar2;
  void *pvVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int64_t lVar7;
  int64_t this_ptr;
  uint uVar8;
  int64_t lVar9;
  bool bVar10;
  uint8_t local_e0 [16];
  uint8_t local_d0 [8];
  int64_t local_c8;
  uint8_t local_c0;
  int64_t local_b8;
  char local_b0;
  int64_t local_a8;
  uint64_t local_a0;
  uint32_t local_98;
  int64_t local_90;
  char local_88;
  void*local_80;
  char local_78;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  uint8_t local_31;
  
  local_31 = 0;
  puVar2 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar2 = &g_025683c0;
  (*g_025683d8)();
  FUN_00c92170();
  FUN_00c92160();
  local_90 = *(int64_t *)(this_ptr + 0x40);
  if (local_90 != 0) {
    FUN_00d50b00();
  }
  local_88 = '\x01';
  FUN_0147ce20();
  lVar1 = local_b8;
  if (local_b0 == '\0') {
    if (((local_b8 != 0) && (FUN_00d50b00(), local_b0 != '\0')) && (local_b8 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_b0 = '\0';
  }
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d242c0();
  if (lVar1 == 0) {
    *(void*)(this_ptr + 0x1ab) = 1;
  }
  else {
    local_b0 = '\0';
    local_b8 = 0;
    local_a8 = lVar1;
    local_98 = 0;
    local_a0 = 0;
    if (0 < *(int *)(lVar1 + 0xc)) {
      uVar8 = 0;
      do {
        lVar9 = *(int64_t *)(*(int64_t *)(lVar1 + 0x10) + (uint64_t)uVar8 * 8);
        uVar4 = uVar8;
        local_b8 = lVar9;
        pvVar3 = _pthread_getspecific(uVar8);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_013de560();
        local_40 = local_60;
        if ((local_58 == '\0') && (local_60 != 0)) {
          FUN_00d50b00();
        }
        pvVar3 = _pthread_getspecific(uVar4);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_48 = 0;
        FUN_00d50b00();
        local_48 = '\x01';
        local_78 = '\0';
        local_80 = puVar2;
        local_50 = this_ptr;
        FUN_014c03f0(&local_50,local_d0,&local_80);
        if ((local_78 != '\0') && (local_80 != (void*)0x0)) {
          FUN_00d50b20();
        }
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
        iVar5 = *(int *)(puVar2 + 3);
        if (0xe < iVar5 + 7U) {
          if (lVar9 != 0) {
            FUN_00d50b00();
            iVar5 = *(int *)(puVar2 + 3);
          }
          if (iVar5 < 8) {
            if (lVar9 == 0) goto LAB_0132efed;
          }
          else {
            lVar7 = 0;
            do {
              local_c0 = 0;
              local_c8 = lVar9;
              FUN_0135f200(*(void*)(puVar2[2] + lVar7 * 8),&local_c8,local_e0,&local_31);
              if (local_60 == lVar9) {
                if ((local_58 != '\0') && (local_60 != 0)) {
                  FUN_00d50b20();
                }
              }
              else if (local_58 == '\0') {
                if (local_60 != 0) {
                  FUN_00d50b00();
                }
                bVar10 = lVar9 != 0;
                lVar9 = local_60;
                if (bVar10) {
                  FUN_00d50b20();
                }
              }
              else {
                bVar10 = lVar9 != 0;
                lVar9 = local_60;
                if (bVar10) {
                  FUN_00d50b20();
                }
              }
              if (lVar9 == 0) goto LAB_0132efed;
              lVar7 = lVar7 + 1;
              iVar5 = *(int *)(puVar2 + 3);
              iVar6 = iVar5 + 7;
              if (-1 < iVar5) {
                iVar6 = iVar5;
              }
            } while (lVar7 < iVar6 >> 3);
          }
          FUN_00d50b20();
        }
LAB_0132efed:
        if (local_40 != 0) {
          FUN_00d50b20();
        }
        uVar8 = uVar8 + 1;
        local_a0 = CONCAT44(local_a0._4_4_,uVar8);
      } while ((int)uVar8 < *(int *)(lVar1 + 0xc));
    }
    FUN_001150f0();
    *(void*)(this_ptr + 0x1ab) = 1;
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}



// ============================================================
// 01278c70
// ============================================================
// Function: FUN_01278c70
// Address: 01278c70
// Size: 578 bytes
// Class: MUAudioSourceSibilantItem
// === MUAudioSourceSibilantItem properties ===
//                   _audioSourceElement
//                   _suggestsSeparateComponentRenderers
//                   _polyphonicSeparationDirectoryIdentifier
//                   _pulseTimeline


void FUN_01278c70(uint32_t param_1)

{
  void *pvVar1;
  int64_t lVar2;
  int64_t lVar3;
  void* pVar4;
  int64_t *plVar5;
  int64_t lVar6;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t lVar7;
  int64_t local_68;
  char local_60 [8];
  int64_t local_58;
  uint64_t local_50;
  uint32_t local_48;
  int64_t local_40;
  char local_38;
  
  lVar2 = *arg1;
  if ((lVar2 != 0) && (*(int *)(lVar2 + 0xc) != 0)) {
    FUN_00d23310();
    pVar4 = CONCAT31((int3)((uint)param_1 >> 8),local_60[0]);
    plVar5 = &local_40;
    if (local_60[0] != '\0') {
      plVar5 = (int64_t *)local_60;
    }
    local_40 = CONCAT71(local_40._1_7_,local_60[0]);
    *(char *)plVar5 = '\0';
    if ((local_60[0] != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    pvVar1 = _pthread_getspecific(pVar4);
    if ((pvVar1 == (void *)0x0) || (lVar2 = FUN_00e8b990(), lVar2 == 0)) {
      lVar2 = *(int64_t *)(local_68 + 0x48);
    }
    else {
      lVar2 = *(int64_t *)
               (*(int64_t *)(local_68 + 0x20 + (uint64_t)(*(uint *)(lVar2 + 0x154) & 1) * 8) +
               0x48);
    }
    if (lVar2 != 0) {
      FUN_00d50b00();
      FUN_00d50b20();
    }
    if (((char)local_40 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if (lVar2 != 0) {
      FUN_0025e9a0();
      if ((((local_60[0] == '\0') && (local_68 != 0)) && (FUN_00d50b00(), local_60[0] != '\0')) &&
         (local_68 != 0)) {
        FUN_00d50b20();
      }
      lVar2 = *arg1;
      if (lVar2 != 0) {
        local_60[0] = 0;
        local_48 = 0;
        local_50 = 0;
        local_58 = lVar2;
        if (0 < *(int *)(lVar2 + 0xc)) {
          lVar7 = 0;
          do {
            lVar6 = *(int64_t *)(*(int64_t *)(lVar2 + 0x10) + lVar7 * 8);
            pvVar1 = _pthread_getspecific(pVar4);
            if ((pvVar1 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
              lVar6 = *(int64_t *)(lVar6 + 0x20 + (uint64_t)(*(uint *)(lVar3 + 0x154) & 1) * 8);
            }
            lVar6 = *(int64_t *)(lVar6 + 0x48);
            if (lVar6 != 0) {
              FUN_00d50b00();
            }
            local_38 = '\0';
            local_40 = lVar6;
            FUN_00d235a0();
            if ((local_38 != '\0') && (local_40 != 0)) {
              FUN_00d50b20();
            }
            if (lVar6 != 0) {
              FUN_00d50b20();
            }
            lVar7 = lVar7 + 1;
            local_50 = CONCAT44(local_50._4_4_,(int)lVar7);
          } while ((int)lVar7 < *(int *)(lVar2 + 0xc));
        }
        FUN_001159b0();
      }
      *this_ptr = local_68;
      goto LAB_01278e9b;
    }
    lVar2 = *arg1;
  }
  *(void*)(this_ptr + 1) = 0;
  if ((char)arg1[1] != '\0') {
    *this_ptr = lVar2;
    *(void*)(this_ptr + 1) = 1;
    *(void*)(arg1 + 1) = 0;
    return;
  }
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  *this_ptr = lVar2;
LAB_01278e9b:
  *(void*)(this_ptr + 1) = 1;
  return;
}



// ============================================================
// 0126eaa0
// ============================================================
// Function: FUN_0126eaa0
// Address: 0126eaa0
// Size: 729 bytes
// Class: MUAudioSourceSibilantItem
// String references:
//   "MUAudioSourceSibilantItem"
// === MUAudioSourceSibilantItem properties ===
//                   _audioSourceElement
//                   _suggestsSeparateComponentRenderers
//                   _polyphonicSeparationDirectoryIdentifier
//                   _pulseTimeline


int64_t * FUN_0126eaa0(void)

{
  int64_t lVar1;
  int64_t *plVar2;
  char cVar3;
  int iVar4;
  int64_t lVar5;
  void *pvVar6;
  void* pVar7;
  int64_t lVar8;
  int64_t **pplVar9;
  int64_t arg1;
  int64_t *this_ptr;
  int local_50;
  int64_t *local_40;
  char local_38;
  
  lVar1 = *(int64_t *)(arg1 + 0xe0);
  if (1 < *(int *)(lVar1 + 0xc)) {
    local_50 = -1;
LAB_0126eb03:
    while( true ) {
      lVar5 = (int64_t)local_50;
      local_50 = local_50 + 1;
      if (*(int *)(lVar1 + 0xc) <= local_50) break;
      lVar8 = *(int64_t *)(lVar1 + 0x10);
      lVar5 = *(int64_t *)(lVar8 + 8 + lVar5 * 8);
      pvVar6 = _pthread_getspecific((void*)lVar8);
      pVar7 = (void*)lVar8;
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_011ef460();
      if (local_38 == '\0') goto LAB_0126ebb0;
      if (local_40 != (int64_t *)0x0) goto LAB_0126ebe0;
    }
    FUN_0015edf0();
  }
  *(void*)(this_ptr + 1) = 0;
  *this_ptr = 0;
  return this_ptr;
LAB_0126ebb0:
  if (local_40 != (int64_t *)0x0) {
    FUN_00d50b00();
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
LAB_0126ebe0:
    pvVar6 = _pthread_getspecific(pVar7);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013dd6a0();
    plVar2 = local_40;
    if ((g_027c0190 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
      g_027910a8 = FUN_007ef2d0();
      g_02791090 = "MUAudioSourceSibilantItem";
      g_02791098 = 200;
      g_027910a0 = FUN_01103980;
      g_027910b0 = 0;
      ram_00000000027910b8 = 0;
      g_027910c0 = 0;
      ram_00000000027910c8 = 0;
      g_027910d0 = 0;
      ram_00000000027910d8 = 0;
      g_027910e0 = 0;
      ram_00000000027910e8 = 0;
      g_027910f0 = 0;
      ram_00000000027910f8 = 0;
      g_02791100 = 0;
      ram_0000000002791108 = 0;
      g_02791110 = 0;
      ram_0000000002791118 = 0;
      g_02791120 = 0;
      ram_0000000002791128 = 0;
      g_02791130 = 0;
      ram_0000000002791138 = 0;
      g_02791140 = 0;
      ram_0000000002791148 = 0;
      g_02791150 = 0;
      ___cxa_guard_release();
    }
    pplVar9 = (int64_t **)&g_02802688;
    if (plVar2 != (int64_t *)0x0) {
      (**(code **)(*plVar2 + 0x360))();
      cVar3 = FUN_00e85ea0();
      pplVar9 = &local_40;
      if (cVar3 == '\0') {
        pplVar9 = (int64_t **)&g_02802688;
      }
    }
    plVar2 = *pplVar9;
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar2 != (int64_t *)0x0) {
      *(void*)(this_ptr + 1) = 0;
      if (lVar5 != 0) {
        FUN_00d50b00();
      }
      *this_ptr = lVar5;
      *(void*)(this_ptr + 1) = 1;
      FUN_00d50b20();
      FUN_0015edf0();
      return this_ptr;
    }
    FUN_00d50b20();
  }
  goto LAB_0126eb03;
}



// ============================================================
// 01273200
// ============================================================
// Function: FUN_01273200
// Address: 01273200
// Size: 1144 bytes
// Class: MUAudioSourceSibilantItem
// === MUAudioSourceSibilantItem properties ===
//                   _audioSourceElement
//                   _suggestsSeparateComponentRenderers
//                   _polyphonicSeparationDirectoryIdentifier
//                   _pulseTimeline


void* FUN_01273200(void)

{
  int64_t lVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  void*puVar5;
  void*puVar6;
  int64_t lVar7;
  void *pvVar8;
  int64_t lVar9;
  void*puVar10;
  int64_t *plVar11;
  int64_t *arg1;
  void*this_ptr;
  int64_t local_70;
  char local_68;
  int local_58;
  
  puVar5 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar5 = &g_02572358;
  pcVar2 = g_02572370;
  (*g_02572370)();
  puVar6 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar6 = &g_02572358;
  (*pcVar2)();
  lVar1 = *arg1;
  if (lVar1 != 0) {
    local_68 = '\0';
    local_70 = 0;
    local_58 = -1;
    while( true ) {
      lVar7 = (int64_t)local_58;
      local_58 = local_58 + 1;
      if (*(int *)(lVar1 + 0xc) <= local_58) break;
      local_70 = *(int64_t *)(*(int64_t *)(lVar1 + 0x10) + 8 + lVar7 * 8);
      pvVar8 = _pthread_getspecific((void*)*(int64_t *)(lVar1 + 0x10));
      lVar7 = local_70;
      if ((pvVar8 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
        lVar7 = *(int64_t *)(local_70 + 0x20 + (uint64_t)(*(uint *)(lVar9 + 0x154) & 1) * 8);
      }
      if (*(int64_t *)(lVar7 + 0x100) != 0) {
        iVar3 = FUN_00d237a0();
        if (iVar3 == -1) {
          FUN_00d21140();
          puVar10 = (void*)FUN_00e8fc40();
          FUN_00d4ff40();
          *puVar10 = &g_02572358;
          (*pcVar2)();
          FUN_00d21140();
          FUN_00d50b20();
        }
        FUN_00d21140();
      }
    }
    FUN_001159b0();
  }
  plVar11 = (int64_t *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar11 + 0x18))();
  FUN_012e8850();
  if ((local_68 == '\0') && (local_70 != 0)) {
    FUN_00d50b00();
  }
  if (local_70 == 0) {
    *this_ptr = plVar11;
    *(void*)(this_ptr + 1) = 1;
  }
  else {
    if (0 < *(int *)(local_70 + 0xc)) {
      iVar3 = 0;
      do {
        iVar4 = FUN_00d23d20();
        lVar1 = *(int64_t *)(puVar5[2] + (int64_t)iVar4 * 8);
        if (lVar1 != 0) {
          FUN_00d50b00();
        }
        FUN_0076f270();
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(local_70 + 0xc));
    }
    FUN_000be170();
    *this_ptr = plVar11;
    *(void*)(this_ptr + 1) = 1;
    FUN_00d50b20();
  }
  if (puVar6 != (void*)0x0) {
    FUN_00d50b20();
  }
  if (puVar5 != (void*)0x0) {
    FUN_00d50b20();
  }
  return this_ptr;
}



// ============================================================
// 01327470
// ============================================================
// Function: FUN_01327470
// Address: 01327470
// Size: 762 bytes
// Class: MUAudioSourceSibilantItem
// === MUAudioSourceSibilantItem properties ===
//                   _audioSourceElement
//                   _suggestsSeparateComponentRenderers
//                   _polyphonicSeparationDirectoryIdentifier
//                   _pulseTimeline


void FUN_01327470(void* param_1)

{
  int64_t lVar1;
  void *pvVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t this_ptr;
  void* pVar5;
  int64_t local_88;
  char local_80;
  int64_t local_58;
  char local_50;
  int local_40;
  
  *(void*)(this_ptr + 0x38) = 0;
  if (*(int64_t *)(this_ptr + 0x200) != 0) {
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01313ad0();
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012cb480();
    if ((local_80 == '\0') && (local_88 != 0)) {
      FUN_00d50b00();
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if (local_88 != 0) {
      if (0 < *(int *)(local_88 + 0xc)) {
        pVar5 = 0;
        do {
          lVar1 = local_58;
          pvVar2 = _pthread_getspecific(pVar5);
          if (pvVar2 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0124c6e0();
          if (local_50 == '\0') {
            if (local_58 != 0) {
              FUN_00d50b00();
              goto LAB_01327640;
            }
          }
          else if (local_58 != 0) {
LAB_01327640:
            local_50 = '\0';
            local_58 = 0;
            local_40 = -1;
            while( true ) {
              lVar3 = (int64_t)local_40;
              local_40 = local_40 + 1;
              if (*(int *)(lVar1 + 0xc) <= local_40) break;
              lVar4 = *(int64_t *)(lVar1 + 0x10);
              local_58 = *(int64_t *)(lVar4 + 8 + lVar3 * 8);
              pvVar2 = _pthread_getspecific((void*)lVar4);
              lVar3 = local_58;
              if ((pvVar2 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
                lVar3 = *(int64_t *)
                         (local_58 + 0x20 + (uint64_t)(*(uint *)(lVar4 + 0x154) & 1) * 8);
              }
              if (*(int64_t *)(lVar3 + 0x208) != 0) {
                FUN_00d64850();
                *(void*)(lVar3 + 0x208) = 0;
                FUN_00d64910();
              }
            }
            FUN_00115190();
            FUN_00d50b20();
          }
          pVar5 = pVar5 + 1;
        } while ((int)pVar5 < *(int *)(local_88 + 0xc));
      }
      FUN_00115e00();
      FUN_00d50b20();
    }
  }
  FUN_00d505d0();
  return;
}



// ============================================================
// 01327070
// ============================================================
// Function: FUN_01327070
// Address: 01327070
// Size: 964 bytes
// Class: MUAudioSourceSibilantItem
// === MUAudioSourceSibilantItem properties ===
//                   _audioSourceElement
//                   _suggestsSeparateComponentRenderers
//                   _polyphonicSeparationDirectoryIdentifier
//                   _pulseTimeline


void FUN_01327070(void* param_1)

{
  int64_t lVar1;
  uint32_t uVar2;
  void *pvVar3;
  void* pVar4;
  int64_t this_ptr;
  uint32_t uVar5;
  
  if (((*(int64_t *)(this_ptr + 0x1f8) == 0) && (*(int64_t *)(this_ptr + 0x200) == 0)) &&
     (*(int64_t *)(this_ptr + 0x148) != 0)) {
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar2 = FUN_0141bab0();
    pVar4 = 0x132745c;
    uVar5 = g_02390124;
    param_1 = 0x132745c;
    switch(uVar2) {
    case 1:
      lVar1 = *(int64_t *)(this_ptr + 0x148);
      pVar4 = 0x132745c;
      if (lVar1 != 0) {
        pVar4 = 0x132745c;
        FUN_00d50b00();
      }
      pvVar3 = _pthread_getspecific(pVar4);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0141bae0();
      uVar5 = g_0239011c;
      if (lVar1 != 0) {
        FUN_00d50b20();
        uVar5 = g_0239011c;
      }
      break;
    case 2:
      break;
    default:
      goto switchD_013273c1_caseD_3;
    }
  }
  else {
switchD_013273c1_caseD_3:
    pVar4 = param_1;
    uVar5 = g_0239011c;
  }
  pvVar3 = _pthread_getspecific(pVar4);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_015b2e00();
  pvVar3 = _pthread_getspecific(pVar4);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_015b2e80();
  pvVar3 = _pthread_getspecific(pVar4);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_015b2ec0();
  pvVar3 = _pthread_getspecific(pVar4);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_015b2f00();
  pvVar3 = _pthread_getspecific(pVar4);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_015b2f40(g_0239011c);
  pvVar3 = _pthread_getspecific(pVar4);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_015b2f80();
  pvVar3 = _pthread_getspecific(pVar4);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_015b2fc0(uVar5);
  pvVar3 = _pthread_getspecific(pVar4);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_015b3000(g_02390124);
  pvVar3 = _pthread_getspecific(pVar4);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_015b3060(g_02390124);
  return;
}



// ============================================================
// 0126f100
// ============================================================
// Function: FUN_0126f100
// Address: 0126f100
// Size: 565 bytes
// Class: MUAudioSourceSibilantItem
// === MUAudioSourceSibilantItem properties ===
//                   _audioSourceElement
//                   _suggestsSeparateComponentRenderers
//                   _polyphonicSeparationDirectoryIdentifier
//                   _pulseTimeline


void* FUN_0126f100(void* param_1)

{
  double dVar1;
  void *pvVar2;
  int64_t lVar3;
  void*puVar4;
  int64_t *plVar5;
  uint32_t uVar6;
  int64_t *local_40;
  char local_38;
  
  FUN_0125e7c0();
  if (local_38 == '\0') {
    if (local_40 == (int64_t *)0x0) {
      return (void*)0x0;
    }
    FUN_00d50b00();
  }
  else if (local_40 == (int64_t *)0x0) {
    return (void*)0x0;
  }
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013de560();
  if (local_38 == '\0') {
    if (local_40 == (int64_t *)0x0) goto LAB_0126f20c;
    FUN_00d50b00();
  }
  else if (local_40 == (int64_t *)0x0) {
LAB_0126f20c:
    puVar4 = &g_02802501;
    goto LAB_0126f31c;
  }
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_014bc240();
  if (local_38 == '\0') {
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b00();
      goto LAB_0126f234;
    }
LAB_0126f281:
    puVar4 = &g_02802501;
  }
  else {
    if (local_40 == (int64_t *)0x0) goto LAB_0126f281;
LAB_0126f234:
    pvVar2 = _pthread_getspecific(param_1);
    plVar5 = local_40;
    if ((pvVar2 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
      plVar5 = (int64_t *)local_40[(uint64_t)(*(uint *)(lVar3 + 0x154) & 1) + 4];
    }
    dVar1 = (double)(**(code **)(*plVar5 + 0x380))(0);
    if ((float)dVar1 <= g_023d59b4) {
      pvVar2 = _pthread_getspecific(param_1);
      if ((pvVar2 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
        local_40 = (int64_t *)local_40[(uint64_t)(*(uint *)(lVar3 + 0x154) & 1) + 4];
      }
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar6 = FUN_014bb310();
      dVar1 = (double)(**(code **)(*local_40 + 0x3a8))(0,uVar6);
      puVar4 = (void*)CONCAT71(0x28025,(float)dVar1 <= g_023d59b4);
    }
    else {
      puVar4 = (void*)0x0;
    }
    FUN_00d50b20();
  }
  FUN_00d50b20();
LAB_0126f31c:
  FUN_00d50b20();
  return puVar4;
}



// ============================================================
// 01329cf0
// ============================================================
// Function: FUN_01329cf0
// Address: 01329cf0
// Size: 567 bytes
// Class: MUAudioSourceSibilantItem
// === MUAudioSourceSibilantItem properties ===
//                   _audioSourceElement
//                   _suggestsSeparateComponentRenderers
//                   _polyphonicSeparationDirectoryIdentifier
//                   _pulseTimeline


void FUN_01329cf0(int64_t *param_1,int64_t *param_2)

{
  void *pvVar1;
  void* pVar2;
  int64_t *this_ptr;
  double dVar3;
  double dVar4;
  int64_t local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  int64_t local_68;
  char local_60;
  int64_t local_58;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  pVar2 = (void*)param_1;
  local_88 = *param_1;
  local_80 = '\0';
  FUN_012e0130(pVar2,&local_88);
  local_58 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  pvVar1 = _pthread_getspecific(pVar2);
  if (pvVar1 != (void *)0x0) {
    FUN_00e8b990();
  }
  dVar3 = (double)FUN_01259520();
  pvVar1 = _pthread_getspecific(pVar2);
  if (pvVar1 != (void *)0x0) {
    FUN_00e8b990();
  }
  dVar4 = (double)FUN_0125a280();
  if (g_023b67d8 < (double)((uint64_t)(dVar3 - dVar4) & g_023908f0)) {
    local_78 = *param_2;
    local_70 = '\0';
    FUN_0039e8b0();
    local_50 = local_40;
    local_48 = 0;
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_48 = '\x01';
    local_60 = '\0';
    local_68 = 0;
    FUN_0127e4d0(0);
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
  }
  *this_ptr = local_58;
  *(void*)(this_ptr + 1) = 1;
  return;
}



// ============================================================
// 01328810
// ============================================================
// Function: FUN_01328810
// Address: 01328810
// Size: 713 bytes
// Class: MUAudioSourceSibilantItem
// === MUAudioSourceSibilantItem properties ===
//                   _audioSourceElement
//                   _suggestsSeparateComponentRenderers
//                   _polyphonicSeparationDirectoryIdentifier
//                   _pulseTimeline


void FUN_01328810(void)

{
  int64_t lVar1;
  void*puVar2;
  void *pvVar3;
  void*puVar4;
  void*puVar5;
  int64_t arg1;
  void*this_ptr;
  int iVar6;
  int local_50;
  int64_t local_40;
  char local_38;
  
  puVar2 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  puVar4 = &g_02572358;
  *puVar2 = &g_02572358;
  (*g_02572370)();
  puVar5 = *(void**)(arg1 + 200);
  if (puVar5 != (void*)0x0) {
    local_50 = -1;
LAB_013288ab:
    while (local_50 = local_50 + 1, local_50 < *(int *)(puVar5 + 0xc)) {
      pvVar3 = _pthread_getspecific((void*)*(void*)(puVar5 + 0x10));
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_014bc000();
      if (local_38 == '\0') goto LAB_01328950;
      if (local_40 != 0) goto LAB_01328980;
    }
    FUN_0131c8b0();
    puVar4 = puVar5;
  }
  lVar1 = *(int64_t *)(arg1 + 0xd8);
  if (lVar1 != 0) {
    if (0 < *(int *)(lVar1 + 0xc)) {
      iVar6 = 0;
      do {
        pvVar3 = _pthread_getspecific((void*)puVar4);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_014bc000();
        if (local_38 == '\0') {
          if (local_40 != 0) {
            FUN_00d50b00();
            goto LAB_01328ab0;
          }
        }
        else if (local_40 != 0) {
LAB_01328ab0:
          local_38 = '\0';
          FUN_00d235a0();
          FUN_00d50b20();
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < *(int *)(lVar1 + 0xc));
    }
    FUN_013dc230();
  }
  *this_ptr = puVar2;
  *(void*)(this_ptr + 1) = 1;
  return;
LAB_01328950:
  if (local_40 != 0) {
    FUN_00d50b00();
LAB_01328980:
    local_38 = '\0';
    FUN_00d235a0();
    FUN_00d50b20();
  }
  goto LAB_013288ab;
}



// ============================================================
// 012756a0
// ============================================================
// Function: FUN_012756a0
// Address: 012756a0
// Size: 513 bytes
// Class: MUAudioSourceSibilantItem
// === MUAudioSourceSibilantItem properties ===
//                   _audioSourceElement
//                   _suggestsSeparateComponentRenderers
//                   _polyphonicSeparationDirectoryIdentifier
//                   _pulseTimeline


void FUN_012756a0(double param_1)

{
  double dVar1;
  char cVar2;
  void *pvVar3;
  void* in_ECX;
  char unaff_SIL;
  int64_t this_ptr;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  int64_t local_38;
  char local_30;
  
  dVar6 = *(double *)(this_ptr + 0xb8);
  dVar7 = *(double *)(this_ptr + 0xc0);
  dVar1 = *(double *)(this_ptr + 0xf0);
  param_1 = param_1 + dVar1;
  dVar4 = dVar1 - dVar6;
  dVar5 = (dVar7 - dVar6) / dVar4;
  if ((dVar1 != param_1) || (NAN(dVar1) || NAN(param_1))) {
    FUN_00d64850();
    *(double *)(this_ptr + 0xf0) = param_1;
    FUN_00d64910();
    dVar6 = *(double *)(this_ptr + 0xb8);
    dVar7 = *(double *)(this_ptr + 0xc0);
    dVar4 = *(double *)(this_ptr + 0xf0) - dVar6;
  }
  dVar6 = dVar5 * dVar4 + dVar6;
  if ((dVar7 != dVar6) || (NAN(dVar7) || NAN(dVar6))) {
    FUN_00d64850();
    *(double *)(this_ptr + 0xc0) = dVar6;
    FUN_00d64910();
  }
  if ((unaff_SIL != '\0') && (*(int64_t *)(this_ptr + 0xa0) != 0)) {
    pvVar3 = _pthread_getspecific(in_ECX);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012dff00();
    if (local_30 == '\0') {
      if (local_38 == 0) goto LAB_01275889;
      FUN_00d50b00();
    }
    else if (local_38 == 0) goto LAB_01275889;
    pvVar3 = _pthread_getspecific(in_ECX);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    cVar2 = FUN_0126ee50();
    if (cVar2 == '\0') {
      pvVar3 = _pthread_getspecific(in_ECX);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0125a5f0();
    }
    FUN_00d50b20();
  }
LAB_01275889:
  FUN_0125a5f0();
  return;
}



// ============================================================
// 0132c660
// ============================================================
// Function: FUN_0132c660
// Address: 0132c660
// Size: 547 bytes
// Class: MUAudioSourceSibilantItem
// === MUAudioSourceSibilantItem properties ===
//                   _audioSourceElement
//                   _suggestsSeparateComponentRenderers
//                   _polyphonicSeparationDirectoryIdentifier
//                   _pulseTimeline


void FUN_0132c660(void* param_1)

{
  void *pvVar1;
  void* pVar2;
  char *pcVar3;
  int64_t *this_ptr;
  int64_t local_78;
  char local_70;
  int64_t local_68;
  char local_60;
  int64_t local_48;
  char local_40 [8];
  char local_38 [8];
  
  FUN_012c9e50(param_1,0);
  if ((((local_40[0] == '\0') && (local_48 != 0)) && (FUN_00d50b00(), local_40[0] != '\0')) &&
     (local_48 != 0)) {
    FUN_00d50b20();
  }
  pvVar1 = _pthread_getspecific(param_1);
  if (pvVar1 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012cb110();
  pvVar1 = _pthread_getspecific(param_1);
  if (pvVar1 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e6160();
  FUN_00d23310();
  pVar2 = CONCAT31((int3)(param_1 >> 8),local_40[0]);
  pcVar3 = local_38;
  if (local_40[0] != '\0') {
    pcVar3 = local_40;
  }
  local_38[0] = local_40[0];
  *pcVar3 = '\0';
  if ((local_40[0] != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38[0] == '\0') && (local_48 != 0)) {
    FUN_00d50b00();
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  FUN_0132b1c0(0);
  if ((local_40[0] == '\0') && (local_48 != 0)) {
    FUN_00d50b00();
  }
  pvVar1 = _pthread_getspecific(pVar2);
  if (pvVar1 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e6c30();
  pvVar1 = _pthread_getspecific(pVar2);
  if (pvVar1 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012f49a0();
  *this_ptr = local_48;
  *(void*)(this_ptr + 1) = 1;
  if (local_48 != 0) {
    FUN_00d50b20();
    FUN_00d50b20();
  }
  return;
}

