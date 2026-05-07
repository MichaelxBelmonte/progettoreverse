// Function: FUN_01251710
// Address: 01251710
// Size: 558 bytes
// Class: GNNull
// String references:
//   "%@"
//   "sequence: "
//   "(GNNull)"
//   " (%Q) "
//   "const sequence: %@"

void* FUN_01251710(void)

{
  int64_t lVar1;
  int64_t lVar2;
  uint64_t uVar3;
  void*puVar4;
  int64_t arg1;
  void*this_ptr;
  int64_t lVar5;
  void*local_50;
  uint32_t local_48;
  uint32_t uStack_44;
  uint32_t local_40;
  uint32_t uStack_3c;
  char local_38;
  
  puVar4 = g_027be958;
  if (*(int *)(*(int64_t *)(arg1 + 0x48) + 0x18) + 7U < 0xf) {
    lVar1 = **(int64_t **)(*(int64_t *)(arg1 + 0x50) + 0x10);
    if (lVar1 != 0) {
      FUN_00d50b00();
      FUN_00d8cb40();
      if (lVar1 == 0) {
        return this_ptr;
      }
      FUN_00d50b20();
      return this_ptr;
    }
    *(void*)(this_ptr + 1) = 0;
    if (puVar4 != (void*)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    puVar4 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar4 = &g_025795a8;
    (*g_025795c0)();
    FUN_00d94d80();
    lVar1 = *(int64_t *)(arg1 + 0x50);
    if (lVar1 != 0) {
      if (0 < *(int *)(lVar1 + 0xc)) {
        lVar5 = 0;
        do {
          lVar2 = *(int64_t *)(*(int64_t *)(lVar1 + 0x10) + lVar5 * 8);
          if (lVar2 == 0) {
            FUN_00d8db40();
          }
          else {
            local_48 = 1;
            local_50 = &g_024c5048;
            local_38 = 0;
            FUN_00d50b00();
            local_40 = (uint32_t)lVar2;
            uStack_3c = (uint32_t)((uint64_t)lVar2 >> 0x20);
            local_38 = '\x01';
            FUN_00d94d80();
            local_50 = &g_024c5048;
            if ((local_38 != '\0') && (CONCAT44(uStack_3c,local_40) != 0)) {
              FUN_00d50b20();
            }
          }
          if ((int)lVar5 != *(int *)(lVar1 + 0xc) + -1) {
            local_48 = 1;
            local_50 = (void*)&g_025d0e78;
            uVar3 = *(void*)
                     (*(int64_t *)(*(int64_t *)(arg1 + 0x48) + 0x10) + lVar5 * 8);
            uStack_44 = (uint32_t)uVar3;
            local_40 = (uint32_t)((uint64_t)uVar3 >> 0x20);
            FUN_00d94d80(&g_025d0e78,&local_50);
          }
          lVar5 = lVar5 + 1;
        } while ((int)lVar5 < *(int *)(lVar1 + 0xc));
      }
      FUN_00083b20();
    }
  }
  *this_ptr = puVar4;
  *(void*)(this_ptr + 1) = 1;
  return this_ptr;
}

