// Function: FUN_01bae3c0
// Address: 01bae3c0
// Size: 7121 bytes
// Class: GNList
// String references:
//   "GNList"
// === GNList properties ===
//   GNInt           _archiveVersion
//   bool            _awakesObjectsAfterDecoding
//   bool            _isCancelled
//   GNInt           _currentObjectGraphIdx
//   GNInt           _predictedDecodedValuesIndex


uint64_t FUN_01bae3c0(void* param_1,char param_2,uint64_t param_3)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  int64_t *plVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  int64_t **pplVar8;
  void *pvVar9;
  int64_t lVar10;
  int64_t *plVar11;
  uint64_t uVar12;
  uint64_t uVar13;
  void* pVar14;
  uint uVar15;
  int64_t lVar16;
  int iVar17;
  int64_t *plVar18;
  int64_t *this_ptr;
  undefined7 uVar19;
  uint32_t uVar20;
  uint32_t extraout_XMM0_Da;
  uint32_t extraout_XMM0_Da_00;
  uint32_t extraout_XMM0_Da_01;
  int64_t *local_2b0;
  uint8_t local_2a8;
  int64_t *local_2a0;
  uint8_t local_298;
  int64_t *local_290;
  uint8_t local_288;
  int64_t *local_280;
  uint8_t local_278;
  int64_t *local_270;
  uint8_t local_268;
  int64_t *local_260;
  uint8_t local_258;
  uint8_t local_248;
  int64_t local_240;
  char local_238;
  uint64_t local_230;
  int64_t *local_228;
  int64_t local_220;
  char local_218;
  int64_t local_210;
  char local_208;
  int64_t *local_200;
  char local_1f8;
  int64_t local_1f0;
  char local_1e8;
  int64_t *local_1e0;
  char local_1d8;
  int64_t *local_1d0;
  char local_1c8;
  int64_t *local_1c0;
  char local_1b8;
  int64_t *local_1b0;
  char local_1a8;
  int64_t *local_1a0;
  char local_198;
  int64_t local_190;
  char local_188;
  int64_t local_180;
  char local_178;
  int64_t local_170;
  char local_168;
  int64_t *local_160;
  char local_158;
  int64_t *local_150;
  char local_148;
  int64_t *local_140;
  char local_138;
  int64_t *local_130;
  char local_128;
  int64_t local_120;
  char local_118;
  int64_t local_110;
  char local_108;
  uint64_t local_100;
  int64_t *local_f8;
  int64_t *local_f0;
  int64_t *local_e8;
  int64_t *local_e0;
  int64_t *local_d8;
  int64_t *local_d0;
  int64_t *local_c8;
  uint64_t local_c0;
  int64_t *local_b8;
  int64_t *local_b0;
  int64_t *local_a8;
  uint64_t local_a0;
  int local_98;
  int64_t local_90;
  char local_88;
  int64_t *local_80;
  char local_78;
  int64_t *local_70;
  uint64_t local_68;
  int local_60;
  int64_t *local_50;
  int64_t local_48;
  
  cVar6 = (**(code **)(*this_ptr + 0x688))();
  if (cVar6 != '\0') {
    (**(code **)(*this_ptr + 0x630))();
    plVar18 = local_b8;
    if (((char)local_b0 != '\0') && (local_b8 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar18 != (int64_t *)0x0) {
      (**(code **)(*this_ptr + 0x630))();
      FUN_00d23310();
      plVar18 = local_b8;
      local_78 = (char)local_b0 != '\0';
      local_80 = local_b8;
      if ((bool)local_78) {
        local_b0._0_1_ = '\0';
      }
      FUN_0006e1c0();
      if (plVar18 == (int64_t *)0x0) {
LAB_01bae4c8:
        pplVar8 = &g_02802688;
        plVar11 = g_02802688;
        if (g_02802690 != '\0') goto LAB_01bae4d8;
LAB_01bae4eb:
        if (plVar11 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        (**(code **)(*plVar18 + 0x360))();
        cVar6 = FUN_00e85ea0();
        if (cVar6 == '\0') goto LAB_01bae4c8;
        pplVar8 = &local_80;
        plVar11 = local_80;
        if (local_78 == '\0') goto LAB_01bae4eb;
LAB_01bae4d8:
        *(void*)(pplVar8 + 1) = 0;
      }
      if ((local_78 != '\0') && (plVar18 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_88 != '\0') && (local_90 != 0)) {
        FUN_00d50b20();
      }
      if (plVar11 != (int64_t *)0x0) {
        pvVar9 = _pthread_getspecific(param_1);
        if (pvVar9 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01266fe0();
        plVar18 = local_80;
        pvVar9 = _pthread_getspecific(param_1);
        plVar11 = local_80;
        if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), plVar18 = plVar11, lVar10 != 0)) {
          plVar18 = (int64_t *)plVar11[(uint64_t)(*(uint *)(lVar10 + 0x154) & 1) + 4];
        }
        FUN_012e8920();
        local_d8 = local_b8;
        plVar11 = local_b8;
        if (local_b8 == (int64_t *)0x0) {
          bVar3 = true;
          local_d8 = (int64_t *)0x0;
          uVar12 = 0;
        }
        else {
          uVar19 = (undefined7)((uint64_t)plVar18 >> 8);
          if ((char)local_b0 == '\0') {
            FUN_00d50b00();
            bVar3 = false;
            uVar12 = CONCAT71(uVar19,1);
            if (((char)local_b0 == '\0') || (local_b8 == (int64_t *)0x0)) goto LAB_01bae638;
            FUN_00d50b20();
          }
          else {
            local_b0._0_1_ = '\0';
          }
          uVar12 = CONCAT71(uVar19,1);
          bVar3 = false;
        }
LAB_01bae638:
        pVar14 = (void*)plVar11;
        if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        local_230 = uVar12;
        pvVar9 = _pthread_getspecific(pVar14);
        if (pvVar9 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar20 = FUN_012c9740();
        local_220 = g_026dc290;
        if (g_026dc290 != 0) {
          uVar20 = FUN_00d50b00();
        }
        local_218 = '\x01';
        pplVar8 = &local_b8;
        FUN_000175c0(uVar20,&local_220);
        plVar18 = local_b8;
        FUN_00053ac0();
        if (plVar18 == (int64_t *)0x0) {
          pplVar8 = &g_02802688;
          plVar18 = g_02802688;
          if (g_02802690 != '\0') goto LAB_01bae727;
LAB_01bae749:
          if (plVar18 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          (**(code **)(*plVar18 + 0x360))();
          cVar6 = FUN_00e85ea0();
          if (cVar6 == '\0') {
            pplVar8 = &g_02802688;
          }
          plVar18 = *pplVar8;
          if (*(char *)(pplVar8 + 1) == '\0') goto LAB_01bae749;
LAB_01bae727:
          *(void*)(pplVar8 + 1) = 0;
        }
        if (((char)local_b0 != '\0') && (local_b8 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_218 != '\0') && (local_220 != 0)) {
          FUN_00d50b20();
        }
        if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar18 == (int64_t *)0x0) {
          uVar20 = 1;
        }
        else {
          uVar20 = FUN_00d45870();
          FUN_00d50b20();
        }
        local_e8 = (int64_t *)CONCAT44(local_e8._4_4_,uVar20);
        FUN_00d50b20();
        uVar19 = (undefined7)((uint64_t)plVar18 >> 8);
        plVar18 = (int64_t *)CONCAT71(uVar19,1);
        if (param_2 != '\0') {
          FUN_01a13070();
          plVar11 = local_b8;
          if (((char)local_b0 != '\0') && (local_b8 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (plVar11 == (int64_t *)0x0) {
            local_100 = 0;
            local_d0 = (int64_t *)0x0;
          }
          else {
            FUN_01a13070();
            FUN_019f0d50();
            local_d0 = local_b8;
            if (local_b8 == (int64_t *)0x0) {
              local_d0 = (int64_t *)0x0;
              local_100 = 0;
            }
            else if ((char)local_b0 == '\0') {
              uVar12 = FUN_00d50b00();
              local_100 = CONCAT71((int7)((uint64_t)uVar12 >> 8),1);
              if (((char)local_b0 != '\0') && (local_b8 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
            }
            else {
              local_b0._0_1_ = '\0';
              local_100 = CONCAT71((int7)((uint64_t)local_b8 >> 8),1);
            }
            if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
          (**(code **)(*(int64_t *)this_ptr[0x1b] + 0x960))();
          uVar20 = FUN_00d95590();
          local_170 = local_90;
          local_168 = 0;
          if (local_88 == '\0') {
            if (local_90 != 0) {
              uVar20 = FUN_00d50b00();
            }
          }
          else {
            local_88 = '\0';
          }
          local_168 = '\x01';
          FUN_00d97f80(uVar20,&local_170);
          local_f0 = local_b8;
          if ((char)local_b0 == '\0') {
            if (((local_b8 != (int64_t *)0x0) && (FUN_00d50b00(), (char)local_b0 != '\0')) &&
               (local_b8 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            local_b0._0_1_ = '\0';
          }
          if ((local_168 != '\0') && (local_170 != 0)) {
            FUN_00d50b20();
          }
          if ((local_88 != '\0') && (local_90 != 0)) {
            FUN_00d50b20();
          }
          if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          lVar10 = g_027e54d0;
          if (g_027e54d0 != 0) {
            FUN_00d50b00();
          }
          local_210 = lVar10;
          local_208 = '\x01';
          cVar6 = FUN_00d90dc0();
          if ((local_208 != '\0') && (local_210 != 0)) {
            FUN_00d50b20();
          }
          if (cVar6 == '\0') {
            local_1f0 = this_ptr[0x18];
            local_1e8 = '\0';
            uVar20 = (**(code **)(*this_ptr + 0x630))();
            plVar11 = local_b8;
            if ((g_027048b0 == '\0') &&
               (iVar7 = ___cxa_guard_acquire(), uVar20 = extraout_XMM0_Da_01, iVar7 != 0)) {
              g_026cd478 = FUN_00d4fe50();
              g_026cd460 = "GNList";
              g_026cd468 = 0x20;
              g_026cd470 = FUN_00018210;
              g_026cd480 = 0;
              ram_00000000026cd488 = 0;
              g_026cd490 = 0;
              g_026cd508 = 0;
              ram_00000000026cd510 = 0;
              g_026cd518 = 0;
              g_026cd51a = 6;
              g_026cd498 = 0;
              ram_00000000026cd4a0 = 0;
              g_026cd4a8 = 0;
              ram_00000000026cd4b0 = 0;
              g_026cd4b8 = 0;
              ram_00000000026cd4c0 = 0;
              g_026cd4c8 = 0;
              ram_00000000026cd4d0 = 0;
              g_026cd4d8 = 0;
              ram_00000000026cd4e0 = 0;
              g_026cd4e8 = 0;
              ram_00000000026cd4f0 = 0;
              g_026cd4f8 = 0;
              ram_00000000026cd500 = 0;
              g_026cd523 = 0;
              g_026cd51b = 0;
              uVar20 = ___cxa_guard_release();
            }
            plVar18 = (int64_t *)CONCAT71(uVar19,1);
            pplVar8 = &g_02802688;
            if (plVar11 != (int64_t *)0x0) {
              (**(code **)(*plVar11 + 0x360))();
              cVar6 = FUN_00e85ea0();
              uVar20 = extraout_XMM0_Da;
              if (cVar6 != '\0') {
                FUN_0006e1c0();
                cVar6 = FUN_00e8da30();
                pplVar8 = &local_b8;
                uVar20 = extraout_XMM0_Da_00;
                if (cVar6 == '\0') {
                  pplVar8 = &g_02802688;
                }
              }
            }
            local_128 = 0;
            plVar11 = *pplVar8;
            if (*(char *)(pplVar8 + 1) == '\0') {
              if (plVar11 != (int64_t *)0x0) {
                uVar20 = FUN_00d50b00();
              }
            }
            else {
              *(void*)(pplVar8 + 1) = 0;
            }
            local_128 = '\x01';
            local_130 = plVar11;
            FUN_01a296f0(uVar20,0);
            if ((local_128 != '\0') && (local_130 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if (((char)local_b0 != '\0') && (local_b8 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_1e8 != '\0') && (local_1f0 != 0)) {
              FUN_00d50b20();
            }
            FUN_01a13070();
            plVar11 = local_80;
            if (local_78 == '\0') {
              if (local_80 != (int64_t *)0x0) {
                FUN_00d50b00();
              }
            }
            else {
              local_78 = '\0';
            }
            local_258 = 1;
            local_260 = plVar11;
            (**(code **)(*this_ptr + 0x630))();
            lVar10 = local_90;
            if (local_88 == '\0') {
              if (local_90 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_88 = '\0';
            }
            local_248 = 1;
            FUN_01ba9e60();
            local_f8 = local_b8;
            if ((char)local_b0 == '\0') {
              if (local_b8 != (int64_t *)0x0) {
                FUN_00d50b00();
              }
            }
            else {
              local_b0._0_1_ = '\0';
            }
            if (lVar10 != 0) {
              FUN_00d50b20();
            }
            if ((local_88 != '\0') && (local_90 != 0)) {
              FUN_00d50b20();
            }
            if (plVar11 != (int64_t *)0x0) {
              FUN_00d50b20();
            }
            if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if (local_f8 == (int64_t *)0x0) goto LAB_01baee52;
            plVar11 = (int64_t *)FUN_00e8fc40();
            FUN_00022d50();
            (**(code **)(*plVar11 + 0x18))();
            local_e8 = plVar11;
            FUN_00c9fe20();
            plVar11 = local_b8;
            local_80 = (int64_t *)CONCAT71(local_80._1_7_,(char)local_b0);
            pplVar8 = &local_b0;
            if ((char)local_b0 == '\0') {
              pplVar8 = &local_80;
            }
            *(void*)pplVar8 = 0;
            if (((char)local_b0 != '\0') && (local_b8 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if ((char)local_80 == '\0') {
              if (plVar11 != (int64_t *)0x0) {
                FUN_00d50b00();
                goto LAB_01baeea1;
              }
LAB_01baf8b8:
              uVar13 = 0;
              local_50 = (int64_t *)0x0;
              bVar2 = false;
              local_48 = 0;
LAB_01baf904:
              FUN_00c9fe20();
              plVar11 = local_b8;
              pplVar8 = &local_b0;
              if ((char)local_b0 == '\0') {
                pplVar8 = &local_80;
              }
              local_80 = (int64_t *)CONCAT71(local_80._1_7_,(char)local_b0);
              *(void*)pplVar8 = 0;
              if (((char)local_b0 != '\0') && (local_b8 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              if ((char)local_80 == '\0') {
                if (plVar11 == (int64_t *)0x0) goto LAB_01bafbf0;
                FUN_00d50b00();
              }
              else if (plVar11 == (int64_t *)0x0) goto LAB_01bafbf0;
              local_b0._0_1_ = '\0';
              local_b8 = (int64_t *)0x0;
              local_a8 = plVar11;
              local_98 = 0;
              local_a0 = 0;
              local_c0 = uVar13;
              if (0 < *(int *)((int64_t)plVar11 + 0xc)) {
                uVar15 = 0;
                plVar18 = &local_90;
                local_c8 = plVar11;
                do {
                  local_e0 = (int64_t *)CONCAT44(local_e0._4_4_,uVar15);
                  plVar11 = *(int64_t **)(local_c8[2] + (uint64_t)uVar15 * 8);
                  local_1a8 = '\0';
                  local_1b0 = plVar11;
                  local_b8 = plVar11;
                  FUN_01baacc0();
                  plVar4 = local_80;
                  if (local_78 == '\0') {
                    if (((local_80 != (int64_t *)0x0) && (FUN_00d50b00(), local_78 != '\0')) &&
                       (local_80 != (int64_t *)0x0)) {
                      FUN_00d50b20();
                    }
                  }
                  else {
                    local_78 = '\0';
                  }
                  if ((local_1a8 != '\0') && (local_1b0 != (int64_t *)0x0)) {
                    FUN_00d50b20();
                  }
                  if (plVar4 != (int64_t *)0x0) {
                    local_78 = '\0';
                    local_80 = (int64_t *)0x0;
                    local_68 = 0xffffffff;
                    local_60 = 0;
                    local_70 = plVar4;
                    while( true ) {
                      lVar10 = (int64_t)(int)local_68;
                      iVar7 = (int)local_68 + 1;
                      local_68 = CONCAT44(local_68._4_4_,iVar7);
                      if (*(int *)((int64_t)local_70 + 0xc) <= iVar7) break;
                      local_80 = *(int64_t **)(local_70[2] + 8 + lVar10 * 8);
                      local_198 = '\0';
                      local_1a0 = plVar11;
                      FUN_01bb1410(local_70[2],&local_1a0);
                      lVar10 = local_90;
                      if (local_88 == '\0') {
                        if (((local_90 != 0) && (FUN_00d50b00(), local_88 != '\0')) &&
                           (local_90 != 0)) {
                          FUN_00d50b20();
                        }
                      }
                      else {
                        local_88 = '\0';
                      }
                      if ((local_198 != '\0') && (local_1a0 != (int64_t *)0x0)) {
                        FUN_00d50b20();
                      }
                      local_270 = local_80;
                      local_268 = 0;
                      FUN_01bae1e0(*(void*)
                                    (*(int64_t *)(lVar10 + 0x10) +
                                    ((int64_t)local_60 + (int64_t)(int)local_68) * 4),0);
                      FUN_00d50b20();
                      if (local_68._4_4_ != 0) {
                        if (local_68._4_4_ < 1) {
                          iVar7 = -local_68._4_4_;
                        }
                        else {
                          local_68 = CONCAT44(local_68._4_4_,(int)local_68 - local_68._4_4_);
                          FUN_00d23690();
                          local_60 = local_60 + local_68._4_4_;
                          iVar7 = 0;
                        }
                        local_68 = CONCAT44(iVar7,(int)local_68);
                      }
                    }
                    FUN_00083b20();
                    FUN_00d50b20();
                  }
                  uVar15 = (int)local_e0 + 1;
                  local_a0 = CONCAT44(local_a0._4_4_,uVar15);
                } while ((int)uVar15 < *(int *)((int64_t)local_c8 + 0xc));
              }
              FUN_01bb3e20();
              FUN_00d50b20();
              plVar18 = (int64_t *)CONCAT71((int7)((uint64_t)plVar18 >> 8),1);
              cVar6 = (char)local_c0;
            }
            else {
              if (plVar11 == (int64_t *)0x0) goto LAB_01baf8b8;
LAB_01baeea1:
              local_b0._0_1_ = '\0';
              local_b8 = (int64_t *)0x0;
              local_228 = plVar11;
              local_a8 = plVar11;
              local_a0 = 0xffffffff;
              local_98 = 0;
              bVar1 = true;
              uVar13 = 0;
              local_50 = (int64_t *)0x0;
              bVar2 = false;
              local_48 = 0;
              local_c0 = 0;
LAB_01baef2f:
              lVar10 = (int64_t)(int)local_a0;
              iVar7 = (int)local_a0 + 1;
              local_a0 = CONCAT44(local_a0._4_4_,iVar7);
              if (iVar7 < *(int *)((int64_t)local_a8 + 0xc)) {
                lVar16 = local_a8[2];
                local_1e0 = *(int64_t **)(lVar16 + 8 + lVar10 * 8);
                local_1d8 = '\0';
                local_b8 = local_1e0;
                FUN_01baacc0(lVar16,&local_1e0);
                pVar14 = (void*)lVar16;
                local_e0 = local_80;
                if (local_78 == '\0') {
                  if (((local_80 != (int64_t *)0x0) && (FUN_00d50b00(), local_78 != '\0')) &&
                     (local_80 != (int64_t *)0x0)) {
                    FUN_00d50b20();
                  }
                }
                else {
                  local_78 = '\0';
                }
                if ((local_1d8 != '\0') && (local_1e0 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                FUN_01a13070();
                iVar7 = (**(code **)(&UNK_000015a0 + *local_80))();
                if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                plVar11 = local_b8;
                if (iVar7 == 1) {
                  pvVar9 = _pthread_getspecific(pVar14);
                  plVar4 = local_b8;
                  if ((pvVar9 != (void *)0x0) &&
                     (lVar10 = FUN_00e8b990(), plVar11 = plVar4, lVar10 != 0)) {
                    plVar11 = (int64_t *)plVar4[(uint64_t)(*(uint *)(lVar10 + 0x154) & 1) + 4];
                  }
                  uVar20 = (**(code **)(*(int64_t *)this_ptr[0x1b] + 0x960))();
                  local_120 = local_90;
                  local_118 = 0;
                  if (local_88 == '\0') {
                    if (local_90 != 0) {
                      uVar20 = FUN_00d50b00();
                    }
                  }
                  else {
                    local_88 = '\0';
                  }
                  local_118 = '\x01';
                  local_2b0 = local_e0;
                  local_2a8 = 0;
                  FUN_01bad290(uVar20,&local_2b0);
                  lVar10 = local_240;
                  local_188 = 0;
                  if ((local_238 == '\0') && (local_240 != 0)) {
                    FUN_00d50b00();
                  }
                  local_190 = lVar10;
                  local_188 = '\x01';
                  (**(code **)(*plVar11 + 0x3e0))(&local_190,&local_120);
                  plVar11 = local_80;
                  cVar6 = (char)local_c0;
                  if (local_80 == local_50) {
                    if ((cVar6 == '\0') && (local_50 != (int64_t *)0x0)) {
                      plVar11 = local_50;
                      if (local_78 != '\0') goto LAB_01baf2f0;
                      local_c8 = (int64_t *)CONCAT71(local_c8._1_7_,1);
                      FUN_00d50b00();
                    }
                    else {
                      local_c8 = (int64_t *)CONCAT71(local_c8._1_7_,cVar6);
                    }
LAB_01baf3c8:
                    if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
                      FUN_00d50b20();
                    }
                  }
                  else {
                    if (local_78 == '\0') {
                      if (local_80 != (int64_t *)0x0) {
                        FUN_00d50b00();
                      }
                      local_c8 = (int64_t *)CONCAT71(local_c8._1_7_,1);
                      if ((cVar6 == '\0') || (local_50 == (int64_t *)0x0)) {
                        local_50 = plVar11;
                      }
                      else {
                        FUN_00d50b20();
                        local_50 = plVar11;
                      }
                      goto LAB_01baf3c8;
                    }
                    if ((cVar6 != '\0') && (local_50 != (int64_t *)0x0)) {
                      FUN_00d50b20();
                    }
LAB_01baf2f0:
                    local_78 = '\0';
                    local_c8 = (int64_t *)CONCAT71(local_c8._1_7_,1);
                    local_50 = plVar11;
                  }
                  if ((local_188 != '\0') && (local_190 != 0)) {
                    FUN_00d50b20();
                  }
                  if ((local_118 != '\0') && (local_120 != 0)) {
                    FUN_00d50b20();
                  }
                  if ((local_88 != '\0') && (local_90 != 0)) {
                    FUN_00d50b20();
                  }
                }
                else {
                  pvVar9 = _pthread_getspecific(pVar14);
                  plVar4 = local_b8;
                  if ((pvVar9 != (void *)0x0) &&
                     (lVar10 = FUN_00e8b990(), plVar11 = plVar4, lVar10 != 0)) {
                    plVar11 = (int64_t *)plVar4[(uint64_t)(*(uint *)(lVar10 + 0x154) & 1) + 4];
                  }
                  uVar20 = (**(code **)(*(int64_t *)this_ptr[0x1b] + 0x960))();
                  local_110 = local_90;
                  local_108 = 0;
                  if (local_88 == '\0') {
                    if (local_90 != 0) {
                      uVar20 = FUN_00d50b00();
                    }
                  }
                  else {
                    local_88 = '\0';
                  }
                  local_108 = '\x01';
                  local_2a0 = local_e0;
                  local_298 = 0;
                  FUN_01bad290(uVar20,&local_2a0);
                  lVar10 = local_240;
                  local_178 = 0;
                  if ((local_238 == '\0') && (local_240 != 0)) {
                    FUN_00d50b00();
                  }
                  local_180 = lVar10;
                  local_178 = '\x01';
                  (**(code **)(*plVar11 + 0x3d8))(&local_180,&local_110);
                  plVar11 = local_80;
                  cVar6 = (char)local_c0;
                  if (local_80 == local_50) {
                    if ((cVar6 == '\0') && (local_80 != (int64_t *)0x0)) {
                      plVar11 = local_50;
                      if (local_78 != '\0') goto LAB_01baf323;
                      local_c8 = (int64_t *)CONCAT71(local_c8._1_7_,1);
                      FUN_00d50b00();
                    }
                    else {
                      local_c8 = (int64_t *)CONCAT71(local_c8._1_7_,cVar6);
                    }
LAB_01baf43d:
                    if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
                      FUN_00d50b20();
                    }
                  }
                  else {
                    if (local_78 == '\0') {
                      if (local_80 != (int64_t *)0x0) {
                        FUN_00d50b00();
                      }
                      local_c8 = (int64_t *)CONCAT71(local_c8._1_7_,1);
                      if ((cVar6 == '\0') || (local_50 == (int64_t *)0x0)) {
                        local_50 = plVar11;
                      }
                      else {
                        FUN_00d50b20();
                        local_50 = plVar11;
                      }
                      goto LAB_01baf43d;
                    }
                    if ((cVar6 != '\0') && (local_50 != (int64_t *)0x0)) {
                      FUN_00d50b20();
                    }
LAB_01baf323:
                    local_78 = '\0';
                    local_c8 = (int64_t *)CONCAT71(local_c8._1_7_,1);
                    local_50 = plVar11;
                  }
                  if ((local_178 != '\0') && (local_180 != 0)) {
                    FUN_00d50b20();
                  }
                  if ((local_108 != '\0') && (local_110 != 0)) {
                    FUN_00d50b20();
                  }
                  if ((local_88 != '\0') && (local_90 != 0)) {
                    FUN_00d50b20();
                  }
                }
                uVar15 = *(uint *)((int64_t)local_e0 + 0xc);
                pvVar9 = (void *)(uint64_t)uVar15;
                iVar7 = (int)local_50[3];
                iVar17 = iVar7 + 3;
                if (-1 < iVar7) {
                  iVar17 = iVar7;
                }
                local_c0 = CONCAT44(local_c0._4_4_,iVar17 >> 2);
                if (uVar15 == iVar17 >> 2) {
                  FUN_00c8e690();
                  plVar11 = local_80;
                  if ((((local_78 == '\0') && (local_80 != (int64_t *)0x0)) &&
                      (FUN_00d50b00(), local_78 != '\0')) && (local_80 != (int64_t *)0x0)) {
                    FUN_00d50b20();
                  }
                  FUN_00c92170();
                  FUN_00c92160();
                  if (3 < (int)*(uint *)(plVar11 + 3)) {
                    _memset_pattern16(pvVar9,(void *)((uint64_t)((*(uint *)(plVar11 + 3) >> 2) - 1)
                                                      * 4 + 4),(size_t)param_3);
                  }
                  local_1d0 = plVar11;
                  local_1c8 = '\0';
                  local_1c0 = local_b8;
                  local_1b8 = '\0';
                  FUN_01bb1010();
                  if ((local_1b8 != '\0') && (local_1c0 != (int64_t *)0x0)) {
                    FUN_00d50b20();
                  }
                  if ((local_1c8 != '\0') && (local_1d0 != (int64_t *)0x0)) {
                    FUN_00d50b20();
                  }
                  local_78 = '\0';
                  local_80 = (int64_t *)0x0;
                  local_70 = local_e0;
                  local_68 = 0xffffffff;
                  local_60 = 0;
                  local_68._4_4_ = 0;
                  do {
                    if (local_68._4_4_ != 0) {
                      if (local_68._4_4_ < 1) {
                        iVar7 = -local_68._4_4_;
                      }
                      else {
                        iVar7 = (int)local_68 - local_68._4_4_;
                        local_68 = CONCAT44(local_68._4_4_,iVar7);
                        FUN_00d23690();
                        local_60 = local_60 + local_68._4_4_;
                        iVar7 = 0;
                      }
                      local_68 = CONCAT44(iVar7,(int)local_68);
                    }
                    lVar10 = (int64_t)(int)local_68;
                    iVar7 = (int)local_68 + 1;
                    local_68 = CONCAT44(local_68._4_4_,iVar7);
                    if (*(int *)((int64_t)local_70 + 0xc) <= iVar7) goto LAB_01baf852;
                    lVar16 = local_70[2];
                    local_80 = *(int64_t **)(lVar16 + 8 + lVar10 * 8);
                    pvVar9 = _pthread_getspecific((void*)lVar16);
                    pVar14 = (void*)lVar16;
                    if (pvVar9 != (void *)0x0) {
                      FUN_00e8b990();
                    }
                    FUN_0125e930();
                    lVar10 = local_90;
                    if (local_90 == local_48) {
                      lVar10 = local_48;
                      bVar5 = bVar2;
                      if ((!bVar2) && (local_90 != 0)) {
                        if (local_88 != '\0') goto LAB_01baf6d4;
                        FUN_00d50b00();
                        bVar5 = true;
                      }
LAB_01baf730:
                      bVar2 = bVar5;
                      if ((local_88 != '\0') && (local_90 != 0)) {
                        FUN_00d50b20();
                      }
                      if (lVar10 == 0) goto LAB_01baf5f0;
LAB_01baf750:
                      pvVar9 = _pthread_getspecific(pVar14);
                      if (pvVar9 != (void *)0x0) {
                        FUN_00e8b990();
                      }
                      FUN_0152ebe0();
                      lVar16 = local_90;
                      if ((local_88 != '\0') && (local_90 != 0)) {
                        FUN_00d50b20();
                      }
                      if (lVar16 != 0) {
                        if (*(int *)(local_50[2] +
                                    ((int64_t)local_60 + (int64_t)(int)local_68) * 4) != -1000000)
                        {
                          local_290 = local_80;
                          local_288 = 0;
                          FUN_01bad8c0(((int64_t)local_60 + (int64_t)(int)local_68) * 4 +
                                       plVar11[2]);
                          local_280 = local_80;
                          local_278 = 0;
                          cVar6 = FUN_01bb10c0(*(void*)
                                                (plVar11[2] +
                                                ((int64_t)local_60 + (int64_t)(int)local_68) * 4))
                          ;
                          if (cVar6 == '\0') goto code_r0x01baf844;
                        }
                      }
                    }
                    else {
                      if (local_88 == '\0') {
                        if (local_90 != 0) {
                          FUN_00d50b00();
                        }
                        bVar5 = true;
                        if ((bVar2) && (local_48 != 0)) {
                          FUN_00d50b20();
                        }
                        goto LAB_01baf730;
                      }
                      if ((bVar2) && (local_48 != 0)) {
                        FUN_00d50b20();
                      }
LAB_01baf6d4:
                      bVar2 = true;
                      if (lVar10 != 0) goto LAB_01baf750;
LAB_01baf5f0:
                      lVar10 = 0;
                    }
                    plVar18 = (int64_t *)CONCAT71((int7)((uint64_t)lVar10 >> 8),1);
                    local_48 = lVar10;
                  } while( true );
                }
                bVar1 = false;
                goto LAB_01baf887;
              }
LAB_01baf8cf:
              FUN_01bb3e20();
              if (local_228 != (int64_t *)0x0) {
                FUN_00d50b20();
              }
              if (bVar1) goto LAB_01baf904;
              (**(code **)(*this_ptr + 0x678))();
LAB_01bafbf0:
              cVar6 = (char)uVar13;
            }
            if (local_e8 != (int64_t *)0x0) {
              FUN_00d50b20();
            }
            FUN_00d50b20();
            if ((cVar6 != '\0') && (local_50 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            iVar7 = FUN_00d8d560();
            if (iVar7 == 0) {
              iVar7 = FUN_01caecd0();
              if (iVar7 == 0) {
                FUN_01badcd0();
              }
              (**(code **)(*this_ptr + 0x630))();
              iVar7 = *(int *)((int64_t)local_b8 + 0xc);
              if ((char)local_b0 != '\0') {
                FUN_00d50b20();
              }
              if (iVar7 == 1) {
                FUN_01e07010();
              }
              (**(code **)(*this_ptr + 0x678))();
LAB_01baee52:
              if (local_f0 != (int64_t *)0x0) {
                FUN_00d50b20();
              }
              plVar18 = (int64_t *)0x0;
              if (((char)local_100 != '\0') && (local_d0 != (int64_t *)0x0)) {
                FUN_00d50b20();
                plVar18 = (int64_t *)0x0;
              }
              goto LAB_01bafee9;
            }
            iVar7 = FUN_01caecd0();
            if ((iVar7 == 2) || (iVar7 = FUN_01caecd0(), iVar7 == 0)) {
              iVar7 = FUN_01caecd0();
              if (iVar7 == 0) {
                FUN_01badcd0();
              }
              if (local_d0 != (int64_t *)0x0) {
                FUN_01a13070();
                local_160 = local_b8;
                local_158 = 0;
                if ((char)local_b0 == '\0') {
                  if (local_b8 != (int64_t *)0x0) {
                    FUN_00d50b00();
                  }
                }
                else {
                  local_b0._0_1_ = '\0';
                }
                local_158 = '\x01';
                (**(code **)(*local_d0 + 0x448))();
                if ((local_158 != '\0') && (local_160 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                if (((char)local_b0 != '\0') && (local_b8 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
              }
              FUN_01a13070();
              local_150 = local_b8;
              local_148 = 0;
              if ((char)local_b0 == '\0') {
                if (local_b8 != (int64_t *)0x0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_b0._0_1_ = '\0';
              }
              local_148 = '\x01';
              local_200 = local_d8;
              local_1f8 = '\0';
              (**(code **)(*this_ptr + 0x630))();
              local_140 = local_80;
              local_138 = 0;
              if (local_78 == '\0') {
                if (local_80 != (int64_t *)0x0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_78 = '\0';
              }
              local_138 = '\x01';
              uVar20 = FUN_00d8d560();
              FUN_01a29bc0(uVar20,&local_140,(uint64_t)local_e8 & 0xffffffff,1);
              if ((local_138 != '\0') && (local_140 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              if ((local_1f8 != '\0') && (local_200 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              if ((local_148 != '\0') && (local_150 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              if (((char)local_b0 != '\0') && (local_b8 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              if (local_d0 != (int64_t *)0x0) {
                (**(code **)(*local_d0 + 0x450))();
              }
              (**(code **)(*this_ptr + 0x630))();
              iVar7 = *(int *)((int64_t)local_b8 + 0xc);
              if ((char)local_b0 != '\0') {
                FUN_00d50b20();
              }
              if (iVar7 == 1) {
                FUN_01e07010();
                (**(code **)(*this_ptr + 0x678))();
              }
            }
            else {
              iVar7 = FUN_01caecd0();
              if (iVar7 == 3) {
                (**(code **)(*this_ptr + 0x678))();
                goto LAB_01baee52;
              }
            }
            bVar2 = false;
            local_48 = 0;
          }
          if (local_f0 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
          if (((char)local_100 != '\0') && (local_d0 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((bVar2) && (local_48 != 0)) {
            FUN_00d50b20();
          }
        }
LAB_01bafee9:
        if (!bVar3 && local_d8 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        goto LAB_01bae55f;
      }
    }
  }
  plVar18 = (int64_t *)0x0;
LAB_01bae55f:
  return (uint64_t)plVar18 & 0xffffffff;
code_r0x01baf844:
  bVar1 = false;
  plVar18 = (int64_t *)CONCAT71((int7)((uint64_t)lVar10 >> 8),1);
  local_48 = lVar10;
LAB_01baf852:
  uVar12 = FUN_01bb3ec0();
  if (plVar11 != (int64_t *)0x0) {
    uVar12 = FUN_00d50b20();
  }
  if (local_e0 != (int64_t *)0x0) {
LAB_01baf887:
    uVar12 = FUN_00d50b20();
  }
  uVar13 = CONCAT71((int7)((uint64_t)uVar12 >> 8),local_c8._0_1_);
  if (uVar15 != (uint)local_c0) {
    uVar13 = uVar13 & 0xffffffff;
    goto LAB_01baf8cf;
  }
  uVar13 = uVar13 & 0xffffffff;
  local_c0 = uVar13;
  if (local_a0._4_4_ != 0) {
    if (local_a0._4_4_ < 1) {
      iVar7 = -local_a0._4_4_;
    }
    else {
      local_a0 = CONCAT44(local_a0._4_4_,(int)local_a0 - local_a0._4_4_);
      FUN_00d23690();
      local_98 = local_98 + local_a0._4_4_;
      iVar7 = 0;
    }
    local_a0 = CONCAT44(iVar7,(int)local_a0);
  }
  goto LAB_01baef2f;
}

