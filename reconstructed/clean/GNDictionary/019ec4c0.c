// Function: FUN_019ec4c0
// Address: 019ec4c0
// Size: 507 bytes
// Class: GNDictionary

uint64_t FUN_019ec4c0(uint64_t param_1,char param_2)

{
  int64_t lVar1;
  uint32_t uVar2;
  uint uVar3;
  uint64_t uVar4;
  int64_t *this_ptr;
  int64_t local_90;
  char local_88;
  int64_t local_40;
  char local_38;
  
  lVar1 = g_027e14b0;
  if (((char)this_ptr[0x88] == '\0') && ((int64_t *)this_ptr[0x87] != (int64_t *)0x0)) {
    *(void*)(this_ptr + 0x88) = 1;
    uVar3 = (**(code **)(*(int64_t *)this_ptr[0x87] + 0x3b8))(param_1,param_2);
    uVar4 = (uint64_t)uVar3;
    *(void*)(this_ptr + 0x88) = 0;
  }
  else {
    if (g_027e14b0 != 0) {
      FUN_00d50b00();
    }
    FUN_01cae990();
    uVar2 = FUN_00d90870();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if ((char)uVar2 == '\0') {
      uVar3 = FUN_01e47f50(param_1,param_2);
      uVar4 = (uint64_t)uVar3;
    }
    else {
      uVar4 = CONCAT71((uint7)(uint3)((uint)uVar2 >> 8),1);
      if (param_2 != '\0') {
        FUN_01cae990();
        uVar2 = FUN_00d8c7a0();
        FUN_00d8f140(param_1,uVar2);
        if (local_38 == '\0') {
          if (local_40 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        (**(code **)(&UNK_00001610 + *this_ptr))();
        uVar4 = CONCAT71((int7)((uint64_t)local_40 >> 8),1);
        if (local_40 != 0) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if ((local_88 != '\0') && (local_90 != 0)) {
          FUN_00d50b20();
        }
      }
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  return uVar4 & 0xffffffff;
}

