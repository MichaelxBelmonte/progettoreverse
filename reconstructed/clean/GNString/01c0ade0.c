// Function: FUN_01c0ade0
// Address: 01c0ade0
// Size: 758 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_01c0ade0(uint64_t param_1)

{
  int64_t lVar1;
  int64_t *plVar2;
  char cVar3;
  int64_t *arg1;
  int64_t *this_ptr;
  uint8_t local_b8 [8];
  uint8_t local_b0;
  int64_t local_a8;
  char local_a0;
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
  int64_t *local_48;
  int64_t *local_40;
  char local_38;
  
  FUN_00d3ecc0();
  plVar2 = local_40;
  local_a8 = g_027e8d58;
  if (g_027e8d58 != 0) {
    FUN_00d50b00();
  }
  local_a0 = '\x01';
  cVar3 = (**(code **)(*plVar2 + 0x50))();
  if ((local_a0 != '\0') && (local_a8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar3 != '\0') {
    FUN_00d3ed20();
    if (local_38 == '\0') {
      if (local_40 == (int64_t *)0x0) goto LAB_01c0af2d;
      FUN_00d50b00();
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else if (local_40 == (int64_t *)0x0) goto LAB_01c0af2d;
    lVar1 = g_027e8d60;
    if (g_027e8d60 != 0) {
      FUN_00d50b00();
    }
    local_98 = lVar1;
    local_90 = '\x01';
    FUN_000175c0(param_1,&local_98);
    plVar2 = local_40;
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
    lVar1 = g_027e8d68;
    if (plVar2 == this_ptr) {
      if (g_027e8d68 != 0) {
        FUN_00d50b00();
      }
      local_88 = lVar1;
      local_80 = '\x01';
      FUN_000175c0(param_1,&local_88);
      local_48 = local_40;
      local_78 = g_027756b0;
      if (local_38 == '\0') {
        if (local_40 != (int64_t *)0x0) {
          FUN_00d50b00();
          local_78 = g_027756b0;
        }
      }
      else {
        local_38 = '\0';
      }
      g_027756b0 = local_78;
      if (local_78 != 0) {
        FUN_00d50b00();
      }
      local_70 = '\x01';
      FUN_000175c0(param_1,&local_78);
      plVar2 = local_48;
      lVar1 = local_58;
      if (local_50 == '\0') {
        if (local_58 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_50 = '\0';
      }
      local_b0 = 1;
      FUN_01c0b2e0(param_1,local_b8);
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if ((local_70 != '\0') && (local_78 != 0)) {
        FUN_00d50b20();
      }
      if (plVar2 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_80 != '\0') && (local_88 != 0)) {
        FUN_00d50b20();
      }
    }
    FUN_00d50b20();
  }
LAB_01c0af2d:
  local_68 = *arg1;
  local_60 = '\0';
  FUN_00d530a0();
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  return;
}

