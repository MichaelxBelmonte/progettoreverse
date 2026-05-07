// Function: FUN_00dbb5a0
// Address: 00dbb5a0
// Size: 607 bytes
// Class: GNURL

uint FUN_00dbb5a0(uint64_t param_1)

{
  int64_t *plVar1;
  char cVar2;
  uint uVar3;
  int64_t local_98;
  char local_90;
  int64_t local_88;
  char local_80;
  int64_t *local_78;
  char local_70;
  int64_t local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  char local_40;
  int64_t *local_38;
  char local_30;
  
  FUN_00dba5e0();
  local_88 = g_02763508;
  if (g_02763508 != 0) {
    FUN_00d50b00();
  }
  local_80 = '\x01';
  FUN_01de4130(param_1,&local_88);
  plVar1 = local_38;
  if (local_30 == '\0') {
    if (local_38 != (int64_t *)0x0) {
      FUN_00d50b00();
      if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    local_30 = '\0';
  }
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  if ((local_90 != '\0') && (local_98 != 0)) {
    FUN_00d50b20();
  }
  if (plVar1 != (int64_t *)0x0) {
    local_78 = plVar1;
    local_70 = '\0';
    uVar3 = FUN_00c716c0();
    if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
    if (uVar3 < 0x10000) goto LAB_00dbb7bd;
  }
  FUN_00dba530();
  plVar1 = local_38;
  local_68 = g_027837f0;
  if (g_027837f0 != 0) {
    FUN_00d50b00();
  }
  local_60 = '\x01';
  cVar2 = (**(code **)(*plVar1 + 0x50))();
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  uVar3 = 0x1bb;
  if (cVar2 == '\0') {
    FUN_00dba530();
    plVar1 = local_38;
    local_58 = g_027837d8;
    if (g_027837d8 != 0) {
      FUN_00d50b00();
    }
    local_50 = '\x01';
    cVar2 = (**(code **)(*plVar1 + 0x50))();
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    uVar3 = 0x50;
    if (cVar2 == '\0') {
      FUN_00dba530();
      plVar1 = local_38;
      local_48 = g_027837f8;
      if (g_027837f8 != 0) {
        FUN_00d50b00();
      }
      local_40 = '\x01';
      cVar2 = (**(code **)(*plVar1 + 0x50))();
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      uVar3 = 0x15;
      if (cVar2 == '\0') {
        uVar3 = 0;
      }
    }
  }
LAB_00dbb7bd:
  return uVar3 & 0xffff;
}

