// Function: FUN_01890a90
// Address: 01890a90
// Size: 1690 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


int64_t * FUN_01890a90(uint64_t param_1,int64_t *param_2)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t lVar3;
  int iVar4;
  int64_t *plVar5;
  int64_t arg1;
  int64_t *this_ptr;
  uint64_t uVar6;
  int64_t local_130;
  char local_128;
  int64_t local_120;
  char local_118;
  int64_t local_110;
  char local_108;
  int64_t local_100;
  char local_f8;
  int64_t local_f0;
  char local_e8;
  int64_t local_e0;
  char local_d8;
  int64_t local_d0;
  char local_c8;
  int64_t local_c0;
  char local_b8;
  int64_t local_b0;
  char local_a8;
  int64_t local_a0;
  char local_98;
  int64_t local_90;
  uint64_t local_88;
  uint32_t local_80;
  int64_t local_78;
  char local_70;
  int64_t local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  int64_t local_40;
  char local_38;
  
  if (*(int64_t *)(arg1 + 0x80) == 0) {
    plVar5 = (int64_t *)FUN_00e8fc40();
    FUN_00022d50();
    (**(code **)(*plVar5 + 0x18))();
    lVar1 = *(int64_t *)(arg1 + 0x80);
    *(int64_t **)(arg1 + 0x80) = plVar5;
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    lVar1 = g_0276cc80;
    if (g_0276cc80 != 0) {
      FUN_00d50b00();
    }
    local_130 = lVar1;
    local_128 = '\x01';
    FUN_00d91000(0,&local_130);
    lVar1 = local_a0;
    if (local_98 == '\0') {
      if (((local_a0 != 0) && (FUN_00d50b00(), local_98 != '\0')) && (local_a0 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_98 = '\0';
    }
    if ((local_128 != '\0') && (local_130 != 0)) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      local_98 = '\0';
      local_a0 = 0;
      local_90 = lVar1;
      local_80 = 0;
      local_88 = 0;
      if (0 < *(int *)(lVar1 + 0xc)) {
        uVar6 = 0;
        do {
          local_a0 = *(int64_t *)(*(int64_t *)(lVar1 + 0x10) + uVar6 * 8);
          FUN_00d95590();
          local_78 = local_b0;
          local_70 = 0;
          if (local_a8 == '\0') {
            if (local_b0 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_a8 = '\0';
          }
          local_70 = '\x01';
          FUN_00d97f20();
          if (local_38 == '\0') {
            if (local_40 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_38 = '\0';
          }
          if ((local_70 != '\0') && (local_78 != 0)) {
            FUN_00d50b20();
          }
          if ((local_a8 != '\0') && (local_b0 != 0)) {
            FUN_00d50b20();
          }
          if (local_40 != 0) {
            iVar4 = FUN_00d8c7a0();
            lVar3 = g_027edfc8;
            lVar2 = g_02765278;
            if (iVar4 != 0) {
              switch(uVar6 & 0xffffffff) {
              case 0:
                FUN_018909f0();
                local_60 = 0;
                lVar2 = g_027d8dd0;
                if (local_38 == '\0') {
                  if (local_40 != 0) {
                    FUN_00d50b00();
                    lVar2 = g_027d8dd0;
                  }
                }
                else {
                  local_38 = '\0';
                }
                local_60 = '\x01';
                local_68 = local_40;
                g_027d8dd0 = lVar2;
                if (lVar2 != 0) {
                  local_60 = '\x01';
                  FUN_00d50b00();
                }
                local_118 = '\x01';
                local_120 = lVar2;
                FUN_00cd2930();
                if ((local_118 != '\0') && (local_120 != 0)) {
                  FUN_00d50b20();
                }
                if ((local_60 != '\0') && (local_68 != 0)) {
                  FUN_00d50b20();
                }
                if ((local_38 != '\0') && (local_40 != 0)) {
                  FUN_00d50b20();
                }
                break;
              case 1:
                FUN_018909f0();
                local_50 = 0;
                lVar2 = g_027d8dd8;
                if (local_38 == '\0') {
                  if (local_40 != 0) {
                    FUN_00d50b00();
                    lVar2 = g_027d8dd8;
                  }
                }
                else {
                  local_38 = '\0';
                }
                local_50 = '\x01';
                local_58 = local_40;
                g_027d8dd8 = lVar2;
                if (lVar2 != 0) {
                  local_50 = '\x01';
                  FUN_00d50b00();
                }
                local_108 = '\x01';
                local_110 = lVar2;
                FUN_00cd2930();
                if ((local_108 != '\0') && (local_110 != 0)) {
                  FUN_00d50b20();
                }
                if ((local_50 != '\0') && (local_58 != 0)) {
                  FUN_00d50b20();
                }
                if ((local_38 != '\0') && (local_40 != 0)) {
                  FUN_00d50b20();
                }
                break;
              case 2:
                local_100 = local_40;
                local_f8 = '\0';
                if (g_02765278 != 0) {
                  FUN_00d50b00();
                }
                local_f0 = lVar2;
                local_e8 = '\x01';
                FUN_00cd2930();
                if ((local_e8 != '\0') && (local_f0 != 0)) {
                  FUN_00d50b20();
                }
                if ((local_f8 != '\0') && (local_100 != 0)) {
                  FUN_00d50b20();
                }
                break;
              case 3:
                local_e0 = local_40;
                local_d8 = '\0';
                if (g_027edfc8 != 0) {
                  FUN_00d50b00();
                }
                local_d0 = lVar3;
                local_c8 = '\x01';
                FUN_00cd2930();
                if ((local_c8 != '\0') && (local_d0 != 0)) {
                  FUN_00d50b20();
                }
                if ((local_d8 != '\0') && (local_e0 != 0)) {
                  FUN_00d50b20();
                }
              }
            }
            FUN_00d50b20();
          }
          uVar6 = uVar6 + 1;
          local_88 = CONCAT44(local_88._4_4_,(int)uVar6);
        } while ((int)uVar6 < *(int *)(lVar1 + 0xc));
      }
      FUN_00018280();
      FUN_00d50b20();
    }
  }
  local_c0 = *param_2;
  local_b8 = '\0';
  FUN_01de4130();
  lVar1 = local_a0;
  *(void*)(this_ptr + 1) = 0;
  if (local_98 == '\0') {
    if (local_a0 == 0) {
      *this_ptr = 0;
      *(void*)(this_ptr + 1) = 1;
    }
    else {
      FUN_00d50b00();
      *this_ptr = lVar1;
      *(void*)(this_ptr + 1) = 1;
      if ((local_98 != '\0') && (local_a0 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    *this_ptr = local_a0;
    *(void*)(this_ptr + 1) = 1;
    local_98 = '\0';
  }
  if ((local_b8 != '\0') && (local_c0 != 0)) {
    FUN_00d50b20();
  }
  return this_ptr;
}

