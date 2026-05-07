// Function: FUN_01cc3f00
// Address: 01cc3f00
// Size: 892 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_01cc3f00(uint64_t param_1,char param_2,char param_3)

{
  int64_t lVar1;
  int in_ECX;
  void*arg1;
  int64_t *this_ptr;
  float fVar2;
  float fVar3;
  int64_t local_b0;
  char local_a8;
  int64_t local_a0;
  char local_98;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  if (in_ECX != 0) {
    FUN_01d48b40(g_02390d34);
    if (param_3 == '\0') {
      if (param_2 == '\0') {
        (**(code **)(*this_ptr + 0x4d0))();
        if (local_a8 == '\0') {
          if (local_b0 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_a8 = '\0';
        }
        (**(code **)(*this_ptr + 0x4c8))();
        local_48 = 0;
        if (local_98 == '\0') {
          if (local_a0 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_98 = '\0';
        }
        local_48 = '\x01';
        local_50 = local_a0;
        FUN_01cfd290(g_0239011c,&local_50);
        lVar1 = local_40;
        if (local_38 == '\0') {
          if (local_40 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        FUN_01d488d0();
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
        if ((local_98 != '\0') && (local_a0 != 0)) {
          FUN_00d50b20();
        }
        if (local_b0 != 0) {
          FUN_00d50b20();
        }
        if ((local_a8 != '\0') && (local_b0 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        (**(code **)(*this_ptr + 0x4d0))();
        lVar1 = local_40;
        if (local_38 == '\0') {
          if (local_40 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        FUN_01d488d0();
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
      }
    }
    else {
      (**(code **)(*this_ptr + 0x4d8))();
      lVar1 = local_40;
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      FUN_01d488d0();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
    fVar2 = g_02390124 + (float)param_1 + g_02394298;
    fVar3 = g_02394298 + (float)((uint64_t)param_1 >> 0x20) + g_0241c3ec;
    (**(code **)(*(int64_t *)*arg1 + 0x3e0))();
    (**(code **)(*(int64_t *)*arg1 + 0x3e0))
              (fVar2,fVar3,g_0241c3ec + fVar2,g_0241f374 + fVar3);
  }
  return;
}

