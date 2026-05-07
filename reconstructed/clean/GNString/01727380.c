// Function: FUN_01727380
// Address: 01727380
// Size: 2012 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


int64_t * FUN_01727380(void)

{
  int64_t lVar1;
  int64_t lVar2;
  void*puVar3;
  int64_t lVar4;
  int64_t arg1;
  int64_t *this_ptr;
  int iVar5;
  int64_t local_78;
  char local_70;
  int local_60;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  if (*(int64_t *)(arg1 + 0x48) == 0) {
    puVar3 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar3 = &g_02572358;
    (*g_02572370)();
    lVar1 = *(int64_t *)(arg1 + 0x48);
    *(void**)(arg1 + 0x48) = puVar3;
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    FUN_0171aac0();
    FUN_01780120();
    if ((local_70 == '\0') && (local_78 != 0)) {
      FUN_00d50b00();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (local_78 != 0) {
      local_60 = -1;
      while (lVar1 = local_40, local_60 = local_60 + 1, local_60 < *(int *)(local_78 + 0xc)) {
        FUN_00d97ce0(*(void*)(local_78 + 0x10),1);
        if ((local_38 == '\0') && (local_40 != 0)) {
          FUN_00d50b00();
        }
        FUN_00d99d60();
        if (local_48 == '\0') {
          if (local_50 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_48 = '\0';
        }
        FUN_00d235a0();
        if (local_50 != 0) {
          FUN_00d50b20();
        }
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
        FUN_00d99300();
        if (local_48 == '\0') {
          if (local_50 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_48 = '\0';
        }
        local_40 = local_50;
        local_38 = '\0';
        FUN_00d235a0();
        if (local_50 != 0) {
          FUN_00d50b20();
        }
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
      }
      FUN_00018280();
      FUN_00d50b20();
    }
    lVar1 = g_02781630;
    if (g_02781630 != 0) {
      FUN_00d50b00();
    }
    FUN_00d235a0();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    lVar1 = g_027cc920;
    if (g_027cc920 != 0) {
      FUN_00d50b00();
    }
    FUN_00d235a0();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    lVar1 = g_027ce7e8;
    if (g_027ce7e8 != 0) {
      FUN_00d50b00();
    }
    FUN_00d235a0();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    lVar1 = g_027cc930;
    if (g_027cc930 != 0) {
      FUN_00d50b00();
    }
    local_78 = lVar1;
    FUN_00d235a0();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    FUN_0171e8d0();
    if (lVar1 != 0) {
      FUN_00d50b00();
      local_78 = 0;
      local_60 = -1;
      while( true ) {
        lVar2 = local_40;
        lVar4 = (int64_t)local_60;
        local_60 = local_60 + 1;
        if (*(int *)(lVar1 + 0xc) <= local_60) break;
        local_78 = *(int64_t *)(*(int64_t *)(lVar1 + 0x10) + 8 + lVar4 * 8);
        FUN_00d97ce0(*(int64_t *)(lVar1 + 0x10),1);
        if ((local_38 == '\0') && (local_40 != 0)) {
          FUN_00d50b00();
        }
        FUN_00d99d60();
        if (local_48 == '\0') {
          if (local_50 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_48 = '\0';
        }
        FUN_00d235a0();
        if (local_50 != 0) {
          FUN_00d50b20();
        }
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
        FUN_00d99300();
        if (local_48 == '\0') {
          if (local_50 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_48 = '\0';
        }
        local_40 = local_50;
        local_38 = '\0';
        FUN_00d235a0();
        if (local_50 != 0) {
          FUN_00d50b20();
        }
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
      }
      FUN_00018280();
      FUN_00d50b20();
    }
    FUN_0171ebf0();
    if (local_78 != 0) {
      FUN_00d50b00();
      if (0 < *(int *)(local_78 + 0xc)) {
        iVar5 = 0;
        do {
          lVar1 = local_40;
          FUN_00d97ce0();
          if ((local_38 == '\0') && (local_40 != 0)) {
            FUN_00d50b00();
          }
          FUN_00d99d60();
          if (local_48 == '\0') {
            if (local_50 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_48 = '\0';
          }
          FUN_00d235a0();
          if (local_50 != 0) {
            FUN_00d50b20();
          }
          if ((local_48 != '\0') && (local_50 != 0)) {
            FUN_00d50b20();
          }
          FUN_00d99300();
          if (local_48 == '\0') {
            if (local_50 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_48 = '\0';
          }
          local_40 = local_50;
          local_38 = '\0';
          FUN_00d235a0();
          if (local_50 != 0) {
            FUN_00d50b20();
          }
          if ((local_48 != '\0') && (local_50 != 0)) {
            FUN_00d50b20();
          }
          if (lVar1 != 0) {
            FUN_00d50b20();
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < *(int *)(local_78 + 0xc));
      }
      FUN_00018280();
      FUN_00d50b20();
    }
  }
  *(void*)(this_ptr + 1) = 0;
  lVar1 = *(int64_t *)(arg1 + 0x48);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  *this_ptr = lVar1;
  *(void*)(this_ptr + 1) = 1;
  return this_ptr;
}

