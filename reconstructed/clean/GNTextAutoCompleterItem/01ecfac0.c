// Function: FUN_01ecfac0
// Address: 01ecfac0
// Size: 599 bytes
// Class: GNTextAutoCompleterItem

uint64_t FUN_01ecfac0(void)

{
  int64_t lVar1;
  int iVar2;
  int64_t *this_ptr;
  int64_t *plVar3;
  int64_t local_98;
  char local_90;
  int64_t local_88;
  char local_80;
  int64_t *local_78;
  char local_70;
  int64_t *local_68;
  char local_60;
  int64_t *local_58;
  int64_t local_50;
  char local_48;
  int64_t *local_40;
  char local_38;
  
  local_48 = 0;
  lVar1 = this_ptr[3];
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  local_48 = '\x01';
  local_50 = lVar1;
  (**(code **)(*this_ptr + 0x490))();
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(*this_ptr + 0x4c0))();
  FUN_01e10550();
  FUN_00d8e3d0();
  plVar3 = local_40;
  if (local_40 == (int64_t *)0x0) {
    plVar3 = (int64_t *)0x0;
  }
  else if (local_38 == '\0') {
    FUN_00d50b00();
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_90 != '\0') && (local_98 != 0)) {
    FUN_00d50b20();
  }
  lVar1 = g_027fe6f8;
  local_58 = plVar3;
  if (g_027fe6f8 != 0) {
    FUN_00d50b00();
  }
  local_88 = lVar1;
  local_80 = '\x01';
  local_70 = '\0';
  local_78 = plVar3;
  (**(code **)(*this_ptr + 0x4a0))(&local_78,&local_88,0);
  plVar3 = local_40;
  if (local_40 == (int64_t *)0x0) {
    plVar3 = (int64_t *)0x0;
  }
  else if (local_38 == '\0') {
    FUN_00d50b00();
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(*this_ptr + 0x4f8))();
  if (plVar3 == (int64_t *)0x0) {
    (**(code **)(*this_ptr + 0x4e0))();
  }
  else {
    local_60 = '\0';
    local_68 = plVar3;
    iVar2 = FUN_01ed2ec0();
    if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (iVar2 != -1) {
      FUN_01dd3d10();
    }
    (**(code **)(*plVar3 + 0x370))();
    FUN_00d8c7a0();
    FUN_00e7b4e0();
    FUN_01e148d0();
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  if (local_58 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (plVar3 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return 1;
}

