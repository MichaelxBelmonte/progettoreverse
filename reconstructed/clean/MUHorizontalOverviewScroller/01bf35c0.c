// Function: FUN_01bf35c0
// Address: 01bf35c0
// Size: 527 bytes
// Class: MUHorizontalOverviewScroller

uint32_t FUN_01bf35c0(void)

{
  int64_t lVar1;
  char cVar2;
  char cVar3;
  uint32_t uVar4;
  char *pcVar5;
  int64_t *arg1;
  int64_t *local_a8;
  char local_a0 [8];
  int64_t local_98;
  char local_90;
  int64_t local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  int64_t local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  char local_40;
  char local_38 [8];
  
  FUN_01cae990();
  pcVar5 = local_38;
  if (local_a0[0] != '\0') {
    pcVar5 = local_a0;
  }
  local_38[0] = local_a0[0];
  *pcVar5 = '\0';
  if ((local_a0[0] != '\0') && (local_a8 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  lVar1 = g_027f2a20;
  if (g_027f2a20 != 0) {
    FUN_00d50b00();
  }
  local_98 = lVar1;
  local_90 = '\x01';
  cVar2 = (**(code **)(*local_a8 + 0x50))();
  lVar1 = g_027e7ca0;
  cVar3 = '\x01';
  if (cVar2 == '\0') {
    if (g_027e7ca0 != 0) {
      FUN_00d50b00();
    }
    local_88 = lVar1;
    local_80 = '\x01';
    cVar2 = (**(code **)(*local_a8 + 0x50))();
    lVar1 = g_026de8c8;
    cVar3 = '\x01';
    if (cVar2 == '\0') {
      if (g_026de8c8 != 0) {
        FUN_00d50b00();
      }
      local_78 = lVar1;
      local_70 = '\x01';
      cVar2 = (**(code **)(*local_a8 + 0x50))();
      lVar1 = g_02725a10;
      cVar3 = '\x01';
      if (cVar2 == '\0') {
        if (g_02725a10 != 0) {
          FUN_00d50b00();
        }
        local_68 = lVar1;
        local_60 = '\x01';
        cVar3 = (**(code **)(*local_a8 + 0x50))();
        if ((local_60 != '\0') && (local_68 != 0)) {
          FUN_00d50b20();
        }
      }
      if ((local_70 != '\0') && (local_78 != 0)) {
        FUN_00d50b20();
      }
    }
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
  }
  if ((local_90 != '\0') && (local_98 != 0)) {
    FUN_00d50b20();
  }
  if (cVar3 == '\0') {
    local_48 = *arg1;
    local_40 = '\0';
    uVar4 = FUN_01df5490();
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_58 = *arg1;
    local_50 = '\0';
    uVar4 = FUN_01d827c0();
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
  }
  if (local_38[0] != '\0') {
    FUN_00d50b20();
  }
  return uVar4;
}

