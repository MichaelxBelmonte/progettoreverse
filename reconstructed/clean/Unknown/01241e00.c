// Function: FUN_01241e00
// Address: 01241e00
// Size: 2159 bytes
// Class: Unknown

void* FUN_01241e00(int64_t *param_1)

{
  int64_t *plVar1;
  int64_t *plVar2;
  void *pvVar3;
  int64_t lVar4;
  int64_t lVar5;
  int64_t *plVar6;
  int64_t *plVar7;
  void*puVar8;
  void*puVar9;
  uint unaff_ESI;
  void*this_ptr;
  uint uVar10;
  int64_t *local_40;
  
  plVar1 = (int64_t *)FUN_00e8fc40();
  FUN_010f7230();
  (**(code **)(*plVar1 + 0x18))();
  plVar2 = (int64_t *)FUN_00e8fc40();
  FUN_0079c340();
  (**(code **)(*plVar2 + 0x18))();
  pvVar3 = _pthread_getspecific((void*)param_1);
  if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
    param_1 = plVar2;
  }
  FUN_012401b0();
  pvVar3 = _pthread_getspecific((void*)param_1);
  if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
    param_1 = plVar2;
  }
  FUN_012401f0();
  pvVar3 = _pthread_getspecific((void*)param_1);
  lVar4 = g_027be588;
  if ((pvVar3 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar4 = g_027be588, lVar5 != 0)) {
    param_1 = plVar2;
  }
  g_027be588 = lVar4;
  if (lVar4 != 0) {
    FUN_00d50b00();
  }
  FUN_01240140();
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  pvVar3 = _pthread_getspecific((void*)param_1);
  if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
    param_1 = plVar1;
  }
  FUN_01240950();
  pvVar3 = _pthread_getspecific((void*)param_1);
  if ((pvVar3 == (void *)0x0) || (lVar4 = FUN_00e8b990(), lVar4 == 0)) {
    plVar7 = (int64_t *)plVar1[10];
    plVar6 = plVar1;
  }
  else {
    plVar6 = (int64_t *)plVar1[(uint64_t)(*(uint *)(lVar4 + 0x154) & 1) + 4];
    plVar7 = (int64_t *)plVar6[10];
    param_1 = plVar1;
  }
  if (plVar7 != plVar2) {
    FUN_00d64850();
    plVar7 = (int64_t *)plVar6[10];
    if (plVar7 != plVar2) {
      FUN_00d50b00();
      plVar6[10] = (int64_t)plVar2;
      if (plVar7 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
    }
    FUN_00d64910();
  }
  plVar6 = (int64_t *)FUN_00e8fc40();
  FUN_00d4ff40();
  plVar6[7] = 0;
  *plVar6 = (int64_t)&g_024cbc70;
  *(void*)(plVar6 + 8) = 0;
  FUN_00d500e0();
  pvVar3 = _pthread_getspecific((void*)param_1);
  if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
    param_1 = plVar6;
  }
  FUN_0124a800();
  pvVar3 = _pthread_getspecific((void*)param_1);
  lVar4 = g_027be588;
  if ((pvVar3 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar4 = g_027be588, lVar5 != 0)) {
    param_1 = plVar6;
  }
  g_027be588 = lVar4;
  if (lVar4 != 0) {
    FUN_00d50b00();
  }
  FUN_012a51c0();
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  pvVar3 = _pthread_getspecific((void*)param_1);
  if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
    param_1 = plVar1;
  }
  FUN_012407f0();
  local_40 = (int64_t *)FUN_00e8fc40();
  FUN_00d4ff40();
  local_40[7] = 0;
  *local_40 = (int64_t)&g_024cbc70;
  *(void*)(local_40 + 8) = 0;
  FUN_00d500e0();
  plVar7 = (int64_t *)FUN_00e8fc40();
  FUN_00d4ff40();
  plVar7[7] = 0;
  *plVar7 = (int64_t)&g_024cbc70;
  *(void*)(plVar7 + 8) = 0;
  FUN_00d500e0();
  if (local_40 == plVar7) {
    FUN_00d50b20();
  }
  else {
    FUN_00d50b20();
    local_40 = plVar7;
  }
  pvVar3 = _pthread_getspecific((void*)param_1);
  if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
    param_1 = local_40;
  }
  FUN_0124a800();
  pvVar3 = _pthread_getspecific((void*)param_1);
  lVar4 = g_027be590;
  if ((pvVar3 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar4 = g_027be590, lVar5 != 0)) {
    param_1 = local_40;
  }
  g_027be590 = lVar4;
  if (lVar4 != 0) {
    FUN_00d50b00();
  }
  FUN_012a51c0();
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  pvVar3 = _pthread_getspecific((void*)param_1);
  if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
    param_1 = plVar1;
  }
  FUN_01240690();
  if ((unaff_ESI & 0xff) == 0) {
    *this_ptr = plVar1;
    *(void*)(this_ptr + 1) = 1;
  }
  else {
    uVar10 = 0;
    do {
      puVar8 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar8 = &g_024cc370;
      puVar8[7] = 0;
      puVar8[8] = 0;
      FUN_00d500e0();
      pvVar3 = _pthread_getspecific((void*)param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0123fb40();
      pvVar3 = _pthread_getspecific((void*)param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0123fae0();
      pvVar3 = _pthread_getspecific((void*)param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0123fa90();
      pvVar3 = _pthread_getspecific((void*)param_1);
      if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
        param_1 = plVar2;
      }
      FUN_01240230();
      puVar9 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar9 = &g_024cc370;
      puVar9[7] = 0;
      puVar9[8] = 0;
      FUN_00d500e0();
      if (puVar8 == puVar9) {
        FUN_00d50b20();
      }
      else {
        FUN_00d50b20();
      }
      pvVar3 = _pthread_getspecific((void*)param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0123fb40();
      pvVar3 = _pthread_getspecific((void*)param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0123fae0();
      pvVar3 = _pthread_getspecific((void*)param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0123fa90();
      pvVar3 = _pthread_getspecific((void*)param_1);
      if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
        param_1 = plVar2;
      }
      FUN_01240230();
      FUN_00d50b20();
      uVar10 = uVar10 + 1;
    } while ((unaff_ESI & 0xff) != uVar10);
    *this_ptr = plVar1;
    *(void*)(this_ptr + 1) = 1;
    if (local_40 == (int64_t *)0x0) goto LAB_01242691;
  }
  FUN_00d50b20();
LAB_01242691:
  if (plVar6 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (plVar2 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return this_ptr;
}

