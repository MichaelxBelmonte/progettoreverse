// Function: FUN_00c5ffd0
// Address: 00c5ffd0
// Size: 864 bytes
// Class: GNPopUpButton

bool FUN_00c5ffd0(int64_t *param_1,int64_t *param_2,int64_t *param_3)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t *this_ptr;
  int64_t lVar3;
  int64_t local_128;
  char local_120;
  int64_t local_d0;
  int64_t local_c8;
  int64_t local_c0;
  int64_t *local_b8;
  int64_t local_b0;
  int64_t *local_a8;
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
  
  local_a8 = param_1;
  (**(code **)(*this_ptr + 0x5d0))();
  lVar3 = *param_2;
  if ((local_120 != '\0') && (local_128 != 0)) {
    FUN_00d50b20();
  }
  if (lVar3 == local_128) {
    local_b8 = param_2;
    local_b0 = lVar3;
    (**(code **)(*this_ptr + 0x5d0))();
    local_a0 = *param_3;
    local_98 = '\0';
    local_90 = *local_a8;
    local_88 = '\0';
    (**(code **)(*this_ptr + 0x608))();
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
    FUN_00b324d0(0,&local_90,&local_50);
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
    if ((local_98 != '\0') && (local_a0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_120 != '\0') && (local_128 != 0)) {
      FUN_00d50b20();
    }
    lVar3 = g_027719d0;
    if (g_027719d0 != 0) {
      FUN_00d50b00();
    }
    lVar1 = g_0276ca98;
    if (g_0276ca98 != 0) {
      FUN_00d50b00();
    }
    local_d0 = lVar3;
    local_c8 = *local_a8;
    local_c0 = lVar1;
    FUN_002d73e0(&local_c8,&local_d0,&local_c0,4);
    FUN_000b4da0();
    lVar2 = local_40;
    if (local_38 == '\0') {
      if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38 = '\0';
    }
    FUN_002d10d0();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    FUN_00d403d0();
    local_80 = g_027719d8;
    if (g_027719d8 != 0) {
      FUN_00d50b00();
    }
    local_78 = '\x01';
    local_70 = *local_b8;
    local_68 = '\0';
    local_60 = lVar2;
    local_58 = '\0';
    FUN_00d40470(&local_60,&local_70,3,3);
    lVar3 = local_b0;
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    if ((local_120 != '\0') && (local_128 != 0)) {
      FUN_00d50b20();
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  return lVar3 == local_128;
}

