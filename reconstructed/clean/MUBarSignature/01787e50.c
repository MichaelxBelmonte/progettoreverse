// Function: FUN_01787e50
// Address: 01787e50
// Size: 1370 bytes
// Class: MUBarSignature
// String references:
//   " %@"
//   "\t"
//   "\n"
//   "%@ (%Q-%Q)"
//   "%f %I %I %I"
//   " *"

void FUN_01787e50(void*param_1,int64_t param_2)

{
  int64_t lVar1;
  void*puVar2;
  char cVar3;
  void*puVar4;
  int64_t lVar5;
  int iVar6;
  int iVar7;
  int64_t arg1;
  void*this_ptr;
  uint32_t uVar8;
  uint64_t local_b8;
  uint8_t local_b0;
  void*local_a8;
  void*local_a0;
  uint32_t local_98;
  int64_t local_90;
  char local_88;
  int64_t local_80;
  int local_74;
  void*local_70;
  char local_68;
  int local_48;
  
  local_a8 = param_1;
  local_80 = param_2;
  puVar4 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar4 = &g_025795a8;
  (*g_025795c0)();
  lVar1 = *(int64_t *)(arg1 + 0x20);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  FUN_00d94d80(*(void*)(arg1 + 0xc),&stack0xffffffffffffffa0);
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if ((int)local_80 < 5) {
    iVar6 = 1;
    if (1 < 5 - (int)local_80) {
      iVar6 = 5 - (int)local_80;
    }
    do {
      FUN_00d8db40();
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  FUN_00d94d80();
  FUN_00d50b00();
  cVar3 = FUN_00d23d70();
  uVar8 = FUN_00d50b20();
  if (cVar3 != '\0') {
    FUN_01787bb0();
    uVar8 = FUN_00d94d80();
  }
  lVar1 = *(int64_t *)(arg1 + 0x30);
  if (lVar1 != 0) {
    local_48 = -1;
    while( true ) {
      lVar5 = (int64_t)local_48;
      local_48 = local_48 + 1;
      if (*(int *)(lVar1 + 0xc) <= local_48) break;
      lVar5 = *(int64_t *)(*(int64_t *)(*(int64_t *)(lVar1 + 0x10) + 8 + lVar5 * 8) + 0x20);
      local_98 = 1;
      local_a0 = &g_024c5048;
      local_88 = 0;
      if (lVar5 != 0) {
        uVar8 = FUN_00d50b00();
      }
      local_88 = '\x01';
      local_90 = lVar5;
      uVar8 = FUN_00d94d80(uVar8,&local_a0);
      local_a0 = &g_024c5048;
      if ((local_88 != '\0') && (local_90 != 0)) {
        uVar8 = FUN_00d50b20();
      }
    }
    FUN_01798230();
  }
  lVar1 = *(int64_t *)(arg1 + 0x28);
  if (lVar1 != 0) {
    local_74 = (int)local_80 + 1;
    if ((int)local_80 < 0) {
      local_80 = lVar1;
      if (0 < *(int *)(lVar1 + 0xc)) {
        iVar6 = 0;
        do {
          FUN_00d8db40();
          local_b8 = *local_a8;
          local_b0 = 0;
          FUN_01787e50(&local_b8,local_74);
          puVar2 = local_a0;
          local_68 = 0;
          if (((char)local_98 == '\0') && (local_a0 != (void*)0x0)) {
            FUN_00d50b00();
          }
          local_70 = puVar2;
          local_68 = '\x01';
          FUN_00d8dbf0();
          lVar1 = local_80;
          if ((local_68 != '\0') && (local_70 != (void*)0x0)) {
            FUN_00d50b20();
          }
          iVar6 = iVar6 + 1;
        } while (iVar6 < *(int *)(lVar1 + 0xc));
      }
    }
    else {
      local_80 = lVar1;
      if (0 < *(int *)(lVar1 + 0xc)) {
        iVar6 = 0;
        do {
          FUN_00d8db40();
          iVar7 = local_74;
          do {
            FUN_00d8db40();
            iVar7 = iVar7 + -1;
          } while (iVar7 != 0);
          local_b8 = *local_a8;
          local_b0 = 0;
          FUN_01787e50(&local_b8,local_74);
          puVar2 = local_a0;
          local_68 = 0;
          if (((char)local_98 == '\0') && (local_a0 != (void*)0x0)) {
            FUN_00d50b00();
          }
          local_70 = puVar2;
          local_68 = '\x01';
          FUN_00d8dbf0();
          lVar1 = local_80;
          if ((local_68 != '\0') && (local_70 != (void*)0x0)) {
            FUN_00d50b20();
          }
          iVar6 = iVar6 + 1;
        } while (iVar6 < *(int *)(lVar1 + 0xc));
      }
    }
    FUN_01798230();
  }
  FUN_00d8c7d0();
  *this_ptr = puVar4;
  *(void*)(this_ptr + 1) = 1;
  return;
}

