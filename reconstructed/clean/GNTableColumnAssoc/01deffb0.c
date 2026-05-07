// Function: FUN_01deffb0
// Address: 01deffb0
// Size: 523 bytes
// Class: GNTableColumnAssoc

void FUN_01deffb0(void)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t this_ptr;
  int64_t local_78;
  char local_70;
  int64_t local_68;
  char local_60;
  int64_t *local_58;
  char local_50;
  int64_t *local_48;
  char local_40;
  int64_t local_38;
  char local_30;
  
  lVar1 = g_027e7c20;
  if (*(char *)(this_ptr + 0x50) == '\0') {
    return;
  }
  if (g_027e7c20 != 0) {
    FUN_00d50b00();
  }
  FUN_01ccaae0();
  lVar2 = local_38;
  if (local_30 == '\0') {
    if (((local_38 != 0) && (FUN_00d50b00(), local_30 != '\0')) && (local_38 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_30 = '\0';
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if (lVar2 == 0) {
LAB_01df0135:
    local_50 = 0;
    (**(code **)(*(int64_t *)(this_ptr + 0x48) + 0x10))();
    FUN_00d50b00();
    local_50 = '\x01';
    local_58 = (int64_t *)(this_ptr + 0x48);
    FUN_00cbb340();
    if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
      (**(code **)(*local_58 + 0x10))();
      FUN_00d50b20();
    }
    *(void*)(this_ptr + 0x50) = 0;
  }
  else {
    FUN_01d28610();
    if (local_30 == '\0') {
      if (local_38 == 0) goto LAB_01df0135;
      FUN_00d50b00();
      if ((local_30 != '\0') && (local_38 != 0)) {
        FUN_00d50b20();
      }
    }
    else if (local_38 == 0) goto LAB_01df0135;
    local_40 = 0;
    (**(code **)(*(int64_t *)(this_ptr + 0x48) + 0x10))();
    FUN_00d50b00();
    local_40 = '\x01';
    local_78 = 0;
    local_70 = '\0';
    local_68 = 0;
    local_60 = '\0';
    local_48 = (int64_t *)(this_ptr + 0x48);
    FUN_00cbadd0(&local_68,&local_78);
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    if (local_40 == '\0') {
      *(void*)(this_ptr + 0x50) = 0;
    }
    else {
      if (local_48 != (int64_t *)0x0) {
        (**(code **)(*local_48 + 0x10))();
        FUN_00d50b20();
      }
      *(void*)(this_ptr + 0x50) = 0;
    }
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  return;
}

