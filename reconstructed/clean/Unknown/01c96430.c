// Function: FUN_01c96430
// Address: 01c96430
// Size: 811 bytes
// Class: Unknown

void FUN_01c96430(void)

{
  int64_t lVar1;
  char cVar2;
  int64_t *arg1;
  int64_t this_ptr;
  int64_t local_a8;
  char local_a0;
  int64_t local_98;
  char local_90;
  int64_t local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  int64_t *local_68;
  char local_60;
  int64_t *local_38;
  char local_30;
  
  FUN_00d3ecc0();
  local_78 = g_026e0f70;
  if (g_026e0f70 != 0) {
    FUN_00d50b00();
  }
  local_70 = '\x01';
  cVar2 = (**(code **)(*local_38 + 0x50))();
  if (cVar2 == '\0') {
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    cVar2 = *(char *)(this_ptr + 0x2f);
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (cVar2 != '\0') {
      local_60 = 0;
      (**(code **)(*(int64_t *)(this_ptr + 0x10) + 0x10))();
      FUN_00d50b00();
      lVar1 = g_027ed418;
      local_60 = '\x01';
      local_68 = (int64_t *)(this_ptr + 0x10);
      if (g_027ed418 != 0) {
        FUN_00d50b00();
      }
      FUN_01cad620();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
        (**(code **)(*local_68 + 0x10))();
        FUN_00d50b20();
      }
      FUN_00d46300();
      lVar1 = g_027ed470;
      if ((local_30 == '\0') && (local_38 != (int64_t *)0x0)) {
        FUN_00d50b00();
        lVar1 = g_027ed470;
      }
      g_027ed470 = lVar1;
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      FUN_01ca93d0();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      if (local_38 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      FUN_00d403d0();
      FUN_00d50b00();
      local_a8 = g_026e0f70;
      if (g_026e0f70 != 0) {
        FUN_00d50b00();
      }
      local_a0 = '\x01';
      local_98 = 0;
      local_90 = '\0';
      FUN_00d41040(&local_98,&local_a8);
      if ((local_90 != '\0') && (local_98 != 0)) {
        FUN_00d50b20();
      }
      if ((local_a0 != '\0') && (local_a8 != 0)) {
        FUN_00d50b20();
      }
      if (this_ptr != 0) {
        FUN_00d50b20();
      }
      *(void*)(this_ptr + 0x2f) = 0;
    }
  }
  local_88 = *arg1;
  local_80 = '\0';
  FUN_00d530a0();
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  return;
}

