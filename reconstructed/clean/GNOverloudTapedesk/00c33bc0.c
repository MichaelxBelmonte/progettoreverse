// Function: FUN_00c33bc0
// Address: 00c33bc0
// Size: 965 bytes
// Class: GNOverloudTapedesk

void FUN_00c33bc0(void)

{
  int iVar1;
  int64_t lVar2;
  code *pcVar3;
  void*puVar4;
  int64_t lVar5;
  int64_t this_ptr;
  int64_t lVar6;
  int64_t local_b0;
  char local_a8;
  int64_t local_a0;
  char local_98;
  int64_t local_90;
  char local_88;
  int64_t local_80;
  int64_t local_78;
  char local_70;
  int64_t local_68;
  uint64_t local_60;
  uint32_t local_58;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  uint32_t local_34;
  
  FUN_01d0f230();
  local_b0 = g_0276cc80;
  if ((*(int64_t *)(this_ptr + 0x1d8) != 0) && (*(int64_t *)(this_ptr + 0x1d0) != 0)) {
    if (g_0276cc80 != 0) {
      FUN_00d50b00();
    }
    local_a8 = '\x01';
    FUN_00d91000(1,&local_b0);
    lVar5 = local_78;
    if (local_70 == '\0') {
      if (((local_78 != 0) && (FUN_00d50b00(), local_70 != '\0')) && (local_78 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_70 = '\0';
    }
    if ((local_a8 != '\0') && (local_b0 != 0)) {
      FUN_00d50b20();
    }
    lVar6 = g_0276cc80;
    local_80 = lVar5;
    if (g_0276cc80 != 0) {
      FUN_00d50b00();
    }
    local_a0 = lVar6;
    local_98 = '\x01';
    FUN_00d91000(1,&local_a0);
    local_40 = local_78;
    if (local_70 == '\0') {
      if (((local_78 != 0) && (FUN_00d50b00(), local_70 != '\0')) && (local_78 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_70 = '\0';
    }
    if ((local_98 != '\0') && (local_a0 != 0)) {
      FUN_00d50b20();
    }
    puVar4 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar4 = &g_025683c0;
    pcVar3 = g_025683d8;
    (*g_025683d8)();
    FUN_00c92170();
    FUN_00c92160();
    lVar6 = *(int64_t *)(this_ptr + 0x1e0);
    *(void**)(this_ptr + 0x1e0) = puVar4;
    if (lVar6 != 0) {
      FUN_00d50b20();
    }
    puVar4 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar4 = &g_025683c0;
    (*pcVar3)();
    FUN_00c92170();
    FUN_00c92160();
    lVar6 = *(int64_t *)(this_ptr + 0x1e8);
    *(void**)(this_ptr + 0x1e8) = puVar4;
    if (lVar6 != 0) {
      FUN_00d50b20();
    }
    if (lVar5 != 0) {
      local_70 = '\0';
      local_78 = 0;
      local_68 = lVar5;
      local_58 = 0;
      local_60 = 0;
      if (0 < *(int *)(lVar5 + 0xc)) {
        lVar6 = 0;
        do {
          local_90 = *(int64_t *)(*(int64_t *)(lVar5 + 0x10) + lVar6 * 8);
          lVar5 = *(int64_t *)(this_ptr + 0x1e0);
          local_88 = '\0';
          local_78 = local_90;
          local_34 = FUN_00c71d60();
          iVar1 = *(int *)(lVar5 + 0x18);
          FUN_00c8e340(local_34,1);
          *(void*)(*(int64_t *)(lVar5 + 0x10) + (int64_t)iVar1) = local_34;
          if ((local_88 != '\0') && (local_90 != 0)) {
            FUN_00d50b20();
          }
          lVar5 = *(int64_t *)(this_ptr + 0x1e8);
          lVar2 = *(int64_t *)(*(int64_t *)(local_40 + 0x10) + lVar6 * 8);
          local_48 = 0;
          if (lVar2 != 0) {
            FUN_00d50b00();
          }
          local_48 = '\x01';
          local_50 = lVar2;
          local_34 = FUN_00c71d60();
          iVar1 = *(int *)(lVar5 + 0x18);
          FUN_00c8e340(local_34,1);
          *(void*)(*(int64_t *)(lVar5 + 0x10) + (int64_t)iVar1) = local_34;
          if ((local_48 != '\0') && (local_50 != 0)) {
            FUN_00d50b20();
          }
          lVar6 = lVar6 + 1;
          local_60 = CONCAT44(local_60._4_4_,(int)lVar6);
          lVar5 = local_80;
        } while ((int)lVar6 < *(int *)(local_80 + 0xc));
      }
      FUN_00018280();
    }
    if (local_40 != 0) {
      FUN_00d50b20();
    }
    if (lVar5 != 0) {
      FUN_00d50b20();
    }
  }
  return;
}

