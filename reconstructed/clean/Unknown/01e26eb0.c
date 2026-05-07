// Function: FUN_01e26eb0
// Address: 01e26eb0
// Size: 735 bytes
// Class: Unknown

void FUN_01e26eb0(void)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t local_c0;
  char local_b8;
  int64_t local_b0;
  char local_a8;
  int64_t local_a0;
  char local_98;
  int64_t local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  int64_t local_50;
  char local_48;
  int64_t local_30;
  char local_28;
  
  lVar3 = 0;
  if (this_ptr[0x27] != 0) {
    FUN_00d403d0();
    FUN_00d50b00();
    local_c0 = 0;
    local_b8 = '\0';
    local_b0 = 0;
    local_a8 = '\0';
    FUN_00d41040(&local_b0,&local_c0);
    if ((local_a8 != '\0') && (local_b0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_b8 != '\0') && (local_c0 != 0)) {
      FUN_00d50b20();
    }
    if (this_ptr != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((local_28 != '\0') && (local_30 != 0)) {
      FUN_00d50b20();
    }
    lVar3 = this_ptr[0x27];
  }
  lVar1 = *arg1;
  lVar2 = lVar3;
  if (lVar3 != lVar1) {
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    this_ptr[0x27] = lVar1;
    lVar2 = lVar1;
    if (lVar3 != 0) {
      FUN_00d50b20();
      lVar2 = this_ptr[0x27];
    }
  }
  if (lVar2 != 0) {
    FUN_00d403d0();
    FUN_00d50b00();
    local_a0 = g_027f33c8;
    if (g_027f33c8 != 0) {
      FUN_00d50b00();
    }
    local_98 = '\x01';
    local_48 = 0;
    lVar3 = this_ptr[0x27];
    if (lVar3 != 0) {
      FUN_00d50b00();
    }
    local_48 = '\x01';
    local_50 = lVar3;
    FUN_00d41430(&local_50,&local_a0);
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_98 != '\0') && (local_a0 != 0)) {
      FUN_00d50b20();
    }
    if (this_ptr != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((local_28 != '\0') && (local_30 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d403d0();
    FUN_00d50b00();
    local_90 = g_027f33a0;
    if (g_027f33a0 != 0) {
      FUN_00d50b00();
    }
    local_88 = '\x01';
    local_80 = 0;
    local_78 = '\0';
    FUN_00d41430(&local_80,&local_90);
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
    if (this_ptr != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((local_28 != '\0') && (local_30 != 0)) {
      FUN_00d50b20();
    }
    (**(code **)(*this_ptr + 0x540))();
    (**(code **)(*this_ptr + 0x620))();
  }
  return;
}

