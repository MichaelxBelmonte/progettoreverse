// Function: FUN_0053b0a0
// Address: 0053b0a0
// Size: 688 bytes
// Class: MUAudioFileSource

void FUN_0053b0a0(uint64_t param_1)

{
  int64_t lVar1;
  char cVar2;
  void*puVar3;
  int64_t lVar4;
  void *pvVar5;
  int64_t lVar6;
  int64_t this_ptr;
  int64_t local_a0;
  char local_98;
  int64_t local_58;
  char local_50;
  int local_40;
  
  lVar6 = local_58;
  if (*(char *)(this_ptr + 0x248) != '\0') {
    return;
  }
  if (*(char *)(this_ptr + 0x249) == '\0') {
    return;
  }
  if (*(int64_t *)(this_ptr + 0x278) == 0) {
    return;
  }
  puVar3 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar3 = &g_02572358;
  (*g_02572370)();
  FUN_012d2610();
  if (local_50 == '\0') {
    if (local_58 == 0) goto LAB_0053b2a0;
    FUN_00d50b00();
  }
  else if (local_58 == 0) goto LAB_0053b2a0;
  local_50 = '\0';
  local_58 = 0;
  local_40 = -1;
  while( true ) {
    lVar4 = (int64_t)local_40;
    local_40 = local_40 + 1;
    if (*(int *)(lVar6 + 0xc) <= local_40) break;
    lVar1 = *(int64_t *)(lVar6 + 0x10);
    local_58 = *(int64_t *)(lVar1 + 8 + lVar4 * 8);
    pvVar5 = _pthread_getspecific((void*)lVar1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012f0960(param_1,1);
    if ((local_98 != '\0') && (local_a0 != 0)) {
      FUN_00d50b20();
    }
  }
  FUN_000be170();
  FUN_00d50b20();
LAB_0053b2a0:
  FUN_0141c3e0(param_1);
  if ((local_50 == '\0') && (local_58 != 0)) {
    FUN_00d50b00();
  }
  FUN_0141c1e0();
  lVar6 = FUN_00e313b0();
  do {
    cVar2 = FUN_00e31450(3,local_58);
  } while (cVar2 == '\0');
  if (lVar6 != 0) {
    FUN_00d50b20();
  }
  if (puVar3 != (void*)0x0) {
    FUN_00d50b20();
  }
  return;
}

