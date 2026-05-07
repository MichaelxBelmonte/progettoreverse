// Function: FUN_01e4d060
// Address: 01e4d060
// Size: 530 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_01e4d060(void)

{
  uint uVar1;
  int iVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t *arg1;
  int64_t this_ptr;
  int64_t local_a0;
  char local_98;
  int64_t local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  int64_t *local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  if ((*(int64_t *)(this_ptr + 0x50) != 0) && (iVar2 = FUN_00d8c7a0(), iVar2 != 0)) {
    FUN_00d4efa0();
    FUN_00c82bb0();
    local_40 = local_70;
    local_38 = 0;
    if (local_68 == '\0') {
      if (local_70 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_68 = '\0';
    }
    local_38 = '\x01';
    FUN_00e3f850();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    if ((local_98 != '\0') && (local_a0 != 0)) {
      FUN_00d50b20();
    }
    local_58 = 0;
    (**(code **)(*(int64_t *)(this_ptr + 0x10) + 0x10))();
    FUN_00d50b00();
    local_90 = g_027f0e20;
    local_58 = '\x01';
    local_60 = (int64_t *)(this_ptr + 0x10);
    if (g_027f0e20 != 0) {
      FUN_00d50b00();
    }
    local_88 = '\x01';
    local_48 = 0;
    lVar3 = *(int64_t *)(this_ptr + 0x50);
    if (lVar3 != 0) {
      FUN_00d50b00();
    }
    local_48 = '\x01';
    local_50 = lVar3;
    FUN_00e3fb50(&local_50,&local_90);
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
      (**(code **)(*local_60 + 0x10))();
      FUN_00d50b20();
    }
    FUN_00e3faa0();
  }
  lVar3 = *(int64_t *)(this_ptr + 0x38);
  uVar1 = *(uint *)(lVar3 + 0xc);
  if (0 < (int)uVar1) {
    lVar4 = 0;
    while( true ) {
      local_80 = *arg1;
      local_78 = '\0';
      (**(code **)(**(int64_t **)(*(int64_t *)(lVar3 + 0x10) + lVar4 * 8) + 0x800))();
      if ((local_78 != '\0') && (local_80 != 0)) {
        FUN_00d50b20();
      }
      if ((uint64_t)uVar1 - 1 == lVar4) break;
      lVar3 = *(int64_t *)(this_ptr + 0x38);
      lVar4 = lVar4 + 1;
    }
  }
  return;
}

