// Function: FUN_015b5f50
// Address: 015b5f50
// Size: 1215 bytes
// Class: GNData
// String references:
//   "\"%@\""
// === GNData properties ===
//   double          _firstSpectrumTime
//   double          _spectraTimeDistance


void FUN_015b5f50(uint32_t param_1,char param_2)

{
  int iVar1;
  int64_t lVar2;
  void*puVar3;
  void*puVar4;
  int64_t *arg1;
  int64_t *this_ptr;
  int iVar5;
  bool bVar6;
  uint32_t uVar7;
  int64_t local_b0;
  char local_a8;
  void*local_60;
  uint local_58;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  if ((g_028ad540 != (void*)0x0) && (FUN_00deca40(), g_028ad540 != (void*)0x0)) {
    g_028ad540 = (void*)0x0;
    FUN_00d50b20();
  }
  iVar1 = *(int *)(*arg1 + 0x18);
  iVar5 = iVar1 + 3;
  if (-1 < iVar1) {
    iVar5 = iVar1;
  }
  FUN_00cddf30();
  lVar2 = local_40;
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  uVar7 = FUN_00b82410(param_1,2,0x10,0);
  puVar3 = local_60;
  if ((char)local_58 == '\0') {
    if (local_60 != (void*)0x0) {
      uVar7 = FUN_00d50b00();
      if (((char)local_58 != '\0') && (local_60 != (void*)0x0)) {
        uVar7 = FUN_00d50b20();
      }
    }
  }
  else {
    local_58 = local_58 & 0xffffff00;
  }
  if (lVar2 != 0) {
    uVar7 = FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    uVar7 = FUN_00d50b20();
  }
  FUN_00b87ba0(uVar7,iVar5 >> 2);
  FUN_00b881a0();
  if (param_2 != '\0') {
    puVar4 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar4 = &g_025818d0;
    *(void*)(puVar4 + 3) = 0;
    *(void*)((int64_t)puVar4 + 0x1c) = 0;
    *(void*)((int64_t)puVar4 + 0x24) = 0;
    *(void*)((int64_t)puVar4 + 0x2c) = 0;
    *(void*)((int64_t)puVar4 + 0x34) = 0;
    *(void*)((int64_t)puVar4 + 0x3c) = 0;
    *(void*)((int64_t)puVar4 + 0x44) = 0;
    *(void*)((int64_t)puVar4 + 0x4c) = 0;
    (*g_025818e8)();
    bVar6 = g_028ad540 == (void*)0x0;
    g_028ad540 = puVar4;
    if (((bVar6) || (FUN_00d50b20(), lVar2 = g_027c7a58, g_028ad540 != (void*)0x0)) &&
       (lVar2 = g_027c7a58, g_028ad548 == '\0')) {
      g_028ad548 = '\x01';
      FUN_00e8cb90();
      lVar2 = g_027c7a58;
    }
    g_027c7a58 = lVar2;
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    FUN_00cddf30();
    puVar4 = local_60;
    if ((char)local_58 == '\0') {
      if (local_60 != (void*)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_58 = local_58 & 0xffffff00;
    }
    uVar7 = FUN_00decd00();
    if (puVar4 != (void*)0x0) {
      uVar7 = FUN_00d50b20();
    }
    if (((char)local_58 != '\0') && (local_60 != (void*)0x0)) {
      uVar7 = FUN_00d50b20();
    }
    if (lVar2 != 0) {
      uVar7 = FUN_00d50b20();
    }
    lVar2 = *this_ptr;
    local_58 = 1;
    local_60 = &g_024c5048;
    local_48 = 0;
    if (lVar2 != 0) {
      uVar7 = FUN_00d50b00();
    }
    local_48 = '\x01';
    local_50 = lVar2;
    FUN_00d8cb40(uVar7,&local_60);
    if (local_a8 == '\0') {
      if (local_b0 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_a8 = '\0';
    }
    FUN_006e17f0();
    lVar2 = local_40;
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    FUN_00decd50();
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (local_b0 != 0) {
      FUN_00d50b20();
    }
    if ((local_a8 != '\0') && (local_b0 != 0)) {
      FUN_00d50b20();
    }
    local_60 = &g_024c5048;
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    FUN_00decda0();
  }
  if (puVar3 != (void*)0x0) {
    FUN_00d50b20();
  }
  return;
}

