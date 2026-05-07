// Function: FUN_01df7e80
// Address: 01df7e80
// Size: 769 bytes
// Class: GNColor

void FUN_01df7e80(int64_t *param_1)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t *this_ptr;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  lVar1 = g_027edfd0;
  if (g_027edfd0 != 0) {
    FUN_00d50b00();
  }
  FUN_01ccaae0();
  lVar2 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = g_027edfd0;
  if (*param_1 == 0) {
    if (lVar2 == 0) {
      *(void*)(this_ptr + 1) = 0;
      *this_ptr = 0;
      return;
    }
    FUN_01d25cb0();
  }
  else {
    if (g_027edfd0 != 0) {
      FUN_00d50b00();
    }
    FUN_01ccab60();
    lVar3 = local_40;
    if (local_38 == '\0') {
      if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38 = '\0';
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if (lVar3 == 0) {
      *(void*)(this_ptr + 1) = 0;
      *this_ptr = 0;
      if (lVar2 == 0) {
        return;
      }
    }
    else {
      if (lVar2 == 0) {
        local_50 = lVar3;
        local_48 = '\0';
        (**(code **)(*(int64_t *)*param_1 + 0x88))();
        lVar1 = local_40;
        *(void*)(this_ptr + 1) = 0;
        if (local_38 == '\0') {
          if (local_40 == 0) {
            *this_ptr = 0;
            *(void*)(this_ptr + 1) = 1;
          }
          else {
            FUN_00d50b00();
            *this_ptr = lVar1;
            *(void*)(this_ptr + 1) = 1;
            if ((local_38 != '\0') && (local_40 != 0)) {
              FUN_00d50b20();
            }
          }
        }
        else {
          *this_ptr = local_40;
          *(void*)(this_ptr + 1) = 1;
          local_38 = '\0';
        }
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
        FUN_00d50b20();
        return;
      }
      local_70 = *param_1;
      local_68 = '\0';
      local_60 = lVar3;
      local_58 = '\0';
      FUN_01d26fb0(&local_60,&local_70);
      lVar1 = local_40;
      *(void*)(this_ptr + 1) = 0;
      if (local_38 == '\0') {
        if (local_40 == 0) {
          *this_ptr = 0;
          *(void*)(this_ptr + 1) = 1;
        }
        else {
          FUN_00d50b00();
          *this_ptr = lVar1;
          *(void*)(this_ptr + 1) = 1;
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
        }
      }
      else {
        *this_ptr = local_40;
        *(void*)(this_ptr + 1) = 1;
        local_38 = '\0';
      }
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
  }
  FUN_00d50b20();
  return;
}

