// Function: FUN_0006bed0
// Address: 0006bed0
// Size: 939 bytes
// Class: MDAudioTrackItem
// === MDAudioTrackItem properties ===
//   MDAudioTrackItemType _trackItemType


void FUN_0006bed0(float param_1,uint64_t param_2)

{
  int64_t *plVar1;
  int64_t lVar2;
  void*arg1;
  int64_t *this_ptr;
  float fVar3;
  uint64_t uVar4;
  uint64_t in_XMM1_Qb;
  uint8_t auVar5 [16];
  float fStack_94;
  int64_t local_38;
  char local_30;
  
  uVar4 = param_2;
  FUN_01e3f820();
  FUN_01cfc6a0(g_02390120);
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
  (**(code **)(*(int64_t *)*arg1 + 0x3b0))(param_1);
  FUN_01cfc6a0(g_0239011c);
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
  fStack_94 = (float)((uint64_t)uVar4 >> 0x20);
  fStack_94 = fStack_94 * g_0239011c;
  FUN_01d48b40(g_02390124);
  (**(code **)(*(int64_t *)*arg1 + 0x3e0))();
  fVar3 = (float)FUN_01e436c0();
  (**(code **)(*(int64_t *)*arg1 + 0x3e0))(g_0239011c * fStack_94 + fVar3);
  if (param_1 < g_02390114) {
    FUN_01cfc6a0(g_02390128);
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
    auVar5._8_8_ = in_XMM1_Qb;
    auVar5._0_8_ = param_2;
    auVar5 = blendps(auVar5,ZEXT416((uint)(g_02390114 - param_1)),1);
    (**(code **)(*(int64_t *)*arg1 + 0x3b0))(param_1,auVar5._0_8_);
  }
  lVar2 = this_ptr[0x2a];
  if (lVar2 == 0) {
    (**(code **)(*this_ptr + 0x990))();
    lVar2 = this_ptr[0x2a];
    if (lVar2 == 0) {
      return;
    }
  }
  plVar1 = (int64_t *)*arg1;
  FUN_00d50b00();
  (**(code **)(*plVar1 + 0x400))(g_02390114);
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  FUN_01cfc6a0(g_02390124);
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
  (**(code **)(*(int64_t *)*arg1 + 0x3e0))();
  return;
}

