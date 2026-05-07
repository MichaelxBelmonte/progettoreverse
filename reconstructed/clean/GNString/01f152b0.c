// Function: FUN_01f152b0
// Address: 01f152b0
// Size: 541 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void* FUN_01f152b0(int64_t *param_1)

{
  int64_t lVar1;
  void*puVar2;
  void*this_ptr;
  int64_t lVar3;
  int64_t local_a0;
  char local_98;
  int64_t local_78;
  char local_70;
  int64_t local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  char local_40;
  void*local_38;
  
  local_78 = *param_1;
  local_70 = '\0';
  FUN_01ca7bd0(param_1,&local_78);
  if ((local_98 == '\0') && (local_a0 != 0)) {
    FUN_00d50b00();
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  if (local_a0 == 0) {
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
  }
  else {
    puVar2 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar2 = &g_02572358;
    (*g_02572370)();
    local_38 = puVar2;
    if (0 < *(int *)(local_a0 + 0xc)) {
      lVar3 = 0;
      do {
        local_68 = *(int64_t *)(*(int64_t *)(local_a0 + 0x10) + lVar3 * 8);
        local_60 = '\0';
        FUN_00d93320();
        lVar1 = local_48;
        if (local_40 == '\0') {
          if (((local_48 != 0) && (FUN_00d50b00(), local_40 != '\0')) && (local_48 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_40 = '\0';
        }
        if ((local_60 != '\0') && (local_68 != 0)) {
          FUN_00d50b20();
        }
        if (lVar1 != 0) {
          local_58 = lVar1;
          local_50 = '\0';
          FUN_00d21140();
          if ((local_50 != '\0') && (local_58 != 0)) {
            FUN_00d50b20();
          }
          FUN_00d50b20();
        }
        lVar3 = lVar3 + 1;
      } while ((int)lVar3 < *(int *)(local_a0 + 0xc));
    }
    FUN_01f14d50();
    *this_ptr = local_38;
    *(void*)(this_ptr + 1) = 1;
    FUN_00d50b20();
  }
  return this_ptr;
}

