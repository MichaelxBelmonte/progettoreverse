// Function: FUN_01f7aa20
// Address: 01f7aa20
// Size: 955 bytes
// Class: GNRadialColorGradient

uint64_t FUN_01f7aa20(uint64_t param_1,int param_2)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t lVar5;
  uint32_t uVar6;
  int64_t *this_ptr;
  int64_t lVar7;
  int64_t local_38;
  char local_30;
  
  if (param_2 == 0) {
    return 1;
  }
  FUN_01d70da0();
  FUN_01d701d0();
  if (local_30 == '\0') {
    if (local_38 == 0) {
      return 1;
    }
    FUN_00d50b00();
  }
  else if (local_38 == 0) {
    return 1;
  }
  uVar6 = FUN_01d654a0();
  lVar5 = g_0277d5d0;
  lVar4 = g_0277d5c0;
  lVar3 = g_0277d5b8;
  lVar2 = g_0277d5b0;
  lVar1 = g_0277d5a8;
  lVar7 = local_38;
  switch(uVar6) {
  case 0:
    if (g_0277d5a8 != 0) {
      FUN_00d50b00();
    }
    FUN_00d306a0();
    if (local_38 == 0) {
      lVar7 = 0;
    }
    else if (local_30 == '\0') {
      FUN_00d50b00();
    }
    else {
      local_30 = '\0';
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    break;
  case 1:
    if (g_0277d5b8 != 0) {
      FUN_00d50b00();
    }
    FUN_00d306a0();
    if (local_38 == 0) {
      lVar7 = 0;
    }
    else if (local_30 == '\0') {
      FUN_00d50b00();
    }
    else {
      local_30 = '\0';
    }
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    break;
  case 2:
    if (g_0277d5b0 != 0) {
      FUN_00d50b00();
    }
    FUN_00d306a0();
    if (local_38 == 0) {
      lVar7 = 0;
    }
    else if (local_30 == '\0') {
      FUN_00d50b00();
    }
    else {
      local_30 = '\0';
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    break;
  case 3:
    if (g_0277d5c0 != 0) {
      FUN_00d50b00();
    }
    FUN_00d306a0();
    if (local_38 == 0) {
      lVar7 = 0;
    }
    else if (local_30 == '\0') {
      FUN_00d50b00();
    }
    else {
      local_30 = '\0';
    }
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
    break;
  case 4:
    if (g_0277d5d0 != 0) {
      FUN_00d50b00();
    }
    FUN_00d306a0();
    if (local_38 == 0) {
      lVar7 = 0;
    }
    else if (local_30 == '\0') {
      FUN_00d50b00();
    }
    else {
      local_30 = '\0';
    }
    if (lVar5 != 0) {
      FUN_00d50b20();
    }
    break;
  default:
    goto switchD_01f7aab1_default;
  }
  if (lVar7 == 0) {
switchD_01f7aab1_default:
    lVar7 = 0;
  }
  else {
    FUN_00d30620();
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    if (local_38 != lVar7) {
      FUN_00d30860();
      (**(code **)(*this_ptr + 0x5c0))();
    }
  }
  FUN_00d50b20();
  if (lVar7 != 0) {
    FUN_00d50b20();
  }
  return 1;
}

