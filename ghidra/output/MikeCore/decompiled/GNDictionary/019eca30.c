// Function: FUN_019eca30
// Address: 019eca30
// Size: 7250 bytes
// Class: GNDictionary


/* WARNING: Removing unreachable block (ram,0x019ee166) */
/* WARNING: Removing unreachable block (ram,0x019ed889) */
/* WARNING: Removing unreachable block (ram,0x019ed895) */
/* WARNING: Removing unreachable block (ram,0x019ed34f) */
/* WARNING: Removing unreachable block (ram,0x019ed35b) */
/* WARNING: Removing unreachable block (ram,0x019ece2e) */
/* WARNING: Removing unreachable block (ram,0x019ece3a) */
/* WARNING: Removing unreachable block (ram,0x019ececf) */
/* WARNING: Removing unreachable block (ram,0x019ecedb) */
/* WARNING: Removing unreachable block (ram,0x019ee15a) */
/* WARNING: Removing unreachable block (ram,0x019ee224) */
/* WARNING: Removing unreachable block (ram,0x019ee230) */

ulonglong FUN_019eca30(longlong *param_1,longlong *param_2)

{
  double dVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  void *pvVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  pthread_key_t pVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong lVar14;
  undefined8 *in_RDX;
  longlong **pplVar15;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  ulonglong uVar16;
  byte bVar17;
  longlong *unaff_R14;
  undefined7 uVar18;
  undefined8 unaff_R15;
  bool bVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  longlong local_198;
  char local_190;
  longlong *local_188;
  char local_180;
  longlong local_178;
  char local_170;
  longlong *local_168;
  char local_160;
  longlong *local_158;
  char local_150;
  longlong *local_148;
  char local_140;
  undefined8 *local_138;
  char local_130;
  undefined8 *local_128;
  undefined8 *local_120;
  longlong local_118;
  char local_110;
  longlong *local_108;
  undefined8 local_100;
  longlong *local_f8;
  char local_f0;
  longlong *local_e8;
  char local_e0;
  longlong *local_d8;
  char local_d0;
  code *local_c8;
  longlong *local_c0;
  longlong *local_b8;
  longlong *local_b0;
  char local_a8;
  undefined8 local_a0;
  longlong *local_98;
  ulonglong local_90;
  longlong *local_78;
  longlong *local_70;
  longlong *local_68;
  char local_60 [8];
  longlong *local_58;
  undefined8 local_50;
  int local_48;
  longlong *local_40;
  char local_38;
  
  plVar12 = param_1;
  local_128 = in_RDX;
  (**(code **)(*unaff_RDI + 0x7b0))();
  if (local_60[0] == '\0') {
    if (local_68 != (longlong *)0x0) {
      local_108 = local_68;
      FUN_00d50b00();
      if ((local_60[0] != '\0') && (local_68 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_019ecaa9;
    }
  }
  else {
    local_108 = local_68;
    if (local_68 != (longlong *)0x0) {
LAB_019ecaa9:
      local_98 = param_1;
      if (*param_1 == 0) {
LAB_019ecb14:
        if (*unaff_RSI == 0) {
          (**(code **)(*unaff_RDI + 0xe88))();
          if (local_68 == (longlong *)0x0) {
            local_70 = (longlong *)0x0;
            uVar8 = 0;
          }
          else {
            local_70 = local_68;
            uVar18 = (undefined7)((ulonglong)unaff_R15 >> 8);
            if (local_60[0] == '\0') {
              FUN_00d50b00();
              uVar8 = CONCAT71(uVar18,1);
              if ((local_60[0] != '\0') && (local_68 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
            }
            else {
              local_60[0] = '\0';
              uVar8 = CONCAT71(uVar18,1);
            }
          }
LAB_019ece5a:
          pVar11 = (pthread_key_t)plVar12;
          local_a0 = uVar8;
          if (local_70 == (longlong *)0x0) {
            lVar6 = unaff_RDI[0x86];
            param_1 = local_98;
            goto joined_r0x019ece7a;
          }
LAB_019ed37a:
          uVar16 = 0;
          if (*unaff_RSI == 0) goto LAB_019ed38a;
          goto LAB_019ed49a;
        }
        (**(code **)(*unaff_RDI + 0xe10))();
        unaff_R14 = local_68;
        if (local_60[0] == '\0') {
          if (local_68 != (longlong *)0x0) {
            FUN_00d50b00();
            if ((local_60[0] != '\0') && (local_68 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            goto LAB_019ecc8e;
          }
        }
        else if (local_68 != (longlong *)0x0) {
LAB_019ecc8e:
          local_60[0] = '\0';
          local_68 = (longlong *)0x0;
          local_58 = unaff_R14;
          local_50 = 0xffffffff;
          local_48 = 0;
          while( true ) {
            lVar6 = (longlong)(int)local_50;
            iVar4 = (int)local_50 + 1;
            local_50 = CONCAT44(local_50._4_4_,iVar4);
            plVar12 = local_58;
            if (*(int *)((longlong)local_58 + 0xc) <= iVar4) break;
            plVar12 = (longlong *)local_58[2];
            local_68 = (longlong *)plVar12[lVar6 + 1];
            pvVar5 = _pthread_getspecific((pthread_key_t)plVar12);
            if (pvVar5 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_01264240();
            plVar10 = local_40;
            plVar13 = (longlong *)*unaff_RSI;
            if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if (plVar10 == plVar13) {
              if (local_68 != (longlong *)0x0) {
                local_70 = local_68;
                if (local_60[0] == '\0') {
                  FUN_00d50b00();
                }
                else {
                  local_60[0] = '\0';
                }
                uVar8 = CONCAT71((int7)((ulonglong)plVar13 >> 8),1);
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
          local_70 = (longlong *)0x0;
LAB_019ece49:
          FUN_001159b0();
          FUN_00d50b20();
          goto LAB_019ece5a;
        }
        uVar8 = 0;
        lVar6 = unaff_RDI[0x86];
joined_r0x019ece7a:
        if ((lVar6 != 0) && (*unaff_RSI == 0)) {
          FUN_00d50b00();
          FUN_019c1760();
          unaff_R14 = local_68;
          if ((local_60[0] == '\0') && (local_68 != (longlong *)0x0)) {
            FUN_00d50b00();
          }
          FUN_00d50b20();
          if (unaff_R14 != (longlong *)0x0) {
            if (*(int *)((longlong)unaff_R14 + 0xc) == 0) {
              local_70 = (longlong *)0x0;
            }
            else {
              FUN_01266770();
              local_70 = local_68;
              plVar12 = local_68;
              if (local_68 == (longlong *)0x0) {
                local_70 = (longlong *)0x0;
              }
              else {
                uVar18 = (undefined7)((ulonglong)uVar8 >> 8);
                if (local_60[0] == '\0') {
                  FUN_00d50b00();
                  uVar8 = CONCAT71(uVar18,1);
                  if ((local_60[0] != '\0') && (local_68 != (longlong *)0x0)) {
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
            pVar11 = (pthread_key_t)plVar12;
            param_1 = local_98;
            local_a0 = uVar8;
            if (local_70 != (longlong *)0x0) goto LAB_019ed37a;
          }
        }
        (**(code **)(*unaff_RDI + 0x9c8))();
        unaff_R14 = local_68;
        if (local_60[0] == '\0') {
          if (((local_68 != (longlong *)0x0) && (FUN_00d50b00(), local_60[0] != '\0')) &&
             (local_68 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_60[0] = '\0';
        }
        pVar11 = (pthread_key_t)plVar12;
        if (unaff_R14 != (longlong *)0x0) {
          if (*(int *)((longlong)unaff_R14 + 0xc) == 0) {
            local_70 = (longlong *)0x0;
          }
          else {
            FUN_00d23310();
            local_70 = local_68;
            pVar11 = (pthread_key_t)CONCAT71((int7)((ulonglong)plVar12 >> 8),local_60[0]);
            pplVar15 = &local_40;
            if (local_60[0] != '\0') {
              pplVar15 = (longlong **)local_60;
            }
            local_40 = (longlong *)CONCAT71(local_40._1_7_,local_60[0]);
            *(char *)pplVar15 = '\0';
            if ((local_60[0] != '\0') && (local_68 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if (local_70 == (longlong *)0x0) {
              local_70 = (longlong *)0x0;
            }
            else {
              uVar8 = CONCAT71((int7)((ulonglong)uVar8 >> 8),1);
              if ((char)local_40 == '\0') {
                FUN_00d50b00();
              }
            }
          }
          FUN_00d50b20();
          param_1 = local_98;
          local_a0 = uVar8;
          if (local_70 != (longlong *)0x0) goto LAB_019ed37a;
        }
        (**(code **)(*unaff_RDI + 0x9b0))();
        if (local_68 == (longlong *)0x0) {
          bVar19 = false;
        }
        else {
          (**(code **)(*unaff_RDI + 0x9b0))();
          bVar19 = *(int *)((longlong)local_40 + 0xc) != 0;
          if (local_38 != '\0') {
            FUN_00d50b20();
          }
        }
        if ((local_60[0] != '\0') && (local_68 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (bVar19) {
          uVar18 = (undefined7)((ulonglong)uVar8 >> 8);
          if (*param_1 == 0) {
            (**(code **)(*unaff_RDI + 0x9b0))();
            local_e8 = local_40;
            local_e0 = 0;
            if (local_38 == '\0') {
              if (local_40 != (longlong *)0x0) {
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
            if (local_68 == (longlong *)0x0) {
              local_70 = (longlong *)0x0;
            }
            else if (local_60[0] == '\0') {
              FUN_00d50b00();
              uVar8 = CONCAT71(uVar18,1);
              if ((local_60[0] != '\0') && (local_68 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
            }
            else {
              local_60[0] = '\0';
              uVar8 = CONCAT71(uVar18,1);
            }
            pVar11 = (pthread_key_t)plVar12;
            if ((local_e0 != '\0') && (local_e8 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            local_a0 = uVar8;
            if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
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
              if (local_40 != (longlong *)0x0) {
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
            if (local_68 == (longlong *)0x0) {
              local_70 = (longlong *)0x0;
            }
            else if (local_60[0] == '\0') {
              FUN_00d50b00();
              uVar8 = CONCAT71(uVar18,1);
              if ((local_60[0] != '\0') && (local_68 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
            }
            else {
              local_60[0] = '\0';
              uVar8 = CONCAT71(uVar18,1);
            }
            pVar11 = (pthread_key_t)plVar12;
            if ((local_f0 != '\0') && (local_f8 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            local_a0 = uVar8;
            if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
          goto LAB_019ed37a;
        }
        uVar16 = 0;
        local_a0 = uVar8;
        if (*unaff_RSI != 0) {
          local_70 = (longlong *)0x0;
          goto LAB_019ed49a;
        }
      }
      else {
        (**(code **)(*unaff_RDI + 0x988))();
        local_68 = (longlong *)*param_1;
        local_60[0] = '\0';
        uVar3 = FUN_00d23d70();
        unaff_R14 = (longlong *)(ulonglong)uVar3;
        if ((local_60[0] != '\0') && (local_68 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((char)uVar3 != '\0') goto LAB_019ecb14;
        pvVar5 = _pthread_getspecific((pthread_key_t)plVar12);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012e5ae0();
        FUN_00d23310();
        local_70 = local_68;
        pVar11 = (pthread_key_t)CONCAT71((int7)((ulonglong)plVar12 >> 8),local_60[0]);
        pplVar15 = &local_b0;
        if (local_60[0] != '\0') {
          pplVar15 = (longlong **)local_60;
        }
        local_b0._0_1_ = local_60[0];
        *(char *)pplVar15 = '\0';
        if ((local_60[0] != '\0') && (local_70 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (local_70 == (longlong *)0x0) {
          local_70 = (longlong *)0x0;
          local_a0 = 0;
        }
        else {
          local_a0 = CONCAT71((int7)((ulonglong)local_70 >> 8),1);
          if ((char)local_b0 == '\0') {
            FUN_00d50b00();
          }
        }
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        uVar16 = 1;
        if (*unaff_RSI != 0) goto LAB_019ed49a;
LAB_019ed38a:
        if (local_70 == (longlong *)0x0) {
          uVar16 = 0;
          goto LAB_019ed67f;
        }
        pvVar5 = _pthread_getspecific(pVar11);
        if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
          pVar11 = (pthread_key_t)local_70;
        }
        FUN_01264240();
        plVar12 = local_68;
        unaff_R14 = (longlong *)*unaff_RSI;
        if (unaff_R14 == local_68) {
          if (((char)unaff_RSI[1] == '\0') && (local_68 != (longlong *)0x0)) {
            if (local_60[0] != '\0') goto LAB_019ed42b;
            FUN_00d50b00();
            goto LAB_019ed471;
          }
LAB_019ed479:
          if ((local_60[0] != '\0') && (local_68 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          lVar6 = unaff_RSI[1];
          if (local_60[0] == '\0') {
            if (local_68 != (longlong *)0x0) {
              FUN_00d50b00();
            }
            *unaff_RSI = (longlong)plVar12;
            if (((char)lVar6 != '\0') && (unaff_R14 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
LAB_019ed471:
            *(undefined1 *)(unaff_RSI + 1) = 1;
            goto LAB_019ed479;
          }
          *unaff_RSI = (longlong)local_68;
          if (((char)lVar6 != '\0') && (unaff_R14 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
LAB_019ed42b:
          *(undefined1 *)(unaff_RSI + 1) = 1;
        }
        if (*unaff_RSI == 0) {
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
          if (*(int *)((longlong)local_68 + 0xc) != 0) {
            if (local_60[0] != '\0') {
              FUN_00d50b20();
            }
            if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            goto LAB_019ed665;
          }
          pvVar5 = _pthread_getspecific(pVar11);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          iVar4 = FUN_01326de0();
          if ((local_60[0] != '\0') && (local_68 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (iVar4 == 0) goto LAB_019ed665;
          if ((unaff_RDI[0x75] != 0) &&
             (cVar2 = (**(code **)("/System/Library/Frameworks/ImageIO.framework/Versions/A/ImageIO"
                                  + *unaff_RDI))(), cVar2 != '\0')) {
            (**(code **)(*(longlong *)unaff_RDI[0x75] + 0x918))();
          }
          puVar7 = (undefined8 *)FUN_00e8fc40();
          FUN_00d4ff40();
          pVar11 = 0x2572358;
          local_c0 = (longlong *)&DAT_02572358;
          *puVar7 = &DAT_02572358;
          local_c8 = DAT_02572370;
          (*DAT_02572370)();
          local_120 = puVar7;
          (**(code **)(*unaff_RDI + 0x9b0))();
          plVar12 = local_68;
          if (local_60[0] == '\0') {
            if (local_68 != (longlong *)0x0) {
              FUN_00d50b00();
              if ((local_60[0] != '\0') && (local_68 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              goto LAB_019ed6c5;
            }
LAB_019ed7aa:
            local_100 = 0;
          }
          else {
            if (local_68 == (longlong *)0x0) goto LAB_019ed7aa;
LAB_019ed6c5:
            local_60[0] = '\0';
            local_68 = (longlong *)0x0;
            local_58 = plVar12;
            local_50 = 0xffffffff;
            local_48 = 0;
            while( true ) {
              lVar6 = (longlong)(int)local_50;
              iVar4 = (int)local_50 + 1;
              local_50 = CONCAT44(local_50._4_4_,iVar4);
              if (*(int *)((longlong)local_58 + 0xc) <= iVar4) break;
              local_68 = *(longlong **)(local_58[2] + 8 + lVar6 * 8);
              pvVar5 = _pthread_getspecific((pthread_key_t)local_58[2]);
              if (pvVar5 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_01264240();
              plVar12 = local_40;
              unaff_R14 = (longlong *)*unaff_RSI;
              if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              if (plVar12 == unaff_R14) {
                FUN_0039e8b0();
                local_d8 = local_40;
                local_d0 = 0;
                if (local_38 == '\0') {
                  if (local_40 != (longlong *)0x0) {
                    FUN_00d50b00();
                  }
                }
                else {
                  local_38 = '\0';
                }
                local_d0 = '\x01';
                plVar12 = (longlong *)0x0;
                local_100 = FUN_012912a0(0,0,0);
                if ((local_d0 != '\0') && (local_d8 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
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
            pVar11 = (pthread_key_t)plVar12;
            FUN_001159b0();
            FUN_00d50b20();
          }
          plVar12 = local_98;
          if ((char)uVar16 == '\0') {
            if ((*local_98 == 0) && (local_70 != (longlong *)0x0)) {
              pvVar5 = _pthread_getspecific(pVar11);
              if (pvVar5 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_01266fe0();
              plVar13 = local_68;
              unaff_R14 = (longlong *)*plVar12;
              if (unaff_R14 == local_68) {
                if (((char)plVar12[1] != '\0') || (local_68 == (longlong *)0x0)) goto LAB_019eda63;
                if (local_60[0] == '\0') {
                  FUN_00d50b00();
                  goto LAB_019eda53;
                }
              }
              else {
                lVar6 = plVar12[1];
                if (local_60[0] == '\0') {
                  if (local_68 != (longlong *)0x0) {
                    FUN_00d50b00();
                  }
                  *local_98 = (longlong)plVar13;
                  if (((char)lVar6 != '\0') && (unaff_R14 != (longlong *)0x0)) {
                    FUN_00d50b20();
                  }
LAB_019eda53:
                  *(undefined1 *)(plVar12 + 1) = 1;
                  plVar12 = local_98;
LAB_019eda63:
                  if ((local_60[0] != '\0') && (local_68 != (longlong *)0x0)) {
                    FUN_00d50b20();
                  }
                  goto LAB_019eda77;
                }
                *plVar12 = (longlong)local_68;
                if (((char)lVar6 != '\0') && (unaff_R14 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
              }
              *(undefined1 *)(plVar12 + 1) = 1;
              plVar12 = local_98;
            }
LAB_019eda77:
            (**(code **)(*unaff_RDI + 0xe10))();
            local_78 = local_68;
            plVar13 = local_68;
            if (local_68 == (longlong *)0x0) {
              uVar18 = (undefined7)((ulonglong)unaff_R14 >> 8);
              bVar17 = 1;
              local_90 = 0;
              local_78 = (longlong *)0x0;
            }
            else if (local_60[0] == '\0') {
              uVar8 = FUN_00d50b00();
              bVar17 = 0;
              uVar18 = 0;
              local_90 = CONCAT71((int7)((ulonglong)uVar8 >> 8),1);
              if ((local_60[0] != '\0') && (local_68 != (longlong *)0x0)) {
                uVar8 = FUN_00d50b20();
                local_90 = CONCAT71((int7)((ulonglong)uVar8 >> 8),1);
                bVar17 = 0;
                uVar18 = 0;
              }
            }
            else {
              bVar17 = 0;
              uVar18 = 0;
              local_90 = CONCAT71((int7)((ulonglong)local_68 >> 8),1);
            }
            pVar11 = (pthread_key_t)plVar13;
            if ((*(int *)((longlong)local_78 + 0xc) == 0) && (*plVar12 != 0)) {
              local_b8 = (longlong *)(**(code **)(*unaff_RDI + 0xa50))();
              pvVar5 = _pthread_getspecific(pVar11);
              if (pvVar5 != (void *)0x0) {
                FUN_00e8b990();
              }
              uVar8 = FUN_012e9900((int)local_b8);
              plVar13 = local_68;
              if (local_68 == local_78) {
                bVar17 = bVar17 & local_68 != (longlong *)0x0;
                pplVar15 = (longlong **)CONCAT71(uVar18,bVar17);
                if (bVar17 != 1) {
                  pplVar15 = (longlong **)(local_90 & 0xffffffff);
LAB_019edc28:
                  if ((local_60[0] != '\0') && (local_68 != (longlong *)0x0)) {
                    FUN_00d50b20();
                  }
                  goto LAB_019edc3c;
                }
                if (local_60[0] == '\0') {
                  pplVar15 = (longlong **)CONCAT71(uVar18,1);
                  FUN_00d50b00();
                  goto LAB_019edc28;
                }
                local_90 = CONCAT71((int7)((ulonglong)uVar8 >> 8),1);
LAB_019edc5d:
                plVar12 = local_78;
                local_b8 = local_78;
                if (*(int *)((longlong)local_78 + 0xc) != 0) {
                  plVar13 = (longlong *)*unaff_RSI;
                  local_60[0] = '\0';
                  local_68 = (longlong *)0x0;
                  local_48 = 0;
                  local_50 = 0;
                  local_58 = local_78;
                  if (0 < *(int *)((longlong)local_78 + 0xc)) {
                    lVar6 = 0;
                    pplVar15 = &local_40;
                    do {
                      local_68 = *(longlong **)(local_78[2] + lVar6 * 8);
                      pvVar5 = _pthread_getspecific((pthread_key_t)local_78);
                      if (pvVar5 != (void *)0x0) {
                        FUN_00e8b990();
                      }
                      FUN_01264240();
                      plVar10 = local_40;
                      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
                        FUN_00d50b20();
                      }
                      if (plVar10 == plVar13) {
                        FUN_001159b0();
                        plVar12 = local_98;
                        goto LAB_019ede5d;
                      }
                      lVar6 = lVar6 + 1;
                      local_50 = CONCAT44(local_50._4_4_,(int)lVar6);
                    } while (lVar6 < *(int *)((longlong)local_78 + 0xc));
                  }
                  FUN_001159b0();
                }
                pVar11 = (pthread_key_t)plVar12;
                plVar12 = local_98;
                plVar13 = local_b8;
              }
              else {
                if (local_60[0] == '\0') {
                  if (local_68 != (longlong *)0x0) {
                    FUN_00d50b00();
                  }
                  pplVar15 = (longlong **)CONCAT71(uVar18,1);
                  if ((char)local_90 == '\0') {
                    local_78 = plVar13;
                  }
                  else {
                    local_78 = plVar13;
                    FUN_00d50b20();
                  }
                  goto LAB_019edc28;
                }
                pplVar15 = (longlong **)CONCAT71(uVar18,1);
                if ((char)local_90 == '\0') {
                  local_78 = local_68;
                }
                else {
                  local_78 = local_68;
                  FUN_00d50b20();
                }
LAB_019edc3c:
                plVar13 = local_78;
                if (local_78 != (longlong *)0x0) {
                  local_90 = (ulonglong)pplVar15 & 0xffffffff;
                  goto LAB_019edc5d;
                }
                local_78 = (longlong *)0x0;
                local_90 = (ulonglong)pplVar15 & 0xffffffff;
              }
              pvVar5 = _pthread_getspecific(pVar11);
              if (pvVar5 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_012e5ae0();
              plVar10 = local_68;
              uVar18 = (undefined7)((ulonglong)pplVar15 >> 8);
              if (local_68 == plVar13) {
                if (((char)local_90 == '\0') && (local_78 != (longlong *)0x0)) {
                  uVar16 = CONCAT71(uVar18,1);
                  if (local_60[0] != '\0') goto LAB_019ede53;
                  uVar16 = CONCAT71(uVar18,1);
                  FUN_00d50b00();
                }
                else {
                  uVar16 = local_90 & 0xffffffff;
                }
LAB_019ede3f:
                if ((local_60[0] != '\0') && (local_68 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
              }
              else {
                if (local_60[0] == '\0') {
                  if (local_68 != (longlong *)0x0) {
                    FUN_00d50b00();
                  }
                  uVar16 = CONCAT71(uVar18,1);
                  if (((char)local_90 == '\0') || (local_78 == (longlong *)0x0)) {
                    local_78 = plVar10;
                  }
                  else {
                    local_78 = plVar10;
                    FUN_00d50b20();
                  }
                  goto LAB_019ede3f;
                }
                uVar16 = CONCAT71(uVar18,1);
                if (((char)local_90 == '\0') || (local_78 == (longlong *)0x0)) {
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
            if (local_68 == (longlong *)0x0) {
              local_90 = 0;
              local_78 = (longlong *)0x0;
            }
            else {
              local_90 = CONCAT71((int7)((ulonglong)local_68 >> 8),1);
              if (((local_60[0] == '\0') && (FUN_00d50b00(local_68), local_60[0] != '\0')) &&
                 (local_68 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
            }
          }
LAB_019ede5d:
          puVar7 = (undefined8 *)FUN_00e8fc40();
          FUN_00d4ff40();
          *puVar7 = local_c0;
          (*local_c8)();
          puVar9 = (undefined8 *)FUN_00e8fc40();
          FUN_00d4ff40();
          *puVar9 = local_c0;
          (*local_c8)();
          if (local_78 != (longlong *)0x0) {
            local_60[0] = '\0';
            local_68 = (longlong *)0x0;
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
              lVar6 = (longlong)(int)local_50;
              iVar4 = (int)local_50 + 1;
              local_50 = CONCAT44(local_50._4_4_,iVar4);
              if (*(int *)((longlong)local_58 + 0xc) <= iVar4) break;
              lVar14 = local_58[2];
              local_68 = *(longlong **)(lVar14 + 8 + lVar6 * 8);
              pvVar5 = _pthread_getspecific((pthread_key_t)lVar14);
              pVar11 = (pthread_key_t)lVar14;
              if (pvVar5 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_01264240();
              plVar13 = local_40;
              plVar12 = (longlong *)*unaff_RSI;
              if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              if (plVar13 == plVar12) {
                local_40 = local_68;
                local_38 = '\0';
                FUN_00d21140();
                if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                (**(code **)(*unaff_RDI + 0xe10))();
                local_40 = local_68;
                local_38 = '\0';
                cVar2 = FUN_00d23d70();
                if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
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
                  plVar12 = (longlong *)CONCAT71(local_b0._1_7_,(char)local_b0);
                  if (local_a8 == '\0') {
                    if (plVar12 != (longlong *)0x0) {
                      FUN_00d50b00();
                    }
                  }
                  else {
                    local_a8 = '\0';
                  }
                  local_38 = '\0';
                  local_40 = plVar12;
                  FUN_00d21140();
                  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
                    FUN_00d50b20();
                  }
                  if (plVar12 != (longlong *)0x0) {
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
          uVar20 = (**(code **)(*unaff_RDI + 0xda0))();
          (**(code **)(*unaff_RDI + 0xec8))(uVar20,0);
          local_c8 = (code *)(**(code **)(*unaff_RDI + 0xa50))();
          local_b8 = param_2;
          uVar20 = (**(code **)(*unaff_RDI + 0xa98))();
          uVar21 = (**(code **)(&UNK_000014c8 + *unaff_RDI))();
          plVar13 = local_68;
          if ((((local_60[0] == '\0') && (local_68 != (longlong *)0x0)) &&
              (uVar21 = FUN_00d50b00(), local_60[0] != '\0')) && (local_68 != (longlong *)0x0)) {
            uVar21 = FUN_00d50b20();
          }
          local_60[0] = '\0';
          local_68 = (longlong *)0x0;
          local_c0 = plVar13;
          local_98 = (longlong *)(**(code **)(&UNK_000014d8 + *unaff_RDI))(uVar21,&local_68);
          local_198 = *unaff_RSI;
          local_190 = '\0';
          local_188 = local_108;
          local_180 = '\0';
          local_178 = *plVar12;
          local_170 = '\0';
          (**(code **)(&UNK_000014e0 + *unaff_RDI))((int)local_98,&local_198,&local_178);
          plVar12 = (longlong *)unaff_RDI[0x87];
          plVar10 = plVar12;
          if (plVar12 != local_40) {
            if (local_38 == '\0') {
              if (local_40 == (longlong *)0x0) {
                plVar10 = (longlong *)0x0;
              }
              else {
                FUN_00d50b00();
                plVar12 = (longlong *)unaff_RDI[0x87];
                plVar10 = local_40;
              }
            }
            else {
              local_38 = '\0';
              plVar10 = local_40;
            }
            unaff_RDI[0x87] = (longlong)plVar10;
            if (plVar12 != (longlong *)0x0) {
              FUN_00d50b20();
              plVar10 = local_40;
            }
          }
          if ((local_38 != '\0') && (plVar10 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_170 != '\0') && (local_178 != 0)) {
            FUN_00d50b20();
          }
          if ((local_180 != '\0') && (local_188 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_190 != '\0') && (local_198 != 0)) {
            FUN_00d50b20();
          }
          FUN_01953c70((int)local_100);
          plVar12 = (longlong *)unaff_RDI[0x87];
          (**(code **)(*unaff_RDI + 0xef8))();
          (**(code **)(*plVar12 + 0xef0))();
          plVar12 = (longlong *)unaff_RDI[0x87];
          *(undefined1 *)((longlong)plVar12 + 0x4dd) = *(undefined1 *)((longlong)unaff_RDI + 0x4dd);
          local_168 = (longlong *)*local_128;
          local_160 = '\0';
          (**(code **)(*plVar12 + 0x968))((int)local_98);
          if ((local_160 != '\0') && (local_168 != (longlong *)0x0)) {
            (**(code **)(*local_168 + 0x10))();
            FUN_00d50b20();
          }
          local_158 = plVar13;
          local_150 = '\0';
          (**(code **)(&UNK_000014d0 + *(longlong *)unaff_RDI[0x87]))();
          if ((local_150 != '\0') && (local_158 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          local_148 = local_68;
          local_140 = '\0';
          FUN_01953b50();
          if ((local_140 != '\0') && (local_148 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          local_128 = (undefined8 *)FUN_01953bb0((int)local_c8);
          dVar1 = (double)FUN_01953bb0(SUB84((double)local_c8 + (double)local_b8,0));
          (**(code **)(&UNK_00001608 + *unaff_RDI))((int)local_128,dVar1 - (double)local_128);
          FUN_019af2a0();
          (**(code **)(*(longlong *)unaff_RDI[0x87] + 0xaa0))(uVar20);
          FUN_01e42250();
          FUN_01e42030();
          local_110 = 0;
          local_118 = unaff_RDI[0x87];
          if (local_118 != 0) {
            FUN_00d50b00();
          }
          local_110 = '\x01';
          FUN_01d8c720();
          plVar12 = local_c0;
          if ((local_110 != '\0') && (local_118 != 0)) {
            FUN_00d50b20();
          }
          if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          plVar13 = (longlong *)unaff_RDI[0x87];
          local_130 = '\0';
          local_138 = puVar9;
          FUN_00e7b500(0,0);
          (**(code **)(*plVar13 + 0xe08))();
          if ((local_130 != '\0') && (local_138 != (undefined8 *)0x0)) {
            FUN_00d50b20();
          }
          (**(code **)(*(longlong *)unaff_RDI[0x87] + 0x7b8))();
          (**(code **)(*local_40 + 0x620))();
          if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_60[0] != '\0') && (local_68 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (plVar12 != (longlong *)0x0) {
            FUN_00d50b20();
          }
          if (puVar9 != (undefined8 *)0x0) {
            FUN_00d50b20();
          }
          if (puVar7 != (undefined8 *)0x0) {
            FUN_00d50b20();
          }
          if (((char)local_90 != '\0') && (local_78 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          uVar16 = CONCAT71((int7)((ulonglong)puVar7 >> 8),1);
          if (local_120 != (undefined8 *)0x0) {
            FUN_00d50b20();
          }
        }
        bVar19 = (char)local_a0 != '\0';
        if ((bVar19) && (local_70 != (longlong *)0x0)) {
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


