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

