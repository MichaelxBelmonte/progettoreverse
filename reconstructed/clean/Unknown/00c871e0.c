// Function: FUN_00c871e0
// Address: 00c871e0
// Size: 1118 bytes
// Class: Unknown

void* FUN_00c871e0(uint64_t param_1,int64_t *param_2)

{
  void*puVar1;
  void*puVar2;
  int64_t arg1;
  void*this_ptr;
  int64_t lVar3;
  int64_t lVar4;
  int64_t lVar5;
  int64_t local_98;
  char local_90;
  void*local_88;
  char local_80;
  void*local_78;
  void*local_70;
  char local_68;
  void*local_60;
  int local_58;
  uint64_t local_54;
  int64_t local_48;
  char local_40;
  void*local_38;
  
  (**(code **)(**(int64_t **)(arg1 + 0xb8) + 0x368))();
  FUN_000175c0();
  puVar2 = local_70;
  if (local_68 == '\0') {
    if (((local_70 != (void*)0x0) && (FUN_00d50b00(), local_68 != '\0')) &&
       (local_70 != (void*)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_68 = '\0';
  }
  (**(code **)(**(int64_t **)(arg1 + 0xb8) + 0x378))();
  if (puVar2 == (void*)0x0) {
    puVar2 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar2 = &g_02572358;
    (*g_02572370)();
    FUN_00d50b00();
    local_98 = g_02774da0;
    if (g_02774da0 != 0) {
      FUN_00d50b00();
    }
    local_90 = '\x01';
    FUN_00d91000(1,&local_98);
    puVar1 = local_70;
    if (local_68 == '\0') {
      if (((local_70 != (void*)0x0) && (FUN_00d50b00(), local_68 != '\0')) &&
         (local_70 != (void*)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_68 = '\0';
    }
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
    lVar3 = arg1;
    if (puVar1 != (void*)0x0) {
      local_68 = '\0';
      local_70 = (void*)0x0;
      local_78 = puVar1;
      local_60 = puVar1;
      local_54 = 0;
      local_38 = puVar2;
      for (lVar5 = 0; local_58 = (int)lVar5, local_58 < *(int *)((int64_t)local_78 + 0xc);
          lVar5 = lVar5 + 1) {
        local_70 = *(void**)(local_78[2] + lVar5 * 8);
        FUN_00c837f0();
        if (local_40 == '\0') {
          if (local_48 != 0) {
            FUN_00d50b00();
            goto LAB_00c8754b;
          }
        }
        else if (local_48 != 0) {
LAB_00c8754b:
          local_40 = '\0';
          FUN_00d21140();
          if ((local_40 != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
          FUN_00d50b20();
          break;
        }
        FUN_00c84370();
        if (local_40 == '\0') {
          if (local_48 == 0) break;
          FUN_00d50b00();
        }
        else if (local_48 == 0) break;
        local_40 = '\0';
        FUN_00d21140();
        if ((local_40 != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
        FUN_00d77e40();
        lVar4 = local_48;
        if (local_48 == lVar3) {
LAB_00c874dd:
          lVar4 = lVar3;
          if (local_40 != '\0') {
LAB_00c874e7:
            if (local_48 != 0) {
              FUN_00d50b20();
            }
          }
        }
        else {
          if (local_40 == '\0') {
            if (local_48 != 0) {
              FUN_00d50b00();
            }
            if (lVar3 != 0) {
              FUN_00d50b20();
              lVar3 = lVar4;
              goto LAB_00c874dd;
            }
            if (local_40 == '\0') goto LAB_00c873a0;
            goto LAB_00c874e7;
          }
          if (lVar3 != 0) {
            FUN_00d50b20();
          }
        }
LAB_00c873a0:
        FUN_00d50b20();
        lVar3 = lVar4;
      }
      FUN_00018280();
      FUN_00d50b20();
      puVar2 = local_38;
    }
    (**(code **)(**(int64_t **)(arg1 + 0xb8) + 0x368))();
    local_80 = '\0';
    local_70 = (void*)*param_2;
    local_68 = '\0';
    local_88 = puVar2;
    FUN_00ca0840();
    if ((local_68 != '\0') && (local_70 != (void*)0x0)) {
      FUN_00d50b20();
    }
    if ((local_80 != '\0') && (local_88 != (void*)0x0)) {
      FUN_00d50b20();
    }
    (**(code **)(**(int64_t **)(arg1 + 0xb8) + 0x378))();
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
  }
  *this_ptr = puVar2;
  *(void*)(this_ptr + 1) = 1;
  return this_ptr;
}

