// Function: FUN_0062d8e0
// Address: 0062d8e0
// Size: 837 bytes
// Class: MDPluginMenuViewController

void FUN_0062d8e0(uint64_t param_1,uint64_t param_2)

{
  int64_t lVar1;
  char cVar2;
  int64_t this_ptr;
  bool bVar3;
  uint32_t uVar4;
  uint32_t local_a8;
  uint32_t uStack_a4;
  int64_t local_98;
  char local_90;
  int64_t local_48;
  char local_40;
  int64_t local_38;
  char local_30;
  int64_t *local_28;
  char local_20;
  
  FUN_01f27fe0();
  cVar2 = (**(code **)(*local_28 + 0x450))();
  if ((cVar2 == '\0') && (*(int64_t *)(this_ptr + 0x80) != 0)) {
    FUN_01e561b0();
    bVar3 = local_98 != 0;
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    bVar3 = false;
  }
  if ((local_20 != '\0') && (local_28 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (bVar3) {
    FUN_01e561b0();
    (**(code **)(*local_28 + 0x4d8))();
    if ((local_20 != '\0') && (local_28 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    local_a8 = (uint32_t)param_2;
    uStack_a4 = (uint32_t)((uint64_t)param_2 >> 0x20);
    if (*(int64_t *)(*(int64_t *)(this_ptr + 0x80) + 0x308) == 0) {
      FUN_00d6f370();
      lVar1 = g_02725828;
      if (g_02725828 != 0) {
        FUN_00d50b00();
      }
      FUN_00d70a00(local_a8);
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      if ((local_20 != '\0') && (local_28 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d6f370();
      lVar1 = g_02725830;
      if (g_02725830 != 0) {
        FUN_00d50b00();
      }
      FUN_00d70a00(uStack_a4);
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      if ((local_20 != '\0') && (local_28 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      FUN_00d6f370();
      lVar1 = g_02725818;
      if (g_02725818 != 0) {
        FUN_00d50b00();
      }
      FUN_00d70a00(local_a8);
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      if ((local_20 != '\0') && (local_28 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d6f370();
      lVar1 = g_02725820;
      if (g_02725820 != 0) {
        FUN_00d50b00();
      }
      FUN_00d70a00(uStack_a4);
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      if ((local_20 != '\0') && (local_28 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    FUN_00d6f370();
    uVar4 = FUN_0062deb0();
    local_30 = 0;
    lVar1 = g_02725838;
    if ((local_90 == '\0') && (local_98 != 0)) {
      uVar4 = FUN_00d50b00();
      lVar1 = g_02725838;
    }
    local_30 = '\x01';
    local_38 = local_98;
    g_02725838 = lVar1;
    if (lVar1 != 0) {
      local_30 = '\x01';
      uVar4 = FUN_00d50b00();
    }
    local_40 = '\x01';
    local_48 = lVar1;
    FUN_00d6f570(uVar4,&local_48);
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    if ((local_20 != '\0') && (local_28 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  return;
}

