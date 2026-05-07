// Function: FUN_00d48d20
// Address: 00d48d20
// Size: 928 bytes
// Class: GNList
// String references:
//   "%I"
//   "%@%@"
//   "%I %@"
// === GNList properties ===
//   GNInt           _archiveVersion
//   bool            _awakesObjectsAfterDecoding
//   bool            _isCancelled
//   GNInt           _currentObjectGraphIdx
//   GNInt           _predictedDecodedValuesIndex


void FUN_00d48d20(uint64_t param_1,int param_2)

{
  int64_t lVar1;
  int iVar2;
  int iVar3;
  void*puVar4;
  int64_t arg1;
  void*this_ptr;
  void*puVar5;
  uint32_t uVar6;
  uint8_t local_78 [8];
  void*local_70;
  uint32_t local_68;
  int local_64;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  void*local_40;
  uint local_38;
  int local_34;
  
  FUN_00d492b0();
  puVar4 = local_70;
  if ((char)local_68 == '\0') {
    if (local_70 != (void*)0x0) {
      FUN_00d50b00();
      goto LAB_00d490a6;
    }
  }
  else if (local_70 != (void*)0x0) goto LAB_00d490a6;
  iVar3 = (int)*(float *)(arg1 + 0x10);
  if (*(float *)(arg1 + 0x10) <= (float)param_2) {
    iVar3 = param_2;
  }
  iVar2 = (int)*(float *)(arg1 + 0x14);
  if ((float)iVar3 <= *(float *)(arg1 + 0x14)) {
    iVar2 = iVar3;
  }
  lVar1 = *(int64_t *)(arg1 + 0x18);
  if (lVar1 == 0) {
    local_34 = -iVar2;
    if (0 < iVar2) {
      local_34 = iVar2;
    }
    local_38 = 1;
    local_40 = &g_024cc6f0;
    FUN_00d8cb40(&g_024cc6f0,&local_40);
    if ((local_70 != (void*)0x0) && (puVar4 = local_70, (char)local_68 == '\0')) {
      FUN_00d50b00();
      if (((char)local_68 != '\0') && (local_70 != (void*)0x0)) {
        FUN_00d50b20();
      }
    }
    lVar1 = *(int64_t *)(arg1 + 0x28);
  }
  else {
    local_64 = -iVar2;
    if (0 < iVar2) {
      local_64 = iVar2;
    }
    local_68 = 2;
    local_70 = &g_0263cdb0;
    local_58 = 0;
    uVar6 = FUN_00d50b00();
    local_58 = '\x01';
    local_60 = lVar1;
    FUN_00d8cb40(uVar6,&local_70);
    if (local_40 != (void*)0x0) {
      puVar4 = local_40;
      if ((char)local_38 == '\0') {
        FUN_00d50b00();
        if (((char)local_38 != '\0') && (local_40 != (void*)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_38 = local_38 & 0xffffff00;
      }
    }
    local_70 = &g_0263cdb0;
    if ((local_58 != '\0') && (local_70 = &g_0263cdb0, local_60 != 0)) {
      FUN_00d50b20();
    }
    lVar1 = *(int64_t *)(arg1 + 0x28);
  }
  if ((lVar1 == 0) || (iVar2 < 1)) {
    if ((*(int64_t *)(arg1 + 0x30) == 0) || (-1 < iVar2)) goto LAB_00d490a6;
    uVar6 = FUN_00083ea0(2,local_78);
    FUN_00d8cb40(uVar6,&local_70);
    puVar5 = puVar4;
    if (local_40 == puVar4) {
LAB_00d49054:
      if (((char)local_38 != '\0') && (local_40 != (void*)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      puVar5 = local_40;
      if ((char)local_38 == '\0') {
        if (local_40 != (void*)0x0) {
          FUN_00d50b00();
        }
        if (puVar4 != (void*)0x0) {
          FUN_00d50b20();
        }
        goto LAB_00d49054;
      }
      if (puVar4 != (void*)0x0) {
        FUN_00d50b20();
      }
      local_38 = local_38 & 0xffffff00;
    }
    local_70 = (void*)&g_0253d630;
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    local_70 = &g_024c5048;
    puVar4 = puVar5;
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    goto LAB_00d490a6;
  }
  uVar6 = FUN_00083ea0(2,local_78);
  FUN_00d8cb40(uVar6,&local_70);
  puVar5 = puVar4;
  if (local_40 == puVar4) {
LAB_00d48ffd:
    if (((char)local_38 != '\0') && (local_40 != (void*)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    puVar5 = local_40;
    if ((char)local_38 == '\0') {
      if (local_40 != (void*)0x0) {
        FUN_00d50b00();
      }
      if (puVar4 != (void*)0x0) {
        FUN_00d50b20();
      }
      goto LAB_00d48ffd;
    }
    if (puVar4 != (void*)0x0) {
      FUN_00d50b20();
    }
    local_38 = local_38 & 0xffffff00;
  }
  local_70 = (void*)&g_0253d630;
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  local_70 = &g_024c5048;
  puVar4 = puVar5;
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
LAB_00d490a6:
  *this_ptr = puVar4;
  *(void*)(this_ptr + 1) = 1;
  return;
}

