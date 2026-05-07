// Function: FUN_01673fe0
// Address: 01673fe0
// Size: 2996 bytes
// Class: MUAraAudioSource
// === MUAraAudioSource properties ===
//   double          _cursorTime
//   double          _lastHostCursorTime
//   bool            _lastHostCursorTimeValid
//   double          _hostPlaybackPendingStopTime
//   bool            _controlsLocalPlayback
//   bool            _distributedLocalPlayback
//   double          _lastPendingHostCycleUpdateRequestTime
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


uint64_t FUN_01673fe0(void*param_1)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  void *pvVar4;
  int64_t lVar5;
  int64_t lVar6;
  void*puVar7;
  char *pcVar8;
  int64_t *plVar9;
  int64_t *plVar10;
  void* pVar11;
  char *pcVar12;
  void*puVar13;
  void**ppuVar14;
  uint64_t uVar15;
  void*puVar16;
  int iVar17;
  int64_t *arg1;
  byte bVar18;
  bool bVar19;
  char cVar20;
  void*unaff_R13;
  undefined7 uVar21;
  void*puVar22;
  char local_88;
  undefined7 uStack_87;
  char local_80;
  void*local_78;
  void*local_70;
  void*local_68;
  uint64_t local_60;
  int local_58;
  void*local_50;
  void*local_48;
  void*local_40;
  char local_38 [8];
  
  puVar13 = (void*)0x0;
  local_48 = param_1;
  FUN_01674fe0();
  local_50 = local_78;
  puVar16 = local_78;
  if (((((char)local_70 == '\0') && (local_78 != (void*)0x0)) &&
      (FUN_00d50b00(), puVar16 = local_50, (char)local_70 != '\0')) &&
     (local_78 != (void*)0x0)) {
    FUN_00d50b20();
  }
  if (*(int *)(puVar16 + 0xc) == 0) {
    uVar15 = CONCAT71((int7)((uint64_t)puVar16 >> 8),1);
  }
  else {
    lVar6 = *arg1;
    pvVar4 = _pthread_getspecific((void*)puVar13);
    if (pvVar4 != (void *)0x0) {
      lVar6 = *arg1;
      lVar5 = FUN_00e8b990();
      if (lVar5 != 0) {
        lVar6 = *(int64_t *)(lVar6 + 0x20 + (uint64_t)(*(uint *)(lVar5 + 0x154) & 1) * 8);
      }
    }
    puVar16 = (void*)*arg1;
    if (*(int64_t *)(lVar6 + 0x48) == 0) {
      pvVar4 = _pthread_getspecific((void*)puVar13);
      if (pvVar4 != (void *)0x0) {
        puVar16 = (void*)*arg1;
        lVar6 = FUN_00e8b990();
        if (lVar6 != 0) {
          puVar16 = *(void**)(puVar16 + (uint64_t)(*(uint *)(lVar6 + 0x154) & 1) * 8 + 0x20);
        }
      }
      puVar7 = *(void**)(puVar16 + 0x40);
      if (puVar7 != (void*)0x0) {
        FUN_00d50b00();
      }
      FUN_00d242c0();
      uVar3 = *(uint *)((int64_t)puVar7 + 0xc);
      uVar1 = *(uint *)(local_50 + 0xc);
      pcVar12 = (char *)(uint64_t)uVar1;
      if (uVar3 == uVar1) {
        local_70._0_1_ = '\0';
        local_78 = (void*)0x0;
        local_68 = local_50;
        local_58 = 0;
        local_60 = 0;
        if (*(int *)(local_50 + 0xc) < 1) {
          bVar18 = 1;
        }
        else {
          bVar18 = 1;
          puVar16 = (void*)0x0;
          local_48 = puVar7;
          do {
            local_78 = *(void**)(*(int64_t *)(local_50 + 0x10) + (int64_t)puVar16 * 8);
            pvVar4 = _pthread_getspecific((void*)pcVar12);
            if (pvVar4 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_017120c0();
            bVar2 = FUN_01673220();
            bVar18 = bVar18 & bVar2;
            puVar16 = puVar16 + 1;
            local_60 = CONCAT44(local_60._4_4_,(int)puVar16);
            puVar7 = local_48;
          } while ((int)puVar16 < *(int *)(local_50 + 0xc));
        }
        FUN_0166fd40();
        uVar15 = CONCAT71((int7)((uint64_t)puVar16 >> 8),bVar18 != 0);
      }
      else {
        bVar19 = (int)uVar1 <= (int)uVar3;
        if (uVar3 != 0) {
          local_70._0_1_ = '\0';
          local_78 = (void*)0x0;
          local_68 = local_50;
          local_58 = 0;
          local_60 = 0;
          local_48 = puVar7;
          if (0 < *(int *)(local_50 + 0xc)) {
            lVar6 = 0;
            do {
              local_78 = *(void**)(*(int64_t *)(local_50 + 0x10) + lVar6 * 8);
              FUN_01671da0();
              puVar13 = local_40;
              if (local_38[0] == '\0') {
                if (local_40 == (void*)0x0) goto LAB_01674630;
                FUN_00d50b00();
              }
              else if (local_40 == (void*)0x0) {
LAB_01674630:
                FUN_00d23310();
                puVar16 = local_40;
                local_88 = local_38[0];
                pcVar12 = &local_88;
                pcVar8 = local_38;
                if (local_38[0] == '\0') {
                  pcVar8 = pcVar12;
                }
                *pcVar8 = '\0';
                if ((local_38[0] != '\0') && (puVar16 != (void*)0x0)) {
                  FUN_00d50b20();
                }
                if ((puVar16 != (void*)0x0) && (puVar13 = puVar16, local_88 == '\0')) {
                  FUN_00d50b00();
                }
                bVar19 = false;
              }
              pvVar4 = _pthread_getspecific((void*)pcVar12);
              if (pvVar4 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_017120c0();
              uVar3 = FUN_01673220();
              puVar16 = (void*)(uint64_t)uVar3;
              if (puVar13 != (void*)0x0) {
                FUN_00d50b20();
              }
              bVar19 = (bool)(bVar19 & (byte)uVar3);
              lVar6 = lVar6 + 1;
              local_60 = CONCAT44(local_60._4_4_,(int)lVar6);
            } while ((int)lVar6 < *(int *)(local_50 + 0xc));
          }
          FUN_0166fd40();
          puVar7 = local_48;
        }
        uVar15 = CONCAT71((int7)((uint64_t)puVar16 >> 8),bVar19 != false);
      }
      if (puVar7 != (void*)0x0) {
        FUN_00d50b20();
      }
    }
    else {
      pvVar4 = _pthread_getspecific((void*)puVar13);
      if (pvVar4 != (void *)0x0) {
        puVar16 = (void*)*arg1;
        lVar6 = FUN_00e8b990();
        if (lVar6 != 0) {
          puVar16 = *(void**)(puVar16 + (uint64_t)(*(uint *)(lVar6 + 0x154) & 1) * 8 + 0x20);
        }
      }
      if (puVar16[0x51] == '\0') {
        uVar15 = 0;
LAB_0167475c:
        puVar22 = (void*)0x0;
        if ((void*)*local_48 != (void*)0x0) {
          local_70._0_1_ = '\0';
          local_78 = (void*)0x0;
          local_60 = 0xffffffff;
          local_58 = 0;
          local_68 = (void*)*local_48;
          while( true ) {
            lVar6 = (int64_t)(int)local_60;
            iVar17 = (int)local_60 + 1;
            local_60 = CONCAT44(local_60._4_4_,iVar17);
            puVar13 = local_68;
            if (*(int *)(local_68 + 0xc) <= iVar17) break;
            puVar13 = *(void**)(local_68 + 0x10);
            local_78 = *(void**)(puVar13 + lVar6 * 8 + 8);
            pvVar4 = _pthread_getspecific((void*)puVar13);
            if (pvVar4 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_016501d0();
            puVar16 = local_40;
            if ((local_38[0] != '\0') && (local_40 != (void*)0x0)) {
              FUN_00d50b20();
            }
            if (puVar16 != (void*)0x0) {
              pvVar4 = _pthread_getspecific((void*)puVar13);
              if (pvVar4 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_016501d0();
              puVar16 = (void*)CONCAT71(uStack_87,local_88);
              pvVar4 = _pthread_getspecific((void*)puVar13);
              if (pvVar4 != (void *)0x0) {
                puVar16 = (void*)CONCAT71(uStack_87,local_88);
                lVar6 = FUN_00e8b990();
                if (lVar6 != 0) {
                  puVar16 = *(void**)
                             (puVar16 + (uint64_t)(*(uint *)(lVar6 + 0x154) & 1) * 8 + 0x20);
                }
              }
              FUN_015058d0();
              puVar22 = local_40;
              if (local_40 == (void*)0x0) {
                puVar22 = (void*)0x0;
              }
              else {
                uVar21 = (undefined7)(uVar15 >> 8);
                if (local_38[0] == '\0') {
                  FUN_00d50b00();
                  uVar15 = CONCAT71(uVar21,1);
                  if ((local_38[0] != '\0') && (local_40 != (void*)0x0)) {
                    FUN_00d50b20();
                  }
                }
                else {
                  local_38[0] = '\0';
                  uVar15 = CONCAT71(uVar21,1);
                }
              }
              if ((local_80 != '\0') && (CONCAT71(uStack_87,local_88) != 0)) {
                FUN_00d50b20();
              }
              break;
            }
            puVar16 = (void*)0x0;
            if (local_60._4_4_ != 0) {
              if (local_60._4_4_ < 1) {
                iVar17 = -local_60._4_4_;
              }
              else {
                local_60 = CONCAT44(local_60._4_4_,(int)local_60 - local_60._4_4_);
                FUN_00d23690();
                local_58 = local_58 + local_60._4_4_;
                iVar17 = 0;
              }
              local_60 = CONCAT44(iVar17,(int)local_60);
            }
          }
          FUN_0049cc10();
        }
      }
      else {
        puVar7 = (void*)FUN_00e8fc40();
        FUN_00d4ff40();
        puVar13 = &g_02572358;
        *puVar7 = &g_02572358;
        (*g_02572370)();
        if ((void*)*local_48 != (void*)0x0) {
          local_70._0_1_ = '\0';
          local_78 = (void*)0x0;
          local_60 = 0xffffffff;
          local_58 = 0;
          local_60._4_4_ = 0;
          local_68 = (void*)*local_48;
          while( true ) {
            if (local_60._4_4_ != 0) {
              if (local_60._4_4_ < 1) {
                iVar17 = -local_60._4_4_;
              }
              else {
                iVar17 = (int)local_60 - local_60._4_4_;
                local_60 = CONCAT44(local_60._4_4_,iVar17);
                FUN_00d23690();
                local_58 = local_58 + local_60._4_4_;
                iVar17 = 0;
              }
              local_60 = CONCAT44(iVar17,(int)local_60);
            }
            lVar6 = (int64_t)(int)local_60;
            iVar17 = (int)local_60 + 1;
            local_60 = CONCAT44(local_60._4_4_,iVar17);
            if (*(int *)(local_68 + 0xc) <= iVar17) break;
            lVar5 = *(int64_t *)(local_68 + 0x10);
            puVar16 = *(void**)(lVar5 + 8 + lVar6 * 8);
            local_78 = puVar16;
            pvVar4 = _pthread_getspecific((void*)lVar5);
            puVar13 = local_78;
            pVar11 = (void*)lVar5;
            if ((pvVar4 != (void *)0x0) && (lVar6 = FUN_00e8b990(), puVar16 = puVar13, lVar6 != 0))
            {
              puVar16 = *(void**)
                         (puVar13 + (uint64_t)(*(uint *)(lVar6 + 0x154) & 1) * 8 + 0x20);
            }
            FUN_016501d0();
            unaff_R13 = local_40;
            if (local_38[0] == '\0') {
              if (local_40 != (void*)0x0) {
                FUN_00d50b00();
                if ((local_38[0] != '\0') && (local_40 != (void*)0x0)) {
                  FUN_00d50b20();
                }
                goto LAB_01674220;
              }
            }
            else if (local_40 != (void*)0x0) {
LAB_01674220:
              pvVar4 = _pthread_getspecific(pVar11);
              if (pvVar4 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_015058d0();
              puVar13 = local_40;
              if (local_38[0] == '\0') {
                if (local_40 != (void*)0x0) {
                  FUN_00d50b00();
                  if ((local_38[0] != '\0') && (local_40 != (void*)0x0)) {
                    FUN_00d50b20();
                  }
                  goto LAB_016742b0;
                }
              }
              else if (local_40 != (void*)0x0) {
LAB_016742b0:
                pvVar4 = _pthread_getspecific(pVar11);
                if (pvVar4 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_01510360(0,0,0);
                puVar16 = local_40;
                if ((local_38[0] != '\0') && (local_40 != (void*)0x0)) {
                  FUN_00d50b20();
                }
                if (puVar16 != (void*)0x0) {
                  local_38[0] = '\0';
                  local_40 = puVar13;
                  FUN_00d21140();
                  if ((local_38[0] != '\0') && (local_40 != (void*)0x0)) {
                    FUN_00d50b20();
                  }
                }
                FUN_00d50b20();
              }
              FUN_00d50b20();
            }
          }
          puVar13 = local_68;
          FUN_0049cc10();
        }
        FUN_00d242c0();
        FUN_00d23340();
        puVar22 = local_78;
        puVar13 = (void*)CONCAT71((int7)((uint64_t)puVar13 >> 8),(char)local_70);
        ppuVar14 = &local_40;
        if ((char)local_70 != '\0') {
          ppuVar14 = &local_70;
        }
        local_40 = (void*)CONCAT71(local_40._1_7_,(char)local_70);
        *(void*)ppuVar14 = 0;
        if (((char)local_70 != '\0') && (local_78 != (void*)0x0)) {
          FUN_00d50b20();
        }
        if (puVar22 == (void*)0x0) {
          puVar22 = (void*)0x0;
          uVar15 = 0;
        }
        else {
          uVar15 = CONCAT71((int7)((uint64_t)unaff_R13 >> 8),1);
          if ((char)local_40 == '\0') {
            FUN_00d50b00();
          }
        }
        if (puVar7 != (void*)0x0) {
          FUN_00d50b20();
        }
        if (puVar22 == (void*)0x0) goto LAB_0167475c;
      }
      plVar9 = (int64_t *)FUN_00e8fc40();
      FUN_01676840();
      (**(code **)(*plVar9 + 0x18))();
      if (puVar22 != (void*)0x0) {
        pvVar4 = _pthread_getspecific((void*)puVar13);
        plVar10 = plVar9;
        if ((pvVar4 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
          plVar10 = (int64_t *)plVar9[(uint64_t)(*(uint *)(lVar6 + 0x154) & 1) + 4];
        }
        puVar16 = (void*)plVar10[7];
        pvVar4 = _pthread_getspecific((void*)puVar13);
        if (pvVar4 != (void *)0x0) {
          puVar16 = (void*)plVar10[7];
          lVar6 = FUN_00e8b990();
          if (lVar6 != 0) {
            puVar16 = *(void**)
                       (puVar16 + (uint64_t)(*(uint *)(lVar6 + 0x154) & 1) * 8 + 0x20);
          }
        }
        FUN_015127c0();
      }
      pvVar4 = _pthread_getspecific((void*)puVar13);
      plVar10 = plVar9;
      if ((pvVar4 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
        plVar10 = (int64_t *)plVar9[(uint64_t)(*(uint *)(lVar6 + 0x154) & 1) + 4];
      }
      *(void*)(plVar10 + 0xb) = 0;
      pvVar4 = _pthread_getspecific((void*)puVar13);
      if ((pvVar4 == (void *)0x0) || (lVar6 = FUN_00e8b990(), lVar6 == 0)) {
        *(void*)((int64_t)plVar9 + 0x59) = 0;
        if (local_50 != (void*)0x0) goto LAB_01674ad7;
LAB_01674bbc:
        cVar20 = (char)uVar15;
        FUN_00d50b20();
      }
      else {
        *(void*)(plVar9[(uint64_t)(*(uint *)(lVar6 + 0x154) & 1) + 4] + 0x59) = 0;
        if (local_50 == (void*)0x0) goto LAB_01674bbc;
LAB_01674ad7:
        local_48 = (void*)CONCAT44(local_48._4_4_,(int)uVar15);
        local_70._0_1_ = '\0';
        local_78 = (void*)0x0;
        local_68 = local_50;
        local_58 = 0;
        local_60 = 0;
        if (0 < *(int *)(local_50 + 0xc)) {
          lVar6 = 0;
          do {
            puVar16 = *(void**)(*(int64_t *)(local_50 + 0x10) + lVar6 * 8);
            local_78 = puVar16;
            pvVar4 = _pthread_getspecific((void*)puVar13);
            if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
              puVar16 = *(void**)
                         (puVar16 + (uint64_t)(*(uint *)(lVar5 + 0x154) & 1) * 8 + 0x20);
            }
            FUN_017120c0();
            lVar6 = lVar6 + 1;
            local_60 = CONCAT44(local_60._4_4_,(int)lVar6);
          } while ((int)lVar6 < *(int *)(local_50 + 0xc));
        }
        FUN_0166fd40();
        uVar15 = (uint64_t)local_48 & 0xffffffff;
        cVar20 = (char)local_48;
        if (plVar9 != (int64_t *)0x0) goto LAB_01674bbc;
      }
      if ((cVar20 != '\0') && (puVar22 != (void*)0x0)) {
        FUN_00d50b20();
      }
      uVar15 = CONCAT71((int7)((uint64_t)puVar16 >> 8),1);
      if (local_50 == (void*)0x0) goto LAB_01674be6;
    }
  }
  FUN_00d50b20();
LAB_01674be6:
  return uVar15 & 0xffffffff;
}

