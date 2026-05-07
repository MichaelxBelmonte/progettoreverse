// Function: FUN_007521c0
// Address: 007521c0
// Size: 1242 bytes
// Class: Unknown

void FUN_007521c0(void* param_1)

{
  int64_t lVar1;
  int64_t *plVar2;
  void *pvVar3;
  int64_t lVar4;
  int64_t *arg1;
  void*this_ptr;
  int64_t local_c0;
  char local_b8;
  int64_t local_b0;
  char local_a8;
  int64_t local_a0;
  char local_98;
  int64_t *local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  plVar2 = (int64_t *)FUN_00e8fc40();
  FUN_000830c0();
  (**(code **)(*plVar2 + 0x18))();
  FUN_004a0bd0();
  lVar1 = local_40;
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
      goto LAB_0075223b;
    }
    if (plVar2[0xf] != 0) {
      plVar2[0xf] = 0;
      goto LAB_00752274;
    }
  }
  else {
    local_38 = '\0';
LAB_0075223b:
    lVar4 = plVar2[0xf];
    if (lVar4 != lVar1) {
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      plVar2[0xf] = lVar1;
      if (lVar4 != 0) {
LAB_00752274:
        FUN_00d50b20();
      }
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0170f550();
  FUN_0167ab00();
  local_60 = local_40;
  local_58 = 0;
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  local_58 = '\x01';
  (**(code **)(*plVar2 + 0x490))();
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0170f550();
  FUN_0167ab30();
  lVar1 = plVar2[0x27];
  lVar4 = lVar1;
  if (lVar1 != local_40) {
    if (local_38 == '\0') {
      if (local_40 == 0) {
        lVar4 = 0;
        goto LAB_007523e7;
      }
      FUN_00d50b00();
      lVar1 = plVar2[0x27];
      plVar2[0x27] = local_40;
      lVar4 = local_40;
    }
    else {
      local_38 = '\0';
      lVar4 = local_40;
LAB_007523e7:
      plVar2[0x27] = lVar4;
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
      lVar4 = local_40;
    }
  }
  if ((local_38 != '\0') && (lVar4 != 0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  lVar1 = g_027294d8;
  if (g_027294d8 != 0) {
    FUN_00d50b00();
  }
  lVar4 = g_027294e0;
  local_c0 = lVar1;
  local_b8 = '\x01';
  if (g_027294e0 != 0) {
    FUN_00d50b00();
  }
  local_b0 = lVar4;
  local_a8 = '\x01';
  local_a0 = 0;
  local_98 = '\0';
  FUN_000bf690(&local_b0,&local_c0,&local_a0);
  lVar1 = plVar2[0x22];
  lVar4 = lVar1;
  if (lVar1 == local_40) goto LAB_0075254b;
  if (local_38 == '\0') {
    if (local_40 == 0) {
      lVar4 = 0;
      goto LAB_007524fd;
    }
    FUN_00d50b00();
    lVar1 = plVar2[0x22];
    plVar2[0x22] = local_40;
    lVar4 = local_40;
  }
  else {
    local_38 = '\0';
    lVar4 = local_40;
LAB_007524fd:
    plVar2[0x22] = lVar4;
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
    lVar4 = local_40;
  }
LAB_0075254b:
  if ((local_38 != '\0') && (lVar4 != 0)) {
    FUN_00d50b20();
  }
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_a8 != '\0') && (local_b0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_b8 != '\0') && (local_c0 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d403d0();
  local_80 = g_027294e8;
  local_88 = '\0';
  local_90 = plVar2;
  if (g_027294e8 != 0) {
    FUN_00d50b00();
  }
  local_78 = '\x01';
  local_70 = *arg1;
  local_68 = '\0';
  FUN_00d41430(&local_70,&local_80);
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  if ((local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  *this_ptr = plVar2;
  *(void*)(this_ptr + 1) = 1;
  return;
}

