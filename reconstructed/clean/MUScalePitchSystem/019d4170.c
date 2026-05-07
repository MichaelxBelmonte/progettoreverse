// Function: FUN_019d4170
// Address: 019d4170
// Size: 782 bytes
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


void FUN_019d4170(void* param_1)

{
  int64_t lVar1;
  void *pvVar2;
  int unaff_ESI;
  int64_t *this_ptr;
  int64_t local_80;
  char local_78;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  if ((int)this_ptr[0x5e] != unaff_ESI) {
    if (unaff_ESI != 0) {
      *(int *)((int64_t)this_ptr + 0x2f4) = unaff_ESI;
    }
    *(int *)(this_ptr + 0x5e) = unaff_ESI;
    (**(code **)(*this_ptr + 0xa00))();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (local_40 != 0) {
      (**(code **)(*this_ptr + 0xa00))();
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012c9740();
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      if (local_40 != 0) {
        FUN_00d46530();
        local_40 = g_026dc290;
        if ((local_48 == '\0') && (local_50 != 0)) {
          FUN_00d50b00();
          local_40 = g_026dc290;
        }
        g_026dc290 = local_40;
        if (local_40 != 0) {
          FUN_00d50b00();
        }
        local_38 = '\0';
        FUN_00ca0840();
        if (local_40 != 0) {
          FUN_00d50b20();
        }
        if (local_50 != 0) {
          FUN_00d50b20();
        }
        FUN_00d50b20();
      }
    }
    FUN_00d6f370();
    lVar1 = g_027e1348;
    if (g_027e1348 != 0) {
      FUN_00d50b00();
    }
    FUN_00d707b0();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d403d0();
    lVar1 = g_02709dd0;
    if (g_02709dd0 != 0) {
      FUN_00d50b00();
    }
    FUN_00d50b00();
    local_80 = 0;
    local_78 = '\0';
    FUN_00d40470(&local_80,&stack0xffffffffffffff90,1,3);
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    if (this_ptr != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  return;
}

