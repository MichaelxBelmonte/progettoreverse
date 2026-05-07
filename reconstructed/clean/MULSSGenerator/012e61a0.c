// Function: FUN_012e61a0
// Address: 012e61a0
// Size: 697 bytes
// Class: MULSSGenerator

void* FUN_012e61a0(void)

{
  int64_t lVar1;
  int64_t lVar2;
  void *pvVar3;
  int64_t lVar4;
  void*puVar5;
  void*puVar6;
  int64_t arg1;
  void*this_ptr;
  int iVar7;
  int64_t local_80;
  char local_78;
  int local_50;
  
  lVar1 = *(int64_t *)(arg1 + 0xa8);
  if (lVar1 == 0) {
    *(void*)(this_ptr + 1) = 0;
LAB_012e62d3:
    puVar5 = (void*)0x0;
  }
  else {
    local_50 = -1;
    do {
      lVar2 = (int64_t)local_50;
      local_50 = local_50 + 1;
      if (*(int *)(lVar1 + 0xc) <= local_50) {
        FUN_000be170();
        puVar5 = *(void**)(arg1 + 0xa8);
        *(void*)(this_ptr + 1) = 0;
        if (puVar5 == (void*)0x0) goto LAB_012e62d3;
        FUN_00d50b00();
        goto LAB_012e644b;
      }
      lVar2 = *(int64_t *)(*(int64_t *)(lVar1 + 0x10) + 8 + lVar2 * 8);
      pvVar3 = _pthread_getspecific((void*)*(int64_t *)(lVar1 + 0x10));
      if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
        lVar2 = *(int64_t *)(lVar2 + 0x20 + (uint64_t)(*(uint *)(lVar4 + 0x154) & 1) * 8);
      }
      lVar2 = *(int64_t *)(lVar2 + 0xa8);
      if (lVar2 != 0) {
        FUN_00d50b00();
      }
      iVar7 = *(int *)(lVar2 + 0xc);
      FUN_00d50b20();
    } while (iVar7 == 0);
    FUN_000be170();
    puVar5 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    puVar6 = &g_02572358;
    *puVar5 = &g_02572358;
    (*g_02572370)();
    lVar1 = *(int64_t *)(arg1 + 0xa8);
    if (lVar1 != 0) {
      if (0 < *(int *)(lVar1 + 0xc)) {
        iVar7 = 0;
        do {
          FUN_00d21140();
          pvVar3 = _pthread_getspecific((void*)puVar6);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012e61a0();
          if (local_78 == '\0') {
            if (local_80 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_78 = '\0';
          }
          FUN_00d214d0();
          if (local_80 != 0) {
            FUN_00d50b20();
          }
          iVar7 = iVar7 + 1;
        } while (iVar7 < *(int *)(lVar1 + 0xc));
      }
      FUN_000be170();
    }
  }
LAB_012e644b:
  *this_ptr = puVar5;
  *(void*)(this_ptr + 1) = 1;
  return this_ptr;
}

