// ===================================================================
// MUAudioEffectRenderProcessorIdentifier — Complete reconstructed pseudocode
// 10 functions
// ===================================================================

// Registered properties (9):
//                   _parameterChangeCounter
//                   _renderProcessor
//                   _inputRecorder
//                   _outputRecorder
//                   _parameterIdentifier
//                   _distribution
//                   _lowercaseModeTitle
//                   _lowercaseLocalizedModeTitle
//                   _score


// ============================================================
// 0123e220
// ============================================================
// Function: FUN_0123e220
// Address: 0123e220
// Size: 1258 bytes
// Class: MUAudioEffectRenderProcessorIdentifier
// === MUAudioEffectRenderProcessorIdentifier properties ===
//                   _parameterChangeCounter
//                   _renderProcessor
//                   _inputRecorder
//                   _outputRecorder
//                   _parameterIdentifier
//                   _distribution
//                   _lowercaseModeTitle
//                   _lowercaseLocalizedModeTitle
//                   _score


void FUN_0123e220(void)

{
  char cVar1;
  char *pcVar2;
  void *pvVar3;
  int64_t lVar4;
  int64_t *plVar5;
  void* pVar6;
  char *pcVar7;
  int64_t arg1;
  int64_t *plVar8;
  int64_t *this_ptr;
  int64_t local_a8;
  char local_a0;
  int64_t *local_98;
  char local_90;
  int64_t *local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  int64_t *local_68;
  int64_t *local_60;
  int64_t *local_58;
  int64_t *local_50;
  int64_t *local_48;
  char local_40 [8];
  char local_38 [8];
  
  if (*(int64_t *)(arg1 + 0xb0) != 0) goto LAB_0123e6cd;
  plVar8 = *(int64_t **)(arg1 + 0xa0);
  if (plVar8 != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  local_50 = plVar8;
  FUN_00d23310();
  plVar8 = local_48;
  local_38[0] = local_40[0];
  pcVar7 = local_38;
  pcVar2 = local_40;
  if (local_40[0] == '\0') {
    pcVar2 = pcVar7;
  }
  *pcVar2 = '\0';
  if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  pVar6 = (void*)pcVar7;
  if (local_38[0] == '\0') {
    if (plVar8 != (int64_t *)0x0) {
      FUN_00d50b00();
      goto LAB_0123e2c2;
    }
  }
  else if (plVar8 != (int64_t *)0x0) {
LAB_0123e2c2:
    pvVar3 = _pthread_getspecific(pVar6);
    if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
      plVar8 = (int64_t *)plVar8[(uint64_t)(*(uint *)(lVar4 + 0x154) & 1) + 4];
    }
    (**(code **)(*plVar8 + 0x378))();
    if (local_40[0] == '\0') {
      if (local_48 != (int64_t *)0x0) {
        local_58 = local_48;
        FUN_00d50b00();
        if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        goto LAB_0123e341;
      }
    }
    else {
      local_58 = local_48;
      if (local_48 != (int64_t *)0x0) {
LAB_0123e341:
        pvVar3 = _pthread_getspecific(pVar6);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_013941c0();
        if (local_40[0] == '\0') {
          if (local_48 != (int64_t *)0x0) {
            local_68 = local_48;
            FUN_00d50b00();
            if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            goto LAB_0123e3bb;
          }
        }
        else {
          local_68 = local_48;
          if (local_48 != (int64_t *)0x0) {
LAB_0123e3bb:
            lVar4 = g_02704060;
            if (g_02704060 != 0) {
              FUN_00d50b00();
            }
            local_a8 = lVar4;
            local_a0 = '\x01';
            FUN_00d91000(1,&local_a8);
            local_60 = local_48;
            if (local_40[0] == '\0') {
              if (((local_48 != (int64_t *)0x0) && (FUN_00d50b00(), local_40[0] != '\0')) &&
                 (local_48 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
            }
            else {
              local_40[0] = '\0';
            }
            if ((local_a0 != '\0') && (local_a8 != 0)) {
              FUN_00d50b20();
            }
            if (local_60 != (int64_t *)0x0) {
              if (1 < *(int *)((int64_t)local_60 + 0xc)) {
                FUN_00d23310();
                plVar8 = local_48;
                pcVar7 = local_40;
                if (local_40[0] == '\0') {
                  pcVar7 = local_38;
                }
                local_38[0] = local_40[0];
                *pcVar7 = '\0';
                if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                local_98 = local_68;
                local_90 = '\0';
                cVar1 = (**(code **)(*plVar8 + 0x50))();
                if ((local_90 != '\0') && (local_98 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                if (local_38[0] != '\0') {
                  FUN_00d50b20();
                }
                plVar8 = local_60;
                if (cVar1 == '\0') {
                  FUN_00d23620();
                  local_48 = local_68;
                  local_40[0] = '\0';
                  FUN_00d23370();
                  if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
                    FUN_00d50b20();
                  }
                  lVar4 = g_02704060;
                  local_88 = plVar8;
                  local_80 = '\0';
                  if (g_02704060 != 0) {
                    FUN_00d50b00();
                  }
                  local_78 = lVar4;
                  local_70 = '\x01';
                  FUN_00d95130();
                  plVar8 = local_48;
                  if (local_50 == local_48) {
LAB_0123e5c1:
                    if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
                      FUN_00d50b20();
                    }
                  }
                  else {
                    if (local_40[0] == '\0') {
                      if (local_48 != (int64_t *)0x0) {
                        FUN_00d50b00();
                      }
                      if (local_50 == (int64_t *)0x0) {
                        local_50 = plVar8;
                      }
                      else {
                        local_50 = plVar8;
                        FUN_00d50b20();
                      }
                      goto LAB_0123e5c1;
                    }
                    if (local_50 != (int64_t *)0x0) {
                      local_50 = local_48;
                      FUN_00d50b20();
                    }
                    local_40[0] = '\0';
                    local_50 = plVar8;
                  }
                  if ((local_70 != '\0') && (local_78 != 0)) {
                    FUN_00d50b20();
                  }
                  if ((local_80 != '\0') && (local_88 != (int64_t *)0x0)) {
                    FUN_00d50b20();
                  }
                }
              }
              FUN_00d50b20();
            }
            FUN_00d50b20();
          }
        }
        FUN_00d50b20();
      }
    }
    FUN_00d50b20();
  }
  FUN_0123c8b0();
  plVar8 = *(int64_t **)(arg1 + 0xb0);
  plVar5 = plVar8;
  if (plVar8 != local_48) {
    if (local_40[0] == '\0') {
      if (local_48 == (int64_t *)0x0) {
        plVar5 = (int64_t *)0x0;
        goto LAB_0123e664;
      }
      FUN_00d50b00();
      plVar8 = *(int64_t **)(arg1 + 0xb0);
      *(int64_t **)(arg1 + 0xb0) = local_48;
      plVar5 = local_48;
    }
    else {
      local_40[0] = '\0';
      plVar5 = local_48;
LAB_0123e664:
      *(int64_t **)(arg1 + 0xb0) = plVar5;
    }
    if (plVar8 != (int64_t *)0x0) {
      FUN_00d50b20();
      plVar5 = local_48;
    }
  }
  if ((local_40[0] != '\0') && (plVar5 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (local_50 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
LAB_0123e6cd:
  *(void*)(this_ptr + 1) = 0;
  lVar4 = *(int64_t *)(arg1 + 0xb0);
  if (lVar4 != 0) {
    FUN_00d50b00();
  }
  *this_ptr = lVar4;
  *(void*)(this_ptr + 1) = 1;
  return;
}



// ============================================================
// 0123b3d0
// ============================================================
// Function: FUN_0123b3d0
// Address: 0123b3d0
// Size: 1658 bytes
// Class: MUAudioEffectRenderProcessorIdentifier
// === MUAudioEffectRenderProcessorIdentifier properties ===
//                   _parameterChangeCounter
//                   _renderProcessor
//                   _inputRecorder
//                   _outputRecorder
//                   _parameterIdentifier
//                   _distribution
//                   _lowercaseModeTitle
//                   _lowercaseLocalizedModeTitle
//                   _score


void FUN_0123b3d0(int64_t *param_1,uint64_t param_2,char param_3,uint32_t param_4)

{
  bool bVar1;
  uint64_t uVar2;
  char cVar3;
  byte bVar4;
  int64_t lVar5;
  void *pvVar6;
  void* pVar7;
  uint64_t uVar8;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t lVar9;
  int64_t *plVar10;
  int iVar11;
  int64_t *local_a8;
  char local_a0;
  uint32_t local_94;
  int64_t local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  float local_70;
  float local_6c;
  int64_t local_68;
  char local_60;
  uint64_t local_58;
  uint64_t local_50;
  int local_48;
  int64_t local_40;
  char local_38;
  
  local_94 = param_4;
  cVar3 = FUN_0124d450();
  if (cVar3 == '\0') {
    cVar3 = (**(code **)(*this_ptr + 0x498))();
    if (cVar3 == '\0') {
      if ((*arg1 != 0) && (FUN_0123b2a0(), lVar5 = local_68, local_68 != 0)) {
        if (local_60 == '\0') {
          FUN_00d50b00();
        }
        if (this_ptr[0xd] != lVar5) {
          FUN_00d64850();
          lVar9 = this_ptr[0xd];
          if (lVar9 != lVar5) {
            FUN_00d50b00();
            this_ptr[0xd] = lVar5;
            if (lVar9 != 0) {
              FUN_00d50b20();
            }
          }
          FUN_00d64910();
        }
        (**(code **)(*this_ptr + 0x478))();
        local_80 = local_40;
        local_78 = 0;
        if (local_38 == '\0') {
          if (local_40 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        local_78 = '\x01';
        FUN_00b810f0();
        lVar5 = local_68;
        if (local_60 == '\0') {
          if (local_68 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_60 = '\0';
        }
        FUN_0123b010();
        if (lVar5 != 0) {
          FUN_00d50b20();
        }
        if ((local_60 != '\0') && (local_68 != 0)) {
          FUN_00d50b20();
        }
        if ((local_78 != '\0') && (local_80 != 0)) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        FUN_00d50b20();
      }
    }
    else {
      (**(code **)(*this_ptr + 0x478))();
      local_90 = local_40;
      local_88 = 0;
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      local_88 = '\x01';
      FUN_00b810f0();
      lVar5 = local_68;
      if (local_60 == '\0') {
        if (local_68 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_60 = '\0';
      }
      FUN_0123b010();
      if (lVar5 != 0) {
        FUN_00d50b20();
      }
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
      if ((local_88 != '\0') && (local_90 != 0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  cVar3 = FUN_0124d450();
  if (((cVar3 != '\0') && (param_3 != '\0')) && (local_58 = this_ptr[7], local_58 != 0)) {
    local_60 = 0;
    local_68 = 0;
    local_50._0_4_ = -1;
    local_50._4_4_ = 0;
    local_48 = 0;
    iVar11 = 0;
    while( true ) {
      lVar5 = (int64_t)(int)local_50;
      local_50._0_4_ = (int)local_50 + 1;
      if (*(int *)(local_58 + 0xc) <= (int)local_50) break;
      local_68 = *(void*)(*(int64_t *)(local_58 + 0x10) + 8 + lVar5 * 8);
      pvVar6 = _pthread_getspecific((void*)*(int64_t *)(local_58 + 0x10));
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      bVar4 = FUN_01397570();
      iVar11 = iVar11 + (uint)bVar4;
      if (local_50._4_4_ != 0) {
        if (local_50._4_4_ < 0) {
          local_50._4_4_ = -local_50._4_4_;
        }
        else {
          local_50._0_4_ = (int)local_50 - local_50._4_4_;
          FUN_00d23690();
          local_48 = local_48 + local_50._4_4_;
          local_50._4_4_ = 0;
        }
      }
    }
    FUN_00115190();
    if (iVar11 == 0) {
      local_6c = 0.0;
      lVar5 = this_ptr[7];
    }
    else {
      local_6c = g_02390124 / (float)iVar11;
      lVar5 = this_ptr[7];
    }
    if (lVar5 != 0) {
      local_60 = 0;
      local_68 = 0;
      local_48 = 0;
      local_50 = 0;
      uVar2 = lVar5;
      if (0 < *(int *)(lVar5 + 0xc)) {
        local_70 = 0.0;
        lVar9 = 0;
        uVar8 = local_58;
        local_58 = lVar5;
        do {
          local_68 = *(void*)(*(int64_t *)(lVar5 + 0x10) + lVar9 * 8);
          pVar7 = (void*)uVar8;
          pvVar6 = _pthread_getspecific(pVar7);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          cVar3 = FUN_01397570();
          if ((cVar3 == '\0') || (*param_1 == 0)) {
            plVar10 = (int64_t *)0x0;
            bVar1 = false;
          }
          else {
            FUN_00df4f00(local_70,local_6c + local_70);
            plVar10 = (int64_t *)(local_40 + 0x10);
            if (local_40 == 0) {
              bVar1 = false;
              plVar10 = (int64_t *)0x0;
            }
            else if (local_38 == '\0') {
              (**(code **)(*plVar10 + 0x10))();
              FUN_00d50b00();
              bVar1 = true;
              if ((local_38 != '\0') && (local_40 != 0)) {
                FUN_00d50b20();
              }
            }
            else {
              local_38 = '\0';
              bVar1 = true;
            }
          }
          pvVar6 = _pthread_getspecific(pVar7);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          local_a0 = '\0';
          uVar8 = (uint64_t)(byte)local_94;
          local_a8 = plVar10;
          FUN_01397bb0(uVar8,&local_a8);
          if ((local_a0 != '\0') && (local_a8 != (int64_t *)0x0)) {
            (**(code **)(*local_a8 + 0x10))();
            FUN_00d50b20();
          }
          if (cVar3 != '\0') {
            local_70 = local_70 + local_6c;
          }
          if ((bVar1) && (plVar10 != (int64_t *)0x0)) {
            (**(code **)(*plVar10 + 0x10))();
            FUN_00d50b20();
          }
          lVar9 = lVar9 + 1;
          local_50 = CONCAT44(local_50._4_4_,(int)lVar9);
          uVar2 = local_58;
        } while ((int)lVar9 < *(int *)(lVar5 + 0xc));
      }
      local_58 = uVar2;
      FUN_00115190();
    }
  }
  return;
}



// ============================================================
// 012380b0
// ============================================================
// Function: FUN_012380b0
// Address: 012380b0
// Size: 1377 bytes
// Class: MUAudioEffectRenderProcessorIdentifier
// === MUAudioEffectRenderProcessorIdentifier properties ===
//                   _parameterChangeCounter
//                   _renderProcessor
//                   _inputRecorder
//                   _outputRecorder
//                   _parameterIdentifier
//                   _distribution
//                   _lowercaseModeTitle
//                   _lowercaseLocalizedModeTitle
//                   _score


void FUN_012380b0(void)

{
  int64_t *plVar1;
  int64_t *plVar2;
  int64_t *plVar3;
  char *pcVar4;
  int64_t this_ptr;
  int64_t *local_58;
  int64_t *local_50;
  char local_48 [8];
  int64_t *local_40;
  char local_38 [8];
  
  if (*(int64_t **)(this_ptr + 0xf8) == (int64_t *)0x0) goto LAB_0123860e;
  (**(code **)(**(int64_t **)(this_ptr + 0xf8) + 0x5c0))();
  plVar1 = local_40;
  local_50 = local_40;
  if (local_38[0] == '\0') {
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b00();
      if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_0123811e;
    }
LAB_01238180:
    (**(code **)(**(int64_t **)(this_ptr + 0xf8) + 0x370))();
  }
  else {
    if (local_40 == (int64_t *)0x0) goto LAB_01238180;
LAB_0123811e:
    FUN_00d50b00();
    FUN_012364a0();
    plVar2 = local_40;
    if (plVar1 == local_40) {
      if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else if (local_38[0] == '\0') {
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      local_50 = plVar2;
      FUN_00d50b20();
    }
    else {
      FUN_00d50b20();
      local_50 = plVar2;
    }
    FUN_00d50b20();
    (**(code **)(*g_028ac258 + 0x368))();
    FUN_01237080();
    plVar1 = local_40;
    if (local_38[0] == '\0') {
      if (((local_40 != (int64_t *)0x0) && (FUN_00d50b00(), local_38[0] != '\0')) &&
         (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38[0] = '\0';
    }
    if (plVar1 == (int64_t *)0x0) {
      FUN_01238a00();
      local_58 = local_40;
      if (local_40 == (int64_t *)0x0) {
        local_58 = plVar1;
      }
      else if (((local_38[0] == '\0') && (FUN_00d50b00(), local_38[0] != '\0')) &&
              (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_01238aa0();
      FUN_00d21140();
    }
    else {
      FUN_00d24140();
      local_58 = plVar1;
    }
    (**(code **)(**(int64_t **)(this_ptr + 0xf8) + 0x388))();
    plVar1 = *(int64_t **)(this_ptr + 0xf8);
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    local_38[0] = '\0';
    local_40 = plVar1;
    FUN_00e323f0();
    if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if (0x1e0 < *(int *)(g_028ac248 + 0xc)) {
LAB_01238434:
      FUN_00d23310();
      plVar1 = local_40;
      local_48[0] = local_38[0];
      pcVar4 = local_38;
      if (local_38[0] == '\0') {
        pcVar4 = local_48;
      }
      *pcVar4 = '\0';
      if ((local_38[0] != '\0') && (plVar1 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_48[0] == '\0') && (plVar1 != (int64_t *)0x0)) {
        FUN_00d50b00();
      }
      FUN_01237080();
      plVar2 = local_40;
      if (local_38[0] == '\0') {
        if (((local_40 != (int64_t *)0x0) && (FUN_00d50b00(), local_38[0] != '\0')) &&
           (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_38[0] = '\0';
      }
      do {
        FUN_01237130();
        plVar3 = local_40;
        if (local_38[0] == '\0') {
          if (local_40 == (int64_t *)0x0) goto LAB_01238530;
          FUN_00d50b00();
          if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        else if (local_40 == (int64_t *)0x0) goto LAB_01238530;
        (**(code **)(*plVar3 + 0x370))();
        FUN_00d50b20();
      } while( true );
    }
LAB_012385c2:
    (**(code **)(*g_028ac258 + 0x378))();
    if (local_58 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if (local_50 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  if (*(int64_t *)(this_ptr + 0xf8) != 0) {
    *(void*)(this_ptr + 0xf8) = 0;
    FUN_00d50b20();
  }
LAB_0123860e:
  FUN_00b342a0();
  return;
LAB_01238530:
  local_38[0] = '\0';
  local_40 = plVar1;
  FUN_00e383c0();
  if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d23620();
  if (plVar2 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (plVar1 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (*(int *)(g_028ac248 + 0xc) < 0x1e1) goto LAB_012385c2;
  goto LAB_01238434;
}



// ============================================================
// 0123a4e0
// ============================================================
// Function: FUN_0123a4e0
// Address: 0123a4e0
// Size: 932 bytes
// Class: MUAudioEffectRenderProcessorIdentifier
// String references:
//   "%@.m4a"
// === MUAudioEffectRenderProcessorIdentifier properties ===
//                   _parameterChangeCounter
//                   _renderProcessor
//                   _inputRecorder
//                   _outputRecorder
//                   _parameterIdentifier
//                   _distribution
//                   _lowercaseModeTitle
//                   _lowercaseLocalizedModeTitle
//                   _score


void FUN_0123a4e0(uint64_t param_1,void*param_2)

{
  char cVar1;
  uint64_t uVar2;
  void*arg1;
  void*this_ptr;
  int64_t *plVar3;
  int64_t *plVar4;
  int64_t local_d0;
  char local_c8;
  int64_t *local_c0;
  char local_b8;
  int64_t *local_b0;
  char local_a8;
  int64_t *local_a0;
  char local_98;
  int64_t *local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  int64_t *local_70;
  int64_t local_68;
  char local_60;
  uint64_t local_58;
  int64_t *local_50;
  uint local_48;
  int64_t local_40;
  char local_38;
  
  uVar2 = (**(code **)(*(int64_t *)*arg1 + 0x3a0))();
  if ((char)uVar2 == '\0') {
    uVar2 = (**(code **)(*(int64_t *)*arg1 + 0x3f0))();
    plVar4 = local_50;
    if (local_50 == (int64_t *)0x0) {
      plVar4 = (int64_t *)0x0;
      local_58 = 0;
    }
    else {
      local_58 = CONCAT71((int7)((uint64_t)uVar2 >> 8),1);
      if ((char)local_48 == '\0') {
        FUN_00d50b00();
        if (((char)local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
  }
  else {
    plVar4 = (int64_t *)*arg1;
    if (plVar4 == (int64_t *)0x0) {
      local_58 = 0;
      plVar4 = (int64_t *)0x0;
    }
    else {
      local_58 = CONCAT71((int7)((uint64_t)uVar2 >> 8),*(char *)(arg1 + 1));
      if (*(char *)(arg1 + 1) != '\0') {
        FUN_00d50b00();
      }
    }
  }
  (**(code **)(*(int64_t *)*param_2 + 0x388))();
  plVar3 = local_50;
  if (((char)local_48 == '\0') && (local_50 != (int64_t *)0x0)) {
    FUN_00d50b00();
    if (((char)local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  local_70 = plVar3;
  local_c0 = plVar3;
  local_b8 = '\0';
  (**(code **)(*plVar4 + 0x400))(param_1,&local_c0);
  plVar3 = local_50;
  if ((char)local_48 == '\0') {
    if (local_50 != (int64_t *)0x0) {
      FUN_00d50b00();
      if (((char)local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    local_48 = local_48 & 0xffffff00;
  }
  if ((local_b8 != '\0') && (local_c0 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  cVar1 = (**(code **)(*plVar3 + 0x398))();
  if (cVar1 == '\0') {
LAB_0123a660:
    (**(code **)(*(int64_t *)*param_2 + 0x390))();
    local_48 = 1;
    local_50 = &g_024c5048;
    local_38 = 0;
    if (local_d0 != 0) {
      FUN_00d50b00();
    }
    local_40 = local_d0;
    local_38 = '\x01';
    FUN_00d8cb40(param_1,&local_50);
    local_68 = local_80;
    local_60 = 0;
    if (local_78 == '\0') {
      if (local_80 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_78 = '\0';
    }
    local_60 = '\x01';
    (**(code **)(*plVar4 + 0x400))(param_1,&local_68);
    plVar4 = local_90;
    if (plVar3 == local_90) {
LAB_0123a772:
      if ((local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      if (local_88 == '\0') {
        if (local_90 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        FUN_00d50b20();
        plVar3 = plVar4;
        goto LAB_0123a772;
      }
      FUN_00d50b20();
      local_88 = '\0';
      plVar3 = local_90;
    }
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    local_50 = &g_024c5048;
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if ((local_c8 != '\0') && (local_d0 != 0)) {
      FUN_00d50b20();
    }
    cVar1 = (**(code **)(*plVar3 + 0x398))();
    if (cVar1 != '\0') {
      local_98 = '\0';
      local_a0 = plVar3;
      cVar1 = FUN_00b80190();
      if ((local_98 != '\0') && (local_a0 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (cVar1 != '\0') goto LAB_0123a82d;
    }
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
    FUN_00d50b20();
  }
  else {
    local_b0 = plVar3;
    local_a8 = '\0';
    cVar1 = FUN_00b80190();
    if ((local_a8 != '\0') && (local_b0 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (cVar1 == '\0') goto LAB_0123a660;
LAB_0123a82d:
    *this_ptr = plVar3;
    *(void*)(this_ptr + 1) = 1;
  }
  if (local_70 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((char)local_58 != '\0') {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 0123dab0
// ============================================================
// Function: FUN_0123dab0
// Address: 0123dab0
// Size: 1069 bytes
// Class: MUAudioEffectRenderProcessorIdentifier
// === MUAudioEffectRenderProcessorIdentifier properties ===
//                   _parameterChangeCounter
//                   _renderProcessor
//                   _inputRecorder
//                   _outputRecorder
//                   _parameterIdentifier
//                   _distribution
//                   _lowercaseModeTitle
//                   _lowercaseLocalizedModeTitle
//                   _score


void FUN_0123dab0(int64_t *param_1)

{
  char cVar1;
  uint32_t uVar2;
  int64_t *this_ptr;
  uint64_t uVar3;
  int64_t *local_c8;
  char local_c0;
  int64_t *local_b8;
  char local_b0;
  int64_t *local_a8;
  char local_a0;
  int64_t local_88;
  char local_80;
  int64_t local_48;
  char local_40;
  int64_t local_38;
  char local_30;
  
  cVar1 = FUN_0124d450();
  if ((cVar1 == '\0') && (cVar1 = (**(code **)(*this_ptr + 0x498))(), cVar1 != '\0')) {
    (**(code **)(*this_ptr + 0x478))();
    if (local_48 == 0) {
      cVar1 = '\0';
    }
    else {
      (**(code **)(*this_ptr + 0x478))();
      (**(code **)(*local_c8 + 0x370))();
      if (local_38 == 0) {
        cVar1 = '\0';
      }
      else {
        (**(code **)(*this_ptr + 0x478))();
        (**(code **)(*local_a8 + 0x370))();
        FUN_00b7e000();
        if (local_80 == '\0') {
          if (local_88 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_80 = '\0';
        }
        cVar1 = (**(code **)(*local_b8 + 0x50))();
        if (local_88 != 0) {
          FUN_00d50b20();
        }
        if ((local_80 != '\0') && (local_88 != 0)) {
          FUN_00d50b20();
        }
        if ((local_b0 != '\0') && (local_b8 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_a0 != '\0') && (local_a8 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      if ((local_30 != '\0') && (local_38 != 0)) {
        FUN_00d50b20();
      }
      if ((local_c0 != '\0') && (local_c8 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if (cVar1 == '\0') {
      (**(code **)(*this_ptr + 0x478))();
      if (local_30 == '\0') {
        if (local_38 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_30 = '\0';
      }
      FUN_00b810f0();
      if (local_40 == '\0') {
        if (local_48 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_40 = '\0';
      }
      FUN_0123b010();
      if (local_48 != 0) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if (local_38 != 0) {
        FUN_00d50b20();
      }
      if ((local_30 != '\0') && (local_38 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      (**(code **)(*this_ptr + 0x478))();
      if (local_30 == '\0') {
        if (local_38 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_30 = '\0';
      }
      uVar2 = (**(code **)(*this_ptr + 0x380))();
      uVar3 = (**(code **)(*this_ptr + 0x370))();
      (**(code **)(*this_ptr + 0x378))();
      FUN_00b80910(uVar3,uVar2);
      if (local_40 == '\0') {
        if (local_48 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_40 = '\0';
      }
      FUN_0123b010();
      if (local_48 != 0) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if (local_38 != 0) {
        FUN_00d50b20();
      }
      if ((local_30 != '\0') && (local_38 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  param_1 = (int64_t *)*param_1;
  if (param_1 != (int64_t *)0x0) {
    if (this_ptr != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    (**(code **)(*param_1 + 0x18))(g_02390124);
    if (this_ptr != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  return;
}



// ============================================================
// 01237b00
// ============================================================
// Function: FUN_01237b00
// Address: 01237b00
// Size: 873 bytes
// Class: MUAudioEffectRenderProcessorIdentifier
// === MUAudioEffectRenderProcessorIdentifier properties ===
//                   _parameterChangeCounter
//                   _renderProcessor
//                   _inputRecorder
//                   _outputRecorder
//                   _parameterIdentifier
//                   _distribution
//                   _lowercaseModeTitle
//                   _lowercaseLocalizedModeTitle
//                   _score


void FUN_01237b00(void)

{
  int64_t *plVar1;
  uint32_t uVar2;
  int64_t *plVar3;
  int64_t this_ptr;
  int64_t *local_40;
  char local_38;
  
  FUN_00b341c0();
  FUN_01237550();
  if (local_38 == '\0') {
    if (local_40 == (int64_t *)0x0) {
      return;
    }
    FUN_00d50b00();
  }
  else if (local_40 == (int64_t *)0x0) {
    return;
  }
  (**(code **)(*local_40 + 0x5c0))();
  if (local_38 == '\0') {
    if (local_40 == (int64_t *)0x0) goto LAB_01237d53;
    FUN_00d50b00();
  }
  else if (local_40 == (int64_t *)0x0) goto LAB_01237d53;
  if (this_ptr != 0) {
    FUN_00d50b00();
  }
  FUN_012364a0();
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (this_ptr != 0) {
    FUN_00d50b20();
  }
  (**(code **)(*g_028ac258 + 0x368))();
  FUN_01237080();
  if (local_38 == '\0') {
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  if (local_40 != (int64_t *)0x0) {
    FUN_01237130();
    plVar1 = *(int64_t **)(this_ptr + 0xf8);
    plVar3 = plVar1;
    if (plVar1 != local_40) {
      plVar3 = local_40;
      if (local_38 == '\0') {
        if (local_40 == (int64_t *)0x0) {
          plVar3 = (int64_t *)0x0;
          goto LAB_01237ca8;
        }
        FUN_00d50b00();
        plVar1 = *(int64_t **)(this_ptr + 0xf8);
        *(int64_t **)(this_ptr + 0xf8) = local_40;
      }
      else {
        local_38 = '\0';
LAB_01237ca8:
        *(int64_t **)(this_ptr + 0xf8) = plVar3;
      }
      if (plVar1 != (int64_t *)0x0) {
        FUN_00d50b20();
        plVar3 = local_40;
      }
    }
    if ((local_38 != '\0') && (plVar3 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  (**(code **)(*g_028ac258 + 0x378))();
  if (local_40 != (int64_t *)0x0) {
    FUN_00d50b20();
    FUN_00d50b20();
  }
LAB_01237d53:
  if (*(int64_t *)(this_ptr + 0xf8) == 0) {
    FUN_00d51d20();
    plVar1 = *(int64_t **)(this_ptr + 0xf8);
    if (plVar1 != local_40) {
      if (local_38 == '\0') {
        if (local_40 == (int64_t *)0x0) {
          *(void*)(this_ptr + 0xf8) = 0;
        }
        else {
          FUN_00d50b00();
          plVar1 = *(int64_t **)(this_ptr + 0xf8);
          *(int64_t **)(this_ptr + 0xf8) = local_40;
        }
      }
      else {
        local_38 = '\0';
        *(int64_t **)(this_ptr + 0xf8) = local_40;
      }
      if (plVar1 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    plVar1 = *(int64_t **)(this_ptr + 0xf8);
    FUN_00d50b00();
    (**(code **)(*plVar1 + 0x3b8))();
    if (this_ptr != 0) {
      FUN_00d50b20();
    }
    uVar2 = FUN_00b32020();
    *(void*)(this_ptr + 0xf0) = uVar2;
    (**(code **)(**(int64_t **)(this_ptr + 0xf8) + 0x368))();
  }
  FUN_00d50b20();
  return;
}



// ============================================================
// 0123cbf0
// ============================================================
// Function: FUN_0123cbf0
// Address: 0123cbf0
// Size: 1200 bytes
// Class: MUAudioEffectRenderProcessorIdentifier
// === MUAudioEffectRenderProcessorIdentifier properties ===
//                   _parameterChangeCounter
//                   _renderProcessor
//                   _inputRecorder
//                   _outputRecorder
//                   _parameterIdentifier
//                   _distribution
//                   _lowercaseModeTitle
//                   _lowercaseLocalizedModeTitle
//                   _score


void* FUN_0123cbf0(void* param_1,int64_t *param_2,char param_3)

{
  bool bVar1;
  char cVar2;
  void *pvVar3;
  int64_t lVar4;
  int64_t *plVar5;
  int64_t *arg1;
  void*this_ptr;
  uint64_t uVar6;
  int64_t *local_40;
  char local_38;
  
  plVar5 = (int64_t *)*param_2;
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    plVar5 = (int64_t *)*param_2;
    lVar4 = FUN_00e8b990();
    if (lVar4 != 0) {
      plVar5 = (int64_t *)plVar5[(uint64_t)(*(uint *)(lVar4 + 0x154) & 1) + 4];
    }
  }
  (**(code **)(*plVar5 + 0x380))();
  plVar5 = (int64_t *)*param_2;
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    plVar5 = (int64_t *)*param_2;
    lVar4 = FUN_00e8b990();
    if (lVar4 != 0) {
      plVar5 = (int64_t *)plVar5[(uint64_t)(*(uint *)(lVar4 + 0x154) & 1) + 4];
    }
  }
  uVar6 = (**(code **)(*plVar5 + 0x370))();
  (**(code **)(*arg1 + 0x478))();
  if ((local_38 == '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  if (param_3 != '\0') {
    FUN_00b82410(uVar6,10,0x44,0);
    if ((local_38 == '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b00();
    }
    if (local_40 == (int64_t *)0x0) {
      *(void*)(this_ptr + 1) = 0;
      *this_ptr = 0;
      return this_ptr;
    }
    FUN_00b87ec0();
    FUN_0123b010();
    FUN_00d64850();
    arg1[0xe] = 0;
    FUN_00d64910();
    lVar4 = FUN_00b7a710();
    FUN_00d64850();
    arg1[0xf] = lVar4;
    FUN_00d64910();
    *this_ptr = local_40;
    *(void*)(this_ptr + 1) = 1;
    if (local_40 == (int64_t *)0x0) {
      return this_ptr;
    }
    goto LAB_0123d082;
  }
  (**(code **)(*local_40 + 0x3f0))();
  if (local_38 == '\0') {
    if (local_40 == (int64_t *)0x0) goto LAB_0123cec7;
    FUN_00d50b00();
LAB_0123cea1:
    cVar2 = (**(code **)(*local_40 + 0x3a0))();
    if (cVar2 == '\0') {
      (**(code **)(*local_40 + 0x420))();
    }
    bVar1 = false;
  }
  else {
    if (local_40 != (int64_t *)0x0) goto LAB_0123cea1;
LAB_0123cec7:
    bVar1 = true;
  }
  FUN_00b82410(uVar6,5,0x44,0);
  if ((local_38 == '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  if (local_40 == (int64_t *)0x0) {
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
  }
  else {
    FUN_00b7c570();
    FUN_00b87ec0();
    FUN_0123b010();
    FUN_00d64850();
    arg1[0xe] = 0;
    FUN_00d64910();
    lVar4 = FUN_00b7a710();
    FUN_00d64850();
    arg1[0xf] = lVar4;
    FUN_00d64910();
    FUN_00b79950();
    *this_ptr = local_40;
    *(void*)(this_ptr + 1) = 1;
  }
  if (!bVar1) {
    FUN_00d50b20();
  }
LAB_0123d082:
  FUN_00d50b20();
  return this_ptr;
}



// ============================================================
// 0123ac80
// ============================================================
// Function: FUN_0123ac80
// Address: 0123ac80
// Size: 636 bytes
// Class: MUAudioEffectRenderProcessorIdentifier
// === MUAudioEffectRenderProcessorIdentifier properties ===
//                   _parameterChangeCounter
//                   _renderProcessor
//                   _inputRecorder
//                   _outputRecorder
//                   _parameterIdentifier
//                   _distribution
//                   _lowercaseModeTitle
//                   _lowercaseLocalizedModeTitle
//                   _score


void FUN_0123ac80(uint64_t param_1,int64_t param_2)

{
  void*puVar1;
  void *pvVar2;
  int64_t lVar3;
  void* pVar4;
  void*puVar5;
  int64_t *arg1;
  void*this_ptr;
  int64_t local_48;
  char local_40;
  
  pVar4 = (void*)param_1;
  puVar1 = (void*)FUN_00e8fc40();
  FUN_00115cd0();
  *puVar1 = &g_025ccea8;
  puVar1[0x13] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0;
  *(void*)((int64_t)puVar1 + 0x84) = 0;
  *(void*)((int64_t)puVar1 + 0x8c) = 0;
  FUN_00d500e0();
  pvVar2 = _pthread_getspecific(pVar4);
  puVar5 = puVar1;
  if ((pvVar2 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
    puVar5 = (void*)puVar1[(uint64_t)(*(uint *)(lVar3 + 0x154) & 1) + 4];
  }
  (**(code **)(*arg1 + 0x478))();
  if (local_40 == '\0') {
    if (local_48 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_40 = '\0';
  }
  if (puVar5[0xd] != local_48) {
    FUN_00d64850();
    lVar3 = puVar5[0xd];
    if (lVar3 != local_48) {
      if (local_48 != 0) {
        FUN_00d50b00();
      }
      puVar5[0xd] = local_48;
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
    }
    FUN_00d64910();
  }
  if (local_48 != 0) {
    FUN_00d50b20();
  }
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  pvVar2 = _pthread_getspecific(pVar4);
  puVar5 = puVar1;
  if ((pvVar2 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
    puVar5 = (void*)puVar1[(uint64_t)(*(uint *)(lVar3 + 0x154) & 1) + 4];
  }
  lVar3 = arg1[0xe];
  FUN_00d64850();
  puVar5[0xe] = lVar3 + param_2;
  FUN_00d64910();
  pvVar2 = _pthread_getspecific(pVar4);
  puVar5 = puVar1;
  if ((pvVar2 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
    puVar5 = (void*)puVar1[(uint64_t)(*(uint *)(lVar3 + 0x154) & 1) + 4];
  }
  FUN_00d64850();
  puVar5[0xf] = param_1;
  FUN_00d64910();
  pvVar2 = _pthread_getspecific(pVar4);
  if ((pvVar2 == (void *)0x0) || (lVar3 = FUN_00e8b990(), lVar3 == 0)) {
    lVar3 = arg1[0x11];
  }
  else {
    lVar3 = arg1[0x11];
  }
  if (lVar3 != 0) {
    FUN_00d50b00();
  }
  FUN_0123b010();
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  *this_ptr = puVar1;
  *(void*)(this_ptr + 1) = 1;
  return;
}



// ============================================================
// 0123d700
// ============================================================
// Function: FUN_0123d700
// Address: 0123d700
// Size: 520 bytes
// Class: MUAudioEffectRenderProcessorIdentifier
// === MUAudioEffectRenderProcessorIdentifier properties ===
//                   _parameterChangeCounter
//                   _renderProcessor
//                   _inputRecorder
//                   _outputRecorder
//                   _parameterIdentifier
//                   _distribution
//                   _lowercaseModeTitle
//                   _lowercaseLocalizedModeTitle
//                   _score


void FUN_0123d700(int64_t param_1,uint64_t param_2,uint64_t param_3,uint8_t param_4)

{
  int64_t *plVar1;
  void *pvVar2;
  int64_t lVar3;
  void* pVar4;
  uint64_t uVar5;
  int64_t *plVar6;
  void*arg1;
  void*this_ptr;
  int64_t local_88;
  char local_80;
  uint64_t local_78;
  uint8_t local_70;
  uint64_t local_68;
  int64_t local_50;
  char local_48;
  
  lVar3 = param_1;
  local_68 = param_3;
  plVar1 = (int64_t *)FUN_00e8fc40();
  pVar4 = (void*)lVar3;
  FUN_0123f100();
  (**(code **)(*plVar1 + 0x18))();
  pvVar2 = _pthread_getspecific(pVar4);
  plVar6 = plVar1;
  if ((pvVar2 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
    plVar6 = (int64_t *)plVar1[(uint64_t)(*(uint *)(lVar3 + 0x154) & 1) + 4];
  }
  FUN_0123c760();
  if (local_48 == '\0') {
    if (local_50 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_48 = '\0';
  }
  if (plVar6[0x14] != local_50) {
    FUN_00d64850();
    lVar3 = plVar6[0x14];
    if (lVar3 != local_50) {
      if (local_50 != 0) {
        FUN_00d50b00();
      }
      plVar6[0x14] = local_50;
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
    }
    FUN_00d64910();
    if (plVar6[0x16] != 0) {
      plVar6[0x16] = 0;
      FUN_00d50b20();
    }
  }
  if (local_50 != 0) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  pvVar2 = _pthread_getspecific(pVar4);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  local_78 = *arg1;
  local_70 = 0;
  uVar5 = local_68;
  FUN_0123cbf0(local_68,&local_78,param_4);
  pVar4 = (void*)uVar5;
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  pvVar2 = _pthread_getspecific(pVar4);
  plVar6 = plVar1;
  if ((pvVar2 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
    plVar6 = (int64_t *)plVar1[(uint64_t)(*(uint *)(lVar3 + 0x154) & 1) + 4];
  }
  plVar6[0x13] = param_1;
  *this_ptr = plVar1;
  *(void*)(this_ptr + 1) = 1;
  return;
}



// ============================================================
// 01239760
// ============================================================
// Function: FUN_01239760
// Address: 01239760
// Size: 942 bytes
// Class: MUAudioEffectRenderProcessorIdentifier
// String references:
//   "MUAudioEffectRenderProcessorIdentifier"
// === MUAudioEffectRenderProcessorIdentifier properties ===
//                   _parameterChangeCounter
//                   _renderProcessor
//                   _inputRecorder
//                   _outputRecorder
//                   _parameterIdentifier
//                   _distribution
//                   _lowercaseModeTitle
//                   _lowercaseLocalizedModeTitle
//                   _score


void FUN_01239760(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_00d4ff80();
  *this_ptr = &g_025ccb30;
  FUN_01239b60();
  *(void*)(this_ptr + 3) = 0;
  // [STATIC_INIT: property registration]
  if (g_027be153 == '\0') {
    FUN_01239de0();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x1c) = 0;
  // [STATIC_INIT: property registration]
  if (g_027be153 == '\0') {
    FUN_01239f50();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 4) = 0;
  // [STATIC_INIT: property registration]
  if (g_027be153 == '\0') {
    FUN_0123a0c0();
    FUN_00e87980();
  }
  this_ptr[5] = 0;
  // [STATIC_INIT: property registration]
  if (g_027be153 == '\0') {
    FUN_0123a230();
    FUN_00e87980();
  }
  return;
}

