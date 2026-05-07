// Function: FUN_00505840
// Address: 00505840
// Size: 2219 bytes
// Class: MUPercussivePitchSystem

void FUN_00505840(void)

{
  void*puVar1;
  int64_t *plVar2;
  int64_t lVar3;
  int64_t lVar4;
  byte bVar5;
  uint64_t uVar6;
  void*puVar7;
  int64_t *arg1;
  int64_t *this_ptr;
  uint32_t uVar8;
  double dVar9;
  uint64_t uVar10;
  int64_t local_c0;
  char local_b8;
  int64_t local_b0;
  char local_a8;
  int64_t local_a0;
  char local_98;
  int64_t local_90;
  char local_88;
  int64_t *local_80;
  char local_78;
  int64_t *local_70;
  char local_68;
  int64_t *local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t *local_40;
  char local_38;
  
  if (arg1[0x40] == 0) {
    (**(code **)(*arg1 + 0x640))();
    uVar8 = (**(code **)(*local_40 + 0x580))();
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    puVar7 = (void*)FUN_00e8fc40();
    FUN_0006daf0();
    *(void*)(puVar7 + 0x27) = 0;
    puVar7[0x2e] = 0;
    *(void*)(puVar7 + 0x2f) = 0;
    puVar7[0x30] = 0;
    *(void*)(puVar7 + 0x31) = 0;
    puVar7[0x28] = 0;
    puVar7[0x29] = 0;
    *(void*)(puVar7 + 0x2a) = 0;
    puVar7[0x2b] = 0;
    puVar7[0x2c] = 0;
    *(void*)((int64_t)puVar7 + 0x165) = 0;
    *(void*)((int64_t)puVar7 + 0x18c) = 0;
    *(void*)((int64_t)puVar7 + 0x194) = 0;
    *(void*)((int64_t)puVar7 + 0x199) = 0;
    puVar7[0x35] = 0;
    puVar7[0x36] = 0;
    puVar7[0x37] = 0;
    puVar7[0x38] = 0;
    *puVar7 = &g_02677e10;
    puVar7[2] = &g_026788e8;
    puVar7[0x39] = &g_02678928;
    *(void*)((int64_t)puVar7 + 500) = 0;
    *(void*)(puVar7 + 0x3f) = 0;
    puVar7[0x43] = 0;
    puVar7[0x3c] = 0;
    puVar7[0x3d] = 0;
    puVar7[0x3a] = 0;
    puVar7[0x3b] = 0;
    *(void*)(puVar7 + 0x3e) = 0;
    *(void*)((int64_t)puVar7 + 0x1fc) = 0;
    *(void*)((int64_t)puVar7 + 0x204) = 0;
    *(void*)((int64_t)puVar7 + 0x20c) = 0;
    (*g_02677e28)();
    puVar1 = (void*)arg1[0x40];
    if (puVar1 == puVar7) {
      FUN_00d50b20();
    }
    else {
      arg1[0x40] = (int64_t)puVar7;
      if (puVar1 != (void*)0x0) {
        FUN_00d50b20();
      }
    }
    (**(code **)(*(int64_t *)arg1[0x40] + 0x4d0))(0,uVar8);
    lVar3 = g_02709e50;
    plVar2 = (int64_t *)arg1[0x40];
    if (g_02709e50 != 0) {
      FUN_00d50b00();
    }
    (**(code **)(*plVar2 + 0xa10))();
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    lVar3 = g_026e1800;
    if (g_026e1800 != 0) {
      FUN_00d50b00();
    }
    dVar9 = (double)FUN_00e7d6f0();
    uVar6 = (uint64_t)(dVar9 * g_023907c0);
    dVar9 = dVar9 * g_023907c0 - g_023907c8;
    uVar10 = FUN_0071a120();
    if ((((local_38 == '\0') && (local_40 != (int64_t *)0x0)) &&
        (uVar10 = FUN_00d50b00(), local_38 != '\0')) && (local_40 != (int64_t *)0x0)) {
      uVar10 = FUN_00d50b20();
    }
    bVar5 = (byte)(((int64_t)dVar9 & (int64_t)uVar6 >> 0x3f | uVar6) / 3);
    local_50 = lVar3;
    local_48 = '\0';
    FUN_000175c0(uVar10,&local_50);
    plVar2 = local_40;
    if (local_38 == '\0') {
      if (((local_40 != (int64_t *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
         (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38 = '\0';
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if (plVar2 != (int64_t *)0x0) {
      local_38 = '\0';
      local_40 = plVar2;
      bVar5 = FUN_00c70bc0();
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    FUN_00d50b20();
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    lVar3 = g_02709e60;
    if ((plVar2 != (int64_t *)0x0 & bVar5) != 0) {
      if (g_02709e60 != 0) {
        FUN_00d50b00();
      }
      FUN_01d51a40();
      local_70 = local_40;
      local_68 = 0;
      if (local_38 == '\0') {
        if (local_40 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      local_68 = '\x01';
      FUN_01cef3b0();
      if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
    }
    FUN_01cef450();
    FUN_01cef4c0();
    FUN_01d0fe80();
    lVar3 = g_026f6f70;
    plVar2 = (int64_t *)arg1[0x40];
    if (g_026f6f70 != 0) {
      FUN_00d50b00();
    }
    lVar4 = g_026deab8;
    if (g_026deab8 != 0) {
      FUN_00d50b00();
    }
    local_c0 = lVar4;
    local_b8 = '\x01';
    local_b0 = 0;
    local_a8 = '\0';
    FUN_00d31230(&local_b0,&local_c0);
    local_60 = local_40;
    local_58 = 0;
    if (local_38 == '\0') {
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_58 = '\x01';
    (**(code **)(*plVar2 + 0x6a8))();
    if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_a8 != '\0') && (local_b0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_b8 != '\0') && (local_c0 != 0)) {
      FUN_00d50b20();
    }
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
  }
  lVar3 = g_026f6fd0;
  if (g_026f6fd0 != 0) {
    FUN_00d50b00();
  }
  dVar9 = (double)FUN_00e7d6f0();
  uVar6 = (uint64_t)(dVar9 * g_023907c0);
  dVar9 = dVar9 * g_023907c0 - g_023907c8;
  uVar10 = FUN_0071a120();
  if ((((local_38 == '\0') && (local_40 != (int64_t *)0x0)) &&
      (uVar10 = FUN_00d50b00(), local_38 != '\0')) && (local_40 != (int64_t *)0x0)) {
    uVar10 = FUN_00d50b20();
  }
  bVar5 = (byte)(((int64_t)dVar9 & (int64_t)uVar6 >> 0x3f | uVar6) / 3);
  local_50 = lVar3;
  local_48 = '\0';
  FUN_000175c0(uVar10,&local_50);
  plVar2 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != (int64_t *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
       (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if (plVar2 != (int64_t *)0x0) {
    local_38 = '\0';
    local_40 = plVar2;
    bVar5 = FUN_00c70bc0();
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  FUN_00d50b20();
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  if ((plVar2 != (int64_t *)0x0 & bVar5) == 0) {
    FUN_01cef410();
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (local_40 != (int64_t *)0x0) {
      local_88 = '\0';
      local_90 = 0;
      FUN_01cef3b0();
      if ((local_88 != '\0') && (local_90 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    FUN_01cef410();
    plVar2 = local_40;
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    lVar3 = g_02709e60;
    if (plVar2 == (int64_t *)0x0) {
      if (g_02709e60 != 0) {
        FUN_00d50b00();
      }
      local_a0 = lVar3;
      local_98 = '\x01';
      FUN_01d51a40();
      local_80 = local_40;
      local_78 = 0;
      if (local_38 == '\0') {
        if (local_40 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      local_78 = '\x01';
      FUN_01cef3b0();
      if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_98 != '\0') && (local_a0 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  *(void*)(this_ptr + 1) = 0;
  lVar3 = arg1[0x40];
  if (lVar3 != 0) {
    FUN_00d50b00();
  }
  *this_ptr = lVar3;
  *(void*)(this_ptr + 1) = 1;
  return;
}

