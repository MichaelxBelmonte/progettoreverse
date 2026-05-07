// Function: FUN_0009acf0
// Address: 0009acf0
// Size: 525 bytes
// Class: Unknown

void FUN_0009acf0(void)

{
  void*puVar1;
  void*puVar2;
  int64_t lVar3;
  int64_t arg1;
  int64_t *this_ptr;
  uint32_t uVar4;
  uint32_t extraout_XMM0_Da;
  int64_t local_70;
  char local_68;
  int64_t local_40;
  char local_38;
  
  lVar3 = *(int64_t *)(arg1 + 0x80);
  if (lVar3 == 0) {
    puVar2 = (void*)FUN_00e8fc40();
    FUN_0006daf0();
    *(void*)((int64_t)puVar2 + 0x13b) = 0;
    *(void*)(puVar2 + 0x27) = 0;
    puVar2[0x28] = 0;
    puVar2[0x29] = 0;
    puVar2[0x2a] = 0;
    puVar2[0x2b] = 0;
    puVar2[0x2c] = 0;
    puVar2[0x2d] = 0;
    puVar2[0x2e] = 0;
    puVar2[0x2f] = 0;
    puVar2[0x30] = 0;
    *puVar2 = &g_024e46f0;
    puVar2[2] = &g_024e50e0;
    puVar2[0x31] = 0;
    puVar2[0x32] = 0;
    puVar2[0x33] = 0;
    (*g_024e4708)();
    puVar1 = *(void**)(arg1 + 0x80);
    if (puVar1 == puVar2) {
      FUN_00d50b20();
    }
    else {
      *(void**)(arg1 + 0x80) = puVar2;
      if (puVar1 != (void*)0x0) {
        FUN_00d50b20();
      }
    }
    FUN_00d50b00();
    uVar4 = FUN_00338d50();
    if (arg1 != 0) {
      uVar4 = FUN_00d50b20();
    }
    local_38 = 0;
    lVar3 = *(int64_t *)(arg1 + 0xb8);
    if (lVar3 != 0) {
      uVar4 = FUN_00d50b00();
    }
    local_38 = '\x01';
    local_40 = lVar3;
    FUN_0009b000(uVar4,&local_40);
    if (local_68 == '\0') {
      if (local_70 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_68 = '\0';
    }
    uVar4 = FUN_00d45870();
    FUN_00336030(extraout_XMM0_Da,uVar4);
    if (local_70 != 0) {
      FUN_00d50b20();
    }
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    lVar3 = *(int64_t *)(arg1 + 0x80);
  }
  *(void*)(this_ptr + 1) = 0;
  if (lVar3 != 0) {
    FUN_00d50b00();
  }
  *this_ptr = lVar3;
  *(void*)(this_ptr + 1) = 1;
  return;
}

