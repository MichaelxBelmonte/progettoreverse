// Function: FUN_0054d030
// Address: 0054d030
// Size: 707 bytes
// Class: MDURLOpenedController

void FUN_0054d030(void)

{
  int64_t lVar1;
  int64_t lVar2;
  void*puVar3;
  int64_t *arg1;
  int64_t this_ptr;
  void*puVar4;
  int64_t local_a8;
  int64_t local_a0;
  char local_98;
  void*local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  void*local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  lVar1 = *(int64_t *)(this_ptr + 0x70);
  lVar2 = *arg1;
  if (lVar1 == lVar2) {
    return;
  }
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  *(int64_t *)(this_ptr + 0x70) = lVar2;
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if (*(int64_t *)(this_ptr + 0x80) == 0) {
    return;
  }
  if (*(int64_t *)(this_ptr + 0x78) == 0) {
    return;
  }
  puVar4 = *(void**)(this_ptr + 0x70);
  if (puVar4 == (void*)0x0) {
    FUN_00d8ede0();
    puVar4 = local_60;
    if (local_58 == '\0') {
      if (local_60 == (void*)0x0) {
        puVar4 = (void*)0x0;
      }
      else {
        FUN_00d50b00();
        if ((local_58 != '\0') && (local_60 != (void*)0x0)) {
          FUN_00d50b20();
        }
      }
      goto LAB_0054d0c0;
    }
  }
  else {
    local_58 = 0;
    FUN_00d50b00();
  }
  local_58 = '\0';
LAB_0054d0c0:
  lVar1 = g_0270d080;
  if (g_0270d080 != 0) {
    FUN_00d50b00();
  }
  local_a8 = lVar1;
  FUN_00083ea0(2,&local_a8);
  FUN_000b4da0();
  lVar2 = local_80;
  if (local_78 == '\0') {
    if (((local_80 != 0) && (FUN_00d50b00(), local_78 != '\0')) && (local_80 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_78 = '\0';
  }
  local_60 = (void*)&g_0253d630;
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  local_60 = &g_024c5048;
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  local_68 = 0;
  lVar1 = *(int64_t *)(this_ptr + 0x78);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  local_68 = '\x01';
  local_a0 = lVar2;
  local_98 = '\0';
  local_70 = lVar1;
  FUN_00e0e2a0();
  puVar3 = local_60;
  if (local_58 == '\0') {
    if (((local_60 != (void*)0x0) && (FUN_00d50b00(), local_58 != '\0')) &&
       (local_60 != (void*)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_58 = '\0';
  }
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  local_90 = puVar3;
  local_88 = '\0';
  FUN_01e125e0();
  if ((local_88 != '\0') && (local_90 != (void*)0x0)) {
    FUN_00d50b20();
  }
  if (puVar3 != (void*)0x0) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if (puVar4 != (void*)0x0) {
    FUN_00d50b20();
  }
  return;
}

