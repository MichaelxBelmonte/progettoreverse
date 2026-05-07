// Function: FUN_00e45630
// Address: 00e45630
// Size: 737 bytes
// Class: GNBKVA
// String references:
//   "GNBKVA"

uint64_t FUN_00e45630(uint64_t param_1,void*param_2)

{
  uint64_t uVar1;
  uint uVar2;
  void*puVar3;
  uint64_t uVar4;
  int64_t *this_ptr;
  int64_t *local_70;
  char local_68;
  int64_t local_40;
  char local_38;
  
  FUN_00daa970();
  FUN_00daa990();
  uVar1 = *param_2;
  FUN_00dab200(0,6);
  FUN_00daa9d0();
  FUN_00daaf60();
  FUN_00daa9b0();
  FUN_00daaf60();
  FUN_00daab70();
  FUN_00daab70();
  if ((int)this_ptr[5] == 0) {
    FUN_00e45a50();
    uVar4 = CONCAT71((int7)((uint64_t)uVar1 >> 8),1);
  }
  else {
    puVar3 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar3 = &g_025683c0;
    (*g_025683d8)();
    FUN_00c92170();
    FUN_00daa540();
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    FUN_00daa980();
    FUN_00daa970();
    FUN_00daa9b0();
    FUN_00daa990();
    FUN_00daa9d0();
    FUN_00daa9c0();
    FUN_00e45a50();
    (**(code **)(*this_ptr + 0x608))();
    (**(code **)(*local_70 + 0x368))();
    if ((local_38 == '\0') && (local_40 != 0)) {
      FUN_00d50b00();
    }
    if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (local_40 == 0) {
      uVar4 = 0;
    }
    else {
      uVar2 = FUN_00dab390();
      uVar4 = (uint64_t)uVar2;
      if ((char)uVar2 != '\0') {
        FUN_00daab50();
      }
      FUN_00d50b20();
      if (local_40 != 0) {
        FUN_00d50b20();
      }
    }
    FUN_00d50b20();
  }
  return uVar4 & 0xffffffff;
}

