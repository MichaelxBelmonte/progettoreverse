// Function: FUN_00dc07c0
// Address: 00dc07c0
// Size: 815 bytes
// Class: GNValue

void FUN_00dc07c0(void*param_1,uint32_t param_2,void*param_3,uint8_t param_4)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t lVar3;
  void*arg1;
  void*this_ptr;
  bool bVar4;
  uint64_t local_100;
  uint8_t local_f8;
  uint64_t local_f0;
  uint8_t local_e8;
  uint64_t local_e0;
  uint8_t local_d8;
  uint64_t local_d0;
  uint8_t local_c8;
  uint8_t local_b8;
  int64_t local_b0;
  uint8_t local_a8;
  uint8_t local_98 [8];
  uint8_t local_90;
  int64_t local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  int64_t local_68;
  char local_60;
  uint32_t local_54;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  local_54 = param_2;
  (**(code **)(*(int64_t *)*param_1 + 0x360))();
  FUN_00dbdde0();
  lVar1 = local_40;
  if ((local_38 == '\0') && (local_40 != 0)) {
    FUN_00d50b00();
  }
  local_88 = lVar1;
  local_80 = '\0';
  local_100 = *param_3;
  local_f8 = 0;
  FUN_00dbe290(&local_100,&local_88,param_4);
  lVar2 = local_40;
  if (lVar1 == local_40) {
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
    bVar4 = lVar1 != 0;
    lVar1 = lVar2;
    if (bVar4) {
      FUN_00d50b20();
    }
  }
  else {
    bVar4 = lVar1 != 0;
    lVar1 = lVar2;
    if (bVar4) {
      FUN_00d50b20();
    }
  }
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  lVar2 = g_02783b30;
  local_f0 = *this_ptr;
  local_e8 = 0;
  local_70 = '\0';
  local_78 = lVar1;
  if (g_02783b30 != 0) {
    FUN_00d50b00();
  }
  local_68 = lVar2;
  local_60 = '\x01';
  local_e0 = *param_1;
  local_d8 = 0;
  FUN_00dbf000();
  lVar2 = local_50;
  if (local_48 == '\0') {
    if (local_50 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_48 = '\0';
  }
  local_90 = 1;
  FUN_00dbebd0(&local_68,&local_78,local_98);
  lVar3 = local_40;
  if (lVar1 == local_40) {
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
    bVar4 = lVar1 != 0;
    lVar1 = lVar3;
    if (bVar4) {
      FUN_00d50b20();
    }
  }
  else {
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    local_38 = '\0';
    lVar1 = lVar3;
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  local_d0 = *arg1;
  local_c8 = 0;
  local_b8 = 0;
  FUN_00dbde70();
  if ((local_38 == '\0') && (local_40 != 0)) {
    FUN_00d50b00();
  }
  local_b0 = local_40;
  local_a8 = 1;
  FUN_00dbfc90(&local_b0,0);
  if (local_40 != 0) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  return;
}

