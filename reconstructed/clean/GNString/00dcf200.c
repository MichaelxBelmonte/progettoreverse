// Function: FUN_00dcf200
// Address: 00dcf200
// Size: 582 bytes
// Class: GNString
// String references:
//   "Unable to connect: no IP address for host '%@'"
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_00dcf200(uint64_t param_1,uint16_t param_2)

{
  void*puVar1;
  int64_t *this_ptr;
  int64_t lVar2;
  void*local_90;
  uint local_88;
  void*local_80;
  uint local_78;
  uint64_t local_74;
  uint64_t local_58;
  int64_t local_50;
  char local_48;
  
  FUN_00dd2440();
  puVar1 = local_90;
  if (((char)local_88 == '\0') && (local_90 != (void*)0x0)) {
    FUN_00d50b00();
    if (((char)local_88 != '\0') && (local_90 != (void*)0x0)) {
      FUN_00d50b20();
    }
  }
  lVar2 = g_02783ca0;
  if (*(int *)((int64_t)puVar1 + 0xc) == 0) {
    if (g_02783ca0 != 0) {
      FUN_00d50b00();
    }
    FUN_00dd2410();
    local_80 = (void*)local_50;
    local_88 = 1;
    local_90 = &g_024c5048;
    local_78 = local_78 & 0xffffff00;
    if (local_50 != 0) {
      FUN_00d50b00();
    }
    local_78 = CONCAT31(local_78._1_3_,1);
    FUN_00cc7b40(param_1,&local_90);
    local_90 = &g_024c5048;
    if (((char)local_78 != '\0') && (local_80 != (void*)0x0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  local_88 = local_88 & 0xffffff00;
  local_90 = (void*)0x0;
  local_80 = puVar1;
  local_74 = 0;
  lVar2 = 0;
  local_58 = 0;
  do {
    local_78 = (uint)lVar2;
    if (*(int *)((int64_t)puVar1 + 0xc) <= (int)local_78) break;
    local_90 = *(void**)(puVar1[2] + lVar2 * 8);
    (**(code **)(*this_ptr + 0x430))(param_1,param_2);
    lVar2 = lVar2 + 1;
  } while (*(char *)((int64_t)this_ptr + 0x31) == '\0');
  FUN_00dd0210();
  if (*(char *)((int64_t)this_ptr + 0x31) == '\0') {
    FUN_00cc76c0();
  }
  FUN_00d50b20();
  return;
}

