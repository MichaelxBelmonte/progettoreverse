// Function: FUN_00d227f0
// Address: 00d227f0
// Size: 1321 bytes
// Class: GNNull

void FUN_00d227f0(uint64_t param_1)

{
  int64_t *plVar1;
  int64_t lVar2;
  char cVar3;
  int64_t lVar4;
  void*arg1;
  int64_t this_ptr;
  int64_t local_100;
  char local_f8;
  int64_t local_f0;
  char local_e8;
  int64_t local_e0;
  char local_d8;
  int64_t local_c0;
  char local_b8;
  int64_t local_b0;
  char local_a8;
  int64_t local_a0;
  char local_98;
  int64_t local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  FUN_00d50de0();
  cVar3 = (**(code **)(*(int64_t *)*arg1 + 0x378))();
  lVar2 = g_0277cf70;
  lVar4 = g_0277cf50;
  if (cVar3 == '\0') {
    plVar1 = (int64_t *)*arg1;
    if (*(char *)(this_ptr + 0x1e) == '\0') {
      if (g_0277cf70 != 0) {
        FUN_00d50b00();
      }
      local_80 = lVar2;
      local_78 = '\x01';
      (**(code **)(*plVar1 + 0x5a0))(param_1,4);
      if ((local_78 != '\0') && (local_80 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      if (g_0277cf70 != 0) {
        FUN_00d50b00();
      }
      local_90 = lVar2;
      local_88 = '\x01';
      (**(code **)(*plVar1 + 0x5a0))(param_1,3);
      if ((local_88 != '\0') && (local_90 != 0)) {
        FUN_00d50b20();
      }
    }
    (**(code **)(*(int64_t *)*arg1 + 0x3a8))();
    (**(code **)(*(int64_t *)*arg1 + 0x3a8))();
    if (*(char *)(this_ptr + 0x1e) == '\0') {
      (**(code **)(*(int64_t *)*arg1 + 0x3a8))();
    }
    (**(code **)(*(int64_t *)*arg1 + 0x3b8))();
    if (0 < *(int *)(this_ptr + 0xc)) {
      lVar4 = 0;
      do {
        local_70 = *(int64_t *)(*(int64_t *)(this_ptr + 0x10) + lVar4 * 8);
        local_68 = '\0';
        (**(code **)(*(int64_t *)*arg1 + 0x400))();
        if ((local_68 != '\0') && (local_70 != 0)) {
          FUN_00d50b20();
        }
        lVar4 = lVar4 + 1;
      } while (lVar4 < *(int *)(this_ptr + 0xc));
    }
  }
  else {
    if (*(char *)(this_ptr + 0x1c) != '\0') {
      plVar1 = (int64_t *)*arg1;
      if (g_0277cf50 != 0) {
        FUN_00d50b00();
      }
      local_100 = lVar4;
      local_f8 = '\x01';
      (**(code **)(*plVar1 + 0x488))(param_1,&local_100);
      if ((local_f8 != '\0') && (local_100 != 0)) {
        FUN_00d50b20();
      }
    }
    lVar4 = g_0277cf58;
    if (*(char *)(this_ptr + 0x1d) != '\0') {
      plVar1 = (int64_t *)*arg1;
      if (g_0277cf58 != 0) {
        FUN_00d50b00();
      }
      local_f0 = lVar4;
      local_e8 = '\x01';
      (**(code **)(*plVar1 + 0x488))(param_1,&local_f0);
      if ((local_e8 != '\0') && (local_f0 != 0)) {
        FUN_00d50b20();
      }
    }
    lVar4 = g_0277cf60;
    plVar1 = (int64_t *)*arg1;
    if (g_0277cf60 != 0) {
      FUN_00d50b00();
    }
    local_e0 = lVar4;
    local_d8 = '\x01';
    (**(code **)(*plVar1 + 0x488))(param_1,&local_e0);
    if ((local_d8 != '\0') && (local_e0 != 0)) {
      FUN_00d50b20();
    }
    cVar3 = (**(code **)(*(int64_t *)*arg1 + 0x388))();
    local_c0 = g_0277cf68;
    if (cVar3 == '\0') {
      plVar1 = (int64_t *)*arg1;
      if (g_0277cf68 != 0) {
        FUN_00d50b00();
      }
      local_b8 = '\x01';
      (**(code **)(*plVar1 + 0x498))(param_1,&local_c0);
      if ((local_b8 != '\0') && (local_c0 != 0)) {
        FUN_00d50b20();
      }
      if (0 < *(int *)(this_ptr + 0xc)) {
        lVar4 = 0;
        do {
          lVar2 = *(int64_t *)(*(int64_t *)(this_ptr + 0x10) + lVar4 * 8);
          plVar1 = (int64_t *)*arg1;
          if (*(char *)(this_ptr + 0x1e) == '\0') {
            local_98 = '\0';
            local_a0 = lVar2;
            FUN_00d93550();
            local_50 = local_40;
            local_48 = 0;
            if (local_38 == '\0') {
              if (local_40 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_38 = '\0';
            }
            local_48 = '\x01';
            (**(code **)(*plVar1 + 0x4f8))(param_1,&local_50);
            if ((local_48 != '\0') && (local_50 != 0)) {
              FUN_00d50b20();
            }
            if ((local_38 != '\0') && (local_40 != 0)) {
              FUN_00d50b20();
            }
            if ((local_98 != '\0') && (local_a0 != 0)) {
              FUN_00d50b20();
            }
          }
          else {
            local_a8 = '\0';
            local_b0 = lVar2;
            FUN_00d93550();
            local_60 = local_40;
            local_58 = 0;
            if (local_38 == '\0') {
              if (local_40 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_38 = '\0';
            }
            local_58 = '\x01';
            (**(code **)(*plVar1 + 0x4f0))(param_1,&local_60);
            if ((local_58 != '\0') && (local_60 != 0)) {
              FUN_00d50b20();
            }
            if ((local_38 != '\0') && (local_40 != 0)) {
              FUN_00d50b20();
            }
            if ((local_a8 != '\0') && (local_b0 != 0)) {
              FUN_00d50b20();
            }
          }
          lVar4 = lVar4 + 1;
        } while (lVar4 < *(int *)(this_ptr + 0xc));
      }
    }
    else {
      FUN_00d50b00();
      FUN_00e4ad10();
      if (this_ptr != 0) {
        FUN_00d50b20();
      }
    }
  }
  return;
}

