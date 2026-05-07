// Function: FUN_01521770
// Address: 01521770
// Size: 909 bytes
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


void* FUN_01521770(uint32_t param_1,int64_t *param_2)

{
  int64_t lVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  void*this_ptr;
  void*local_68;
  char local_60;
  void*local_40;
  uint local_38;
  uint32_t local_34;
  
  lVar1 = g_026e3bc8;
  if (g_026e3bc8 != 0) {
    FUN_00d50b00();
  }
  iVar3 = FUN_00d90650();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = g_027e3b70;
  if (g_027e3b70 != 0) {
    FUN_00d50b00();
  }
  iVar4 = FUN_00d90650();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if (iVar3 == -1) {
    FUN_00d8b910();
    local_38 = 1;
    local_40 = &g_024cc6f0;
    local_34 = param_1;
    FUN_00d8cb40(param_1,&local_40);
    if (local_68 == (void*)0x0) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
      if (local_60 == '\0') {
        FUN_00d50b00();
      }
    }
  }
  else if (iVar4 == -1) {
    FUN_00d8b910();
    lVar1 = *param_2;
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    FUN_00d8cb40();
    local_68 = local_40;
    if (local_40 == (void*)0x0) {
      bVar2 = false;
    }
    else if ((char)local_38 == '\0') {
      FUN_00d50b00();
      bVar2 = true;
      if (((char)local_38 != '\0') && (local_40 != (void*)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38 = local_38 & 0xffffff00;
      bVar2 = true;
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  else if (iVar3 < iVar4) {
    FUN_00d8b910();
    lVar1 = *param_2;
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    FUN_00d8cb40();
    local_68 = local_40;
    if (local_40 == (void*)0x0) {
      bVar2 = false;
    }
    else if ((char)local_38 == '\0') {
      FUN_00d50b00();
      bVar2 = true;
      if (((char)local_38 != '\0') && (local_40 != (void*)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38 = local_38 & 0xffffff00;
      bVar2 = true;
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  else {
    FUN_00d8b910();
    lVar1 = *param_2;
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    FUN_00d8cb40();
    local_68 = local_40;
    if (local_40 == (void*)0x0) {
      bVar2 = false;
    }
    else if ((char)local_38 == '\0') {
      FUN_00d50b00();
      bVar2 = true;
      if (((char)local_38 != '\0') && (local_40 != (void*)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38 = local_38 & 0xffffff00;
      bVar2 = true;
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  *(void*)(this_ptr + 1) = 0;
  if ((!bVar2) && (local_68 != (void*)0x0)) {
    FUN_00d50b00();
  }
  *this_ptr = local_68;
  *(void*)(this_ptr + 1) = 1;
  return this_ptr;
}

