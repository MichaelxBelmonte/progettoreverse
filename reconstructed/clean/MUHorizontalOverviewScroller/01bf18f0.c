// Function: FUN_01bf18f0
// Address: 01bf18f0
// Size: 1263 bytes
// Class: MUHorizontalOverviewScroller

void FUN_01bf18f0(void)

{
  int64_t lVar1;
  char cVar2;
  void*puVar3;
  int64_t lVar4;
  int64_t lVar5;
  int iVar6;
  int64_t *this_ptr;
  int64_t local_a0;
  char local_98;
  int local_88;
  int64_t local_60;
  char local_58;
  int local_48;
  
  lVar1 = local_a0;
  puVar3 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar3 = &g_02572358;
  (*g_02572370)();
  FUN_01beead0();
  if (local_98 == '\0') {
    if (local_a0 != 0) {
      FUN_00d50b00();
      goto LAB_01bf1974;
    }
  }
  else if (local_a0 != 0) {
LAB_01bf1974:
    local_98 = '\0';
    local_a0 = 0;
    local_88 = -1;
LAB_01bf19c4:
    while( true ) {
      lVar5 = local_60;
      lVar4 = (int64_t)local_88;
      local_88 = local_88 + 1;
      if (*(int *)(lVar1 + 0xc) <= local_88) break;
      local_a0 = *(int64_t *)(*(int64_t *)(lVar1 + 0x10) + 8 + lVar4 * 8);
      FUN_01bc08b0();
      FUN_01bc09c0();
      if (local_58 == '\0') goto LAB_01bf1a50;
      if (local_60 != 0) goto LAB_01bf1a80;
    }
    FUN_002e0650();
    FUN_00d50b20();
  }
  (**(code **)(*this_ptr + 0x9d0))();
  FUN_01beead0();
  if (local_98 == '\0') {
    if (local_a0 == 0) goto LAB_01bf1e0a;
    FUN_00d50b00();
  }
  else if (local_a0 == 0) goto LAB_01bf1e0a;
  if (0 < *(int *)(local_a0 + 0xc)) {
    iVar6 = 0;
    do {
      lVar1 = local_60;
      FUN_01bc09c0();
      if (local_58 == '\0') {
        if (local_60 != 0) {
          FUN_00d50b00();
          goto LAB_01bf1ce4;
        }
      }
      else if (local_60 != 0) {
LAB_01bf1ce4:
        local_58 = '\0';
        local_60 = 0;
        local_48 = -1;
        while( true ) {
          lVar5 = (int64_t)local_48;
          local_48 = local_48 + 1;
          if (*(int *)(lVar1 + 0xc) <= local_48) break;
          local_60 = *(int64_t *)(*(int64_t *)(lVar1 + 0x10) + 8 + lVar5 * 8);
          cVar2 = FUN_00d23d70();
          if (cVar2 != '\0') {
            FUN_01bc1970(0,0,0);
          }
        }
        FUN_000840d0();
        FUN_00d50b20();
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < *(int *)(local_a0 + 0xc));
  }
  FUN_002e0650();
  FUN_00d50b20();
LAB_01bf1e0a:
  (**(code **)(*this_ptr + 0xa20))();
  if (puVar3 != (void*)0x0) {
    FUN_00d50b20();
  }
  return;
LAB_01bf1a50:
  if (local_60 != 0) {
    FUN_00d50b00();
LAB_01bf1a80:
    local_58 = '\0';
    local_60 = 0;
    local_48 = -1;
    while( true ) {
      lVar4 = (int64_t)local_48;
      local_48 = local_48 + 1;
      if (*(int *)(lVar5 + 0xc) <= local_48) break;
      local_60 = *(int64_t *)(*(int64_t *)(lVar5 + 0x10) + 8 + lVar4 * 8);
      cVar2 = FUN_00d23d70();
      if (cVar2 != '\0') {
        FUN_00d235a0();
      }
    }
    FUN_000840d0();
    FUN_00d50b20();
  }
  goto LAB_01bf19c4;
}

