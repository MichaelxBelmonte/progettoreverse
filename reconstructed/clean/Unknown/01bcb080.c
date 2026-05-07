// Function: FUN_01bcb080
// Address: 01bcb080
// Size: 806 bytes
// Class: Unknown

void FUN_01bcb080(void)

{
  char cVar1;
  int64_t lVar2;
  int64_t *arg1;
  int64_t this_ptr;
  int64_t lVar3;
  int64_t local_a8;
  char local_a0;
  int64_t local_98;
  char local_90;
  int64_t local_88;
  char local_80;
  int64_t local_68;
  char local_60;
  int64_t local_48;
  char local_40;
  int64_t local_38;
  char local_30;
  
  lVar2 = *arg1;
  if (*(int64_t *)(this_ptr + 0x140) == lVar2) {
    return;
  }
  if (*(int64_t *)(this_ptr + 0x140) == 0) {
    lVar3 = 0;
    if (lVar2 != 0) goto LAB_01bcb1be;
LAB_01bcb1ea:
    lVar2 = 0;
    if (lVar3 == 0) goto LAB_01bcb2ca;
  }
  else {
    FUN_00d403d0();
    FUN_00d50b00();
    local_a8 = g_027e5750;
    if (g_027e5750 != 0) {
      FUN_00d50b00();
    }
    local_a0 = '\x01';
    local_60 = 0;
    lVar2 = *(int64_t *)(this_ptr + 0x140);
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    local_60 = '\x01';
    local_68 = lVar2;
    FUN_00d41040(&local_68,&local_a8);
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if ((local_a0 != '\0') && (local_a8 != 0)) {
      FUN_00d50b20();
    }
    if (this_ptr != 0) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    if (*(int64_t *)(this_ptr + 0x140) == 0) {
      lVar3 = 0;
    }
    else {
      *(void*)(this_ptr + 0x140) = 0;
      FUN_00d50b20();
      lVar3 = *(int64_t *)(this_ptr + 0x140);
    }
    lVar2 = *arg1;
    if (lVar3 == lVar2) goto LAB_01bcb1ea;
LAB_01bcb1be:
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    *(int64_t *)(this_ptr + 0x140) = lVar2;
    if (lVar3 != 0) {
      FUN_00d50b20();
      lVar3 = *(int64_t *)(this_ptr + 0x140);
      goto LAB_01bcb1ea;
    }
    if (lVar2 == 0) {
      lVar2 = 0;
      goto LAB_01bcb2ca;
    }
  }
  FUN_00d403d0();
  FUN_00d50b00();
  local_98 = g_027e5750;
  if (g_027e5750 != 0) {
    FUN_00d50b00();
  }
  local_90 = '\x01';
  local_40 = 0;
  lVar2 = *(int64_t *)(this_ptr + 0x140);
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  local_40 = '\x01';
  local_48 = lVar2;
  FUN_00d41430(&local_48,&local_98);
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if ((local_90 != '\0') && (local_98 != 0)) {
    FUN_00d50b20();
  }
  if (this_ptr != 0) {
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  lVar2 = *(int64_t *)(this_ptr + 0x140);
LAB_01bcb2ca:
  if (((lVar2 != 0) && (*(int64_t *)(this_ptr + 0x150) != 0)) &&
     (*(int64_t *)(*(int64_t *)(this_ptr + 0x150) + 0x168) != 0)) {
    FUN_01d2b630();
    local_80 = 0;
    local_88 = *(int64_t *)(*(int64_t *)(this_ptr + 0x150) + 0x168);
    if (local_88 != 0) {
      FUN_00d50b00();
    }
    local_80 = '\x01';
    cVar1 = FUN_00d23d70();
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    if ((cVar1 == '\0') && (*(int64_t *)(*(int64_t *)(this_ptr + 0x150) + 0x168) != 0)) {
      *(void*)(*(int64_t *)(this_ptr + 0x150) + 0x168) = 0;
      FUN_00d50b20();
    }
  }
  return;
}

