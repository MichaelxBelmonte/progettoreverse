// Function: FUN_00cc95f0
// Address: 00cc95f0
// Size: 531 bytes
// Class: GNBCFA
// String references:
//   "GNBCFA"

void FUN_00cc95f0(uint64_t param_1,int64_t param_2)

{
  int64_t lVar1;
  void*puVar2;
  int64_t lVar3;
  int64_t *arg1;
  void*this_ptr;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  
  puVar2 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar2 = &g_0256d4f0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  puVar2[4] = 0;
  FUN_00d500e0();
  lVar1 = *arg1;
  lVar3 = puVar2[2];
  if (lVar3 != lVar1) {
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    puVar2[2] = lVar1;
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
  }
  (**(code **)(*(int64_t *)*arg1 + 0x4e0))();
  if (local_58 == '\0') {
    if (local_60 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_58 = '\0';
  }
  FUN_00daa700();
  lVar1 = puVar2[3];
  lVar3 = lVar1;
  if (lVar1 == local_50) goto LAB_00cc9723;
  lVar3 = local_50;
  if (local_48 == '\0') {
    if (local_50 == 0) {
      lVar3 = 0;
      goto LAB_00cc96de;
    }
    FUN_00d50b00();
    lVar1 = puVar2[3];
    puVar2[3] = local_50;
  }
  else {
    local_48 = '\0';
LAB_00cc96de:
    puVar2[3] = lVar3;
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
    lVar3 = local_50;
  }
LAB_00cc9723:
  if ((local_48 != '\0') && (lVar3 != 0)) {
    FUN_00d50b20();
  }
  if (local_60 != 0) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if (puVar2[3] != 0) {
    FUN_00daa970();
    FUN_00daa9c0();
    FUN_00daa990();
  }
  if (param_2 != 0) {
    FUN_00dac5e0();
  }
  puVar2[4] = param_2;
  if (puVar2[3] != 0) {
    FUN_00dab200(0,6);
    FUN_00daaf60();
    FUN_00daa9b0();
    FUN_00daaf60();
  }
  *this_ptr = puVar2;
  *(void*)(this_ptr + 1) = 1;
  return;
}

