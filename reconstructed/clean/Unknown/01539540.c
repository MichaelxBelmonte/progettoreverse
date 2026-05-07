// Function: FUN_01539540
// Address: 01539540
// Size: 1133 bytes
// Class: Unknown
// String references:
//   "Midi Channel %I"

int64_t * FUN_01539540(void)

{
  char cVar1;
  int64_t *plVar2;
  void *pvVar3;
  int64_t lVar4;
  void* pVar5;
  int64_t lVar6;
  int64_t *this_ptr;
  int64_t local_90;
  char local_88;
  void* local_50;
  int local_48;
  
  plVar2 = (int64_t *)FUN_00e8fc40();
  FUN_00d4ff40();
  *plVar2 = (int64_t)&g_025795a8;
  (*g_025795c0)();
  FUN_00b518f0();
  pVar5 = 0x24cc6f0;
  FUN_00d94d80();
  pvVar3 = _pthread_getspecific(pVar5);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e6160();
  local_50 = 0x24cc6f0;
  local_48 = -1;
  do {
    lVar4 = (int64_t)local_48;
    local_48 = local_48 + 1;
    pVar5 = local_50;
    if (g_024cc6fc <= local_48) goto LAB_015397a1;
    lVar4 = *(int64_t *)(g_024cc700 + 8 + lVar4 * 8);
    lVar6 = g_024cc700;
    pvVar3 = _pthread_getspecific((void*)g_024cc700);
    pVar5 = (void*)lVar6;
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e6000();
    if (local_88 == '\0') {
      if (local_90 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_88 = '\0';
    }
    cVar1 = (**(code **)(*plVar2 + 0x50))();
    if (local_90 != 0) {
      FUN_00d50b20();
    }
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
  } while (cVar1 == '\0');
  if (lVar4 == 0) {
LAB_015397a1:
    FUN_000be170();
  }
  else {
    FUN_00d50b00();
    FUN_000be170();
    if (lVar4 != 0) {
      *(void*)(this_ptr + 1) = 0;
      *this_ptr = lVar4;
      *(void*)(this_ptr + 1) = 1;
      goto LAB_0153998e;
    }
  }
  plVar2 = (int64_t *)FUN_00e8fc40();
  FUN_00082580();
  (**(code **)(*plVar2 + 0x18))();
  pvVar3 = _pthread_getspecific(pVar5);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e5f80();
  pvVar3 = _pthread_getspecific(pVar5);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  pvVar3 = _pthread_getspecific(pVar5);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e57e0();
  FUN_012e57a0();
  pvVar3 = _pthread_getspecific(pVar5);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e6520();
  *this_ptr = (int64_t)plVar2;
  *(void*)(this_ptr + 1) = 1;
LAB_0153998e:
  FUN_00d50b20();
  FUN_00d50b20();
  return this_ptr;
}

