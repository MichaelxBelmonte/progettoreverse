// Function: FUN_0167bc80
// Address: 0167bc80
// Size: 15358 bytes
// Class: GNString
// String references:
//   "com.celemony.ara.chunk.13"
//   "GNString"
//   "GNDictionary"
//   "false && \"could not parse archive state, extracted graph is broken\""
//   "(documentArchiveID != NULL) && (gn_strlen(documentArchiveID) > 0)"
//   "isValidIDocumentArchiveID"
//   "!isAudioSourceDocumentArchiveID"
//   "false && \"archive contains multiple audio source states using the same persistent ID\""
//   "false && \"archive contains multiple audio modification states using the same persistent ID\""
//   "isAudioSourceDocumentArchiveID"
//   "(restoreFilter->audioSourceIDsCount == 1) && (restoreFilter->audioModificationIDsCount == 0) && (re...
//   "false && \"audio source filter contains a persistent ID not used in the current graph\""
//   "false && \"could not find audio source with given persistent ID for restoring sound file chunk base...
//   "false && \"failed to decode provided archive data, bytes or archive ID may have been corrupted\""
//   "false && \"could not properly apply document data loaded from provided archive\""
//   "false && \"no document data found in provided archive\""
//   "false && \"archive contains multiple audio source states mapped to the same persistent ID\""
//   "false && \"cannot restore audio source state because its current configuration does not match archi...
//   "false && \"audio source in graph not found in archive\""
//   "false && \"archive contains multiple audio modification states mapped to the same persistent ID\""
//   ... +2 more
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


uint64_t FUN_0167bc80(int64_t param_1,uint64_t param_2,uint32_t param_3)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  byte bVar5;
  int iVar6;
  int64_t lVar7;
  uint64_t uVar8;
  void*puVar9;
  int64_t *plVar10;
  int64_t *******ppppppplVar11;
  void *pvVar12;
  char *pcVar13;
  int64_t *******ppppppplVar14;
  void* pVar15;
  int64_t ******pppppplVar16;
  char *pcVar17;
  code *pcVar18;
  int64_t lVar19;
  int64_t *******ppppppplVar20;
  int64_t *arg1;
  int64_t *this_ptr;
  int iVar21;
  uint32_t extraout_XMM0_Da;
  uint32_t extraout_XMM0_Da_00;
  uint32_t uVar22;
  uint32_t extraout_XMM0_Da_01;
  uint32_t extraout_XMM0_Da_02;
  uint32_t extraout_XMM0_Da_03;
  uint32_t extraout_XMM0_Da_04;
  uint32_t extraout_XMM0_Da_05;
  int64_t *******local_350;
  uint8_t local_348;
  int64_t *******local_340;
  uint8_t local_338;
  int64_t *******local_330;
  char local_328;
  int64_t local_320;
  char local_318;
  int64_t ******local_300;
  char local_2f8;
  int64_t *******local_2f0;
  char local_2e8;
  int64_t *******local_2e0;
  char local_2d8;
  int64_t *******local_2d0;
  char local_2c8;
  int64_t *******local_2c0;
  char local_2b8;
  int64_t *******local_2b0;
  char local_2a8;
  int64_t *******local_2a0;
  char local_298;
  int64_t *******local_290;
  char local_288;
  int64_t *******local_280;
  char local_278;
  int64_t local_270;
  char local_268;
  int64_t *******local_260;
  char local_258;
  int64_t *******local_250;
  char local_248;
  int64_t *******local_240;
  char local_238;
  void*local_230;
  char local_228;
  void*local_220;
  char local_218;
  int64_t *******local_210;
  char local_208;
  int64_t *******local_200;
  char local_1f8;
  int64_t local_1f0;
  char local_1e8;
  int64_t local_1e0;
  char local_1d8;
  int64_t *local_1d0;
  char local_1c8;
  int64_t *local_1c0;
  char local_1b8;
  int64_t *local_1b0;
  char local_1a8;
  int64_t *local_1a0;
  char local_198;
  int64_t *******local_180;
  char local_178;
  int64_t *******local_170;
  char local_168;
  int64_t *******local_160;
  char local_158;
  uint64_t local_150;
  uint64_t local_148;
  int64_t *******local_140;
  char local_138;
  uint32_t local_12c;
  void*local_128;
  void*local_120;
  void*local_118;
  int64_t local_110;
  uint64_t local_108;
  uint64_t local_100;
  uint64_t local_f8;
  int64_t *******local_f0;
  uint local_e4;
  uint64_t local_e0;
  int64_t *******local_d8;
  char local_d0 [8];
  int64_t *******local_c8;
  int64_t *******local_c0;
  int64_t *******local_b8;
  int64_t *******local_b0;
  char local_a8;
  int64_t *******ppppppplVar23;
  char local_91;
  int64_t *******local_90;
  char local_88 [8];
  int64_t *******local_80;
  uint64_t local_78;
  int local_70;
  int64_t *******local_68;
  char local_60;
  int64_t *******local_58;
  uint64_t local_50;
  int local_48;
  int64_t *******local_40;
  
  local_12c = param_3;
  local_110 = param_1;
  iVar6 = FUN_016ae5d0();
  if (iVar6 < 4) {
    lVar7 = 0;
    lVar19 = *arg1;
  }
  else {
    lVar7 = (**(code **)(*(int64_t *)(this_ptr[6] + 0x20) + 0x30))();
    uVar22 = extraout_XMM0_Da;
    if ((lVar7 == 0) || (iVar6 = FUN_00e7dde0(), uVar22 = extraout_XMM0_Da_00, iVar6 < 1)) {
      FUN_016aea20(uVar22,"(documentArchiveID != NULL) && (gn_strlen(documentArchiveID) > 0)");
    }
    uVar22 = FUN_000030c0();
    if (0 < (int)local_68) {
      lVar19 = 0;
      do {
        uVar8 = FUN_00e7ddf0();
        if ((int)uVar8 == 0) {
          local_c0 = (int64_t *******)
                     CONCAT71((int7)((uint64_t)uVar8 >> 8),(int)local_90 <= (int)lVar19);
          lVar19 = *arg1;
          goto joined_r0x0167bff4;
        }
        lVar19 = lVar19 + 1;
        uVar22 = extraout_XMM0_Da_01;
      } while (lVar19 < (int)local_68);
    }
    FUN_016aea20(uVar22,"isValidIDocumentArchiveID");
    lVar19 = *arg1;
  }
  local_c0 = (int64_t *******)0x0;
