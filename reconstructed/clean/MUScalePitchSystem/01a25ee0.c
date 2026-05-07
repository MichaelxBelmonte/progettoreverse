// Function: FUN_01a25ee0
// Address: 01a25ee0
// Size: 629 bytes
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


void FUN_01a25ee0(int64_t *param_1)

{
  int64_t lVar1;
  int64_t *plVar2;
  char cVar3;
  void *pvVar4;
  int64_t *plVar5;
  int64_t *arg1;
  int64_t lVar6;
  int64_t local_98;
  char local_90;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t *local_40;
  char local_38;
  
  FUN_01a58dc0();
  local_70 = *arg1;
  local_68 = '\0';
  local_60 = *param_1;
  local_58 = '\0';
  plVar5 = &local_60;
  (**(code **)(*local_40 + 0xe50))(plVar5,&local_70);
  if ((local_90 == '\0') && (local_98 != 0)) {
    FUN_00d50b00();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (local_98 != 0) {
    if (0 < *(int *)(local_98 + 0xc)) {
      lVar6 = 0;
      do {
        lVar1 = *(int64_t *)(*(int64_t *)(local_98 + 0x10) + lVar6 * 8);
        pvVar4 = _pthread_getspecific((void*)plVar5);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        cVar3 = FUN_0125a2d0();
        if (cVar3 != '\0') {
          pvVar4 = _pthread_getspecific((void*)plVar5);
          if (pvVar4 != (void *)0x0) {
            FUN_00e8b990();
          }
          cVar3 = FUN_01263cf0();
          if (cVar3 == '\0') {
            FUN_01a58dc0();
            plVar2 = local_40;
            local_48 = '\0';
            local_50 = lVar1;
            pvVar4 = _pthread_getspecific((void*)plVar5);
            if (pvVar4 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0125a2c0();
            (**(code **)(
                        "/System/Library/Frameworks/CoreFoundation.framework/Versions/A/CoreFoundation"
                        + *plVar2 + 0x48))();
            if ((local_48 != '\0') && (local_50 != 0)) {
              FUN_00d50b20();
            }
            if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
        }
        lVar6 = lVar6 + 1;
      } while ((int)lVar6 < *(int *)(local_98 + 0xc));
    }
    FUN_001159b0();
    FUN_00d50b20();
  }
  return;
}

