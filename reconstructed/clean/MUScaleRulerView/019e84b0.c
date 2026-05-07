// Function: FUN_019e84b0
// Address: 019e84b0
// Size: 511 bytes
// Class: MUScaleRulerView

void FUN_019e84b0(void)

{
  uint32_t uVar1;
  void *pvVar2;
  int64_t lVar3;
  void* pVar4;
  int64_t lVar5;
  int64_t *arg1;
  int64_t this_ptr;
  int64_t local_38;
  char local_30;
  
  if ((*(int64_t *)(this_ptr + 0x278) != 0) &&
     (FUN_01e1e360(), *(int64_t *)(this_ptr + 0x278) != 0)) {
    *(void*)(this_ptr + 0x278) = 0;
    FUN_00d50b20();
  }
  lVar5 = *arg1;
  if (lVar5 == *(int64_t *)(this_ptr + 0x260)) {
    return;
  }
  if (*(int64_t *)(this_ptr + 0x260) != 0) {
    *(void*)(this_ptr + 0x260) = 0;
    FUN_00d50b20();
    lVar5 = *arg1;
  }
  if (lVar5 == 0) {
    return;
  }
  lVar3 = *(int64_t *)(this_ptr + 0x268);
  if (lVar3 != lVar5) {
    if (lVar5 != 0) {
      FUN_00d50b00();
    }
    *(int64_t *)(this_ptr + 0x268) = lVar5;
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
  }
  pVar4 = 0;
  FUN_01e1eb80(g_023942d0);
  lVar5 = *(int64_t *)(this_ptr + 0x278);
  lVar3 = lVar5;
  if (lVar5 == local_38) goto LAB_019e85d5;
  lVar3 = local_38;
  if (local_30 == '\0') {
    if (local_38 == 0) {
      lVar3 = 0;
      goto LAB_019e858a;
    }
    FUN_00d50b00();
    lVar5 = *(int64_t *)(this_ptr + 0x278);
    *(int64_t *)(this_ptr + 0x278) = local_38;
  }
  else {
    local_30 = '\0';
LAB_019e858a:
    *(int64_t *)(this_ptr + 0x278) = lVar3;
  }
  pVar4 = (void*)lVar5;
  if (lVar5 != 0) {
    FUN_00d50b20();
    lVar3 = local_38;
  }
LAB_019e85d5:
  if ((local_30 != '\0') && (lVar3 != 0)) {
    FUN_00d50b20();
  }
  pvVar2 = _pthread_getspecific(pVar4);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01264240();
  if (local_30 == '\0') {
    if (local_38 == 0) {
      return;
    }
    FUN_00d50b00();
  }
  else if (local_38 == 0) {
    return;
  }
  pvVar2 = _pthread_getspecific(pVar4);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar1 = FUN_01326de0();
  *(void*)(this_ptr + 0x270) = uVar1;
  FUN_00d50b20();
  return;
}

