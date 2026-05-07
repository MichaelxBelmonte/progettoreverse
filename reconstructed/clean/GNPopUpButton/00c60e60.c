// Function: FUN_00c60e60
// Address: 00c60e60
// Size: 1043 bytes
// Class: GNPopUpButton

uint64_t FUN_00c60e60(uint64_t param_1,int param_2)

{
  int64_t lVar1;
  int iVar2;
  int64_t *this_ptr;
  int64_t local_88;
  char local_80;
  int64_t local_58;
  char local_50;
  int64_t *local_40;
  char local_38;
  
  if (param_2 != 0) {
    FUN_01f4e930();
    if ((local_38 == '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b00();
    }
    (**(code **)(*local_40 + 0x388))();
    FUN_00c5d9b0();
    if (local_50 == '\0') {
      if (local_58 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_50 = '\0';
    }
    FUN_001220c0();
    if ((local_38 == '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b00();
    }
    if (local_58 != 0) {
      FUN_00d50b20();
    }
    FUN_00c5dc60();
    if (local_50 == '\0') {
      if (local_58 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_50 = '\0';
    }
    FUN_00d21140();
    if (local_58 != 0) {
      FUN_00d50b20();
    }
    (**(code **)(*local_40 + 0x368))();
    iVar2 = FUN_01f4eb70();
    if (iVar2 == 0) {
      (**(code **)(*local_40 + 0x380))();
      if (local_58 != 0) {
        FUN_00d50b00();
      }
      (**(code **)(*this_ptr + 0x608))();
      if (local_58 == 0) {
        (**(code **)(*this_ptr + 0x5d0))();
        FUN_00c5e840();
      }
      else {
        (**(code **)(*this_ptr + 0x5d0))();
        (**(code **)(*this_ptr + 0x608))();
        if (local_50 == '\0') {
          if (local_58 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_50 = '\0';
        }
        FUN_00c5e440();
        if (local_58 != 0) {
          FUN_00d50b20();
        }
        if ((local_50 != '\0') && (local_58 != 0)) {
          FUN_00d50b20();
        }
      }
      FUN_01d243a0();
      FUN_00d403d0();
      lVar1 = g_027719f0;
      if (g_027719f0 != 0) {
        FUN_00d50b00();
      }
      FUN_00d50b00();
      local_88 = 0;
      local_80 = '\0';
      FUN_00d40470(&local_88,&stack0xffffffffffffff88,1,3);
      if ((local_80 != '\0') && (local_88 != 0)) {
        FUN_00d50b20();
      }
      if (this_ptr != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      if (local_58 != 0) {
        FUN_00d50b20();
      }
    }
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  return 1;
}

