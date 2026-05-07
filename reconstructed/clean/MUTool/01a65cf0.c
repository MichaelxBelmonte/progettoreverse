// Function: FUN_01a65cf0
// Address: 01a65cf0
// Size: 1221 bytes
// Class: MUTool

void FUN_01a65cf0(void)

{
  int64_t lVar1;
  uint8_t uVar2;
  char cVar3;
  int64_t *this_ptr;
  int64_t local_f0;
  char local_e8;
  int64_t local_e0;
  char local_d8;
  int64_t local_d0;
  char local_c8;
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
  int64_t local_40;
  char local_38;
  int64_t local_30;
  char local_28;
  
  FUN_01b68670();
  *(void*)(this_ptr + 0x36) = 0;
  FUN_00d6f370();
  lVar1 = g_027e2650;
  if (g_027e2650 != 0) {
    FUN_00d50b00();
  }
  uVar2 = FUN_00d70f90();
  *(void*)(this_ptr + 0x40) = uVar2;
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if ((local_28 != '\0') && (local_30 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d6f370();
  lVar1 = g_027e2658;
  if (g_027e2658 != 0) {
    FUN_00d50b00();
  }
  uVar2 = FUN_00d70f90();
  *(void*)((int64_t)this_ptr + 0x201) = uVar2;
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if ((local_28 != '\0') && (local_30 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d403d0();
  FUN_00d50b00();
  local_f0 = g_027e3b40;
  if (g_027e3b40 != 0) {
    FUN_00d50b00();
  }
  local_e8 = '\x01';
  local_e0 = 0;
  local_d8 = '\0';
  FUN_00d41430(&local_e0,&local_f0);
  if ((local_d8 != '\0') && (local_e0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_e8 != '\0') && (local_f0 != 0)) {
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
  local_d0 = g_027e3bc0;
  if (g_027e3bc0 != 0) {
    FUN_00d50b00();
  }
  local_c8 = '\x01';
  local_c0 = 0;
  local_b8 = '\0';
  FUN_00d41430(&local_c0,&local_d0);
  if ((local_b8 != '\0') && (local_c0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_c8 != '\0') && (local_d0 != 0)) {
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
  local_b0 = g_027e2660;
  if (g_027e2660 != 0) {
    FUN_00d50b00();
  }
  local_a8 = '\x01';
  FUN_00d6f370();
  local_40 = local_80;
  local_38 = 0;
  if (local_78 == '\0') {
    if (local_80 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_78 = '\0';
  }
  local_38 = '\x01';
  FUN_00d41430(&local_40,&local_b0);
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  if ((local_a8 != '\0') && (local_b0 != 0)) {
    FUN_00d50b20();
  }
  if (this_ptr != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_28 != '\0') && (local_30 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d6f370();
  local_a0 = g_027e1360;
  if (g_027e1360 != 0) {
    FUN_00d50b00();
  }
  local_98 = '\x01';
  cVar3 = FUN_00d70700();
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_28 != '\0') && (local_30 != 0)) {
    FUN_00d50b20();
  }
  if (cVar3 != '\0') {
    FUN_00d6f370();
    local_90 = g_027e1360;
    if (g_027e1360 != 0) {
      FUN_00d50b00();
    }
    local_88 = '\x01';
    cVar3 = FUN_00d70f90();
    if (*(char *)((int64_t)this_ptr + 0x202) != cVar3) {
      *(char *)((int64_t)this_ptr + 0x202) = cVar3;
      (**(code **)(*this_ptr + 0x620))();
      if (this_ptr[0x37] != 0) {
        this_ptr[0x37] = 0;
        FUN_00d50b20();
      }
    }
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
    if ((local_28 != '\0') && (local_30 != 0)) {
      FUN_00d50b20();
    }
  }
  return;
}

