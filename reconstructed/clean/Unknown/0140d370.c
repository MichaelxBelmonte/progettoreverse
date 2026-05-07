// Function: FUN_0140d370
// Address: 0140d370
// Size: 597 bytes
// Class: Unknown

void FUN_0140d370(uint64_t param_1)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t lVar4;
  char cVar5;
  char cVar6;
  int64_t this_ptr;
  int64_t *local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  int64_t local_30;
  char local_28;
  
  lVar3 = g_027c0a20;
  if (g_027c0a20 != 0) {
    FUN_00d50b00();
  }
  cVar5 = FUN_0140cda0();
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  if (cVar5 == '\0') {
    FUN_00d95590();
    local_28 = 0;
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_28 = '\x01';
    local_30 = local_40;
    FUN_00d97f20(param_1,&local_30);
    if ((local_48 == '\0') && (local_50 != (int64_t *)0x0)) {
      FUN_00d50b00();
    }
    if ((local_28 != '\0') && (local_30 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    lVar3 = g_027cc8a0;
    if (g_027cc8a0 != 0) {
      FUN_00d50b00();
    }
    cVar5 = (**(code **)(*local_50 + 0x50))();
    lVar1 = g_02781720;
    cVar6 = '\x01';
    if (cVar5 == '\0') {
      if (g_02781720 != 0) {
        FUN_00d50b00();
      }
      cVar5 = (**(code **)(*local_50 + 0x50))();
      lVar4 = g_027cc890;
      cVar6 = '\x01';
      if (cVar5 == '\0') {
        if (g_027cc890 != 0) {
          FUN_00d50b00();
        }
        cVar5 = (**(code **)(*local_50 + 0x50))();
        lVar2 = g_02781738;
        cVar6 = '\x01';
        if (cVar5 == '\0') {
          if (g_02781738 != 0) {
            FUN_00d50b00();
          }
          cVar6 = (**(code **)(*local_50 + 0x50))();
          if (lVar2 != 0) {
            FUN_00d50b20();
          }
        }
        if (lVar4 != 0) {
          FUN_00d50b20();
        }
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
    }
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    if (cVar6 != '\0') {
      *(void*)(this_ptr + 0x2b) = 1;
    }
    FUN_00d50b20();
  }
  else {
    *(void*)(this_ptr + 0x2b) = 1;
  }
  return;
}

