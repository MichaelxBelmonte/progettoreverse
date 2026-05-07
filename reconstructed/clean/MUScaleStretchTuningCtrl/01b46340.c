// Function: FUN_01b46340
// Address: 01b46340
// Size: 525 bytes
// Class: MUScaleStretchTuningCtrl

void FUN_01b46340(void)

{
  int64_t *plVar1;
  int64_t lVar2;
  void*arg1;
  int64_t this_ptr;
  uint32_t uVar3;
  int64_t local_38;
  char local_30;
  
  if ((*(int64_t *)(this_ptr + 0x160) != 0) && (0.0 < *(float *)(this_ptr + 0x168))) {
    FUN_01b460b0();
    if (local_30 == '\0') {
      if (local_38 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_30 = '\0';
    }
    FUN_01d48a10();
    if (local_38 != 0) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    if (g_0239011c <= *(float *)(this_ptr + 0x168)) {
      FUN_01cfc9f0(g_0239011c,g_02390124);
      if (local_30 == '\0') {
        if (local_38 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_30 = '\0';
      }
      FUN_01d488d0();
      if (local_38 != 0) {
        FUN_00d50b20();
      }
      if ((local_30 != '\0') && (local_38 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      FUN_01cfc9f0(g_0239011c);
      if (local_30 == '\0') {
        if (local_38 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_30 = '\0';
      }
      FUN_01d488d0();
      if (local_38 != 0) {
        FUN_00d50b20();
      }
      if ((local_30 != '\0') && (local_38 != 0)) {
        FUN_00d50b20();
      }
    }
    plVar1 = (int64_t *)*arg1;
    lVar2 = *(int64_t *)(this_ptr + 0x160);
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    uVar3 = FUN_01b46180();
    (**(code **)(*plVar1 + 0x3f8))(uVar3,2);
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  return;
}

