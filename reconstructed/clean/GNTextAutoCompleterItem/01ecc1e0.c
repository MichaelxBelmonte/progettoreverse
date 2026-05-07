// Function: FUN_01ecc1e0
// Address: 01ecc1e0
// Size: 801 bytes
// Class: GNTextAutoCompleterItem

uint32_t FUN_01ecc1e0(uint64_t param_1)

{
  int64_t *plVar1;
  int64_t *plVar2;
  int64_t lVar3;
  uint32_t uVar4;
  void*arg1;
  void*this_ptr;
  bool bVar5;
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
  int64_t *local_38;
  char local_30;
  
  plVar1 = (int64_t *)*this_ptr;
  plVar2 = (int64_t *)*arg1;
  (**(code **)(*plVar1 + 0x3a0))();
  if (local_38 == (int64_t *)0x0) {
    bVar5 = false;
  }
  else {
    (**(code **)(*plVar2 + 0x3a0))();
    bVar5 = local_48 == 0;
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
  }
  if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  uVar4 = 0xffffffff;
  if (!bVar5) {
    (**(code **)(*plVar1 + 0x3a0))();
    if (local_38 == (int64_t *)0x0) {
      (**(code **)(*plVar2 + 0x3a0))();
      bVar5 = local_48 != 0;
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      bVar5 = false;
    }
    if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    uVar4 = 1;
    if (!bVar5) {
      (**(code **)(*plVar1 + 0x3a0))();
      if (local_38 == (int64_t *)0x0) {
        (**(code **)(*plVar2 + 0x3a0))();
        bVar5 = local_48 == 0;
        if ((local_40 != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        bVar5 = false;
      }
      if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      lVar3 = g_027fe6f8;
      if (bVar5) {
        (**(code **)(*plVar1 + 0x370))();
        plVar1 = local_38;
        (**(code **)(*plVar2 + 0x370))();
        local_68 = local_48;
        local_60 = 0;
        if (local_40 == '\0') {
          if (local_48 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_40 = '\0';
        }
        local_60 = '\x01';
        uVar4 = (**(code **)(*plVar1 + 0x58))();
        if ((local_60 != '\0') && (local_68 != 0)) {
          FUN_00d50b20();
        }
        if ((local_40 != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
        if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        if (g_027fe6f8 != 0) {
          FUN_00d50b00();
        }
        local_88 = lVar3;
        local_80 = '\x01';
        (**(code **)(*plVar1 + 0x88))(param_1,&local_88);
        plVar1 = local_38;
        local_78 = g_027fe6f8;
        if (g_027fe6f8 != 0) {
          FUN_00d50b00();
        }
        local_70 = '\x01';
        (**(code **)(*plVar2 + 0x88))(param_1,&local_78);
        local_58 = local_48;
        local_50 = 0;
        if (local_40 == '\0') {
          if (local_48 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_40 = '\0';
        }
        local_50 = '\x01';
        uVar4 = (**(code **)(*plVar1 + 0x58))();
        if ((local_50 != '\0') && (local_58 != 0)) {
          FUN_00d50b20();
        }
        if ((local_40 != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
        if ((local_70 != '\0') && (local_78 != 0)) {
          FUN_00d50b20();
        }
        if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_80 != '\0') && (local_88 != 0)) {
          FUN_00d50b20();
        }
      }
    }
  }
  return uVar4;
}

