// Function: FUN_016f7150
// Address: 016f7150
// Size: 7725 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


uint64_t FUN_016f7150(uint64_t param_1,int param_2)

{
  uint64_t uVar1;
  uint uVar2;
  bool bVar3;
  code *pcVar4;
  char cVar5;
  byte bVar6;
  uint uVar7;
  void *pvVar8;
  int extraout_var;
  int extraout_var_00;
  int64_t lVar9;
  uint64_t uVar10;
  double dVar11;
  uint64_t uVar12;
  uint64_t uVar13;
  uint64_t *puVar14;
  int64_t lVar15;
  void*puVar16;
  void* pVar17;
  int iVar18;
  void*puVar19;
  void*puVar20;
  uint64_t *puVar21;
  int64_t lVar22;
  uint64_t unaff_RBX;
  uint uVar23;
  void*arg1;
  int64_t this_ptr;
  uint uVar24;
  bool bVar25;
  uint64_t uVar26;
  uint64_t extraout_XMM0_Qa;
  double dVar27;
  double dVar28;
  double dVar29;
  uint64_t extraout_XMM0_Qa_00;
  uint64_t extraout_XMM0_Qa_01;
  uint64_t extraout_XMM0_Qa_02;
  double dVar30;
  double dVar31;
  uint64_t extraout_XMM0_Qa_03;
  uint64_t extraout_XMM0_Qa_04;
  uint64_t extraout_XMM0_Qa_05;
  double dVar32;
  double dVar33;
  double dVar34;
  uint64_t extraout_XMM0_Qa_06;
  double dVar35;
  uint64_t local_218;
  uint8_t local_210;
  uint64_t local_208;
  uint8_t local_200;
  double local_1f8;
  uint8_t local_1f0;
  double local_1e8;
  uint8_t local_1e0;
  double local_1d8;
  uint8_t local_1d0;
  double local_1c8;
  uint8_t local_1c0;
  uint64_t local_1b8;
  uint8_t local_1b0;
  uint64_t local_1a8;
  uint8_t local_1a0;
  uint64_t local_198;
  uint8_t local_190;
  void*local_188;
  uint8_t local_180;
  uint64_t local_178;
  uint64_t local_170;
  uint64_t local_168;
  uint64_t local_160;
  double local_158;
  uint64_t local_150;
  int64_t local_148;
  char local_140;
  uint32_t local_134;
  uint64_t local_130;
  uint64_t local_d0;
  int iStack_b4;
  double local_b0;
  uint64_t local_a8;
  uint32_t local_84;
  double local_80;
  int64_t local_78;
  double local_70;
  uint64_t local_68;
  uint64_t local_60;
  char local_58;
  uint64_t local_48;
  char local_40 [8];
  void*local_38;
  
  if (param_2 == 0) {
    uVar10 = CONCAT71((int7)((uint64_t)unaff_RBX >> 8),1);
    goto LAB_016f8f9e;
  }
  local_218 = *arg1;
  local_210 = 0;
  FUN_016ebbb0(param_1,&local_218);
  pVar17 = (void*)param_1;
  if ((local_40[0] == '\0') && (local_48 != 0)) {
    FUN_00d50b00();
  }
  local_78 = local_48;
  if (*(int64_t *)(this_ptr + 0x78) != 0) {
    pvVar8 = _pthread_getspecific(pVar17);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_019079b0();
    pvVar8 = _pthread_getspecific(pVar17);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_60 = FUN_01909dc0();
    if (((extraout_var != 0) && (local_60 >> 0x20 != 0)) && (cVar5 = FUN_00e7c020(), cVar5 != '\0'))
    {
      if (local_78 != 0) {
        pvVar8 = _pthread_getspecific(pVar17);
        if (pvVar8 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_019079b0();
        pvVar8 = _pthread_getspecific(pVar17);
        if ((pvVar8 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
          pVar17 = (void*)local_78;
        }
        uVar10 = FUN_01909dc0();
        if (((extraout_var_00 == 0) || (uVar10 >> 0x20 == 0)) ||
           (cVar5 = FUN_00e7c020(), cVar5 == '\0')) goto LAB_016f7368;
      }
      if (*(int64_t *)(this_ptr + 0x78) != 0) {
        FUN_00d64850();
        if (*(int64_t *)(this_ptr + 0x78) != 0) {
          *(int64_t *)(this_ptr + 0x78) = 0;
          FUN_00d50b20();
        }
        FUN_00d64910();
      }
    }
  }
LAB_016f7368:
  local_60 = CONCAT44(local_60._4_4_,1);
  pvVar8 = _pthread_getspecific(pVar17);
  if (pvVar8 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0190a000();
  dVar11 = (double)FUN_00e7c4f0();
  FUN_00e7c2a0();
  local_84 = 0xffffffff;
  pvVar8 = _pthread_getspecific(pVar17);
  puVar19 = (void*)(this_ptr + 0x50);
  local_38 = puVar19;
  if (pvVar8 != (void *)0x0) {
    FUN_00e8b990();
  }
  pVar17 = (void*)puVar19;
  cVar5 = FUN_018fe5d0();
  if (cVar5 == '\0') {
    local_208 = *arg1;
    local_200 = 0;
    FUN_016f56f0();
    if ((local_40[0] == '\0') && (dVar11 != 0.0)) {
      FUN_00d50b00();
    }
    pvVar8 = _pthread_getspecific(pVar17);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar10 = FUN_01909dc0();
    pvVar8 = _pthread_getspecific(pVar17);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    dVar28 = (double)FUN_018fcb10();
    pvVar8 = _pthread_getspecific(pVar17);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01901340();
    pvVar8 = _pthread_getspecific(pVar17);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar12 = FUN_019079b0();
    if ((local_40[0] != '\0') && (dVar11 != 0.0)) {
      FUN_00d50b20();
    }
    FUN_016cbad0();
    FUN_00e7b820();
    pvVar8 = _pthread_getspecific(pVar17);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_80 = (double)FUN_018fcb10();
    iStack_b4 = (int)(uVar10 >> 0x20);
    local_d0 = uVar12;
    if (local_78 == 0) {
LAB_016f794d:
      pvVar8 = _pthread_getspecific(pVar17);
      if (pvVar8 != (void *)0x0) {
        FUN_00e8b990();
      }
      puVar20 = &local_84;
      FUN_0165cf20(puVar20,0);
      pvVar8 = _pthread_getspecific((void*)puVar20);
      if (pvVar8 != (void *)0x0) {
        FUN_00e8b990();
      }
      puVar20 = &local_84;
      uVar26 = FUN_0165cf20(puVar20,0);
      pVar17 = (void*)puVar20;
      FUN_016d62b0(extraout_XMM0_Qa,uVar26);
      local_70 = dVar11;
      pvVar8 = _pthread_getspecific(pVar17);
      if (pvVar8 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar11 = (double)FUN_018fd630();
      pvVar8 = _pthread_getspecific(pVar17);
      if (pvVar8 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_b0 = (double)FUN_018fd630();
      dVar29 = (double)FUN_00e7c860();
      local_168 = uVar12;
      puVar19 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      puVar21 = (uint64_t *)&g_02572358;
      *puVar19 = &g_02572358;
      pcVar4 = g_02572370;
      (*g_02572370)();
      dVar11 = g_023b4df8 / dVar11;
      dVar29 = (g_023b4df8 / local_b0) * dVar29;
      bVar25 = false;
      while( true ) {
        if (bVar25) {
          FUN_00e7b970();
          FUN_00e7bdc0();
          local_60 = uVar10;
          dVar27 = (double)FUN_00e7c860();
          dVar27 = dVar27 * dVar29 + local_b0;
        }
        else {
          FUN_00e7b820();
          local_60 = uVar10;
          if (((uVar10 >> 0x20 == 0) || (iStack_b4 == 0)) || (cVar5 = FUN_00e7c020(), cVar5 == '\0')
             ) {
            pvVar8 = _pthread_getspecific((void*)puVar21);
            if (pvVar8 != (void *)0x0) {
              FUN_00e8b990();
            }
            dVar27 = (double)FUN_018fcb10();
          }
          else {
            FUN_00e7b970();
            dVar27 = (double)FUN_00e7c860();
            dVar27 = dVar28 - dVar27 * dVar11;
          }
        }
        FUN_01907b60();
        local_48 = local_60;
        if (local_58 == '\0') {
          if (local_60 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_58 = '\0';
        }
        local_40[0] = '\0';
        FUN_00d21140();
        if ((local_40[0] != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
        if (local_48 != 0) {
          FUN_00d50b20();
        }
        if ((local_58 != '\0') && (local_60 != 0)) {
          FUN_00d50b20();
        }
        pVar17 = (void*)puVar21;
        if (local_80 < dVar27) break;
        FUN_00e7b820();
        local_60 = uVar10;
        if ((uVar10 >> 0x20 != 0) && (local_d0._4_4_ != 0)) {
          bVar6 = FUN_00e7c020();
          puVar21 = (uint64_t *)CONCAT71((int7)((uint64_t)puVar21 >> 8),!bVar25);
          if ((bVar6 & !bVar25) == 1) {
            FUN_00d23340();
            local_60 = CONCAT71(local_60._1_7_,local_40[0]);
            puVar21 = &local_60;
            puVar14 = (uint64_t *)local_40;
            if (local_40[0] == '\0') {
              puVar14 = puVar21;
            }
            *(char *)puVar14 = '\0';
            if ((local_40[0] != '\0') && (uVar10 != 0)) {
              FUN_00d50b20();
            }
            pvVar8 = _pthread_getspecific((void*)puVar21);
            if (pvVar8 != (void *)0x0) {
              FUN_00e8b990();
            }
            local_178 = FUN_019079b0();
            if (((char)local_60 != '\0') && (uVar10 != 0)) {
              FUN_00d50b20();
            }
            FUN_00d23340();
            local_60 = CONCAT71(local_60._1_7_,local_40[0]);
            puVar21 = &local_60;
            puVar14 = (uint64_t *)local_40;
            if (local_40[0] == '\0') {
              puVar14 = puVar21;
            }
            *(char *)puVar14 = '\0';
            if ((local_40[0] != '\0') && (uVar10 != 0)) {
              FUN_00d50b20();
            }
            pvVar8 = _pthread_getspecific((void*)puVar21);
            if (pvVar8 != (void *)0x0) {
              FUN_00e8b990();
            }
            local_b0 = (double)FUN_01907950();
            if (((char)local_60 != '\0') && (uVar10 != 0)) {
              FUN_00d50b20();
            }
            bVar25 = true;
          }
        }
        FUN_00e7b820();
      }
      uVar12 = FUN_00e7bdb0();
      dVar11 = local_70;
      if (local_78 == 0) {
LAB_016f8242:
        uVar13 = local_48;
        dVar28 = *(double *)puVar19[2];
        if (dVar28 != 0.0) {
          FUN_00d50b00();
        }
        local_80 = dVar28;
        pvVar8 = _pthread_getspecific(pVar17);
        if (pvVar8 != (void *)0x0) {
          FUN_00e8b990();
        }
        pVar17 = 0;
        FUN_018fef60(0,uVar10);
        local_160 = uVar12;
        if ((((local_40[0] == '\0') && (local_48 != 0)) && (FUN_00d50b00(), local_40[0] != '\0')) &&
           (local_48 != 0)) {
          FUN_00d50b20();
        }
        if (dVar11 == 0.0) {
LAB_016f8d75:
          local_1b8 = *arg1;
          local_1b0 = 0;
          local_68 = uVar13;
          pvVar8 = _pthread_getspecific(pVar17);
          uVar10 = local_168;
          if ((pvVar8 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
            pVar17 = SUB84(local_80,0);
          }
          uVar26 = FUN_019079b0();
          FUN_016ec340(extraout_XMM0_Qa_06,uVar26);
          uVar26 = FUN_00e7bdb0();
          if (local_78 == 0) {
            local_48 = 0;
            bVar3 = false;
          }
          else {
            pvVar8 = _pthread_getspecific(pVar17);
            if (pvVar8 != (void *)0x0) {
              FUN_00e8b990();
            }
            pVar17 = 0;
            FUN_018fef60(0,uVar10);
            if (local_48 == 0) {
              bVar3 = false;
            }
            else {
              bVar3 = true;
              if (((local_40[0] == '\0') && (FUN_00d50b00(), local_40[0] != '\0')) &&
                 (local_48 != 0)) {
                FUN_00d50b20();
              }
            }
            pvVar8 = _pthread_getspecific(pVar17);
            if (pvVar8 != (void *)0x0) {
              FUN_00e8b990();
            }
            uVar26 = FUN_01909dc0();
          }
          local_1a8 = local_68;
          local_1a0 = 0;
          local_190 = 0;
          local_180 = 0;
          local_198 = local_48;
          local_188 = puVar19;
          FUN_016e9760(0,&local_198,&local_188,uVar26);
          uVar13 = local_68;
          bVar25 = false;
          if ((bVar3) && (local_48 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_a8 = FUN_00e7bcc0();
          local_1f8 = dVar11;
          local_1f0 = 0;
          FUN_016f5090();
          uVar26 = FUN_00e7bdb0();
          local_150 = FUN_00e7c8b0(uVar26,1);
          pVar17 = (void*)(local_150 >> 0x20);
          if ((local_150 >> 0x20 == 0) || (cVar5 = FUN_00e7c630(), cVar5 == '\0')) {
            local_a8 = local_150;
          }
          pvVar8 = _pthread_getspecific(pVar17);
          if (pvVar8 != (void *)0x0) {
            FUN_00e8b990();
          }
          puVar20 = &local_84;
          local_48 = FUN_0165cf20(puVar20,0);
          pVar17 = (void*)puVar20;
          local_60 = CONCAT44(local_60._4_4_,1);
          FUN_00e7c280();
          pvVar8 = _pthread_getspecific(pVar17);
          if (pvVar8 != (void *)0x0) {
            FUN_00e8b990();
          }
          uVar26 = FUN_0165d690();
          local_130 = FUN_016cbad0(uVar26,0);
          uVar26 = extraout_XMM0_Qa_00;
          if (local_a8._4_4_ != 0) {
            if (local_130 >> 0x20 == 0) {
              local_48 = *(uint64_t *)(this_ptr + 0x68);
            }
            else {
              cVar5 = FUN_00e7c020();
              iVar18 = local_a8._4_4_;
              if (cVar5 != '\0') {
                local_a8 = local_130;
                iVar18 = (int)(local_130 >> 0x20);
              }
              local_48 = *(uint64_t *)(this_ptr + 0x68);
              uVar26 = extraout_XMM0_Qa_01;
              if (iVar18 == 0) goto LAB_016f84eb;
            }
            if (local_48 >> 0x20 != 0) {
              cVar5 = FUN_00e7c020();
              uVar26 = extraout_XMM0_Qa_02;
              if (cVar5 != '\0') {
                local_a8 = *(uint64_t *)(this_ptr + 0x68);
              }
            }
          }
LAB_016f84eb:
          uVar10 = local_48;
          local_1e8 = dVar11;
          local_1e0 = 0;
          uVar26 = FUN_016f9740(uVar26,local_a8);
          local_1d8 = dVar11;
          local_1d0 = 0;
          FUN_016d0130(uVar26,&local_1d8);
          if ((local_40[0] == '\0') && (local_48 != 0)) {
            FUN_00d50b00();
          }
          local_134 = 4;
          uVar12 = FUN_00e7c4f0();
          FUN_00e7bac0();
          uVar7 = FUN_00e7cea0();
          pVar17 = *(void* *)(local_48 + 0xc);
          uVar23 = (pVar17 - 1) - uVar7;
          uVar24 = 1;
          if (1 < (int)pVar17) {
            uVar24 = pVar17 - 1;
          }
          uVar2 = uVar23;
          if ((int)uVar23 < 0) {
            uVar2 = 0;
          }
          if ((int)uVar23 >= 0) {
            uVar24 = uVar7;
          }
          lVar9 = *(int64_t *)(*(int64_t *)(local_48 + 0x10) + (uint64_t)uVar2 * 8);
          if (lVar9 != 0) {
            FUN_00d50b00();
          }
          pvVar8 = _pthread_getspecific(pVar17);
          if (pvVar8 != (void *)0x0) {
            FUN_00e8b990();
          }
          local_140 = '\0';
          local_148 = lVar9;
          dVar11 = (double)FUN_018fde50();
          if ((local_140 != '\0') && (local_148 != 0)) {
            FUN_00d50b20();
          }
          dVar29 = (double)FUN_00e7c860();
          uVar7 = *(int *)(local_48 + 0xc) - uVar24;
          local_170 = (uint64_t)uVar7;
          dVar28 = *(double *)(local_48 + 0x10);
          uVar1 = *(uint64_t *)((int64_t)dVar28 + (int64_t)(int)uVar7 * 8);
          if (uVar1 != 0) {
            FUN_00d50b00();
          }
          pvVar8 = _pthread_getspecific(SUB84(dVar28,0));
          if ((pvVar8 != (void *)0x0) && (lVar15 = FUN_00e8b990(), lVar15 != 0)) {
            dVar28 = local_80;
          }
          dVar27 = (double)FUN_01907950();
          pvVar8 = _pthread_getspecific(SUB84(dVar28,0));
          if (pvVar8 != (void *)0x0) {
            FUN_00e8b990();
          }
          dVar30 = (double)FUN_01907950();
          pVar17 = SUB84(dVar28,0);
          if (dVar27 - dVar30 <= g_023e16a0) {
            bVar3 = true;
            local_48 = uVar12;
          }
          else {
            local_158 = (double)FUN_016cd860();
            dVar31 = (double)FUN_00e7c860();
            if (uVar13 != uVar1) {
              if (uVar1 != 0) {
                FUN_00d50b00();
              }
              bVar25 = uVar13 != 0;
              uVar13 = uVar1;
              if (bVar25) {
                FUN_00d50b20();
              }
            }
            local_68 = uVar13;
            puVar16 = (void*)FUN_00e8fc40();
            FUN_00d4ff40();
            *puVar16 = &g_02572358;
            (*pcVar4)();
            uVar13 = local_68;
            pvVar8 = _pthread_getspecific(SUB84(dVar28,0));
            if (pvVar8 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_019079b0();
            pvVar8 = _pthread_getspecific(SUB84(dVar28,0));
            if (pvVar8 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_01907950();
            FUN_01907b60();
            uVar12 = local_60;
            if (local_58 == '\0') {
              if (local_60 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_58 = '\0';
            }
            local_40[0] = '\0';
            FUN_00d21140();
            if ((local_40[0] != '\0') && (uVar12 != 0)) {
              FUN_00d50b20();
            }
            if (uVar12 != 0) {
              FUN_00d50b20();
            }
            if ((local_58 != '\0') && (local_60 != 0)) {
              FUN_00d50b20();
            }
            pvVar8 = _pthread_getspecific(SUB84(dVar28,0));
            if ((pvVar8 != (void *)0x0) && (lVar15 = FUN_00e8b990(), lVar15 != 0)) {
              dVar28 = local_70;
            }
            uVar12 = FUN_01909dc0();
            pvVar8 = _pthread_getspecific(SUB84(dVar28,0));
            if (pvVar8 != (void *)0x0) {
              FUN_00e8b990();
            }
            local_60 = FUN_019079b0();
            local_48._4_4_ = (int)(uVar12 >> 0x20);
            uVar26 = extraout_XMM0_Qa_03;
            if (((local_48._4_4_ != 0) && (local_60 >> 0x20 != 0)) &&
               (cVar5 = FUN_00e7c000(), uVar26 = extraout_XMM0_Qa_04, cVar5 != '\0')) {
              local_1c8 = local_70;
              local_1c0 = 0;
              pvVar8 = _pthread_getspecific(SUB84(dVar28,0));
              if (pvVar8 != (void *)0x0) {
                FUN_00e8b990();
              }
              uVar26 = FUN_019079b0();
              uVar26 = FUN_016ec340(extraout_XMM0_Qa_05,uVar26);
            }
            pVar17 = SUB84(dVar28,0);
            local_48 = uVar12;
            if (1 < (int)uVar24) {
              dVar11 = g_023b4df8 / dVar11;
              dVar32 = g_024119d0;
              if (local_158 * g_023b1e98 <= g_024119d0) {
                dVar32 = local_158 * g_023b1e98;
              }
              dVar31 = dVar31 * g_023b4df8;
              uVar12 = 1;
              do {
                pVar17 = SUB84(dVar28,0);
                pvVar8 = _pthread_getspecific(pVar17);
                if (pvVar8 != (void *)0x0) {
                  FUN_00e8b990();
                }
                dVar33 = (double)FUN_01907950();
                pvVar8 = _pthread_getspecific(pVar17);
                if (pvVar8 != (void *)0x0) {
                  FUN_00e8b990();
                }
                dVar28 = (double)FUN_01907950();
                pvVar8 = _pthread_getspecific(pVar17);
                if ((pvVar8 != (void *)0x0) && (lVar15 = FUN_00e8b990(), lVar15 != 0)) {
                  pVar17 = SUB84(local_80,0);
                }
                dVar34 = (double)FUN_01907950();
                dVar35 = (double)(int)uVar12 / (double)(int)uVar24;
                dVar33 = dVar11 * dVar29 * (double)(int)uVar24 * dVar35 + dVar33;
                dVar33 = (((dVar27 - dVar30) * dVar35 + dVar28) - dVar33) * dVar35 * dVar35 + dVar33
                ;
                if (dVar34 - dVar33 < dVar31 / dVar32) {
                  bVar3 = true;
                  bVar25 = true;
                  if (puVar16 != (void*)0x0) goto LAB_016f8d27;
                  goto LAB_016f8d33;
                }
                dVar28 = *(double *)(uVar10 + 0x10);
                pvVar8 = _pthread_getspecific(SUB84(dVar28,0));
                if (pvVar8 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_019079b0();
                FUN_01907b60(dVar33);
                local_48 = local_60;
                if (local_58 == '\0') {
                  if (local_60 != 0) {
                    FUN_00d50b00();
                  }
                }
                else {
                  local_58 = '\0';
                }
                local_40[0] = '\0';
                uVar26 = FUN_00d21140();
                if ((local_40[0] != '\0') && (local_48 != 0)) {
                  uVar26 = FUN_00d50b20();
                }
                if (local_48 != 0) {
                  uVar26 = FUN_00d50b20();
                }
                if ((local_58 != '\0') && (local_60 != 0)) {
                  uVar26 = FUN_00d50b20();
                }
                pVar17 = SUB84(dVar28,0);
                uVar12 = uVar12 + 1;
              } while (uVar24 != uVar12);
            }
            uVar24 = *(uint *)((int64_t)puVar16 + 0xc);
            if ((int)uVar24 < 1) {
              bVar25 = false;
            }
            else {
              lVar15 = (uint64_t)uVar24 + 1;
              do {
                uVar24 = uVar24 - 1;
                lVar22 = puVar16[2];
                local_48 = *(uint64_t *)(lVar22 + (uint64_t)uVar24 * 8);
                if (local_48 != 0) {
                  uVar26 = FUN_00d50b00();
                }
                pVar17 = (void*)lVar22;
                local_40[0] = '\0';
                uVar26 = FUN_00d23370(uVar26,0);
                if ((local_40[0] != '\0') && (local_48 != 0)) {
                  uVar26 = FUN_00d50b20();
                }
                if (local_48 != 0) {
                  uVar26 = FUN_00d50b20();
                }
                lVar15 = lVar15 + -1;
              } while (1 < lVar15);
              uVar13 = local_68;
              bVar25 = false;
            }
LAB_016f8d27:
            bVar3 = bVar25;
            FUN_00d50b20();
          }
LAB_016f8d33:
          if (uVar1 != 0) {
            FUN_00d50b20();
          }
          if (lVar9 != 0) {
            FUN_00d50b20();
          }
          if (uVar10 != 0) {
            FUN_00d50b20();
          }
          bVar25 = true;
          dVar11 = local_70;
          if (!bVar3) goto LAB_016f8d75;
        }
        if (uVar13 != 0) {
          FUN_00d50b20();
        }
        if (local_80 != 0.0) {
          FUN_00d50b20();
        }
        if (puVar19 == (void*)0x0) goto LAB_016f8f6f;
      }
      else {
        local_80 = local_80 + dVar29 * g_024119f0;
        while (*(int *)((int64_t)puVar19 + 0xc) != 0) {
          FUN_00d23340();
          local_60 = CONCAT71(local_60._1_7_,local_40[0]);
          puVar21 = &local_60;
          puVar14 = (uint64_t *)local_40;
          if (local_40[0] == '\0') {
            puVar14 = puVar21;
          }
          *(char *)puVar14 = '\0';
          if ((local_40[0] != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
          pvVar8 = _pthread_getspecific((void*)puVar21);
          if (pvVar8 != (void *)0x0) {
            FUN_00e8b990();
          }
          dVar28 = (double)FUN_01907950();
          if (((char)local_60 != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
          if (dVar28 <= local_80) {
            if (*(int *)((int64_t)puVar19 + 0xc) != 0) {
              FUN_00d23340();
              puVar21 = &local_60;
              puVar14 = (uint64_t *)local_40;
              if (local_40[0] == '\0') {
                puVar14 = puVar21;
              }
              local_60 = CONCAT71(local_60._1_7_,local_40[0]);
              *(void*)puVar14 = 0;
              if ((local_40[0] != '\0') && (local_48 != 0)) {
                FUN_00d50b20();
              }
              pVar17 = (void*)puVar21;
              pvVar8 = _pthread_getspecific(pVar17);
              if (pvVar8 != (void *)0x0) {
                FUN_00e8b990();
              }
              uVar12 = FUN_019079b0();
              FUN_00e7b820();
              if (((char)local_60 != '\0') && (local_48 != 0)) {
                FUN_00d50b20();
              }
              pvVar8 = _pthread_getspecific(pVar17);
              if ((pvVar8 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
                pVar17 = (void*)local_78;
              }
              local_60 = FUN_01909dc0();
              FUN_00e7b970();
              local_48 = uVar12;
              goto LAB_016f8242;
            }
            break;
          }
          FUN_00d23740();
        }
        bVar25 = true;
      }
      FUN_00d50b20();
    }
    else {
      pvVar8 = _pthread_getspecific(pVar17);
      if ((pvVar8 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
        pVar17 = (void*)local_78;
      }
      uVar12 = FUN_01909dc0();
      puVar19 = (void*)*local_38;
      pvVar8 = _pthread_getspecific(pVar17);
      if (pvVar8 != (void *)0x0) {
        puVar19 = (void*)*local_38;
        lVar9 = FUN_00e8b990();
        if (lVar9 != 0) {
          puVar19 = (void*)puVar19[(uint64_t)(*(uint *)(lVar9 + 0x154) & 1) + 4];
        }
      }
      local_80 = (double)FUN_018fcb10();
      FUN_00e7b820();
      FUN_00e7b970();
      local_60 = uVar12;
      if (uVar12 >> 0x20 == 0) {
LAB_016f7805:
        pvVar8 = _pthread_getspecific(pVar17);
        if (pvVar8 != (void *)0x0) {
          FUN_00e8b990();
        }
        puVar20 = &local_84;
        FUN_0165cf20(puVar20,0);
        pVar17 = (void*)puVar20;
        local_60 = CONCAT44(local_60._4_4_,1);
        FUN_00e7c280();
        pvVar8 = _pthread_getspecific(pVar17);
        if (pvVar8 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0165d690();
        uVar13 = FUN_016cbad0();
        FUN_00e7c2a0();
        local_60 = uVar13;
        FUN_00e7b970();
        local_d0 = uVar12;
        if (((uVar12 >> 0x20 != 0) && (iStack_b4 != 0)) && (cVar5 = FUN_00e7c020(), cVar5 != '\0'))
        {
          local_d0 = uVar10;
        }
        goto LAB_016f794d;
      }
      cVar5 = FUN_00e7c6b0();
      bVar25 = true;
      if (cVar5 != '\0') goto LAB_016f7805;
    }
LAB_016f8f6f:
    if (dVar11 != 0.0) {
      FUN_00d50b20();
    }
    if (!bVar25) goto LAB_016f8f8e;
    uVar10 = 0;
  }
  else {
    pvVar8 = _pthread_getspecific(pVar17);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    pvVar8 = _pthread_getspecific(pVar17);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar26 = FUN_019012b0();
    if (local_40[0] == '\0') {
      if (dVar11 != 0.0) {
        uVar26 = FUN_00d50b00();
      }
    }
    else {
      local_40[0] = '\0';
    }
    dVar28 = (double)FUN_018fde50(uVar26,&local_84);
    pvVar8 = _pthread_getspecific(pVar17);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0190a000();
    local_60 = FUN_00e7c4f0();
    dVar29 = (double)FUN_00e7c860();
    if (dVar11 != 0.0) {
      FUN_00d50b20();
    }
    if ((local_40[0] != '\0') && (dVar11 != 0.0)) {
      FUN_00d50b20();
    }
    puVar19 = (void*)*local_38;
    pvVar8 = _pthread_getspecific(pVar17);
    if (pvVar8 != (void *)0x0) {
      puVar19 = (void*)*local_38;
      lVar9 = FUN_00e8b990();
      if (lVar9 != 0) {
        puVar19 = (void*)puVar19[(uint64_t)(*(uint *)(lVar9 + 0x154) & 1) + 4];
      }
    }
    FUN_01901eb0((g_023b4df8 / dVar28) * dVar29);
LAB_016f8f8e:
    uVar10 = CONCAT71((int7)((uint64_t)puVar19 >> 8),1);
  }
  if (local_78 != 0) {
    FUN_00d50b20();
  }
LAB_016f8f9e:
  return uVar10 & 0xffffffff;
}

