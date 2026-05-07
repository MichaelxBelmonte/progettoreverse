// Function: FUN_0173a7a0
// Address: 0173a7a0
// Size: 1526 bytes
// Class: Unknown

void FUN_0173a7a0(void* param_1)

{
  int64_t *plVar1;
  int64_t lVar2;
  char cVar3;
  char cVar4;
  void *pvVar5;
  int64_t *arg1;
  int64_t this_ptr;
  int64_t **pplVar6;
  int64_t *local_108;
  char local_100;
  int64_t local_f8;
  char local_f0;
  int64_t local_e8;
  char local_e0;
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
  int64_t *local_48;
  char local_40;
  char local_31;
  
  local_f8 = *arg1;
  local_f0 = '\0';
  FUN_01521390();
  if ((local_f0 != '\0') && (local_f8 != 0)) {
    FUN_00d50b20();
  }
  plVar1 = (int64_t *)*arg1;
  FUN_0002c940();
  if (plVar1 == (int64_t *)0x0) {
LAB_0173a81d:
    arg1 = &g_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 == '\0') goto LAB_0173a81d;
  }
  plVar1 = (int64_t *)*arg1;
  cVar3 = (char)arg1[1];
  if ((cVar3 == '\0') || (plVar1 == (int64_t *)0x0)) {
    if (plVar1 == (int64_t *)0x0) {
      return;
    }
  }
  else {
    FUN_00d50b00();
  }
  lVar2 = g_027cd540;
  if (g_027cd540 != 0) {
    FUN_00d50b00();
  }
  local_e8 = lVar2;
  local_e0 = '\x01';
  cVar4 = (**(code **)(*plVar1 + 0x590))();
  if ((local_e0 != '\0') && (local_e8 != 0)) {
    FUN_00d50b20();
  }
  if ((cVar4 != '\0') && (*(int64_t *)(this_ptr + 0x58) != 0)) {
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    lVar2 = g_027cd540;
    if (g_027cd540 != 0) {
      FUN_00d50b00();
    }
    local_d8 = lVar2;
    local_d0 = '\x01';
    (**(code **)(*plVar1 + 0x510))();
    FUN_01736c00();
    if ((local_d0 != '\0') && (local_d8 != 0)) {
      FUN_00d50b20();
    }
  }
  lVar2 = g_027e13c8;
  if (g_027e13c8 != 0) {
    FUN_00d50b00();
  }
  local_c8 = lVar2;
  local_c0 = '\x01';
  cVar4 = (**(code **)(*plVar1 + 0x590))();
  if ((local_c0 != '\0') && (local_c8 != 0)) {
    FUN_00d50b20();
  }
  if ((cVar4 != '\0') && (*(int64_t *)(this_ptr + 0x58) != 0)) {
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    lVar2 = g_027e13c8;
    if (g_027e13c8 != 0) {
      FUN_00d50b00();
    }
    local_b8 = lVar2;
    local_b0 = '\x01';
    (**(code **)(*plVar1 + 0x520))();
    FUN_01736c60();
    if ((local_b0 != '\0') && (local_b8 != 0)) {
      FUN_00d50b20();
    }
  }
  lVar2 = g_027e3cf0;
  if (g_027e3cf0 != 0) {
    FUN_00d50b00();
  }
  local_a8 = lVar2;
  local_a0 = '\x01';
  cVar4 = (**(code **)(*plVar1 + 0x590))();
  if ((local_a0 != '\0') && (local_a8 != 0)) {
    FUN_00d50b20();
  }
  if ((cVar4 != '\0') && (*(int64_t *)(this_ptr + 0x60) != 0)) {
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    lVar2 = g_027e3cf0;
    if (g_027e3cf0 != 0) {
      FUN_00d50b00();
    }
    local_98 = lVar2;
    local_90 = '\x01';
    (**(code **)(*plVar1 + 0x538))();
    FUN_01770230();
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
  }
  lVar2 = g_027cd548;
  if (g_027cd548 != 0) {
    FUN_00d50b00();
  }
  local_88 = lVar2;
  local_80 = '\x01';
  cVar4 = (**(code **)(*plVar1 + 0x590))();
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  if ((cVar4 != '\0') && (*(int64_t *)(this_ptr + 0x60) != 0)) {
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    lVar2 = g_027cd548;
    if (g_027cd548 != 0) {
      FUN_00d50b00();
    }
    local_78 = lVar2;
    local_70 = '\x01';
    (**(code **)(*plVar1 + 0x520))();
    FUN_01770300();
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
  }
  lVar2 = g_027cd550;
  if (g_027cd550 != 0) {
    FUN_00d50b00();
  }
  local_68 = lVar2;
  local_60 = '\x01';
  cVar4 = (**(code **)(*plVar1 + 0x590))();
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  if ((cVar4 == '\0') || (*(int64_t *)(this_ptr + 0x60) == 0)) goto LAB_0173ad77;
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  lVar2 = g_027cd550;
  local_31 = cVar3;
  if (g_027cd550 != 0) {
    FUN_00d50b00();
  }
  local_58 = lVar2;
  local_50 = '\x01';
  pplVar6 = &local_108;
  (**(code **)(*plVar1 + 0x578))();
  plVar1 = local_108;
  FUN_01a01970();
  if (plVar1 == (int64_t *)0x0) {
LAB_0173aceb:
    pplVar6 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 == '\0') goto LAB_0173aceb;
  }
  local_40 = 0;
  local_48 = *pplVar6;
  if (*(char *)(pplVar6 + 1) == '\0') {
    if (local_48 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    local_40 = '\x01';
  }
  else {
    local_40 = '\x01';
    *(void*)(pplVar6 + 1) = 0;
  }
  cVar3 = local_31;
  FUN_0176f3a0();
  if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_100 != '\0') && (local_108 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
LAB_0173ad77:
  if (cVar3 != '\0') {
    FUN_00d50b20();
  }
  return;
}

