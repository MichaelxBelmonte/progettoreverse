// Function: FUN_00b45910
// Address: 00b45910
// Size: 1372 bytes
// Class: GNDate

void FUN_00b45910(uint64_t param_1)

{
  int64_t lVar1;
  int iVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t this_ptr;
  bool bVar5;
  int64_t local_e0;
  int64_t local_d8;
  char local_d0;
  int64_t local_c8;
  char local_c0;
  int64_t local_b8;
  char local_b0;
  int64_t local_a8;
  char local_a0;
  int64_t local_98;
  char local_90;
  int64_t local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  int64_t local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  char local_40;
  int64_t local_38;
  char local_30;
  
  lVar4 = FUN_00b45830();
  lVar1 = g_027653a0;
  if (*(uint64_t *)(this_ptr + 0x40) <= lVar4 + 0x400U) {
    if (g_027653a0 != 0) {
      FUN_00d50b00();
    }
    local_c8 = lVar1;
    local_c0 = '\x01';
    FUN_00cc78b0();
    if ((local_c0 != '\0') && (local_c8 != 0)) {
      FUN_00d50b20();
    }
  }
  (**(code **)(**(int64_t **)(this_ptr + 0x18) + 0x3a0))(param_1,lVar4);
  lVar1 = local_38;
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  lVar3 = g_027653a0;
  if (lVar1 != 0) {
    if (g_027653a0 != 0) {
      FUN_00d50b00();
    }
    local_b8 = lVar3;
    local_b0 = '\x01';
    FUN_00cc78b0();
    if ((local_b0 != '\0') && (local_b8 != 0)) {
      FUN_00d50b20();
    }
  }
  lVar4 = *(int64_t *)(this_ptr + 0x40) - lVar4;
  iVar2 = (int)lVar4;
  if (*(int64_t *)(this_ptr + 0x48) + 8U >> 0x20 == 0) {
    FUN_00ccdf50(param_1,iVar2 + -8);
    bVar5 = true;
    if (local_38 == 0) {
      FUN_00ccdf50(param_1,0x66726565);
      bVar5 = local_48 != 0;
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
    }
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    lVar1 = g_027653a0;
    if (bVar5) {
      if (g_027653a0 != 0) {
        FUN_00d50b00();
      }
      local_78 = lVar1;
      local_70 = '\x01';
      FUN_00cc78b0();
      if ((local_70 != '\0') && (local_78 != 0)) {
        FUN_00d50b20();
      }
    }
    (**(code **)(**(int64_t **)(this_ptr + 0x18) + 0x390))(param_1,&local_d8);
    bVar5 = true;
    if (local_38 == 0) {
      (**(code **)(**(int64_t **)(this_ptr + 0x18) + 0x3a0))
                (param_1,(uint64_t)(iVar2 - 0x10) + local_d8);
      bVar5 = local_48 != 0;
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
    }
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    lVar1 = g_027653a0;
    if (bVar5) {
      if (g_027653a0 != 0) {
        FUN_00d50b00();
      }
      local_68 = lVar1;
      local_60 = '\x01';
      FUN_00cc78b0();
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
    }
    FUN_00ccdf50(param_1,*(int *)(this_ptr + 0x48) + 8);
    bVar5 = true;
    if (local_38 == 0) {
      FUN_00ccdf50(param_1,0x6d646174);
      bVar5 = local_48 != 0;
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
    }
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    lVar1 = g_027653a0;
    if (bVar5) {
      if (g_027653a0 != 0) {
        FUN_00d50b00();
      }
      local_58 = lVar1;
      local_50 = '\x01';
      FUN_00cc78b0();
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    FUN_00ccdf50(param_1,iVar2 + -0x10);
    bVar5 = true;
    if (local_38 == 0) {
      FUN_00ccdf50(param_1,0x66726565);
      bVar5 = local_48 != 0;
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
    }
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    lVar1 = g_027653a0;
    if (bVar5) {
      if (g_027653a0 != 0) {
        FUN_00d50b00();
      }
      local_a8 = lVar1;
      local_a0 = '\x01';
      FUN_00cc78b0();
      if ((local_a0 != '\0') && (local_a8 != 0)) {
        FUN_00d50b20();
      }
    }
    (**(code **)(**(int64_t **)(this_ptr + 0x18) + 0x390))(param_1,&local_e0);
    bVar5 = true;
    if (local_38 == 0) {
      (**(code **)(**(int64_t **)(this_ptr + 0x18) + 0x3a0))
                (param_1,(lVar4 + 0xffffffe8U & 0xffffffff) + local_e0);
      bVar5 = local_48 != 0;
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
    }
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    lVar1 = g_027653a0;
    if (bVar5) {
      if (g_027653a0 != 0) {
        FUN_00d50b00();
      }
      local_98 = lVar1;
      local_90 = '\x01';
      FUN_00cc78b0();
      if ((local_90 != '\0') && (local_98 != 0)) {
        FUN_00d50b20();
      }
    }
    lVar1 = *(int64_t *)(this_ptr + 0x48);
    FUN_00ccdf50(param_1,1);
    bVar5 = true;
    if (local_38 == 0) {
      FUN_00ccdf90(param_1,lVar1 + 0x10);
      bVar5 = true;
      if (local_48 == 0) {
        FUN_00ccdf50(param_1,0x6d646174);
        bVar5 = local_d8 != 0;
        if ((local_d0 != '\0') && (local_d8 != 0)) {
          FUN_00d50b20();
        }
      }
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
    }
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    lVar1 = g_027653a0;
    if (bVar5) {
      if (g_027653a0 != 0) {
        FUN_00d50b00();
      }
      local_88 = lVar1;
      local_80 = '\x01';
      FUN_00cc78b0();
      if ((local_80 != '\0') && (local_88 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  return;
}

