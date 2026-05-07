// Function: FUN_00c885b0
// Address: 00c885b0
// Size: 836 bytes
// Class: Unknown
// String references:
//   "%@: %@"

void* FUN_00c885b0(void)

{
  uint64_t uVar1;
  void*puVar2;
  void*puVar3;
  void*puVar4;
  int64_t lVar5;
  uint uVar6;
  void*this_ptr;
  uint64_t local_e0;
  int64_t local_d0;
  char local_c8;
  void*local_b8;
  char local_b0;
  int64_t local_a8;
  char local_a0;
  int64_t local_98;
  char local_90;
  int local_70;
  int64_t local_48;
  char local_40;
  
  puVar2 = local_b8;
  puVar4 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar4 = &g_02572358;
  (*g_02572370)();
  FUN_00c84810();
  if (local_b0 == '\0') {
    if (local_b8 == (void*)0x0) goto LAB_00c88908;
    FUN_00d50b00();
  }
  else if (local_b8 == (void*)0x0) goto LAB_00c88908;
  if (0 < *(int *)((int64_t)local_b8 + 0xc)) {
    uVar6 = 0;
    do {
      puVar3 = local_b8;
      (**(code **)(**(int64_t **)(puVar2[2] + (uint64_t)uVar6 * 8) + 0x378))();
      if (local_b0 == '\0') {
        if (local_b8 != (void*)0x0) {
          FUN_00d50b00();
          goto LAB_00c8872a;
        }
      }
      else if (local_b8 != (void*)0x0) {
LAB_00c8872a:
        local_70 = -1;
        while( true ) {
          lVar5 = (int64_t)local_70;
          local_70 = local_70 + 1;
          if (*(int *)((int64_t)puVar3 + 0xc) <= local_70) break;
          uVar1 = *(void*)(puVar3[2] + 8 + lVar5 * 8);
          FUN_00d74120();
          local_e0 = uVar1;
          FUN_00083ea0(2,&local_e0);
          FUN_00d8cb40();
          if (local_40 == '\0') {
            if (local_48 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_40 = '\0';
          }
          FUN_00d21140();
          if (local_48 != 0) {
            FUN_00d50b20();
          }
          if ((local_40 != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
          if ((local_90 != '\0') && (local_98 != 0)) {
            FUN_00d50b20();
          }
          local_b8 = &g_024c5048;
          if ((local_a0 != '\0') && (local_a8 != 0)) {
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
  FUN_00d74c70();
  FUN_00d50b20();
LAB_00c88908:
  *this_ptr = puVar4;
  *(void*)(this_ptr + 1) = 1;
  return this_ptr;
}

