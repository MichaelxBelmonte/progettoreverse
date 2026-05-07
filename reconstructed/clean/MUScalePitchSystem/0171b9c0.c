// Function: FUN_0171b9c0
// Address: 0171b9c0
// Size: 585 bytes
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


void FUN_0171b9c0(void)

{
  bool bVar1;
  bool bVar2;
  int64_t lVar3;
  void*puVar4;
  void*this_ptr;
  bool bVar5;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  void*local_40;
  char local_38;
  int64_t local_30;
  char local_28;
  
  puVar4 = g_028adaa8;
  if ((g_028adaa8 == (void*)0x0) || (g_028adab1 == '\0')) {
    FUN_00e8cb50();
    if (g_028adaa8 == (void*)0x0) {
      puVar4 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar4 = &g_025fbf30;
      puVar4[2] = 0;
      *(void*)(puVar4 + 3) = 0;
      *(void*)((int64_t)puVar4 + 0x1c) = 0;
      *(void*)((int64_t)puVar4 + 0x2c) = 0;
      puVar4[4] = 0;
      *(void*)(puVar4 + 5) = 0;
      puVar4[7] = 0;
      puVar4[8] = 0;
      puVar4[9] = 0;
      FUN_00d500e0();
      if (g_028adaa8 == puVar4) {
        bVar2 = false;
        bVar1 = false;
      }
      else {
        bVar2 = true;
        bVar1 = true;
        bVar5 = g_028adaa8 != (void*)0x0;
        g_028adaa8 = puVar4;
        if (bVar5) {
          FUN_00d50b20();
        }
      }
      if (g_028adab0 == '\0') {
        g_028adab0 = '\x01';
        FUN_00e8cb90();
        bVar1 = bVar2;
      }
      if (!bVar1) {
        FUN_00d50b20();
      }
      FUN_0171ab80();
      FUN_00d403d0();
      local_40 = g_028adaa8;
      local_38 = 0;
      if (g_028adaa8 != (void*)0x0) {
        FUN_00d50b00();
      }
      lVar3 = g_027e2660;
      local_38 = '\x01';
      if (g_027e2660 != 0) {
        FUN_00d50b00();
      }
      local_60 = lVar3;
      local_58 = '\x01';
      FUN_00d6f370();
      local_30 = local_50;
      local_28 = 0;
      if (local_48 == '\0') {
        if (local_50 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_48 = '\0';
      }
      local_28 = '\x01';
      FUN_00d41430(&local_30,&local_60);
      if ((local_28 != '\0') && (local_30 != 0)) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (void*)0x0)) {
        FUN_00d50b20();
      }
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      g_028adab1 = '\x01';
      FUN_00e8cb70();
    }
    else {
      g_028adab1 = '\x01';
      FUN_00e8cb70();
    }
    puVar4 = g_028adaa8;
    *(void*)(this_ptr + 1) = 0;
    if (puVar4 == (void*)0x0) {
      puVar4 = (void*)0x0;
      goto LAB_0171bbef;
    }
  }
  else {
    *(void*)(this_ptr + 1) = 0;
  }
  FUN_00d50b00();
LAB_0171bbef:
  *this_ptr = puVar4;
  *(void*)(this_ptr + 1) = 1;
  return;
}

