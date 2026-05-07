// Function: FUN_01a4f320
// Address: 01a4f320
// Size: 5975 bytes
// Class: Unknown

uint64_t FUN_01a4f320(uint64_t param_1,int64_t *param_2)

{
  bool bVar1;
  bool bVar2;
  int64_t lVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  uint32_t uVar9;
  void *pvVar10;
  int64_t *plVar11;
  int64_t lVar12;
  uint64_t uVar13;
  int64_t **pplVar14;
  int64_t *plVar15;
  void* pVar16;
  int64_t *plVar17;
  int64_t **pplVar18;
  int64_t *plVar19;
  int64_t *plVar20;
  uint64_t uVar21;
  int64_t *arg1;
  int64_t this_ptr;
  undefined7 uVar22;
  uint64_t uVar23;
  uint64_t extraout_XMM0_Qa;
  uint64_t extraout_XMM0_Qa_00;
  uint64_t extraout_XMM0_Qa_01;
  uint64_t uVar24;
  uint64_t extraout_XMM0_Qa_02;
  uint64_t uVar25;
  double dVar26;
  int64_t local_398;
  char local_390;
  int64_t local_388;
  char local_380;
  int64_t local_378;
  char local_370;
  int64_t local_368;
  char local_360;
  uint64_t local_358;
  int64_t *local_350;
  int64_t *local_348;
  char local_340;
  int64_t *local_338;
  char local_330;
  int64_t *local_328;
  char local_320;
  int64_t *local_318;
  char local_310;
  int64_t *local_308;
  char local_300;
  int64_t *local_2f8;
  char local_2f0;
  int64_t *local_2e8;
  char local_2e0;
  int64_t *local_2d8;
  char local_2d0;
  int64_t *local_2c8;
  char local_2c0;
  int64_t *local_2b8;
  char local_2b0;
  int64_t *local_2a8;
  char local_2a0;
  int64_t *local_298;
  char local_290;
  int64_t *local_288;
  char local_280;
  int64_t *local_278;
  char local_270;
  int64_t local_268;
  char local_260;
  int64_t *local_258;
  char local_250;
  int64_t local_248;
  char local_240;
  int64_t local_238;
  char local_230;
  int64_t *local_228;
  char local_220;
  int64_t local_218;
  char local_210;
  int64_t local_208;
  char local_200;
  int64_t local_1f8;
  char local_1f0;
  int64_t local_1e8;
  char local_1e0;
  int64_t local_1d8;
  char local_1d0;
  int64_t local_1c8;
  char local_1c0;
  int64_t *local_1b8;
  int64_t *local_1a0;
  int64_t *local_198;
  int64_t *local_190;
  char local_188;
  int64_t local_180;
  char local_178;
  int64_t *local_170;
  char local_168;
  int64_t local_160;
  char local_158;
  int64_t local_150;
  char local_148;
  int64_t *local_138;
  int64_t *local_130;
  int64_t *local_128;
  uint64_t local_120;
  int local_118;
  uint64_t local_88;
  int64_t *local_80;
  double local_78;
  int64_t *local_70;
  char local_68;
  undefined7 uStack_67;
  char local_60;
  int64_t *local_58;
  int64_t *local_50;
  char local_48;
  uint32_t local_3c;
  int64_t *local_38;
  
  if (*param_2 == 0) {
    uVar21 = 0;
    goto LAB_01a4f4d3;
  }
  uVar23 = FUN_01a58dc0();
  if (local_138 == (int64_t *)0x0) {
    bVar2 = true;
    bVar1 = false;
LAB_01a4f42f:
    local_88 = 0;
    local_58 = (int64_t *)0x0;
LAB_01a4f43b:
    local_218 = *arg1;
    local_210 = '\0';
    local_208 = *param_2;
    local_200 = '\0';
    uVar8 = FUN_01a58d30(uVar23,&local_208);
    uVar21 = (uint64_t)uVar8;
    if ((local_200 != '\0') && (local_208 != 0)) {
      FUN_00d50b20();
    }
    if ((local_210 != '\0') && (local_218 != 0)) {
      FUN_00d50b20();
    }
    bVar4 = bVar1;
    bVar5 = bVar2;
    if ((char)local_88 != '\0') {
LAB_01a4f4b3:
      bVar2 = bVar5;
      bVar1 = bVar4;
      if (local_58 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
    }
  }
  else {
    if ((((char)local_130 == '\0') && (FUN_00d50b00(), (char)local_130 != '\0')) &&
       (local_138 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    cVar6 = (**(code **)("/System/Library/Frameworks/ImageIO.framework/Versions/A/ImageIO" +
                        *local_138))();
    if (cVar6 != '\0') {
      iVar7 = FUN_01d3a5a0();
      bVar1 = true;
      uVar23 = extraout_XMM0_Qa;
      if ((iVar7 != 1) || (iVar7 = FUN_01d3b630(), uVar23 = extraout_XMM0_Qa_00, iVar7 != 1)) {
        bVar2 = false;
        goto LAB_01a4f42f;
      }
      uVar23 = (**(code **)(*local_138 + 0xe40))();
      local_58 = local_138;
      plVar17 = local_138;
      if (local_138 == (int64_t *)0x0) {
        local_58 = (int64_t *)0x0;
        local_88 = 0;
        plVar15 = (int64_t *)0x0;
      }
      else {
        if ((char)local_130 == '\0') {
          plVar11 = (int64_t *)FUN_00d50b00();
          uVar23 = extraout_XMM0_Qa_01;
        }
        else {
          local_130._0_1_ = '\0';
          plVar11 = local_138;
        }
        plVar15 = (int64_t *)
                  CONCAT71((int7)((uint64_t)local_138 >> 8),
                           *(int *)((int64_t)local_138 + 0xc) != 0);
        local_88 = CONCAT71((int7)((uint64_t)plVar11 >> 8),1);
      }
      pVar16 = (void*)plVar17;
      if (((char)local_130 != '\0') && (local_138 != (int64_t *)0x0)) {
        uVar23 = FUN_00d50b20();
      }
      if ((char)plVar15 == '\0') {
        bVar2 = false;
        goto LAB_01a4f43b;
      }
      (**(code **)(*local_138 + 0xa00))();
      pvVar10 = _pthread_getspecific(pVar16);
      if (pvVar10 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012caf10();
      local_198 = local_138;
      if ((char)local_130 == '\0') {
        if (((local_138 != (int64_t *)0x0) && (FUN_00d50b00(), (char)local_130 != '\0')) &&
           (local_138 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_130._0_1_ = '\0';
      }
      if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      local_70 = (int64_t *)0x0;
      local_348 = local_58;
      local_340 = '\0';
      FUN_012a1f90();
      if ((local_340 != '\0') && (local_348 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      local_3c = 0;
      (**(code **)("/usr/lib/libobjc.A.dylib" + *local_138 + 0x18))();
      FUN_01d3abf0();
      local_1b8 = (int64_t *)FUN_01e466c0();
      local_3c = 0;
      (**(code **)(*local_138 + 0xeb0))();
      local_3c = 0;
      local_358 = (**(code **)(*local_138 + 0x930))(local_1b8);
      local_3c = 0;
      local_1b8 = (int64_t *)((uint64_t)local_1b8 & 0xffffffff00000000);
      plVar17 = local_138;
LAB_01a4f680:
      plVar19 = local_138;
      (**(code **)(*plVar17 + 0x658))();
      plVar11 = (int64_t *)*arg1;
      plVar20 = local_138;
      if (plVar11 != local_138) {
        cVar6 = (char)arg1[1];
        plVar15 = (int64_t *)CONCAT71((int7)((uint64_t)plVar15 >> 8),cVar6);
        if ((char)local_130 != '\0') {
          *arg1 = (int64_t)local_138;
          if ((cVar6 != '\0') && (plVar11 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          goto LAB_01a4f6dc;
        }
        if (local_138 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        *arg1 = (int64_t)local_138;
        if ((cVar6 != '\0') && (plVar11 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
LAB_01a4f721:
        *(void*)(arg1 + 1) = 1;
        if (*arg1 == 0) goto LAB_01a50984;
LAB_01a4f732:
        iVar7 = FUN_01d3a5a0();
        if (iVar7 == 6) {
          if (((char)local_130 != '\0') && (local_138 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          goto LAB_01a509ba;
        }
        uVar8 = *(uint *)((int64_t)local_58 + 0xc);
        if (((char)local_130 != '\0') && (local_138 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        plVar20 = (int64_t *)(uint64_t)uVar8;
        if (uVar8 == 0) goto LAB_01a509ba;
        iVar7 = FUN_01d3a5a0();
        if (iVar7 == 5) {
          (**(code **)(*plVar17 + 0x958))();
          cVar6 = (**(code **)(*local_138 + 0x3c8))();
          uVar22 = (undefined7)((uint64_t)plVar15 >> 8);
          plVar15 = local_138;
          if (cVar6 == '\0') {
            if (((char)local_130 != '\0') && (local_138 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
LAB_01a4f848:
            (**(code **)(*plVar17 + 0xd38))();
            plVar11 = local_70;
            if (local_138 == local_70) {
              plVar15 = plVar11;
              uVar9 = local_3c;
              if (((char)local_3c == '\0') && (local_138 != (int64_t *)0x0)) {
                uVar9 = (uint32_t)CONCAT71(uVar22,1);
                if ((char)local_130 != '\0') goto LAB_01a4f9a1;
                local_3c = 0;
                FUN_00d50b00();
                uVar9 = (int)CONCAT71(uVar22,1);
              }
            }
            else {
              if ((char)local_130 != '\0') {
                local_70 = local_138;
                uVar9 = (uint32_t)CONCAT71(uVar22,1);
                if (((char)local_3c == '\0') || (plVar11 == (int64_t *)0x0)) goto LAB_01a4f8c6;
                FUN_00d50b20();
                goto LAB_01a4f9a1;
              }
              if (local_138 != (int64_t *)0x0) {
                FUN_00d50b00();
              }
              local_70 = local_138;
              uVar9 = (uint32_t)CONCAT71(uVar22,1);
              if (((char)local_3c != '\0') && (plVar11 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
            }
            if (((char)local_130 != '\0') && (local_138 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            uVar8 = FUN_01d3b590();
            if (((char)local_130 != '\0') && (local_138 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if ((uVar8 & 8) != 0) goto LAB_01a4f848;
            (**(code **)(*plVar17 + 0xd40))();
            plVar11 = local_70;
            if (local_138 == local_70) {
              plVar15 = plVar11;
              uVar9 = local_3c;
              if (((char)local_3c == '\0') && (local_138 != (int64_t *)0x0)) {
                uVar9 = (uint32_t)CONCAT71(uVar22,1);
                if ((char)local_130 != '\0') goto LAB_01a4f9a1;
                local_3c = 0;
                FUN_00d50b00();
                uVar9 = (int)CONCAT71(uVar22,1);
              }
LAB_01a4f987:
              if (((char)local_130 != '\0') && (local_138 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
            }
            else {
              if ((char)local_130 == '\0') {
                if (local_138 != (int64_t *)0x0) {
                  FUN_00d50b00();
                }
                local_70 = local_138;
                uVar9 = (uint32_t)CONCAT71(uVar22,1);
                if (((char)local_3c != '\0') && (plVar11 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                goto LAB_01a4f987;
              }
              local_70 = local_138;
              uVar9 = (uint32_t)CONCAT71(uVar22,1);
              if (((char)local_3c != '\0') && (plVar11 != (int64_t *)0x0)) {
                FUN_00d50b20();
                goto LAB_01a4f9a1;
              }
LAB_01a4f8c6:
              local_70 = local_138;
              uVar9 = (uint32_t)CONCAT71(uVar22,1);
            }
          }
LAB_01a4f9a1:
          local_338 = local_58;
          local_330 = '\0';
          local_3c = uVar9;
          uVar23 = FUN_01266200();
          if ((local_330 != '\0') && (local_338 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          local_328 = local_58;
          local_320 = '\0';
          uVar24 = FUN_012664b0();
          if ((local_320 != '\0') && (local_328 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          FUN_01d3abf0();
          FUN_01e466c0();
          local_78 = (double)(**(code **)(*plVar17 + 0x930))();
          if ((char)local_1b8 != '\0') {
            FUN_00d23340();
            local_50 = (int64_t *)CONCAT71(local_50._1_7_,(char)local_130);
            pplVar18 = &local_50;
            pplVar14 = &local_130;
            if ((char)local_130 == '\0') {
              pplVar14 = pplVar18;
            }
            *(void*)pplVar14 = 0;
            if (((char)local_130 != '\0') && (local_138 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            pvVar10 = _pthread_getspecific((void*)pplVar18);
            if (pvVar10 != (void *)0x0) {
              FUN_00e8b990();
            }
            plVar11 = (int64_t *)FUN_00e8b990();
            (**(code **)(*plVar11 + 0x3b8))();
            if (((char)local_50 != '\0') && (local_138 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
          FUN_00083c20();
          pplVar18 = (int64_t **)&g_02802688;
          if (plVar15 != (int64_t *)0x0) {
            (**(code **)(*plVar15 + 0x360))();
            cVar6 = FUN_00e85ea0();
            pplVar18 = &local_70;
            if (cVar6 == '\0') {
              pplVar18 = (int64_t **)&g_02802688;
            }
          }
          if (*pplVar18 == (int64_t *)0x0) {
            local_2d8 = local_58;
            local_2d0 = '\0';
            FUN_01273200();
            if ((char)local_130 == '\0') {
              if (((local_138 != (int64_t *)0x0) && (FUN_00d50b00(), (char)local_130 != '\0')) &&
                 (local_138 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
            }
            else {
              local_130._0_1_ = '\0';
            }
            if ((local_2d0 != '\0') && (local_2d8 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            local_1a0 = (int64_t *)(**(code **)(*plVar15 + 0x370))(local_358);
            local_80 = (int64_t *)(**(code **)(*plVar15 + 0x370))(local_78);
            uVar25 = FUN_01a51960();
            FUN_00c9fe20();
            local_50 = (int64_t *)CONCAT71(local_50._1_7_,(char)local_130);
            pplVar18 = &local_130;
            if ((char)local_130 == '\0') {
              pplVar18 = &local_50;
            }
            *(void*)pplVar18 = 0;
            if (((char)local_130 != '\0') && (local_138 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if ((char)local_50 == '\0') {
              if (local_138 != (int64_t *)0x0) {
                FUN_00d50b00();
                goto LAB_01a500d1;
              }
            }
            else if (local_138 != (int64_t *)0x0) {
LAB_01a500d1:
              local_130._0_1_ = '\0';
              local_138 = (int64_t *)0x0;
              local_350 = plVar19;
              local_128 = plVar19;
              local_120 = 0xffffffff;
              local_118 = 0;
              local_120._4_4_ = 0;
              while( true ) {
                if (local_120._4_4_ != 0) {
                  if (local_120._4_4_ < 1) {
                    iVar7 = -local_120._4_4_;
                  }
                  else {
                    iVar7 = (int)local_120 - local_120._4_4_;
                    local_120 = CONCAT44(local_120._4_4_,iVar7);
                    FUN_00d23690();
                    local_118 = local_118 + local_120._4_4_;
                    iVar7 = 0;
                  }
                  local_120 = CONCAT44(iVar7,(int)local_120);
                }
                lVar12 = (int64_t)(int)local_120;
                iVar7 = (int)local_120 + 1;
                local_120 = CONCAT44(local_120._4_4_,iVar7);
                if (*(int *)((int64_t)local_128 + 0xc) <= iVar7) break;
                local_138 = *(int64_t **)(local_128[2] + 8 + lVar12 * 8);
                local_2c0 = '\0';
                local_2c8 = local_138;
                local_1b8 = (int64_t *)FUN_019c1040(local_80);
                local_2b0 = '\0';
                local_2b8 = local_138;
                dVar26 = (double)FUN_019c1040(local_1a0);
                local_78 = dVar26;
                if ((local_2b0 != '\0') && (local_2b8 != (int64_t *)0x0)) {
                  dVar26 = (double)FUN_00d50b20();
                }
                if ((local_2c0 != '\0') && (local_2c8 != (int64_t *)0x0)) {
                  dVar26 = (double)FUN_00d50b20();
                }
                local_2a0 = '\0';
                local_2a8 = local_138;
                FUN_00805b20(dVar26,&local_2a8);
                local_158 = 0;
                lVar12 = CONCAT71(uStack_67,local_68);
                if (local_60 == '\0') {
                  if (lVar12 != 0) {
                    FUN_00d50b00();
                  }
                }
                else {
                  local_60 = '\0';
                }
                local_158 = '\x01';
                local_160 = lVar12;
                FUN_01278c70();
                plVar15 = local_50;
                local_168 = 0;
                if (local_48 == '\0') {
                  if (local_50 != (int64_t *)0x0) {
                    FUN_00d50b00();
                  }
                }
                else {
                  local_48 = '\0';
                }
                local_168 = '\x01';
                local_170 = plVar15;
                FUN_012850c0((double)local_1b8 - local_78,uVar25);
                if ((local_168 != '\0') && (local_170 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                if ((local_158 != '\0') && (local_160 != 0)) {
                  FUN_00d50b20();
                }
                if ((local_60 != '\0') && (CONCAT71(uStack_67,local_68) != 0)) {
                  FUN_00d50b20();
                }
                if ((local_2a0 != '\0') && (local_2a8 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
              }
              FUN_000be170();
              FUN_00d50b20();
            }
            if (plVar19 != (int64_t *)0x0) {
              FUN_00d50b20();
            }
          }
          else {
            local_150 = FUN_01a8fc90(local_358);
            local_1b8 = (int64_t *)FUN_01a8fc90(local_78);
            local_78 = (double)FUN_01a51960();
            local_318 = local_58;
            local_310 = '\0';
            FUN_01273200();
            if ((char)local_130 == '\0') {
              if (((local_138 != (int64_t *)0x0) && (FUN_00d50b00(), (char)local_130 != '\0')) &&
                 (local_138 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
            }
            else {
              local_130._0_1_ = '\0';
            }
            if ((local_310 != '\0') && (local_318 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            local_80 = local_138;
            FUN_00c9fe20();
            local_50 = (int64_t *)CONCAT71(local_50._1_7_,(char)local_130);
            pplVar18 = &local_130;
            if ((char)local_130 == '\0') {
              pplVar18 = &local_50;
            }
            *(void*)pplVar18 = 0;
            if (((char)local_130 != '\0') && (local_138 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if ((char)local_50 == '\0') {
              if (local_138 != (int64_t *)0x0) {
                FUN_00d50b00();
                goto LAB_01a4fd98;
              }
            }
            else if (local_138 != (int64_t *)0x0) {
LAB_01a4fd98:
              local_130._0_1_ = '\0';
              local_138 = (int64_t *)0x0;
              local_1a0 = plVar19;
              local_128 = plVar19;
              local_120 = 0xffffffff;
              local_118 = 0;
              local_120._4_4_ = 0;
              local_38 = plVar17;
              while( true ) {
                if (local_120._4_4_ != 0) {
                  if (local_120._4_4_ < 1) {
                    iVar7 = -local_120._4_4_;
                  }
                  else {
                    iVar7 = (int)local_120 - local_120._4_4_;
                    local_120 = CONCAT44(local_120._4_4_,iVar7);
                    FUN_00d23690();
                    local_118 = local_118 + local_120._4_4_;
                    iVar7 = 0;
                  }
                  local_120 = CONCAT44(iVar7,(int)local_120);
                }
                lVar12 = (int64_t)(int)local_120;
                iVar7 = (int)local_120 + 1;
                local_120 = CONCAT44(local_120._4_4_,iVar7);
                if (*(int *)((int64_t)local_128 + 0xc) <= iVar7) break;
                local_138 = *(int64_t **)(local_128[2] + 8 + lVar12 * 8);
                local_300 = '\0';
                local_50 = local_1b8;
                local_308 = local_138;
                FUN_00e7b970();
                FUN_019c10c0(local_150,local_50);
                if ((local_300 != '\0') && (local_308 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                local_2f0 = '\0';
                local_2f8 = local_138;
                uVar13 = FUN_019c10c0(local_150,local_78);
                uVar25 = extraout_XMM0_Qa_02;
                if ((local_2f0 != '\0') && (local_2f8 != (int64_t *)0x0)) {
                  uVar25 = FUN_00d50b20();
                }
                local_2e0 = '\0';
                local_2e8 = local_138;
                FUN_00805b20(uVar25,&local_2e8);
                local_178 = 0;
                lVar12 = CONCAT71(uStack_67,local_68);
                if (local_60 == '\0') {
                  if (lVar12 != 0) {
                    FUN_00d50b00();
                  }
                }
                else {
                  local_60 = '\0';
                }
                plVar17 = local_38;
                local_178 = '\x01';
                local_180 = lVar12;
                FUN_01278c70();
                plVar15 = local_50;
                local_188 = 0;
                if (local_48 == '\0') {
                  if (local_50 != (int64_t *)0x0) {
                    FUN_00d50b00();
                  }
                }
                else {
                  local_48 = '\0';
                }
                plVar19 = local_80;
                local_188 = '\x01';
                local_190 = plVar15;
                FUN_01281db0(uVar13,(*(int *)(this_ptr + 0x34) != 0) * '\x02');
                if ((local_188 != '\0') && (local_190 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                if ((local_178 != '\0') && (local_180 != 0)) {
                  FUN_00d50b20();
                }
                if ((local_60 != '\0') && (CONCAT71(uStack_67,local_68) != 0)) {
                  FUN_00d50b20();
                }
                if ((local_2e0 != '\0') && (local_2e8 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
              }
              FUN_000be170();
              FUN_00d50b20();
            }
            if (plVar19 != (int64_t *)0x0) {
              FUN_00d50b20();
            }
          }
          local_298 = local_58;
          local_290 = '\0';
          FUN_01278c70();
          local_48 = 0;
          if ((char)local_130 == '\0') {
            if (local_138 == (int64_t *)0x0) {
              local_50 = (int64_t *)0x0;
              local_48 = '\x01';
            }
            else {
              FUN_00d50b00();
              local_50 = local_138;
              local_48 = '\x01';
              if (((char)local_130 != '\0') && (local_138 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
            }
          }
          else {
            local_50 = local_138;
            local_48 = '\x01';
            local_130._0_1_ = '\0';
          }
          if ((local_290 != '\0') && (local_298 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          FUN_00d23340();
          local_68 = (char)local_130;
          pplVar18 = (int64_t **)&local_68;
          pplVar14 = &local_130;
          if ((char)local_130 == '\0') {
            pplVar14 = pplVar18;
          }
          *(void*)pplVar14 = 0;
          if (((char)local_130 != '\0') && (local_138 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          pvVar10 = _pthread_getspecific((void*)pplVar18);
          if (pvVar10 != (void *)0x0) {
            FUN_00e8b990();
          }
          plVar15 = (int64_t *)FUN_00e8b990();
          uVar9 = (**(code **)(*plVar15 + 0x3c0))();
          local_1b8 = (int64_t *)CONCAT44(local_1b8._4_4_,uVar9);
          if ((local_68 != '\0') && (local_138 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          local_288 = local_50;
          local_280 = '\0';
          local_78 = (double)FUN_01266200();
          if ((local_280 != '\0') && (local_288 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          local_278 = local_50;
          local_270 = '\0';
          local_80 = (int64_t *)FUN_012664b0();
          if ((local_270 != '\0') && (local_278 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          lVar12 = g_026f6f60;
          local_148 = 0;
          if (g_026f6f60 != 0) {
            FUN_00d50b00();
          }
          local_150 = lVar12;
          local_148 = '\x01';
          FUN_00d470c0(uVar23);
          lVar12 = g_0270b900;
          local_1f0 = 0;
          if (g_0270b900 != 0) {
            FUN_00d50b00();
          }
          local_1f8 = lVar12;
          local_1f0 = '\x01';
          FUN_00d470c0(uVar24);
          lVar12 = g_0270b908;
          local_1e0 = 0;
          if (g_0270b908 != 0) {
            FUN_00d50b00();
          }
          local_1e8 = lVar12;
          local_1e0 = '\x01';
          FUN_00d470c0(local_78);
          lVar12 = g_0270b910;
          local_1d0 = 0;
          if (g_0270b910 != 0) {
            FUN_00d50b00();
          }
          local_1d8 = lVar12;
          local_1d0 = '\x01';
          FUN_00d470c0(local_80);
          lVar12 = g_0270b918;
          local_1c0 = 0;
          if (g_0270b918 != 0) {
            FUN_00d50b00();
          }
          local_1c8 = lVar12;
          local_1c0 = '\x01';
          FUN_01a55cd0(&local_398,&local_150,&local_1f8,&local_388,&local_1c8);
          FUN_000b4da0();
          lVar12 = CONCAT71(uStack_67,local_68);
          if (local_60 == '\0') {
            if (((lVar12 != 0) && (FUN_00d50b00(), local_60 != '\0')) &&
               (CONCAT71(uStack_67,local_68) != 0)) {
              FUN_00d50b20();
            }
          }
          else {
            local_60 = '\0';
          }
          FUN_01a55e50();
          if ((local_1c0 != '\0') && (local_1c8 != 0)) {
            FUN_00d50b20();
          }
          if ((local_360 != '\0') && (local_368 != 0)) {
            FUN_00d50b20();
          }
          if ((local_1d0 != '\0') && (local_1d8 != 0)) {
            FUN_00d50b20();
          }
          if ((local_370 != '\0') && (local_378 != 0)) {
            FUN_00d50b20();
          }
          if ((local_1e0 != '\0') && (local_1e8 != 0)) {
            FUN_00d50b20();
          }
          if ((local_380 != '\0') && (local_388 != 0)) {
            FUN_00d50b20();
          }
          if ((local_1f0 != '\0') && (local_1f8 != 0)) {
            FUN_00d50b20();
          }
          if ((local_390 != '\0') && (local_398 != 0)) {
            FUN_00d50b20();
          }
          if ((local_148 != '\0') && (local_150 != 0)) {
            FUN_00d50b20();
          }
          FUN_00d403d0();
          lVar3 = g_0270b7e0;
          if (g_0270b7e0 != 0) {
            FUN_00d50b00();
          }
          local_268 = lVar3;
          local_260 = '\x01';
          local_250 = '\0';
          local_240 = '\0';
          local_258 = plVar17;
          local_248 = lVar12;
          FUN_00d40470(&local_248,&local_258,1,0);
          if ((local_240 != '\0') && (local_248 != 0)) {
            FUN_00d50b20();
          }
          if ((local_250 != '\0') && (local_258 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_260 != '\0') && (local_268 != 0)) {
            FUN_00d50b20();
          }
          if (((char)local_130 != '\0') && (local_138 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (lVar12 != 0) {
            FUN_00d50b20();
          }
          plVar15 = local_138;
          if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        goto LAB_01a4f680;
      }
      if (((char)arg1[1] == '\0') && (local_138 != (int64_t *)0x0)) {
        if ((char)local_130 == '\0') {
          FUN_00d50b00();
          goto LAB_01a4f721;
        }
LAB_01a4f6dc:
        *(void*)(arg1 + 1) = 1;
        local_130._0_1_ = '\0';
      }
      if (*arg1 != 0) goto LAB_01a4f732;
LAB_01a50984:
      if (((char)local_130 != '\0') && (local_138 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
LAB_01a509ba:
      local_238 = *arg1;
      local_230 = '\0';
      FUN_0199eb40();
      if ((local_230 != '\0') && (local_238 != 0)) {
        FUN_00d50b20();
      }
      (**(code **)(*plVar17 + 0xeb0))();
      local_228 = local_58;
      local_220 = '\0';
      FUN_012a1fa0();
      if ((local_220 != '\0') && (local_228 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (((char)local_3c != '\0') && (local_70 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (local_198 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      bVar1 = true;
      bVar2 = false;
      uVar21 = CONCAT71((int7)((uint64_t)plVar20 >> 8),1);
      bVar4 = true;
      bVar5 = false;
      if ((char)local_88 == '\0') goto LAB_01a4f4c1;
      goto LAB_01a4f4b3;
    }
    bVar1 = true;
    bVar2 = false;
    uVar21 = 0;
  }
LAB_01a4f4c1:
  if ((bVar1) && (!bVar2)) {
    FUN_00d50b20();
  }
LAB_01a4f4d3:
  return uVar21 & 0xffffffff;
}

