// Function: FUN_01a1dd20
// Address: 01a1dd20
// Size: 534 bytes
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


void FUN_01a1dd20(void)

{
  bool bVar1;
  bool bVar2;
  int64_t *plVar3;
  void*this_ptr;
  bool bVar4;
  uint8_t local_e0 [112];
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  uint32_t local_30;
  uint32_t local_2c;
  uint32_t local_28;
  uint32_t local_24;
  
  plVar3 = g_028b29e0;
  if ((g_028b29e0 == (int64_t *)0x0) || (g_028b29e9 == '\0')) {
    FUN_00e8cb50();
    if (g_028b29e0 == (int64_t *)0x0) {
      plVar3 = (int64_t *)FUN_00e8fc40();
      FUN_001b9f00();
      (**(code **)(*plVar3 + 0x18))();
      if (g_028b29e0 == plVar3) {
        bVar2 = false;
        bVar1 = false;
      }
      else {
        bVar2 = true;
        bVar1 = true;
        bVar4 = g_028b29e0 != (int64_t *)0x0;
        g_028b29e0 = plVar3;
        if (bVar4) {
          FUN_00d50b20();
        }
      }
      if (g_028b29e8 == '\0') {
        g_028b29e8 = '\x01';
        FUN_00e8cb90();
        bVar1 = bVar2;
      }
      if (!bVar1) {
        FUN_00d50b20();
      }
      FUN_01cfc6a0(g_02390124);
      local_30 = 0;
      FUN_01cfc6a0(g_02390124);
      local_2c = 0x3dcccccd;
      FUN_01cfc6a0(g_02390124);
      local_28 = 0x3f666666;
      FUN_01cfc6a0(g_02390124);
      local_24 = 0x3f800000;
      FUN_01ae52c0(&local_50,&local_30,&local_2c,&local_40);
      FUN_01f7ba60(0,local_e0);
      FUN_019fe220();
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      g_028b29e9 = '\x01';
      FUN_00e8cb70();
    }
    else {
      g_028b29e9 = '\x01';
      FUN_00e8cb70();
    }
    plVar3 = g_028b29e0;
    *(void*)(this_ptr + 1) = 0;
    if (plVar3 == (int64_t *)0x0) {
      plVar3 = (int64_t *)0x0;
      goto LAB_01a1df19;
    }
  }
  else {
    *(void*)(this_ptr + 1) = 0;
  }
  FUN_00d50b00();
LAB_01a1df19:
  *this_ptr = plVar3;
  *(void*)(this_ptr + 1) = 1;
  return;
}

