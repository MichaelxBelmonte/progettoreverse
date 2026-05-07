// Function: FUN_01f44ac0
// Address: 01f44ac0
// Size: 820 bytes
// Class: GNInfoController

uint32_t FUN_01f44ac0(void)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t *plVar4;
  char cVar5;
  uint32_t uVar6;
  void*arg1;
  int64_t local_d8;
  int64_t local_d0;
  char local_c8;
  int64_t *local_c0;
  char local_b8;
  int64_t local_b0;
  char local_a8;
  int64_t local_a0;
  char local_98;
  int64_t local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t *local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  int64_t local_30;
  char local_28;
  
  cVar5 = (**(code **)(*(int64_t *)*arg1 + 0x478))();
  uVar6 = 2;
  if (cVar5 != '\0') {
    (**(code **)(*(int64_t *)*arg1 + 0x468))();
    plVar4 = local_50;
    if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    lVar1 = g_02725a70;
    if (plVar4 == (int64_t *)0x0) {
      if (g_02725a70 != 0) {
        FUN_00d50b00();
      }
      lVar3 = g_028001b0;
      local_80 = lVar1;
      local_78 = '\x01';
      if (g_028001b0 != 0) {
        FUN_00d50b00();
      }
      local_70 = lVar3;
      local_68 = '\x01';
      FUN_01f6ca30();
      uVar6 = (**(code **)(*local_50 + 0x5e0))();
      if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      if ((local_78 != '\0') && (local_80 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      (**(code **)(*(int64_t *)*arg1 + 0x468))();
      (**(code **)(*local_c0 + 0x388))();
      lVar1 = g_02800148;
      if (g_02800148 != 0) {
        FUN_00d50b00();
      }
      local_d8 = lVar1;
      FUN_00083ea0(2,&local_d8);
      FUN_000b4da0();
      lVar3 = local_60;
      if (local_58 == '\0') {
        if (local_60 != 0) {
          FUN_00d50b00();
          if ((local_58 != '\0') && (local_60 != 0)) {
            FUN_00d50b20();
          }
        }
      }
      else {
        local_58 = '\0';
      }
      local_50 = (int64_t *)&g_0253d630;
      if ((local_28 != '\0') && (local_30 != 0)) {
        FUN_00d50b20();
      }
      local_50 = &g_024c5048;
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      if ((local_c8 != '\0') && (local_d0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_b8 != '\0') && (local_c0 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      lVar1 = g_02725a70;
      if (g_02725a70 != 0) {
        FUN_00d50b00();
      }
      lVar2 = g_028001a8;
      local_b0 = lVar1;
      local_a8 = '\x01';
      if (g_028001a8 != 0) {
        FUN_00d50b00();
      }
      local_a0 = lVar2;
      local_98 = '\x01';
      FUN_01f6ca30();
      local_90 = lVar3;
      local_88 = '\0';
      uVar6 = (**(code **)(*local_50 + 0x5d8))();
      if ((local_88 != '\0') && (local_90 != 0)) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_98 != '\0') && (local_a0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_a8 != '\0') && (local_b0 != 0)) {
        FUN_00d50b20();
      }
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
    }
  }
  return uVar6;
}

