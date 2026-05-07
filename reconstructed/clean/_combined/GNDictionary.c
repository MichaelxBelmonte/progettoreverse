// ===================================================================
// GNDictionary — Complete reconstructed pseudocode
// 49 functions
// ===================================================================


// ============================================================
// 019eca30
// ============================================================
// Function: FUN_019eca30
// Address: 019eca30
// Size: 7250 bytes
// Class: GNDictionary

uint64_t FUN_019eca30(int64_t *param_1,int64_t *param_2)

{
  double dVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  void *pvVar5;
  int64_t lVar6;
  void*puVar7;
  uint64_t uVar8;
  void*puVar9;
  int64_t *plVar10;
  void* pVar11;
  int64_t *plVar12;
  int64_t *plVar13;
  int64_t lVar14;
  void*in_RDX;
  int64_t **pplVar15;
  int64_t *arg1;
  int64_t *this_ptr;
  uint64_t uVar16;
  byte bVar17;
  int64_t *unaff_R14;
  undefined7 uVar18;
  uint64_t unaff_R15;
  bool bVar19;
  uint32_t uVar20;
  uint32_t uVar21;
  int64_t local_198;
  char local_190;
  int64_t *local_188;
  char local_180;
  int64_t local_178;
  char local_170;
  int64_t *local_168;
  char local_160;
  int64_t *local_158;
  char local_150;
  int64_t *local_148;
  char local_140;
  void*local_138;
  char local_130;
  void*local_128;
  void*local_120;
  int64_t local_118;
  char local_110;
  int64_t *local_108;
  uint64_t local_100;
  int64_t *local_f8;
  char local_f0;
  int64_t *local_e8;
  char local_e0;
  int64_t *local_d8;
  char local_d0;
  code *local_c8;
  int64_t *local_c0;
  int64_t *local_b8;
  int64_t *local_b0;
  char local_a8;
  uint64_t local_a0;
  int64_t *local_98;
  uint64_t local_90;
  int64_t *local_78;
  int64_t *local_70;
  int64_t *local_68;
  char local_60 [8];
  int64_t *local_58;
  uint64_t local_50;
  int local_48;
  int64_t *local_40;
  char local_38;
  
  plVar12 = param_1;
  local_128 = in_RDX;
  (**(code **)(*this_ptr + 0x7b0))();
  if (local_60[0] == '\0') {
    if (local_68 != (int64_t *)0x0) {
      local_108 = local_68;
      FUN_00d50b00();
      if ((local_60[0] != '\0') && (local_68 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_019ecaa9;
    }
  }
  else {
    local_108 = local_68;
    if (local_68 != (int64_t *)0x0) {
LAB_019ecaa9:
      local_98 = param_1;
      if (*param_1 == 0) {
LAB_019ecb14:
        if (*arg1 == 0) {
          (**(code **)(*this_ptr + 0xe88))();
          if (local_68 == (int64_t *)0x0) {
            local_70 = (int64_t *)0x0;
            uVar8 = 0;
          }
          else {
            local_70 = local_68;
            uVar18 = (undefined7)((uint64_t)unaff_R15 >> 8);
            if (local_60[0] == '\0') {
              FUN_00d50b00();
              uVar8 = CONCAT71(uVar18,1);
              if ((local_60[0] != '\0') && (local_68 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
            }
            else {
              local_60[0] = '\0';
              uVar8 = CONCAT71(uVar18,1);
            }
          }
LAB_019ece5a:
          pVar11 = (void*)plVar12;
          local_a0 = uVar8;
          if (local_70 == (int64_t *)0x0) {
            lVar6 = this_ptr[0x86];
            param_1 = local_98;
            goto joined_r0x019ece7a;
          }
LAB_019ed37a:
          uVar16 = 0;
          if (*arg1 == 0) goto LAB_019ed38a;
          goto LAB_019ed49a;
        }
        (**(code **)(*this_ptr + 0xe10))();
        unaff_R14 = local_68;
        if (local_60[0] == '\0') {
          if (local_68 != (int64_t *)0x0) {
            FUN_00d50b00();
            if ((local_60[0] != '\0') && (local_68 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            goto LAB_019ecc8e;
          }
        }
        else if (local_68 != (int64_t *)0x0) {
LAB_019ecc8e:
          local_60[0] = '\0';
          local_68 = (int64_t *)0x0;
          local_58 = unaff_R14;
          local_50 = 0xffffffff;
          local_48 = 0;
          while( true ) {
            lVar6 = (int64_t)(int)local_50;
            iVar4 = (int)local_50 + 1;
            local_50 = CONCAT44(local_50._4_4_,iVar4);
            plVar12 = local_58;
            if (*(int *)((int64_t)local_58 + 0xc) <= iVar4) break;
            plVar12 = (int64_t *)local_58[2];
            local_68 = (int64_t *)plVar12[lVar6 + 1];
            pvVar5 = _pthread_getspecific((void*)plVar12);
            if (pvVar5 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_01264240();
            plVar10 = local_40;
            plVar13 = (int64_t *)*arg1;
            if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if (plVar10 == plVar13) {
              if (local_68 != (int64_t *)0x0) {
                local_70 = local_68;
                if (local_60[0] == '\0') {
                  FUN_00d50b00();
                }
                else {
                  local_60[0] = '\0';
                }
                uVar8 = CONCAT71((int7)((uint64_t)plVar13 >> 8),1);
                goto LAB_019ece49;
              }
              break;
            }
            if (local_50._4_4_ != 0) {
              if (local_50._4_4_ < 1) {
                iVar4 = -local_50._4_4_;
              }
              else {
                local_50 = CONCAT44(local_50._4_4_,(int)local_50 - local_50._4_4_);
                FUN_00d23690();
                local_48 = local_48 + local_50._4_4_;
                iVar4 = 0;
              }
              local_50 = CONCAT44(iVar4,(int)local_50);
            }
          }
          uVar8 = 0;
          local_70 = (int64_t *)0x0;
LAB_019ece49:
          FUN_001159b0();
          FUN_00d50b20();
          goto LAB_019ece5a;
        }
        uVar8 = 0;
        lVar6 = this_ptr[0x86];
joined_r0x019ece7a:
        if ((lVar6 != 0) && (*arg1 == 0)) {
          FUN_00d50b00();
          FUN_019c1760();
          unaff_R14 = local_68;
          if ((local_60[0] == '\0') && (local_68 != (int64_t *)0x0)) {
            FUN_00d50b00();
          }
          FUN_00d50b20();
          if (unaff_R14 != (int64_t *)0x0) {
            if (*(int *)((int64_t)unaff_R14 + 0xc) == 0) {
              local_70 = (int64_t *)0x0;
            }
            else {
              FUN_01266770();
              local_70 = local_68;
              plVar12 = local_68;
              if (local_68 == (int64_t *)0x0) {
                local_70 = (int64_t *)0x0;
              }
              else {
                uVar18 = (undefined7)((uint64_t)uVar8 >> 8);
                if (local_60[0] == '\0') {
                  FUN_00d50b00();
                  uVar8 = CONCAT71(uVar18,1);
                  if ((local_60[0] != '\0') && (local_68 != (int64_t *)0x0)) {
                    FUN_00d50b20();
                  }
                }
                else {
                  local_60[0] = '\0';
                  uVar8 = CONCAT71(uVar18,1);
                }
              }
            }
            FUN_00d50b20();
            pVar11 = (void*)plVar12;
            param_1 = local_98;
            local_a0 = uVar8;
            if (local_70 != (int64_t *)0x0) goto LAB_019ed37a;
          }
        }
        (**(code **)(*this_ptr + 0x9c8))();
        unaff_R14 = local_68;
        if (local_60[0] == '\0') {
          if (((local_68 != (int64_t *)0x0) && (FUN_00d50b00(), local_60[0] != '\0')) &&
             (local_68 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_60[0] = '\0';
        }
        pVar11 = (void*)plVar12;
        if (unaff_R14 != (int64_t *)0x0) {
          if (*(int *)((int64_t)unaff_R14 + 0xc) == 0) {
            local_70 = (int64_t *)0x0;
          }
          else {
            FUN_00d23310();
            local_70 = local_68;
            pVar11 = (void*)CONCAT71((int7)((uint64_t)plVar12 >> 8),local_60[0]);
            pplVar15 = &local_40;
            if (local_60[0] != '\0') {
              pplVar15 = (int64_t **)local_60;
            }
            local_40 = (int64_t *)CONCAT71(local_40._1_7_,local_60[0]);
            *(char *)pplVar15 = '\0';
            if ((local_60[0] != '\0') && (local_68 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if (local_70 == (int64_t *)0x0) {
              local_70 = (int64_t *)0x0;
            }
            else {
              uVar8 = CONCAT71((int7)((uint64_t)uVar8 >> 8),1);
              if ((char)local_40 == '\0') {
                FUN_00d50b00();
              }
            }
          }
          FUN_00d50b20();
          param_1 = local_98;
          local_a0 = uVar8;
          if (local_70 != (int64_t *)0x0) goto LAB_019ed37a;
        }
        (**(code **)(*this_ptr + 0x9b0))();
        if (local_68 == (int64_t *)0x0) {
          bVar19 = false;
        }
        else {
          (**(code **)(*this_ptr + 0x9b0))();
          bVar19 = *(int *)((int64_t)local_40 + 0xc) != 0;
          if (local_38 != '\0') {
            FUN_00d50b20();
          }
        }
        if ((local_60[0] != '\0') && (local_68 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (bVar19) {
          uVar18 = (undefined7)((uint64_t)uVar8 >> 8);
          if (*param_1 == 0) {
            (**(code **)(*this_ptr + 0x9b0))();
            local_e8 = local_40;
            local_e0 = 0;
            if (local_38 == '\0') {
              if (local_40 != (int64_t *)0x0) {
                FUN_00d50b00();
              }
            }
            else {
              local_38 = '\0';
            }
            local_e0 = '\x01';
            FUN_01266770();
            local_70 = local_68;
            plVar12 = local_68;
            if (local_68 == (int64_t *)0x0) {
              local_70 = (int64_t *)0x0;
            }
            else if (local_60[0] == '\0') {
              FUN_00d50b00();
              uVar8 = CONCAT71(uVar18,1);
              if ((local_60[0] != '\0') && (local_68 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
            }
            else {
              local_60[0] = '\0';
              uVar8 = CONCAT71(uVar18,1);
            }
            pVar11 = (void*)plVar12;
            if ((local_e0 != '\0') && (local_e8 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            local_a0 = uVar8;
            if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            pvVar5 = _pthread_getspecific(pVar11);
            if (pvVar5 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_012e7210();
            local_f8 = local_40;
            local_f0 = 0;
            if (local_38 == '\0') {
              if (local_40 != (int64_t *)0x0) {
                FUN_00d50b00();
              }
            }
            else {
              local_38 = '\0';
            }
            local_f0 = '\x01';
            FUN_01266770();
            local_70 = local_68;
            plVar12 = local_68;
            if (local_68 == (int64_t *)0x0) {
              local_70 = (int64_t *)0x0;
            }
            else if (local_60[0] == '\0') {
              FUN_00d50b00();
              uVar8 = CONCAT71(uVar18,1);
              if ((local_60[0] != '\0') && (local_68 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
            }
            else {
              local_60[0] = '\0';
              uVar8 = CONCAT71(uVar18,1);
            }
            pVar11 = (void*)plVar12;
            if ((local_f0 != '\0') && (local_f8 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            local_a0 = uVar8;
            if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
          goto LAB_019ed37a;
        }
        uVar16 = 0;
        local_a0 = uVar8;
        if (*arg1 != 0) {
          local_70 = (int64_t *)0x0;
          goto LAB_019ed49a;
        }
      }
      else {
        (**(code **)(*this_ptr + 0x988))();
        local_68 = (int64_t *)*param_1;
        local_60[0] = '\0';
        uVar3 = FUN_00d23d70();
        unaff_R14 = (int64_t *)(uint64_t)uVar3;
        if ((local_60[0] != '\0') && (local_68 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((char)uVar3 != '\0') goto LAB_019ecb14;
        pvVar5 = _pthread_getspecific((void*)plVar12);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012e5ae0();
        FUN_00d23310();
        local_70 = local_68;
        pVar11 = (void*)CONCAT71((int7)((uint64_t)plVar12 >> 8),local_60[0]);
        pplVar15 = &local_b0;
        if (local_60[0] != '\0') {
          pplVar15 = (int64_t **)local_60;
        }
        local_b0._0_1_ = local_60[0];
        *(char *)pplVar15 = '\0';
        if ((local_60[0] != '\0') && (local_70 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (local_70 == (int64_t *)0x0) {
          local_70 = (int64_t *)0x0;
          local_a0 = 0;
        }
        else {
          local_a0 = CONCAT71((int7)((uint64_t)local_70 >> 8),1);
          if ((char)local_b0 == '\0') {
            FUN_00d50b00();
          }
        }
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        uVar16 = 1;
        if (*arg1 != 0) goto LAB_019ed49a;
LAB_019ed38a:
        if (local_70 == (int64_t *)0x0) {
          uVar16 = 0;
          goto LAB_019ed67f;
        }
        pvVar5 = _pthread_getspecific(pVar11);
        if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
          pVar11 = (void*)local_70;
        }
        FUN_01264240();
        plVar12 = local_68;
        unaff_R14 = (int64_t *)*arg1;
        if (unaff_R14 == local_68) {
          if (((char)arg1[1] == '\0') && (local_68 != (int64_t *)0x0)) {
            if (local_60[0] != '\0') goto LAB_019ed42b;
            FUN_00d50b00();
            goto LAB_019ed471;
          }
LAB_019ed479:
          if ((local_60[0] != '\0') && (local_68 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          lVar6 = arg1[1];
          if (local_60[0] == '\0') {
            if (local_68 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
            *arg1 = (int64_t)plVar12;
            if (((char)lVar6 != '\0') && (unaff_R14 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
LAB_019ed471:
            *(void*)(arg1 + 1) = 1;
            goto LAB_019ed479;
          }
          *arg1 = (int64_t)local_68;
          if (((char)lVar6 != '\0') && (unaff_R14 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
LAB_019ed42b:
          *(void*)(arg1 + 1) = 1;
        }
        if (*arg1 == 0) {
LAB_019ed665:
          uVar16 = 0;
        }
        else {
LAB_019ed49a:
          pvVar5 = _pthread_getspecific(pVar11);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01320d00();
          pvVar5 = _pthread_getspecific(pVar11);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0124e100();
          if (*(int *)((int64_t)local_68 + 0xc) != 0) {
            if (local_60[0] != '\0') {
              FUN_00d50b20();
            }
            if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            goto LAB_019ed665;
          }
          pvVar5 = _pthread_getspecific(pVar11);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          iVar4 = FUN_01326de0();
          if ((local_60[0] != '\0') && (local_68 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (iVar4 == 0) goto LAB_019ed665;
          if ((this_ptr[0x75] != 0) &&
             (cVar2 = (**(code **)("/System/Library/Frameworks/ImageIO.framework/Versions/A/ImageIO"
                                  + *this_ptr))(), cVar2 != '\0')) {
            (**(code **)(*(int64_t *)this_ptr[0x75] + 0x918))();
          }
          puVar7 = (void*)FUN_00e8fc40();
          FUN_00d4ff40();
          pVar11 = 0x2572358;
          local_c0 = (int64_t *)&g_02572358;
          *puVar7 = &g_02572358;
          local_c8 = g_02572370;
          (*g_02572370)();
          local_120 = puVar7;
          (**(code **)(*this_ptr + 0x9b0))();
          plVar12 = local_68;
          if (local_60[0] == '\0') {
            if (local_68 != (int64_t *)0x0) {
              FUN_00d50b00();
              if ((local_60[0] != '\0') && (local_68 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              goto LAB_019ed6c5;
            }
LAB_019ed7aa:
            local_100 = 0;
          }
          else {
            if (local_68 == (int64_t *)0x0) goto LAB_019ed7aa;
LAB_019ed6c5:
            local_60[0] = '\0';
            local_68 = (int64_t *)0x0;
            local_58 = plVar12;
            local_50 = 0xffffffff;
            local_48 = 0;
            while( true ) {
              lVar6 = (int64_t)(int)local_50;
              iVar4 = (int)local_50 + 1;
              local_50 = CONCAT44(local_50._4_4_,iVar4);
              if (*(int *)((int64_t)local_58 + 0xc) <= iVar4) break;
              local_68 = *(int64_t **)(local_58[2] + 8 + lVar6 * 8);
              pvVar5 = _pthread_getspecific((void*)local_58[2]);
              if (pvVar5 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_01264240();
              plVar12 = local_40;
              unaff_R14 = (int64_t *)*arg1;
              if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              if (plVar12 == unaff_R14) {
                FUN_0039e8b0();
                local_d8 = local_40;
                local_d0 = 0;
                if (local_38 == '\0') {
                  if (local_40 != (int64_t *)0x0) {
                    FUN_00d50b00();
                  }
                }
                else {
                  local_38 = '\0';
                }
                local_d0 = '\x01';
                plVar12 = (int64_t *)0x0;
                local_100 = FUN_012912a0(0,0,0);
                if ((local_d0 != '\0') && (local_d8 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                goto LAB_019ed89a;
              }
              if (local_50._4_4_ != 0) {
                if (local_50._4_4_ < 1) {
                  iVar4 = -local_50._4_4_;
                }
                else {
                  local_50 = CONCAT44(local_50._4_4_,(int)local_50 - local_50._4_4_);
                  FUN_00d23690();
                  local_48 = local_48 + local_50._4_4_;
                  iVar4 = 0;
                }
                local_50 = CONCAT44(iVar4,(int)local_50);
              }
            }
            local_100 = 0;
            plVar12 = local_58;
LAB_019ed89a:
            pVar11 = (void*)plVar12;
            FUN_001159b0();
            FUN_00d50b20();
          }
          plVar12 = local_98;
          if ((char)uVar16 == '\0') {
            if ((*local_98 == 0) && (local_70 != (int64_t *)0x0)) {
              pvVar5 = _pthread_getspecific(pVar11);
              if (pvVar5 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_01266fe0();
              plVar13 = local_68;
              unaff_R14 = (int64_t *)*plVar12;
              if (unaff_R14 == local_68) {
                if (((char)plVar12[1] != '\0') || (local_68 == (int64_t *)0x0)) goto LAB_019eda63;
                if (local_60[0] == '\0') {
                  FUN_00d50b00();
                  goto LAB_019eda53;
                }
              }
              else {
                lVar6 = plVar12[1];
                if (local_60[0] == '\0') {
                  if (local_68 != (int64_t *)0x0) {
                    FUN_00d50b00();
                  }
                  *local_98 = (int64_t)plVar13;
                  if (((char)lVar6 != '\0') && (unaff_R14 != (int64_t *)0x0)) {
                    FUN_00d50b20();
                  }
LAB_019eda53:
                  *(void*)(plVar12 + 1) = 1;
                  plVar12 = local_98;
LAB_019eda63:
                  if ((local_60[0] != '\0') && (local_68 != (int64_t *)0x0)) {
                    FUN_00d50b20();
                  }
                  goto LAB_019eda77;
                }
                *plVar12 = (int64_t)local_68;
                if (((char)lVar6 != '\0') && (unaff_R14 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
              }
              *(void*)(plVar12 + 1) = 1;
              plVar12 = local_98;
            }
LAB_019eda77:
            (**(code **)(*this_ptr + 0xe10))();
            local_78 = local_68;
            plVar13 = local_68;
            if (local_68 == (int64_t *)0x0) {
              uVar18 = (undefined7)((uint64_t)unaff_R14 >> 8);
              bVar17 = 1;
              local_90 = 0;
              local_78 = (int64_t *)0x0;
            }
            else if (local_60[0] == '\0') {
              uVar8 = FUN_00d50b00();
              bVar17 = 0;
              uVar18 = 0;
              local_90 = CONCAT71((int7)((uint64_t)uVar8 >> 8),1);
              if ((local_60[0] != '\0') && (local_68 != (int64_t *)0x0)) {
                uVar8 = FUN_00d50b20();
                local_90 = CONCAT71((int7)((uint64_t)uVar8 >> 8),1);
                bVar17 = 0;
                uVar18 = 0;
              }
            }
            else {
              bVar17 = 0;
              uVar18 = 0;
              local_90 = CONCAT71((int7)((uint64_t)local_68 >> 8),1);
            }
            pVar11 = (void*)plVar13;
            if ((*(int *)((int64_t)local_78 + 0xc) == 0) && (*plVar12 != 0)) {
              local_b8 = (int64_t *)(**(code **)(*this_ptr + 0xa50))();
              pvVar5 = _pthread_getspecific(pVar11);
              if (pvVar5 != (void *)0x0) {
                FUN_00e8b990();
              }
              uVar8 = FUN_012e9900((int)local_b8);
              plVar13 = local_68;
              if (local_68 == local_78) {
                bVar17 = bVar17 & local_68 != (int64_t *)0x0;
                pplVar15 = (int64_t **)CONCAT71(uVar18,bVar17);
                if (bVar17 != 1) {
                  pplVar15 = (int64_t **)(local_90 & 0xffffffff);
LAB_019edc28:
                  if ((local_60[0] != '\0') && (local_68 != (int64_t *)0x0)) {
                    FUN_00d50b20();
                  }
                  goto LAB_019edc3c;
                }
                if (local_60[0] == '\0') {
                  pplVar15 = (int64_t **)CONCAT71(uVar18,1);
                  FUN_00d50b00();
                  goto LAB_019edc28;
                }
                local_90 = CONCAT71((int7)((uint64_t)uVar8 >> 8),1);
LAB_019edc5d:
                plVar12 = local_78;
                local_b8 = local_78;
                if (*(int *)((int64_t)local_78 + 0xc) != 0) {
                  plVar13 = (int64_t *)*arg1;
                  local_60[0] = '\0';
                  local_68 = (int64_t *)0x0;
                  local_48 = 0;
                  local_50 = 0;
                  local_58 = local_78;
                  if (0 < *(int *)((int64_t)local_78 + 0xc)) {
                    lVar6 = 0;
                    pplVar15 = &local_40;
                    do {
                      local_68 = *(int64_t **)(local_78[2] + lVar6 * 8);
                      pvVar5 = _pthread_getspecific((void*)local_78);
                      if (pvVar5 != (void *)0x0) {
                        FUN_00e8b990();
                      }
                      FUN_01264240();
                      plVar10 = local_40;
                      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
                        FUN_00d50b20();
                      }
                      if (plVar10 == plVar13) {
                        FUN_001159b0();
                        plVar12 = local_98;
                        goto LAB_019ede5d;
                      }
                      lVar6 = lVar6 + 1;
                      local_50 = CONCAT44(local_50._4_4_,(int)lVar6);
                    } while (lVar6 < *(int *)((int64_t)local_78 + 0xc));
                  }
                  FUN_001159b0();
                }
                pVar11 = (void*)plVar12;
                plVar12 = local_98;
                plVar13 = local_b8;
              }
              else {
                if (local_60[0] == '\0') {
                  if (local_68 != (int64_t *)0x0) {
                    FUN_00d50b00();
                  }
                  pplVar15 = (int64_t **)CONCAT71(uVar18,1);
                  if ((char)local_90 == '\0') {
                    local_78 = plVar13;
                  }
                  else {
                    local_78 = plVar13;
                    FUN_00d50b20();
                  }
                  goto LAB_019edc28;
                }
                pplVar15 = (int64_t **)CONCAT71(uVar18,1);
                if ((char)local_90 == '\0') {
                  local_78 = local_68;
                }
                else {
                  local_78 = local_68;
                  FUN_00d50b20();
                }
LAB_019edc3c:
                plVar13 = local_78;
                if (local_78 != (int64_t *)0x0) {
                  local_90 = (uint64_t)pplVar15 & 0xffffffff;
                  goto LAB_019edc5d;
                }
                local_78 = (int64_t *)0x0;
                local_90 = (uint64_t)pplVar15 & 0xffffffff;
              }
              pvVar5 = _pthread_getspecific(pVar11);
              if (pvVar5 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_012e5ae0();
              plVar10 = local_68;
              uVar18 = (undefined7)((uint64_t)pplVar15 >> 8);
              if (local_68 == plVar13) {
                if (((char)local_90 == '\0') && (local_78 != (int64_t *)0x0)) {
                  uVar16 = CONCAT71(uVar18,1);
                  if (local_60[0] != '\0') goto LAB_019ede53;
                  uVar16 = CONCAT71(uVar18,1);
                  FUN_00d50b00();
                }
                else {
                  uVar16 = local_90 & 0xffffffff;
                }
LAB_019ede3f:
                if ((local_60[0] != '\0') && (local_68 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
              }
              else {
                if (local_60[0] == '\0') {
                  if (local_68 != (int64_t *)0x0) {
                    FUN_00d50b00();
                  }
                  uVar16 = CONCAT71(uVar18,1);
                  if (((char)local_90 == '\0') || (local_78 == (int64_t *)0x0)) {
                    local_78 = plVar10;
                  }
                  else {
                    local_78 = plVar10;
                    FUN_00d50b20();
                  }
                  goto LAB_019ede3f;
                }
                uVar16 = CONCAT71(uVar18,1);
                if (((char)local_90 == '\0') || (local_78 == (int64_t *)0x0)) {
                  local_78 = local_68;
                }
                else {
                  local_78 = local_68;
                  FUN_00d50b20();
                }
              }
LAB_019ede53:
              local_90 = uVar16 & 0xffffffff;
            }
          }
          else {
            pvVar5 = _pthread_getspecific(pVar11);
            if (pvVar5 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_012e7210();
            local_78 = local_68;
            if (local_68 == (int64_t *)0x0) {
              local_90 = 0;
              local_78 = (int64_t *)0x0;
            }
            else {
              local_90 = CONCAT71((int7)((uint64_t)local_68 >> 8),1);
              if (((local_60[0] == '\0') && (FUN_00d50b00(local_68), local_60[0] != '\0')) &&
                 (local_68 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
            }
          }
LAB_019ede5d:
          puVar7 = (void*)FUN_00e8fc40();
          FUN_00d4ff40();
          *puVar7 = local_c0;
          (*local_c8)();
          puVar9 = (void*)FUN_00e8fc40();
          FUN_00d4ff40();
          *puVar9 = local_c0;
          (*local_c8)();
          if (local_78 != (int64_t *)0x0) {
            local_60[0] = '\0';
            local_68 = (int64_t *)0x0;
            local_58 = local_78;
            local_50 = 0xffffffff;
            local_48 = 0;
            local_50._4_4_ = 0;
            while( true ) {
              if (local_50._4_4_ != 0) {
                if (local_50._4_4_ < 1) {
                  iVar4 = -local_50._4_4_;
                }
                else {
                  iVar4 = (int)local_50 - local_50._4_4_;
                  local_50 = CONCAT44(local_50._4_4_,iVar4);
                  FUN_00d23690();
                  local_48 = local_48 + local_50._4_4_;
                  iVar4 = 0;
                }
                local_50 = CONCAT44(iVar4,(int)local_50);
              }
              lVar6 = (int64_t)(int)local_50;
              iVar4 = (int)local_50 + 1;
              local_50 = CONCAT44(local_50._4_4_,iVar4);
              if (*(int *)((int64_t)local_58 + 0xc) <= iVar4) break;
              lVar14 = local_58[2];
              local_68 = *(int64_t **)(lVar14 + 8 + lVar6 * 8);
              pvVar5 = _pthread_getspecific((void*)lVar14);
              pVar11 = (void*)lVar14;
              if (pvVar5 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_01264240();
              plVar13 = local_40;
              plVar12 = (int64_t *)*arg1;
              if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              if (plVar13 == plVar12) {
                local_40 = local_68;
                local_38 = '\0';
                FUN_00d21140();
                if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                (**(code **)(*this_ptr + 0xe10))();
                local_40 = local_68;
                local_38 = '\0';
                cVar2 = FUN_00d23d70();
                if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                if ((local_a8 != '\0') && (CONCAT71(local_b0._1_7_,(char)local_b0) != 0)) {
                  FUN_00d50b20();
                }
                if (cVar2 != '\0') {
                  pvVar5 = _pthread_getspecific(pVar11);
                  if (pvVar5 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  FUN_0125e7c0();
                  plVar12 = (int64_t *)CONCAT71(local_b0._1_7_,(char)local_b0);
                  if (local_a8 == '\0') {
                    if (plVar12 != (int64_t *)0x0) {
                      FUN_00d50b00();
                    }
                  }
                  else {
                    local_a8 = '\0';
                  }
                  local_38 = '\0';
                  local_40 = plVar12;
                  FUN_00d21140();
                  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
                    FUN_00d50b20();
                  }
                  if (plVar12 != (int64_t *)0x0) {
                    FUN_00d50b20();
                  }
                  if ((local_a8 != '\0') && (CONCAT71(local_b0._1_7_,(char)local_b0) != 0)) {
                    FUN_00d50b20();
                  }
                }
              }
            }
            FUN_001159b0();
            plVar12 = local_98;
          }
          uVar20 = (**(code **)(*this_ptr + 0xda0))();
          (**(code **)(*this_ptr + 0xec8))(uVar20,0);
          local_c8 = (**(code **)(*this_ptr + 0xa50))();
          local_b8 = param_2;
          uVar20 = (**(code **)(*this_ptr + 0xa98))();
          uVar21 = (**(code **)(&UNK_000014c8 + *this_ptr))();
          plVar13 = local_68;
          if ((((local_60[0] == '\0') && (local_68 != (int64_t *)0x0)) &&
              (uVar21 = FUN_00d50b00(), local_60[0] != '\0')) && (local_68 != (int64_t *)0x0)) {
            uVar21 = FUN_00d50b20();
          }
          local_60[0] = '\0';
          local_68 = (int64_t *)0x0;
          local_c0 = plVar13;
          local_98 = (int64_t *)(**(code **)(&UNK_000014d8 + *this_ptr))(uVar21,&local_68);
          local_198 = *arg1;
          local_190 = '\0';
          local_188 = local_108;
          local_180 = '\0';
          local_178 = *plVar12;
          local_170 = '\0';
          (**(code **)(&UNK_000014e0 + *this_ptr))((int)local_98,&local_198,&local_178);
          plVar12 = (int64_t *)this_ptr[0x87];
          plVar10 = plVar12;
          if (plVar12 != local_40) {
            if (local_38 == '\0') {
              if (local_40 == (int64_t *)0x0) {
                plVar10 = (int64_t *)0x0;
              }
              else {
                FUN_00d50b00();
                plVar12 = (int64_t *)this_ptr[0x87];
                plVar10 = local_40;
              }
            }
            else {
              local_38 = '\0';
              plVar10 = local_40;
            }
            this_ptr[0x87] = (int64_t)plVar10;
            if (plVar12 != (int64_t *)0x0) {
              FUN_00d50b20();
              plVar10 = local_40;
            }
          }
          if ((local_38 != '\0') && (plVar10 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_170 != '\0') && (local_178 != 0)) {
            FUN_00d50b20();
          }
          if ((local_180 != '\0') && (local_188 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_190 != '\0') && (local_198 != 0)) {
            FUN_00d50b20();
          }
          FUN_01953c70((int)local_100);
          plVar12 = (int64_t *)this_ptr[0x87];
          (**(code **)(*this_ptr + 0xef8))();
          (**(code **)(*plVar12 + 0xef0))();
          plVar12 = (int64_t *)this_ptr[0x87];
          *(void*)((int64_t)plVar12 + 0x4dd) = *(void*)((int64_t)this_ptr + 0x4dd);
          local_168 = (int64_t *)*local_128;
          local_160 = '\0';
          (**(code **)(*plVar12 + 0x968))((int)local_98);
          if ((local_160 != '\0') && (local_168 != (int64_t *)0x0)) {
            (**(code **)(*local_168 + 0x10))();
            FUN_00d50b20();
          }
          local_158 = plVar13;
          local_150 = '\0';
          (**(code **)(&UNK_000014d0 + *(int64_t *)this_ptr[0x87]))();
          if ((local_150 != '\0') && (local_158 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          local_148 = local_68;
          local_140 = '\0';
          FUN_01953b50();
          if ((local_140 != '\0') && (local_148 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          local_128 = (void*)FUN_01953bb0((int)local_c8);
          dVar1 = (double)FUN_01953bb0(SUB84((double)local_c8 + (double)local_b8,0));
          (**(code **)(&UNK_00001608 + *this_ptr))((int)local_128,dVar1 - (double)local_128);
          FUN_019af2a0();
          (**(code **)(*(int64_t *)this_ptr[0x87] + 0xaa0))(uVar20);
          FUN_01e42250();
          FUN_01e42030();
          local_110 = 0;
          local_118 = this_ptr[0x87];
          if (local_118 != 0) {
            FUN_00d50b00();
          }
          local_110 = '\x01';
          FUN_01d8c720();
          plVar12 = local_c0;
          if ((local_110 != '\0') && (local_118 != 0)) {
            FUN_00d50b20();
          }
          if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          plVar13 = (int64_t *)this_ptr[0x87];
          local_130 = '\0';
          local_138 = puVar9;
          FUN_00e7b500(0,0);
          (**(code **)(*plVar13 + 0xe08))();
          if ((local_130 != '\0') && (local_138 != (void*)0x0)) {
            FUN_00d50b20();
          }
          (**(code **)(*(int64_t *)this_ptr[0x87] + 0x7b8))();
          (**(code **)(*local_40 + 0x620))();
          if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_60[0] != '\0') && (local_68 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (plVar12 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
          if (puVar9 != (void*)0x0) {
            FUN_00d50b20();
          }
          if (puVar7 != (void*)0x0) {
            FUN_00d50b20();
          }
          if (((char)local_90 != '\0') && (local_78 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          uVar16 = CONCAT71((int7)((uint64_t)puVar7 >> 8),1);
          if (local_120 != (void*)0x0) {
            FUN_00d50b20();
          }
        }
        bVar19 = (char)local_a0 != '\0';
        if ((bVar19) && (local_70 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
LAB_019ed67f:
      FUN_00d50b20();
      goto LAB_019ed68b;
    }
  }
  uVar16 = 0;
LAB_019ed68b:
  return uVar16 & 0xffffffff;
}



// ============================================================
// 01cdb6a0
// ============================================================
// Function: FUN_01cdb6a0
// Address: 01cdb6a0
// Size: 6355 bytes
// Class: GNDictionary
// String references:
//   "GNDictionary"
//   "type mismatch: 'sub' should be a dictionary"
//   "type mismatch: 'margins' should a dictionaries"

void FUN_01cdb6a0(uint64_t param_1,uint64_t param_2)

{
  int64_t lVar1;
  int64_t lVar2;
  void*puVar3;
  bool bVar4;
  bool bVar5;
  int64_t *plVar6;
  char cVar7;
  char cVar8;
  uint uVar9;
  uint32_t uVar10;
  int iVar11;
  void*puVar12;
  int64_t *plVar13;
  int64_t *plVar14;
  int64_t *arg1;
  int64_t *this_ptr;
  uint uVar15;
  int64_t *plVar16;
  int64_t **pplVar17;
  uint64_t uVar18;
  uint64_t extraout_XMM0_Qa;
  uint64_t extraout_XMM0_Qa_00;
  uint64_t extraout_XMM0_Qa_01;
  uint64_t extraout_XMM0_Qa_02;
  uint64_t extraout_XMM0_Qa_03;
  uint64_t extraout_XMM0_Qa_04;
  uint64_t extraout_XMM0_Qa_05;
  uint64_t extraout_XMM0_Qb;
  uint8_t auVar19 [16];
  uint8_t auVar20 [16];
  uint32_t uVar21;
  int64_t *local_2e8;
  uint8_t local_2e0;
  int64_t local_2c0;
  char local_2b8;
  int64_t local_2b0;
  char local_2a8;
  int64_t local_2a0;
  char local_298;
  int64_t local_290;
  char local_288;
  int64_t local_280;
  char local_278;
  int64_t local_270;
  char local_268;
  int64_t local_260;
  char local_258;
  int64_t local_250;
  char local_248;
  int64_t *local_240;
  char local_238;
  int64_t local_230;
  char local_228;
  int64_t local_220;
  char local_218;
  int64_t local_210;
  char local_208;
  int64_t local_200;
  char local_1f8;
  int64_t local_1f0;
  char local_1e8;
  int64_t local_1e0;
  char local_1d8;
  int64_t local_1d0;
  char local_1c8;
  int64_t local_1c0;
  char local_1b8;
  int64_t local_1b0;
  char local_1a8;
  int64_t local_1a0;
  char local_198;
  int64_t local_190;
  char local_188;
  int64_t local_180;
  char local_178;
  int64_t local_170;
  char local_168;
  int64_t *local_160;
  char local_158;
  int64_t local_150;
  char local_148;
  int64_t *local_140;
  char local_138;
  int64_t local_130;
  char local_128;
  int64_t *local_120;
  char local_118;
  int64_t *local_110;
  char local_108;
  int64_t local_100;
  char local_f8;
  int64_t *local_f0;
  int64_t local_e8;
  char local_e0;
  int64_t local_d8;
  char local_d0;
  int64_t local_c8;
  char local_c0;
  int64_t local_b8;
  char local_b0;
  int64_t local_a8;
  char local_a0;
  int64_t local_98;
  char local_90;
  int64_t local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  int64_t *local_68;
  uint64_t uStack_60;
  int64_t local_50;
  char local_48;
  int64_t *local_40;
  char local_38;
  uint64_t extraout_XMM0_Qb_00;
  
  uVar21 = (uint32_t)((uint64_t)param_2 >> 0x20);
  uVar10 = (uint32_t)param_2;
  lVar1 = *arg1;
  *(void*)(lVar1 + 0x50) = 1;
  *(void*)(lVar1 + 0x54) = 0x12;
  lVar1 = g_027dbf08;
  if (g_027dbf08 != 0) {
    FUN_00d50b00();
  }
  uVar18 = FUN_000175c0();
  local_e8 = local_50;
  local_e0 = 0;
  if (local_48 == '\0') {
    if (local_50 != 0) {
      uVar18 = FUN_00d50b00();
    }
  }
  else {
    local_48 = '\0';
  }
  local_e0 = '\x01';
  uVar18 = (**(code **)(*this_ptr + 0x3b8))(uVar18,&local_e8);
  lVar2 = *arg1;
  plVar16 = *(int64_t **)(lVar2 + 0x10);
  plVar13 = plVar16;
  if (plVar16 != local_40) {
    if (local_38 == '\0') {
      if (local_40 == (int64_t *)0x0) {
        plVar13 = (int64_t *)0x0;
        goto LAB_01cdb775;
      }
      uVar18 = FUN_00d50b00();
      plVar16 = *(int64_t **)(lVar2 + 0x10);
      *(int64_t **)(lVar2 + 0x10) = local_40;
      plVar13 = local_40;
    }
    else {
      local_38 = '\0';
      plVar13 = local_40;
LAB_01cdb775:
      *(int64_t **)(lVar2 + 0x10) = plVar13;
    }
    if (plVar16 != (int64_t *)0x0) {
      uVar18 = FUN_00d50b20();
      plVar13 = local_40;
    }
  }
  if ((local_38 != '\0') && (plVar13 != (int64_t *)0x0)) {
    uVar18 = FUN_00d50b20();
  }
  if ((local_e0 != '\0') && (local_e8 != 0)) {
    uVar18 = FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    uVar18 = FUN_00d50b20();
  }
  if (lVar1 != 0) {
    uVar18 = FUN_00d50b20();
  }
  lVar1 = g_027dbf08;
  if (*(int64_t *)(*arg1 + 0x10) == 0) {
    if (g_027dbf08 != 0) {
      uVar18 = FUN_00d50b00();
    }
    local_2c0 = lVar1;
    local_2b8 = '\x01';
    FUN_000175c0(uVar18,&local_2c0);
    local_d8 = local_50;
    local_d0 = 0;
    if (local_48 == '\0') {
      if (local_50 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_48 = '\0';
    }
    local_d0 = '\x01';
    uVar18 = FUN_01d4f450();
    lVar1 = *arg1;
    plVar16 = *(int64_t **)(lVar1 + 0x10);
    plVar13 = plVar16;
    if (plVar16 != local_40) {
      if (local_38 == '\0') {
        if (local_40 == (int64_t *)0x0) {
          plVar13 = (int64_t *)0x0;
          goto LAB_01cdc509;
        }
        uVar18 = FUN_00d50b00();
        plVar16 = *(int64_t **)(lVar1 + 0x10);
        *(int64_t **)(lVar1 + 0x10) = local_40;
        plVar13 = local_40;
      }
      else {
        local_38 = '\0';
        plVar13 = local_40;
LAB_01cdc509:
        *(int64_t **)(lVar1 + 0x10) = plVar13;
      }
      if (plVar16 != (int64_t *)0x0) {
        uVar18 = FUN_00d50b20();
        plVar13 = local_40;
      }
    }
    if ((local_38 != '\0') && (plVar13 != (int64_t *)0x0)) {
      uVar18 = FUN_00d50b20();
    }
    if ((local_d0 != '\0') && (local_d8 != 0)) {
      uVar18 = FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      uVar18 = FUN_00d50b20();
    }
    if ((local_2b8 != '\0') && (local_2c0 != 0)) {
      uVar18 = FUN_00d50b20();
    }
  }
  lVar1 = g_027eec98;
  if (g_027eec98 != 0) {
    uVar18 = FUN_00d50b00();
  }
  local_2b0 = lVar1;
  local_2a8 = '\x01';
  uVar18 = FUN_000175c0(uVar18,&local_2b0);
  local_c8 = local_50;
  local_c0 = 0;
  if (local_48 == '\0') {
    if (local_50 != 0) {
      uVar18 = FUN_00d50b00();
    }
  }
  else {
    local_48 = '\0';
  }
  local_c0 = '\x01';
  uVar18 = (**(code **)(*this_ptr + 0x3b8))(uVar18,&local_c8);
  lVar1 = *arg1;
  plVar16 = *(int64_t **)(lVar1 + 0x18);
  plVar13 = plVar16;
  if (plVar16 != local_40) {
    if (local_38 == '\0') {
      if (local_40 == (int64_t *)0x0) {
        plVar13 = (int64_t *)0x0;
        goto LAB_01cdb927;
      }
      uVar18 = FUN_00d50b00();
      plVar16 = *(int64_t **)(lVar1 + 0x18);
      *(int64_t **)(lVar1 + 0x18) = local_40;
      plVar13 = local_40;
    }
    else {
      local_38 = '\0';
      plVar13 = local_40;
LAB_01cdb927:
      *(int64_t **)(lVar1 + 0x18) = plVar13;
    }
    if (plVar16 != (int64_t *)0x0) {
      uVar18 = FUN_00d50b20();
      plVar13 = local_40;
    }
  }
  if ((local_38 != '\0') && (plVar13 != (int64_t *)0x0)) {
    uVar18 = FUN_00d50b20();
  }
  if ((local_c0 != '\0') && (local_c8 != 0)) {
    uVar18 = FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    uVar18 = FUN_00d50b20();
  }
  if ((local_2a8 != '\0') && (local_2b0 != 0)) {
    uVar18 = FUN_00d50b20();
  }
  lVar1 = g_027eec98;
  if (*(int64_t *)(*arg1 + 0x18) == 0) {
    if (g_027eec98 != 0) {
      uVar18 = FUN_00d50b00();
    }
    local_2a0 = lVar1;
    local_298 = '\x01';
    FUN_000175c0(uVar18,&local_2a0);
    local_b8 = local_50;
    local_b0 = 0;
    if (local_48 == '\0') {
      if (local_50 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_48 = '\0';
    }
    local_b0 = '\x01';
    uVar18 = FUN_01d4f450();
    lVar1 = *arg1;
    plVar16 = *(int64_t **)(lVar1 + 0x18);
    plVar13 = plVar16;
    if (plVar16 != local_40) {
      if (local_38 == '\0') {
        if (local_40 == (int64_t *)0x0) {
          plVar13 = (int64_t *)0x0;
          goto LAB_01cdc56e;
        }
        uVar18 = FUN_00d50b00();
        plVar16 = *(int64_t **)(lVar1 + 0x18);
        *(int64_t **)(lVar1 + 0x18) = local_40;
        plVar13 = local_40;
      }
      else {
        local_38 = '\0';
        plVar13 = local_40;
LAB_01cdc56e:
        *(int64_t **)(lVar1 + 0x18) = plVar13;
      }
      if (plVar16 != (int64_t *)0x0) {
        uVar18 = FUN_00d50b20();
        plVar13 = local_40;
      }
    }
    if ((local_38 != '\0') && (plVar13 != (int64_t *)0x0)) {
      uVar18 = FUN_00d50b20();
    }
    if ((local_b0 != '\0') && (local_b8 != 0)) {
      uVar18 = FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      uVar18 = FUN_00d50b20();
    }
    if ((local_298 != '\0') && (local_2a0 != 0)) {
      uVar18 = FUN_00d50b20();
    }
  }
  lVar1 = g_027eeca0;
  if (g_027eeca0 != 0) {
    uVar18 = FUN_00d50b00();
  }
  local_290 = lVar1;
  local_288 = '\x01';
  uVar18 = FUN_000175c0(uVar18,&local_290);
  local_a8 = local_50;
  local_a0 = 0;
  if (local_48 == '\0') {
    if (local_50 != 0) {
      uVar18 = FUN_00d50b00();
    }
  }
  else {
    local_48 = '\0';
  }
  local_a0 = '\x01';
  uVar18 = (**(code **)(*this_ptr + 0x3b8))(uVar18,&local_a8);
  lVar1 = *arg1;
  plVar16 = *(int64_t **)(lVar1 + 0x28);
  plVar13 = plVar16;
  if (plVar16 != local_40) {
    if (local_38 == '\0') {
      if (local_40 == (int64_t *)0x0) {
        plVar13 = (int64_t *)0x0;
        goto LAB_01cdbad9;
      }
      uVar18 = FUN_00d50b00();
      plVar16 = *(int64_t **)(lVar1 + 0x28);
      *(int64_t **)(lVar1 + 0x28) = local_40;
      plVar13 = local_40;
    }
    else {
      local_38 = '\0';
      plVar13 = local_40;
LAB_01cdbad9:
      *(int64_t **)(lVar1 + 0x28) = plVar13;
    }
    if (plVar16 != (int64_t *)0x0) {
      uVar18 = FUN_00d50b20();
      plVar13 = local_40;
    }
  }
  if ((local_38 != '\0') && (plVar13 != (int64_t *)0x0)) {
    uVar18 = FUN_00d50b20();
  }
  if ((local_a0 != '\0') && (local_a8 != 0)) {
    uVar18 = FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    uVar18 = FUN_00d50b20();
  }
  if ((local_288 != '\0') && (local_290 != 0)) {
    uVar18 = FUN_00d50b20();
  }
  lVar1 = g_027eeca0;
  if (*(int64_t *)(*arg1 + 0x28) == 0) {
    if (g_027eeca0 != 0) {
      uVar18 = FUN_00d50b00();
    }
    local_280 = lVar1;
    local_278 = '\x01';
    FUN_000175c0(uVar18,&local_280);
    local_98 = local_50;
    local_90 = 0;
    if (local_48 == '\0') {
      if (local_50 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_48 = '\0';
    }
    local_90 = '\x01';
    uVar18 = FUN_01d4f450();
    lVar1 = *arg1;
    plVar16 = *(int64_t **)(lVar1 + 0x28);
    plVar13 = plVar16;
    if (plVar16 != local_40) {
      if (local_38 == '\0') {
        if (local_40 == (int64_t *)0x0) {
          plVar13 = (int64_t *)0x0;
          goto LAB_01cdc5d3;
        }
        uVar18 = FUN_00d50b00();
        plVar16 = *(int64_t **)(lVar1 + 0x28);
        *(int64_t **)(lVar1 + 0x28) = local_40;
        plVar13 = local_40;
      }
      else {
        local_38 = '\0';
        plVar13 = local_40;
LAB_01cdc5d3:
        *(int64_t **)(lVar1 + 0x28) = plVar13;
      }
      if (plVar16 != (int64_t *)0x0) {
        uVar18 = FUN_00d50b20();
        plVar13 = local_40;
      }
    }
    if ((local_38 != '\0') && (plVar13 != (int64_t *)0x0)) {
      uVar18 = FUN_00d50b20();
    }
    if ((local_90 != '\0') && (local_98 != 0)) {
      uVar18 = FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      uVar18 = FUN_00d50b20();
    }
    if ((local_278 != '\0') && (local_280 != 0)) {
      uVar18 = FUN_00d50b20();
    }
  }
  lVar1 = g_027eeca8;
  if (g_027eeca8 != 0) {
    uVar18 = FUN_00d50b00();
  }
  local_270 = lVar1;
  local_268 = '\x01';
  uVar18 = FUN_000175c0(uVar18,&local_270);
  local_88 = local_50;
  local_80 = 0;
  if (local_48 == '\0') {
    if (local_50 != 0) {
      uVar18 = FUN_00d50b00();
    }
  }
  else {
    local_48 = '\0';
  }
  local_80 = '\x01';
  uVar18 = (**(code **)(*this_ptr + 0x3b8))(uVar18,&local_88);
  lVar1 = *arg1;
  plVar16 = *(int64_t **)(lVar1 + 0x20);
  plVar13 = plVar16;
  if (plVar16 != local_40) {
    if (local_38 == '\0') {
      if (local_40 == (int64_t *)0x0) {
        plVar13 = (int64_t *)0x0;
        goto LAB_01cdbc79;
      }
      uVar18 = FUN_00d50b00();
      plVar16 = *(int64_t **)(lVar1 + 0x20);
      *(int64_t **)(lVar1 + 0x20) = local_40;
      plVar13 = local_40;
    }
    else {
      local_38 = '\0';
      plVar13 = local_40;
LAB_01cdbc79:
      *(int64_t **)(lVar1 + 0x20) = plVar13;
    }
    if (plVar16 != (int64_t *)0x0) {
      uVar18 = FUN_00d50b20();
      plVar13 = local_40;
    }
  }
  if ((local_38 != '\0') && (plVar13 != (int64_t *)0x0)) {
    uVar18 = FUN_00d50b20();
  }
  if ((local_80 != '\0') && (local_88 != 0)) {
    uVar18 = FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    uVar18 = FUN_00d50b20();
  }
  if ((local_268 != '\0') && (local_270 != 0)) {
    uVar18 = FUN_00d50b20();
  }
  lVar1 = g_027eeca8;
  if (*(int64_t *)(*arg1 + 0x20) == 0) {
    if (g_027eeca8 != 0) {
      uVar18 = FUN_00d50b00();
    }
    local_260 = lVar1;
    local_258 = '\x01';
    FUN_000175c0(uVar18,&local_260);
    local_78 = local_50;
    local_70 = 0;
    if (local_48 == '\0') {
      if (local_50 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_48 = '\0';
    }
    local_70 = '\x01';
    uVar18 = FUN_01d4f450();
    lVar1 = *arg1;
    plVar16 = *(int64_t **)(lVar1 + 0x20);
    plVar13 = plVar16;
    if (plVar16 != local_40) {
      if (local_38 == '\0') {
        if (local_40 == (int64_t *)0x0) {
          plVar13 = (int64_t *)0x0;
          goto LAB_01cdc62f;
        }
        uVar18 = FUN_00d50b00();
        plVar16 = *(int64_t **)(lVar1 + 0x20);
        *(int64_t **)(lVar1 + 0x20) = local_40;
        plVar13 = local_40;
      }
      else {
        local_38 = '\0';
        plVar13 = local_40;
LAB_01cdc62f:
        *(int64_t **)(lVar1 + 0x20) = plVar13;
      }
      if (plVar16 != (int64_t *)0x0) {
        uVar18 = FUN_00d50b20();
        plVar13 = local_40;
      }
    }
    if ((local_38 != '\0') && (plVar13 != (int64_t *)0x0)) {
      uVar18 = FUN_00d50b20();
    }
    if ((local_70 != '\0') && (local_78 != 0)) {
      uVar18 = FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      uVar18 = FUN_00d50b20();
    }
    if ((local_258 != '\0') && (local_260 != 0)) {
      uVar18 = FUN_00d50b20();
    }
  }
  lVar1 = g_027eecb0;
  if (g_027eecb0 != 0) {
    uVar18 = FUN_00d50b00();
  }
  local_250 = lVar1;
  local_248 = '\x01';
  uVar18 = FUN_000175c0(uVar18,&local_250);
  plVar16 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != (int64_t *)0x0) && (uVar18 = FUN_00d50b00(), local_38 != '\0')) &&
       (local_40 != (int64_t *)0x0)) {
      uVar18 = FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_248 != '\0') && (local_250 != 0)) {
    uVar18 = FUN_00d50b20();
  }
  local_f0 = plVar16;
  if (plVar16 == (int64_t *)0x0) {
    if (*(int64_t *)(*arg1 + 0x10) != 0) {
      local_68 = (int64_t *)FUN_01d526f0();
      uStack_60 = extraout_XMM0_Qb;
      auVar19._0_8_ = FUN_01d526f0();
      auVar19._8_8_ = extraout_XMM0_Qb_00;
      auVar20._8_8_ = uStack_60;
      auVar20._0_8_ = local_68;
      auVar20 = blendps(auVar19,auVar20,0xd);
      lVar1 = *arg1;
      uVar18 = auVar20._0_8_;
      *(void*)(lVar1 + 0x30) = 0;
      *(void*)(lVar1 + 0x38) = uVar18;
    }
  }
  else {
    local_240 = plVar16;
    local_238 = '\0';
    uVar18 = FUN_00d96410();
    lVar1 = *arg1;
    *(void*)(lVar1 + 0x30) = uVar18;
    *(uint64_t *)(lVar1 + 0x38) = CONCAT44(uVar21,uVar10);
    if ((local_238 != '\0') && (local_240 != (int64_t *)0x0)) {
      uVar18 = FUN_00d50b20();
    }
  }
  lVar1 = g_027cd550;
  if (g_027cd550 != 0) {
    uVar18 = FUN_00d50b00();
  }
  local_230 = lVar1;
  local_228 = '\x01';
  FUN_000175c0(uVar18,&local_230);
  plVar16 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != (int64_t *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
       (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_228 != '\0') && (local_230 != 0)) {
    FUN_00d50b20();
  }
  lVar1 = g_027eecb8;
  local_68 = plVar16;
  if (plVar16 != (int64_t *)0x0) {
    if (g_027eecb8 != 0) {
      FUN_00d50b00();
    }
    local_220 = lVar1;
    local_218 = '\x01';
    cVar7 = FUN_00d90eb0();
    lVar1 = g_027eecc0;
    uVar9 = 1;
    if (cVar7 == '\0') {
      if (g_027eecc0 != 0) {
        FUN_00d50b00();
      }
      local_210 = lVar1;
      local_208 = '\x01';
      uVar9 = FUN_00d90eb0();
      if ((local_208 != '\0') && (local_210 != 0)) {
        FUN_00d50b20();
      }
    }
    if ((local_218 != '\0') && (local_220 != 0)) {
      FUN_00d50b20();
    }
    lVar1 = g_027eecc8;
    if (g_027eecc8 != 0) {
      FUN_00d50b00();
    }
    local_200 = lVar1;
    local_1f8 = '\x01';
    cVar7 = FUN_00d90eb0();
    lVar1 = g_027eecd0;
    cVar8 = '\x01';
    if (cVar7 == '\0') {
      if (g_027eecd0 != 0) {
        FUN_00d50b00();
      }
      local_1f0 = lVar1;
      local_1e8 = '\x01';
      cVar8 = FUN_00d90eb0();
      if ((local_1e8 != '\0') && (local_1f0 != 0)) {
        FUN_00d50b20();
      }
    }
    if ((local_1f8 != '\0') && (local_200 != 0)) {
      FUN_00d50b20();
    }
    lVar1 = g_027eecd8;
    uVar15 = (uVar9 & 0xff) + 4;
    if (cVar8 == '\0') {
      uVar15 = uVar9 & 0xff;
    }
    if (g_027eecd8 != 0) {
      FUN_00d50b00();
    }
    local_1e0 = lVar1;
    local_1d8 = '\x01';
    cVar7 = FUN_00d90eb0();
    lVar1 = g_027eece0;
    cVar8 = '\x01';
    if (cVar7 == '\0') {
      if (g_027eece0 != 0) {
        FUN_00d50b00();
      }
      local_1d0 = lVar1;
      local_1c8 = '\x01';
      cVar8 = FUN_00d90eb0();
      if ((local_1c8 != '\0') && (local_1d0 != 0)) {
        FUN_00d50b20();
      }
    }
    if ((local_1d8 != '\0') && (local_1e0 != 0)) {
      FUN_00d50b20();
    }
    lVar1 = g_027eece8;
    if (cVar8 != '\0') {
      uVar15 = uVar15 + 8;
    }
    if (g_027eece8 != 0) {
      FUN_00d50b00();
    }
    local_1c0 = lVar1;
    local_1b8 = '\x01';
    cVar7 = FUN_00d90eb0();
    lVar1 = g_027eecf0;
    cVar8 = '\x01';
    if (cVar7 == '\0') {
      if (g_027eecf0 != 0) {
        FUN_00d50b00();
      }
      local_1b0 = lVar1;
      local_1a8 = '\x01';
      cVar8 = FUN_00d90eb0();
      if ((local_1a8 != '\0') && (local_1b0 != 0)) {
        FUN_00d50b20();
      }
    }
    if ((local_1b8 != '\0') && (local_1c0 != 0)) {
      FUN_00d50b20();
    }
    lVar1 = g_027eecf8;
    if (cVar8 != '\0') {
      uVar15 = uVar15 + 0x20;
    }
    if (g_027eecf8 != 0) {
      FUN_00d50b00();
    }
    local_1a0 = lVar1;
    local_198 = '\x01';
    cVar7 = FUN_00d90eb0();
    lVar1 = g_027eed00;
    cVar8 = '\x01';
    if (cVar7 == '\0') {
      if (g_027eed00 != 0) {
        FUN_00d50b00();
      }
      local_190 = lVar1;
      local_188 = '\x01';
      cVar8 = FUN_00d90eb0();
      if ((local_188 != '\0') && (local_190 != 0)) {
        FUN_00d50b20();
      }
    }
    if ((local_198 != '\0') && (local_1a0 != 0)) {
      FUN_00d50b20();
    }
    lVar1 = g_027eed08;
    uVar9 = uVar15 | 2;
    if (cVar8 == '\0') {
      uVar9 = uVar15;
    }
    if (g_027eed08 != 0) {
      FUN_00d50b00();
    }
    local_180 = lVar1;
    local_178 = '\x01';
    cVar7 = FUN_00d90eb0();
    lVar1 = g_027eed10;
    cVar8 = '\x01';
    if (cVar7 == '\0') {
      if (g_027eed10 != 0) {
        FUN_00d50b00();
      }
      local_170 = lVar1;
      local_168 = '\x01';
      cVar8 = FUN_00d90eb0();
      if ((local_168 != '\0') && (local_170 != 0)) {
        FUN_00d50b20();
      }
    }
    if ((local_178 != '\0') && (local_180 != 0)) {
      FUN_00d50b20();
    }
    uVar15 = uVar9 | 0x10;
    if (cVar8 == '\0') {
      uVar15 = uVar9;
    }
    *(uint *)(*arg1 + 0x54) = uVar15;
  }
  plVar16 = g_027eed18;
  if (g_027eed18 != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  local_40 = plVar16;
  local_38 = '\0';
  cVar7 = FUN_00c9ff50();
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar16 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (cVar7 != '\0') {
    puVar12 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar12 = &g_024d6a08;
    puVar12[2] = 0;
    puVar12[3] = 0;
    puVar12[4] = 0;
    puVar12[5] = 0;
    puVar12[6] = 0;
    puVar12[7] = 0;
    puVar12[8] = 0;
    puVar12[9] = 0;
    *(void*)(puVar12 + 10) = 0;
    *(void*)((int64_t)puVar12 + 0x54) = 0;
    *(void*)((int64_t)puVar12 + 0x5c) = 0;
    *(void*)((int64_t)puVar12 + 100) = 0;
    uVar18 = FUN_00d500e0();
    puVar3 = *(void**)(*arg1 + 0x60);
    if (puVar3 == puVar12) {
      uVar18 = FUN_00d50b20();
    }
    else {
      *(void**)(*arg1 + 0x60) = puVar12;
      if (puVar3 != (void*)0x0) {
        uVar18 = FUN_00d50b20();
      }
    }
    plVar16 = g_027eed18;
    if (g_027eed18 != (int64_t *)0x0) {
      uVar18 = FUN_00d50b00();
    }
    local_160 = plVar16;
    local_158 = '\x01';
    pplVar17 = &local_40;
    uVar18 = FUN_000175c0(uVar18,&local_160);
    plVar16 = local_40;
    if ((g_026fdd40 == '\0') &&
       (iVar11 = ___cxa_guard_acquire(), uVar18 = extraout_XMM0_Qa_04, iVar11 != 0)) {
      g_026cd0e8 = FUN_00d4fe50();
      g_026cd0d0 = "GNDictionary";
      g_026cd0d8 = 0x28;
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
      uVar18 = ___cxa_guard_release();
    }
    if (plVar16 == (int64_t *)0x0) {
LAB_01cdc482:
      pplVar17 = (int64_t **)&g_02802688;
    }
    else {
      (**(code **)(*plVar16 + 0x360))();
      cVar7 = FUN_00e85ea0();
      uVar18 = extraout_XMM0_Qa;
      if (cVar7 == '\0') goto LAB_01cdc482;
    }
    plVar16 = *pplVar17;
    if (plVar16 == (int64_t *)0x0) {
      bVar5 = true;
      bVar4 = true;
      plVar16 = (int64_t *)0x0;
    }
    else {
      if (*(char *)(pplVar17 + 1) == '\0') {
        uVar18 = FUN_00d50b00();
      }
      else {
        *(void*)(pplVar17 + 1) = 0;
      }
      bVar5 = false;
      bVar4 = false;
    }
    if ((local_38 != '\0') && (bVar4 = bVar5, local_40 != (int64_t *)0x0)) {
      uVar18 = FUN_00d50b20();
    }
    if ((local_158 != '\0') && (local_160 != (int64_t *)0x0)) {
      uVar18 = FUN_00d50b20();
    }
    lVar1 = g_027eec90;
    if (plVar16 == (int64_t *)0x0) {
      if (g_027eec90 != 0) {
        uVar18 = FUN_00d50b00();
      }
      local_150 = lVar1;
      local_148 = '\x01';
      uVar18 = FUN_00cc7b40(uVar18,g_025908a0);
      if ((local_148 != '\0') && (local_150 != 0)) {
        uVar18 = FUN_00d50b20();
      }
    }
    local_f8 = 0;
    lVar1 = *(int64_t *)(*arg1 + 0x60);
    if (lVar1 != 0) {
      uVar18 = FUN_00d50b00();
    }
    local_f8 = '\x01';
    local_2e0 = 0;
    local_2e8 = plVar16;
    local_100 = lVar1;
    FUN_01cdb6a0(uVar18,&local_2e8);
    if ((local_f8 != '\0') && (local_100 != 0)) {
      FUN_00d50b20();
    }
    if (!bVar4 && plVar16 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  plVar16 = g_027f3348;
  if (g_027f3348 != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  local_40 = plVar16;
  local_38 = '\0';
  cVar7 = FUN_00c9ff50();
  uVar18 = extraout_XMM0_Qa_00;
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    uVar18 = FUN_00d50b20();
  }
  if (plVar16 != (int64_t *)0x0) {
    uVar18 = FUN_00d50b20();
  }
  plVar16 = g_027f3348;
  plVar14 = local_68;
  plVar13 = local_f0;
  if (cVar7 == '\0') goto LAB_01cdcb31;
  if (g_027f3348 != (int64_t *)0x0) {
    uVar18 = FUN_00d50b00();
  }
  local_140 = plVar16;
  local_138 = '\x01';
  pplVar17 = &local_40;
  uVar18 = FUN_000175c0(uVar18,&local_140);
  plVar16 = local_40;
  if ((g_026fdd40 == '\0') &&
     (iVar11 = ___cxa_guard_acquire(), uVar18 = extraout_XMM0_Qa_05, iVar11 != 0)) {
    g_026cd0e8 = FUN_00d4fe50();
    g_026cd0d0 = "GNDictionary";
    g_026cd0d8 = 0x28;
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
    uVar18 = ___cxa_guard_release();
  }
  if (plVar16 == (int64_t *)0x0) {
LAB_01cdc7db:
    pplVar17 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar16 + 0x360))();
    cVar7 = FUN_00e85ea0();
    uVar18 = extraout_XMM0_Qa_01;
    if (cVar7 == '\0') goto LAB_01cdc7db;
  }
  plVar16 = *pplVar17;
  if (*(char *)(pplVar17 + 1) == '\0') {
    if (plVar16 != (int64_t *)0x0) {
      uVar18 = FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar17 + 1) = 0;
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    uVar18 = FUN_00d50b20();
  }
  if ((local_138 != '\0') && (local_140 != (int64_t *)0x0)) {
    uVar18 = FUN_00d50b20();
  }
  lVar1 = g_027eec90;
  if (plVar16 == (int64_t *)0x0) {
    if (g_027eec90 != 0) {
      uVar18 = FUN_00d50b00();
    }
    local_130 = lVar1;
    local_128 = '\x01';
    FUN_00cc7b40(uVar18,g_025908a0);
    if ((local_128 != '\0') && (local_130 != 0)) {
      FUN_00d50b20();
    }
  }
  FUN_00c8e690();
  plVar13 = local_40;
  if ((((local_38 == '\0') && (local_40 != (int64_t *)0x0)) && (FUN_00d50b00(), local_38 != '\0'))
     && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00c92170();
  FUN_00c92160();
  ___bzero();
  plVar14 = *(int64_t **)(*arg1 + 0x58);
  if (plVar14 == plVar13) {
    FUN_00d50b20();
  }
  else {
    *(int64_t **)(*arg1 + 0x58) = plVar13;
    if (plVar14 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  plVar13 = g_027e1428;
  if (g_027e1428 != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  local_40 = plVar13;
  local_38 = '\0';
  cVar7 = FUN_00c9ff50();
  uVar18 = extraout_XMM0_Qa_02;
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    uVar18 = FUN_00d50b20();
  }
  if (plVar13 != (int64_t *)0x0) {
    uVar18 = FUN_00d50b20();
  }
  plVar13 = g_027e1428;
  if (cVar7 != '\0') {
    if (g_027e1428 != (int64_t *)0x0) {
      uVar18 = FUN_00d50b00();
    }
    local_120 = plVar13;
    local_118 = '\x01';
    FUN_01cde020(uVar18,&local_120);
    uVar10 = FUN_00d45870();
    **(void**)(*(int64_t *)(*arg1 + 0x58) + 0x10) = uVar10;
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_118 != '\0') && (local_120 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  plVar13 = g_027e7c70;
  if (g_027e7c70 != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  local_40 = plVar13;
  local_38 = '\0';
  cVar7 = FUN_00c9ff50();
  uVar18 = extraout_XMM0_Qa_03;
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    uVar18 = FUN_00d50b20();
  }
  if (plVar13 != (int64_t *)0x0) {
    uVar18 = FUN_00d50b20();
  }
  plVar14 = local_68;
  plVar13 = local_f0;
  plVar6 = g_027e7c70;
  if (cVar7 != '\0') {
    if (g_027e7c70 != (int64_t *)0x0) {
      uVar18 = FUN_00d50b00();
    }
    local_110 = plVar6;
    local_108 = '\x01';
    FUN_01cde020(uVar18,&local_110);
    uVar10 = FUN_00d45870();
    *(void*)(*(int64_t *)(*(int64_t *)(*arg1 + 0x58) + 0x10) + 8) = uVar10;
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_108 != '\0') && (local_110 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  if (plVar16 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
LAB_01cdcb31:
  if (plVar14 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (plVar13 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 00dc8890
// ============================================================
// Function: FUN_00dc8890
// Address: 00dc8890
// Size: 4453 bytes
// Class: GNDictionary
// String references:
//   "GNDictionary"

void FUN_00dc8890(uint64_t param_1,uint64_t param_2)

{
  int64_t lVar1;
  int64_t *plVar2;
  int64_t *plVar3;
  int64_t *plVar4;
  char cVar5;
  short sVar6;
  int iVar7;
  int iVar8;
  int64_t *plVar9;
  int64_t lVar10;
  char *pcVar11;
  int64_t **pplVar12;
  int64_t *arg1;
  void*this_ptr;
  int64_t *plVar13;
  int64_t lVar14;
  uint32_t extraout_XMM0_Da;
  uint32_t uVar15;
  uint32_t extraout_XMM0_Da_00;
  uint32_t extraout_XMM0_Da_01;
  uint32_t extraout_XMM0_Da_02;
  uint32_t extraout_XMM0_Da_03;
  uint32_t extraout_XMM0_Da_04;
  uint32_t extraout_XMM0_Da_05;
  uint32_t extraout_XMM0_Da_06;
  uint32_t extraout_XMM0_Da_07;
  uint32_t extraout_XMM0_Da_08;
  uint32_t extraout_XMM0_Da_09;
  int64_t local_2c0;
  uint8_t local_2b8;
  int64_t local_2b0;
  uint8_t local_2a8;
  int64_t local_2a0;
  uint8_t local_298;
  int64_t local_290;
  uint8_t local_288;
  int64_t local_280;
  uint8_t local_278;
  int64_t local_270;
  uint8_t local_268;
  int64_t local_260;
  uint8_t local_258;
  int64_t local_250;
  uint8_t local_248;
  int64_t *local_240;
  uint8_t local_238;
  int64_t *local_230;
  uint8_t local_228;
  uint64_t local_220;
  char local_208;
  undefined7 uStack_207;
  char local_200;
  int64_t local_1f8;
  char local_1f0;
  int64_t *local_1e8;
  char local_1e0;
  int64_t *local_1d8;
  char local_1d0;
  int64_t local_1c8;
  char local_1c0;
  int64_t local_1b8;
  char local_1b0;
  int64_t local_1a8;
  char local_1a0;
  int64_t local_198;
  char local_190;
  int64_t local_188;
  char local_180;
  int64_t local_178;
  char local_170;
  int64_t *local_168;
  char local_160;
  int64_t local_158;
  char local_150;
  int64_t *local_148;
  char local_140;
  int64_t *local_138;
  char local_130;
  int64_t *local_128;
  char local_120;
  int64_t local_118;
  char local_110;
  int64_t *local_108;
  char local_100;
  int64_t *local_f8;
  int64_t *local_f0;
  char local_e8;
  int64_t *local_e0;
  char local_d8;
  int64_t *local_d0;
  char local_c8;
  int64_t *local_c0;
  char local_b8;
  int64_t *local_b0;
  char local_a8;
  int64_t *local_a0;
  char local_98;
  char local_70 [8];
  int64_t *local_68;
  char local_60 [8];
  int64_t *local_58;
  char local_50 [8];
  int64_t *local_48;
  int local_40;
  int iStack_3c;
  int local_38;
  
  FUN_00d6c870();
  plVar4 = local_58;
  if ((((local_50[0] == '\0') && (local_58 != (int64_t *)0x0)) &&
      (FUN_00d50b00(), local_50[0] != '\0')) && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  lVar14 = g_027c6f60;
  if (g_027c6f60 != 0) {
    FUN_00d50b00();
  }
  local_188 = lVar14;
  local_180 = '\x01';
  cVar5 = (**(code **)(*plVar4 + 0x50))();
  uVar15 = extraout_XMM0_Da;
  if ((local_180 != '\0') && (local_188 != 0)) {
    uVar15 = FUN_00d50b20();
  }
  lVar10 = g_02783b28;
  lVar14 = g_027648d0;
  if (cVar5 != '\0') {
    if (g_027648d0 != 0) {
      uVar15 = FUN_00d50b00();
    }
    local_178 = lVar14;
    local_170 = '\0';
    FUN_01de4130(uVar15,&local_178);
    plVar4 = local_58;
    if (local_50[0] == '\0') {
      if (((local_58 != (int64_t *)0x0) && (FUN_00d50b00(), local_50[0] != '\0')) &&
         (local_58 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_50[0] = '\0';
    }
    if ((local_170 != '\0') && (local_178 != 0)) {
      FUN_00d50b20();
    }
    if (plVar4 == (int64_t *)0x0) {
      *(void*)(this_ptr + 1) = 0;
      *this_ptr = 0;
    }
    else {
      local_168 = plVar4;
      local_160 = '\0';
      FUN_00c923f0();
      plVar4 = local_58;
      *(void*)(this_ptr + 1) = 0;
      if (local_50[0] == '\0') {
        if (local_58 == (int64_t *)0x0) {
          *this_ptr = 0;
          *(void*)(this_ptr + 1) = 1;
        }
        else {
          FUN_00d50b00();
          *this_ptr = plVar4;
          *(void*)(this_ptr + 1) = 1;
          if ((local_50[0] != '\0') && (local_58 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
      }
      else {
        *this_ptr = local_58;
        *(void*)(this_ptr + 1) = 1;
        local_50[0] = '\0';
      }
      if ((local_160 != '\0') && (local_168 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    if (lVar14 != 0) {
      FUN_00d50b20();
    }
    goto LAB_00dc9a11;
  }
  local_2b0 = *arg1;
  local_2a8 = 0;
  if (g_02783b28 != 0) {
    uVar15 = FUN_00d50b00();
  }
  local_2a0 = lVar10;
  local_298 = 1;
  FUN_00dbdbc0(uVar15,&local_2a0);
  local_e0 = local_58;
  local_d8 = 0;
  if ((local_50[0] == '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  local_d8 = '\x01';
  cVar5 = (**(code **)(*plVar4 + 0x50))();
  uVar15 = extraout_XMM0_Da_00;
  if ((local_d8 != '\0') && (local_e0 != (int64_t *)0x0)) {
    uVar15 = FUN_00d50b20();
  }
  if (lVar10 != 0) {
    uVar15 = FUN_00d50b20();
  }
  lVar10 = g_02783b50;
  lVar14 = g_02783b18;
  if (cVar5 != '\0') {
    if (g_02783b18 != 0) {
      uVar15 = FUN_00d50b00();
    }
    local_158 = lVar14;
    local_150 = '\0';
    FUN_01de4130(uVar15,&local_158);
    plVar4 = local_58;
    *(void*)(this_ptr + 1) = 0;
    if (local_50[0] == '\0') {
      if (local_58 == (int64_t *)0x0) {
        *this_ptr = 0;
        *(void*)(this_ptr + 1) = 1;
      }
      else {
        FUN_00d50b00();
        *this_ptr = plVar4;
        *(void*)(this_ptr + 1) = 1;
        if ((local_50[0] != '\0') && (local_58 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    else {
      *this_ptr = local_58;
      *(void*)(this_ptr + 1) = 1;
      local_50[0] = '\0';
    }
    if ((local_150 != '\0') && (local_158 != 0)) {
      FUN_00d50b20();
    }
    if (lVar14 != 0) {
      FUN_00d50b20();
    }
    goto LAB_00dc9a11;
  }
  local_290 = *arg1;
  local_288 = 0;
  if (g_02783b50 != 0) {
    uVar15 = FUN_00d50b00();
  }
  local_280 = lVar10;
  local_278 = 1;
  FUN_00dbdbc0(uVar15,&local_280);
  local_d0 = local_58;
  local_c8 = 0;
  if ((local_50[0] == '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  local_c8 = '\x01';
  cVar5 = (**(code **)(*plVar4 + 0x50))();
  if ((local_c8 != '\0') && (local_d0 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (lVar10 != 0) {
    FUN_00d50b20();
  }
  if (cVar5 == '\0') {
    plVar9 = (int64_t *)FUN_00e8fc40();
    FUN_00022d50();
    uVar15 = (**(code **)(*plVar9 + 0x18))();
    plVar13 = g_027f37d8;
    local_148 = plVar4;
    local_140 = '\0';
    if (g_027f37d8 != (int64_t *)0x0) {
      uVar15 = FUN_00d50b00();
    }
    local_58 = plVar13;
    local_50[0] = '\0';
    uVar15 = FUN_00ca0840(uVar15,&local_58);
    if ((local_50[0] != '\0') && (local_58 != (int64_t *)0x0)) {
      uVar15 = FUN_00d50b20();
    }
    if (plVar13 != (int64_t *)0x0) {
      uVar15 = FUN_00d50b20();
    }
    if ((local_140 != '\0') && (local_148 != (int64_t *)0x0)) {
      uVar15 = FUN_00d50b20();
    }
    lVar14 = g_02783b18;
    local_270 = *arg1;
    local_268 = 0;
    if (g_02783b18 != 0) {
      uVar15 = FUN_00d50b00();
    }
    local_260 = lVar14;
    local_258 = 1;
    FUN_00dbdbc0(uVar15,&local_260);
    plVar13 = local_58;
    if ((local_50[0] == '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b00();
    }
    if (lVar14 != 0) {
      FUN_00d50b20();
    }
    local_50[0] = '\0';
    local_f8 = plVar13;
    local_58 = plVar13;
    cVar5 = FUN_00ca18c0();
    uVar15 = extraout_XMM0_Da_01;
    if ((local_50[0] != '\0') && (local_58 != (int64_t *)0x0)) {
      uVar15 = FUN_00d50b20();
    }
    if (cVar5 != '\0') {
      local_138 = plVar13;
      local_130 = '\0';
      uVar15 = FUN_01de4130(uVar15,&local_138);
      local_b0 = local_68;
      local_a8 = 0;
      plVar2 = g_0277c878;
      if (local_60[0] == '\0') {
        if (local_68 != (int64_t *)0x0) {
          uVar15 = FUN_00d50b00();
          plVar2 = g_0277c878;
        }
      }
      else {
        local_60[0] = '\0';
      }
      local_a8 = '\x01';
      g_0277c878 = plVar2;
      if (plVar2 != (int64_t *)0x0) {
        local_a8 = '\x01';
        uVar15 = FUN_00d50b00();
      }
      local_50[0] = '\0';
      local_58 = plVar2;
      FUN_00ca0840(uVar15,&local_58);
      if ((local_50[0] != '\0') && (local_58 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar2 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if ((local_a8 != '\0') && (local_b0 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_60[0] != '\0') && (local_68 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_130 != '\0') && (local_138 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    FUN_00c9fe20();
    plVar2 = local_58;
    pplVar12 = &local_68;
    if (local_50[0] != '\0') {
      pplVar12 = (int64_t **)local_50;
    }
    local_68 = (int64_t *)CONCAT71(local_68._1_7_,local_50[0]);
    *(char *)pplVar12 = '\0';
    if ((local_50[0] != '\0') && (plVar2 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((char)local_68 == '\0') {
      if (plVar2 != (int64_t *)0x0) {
        FUN_00d50b00();
        goto LAB_00dc96ab;
      }
    }
    else if (plVar2 != (int64_t *)0x0) {
LAB_00dc96ab:
      local_50[0] = '\0';
      local_58 = (int64_t *)0x0;
      local_48 = plVar2;
      local_40 = -1;
      iStack_3c = 0;
      local_38 = 0;
      local_220 = param_2;
      while( true ) {
        if (iStack_3c != 0) {
          if (iStack_3c < 1) {
            iStack_3c = -iStack_3c;
          }
          else {
            local_40 = local_40 - iStack_3c;
            FUN_00d23690();
            local_38 = local_38 + iStack_3c;
            iStack_3c = 0;
          }
        }
        lVar14 = (int64_t)local_40;
        local_40 = local_40 + 1;
        if (*(int *)((int64_t)local_48 + 0xc) <= local_40) break;
        local_58 = *(int64_t **)(local_48[2] + 8 + lVar14 * 8);
        local_68 = (int64_t *)*arg1;
        local_60[0] = '\0';
        cVar5 = FUN_00d90870();
        uVar15 = extraout_XMM0_Da_07;
        if ((local_60[0] != '\0') && (local_68 != (int64_t *)0x0)) {
          uVar15 = FUN_00d50b20();
        }
        if (cVar5 == '\0') goto LAB_00dc97c0;
        iVar7 = FUN_00d8c7a0();
        iVar8 = FUN_00d8c7a0();
        uVar15 = extraout_XMM0_Da_08;
        if (iVar7 <= iVar8) goto LAB_00dc97c0;
        FUN_00d8c7a0();
        sVar6 = FUN_00d8cbc0();
        uVar15 = extraout_XMM0_Da_09;
        if (sVar6 != 0x3a) {
LAB_00dc97c0:
          local_128 = local_58;
          local_120 = '\0';
          uVar15 = FUN_01de4130(uVar15,&local_128);
          local_a0 = local_f0;
          local_98 = 0;
          if (local_e8 == '\0') {
            if (local_f0 != (int64_t *)0x0) {
              uVar15 = FUN_00d50b00();
            }
          }
          else {
            local_e8 = '\0';
          }
          local_98 = '\x01';
          local_68 = local_58;
          local_60[0] = '\0';
          FUN_00ca0840(uVar15,&local_68);
          if ((local_60[0] != '\0') && (local_68 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_98 != '\0') && (local_a0 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_e8 != '\0') && (local_f0 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_120 != '\0') && (local_128 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
      }
      FUN_00018280();
      FUN_00d50b20();
      plVar13 = local_f8;
    }
    FUN_00d6be50();
    plVar2 = local_58;
    if (local_50[0] == '\0') {
      if (local_58 != (int64_t *)0x0) {
        FUN_00d50b00();
        if ((local_50[0] != '\0') && (local_58 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        goto LAB_00dc9936;
      }
    }
    else if (local_58 != (int64_t *)0x0) {
LAB_00dc9936:
      local_50[0] = '\0';
      local_58 = (int64_t *)0x0;
      local_48 = plVar2;
      iStack_3c = 0;
      local_38 = 0;
      for (lVar14 = 0; local_40 = (int)lVar14, local_40 < *(int *)((int64_t)plVar2 + 0xc);
          lVar14 = lVar14 + 1) {
        local_240 = *(int64_t **)(plVar2[2] + lVar14 * 8);
        local_250 = *arg1;
        local_248 = 0;
        local_238 = 0;
        local_228 = 0;
        local_230 = plVar9;
        local_58 = local_240;
        FUN_00dc6010(local_250,&local_230);
      }
      FUN_00bea5a0();
      FUN_00d50b20();
      plVar13 = local_f8;
    }
    *this_ptr = plVar9;
    *(void*)(this_ptr + 1) = 1;
    if (plVar13 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  else {
    lVar14 = *arg1;
    plVar9 = (int64_t *)FUN_00e8fc40();
    FUN_00022d50();
    (**(code **)(*plVar9 + 0x18))();
    uVar15 = FUN_00d6be50();
    plVar13 = local_58;
    if (local_50[0] == '\0') {
      if (local_58 != (int64_t *)0x0) {
        uVar15 = FUN_00d50b00();
        if ((local_50[0] != '\0') && (local_58 != (int64_t *)0x0)) {
          uVar15 = FUN_00d50b20();
        }
        goto LAB_00dc8f2f;
      }
    }
    else if (local_58 != (int64_t *)0x0) {
LAB_00dc8f2f:
      local_50[0] = '\0';
      local_58 = (int64_t *)0x0;
      local_48 = plVar13;
      local_40 = -1;
      iStack_3c = 0;
      local_38 = 0;
      while( true ) {
        iVar7 = iStack_3c;
        if (iStack_3c != 0) {
          if (iStack_3c < 1) {
            iStack_3c = -iStack_3c;
          }
          else {
            local_40 = local_40 - iStack_3c;
            FUN_00d23690(uVar15,iStack_3c);
            local_38 = local_38 + iVar7;
            iStack_3c = 0;
          }
        }
        lVar10 = (int64_t)local_40;
        local_40 = local_40 + 1;
        if (*(int *)((int64_t)local_48 + 0xc) <= local_40) break;
        plVar13 = *(int64_t **)(local_48[2] + 8 + lVar10 * 8);
        local_e8 = '\0';
        local_f0 = plVar13;
        local_58 = plVar13;
        FUN_00dc5330();
        plVar2 = local_68;
        if ((local_60[0] == '\0') && (local_68 != (int64_t *)0x0)) {
          FUN_00d50b00();
        }
        uVar15 = FUN_00d6c870();
        plVar3 = local_68;
        lVar10 = g_02783b58;
        if (g_02783b58 != 0) {
          uVar15 = FUN_00d50b00();
        }
        local_2c0 = lVar10;
        local_2b8 = 1;
        FUN_00dbdbc0(uVar15,&local_2c0);
        local_110 = 0;
        lVar1 = CONCAT71(uStack_207,local_208);
        if ((local_200 == '\0') && (lVar1 != 0)) {
          FUN_00d50b00();
        }
        local_110 = '\x01';
        local_118 = lVar1;
        cVar5 = (**(code **)(*plVar3 + 0x50))();
        uVar15 = extraout_XMM0_Da_02;
        if ((local_110 != '\0') && (local_118 != 0)) {
          uVar15 = FUN_00d50b20();
        }
        if (lVar10 != 0) {
          uVar15 = FUN_00d50b20();
        }
        if ((local_60[0] != '\0') && (local_68 != (int64_t *)0x0)) {
          uVar15 = FUN_00d50b20();
        }
        if (cVar5 != '\0') {
          local_1f0 = '\0';
          local_1e0 = '\0';
          local_1d8 = plVar2;
          local_1d0 = '\0';
          local_1f8 = lVar14;
          local_1e8 = plVar13;
          uVar15 = FUN_00dc8890(&local_1d8,&local_1e8);
          plVar13 = local_68;
          if ((g_026fdd40 == '\0') &&
             (iVar7 = ___cxa_guard_acquire(), uVar15 = extraout_XMM0_Da_06, iVar7 != 0)) {
            g_026cd0e8 = FUN_00d4fe50();
            g_026cd0d0 = "GNDictionary";
            g_026cd0d8 = 0x28;
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
            uVar15 = ___cxa_guard_release();
          }
          pplVar12 = (int64_t **)&g_02802688;
          if (plVar13 != (int64_t *)0x0) {
            (**(code **)(*plVar13 + 0x360))();
            cVar5 = FUN_00e85ea0();
            pplVar12 = &local_68;
            uVar15 = extraout_XMM0_Da_03;
            if (cVar5 == '\0') {
              pplVar12 = (int64_t **)&g_02802688;
            }
          }
          plVar13 = *pplVar12;
          if (*(char *)(pplVar12 + 1) == '\0') {
            if (plVar13 != (int64_t *)0x0) {
              uVar15 = FUN_00d50b00();
            }
          }
          else {
            *(void*)(pplVar12 + 1) = 0;
          }
          if ((local_60[0] != '\0') && (local_68 != (int64_t *)0x0)) {
            uVar15 = FUN_00d50b20();
          }
          if ((local_1d0 != '\0') && (local_1d8 != (int64_t *)0x0)) {
            uVar15 = FUN_00d50b20();
          }
          if ((local_1e0 != '\0') && (local_1e8 != (int64_t *)0x0)) {
            uVar15 = FUN_00d50b20();
          }
          if ((local_1f0 != '\0') && (local_1f8 != 0)) {
            uVar15 = FUN_00d50b20();
          }
          lVar10 = g_02704000;
          if (plVar13 != (int64_t *)0x0) {
            if (g_02704000 != 0) {
              FUN_00d50b00();
            }
            local_1c8 = lVar10;
            local_1c0 = '\x01';
            cVar5 = FUN_00ca18c0();
            lVar10 = g_027e7c20;
            if (cVar5 == '\0') {
              cVar5 = '\0';
              uVar15 = extraout_XMM0_Da_04;
            }
            else {
              if (g_027e7c20 != 0) {
                FUN_00d50b00();
              }
              local_1b8 = lVar10;
              local_1b0 = '\x01';
              cVar5 = FUN_00ca18c0();
              uVar15 = extraout_XMM0_Da_05;
              if ((local_1b0 != '\0') && (local_1b8 != 0)) {
                uVar15 = FUN_00d50b20();
              }
            }
            if ((local_1c0 != '\0') && (local_1c8 != 0)) {
              uVar15 = FUN_00d50b20();
            }
            lVar10 = g_027e7c20;
            if (cVar5 != '\0') {
              if (g_027e7c20 != 0) {
                uVar15 = FUN_00d50b00();
              }
              local_1a8 = lVar10;
              local_1a0 = '\x01';
              uVar15 = FUN_00c9fe40(uVar15,&local_1a8);
              plVar13 = local_68;
              local_208 = local_60[0];
              pcVar11 = local_60;
              if (local_60[0] == '\0') {
                pcVar11 = &local_208;
              }
              *pcVar11 = '\0';
              if ((local_60[0] != '\0') && (plVar13 != (int64_t *)0x0)) {
                uVar15 = FUN_00d50b20();
              }
              local_b8 = 0;
              lVar10 = g_02704000;
              if (local_208 == '\0') {
                if (plVar13 != (int64_t *)0x0) {
                  uVar15 = FUN_00d50b00();
                  lVar10 = g_02704000;
                }
              }
              else {
                local_208 = '\0';
              }
              local_b8 = '\x01';
              local_c0 = plVar13;
              g_02704000 = lVar10;
              if (lVar10 != 0) {
                local_b8 = '\x01';
                uVar15 = FUN_00d50b00();
              }
              local_190 = '\x01';
              local_198 = lVar10;
              uVar15 = FUN_00c9fe40(uVar15,&local_198);
              plVar13 = local_68;
              local_70[0] = local_60[0];
              pcVar11 = local_60;
              if (local_60[0] == '\0') {
                pcVar11 = local_70;
              }
              *pcVar11 = '\0';
              if ((local_60[0] != '\0') && (plVar13 != (int64_t *)0x0)) {
                uVar15 = FUN_00d50b20();
              }
              local_100 = 0;
              if ((local_70[0] == '\0') && (plVar13 != (int64_t *)0x0)) {
                uVar15 = FUN_00d50b00();
              }
              local_108 = plVar13;
              local_100 = '\x01';
              FUN_00ca0840(uVar15,&local_108);
              if ((local_100 != '\0') && (local_108 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              if ((local_190 != '\0') && (local_198 != 0)) {
                FUN_00d50b20();
              }
              if ((local_b8 != '\0') && (local_c0 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              if ((local_1a0 != '\0') && (local_1a8 != 0)) {
                FUN_00d50b20();
              }
            }
            uVar15 = FUN_00d50b20();
          }
        }
        if (plVar2 != (int64_t *)0x0) {
          uVar15 = FUN_00d50b20();
        }
      }
      FUN_00bea5a0();
      FUN_00d50b20();
    }
    *this_ptr = plVar9;
    *(void*)(this_ptr + 1) = 1;
  }
  if (plVar4 == (int64_t *)0x0) {
    return;
  }
LAB_00dc9a11:
  FUN_00d50b20();
  return;
}



// ============================================================
// 0193a890
// ============================================================
// Function: FUN_0193a890
// Address: 0193a890
// Size: 4538 bytes
// Class: GNDictionary

void FUN_0193a890(void* param_1,double param_2)

{
  int64_t *plVar1;
  int64_t *plVar2;
  char cVar3;
  void *pvVar4;
  int64_t lVar5;
  int64_t *plVar6;
  int64_t *this_ptr;
  double dVar7;
  int64_t local_1d0;
  char local_1c8;
  int64_t local_1c0;
  char local_1b8;
  int64_t local_1b0;
  char local_1a8;
  int64_t local_180;
  char local_178;
  int64_t local_170;
  char local_168;
  int64_t local_160;
  char local_158;
  int64_t *local_150;
  char local_148;
  int64_t *local_140;
  double local_138;
  double local_130;
  int64_t local_128;
  char local_120;
  int64_t local_118;
  char local_110;
  int64_t local_108;
  char local_100;
  int64_t local_f8;
  char local_f0;
  int64_t *local_e8;
  char local_e0;
  int64_t *local_d8;
  char local_d0;
  int64_t *local_c8;
  char local_c0;
  int64_t *local_b8;
  char local_b0;
  int64_t *local_a8;
  char local_a0;
  int64_t *local_98;
  char local_90;
  int64_t *local_88;
  char local_80;
  int64_t *local_78;
  char local_70;
  int64_t *local_68;
  int64_t local_60;
  char local_58;
  int64_t *local_50;
  char local_48;
  int64_t *local_40;
  char local_38;
  
  (**(code **)(*this_ptr + 0x7b0))();
  plVar6 = local_40;
  if (local_38 == '\0') {
    if (local_40 == (int64_t *)0x0) {
      return;
    }
    FUN_00d50b00();
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else if (local_40 == (int64_t *)0x0) {
    return;
  }
  local_140 = plVar6;
  if (this_ptr[0xb1] != 0) {
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    lVar5 = FUN_00e8b990();
    if (lVar5 != 0) {
      pvVar4 = _pthread_getspecific(param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_00e8b990();
      FUN_00cb1f10();
      plVar6 = local_40;
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar6 != (int64_t *)0x0) {
        pvVar4 = _pthread_getspecific(param_1);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_00e8b990();
        FUN_00cb1f10();
        FUN_00db3260();
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
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
        FUN_012e7d10();
        pvVar4 = _pthread_getspecific(param_1);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_011f2610();
        pvVar4 = _pthread_getspecific(param_1);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
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
        FUN_012e7d10();
        pvVar4 = _pthread_getspecific(param_1);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_011f2610();
        pvVar4 = _pthread_getspecific(param_1);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012a46e0();
        FUN_012a4680();
        if ((local_1c8 != '\0') && (local_1d0 != 0)) {
          FUN_00d50b20();
        }
        if ((local_1b8 != '\0') && (local_1c0 != 0)) {
          FUN_00d50b20();
        }
        if ((local_1a8 != '\0') && (local_1b0 != 0)) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_58 != '\0') && (local_60 != 0)) {
          FUN_00d50b20();
        }
        pvVar4 = _pthread_getspecific(param_1);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_00e8b990();
        FUN_00cb1f10();
        FUN_00db3270();
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
  }
  local_138 = (double)(**(code **)(*this_ptr + 0xa50))();
  local_68 = (int64_t *)param_2;
  local_130 = (double)FUN_0193c6b0();
  dVar7 = (double)FUN_0193c6b0(local_138 + (double)local_68);
  dVar7 = dVar7 - local_130;
  local_138 = (double)(**(code **)(&UNK_00001608 + *this_ptr))();
  local_130 = dVar7;
  (**(code **)(&UNK_00001820 + *this_ptr))();
  (**(code **)(&UNK_000016f0 + *this_ptr))();
  (**(code **)(*this_ptr + 0xda0))();
  (**(code **)(&UNK_000014c8 + *this_ptr))();
  plVar6 = local_40;
  if ((((local_38 == '\0') && (local_40 != (int64_t *)0x0)) && (FUN_00d50b00(), local_38 != '\0'))
     && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  plVar1 = (int64_t *)this_ptr[0xaa];
  local_68 = plVar6;
  (**(code **)("/System/Library/Frameworks/CoreServices.framework/Versions/A/CoreServices" +
              *this_ptr + 0x18))();
  (**(code **)(&UNK_00001488 + *plVar1))();
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0132d900();
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
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
  FUN_012e7fb0();
  local_e8 = local_50;
  local_e0 = 0;
  if (local_48 == '\0') {
    if (local_50 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_48 = '\0';
  }
  local_e0 = '\x01';
  cVar3 = FUN_01512830();
  if ((local_e0 != '\0') && (local_e8 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar3 != '\0') {
    FUN_00d403d0();
    lVar5 = g_027c8278;
    if (g_027c8278 != 0) {
      FUN_00d50b00();
    }
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0132d900();
    local_d8 = local_50;
    local_d0 = 0;
    if (local_48 == '\0') {
      if (local_50 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_48 = '\0';
    }
    local_d0 = '\x01';
    local_178 = '\0';
    local_180 = 0;
    plVar6 = &local_180;
    FUN_00d40470(plVar6,&local_d8,3,3);
    param_1 = (void*)plVar6;
    if ((local_178 != '\0') && (local_180 != 0)) {
      FUN_00d50b20();
    }
    if ((local_d0 != '\0') && (local_d8 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (lVar5 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0132d900();
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
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
  FUN_012e7fb0();
  local_c8 = local_50;
  local_c0 = 0;
  if (local_48 == '\0') {
    if (local_50 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_48 = '\0';
  }
  local_c0 = '\x01';
  cVar3 = FUN_01512890();
  if ((local_c0 != '\0') && (local_c8 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar3 != '\0') {
    FUN_00d403d0();
    local_170 = g_027c8280;
    if (g_027c8280 != 0) {
      FUN_00d50b00();
    }
    local_168 = '\x01';
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0132d900();
    local_b8 = local_50;
    local_b0 = 0;
    if (local_48 == '\0') {
      if (local_50 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_48 = '\0';
    }
    local_b0 = '\x01';
    local_158 = '\0';
    local_160 = 0;
    plVar6 = &local_160;
    FUN_00d40470(plVar6,&local_b8,3,3);
    param_1 = (void*)plVar6;
    if ((local_158 != '\0') && (local_160 != 0)) {
      FUN_00d50b20();
    }
    if ((local_b0 != '\0') && (local_b8 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_168 != '\0') && (local_170 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  FUN_0193c7d0();
  FUN_0193d2c0();
  local_120 = 0;
  local_128 = this_ptr[0xaa];
  if (local_128 != 0) {
    FUN_00d50b00();
  }
  local_120 = '\x01';
  FUN_01cf5bb0();
  if ((local_120 != '\0') && (local_128 != 0)) {
    FUN_00d50b20();
  }
  if (*(int64_t *)(this_ptr[0xaa] + 0x400) != 0) {
    local_110 = 0;
    lVar5 = *(int64_t *)(this_ptr[0xaa] + 0x3f8);
    if (lVar5 != 0) {
      FUN_00d50b00();
    }
    local_110 = '\x01';
    local_118 = lVar5;
    FUN_01e26eb0();
    if ((local_110 != '\0') && (local_118 != 0)) {
      FUN_00d50b20();
    }
  }
  if (this_ptr[0x81] != 0) {
    local_100 = 0;
    lVar5 = this_ptr[0xaa];
    if (lVar5 != 0) {
      FUN_00d50b00();
    }
    local_100 = '\x01';
    local_108 = lVar5;
    FUN_01a17960();
    if ((local_100 != '\0') && (local_108 != 0)) {
      FUN_00d50b20();
    }
  }
  (**(code **)(*(int64_t *)this_ptr[0xaa] + 0x970))();
  FUN_0197be80();
  plVar6 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != (int64_t *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
       (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar6 != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)this_ptr[0xaa] + 0x958))();
    local_a8 = local_40;
    local_a0 = 0;
    if (local_38 == '\0') {
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_a0 = '\x01';
    (**(code **)(*plVar6 + 0x968))();
    if ((local_a0 != '\0') && (local_a8 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    (**(code **)("/System/Library/Frameworks/Foundation.framework/Versions/C/Foundation" +
                *(int64_t *)this_ptr[0xaa] + 0x20))();
    local_98 = local_40;
    local_90 = 0;
    if (local_38 == '\0') {
      if (local_40 != (int64_t *)0x0) {
        (**(code **)(*local_40 + 0x10))();
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_90 = '\x01';
    FUN_01a34e60();
    if ((local_90 != '\0') && (local_98 != (int64_t *)0x0)) {
      (**(code **)(*local_98 + 0x10))();
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      (**(code **)(*local_40 + 0x10))();
      FUN_00d50b20();
    }
    (**(code **)(*(int64_t *)this_ptr[0xaa] + 0xa00))();
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012cade0();
    local_88 = local_40;
    local_80 = 0;
    if (local_38 == '\0') {
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_80 = '\x01';
    (**(code **)(*plVar6 + 0x920))();
    if ((local_80 != '\0') && (local_88 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  plVar1 = local_68;
  if (this_ptr[0x81] != 0) {
    (**(code **)(*(int64_t *)this_ptr[0xaa] + 0xed0))();
    plVar2 = local_40;
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar2 != (int64_t *)0x0) {
      plVar2 = (int64_t *)this_ptr[0x81];
      (**(code **)(*(int64_t *)this_ptr[0xaa] + 0xed0))();
      (**(code **)(*local_50 + 0x420))();
      local_78 = local_40;
      local_70 = 0;
      if (local_38 == '\0') {
        if (local_40 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      local_70 = '\x01';
      (**(code **)(*plVar2 + 0x918))();
      if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  FUN_01e42250();
  local_150 = plVar1;
  local_148 = '\0';
  (**(code **)(&UNK_000014d0 + *(int64_t *)this_ptr[0xaa]))();
  if ((local_148 != '\0') && (local_150 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_019af2a0(local_138,local_130);
  FUN_01e42030();
  local_f0 = 0;
  local_f8 = this_ptr[0xaa];
  if (local_f8 != 0) {
    FUN_00d50b00();
  }
  local_f0 = '\x01';
  FUN_01d8c720();
  if ((local_f0 != '\0') && (local_f8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(*(int64_t *)this_ptr[0xaa] + 0x7b8))();
  (**(code **)(*local_40 + 0x620))();
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(*(int64_t *)this_ptr[0xaa] + 0x400))();
  FUN_019ef4d0();
  if (plVar6 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (plVar1 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}



// ============================================================
// 01f62050
// ============================================================
// Function: FUN_01f62050
// Address: 01f62050
// Size: 3209 bytes
// Class: GNDictionary

void FUN_01f62050(uint64_t param_1,int64_t *param_2)

{
  int64_t lVar1;
  void*puVar2;
  uint8_t uVar3;
  char cVar4;
  void*puVar5;
  void*puVar6;
  int64_t *plVar7;
  uint64_t uVar8;
  int64_t *plVar9;
  byte bVar10;
  uint *puVar11;
  uint64_t uVar12;
  void*puVar13;
  void*this_ptr;
  undefined7 uVar14;
  uint32_t uVar15;
  int64_t local_b8;
  char local_b0;
  void*local_a8;
  char local_a0;
  uint32_t local_94;
  void*local_90;
  char local_88;
  void*local_80;
  char local_78;
  void*local_70;
  char local_68;
  uint64_t local_60;
  int64_t local_58;
  char local_50;
  uint64_t local_48;
  void*local_40;
  char local_38;
  
  if (*param_2 == 0) {
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
    return;
  }
  FUN_00c77cd0();
  uVar3 = FUN_00c7b220();
  if ((local_38 != '\0') && (local_40 != (void*)0x0)) {
    FUN_00d50b20();
  }
  puVar5 = (void*)0x0;
  uVar12 = 0;
  switch(uVar3) {
  case 0x43:
    puVar5 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    puVar6 = &g_02590d10;
    *puVar5 = &g_02590d20;
    goto LAB_01f6217c;
  case 0x45:
    FUN_00dddf90();
    puVar5 = local_40;
    if (local_40 == (void*)0x0) {
LAB_01f6223d:
      puVar5 = (void*)0x0;
      uVar12 = 0;
    }
    else {
      uVar12 = 1;
      if (((local_38 == '\0') && (FUN_00d50b00(), local_38 != '\0')) &&
         (local_40 != (void*)0x0)) {
        FUN_00d50b20();
      }
    }
    break;
  case 0x50:
    FUN_00ddde70();
    puVar5 = local_40;
    if (local_40 == (void*)0x0) goto LAB_01f6223d;
    uVar12 = 1;
    if (((local_38 == '\0') && (FUN_00d50b00(), local_38 != '\0')) &&
       (local_40 != (void*)0x0)) {
      FUN_00d50b20();
    }
    break;
  case 0x52:
    FUN_00dddf30();
    puVar5 = local_40;
    if (local_40 == (void*)0x0) goto LAB_01f6223d;
    uVar12 = 1;
    if (((local_38 == '\0') && (FUN_00d50b00(), local_38 != '\0')) &&
       (local_40 != (void*)0x0)) {
      FUN_00d50b20();
    }
    break;
  case 0x53:
    FUN_00ddded0();
    puVar5 = local_40;
    if (local_40 == (void*)0x0) goto LAB_01f6223d;
    uVar12 = 1;
    if (((local_38 == '\0') && (FUN_00d50b00(), local_38 != '\0')) &&
       (local_40 != (void*)0x0)) {
      FUN_00d50b20();
    }
    break;
  case 0x71:
    puVar5 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    puVar6 = &g_025910e8;
    *puVar5 = &g_025910f8;
    *(void*)((int64_t)puVar5 + 0xc) = 0;
    puVar5[2] = 0x100000000;
LAB_01f6217c:
    (**(code **)(puVar6 + 0x28))();
    uVar12 = 1;
  }
  local_60 = uVar12;
  FUN_00c77cd0();
  uVar3 = FUN_00c7b220();
  if ((local_38 != '\0') && (local_40 != (void*)0x0)) {
    FUN_00d50b20();
  }
  plVar9 = g_028007c8;
  plVar7 = (int64_t *)0x0;
  puVar11 = &switchD_01f62290::switchdataD_01f63404;
  puVar13 = puVar5;
  switch(uVar3) {
  case 0x40:
    if (g_028007c8 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    FUN_00c77cd0();
    FUN_00c798d0();
    local_90 = local_40;
    local_88 = 0;
    if (local_38 == '\0') {
      if (local_40 != (void*)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_88 = '\x01';
    cVar4 = (**(code **)(*plVar9 + 0x50))();
    if ((local_88 != '\0') && (local_90 != (void*)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (void*)0x0)) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    uVar15 = FUN_00d50b20();
    lVar1 = g_028007d0;
    if (cVar4 != '\0') {
      if (g_028007d0 != 0) {
        uVar15 = FUN_00d50b00();
      }
      local_b8 = 0;
      local_b0 = '\0';
      uVar8 = FUN_00ddfeb0(uVar15,&local_b8);
      puVar13 = local_40;
      uVar14 = (undefined7)((uint64_t)plVar9 >> 8);
      if (local_40 == puVar5) {
        if (((char)local_60 == '\0') && (local_40 != (void*)0x0)) {
          puVar13 = puVar5;
          if (local_38 != '\0') goto LAB_01f62796;
          uVar12 = CONCAT71(uVar14,1);
          FUN_00d50b00();
        }
        else {
          uVar12 = local_60 & 0xffffffff;
          puVar13 = puVar5;
        }
LAB_01f627e6:
        if ((local_38 == '\0') || (local_40 == (void*)0x0)) {
          local_60 = uVar12 & 0xffffffff;
        }
        else {
          FUN_00d50b20();
          local_60 = uVar12 & 0xffffffff;
        }
      }
      else {
        if (local_38 == '\0') {
          if (local_40 != (void*)0x0) {
            FUN_00d50b00();
          }
          uVar12 = CONCAT71(uVar14,1);
          if (((char)local_60 != '\0') && (puVar5 != (void*)0x0)) {
            FUN_00d50b20();
          }
          goto LAB_01f627e6;
        }
        if (((char)local_60 != '\0') && (puVar5 != (void*)0x0)) {
          uVar8 = FUN_00d50b20();
        }
LAB_01f62796:
        local_38 = '\0';
        local_60 = CONCAT71((int7)((uint64_t)uVar8 >> 8),1);
      }
      if ((local_b0 != '\0') && (local_b8 != 0)) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
    }
    plVar9 = g_027815c0;
    if (g_027815c0 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    FUN_00c77cd0();
    FUN_00c798d0();
    local_70 = local_40;
    local_68 = 0;
    if (local_38 == '\0') {
      if (local_40 != (void*)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_68 = '\x01';
    cVar4 = (**(code **)(*plVar9 + 0x50))();
    if (cVar4 == '\0') {
      if ((local_68 != '\0') && (local_70 != (void*)0x0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (void*)0x0)) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
      if (puVar13 != (void*)0x0) goto LAB_01f62941;
      local_94 = (uint32_t)CONCAT71((int7)((uint64_t)puVar11 >> 8),1);
      local_48 = 0;
      plVar7 = (int64_t *)0x0;
    }
    else {
      if ((local_68 != '\0') && (local_70 != (void*)0x0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (void*)0x0)) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
LAB_01f62941:
      plVar7 = (int64_t *)FUN_00e8fc40();
      FUN_0006daf0();
      *(void*)(plVar7 + 0x27) = 0;
      plVar7[0x2e] = 0;
      *(void*)(plVar7 + 0x2f) = 0;
      plVar7[0x30] = 0;
      *(void*)(plVar7 + 0x31) = 0;
      plVar7[0x28] = 0;
      plVar7[0x29] = 0;
      *(void*)(plVar7 + 0x2a) = 0;
      plVar7[0x2b] = 0;
      plVar7[0x2c] = 0;
      *(void*)((int64_t)plVar7 + 0x165) = 0;
      *(void*)((int64_t)plVar7 + 0x18c) = 0;
      *(void*)((int64_t)plVar7 + 0x194) = 0;
      *(void*)((int64_t)plVar7 + 0x199) = 0;
      plVar7[0x35] = 0;
      plVar7[0x36] = 0;
      plVar7[0x37] = 0;
      plVar7[0x38] = 0;
      *plVar7 = (int64_t)&g_0269c118;
      plVar7[2] = (int64_t)&g_0269cc70;
      plVar7[0x39] = (int64_t)&g_0269ccb0;
      plVar7[0x45] = 0;
      *(void*)(plVar7 + 0x46) = 0;
      plVar7[0x47] = 0;
      plVar7[0x3a] = 0;
      plVar7[0x3b] = 0;
      *(void*)(plVar7 + 0x3c) = 0;
      plVar7[0x3f] = 0;
      plVar7[0x40] = 0;
      plVar7[0x3d] = 0;
      plVar7[0x3e] = 0;
      *(void*)((int64_t)plVar7 + 0x205) = 0;
      plVar7[0x42] = 0;
      plVar7[0x43] = 0;
      *(void*)((int64_t)plVar7 + 0x21d) = 0;
      (*g_0269c130)();
      uVar8 = (**(code **)(*plVar7 + 0x4d0))(g_02390d00,g_02423960);
      if (puVar13 != (void*)0x0) {
        local_a0 = '\0';
        local_a8 = puVar13;
        uVar8 = FUN_01e058f0();
        local_94 = 0;
        local_48 = CONCAT71((int7)((uint64_t)uVar8 >> 8),1);
        if ((local_a0 == '\0') || (local_a8 == (void*)0x0)) goto LAB_01f62acb;
        uVar8 = FUN_00d50b20();
      }
      local_48 = CONCAT71((int7)((uint64_t)uVar8 >> 8),1);
      local_94 = 0;
    }
LAB_01f62acb:
    plVar9 = g_028007d8;
    if (g_028007d8 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    FUN_00c77cd0();
    FUN_00c798d0();
    local_80 = local_40;
    local_78 = 0;
    if (local_38 == '\0') {
      if (local_40 != (void*)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_78 = '\x01';
    cVar4 = (**(code **)(*plVar9 + 0x50))();
    if ((local_78 != '\0') && (local_80 != (void*)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (void*)0x0)) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
    if (cVar4 == '\0') {
      cVar4 = (char)local_48;
    }
    else {
      plVar9 = (int64_t *)FUN_00e8fc40();
      FUN_0006daf0();
      *(void*)(plVar9 + 0x27) = 0;
      plVar9[0x2e] = 0;
      *(void*)(plVar9 + 0x2f) = 0;
      plVar9[0x30] = 0;
      *(void*)(plVar9 + 0x31) = 0;
      plVar9[0x28] = 0;
      plVar9[0x29] = 0;
      *(void*)(plVar9 + 0x2a) = 0;
      plVar9[0x2b] = 0;
      plVar9[0x2c] = 0;
      *(void*)((int64_t)plVar9 + 0x165) = 0;
      *(void*)((int64_t)plVar9 + 0x18c) = 0;
      *(void*)((int64_t)plVar9 + 0x194) = 0;
      *(void*)((int64_t)plVar9 + 0x199) = 0;
      plVar9[0x35] = 0;
      plVar9[0x36] = 0;
      plVar9[0x37] = 0;
      plVar9[0x38] = 0;
      *plVar9 = (int64_t)&g_02679c28;
      plVar9[2] = (int64_t)&g_0267a6f0;
      plVar9[0x39] = 0;
      plVar9[0x3a] = 0;
      uVar8 = (*g_02679c40)();
      uVar14 = (undefined7)((uint64_t)uVar8 >> 8);
      if (plVar9 == plVar7) {
        plVar9 = plVar7;
        if ((char)local_94 == '\0') {
          FUN_00d50b20();
        }
        else {
          local_48 = CONCAT71(uVar14,1);
        }
      }
      else {
        bVar10 = (byte)local_48;
        local_48 = CONCAT71(uVar14,1);
        if ((bVar10 & plVar7 != (int64_t *)0x0) == 1) {
          FUN_00d50b20();
        }
      }
      cVar4 = (char)local_48;
      (**(code **)(*plVar9 + 0x4d0))(0,g_02423960);
      plVar7 = plVar9;
    }
    *(void*)(this_ptr + 1) = 0;
    if (cVar4 == '\0') {
      if (plVar7 == (int64_t *)0x0) {
        plVar7 = (int64_t *)0x0;
      }
      else {
        FUN_00d50b00();
      }
    }
    goto LAB_01f62406;
  case 0x43:
  case 0x45:
  case 0x49:
  case 0x50:
  case 0x52:
  case 0x53:
  case 99:
  case 100:
  case 0x66:
  case 0x69:
  case 0x6c:
  case 0x71:
  case 0x73:
switchD_01f62290_caseD_43:
    plVar7 = (int64_t *)FUN_00e8fc40();
    FUN_0006daf0();
    *(void*)(plVar7 + 0x27) = 0;
    plVar7[0x2e] = 0;
    *(void*)(plVar7 + 0x2f) = 0;
    plVar7[0x30] = 0;
    *(void*)(plVar7 + 0x31) = 0;
    plVar7[0x28] = 0;
    plVar7[0x29] = 0;
    *(void*)(plVar7 + 0x2a) = 0;
    plVar7[0x2b] = 0;
    plVar7[0x2c] = 0;
    *(void*)((int64_t)plVar7 + 0x165) = 0;
    *(void*)((int64_t)plVar7 + 0x18c) = 0;
    *(void*)((int64_t)plVar7 + 0x194) = 0;
    *(void*)((int64_t)plVar7 + 0x199) = 0;
    plVar7[0x35] = 0;
    plVar7[0x36] = 0;
    plVar7[0x37] = 0;
    plVar7[0x38] = 0;
    *plVar7 = (int64_t)&g_0269c118;
    plVar7[2] = (int64_t)&g_0269cc70;
    plVar7[0x39] = (int64_t)&g_0269ccb0;
    plVar7[0x45] = 0;
    *(void*)(plVar7 + 0x46) = 0;
    plVar7[0x47] = 0;
    plVar7[0x3a] = 0;
    plVar7[0x3b] = 0;
    *(void*)(plVar7 + 0x3c) = 0;
    plVar7[0x3f] = 0;
    plVar7[0x40] = 0;
    plVar7[0x3d] = 0;
    plVar7[0x3e] = 0;
    *(void*)((int64_t)plVar7 + 0x205) = 0;
    plVar7[0x42] = 0;
    plVar7[0x43] = 0;
    *(void*)((int64_t)plVar7 + 0x21d) = 0;
    (*g_0269c130)();
    (**(code **)(*plVar7 + 0x4d0))(g_02390d00,g_02423960);
    if (puVar5 != (void*)0x0) {
      FUN_01e058f0();
    }
    break;
  case 0x62:
    plVar7 = (int64_t *)FUN_00e8fc40();
    FUN_0006daf0();
    *(void*)(plVar7 + 0x27) = 0;
    plVar7[0x2e] = 0;
    *(void*)(plVar7 + 0x2f) = 0;
    plVar7[0x30] = 0;
    *(void*)(plVar7 + 0x31) = 0;
    plVar7[0x28] = 0;
    plVar7[0x29] = 0;
    *(void*)(plVar7 + 0x2a) = 0;
    plVar7[0x2b] = 0;
    plVar7[0x2c] = 0;
    *(void*)((int64_t)plVar7 + 0x165) = 0;
    *(void*)((int64_t)plVar7 + 0x18c) = 0;
    *(void*)((int64_t)plVar7 + 0x194) = 0;
    *(void*)((int64_t)plVar7 + 0x199) = 0;
    plVar7[0x35] = 0;
    plVar7[0x36] = 0;
    plVar7[0x37] = 0;
    plVar7[0x38] = 0;
    *(void*)((int64_t)plVar7 + 500) = 0;
    *(void*)(plVar7 + 0x3f) = 0;
    plVar7[0x43] = 0;
    plVar7[0x3c] = 0;
    plVar7[0x3d] = 0;
    plVar7[0x3a] = 0;
    plVar7[0x3b] = 0;
    *(void*)(plVar7 + 0x3e) = 0;
    *(void*)((int64_t)plVar7 + 0x1fc) = 0;
    *(void*)((int64_t)plVar7 + 0x204) = 0;
    *(void*)((int64_t)plVar7 + 0x20c) = 0;
    *plVar7 = (int64_t)&g_02691920;
    plVar7[2] = (int64_t)&g_026923f8;
    plVar7[0x39] = (int64_t)&g_02692438;
    (*g_02691938)();
    (**(code **)(*plVar7 + 0x4d0))(g_02390d2c,g_02423960);
    break;
  case 0x65:
    FUN_00c77cd0();
    FUN_00c7b2d0();
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
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if (puVar2 == (void*)0x0) goto switchD_01f62290_caseD_43;
    plVar7 = (int64_t *)FUN_00e8fc40();
    FUN_001e3c20();
    (**(code **)(*plVar7 + 0x18))();
    FUN_01d6f820();
    FUN_00d50b00();
    FUN_00d50b20();
    FUN_00d50b20();
  }
  *(void*)(this_ptr + 1) = 0;
LAB_01f62406:
  *this_ptr = plVar7;
  *(void*)(this_ptr + 1) = 1;
  if (((char)local_60 != '\0') && (puVar13 != (void*)0x0)) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 01de3030
// ============================================================
// Function: FUN_01de3030
// Address: 01de3030
// Size: 2753 bytes
// Class: GNDictionary
// String references:
//   "GNDictionary"

void FUN_01de3030(void)

{
  int64_t lVar1;
  code *pcVar2;
  char cVar3;
  int iVar4;
  void*puVar5;
  void*puVar6;
  int64_t *plVar7;
  char *pcVar8;
  void*puVar9;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t lVar10;
  int64_t lVar11;
  void*puVar12;
  void*puVar13;
  uint32_t uVar14;
  void*puVar15;
  void*puVar16;
  bool bVar17;
  uint32_t uVar18;
  void*local_120;
  uint8_t local_118;
  void*local_110;
  uint8_t local_108;
  code *local_100;
  int64_t local_f8;
  char local_f0;
  int64_t local_e8;
  char local_e0;
  int64_t local_d8;
  char local_d0;
  int64_t local_c8;
  char local_c0;
  int64_t local_b8;
  char local_b0;
  int64_t local_a8;
  char local_a0;
  void*local_98;
  char local_90;
  uint32_t local_84;
  int64_t local_80;
  int64_t local_50;
  char local_48 [7];
  char local_41;
  void*local_40;
  char local_38 [8];
  
  plVar7 = (int64_t *)*arg1;
  if (plVar7 == (int64_t *)0x0) {
    return;
  }
  if ((g_026fdd40 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
    g_026cd0e8 = FUN_00d4fe50();
    g_026cd0d0 = "GNDictionary";
    g_026cd0d8 = 0x28;
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
    ___cxa_guard_release();
  }
  local_80 = 0;
  (**(code **)(*plVar7 + 0x360))();
  local_80 = 0;
  cVar3 = FUN_00e85ea0();
  plVar7 = arg1;
  if (cVar3 == '\0') {
    plVar7 = &g_02802688;
  }
  if (*plVar7 == 0) {
    return;
  }
  lVar10 = *arg1;
  if (lVar10 == 0) {
    cVar3 = '\x01';
    lVar10 = 0;
  }
  else {
    cVar3 = (char)arg1[1];
    if (cVar3 != '\0') {
      local_80 = 0;
      FUN_00d50b00();
    }
  }
  local_80 = lVar10;
  local_41 = cVar3;
  puVar5 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar5 = &g_02572358;
  pcVar2 = g_02572370;
  uVar18 = (*g_02572370)();
  local_f8 = g_027f2a48;
  if (g_027f2a48 != 0) {
    uVar18 = FUN_00d50b00();
  }
  local_f0 = '\x01';
  uVar18 = FUN_000175c0(uVar18,&local_f8);
  puVar9 = local_40;
  if (local_40 == (void*)0x0) {
    puVar9 = (void*)0x0;
LAB_01de31c4:
    uVar14 = (uint32_t)CONCAT71((int7)((uint64_t)lVar10 >> 8),puVar9 == (void*)0x0);
    if ((local_38[0] != '\0') && (local_40 != (void*)0x0)) {
      uVar18 = FUN_00d50b20();
    }
  }
  else {
    if (local_38[0] == '\0') {
      uVar18 = FUN_00d50b00();
      goto LAB_01de31c4;
    }
    local_38[0] = '\0';
    uVar14 = 0;
  }
  if ((local_f0 != '\0') && (local_f8 != 0)) {
    uVar18 = FUN_00d50b20();
  }
  local_100 = pcVar2;
  local_84 = uVar14;
  if (((char)uVar14 == '\0') && (0 < *(int *)((int64_t)puVar9 + 0xc))) {
    lVar10 = 0;
    local_50 = 0;
    puVar6 = (void*)0x0;
    puVar13 = (void*)0x0;
    do {
      lVar11 = *(int64_t *)(puVar9[2] + lVar10 * 8);
      lVar1 = g_027092b8;
      if (local_50 != lVar11) {
        if (lVar11 != 0) {
          uVar18 = FUN_00d50b00();
        }
        bVar17 = local_50 != 0;
        lVar1 = g_027092b8;
        local_50 = lVar11;
        if (bVar17) {
          uVar18 = FUN_00d50b20();
          lVar1 = g_027092b8;
        }
      }
      g_027092b8 = lVar1;
      if (lVar1 != 0) {
        uVar18 = FUN_00d50b00();
      }
      local_e0 = '\x01';
      local_e8 = lVar1;
      uVar18 = FUN_01de4130(uVar18,&local_e8);
      puVar12 = local_40;
      if (local_40 == puVar6) {
LAB_01de3321:
        puVar12 = puVar6;
        if (local_38[0] != '\0') {
LAB_01de3327:
          if (local_40 != (void*)0x0) {
            uVar18 = FUN_00d50b20();
          }
        }
      }
      else {
        if (local_38[0] == '\0') {
          if (local_40 != (void*)0x0) {
            uVar18 = FUN_00d50b00();
          }
          if (puVar6 != (void*)0x0) {
            uVar18 = FUN_00d50b20();
            puVar6 = puVar12;
            goto LAB_01de3321;
          }
          if (local_38[0] == '\0') goto LAB_01de3335;
          goto LAB_01de3327;
        }
        if (puVar6 != (void*)0x0) {
          uVar18 = FUN_00d50b20();
        }
        local_38[0] = '\0';
      }
LAB_01de3335:
      if ((local_e0 != '\0') && (local_e8 != 0)) {
        uVar18 = FUN_00d50b20();
      }
      puVar15 = puVar13;
      if (puVar12 != (void*)0x0) {
        local_118 = 0;
        local_120 = puVar12;
        uVar18 = FUN_01de26c0(uVar18,&local_120);
        puVar15 = local_40;
        if (local_40 == puVar13) {
          puVar15 = puVar13;
          if ((local_38[0] != '\0') && (local_40 != (void*)0x0)) {
            uVar18 = FUN_00d50b20();
          }
joined_r0x01de33c4:
          if (puVar15 == (void*)0x0) {
            puVar15 = (void*)0x0;
            goto LAB_01de3240;
          }
        }
        else {
          if (local_38[0] == '\0') {
            if (local_40 != (void*)0x0) {
              uVar18 = FUN_00d50b00();
            }
            if (puVar13 != (void*)0x0) {
              uVar18 = FUN_00d50b20();
            }
            goto joined_r0x01de33c4;
          }
          if (puVar13 != (void*)0x0) {
            uVar18 = FUN_00d50b20();
          }
          if (puVar15 == (void*)0x0) goto LAB_01de3240;
        }
        local_38[0] = '\0';
        local_40 = puVar15;
        FUN_00d21140();
        if ((local_38[0] != '\0') && (local_40 != (void*)0x0)) {
          FUN_00d50b20();
        }
        local_d0 = '\0';
        local_d8 = local_50;
        uVar18 = FUN_01dbac60();
        if ((local_d0 != '\0') && (local_d8 != 0)) {
          uVar18 = FUN_00d50b20();
        }
      }
LAB_01de3240:
      lVar10 = lVar10 + 1;
      puVar6 = puVar12;
      puVar13 = puVar15;
    } while (lVar10 < *(int *)((int64_t)puVar9 + 0xc));
  }
  else {
    puVar15 = (void*)0x0;
    puVar12 = (void*)0x0;
    local_50 = 0;
  }
  local_38[0] = '\0';
  local_40 = puVar5;
  FUN_00d243f0();
  if ((local_38[0] != '\0') && (local_40 != (void*)0x0)) {
    FUN_00d50b20();
  }
  puVar6 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar6 = &g_02572358;
  uVar18 = (*local_100)();
  local_c8 = g_027f2a50;
  if (g_027f2a50 != 0) {
    uVar18 = FUN_00d50b00();
  }
  local_c0 = '\x01';
  uVar18 = FUN_000175c0(uVar18,&local_c8);
  puVar13 = local_40;
  if (local_40 != puVar9) {
    puVar9 = puVar13;
    if (local_38[0] != '\0') {
      if ((char)local_84 == '\0') {
        uVar18 = FUN_00d50b20();
      }
      local_38[0] = '\0';
      bVar17 = puVar13 == (void*)0x0;
      goto LAB_01de358a;
    }
    if (local_40 != (void*)0x0) {
      uVar18 = FUN_00d50b00();
    }
    if ((char)local_84 == '\0') {
      uVar18 = FUN_00d50b20();
    }
  }
  bVar17 = puVar9 == (void*)0x0;
  if ((local_38[0] != '\0') && (local_40 != (void*)0x0)) {
    uVar18 = FUN_00d50b20();
  }
LAB_01de358a:
  if ((local_c0 != '\0') && (local_c8 != 0)) {
    uVar18 = FUN_00d50b20();
  }
  if ((!bVar17) && (0 < *(int *)((int64_t)puVar9 + 0xc))) {
    lVar10 = 0;
    puVar13 = puVar12;
    puVar16 = puVar15;
    do {
      lVar11 = *(int64_t *)(puVar9[2] + lVar10 * 8);
      lVar1 = g_027092b8;
      if (local_50 != lVar11) {
        if (lVar11 != 0) {
          uVar18 = FUN_00d50b00();
        }
        bVar17 = local_50 != 0;
        lVar1 = g_027092b8;
        local_50 = lVar11;
        if (bVar17) {
          uVar18 = FUN_00d50b20();
          lVar1 = g_027092b8;
        }
      }
      g_027092b8 = lVar1;
      if (lVar1 != 0) {
        uVar18 = FUN_00d50b00();
      }
      local_b0 = '\x01';
      local_b8 = lVar1;
      uVar18 = FUN_01de4130(uVar18,&local_b8);
      puVar12 = local_40;
      if (local_40 == puVar13) {
LAB_01de36b1:
        puVar12 = puVar13;
        if (local_38[0] != '\0') {
LAB_01de36b7:
          if (local_40 != (void*)0x0) {
            uVar18 = FUN_00d50b20();
          }
        }
      }
      else {
        if (local_38[0] == '\0') {
          if (local_40 != (void*)0x0) {
            uVar18 = FUN_00d50b00();
          }
          if (puVar13 != (void*)0x0) {
            uVar18 = FUN_00d50b20();
            puVar13 = puVar12;
            goto LAB_01de36b1;
          }
          if (local_38[0] == '\0') goto LAB_01de36c5;
          goto LAB_01de36b7;
        }
        if (puVar13 != (void*)0x0) {
          uVar18 = FUN_00d50b20();
        }
        local_38[0] = '\0';
      }
LAB_01de36c5:
      if ((local_b0 != '\0') && (local_b8 != 0)) {
        uVar18 = FUN_00d50b20();
      }
      puVar15 = puVar16;
      if (puVar12 != (void*)0x0) {
        local_108 = 0;
        local_110 = puVar12;
        uVar18 = FUN_01de26c0(uVar18,&local_110);
        puVar15 = local_40;
        if (local_40 == puVar16) {
          puVar15 = puVar16;
          if ((local_38[0] != '\0') && (local_40 != (void*)0x0)) {
            uVar18 = FUN_00d50b20();
          }
joined_r0x01de3754:
          if (puVar15 == (void*)0x0) {
            puVar15 = (void*)0x0;
            goto LAB_01de35d0;
          }
        }
        else {
          if (local_38[0] == '\0') {
            if (local_40 != (void*)0x0) {
              uVar18 = FUN_00d50b00();
            }
            if (puVar16 != (void*)0x0) {
              uVar18 = FUN_00d50b20();
            }
            goto joined_r0x01de3754;
          }
          if (puVar16 != (void*)0x0) {
            uVar18 = FUN_00d50b20();
          }
          if (puVar15 == (void*)0x0) goto LAB_01de35d0;
        }
        local_38[0] = '\0';
        local_40 = puVar15;
        FUN_00d21140();
        if ((local_38[0] != '\0') && (local_40 != (void*)0x0)) {
          FUN_00d50b20();
        }
        local_a0 = '\0';
        local_a8 = local_50;
        uVar18 = FUN_01dbac60();
        if ((local_a0 != '\0') && (local_a8 != 0)) {
          uVar18 = FUN_00d50b20();
        }
      }
LAB_01de35d0:
      lVar10 = lVar10 + 1;
      puVar13 = puVar12;
      puVar16 = puVar15;
    } while (lVar10 < *(int *)((int64_t)puVar9 + 0xc));
  }
  lVar10 = this_ptr[0x2c];
  if (0 < *(int *)(lVar10 + 0xc)) {
    lVar11 = 0;
    do {
      puVar13 = *(void**)(*(int64_t *)(lVar10 + 0x10) + lVar11 * 8);
      if (puVar15 != puVar13) {
        if (puVar13 != (void*)0x0) {
          FUN_00d50b00();
        }
        bVar17 = puVar15 != (void*)0x0;
        puVar15 = puVar13;
        if (bVar17) {
          FUN_00d50b20();
        }
      }
      local_38[0] = '\0';
      local_40 = puVar15;
      cVar3 = FUN_00d23d70();
      if ((local_38[0] != '\0') && (local_40 != (void*)0x0)) {
        FUN_00d50b20();
      }
      if (cVar3 == '\0') {
        local_38[0] = '\0';
        local_40 = puVar15;
        cVar3 = FUN_00d23d70();
        if ((local_38[0] != '\0') && (local_40 != (void*)0x0)) {
          FUN_00d50b20();
        }
        if (cVar3 == '\0') {
          local_38[0] = '\0';
          local_40 = puVar15;
          FUN_00d21140();
          if ((local_38[0] != '\0') && (local_40 != (void*)0x0)) {
            FUN_00d50b20();
          }
        }
      }
      lVar11 = lVar11 + 1;
      lVar10 = this_ptr[0x2c];
    } while (lVar11 < *(int *)(lVar10 + 0xc));
  }
  local_38[0] = '\0';
  local_40 = puVar6;
  FUN_00d243f0();
  cVar3 = local_41;
  if ((local_38[0] != '\0') && (local_40 != (void*)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d23310();
  puVar13 = local_40;
  pcVar8 = local_48;
  if (local_38[0] != '\0') {
    pcVar8 = local_38;
  }
  local_48[0] = local_38[0];
  *pcVar8 = '\0';
  if ((local_38[0] != '\0') && (puVar13 != (void*)0x0)) {
    FUN_00d50b20();
  }
  local_90 = 0;
  if ((local_48[0] == '\0') && (puVar13 != (void*)0x0)) {
    FUN_00d50b00();
  }
  local_98 = puVar13;
  local_90 = '\x01';
  (**(code **)(*this_ptr + 0x980))();
  if ((local_90 != '\0') && (local_98 != (void*)0x0)) {
    FUN_00d50b20();
  }
  *(void*)((int64_t)this_ptr + 0x184) = 1;
  (**(code **)(*this_ptr + 0x920))();
  (**(code **)(*this_ptr + 0x620))();
  if (puVar6 != (void*)0x0) {
    FUN_00d50b20();
  }
  if (puVar15 != (void*)0x0) {
    FUN_00d50b20();
  }
  if (puVar12 != (void*)0x0) {
    FUN_00d50b20();
  }
  if (puVar5 != (void*)0x0) {
    FUN_00d50b20();
  }
  if (puVar9 != (void*)0x0) {
    FUN_00d50b20();
  }
  if (local_50 != 0) {
    FUN_00d50b20();
  }
  if ((cVar3 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 01db7aa0
// ============================================================
// Function: FUN_01db7aa0
// Address: 01db7aa0
// Size: 1857 bytes
// Class: GNDictionary

void FUN_01db7aa0(uint64_t param_1)

{
  float fVar1;
  uint uVar2;
  int64_t lVar3;
  int64_t *plVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  uint8_t auVar7 [16];
  bool bVar8;
  byte bVar9;
  bool bVar10;
  uint8_t auVar11 [12];
  char cVar12;
  bool bVar13;
  int64_t *arg1;
  uint64_t uVar14;
  int64_t *this_ptr;
  int64_t lVar15;
  int64_t lVar16;
  float fVar17;
  uint64_t uVar18;
  uint64_t in_XMM0_Qb;
  uint8_t auVar19 [16];
  uint8_t auVar20 [16];
  uint8_t auVar21 [4];
  float fVar22;
  float fVar23;
  float fVar24;
  int64_t local_e8;
  char local_e0;
  float local_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  uint8_t local_68 [4];
  uint8_t auStack_64 [8];
  float fStack_5c;
  float local_48;
  
  if ((char)this_ptr[0x27] != '\0') goto LAB_01db7f0a;
  fStack_94 = (float)((uint64_t)param_1 >> 0x20);
  fStack_8c = (float)((uint64_t)in_XMM0_Qb >> 0x20);
  if ((fStack_94 == 0.0) && (!NAN(fStack_94))) goto LAB_01db7f0a;
  fVar24 = fStack_94;
  FUN_01db2340();
  if ((local_e0 == '\0') && (local_e8 != 0)) {
    FUN_00d50b00();
  }
  local_48 = 0.0;
  fVar17 = 0.0;
  auVar11 = _auStack_64;
  auVar20._12_4_ = 0;
  auVar20._0_12_ = _auStack_64;
  _local_68 = auVar20 << 0x20;
  if (0 < *(int *)(local_e8 + 0xc)) {
    local_48 = 0.0;
    lVar16 = 0;
    fVar17 = 0.0;
    auVar7._12_4_ = 0;
    auVar7._0_12_ = auVar11;
    _local_68 = auVar7 << 0x20;
    lVar15 = 0;
    bVar10 = false;
    do {
      lVar3 = *(int64_t *)(*(int64_t *)(local_e8 + 0x10) + lVar16 * 8);
      if (lVar15 == lVar3) {
        if ((!bVar10) && (lVar15 != 0)) {
          bVar10 = true;
          FUN_00d50b00();
        }
      }
      else {
        if (lVar3 != 0) {
          FUN_00d50b00();
        }
        if ((bVar10) && (lVar15 != 0)) {
          FUN_00d50b20();
          bVar10 = true;
          lVar15 = lVar3;
        }
        else {
          bVar10 = true;
          lVar15 = lVar3;
        }
      }
      fVar22 = fVar24;
      if (*(int64_t **)(lVar15 + 0x20) != (int64_t *)*arg1) {
        (**(code **)(**(int64_t **)(lVar15 + 0x20) + 0x4d8))();
        fVar22 = 0.0;
        local_48 = local_48 + fVar24;
        fVar17 = fVar17 + *(float *)(lVar15 + 0x14);
        local_68 = (uint8_t  [4])((float)local_68 + *(float *)(lVar15 + 0x1c));
      }
      lVar16 = lVar16 + 1;
      fVar24 = fVar22;
    } while (lVar16 < *(int *)(local_e8 + 0xc));
    if (bVar10) {
      FUN_00d50b20();
    }
  }
  lVar15 = 0;
  bVar9 = 1;
  bVar10 = false;
  local_98 = (float)param_1;
  if ((g_0239424c < fStack_94) && (fStack_94 < local_48 - fVar17)) {
    fVar24 = fStack_94;
    fVar17 = fStack_94;
    (**(code **)(*(int64_t *)*arg1 + 0x4d8))();
    uVar2 = *(uint *)(this_ptr[0x28] + 0xc);
    if (0 < (int)uVar2) {
      lVar15 = *(int64_t *)(this_ptr[0x28] + 0x10);
      uVar14 = 0;
      do {
        fVar22 = (float)MACH_HEADER.reserved;
        if (*(int64_t *)(*(int64_t *)(lVar15 + uVar14 * 8) + 0x20) == *arg1) {
          lVar16 = *(int64_t *)(lVar15 + uVar14 * 8);
          if (lVar16 != 0) {
            FUN_00d50b00(lVar15,fVar24 + local_98);
            fVar22 = *(float *)(lVar16 + 0x1c);
            FUN_00d50b20();
          }
          break;
        }
        uVar14 = uVar14 + 1;
      } while (uVar2 != uVar14);
      if (fVar17 + fStack_94 < fVar22) {
        uVar2 = *(uint *)(this_ptr[0x28] + 0xc);
        if (0 < (int)uVar2) {
          lVar15 = *(int64_t *)(this_ptr[0x28] + 0x10);
          uVar14 = 0;
          do {
            if (*(int64_t *)(*(int64_t *)(lVar15 + uVar14 * 8) + 0x20) == *arg1) {
              lVar15 = *(int64_t *)(lVar15 + uVar14 * 8);
              if (lVar15 != 0) {
                FUN_00d50b00();
                bVar10 = true;
                bVar9 = 0;
                goto LAB_01db7d84;
              }
              break;
            }
            uVar14 = uVar14 + 1;
          } while (uVar2 != uVar14);
        }
      }
    }
    bVar10 = false;
    lVar15 = 0;
  }
LAB_01db7d84:
  fStack_90 = (float)in_XMM0_Qb;
  auVar21 = (uint8_t  [4])fStack_94;
  fVar22 = fStack_94;
  fVar24 = fStack_8c;
  fVar17 = fStack_8c;
  if (fStack_94 < 0.0) {
    fVar22 = 0.0;
    fVar24 = 0.0;
    fVar17 = 0.0;
    auVar21 = local_68;
    if (local_48 - fStack_94 < (float)local_68) {
      (**(code **)(*(int64_t *)*arg1 + 0x4d8))();
      auVar21 = (uint8_t  [4])((float)local_68 + local_98);
      fVar22 = fVar22 + fStack_94;
      fVar24 = fVar24 + fStack_90;
      fVar17 = fVar17 + fStack_8c;
      uVar2 = *(uint *)(this_ptr[0x28] + 0xc);
      if ((int)uVar2 < 1) {
        if ((float)MACH_HEADER.sizeofcmds < fVar22) {
          bVar8 = true;
          bVar13 = true;
          lVar16 = 0;
          if (lVar15 != 0) goto LAB_01db811d;
LAB_01db8197:
          if ((bool)(bVar9 & lVar15 != 0)) {
            bVar10 = true;
            if (bVar8) {
              FUN_00d50b00();
            }
            goto LAB_01db7e74;
          }
          if (!bVar8 && lVar15 != 0) {
            FUN_00d50b20();
            goto LAB_01db7e74;
          }
        }
      }
      else {
        lVar16 = *(int64_t *)(this_ptr[0x28] + 0x10);
        uVar14 = 0;
        do {
          fVar23 = fVar22;
          fVar1 = (float)MACH_HEADER.sizeofcmds;
          if (*(int64_t *)(*(int64_t *)(lVar16 + uVar14 * 8) + 0x20) == *arg1) {
            lVar16 = *(int64_t *)(lVar16 + uVar14 * 8);
            if (lVar16 != 0) {
              FUN_00d50b00();
              fVar1 = *(float *)(lVar16 + 0x14);
              FUN_00d50b20();
            }
            break;
          }
          uVar14 = uVar14 + 1;
        } while (uVar2 != uVar14);
        bVar13 = fVar1 < fVar22;
        fVar22 = fVar23;
        if (bVar13) {
          uVar2 = *(uint *)(this_ptr[0x28] + 0xc);
          bVar8 = true;
          bVar13 = true;
          if (0 < (int)uVar2) {
            lVar16 = *(int64_t *)(this_ptr[0x28] + 0x10);
            uVar14 = 0;
            do {
              if (*(int64_t *)(*(int64_t *)(lVar16 + uVar14 * 8) + 0x20) == *arg1) {
                lVar16 = *(int64_t *)(lVar16 + uVar14 * 8);
                if (lVar16 == 0) {
                  lVar16 = 0;
                }
                else {
                  FUN_00d50b00();
                }
                bVar8 = false;
                bVar13 = false;
                fVar22 = fVar23;
                if (lVar15 != lVar16) goto LAB_01db811d;
                goto LAB_01db8197;
              }
              uVar14 = uVar14 + 1;
            } while (uVar2 != uVar14);
          }
          lVar16 = 0;
          if (lVar15 == 0) goto LAB_01db8197;
LAB_01db811d:
          if (bVar13) {
            if (lVar16 != 0) {
              FUN_00d50b00();
            }
            bVar13 = (bool)(bVar10 & lVar15 != 0);
            bVar10 = true;
            lVar15 = lVar16;
            if (bVar13) {
              FUN_00d50b20();
            }
          }
          else {
            bVar13 = (bool)(bVar10 & lVar15 != 0);
            bVar10 = true;
            lVar15 = lVar16;
            if (bVar13) {
              FUN_00d50b20();
            }
          }
        }
      }
    }
  }
  if (lVar15 == 0) {
    if (local_e8 != 0) {
      FUN_00d50b20();
    }
LAB_01db7f0a:
    plVar4 = (int64_t *)this_ptr[6];
    if (plVar4 != (int64_t *)0x0) {
      FUN_00d50b00();
      (**(code **)(*plVar4 + 0x5a8))();
      if (this_ptr != (int64_t *)0x0) {
        FUN_00d50b20();
      }
    }
    (**(code **)(*this_ptr + 0x4d8))();
    cVar12 = FUN_01e4ce30();
    if (cVar12 == '\0') {
      (**(code **)(*this_ptr + 0x4d0))();
    }
    else {
      FUN_01e3b180();
    }
    (**(code **)(*this_ptr + 0x920))();
    return;
  }
LAB_01db7e74:
  plVar4 = *(int64_t **)(lVar15 + 0x20);
  if (plVar4 != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  (**(code **)(*plVar4 + 0x4d8))();
  auStack_64._0_4_ = fVar22;
  local_68 = auVar21;
  auStack_64._4_4_ = fVar24;
  fStack_5c = fVar17;
  FUN_00d50b20();
  cVar12 = FUN_01e4ce30();
  auVar19._0_4_ = (float)auVar21 + local_98;
  auVar19._4_4_ = fVar22 + fStack_94;
  auVar19._8_4_ = fVar24 + fStack_90;
  auVar19._12_4_ = fVar17 + fStack_8c;
  auVar20 = blendps(auVar19,_local_68,0xd);
  plVar4 = *(int64_t **)(lVar15 + 0x20);
  local_68 = auVar20._0_4_;
  auStack_64._0_4_ = auVar20._4_4_;
  if (cVar12 == '\0') {
    if (plVar4 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    (**(code **)(*plVar4 + 0x4d0))();
    FUN_00d50b20();
  }
  else {
    if (plVar4 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    FUN_01e3b180();
    if (plVar4 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  uVar5 = *(void*)(lVar15 + 0x10);
  uVar6 = *(void*)(lVar15 + 0x18);
  plVar4 = *(int64_t **)(lVar15 + 0x20);
  if (plVar4 != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  (**(code **)(*plVar4 + 0x4d8))();
  FUN_00d50b20();
  uVar18 = CONCAT44((float)auStack_64._0_4_ + fStack_94,(float)local_68 + local_98);
  *(void*)(lVar15 + 0x10) = uVar18;
  *(void*)(lVar15 + 0x18) = uVar18;
  (**(code **)(*this_ptr + 0x920))();
  *(void*)(lVar15 + 0x10) = uVar5;
  *(void*)(lVar15 + 0x18) = uVar6;
  if (local_e8 != 0) {
    FUN_00d50b20();
  }
  if (!bVar10) {
    return;
  }
  FUN_00d50b20();
  return;
}



// ============================================================
// 01de5c80
// ============================================================
// Function: FUN_01de5c80
// Address: 01de5c80
// Size: 1476 bytes
// Class: GNDictionary

void FUN_01de5c80(uint64_t param_1,uint32_t param_2,uint64_t param_3)

{
  int iVar1;
  int64_t *plVar2;
  uint8_t auVar3 [16];
  char cVar4;
  int64_t lVar5;
  char unaff_SIL;
  int64_t *this_ptr;
  int iVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  float fVar9;
  uint64_t uVar10;
  uint64_t extraout_XMM0_Qb;
  uint64_t extraout_XMM0_Qb_00;
  uint8_t auVar11 [16];
  uint32_t uVar12;
  uint32_t in_XMM2_Dc;
  uint32_t in_XMM2_Dd;
  int64_t local_c0;
  char local_b8;
  int64_t *local_b0;
  char local_a8;
  uint32_t local_9c;
  uint64_t local_98;
  uint64_t uStack_90;
  int64_t *local_88;
  char local_80;
  int64_t *local_78;
  char local_70;
  int64_t local_68;
  uint8_t local_60;
  int64_t local_58;
  uint64_t local_50;
  int local_48;
  int64_t *local_40;
  char local_38;
  
  uVar12 = (uint32_t)((uint64_t)param_3 >> 0x20);
  if ((int)this_ptr[0x50] == 0) {
    local_9c = param_2;
    if (unaff_SIL == '\0') {
      if (*(char *)((int64_t)this_ptr + 0x279) == '\0') {
        auVar11._0_8_ = FUN_01dd38e0();
        auVar11._8_8_ = extraout_XMM0_Qb;
        fVar9 = (float)(int)this_ptr[0x30] *
                (*(float *)(this_ptr + 0x2d) + *(float *)((int64_t)this_ptr + 0x174));
      }
      else {
        iVar6 = 0;
        FUN_00c8e340();
        FUN_00c8e7d0();
        if ((int)this_ptr[0x30] < 1) {
          local_98 = 0;
          uStack_90 = 0;
        }
        else {
          local_98 = 0;
          uStack_90 = 0;
          do {
            fVar9 = (float)FUN_01de5aa0();
            local_98 = CONCAT44(local_98._4_4_,
                                (float)local_98 + fVar9 + *(float *)((int64_t)this_ptr + 0x174));
            lVar5 = this_ptr[0x52];
            iVar1 = *(int *)(lVar5 + 0x18);
            FUN_00c8e340();
            *(float *)(*(int64_t *)(lVar5 + 0x10) + (int64_t)iVar1) = (float)local_98;
            iVar6 = iVar6 + 1;
          } while (iVar6 < (int)this_ptr[0x30]);
        }
        auVar11._0_8_ = FUN_01dd38e0();
        auVar11._8_8_ = extraout_XMM0_Qb_00;
        fVar9 = (float)local_98;
        uVar12 = local_98._4_4_;
        in_XMM2_Dc = (uint32_t)uStack_90;
        in_XMM2_Dd = uStack_90._4_4_;
      }
      auVar3._4_4_ = uVar12;
      auVar3._0_4_ = fVar9;
      auVar3._8_4_ = in_XMM2_Dc;
      auVar3._12_4_ = in_XMM2_Dd;
      auVar11 = insertps(auVar11,auVar3,0x10);
      (**(code **)(*this_ptr + 0x4e8))(auVar11._0_8_);
    }
    if (((char)this_ptr[0x4f] != '\0') && (local_98 = FUN_01e436c0(), 0 < (int)this_ptr[0x30])) {
      uVar8 = 0;
      do {
        FUN_01dcf710();
        cVar4 = FUN_00d054a0();
        lVar5 = this_ptr[0x2c];
        if (cVar4 == '\0') {
          if (lVar5 != 0) {
            local_60 = 0;
            local_68 = 0;
            local_50 = 0xffffffff;
            local_48 = 0;
            local_50._4_4_ = 0;
            local_58 = lVar5;
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
              lVar5 = (int64_t)(int)local_50;
              iVar6 = (int)local_50 + 1;
              local_50 = CONCAT44(local_50._4_4_,iVar6);
              if (*(int *)(local_58 + 0xc) <= iVar6) break;
              local_68 = *(int64_t *)(*(int64_t *)(local_58 + 0x10) + 8 + lVar5 * 8);
              plVar2 = *(int64_t **)
                        (*(int64_t *)
                          (*(int64_t *)
                            (*(int64_t *)(this_ptr[0x51] + 0x10) +
                            ((int64_t)iVar6 + (int64_t)local_48) * 8) + 0x10) + uVar8 * 8);
              if (g_028b8a88 != plVar2) {
                (**(code **)(*this_ptr + 0x950))();
                (**(code **)(*plVar2 + 0x4d0))();
              }
            }
            goto LAB_01de5e20;
          }
        }
        else if (lVar5 != 0) {
          local_60 = 0;
          local_68 = 0;
          local_50 = 0xffffffff;
          local_48 = 0;
          local_50._4_4_ = 0;
          local_58 = lVar5;
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
            lVar5 = (int64_t)(int)local_50;
            iVar6 = (int)local_50 + 1;
            local_50 = CONCAT44(local_50._4_4_,iVar6);
            if (*(int *)(local_58 + 0xc) <= iVar6) break;
            local_68 = *(int64_t *)(*(int64_t *)(local_58 + 0x10) + 8 + lVar5 * 8);
            uVar7 = (int64_t)iVar6 + (int64_t)local_48;
            lVar5 = *(int64_t *)
                     (*(int64_t *)(*(int64_t *)(this_ptr[0x51] + 0x10) + uVar7 * 8) + 0x10);
            plVar2 = *(int64_t **)(lVar5 + uVar8 * 8);
            if (g_028b8a88 == plVar2) {
              local_b8 = '\0';
              local_c0 = local_68;
              uVar10 = (**(code **)(*this_ptr + 0xa18))(&local_c0,uVar8 & 0xffffffff);
              plVar2 = local_40;
              if (local_38 == '\0') {
                if (((local_40 != (int64_t *)0x0) && (uVar10 = FUN_00d50b00(), local_38 != '\0'))
                   && (local_40 != (int64_t *)0x0)) {
                  uVar10 = FUN_00d50b20();
                }
              }
              else {
                local_38 = '\0';
              }
              if ((local_b8 != '\0') && (local_c0 != 0)) {
                uVar10 = FUN_00d50b20();
              }
              local_38 = '\0';
              local_40 = plVar2;
              uVar10 = FUN_00d233f0(uVar10,uVar8 & 0xffffffff);
              if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
                uVar10 = FUN_00d50b20();
              }
              (**(code **)(*this_ptr + 0x950))(uVar10,uVar7 & 0xffffffff);
              (**(code **)(*plVar2 + 0x4d0))();
              local_b0 = plVar2;
              local_a8 = '\0';
              (**(code **)(*this_ptr + 0x918))();
              if ((local_a8 != '\0') && (local_b0 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              (**(code **)(*this_ptr + 0xa08))(uVar7 & 0xffffffff,uVar8 & 0xffffffff);
              local_88 = local_40;
              local_80 = 0;
              if (local_38 == '\0') {
                if (local_40 != (int64_t *)0x0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_38 = '\0';
              }
              local_80 = '\x01';
              (**(code **)(*plVar2 + 0x978))();
              if ((local_80 != '\0') && (local_88 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              FUN_00d50b20();
            }
            else {
              (**(code **)(*this_ptr + 0x950))(lVar5,uVar7 & 0xffffffff);
              (**(code **)(*plVar2 + 0x4d0))();
              if ((char)local_9c == '\0') {
                (**(code **)(*this_ptr + 0xa08))(uVar7 & 0xffffffff,uVar8 & 0xffffffff);
                local_78 = local_40;
                local_70 = 0;
                if (local_38 == '\0') {
                  if (local_40 != (int64_t *)0x0) {
                    FUN_00d50b00();
                  }
                }
                else {
                  local_38 = '\0';
                }
                local_70 = '\x01';
                (**(code **)(*plVar2 + 0x978))();
                if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
              }
            }
          }
LAB_01de5e20:
          FUN_01de6a30();
        }
        uVar8 = uVar8 + 1;
      } while ((int64_t)uVar8 < (int64_t)(int)this_ptr[0x30]);
    }
  }
  return;
}



// ============================================================
// 019ea7c0
// ============================================================
// Function: FUN_019ea7c0
// Address: 019ea7c0
// Size: 1659 bytes
// Class: GNDictionary
// String references:
//   "GNDictionary"

void FUN_019ea7c0(uint32_t param_1)

{
  int64_t *plVar1;
  int64_t lVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint64_t uVar7;
  byte bVar8;
  byte bVar9;
  int64_t *plVar10;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t *plVar11;
  uint32_t uVar12;
  int64_t **pplVar13;
  bool bVar14;
  uint32_t extraout_XMM0_Da;
  uint32_t extraout_XMM0_Da_00;
  uint32_t extraout_XMM0_Da_01;
  uint32_t extraout_XMM0_Da_02;
  uint32_t uVar15;
  uint32_t extraout_XMM0_Da_03;
  uint32_t extraout_XMM0_Da_04;
  uint32_t extraout_XMM0_Da_05;
  uint32_t extraout_XMM0_Da_06;
  int64_t local_98;
  char local_90;
  int64_t local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  uint32_t local_64;
  int64_t local_60;
  int64_t *local_58;
  char local_50;
  uint local_44;
  uint64_t local_40;
  char local_31;
  
  plVar10 = (int64_t *)*arg1;
  if ((g_026fdd40 == '\0') &&
     (iVar4 = ___cxa_guard_acquire(), param_1 = extraout_XMM0_Da_06, iVar4 != 0)) {
    g_026cd0e8 = FUN_00d4fe50();
    g_026cd0d0 = "GNDictionary";
    g_026cd0d8 = 0x28;
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
    param_1 = ___cxa_guard_release();
  }
  if (plVar10 == (int64_t *)0x0) {
LAB_019ea80c:
    arg1 = &g_02802688;
  }
  else {
    (**(code **)(*plVar10 + 0x360))();
    cVar3 = FUN_00e85ea0();
    param_1 = extraout_XMM0_Da;
    if (cVar3 == '\0') goto LAB_019ea80c;
  }
  local_60 = *arg1;
  if (local_60 == 0) {
    return;
  }
  local_31 = (char)arg1[1];
  if (local_31 != '\0') {
    param_1 = FUN_00d50b00();
  }
  lVar2 = g_026dc290;
  if (g_026dc290 != 0) {
    param_1 = FUN_00d50b00();
  }
  local_98 = lVar2;
  local_90 = '\x01';
  pplVar13 = &local_58;
  FUN_000175c0(param_1,&local_98);
  plVar10 = local_58;
  uVar7 = FUN_00053ac0();
  uVar15 = extraout_XMM0_Da_00;
  if (plVar10 == (int64_t *)0x0) {
LAB_019ea89e:
    pplVar13 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar10 + 0x360))();
    uVar7 = FUN_00e85ea0();
    uVar15 = extraout_XMM0_Da_01;
    if ((char)uVar7 == '\0') goto LAB_019ea89e;
  }
  plVar10 = *pplVar13;
  if (plVar10 == (int64_t *)0x0) {
    uVar12 = (uint32_t)CONCAT71((int7)((uint64_t)pplVar13 >> 8),1);
    bVar8 = 0;
    bVar9 = 0;
    local_40 = 0;
    plVar10 = (int64_t *)0x0;
  }
  else {
    if (*(char *)(pplVar13 + 1) == '\0') {
      uVar7 = FUN_00d50b00();
      uVar15 = extraout_XMM0_Da_02;
    }
    else {
      *(void*)(pplVar13 + 1) = 0;
    }
    bVar8 = 1;
    bVar9 = 1;
    uVar12 = 0;
    local_40 = CONCAT71((int7)((uint64_t)uVar7 >> 8),1);
  }
  if ((local_50 != '\0') && (bVar9 = bVar8, local_58 != (int64_t *)0x0)) {
    uVar15 = FUN_00d50b20();
  }
  if ((local_90 != '\0') && (local_98 != 0)) {
    uVar15 = FUN_00d50b20();
  }
  if (plVar10 == (int64_t *)0x0) {
    local_44 = 0;
    local_88 = g_027e1488;
  }
  else {
    iVar4 = (**(code **)(*this_ptr + 0xd08))();
    iVar5 = FUN_00d45870();
    if (iVar5 == 0) {
      (**(code **)(*this_ptr + 0xd00))();
    }
    else if (iVar5 == 1) {
      (**(code **)(*this_ptr + 0xd00))();
    }
    else if (iVar5 == 2) {
      (**(code **)(*this_ptr + 0xd00))();
    }
    uVar7 = (**(code **)(*this_ptr + 0xd08))();
    local_44 = (uint)CONCAT71((int7)((uint64_t)uVar7 >> 8),iVar4 != (int)uVar7);
    uVar15 = extraout_XMM0_Da_03;
    local_88 = g_027e1488;
  }
  g_027e1488 = local_88;
  local_64 = uVar12;
  if (local_88 != 0) {
    uVar15 = FUN_00d50b00();
  }
  local_80 = '\x01';
  pplVar13 = &local_58;
  FUN_000175c0(uVar15,&local_88);
  plVar11 = local_58;
  uVar15 = FUN_00053ac0();
  if (plVar11 == (int64_t *)0x0) {
LAB_019eaa03:
    pplVar13 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar11 + 0x360))();
    cVar3 = FUN_00e85ea0();
    uVar15 = extraout_XMM0_Da_04;
    if (cVar3 == '\0') goto LAB_019eaa03;
  }
  plVar1 = *pplVar13;
  if (plVar1 == plVar10) {
    if (((byte)local_64 & plVar1 != (int64_t *)0x0) == 1) {
      if (*(char *)(pplVar13 + 1) != '\0') goto LAB_019eaa5d;
      uVar15 = FUN_00d50b00();
      plVar1 = plVar10;
      goto joined_r0x019eaab1;
    }
  }
  else {
    if (*(char *)(pplVar13 + 1) == '\0') {
      if (plVar1 != (int64_t *)0x0) {
        uVar15 = FUN_00d50b00();
      }
      if ((bool)(bVar9 & plVar10 != (int64_t *)0x0)) {
        uVar15 = FUN_00d50b20();
      }
    }
    else {
      bVar14 = plVar10 != (int64_t *)0x0;
      plVar10 = plVar1;
      if ((bool)(bVar9 & bVar14)) {
        uVar15 = FUN_00d50b20();
      }
LAB_019eaa5d:
      *(void*)(pplVar13 + 1) = 0;
      plVar1 = plVar10;
    }
joined_r0x019eaab1:
    local_40 = CONCAT71((int7)((uint64_t)plVar11 >> 8),1);
    plVar10 = plVar1;
  }
  local_40 = local_40 & 0xffffffff;
  if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
    uVar15 = FUN_00d50b20();
  }
  if ((local_80 != '\0') && (local_88 != 0)) {
    uVar15 = FUN_00d50b20();
  }
  if (plVar10 != (int64_t *)0x0) {
    iVar4 = (**(code **)(&UNK_00001588 + *this_ptr))();
    uVar15 = FUN_00d45870();
    switch(uVar15) {
    case 0:
      (**(code **)(&UNK_00001580 + *this_ptr))();
      break;
    case 1:
      (**(code **)(&UNK_00001580 + *this_ptr))();
      break;
    case 2:
      (**(code **)(&UNK_00001580 + *this_ptr))();
      break;
    case 3:
      (**(code **)(&UNK_00001580 + *this_ptr))();
      break;
    case 4:
      (**(code **)(&UNK_00001580 + *this_ptr))();
    }
    iVar5 = (**(code **)(&UNK_00001588 + *this_ptr))();
    uVar6 = local_44 & 0xff;
    uVar15 = extraout_XMM0_Da_05;
    local_44 = 1;
    if (iVar4 == iVar5) {
      local_44 = uVar6;
    }
  }
  lVar2 = g_027e1490;
  if (g_027e1490 != 0) {
    uVar15 = FUN_00d50b00();
  }
  local_78 = lVar2;
  local_70 = '\x01';
  pplVar13 = &local_58;
  FUN_000175c0(uVar15,&local_78);
  plVar11 = local_58;
  FUN_00053ac0();
  if (plVar11 == (int64_t *)0x0) {
LAB_019eabf8:
    pplVar13 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar11 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 == '\0') goto LAB_019eabf8;
  }
  plVar11 = *pplVar13;
  if (plVar11 == plVar10) {
    cVar3 = (char)local_40;
    if (((char)local_40 == '\0') && (plVar11 != (int64_t *)0x0)) {
      plVar11 = plVar10;
      if (*(char *)(pplVar13 + 1) != '\0') goto LAB_019eac47;
      FUN_00d50b00();
      goto joined_r0x019eac84;
    }
  }
  else {
    if (*(char *)(pplVar13 + 1) == '\0') {
      if (plVar11 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      if (((char)local_40 != '\0') && (plVar10 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      if (((char)local_40 != '\0') && (plVar10 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
LAB_019eac47:
      *(void*)(pplVar13 + 1) = 0;
    }
joined_r0x019eac84:
    plVar10 = plVar11;
    cVar3 = '\x01';
  }
  if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  if (plVar10 == (int64_t *)0x0) {
LAB_019eacfd:
    if ((char)local_44 == '\0') goto LAB_019ead0f;
  }
  else {
    iVar4 = (**(code **)(&UNK_000015a0 + *this_ptr))();
    iVar5 = FUN_00d45870();
    if (iVar5 == 0) {
      (**(code **)(&UNK_00001598 + *this_ptr))();
    }
    else if (iVar5 == 1) {
      (**(code **)(&UNK_00001598 + *this_ptr))();
    }
    iVar5 = (**(code **)(&UNK_000015a0 + *this_ptr))();
    if (iVar4 == iVar5) goto LAB_019eacfd;
  }
  (**(code **)("/System/Library/Frameworks/CoreGraphics.framework/Versions/A/CoreGraphics" +
              *this_ptr + 0x40))();
LAB_019ead0f:
  if ((cVar3 != '\0') && (plVar10 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (local_31 != '\0') {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 01db5b00
// ============================================================
// Function: FUN_01db5b00
// Address: 01db5b00
// Size: 1623 bytes
// Class: GNDictionary
// String references:
//   "GNDictionary"

void FUN_01db5b00(uint64_t param_1,uint64_t param_2)

{
  int64_t lVar1;
  char cVar2;
  int iVar3;
  int64_t *plVar4;
  int64_t lVar5;
  uint64_t uVar6;
  int64_t *plVar7;
  int64_t **pplVar8;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t lVar9;
  int64_t lVar10;
  int64_t lVar11;
  uint32_t uVar12;
  uint32_t extraout_XMM0_Da;
  uint32_t uVar13;
  uint32_t extraout_XMM0_Da_00;
  uint64_t local_c8;
  int64_t local_c0;
  char local_b8;
  int64_t *local_b0;
  char local_a8;
  int64_t local_a0;
  char local_98;
  int64_t local_90;
  char local_88;
  int64_t *local_80;
  int64_t *local_70;
  char local_68;
  uint64_t local_60;
  int64_t *local_58;
  int64_t *local_50;
  uint64_t local_48;
  uint64_t local_40;
  char local_31;
  
  plVar4 = (int64_t *)FUN_00e8fc40();
  FUN_00022d50();
  uVar12 = (**(code **)(*plVar4 + 0x18))();
  plVar7 = (int64_t *)*arg1;
  if ((g_026fdd40 == '\0') &&
     (iVar3 = ___cxa_guard_acquire(), uVar12 = extraout_XMM0_Da_00, iVar3 != 0)) {
    g_026cd0e8 = FUN_00d4fe50();
    g_026cd0d0 = "GNDictionary";
    g_026cd0d8 = 0x28;
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
    uVar12 = ___cxa_guard_release();
  }
  if (plVar7 == (int64_t *)0x0) {
LAB_01db5b72:
    plVar7 = &g_02802688;
  }
  else {
    (**(code **)(*plVar7 + 0x360))();
    cVar2 = FUN_00e85ea0();
    plVar7 = arg1;
    uVar12 = extraout_XMM0_Da;
    if (cVar2 == '\0') goto LAB_01db5b72;
  }
  if (*plVar7 == 0) {
    local_60 = 0;
    local_50 = (int64_t *)0x0;
  }
  else {
    plVar7 = (int64_t *)*arg1;
    if (plVar4 == plVar7) {
      local_31 = '\x01';
      plVar7 = plVar4;
      local_c0 = g_027f22d0;
    }
    else {
      local_31 = (char)arg1[1];
      if ((local_31 != '\0') && (plVar7 != (int64_t *)0x0)) {
        FUN_00d50b00();
      }
      uVar12 = FUN_00d50b20();
      local_c0 = g_027f22d0;
    }
    g_027f22d0 = local_c0;
    if (local_c0 != 0) {
      uVar12 = FUN_00d50b00();
    }
    local_b8 = '\x01';
    uVar12 = FUN_000175c0(uVar12,&local_c0);
    plVar4 = local_70;
    if (local_68 == '\0') {
      if (((local_70 != (int64_t *)0x0) && (uVar12 = FUN_00d50b00(), local_68 != '\0')) &&
         (local_70 != (int64_t *)0x0)) {
        uVar12 = FUN_00d50b20();
      }
    }
    else {
      local_68 = '\0';
    }
    if ((local_b8 != '\0') && (local_c0 != 0)) {
      uVar12 = FUN_00d50b20();
    }
    lVar9 = g_027f22d0;
    local_80 = plVar4;
    if (plVar4 != (int64_t *)0x0) {
      local_b0 = plVar4;
      local_a8 = '\0';
      if (g_027f22d0 != 0) {
        uVar12 = FUN_00d50b00();
      }
      local_a0 = lVar9;
      local_98 = '\x01';
      uVar12 = (**(code **)(*this_ptr + 0x80))(uVar12,&local_a0);
      if ((local_98 != '\0') && (local_a0 != 0)) {
        uVar12 = FUN_00d50b20();
      }
      if ((local_a8 != '\0') && (local_b0 != (int64_t *)0x0)) {
        uVar12 = FUN_00d50b20();
      }
    }
    lVar9 = g_027f22c8;
    if (g_027f22c8 != 0) {
      uVar12 = FUN_00d50b00();
    }
    local_90 = lVar9;
    local_88 = '\x01';
    FUN_000175c0(uVar12,&local_90);
    local_50 = local_70;
    if (local_70 == (int64_t *)0x0) {
      local_60 = 0;
      local_50 = (int64_t *)0x0;
joined_r0x01db5d55:
      if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      if (local_68 == '\0') {
        uVar6 = FUN_00d50b00();
        local_60 = CONCAT71((int7)((uint64_t)uVar6 >> 8),1);
        goto joined_r0x01db5d55;
      }
      local_68 = '\0';
      local_60 = CONCAT71((int7)((uint64_t)local_70 >> 8),1);
    }
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
    if ((local_50 == (int64_t *)0x0) ||
       (*(int *)((int64_t)local_50 + 0xc) != *(int *)(this_ptr[0x28] + 0xc))) {
      local_40 = 0;
      lVar9 = 0;
      local_48 = 0;
      lVar11 = 0;
    }
    else {
      local_58 = plVar7;
      if (*(int *)((int64_t)local_50 + 0xc) < 1) {
LAB_01db5ff4:
        local_40 = 0;
        lVar9 = 0;
        local_48 = 0;
        lVar11 = 0;
      }
      else {
        lVar9 = 0;
        do {
          plVar7 = *(int64_t **)(local_50[2] + lVar9 * 8);
          local_70 = plVar7;
          FUN_00053ac0();
          pplVar8 = (int64_t **)&g_02802688;
          if (plVar7 != (int64_t *)0x0) {
            (**(code **)(*plVar7 + 0x360))();
            cVar2 = FUN_00e85ea0();
            pplVar8 = &local_70;
            if (cVar2 == '\0') {
              pplVar8 = (int64_t **)&g_02802688;
            }
          }
          if (*pplVar8 == (int64_t *)0x0) {
            local_40 = 0;
            lVar9 = 0;
            local_48 = 0;
            lVar11 = 0;
            plVar7 = local_58;
            goto joined_r0x01db603f;
          }
          lVar9 = lVar9 + 1;
        } while (lVar9 < *(int *)((int64_t)local_50 + 0xc));
        if (*(int *)((int64_t)local_50 + 0xc) < 1) goto LAB_01db5ff4;
        lVar10 = 0;
        lVar11 = 0;
        local_48 = 0;
        lVar9 = 0;
        local_40 = 0;
        do {
          lVar5 = local_50[2];
          lVar1 = *(int64_t *)(lVar5 + lVar10 * 8);
          if (lVar11 == lVar1) {
            if (((char)local_48 == '\0') && (lVar11 != 0)) {
              local_48 = CONCAT71((int7)((uint64_t)lVar5 >> 8),1);
              FUN_00d50b00();
            }
          }
          else {
            if (lVar1 != 0) {
              lVar5 = FUN_00d50b00();
            }
            if (((char)local_48 == '\0') || (lVar11 == 0)) {
              local_48 = CONCAT71((int7)((uint64_t)lVar5 >> 8),1);
              lVar11 = lVar1;
            }
            else {
              uVar6 = FUN_00d50b20();
              local_48 = CONCAT71((int7)((uint64_t)uVar6 >> 8),1);
              lVar11 = lVar1;
            }
          }
          lVar5 = *(int64_t *)(this_ptr[0x28] + 0x10);
          lVar1 = *(int64_t *)(lVar5 + lVar10 * 8);
          if (lVar9 == lVar1) {
            if (((char)local_40 == '\0') && (lVar9 != 0)) {
              local_40 = CONCAT71((int7)((uint64_t)lVar5 >> 8),1);
              FUN_00d50b00();
            }
          }
          else {
            if (lVar1 != 0) {
              lVar5 = FUN_00d50b00();
            }
            if (((char)local_40 == '\0') || (lVar9 == 0)) {
              local_40 = CONCAT71((int7)((uint64_t)lVar5 >> 8),1);
              lVar9 = lVar1;
            }
            else {
              uVar6 = FUN_00d50b20();
              local_40 = CONCAT71((int7)((uint64_t)uVar6 >> 8),1);
              lVar9 = lVar1;
            }
          }
          iVar3 = FUN_00d45870();
          if (iVar3 != -1) {
            uVar12 = (**(code **)(**(int64_t **)(lVar9 + 0x20) + 0x4d8))();
            local_c8 = param_2;
            uVar13 = FUN_00d459e0();
            *(void*)((int64_t)&local_c8 + (uint64_t)((char)this_ptr[0x27] == '\0') * 4) =
                 uVar13;
            param_2 = local_c8;
            (**(code **)(**(int64_t **)(lVar9 + 0x20) + 0x4d0))(uVar12);
          }
          lVar10 = lVar10 + 1;
        } while (lVar10 < *(int *)((int64_t)local_50 + 0xc));
      }
      (**(code **)(*this_ptr + 0x920))();
      plVar7 = local_58;
    }
joined_r0x01db603f:
    if (local_80 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if (((char)local_40 != '\0') && (lVar9 != 0)) {
      FUN_00d50b20();
    }
    if (((char)local_48 != '\0') && (lVar11 != 0)) {
      FUN_00d50b20();
    }
    if ((local_31 == '\0') || (plVar7 == (int64_t *)0x0)) goto LAB_01db607f;
  }
  FUN_00d50b20();
LAB_01db607f:
  if (((char)local_60 != '\0') && (local_50 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 019e9aa0
// ============================================================
// Function: FUN_019e9aa0
// Address: 019e9aa0
// Size: 2343 bytes
// Class: GNDictionary

void* FUN_019e9aa0(void)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  uint32_t uVar5;
  int64_t *plVar6;
  int64_t lVar7;
  int64_t *arg1;
  void*this_ptr;
  int64_t lVar8;
  int64_t local_40;
  char local_38;
  
  plVar6 = (int64_t *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar6 + 0x18))();
  iVar4 = (**(code **)(*arg1 + 0xd08))();
  bVar1 = true;
  lVar7 = local_40;
  if (iVar4 == 0) {
    FUN_00d46530();
    if (local_40 == 0) {
LAB_019e9bcd:
      bVar2 = false;
      lVar7 = 0;
    }
    else {
      bVar2 = true;
      if (local_38 == '\0') {
        FUN_00d50b00();
      }
    }
LAB_019e9bd3:
    lVar8 = g_026dc290;
    if (lVar7 == 0) {
      lVar7 = 0;
    }
    else {
      if (g_026dc290 != 0) {
        FUN_00d50b00();
      }
      local_40 = lVar8;
      local_38 = '\0';
      FUN_00ca0840();
      if (lVar8 != 0) {
        FUN_00d50b20();
      }
      bVar1 = false;
    }
  }
  else {
    if (iVar4 == 1) {
      FUN_00d46530();
      if (local_40 == 0) goto LAB_019e9bcd;
      bVar2 = true;
      if (local_38 == '\0') {
        FUN_00d50b00();
      }
      goto LAB_019e9bd3;
    }
    if (iVar4 == 2) {
      FUN_00d46530();
      if (local_40 == 0) goto LAB_019e9bcd;
      bVar2 = true;
      if (local_38 == '\0') {
        FUN_00d50b00();
      }
      goto LAB_019e9bd3;
    }
    lVar7 = 0;
    bVar2 = false;
  }
  uVar5 = (**(code **)(&UNK_00001588 + *arg1))();
  lVar8 = lVar7;
  switch(uVar5) {
  case 0:
    FUN_00d46530();
    if (local_40 == lVar7) {
      if ((!bVar2) && (lVar7 != 0)) {
        bVar1 = true;
        if (local_38 != '\0') break;
        bVar2 = true;
        FUN_00d50b00();
      }
LAB_019e9fed:
      lVar8 = lVar7;
      bVar1 = bVar2;
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
    else if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
      lVar8 = local_40;
      bVar1 = true;
      if ((bVar2) && (lVar7 != 0)) {
        FUN_00d50b20();
        lVar7 = local_40;
        bVar2 = true;
        goto LAB_019e9fed;
      }
    }
    else if ((bVar2) && (lVar7 != 0)) {
      FUN_00d50b20();
      lVar8 = local_40;
      bVar1 = true;
    }
    else {
LAB_019e9e03:
      lVar8 = local_40;
      bVar1 = true;
    }
    break;
  case 1:
    FUN_00d46530();
    if (local_40 == lVar7) {
      if ((!bVar2) && (lVar7 != 0)) {
        bVar1 = true;
        if (local_38 != '\0') break;
        bVar2 = true;
        FUN_00d50b00();
      }
LAB_019ea006:
      lVar8 = lVar7;
      bVar1 = bVar2;
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
    else if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
      lVar8 = local_40;
      bVar1 = true;
      if ((bVar2) && (lVar7 != 0)) {
        FUN_00d50b20();
        lVar7 = local_40;
        bVar2 = true;
        goto LAB_019ea006;
      }
    }
    else {
      if ((!bVar2) || (lVar7 == 0)) goto LAB_019e9e03;
      FUN_00d50b20();
      lVar8 = local_40;
      bVar1 = true;
    }
    break;
  case 2:
    FUN_00d46530();
    if (local_40 == lVar7) {
      if ((!bVar2) && (lVar7 != 0)) {
        bVar1 = true;
        if (local_38 != '\0') break;
        bVar2 = true;
        FUN_00d50b00();
      }
LAB_019ea01f:
      lVar8 = lVar7;
      bVar1 = bVar2;
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
    else if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
      lVar8 = local_40;
      bVar1 = true;
      if ((bVar2) && (lVar7 != 0)) {
        FUN_00d50b20();
        lVar7 = local_40;
        bVar2 = true;
        goto LAB_019ea01f;
      }
    }
    else {
      if ((!bVar2) || (lVar7 == 0)) goto LAB_019e9e03;
      FUN_00d50b20();
      lVar8 = local_40;
      bVar1 = true;
    }
    break;
  case 3:
    FUN_00d46530();
    if (local_40 == lVar7) {
      if ((!bVar2) && (lVar7 != 0)) {
        bVar1 = true;
        if (local_38 != '\0') break;
        bVar2 = true;
        FUN_00d50b00();
      }
LAB_019ea038:
      lVar8 = lVar7;
      bVar1 = bVar2;
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
    else if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
      lVar8 = local_40;
      bVar1 = true;
      if ((bVar2) && (lVar7 != 0)) {
        FUN_00d50b20();
        lVar7 = local_40;
        bVar2 = true;
        goto LAB_019ea038;
      }
    }
    else {
      if ((!bVar2) || (lVar7 == 0)) goto LAB_019e9e03;
      FUN_00d50b20();
      lVar8 = local_40;
      bVar1 = true;
    }
    break;
  case 4:
    FUN_00d46530();
    if (local_40 == lVar7) {
      if ((!bVar2) && (local_40 != 0)) {
        bVar1 = true;
        if (local_38 != '\0') break;
        bVar2 = true;
        FUN_00d50b00();
      }
LAB_019ea051:
      lVar8 = lVar7;
      bVar1 = bVar2;
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
    else if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
      lVar8 = local_40;
      bVar1 = true;
      if ((bVar2) && (lVar7 != 0)) {
        FUN_00d50b20();
        lVar7 = local_40;
        bVar2 = true;
        goto LAB_019ea051;
      }
    }
    else {
      if ((!bVar2) || (lVar7 == 0)) goto LAB_019e9e03;
      FUN_00d50b20();
      lVar8 = local_40;
      bVar1 = true;
    }
    break;
  default:
    if (bVar1) goto LAB_019ea0df;
    if (bVar2) {
      FUN_00d50b20();
    }
    bVar1 = true;
    lVar8 = 0;
    bVar2 = false;
    goto LAB_019ea0e2;
  }
  bVar2 = bVar1;
  lVar7 = g_027e1488;
  if (lVar8 == 0) {
LAB_019ea0df:
    bVar1 = true;
    lVar8 = 0;
  }
  else {
    if (g_027e1488 != 0) {
      FUN_00d50b00();
    }
    local_40 = lVar7;
    local_38 = '\0';
    FUN_00ca0840();
    if (lVar7 != 0) {
      FUN_00d50b20();
    }
    bVar1 = false;
  }
LAB_019ea0e2:
  iVar4 = (**(code **)(&UNK_000015a0 + *arg1))();
  lVar7 = lVar8;
  bVar3 = bVar2;
  if (iVar4 == 1) {
    FUN_00d46530();
    if (local_40 == lVar8) {
      if ((!bVar2) && (local_40 != 0)) {
        if (local_38 != '\0') {
LAB_019ea20a:
          bVar3 = true;
          goto LAB_019ea2b5;
        }
        FUN_00d50b00();
        bVar3 = true;
      }
    }
    else {
      if (local_38 != '\0') {
        bVar3 = true;
        lVar7 = local_40;
        if ((bVar2) && (lVar8 != 0)) {
          FUN_00d50b20();
          bVar3 = true;
        }
        goto LAB_019ea2b5;
      }
      if (local_40 != 0) {
        FUN_00d50b00();
      }
      lVar7 = local_40;
      bVar3 = true;
      if ((bVar2) && (lVar8 != 0)) {
        FUN_00d50b20();
        bVar3 = true;
      }
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    if (iVar4 != 0) {
      if (!bVar1 && bVar2) {
        FUN_00d50b20();
      }
      goto LAB_019ea34c;
    }
    FUN_00d46530();
    if (local_40 == lVar8) {
      if ((!bVar2) && (lVar8 != 0)) {
        if (local_38 != '\0') goto LAB_019ea20a;
        FUN_00d50b00();
        bVar3 = true;
      }
    }
    else {
      if (local_38 != '\0') {
        bVar3 = true;
        lVar7 = local_40;
        if ((bVar2) && (lVar8 != 0)) {
          FUN_00d50b20();
          bVar3 = true;
        }
        goto LAB_019ea2b5;
      }
      if (local_40 != 0) {
        FUN_00d50b00();
      }
      lVar7 = local_40;
      bVar3 = true;
      if ((bVar2) && (lVar8 != 0)) {
        FUN_00d50b20();
        bVar3 = true;
      }
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
LAB_019ea2b5:
  lVar8 = g_027e1490;
  if (lVar7 != 0) {
    if (g_027e1490 != 0) {
      FUN_00d50b00();
    }
    FUN_00ca0840();
    if (lVar8 != 0) {
      FUN_00d50b20();
    }
    *this_ptr = plVar6;
    *(void*)(this_ptr + 1) = 1;
    if (!bVar3) {
      return this_ptr;
    }
    FUN_00d50b20();
    return this_ptr;
  }
LAB_019ea34c:
  *this_ptr = plVar6;
  *(void*)(this_ptr + 1) = 1;
  return this_ptr;
}



// ============================================================
// 01cdab30
// ============================================================
// Function: FUN_01cdab30
// Address: 01cdab30
// Size: 1203 bytes
// Class: GNDictionary

void* FUN_01cdab30(uint64_t param_1,int64_t *param_2)

{
  int64_t *plVar1;
  int64_t *plVar2;
  char cVar3;
  uint uVar4;
  int64_t lVar5;
  int64_t *plVar6;
  int64_t arg1;
  void*this_ptr;
  int64_t lVar7;
  uint64_t uVar8;
  uint64_t uVar9;
  int64_t local_108;
  char local_100;
  int64_t *local_f8;
  char local_f0;
  int64_t local_d8;
  char local_d0;
  int64_t *local_c8;
  char local_c0;
  int64_t local_b8;
  char local_b0;
  int64_t local_a8;
  char local_a0;
  int64_t *local_98;
  int64_t *local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  uint64_t local_58;
  int64_t *local_50;
  char local_48;
  int64_t *local_40;
  
  local_108 = *param_2;
  local_98 = param_2;
  if (local_108 == 0) {
    FUN_01d51d50();
  }
  else {
    local_100 = '\0';
    FUN_01cdb540(param_1,&local_108);
    plVar1 = local_50;
    if (local_48 == '\0') {
      if (((local_50 != (int64_t *)0x0) && (FUN_00d50b00(), local_48 != '\0')) &&
         (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_48 = '\0';
    }
    if ((local_100 != '\0') && (local_108 != 0)) {
      FUN_00d50b20();
    }
    if (plVar1 == (int64_t *)0x0) {
      local_40 = plVar1;
      lVar5 = *(int64_t *)(arg1 + 0x50);
      if (*(int *)(lVar5 + 0xc) < 1) {
        local_58 = CONCAT71((int7)((uint64_t)lVar5 >> 8),1);
      }
      else {
        local_58 = CONCAT71((int7)((uint64_t)g_025908a0 >> 8),1);
        lVar7 = 0;
        do {
          plVar1 = *(int64_t **)(*(int64_t *)(lVar5 + 0x10) + lVar7 * 8);
          if (plVar1 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
          plVar6 = (int64_t *)*local_98;
          (**(code **)(*plVar1 + 0x390))();
          plVar2 = local_50;
          local_88 = 0;
          if (local_48 == '\0') {
            if (local_50 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_48 = '\0';
          }
          local_88 = '\x01';
          local_90 = plVar2;
          cVar3 = (**(code **)(*plVar6 + 0x50))();
          uVar8 = CONCAT71((int7)((uint64_t)plVar2 >> 8),1);
          if (cVar3 == '\0') {
            plVar6 = (int64_t *)*local_98;
            (**(code **)(*plVar1 + 0x388))();
            local_80 = local_a8;
            local_78 = 0;
            if (local_a0 == '\0') {
              if (local_a8 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_a0 = '\0';
            }
            local_78 = '\x01';
            uVar4 = (**(code **)(*plVar6 + 0x50))();
            uVar8 = (uint64_t)uVar4;
            if ((local_78 != '\0') && (local_80 != 0)) {
              FUN_00d50b20();
            }
            if ((local_a0 != '\0') && (local_a8 != 0)) {
              FUN_00d50b20();
            }
          }
          if ((local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((char)uVar8 != '\0') {
            plVar6 = (int64_t *)FUN_00e8fc40();
            FUN_00152930();
            (**(code **)(*plVar6 + 0x18))();
            uVar9 = local_58;
            if (plVar6 == local_40) {
              if ((char)local_58 == '\0') {
                uVar9 = CONCAT71((int7)(local_58 >> 8),1);
                plVar6 = local_40;
              }
              else {
                FUN_00d50b20();
                plVar6 = local_40;
              }
            }
            else {
              uVar9 = CONCAT71((int7)(uVar8 >> 8),1);
              if (((char)local_58 != '\0') && (local_40 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
            }
            local_f0 = '\0';
            local_f8 = plVar1;
            local_40 = plVar6;
            FUN_01d523b0();
            if ((local_f0 != '\0') && (local_f8 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if (local_40 != (int64_t *)0x0) {
              FUN_00d50b00();
              local_d8 = *local_98;
              local_d0 = '\0';
              FUN_01d52610();
              if ((local_d0 != '\0') && (local_d8 != 0)) {
                FUN_00d50b20();
              }
              local_c8 = local_40;
              local_c0 = '\0';
              local_b8 = *local_98;
              local_b0 = '\0';
              FUN_01cdb5f0();
              if ((local_b0 != '\0') && (local_b8 != 0)) {
                FUN_00d50b20();
              }
              if ((local_c0 != '\0') && (local_c8 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              *this_ptr = local_40;
              *(void*)(this_ptr + 1) = 1;
              FUN_00d50b20();
              FUN_00d50b20();
              return this_ptr;
            }
            local_40 = (int64_t *)0x0;
            local_58 = uVar9 & 0xffffffff;
          }
          FUN_00d50b20();
          lVar7 = lVar7 + 1;
          lVar5 = *(int64_t *)(arg1 + 0x50);
        } while (lVar7 < *(int *)(lVar5 + 0xc));
      }
      if (local_40 == (int64_t *)0x0) {
        FUN_01d51d50();
        cVar3 = (char)local_58;
        local_40 = local_50;
        if (local_50 == (int64_t *)0x0) {
          local_40 = (int64_t *)0x0;
        }
        else {
          cVar3 = '\x01';
          if (((local_48 == '\0') && (FUN_00d50b00(), local_48 != '\0')) &&
             (local_50 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
      }
      else {
        cVar3 = (char)local_58;
      }
      plVar1 = local_40;
      *(void*)(this_ptr + 1) = 0;
      if (cVar3 == '\0') {
        if (local_40 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        *this_ptr = plVar1;
      }
      else {
        *this_ptr = local_40;
      }
    }
    else {
      *this_ptr = plVar1;
    }
    *(void*)(this_ptr + 1) = 1;
  }
  return this_ptr;
}



// ============================================================
// 01db7530
// ============================================================
// Function: FUN_01db7530
// Address: 01db7530
// Size: 1148 bytes
// Class: GNDictionary

uint64_t FUN_01db7530(uint64_t param_1,int64_t *param_2)

{
  uint uVar1;
  int64_t lVar2;
  int64_t *plVar3;
  bool bVar4;
  char cVar5;
  int64_t *arg1;
  uint64_t uVar6;
  int64_t *this_ptr;
  int64_t lVar7;
  undefined7 uVar9;
  int64_t lVar8;
  float fVar10;
  float fVar11;
  float in_XMM0_Dd;
  float fVar12;
  float fVar13;
  int64_t local_d8;
  char local_d0;
  int64_t local_98;
  char local_90;
  float local_88;
  float fStack_84;
  float fStack_7c;
  float local_6c;
  float local_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float local_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float local_34;
  
  fVar11 = (float)((uint64_t)param_1 >> 0x20);
  fVar10 = (float)param_1;
  uVar9 = (undefined7)((uint64_t)this_ptr >> 8);
  local_88 = fVar11;
  if (((char)this_ptr[0x27] == '\0') && ((fVar11 != 0.0 || (NAN(fVar11))))) {
    fVar13 = fVar11;
    fStack_84 = fVar11;
    fStack_7c = in_XMM0_Dd;
    FUN_01db2340();
    if ((local_d0 == '\0') && (local_d8 != 0)) {
      FUN_00d50b00();
    }
    if (*(int *)(local_d8 + 0xc) < 1) {
      bVar4 = false;
      lVar7 = 0;
      local_34 = 0.0;
      local_58 = 0.0;
      local_68 = 0.0;
    }
    else {
      local_68 = 0.0;
      lVar8 = 0;
      local_58 = 0.0;
      local_34 = 0.0;
      lVar7 = 0;
      bVar4 = false;
      do {
        lVar2 = *(int64_t *)(*(int64_t *)(local_d8 + 0x10) + lVar8 * 8);
        if (lVar7 == lVar2) {
          if ((!bVar4) && (lVar7 != 0)) {
            bVar4 = true;
            FUN_00d50b00();
          }
        }
        else {
          if (lVar2 != 0) {
            FUN_00d50b00();
          }
          if ((bVar4) && (lVar7 != 0)) {
            FUN_00d50b20();
            bVar4 = true;
            lVar7 = lVar2;
          }
          else {
            bVar4 = true;
            lVar7 = lVar2;
          }
        }
        fVar12 = fVar13;
        if (*(int64_t **)(lVar7 + 0x20) != (int64_t *)*arg1) {
          (**(code **)(**(int64_t **)(lVar7 + 0x20) + 0x4d8))();
          fVar12 = 0.0;
          local_68 = local_68 + fVar13;
          local_58 = local_58 + *(float *)(lVar7 + 0x14);
          local_34 = local_34 + *(float *)(lVar7 + 0x1c);
        }
        lVar8 = lVar8 + 1;
        fVar13 = fVar12;
      } while (lVar8 < *(int *)(local_d8 + 0xc));
    }
    if ((g_0239424c < local_88) && (local_88 < local_68 - local_58)) {
      (**(code **)(*(int64_t *)*arg1 + 0x4d8))();
      fStack_84 = fStack_84 + fVar11;
      fStack_7c = fStack_7c + in_XMM0_Dd;
      uVar1 = *(uint *)(this_ptr[0x28] + 0xc);
      if ((int)uVar1 < 1) {
        if ((float)MACH_HEADER.reserved <= fStack_84) goto LAB_01db77bb;
LAB_01db7985:
        FUN_00d50b20();
      }
      else {
        lVar8 = *(int64_t *)(this_ptr[0x28] + 0x10);
        uVar6 = 0;
        do {
          local_58 = fStack_84;
          fStack_54 = fStack_84;
          fStack_50 = fStack_7c;
          fStack_4c = fStack_7c;
          if (*(int64_t *)(*(int64_t *)(lVar8 + uVar6 * 8) + 0x20) == *arg1) {
            lVar8 = *(int64_t *)(lVar8 + uVar6 * 8);
            if (lVar8 != 0) {
              FUN_00d50b00();
              local_6c = *(float *)(lVar8 + 0x1c);
              FUN_00d50b20();
              if (local_6c <= local_58) goto LAB_01db77bb;
              goto LAB_01db797e;
            }
            break;
          }
          uVar6 = uVar6 + 1;
        } while (uVar1 != uVar6);
        if ((float)MACH_HEADER.reserved <= fStack_84) goto LAB_01db77bb;
LAB_01db797e:
        if (local_d8 != 0) goto LAB_01db7985;
      }
      uVar6 = CONCAT71(uVar9,1);
      if ((bVar4) && (lVar7 != 0)) {
        FUN_00d50b20();
      }
      goto LAB_01db79a3;
    }
LAB_01db77bb:
    if (local_88 < 0.0) {
      fVar13 = 0.0;
      fVar12 = 0.0;
      if (local_68 - local_88 < local_34) {
        (**(code **)(*(int64_t *)*arg1 + 0x4d8))();
        fVar13 = fVar13 + fVar11;
        fVar12 = fVar12 + in_XMM0_Dd;
        uVar1 = *(uint *)(this_ptr[0x28] + 0xc);
        if (0 < (int)uVar1) {
          lVar8 = *(int64_t *)(this_ptr[0x28] + 0x10);
          uVar6 = 0;
          do {
            local_68 = fVar13;
            fStack_64 = fVar13;
            fStack_60 = fVar12;
            fStack_5c = fVar12;
            if (*(int64_t *)(*(int64_t *)(lVar8 + uVar6 * 8) + 0x20) == *arg1) {
              lVar8 = *(int64_t *)(lVar8 + uVar6 * 8);
              if (lVar8 != 0) {
                FUN_00d50b00();
                local_58 = *(float *)(lVar8 + 0x14);
                FUN_00d50b20();
                if (local_68 <= local_58) goto LAB_01db786d;
                goto LAB_01db797e;
              }
              break;
            }
            uVar6 = uVar6 + 1;
          } while (uVar1 != uVar6);
        }
        if ((float)MACH_HEADER.sizeofcmds < fVar13) goto LAB_01db797e;
      }
    }
LAB_01db786d:
    if (local_d8 != 0) {
      FUN_00d50b20();
    }
    if ((bVar4) && (lVar7 != 0)) {
      FUN_00d50b20();
    }
  }
  plVar3 = (int64_t *)this_ptr[6];
  if (plVar3 == (int64_t *)0x0) {
LAB_01db7923:
    if ((((local_88 == 0.0) && (!NAN(local_88))) ||
        (uVar6 = (**(code **)(*this_ptr + 0x560))(), (uVar6 & 0x10) != 0)) &&
       (((fVar10 == 0.0 && (!NAN(fVar10))) ||
        (uVar6 = (**(code **)(*this_ptr + 0x560))(), (uVar6 & 2) != 0)))) {
      uVar6 = CONCAT71(uVar9,1);
      goto LAB_01db79a3;
    }
  }
  else {
    FUN_00d50b00();
    local_98 = *param_2;
    local_90 = '\0';
    cVar5 = (**(code **)(*plVar3 + 0x5a0))(fVar10,&local_98);
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
    if (this_ptr != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if (cVar5 != '\0') goto LAB_01db7923;
  }
  uVar6 = 0;
LAB_01db79a3:
  return uVar6 & 0xffffffff;
}



// ============================================================
// 019e90e0
// ============================================================
// Function: FUN_019e90e0
// Address: 019e90e0
// Size: 1575 bytes
// Class: GNDictionary

void FUN_019e90e0(uint64_t param_1)

{
  bool bVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t *arg1;
  int64_t *this_ptr;
  bool bVar4;
  bool bVar5;
  uint32_t uVar6;
  float fVar7;
  uint64_t uVar8;
  int64_t local_e0;
  char local_d8;
  int64_t local_d0;
  char local_c8;
  int64_t local_c0;
  char local_b8;
  int64_t local_b0;
  char local_a8;
  int64_t local_a0;
  char local_98;
  int64_t local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  int64_t *local_70;
  char local_68;
  int64_t local_48;
  char local_40;
  
  lVar3 = g_027e1460;
  if (*arg1 == 0) {
    return;
  }
  if (g_027e1460 != 0) {
    param_1 = FUN_00d50b00();
  }
  local_e0 = lVar3;
  local_d8 = '\x01';
  uVar8 = FUN_000175c0(param_1,&local_e0);
  lVar3 = local_48;
  if (local_48 == 0) {
    bVar1 = false;
    lVar3 = 0;
    bVar4 = false;
    if (local_40 != '\0') {
      bVar4 = false;
      bVar1 = false;
      lVar3 = 0;
    }
  }
  else if (local_40 == '\0') {
    uVar8 = FUN_00d50b00();
    bVar1 = true;
    bVar4 = local_48 != 0;
  }
  else {
    local_40 = '\0';
    bVar1 = true;
    bVar4 = true;
  }
  if ((local_d8 != '\0') && (local_e0 != 0)) {
    uVar8 = FUN_00d50b20();
  }
  if (lVar3 != 0) {
    uVar6 = FUN_00d459e0();
    *(void*)(this_ptr + 0x43) = uVar6;
    FUN_00d403d0();
    local_d0 = g_027e13d8;
    if (g_027e13d8 != 0) {
      FUN_00d50b00();
    }
    local_c8 = '\x01';
    local_68 = 0;
    FUN_00d50b00();
    local_68 = '\x01';
    local_c0 = 0;
    local_b8 = '\0';
    local_70 = this_ptr;
    uVar8 = FUN_00d40470(&local_c0,&local_70,1,3);
    if ((local_b8 != '\0') && (local_c0 != 0)) {
      uVar8 = FUN_00d50b20();
    }
    if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
      uVar8 = FUN_00d50b20();
    }
    if ((local_c8 != '\0') && (local_d0 != 0)) {
      uVar8 = FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != 0)) {
      uVar8 = FUN_00d50b20();
    }
  }
  lVar2 = g_027e1468;
  if (g_027e1468 != 0) {
    uVar8 = FUN_00d50b00();
  }
  local_b0 = lVar2;
  local_a8 = '\x01';
  uVar8 = FUN_000175c0(uVar8,&local_b0);
  if (local_48 == lVar3) {
LAB_019e939a:
    if ((local_40 != '\0') && (local_48 != 0)) {
      uVar8 = FUN_00d50b20();
    }
  }
  else {
    if (local_40 == '\0') {
      if (local_48 != 0) {
        uVar8 = FUN_00d50b00();
      }
      bVar5 = lVar3 != 0;
      bVar1 = true;
      lVar3 = local_48;
      if ((bool)(bVar4 & bVar5)) {
        uVar8 = FUN_00d50b20();
      }
      goto LAB_019e939a;
    }
    if ((bool)(bVar4 & lVar3 != 0)) {
      uVar8 = FUN_00d50b20();
    }
    local_40 = '\0';
    bVar1 = true;
    lVar3 = local_48;
  }
  if ((local_a8 != '\0') && (local_b0 != 0)) {
    uVar8 = FUN_00d50b20();
  }
  if (lVar3 != 0) {
    fVar7 = (float)FUN_00d459e0();
    uVar8 = (**(code **)(*this_ptr + 0x950))((double)fVar7);
  }
  lVar2 = g_027e1470;
  if (g_027e1470 != 0) {
    uVar8 = FUN_00d50b00();
  }
  local_a0 = lVar2;
  local_98 = '\x01';
  uVar8 = FUN_000175c0(uVar8,&local_a0);
  if (local_48 == lVar3) {
    lVar2 = lVar3;
    bVar4 = bVar1;
    if ((!bVar1) && (local_48 != 0)) {
      if (local_40 != '\0') goto LAB_019e9468;
      uVar8 = FUN_00d50b00();
      bVar4 = true;
    }
LAB_019e94ce:
    if ((local_40 != '\0') && (local_48 != 0)) {
      uVar8 = FUN_00d50b20();
    }
  }
  else {
    lVar2 = local_48;
    if (local_40 == '\0') {
      if (local_48 != 0) {
        uVar8 = FUN_00d50b00();
      }
      bVar4 = true;
      if ((bVar1) && (lVar3 != 0)) {
        uVar8 = FUN_00d50b20();
      }
      goto LAB_019e94ce;
    }
    if ((bVar1) && (lVar3 != 0)) {
      uVar8 = FUN_00d50b20();
    }
LAB_019e9468:
    local_40 = '\0';
    bVar4 = true;
  }
  if ((local_98 != '\0') && (local_a0 != 0)) {
    uVar8 = FUN_00d50b20();
  }
  if (lVar2 != 0) {
    uVar8 = FUN_00d459e0();
    *(int *)(this_ptr + 0x44) = (int)uVar8;
  }
  lVar3 = g_027e1478;
  if (g_027e1478 != 0) {
    uVar8 = FUN_00d50b00();
  }
  local_90 = lVar3;
  local_88 = '\x01';
  FUN_000175c0(uVar8,&local_90);
  if (local_48 == lVar2) {
    lVar3 = lVar2;
    bVar1 = bVar4;
    if ((!bVar4) && (local_48 != 0)) {
      if (local_40 != '\0') goto LAB_019e9586;
      FUN_00d50b00();
      bVar1 = true;
    }
LAB_019e95e8:
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    lVar3 = local_48;
    if (local_40 == '\0') {
      if (local_48 != 0) {
        FUN_00d50b00();
      }
      bVar1 = true;
      if ((bVar4) && (lVar2 != 0)) {
        FUN_00d50b20();
        bVar1 = true;
      }
      goto LAB_019e95e8;
    }
    if ((bVar4) && (lVar2 != 0)) {
      FUN_00d50b20();
    }
LAB_019e9586:
    local_40 = '\0';
    bVar1 = true;
  }
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  if (lVar3 != 0) {
    uVar6 = FUN_00d459e0();
    *(void*)((int64_t)this_ptr + 0x224) = uVar6;
  }
  uVar8 = (**(code **)(*this_ptr + 0x540))();
  local_80 = g_027e1480;
  if (g_027e1480 != 0) {
    uVar8 = FUN_00d50b00();
  }
  local_78 = '\x01';
  FUN_000175c0(uVar8,&local_80);
  if (local_48 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = local_48;
    if (local_40 != '\0') goto LAB_019e96a7;
    FUN_00d50b00();
  }
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
LAB_019e96a7:
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00dd6ab0();
    (**(code **)(*this_ptr + 0x518))();
    if (local_48 != 0) {
      FUN_00d50b20();
    }
  }
  if ((bVar1) && (lVar3 != 0)) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 00c9f7e0
// ============================================================
// Function: FUN_00c9f7e0
// Address: 00c9f7e0
// Size: 1260 bytes
// Class: GNDictionary
// String references:
//   "GNDictionary"

bool FUN_00c9f7e0(void)

{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t *plVar3;
  int64_t *plVar4;
  char cVar5;
  char cVar6;
  byte bVar7;
  int iVar8;
  char *pcVar9;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t lVar10;
  uint uVar11;
  uint32_t extraout_XMM0_Da;
  uint32_t uVar12;
  uint32_t extraout_XMM0_Da_00;
  uint32_t extraout_XMM0_Da_01;
  uint32_t extraout_XMM0_Da_02;
  int64_t *local_60;
  uint8_t local_58;
  int64_t *local_50;
  char local_48 [8];
  char local_40 [8];
  char local_38 [8];
  
  plVar1 = (int64_t *)*arg1;
  if (plVar1 == this_ptr) {
    return true;
  }
  if ((g_026fdd40 == '\0') && (iVar8 = ___cxa_guard_acquire(), iVar8 != 0)) {
    g_026cd0e8 = FUN_00d4fe50();
    g_026cd0d0 = "GNDictionary";
    g_026cd0d8 = 0x28;
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
    ___cxa_guard_release();
  }
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x360))();
    cVar5 = FUN_00e85ea0();
    if (cVar5 != '\0') goto LAB_00c9f845;
  }
  arg1 = &g_02802688;
LAB_00c9f845:
  if ((*arg1 != 0) &&
     (lVar2 = this_ptr[2],
     *(int *)(lVar2 + 0xc) == *(int *)(*(int64_t *)(*arg1 + 0x10) + 0xc))) {
    cVar5 = FUN_00d24990();
    cVar6 = FUN_00d24990();
    if (cVar5 == cVar6) {
      cVar5 = FUN_00d24990();
      if (cVar5 != '\0') {
        if (0 < *(int *)(lVar2 + 0xc)) {
          lVar10 = 0;
          uVar12 = extraout_XMM0_Da;
          do {
            plVar1 = *(int64_t **)(*(int64_t *)(lVar2 + 0x10) + lVar10 * 8);
            local_58 = 0;
            local_60 = plVar1;
            uVar12 = FUN_00c9fe40(uVar12,&local_60);
            plVar3 = local_50;
            local_40[0] = local_48[0];
            pcVar9 = local_48;
            if (local_48[0] == '\0') {
              pcVar9 = local_40;
            }
            *pcVar9 = '\0';
            if ((local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
              uVar12 = FUN_00d50b20();
            }
            local_58 = 0;
            local_60 = plVar1;
            uVar12 = FUN_00c9fe40(uVar12,&local_60);
            plVar4 = local_50;
            local_38[0] = local_48[0];
            pcVar9 = local_48;
            if (local_48[0] == '\0') {
              pcVar9 = local_38;
            }
            *pcVar9 = '\0';
            if ((local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
              uVar12 = FUN_00d50b20();
            }
            if (plVar4 == plVar3) {
              uVar11 = 3;
              if (plVar3 == (int64_t *)0x0) {
                local_48[0] = '\0';
                local_50 = plVar1;
                bVar7 = FUN_00c9ff50();
                uVar11 = (uint)bVar7 + (uint)bVar7 + 1;
                uVar12 = extraout_XMM0_Da_01;
              }
            }
            else {
              uVar11 = 1;
              if ((plVar4 != (int64_t *)0x0) && (plVar3 != (int64_t *)0x0)) {
                bVar7 = (**(code **)(*plVar4 + 0x50))();
                uVar11 = (uint)(bVar7 ^ 1);
                uVar12 = extraout_XMM0_Da_00;
              }
            }
            if ((local_38[0] != '\0') && (plVar4 != (int64_t *)0x0)) {
              uVar12 = FUN_00d50b20();
            }
            if ((local_40[0] != '\0') && (plVar3 != (int64_t *)0x0)) {
              uVar12 = FUN_00d50b20();
            }
            if ((uVar11 != 0) && (uVar11 != 3)) goto LAB_00c9fbd0;
            lVar10 = lVar10 + 1;
          } while ((int)lVar10 < *(int *)(lVar2 + 0xc));
        }
        uVar11 = 0;
LAB_00c9fbd0:
        FUN_00083b20();
        return (uVar11 & 1) == 0;
      }
      lVar10 = 0;
      uVar12 = extraout_XMM0_Da;
      do {
        if (*(int *)(lVar2 + 0xc) <= (int)lVar10) {
          FUN_00083b20();
          return true;
        }
        plVar1 = *(int64_t **)(*(int64_t *)(lVar2 + 0x10) + lVar10 * 8);
        local_58 = 0;
        local_60 = plVar1;
        uVar12 = FUN_00c9fe40(uVar12,&local_60);
        plVar3 = local_50;
        local_40[0] = local_48[0];
        pcVar9 = local_48;
        if (local_48[0] == '\0') {
          pcVar9 = local_40;
        }
        *pcVar9 = '\0';
        if ((local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
          uVar12 = FUN_00d50b20();
        }
        if (plVar3 == (int64_t *)0x0) break;
        local_58 = 0;
        local_60 = plVar1;
        FUN_00c9fe40(uVar12,&local_60);
        plVar1 = local_50;
        local_38[0] = local_48[0];
        pcVar9 = local_48;
        if (local_48[0] == '\0') {
          pcVar9 = local_38;
        }
        *pcVar9 = '\0';
        if ((local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        cVar5 = (**(code **)(*plVar1 + 0x50))();
        uVar12 = extraout_XMM0_Da_02;
        if (local_38[0] != '\0') {
          uVar12 = FUN_00d50b20();
        }
        if (local_40[0] != '\0') {
          uVar12 = FUN_00d50b20();
        }
        lVar10 = lVar10 + 1;
      } while (cVar5 != '\0');
      FUN_00083b20();
    }
  }
  return false;
}



// ============================================================
// 01db6450
// ============================================================
// Function: FUN_01db6450
// Address: 01db6450
// Size: 1235 bytes
// Class: GNDictionary

void FUN_01db6450(uint64_t param_1,uint64_t param_2)

{
  int64_t lVar1;
  int64_t *plVar2;
  uint8_t auVar3 [16];
  int64_t lVar4;
  int64_t *this_ptr;
  int iVar5;
  int64_t lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  uint64_t uVar10;
  uint32_t extraout_XMM0_Dc;
  uint32_t extraout_XMM0_Dc_00;
  uint32_t extraout_XMM0_Dd;
  uint32_t extraout_XMM0_Dd_00;
  float fVar11;
  float fVar12;
  uint8_t auVar13 [16];
  uint8_t auVar14 [16];
  uint8_t auVar15 [16];
  float local_d8;
  uint8_t local_c8 [16];
  float local_b8;
  uint8_t local_a8 [16];
  float local_88;
  uint8_t local_78 [8];
  float fStack_70;
  float fStack_6c;
  uint8_t local_68 [16];
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  fVar9 = (float)((uint64_t)param_2 >> 0x20);
  fVar11 = (float)param_2;
  FUN_01db2340();
  if ((local_38 == '\0') && (local_40 != 0)) {
    FUN_00d50b00();
  }
  (**(code **)(*this_ptr + 0x4d8))();
  iVar5 = *(int *)(local_40 + 0xc);
  if (iVar5 < 1) {
    local_c8 = ZEXT816(0);
    lVar4 = 0;
    local_88 = 0.0;
    _local_78 = ZEXT816(0);
    local_d8 = 0.0;
    local_68 = ZEXT816(0);
    local_b8 = 0.0;
  }
  else {
    _local_78 = ZEXT816(0);
    lVar6 = 0;
    local_68 = ZEXT816(0);
    lVar4 = 0;
    local_a8 = ZEXT816(0);
    local_b8 = fVar11;
    fVar8 = fVar9;
    fVar12 = 0.0;
    do {
      lVar1 = *(int64_t *)(*(int64_t *)(local_40 + 0x10) + lVar6 * 8);
      if (lVar4 == lVar1) {
        plVar2 = *(int64_t **)(lVar4 + 0x20);
        fVar7 = local_b8;
      }
      else {
        if (lVar1 != 0) {
          FUN_00d50b00();
        }
        if (lVar4 != 0) {
          FUN_00d50b20();
        }
        plVar2 = *(int64_t **)(lVar1 + 0x20);
        lVar4 = lVar1;
        fVar7 = local_b8;
      }
      if (plVar2 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      (**(code **)(*plVar2 + 0x4d8))();
      FUN_00d50b20();
      local_c8._0_8_ = *(uint64_t *)(lVar4 + 0x10);
      local_c8._8_8_ = 0;
      FUN_01db1970();
      local_b8 = fVar8;
      if (fVar8 <= fVar12) {
        local_b8 = fVar12;
      }
      local_68._4_4_ = 0;
      local_68._0_4_ = (float)local_68._0_4_ + fVar7;
      local_88 = (float)local_78._4_4_ + (float)((uint64_t)local_c8._0_8_ >> 0x20);
      local_78._4_4_ = local_88;
      local_78._0_4_ = (float)local_78._0_4_ + (float)local_c8._0_8_;
      fStack_70 = fStack_70 + 0.0;
      fStack_6c = fStack_6c + 0.0;
      local_c8 = maxps(local_c8,local_a8);
      lVar6 = lVar6 + 1;
      iVar5 = *(int *)(local_40 + 0xc);
      local_a8 = local_c8;
      fVar12 = local_b8;
    } while (lVar6 < iVar5);
    local_d8 = local_c8._4_4_;
  }
  FUN_01e42030();
  FUN_01d8c6e0();
  uVar10 = FUN_01e59910();
  fVar12 = (float)((uint64_t)uVar10 >> 0x20);
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  fVar7 = ((float)iVar5 + g_02390d00) * g_023b36b0;
  fVar11 = ((float)local_68._0_4_ + fVar7) - fVar11;
  fVar8 = (float)uVar10 + fVar11;
  if ((fVar11 == 0.0) && (!NAN(fVar11))) {
    fVar8 = (float)uVar10;
  }
  local_b8 = local_b8 - fVar9;
  auVar13._4_4_ = fVar12;
  auVar13._0_4_ = fVar8;
  auVar13._8_4_ = extraout_XMM0_Dc;
  auVar13._12_4_ = extraout_XMM0_Dd;
  auVar14._4_4_ = fVar12;
  auVar14._0_4_ = fVar12 + local_b8;
  auVar14._8_4_ = extraout_XMM0_Dd;
  auVar14._12_4_ = extraout_XMM0_Dd;
  auVar14 = insertps(auVar13,auVar14,0x10);
  local_68._0_4_ = auVar14._0_4_;
  if ((local_b8 == 0.0) && (!NAN(local_b8))) {
    local_68._0_4_ = fVar8;
  }
  FUN_01e42030();
  FUN_01d8c6e0();
  FUN_01e5bc80(local_68._0_4_);
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  FUN_01e42030();
  FUN_01d8c6e0();
  uVar10 = FUN_01e59080();
  fVar11 = (float)((uint64_t)uVar10 >> 0x20);
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  fVar12 = ((float)local_78._0_4_ + fVar7 + g_023908ec) - (float)local_c8._0_4_;
  fVar9 = (float)uVar10 + fVar12;
  if ((fVar12 == 0.0) && (!NAN(fVar12))) {
    fVar9 = (float)uVar10;
  }
  local_d8 = local_d8 - (local_88 + fVar7);
  auVar15._4_4_ = fVar11;
  auVar15._0_4_ = fVar9;
  auVar15._8_4_ = extraout_XMM0_Dc_00;
  auVar15._12_4_ = extraout_XMM0_Dd_00;
  auVar3._4_4_ = fVar11;
  auVar3._0_4_ = fVar11 + local_d8;
  auVar3._8_4_ = extraout_XMM0_Dd_00;
  auVar3._12_4_ = extraout_XMM0_Dd_00;
  auVar14 = insertps(auVar15,auVar3,0x10);
  local_78._0_4_ = auVar14._0_4_;
  if ((local_d8 == 0.0) && (!NAN(local_d8))) {
    local_78._0_4_ = fVar9;
  }
  FUN_01e42030();
  FUN_01d8c6e0();
  FUN_01e5bc90(local_78._0_4_);
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((char)this_ptr[0x27] != '\x01') {
    *(void*)(this_ptr + 0x27) = 1;
    (**(code **)(*this_ptr + 0x920))();
    (**(code **)(*this_ptr + 0x620))();
  }
  if (0 < *(int *)(local_40 + 0xc)) {
    lVar6 = 0;
    do {
      lVar1 = *(int64_t *)(*(int64_t *)(local_40 + 0x10) + lVar6 * 8);
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 < *(int *)(local_40 + 0xc));
  }
  (**(code **)(*this_ptr + 0x920))();
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}



// ============================================================
// 01db6b80
// ============================================================
// Function: FUN_01db6b80
// Address: 01db6b80
// Size: 1265 bytes
// Class: GNDictionary

void FUN_01db6b80(void)

{
  int64_t lVar1;
  int64_t *plVar2;
  int64_t lVar3;
  int64_t *this_ptr;
  int iVar4;
  int64_t lVar5;
  float fVar6;
  uint64_t uVar7;
  uint32_t extraout_XMM0_Dc;
  uint32_t extraout_XMM0_Dc_00;
  uint32_t extraout_XMM0_Dd;
  uint32_t extraout_XMM0_Dd_00;
  float fVar9;
  uint8_t in_XMM1 [16];
  uint8_t auVar10 [16];
  uint8_t auVar11 [16];
  uint8_t auVar12 [16];
  float fVar13;
  uint8_t auVar14 [16];
  uint8_t auVar15 [16];
  uint8_t auVar16 [16];
  float local_f8;
  float fStack_f4;
  float local_e8;
  uint8_t local_d8 [16];
  float local_c8;
  float fStack_c4;
  float local_b8;
  float fStack_b4;
  float local_a8;
  uint8_t local_88 [16];
  float local_68;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  float fVar8;
  
  FUN_01db2340();
  if ((local_38 == '\0') && (local_40 != 0)) {
    FUN_00d50b00();
  }
  (**(code **)(*this_ptr + 0x4d8))();
  iVar4 = *(int *)(local_40 + 0xc);
  if (iVar4 < 1) {
    local_b8 = 0.0;
    lVar3 = 0;
    local_e8 = 0.0;
    local_d8 = ZEXT816(0);
    local_88._0_4_ = 0.0;
    local_c8 = 0.0;
    local_68 = 0.0;
  }
  else {
    local_b8 = 0.0;
    fStack_b4 = 0.0;
    local_68 = 0.0;
    lVar5 = 0;
    local_a8 = 0.0;
    lVar3 = 0;
    local_88 = ZEXT816(0);
    local_d8 = in_XMM1;
    do {
      lVar1 = *(int64_t *)(*(int64_t *)(local_40 + 0x10) + lVar5 * 8);
      if (lVar3 == lVar1) {
        plVar2 = *(int64_t **)(lVar3 + 0x20);
        auVar15 = local_d8;
      }
      else {
        if (lVar1 != 0) {
          FUN_00d50b00();
        }
        if (lVar3 != 0) {
          FUN_00d50b20();
        }
        plVar2 = *(int64_t **)(lVar1 + 0x20);
        lVar3 = lVar1;
        auVar15 = local_d8;
      }
      if (plVar2 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      (**(code **)(*plVar2 + 0x4d8))();
      FUN_00d50b20();
      local_d8._0_8_ = *(uint64_t *)(lVar3 + 0x10);
      local_d8._8_8_ = 0;
      FUN_01db1970();
      local_c8 = auVar15._0_4_;
      fStack_c4 = auVar15._4_4_;
      if (local_c8 <= local_a8) {
        local_c8 = local_a8;
      }
      local_68 = local_68 + fStack_c4;
      local_b8 = local_b8 + (float)local_d8._0_8_;
      fStack_b4 = fStack_b4 + (float)((uint64_t)local_d8._0_8_ >> 0x20);
      local_d8 = maxps(local_d8,local_88);
      lVar5 = lVar5 + 1;
      iVar4 = *(int *)(local_40 + 0xc);
      local_a8 = local_c8;
      local_88 = local_d8;
    } while (lVar5 < iVar4);
    local_e8 = local_d8._4_4_;
    local_88._0_4_ = fStack_b4;
  }
  FUN_01e42030();
  FUN_01d8c6e0();
  uVar7 = FUN_01e59910();
  fVar8 = (float)((uint64_t)uVar7 >> 0x20);
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  fVar9 = ((float)iVar4 + g_02390d00) * g_023b36b0;
  local_f8 = in_XMM1._0_4_;
  local_c8 = local_c8 - local_f8;
  fVar6 = (float)uVar7 + local_c8;
  if ((local_c8 == 0.0) && (!NAN(local_c8))) {
    fVar6 = (float)uVar7;
  }
  fStack_f4 = in_XMM1._4_4_;
  fStack_f4 = (local_68 + fVar9) - fStack_f4;
  auVar15._4_4_ = fVar8;
  auVar15._0_4_ = fVar8;
  auVar15._8_4_ = extraout_XMM0_Dd;
  auVar15._12_4_ = extraout_XMM0_Dd;
  auVar10._4_12_ = auVar15._4_12_;
  auVar10._0_4_ = fVar8 + fStack_f4;
  auVar14._4_4_ = fVar8;
  auVar14._0_4_ = fVar6;
  auVar14._8_4_ = extraout_XMM0_Dc;
  auVar14._12_4_ = extraout_XMM0_Dd;
  auVar15 = insertps(auVar14,auVar10,0x10);
  local_68 = auVar15._0_4_;
  if ((fStack_f4 == 0.0) && (!NAN(fStack_f4))) {
    local_68 = fVar6;
  }
  FUN_01e42030();
  FUN_01d8c6e0();
  FUN_01e5bc80(local_68);
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  FUN_01e42030();
  FUN_01d8c6e0();
  uVar7 = FUN_01e59080();
  fVar8 = (float)((uint64_t)uVar7 >> 0x20);
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  fVar13 = (float)local_d8._0_4_ - (local_b8 + fVar9);
  fVar6 = (float)uVar7 + fVar13;
  if ((fVar13 == 0.0) && (!NAN(fVar13))) {
    fVar6 = (float)uVar7;
  }
  local_e8 = ((float)local_88._0_4_ + fVar9) - local_e8;
  auVar11._4_4_ = fVar8;
  auVar11._0_4_ = fVar8;
  auVar11._8_4_ = extraout_XMM0_Dd_00;
  auVar11._12_4_ = extraout_XMM0_Dd_00;
  auVar12._4_12_ = auVar11._4_12_;
  auVar12._0_4_ = fVar8 + local_e8;
  auVar16._4_4_ = fVar8;
  auVar16._0_4_ = fVar6;
  auVar16._8_4_ = extraout_XMM0_Dc_00;
  auVar16._12_4_ = extraout_XMM0_Dd_00;
  auVar15 = insertps(auVar16,auVar12,0x10);
  local_68 = auVar15._0_4_;
  if ((local_e8 == 0.0) && (!NAN(local_e8))) {
    local_68 = fVar6;
  }
  FUN_01e42030();
  FUN_01d8c6e0();
  FUN_01e5bc90(local_68);
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((char)this_ptr[0x27] == '\x01') {
    *(void*)(this_ptr + 0x27) = 0;
    (**(code **)(*this_ptr + 0x920))();
    (**(code **)(*this_ptr + 0x620))();
  }
  if (0 < *(int *)(local_40 + 0xc)) {
    lVar5 = 0;
    do {
      lVar1 = *(int64_t *)(*(int64_t *)(local_40 + 0x10) + lVar5 * 8);
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(local_40 + 0xc));
  }
  (**(code **)(*this_ptr + 0x920))();
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}



// ============================================================
// 00ca1d30
// ============================================================
// Function: FUN_00ca1d30
// Address: 00ca1d30
// Size: 1017 bytes
// Class: GNDictionary

void FUN_00ca1d30(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int64_t lVar1;
  int64_t lVar2;
  uint64_t uVar3;
  undefined7 uVar5;
  uint64_t uVar4;
  int64_t *arg1;
  int64_t lVar6;
  int64_t lVar7;
  int64_t lVar8;
  char cVar9;
  uint64_t uVar10;
  uint64_t uVar11;
  bool bVar12;
  int64_t local_c8;
  char local_c0;
  int64_t lVar13;
  uint64_t uVar14;
  uint32_t uVar15;
  uint32_t uVar16;
  int64_t local_88;
  char local_80;
  int64_t local_68;
  char local_60;
  uint64_t local_58;
  uint64_t local_50;
  int64_t local_48;
  char local_40;
  int64_t local_38;
  
  lVar1 = *(int64_t *)(*arg1 + 0x10);
  if (lVar1 != 0) {
    FUN_00d50b00();
    uVar16 = 0;
    uVar14 = 0;
    if (*(int *)(lVar1 + 0xc) < 1) {
      uVar11 = 0;
      local_38 = 0;
      uVar4 = 0;
      lVar8 = 0;
    }
    else {
      lVar6 = 0;
      local_50 = 0;
      local_38 = 0;
      uVar10 = 0;
      lVar7 = 0;
      lVar13 = lVar1;
      do {
        lVar2 = *(int64_t *)(*(int64_t *)(lVar1 + 0x10) + lVar6 * 8);
        local_60 = 0;
        local_68 = lVar2;
        uVar3 = FUN_00c9fe40(param_1,&local_68,param_3,param_4,lVar13,uVar14,uVar16);
        lVar8 = local_48;
        uVar15 = (uint32_t)((uint64_t)uVar14 >> 0x20);
        uVar5 = (undefined7)((uint64_t)uVar3 >> 8);
        cVar9 = (char)uVar10;
        if (local_48 == local_38) {
          local_58 = uVar10;
          lVar8 = local_38;
          if ((cVar9 == '\0') && (local_48 != 0)) {
            local_58 = CONCAT71(uVar5,1);
            if (local_40 != '\0') goto LAB_00ca1f0e;
            local_58 = CONCAT71(uVar5,1);
            FUN_00d50b00();
            lVar8 = local_38;
          }
joined_r0x00ca1ee0:
          local_38 = lVar8;
          if ((local_40 != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          if (local_40 == '\0') {
            if (local_48 != 0) {
              uVar3 = FUN_00d50b00();
            }
            local_58 = CONCAT71((int7)((uint64_t)uVar3 >> 8),1);
            if ((cVar9 != '\0') && (local_38 != 0)) {
              FUN_00d50b20();
            }
            goto joined_r0x00ca1ee0;
          }
          local_58 = CONCAT71(uVar5,1);
          if ((cVar9 == '\0') || (local_38 == 0)) {
            local_38 = local_48;
          }
          else {
            FUN_00d50b20();
            local_38 = lVar8;
          }
        }
LAB_00ca1f0e:
        local_60 = '\0';
        local_68 = lVar2;
        FUN_00c9fe40(param_1,&local_68);
        lVar8 = local_48;
        uVar5 = (undefined7)(uVar10 >> 8);
        if (local_48 == lVar7) {
          lVar8 = lVar7;
          if (((char)local_50 != '\0') || (local_48 == 0)) {
            uVar4 = local_50 & 0xffffffff;
            goto joined_r0x00ca1fce;
          }
          uVar4 = CONCAT71(uVar5,1);
          if (local_40 == '\0') {
            FUN_00d50b00();
            goto LAB_00ca1fb6;
          }
        }
        else if (local_40 == '\0') {
          if (local_48 != 0) {
            FUN_00d50b00();
          }
          uVar4 = CONCAT71(uVar5,1);
          if (((char)local_50 != '\0') && (lVar7 != 0)) {
            FUN_00d50b20();
            lVar7 = lVar8;
LAB_00ca1fb6:
            uVar4 = CONCAT71(uVar5,1);
            lVar8 = lVar7;
          }
joined_r0x00ca1fce:
          if ((local_40 != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          uVar4 = CONCAT71(uVar5,1);
          if (((char)local_50 != '\0') && (lVar7 != 0)) {
            FUN_00d50b20();
          }
        }
        if ((lVar8 == 0) || (local_38 == 0)) {
LAB_00ca20c7:
          local_48 = local_38;
          local_40 = '\0';
          local_60 = '\0';
          local_68 = lVar2;
          FUN_00ca0840(param_1,&local_68);
          uVar11 = local_58;
        }
        else {
          FUN_00d4efa0();
          FUN_00d4efa0();
          if (local_48 == local_68) {
            FUN_00d4efa0();
            FUN_00d4efa0();
            bVar12 = local_88 == local_c8;
            if ((local_c0 != '\0') && (local_c8 != 0)) {
              FUN_00d50b20();
            }
            if ((local_80 != '\0') && (local_88 != 0)) {
              FUN_00d50b20();
            }
          }
          else {
            bVar12 = false;
          }
          if ((local_60 != '\0') && (local_68 != 0)) {
            FUN_00d50b20();
          }
          if ((local_40 != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
          uVar11 = local_58;
          if (!bVar12) goto LAB_00ca20c7;
          local_48 = local_38;
          local_40 = '\0';
          FUN_00ca1d30();
        }
        lVar6 = lVar6 + 1;
        uVar14 = CONCAT44(uVar15,(int)lVar6);
        uVar10 = uVar11 & 0xffffffff;
        lVar7 = lVar8;
        local_50 = uVar4;
      } while ((int)lVar6 < *(int *)(lVar1 + 0xc));
    }
    FUN_00083b20();
    FUN_00d50b20();
    if (((char)uVar11 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    if (((char)uVar4 != '\0') && (lVar8 != 0)) {
      FUN_00d50b20();
    }
  }
  return;
}



// ============================================================
// 0158b470
// ============================================================
// Function: FUN_0158b470
// Address: 0158b470
// Size: 1315 bytes
// Class: GNDictionary
// String references:
//   "%@.%@"

void* FUN_0158b470(void)

{
  bool bVar1;
  char cVar2;
  void*arg1;
  void*this_ptr;
  int64_t *plVar3;
  int64_t *plVar4;
  bool bVar5;
  int64_t local_e8;
  void*local_e0;
  int64_t local_d0;
  char local_c8;
  int64_t local_c0;
  char local_b8;
  int64_t *local_b0;
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
  int64_t *local_40;
  char local_38;
  
  (**(code **)(*(int64_t *)*arg1 + 0x3f0))();
  plVar3 = local_b0;
  (**(code **)(*(int64_t *)*arg1 + 0x388))();
  FUN_014ffc90();
  FUN_00df1af0();
  local_e8 = local_80;
  FUN_00083ea0(2,&local_e8);
  FUN_00d8cb40();
  local_a0 = local_50;
  local_98 = 0;
  if (local_48 == '\0') {
    if (local_50 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_48 = '\0';
  }
  local_98 = '\x01';
  (**(code **)(*plVar3 + 0x400))();
  plVar3 = local_40;
  if (local_40 == (int64_t *)0x0) {
    bVar5 = true;
    plVar3 = (int64_t *)0x0;
    bVar1 = false;
  }
  else {
    if (local_38 == '\0') {
      FUN_00d50b00();
      bVar5 = false;
      bVar1 = true;
      if ((local_38 == '\0') || (local_40 == (int64_t *)0x0)) goto LAB_0158b5b9;
      FUN_00d50b20();
    }
    else {
      local_38 = '\0';
    }
    bVar1 = true;
    bVar5 = false;
  }
LAB_0158b5b9:
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  local_e0 = (void*)&g_0253d630;
  if ((local_b8 != '\0') && (local_c0 != 0)) {
    FUN_00d50b20();
  }
  local_e0 = &g_024c5048;
  if ((local_c8 != '\0') && (local_d0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  if ((local_a8 != '\0') && (local_b0 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  plVar4 = plVar3;
  if ((plVar3 == (int64_t *)0x0) || (cVar2 = (**(code **)(*plVar3 + 0x398))(), cVar2 == '\0')) {
    (**(code **)(*(int64_t *)*arg1 + 0x3f0))();
    plVar4 = local_b0;
    (**(code **)(*(int64_t *)*arg1 + 0x390))();
    FUN_014ffc90();
    FUN_00df1af0();
    local_e8 = local_80;
    FUN_00083ea0(2,&local_e8);
    FUN_00d8cb40();
    local_60 = local_50;
    local_58 = 0;
    if (local_48 == '\0') {
      if (local_50 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_48 = '\0';
    }
    local_58 = '\x01';
    (**(code **)(*plVar4 + 0x400))();
    plVar4 = local_40;
    if (local_40 == plVar3) {
      plVar4 = plVar3;
      if ((bool)(bVar5 & local_40 != (int64_t *)0x0)) {
        if (local_38 != '\0') goto LAB_0158b7f7;
        bVar1 = true;
        FUN_00d50b00();
      }
LAB_0158b845:
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      if (local_38 == '\0') {
        if (local_40 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        bVar5 = (bool)(bVar1 & plVar3 != (int64_t *)0x0);
        bVar1 = true;
        if (bVar5) {
          FUN_00d50b20();
        }
        goto LAB_0158b845;
      }
      bVar5 = plVar3 != (int64_t *)0x0;
      plVar3 = local_40;
      if ((bool)(bVar1 & bVar5)) {
        FUN_00d50b20();
      }
LAB_0158b7f7:
      local_38 = '\0';
      bVar1 = true;
      plVar4 = plVar3;
    }
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    local_e0 = (void*)&g_0253d630;
    if ((local_b8 != '\0') && (local_c0 != 0)) {
      FUN_00d50b20();
    }
    local_e0 = &g_024c5048;
    if ((local_c8 != '\0') && (local_d0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
    if ((local_a8 != '\0') && (local_b0 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar4 == (int64_t *)0x0) {
      *(void*)(this_ptr + 1) = 0;
      *this_ptr = 0;
      return this_ptr;
    }
    cVar2 = (**(code **)(*plVar4 + 0x398))();
    if (cVar2 == '\0') {
      *(void*)(this_ptr + 1) = 0;
      *this_ptr = 0;
      if (!bVar1) {
        return this_ptr;
      }
      FUN_00d50b20();
      return this_ptr;
    }
    *(void*)(this_ptr + 1) = 0;
    if (bVar1) goto LAB_0158b6b7;
  }
  else {
    *(void*)(this_ptr + 1) = 0;
    if (!bVar5) goto LAB_0158b6b7;
  }
  FUN_00d50b00();
LAB_0158b6b7:
  *this_ptr = plVar4;
  *(void*)(this_ptr + 1) = 1;
  return this_ptr;
}



// ============================================================
// 0158ac20
// ============================================================
// Function: FUN_0158ac20
// Address: 0158ac20
// Size: 1149 bytes
// Class: GNDictionary
// String references:
//   "GNDictionary"

void FUN_0158ac20(uint64_t param_1,int64_t *param_2)

{
  bool bVar1;
  int64_t lVar2;
  char cVar3;
  int iVar4;
  int64_t *plVar5;
  int64_t arg1;
  int64_t *this_ptr;
  int64_t **pplVar6;
  uint32_t extraout_XMM0_Da;
  int64_t local_a0;
  char local_98;
  int64_t local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  int64_t *local_60;
  char local_58;
  int64_t *local_40;
  char local_38;
  
  if (*param_2 == 0) {
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
    return;
  }
  plVar5 = (int64_t *)FUN_00e8fc40();
  FUN_000649c0();
  (**(code **)(*plVar5 + 0x18))();
  local_58 = 0;
  (**(code **)(*(int64_t *)(arg1 + 0x10) + 0x10))();
  FUN_00d50b00();
  local_58 = '\x01';
  local_60 = (int64_t *)(arg1 + 0x10);
  FUN_00db1a90();
  if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
    (**(code **)(*local_60 + 0x10))();
    FUN_00d50b20();
  }
  cVar3 = (**(code **)(*plVar5 + 0x620))();
  lVar2 = g_027c79d8;
  if (cVar3 == '\0') {
    local_80 = *param_2;
    local_78 = '\0';
    pplVar6 = &local_40;
    (**(code **)(*plVar5 + 0x610))(extraout_XMM0_Da,&local_80);
    plVar5 = local_40;
    if ((g_026fdd40 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
      g_026cd0e8 = FUN_00d4fe50();
      g_026cd0d0 = "GNDictionary";
      g_026cd0d8 = 0x28;
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
      ___cxa_guard_release();
    }
    if (plVar5 == (int64_t *)0x0) {
LAB_0158ae17:
      pplVar6 = (int64_t **)&g_02802688;
    }
    else {
      (**(code **)(*plVar5 + 0x360))();
      cVar3 = FUN_00e85ea0();
      if (cVar3 == '\0') goto LAB_0158ae17;
    }
    plVar5 = *pplVar6;
    if (plVar5 == (int64_t *)0x0) {
      bVar1 = false;
    }
    else if (*(char *)(pplVar6 + 1) == '\0') {
      bVar1 = true;
      FUN_00d50b00();
    }
    else {
      *(void*)(pplVar6 + 1) = 0;
      bVar1 = true;
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    goto LAB_0158aec6;
  }
  if (g_027c79d8 != 0) {
    FUN_00d50b00();
  }
  local_a0 = lVar2;
  local_98 = '\x01';
  local_90 = *param_2;
  local_88 = '\0';
  pplVar6 = &local_40;
  (**(code **)(*plVar5 + 0x630))(&local_90,&local_a0);
  plVar5 = local_40;
  if ((g_026fdd40 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
    g_026cd0e8 = FUN_00d4fe50();
    g_026cd0d0 = "GNDictionary";
    g_026cd0d8 = 0x28;
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
    ___cxa_guard_release();
  }
  if (plVar5 == (int64_t *)0x0) {
LAB_0158ad82:
    pplVar6 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar5 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 == '\0') goto LAB_0158ad82;
  }
  plVar5 = *pplVar6;
  if (plVar5 == (int64_t *)0x0) {
    bVar1 = false;
  }
  else if (*(char *)(pplVar6 + 1) == '\0') {
    bVar1 = true;
    FUN_00d50b00();
  }
  else {
    *(void*)(pplVar6 + 1) = 0;
    bVar1 = true;
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
LAB_0158aec6:
  *(void*)(this_ptr + 1) = 0;
  if (!bVar1) {
    if (plVar5 == (int64_t *)0x0) {
      plVar5 = (int64_t *)0x0;
    }
    else {
      FUN_00d50b00();
    }
  }
  *this_ptr = (int64_t)plVar5;
  *(void*)(this_ptr + 1) = 1;
  FUN_00d50b20();
  return;
}



// ============================================================
// 01dbba10
// ============================================================
// Function: FUN_01dbba10
// Address: 01dbba10
// Size: 1130 bytes
// Class: GNDictionary

void FUN_01dbba10(uint64_t param_1,float param_2)

{
  int64_t *plVar1;
  int64_t lVar2;
  int iVar3;
  uint64_t uVar4;
  undefined7 uVar5;
  undefined7 extraout_var;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t lVar6;
  byte bVar7;
  uint64_t unaff_R14;
  undefined7 uVar8;
  float fVar9;
  uint32_t uVar10;
  float fVar11;
  uint64_t uVar12;
  int64_t local_e8;
  char local_e0;
  int64_t local_d8;
  char local_d0;
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
  uint32_t local_34;
  
  uVar12 = FUN_01e3f820();
  uVar4 = (**(code **)(*this_ptr + 0x960))();
  local_40 = local_50;
  if (local_50 == 0) {
    uVar8 = (undefined7)((uint64_t)unaff_R14 >> 8);
    bVar7 = 1;
    local_34 = 0;
  }
  else {
    if (local_48 == '\0') {
      uVar4 = FUN_00d50b00();
      bVar7 = 0;
      uVar8 = 0;
      local_34 = (uint32_t)CONCAT71((int7)((uint64_t)uVar4 >> 8),1);
      if ((local_48 == '\0') || (local_50 == 0)) goto LAB_01dbba96;
      uVar4 = FUN_00d50b20();
    }
    local_34 = (uint32_t)CONCAT71((int7)((uint64_t)uVar4 >> 8),1);
    bVar7 = 0;
    uVar8 = 0;
  }
LAB_01dbba96:
  (**(code **)(*this_ptr + 0x9e8))();
  local_70 = local_50;
  local_68 = 0;
  if (local_48 == '\0') {
    if (local_50 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_48 = '\0';
  }
  local_68 = '\x01';
  FUN_01d48a10();
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  iVar3 = (**(code **)(*this_ptr + 0x9f8))();
  lVar6 = local_40;
  param_2 = param_2 + g_023b8b2c;
  if (iVar3 == 0) goto LAB_01dbbc82;
  local_b0 = local_40;
  local_a8 = '\0';
  local_a0 = *arg1;
  local_98 = '\0';
  uVar4 = (**(code **)(*this_ptr + 0xa00))(&local_a0,&local_b0);
  lVar2 = local_40;
  uVar5 = (undefined7)((uint64_t)uVar4 >> 8);
  if (lVar6 == local_50) {
    uVar10 = local_34;
    if ((bool)(bVar7 & lVar6 != 0)) {
      lVar6 = local_40;
      if (local_48 != '\0') goto LAB_01dbbbc7;
      FUN_00d50b00();
      lVar6 = lVar2;
      uVar10 = (int)CONCAT71(uVar8,1);
    }
LAB_01dbbc2c:
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    lVar6 = local_50;
    if (local_48 == '\0') {
      if (local_50 != 0) {
        FUN_00d50b00();
      }
      uVar10 = (uint32_t)CONCAT71(uVar8,1);
      if (((byte)local_34 & lVar2 != 0) == 1) {
        FUN_00d50b20();
      }
      goto LAB_01dbbc2c;
    }
    if (((byte)local_34 & local_40 != 0) == 1) {
      FUN_00d50b20();
      uVar5 = extraout_var;
    }
LAB_01dbbbc7:
    local_48 = '\0';
    uVar10 = (int)CONCAT71(uVar5,1);
  }
  local_34 = uVar10;
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_a8 != '\0') && (local_b0 != 0)) {
    FUN_00d50b20();
  }
LAB_01dbbc82:
  if ((*(int *)((int64_t)this_ptr + 0x174) == 0xff) ||
     (*(int *)((int64_t)this_ptr + 0x174) == 0)) {
    plVar1 = (int64_t *)*arg1;
    (**(code **)(*this_ptr + 0x9e8))();
    local_88 = '\0';
    local_90 = lVar6;
    FUN_01d44870(param_2,&local_90);
    local_60 = local_50;
    local_58 = 0;
    if (local_48 == '\0') {
      if (local_50 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_48 = '\0';
    }
    local_58 = '\x01';
    fVar9 = (float)(**(code **)(*this_ptr + 0xab8))();
    uVar10 = (**(code **)(*this_ptr + 0xab8))();
    local_40 = CONCAT44(local_40._4_4_,uVar10);
    (**(code **)(*this_ptr + 0x9e8))();
    fVar11 = (float)FUN_01d43ca0();
    (**(code **)(*plVar1 + 0x3f0))
              (fVar9 + (float)uVar12,(float)((uint64_t)uVar12 >> 0x20) + (float)local_40 + fVar11);
    if ((local_d0 != '\0') && (local_d8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
    if ((local_e0 != '\0') && (local_e8 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    plVar1 = (int64_t *)*arg1;
    local_78 = '\0';
    local_80 = lVar6;
    uVar10 = FUN_01e3f820();
    (**(code **)(*plVar1 + 0x3f8))(uVar10,*(void*)((int64_t)this_ptr + 0x174));
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
  }
  if (((char)local_34 != '\0') && (lVar6 != 0)) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 00c9e140
// ============================================================
// Function: FUN_00c9e140
// Address: 00c9e140
// Size: 991 bytes
// Class: GNDictionary
// String references:
//   "%@%@"

void FUN_00c9e140(float param_1)

{
  bool bVar1;
  int64_t lVar2;
  int64_t lVar3;
  uint64_t uVar4;
  int64_t *arg1;
  void*this_ptr;
  void*puVar5;
  void*puVar6;
  float fVar7;
  uint32_t uVar8;
  void*local_b8;
  int64_t local_b0;
  char local_a8;
  int64_t local_a0;
  char local_98;
  int64_t local_90;
  char local_88;
  float local_80;
  uint32_t local_7c;
  void*local_78;
  char local_70;
  void*local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  char local_40;
  float local_34;
  
  local_34 = param_1;
  FUN_00d4ab90();
  puVar6 = local_68;
  lVar2 = g_02727800;
  if (local_68 != (void*)0x0) {
    if (((local_60 == '\0') && (FUN_00d50b00(), local_60 != '\0')) &&
       (local_68 != (void*)0x0)) {
      FUN_00d50b20();
    }
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = puVar6;
    goto LAB_00c9e451;
  }
  if (local_34 <= 0.0) {
    if (g_02727800 != 0) {
      FUN_00d50b00();
    }
    lVar3 = g_02773100;
    local_b0 = lVar2;
    local_a8 = '\x01';
    if (g_02773100 != 0) {
      FUN_00d50b00();
    }
    local_a0 = lVar3;
    local_98 = '\x01';
    local_90 = 0;
    local_88 = '\0';
    uVar4 = FUN_00d31230(&local_90,&local_a0);
    puVar6 = local_68;
    if (local_68 == (void*)0x0) {
      local_34 = (float)CONCAT71((int7)((uint64_t)uVar4 >> 8),1);
      puVar6 = (void*)0x0;
      bVar1 = false;
    }
    else {
      if (local_60 == '\0') {
        FUN_00d50b00();
        local_34 = 0.0;
        bVar1 = true;
        if ((local_60 == '\0') || (local_68 == (void*)0x0)) goto LAB_00c9e37b;
        FUN_00d50b20();
      }
      else {
        local_60 = '\0';
      }
      bVar1 = true;
      local_34 = 0.0;
    }
LAB_00c9e37b:
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
    if ((local_98 != '\0') && (local_a0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_a8 != '\0') && (local_b0 != 0)) {
      FUN_00d50b20();
    }
    if (puVar6 != (void*)0x0) {
      puVar5 = puVar6;
      if (arg1[9] == 0) goto LAB_00c9e319;
      local_b8 = puVar6;
      uVar8 = FUN_00083ea0(2,&local_b8);
      FUN_00d8cb40(uVar8,&local_68);
      puVar5 = local_78;
      if (local_78 == puVar6) {
        puVar5 = puVar6;
        if ((local_78 != (void*)0x0 & local_34._0_1_) == 1) {
          if (local_70 != '\0') goto LAB_00c9e481;
          bVar1 = true;
          FUN_00d50b00();
        }
LAB_00c9e4c0:
        if ((local_70 != '\0') && (local_78 != (void*)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        if (local_70 == '\0') {
          if (local_78 != (void*)0x0) {
            FUN_00d50b00();
          }
          bVar1 = true;
          if (local_34._0_1_ == '\0') {
            FUN_00d50b20();
          }
          goto LAB_00c9e4c0;
        }
        puVar6 = local_78;
        if (local_34._0_1_ == 0) {
          FUN_00d50b20();
        }
LAB_00c9e481:
        local_70 = '\0';
        bVar1 = true;
        puVar5 = puVar6;
      }
      local_68 = (void*)&g_0253d630;
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      local_68 = &g_024c5048;
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      goto LAB_00c9e319;
    }
    *(void*)(this_ptr + 1) = 0;
    puVar5 = (void*)0x0;
  }
  else {
    local_80 = *(float *)(arg1 + 2);
    fVar7 = local_80;
    if (local_80 <= 0.0) {
      *(void*)(arg1 + 2) = 0x3727c5ac;
      fVar7 = g_02411280;
    }
    local_7c = *(void*)((int64_t)arg1 + 0x14);
    uVar8 = (**(code **)(*arg1 + 0x3c8))(fVar7);
    *(void*)(arg1 + 2) = uVar8;
    uVar8 = (**(code **)(*arg1 + 0x3c8))(*(void*)((int64_t)arg1 + 0x14));
    *(void*)((int64_t)arg1 + 0x14) = uVar8;
    (**(code **)(*arg1 + 0x3c8))(local_34);
    FUN_00d49aa0();
    puVar5 = local_68;
    if (local_68 == (void*)0x0) {
      puVar5 = (void*)0x0;
      bVar1 = false;
    }
    else {
      bVar1 = true;
      if (((local_60 == '\0') && (FUN_00d50b00(), local_60 != '\0')) &&
         (local_68 != (void*)0x0)) {
        FUN_00d50b20();
      }
    }
    *(float *)(arg1 + 2) = local_80;
    *(void*)((int64_t)arg1 + 0x14) = local_7c;
LAB_00c9e319:
    *(void*)(this_ptr + 1) = 0;
    if (!bVar1) {
      if (puVar5 == (void*)0x0) {
        puVar5 = (void*)0x0;
      }
      else {
        FUN_00d50b00();
      }
    }
  }
  *this_ptr = puVar5;
LAB_00c9e451:
  *(void*)(this_ptr + 1) = 1;
  return;
}



// ============================================================
// 01dbac60
// ============================================================
// Function: FUN_01dbac60
// Address: 01dbac60
// Size: 1087 bytes
// Class: GNDictionary
// String references:
//   "GNDictionary"

void FUN_01dbac60(void)

{
  int64_t lVar1;
  bool bVar2;
  int64_t lVar3;
  char cVar4;
  int iVar5;
  int64_t *plVar6;
  int64_t lVar7;
  int64_t *arg1;
  int64_t lVar8;
  bool bVar9;
  uint32_t extraout_XMM0_Da;
  uint32_t uVar10;
  int64_t local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t local_48;
  char local_40;
  
  plVar6 = (int64_t *)*arg1;
  if (plVar6 == (int64_t *)0x0) {
    return;
  }
  if ((g_026fdd40 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
    g_026cd0e8 = FUN_00d4fe50();
    g_026cd0d0 = "GNDictionary";
    g_026cd0d8 = 0x28;
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
    ___cxa_guard_release();
  }
  (**(code **)(*plVar6 + 0x360))();
  cVar4 = FUN_00e85ea0();
  plVar6 = arg1;
  if (cVar4 == '\0') {
    plVar6 = &g_02802688;
  }
  if (*plVar6 == 0) {
    return;
  }
  lVar1 = *arg1;
  lVar3 = arg1[1];
  uVar10 = extraout_XMM0_Da;
  if (((char)lVar3 != '\0') && (lVar1 != 0)) {
    uVar10 = FUN_00d50b00();
  }
  lVar8 = g_027f2350;
  if (g_027f2350 != 0) {
    uVar10 = FUN_00d50b00();
  }
  local_80 = lVar8;
  local_78 = '\x01';
  uVar10 = FUN_000175c0(uVar10,&local_80);
  lVar8 = local_48;
  if (local_48 == 0) {
    bVar9 = true;
    lVar8 = 0;
    bVar2 = false;
  }
  else if (local_40 == '\0') {
    uVar10 = FUN_00d50b00();
    bVar9 = false;
    bVar2 = true;
  }
  else {
    local_40 = '\0';
    bVar2 = true;
    bVar9 = false;
  }
  if ((local_78 != '\0') && (local_80 != 0)) {
    uVar10 = FUN_00d50b20();
  }
  if (!bVar9) {
    FUN_00d459e0();
    uVar10 = FUN_01db96b0();
  }
  lVar7 = g_027f2358;
  if (g_027f2358 != 0) {
    uVar10 = FUN_00d50b00();
  }
  local_70 = lVar7;
  local_68 = '\x01';
  uVar10 = FUN_000175c0(uVar10,&local_70);
  if (local_48 == lVar8) {
    if ((bool)(bVar9 & local_48 != 0)) {
      if (local_40 != '\0') goto LAB_01dbadf3;
      bVar2 = true;
      uVar10 = FUN_00d50b00();
    }
LAB_01dbae47:
    if ((local_40 != '\0') && (local_48 != 0)) {
      uVar10 = FUN_00d50b20();
    }
  }
  else {
    if (local_40 == '\0') {
      if (local_48 != 0) {
        uVar10 = FUN_00d50b00();
      }
      bVar9 = (bool)(bVar2 & lVar8 != 0);
      bVar2 = true;
      lVar8 = local_48;
      if (bVar9) {
        uVar10 = FUN_00d50b20();
      }
      goto LAB_01dbae47;
    }
    bVar9 = lVar8 != 0;
    lVar8 = local_48;
    if ((bool)(bVar2 & bVar9)) {
      uVar10 = FUN_00d50b20();
    }
LAB_01dbadf3:
    local_40 = '\0';
    bVar2 = true;
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    uVar10 = FUN_00d50b20();
  }
  if (lVar8 != 0) {
    FUN_00d45870();
    uVar10 = FUN_01db9d50();
  }
  lVar7 = g_027f2360;
  if (g_027f2360 != 0) {
    uVar10 = FUN_00d50b00();
  }
  local_60 = lVar7;
  local_58 = '\x01';
  FUN_000175c0(uVar10,&local_60);
  if (local_48 == lVar8) {
    lVar7 = lVar8;
    bVar9 = bVar2;
    if ((!bVar2) && (local_48 != 0)) {
      if (local_40 != '\0') goto LAB_01dbaef7;
      FUN_00d50b00();
      bVar9 = true;
    }
  }
  else {
    lVar7 = local_48;
    if (local_40 != '\0') {
      if ((bVar2) && (lVar8 != 0)) {
        FUN_00d50b20();
      }
LAB_01dbaef7:
      bVar9 = true;
      goto LAB_01dbaf77;
    }
    if (local_48 != 0) {
      FUN_00d50b00();
    }
    bVar9 = true;
    if ((bVar2) && (lVar8 != 0)) {
      FUN_00d50b20();
    }
  }
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
LAB_01dbaf77:
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if (lVar7 != 0) {
    FUN_00d45ad0();
    FUN_01db9b10();
    if (bVar9) {
      FUN_00d50b20();
    }
  }
  if (((char)lVar3 != '\0') && (lVar1 != 0)) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 00ca2310
// ============================================================
// Function: FUN_00ca2310
// Address: 00ca2310
// Size: 918 bytes
// Class: GNDictionary

int64_t * FUN_00ca2310(void)

{
  uint16_t uVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t lVar5;
  int iVar6;
  int iVar7;
  int64_t lVar8;
  void*puVar9;
  void*puVar10;
  void*puVar11;
  uint64_t uVar12;
  int64_t lVar13;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t lVar14;
  void*puVar15;
  void*local_78;
  void*local_70;
  void*local_68;
  void*local_60;
  int64_t local_58;
  char local_50;
  void*local_40;
  
  lVar8 = FUN_00d8d520();
  iVar6 = FUN_00d8c7a0();
  if ((*arg1 == 0) || (iVar7 = FUN_00d8c7a0(), iVar7 == 0)) {
    FUN_00d8ede0();
  }
  else {
    puVar9 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar9 = &g_025683c0;
    (*g_025683d8)();
    FUN_00c92120();
    puVar15 = (void*)puVar9[2];
    if (0 < iVar6) {
      lVar14 = 0;
      puVar10 = (void*)0x0;
      local_78 = (void*)0x0;
      local_70 = (void*)0x0;
      local_68 = (void*)0x0;
      local_60 = (void*)0x0;
      local_40 = puVar15;
      iVar7 = iVar6;
      do {
        lVar5 = g_02773318;
        lVar4 = g_02773310;
        lVar3 = g_02773308;
        lVar2 = g_02773300;
        lVar13 = g_027732f8;
        uVar1 = *(void*)(lVar8 + lVar14 * 2);
        switch(uVar1) {
        case 0x22:
          if (local_78 == (void*)0x0) {
            if (g_02773310 != 0) {
              FUN_00d50b00();
            }
            local_78 = (void*)FUN_00d8d520();
            if (lVar4 != 0) {
              FUN_00d50b20();
            }
          }
          *(void*)(puVar15 + 1) = *(void*)(local_78 + 1);
          uVar12 = *local_78;
          goto LAB_00ca25a9;
        default:
          *(void*)puVar15 = uVar1;
          puVar15 = (void*)((int64_t)puVar15 + 2);
          break;
        case 0x26:
          if (local_60 == (void*)0x0) {
            if (g_027732f8 != 0) {
              FUN_00d50b00();
            }
            local_60 = (void*)FUN_00d8d520();
            if (lVar13 != 0) {
              FUN_00d50b20();
            }
          }
          *(void*)(puVar15 + 1) = *(void*)(local_60 + 1);
          *puVar15 = *local_60;
          puVar15 = (void*)((int64_t)puVar15 + 10);
          break;
        case 0x27:
          if (puVar10 == (void*)0x0) {
            if (g_02773318 != 0) {
              FUN_00d50b00();
            }
            puVar10 = (void*)FUN_00d8d520();
            if (lVar5 != 0) {
              FUN_00d50b20();
            }
          }
          *(void*)(puVar15 + 1) = *(void*)(puVar10 + 1);
          uVar12 = *puVar10;
LAB_00ca25a9:
          *puVar15 = uVar12;
          puVar15 = (void*)((int64_t)puVar15 + 0xc);
          break;
        case 0x3c:
          puVar11 = local_68;
          if (local_68 == (void*)0x0) {
            if (g_02773300 != 0) {
              FUN_00d50b00();
            }
            puVar11 = (void*)FUN_00d8d520();
            local_68 = puVar11;
            if (lVar2 != 0) {
              FUN_00d50b20();
            }
          }
          goto LAB_00ca25f0;
        case 0x3e:
          puVar11 = local_70;
          if (local_70 == (void*)0x0) {
            if (g_02773308 != 0) {
              FUN_00d50b00();
            }
            puVar11 = (void*)FUN_00d8d520();
            local_70 = puVar11;
            if (lVar3 != 0) {
              FUN_00d50b20();
            }
          }
LAB_00ca25f0:
          *puVar15 = *puVar11;
          puVar15 = puVar15 + 1;
        }
        lVar13 = (int64_t)puVar15 - (int64_t)local_40 >> 1;
        if (iVar7 <= lVar13) {
          FUN_00c92120();
          iVar7 = iVar7 * 2;
          local_40 = (void*)puVar9[2];
          puVar15 = (void*)((int64_t)local_40 + lVar13 * 2);
        }
        lVar14 = lVar14 + 1;
      } while (iVar6 != (int)lVar14);
    }
    FUN_00d920f0();
    if (local_58 != 0) {
      if (local_50 == '\0') {
        FUN_00d50b00();
      }
      *(void*)(this_ptr + 1) = 0;
    }
    *this_ptr = local_58;
    *(void*)(this_ptr + 1) = 1;
    if (puVar9 != (void*)0x0) {
      FUN_00d50b20();
    }
  }
  return this_ptr;
}



// ============================================================
// 01cca020
// ============================================================
// Function: FUN_01cca020
// Address: 01cca020
// Size: 1209 bytes
// Class: GNDictionary

void FUN_01cca020(int64_t *param_1,int64_t *param_2,char param_3)

{
  int64_t lVar1;
  int64_t lVar2;
  byte bVar3;
  int64_t *arg1;
  int64_t *this_ptr;
  uint32_t uVar4;
  uint32_t extraout_XMM0_Da;
  int64_t local_e8;
  uint8_t local_e0;
  int64_t local_d8;
  char local_d0;
  int64_t local_c8;
  char local_c0;
  int64_t *local_b8;
  void*local_b0;
  char local_a8;
  void*local_a0;
  char local_98;
  void*local_40;
  char local_38;
  
  uVar4 = (**(code **)(*this_ptr + 0x448))();
  if (local_d8 == 0) {
    bVar3 = 1;
  }
  else {
    (**(code **)(*this_ptr + 0x448))();
    local_40 = (void*)*arg1;
    local_38 = '\0';
    bVar3 = FUN_00d23d70();
    uVar4 = extraout_XMM0_Da;
    if ((local_c0 != '\0') && (local_c8 != 0)) {
      uVar4 = FUN_00d50b20();
    }
    bVar3 = bVar3 ^ 1;
  }
  if ((local_d0 != '\0') && (local_d8 != 0)) {
    uVar4 = FUN_00d50b20();
  }
  if (bVar3 != 0) {
    return;
  }
  local_e8 = *arg1;
  local_e0 = 0;
  local_b8 = param_2;
  FUN_01cc98b0(uVar4,&local_e8);
  if (local_38 == '\0') {
    if (local_40 != (void*)0x0) {
      FUN_00d50b00();
      goto LAB_01cca14b;
    }
LAB_01cca1c3:
    local_40 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *local_40 = &g_02673140;
    local_40[2] = 0;
    local_40[3] = 0;
    local_40[4] = 0;
    local_40[5] = 0;
    *(void*)(local_40 + 6) = 0;
    uVar4 = FUN_00d500e0();
    if (param_3 != '\0') {
      local_a8 = '\0';
      local_b0 = local_40;
      FUN_00d649d0(uVar4,this_ptr + 2);
      if ((local_a8 != '\0') && (local_b0 != (void*)0x0)) {
        FUN_00d50b20();
      }
    }
    uVar4 = FUN_00d21140();
    if (param_3 == '\0') {
LAB_01cca410:
      lVar1 = *local_b8;
      lVar2 = local_40[2];
      if (lVar2 != lVar1) {
        if (lVar1 != 0) {
          FUN_00d50b00();
        }
        local_40[2] = lVar1;
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
      }
      *(void*)(local_40 + 6) = 0xffffffff;
      lVar1 = *arg1;
      lVar2 = local_40[3];
      if (lVar2 != lVar1) {
        if (lVar1 != 0) {
          FUN_00d50b00();
        }
        local_40[3] = lVar1;
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
      }
      if (local_40[5] == 0) {
        local_40[5] = *param_1;
        FUN_00d50b00();
        FUN_01d26050();
        if (this_ptr != (int64_t *)0x0) {
          FUN_00d50b20();
        }
      }
      goto LAB_01cca47e;
    }
    local_98 = '\0';
    local_a0 = local_40;
    FUN_00d64e50(uVar4,this_ptr + 2);
    if ((local_98 != '\0') && (local_a0 != (void*)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    if (local_40 == (void*)0x0) goto LAB_01cca1c3;
LAB_01cca14b:
    if (local_40[5] != *param_1) {
      if (param_3 != '\0') {
        FUN_00d50b00();
        FUN_01d262d0();
        if (this_ptr != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        FUN_00d64850();
        local_40[5] = 0;
        FUN_00d64910();
        goto LAB_01cca2bd;
      }
      FUN_00d50b00();
      FUN_01d261f0();
      if (this_ptr != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      local_40[5] = 0;
      goto LAB_01cca410;
    }
    if (param_3 == '\0') goto LAB_01cca410;
  }
LAB_01cca2bd:
  lVar1 = *local_b8;
  FUN_00d64850();
  lVar2 = local_40[2];
  if (lVar2 != lVar1) {
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    local_40[2] = lVar1;
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  *(void*)(local_40 + 6) = 0xffffffff;
  FUN_00d64910();
  lVar1 = *arg1;
  FUN_00d64850();
  lVar2 = local_40[3];
  if (lVar2 != lVar1) {
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    local_40[3] = lVar1;
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_00d64910();
  if (local_40[5] == 0) {
    lVar1 = *param_1;
    FUN_00d64850();
    local_40[5] = lVar1;
    FUN_00d64910();
    FUN_00d50b00();
    FUN_01d260c0();
    if (this_ptr != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
LAB_01cca47e:
  FUN_00d50b20();
  return;
}



// ============================================================
// 019e8870
// ============================================================
// Function: FUN_019e8870
// Address: 019e8870
// Size: 1098 bytes
// Class: GNDictionary

void FUN_019e8870(void)

{
  double dVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t *plVar4;
  int64_t *arg1;
  void*this_ptr;
  uint32_t uVar5;
  int64_t local_48;
  char local_40;
  int64_t local_38;
  char local_30;
  
  plVar4 = (int64_t *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar4 + 0x18))();
  (**(code **)(*arg1 + 3000))();
  uVar5 = FUN_00d46dc0();
  lVar3 = local_38;
  lVar2 = g_027e1460;
  if (local_30 == '\0') {
    if (local_38 != 0) {
      uVar5 = FUN_00d50b00();
      lVar2 = g_027e1460;
    }
  }
  else {
    local_30 = '\0';
  }
  g_027e1460 = lVar2;
  if (lVar2 != 0) {
    uVar5 = FUN_00d50b00();
  }
  local_40 = '\0';
  local_48 = lVar2;
  FUN_00ca0840(uVar5,&local_48);
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  dVar1 = (double)(**(code **)(*arg1 + 0x928))();
  uVar5 = FUN_00d46dc0((float)dVar1);
  lVar3 = local_38;
  lVar2 = g_027e1468;
  if (local_30 == '\0') {
    if (local_38 != 0) {
      uVar5 = FUN_00d50b00();
      lVar2 = g_027e1468;
    }
  }
  else {
    local_30 = '\0';
  }
  g_027e1468 = lVar2;
  if (lVar2 != 0) {
    uVar5 = FUN_00d50b00();
  }
  local_40 = '\0';
  local_48 = lVar2;
  FUN_00ca0840(uVar5,&local_48);
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(*arg1 + 0xbd0))();
  uVar5 = FUN_00d46dc0();
  lVar3 = local_38;
  lVar2 = g_027e1470;
  if (local_30 == '\0') {
    if (local_38 != 0) {
      uVar5 = FUN_00d50b00();
      lVar2 = g_027e1470;
    }
  }
  else {
    local_30 = '\0';
  }
  g_027e1470 = lVar2;
  if (lVar2 != 0) {
    uVar5 = FUN_00d50b00();
  }
  local_40 = '\0';
  local_48 = lVar2;
  FUN_00ca0840(uVar5,&local_48);
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(*arg1 + 0xbe8))();
  uVar5 = FUN_00d46dc0();
  lVar3 = local_38;
  lVar2 = g_027e1478;
  if (local_30 == '\0') {
    if (local_38 != 0) {
      uVar5 = FUN_00d50b00();
      lVar2 = g_027e1478;
    }
  }
  else {
    local_30 = '\0';
  }
  g_027e1478 = lVar2;
  if (lVar2 != 0) {
    uVar5 = FUN_00d50b00();
  }
  local_40 = '\0';
  local_48 = lVar2;
  FUN_00ca0840(uVar5,&local_48);
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  FUN_01e436c0();
  uVar5 = FUN_00dd6480();
  lVar3 = local_38;
  lVar2 = g_027e1480;
  if (local_30 == '\0') {
    if (local_38 != 0) {
      uVar5 = FUN_00d50b00();
      lVar2 = g_027e1480;
    }
  }
  else {
    local_30 = '\0';
  }
  g_027e1480 = lVar2;
  if (lVar2 != 0) {
    uVar5 = FUN_00d50b00();
  }
  local_40 = '\0';
  local_48 = lVar2;
  FUN_00ca0840(uVar5,&local_48);
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  *this_ptr = plVar4;
  *(void*)(this_ptr + 1) = 1;
  return;
}



// ============================================================
// 01de5000
// ============================================================
// Function: FUN_01de5000
// Address: 01de5000
// Size: 1006 bytes
// Class: GNDictionary

uint64_t FUN_01de5000(char param_1)

{
  float fVar1;
  float fVar2;
  bool bVar3;
  int iVar4;
  int64_t *this_ptr;
  int64_t *plVar5;
  int64_t *plVar6;
  int iVar7;
  uint64_t uVar8;
  float fVar9;
  int64_t *local_88;
  char local_80;
  int64_t *local_40;
  char local_38;
  
  iVar4 = FUN_01d3a5a0();
  if (iVar4 == 1) {
    FUN_01d3abf0();
    uVar8 = FUN_01e466c0();
    FUN_01d4ed90(g_02421250,g_02390124);
    if ((local_38 == '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b00();
    }
    FUN_01d52700();
    FUN_01d52740();
    fVar9 = (float)uVar8 + g_023b5560;
    (**(code **)(*local_40 + 0x370))
              ((uint)fVar9 ^ g_023945e0,
               (uint)((float)((uint64_t)uVar8 >> 0x20) + _UNK_023b5564) ^ g_023945e0);
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_01d52740();
    if (local_38 == '\0') {
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    (**(code **)(*this_ptr + 0x610))(fVar9,g_02421250);
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_01d52770();
    iVar4 = 0;
    do {
      iVar7 = 0;
      do {
        FUN_01d530d0(iVar7,iVar4);
        if ((local_38 == '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b00();
        }
        fVar9 = *(float *)(local_40 + 2);
        fVar1 = *(float *)((int64_t)local_40 + 0x14);
        fVar2 = *(float *)(local_40 + 3);
        (**(code **)(*this_ptr + 0x970))();
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        plVar5 = local_40;
        if (local_40 == (int64_t *)0x0) {
          (**(code **)(*this_ptr + 0x640))();
          (**(code **)(*local_88 + 0x470))();
          plVar5 = (int64_t *)0x0;
          if ((local_80 != '\0') && (local_88 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        plVar6 = plVar5;
        if (param_1 != '\0') {
          FUN_01dce800();
          if (local_40 == plVar5) {
LAB_01de5324:
            plVar6 = plVar5;
            if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            plVar6 = local_40;
            if (local_38 == '\0') {
              if (local_40 != (int64_t *)0x0) {
                FUN_00d50b00();
              }
              if (plVar5 != (int64_t *)0x0) {
                FUN_00d50b20();
                plVar5 = local_40;
                goto LAB_01de5324;
              }
            }
            else if (plVar5 != (int64_t *)0x0) {
              FUN_00d50b20();
            }
          }
        }
        if (((g_02421228 < (float)((uint)(fVar9 - *(float *)(plVar6 + 2)) & g_02390140)) ||
            (g_02421228 <
             (float)((uint)(fVar1 - *(float *)((int64_t)plVar6 + 0x14)) & g_02390140))) ||
           (g_02421228 < (float)((uint)(fVar2 - *(float *)(plVar6 + 3)) & g_02390140))) {
          FUN_00d50b20();
          bVar3 = false;
          goto LAB_01de53d7;
        }
        FUN_00d50b20();
        iVar7 = iVar7 + 1;
      } while (iVar7 != 4);
      iVar4 = iVar4 + 1;
    } while (iVar4 != 4);
    bVar3 = true;
LAB_01de53d7:
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if (!bVar3) {
      return 1;
    }
  }
  return 0;
}



// ============================================================
// 019eafe0
// ============================================================
// Function: FUN_019eafe0
// Address: 019eafe0
// Size: 1595 bytes
// Class: GNDictionary

void* FUN_019eafe0(void)

{
  bool bVar1;
  bool bVar2;
  int64_t lVar3;
  int iVar4;
  int64_t *plVar5;
  void*puVar6;
  int64_t *arg1;
  void*this_ptr;
  int64_t local_b8;
  char local_b0;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  int64_t local_58;
  char local_50;
  int local_40;
  
  plVar5 = (int64_t *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar5 + 0x18))();
  iVar4 = (**(code **)(*arg1 + 0xd08))();
  bVar2 = true;
  if (iVar4 == 0) {
    FUN_00d46530();
    local_60 = local_58;
    if (local_58 == 0) {
LAB_019eb12a:
      local_60 = 0;
      bVar1 = false;
    }
    else {
      bVar1 = true;
      if (local_50 == '\0') {
        FUN_00d50b00();
      }
    }
LAB_019eb133:
    lVar3 = g_026dc290;
    if (local_60 != 0) {
      if (g_026dc290 != 0) {
        FUN_00d50b00();
      }
      local_58 = lVar3;
      local_50 = '\0';
      FUN_00ca0840();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      bVar2 = false;
    }
  }
  else {
    if (iVar4 == 1) {
      FUN_00d46530();
      local_60 = local_58;
      if (local_58 == 0) goto LAB_019eb12a;
      bVar1 = true;
      if (local_50 == '\0') {
        FUN_00d50b00();
      }
      goto LAB_019eb133;
    }
    if (iVar4 == 2) {
      FUN_00d46530();
      local_60 = local_58;
      if (local_58 == 0) goto LAB_019eb12a;
      bVar1 = true;
      if (local_50 == '\0') {
        FUN_00d50b00();
      }
      goto LAB_019eb133;
    }
    bVar1 = false;
  }
  if (arg1[0x7f] != 0) {
    FUN_01e1f170();
    FUN_00d46530();
    lVar3 = g_027e1498;
    if ((local_68 == '\0') && (local_70 != 0)) {
      FUN_00d50b00();
      lVar3 = g_027e1498;
    }
    g_027e1498 = lVar3;
    if (lVar3 != 0) {
      FUN_00d50b00();
    }
    FUN_00ca0840();
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    if (local_70 != 0) {
      FUN_00d50b20();
    }
    FUN_01e1f180();
    FUN_00d46530();
    if (local_70 != 0) {
      FUN_00d50b00();
    }
    lVar3 = g_027e14a0;
    local_58 = g_027e14a0;
    if (g_027e14a0 != 0) {
      FUN_00d50b00();
    }
    local_50 = '\0';
    FUN_00ca0840();
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    if (local_70 != 0) {
      FUN_00d50b20();
    }
  }
  (**(code **)(*arg1 + 0xe20))();
  if (local_50 == '\0') {
    if (local_58 == 0) goto LAB_019eb603;
    FUN_00d50b00();
  }
  else if (local_58 == 0) {
LAB_019eb603:
    *this_ptr = plVar5;
    *(void*)(this_ptr + 1) = 1;
    goto joined_r0x019eb61c;
  }
  if (*(int *)(local_58 + 0xc) != 0) {
    puVar6 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar6 = &g_02572358;
    (*g_02572370)();
    local_40 = -1;
    while (local_40 = local_40 + 1, local_40 < *(int *)(local_58 + 0xc)) {
      FUN_00dd6a00();
      if (local_b0 == '\0') {
        if (local_b8 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_b0 = '\0';
      }
      FUN_00d21140();
      if (local_b8 != 0) {
        FUN_00d50b20();
      }
      if ((local_b0 != '\0') && (local_b8 != 0)) {
        FUN_00d50b20();
      }
    }
    FUN_001159b0();
    lVar3 = g_027e14a8;
    if (g_027e14a8 != 0) {
      FUN_00d50b00();
    }
    FUN_00ca0840();
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    if (puVar6 != (void*)0x0) {
      FUN_00d50b20();
    }
  }
  *this_ptr = plVar5;
  *(void*)(this_ptr + 1) = 1;
  FUN_00d50b20();
joined_r0x019eb61c:
  if (bVar1 && !bVar2) {
    FUN_00d50b20();
  }
  return this_ptr;
}



// ============================================================
// 019ebb20
// ============================================================
// Function: FUN_019ebb20
// Address: 019ebb20
// Size: 672 bytes
// Class: GNDictionary
// String references:
//   "GNDictionary"

void FUN_019ebb20(uint32_t param_1)

{
  bool bVar1;
  bool bVar2;
  int64_t lVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t *plVar7;
  int64_t **pplVar8;
  uint32_t extraout_XMM0_Da;
  uint32_t extraout_XMM0_Da_00;
  int64_t *local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_31;
  
  plVar7 = (int64_t *)*arg1;
  if ((g_026fdd40 == '\0') &&
     (iVar5 = ___cxa_guard_acquire(), param_1 = extraout_XMM0_Da_00, iVar5 != 0)) {
    g_026cd0e8 = FUN_00d4fe50();
    g_026cd0d0 = "GNDictionary";
    g_026cd0d8 = 0x28;
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
    param_1 = ___cxa_guard_release();
  }
  if (plVar7 == (int64_t *)0x0) {
LAB_019ebb6c:
    arg1 = &g_02802688;
  }
  else {
    (**(code **)(*plVar7 + 0x360))();
    cVar4 = FUN_00e85ea0();
    param_1 = extraout_XMM0_Da;
    if (cVar4 == '\0') goto LAB_019ebb6c;
  }
  local_40 = *arg1;
  if (local_40 == 0) {
    return;
  }
  local_31 = (char)arg1[1];
  if (local_31 != '\0') {
    param_1 = FUN_00d50b00();
  }
  lVar3 = g_026dc290;
  if (g_026dc290 != 0) {
    param_1 = FUN_00d50b00();
  }
  local_50 = lVar3;
  local_48 = '\x01';
  pplVar8 = &local_60;
  FUN_000175c0(param_1,&local_50);
  plVar7 = local_60;
  FUN_00053ac0();
  if (plVar7 != (int64_t *)0x0) {
    (**(code **)(*plVar7 + 0x360))();
    cVar4 = FUN_00e85ea0();
    if (cVar4 != '\0') goto LAB_019ebbfc;
  }
  pplVar8 = (int64_t **)&g_02802688;
LAB_019ebbfc:
  plVar7 = *pplVar8;
  if (plVar7 == (int64_t *)0x0) {
    bVar2 = true;
    bVar1 = true;
    plVar7 = (int64_t *)0x0;
  }
  else {
    if (*(char *)(pplVar8 + 1) == '\0') {
      FUN_00d50b00();
    }
    else {
      *(void*)(pplVar8 + 1) = 0;
    }
    bVar2 = false;
    bVar1 = false;
  }
  if ((local_58 != '\0') && (bVar1 = bVar2, local_60 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if (plVar7 != (int64_t *)0x0) {
    iVar5 = (**(code **)(*this_ptr + 0xd08))();
    iVar6 = FUN_00d45870();
    if (iVar6 == 0) {
      (**(code **)(*this_ptr + 0xd00))();
    }
    else if (iVar6 == 1) {
      (**(code **)(*this_ptr + 0xd00))();
    }
    else if (iVar6 == 2) {
      (**(code **)(*this_ptr + 0xd00))();
    }
    iVar6 = (**(code **)(*this_ptr + 0xd08))();
    if (iVar5 != iVar6) {
      (**(code **)("/System/Library/Frameworks/CoreGraphics.framework/Versions/A/CoreGraphics" +
                  *this_ptr + 0x40))();
    }
    if (!bVar1) {
      FUN_00d50b20();
    }
  }
  if (local_31 != '\0') {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 01e04d10
// ============================================================
// Function: FUN_01e04d10
// Address: 01e04d10
// Size: 770 bytes
// Class: GNDictionary

void FUN_01e04d10(void)

{
  int64_t *plVar1;
  int64_t lVar2;
  uint8_t uVar3;
  int iVar4;
  void*arg1;
  int64_t this_ptr;
  int64_t local_38;
  char local_30;
  
  lVar2 = g_027f30a0;
  plVar1 = (int64_t *)*arg1;
  if (g_027f30a0 != 0) {
    FUN_00d50b00();
  }
  iVar4 = (**(code **)(*plVar1 + 0x598))();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  FUN_01d0ec70();
  (**(code **)(*(int64_t *)*arg1 + 0x470))();
  lVar2 = *(int64_t *)(this_ptr + 0x1d0);
  if (lVar2 != local_38) {
    if (local_30 == '\0') {
      if (local_38 == 0) {
        *(void*)(this_ptr + 0x1d0) = 0;
      }
      else {
        FUN_00d50b00();
        lVar2 = *(int64_t *)(this_ptr + 0x1d0);
        *(int64_t *)(this_ptr + 0x1d0) = local_38;
      }
    }
    else {
      local_30 = '\0';
      *(int64_t *)(this_ptr + 0x1d0) = local_38;
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(*(int64_t *)*arg1 + 0x470))();
  lVar2 = *(int64_t *)(this_ptr + 0x1e8);
  if (lVar2 != local_38) {
    if (local_30 == '\0') {
      if (local_38 == 0) {
        *(void*)(this_ptr + 0x1e8) = 0;
      }
      else {
        FUN_00d50b00();
        lVar2 = *(int64_t *)(this_ptr + 0x1e8);
        *(int64_t *)(this_ptr + 0x1e8) = local_38;
      }
    }
    else {
      local_30 = '\0';
      *(int64_t *)(this_ptr + 0x1e8) = local_38;
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(*(int64_t *)*arg1 + 0x470))();
  lVar2 = *(int64_t *)(this_ptr + 0x1f0);
  if (lVar2 != local_38) {
    if (local_30 == '\0') {
      if (local_38 == 0) {
        *(void*)(this_ptr + 0x1f0) = 0;
      }
      else {
        FUN_00d50b00();
        lVar2 = *(int64_t *)(this_ptr + 0x1f0);
        *(int64_t *)(this_ptr + 0x1f0) = local_38;
      }
    }
    else {
      local_30 = '\0';
      *(int64_t *)(this_ptr + 0x1f0) = local_38;
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(*(int64_t *)*arg1 + 0x470))();
  lVar2 = *(int64_t *)(this_ptr + 0x1f8);
  if (lVar2 != local_38) {
    if (local_30 == '\0') {
      if (local_38 == 0) {
        *(void*)(this_ptr + 0x1f8) = 0;
      }
      else {
        FUN_00d50b00();
        lVar2 = *(int64_t *)(this_ptr + 0x1f8);
        *(int64_t *)(this_ptr + 0x1f8) = local_38;
      }
    }
    else {
      local_30 = '\0';
      *(int64_t *)(this_ptr + 0x1f8) = local_38;
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  uVar3 = (**(code **)(*(int64_t *)*arg1 + 0x418))();
  *(void*)(this_ptr + 0x1e0) = uVar3;
  if (0 < iVar4) {
    uVar3 = (**(code **)(*(int64_t *)*arg1 + 0x418))();
    *(void*)(this_ptr + 0x208) = uVar3;
    if (iVar4 != 1) {
      uVar3 = (**(code **)(*(int64_t *)*arg1 + 0x418))();
      *(void*)(this_ptr + 0x1e3) = uVar3;
    }
  }
  return;
}



// ============================================================
// 01f618c0
// ============================================================
// Function: FUN_01f618c0
// Address: 01f618c0
// Size: 791 bytes
// Class: GNDictionary
// String references:
//   "GNDictionary"

int64_t * FUN_01f618c0(uint64_t param_1,int64_t *param_2)

{
  int64_t lVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  int64_t *plVar5;
  int64_t arg1;
  int64_t *this_ptr;
  int64_t lVar6;
  int64_t lVar7;
  uint32_t extraout_XMM0_Da;
  uint32_t uVar8;
  int64_t local_60;
  char local_58;
  
  plVar5 = (int64_t *)*param_2;
  if ((g_026fdd40 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
    g_026cd0e8 = FUN_00d4fe50();
    g_026cd0d0 = "GNDictionary";
    g_026cd0d8 = 0x28;
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
    ___cxa_guard_release();
  }
  if (plVar5 == (int64_t *)0x0) {
LAB_01f6191f:
    plVar5 = &g_02802688;
  }
  else {
    (**(code **)(*plVar5 + 0x360))();
    cVar2 = FUN_00e85ea0();
    plVar5 = param_2;
    if (cVar2 == '\0') goto LAB_01f6191f;
  }
  lVar7 = *plVar5;
  if (lVar7 == 0) {
    lVar6 = *param_2;
    lVar7 = 0;
    cVar2 = '\0';
    if (lVar6 == 0) goto LAB_01f61a29;
joined_r0x01f61a19:
    if ((lVar6 != 0) && ((char)param_2[1] != '\0')) {
      FUN_00d50b00();
LAB_01f61a61:
      *(void*)(this_ptr + 1) = 0;
      *this_ptr = lVar6;
      *(void*)(this_ptr + 1) = 1;
      goto joined_r0x01f61b0d;
    }
LAB_01f61a7a:
    *(void*)(this_ptr + 1) = 0;
LAB_01f61ac8:
    if (lVar6 == 0) {
      *this_ptr = 0;
      *(void*)(this_ptr + 1) = 1;
      goto joined_r0x01f61b0d;
    }
    FUN_00d50b00();
  }
  else {
    cVar2 = (char)plVar5[1];
    if (cVar2 != '\0') {
      FUN_00d50b00();
    }
    lVar6 = g_027e7c20;
    if (*param_2 == 0) {
LAB_01f61a29:
      lVar6 = *(int64_t *)(arg1 + 0x90);
      if (lVar6 != 0) {
        FUN_00d50b00();
        goto LAB_01f61a61;
      }
      lVar6 = 0;
      goto LAB_01f61a7a;
    }
    if (g_027e7c20 != 0) {
      FUN_00d50b00();
    }
    cVar3 = FUN_00c9ff50();
    uVar8 = extraout_XMM0_Da;
    if (lVar6 != 0) {
      uVar8 = FUN_00d50b20();
    }
    lVar1 = g_027e7c20;
    if (cVar3 == '\0') {
      lVar6 = *param_2;
      goto joined_r0x01f61a19;
    }
    if (g_027e7c20 != 0) {
      uVar8 = FUN_00d50b00();
    }
    local_60 = lVar1;
    local_58 = '\x01';
    FUN_000175c0(uVar8,&local_60);
    if (lVar6 != 0) {
      FUN_00d50b00();
    }
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    *(void*)(this_ptr + 1) = 0;
    if (lVar6 == 0) goto LAB_01f61ac8;
  }
  *this_ptr = lVar6;
  *(void*)(this_ptr + 1) = 1;
joined_r0x01f61b0d:
  if ((cVar2 != '\0') && (lVar7 != 0)) {
    FUN_00d50b20();
  }
  return this_ptr;
}



// ============================================================
// 00c9e710
// ============================================================
// Function: FUN_00c9e710
// Address: 00c9e710
// Size: 690 bytes
// Class: GNDictionary

uint64_t FUN_00c9e710(uint64_t param_1)

{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t lVar3;
  char cVar4;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t lVar5;
  float fVar6;
  uint32_t uVar7;
  uint64_t uVar8;
  int64_t local_a8;
  char local_a0;
  int64_t local_98;
  char local_90;
  int64_t local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  int64_t local_68;
  char local_60;
  uint32_t local_58;
  uint32_t local_54;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  float local_2c;
  
  local_a8 = *arg1;
  local_a0 = '\0';
  FUN_00d496b0(param_1,&local_a8);
  lVar3 = local_40;
  if (local_40 == 0) {
    lVar5 = 0;
  }
  else {
    if (local_38 != '\0') {
      local_38 = '\0';
      lVar5 = local_40;
      goto LAB_00c9e788;
    }
    FUN_00d50b00();
    lVar5 = lVar3;
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
LAB_00c9e788:
  if ((local_a0 != '\0') && (local_a8 != 0)) {
    FUN_00d50b20();
  }
  lVar2 = g_02727800;
  if (lVar5 == 0) {
    plVar1 = (int64_t *)*arg1;
    if (g_02727800 != 0) {
      FUN_00d50b00();
    }
    lVar3 = g_02773100;
    local_98 = lVar2;
    local_90 = '\x01';
    if (g_02773100 != 0) {
      FUN_00d50b00();
    }
    local_88 = lVar3;
    local_80 = '\x01';
    local_78 = 0;
    local_70 = '\0';
    FUN_00d31230(&local_78,&local_88);
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
    cVar4 = (**(code **)(*plVar1 + 0x50))();
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
    uVar8 = 0;
    if (cVar4 == '\0') {
      local_2c = *(float *)(this_ptr + 2);
      fVar6 = local_2c;
      if (local_2c <= 0.0) {
        *(void*)(this_ptr + 2) = 0x3727c5ac;
        fVar6 = g_02411280;
      }
      local_58 = *(void*)((int64_t)this_ptr + 0x14);
      uVar7 = (**(code **)(*this_ptr + 0x3c8))(fVar6);
      *(void*)(this_ptr + 2) = uVar7;
      uVar7 = (**(code **)(*this_ptr + 0x3c8))(*(void*)((int64_t)this_ptr + 0x14));
      *(void*)((int64_t)this_ptr + 0x14) = uVar7;
      local_68 = *arg1;
      local_60 = '\0';
      local_54 = FUN_00d4afa0();
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
      *(float *)(this_ptr + 2) = local_2c;
      *(void*)((int64_t)this_ptr + 0x14) = local_58;
      uVar8 = (**(code **)(*this_ptr + 0x3d0))(local_54);
    }
  }
  else {
    local_2c = (float)FUN_00d459e0();
    if (lVar3 == 0) {
      uVar8 = (uint64_t)(uint)local_2c;
    }
    else {
      FUN_00d50b20();
      uVar8 = (uint64_t)(uint)local_2c;
    }
  }
  return uVar8;
}



// ============================================================
// 00ca0060
// ============================================================
// Function: FUN_00ca0060
// Address: 00ca0060
// Size: 962 bytes
// Class: GNDictionary
// String references:
//   "\t"
//   "%@ = "
//   "noKey = "
//   "%@;\n"
//   "nil;\n"
//   "{\n"

void* FUN_00ca0060(void)

{
  bool bVar1;
  bool bVar2;
  void*puVar3;
  int64_t lVar4;
  int iVar5;
  int64_t arg1;
  void*this_ptr;
  int64_t local_70;
  int64_t local_38;
  
  puVar3 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar3 = &g_025795a8;
  (*g_025795c0)();
  if (0 < g_028a7288) {
    iVar5 = 0;
    do {
      FUN_00d8db40();
      iVar5 = iVar5 + 1;
    } while (iVar5 < g_028a7288);
  }
  FUN_00d8db40();
  g_028a7288 = g_028a7288 + 1;
  lVar4 = *(int64_t *)(arg1 + 0x10);
  if (*(int *)(lVar4 + 0xc) < 1) {
    bVar2 = false;
    local_38 = 0;
  }
  else {
    local_70 = 0;
    local_38 = 0;
    bVar2 = false;
    do {
      if (0 < g_028a7288) {
        iVar5 = 0;
        do {
          FUN_00d8db40();
          iVar5 = iVar5 + 1;
        } while (iVar5 < g_028a7288);
        lVar4 = *(int64_t *)(arg1 + 0x10);
      }
      lVar4 = *(int64_t *)(*(int64_t *)(lVar4 + 0x10) + local_70 * 8);
      if (local_38 == lVar4) {
        lVar4 = local_38;
        bVar1 = bVar2;
        if (bVar2) goto LAB_00ca0210;
        if (local_38 == 0) goto LAB_00ca0290;
        bVar2 = true;
        FUN_00d50b00();
LAB_00ca021d:
        FUN_00d50b00();
        FUN_00d94d80();
        if (local_38 != 0) {
          FUN_00d50b20();
        }
      }
      else {
        if (lVar4 != 0) {
          FUN_00d50b00();
        }
        bVar1 = true;
        if ((bVar2) && (local_38 != 0)) {
          FUN_00d50b20();
        }
LAB_00ca0210:
        bVar2 = bVar1;
        local_38 = lVar4;
        if (lVar4 != 0) goto LAB_00ca021d;
LAB_00ca0290:
        FUN_00d8db40();
        local_38 = 0;
      }
      lVar4 = *(int64_t *)(*(int64_t *)(*(int64_t *)(arg1 + 0x18) + 0x10) + local_70 * 8);
      if (local_38 == lVar4) {
        lVar4 = local_38;
        bVar1 = bVar2;
        if (bVar2) goto LAB_00ca0320;
        if (local_38 == 0) goto LAB_00ca0130;
        bVar2 = true;
        FUN_00d50b00();
LAB_00ca032d:
        FUN_00d50b00();
        FUN_00d94d80();
        if (local_38 != 0) {
          FUN_00d50b20();
        }
      }
      else {
        if (lVar4 != 0) {
          FUN_00d50b00();
        }
        bVar1 = true;
        if ((bVar2) && (local_38 != 0)) {
          FUN_00d50b20();
        }
LAB_00ca0320:
        bVar2 = bVar1;
        local_38 = lVar4;
        if (lVar4 != 0) goto LAB_00ca032d;
LAB_00ca0130:
        FUN_00d8db40();
        local_38 = 0;
      }
      local_70 = local_70 + 1;
      lVar4 = *(int64_t *)(arg1 + 0x10);
    } while (local_70 < *(int *)(lVar4 + 0xc));
  }
  iVar5 = g_028a7288 + -1;
  bVar1 = 1 < g_028a7288;
  g_028a7288 = iVar5;
  if (bVar1) {
    iVar5 = 0;
    do {
      FUN_00d8db40();
      iVar5 = iVar5 + 1;
    } while (iVar5 < g_028a7288);
  }
  FUN_00d8db40();
  FUN_00d8c7d0();
  *this_ptr = puVar3;
  *(void*)(this_ptr + 1) = 1;
  if ((bVar2) && (local_38 != 0)) {
    FUN_00d50b20();
  }
  return this_ptr;
}



// ============================================================
// 01cc8fe0
// ============================================================
// Function: FUN_01cc8fe0
// Address: 01cc8fe0
// Size: 656 bytes
// Class: GNDictionary
// String references:
//   "GNDictionary"

void FUN_01cc8fe0(void)

{
  int64_t *plVar1;
  int64_t *plVar2;
  int64_t lVar3;
  char cVar4;
  int iVar5;
  int64_t *plVar6;
  int64_t *arg1;
  int64_t this_ptr;
  uint32_t extraout_XMM0_Da;
  uint32_t uVar7;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t *local_40;
  char local_38;
  int64_t *local_30;
  
  lVar3 = g_027edfb8;
  plVar6 = (int64_t *)*arg1;
  if (g_027edfb8 != 0) {
    FUN_00d50b00();
  }
  cVar4 = (**(code **)(*plVar6 + 0x590))();
  uVar7 = extraout_XMM0_Da;
  if (lVar3 != 0) {
    uVar7 = FUN_00d50b20();
  }
  lVar3 = g_027edfb8;
  if (cVar4 != '\0') {
    plVar6 = (int64_t *)*arg1;
    if (g_027edfb8 != 0) {
      uVar7 = FUN_00d50b00();
    }
    local_60 = lVar3;
    local_58 = '\x01';
    (**(code **)(*plVar6 + 0x578))(uVar7,&local_60);
    plVar6 = local_40;
    local_30 = local_40;
    if (local_38 == '\0') {
      if (local_40 == (int64_t *)0x0) {
        local_30 = (int64_t *)0x0;
        plVar6 = (int64_t *)0x0;
      }
      else {
        FUN_00d50b00();
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    else {
      local_38 = '\0';
    }
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if ((g_026fdd40 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
      g_026cd0e8 = FUN_00d4fe50();
      g_026cd0d0 = "GNDictionary";
      g_026cd0d8 = 0x28;
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
      ___cxa_guard_release();
    }
    plVar1 = local_30;
    plVar2 = g_02802688;
    if (plVar6 != (int64_t *)0x0) {
      (**(code **)(*plVar6 + 0x360))();
      cVar4 = FUN_00e85ea0();
      plVar1 = local_30;
      plVar2 = g_02802688;
      if (cVar4 != '\0') {
        plVar2 = local_30;
      }
    }
    local_30 = plVar1;
    if ((plVar2 != (int64_t *)0x0) && (plVar6 = *(int64_t **)(this_ptr + 0x38), plVar6 != plVar1)
       ) {
      if (plVar1 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      *(int64_t **)(this_ptr + 0x38) = plVar1;
      if (plVar6 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
    }
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  local_50 = *arg1;
  local_48 = '\0';
  FUN_00d61ea0();
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 01e03570
// ============================================================
// Function: FUN_01e03570
// Address: 01e03570
// Size: 904 bytes
// Class: GNDictionary
// String references:
//   "%@%I"

void FUN_01e03570(void)

{
  int64_t lVar1;
  int64_t *arg1;
  int64_t this_ptr;
  int64_t local_d8;
  char local_d0;
  int64_t local_c8;
  char local_c0;
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
  int64_t *local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  if (*(int64_t *)(this_ptr + 0x40) != 0) {
    FUN_00d4efa0();
    FUN_00c82bb0();
    lVar1 = *(int64_t *)(*(int64_t *)(this_ptr + 0x40) + 0x138);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    FUN_00d50b00();
    FUN_00d237a0();
    if (local_d8 != 0) {
      FUN_00d50b00();
    }
    FUN_00d8cb40();
    local_40 = local_60;
    local_38 = 0;
    if (local_58 == '\0') {
      if (local_60 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_58 = '\0';
    }
    local_38 = '\x01';
    FUN_00e3f850();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if (local_d8 != 0) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if ((local_d0 != '\0') && (local_d8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_c0 != '\0') && (local_c8 != 0)) {
      FUN_00d50b20();
    }
    if ((*(char *)(this_ptr + 0x18) != '\0') && (*(int64_t *)(this_ptr + 0x28) != 0)) {
      FUN_00d50b00();
      FUN_00d50b20();
      local_48 = 0;
      (**(code **)(*(int64_t *)(this_ptr + 0x10) + 0x10))();
      FUN_00d50b00();
      local_a0 = g_027f2f40;
      local_48 = '\x01';
      local_50 = (int64_t *)(this_ptr + 0x10);
      if (g_027f2f40 != 0) {
        FUN_00d50b00();
      }
      local_98 = '\x01';
      lVar1 = *(int64_t *)(this_ptr + 0x28);
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      local_88 = '\x01';
      local_90 = lVar1;
      FUN_00e3fb50(&local_90,&local_a0);
      if ((local_88 != '\0') && (local_90 != 0)) {
        FUN_00d50b20();
      }
      if ((local_98 != '\0') && (local_a0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
        (**(code **)(*local_50 + 0x10))();
        FUN_00d50b20();
      }
    }
    lVar1 = g_027f2f48;
    if (*(int64_t *)(this_ptr + 0x20) != 0) {
      if (g_027f2f48 != 0) {
        FUN_00d50b00();
      }
      local_80 = lVar1;
      local_78 = '\x01';
      FUN_00e3f850();
      if ((local_78 != '\0') && (local_80 != 0)) {
        FUN_00d50b20();
      }
      local_70 = *arg1;
      local_68 = '\0';
      (**(code **)(**(int64_t **)(this_ptr + 0x20) + 0x800))();
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      FUN_00e3faa0();
    }
    FUN_00e3faa0();
  }
  return;
}



// ============================================================
// 01de4210
// ============================================================
// Function: FUN_01de4210
// Address: 01de4210
// Size: 679 bytes
// Class: GNDictionary

int64_t * FUN_01de4210(uint64_t param_1)

{
  int64_t lVar1;
  int iVar2;
  int64_t lVar3;
  int64_t *plVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  uint64_t uVar8;
  int iVar9;
  uint64_t uVar10;
  int64_t *arg1;
  int64_t *this_ptr;
  float fVar11;
  int64_t local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  int64_t local_40;
  char local_38;
  
  fVar11 = (float)((uint64_t)param_1 >> 0x20);
  if (arg1[0x3e] != 0) {
    iVar6 = FUN_01dd3800();
    if (*(char *)((int64_t)arg1 + 0x279) == '\0') {
      fVar11 = fVar11 / (*(float *)(arg1 + 0x2d) + *(float *)((int64_t)arg1 + 0x174));
      iVar9 = -1;
      if ((0.0 <= fVar11) && (fVar11 < (float)(int)arg1[0x30])) {
        iVar9 = (int)fVar11;
      }
    }
    else {
      iVar9 = -1;
      if ((0.0 <= fVar11) && (lVar3 = arg1[0x52], lVar3 != 0)) {
        iVar2 = *(int *)(lVar3 + 0x18);
        iVar7 = iVar2 + 3;
        if (-1 < iVar2) {
          iVar7 = iVar2;
        }
        uVar10 = 0;
        uVar8 = (uint64_t)(uint)(iVar7 >> 2);
        if (iVar7 >> 2 < 1) {
          uVar8 = uVar10;
        }
        do {
          if (uVar8 == uVar10) goto LAB_01de42f1;
          lVar1 = uVar10 * 4;
          uVar10 = uVar10 + 1;
        } while (*(float *)(*(int64_t *)(lVar3 + 0x10) + lVar1) <= fVar11);
        iVar9 = (int)uVar10 + -1;
      }
    }
LAB_01de42f1:
    if (iVar6 == -1) {
      plVar4 = (int64_t *)arg1[0x3e];
      FUN_00d50b00();
      local_70 = 0;
      local_68 = '\0';
      (**(code **)(*plVar4 + 0x80))(iVar9,&stack0xffffffffffffffb0,&local_70);
      if (local_40 == 0) {
        local_40 = 0;
        bVar5 = false;
      }
      else if (local_38 == '\0') {
        FUN_00d50b00();
        bVar5 = true;
      }
      else {
        bVar5 = true;
      }
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      if (arg1 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
    }
    else {
      plVar4 = (int64_t *)arg1[0x3e];
      FUN_00d50b00();
      local_80 = *(int64_t *)(*(int64_t *)(arg1[0x2c] + 0x10) + (int64_t)iVar6 * 8);
      if (local_80 != 0) {
        FUN_00d50b00();
      }
      local_78 = '\x01';
      (**(code **)(*plVar4 + 0x80))(iVar9,&stack0xffffffffffffffa0,&local_80);
      if (local_40 == 0) {
        local_40 = 0;
        bVar5 = false;
      }
      else if (local_38 == '\0') {
        FUN_00d50b00();
        bVar5 = true;
      }
      else {
        bVar5 = true;
      }
      if ((local_78 != '\0') && (local_80 != 0)) {
        FUN_00d50b20();
      }
      if (arg1 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
    }
    if (local_40 != 0) {
      *(void*)(this_ptr + 1) = 0;
      if (!bVar5) {
        FUN_00d50b00();
      }
      *this_ptr = local_40;
      *(void*)(this_ptr + 1) = 1;
      return this_ptr;
    }
  }
  (**(code **)(*arg1 + 0x6f0))();
  return this_ptr;
}



// ============================================================
// 015abbd0
// ============================================================
// Function: FUN_015abbd0
// Address: 015abbd0
// Size: 607 bytes
// Class: GNDictionary
// String references:
//   "GNDictionary"

void FUN_015abbd0(uint64_t param_1,int64_t *param_2)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int64_t *plVar5;
  int64_t arg1;
  void*this_ptr;
  int64_t **pplVar6;
  uint32_t uVar7;
  uint32_t extraout_XMM0_Da;
  uint32_t extraout_XMM0_Da_00;
  int64_t *local_90;
  uint8_t local_88;
  int64_t local_80;
  char local_78;
  int64_t *local_60;
  char local_58;
  int64_t *local_40;
  char local_38;
  
  plVar5 = (int64_t *)FUN_00e8fc40();
  FUN_000649c0();
  (**(code **)(*plVar5 + 0x18))();
  local_58 = 0;
  (**(code **)(*(int64_t *)(arg1 + 0x10) + 0x10))();
  FUN_00d50b00();
  local_58 = '\x01';
  local_60 = (int64_t *)(arg1 + 0x10);
  uVar7 = FUN_00db1a90();
  if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
    (**(code **)(*local_60 + 0x10))();
    uVar7 = FUN_00d50b20();
  }
  local_80 = *param_2;
  local_78 = '\0';
  pplVar6 = &local_40;
  uVar7 = (**(code **)(*plVar5 + 0x610))(uVar7,&local_80);
  plVar5 = local_40;
  if ((g_026fdd40 == '\0') &&
     (iVar4 = ___cxa_guard_acquire(), uVar7 = extraout_XMM0_Da_00, iVar4 != 0)) {
    g_026cd0e8 = FUN_00d4fe50();
    g_026cd0d0 = "GNDictionary";
    g_026cd0d8 = 0x28;
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
    uVar7 = ___cxa_guard_release();
  }
  if (plVar5 != (int64_t *)0x0) {
    (**(code **)(*plVar5 + 0x360))();
    cVar3 = FUN_00e85ea0();
    uVar7 = extraout_XMM0_Da;
    if (cVar3 != '\0') goto LAB_015abcb4;
  }
  pplVar6 = (int64_t **)&g_02802688;
LAB_015abcb4:
  plVar5 = *pplVar6;
  if (plVar5 == (int64_t *)0x0) {
    bVar2 = true;
    bVar1 = true;
    plVar5 = (int64_t *)0x0;
  }
  else {
    if (*(char *)(pplVar6 + 1) == '\0') {
      uVar7 = FUN_00d50b00();
    }
    else {
      *(void*)(pplVar6 + 1) = 0;
    }
    bVar2 = false;
    bVar1 = false;
  }
  if ((local_38 != '\0') && (bVar1 = bVar2, local_40 != (int64_t *)0x0)) {
    uVar7 = FUN_00d50b20();
  }
  if ((local_78 != '\0') && (local_80 != 0)) {
    uVar7 = FUN_00d50b20();
  }
  if (plVar5 == (int64_t *)0x0) {
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
  }
  else {
    local_88 = 0;
    local_90 = plVar5;
    FUN_0159aa90(uVar7,&local_90);
    if (!bVar1) {
      FUN_00d50b20();
    }
  }
  FUN_00d50b20();
  return;
}



// ============================================================
// 01cc98b0
// ============================================================
// Function: FUN_01cc98b0
// Address: 01cc98b0
// Size: 597 bytes
// Class: GNDictionary

int64_t * FUN_01cc98b0(void)

{
  int64_t lVar1;
  int64_t *plVar2;
  char cVar3;
  int64_t lVar4;
  uint64_t uVar5;
  char *pcVar6;
  int64_t arg1;
  int64_t *this_ptr;
  int64_t lVar7;
  int64_t local_58;
  char local_50 [8];
  int64_t local_48;
  uint64_t local_40;
  char local_38 [8];
  
  lVar4 = *(int64_t *)(arg1 + 0x10);
  if ((*(int *)(lVar4 + 0xc) == 0) && (*(int64_t *)(arg1 + 0x38) != 0)) {
    FUN_00ca1380();
    pcVar6 = local_38;
    if (local_50[0] != '\0') {
      pcVar6 = local_50;
    }
    local_38[0] = local_50[0];
    *pcVar6 = '\0';
    if ((local_50[0] != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if (local_38[0] == '\0') {
      if (local_58 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38[0] = '\0';
    }
    local_50[0] = '\0';
    FUN_00d243f0();
    if ((local_50[0] != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if (local_58 != 0) {
      FUN_00d50b20();
    }
    lVar4 = *(int64_t *)(arg1 + 0x10);
  }
  if (*(int *)(lVar4 + 0xc) < 1) {
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
  }
  else {
    lVar7 = 0;
    local_48 = 0;
    local_40 = 0;
    do {
      lVar4 = *(int64_t *)(lVar4 + 0x10);
      lVar1 = *(int64_t *)(lVar4 + lVar7 * 8);
      if (local_48 == lVar1) {
        if (((char)local_40 == '\0') && (local_48 != 0)) {
          local_40 = CONCAT71((int7)((uint64_t)lVar4 >> 8),1);
          FUN_00d50b00();
        }
      }
      else {
        if (lVar1 != 0) {
          lVar4 = FUN_00d50b00();
        }
        if (((char)local_40 == '\0') || (local_48 == 0)) {
          local_40 = CONCAT71((int7)((uint64_t)lVar4 >> 8),1);
          local_48 = lVar1;
        }
        else {
          local_48 = lVar1;
          uVar5 = FUN_00d50b20();
          local_40 = CONCAT71((int7)((uint64_t)uVar5 >> 8),1);
        }
      }
      if (*(int64_t *)(local_48 + 0x18) != 0) {
        FUN_00d50b00();
        plVar2 = *(int64_t **)(local_48 + 0x18);
        if (plVar2 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        cVar3 = (**(code **)(*plVar2 + 0x50))();
        FUN_00d50b20();
        FUN_00d50b20();
        lVar4 = local_48;
        if (cVar3 != '\0') {
          *(void*)(this_ptr + 1) = 0;
          if ((char)local_40 != '\0') {
            *this_ptr = local_48;
            *(void*)(this_ptr + 1) = 1;
            return this_ptr;
          }
          FUN_00d50b00();
          *this_ptr = lVar4;
          *(void*)(this_ptr + 1) = 1;
          return this_ptr;
        }
      }
      lVar7 = lVar7 + 1;
      lVar4 = *(int64_t *)(arg1 + 0x10);
    } while (lVar7 < *(int *)(lVar4 + 0xc));
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
    if ((char)local_40 != '\0') {
      FUN_00d50b20();
    }
  }
  return this_ptr;
}



// ============================================================
// 01db9210
// ============================================================
// Function: FUN_01db9210
// Address: 01db9210
// Size: 543 bytes
// Class: GNDictionary

void FUN_01db9210(void)

{
  void*puVar1;
  int64_t lVar2;
  void*puVar3;
  int64_t this_ptr;
  int64_t lVar4;
  
  FUN_00d50100();
  *(void*)(this_ptr + 0x28) = 0x44fa000042c80000;
  *(void*)(this_ptr + 0x30) = 0x41a00000;
  *(void*)(this_ptr + 0x54) = 0;
  puVar3 = (void*)FUN_00e8fc40();
  FUN_0006daf0();
  *(void*)(puVar3 + 0x27) = 0;
  puVar3[0x2e] = 0;
  *(void*)(puVar3 + 0x2f) = 0;
  puVar3[0x30] = 0;
  *(void*)(puVar3 + 0x31) = 0;
  puVar3[0x28] = 0;
  puVar3[0x29] = 0;
  *(void*)(puVar3 + 0x2a) = 0;
  puVar3[0x2b] = 0;
  puVar3[0x2c] = 0;
  *(void*)((int64_t)puVar3 + 0x165) = 0;
  *(void*)((int64_t)puVar3 + 0x18c) = 0;
  *(void*)((int64_t)puVar3 + 0x194) = 0;
  *(void*)((int64_t)puVar3 + 0x199) = 0;
  puVar3[0x35] = 0;
  puVar3[0x36] = 0;
  puVar3[0x37] = 0;
  puVar3[0x38] = 0;
  *puVar3 = &g_02696d30;
  puVar3[2] = &g_026977f8;
  (*g_02696d48)();
  puVar1 = *(void**)(this_ptr + 0x18);
  if (puVar1 == puVar3) {
    FUN_00d50b20();
  }
  else {
    *(void**)(this_ptr + 0x18) = puVar3;
    if (puVar1 != (void*)0x0) {
      FUN_00d50b20();
    }
  }
  puVar3 = (void*)FUN_00e8fc40();
  FUN_0006daf0();
  *(void*)(puVar3 + 0x27) = 0;
  puVar3[0x2e] = 0;
  *(void*)(puVar3 + 0x2f) = 0;
  puVar3[0x30] = 0;
  *(void*)(puVar3 + 0x31) = 0;
  puVar3[0x28] = 0;
  puVar3[0x29] = 0;
  *(void*)(puVar3 + 0x2a) = 0;
  puVar3[0x2b] = 0;
  puVar3[0x2c] = 0;
  *(void*)((int64_t)puVar3 + 0x165) = 0;
  *(void*)((int64_t)puVar3 + 0x18c) = 0;
  *(void*)((int64_t)puVar3 + 0x194) = 0;
  *(void*)((int64_t)puVar3 + 0x199) = 0;
  puVar3[0x35] = 0;
  puVar3[0x36] = 0;
  puVar3[0x37] = 0;
  puVar3[0x38] = 0;
  *puVar3 = &g_02692838;
  puVar3[2] = &g_02693308;
  puVar3[0x39] = 0;
  (*g_02692850)();
  puVar1 = *(void**)(this_ptr + 0x20);
  if (puVar1 == puVar3) {
    FUN_00d50b20();
  }
  else {
    *(void**)(this_ptr + 0x20) = puVar3;
    if (puVar1 != (void*)0x0) {
      FUN_00d50b20();
    }
  }
  *(void*)(this_ptr + 0x59) = 1;
  lVar2 = g_027f29e0;
  if (g_027f29e0 == 0) {
    lVar4 = *(int64_t *)(this_ptr + 0x48);
    if (lVar4 == 0) {
      return;
    }
  }
  else {
    FUN_00d50b00();
    lVar4 = *(int64_t *)(this_ptr + 0x48);
    if (lVar4 == lVar2) {
      FUN_00d50b20();
      return;
    }
  }
  *(int64_t *)(this_ptr + 0x48) = lVar2;
  if (lVar4 == 0) {
    return;
  }
  FUN_00d50b20();
  return;
}



// ============================================================
// 01cca7a0
// ============================================================
// Function: FUN_01cca7a0
// Address: 01cca7a0
// Size: 612 bytes
// Class: GNDictionary

void FUN_01cca7a0(void)

{
  int64_t lVar1;
  char unaff_SIL;
  int64_t this_ptr;
  uint64_t uVar2;
  
  lVar1 = *(int64_t *)(this_ptr + 0x10);
  if (0 < *(int *)(lVar1 + 0xc)) {
    uVar2 = (uint64_t)(*(int *)(lVar1 + 0xc) - 1);
    if (unaff_SIL == '\0') {
      lVar1 = *(int64_t *)(*(int64_t *)(lVar1 + 0x10) + uVar2 * 8);
      while( true ) {
        if (lVar1 != 0) {
          FUN_00d50b00();
        }
        if (*(int64_t *)(lVar1 + 0x28) != 0) {
          FUN_00d50b00();
          FUN_01d261f0();
          if (this_ptr != 0) {
            FUN_00d50b20();
          }
          *(void*)(lVar1 + 0x28) = 0;
          if (*(int64_t *)(lVar1 + 0x10) != 0) {
            *(void*)(lVar1 + 0x10) = 0;
            FUN_00d50b20();
          }
          *(void*)(lVar1 + 0x30) = 0xffffffff;
          if (*(int64_t *)(lVar1 + 0x18) != 0) {
            *(void*)(lVar1 + 0x18) = 0;
            FUN_00d50b20();
          }
        }
        FUN_00d50b20();
        if ((int64_t)uVar2 < 1) break;
        uVar2 = uVar2 - 1;
        lVar1 = *(int64_t *)(*(int64_t *)(*(int64_t *)(this_ptr + 0x10) + 0x10) + uVar2 * 8);
      }
    }
    else {
      lVar1 = *(int64_t *)(*(int64_t *)(lVar1 + 0x10) + uVar2 * 8);
      while( true ) {
        if (lVar1 != 0) {
          FUN_00d50b00();
        }
        if (*(int64_t *)(lVar1 + 0x28) != 0) {
          FUN_00d50b00();
          FUN_01d262d0();
          if (this_ptr != 0) {
            FUN_00d50b20();
          }
          FUN_00d64850();
          *(void*)(lVar1 + 0x28) = 0;
          FUN_00d64910();
          FUN_00d64850();
          if (*(int64_t *)(lVar1 + 0x10) != 0) {
            *(int64_t *)(lVar1 + 0x10) = 0;
            FUN_00d50b20();
          }
          *(void*)(lVar1 + 0x30) = 0xffffffff;
          FUN_00d64910();
          FUN_00d64850();
          if (*(int64_t *)(lVar1 + 0x18) != 0) {
            *(int64_t *)(lVar1 + 0x18) = 0;
            FUN_00d50b20();
          }
          FUN_00d64910();
        }
        FUN_00d50b20();
        if ((int64_t)uVar2 < 1) break;
        uVar2 = uVar2 - 1;
        lVar1 = *(int64_t *)(*(int64_t *)(*(int64_t *)(this_ptr + 0x10) + 0x10) + uVar2 * 8);
      }
    }
  }
  if (unaff_SIL == '\0') {
    FUN_00d216c0();
  }
  else {
    FUN_00d64850();
    FUN_00d216c0();
    FUN_00d64910();
  }
  return;
}



// ============================================================
// 01f61ce0
// ============================================================
// Function: FUN_01f61ce0
// Address: 01f61ce0
// Size: 511 bytes
// Class: GNDictionary
// String references:
//   "(%@ *)%p"

void FUN_01f61ce0(void*param_1)

{
  int64_t lVar1;
  void*puVar2;
  int64_t *this_ptr;
  uint64_t local_b0;
  uint8_t local_a8;
  int64_t local_a0;
  uint8_t local_98;
  int64_t local_90;
  int64_t local_88;
  int64_t local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  void*local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  int64_t local_30;
  char local_28;
  
  local_b0 = *param_1;
  local_a8 = 0;
  FUN_01f618c0(param_1,&local_b0);
  if (local_48 == '\0') {
    if (local_50 != (void*)0x0) {
      FUN_00d50b00();
      goto LAB_01f61d3c;
    }
  }
  else if (local_50 != (void*)0x0) {
LAB_01f61d3c:
    local_a0 = (int64_t)local_50;
    local_98 = 0;
    FUN_01f5f5b0();
    FUN_00c7e7b0();
    local_90 = local_80;
    local_88 = (int64_t)local_50;
    FUN_00083ea0(2,&local_88);
    FUN_00d8cb40();
    lVar1 = local_60;
    *(void*)(this_ptr + 1) = 0;
    if (local_58 == '\0') {
      if (local_60 == 0) {
        *this_ptr = 0;
        *(void*)(this_ptr + 1) = 1;
      }
      else {
        FUN_00d50b00();
        *this_ptr = lVar1;
        *(void*)(this_ptr + 1) = 1;
        if ((local_58 != '\0') && (local_60 != 0)) {
          FUN_00d50b20();
        }
      }
    }
    else {
      *this_ptr = local_60;
      *(void*)(this_ptr + 1) = 1;
      local_58 = '\0';
    }
    local_50 = (void*)&g_0253d630;
    if ((local_28 != '\0') && (local_30 != 0)) {
      FUN_00d50b20();
    }
    local_50 = &g_024c5048;
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
    return;
  }
  FUN_00d8ede0();
  puVar2 = local_50;
  *(void*)(this_ptr + 1) = 0;
  if (local_48 == '\0') {
    if (local_50 != (void*)0x0) {
      FUN_00d50b00();
      *this_ptr = (int64_t)puVar2;
      *(void*)(this_ptr + 1) = 1;
      if (local_48 == '\0') {
        return;
      }
      if (local_50 == (void*)0x0) {
        return;
      }
      FUN_00d50b20();
      return;
    }
    local_50 = (void*)0x0;
  }
  *this_ptr = (int64_t)local_50;
  *(void*)(this_ptr + 1) = 1;
  return;
}



// ============================================================
// 01e02bc0
// ============================================================
// Function: FUN_01e02bc0
// Address: 01e02bc0
// Size: 517 bytes
// Class: GNDictionary
// String references:
//   "GNDictionary"

void FUN_01e02bc0(void)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t lVar3;
  char cVar4;
  int iVar5;
  int64_t *plVar6;
  int64_t *arg1;
  uint32_t extraout_XMM0_Da;
  uint32_t uVar7;
  int64_t local_48;
  char local_40;
  int64_t local_38;
  char local_30;
  
  plVar6 = (int64_t *)*arg1;
  if (plVar6 != (int64_t *)0x0) {
    if ((g_026fdd40 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
      g_026cd0e8 = FUN_00d4fe50();
      g_026cd0d0 = "GNDictionary";
      g_026cd0d8 = 0x28;
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
      ___cxa_guard_release();
    }
    (**(code **)(*plVar6 + 0x360))();
    cVar4 = FUN_00e85ea0();
    plVar6 = arg1;
    if (cVar4 == '\0') {
      plVar6 = &g_02802688;
    }
    if (*plVar6 != 0) {
      lVar1 = *arg1;
      lVar2 = arg1[1];
      uVar7 = extraout_XMM0_Da;
      if (((char)lVar2 != '\0') && (lVar1 != 0)) {
        uVar7 = FUN_00d50b00();
      }
      lVar3 = g_027f2f38;
      if (g_027f2f38 != 0) {
        uVar7 = FUN_00d50b00();
      }
      local_48 = lVar3;
      local_40 = '\x01';
      FUN_000175c0(uVar7,&local_48);
      lVar3 = local_38;
      if (local_30 == '\0') {
        if (((local_38 != 0) && (FUN_00d50b00(), local_30 != '\0')) && (local_38 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_30 = '\0';
      }
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if (lVar3 != 0) {
        FUN_00d45870();
        FUN_01e00d40();
        FUN_00d50b20();
      }
      if (((char)lVar2 != '\0') && (lVar1 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  return;
}



// ============================================================
// 01de4c40
// ============================================================
// Function: FUN_01de4c40
// Address: 01de4c40
// Size: 547 bytes
// Class: GNDictionary

uint32_t FUN_01de4c40(void)

{
  int iVar1;
  bool bVar2;
  int64_t lVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint64_t uVar7;
  uint uVar8;
  int64_t *this_ptr;
  uint32_t uVar9;
  uint32_t extraout_XMM0_Da;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  FUN_01d384c0();
  uVar9 = FUN_01e437f0();
  iVar4 = (**(code **)(*this_ptr + 0x9d8))(uVar9);
  local_60 = g_027f2a60;
  uVar9 = extraout_XMM0_Da;
  if (g_027f2a60 != 0) {
    uVar9 = FUN_00d50b00();
  }
  local_58 = '\x01';
  FUN_000175c0(uVar9,&local_60);
  lVar3 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  bVar2 = **(int **)(lVar3 + 0x10) < iVar4;
  local_50 = lVar3;
  local_48 = '\0';
  uVar9 = (**(code **)(*(int64_t *)this_ptr[0x3f] + 0x38))(bVar2,iVar4 - (uint)bVar2);
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((char)uVar9 != '\0') {
    uVar8 = *(uint *)(lVar3 + 0x18);
    uVar7 = (uint64_t)uVar8;
    uVar5 = uVar8 + 3;
    if (-1 < (int)uVar8) {
      uVar5 = uVar8;
    }
    if (3 < (int)uVar8) {
      uVar5 = (int)uVar5 >> 2;
      uVar7 = *(uint64_t *)(lVar3 + 0x10);
      if (uVar5 - 1 < 3) {
        uVar8 = 0;
      }
      else {
        uVar8 = 0;
        do {
          uVar8 = uVar8 + 4;
        } while ((uVar5 & 0xfffffffc) != uVar8);
      }
      if ((uVar5 & 3) != 0) {
        uVar7 = uVar7 + (uint64_t)uVar8 * 4;
        uVar8 = 0;
        do {
          uVar8 = uVar8 + 1;
        } while ((uVar5 & 3) != uVar8);
      }
    }
    if (3 < *(int *)(lVar3 + 0x18)) {
      iVar4 = 0;
      do {
        FUN_01dd3d20(uVar7,iVar4 != 0);
        iVar4 = iVar4 + 1;
        iVar1 = *(int *)(lVar3 + 0x18);
        iVar6 = iVar1 + 3;
        if (-1 < iVar1) {
          iVar6 = iVar1;
        }
        uVar7 = (uint64_t)(uint)(iVar6 >> 2);
      } while (iVar4 < iVar6 >> 2);
    }
  }
  FUN_00d50b20();
  return uVar9;
}



// ============================================================
// 01de4620
// ============================================================
// Function: FUN_01de4620
// Address: 01de4620
// Size: 527 bytes
// Class: GNDictionary

void FUN_01de4620(uint64_t param_1)

{
  int64_t lVar1;
  int64_t *plVar2;
  int64_t local_78;
  char local_70;
  int64_t local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  char local_40;
  int64_t local_38;
  char local_30;
  
  plVar2 = (int64_t *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar2 + 0x18))();
  FUN_00dd6a00();
  local_68 = local_58;
  local_60 = 0;
  lVar1 = g_027f2a38;
  if (local_50 == '\0') {
    if (local_58 != 0) {
      FUN_00d50b00();
      lVar1 = g_027f2a38;
    }
  }
  else {
    local_50 = '\0';
  }
  local_60 = '\x01';
  g_027f2a38 = lVar1;
  if (lVar1 != 0) {
    local_60 = '\x01';
    FUN_00d50b00();
  }
  local_30 = '\0';
  local_38 = lVar1;
  FUN_00ca0840(param_1,&local_38);
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  FUN_01dd4960();
  local_40 = 0;
  lVar1 = g_027f2a60;
  if (local_50 == '\0') {
    if (local_58 != 0) {
      FUN_00d50b00();
      lVar1 = g_027f2a60;
    }
  }
  else {
    local_50 = '\0';
  }
  local_40 = '\x01';
  local_48 = local_58;
  g_027f2a60 = lVar1;
  if (lVar1 != 0) {
    local_40 = '\x01';
    FUN_00d50b00();
  }
  local_30 = '\0';
  local_38 = lVar1;
  FUN_00ca0840(param_1,&local_38);
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  lVar1 = g_027f29d0;
  if (g_027f29d0 != 0) {
    FUN_00d50b00();
  }
  local_78 = lVar1;
  local_70 = '\x01';
  FUN_01ca93d0(param_1,&local_78);
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}



// ============================================================
// 01db8bf0
// ============================================================
// Function: FUN_01db8bf0
// Address: 01db8bf0
// Size: 676 bytes
// Class: GNDictionary

void FUN_01db8bf0(uint64_t param_1,uint32_t param_2)

{
  int64_t *plVar1;
  int64_t *plVar2;
  char cVar3;
  uint8_t uVar4;
  uint32_t uVar5;
  int64_t *this_ptr;
  uint32_t uVar6;
  uint32_t uVar7;
  uint32_t extraout_XMM0_Dc;
  int64_t local_78;
  char local_70;
  int64_t local_50;
  char local_48;
  int64_t *local_40;
  char local_38;
  
  cVar3 = FUN_01e420b0();
  if (cVar3 != '\0') {
    (**(code **)(*this_ptr + 0x878))();
  }
  (**(code **)(*this_ptr + 0x640))();
  plVar1 = local_40;
  if ((((local_38 == '\0') && (local_40 != (int64_t *)0x0)) && (FUN_00d50b00(), local_38 != '\0'))
     && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  uVar6 = FUN_01e3f820();
  uVar7 = extraout_XMM0_Dc;
  uVar5 = (**(code **)(*this_ptr + 0x920))();
  uVar4 = (**(code **)(*this_ptr + 0x9a0))();
  (**(code **)(*this_ptr + 0xa70))();
  (**(code **)(*plVar1 + 0x3f0))(uVar6,2,uVar5,uVar4,uVar6,uVar7);
  uVar7 = FUN_01e3f820();
  (**(code **)(*this_ptr + 0x960))();
  plVar2 = local_40;
  if (local_38 == '\0') {
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  (**(code **)(*this_ptr + 0x9e0))();
  local_48 = 0;
  if (local_70 == '\0') {
    if (local_78 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_70 = '\0';
  }
  local_48 = '\x01';
  local_50 = local_78;
  (**(code **)(*this_ptr + 0x9a0))();
  (**(code **)(*this_ptr + 0xa70))();
  (**(code **)(*plVar1 + 0x400))(uVar7,param_2,&local_50,0);
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  if (plVar2 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}



// ============================================================
// 01e05490
// ============================================================
// Function: FUN_01e05490
// Address: 01e05490
// Size: 516 bytes
// Class: GNDictionary

void FUN_01e05490(void)

{
  int64_t lVar1;
  int64_t lVar2;
  char cVar3;
  char cVar4;
  int64_t *this_ptr;
  uint64_t local_88;
  uint8_t local_80;
  uint64_t local_38;
  uint8_t local_30;
  
  FUN_00d3ecc0();
  lVar1 = g_027f0e40;
  if (g_027f0e40 != 0) {
    FUN_00d50b00();
  }
  cVar3 = (**(code **)(*local_38 + 0x50))();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar3 == '\0') {
    FUN_00d3ecc0();
    lVar1 = g_027f32f0;
    if (g_027f32f0 != 0) {
      FUN_00d50b00();
    }
    cVar3 = (**(code **)(*local_38 + 0x50))();
    cVar4 = '\x01';
    if (cVar3 == '\0') {
      FUN_00d3ecc0();
      lVar2 = g_027f32f8;
      if (g_027f32f8 != 0) {
        FUN_00d50b00();
      }
      cVar4 = (**(code **)(*local_88 + 0x50))();
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      if ((local_80 != '\0') && (local_88 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (cVar4 == '\0') {
      FUN_00d530a0();
    }
    else {
      cVar3 = (**(code **)(*this_ptr + 0xac8))();
      if (cVar3 != '\0') {
        FUN_00d50b00();
        FUN_01e057f0();
        FUN_01e40eb0();
        if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (local_38 != (int64_t *)0x0) {
          (**(code **)(*this_ptr + 0xab8))();
        }
        FUN_00d50b20();
      }
    }
  }
  else {
    cVar3 = (**(code **)(*this_ptr + 0xac8))();
    if (cVar3 != '\0') {
      FUN_01e057f0();
    }
  }
  return;
}



// ============================================================
// 019ec4c0
// ============================================================
// Function: FUN_019ec4c0
// Address: 019ec4c0
// Size: 507 bytes
// Class: GNDictionary

uint64_t FUN_019ec4c0(uint64_t param_1,char param_2)

{
  int64_t lVar1;
  uint32_t uVar2;
  uint uVar3;
  uint64_t uVar4;
  int64_t *this_ptr;
  int64_t local_90;
  char local_88;
  int64_t local_40;
  char local_38;
  
  lVar1 = g_027e14b0;
  if (((char)this_ptr[0x88] == '\0') && ((int64_t *)this_ptr[0x87] != (int64_t *)0x0)) {
    *(void*)(this_ptr + 0x88) = 1;
    uVar3 = (**(code **)(*(int64_t *)this_ptr[0x87] + 0x3b8))(param_1,param_2);
    uVar4 = (uint64_t)uVar3;
    *(void*)(this_ptr + 0x88) = 0;
  }
  else {
    if (g_027e14b0 != 0) {
      FUN_00d50b00();
    }
    FUN_01cae990();
    uVar2 = FUN_00d90870();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if ((char)uVar2 == '\0') {
      uVar3 = FUN_01e47f50(param_1,param_2);
      uVar4 = (uint64_t)uVar3;
    }
    else {
      uVar4 = CONCAT71((uint7)(uint3)((uint)uVar2 >> 8),1);
      if (param_2 != '\0') {
        FUN_01cae990();
        uVar2 = FUN_00d8c7a0();
        FUN_00d8f140(param_1,uVar2);
        if (local_38 == '\0') {
          if (local_40 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        (**(code **)(&UNK_00001610 + *this_ptr))();
        uVar4 = CONCAT71((int7)((uint64_t)local_40 >> 8),1);
        if (local_40 != 0) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if ((local_88 != '\0') && (local_90 != 0)) {
          FUN_00d50b20();
        }
      }
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  return uVar4 & 0xffffffff;
}



// ============================================================
// 01de5660
// ============================================================
// Function: FUN_01de5660
// Address: 01de5660
// Size: 577 bytes
// Class: GNDictionary
// String references:
//   "%@%I"

void FUN_01de5660(void)

{
  uint uVar1;
  int64_t lVar2;
  int64_t this_ptr;
  uint64_t uVar3;
  int64_t local_98;
  char local_90;
  int64_t local_88;
  char local_80;
  int64_t local_58;
  char local_50;
  
  uVar1 = *(uint *)(*(int64_t *)(this_ptr + 0x160) + 0xc);
  if (0 < (int)uVar1) {
    uVar3 = 1;
    lVar2 = **(int64_t **)(*(int64_t *)(this_ptr + 0x160) + 0x10);
    while( true ) {
      if (lVar2 != 0) {
        FUN_00d50b00();
      }
      FUN_00d4efa0();
      FUN_00c82bb0();
      if (local_98 != 0) {
        FUN_00d50b00();
      }
      FUN_00d8cb40();
      if (local_50 == '\0') {
        if (local_58 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_50 = '\0';
      }
      FUN_00e3f850();
      if (local_58 != 0) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if (local_98 != 0) {
        FUN_00d50b20();
      }
      if ((local_90 != '\0') && (local_98 != 0)) {
        FUN_00d50b20();
      }
      if ((local_80 != '\0') && (local_88 != 0)) {
        FUN_00d50b20();
      }
      (**(code **)(**(int64_t **)
                     (*(int64_t *)(*(int64_t *)(this_ptr + 0x160) + 0x10) + -8 + uVar3 * 8) +
                  0x370))();
      FUN_00e3faa0();
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      if (uVar1 == uVar3) break;
      uVar3 = uVar3 + 1;
      lVar2 = *(int64_t *)(*(int64_t *)(*(int64_t *)(this_ptr + 0x160) + 0x10) + -8 + uVar3 * 8)
      ;
    }
  }
  return;
}



// ============================================================
// 00ca0840
// ============================================================
// Function: FUN_00ca0840
// Address: 00ca0840
// Size: 546 bytes
// Class: GNDictionary

void FUN_00ca0840(void)

{
  int64_t lVar1;
  char cVar2;
  int iVar3;
  int64_t *arg1;
  int64_t this_ptr;
  uint64_t local_c0;
  uint8_t local_b8;
  
  if ((*arg1 != 0) || (cVar2 = FUN_00d24990(), cVar2 != '\0')) {
    if (*(int64_t *)(this_ptr + 0x20) == 0) {
      iVar3 = FUN_00d237a0();
    }
    else {
      FUN_019a54a0();
      if ((local_b8 != '\0') && (local_c0 != 0)) {
        FUN_00d50b20();
      }
      if (local_c0 == 0) {
        iVar3 = -1;
      }
      else {
        iVar3 = FUN_00d237a0();
      }
      FUN_019b43b0();
    }
    if (iVar3 == -1) {
      FUN_00d21140();
      FUN_00d21140();
    }
    else {
      lVar1 = *(int64_t *)(*(int64_t *)(this_ptr + 0x18) + 0x10);
      if (*(int64_t *)(lVar1 + (int64_t)iVar3 * 8) != *arg1) {
        FUN_00d233f0(lVar1,iVar3);
      }
    }
  }
  return;
}

