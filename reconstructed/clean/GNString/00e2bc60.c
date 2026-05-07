// Function: FUN_00e2bc60
// Address: 00e2bc60
// Size: 877 bytes
// Class: GNString
// String references:
//   "%@::%@"
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void* FUN_00e2bc60(void)

{
  uint64_t uVar1;
  void*puVar2;
  void*puVar3;
  void*puVar4;
  int64_t lVar5;
  uint uVar6;
  int64_t *arg1;
  void*this_ptr;
  uint64_t local_e0;
  int64_t local_d0;
  char local_c8;
  int local_a0;
  int64_t local_78;
  char local_70;
  void*local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  char local_40;
  
  puVar2 = local_68;
  puVar4 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar4 = &g_02572358;
  (*g_02572370)();
  (**(code **)(*arg1 + 0x388))();
  if (local_60 == '\0') {
    if (local_68 == (void*)0x0) goto LAB_00e2bfd6;
    FUN_00d50b00();
  }
  else if (local_68 == (void*)0x0) goto LAB_00e2bfd6;
  if (0 < *(int *)((int64_t)local_68 + 0xc)) {
    uVar6 = 0;
    do {
      puVar3 = local_68;
      (**(code **)(**(int64_t **)(puVar2[2] + (uint64_t)uVar6 * 8) + 0x368))();
      if (local_60 == '\0') {
        if (local_68 != (void*)0x0) {
          FUN_00d50b00();
          goto LAB_00e2bde4;
        }
      }
      else if (local_68 != (void*)0x0) {
LAB_00e2bde4:
        local_a0 = -1;
        while( true ) {
          lVar5 = (int64_t)local_a0;
          local_a0 = local_a0 + 1;
          if (*(int *)((int64_t)puVar3 + 0xc) <= local_a0) break;
          uVar1 = *(void*)(puVar3[2] + 8 + lVar5 * 8);
          FUN_00c7e7b0();
          local_e0 = uVar1;
          FUN_00083ea0(2,&local_e0);
          FUN_00d8cb40();
          if (local_70 == '\0') {
            if (local_78 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_70 = '\0';
          }
          FUN_00d21140();
          if (local_78 != 0) {
            FUN_00d50b20();
          }
          if ((local_70 != '\0') && (local_78 != 0)) {
            FUN_00d50b20();
          }
          if ((local_40 != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
          local_68 = &g_024c5048;
          if ((local_50 != '\0') && (local_58 != 0)) {
            FUN_00d50b20();
          }
          if ((local_c8 != '\0') && (local_d0 != 0)) {
            FUN_00d50b20();
          }
        }
        FUN_00018280();
        FUN_00d50b20();
      }
      uVar6 = uVar6 + 1;
    } while ((int)uVar6 < *(int *)((int64_t)puVar2 + 0xc));
  }
  FUN_00e2c740();
  FUN_00d50b20();
LAB_00e2bfd6:
  *this_ptr = puVar4;
  *(void*)(this_ptr + 1) = 1;
  return this_ptr;
}

