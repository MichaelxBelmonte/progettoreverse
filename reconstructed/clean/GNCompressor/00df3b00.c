// Function: FUN_00df3b00
// Address: 00df3b00
// Size: 1491 bytes
// Class: GNCompressor
// String references:
//   " ("
// === GNCompressor properties ===
//                   _userInfo
//                   _objectPointers
//                   _mutableObjects
//                   _immutableObjects
//                   _classDescriptions
//                   _state
//                   _rootObject
//                   _stream


void* FUN_00df3b00(void)

{
  int64_t *plVar1;
  int64_t *plVar2;
  int64_t *plVar3;
  char cVar4;
  void*puVar5;
  char *pcVar6;
  int64_t **pplVar7;
  int64_t *arg1;
  void*this_ptr;
  int64_t lVar8;
  int64_t *local_d8;
  char local_d0;
  int64_t *local_c8;
  uint64_t local_c0;
  uint32_t local_b8;
  int64_t *local_b0;
  char local_a8;
  int64_t *local_a0;
  char local_98;
  int64_t *local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  int64_t *local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  void*local_50;
  int64_t *local_48;
  char local_40 [8];
  char local_38 [8];
  
  puVar5 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar5 = &g_025795a8;
  (*g_025795c0)();
  local_50 = puVar5;
  FUN_00d4ffd0();
  local_b0 = local_d8;
  local_a8 = 0;
  if (local_d0 == '\0') {
    if (local_d8 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_d0 = '\0';
  }
  local_a8 = '\x01';
  FUN_00d8dbf0();
  if ((local_a8 != '\0') && (local_b0 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_d0 != '\0') && (local_d8 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d4efa0();
  FUN_00c84c80();
  local_a0 = local_48;
  local_98 = 0;
  if (local_40[0] == '\0') {
    if (local_48 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_40[0] = '\0';
  }
  local_98 = '\x01';
  FUN_01e33cd0();
  plVar2 = local_d8;
  if (local_d0 == '\0') {
    if (((local_d8 != (int64_t *)0x0) && (FUN_00d50b00(), local_d0 != '\0')) &&
       (local_d8 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_d0 = '\0';
  }
  if ((local_98 != '\0') && (local_a0 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if (plVar2 != (int64_t *)0x0) {
    local_d0 = '\0';
    local_d8 = (int64_t *)0x0;
    local_c8 = plVar2;
    local_b8 = 0;
    local_c0 = 0;
    if (0 < *(int *)((int64_t)plVar2 + 0xc)) {
      lVar8 = 0;
      do {
        plVar1 = *(int64_t **)(plVar2[2] + lVar8 * 8);
        local_d8 = plVar1;
        FUN_00d8db40();
        FUN_00d74120();
        local_90 = local_48;
        local_88 = 0;
        if (local_40[0] == '\0') {
          if (local_48 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_40[0] = '\0';
        }
        local_88 = '\x01';
        FUN_00d8dbf0();
        if ((local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        FUN_00d8db40();
        FUN_00d74120();
        local_80 = local_60;
        local_78 = 0;
        if (local_58 == '\0') {
          if (local_60 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_58 = '\0';
        }
        local_78 = '\x01';
        (**(code **)(*arg1 + 0x88))();
        plVar3 = local_48;
        local_38[0] = local_40[0];
        pcVar6 = local_40;
        if (local_40[0] == '\0') {
          pcVar6 = local_38;
        }
        *pcVar6 = '\0';
        if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_78 != '\0') && (local_80 != 0)) {
          FUN_00d50b20();
        }
        if ((local_58 != '\0') && (local_60 != 0)) {
          FUN_00d50b20();
        }
        (**(code **)(*plVar3 + 400))();
        local_70 = local_48;
        local_68 = 0;
        if (local_40[0] == '\0') {
          if (local_48 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_40[0] = '\0';
        }
        local_68 = '\x01';
        FUN_00d8dbf0();
        if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        FUN_000274b0();
        pplVar7 = (int64_t **)&g_02802688;
        if (plVar1 != (int64_t *)0x0) {
          (**(code **)(*plVar1 + 0x360))();
          cVar4 = FUN_00e85ea0();
          pplVar7 = &local_d8;
          if (cVar4 == '\0') {
            pplVar7 = (int64_t **)&g_02802688;
          }
        }
        if (*pplVar7 != (int64_t *)0x0) {
          FUN_00c77cd0();
          FUN_00c7b3d0();
          plVar1 = local_48;
          if (local_40[0] == '\0') {
            if (((local_48 != (int64_t *)0x0) && (FUN_00d50b00(), local_40[0] != '\0')) &&
               (local_48 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            local_40[0] = '\0';
          }
          if ((local_58 != '\0') && (local_60 != 0)) {
            FUN_00d50b20();
          }
          if (plVar1 != (int64_t *)0x0) {
            FUN_00d8db40();
            FUN_00d8dbf0();
            FUN_00d8db40();
            FUN_00d50b20();
          }
        }
        if (local_38[0] != '\0') {
          FUN_00d50b20();
        }
        lVar8 = lVar8 + 1;
        local_c0 = CONCAT44(local_c0._4_4_,(int)lVar8);
      } while ((int)lVar8 < *(int *)((int64_t)plVar2 + 0xc));
    }
    FUN_00d74c70();
    puVar5 = local_50;
  }
  FUN_00d8c7d0();
  *this_ptr = puVar5;
  *(void*)(this_ptr + 1) = 1;
  if (plVar2 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return this_ptr;
}

