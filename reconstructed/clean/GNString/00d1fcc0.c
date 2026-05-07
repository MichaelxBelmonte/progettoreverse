// Function: FUN_00d1fcc0
// Address: 00d1fcc0
// Size: 1118 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void* FUN_00d1fcc0(void)

{
  int64_t lVar1;
  void*puVar2;
  void*this_ptr;
  int64_t lVar3;
  int64_t local_50;
  char local_48;
  int64_t *local_40;
  char local_38;
  
  lVar3 = g_027756f0;
  if (g_027756f0 != 0) {
    FUN_00d50b00();
  }
  FUN_000175c0();
  if (local_38 == '\0') {
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  if (local_40 == (int64_t *)0x0) {
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
  }
  else {
    FUN_00c82360();
    if (local_38 == '\0') {
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    if (local_40 == (int64_t *)0x0) {
      *(void*)(this_ptr + 1) = 0;
      *this_ptr = 0;
    }
    else {
      FUN_00c811e0();
      if ((local_38 == '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b00();
      }
      (**(code **)(*local_40 + 0x20))();
      puVar2 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar2 = &g_02572358;
      (*g_02572370)();
      FUN_00c81830();
      if (local_48 == '\0') {
        if (local_50 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_48 = '\0';
      }
      FUN_00d243f0();
      if (local_50 != 0) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      if (0 < *(int *)((int64_t)puVar2 + 0xc)) {
        lVar3 = 0;
        do {
          lVar1 = *(int64_t *)(puVar2[2] + lVar3 * 8);
          if (lVar1 != 0) {
            FUN_00d50b00();
          }
          FUN_00d74120();
          if (local_48 == '\0') {
            if (local_50 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_48 = '\0';
          }
          FUN_000175c0();
          if (local_50 != 0) {
            FUN_00d50b00();
            FUN_00d50b20();
          }
          if ((local_48 != '\0') && (local_50 != 0)) {
            FUN_00d50b20();
          }
          if (local_50 != 0) {
            FUN_00d74120();
            if (local_50 != 0) {
              FUN_00d50b00();
            }
            (**(code **)(*local_40 + 0x80))();
            if (local_50 != 0) {
              FUN_00d50b20();
            }
            FUN_00d50b20();
          }
          if (lVar1 != 0) {
            FUN_00d50b20();
          }
          lVar3 = lVar3 + 1;
        } while (lVar3 < *(int *)((int64_t)puVar2 + 0xc));
      }
      *this_ptr = local_40;
      *(void*)(this_ptr + 1) = 1;
      FUN_00d50b20();
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  return this_ptr;
}