joined_r0x0167bff4:
  if (lVar19 == 0) {
    local_40 = (int64_t *******)0x0;
    goto LAB_0167c6ca;
  }
  *(void*)(this_ptr + 0xe) = 1;
  if (local_110 == 0) {
    pvVar12 = _pthread_getspecific(0);
    if (pvVar12 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01537d40();
    if (local_60 != '\0') {
      FUN_00d50b20();
    }
  }
  puVar9 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar9 = &g_02578b00;
  pcVar18 = g_02578b18;
  (*g_02578b18)();
  pVar15 = 1;
  local_118 = puVar9;
  FUN_00d7a0f0(1,1);
  if (local_110 == 0) {
    pvVar12 = _pthread_getspecific(pVar15);
    if (pvVar12 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01537fd0();
    if (local_60 != '\0') {
      FUN_00d50b20();
    }
  }
  puVar9 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar9 = &g_02578b00;
  (*pcVar18)();
  local_120 = puVar9;
  FUN_00d7a0f0(1,1);
  puVar9 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar9 = &g_02578b00;
  (*pcVar18)();
  local_128 = puVar9;
  FUN_00d7a0f0(1,1);
  if (*(int64_t *)(this_ptr[6] + 0x20) != 0) {
    (**(code **)(*(int64_t *)(this_ptr[6] + 0x20) + 0x28))(g_02394254);
  }
  local_138 = '\0';
  local_140 = (int64_t *******)0x0;
  plVar10 = (int64_t *)FUN_00e8fc40();
  FUN_0002cb50();
  (**(code **)(*plVar10 + 0x18))();
  plVar10 = this_ptr;
  if (*(int64_t *)(this_ptr[6] + 0x20) == 0) {
    bVar1 = false;
    ppppppplVar11 = (int64_t *******)0x0;
  }
  else {
    local_1c8 = 0;
    (**(code **)(this_ptr[2] + 0x10))();
    FUN_00d50b00();
    local_1c8 = '\x01';
    local_1d0 = this_ptr + 2;
    FUN_00df4f00(g_023b81d4,g_024117d8);
    ppppppplVar11 = local_68;
    if (local_68 == (int64_t *******)0x0) {
      bVar1 = false;
    }
    else if (local_60 == '\0') {
      FUN_00d50b00();
      bVar1 = true;
      if ((local_60 != '\0') && (local_68 != (int64_t *******)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_60 = '\0';
      bVar1 = true;
    }
    if ((local_1c8 != '\0') && (local_1d0 != (int64_t *)0x0)) {
      (**(code **)(*local_1d0 + 0x10))();
      FUN_00d50b20();
    }
    local_330 = ppppppplVar11 + 2;
    if (ppppppplVar11 == (int64_t *******)0x0) {
      local_330 = (int64_t *******)0x0;
    }
    local_328 = '\0';
    FUN_00e5b0c0();
    if ((local_328 != '\0') && (local_330 != (int64_t *******)0x0)) {
      (*(*local_330)[2])();
      FUN_00d50b20();
    }
  }
  pVar15 = (void*)plVar10;
  local_320 = *arg1;
  local_318 = '\0';
  FUN_00e549d0();
  ppppppplVar23 = local_68;
  if (local_68 == (int64_t *******)0x0) {
    ppppppplVar23 = (int64_t *******)0x0;
  }
  else if (local_60 == '\0') {
    FUN_00d50b00();
    local_140 = ppppppplVar23;
    local_138 = '\x01';
    if ((local_60 != '\0') && (local_68 != (int64_t *******)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_140 = local_68;
    local_138 = '\x01';
    local_60 = '\0';
  }
  if ((local_318 != '\0') && (local_320 != 0)) {
    FUN_00d50b20();
  }
  if ((bVar1) && (ppppppplVar11 != (int64_t *******)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  local_91 = '\0';
  FUN_015388a0();
  if (ppppppplVar23 == (int64_t *******)0x0) {
LAB_0167c16f:
    ppppppplVar11 = (int64_t *******)&g_02802688;
  }
  else {
    (*(*ppppppplVar23)[0x6c])();
    cVar4 = FUN_00e85ea0();
    if (cVar4 == '\0') goto LAB_0167c16f;
    ppppppplVar11 = (int64_t *******)&local_140;
  }
  local_b8 = (int64_t *******)*ppppppplVar11;
  local_e4 = CONCAT31(local_e4._1_3_,*(char *)(ppppppplVar11 + 1));
  if ((*(char *)(ppppppplVar11 + 1) == '\0') || (local_b8 == (int64_t *******)0x0)) {
    if (local_b8 != (int64_t *******)0x0) goto LAB_0167c1ab;
    local_40 = (int64_t *******)CONCAT71((int7)((uint64_t)ppppppplVar11 >> 8),1);
    uVar22 = FUN_016be450();
    if (ppppppplVar23 == (int64_t *******)0x0) {
LAB_0167c720:
      ppppppplVar11 = (int64_t *******)&g_02802688;
      local_e0 = g_02802688;
      pcVar18 = g_02802688;
      if (g_02802688 == (int64_t *******)0x0) goto LAB_0167c90c;
LAB_0167c73a:
      pVar15 = (void*)local_e0;
      local_100 = CONCAT71((int7)((uint64_t)ppppppplVar11 >> 8),*(char *)(ppppppplVar11 + 1));
      if (*(char *)(ppppppplVar11 + 1) != '\0') {
        uVar22 = FUN_00d50b00();
      }
      if ((lVar7 != 0) && ((char)local_c0 != '\0')) {
        FUN_016aea20(uVar22,"!isAudioSourceDocumentArchiveID");
      }
      pvVar12 = _pthread_getspecific(pVar15);
      if (pvVar12 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_91 = FUN_01676460();
      pvVar12 = _pthread_getspecific(pVar15);
      if (pvVar12 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01676430();
      ppppppplVar11 = local_68;
      if ((((local_60 == '\0') && (local_68 != (int64_t *******)0x0)) &&
          (FUN_00d50b00(), local_60 != '\0')) && (local_68 != (int64_t *******)0x0)) {
        FUN_00d50b20();
      }
      local_f0 = ppppppplVar11;
      FUN_01681770();
      local_c8 = local_68;
      if (local_68 == (int64_t *******)0x0) {
        local_c8 = (int64_t *******)0x0;
        local_108 = 0;
      }
      else {
        local_108 = CONCAT71((int7)((uint64_t)local_68 >> 8),1);
        if (((local_60 == '\0') && (FUN_00d50b00(), local_60 != '\0')) &&
           (local_68 != (int64_t *******)0x0)) {
          FUN_00d50b20();
        }
      }
      uVar22 = FUN_01681810();
      ppppppplVar23 = local_68;
      if (local_68 == (int64_t *******)0x0) {
        ppppppplVar23 = (int64_t *******)0x0;
        local_f8 = 0;
      }
      else {
        local_f8 = CONCAT71((int7)((uint64_t)local_68 >> 8),1);
        if (((local_60 == '\0') && (uVar22 = FUN_00d50b00(), local_60 != '\0')) &&
           (local_68 != (int64_t *******)0x0)) {
          uVar22 = FUN_00d50b20();
        }
      }
      local_60 = '\0';
      local_68 = (int64_t *******)0x0;
      local_58 = ppppppplVar11;
      local_50 = 0xffffffff;
      local_48 = 0;
      iVar6 = 0;
      while( true ) {
        if (iVar6 != 0) {
          if (iVar6 < 1) {
            iVar6 = -iVar6;
          }
          else {
            local_50 = CONCAT44(local_50._4_4_,(int)local_50 - iVar6);
            FUN_00d23690(uVar22,iVar6);
            local_48 = local_48 + local_50._4_4_;
            iVar6 = 0;
          }
          local_50 = CONCAT44(iVar6,(int)local_50);
        }
        lVar19 = (int64_t)(int)local_50;
        iVar6 = (int)local_50 + 1;
        local_50 = CONCAT44(local_50._4_4_,iVar6);
        if (*(int *)((int64_t)local_58 + 0xc) <= iVar6) break;
        pppppplVar16 = local_58[2];
        local_68 = (int64_t *******)pppppplVar16[lVar19 + 1];
        pvVar12 = _pthread_getspecific((void*)pppppplVar16);
        pVar15 = (void*)pppppplVar16;
        if (pvVar12 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar22 = FUN_01733b90();
        if (local_88[0] == '\0') {
          if (local_90 != (int64_t *******)0x0) {
            FUN_00d50b00();
            if ((local_88[0] != '\0') && (local_90 != (int64_t *******)0x0)) {
              FUN_00d50b20();
            }
            goto LAB_0167cb40;
          }
        }
        else if (local_90 != (int64_t *******)0x0) {
LAB_0167cb40:
          local_40 = local_90;
          if (local_c8 != (int64_t *******)0x0) {
            local_88[0] = '\0';
            local_80 = local_c8;
            local_78 = 0xffffffff;
            local_70 = 0;
            while( true ) {
              lVar19 = (int64_t)(int)local_78;
              iVar6 = (int)local_78 + 1;
              local_78 = CONCAT44(local_78._4_4_,iVar6);
              if (*(int *)((int64_t)local_80 + 0xc) <= iVar6) break;
              ppppppplVar11 = (int64_t *******)local_80[2][lVar19 + 1];
              pvVar12 = _pthread_getspecific((void*)local_80[2]);
              if (pvVar12 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_01733b90();
              ppppppplVar20 = local_b0;
              local_178 = 0;
              if (local_a8 == '\0') {
                if (local_b0 != (int64_t *******)0x0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_a8 = '\0';
              }
              local_178 = '\x01';
              local_180 = ppppppplVar20;
              cVar4 = (*(*local_90)[10])();
              if ((local_178 != '\0') && (local_180 != (int64_t *******)0x0)) {
                FUN_00d50b20();
              }
              if ((local_a8 != '\0') && (local_b0 != (int64_t *******)0x0)) {
                FUN_00d50b20();
              }
              if (cVar4 != '\0') {
                uVar22 = FUN_00d8b910();
                FUN_016aea20(uVar22,
                             "false && \"archive contains multiple audio source states using the same persistent ID\""
                            );
                FUN_0049cb70();
                local_90 = ppppppplVar11;
                goto LAB_0167ca44;
              }
              if (local_78._4_4_ != 0) {
                if (local_78._4_4_ < 1) {
                  iVar6 = -local_78._4_4_;
                }
                else {
                  local_78 = CONCAT44(local_78._4_4_,(int)local_78 - local_78._4_4_);
                  FUN_00d23690();
                  local_70 = local_70 + local_78._4_4_;
                  iVar6 = 0;
                }
                local_78 = CONCAT44(iVar6,(int)local_78);
              }
            }
            ppppppplVar11 = local_80;
            FUN_0049cb70();
            pVar15 = (void*)ppppppplVar11;
          }
          ppppppplVar11 = local_68;
          local_90 = local_68;
          local_88[0] = '\0';
          FUN_00d21140();
          if ((local_88[0] != '\0') && (ppppppplVar11 != (int64_t *******)0x0)) {
            FUN_00d50b20();
          }
          local_c0 = (int64_t *******)(int64_t)*(int *)((int64_t)ppppppplVar23 + 0xc);
          pvVar12 = _pthread_getspecific(pVar15);
          if (pvVar12 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01662b90();
          if (local_88[0] == '\0') {
            if (ppppppplVar11 != (int64_t *******)0x0) {
              FUN_00d50b00();
              if ((local_88[0] != '\0') && (ppppppplVar11 != (int64_t *******)0x0)) {
                FUN_00d50b20();
              }
              goto LAB_0167cdd0;
            }
          }
          else if (ppppppplVar11 != (int64_t *******)0x0) {
LAB_0167cdd0:
            local_88[0] = '\0';
            local_90 = (int64_t *******)0x0;
            local_80 = ppppppplVar11;
            local_78 = 0xffffffff;
            local_70 = 0;
            local_78._4_4_ = 0;
            while( true ) {
              if (local_78._4_4_ != 0) {
                if (local_78._4_4_ < 1) {
                  iVar6 = -local_78._4_4_;
                }
                else {
                  iVar6 = (int)local_78 - local_78._4_4_;
                  local_78 = CONCAT44(local_78._4_4_,iVar6);
                  FUN_00d23690();
                  local_70 = local_70 + local_78._4_4_;
                  iVar6 = 0;
                }
                local_78 = CONCAT44(iVar6,(int)local_78);
              }
              lVar19 = (int64_t)(int)local_78;
              iVar6 = (int)local_78 + 1;
              local_78 = CONCAT44(local_78._4_4_,iVar6);
              if (*(int *)((int64_t)local_80 + 0xc) <= iVar6) break;
              pppppplVar16 = local_80[2];
              local_90 = (int64_t *******)pppppplVar16[lVar19 + 1];
              pvVar12 = _pthread_getspecific((void*)pppppplVar16);
              if (pvVar12 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_01733b90();
              ppppppplVar11 = local_b0;
              if (local_a8 == '\0') {
                if (local_b0 != (int64_t *******)0x0) {
                  FUN_00d50b00();
                  if ((local_a8 != '\0') && (local_b0 != (int64_t *******)0x0)) {
                    FUN_00d50b20();
                  }
                  goto LAB_0167cf00;
                }
              }
              else if (local_b0 != (int64_t *******)0x0) {
LAB_0167cf00:
                ppppppplVar20 = local_c0;
                if ((int)local_c0 < *(int *)((int64_t)ppppppplVar23 + 0xc)) {
                  do {
                    pvVar12 = _pthread_getspecific((void*)pppppplVar16);
                    if (pvVar12 != (void *)0x0) {
                      FUN_00e8b990();
                    }
                    FUN_01733b90();
                    ppppppplVar14 = local_b0;
                    local_168 = 0;
                    if (local_a8 == '\0') {
                      if (local_b0 != (int64_t *******)0x0) {
                        FUN_00d50b00();
                      }
                    }
                    else {
                      local_a8 = '\0';
                    }
                    local_168 = '\x01';
                    local_170 = ppppppplVar14;
                    cVar4 = (*(*ppppppplVar11)[10])();
                    if ((local_168 != '\0') && (local_170 != (int64_t *******)0x0)) {
                      FUN_00d50b20();
                    }
                    if ((local_a8 != '\0') && (local_b0 != (int64_t *******)0x0)) {
                      FUN_00d50b20();
                    }
                    if (cVar4 != '\0') {
                      uVar22 = FUN_00d8b910();
                      FUN_016aea20(uVar22,
                                   "false && \"archive contains multiple audio modification states using the same persistent ID\""
                                  );
                      goto LAB_0167ce04;
                    }
                    ppppppplVar20 = (int64_t *******)((int64_t)ppppppplVar20 + 1);
                  } while ((int64_t)ppppppplVar20 <
                           (int64_t)*(int *)((int64_t)ppppppplVar23 + 0xc));
                }
                local_a8 = '\0';
                local_b0 = local_90;
                FUN_00d21140();
                if ((local_a8 != '\0') && (local_b0 != (int64_t *******)0x0)) {
                  FUN_00d50b20();
                }
LAB_0167ce04:
                FUN_00d50b20();
              }
            }
            FUN_0049cc10();
            FUN_00d50b20();
          }
LAB_0167ca44:
          uVar22 = FUN_00d50b20();
        }
        iVar6 = local_50._4_4_;
      }
      pcVar18 = local_58;
      uVar22 = FUN_0049cb70();
      if (local_f0 != (int64_t *******)0x0) {
        uVar22 = FUN_00d50b20();
      }
      bVar2 = false;
      bVar1 = true;
      bVar3 = true;
      local_c0 = local_e0;
      goto LAB_0167c446;
    }
    (*(*ppppppplVar23)[0x6c])();
    cVar4 = FUN_00e85ea0();
    uVar22 = extraout_XMM0_Da_02;
    if (cVar4 == '\0') goto LAB_0167c720;
    ppppppplVar11 = (int64_t *******)&local_140;
    local_e0 = local_140;
    pcVar18 = local_140;
    if (local_140 != (int64_t *******)0x0) goto LAB_0167c73a;
LAB_0167c90c:
    local_e0 = (int64_t *******)pcVar18;
    if ((g_026fdd40 == '\0') &&
       (iVar6 = ___cxa_guard_acquire(), uVar22 = extraout_XMM0_Da_05, iVar6 != 0)) {
      g_026cd0e8 = FUN_00d4fe50();
      g_026cd0d0 = "GNDictionary";
      g_026cd0d8 = 0x28;
      pcVar18 = FUN_00022d20;
      g_026cd0e0 = FUN_00022d20;
      g_026cd0f0 = 0;
      ram_00000000026cd0f8 = 0;
      g_026cd100 = 0;
      g_026cd178 = 0;
      ram_00000000026cd180 = 0;
      g_026cd188 = 0;
      g_026cd18a = 6;
      g_026cd108 = 0;
      ram_00000000026cd110 = 0;
      g_026cd118 = 0;
      ram_00000000026cd120 = 0;
      g_026cd128 = 0;
      ram_00000000026cd130 = 0;
      g_026cd138 = 0;
      ram_00000000026cd140 = 0;
      g_026cd148 = 0;
      ram_00000000026cd150 = 0;
      g_026cd158 = 0;
      ram_00000000026cd160 = 0;
      g_026cd168 = 0;
      ram_00000000026cd170 = 0;
      g_026cd193 = 0;
      g_026cd18b = 0;
      uVar22 = ___cxa_guard_release();
    }
    ppppppplVar11 = (int64_t *******)&g_02802688;
    if (ppppppplVar23 != (int64_t *******)0x0) {
      (*(*ppppppplVar23)[0x6c])();
      cVar4 = FUN_00e85ea0();
      uVar22 = extraout_XMM0_Da_03;
      if (cVar4 != '\0') {
        if ((g_026fd0c0 == '\0') && (iVar6 = ___cxa_guard_acquire(), iVar6 != 0)) {
          g_026d5e58 = FUN_00d4fe50();
          g_026d5e40 = "GNString";
          g_026d5e48 = 0x40;
          pcVar18 = FUN_0005d920;
          g_026d5e50 = FUN_0005d920;
          g_026d5e60 = 0;
          ram_00000000026d5e68 = 0;
          g_026d5e70 = 0;
          ram_00000000026d5e78 = 0;
          g_026d5e80 = 0;
          ram_00000000026d5e88 = 0;
          g_026d5e90 = 0;
          ram_00000000026d5e98 = 0;
          g_026d5ea0 = 0;
          ram_00000000026d5ea8 = 0;
          g_026d5eb0 = 0;
          ram_00000000026d5eb8 = 0;
          g_026d5ec0 = 0;
          ram_00000000026d5ec8 = 0;
          g_026d5ed0 = 0;
          ram_00000000026d5ed8 = 0;
          g_026d5ee0 = 0;
          ram_00000000026d5ee8 = 0;
          g_026d5ef0 = 0;
          ram_00000000026d5ef8 = 0;
          g_026d5f00 = 0;
          ___cxa_guard_release();
        }
        cVar4 = FUN_00e8db60();
        uVar22 = extraout_XMM0_Da_04;
        if (cVar4 == '\0') {
          ppppppplVar11 = (int64_t *******)&g_02802688;
        }
        else {
          ppppppplVar11 = (int64_t *******)&local_140;
        }
      }
    }
    pppppplVar16 = *ppppppplVar11;
    cVar4 = *(char *)(ppppppplVar11 + 1);
    if ((cVar4 != '\0') && (pppppplVar16 != (int64_t ******)0x0)) {
      uVar22 = FUN_00d50b00();
LAB_0167f1a9:
      local_c8 = (int64_t *******)pppppplVar16;
      if ((lVar7 != 0) && ((char)local_c0 == '\0')) {
        FUN_016aea20(uVar22,"isAudioSourceDocumentArchiveID");
      }
      local_a8 = '\0';
      local_b0 = (int64_t *******)0x0;
      local_2f8 = '\0';
      pcVar18 = &local_b0;
      local_300 = pppppplVar16;
      uVar22 = FUN_01501fc0();
      ppppppplVar11 = local_68;
      if (local_60 == '\0') {
        if (((local_68 != (int64_t *******)0x0) && (uVar22 = FUN_00d50b00(), local_60 != '\0')) &&
           (local_68 != (int64_t *******)0x0)) {
          uVar22 = FUN_00d50b20();
        }
      }
      else {
        local_60 = '\0';
      }
      if ((local_2f8 != '\0') && (local_300 != (int64_t ******)0x0)) {
        uVar22 = FUN_00d50b20();
      }
      if (ppppppplVar11 == (int64_t *******)0x0) {
        bVar2 = true;
        bVar3 = true;
LAB_0167f744:
        if (ppppppplVar11 != (int64_t *******)0x0) {
          uVar22 = FUN_00d50b20();
        }
      }
      else {
        if ((local_110 != 0) &&
           (((*(int64_t *)(local_110 + 0xc) != 1 || (*(int64_t *)(local_110 + 0x24) != 0)) ||
            (*(int *)(local_110 + 8) != 0)))) {
          FUN_016aea20(uVar22,
                       "(restoreFilter->audioSourceIDsCount == 1) && (restoreFilter->audioModificationIDsCount == 0) && (restoreFilter->documentData == ARA::kARAFalse) && \"sound file chunk based document archive contains only 1 audio source archive\""
                      );
        }
        if (local_b0 == (int64_t *******)0x0) {
          bVar1 = true;
          FUN_016aea20();
          bVar2 = true;
LAB_0167f703:
          pvVar12 = _pthread_getspecific((void*)pcVar18);
          if (pvVar12 != (void *)0x0) {
            FUN_00e8b990();
          }
          uVar22 = FUN_00d50130();
          bVar3 = false;
        }
        else {
          local_2f0 = local_b0;
          local_2e8 = '\0';
          uVar22 = FUN_0167b4e0();
          ppppppplVar23 = local_68;
          if ((local_60 == '\0') && (local_68 != (int64_t *******)0x0)) {
            uVar22 = FUN_00d50b00();
          }
          if ((local_2e8 != '\0') && (local_2f0 != (int64_t *******)0x0)) {
            uVar22 = FUN_00d50b20();
          }
          bVar3 = true;
          if (ppppppplVar23 == (int64_t *******)0x0) {
            bVar1 = true;
          }
          else {
            local_c0 = ppppppplVar23;
            pvVar12 = _pthread_getspecific((void*)pcVar18);
            if (pvVar12 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_01537d40();
            if (local_88[0] == '\0') {
              if (local_90 != (int64_t *******)0x0) {
                FUN_00d50b00();
              }
            }
            else {
              local_88[0] = '\0';
            }
            FUN_0167b860();
            ppppppplVar23 = local_68;
            if ((local_60 == '\0') && (local_68 != (int64_t *******)0x0)) {
              FUN_00d50b00();
            }
            local_40 = ppppppplVar23;
            if (local_90 != (int64_t *******)0x0) {
              FUN_00d50b20();
            }
            if ((local_88[0] != '\0') && (local_90 != (int64_t *******)0x0)) {
              FUN_00d50b20();
            }
            if (local_40 == (int64_t *******)0x0) {
              FUN_00d8b910();
              bVar1 = true;
              FUN_016aea20();
            }
            else {
              local_68 = local_40;
              local_60 = '\0';
              FUN_00d7a410();
              if ((local_60 != '\0') && (local_68 != (int64_t *******)0x0)) {
                FUN_00d50b20();
              }
              pvVar12 = _pthread_getspecific((void*)pcVar18);
              if ((pvVar12 != (void *)0x0) && (lVar19 = FUN_00e8b990(), lVar19 != 0)) {
                pcVar18 = local_40;
              }
              local_2e0 = ppppppplVar11;
              local_2d8 = '\0';
              FUN_0166d850();
              if ((local_2d8 != '\0') && (local_2e0 != (int64_t *******)0x0)) {
                FUN_00d50b20();
              }
              FUN_00d50b20();
              pvVar12 = _pthread_getspecific((void*)pcVar18);
              if (pvVar12 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_016678c0();
              ppppppplVar11 = local_68;
              if (local_60 == '\0') {
                if (local_68 != (int64_t *******)0x0) {
                  FUN_00d50b00();
                  if ((local_60 != '\0') && (local_68 != (int64_t *******)0x0)) {
                    FUN_00d50b20();
                  }
                  goto LAB_0167f5f8;
                }
              }
              else if (local_68 != (int64_t *******)0x0) {
LAB_0167f5f8:
                local_60 = '\0';
                local_68 = (int64_t *******)0x0;
                local_58 = ppppppplVar11;
                local_50 = 0xffffffff;
                local_48 = 0;
                local_50._4_4_ = 0;
                while( true ) {
                  if (local_50._4_4_ != 0) {
                    if (local_50._4_4_ < 1) {
                      iVar6 = -local_50._4_4_;
                    }
                    else {
                      iVar6 = (int)local_50 - local_50._4_4_;
                      local_50 = CONCAT44(local_50._4_4_,iVar6);
                      FUN_00d23690();
                      local_48 = local_48 + local_50._4_4_;
                      iVar6 = 0;
                    }
                    local_50 = CONCAT44(iVar6,(int)local_50);
                  }
                  lVar19 = (int64_t)(int)local_50;
                  iVar6 = (int)local_50 + 1;
                  local_50 = CONCAT44(local_50._4_4_,iVar6);
                  if (*(int *)((int64_t)local_58 + 0xc) <= iVar6) break;
                  local_90 = (int64_t *******)local_58[2][lVar19 + 1];
                  local_88[0] = '\0';
                  local_68 = local_90;
                  FUN_00d7a410();
                  if ((local_88[0] != '\0') && (local_90 != (int64_t *******)0x0)) {
                    FUN_00d50b20();
                  }
                }
                pcVar18 = local_58;
                FUN_0049cc10();
                FUN_00d50b20();
              }
              FUN_00d50b20();
              bVar1 = false;
              ppppppplVar11 = (int64_t *******)0x0;
            }
            uVar22 = FUN_00d50b20();
          }
          if (ppppppplVar11 != (int64_t *******)0x0) {
            if (local_b0 != (int64_t *******)0x0) {
              FUN_00d8b910();
            }
            FUN_016aea20();
            bVar2 = false;
            goto LAB_0167f703;
          }
          bVar2 = false;
          ppppppplVar11 = (int64_t *******)0x0;
        }
        if (bVar1) goto LAB_0167f744;
      }
      if ((local_a8 != '\0') && (local_b0 != (int64_t *******)0x0)) {
        uVar22 = FUN_00d50b20();
      }
      bVar1 = true;
      if (cVar4 != '\0') {
        uVar22 = FUN_00d50b20();
      }
      local_f8 = 0;
      ppppppplVar23 = (int64_t *******)0x0;
      local_108 = 0;
      local_c8 = (int64_t *******)0x0;
      local_100 = 0;
      local_c0 = (int64_t *******)0x0;
      goto LAB_0167c446;
    }
    if (pppppplVar16 != (int64_t ******)0x0) goto LAB_0167f1a9;
    bVar2 = true;
    local_c0 = (int64_t *******)0x0;
    bVar3 = true;
    local_100 = 0;
    local_c8 = (int64_t *******)0x0;
    local_108 = 0;
    ppppppplVar23 = (int64_t *******)0x0;
    local_f8 = 0;
  }
  else {
    FUN_00d50b00();
LAB_0167c1ab:
    if ((lVar7 != 0) && ((char)local_c0 != '\0')) {
      local_40 = (int64_t *******)0x0;
      FUN_016aea20();
    }
    local_40 = (int64_t *******)0x0;
    pvVar12 = _pthread_getspecific(pVar15);
    if (pvVar12 != (void *)0x0) {
      local_40 = (int64_t *******)0x0;
      lVar19 = FUN_00e8b990();
      if (lVar19 != 0) {
        pVar15 = (void*)local_b8;
      }
    }
    local_40 = (int64_t *******)0x0;
    local_91 = FUN_01538770();
    if (local_91 != '\0') {
      local_40 = (int64_t *******)0x0;
      lVar19 = FUN_00bce6e0();
      if ((lVar19 != 0) && (lVar7 != 0)) {
        local_40 = (int64_t *******)0x0;
        iVar6 = FUN_00e7ddf0();
        if (iVar6 == 0) {
          local_91 = '\0';
        }
      }
    }
    pvVar12 = _pthread_getspecific(pVar15);
    if (pvVar12 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01537a10();
    local_c0 = local_68;
    ppppppplVar11 = local_68;
    if (local_68 == (int64_t *******)0x0) {
      local_c0 = (int64_t *******)0x0;
      local_100 = 0;
    }
    else {
      local_100 = CONCAT71((int7)((uint64_t)local_68 >> 8),1);
      if (((local_60 == '\0') && (FUN_00d50b00(), local_60 != '\0')) &&
         (local_68 != (int64_t *******)0x0)) {
        FUN_00d50b20();
      }
    }
    pvVar12 = _pthread_getspecific((void*)ppppppplVar11);
    if (pvVar12 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01537d40();
    local_c8 = local_68;
    ppppppplVar11 = local_68;
    if (local_68 == (int64_t *******)0x0) {
      local_c8 = (int64_t *******)0x0;
      local_108 = 0;
    }
    else {
      local_108 = CONCAT71((int7)((uint64_t)local_68 >> 8),1);
      if (((local_60 == '\0') && (FUN_00d50b00(), local_60 != '\0')) &&
         (local_68 != (int64_t *******)0x0)) {
        FUN_00d50b20();
      }
    }
    pvVar12 = _pthread_getspecific((void*)ppppppplVar11);
    if (pvVar12 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar22 = FUN_01537fd0();
    ppppppplVar23 = local_68;
    pcVar18 = local_68;
    if (local_68 == (int64_t *******)0x0) {
      ppppppplVar23 = (int64_t *******)0x0;
      local_f8 = 0;
    }
    else {
      local_f8 = CONCAT71((int7)((uint64_t)local_68 >> 8),1);
      if (((local_60 == '\0') && (uVar22 = FUN_00d50b00(), local_60 != '\0')) &&
         (local_68 != (int64_t *******)0x0)) {
        uVar22 = FUN_00d50b20();
      }
    }
    bVar3 = true;
    bVar1 = false;
    bVar2 = false;
LAB_0167c446:
    if (((char)local_e4 != '\0') && (!bVar1)) {
      uVar22 = FUN_00d50b20();
    }
    if (local_91 != '\0') {
      FUN_01f27fe0();
      uVar22 = (*(*local_68)[0xac])();
      if ((local_60 != '\0') && (local_68 != (int64_t *******)0x0)) {
        uVar22 = FUN_00d50b20();
      }
    }
  }
  pVar15 = (void*)pcVar18;
  if (bVar2) {
    FUN_016aea20(uVar22,
                 "false && \"failed to decode provided archive data, bytes or archive ID may have been corrupted\""
                );
LAB_0167c4ae:
    if (*(int64_t *)(this_ptr[6] + 0x20) != 0) {
      (**(code **)(*(int64_t *)(this_ptr[6] + 0x20) + 0x28))(g_02390124);
    }
    *(void*)(this_ptr + 0xe) = 0;
    local_40 = (int64_t *******)0x0;
  }
  else {
    if (!bVar3) goto LAB_0167c4ae;
    if ((local_110 == 0) || (*(int *)(local_110 + 8) != 0)) {
      if (local_c0 == (int64_t *******)0x0) {
        FUN_016aea20();
        local_40 = (int64_t *******)0x0;
      }
      else {
        pvVar12 = _pthread_getspecific(pVar15);
        if (pvVar12 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01537a10();
        ppppppplVar11 = local_68;
        pvVar12 = _pthread_getspecific(pVar15);
        ppppppplVar20 = local_68;
        if ((pvVar12 != (void *)0x0) &&
           (lVar19 = FUN_00e8b990(), ppppppplVar11 = ppppppplVar20, lVar19 != 0)) {
          ppppppplVar11 =
               (int64_t *******)ppppppplVar20[(uint64_t)(*(uint *)(lVar19 + 0x154) & 1) + 4];
        }
        local_2d0 = local_c0;
        local_2c8 = '\0';
        pvVar12 = _pthread_getspecific(pVar15);
        if (pvVar12 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01537ab0();
        local_158 = 0;
        if (local_88[0] == '\0') {
          if (local_90 != (int64_t *******)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_88[0] = '\0';
        }
        local_158 = '\x01';
        local_160 = local_90;
        local_2b8 = '\0';
        pcVar18 = &local_2c0;
        local_2c0 = ppppppplVar23;
        uVar8 = (*(*ppppppplVar11)[0x6e])();
        cVar4 = (char)uVar8;
        if ((local_2b8 != '\0') && (local_2c0 != (int64_t *******)0x0)) {
          uVar8 = FUN_00d50b20();
        }
        if ((local_158 != '\0') && (local_160 != (int64_t *******)0x0)) {
          uVar8 = FUN_00d50b20();
        }
        if ((local_88[0] != '\0') && (local_90 != (int64_t *******)0x0)) {
          uVar8 = FUN_00d50b20();
        }
        if ((local_2c8 != '\0') && (local_2d0 != (int64_t *******)0x0)) {
          uVar8 = FUN_00d50b20();
        }
        if ((local_60 != '\0') && (local_68 != (int64_t *******)0x0)) {
          uVar8 = FUN_00d50b20();
        }
        local_40 = (int64_t *******)CONCAT71((int7)((uint64_t)uVar8 >> 8),1);
        if (cVar4 == '\0') {
          local_40 = (int64_t *******)0x0;
          FUN_016aea20();
        }
      }
    }
    else {
      local_40 = (int64_t *******)CONCAT71((int7)((uint64_t)local_110 >> 8),1);
    }
    local_e0 = (int64_t *******)(CONCAT44(local_e0._4_4_,local_12c) & 0xffffffff000000ff);
    if (local_c8 == (int64_t *******)0x0) {
      local_e4 = 0;
    }
    else {
      local_60 = '\0';
      local_68 = (int64_t *******)0x0;
      local_58 = local_c8;
      local_50 = 0xffffffff;
      local_48 = 0;
      local_e4 = 0;
      local_50._4_4_ = 0;
      while( true ) {
        ppppppplVar11 = local_90;
        if (local_50._4_4_ != 0) {
          if (local_50._4_4_ < 1) {
            iVar6 = -local_50._4_4_;
          }
          else {
            iVar6 = (int)local_50 - local_50._4_4_;
            local_50 = CONCAT44(local_50._4_4_,iVar6);
            FUN_00d23690();
            local_48 = local_48 + local_50._4_4_;
            iVar6 = 0;
          }
          local_50 = CONCAT44(iVar6,(int)local_50);
        }
        lVar19 = (int64_t)(int)local_50;
        iVar6 = (int)local_50 + 1;
        local_50 = CONCAT44(local_50._4_4_,iVar6);
        if (*(int *)((int64_t)local_58 + 0xc) <= iVar6) break;
        pppppplVar16 = local_58[2];
        local_68 = (int64_t *******)pppppplVar16[lVar19 + 1];
        pvVar12 = _pthread_getspecific((void*)pppppplVar16);
        pVar15 = (void*)pppppplVar16;
        if (pvVar12 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar22 = FUN_01733b90();
        if (local_88[0] == '\0') {
          if (local_90 == (int64_t *******)0x0) goto LAB_0167d3f0;
          uVar22 = FUN_00d50b00();
          if ((local_88[0] != '\0') && (local_90 != (int64_t *******)0x0)) {
            uVar22 = FUN_00d50b20();
          }
LAB_0167d300:
          local_2b0 = local_90;
          local_2a8 = '\0';
          FUN_0167b4e0(uVar22,local_110);
          if ((local_88[0] == '\0') && (local_90 != (int64_t *******)0x0)) {
            FUN_00d50b00();
          }
          if ((local_2a8 != '\0') && (local_2b0 != (int64_t *******)0x0)) {
            FUN_00d50b20();
          }
          if (local_90 != (int64_t *******)0x0) {
            pvVar12 = _pthread_getspecific(pVar15);
            if (pvVar12 != (void *)0x0) {
              FUN_00e8b990();
            }
            uVar22 = FUN_01537d40();
            ppppppplVar20 = local_b0;
            if (local_a8 == '\0') {
              if (local_b0 != (int64_t *******)0x0) {
                uVar22 = FUN_00d50b00();
              }
            }
            else {
              local_a8 = '\0';
            }
            local_348 = 1;
            local_350 = ppppppplVar20;
            FUN_0167b860(uVar22,&local_350);
            if ((local_88[0] == '\0') && (local_90 != (int64_t *******)0x0)) {
              FUN_00d50b00();
            }
            if (ppppppplVar20 != (int64_t *******)0x0) {
              FUN_00d50b20();
            }
            if ((local_a8 != '\0') && (local_b0 != (int64_t *******)0x0)) {
              FUN_00d50b20();
            }
            if (local_90 != (int64_t *******)0x0) {
              local_88[0] = '\0';
              cVar4 = FUN_00d7a850();
              if ((local_88[0] != '\0') && (local_90 != (int64_t *******)0x0)) {
                FUN_00d50b20();
              }
              if (cVar4 == '\0') {
                local_88[0] = '\0';
                FUN_00d7a410();
                if ((local_88[0] != '\0') && (local_90 != (int64_t *******)0x0)) {
                  FUN_00d50b20();
                }
                pvVar12 = _pthread_getspecific(pVar15);
                if (pvVar12 != (void *)0x0) {
                  FUN_00e8b990();
                }
                local_2a0 = local_68;
                local_298 = '\0';
                cVar4 = FUN_01661d30();
                if ((local_298 != '\0') && (local_2a0 != (int64_t *******)0x0)) {
                  FUN_00d50b20();
                }
                if (cVar4 == '\0') {
                  uVar22 = FUN_00d8b910();
                  FUN_016aea20(uVar22,
                               "false && \"cannot restore audio source state because its current configuration does not match archived sample rate, sample count or channel count\""
                              );
                  pvVar12 = _pthread_getspecific(pVar15);
                  if (pvVar12 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  FUN_016624a0();
                  goto LAB_0167d692;
                }
                pvVar12 = _pthread_getspecific(pVar15);
                if (pvVar12 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_016678c0();
                if (local_88[0] == '\0') {
                  if (local_90 != (int64_t *******)0x0) {
                    FUN_00d50b00();
                    if ((local_88[0] != '\0') && (local_90 != (int64_t *******)0x0)) {
                      FUN_00d50b20();
                    }
                    goto LAB_0167d6db;
                  }
                }
                else if (local_90 != (int64_t *******)0x0) {
LAB_0167d6db:
                  local_88[0] = '\0';
                  local_90 = (int64_t *******)0x0;
                  local_80 = ppppppplVar11;
                  local_78 = 0xffffffff;
                  local_70 = 0;
                  local_78._4_4_ = 0;
                  while( true ) {
                    if (local_78._4_4_ != 0) {
                      if (local_78._4_4_ < 1) {
                        iVar6 = -local_78._4_4_;
                      }
                      else {
                        iVar6 = (int)local_78 - local_78._4_4_;
                        local_78 = CONCAT44(local_78._4_4_,iVar6);
                        FUN_00d23690();
                        local_70 = local_70 + local_78._4_4_;
                        iVar6 = 0;
                      }
                      local_78 = CONCAT44(iVar6,(int)local_78);
                    }
                    lVar19 = (int64_t)(int)local_78;
                    iVar6 = (int)local_78 + 1;
                    local_78 = CONCAT44(local_78._4_4_,iVar6);
                    if (*(int *)((int64_t)local_80 + 0xc) <= iVar6) break;
                    local_90 = (int64_t *******)local_80[2][lVar19 + 1];
                    local_a8 = '\0';
                    local_b0 = local_90;
                    FUN_00d7a410();
                    if ((local_a8 != '\0') && (local_b0 != (int64_t *******)0x0)) {
                      FUN_00d50b20();
                    }
                  }
                  FUN_0049cc10();
                  FUN_00d50b20();
                }
              }
              else {
                uVar22 = FUN_00d8b910();
                FUN_016aea20(uVar22,
                             "false && \"archive contains multiple audio source states mapped to the same persistent ID\""
                            );
                pvVar12 = _pthread_getspecific(pVar15);
                if (pvVar12 != (void *)0x0) {
                  FUN_00e8b990();
                }
                uVar8 = FUN_016624a0();
                local_e4 = (uint)CONCAT71((int7)((uint64_t)uVar8 >> 8),1);
LAB_0167d692:
                local_40 = (int64_t *******)0x0;
              }
              FUN_00d50b20();
            }
            FUN_00d50b20();
          }
          FUN_00d50b20();
        }
        else {
          if (local_90 != (int64_t *******)0x0) goto LAB_0167d300;
LAB_0167d3f0:
          local_40 = (int64_t *******)0x0;
          FUN_016aea20(uVar22,
                       "false && \"could not parse archive state, extracted graph is broken\"");
        }
      }
      pcVar18 = local_58;
      FUN_0049cb70();
    }
    bVar5 = local_110 == 0 & (byte)local_12c;
    local_12c = CONCAT31(local_12c._1_3_,bVar5);
    if (bVar5 == 1) {
      iVar6 = FUN_00c8d620();
      pvVar12 = _pthread_getspecific((void*)pcVar18);
      if (pvVar12 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01537d40();
      iVar21 = *(int *)((int64_t)local_68 + 0xc);
      if (local_60 != '\0') {
        FUN_00d50b20();
      }
      if (iVar6 != iVar21) {
        pvVar12 = _pthread_getspecific((void*)pcVar18);
        if (pvVar12 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01537d40();
        ppppppplVar11 = local_68;
        if (local_60 == '\0') {
          if (local_68 != (int64_t *******)0x0) {
            FUN_00d50b00();
            if ((local_60 != '\0') && (local_68 != (int64_t *******)0x0)) {
              FUN_00d50b20();
            }
            goto LAB_0167d8f5;
          }
        }
        else if (local_68 != (int64_t *******)0x0) {
LAB_0167d8f5:
          local_60 = '\0';
          local_68 = (int64_t *******)0x0;
          local_58 = ppppppplVar11;
          local_50 = 0xffffffff;
          local_48 = 0;
          local_50._4_4_ = 0;
          while( true ) {
            if (local_50._4_4_ != 0) {
              if (local_50._4_4_ < 1) {
                iVar6 = -local_50._4_4_;
              }
              else {
                iVar6 = (int)local_50 - local_50._4_4_;
                local_50 = CONCAT44(local_50._4_4_,iVar6);
                FUN_00d23690();
                local_48 = local_48 + local_50._4_4_;
                iVar6 = 0;
              }
              local_50 = CONCAT44(iVar6,(int)local_50);
            }
            lVar19 = (int64_t)(int)local_50;
            iVar6 = (int)local_50 + 1;
            local_50 = CONCAT44(local_50._4_4_,iVar6);
            if (*(int *)((int64_t)local_58 + 0xc) <= iVar6) break;
            pppppplVar16 = local_58[2];
            local_90 = (int64_t *******)pppppplVar16[lVar19 + 1];
            local_88[0] = '\0';
            local_68 = local_90;
            cVar4 = FUN_00d7a850();
            pVar15 = (void*)pppppplVar16;
            if ((local_88[0] != '\0') && (local_90 != (int64_t *******)0x0)) {
              FUN_00d50b20();
            }
            if (cVar4 == '\0') {
              pvVar12 = _pthread_getspecific(pVar15);
              if (pvVar12 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_01733b90();
              uVar22 = FUN_00d8b910();
              FUN_016aea20(uVar22,"false && \"audio source in graph not found in archive\"");
              if ((local_88[0] != '\0') && (local_90 != (int64_t *******)0x0)) {
                FUN_00d50b20();
              }
              pvVar12 = _pthread_getspecific(pVar15);
              if (pvVar12 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_016624a0();
              ppppppplVar11 = local_68;
              local_90 = local_68;
              local_88[0] = '\0';
              FUN_00d7a410();
              if ((local_88[0] != '\0') && (ppppppplVar11 != (int64_t *******)0x0)) {
                FUN_00d50b20();
              }
              local_40 = (int64_t *******)0x0;
            }
          }
          pcVar18 = local_58;
          FUN_0049cb70();
          FUN_00d50b20();
        }
      }
    }
    if (ppppppplVar23 != (int64_t *******)0x0) {
      local_60 = '\0';
      local_68 = (int64_t *******)0x0;
      local_50 = 0xffffffff;
      local_48 = 0;
      local_50._4_4_ = 0;
      local_58 = ppppppplVar23;
      while( true ) {
        if (local_50._4_4_ != 0) {
          if (local_50._4_4_ < 1) {
            iVar6 = -local_50._4_4_;
          }
          else {
            iVar6 = (int)local_50 - local_50._4_4_;
            local_50 = CONCAT44(local_50._4_4_,iVar6);
            FUN_00d23690();
            local_48 = local_48 + local_50._4_4_;
            iVar6 = 0;
          }
          local_50 = CONCAT44(iVar6,(int)local_50);
        }
        lVar19 = (int64_t)(int)local_50;
        iVar6 = (int)local_50 + 1;
        local_50 = CONCAT44(local_50._4_4_,iVar6);
        if (*(int *)((int64_t)local_58 + 0xc) <= iVar6) break;
        pppppplVar16 = local_58[2];
        local_68 = (int64_t *******)pppppplVar16[lVar19 + 1];
        pvVar12 = _pthread_getspecific((void*)pppppplVar16);
        pVar15 = (void*)pppppplVar16;
        if (pvVar12 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar22 = FUN_01733b90();
        if (local_88[0] == '\0') {
          if (local_90 == (int64_t *******)0x0) goto LAB_0167dcd0;
          uVar22 = FUN_00d50b00();
          if ((local_88[0] != '\0') && (local_90 != (int64_t *******)0x0)) {
            uVar22 = FUN_00d50b20();
          }
LAB_0167dbe0:
          local_290 = local_90;
          local_288 = '\0';
          FUN_0167b6a0(uVar22,local_110);
          if ((local_88[0] == '\0') && (local_90 != (int64_t *******)0x0)) {
            FUN_00d50b00();
          }
          if ((local_288 != '\0') && (local_290 != (int64_t *******)0x0)) {
            FUN_00d50b20();
          }
          if (local_90 != (int64_t *******)0x0) {
            pvVar12 = _pthread_getspecific(pVar15);
            if (pvVar12 != (void *)0x0) {
              FUN_00e8b990();
            }
            uVar22 = FUN_01537fd0();
            ppppppplVar11 = local_b0;
            if (local_a8 == '\0') {
              if (local_b0 != (int64_t *******)0x0) {
                uVar22 = FUN_00d50b00();
              }
            }
            else {
              local_a8 = '\0';
            }
            local_338 = 1;
            local_340 = ppppppplVar11;
            FUN_0167ba70(uVar22,&local_340);
            if ((local_88[0] == '\0') && (local_90 != (int64_t *******)0x0)) {
              FUN_00d50b00();
            }
            if (ppppppplVar11 != (int64_t *******)0x0) {
              FUN_00d50b20();
            }
            if ((local_a8 != '\0') && (local_b0 != (int64_t *******)0x0)) {
              FUN_00d50b20();
            }
            if (local_90 != (int64_t *******)0x0) {
              local_88[0] = '\0';
              cVar4 = FUN_00d7a850();
              if ((local_88[0] != '\0') && (local_90 != (int64_t *******)0x0)) {
                FUN_00d50b20();
              }
              if (cVar4 == '\0') {
                local_88[0] = '\0';
                FUN_00d7a410();
                if ((local_88[0] != '\0') && (local_90 != (int64_t *******)0x0)) {
                  FUN_00d50b20();
                }
                pvVar12 = _pthread_getspecific(pVar15);
                if (pvVar12 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_01650620();
                local_b8 = local_90;
                ppppppplVar11 = local_90;
                if ((((local_88[0] == '\0') && (local_90 != (int64_t *******)0x0)) &&
                    (FUN_00d50b00(), ppppppplVar11 = local_b8, local_88[0] != '\0')) &&
                   (local_90 != (int64_t *******)0x0)) {
                  FUN_00d50b20();
                }
                local_88[0] = '\0';
                cVar4 = FUN_00d7a850();
                if ((local_88[0] != '\0') && (ppppppplVar11 != (int64_t *******)0x0)) {
                  FUN_00d50b20();
                }
                if (cVar4 == '\0') {
                  pvVar12 = _pthread_getspecific(pVar15);
                  if ((pvVar12 != (void *)0x0) && (lVar19 = FUN_00e8b990(), lVar19 != 0)) {
                    pVar15 = (void*)local_b8;
                  }
                  cVar4 = FUN_01733c10();
                  if (cVar4 != '\0') {
                    pvVar12 = _pthread_getspecific(pVar15);
                    if ((pvVar12 != (void *)0x0) && (lVar19 = FUN_00e8b990(), lVar19 != 0)) {
                      pVar15 = (void*)local_b8;
                    }
                    cVar4 = FUN_01733c20();
                    if (cVar4 == '\0') {
                      pvVar12 = _pthread_getspecific(pVar15);
                      if (pvVar12 != (void *)0x0) {
                        FUN_00e8b990();
                      }
                      uVar22 = FUN_0164fee0();
                      FUN_016aea20(uVar22,
                                   "false && \"restoring audio modification onto a freshly created audio source - expected to restore audio source state too\""
                                  );
                    }
                  }
                  pvVar12 = _pthread_getspecific(pVar15);
                  if (pvVar12 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  FUN_016501d0();
                  if ((local_88[0] != '\0') && (ppppppplVar11 != (int64_t *******)0x0)) {
                    FUN_00d50b20();
                  }
                  if (ppppppplVar11 == (int64_t *******)0x0) {
                    pvVar12 = _pthread_getspecific(pVar15);
                    if ((pvVar12 != (void *)0x0) && (lVar19 = FUN_00e8b990(), lVar19 != 0)) {
                      local_90 = (int64_t *******)
                                 local_90[(uint64_t)(*(uint *)(lVar19 + 0x154) & 1) + 4];
                    }
                    (*(*local_90)[0x70])();
                    local_90 = ppppppplVar11;
                  }
                  else {
                    pvVar12 = _pthread_getspecific(pVar15);
                    if (pvVar12 != (void *)0x0) {
                      FUN_00e8b990();
                    }
                    FUN_01650330();
                    pvVar12 = _pthread_getspecific(pVar15);
                    if (pvVar12 != (void *)0x0) {
                      FUN_00e8b990();
                    }
                    FUN_012e5ae0();
                    FUN_00d23310();
                    local_d0[0] = local_88[0];
                    pcVar17 = local_d0;
                    pcVar13 = local_88;
                    if (local_88[0] == '\0') {
                      pcVar13 = pcVar17;
                    }
                    *pcVar13 = '\0';
                    if ((local_88[0] != '\0') && (ppppppplVar11 != (int64_t *******)0x0)) {
                      FUN_00d50b20();
                    }
                    pVar15 = (void*)pcVar17;
                    if ((local_d0[0] == '\0') && (ppppppplVar11 != (int64_t *******)0x0)) {
                      FUN_00d50b00();
                    }
                    if ((local_a8 != '\0') && (local_b0 != (int64_t *******)0x0)) {
                      FUN_00d50b20();
                    }
                    if ((local_268 != '\0') && (local_270 != 0)) {
                      FUN_00d50b20();
                    }
                    if (ppppppplVar11 == (int64_t *******)0x0) {
                      local_148 = 0;
                      local_f0 = (int64_t *******)0x0;
                    }
                    else {
                      pvVar12 = _pthread_getspecific(pVar15);
                      if (pvVar12 != (void *)0x0) {
                        FUN_00e8b990();
                      }
                      FUN_01264240();
                      ppppppplVar20 = ppppppplVar11;
                      local_d8 = ppppppplVar11;
                      if (ppppppplVar11 == (int64_t *******)0x0) {
                        local_f0 = (int64_t *******)0x0;
                        local_148 = 0;
                      }
                      else {
                        ppppppplVar14 = ppppppplVar11;
                        if (((local_88[0] == '\0') && (FUN_00d50b00(), local_88[0] != '\0')) &&
                           (ppppppplVar11 != (int64_t *******)0x0)) {
                          FUN_00d50b20();
                        }
                        pvVar12 = _pthread_getspecific((void*)ppppppplVar14);
                        if (pvVar12 != (void *)0x0) {
                          FUN_00e8b990();
                        }
                        FUN_013d9080();
                        if (ppppppplVar11 == local_d8) {
                          local_f0 = local_d8;
                          ppppppplVar14 = local_d8;
LAB_0167e4c5:
                          if ((local_88[0] != '\0') && (ppppppplVar11 != (int64_t *******)0x0)) {
                            ppppppplVar14 = (int64_t *******)FUN_00d50b20();
                          }
                        }
                        else {
                          local_f0 = ppppppplVar11;
                          if (local_88[0] == '\0') {
                            if (ppppppplVar11 != (int64_t *******)0x0) {
                              FUN_00d50b00();
                            }
                            ppppppplVar14 = (int64_t *******)FUN_00d50b20();
                            goto LAB_0167e4c5;
                          }
                          ppppppplVar14 = (int64_t *******)FUN_00d50b20();
                        }
                        local_148 = CONCAT71((int7)((uint64_t)ppppppplVar14 >> 8),1);
                      }
                      pVar15 = (void*)ppppppplVar20;
                      FUN_00d50b20();
                    }
                    pvVar12 = _pthread_getspecific(pVar15);
                    if (pvVar12 != (void *)0x0) {
                      FUN_00e8b990();
                    }
                    FUN_016670b0();
                    if ((local_88[0] != '\0') && (ppppppplVar11 != (int64_t *******)0x0)) {
                      FUN_00d50b20();
                    }
                    bVar1 = true;
                    if (ppppppplVar11 == (int64_t *******)0x0) {
                      local_150 = 0;
LAB_0167e6d3:
                      local_d8 = (int64_t *******)0x0;
                      local_40 = (int64_t *******)0x0;
LAB_0167e6e2:
                      pvVar12 = _pthread_getspecific(pVar15);
                      if ((pvVar12 != (void *)0x0) && (lVar19 = FUN_00e8b990(), lVar19 != 0)) {
                        local_90 = (int64_t *******)
                                   local_90[(uint64_t)(*(uint *)(lVar19 + 0x154) & 1) + 4];
                      }
                      (*(*local_90)[0x70])();
LAB_0167e71f:
                    }
                    else {
                      pvVar12 = _pthread_getspecific(pVar15);
                      if ((pvVar12 != (void *)0x0) && (lVar19 = FUN_00e8b990(), lVar19 != 0)) {
                        pVar15 = (void*)local_b8;
                      }
                      FUN_016670b0();
                      pvVar12 = _pthread_getspecific(pVar15);
                      if (pvVar12 != (void *)0x0) {
                        FUN_00e8b990();
                      }
                      uVar8 = FUN_0124df10();
                      if (ppppppplVar11 == (int64_t *******)0x0) {
                        local_150 = 0;
                        ppppppplVar20 = (int64_t *******)0x0;
                      }
                      else {
                        ppppppplVar20 = ppppppplVar11;
                        if (local_88[0] == '\0') {
                          uVar8 = FUN_00d50b00();
                          local_150 = CONCAT71((int7)((uint64_t)uVar8 >> 8),1);
                          if ((local_88[0] != '\0') && (ppppppplVar11 != (int64_t *******)0x0)) {
                            FUN_00d50b20();
                          }
                        }
                        else {
                          local_88[0] = '\0';
                          local_150 = CONCAT71((int7)((uint64_t)uVar8 >> 8),1);
                        }
                      }
                      if ((local_a8 != '\0') && (local_b0 != (int64_t *******)0x0)) {
                        FUN_00d50b20();
                      }
                      if (ppppppplVar20 == (int64_t *******)0x0) goto LAB_0167e6d3;
                      local_d8 = ppppppplVar20;
                      if (local_f0 != (int64_t *******)0x0) {
                        pvVar12 = _pthread_getspecific(pVar15);
                        if ((pvVar12 != (void *)0x0) && (lVar19 = FUN_00e8b990(), lVar19 != 0)) {
                          pVar15 = (void*)local_d8;
                        }
                        local_260 = local_f0;
                        local_258 = '\0';
                        cVar4 = FUN_013d8180();
                        if ((local_258 != '\0') && (local_260 != (int64_t *******)0x0)) {
                          FUN_00d50b20();
                        }
                        if (cVar4 != '\0') goto LAB_0167e7f2;
                        bVar1 = false;
                        goto LAB_0167e6e2;
                      }
LAB_0167e7f2:
                      pvVar12 = _pthread_getspecific(pVar15);
                      if (pvVar12 != (void *)0x0) {
                        FUN_00e8b990();
                      }
                      local_250 = local_d8;
                      local_248 = '\0';
                      cVar4 = FUN_01653470();
                      bVar5 = 1;
                      if (cVar4 != '\0') {
                        pvVar12 = _pthread_getspecific(pVar15);
                        ppppppplVar20 = local_90;
                        if ((pvVar12 != (void *)0x0) && (lVar19 = FUN_00e8b990(), lVar19 != 0)) {
                          ppppppplVar20 =
                               (int64_t *******)
                               local_90[(uint64_t)(*(uint *)(lVar19 + 0x154) & 1) + 4];
                        }
                        local_240 = local_68;
                        local_238 = '\0';
                        bVar5 = (*(*ppppppplVar20)[0x6f])();
                        bVar5 = bVar5 ^ 1;
                        if ((local_238 != '\0') && (local_240 != (int64_t *******)0x0)) {
                          FUN_00d50b20();
                        }
                      }
                      if ((local_248 != '\0') && (local_250 != (int64_t *******)0x0)) {
                        FUN_00d50b20();
                      }
                      if (bVar5 != 0) {
                        pvVar12 = _pthread_getspecific(pVar15);
                        if (pvVar12 != (void *)0x0) {
                          FUN_00e8b990();
                        }
                        uVar22 = FUN_0164fee0();
                        FUN_016aea20(uVar22,
                                     "false && \"could not parse archive state, extracted graph is broken\""
                                    );
                        pvVar12 = _pthread_getspecific(pVar15);
                        if ((pvVar12 != (void *)0x0) && (lVar19 = FUN_00e8b990(), lVar19 != 0)) {
                          local_90 = (int64_t *******)
                                     local_90[(uint64_t)(*(uint *)(lVar19 + 0x154) & 1) + 4];
                        }
                        bVar1 = false;
                        (*(*local_90)[0x70])();
                        local_40 = (int64_t *******)0x0;
                        goto LAB_0167e71f;
                      }
                      bVar1 = false;
                    }
                    if (((char)local_150 != '\0') && (!bVar1)) {
                      FUN_00d50b20();
                    }
                    local_90 = ppppppplVar11;
                    if (((char)local_148 != '\0') && (local_f0 != (int64_t *******)0x0)) {
                      FUN_00d50b20();
                    }
                  }
                }
                else {
                  local_88[0] = '\0';
                  FUN_00d7a770();
                  if ((local_88[0] != '\0') && (local_90 != (int64_t *******)0x0)) {
                    FUN_00d50b20();
                  }
                  pvVar12 = _pthread_getspecific(pVar15);
                  if ((pvVar12 != (void *)0x0) && (lVar19 = FUN_00e8b990(), lVar19 != 0)) {
                    pVar15 = (void*)local_b8;
                  }
                  FUN_016670b0();
                  if ((local_88[0] != '\0') && (local_90 != (int64_t *******)0x0)) {
                    FUN_00d50b20();
                  }
                  if (local_90 != (int64_t *******)0x0) {
                    pvVar12 = _pthread_getspecific(pVar15);
                    ppppppplVar11 = local_90;
                    if ((pvVar12 != (void *)0x0) && (lVar19 = FUN_00e8b990(), lVar19 != 0)) {
                      ppppppplVar11 =
                           (int64_t *******)
                           local_90[(uint64_t)(*(uint *)(lVar19 + 0x154) & 1) + 4];
                    }
                    local_280 = local_68;
                    local_278 = '\0';
                    cVar4 = (*(*ppppppplVar11)[0x6f])();
                    if ((local_278 != '\0') && (local_280 != (int64_t *******)0x0)) {
                      FUN_00d50b20();
                    }
                    if (cVar4 == '\0') {
                      pvVar12 = _pthread_getspecific(pVar15);
                      if (pvVar12 != (void *)0x0) {
                        FUN_00e8b990();
                      }
                      uVar22 = FUN_0164fee0();
                      FUN_016aea20(uVar22,
                                   "false && \"could not parse archive state, extracted graph is broken\""
                                  );
                      pvVar12 = _pthread_getspecific(pVar15);
                      ppppppplVar11 = local_90;
                      if ((pvVar12 != (void *)0x0) && (lVar19 = FUN_00e8b990(), lVar19 != 0)) {
                        ppppppplVar11 =
                             (int64_t *******)
                             local_90[(uint64_t)(*(uint *)(lVar19 + 0x154) & 1) + 4];
                      }
                      uVar8 = (*(*ppppppplVar11)[0x70])();
                      local_e4 = (uint)CONCAT71((int7)((uint64_t)uVar8 >> 8),1);
                      local_40 = (int64_t *******)0x0;
                    }
                  }
                }
                if (local_b8 != (int64_t *******)0x0) {
                  FUN_00d50b20();
                }
              }
              else {
                uVar22 = FUN_00d8b910();
                FUN_016aea20(uVar22,
                             "false && \"archive contains multiple audio modification states mapped to the same persistent ID\""
                            );
                pvVar12 = _pthread_getspecific(pVar15);
                ppppppplVar11 = local_90;
                if ((pvVar12 != (void *)0x0) && (lVar19 = FUN_00e8b990(), lVar19 != 0)) {
                  ppppppplVar11 =
                       (int64_t *******)local_90[(uint64_t)(*(uint *)(lVar19 + 0x154) & 1) + 4];
                }
                uVar8 = (*(*ppppppplVar11)[0x70])();
                local_e4 = (uint)CONCAT71((int7)((uint64_t)uVar8 >> 8),1);
                local_40 = (int64_t *******)0x0;
              }
              FUN_00d50b20();
            }
            FUN_00d50b20();
          }
          FUN_00d50b20();
        }
        else {
          if (local_90 != (int64_t *******)0x0) goto LAB_0167dbe0;
LAB_0167dcd0:
          local_40 = (int64_t *******)0x0;
          FUN_016aea20(uVar22,
                       "false && \"could not parse archive state, extracted graph is broken\"");
        }
      }
      pcVar18 = local_58;
      FUN_0049cc10();
    }
    pVar15 = (void*)pcVar18;
    if (local_128 != (void*)0x0) {
      iVar6 = FUN_00c8d620();
      pVar15 = (void*)pcVar18;
      if (0 < iVar6) {
        iVar21 = 0;
        bVar1 = true;
        do {
          do {
            ppppppplVar11 = (int64_t *******)FUN_00c8df10();
            pVar15 = (void*)pcVar18;
          } while (ppppppplVar11 == (int64_t *******)0x0);
          if (!bVar1) break;
          pvVar12 = _pthread_getspecific(pVar15);
          ppppppplVar20 = ppppppplVar11;
          if ((pvVar12 != (void *)0x0) && (lVar19 = FUN_00e8b990(), lVar19 != 0)) {
            ppppppplVar20 =
                 (int64_t *******)ppppppplVar11[(uint64_t)(*(uint *)(lVar19 + 0x154) & 1) + 4];
          }
          (*(*ppppppplVar20)[0x70])();
          local_60 = '\0';
          local_68 = ppppppplVar11;
          FUN_00d7a410();
          if ((local_60 != '\0') && (local_68 != (int64_t *******)0x0)) {
            FUN_00d50b20();
          }
          pVar15 = (void*)pcVar18;
          iVar21 = iVar21 + 1;
          bVar1 = iVar21 < iVar6;
        } while (iVar21 != iVar6);
      }
    }
    if ((byte)local_12c != '\0') {
      iVar6 = FUN_00c8d620();
      pvVar12 = _pthread_getspecific(pVar15);
      if (pvVar12 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01537fd0();
      iVar21 = *(int *)((int64_t)local_68 + 0xc);
      if (local_60 != '\0') {
        FUN_00d50b20();
      }
      if (iVar6 != iVar21) {
        pvVar12 = _pthread_getspecific(pVar15);
        if (pvVar12 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01537fd0();
        ppppppplVar11 = local_68;
        if (local_60 == '\0') {
          if (local_68 != (int64_t *******)0x0) {
            FUN_00d50b00();
            if ((local_60 != '\0') && (local_68 != (int64_t *******)0x0)) {
              FUN_00d50b20();
            }
            goto LAB_0167eb9e;
          }
        }
        else if (local_68 != (int64_t *******)0x0) {
LAB_0167eb9e:
          local_60 = '\0';
          local_68 = (int64_t *******)0x0;
          local_58 = ppppppplVar11;
          local_50 = 0xffffffff;
          local_48 = 0;
          local_50._4_4_ = 0;
          while( true ) {
            if (local_50._4_4_ != 0) {
              if (local_50._4_4_ < 1) {
                iVar6 = -local_50._4_4_;
              }
              else {
                iVar6 = (int)local_50 - local_50._4_4_;
                local_50 = CONCAT44(local_50._4_4_,iVar6);
                FUN_00d23690();
                local_48 = local_48 + local_50._4_4_;
                iVar6 = 0;
              }
              local_50 = CONCAT44(iVar6,(int)local_50);
            }
            lVar19 = (int64_t)(int)local_50;
            iVar6 = (int)local_50 + 1;
            local_50 = CONCAT44(local_50._4_4_,iVar6);
            if (*(int *)((int64_t)local_58 + 0xc) <= iVar6) break;
            pppppplVar16 = local_58[2];
            ppppppplVar11 = (int64_t *******)pppppplVar16[lVar19 + 1];
            local_88[0] = '\0';
            local_68 = ppppppplVar11;
            cVar4 = FUN_00d7a850();
            pVar15 = (void*)pppppplVar16;
            if ((local_88[0] != '\0') && (ppppppplVar11 != (int64_t *******)0x0)) {
              FUN_00d50b20();
            }
            if (cVar4 == '\0') {
              pvVar12 = _pthread_getspecific(pVar15);
              if (pvVar12 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_01733b90();
              uVar22 = FUN_00d8b910();
              FUN_016aea20(uVar22,"false && \"audio modification in graph not found in archive\"");
              if ((local_88[0] != '\0') && (ppppppplVar11 != (int64_t *******)0x0)) {
                FUN_00d50b20();
              }
              ppppppplVar11 = local_68;
              pvVar12 = _pthread_getspecific(pVar15);
              ppppppplVar20 = local_68;
              if ((pvVar12 != (void *)0x0) &&
                 (lVar19 = FUN_00e8b990(), ppppppplVar11 = ppppppplVar20, lVar19 != 0)) {
                ppppppplVar11 =
                     (int64_t *******)ppppppplVar20[(uint64_t)(*(uint *)(lVar19 + 0x154) & 1) + 4]
                ;
              }
              (*(*ppppppplVar11)[0x70])();
              local_40 = (int64_t *******)0x0;
            }
          }
          FUN_0049cc10();
          FUN_00d50b20();
        }
      }
    }
    if (local_140 != (int64_t *******)0x0) {
      FUN_00d50130();
      local_140 = (int64_t *******)0x0;
      if (local_138 != '\0') {
        FUN_00d50b20();
      }
      local_138 = '\0';
    }
    if (*(int64_t *)(this_ptr[6] + 0x20) != 0) {
      (**(code **)(*(int64_t *)(this_ptr[6] + 0x20) + 0x28))(g_0239011c);
    }
    plVar10 = this_ptr + 2;
    local_1b8 = 0;
    (**(code **)(this_ptr[2] + 0x10))();
    FUN_00d50b00();
    local_1b8 = '\x01';
    local_1c0 = plVar10;
    FUN_00df4f00(g_0239011c,g_02394234);
    ppppppplVar11 = local_68;
    if (local_60 == '\0') {
      if (((local_68 != (int64_t *******)0x0) && (FUN_00d50b00(), local_60 != '\0')) &&
         (local_68 != (int64_t *******)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_60 = '\0';
    }
    if ((local_1b8 != '\0') && (local_1c0 != (int64_t *)0x0)) {
      (**(code **)(*local_1c0 + 0x10))();
      FUN_00d50b20();
    }
    local_230 = local_118;
    local_228 = '\0';
    local_220 = local_120;
    local_210 = ppppppplVar11 + 2;
    if (ppppppplVar11 == (int64_t *******)0x0) {
      local_210 = (int64_t *******)0x0;
    }
    local_218 = '\0';
    local_208 = '\0';
    (**(code **)(*this_ptr + 0x388))(&local_210,&local_220);
    if ((local_208 != '\0') && (local_210 != (int64_t *******)0x0)) {
      (*(*local_210)[2])();
      FUN_00d50b20();
    }
    if ((local_218 != '\0') && (local_220 != (void*)0x0)) {
      FUN_00d50b20();
    }
    if ((local_228 != '\0') && (local_230 != (void*)0x0)) {
      FUN_00d50b20();
    }
    if (*(int64_t *)(this_ptr[6] + 0x20) != 0) {
      local_1a8 = 0;
      (**(code **)(*plVar10 + 0x10))();
      FUN_00d50b00();
      local_1a8 = '\x01';
      local_1b0 = plVar10;
      FUN_00df4f00(g_02394234,g_0239428c);
      ppppppplVar20 = local_68;
      if (local_60 == '\0') {
        if (((local_68 != (int64_t *******)0x0) && (FUN_00d50b00(), local_60 != '\0')) &&
           (local_68 != (int64_t *******)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_60 = '\0';
      }
      if ((local_1a8 != '\0') && (local_1b0 != (int64_t *)0x0)) {
        (**(code **)(*local_1b0 + 0x10))();
        FUN_00d50b20();
      }
      local_200 = ppppppplVar20 + 2;
      if (ppppppplVar20 == (int64_t *******)0x0) {
        local_200 = (int64_t *******)0x0;
      }
      local_1f8 = '\0';
      FUN_00cb1fa0();
      if ((local_1f8 != '\0') && (local_200 != (int64_t *******)0x0)) {
        (*(*local_200)[2])();
        FUN_00d50b20();
      }
      if (ppppppplVar20 != (int64_t *******)0x0) {
        FUN_00d50b20();
      }
    }
    if ((local_110 == 0) || (*(int *)(local_110 + 8) != 0)) {
      *(void*)((int64_t)this_ptr + 0x73) = 1;
    }
    if (*(int64_t *)(this_ptr[6] + 0x20) != 0) {
      (**(code **)(*(int64_t *)(this_ptr[6] + 0x20) + 0x28))(g_02390124);
    }
    *(void*)(this_ptr + 0xe) = 0;
    if (((local_e4 & 1) != 0) && (*(char *)((int64_t)this_ptr + 0x71) == '\0')) {
      *(void*)((int64_t)this_ptr + 0x71) = 1;
      FUN_00d403d0();
      local_1f0 = g_02725808;
      if (g_02725808 != 0) {
        FUN_00d50b00();
      }
      local_1e8 = '\x01';
      local_198 = 0;
      FUN_00d50b00();
      local_198 = '\x01';
      local_1e0 = 0;
      local_1d8 = '\0';
      local_1a0 = this_ptr;
      FUN_00d40470(&local_1e0,&local_1a0,1,3);
      if ((local_1d8 != '\0') && (local_1e0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_198 != '\0') && (local_1a0 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_1e8 != '\0') && (local_1f0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_60 != '\0') && (local_68 != (int64_t *******)0x0)) {
        FUN_00d50b20();
      }
    }
    local_40 = (int64_t *******)((uint64_t)local_40 & 0xffffffffffffff01);
    if (ppppppplVar11 != (int64_t *******)0x0) {
      FUN_00d50b20();
    }
  }
  if (((char)local_f8 != '\0') && (ppppppplVar23 != (int64_t *******)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_108 != '\0') && (local_c8 != (int64_t *******)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_100 != '\0') && (local_c0 != (int64_t *******)0x0)) {
    FUN_00d50b20();
  }
  if ((local_138 != '\0') && (local_140 != (int64_t *******)0x0)) {
    FUN_00d50b20();
  }
  if (local_128 != (void*)0x0) {
    FUN_00d50b20();
  }
  if (local_120 != (void*)0x0) {
    FUN_00d50b20();
  }
  if (local_118 != (void*)0x0) {
    FUN_00d50b20();
  }
LAB_0167c6ca:
  return (uint64_t)local_40 & 0xffffffff;
}

