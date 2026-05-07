// Function: FUN_00098b00
// Address: 00098b00
// Size: 875 bytes
// Class: Unknown
// String references:
//   "MelodyneLogo%@%.0f.png"

void FUN_00098b00(uint64_t param_1,uint64_t param_2)

{
  bool bVar1;
  bool bVar2;
  void*puVar3;
  int64_t lVar4;
  uint32_t uVar5;
  float extraout_XMM0_Db;
  float fVar6;
  int64_t local_88;
  char local_80;
  int64_t local_68;
  char local_60;
  void*local_58;
  uint local_50;
  void*local_48;
  char local_40;
  uint32_t local_38;
  
  lVar4 = g_026d8d18;
  fVar6 = (float)((uint64_t)param_2 >> 0x20);
  if (g_026d8d18 != 0) {
    FUN_00d50b00();
  }
  FUN_00e7d6f0();
  uVar5 = FUN_0071a120();
  if (((char)local_50 == '\0') && (local_58 != (void*)0x0)) {
    uVar5 = FUN_00d50b00();
    if (((char)local_50 != '\0') && (local_58 != (void*)0x0)) {
      uVar5 = FUN_00d50b20();
    }
  }
  local_68 = lVar4;
  local_60 = '\0';
  FUN_000175c0(uVar5,&local_68);
  puVar3 = local_58;
  if ((char)local_50 == '\0') {
    if (local_58 != (void*)0x0) {
      FUN_00d50b00();
      if (((char)local_50 != '\0') && (local_58 != (void*)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    local_50 = local_50 & 0xffffff00;
  }
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  if (puVar3 != (void*)0x0) {
    local_50 = local_50 & 0xffffff00;
    local_58 = puVar3;
    FUN_00c716c0();
    if (((char)local_50 != '\0') && (local_58 != (void*)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  FUN_00d50b20();
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  FUN_00d2ca40();
  puVar3 = local_58;
  if ((char)local_50 == '\0') {
    if (local_58 != (void*)0x0) {
      FUN_00d50b00();
      if (((char)local_50 != '\0') && (local_58 != (void*)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_00098ca6;
    }
  }
  else if (local_58 != (void*)0x0) {
LAB_00098ca6:
    FUN_01e3f820();
    local_50 = 2;
    local_58 = &g_024c5048;
    local_40 = 0;
    FUN_00d50b00();
    local_38 = *(void*)
                (&g_02390cf8 +
                (uint64_t)(g_02390d04 < extraout_XMM0_Db + fVar6 + g_02390d00) * 4);
    local_48 = puVar3;
    local_40 = '\x01';
    local_58 = (void*)&g_024c79a0;
    FUN_00d8cb40(&g_02390cf8,&local_58);
    if (local_80 == '\0') {
      if (local_88 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_80 = '\0';
    }
    FUN_01d51a40();
    lVar4 = local_68;
    if (local_68 == 0) {
      bVar1 = false;
    }
    else if (local_60 == '\0') {
      FUN_00d50b00();
      bVar1 = true;
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_60 = '\0';
      bVar1 = true;
    }
    if (local_88 != 0) {
      FUN_00d50b20();
    }
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    local_58 = &g_024c5048;
    if ((local_40 != '\0') && (local_48 != (void*)0x0)) {
      FUN_00d50b20();
    }
    bVar2 = false;
    goto LAB_00098e03;
  }
  bVar2 = true;
  lVar4 = 0;
  bVar1 = false;
LAB_00098e03:
  FUN_01d56f30();
  if ((bVar1) && (lVar4 != 0)) {
    FUN_00d50b20();
  }
  if (!bVar2) {
    FUN_00d50b20();
  }
  return;
}

