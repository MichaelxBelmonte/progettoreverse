// Function: FUN_0022ee90
// Address: 0022ee90
// Size: 5656 bytes
// Class: MDEditorScrollView


/* WARNING: Removing unreachable block (ram,0x0022f282) */
/* WARNING: Removing unreachable block (ram,0x0022f28e) */
/* WARNING: Removing unreachable block (ram,0x0022f64a) */
/* WARNING: Removing unreachable block (ram,0x0022f656) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_0022ee90(pthread_key_t param_1)

{
  bool bVar1;
  code *pcVar2;
  byte bVar3;
  char cVar4;
  undefined4 uVar5;
  void *pvVar6;
  undefined8 *puVar7;
  char *pcVar8;
  ulonglong uVar9;
  longlong *plVar10;
  undefined8 uVar11;
  longlong lVar12;
  char *pcVar13;
  pthread_key_t pVar14;
  longlong *plVar15;
  longlong lVar16;
  int iVar17;
  longlong unaff_RDI;
  longlong *plVar18;
  uint7 uVar21;
  undefined *puVar19;
  undefined *puVar20;
  undefined8 extraout_XMM0_Qa;
  double dVar22;
  longlong local_1f0;
  char local_1e8;
  longlong local_1e0;
  char local_1d8;
  longlong local_1d0;
  char local_1c8;
  longlong *local_190;
  char local_188;
  longlong *local_180;
  char local_178;
  longlong *local_170;
  char local_168;
  longlong *local_160;
  char local_158;
  longlong *local_150;
  char local_148;
  longlong *local_140;
  char local_138;
  longlong *local_130;
  char local_128;
  longlong *local_120;
  char local_118;
  longlong local_110;
  char local_108;
  longlong local_100;
  char local_f8;
  char local_f0;
  undefined7 uStack_ef;
  char local_e8;
  longlong local_e0;
  char local_d8;
  longlong *local_d0;
  char local_c8;
  longlong local_b0;
  char local_a8;
  char local_a0;
  undefined7 uStack_9f;
  char local_98;
  longlong *local_90;
  undefined8 *local_88;
  undefined8 local_80;
  longlong *local_78;
  longlong *local_70;
  undefined *local_68;
  char local_60 [8];
  longlong *local_58;
  char local_50;
  longlong *local_48;
  undefined8 local_40;
  int local_38;
  
  if (*(longlong *)(unaff_RDI + 0x90) != 0) {
    FUN_00d50b00();
    FUN_00d50b20();
    if (*(longlong *)(unaff_RDI + 0x1c0) != 0) {
      FUN_006f3f00();
      plVar10 = local_58;
      if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar10 != (longlong *)0x0) {
        if (*(int *)(unaff_RDI + 0x198) == 1) {
          FUN_00226f20();
          plVar10 = local_58;
          if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (plVar10 == (longlong *)0x0) {
            bVar1 = false;
            local_90 = (longlong *)0x0;
            local_88 = (undefined8 *)0x0;
            plVar18 = (longlong *)0x0;
            uVar11 = 0;
            local_78 = (longlong *)0x0;
          }
          else {
            FUN_00226f20();
            puVar19 = local_68;
            pvVar6 = _pthread_getspecific(param_1);
            if (pvVar6 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_01657380();
            plVar10 = local_58;
            if (local_50 == '\0') {
              if (((local_58 != (longlong *)0x0) && (FUN_00d50b00(), local_50 != '\0')) &&
                 (local_58 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
            }
            else {
              local_50 = '\0';
            }
            if ((local_60[0] != '\0') && (puVar19 != (undefined *)0x0)) {
              FUN_00d50b20();
            }
            if (*(longlong *)(unaff_RDI + 0x1c0) == 0) {
              local_60[0] = '\0';
              local_68 = (undefined *)0x0;
            }
            else {
              FUN_006f3f00();
            }
            uVar5 = FUN_0078cda0();
            if ((char)uVar5 == '\0') {
              pvVar6 = _pthread_getspecific(param_1);
              if (pvVar6 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_01650330();
            }
            else {
              pvVar6 = _pthread_getspecific(param_1);
              if (pvVar6 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_01650620();
              pvVar6 = _pthread_getspecific(param_1);
              if (pvVar6 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_016676f0();
            }
            plVar18 = local_58;
            if (local_50 == '\0') {
              if (((local_58 != (longlong *)0x0) && (FUN_00d50b00(), local_50 != '\0')) &&
                 (local_58 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
            }
            else {
              local_50 = '\0';
            }
            if ((((char)uVar5 != '\0') && (local_a8 != '\0')) && (local_b0 != 0)) {
              FUN_00d50b20();
            }
            if ((local_60[0] != '\0') && (local_68 != (undefined *)0x0)) {
              FUN_00d50b20();
            }
            FUN_004fa310();
            if ((local_1e8 != '\0') && (local_1f0 != 0)) {
              FUN_00d50b20();
            }
            FUN_000ba510();
            local_78 = local_58;
            plVar15 = local_58;
            if (local_58 == (longlong *)0x0) {
              local_78 = (longlong *)0x0;
              uVar11 = 0;
            }
            else {
              uVar21 = (uint7)(uint3)((uint)uVar5 >> 8);
              if (local_50 == '\0') {
                FUN_00d50b00();
                uVar11 = CONCAT71(uVar21,1);
                if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
              }
              else {
                local_50 = '\0';
                uVar11 = CONCAT71(uVar21,1);
              }
            }
            pvVar6 = _pthread_getspecific((pthread_key_t)plVar15);
            if (pvVar6 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_012e8920();
            local_90 = local_58;
            if (local_58 == (longlong *)0x0) {
              bVar1 = false;
            }
            else {
              bVar1 = true;
              if (((local_50 == '\0') && (FUN_00d50b00(), local_50 != '\0')) &&
                 (local_58 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
            }
            if (plVar18 != (longlong *)0x0) {
              FUN_00d50b20();
            }
            if (plVar10 != (longlong *)0x0) {
              FUN_00d50b20();
            }
            local_88 = (undefined8 *)0x0;
            plVar18 = (longlong *)0x0;
          }
        }
        else {
          plVar10 = (longlong *)FUN_00e8fc40();
          FUN_00d4ff40();
          puVar19 = &DAT_02572358;
          *plVar10 = (longlong)&DAT_02572358;
          pcVar2 = DAT_02572370;
          local_78 = plVar10;
          (*DAT_02572370)();
          plVar10 = (longlong *)FUN_00e8fc40();
          FUN_00d4ff40();
          *plVar10 = (longlong)&DAT_02572358;
          uVar11 = (*pcVar2)();
          puVar20 = puVar19;
          if (*(longlong *)(unaff_RDI + 0xb8) != 0) {
            uVar11 = FUN_004405c0();
            puVar20 = &DAT_02572358;
            if (local_50 == '\0') {
              if (local_58 != (longlong *)0x0) {
                FUN_00d50b00();
                if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                goto LAB_0022f074;
              }
            }
            else if (local_58 != (longlong *)0x0) {
LAB_0022f074:
              puVar7 = (undefined8 *)FUN_00e8fc40();
              FUN_00d4ff40();
              *puVar7 = &DAT_02572358;
              (*pcVar2)();
              uVar11 = FUN_004b5af0();
              plVar18 = local_58;
              if (local_50 == '\0') {
                if (local_58 != (longlong *)0x0) {
                  uVar11 = FUN_00d50b00();
                  if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
                    uVar11 = FUN_00d50b20();
                  }
                  goto LAB_0022f33c;
                }
LAB_0022f563:
                FUN_00d50b20();
                puVar19 = puVar20;
              }
              else {
                puVar20 = puVar19;
                if (local_58 == (longlong *)0x0) goto LAB_0022f563;
LAB_0022f33c:
                local_50 = '\0';
                local_58 = (longlong *)0x0;
                local_90 = plVar18;
                local_48 = plVar18;
                local_40 = 0xffffffff;
                local_38 = 0;
                local_40._4_4_ = 0;
                local_88 = puVar7;
                local_70 = plVar10;
                while( true ) {
                  if (local_40._4_4_ != 0) {
                    if (local_40._4_4_ < 1) {
                      iVar17 = -local_40._4_4_;
                    }
                    else {
                      iVar17 = (int)local_40 - local_40._4_4_;
                      local_40 = CONCAT44(local_40._4_4_,iVar17);
                      uVar11 = FUN_00d23690();
                      local_38 = local_38 + local_40._4_4_;
                      iVar17 = 0;
                    }
                    local_40 = CONCAT44(iVar17,(int)local_40);
                  }
                  lVar12 = (longlong)(int)local_40;
                  iVar17 = (int)local_40 + 1;
                  local_40 = CONCAT44(local_40._4_4_,iVar17);
                  if (*(int *)((longlong)local_48 + 0xc) <= iVar17) break;
                  local_58 = *(longlong **)(local_48[2] + 8 + lVar12 * 8);
                  if (*(longlong *)(unaff_RDI + 0x1c0) == 0) {
                    local_a8 = '\0';
                    local_b0 = 0;
                  }
                  else {
                    uVar11 = FUN_006f3f00();
                  }
                  local_188 = '\0';
                  local_190 = local_58;
                  uVar11 = FUN_0078bc40(uVar11,&local_190);
                  puVar19 = local_68;
                  local_a0 = local_60[0];
                  pcVar8 = local_60;
                  if (local_60[0] == '\0') {
                    pcVar8 = &local_a0;
                  }
                  *pcVar8 = '\0';
                  if ((local_60[0] != '\0') && (puVar19 != (undefined *)0x0)) {
                    uVar11 = FUN_00d50b20();
                  }
                  if ((local_188 != '\0') && (local_190 != (longlong *)0x0)) {
                    uVar11 = FUN_00d50b20();
                  }
                  if ((local_a8 != '\0') && (local_b0 != 0)) {
                    uVar11 = FUN_00d50b20();
                  }
                  if (puVar19 != (undefined *)0x0) {
                    iVar17 = FUN_003b7980();
                    if (iVar17 == 1) {
                      local_60[0] = '\0';
                      local_68 = puVar19;
                      uVar11 = FUN_00d21140();
                      if ((local_60[0] != '\0') && (local_68 != (undefined *)0x0)) {
                        uVar11 = FUN_00d50b20();
                      }
                    }
                    else {
                      uVar11 = extraout_XMM0_Qa;
                      if (iVar17 == 2) {
                        local_60[0] = '\0';
                        local_68 = puVar19;
                        uVar11 = FUN_00d21140();
                        if ((local_60[0] != '\0') && (local_68 != (undefined *)0x0)) {
                          uVar11 = FUN_00d50b20();
                        }
                      }
                    }
                    if (local_a0 != '\0') {
                      uVar11 = FUN_00d50b20();
                    }
                  }
                }
                plVar10 = local_48;
                FUN_00274d30();
                param_1 = (pthread_key_t)plVar10;
                FUN_00d50b20();
                plVar10 = local_70;
                puVar20 = puVar19;
                if (local_88 != (undefined8 *)0x0) goto LAB_0022f563;
              }
              uVar11 = FUN_00d50b20();
              puVar20 = puVar19;
            }
          }
          if (*(longlong *)(unaff_RDI + 0x1c0) == 0) {
            local_60[0] = '\0';
            local_68 = (undefined *)0x0;
          }
          else {
            uVar11 = FUN_006f3f00();
          }
          plVar18 = local_78;
          local_180 = local_78;
          local_178 = '\0';
          FUN_0078c610(uVar11,&local_180);
          plVar15 = local_58;
          if (plVar18 == local_58) {
LAB_0022f6fc:
            if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            if (local_50 == '\0') {
              if (local_58 != (longlong *)0x0) {
                FUN_00d50b00();
              }
              if (local_78 == (longlong *)0x0) {
                local_78 = plVar15;
              }
              else {
                local_78 = plVar15;
                FUN_00d50b20();
              }
              goto LAB_0022f6fc;
            }
            if (local_78 != (longlong *)0x0) {
              local_78 = local_58;
              FUN_00d50b20();
            }
            local_50 = '\0';
            local_78 = plVar15;
          }
          if ((local_178 != '\0') && (local_180 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_60[0] != '\0') && (local_68 != (undefined *)0x0)) {
            FUN_00d50b20();
          }
          if (*(longlong *)(unaff_RDI + 0x1c0) == 0) {
            local_60[0] = '\0';
            local_68 = (undefined *)0x0;
          }
          else {
            FUN_006f3f00();
          }
          local_168 = '\0';
          local_170 = plVar10;
          FUN_0078c610();
          plVar18 = plVar10;
          if (plVar10 == local_58) {
LAB_0022f7d6:
            if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            plVar18 = local_58;
            if (local_50 == '\0') {
              if (local_58 != (longlong *)0x0) {
                FUN_00d50b00();
              }
              if (plVar10 != (longlong *)0x0) {
                FUN_00d50b20();
              }
              goto LAB_0022f7d6;
            }
            if (plVar10 != (longlong *)0x0) {
              FUN_00d50b20();
            }
            local_50 = '\0';
          }
          if ((local_168 != '\0') && (local_170 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_60[0] != '\0') && (local_68 != (undefined *)0x0)) {
            FUN_00d50b20();
          }
          if (*(longlong *)(unaff_RDI + 0x1c0) == 0) {
            local_50 = '\0';
            local_58 = (longlong *)0x0;
          }
          else {
            FUN_006f3f00();
          }
          cVar4 = FUN_00751ba0();
          if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (cVar4 != '\0') {
            if (local_78 != (longlong *)0x0) {
              local_50 = '\0';
              local_58 = (longlong *)0x0;
              local_48 = local_78;
              local_40 = 0xffffffff;
              local_38 = 0;
              local_40._4_4_ = 0;
              while( true ) {
                if (local_40._4_4_ != 0) {
                  if (local_40._4_4_ < 1) {
                    iVar17 = -local_40._4_4_;
                  }
                  else {
                    iVar17 = (int)local_40 - local_40._4_4_;
                    local_40 = CONCAT44(local_40._4_4_,iVar17);
                    FUN_00d23690();
                    local_38 = local_38 + local_40._4_4_;
                    iVar17 = 0;
                  }
                  local_40 = CONCAT44(iVar17,(int)local_40);
                }
                lVar12 = (longlong)(int)local_40;
                iVar17 = (int)local_40 + 1;
                local_40 = CONCAT44(local_40._4_4_,iVar17);
                if (*(int *)((longlong)local_48 + 0xc) <= iVar17) break;
                local_160 = *(longlong **)(local_48[2] + 8 + lVar12 * 8);
                local_158 = '\0';
                local_58 = local_160;
                FUN_004fa310();
                if ((local_1d8 != '\0') && (local_1e0 != 0)) {
                  FUN_00d50b20();
                }
                if ((local_158 != '\0') && (local_160 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
              }
              plVar10 = local_48;
              FUN_000be170();
              param_1 = (pthread_key_t)plVar10;
            }
            if (plVar18 != (longlong *)0x0) {
              local_50 = '\0';
              local_58 = (longlong *)0x0;
              local_40 = 0xffffffff;
              local_38 = 0;
              local_40._4_4_ = 0;
              local_48 = plVar18;
              while( true ) {
                if (local_40._4_4_ != 0) {
                  if (local_40._4_4_ < 1) {
                    iVar17 = -local_40._4_4_;
                  }
                  else {
                    iVar17 = (int)local_40 - local_40._4_4_;
                    local_40 = CONCAT44(local_40._4_4_,iVar17);
                    FUN_00d23690();
                    local_38 = local_38 + local_40._4_4_;
                    iVar17 = 0;
                  }
                  local_40 = CONCAT44(iVar17,(int)local_40);
                }
                lVar12 = (longlong)(int)local_40;
                iVar17 = (int)local_40 + 1;
                local_40 = CONCAT44(local_40._4_4_,iVar17);
                if (*(int *)((longlong)local_48 + 0xc) <= iVar17) break;
                local_150 = *(longlong **)(local_48[2] + 8 + lVar12 * 8);
                local_148 = '\0';
                local_58 = local_150;
                FUN_004fa310();
                if ((local_1c8 != '\0') && (local_1d0 != 0)) {
                  FUN_00d50b20();
                }
                if ((local_148 != '\0') && (local_150 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
              }
              plVar10 = local_48;
              FUN_000be170();
              param_1 = (pthread_key_t)plVar10;
            }
          }
          FUN_006f3f00();
          (**(code **)(*(longlong *)CONCAT71(uStack_9f,local_a0) + 0x628))();
          pvVar6 = _pthread_getspecific(param_1);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_004a1110();
          pvVar6 = _pthread_getspecific(param_1);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01313ad0();
          local_90 = local_58;
          plVar10 = local_58;
          if (local_58 == (longlong *)0x0) {
            bVar1 = false;
          }
          else if (local_50 == '\0') {
            plVar10 = (longlong *)FUN_00d50b00();
            bVar1 = true;
            if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
              plVar10 = (longlong *)FUN_00d50b20();
            }
          }
          else {
            local_50 = '\0';
            bVar1 = true;
          }
          if ((local_60[0] != '\0') && (local_68 != (undefined *)0x0)) {
            plVar10 = (longlong *)FUN_00d50b20();
          }
          if ((local_a8 != '\0') && (local_b0 != 0)) {
            plVar10 = (longlong *)FUN_00d50b20();
          }
          if ((local_98 != '\0') && (CONCAT71(uStack_9f,local_a0) != 0)) {
            plVar10 = (longlong *)FUN_00d50b20();
          }
          local_88 = (undefined8 *)CONCAT71((int7)((ulonglong)plVar10 >> 8),1);
          uVar11 = CONCAT71((int7)((ulonglong)puVar20 >> 8),1);
        }
        lVar12 = DAT_026f6de0;
        local_80 = uVar11;
        local_70 = plVar18;
        if (DAT_026f6de0 != 0) {
          FUN_00d50b00();
        }
        dVar22 = (double)FUN_00e7d6f0();
        uVar9 = (ulonglong)(dVar22 * DAT_023907c0);
        dVar22 = dVar22 * DAT_023907c0 - _DAT_023907c8;
        pVar14 = 0xaaaaaaab;
        FUN_0071a120();
        if (((local_50 == '\0') && (local_58 != (longlong *)0x0)) &&
           ((FUN_00d50b00(), local_50 != '\0' && (local_58 != (longlong *)0x0)))) {
          FUN_00d50b20();
        }
        bVar3 = (byte)(((longlong)dVar22 & (longlong)uVar9 >> 0x3f | uVar9) / 3);
        local_68 = (undefined *)lVar12;
        local_60[0] = '\0';
        FUN_000175c0();
        plVar10 = local_58;
        if (local_50 == '\0') {
          if (((local_58 != (longlong *)0x0) && (FUN_00d50b00(), local_50 != '\0')) &&
             (local_58 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_50 = '\0';
        }
        if ((local_60[0] != '\0') && (local_68 != (undefined *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar10 != (longlong *)0x0) {
          local_50 = '\0';
          local_58 = plVar10;
          bVar3 = FUN_00c70bc0();
          if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          FUN_00d50b20();
        }
        FUN_00d50b20();
        if (lVar12 != 0) {
          FUN_00d50b20();
        }
        if (local_78 != (longlong *)0x0 && (plVar10 != (longlong *)0x0 & bVar3) == 0) {
          plVar10 = local_70;
          if (local_70 == (longlong *)0x0) {
            plVar10 = (longlong *)FUN_00e8fc40();
            FUN_00d4ff40();
            pVar14 = 0x2572358;
            *plVar10 = (longlong)&DAT_02572358;
            uVar11 = (*DAT_02572370)();
            local_88 = (undefined8 *)CONCAT71((int7)((ulonglong)uVar11 >> 8),1);
          }
          local_58 = local_78;
          local_50 = '\0';
          local_70 = plVar10;
          FUN_00d23480();
          if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          FUN_00d216c0();
        }
        plVar10 = *(longlong **)(unaff_RDI + 0x90);
        if (plVar10 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        (**(code **)(*plVar10 + 0xa00))();
        plVar10 = local_58;
        if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        FUN_00d50b20();
        if (plVar10 != local_90) {
          plVar10 = *(longlong **)(unaff_RDI + 0x90);
          if (plVar10 != (longlong *)0x0) {
            FUN_00d50b00();
          }
          FUN_006f3f00();
          (**(code **)(*(longlong *)CONCAT71(uStack_ef,local_f0) + 0x628))();
          pvVar6 = _pthread_getspecific(pVar14);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_004a1110();
          pvVar6 = _pthread_getspecific(pVar14);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01313ad0();
          local_d0 = local_58;
          local_c8 = 0;
          if (local_50 == '\0') {
            if (local_58 != (longlong *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_50 = '\0';
          }
          local_c8 = '\x01';
          (**(code **)(*plVar10 + 0xa08))();
          if ((local_c8 != '\0') && (local_d0 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_60[0] != '\0') && (local_68 != (undefined *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_98 != '\0') && (CONCAT71(uStack_9f,local_a0) != 0)) {
            FUN_00d50b20();
          }
          if ((local_e8 != '\0') && (CONCAT71(uStack_ef,local_f0) != 0)) {
            FUN_00d50b20();
          }
          FUN_00d50b20();
          FUN_0021f1f0();
        }
        if (*(longlong *)(unaff_RDI + 0x1c0) == 0) {
          local_50 = '\0';
          local_58 = (longlong *)0x0;
        }
        else {
          FUN_006f3f00();
        }
        plVar10 = local_70;
        cVar4 = FUN_0078cda0();
        if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((cVar4 != '\0') && (local_78 != (longlong *)0x0)) {
          local_50 = '\0';
          local_58 = (longlong *)0x0;
          local_48 = local_78;
          local_40 = 0xffffffff;
          local_38 = 0;
          local_40._4_4_ = 0;
          while( true ) {
            if (local_40._4_4_ != 0) {
              if (local_40._4_4_ < 1) {
                iVar17 = -local_40._4_4_;
              }
              else {
                iVar17 = (int)local_40 - local_40._4_4_;
                local_40 = CONCAT44(local_40._4_4_,iVar17);
                FUN_00d23690();
                local_38 = local_38 + local_40._4_4_;
                iVar17 = 0;
              }
              local_40 = CONCAT44(iVar17,(int)local_40);
            }
            lVar12 = (longlong)(int)local_40;
            iVar17 = (int)local_40 + 1;
            local_40 = CONCAT44(local_40._4_4_,iVar17);
            if (*(int *)((longlong)local_48 + 0xc) <= iVar17) break;
            lVar16 = local_48[2];
            local_58 = *(longlong **)(lVar16 + 8 + lVar12 * 8);
            pvVar6 = _pthread_getspecific((pthread_key_t)lVar16);
            pVar14 = (pthread_key_t)lVar16;
            if (pvVar6 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_012e5ae0();
            iVar17 = *(int *)((longlong)local_68 + 0xc);
            if ((local_60[0] != '\0') && (local_68 != (undefined *)0x0)) {
              FUN_00d50b20();
            }
            if (iVar17 == 1) {
              pvVar6 = _pthread_getspecific(pVar14);
              if (pvVar6 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_012e5ae0();
              FUN_00d23310();
              puVar19 = local_68;
              local_f0 = local_60[0];
              pcVar8 = &local_f0;
              pcVar13 = local_60;
              if (local_60[0] == '\0') {
                pcVar13 = pcVar8;
              }
              *pcVar13 = '\0';
              if ((local_60[0] != '\0') && (puVar19 != (undefined *)0x0)) {
                FUN_00d50b20();
              }
              pVar14 = (pthread_key_t)pcVar8;
              if ((local_f0 == '\0') && (puVar19 != (undefined *)0x0)) {
                FUN_00d50b00();
              }
              if ((local_98 != '\0') && (CONCAT71(uStack_9f,local_a0) != 0)) {
                FUN_00d50b20();
              }
              pvVar6 = _pthread_getspecific(pVar14);
              if (pvVar6 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_0126bcd0();
              puVar20 = local_68;
              if ((local_60[0] != '\0') && (local_68 != (undefined *)0x0)) {
                FUN_00d50b20();
              }
              if (puVar20 == (undefined *)0x0) {
                pvVar6 = _pthread_getspecific(pVar14);
                if (pvVar6 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_0126bf30();
              }
              if (puVar19 != (undefined *)0x0) {
                FUN_00d50b20();
              }
            }
          }
          FUN_000be170();
          plVar10 = local_70;
        }
        plVar18 = *(longlong **)(unaff_RDI + 0x90);
        if (plVar18 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        (**(code **)(*plVar18 + 0x988))();
        local_140 = local_78;
        local_138 = '\0';
        cVar4 = (**(code **)(*local_58 + 0x50))();
        if ((local_138 != '\0') && (local_140 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        FUN_00d50b20();
        if (cVar4 == '\0') {
          FUN_002312f0();
        }
        lVar12 = *(longlong *)(unaff_RDI + 0x90);
        if (lVar12 != 0) {
          FUN_00d50b00();
        }
        FUN_019a47c0();
        local_128 = '\0';
        local_130 = plVar10;
        cVar4 = (**(code **)(*local_58 + 0x50))();
        if ((local_128 != '\0') && (local_130 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (lVar12 != 0) {
          FUN_00d50b20();
        }
        if (cVar4 == '\0') {
          lVar12 = *(longlong *)(unaff_RDI + 0x90);
          if (lVar12 != 0) {
            FUN_00d50b00();
          }
          local_118 = '\0';
          local_120 = plVar10;
          FUN_019a4000();
          if ((local_118 != '\0') && (local_120 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (lVar12 != 0) {
            FUN_00d50b20();
          }
          FUN_00d403d0();
          lVar12 = DAT_026e0f08;
          if (DAT_026e0f08 != 0) {
            FUN_00d50b00();
          }
          local_110 = lVar12;
          local_108 = '\x01';
          local_d8 = 0;
          if (unaff_RDI != 0) {
            FUN_00d50b00();
          }
          local_d8 = '\x01';
          local_100 = 0;
          local_f8 = '\0';
          local_e0 = unaff_RDI;
          FUN_00d40470(&local_100,&local_e0,1,1);
          if ((local_f8 != '\0') && (local_100 != 0)) {
            FUN_00d50b20();
          }
          if ((local_d8 != '\0') && (local_e0 != 0)) {
            FUN_00d50b20();
          }
          if ((local_108 != '\0') && (local_110 != 0)) {
            FUN_00d50b20();
          }
          if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        if ((bVar1) && (local_90 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (((char)local_88 != '\0') && (plVar10 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        uVar9 = CONCAT71((int7)((ulonglong)lVar12 >> 8),1);
        if (((char)local_80 != '\0') && (local_78 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        goto LAB_0022ef95;
      }
    }
  }
  uVar9 = 0;
LAB_0022ef95:
  return uVar9 & 0xffffffff;
}


