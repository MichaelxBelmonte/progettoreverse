// Function: FUN_019cf5e0
// Address: 019cf5e0
// Size: 1072 bytes
// Class: MUScalePitchSystem
// String references:
//   "%@ (%@)"
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


void FUN_019cf5e0(uint64_t param_1,int param_2)

{
  int64_t lVar1;
  int64_t lVar2;
  void*puVar3;
  void*puVar4;
  void*puVar5;
  void*puVar6;
  char cVar7;
  int unaff_ESI;
  int64_t this_ptr;
  void*local_d8;
  int64_t local_d0;
  char local_c8;
  int64_t local_c0;
  char local_b8;
  int64_t local_b0;
  char local_a8;
  void*local_a0;
  char local_98;
  int64_t local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  void*local_70;
  char local_68;
  void*local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  if (*(int64_t *)(this_ptr + 0x318) != 0) {
    if ((unaff_ESI != 0) && (g_028b28d8 != (void*)0x0)) {
      FUN_01d5b240(param_1,unaff_ESI + -1);
      puVar5 = local_60;
      if ((local_58 == '\0') && (local_60 != (void*)0x0)) {
        FUN_00d50b00();
        if ((local_58 != '\0') && (local_60 != (void*)0x0)) {
          FUN_00d50b20();
        }
      }
      puVar3 = g_028b28d8;
      local_68 = 0;
      if (g_028b28d8 != (void*)0x0) {
        FUN_00d50b00();
      }
      local_70 = puVar3;
      local_68 = '\x01';
      FUN_01d64eb0();
      if ((local_68 != '\0') && (local_70 != (void*)0x0)) {
        FUN_00d50b20();
      }
      if (g_028b28d8 != (void*)0x0) {
        g_028b28d8 = (void*)0x0;
        FUN_00d50b20();
      }
      if (puVar5 != (void*)0x0) {
        FUN_00d50b20();
      }
    }
    if (param_2 != 0) {
      FUN_01d5b240();
      puVar5 = local_60;
      if ((local_58 == '\0') && (local_60 != (void*)0x0)) {
        FUN_00d50b00();
        if ((local_58 != '\0') && (local_60 != (void*)0x0)) {
          FUN_00d50b20();
        }
      }
      FUN_01d65230();
      puVar3 = local_60;
      if ((local_58 == '\0') && (local_60 != (void*)0x0)) {
        FUN_00d50b00();
        if ((local_58 != '\0') && (local_60 != (void*)0x0)) {
          FUN_00d50b20();
        }
      }
      lVar2 = g_02704e20;
      if (g_02704e20 != 0) {
        FUN_00d50b00();
      }
      lVar1 = g_026fb948;
      local_d0 = lVar2;
      local_c8 = '\x01';
      if (g_026fb948 != 0) {
        FUN_00d50b00();
      }
      local_c0 = lVar1;
      local_b8 = '\x01';
      local_b0 = 0;
      local_a8 = '\0';
      FUN_00d31230(&local_b0,&local_c0);
      puVar6 = local_60;
      if (local_58 == '\0') {
        if (local_60 != (void*)0x0) {
          FUN_00d50b00();
          if ((local_58 != '\0') && (local_60 != (void*)0x0)) {
            FUN_00d50b20();
          }
        }
      }
      else {
        local_58 = '\0';
      }
      if ((local_a8 != '\0') && (local_b0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_b8 != '\0') && (local_c0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_c8 != '\0') && (local_d0 != 0)) {
        FUN_00d50b20();
      }
      local_a0 = puVar6;
      local_98 = '\0';
      cVar7 = FUN_00d90eb0();
      if ((local_98 != '\0') && (local_a0 != (void*)0x0)) {
        FUN_00d50b20();
      }
      puVar4 = g_028b28d8;
      if (cVar7 == '\0') {
        if (g_028b28d8 != puVar3) {
          if (puVar3 != (void*)0x0) {
            FUN_00d50b00();
          }
          g_028b28d8 = puVar3;
          if (puVar4 != (void*)0x0) {
            FUN_00d50b20();
          }
        }
        if ((puVar3 != (void*)0x0) && (g_028b28e0 == '\0')) {
          g_028b28e0 = '\x01';
          FUN_00e8cb90();
        }
        local_d8 = puVar6;
        FUN_00083ea0(2,&local_d8);
        FUN_00d8cb40();
        lVar2 = local_80;
        if (local_78 == '\0') {
          if (local_80 != 0) {
            FUN_00d50b00();
            if ((local_78 != '\0') && (local_80 != 0)) {
              FUN_00d50b20();
            }
          }
        }
        else {
          local_78 = '\0';
        }
        local_60 = (void*)&g_0253d630;
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        local_60 = &g_024c5048;
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
        local_90 = lVar2;
        local_88 = '\0';
        FUN_01d64eb0();
        if ((local_88 != '\0') && (local_90 != 0)) {
          FUN_00d50b20();
        }
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
      }
      if (puVar6 != (void*)0x0) {
        FUN_00d50b20();
      }
      if (puVar3 != (void*)0x0) {
        FUN_00d50b20();
      }
      if (puVar5 != (void*)0x0) {
        FUN_00d50b20();
      }
    }
  }
  return;
}

