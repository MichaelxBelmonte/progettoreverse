// Function: FUN_01bf2670
// Address: 01bf2670
// Size: 1038 bytes
// Class: MUHorizontalOverviewScroller

void FUN_01bf2670(void)

{
  int64_t lVar1;
  bool bVar2;
  bool bVar3;
  code *pcVar4;
  int64_t lVar5;
  void*puVar6;
  int64_t arg1;
  void*this_ptr;
  void*local_b0;
  char local_a8;
  int local_98;
  int64_t local_88;
  char local_80;
  int local_70;
  void*local_40;
  
  lVar1 = *(int64_t *)(arg1 + 0x160);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  FUN_002dff80();
  if ((local_a8 == '\0') && (local_b0 != (void*)0x0)) {
    FUN_00d50b00();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if (local_b0 != (void*)0x0) {
    FUN_00d50b00();
  }
  pcVar4 = g_02572370;
  bVar3 = true;
  local_40 = local_b0;
  do {
    if (local_40 == (void*)0x0) {
      bVar2 = false;
      puVar6 = (void*)0x0;
LAB_01bf2a06:
      if (bVar2) {
        if ((bVar3) || (local_40 == (void*)0x0)) {
LAB_01bf2a37:
          if (puVar6 == (void*)0x0) goto LAB_01bf273b;
        }
        else {
          bVar3 = true;
          FUN_00d50b00();
        }
        FUN_00d50b20();
      }
    }
    else {
      local_98 = -1;
      bVar2 = false;
      puVar6 = (void*)0x0;
LAB_01bf2808:
      while (lVar1 = local_88, local_98 = local_98 + 1,
            local_98 < *(int *)((int64_t)local_40 + 0xc)) {
        FUN_01bbf570();
        if (local_80 == '\0') goto LAB_01bf28a0;
        if (local_88 != 0) goto LAB_01bf28c8;
      }
      FUN_002e0650();
      if (local_40 == puVar6) goto LAB_01bf2a06;
      if ((bVar2) && (puVar6 != (void*)0x0)) {
        FUN_00d50b00();
      }
      if ((bVar3) && (local_40 != (void*)0x0)) {
        FUN_00d50b20();
      }
      bVar3 = true;
      local_40 = puVar6;
      if (bVar2) goto LAB_01bf2a37;
      bVar3 = false;
    }
LAB_01bf273b:
    if (local_40 == (void*)0x0) {
      *this_ptr = local_b0;
      *(void*)(this_ptr + 1) = 1;
      return;
    }
  } while( true );
LAB_01bf28a0:
  if (local_88 != 0) {
    FUN_00d50b00();
LAB_01bf28c8:
    local_80 = '\0';
    local_88 = 0;
    local_70 = -1;
    while( true ) {
      lVar5 = (int64_t)local_70;
      local_70 = local_70 + 1;
      if (*(int *)(lVar1 + 0xc) <= local_70) break;
      local_88 = *(int64_t *)(*(int64_t *)(lVar1 + 0x10) + 8 + lVar5 * 8);
      if (puVar6 == (void*)0x0) {
        puVar6 = (void*)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar6 = &g_02572358;
        (*pcVar4)();
        bVar2 = true;
      }
      FUN_00d21140();
      FUN_00d21140();
    }
    FUN_002e0650();
    FUN_00d50b20();
  }
  goto LAB_01bf2808;
}

