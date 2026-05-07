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

