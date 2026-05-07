// Function: FUN_01af6500
// Address: 01af6500
// Size: 1024 bytes
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


void FUN_01af6500(void* param_1)

{
  int *piVar1;
  int iVar2;
  int64_t *plVar3;
  char cVar4;
  void *pvVar5;
  int64_t lVar6;
  int64_t lVar7;
  uint64_t uVar8;
  uint64_t uVar9;
  int64_t *plVar10;
  int64_t *this_ptr;
  int64_t local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  int64_t *local_60;
  char local_58;
  int64_t *local_40;
  char local_38;
  
  plVar3 = local_40;
  piVar1 = (int *)((int64_t)this_ptr + 0x2fc);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_01ad3cb0();
    if (local_38 == '\0') {
      if (local_40 == (int64_t *)0x0) {
        return;
      }
      FUN_00d50b00();
    }
    else if (local_40 == (int64_t *)0x0) {
      return;
    }
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    lVar6 = FUN_00e8b990();
    if (lVar6 == 0) {
      lVar6 = this_ptr[99];
      if (lVar6 == 0) {
        lVar6 = 0;
      }
      else {
        FUN_00d50b00();
      }
    }
    else {
      FUN_00d50b00();
    }
    FUN_00cb1f10();
    if ((local_38 == '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b00();
    }
    cVar4 = FUN_00db6540();
    if ((cVar4 != '\0') && (cVar4 = FUN_00db3680(), cVar4 == '\0')) {
      pvVar5 = _pthread_getspecific(param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      cVar4 = FUN_0173f250();
      if (cVar4 == '\0') {
        pvVar5 = _pthread_getspecific(param_1);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0173ef00();
        iVar2 = *(int *)((int64_t)local_40 + 0xc);
        if (local_38 != '\0') {
          FUN_00d50b20();
        }
        if (1 < iVar2) {
          pvVar5 = _pthread_getspecific(param_1);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0173b6f0();
          pvVar5 = _pthread_getspecific(param_1);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01738240();
          pvVar5 = _pthread_getspecific(param_1);
          if ((pvVar5 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
            param_1 = (void*)
                      *(void*)
                       (local_80 + 0x20 + (uint64_t)(*(uint *)(lVar7 + 0x154) & 1) * 8);
          }
          pvVar5 = _pthread_getspecific(param_1);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0173b6f0();
          if (local_58 == '\0') {
            if (local_60 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_58 = '\0';
          }
          uVar8 = FUN_00e7bdb0();
          uVar9 = FUN_00e7bdb0();
          local_40 = local_60;
          local_38 = '\0';
          FUN_012502a0(uVar9,uVar8,1);
          param_1 = (void*)uVar9;
          if (local_60 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
          if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_78 != '\0') && (local_80 != 0)) {
            FUN_00d50b20();
          }
          if ((local_68 != '\0') && (local_70 != 0)) {
            FUN_00d50b20();
          }
        }
      }
      (**(code **)(*this_ptr + 0x928))();
      pvVar5 = _pthread_getspecific(param_1);
      plVar10 = local_40;
      if ((pvVar5 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
        plVar10 = (int64_t *)local_40[(uint64_t)(*(uint *)(lVar7 + 0x154) & 1) + 4];
      }
      (**(code **)(*plVar10 + 0x3f8))();
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    if (plVar3 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if (lVar6 != 0) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  return;
}

