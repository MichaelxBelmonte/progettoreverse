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

