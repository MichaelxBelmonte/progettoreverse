// Function: FUN_00cb2d80
// Address: 00cb2d80
// Size: 803 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_00cb2d80(void)

{
  int64_t lVar1;
  int64_t lVar2;
  void*puVar3;
  int64_t this_ptr;
  int64_t lVar4;
  int64_t local_b8;
  int64_t local_b0;
  char local_a8;
  int64_t local_a0;
  char local_98;
  int64_t local_90;
  char local_88;
  void*local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t local_40;
  char local_38;
  
  *(void*)(this_ptr + 0x100) = 1;
  if (((*(int64_t *)(this_ptr + 0x90) != 0) && (*(char *)(this_ptr + 0xe0) != '\0')) &&
     (*(int *)(this_ptr + 0xd0) == 0)) {
    lVar1 = *(int64_t *)(this_ptr + 0x88);
    if (lVar1 == 0) {
      *(void*)(this_ptr + 0x100) = 0;
      return;
    }
    if (*(int *)(lVar1 + 0x18) < 0) {
      lVar2 = *(int64_t *)(lVar1 + 0x10);
      FUN_00d50b00();
      if (*(int64_t *)(*(int64_t *)(lVar1 + 0x10) + 0x10) == 0) {
        *(void*)(lVar1 + 0x18) = 0;
      }
      else {
        FUN_00c8d630();
        *(void*)(lVar1 + 0x18) = 0;
      }
      FUN_00cad910();
      puVar3 = local_80;
      lVar4 = *(int64_t *)(lVar1 + 0x10);
      if ((void*)lVar4 == local_80) {
        if ((local_78 != '\0') && (lVar4 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        if ((local_78 == '\0') && (local_80 != (void*)0x0)) {
          FUN_00d50b00();
          lVar4 = *(int64_t *)(lVar1 + 0x10);
        }
        *(void**)(lVar1 + 0x10) = puVar3;
        if (lVar4 != 0) {
          FUN_00d50b20();
        }
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      FUN_00cb2bc0();
    }
    else {
      FUN_00cb32e0();
    }
  }
  FUN_00cb1e70();
  puVar3 = local_80;
  if ((((local_78 == '\0') && (local_80 != (void*)0x0)) && (FUN_00d50b00(), local_78 != '\0')
      ) && (local_80 != (void*)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d7a2d0();
  FUN_00d403d0();
  local_a0 = g_027ebc50;
  if (g_027ebc50 != 0) {
    FUN_00d50b00();
  }
  local_98 = '\x01';
  FUN_00d50b00();
  lVar1 = g_027edfd0;
  if (g_027edfd0 != 0) {
    FUN_00d50b00();
  }
  local_b8 = lVar1;
  FUN_00083ea0(2,&local_b8);
  FUN_000b4da0();
  local_40 = local_90;
  local_38 = 0;
  if (local_88 == '\0') {
    if (local_90 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_88 = '\0';
  }
  local_38 = '\x01';
  FUN_00d40470(&local_40,&stack0xffffffffffffffb0,3,3);
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  local_80 = (void*)&g_0253d630;
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  local_80 = &g_024c5048;
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if (this_ptr != 0) {
    FUN_00d50b20();
  }
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_a8 != '\0') && (local_b0 != 0)) {
    FUN_00d50b20();
  }
  *(void*)(this_ptr + 0x100) = 0;
  if (puVar3 != (void*)0x0) {
    FUN_00d50b20();
  }
  return;
}

