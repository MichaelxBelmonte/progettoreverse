// Function: FUN_019f8880
// Address: 019f8880
// Size: 717 bytes
// Class: MUScalePitchSystem
// === MUScalePitchSystem properties ===
//   bool            _tuningIsSuggestedRelevant
//   bool            _modeIsSuggestedRelevant
//   bool            _tuningPitchAnchorIsSuggestedRelevant
//   bool            _modeFundamentalOffsetIsSuggestedRelevant
//   bool            _stretchingIsSuggestedRelevant
//   double          _startPulse
//   double          _startTime
//   double          _width
//   double          _scope


void FUN_019f8880(void* param_1)

{
  int64_t lVar1;
  int64_t lVar2;
  void *pvVar3;
  int64_t lVar4;
  int64_t *plVar5;
  int64_t *arg1;
  int64_t this_ptr;
  int64_t local_88;
  char local_80;
  int64_t *local_78;
  char local_70;
  int64_t local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  int64_t *local_48;
  char local_40;
  int64_t local_38;
  char local_30;
  
  if (*(int64_t *)(this_ptr + 0x78) != *arg1) {
    if (*(int64_t *)(this_ptr + 0x78) != 0) {
      pvVar3 = _pthread_getspecific(param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      lVar4 = FUN_00e8b990();
      if (lVar4 != 0) {
        pvVar3 = _pthread_getspecific(param_1);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_00e8b990();
        local_40 = 0;
        (**(code **)(*(int64_t *)(this_ptr + 0x10) + 0x10))();
        FUN_00d50b00();
        local_40 = '\x01';
        local_30 = 0;
        local_38 = *(int64_t *)(this_ptr + 0x78);
        local_48 = (int64_t *)(this_ptr + 0x10);
        if (local_38 != 0) {
          FUN_00d50b00();
        }
        local_30 = '\x01';
        local_88 = 0;
        local_80 = '\0';
        plVar5 = &local_88;
        FUN_00cbadd0(plVar5,&local_38);
        param_1 = (void*)plVar5;
        if ((local_80 != '\0') && (local_88 != 0)) {
          FUN_00d50b20();
        }
        if ((local_30 != '\0') && (local_38 != 0)) {
          FUN_00d50b20();
        }
        if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
          (**(code **)(*local_48 + 0x10))();
          FUN_00d50b20();
        }
      }
    }
    lVar4 = *arg1;
    lVar1 = *(int64_t *)(this_ptr + 0x78);
    lVar2 = lVar1;
    if (lVar1 != lVar4) {
      if (lVar4 != 0) {
        FUN_00d50b00();
      }
      *(int64_t *)(this_ptr + 0x78) = lVar4;
      lVar2 = lVar4;
      if (lVar1 != 0) {
        FUN_00d50b20();
        lVar2 = *(int64_t *)(this_ptr + 0x78);
      }
    }
    if (lVar2 != 0) {
      pvVar3 = _pthread_getspecific(param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      lVar4 = FUN_00e8b990();
      if (lVar4 != 0) {
        pvVar3 = _pthread_getspecific(param_1);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_00e8b990();
        (**(code **)(*(int64_t *)(this_ptr + 0x10) + 0x10))();
        FUN_00d50b00();
        local_70 = '\x01';
        local_50 = 0;
        local_58 = *(int64_t *)(this_ptr + 0x78);
        local_78 = (int64_t *)(this_ptr + 0x10);
        if (local_58 != 0) {
          FUN_00d50b00();
        }
        local_50 = '\x01';
        local_68 = 0;
        local_60 = '\0';
        FUN_00cbad80(&local_68,&local_58,0x20);
        if ((local_60 != '\0') && (local_68 != 0)) {
          FUN_00d50b20();
        }
        if ((local_50 != '\0') && (local_58 != 0)) {
          FUN_00d50b20();
        }
        if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
          (**(code **)(*local_78 + 0x10))();
          FUN_00d50b20();
        }
      }
    }
  }
  return;
}

