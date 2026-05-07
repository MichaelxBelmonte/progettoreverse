// Function: FUN_01d21380
// Address: 01d21380
// Size: 826 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_01d21380(uint32_t param_1)

{
  char cVar1;
  void*this_ptr;
  int64_t *local_40;
  char local_38;
  
  FUN_01d4ed90(g_024202c0,param_1);
  if ((local_38 == '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  FUN_01d52700();
  FUN_01d52740();
  if ((local_38 == '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  cVar1 = FUN_01d53b40();
  if (cVar1 == '\0') {
    (**(code **)(*local_40 + 0x400))(0);
  }
  else {
    FUN_01cff4e0();
    if (local_38 == '\0') {
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    FUN_01d488d0();
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_01d49110(0,g_02390124);
    FUN_01d49110(g_023b45e0,g_02390124);
    FUN_01d49110(g_02390d34,g_02390124);
    FUN_01d49110(g_023b5550,g_02390124);
    FUN_01cff4e0();
    if (local_38 == '\0') {
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    FUN_01d488d0();
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_01d49110(g_023b5570,g_02390124);
  }
  FUN_01d52770();
  *this_ptr = local_40;
  *(void*)(this_ptr + 1) = 1;
  if (local_40 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}

