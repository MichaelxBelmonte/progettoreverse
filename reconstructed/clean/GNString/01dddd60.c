// Function: FUN_01dddd60
// Address: 01dddd60
// Size: 581 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_01dddd60(void)

{
  int64_t lVar1;
  void*puVar2;
  int unaff_ESI;
  int64_t this_ptr;
  uint32_t uVar3;
  
  if (((unaff_ESI == 2) && (*(int64_t *)(this_ptr + 0x218) != 0)) &&
     (*(int64_t *)(this_ptr + 0x210) != 0)) {
    puVar2 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar2 = &g_026717b8;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    *(void*)((int64_t)puVar2 + 0x2c) = 0;
    *(void*)((int64_t)puVar2 + 0x34) = 0;
    (*g_026717d0)();
    lVar1 = *(int64_t *)(this_ptr + 0x218);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    FUN_01caeb20();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    FUN_00d50b00();
    uVar3 = FUN_01caece0();
    if (this_ptr != 0) {
      uVar3 = FUN_00d50b20();
    }
    (**(code **)(**(int64_t **)(this_ptr + 0x210) + 0x3b8))(uVar3,1);
    FUN_00d50b20();
  }
  else if ((*(int64_t *)(this_ptr + 0x1b8) != 0) && (*(int64_t *)(this_ptr + 0x1c0) != 0)) {
    puVar2 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar2 = &g_026717b8;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    *(void*)((int64_t)puVar2 + 0x2c) = 0;
    *(void*)((int64_t)puVar2 + 0x34) = 0;
    (*g_026717d0)();
    lVar1 = *(int64_t *)(this_ptr + 0x1b8);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    FUN_01caeb20();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    FUN_00d50b00();
    uVar3 = FUN_01caece0();
    if (this_ptr != 0) {
      uVar3 = FUN_00d50b20();
    }
    (**(code **)(**(int64_t **)(this_ptr + 0x1c0) + 0x3b8))(uVar3,1);
    FUN_00d50b20();
  }
  return;
}

