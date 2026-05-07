// Function: FUN_01538370
// Address: 01538370
// Size: 872 bytes
// Class: Unknown

void FUN_01538370(void)

{
  int64_t lVar1;
  int64_t lVar2;
  void *pvVar3;
  int64_t lVar4;
  int64_t *plVar5;
  int64_t *plVar6;
  int64_t this_ptr;
  void* pVar7;
  int64_t *local_80;
  char local_78;
  int local_68;
  int local_40;
  
  lVar1 = *(int64_t *)(this_ptr + 0x48);
  if (lVar1 != 0) {
    local_40 = -1;
    while (local_40 = local_40 + 1, local_40 < *(int *)(lVar1 + 0xc)) {
      pvVar3 = _pthread_getspecific((void*)*(void*)(lVar1 + 0x10));
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0166b8c0();
    }
    FUN_0049cb70();
  }
  lVar1 = *(int64_t *)(this_ptr + 0x50);
  if (lVar1 != 0) {
    local_40 = -1;
    while( true ) {
      lVar4 = (int64_t)local_40;
      local_40 = local_40 + 1;
      if (*(int *)(lVar1 + 0xc) <= local_40) break;
      plVar5 = *(int64_t **)(*(int64_t *)(lVar1 + 0x10) + 8 + lVar4 * 8);
      pvVar3 = _pthread_getspecific((void*)*(int64_t *)(lVar1 + 0x10));
      if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
        plVar5 = (int64_t *)plVar5[(uint64_t)(*(uint *)(lVar4 + 0x154) & 1) + 4];
      }
      (**(code **)(*plVar5 + 0x3a0))();
    }
    FUN_0049cc10();
    lVar1 = *(int64_t *)(this_ptr + 0x50);
    if (lVar1 != 0) {
      if (0 < *(int *)(lVar1 + 0xc)) {
        pVar7 = 0;
        do {
          plVar5 = local_80;
          pvVar3 = _pthread_getspecific(pVar7);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0164fea0();
          if (local_78 == '\0') {
            if (local_80 != (int64_t *)0x0) {
              FUN_00d50b00();
              goto LAB_01538620;
            }
          }
          else if (local_80 != (int64_t *)0x0) {
LAB_01538620:
            local_78 = '\0';
            local_80 = (int64_t *)0x0;
            local_68 = -1;
            while( true ) {
              lVar4 = (int64_t)local_68;
              local_68 = local_68 + 1;
              if (*(int *)((int64_t)plVar5 + 0xc) <= local_68) break;
              lVar2 = plVar5[2];
              local_80 = *(int64_t **)(lVar2 + 8 + lVar4 * 8);
              pvVar3 = _pthread_getspecific((void*)lVar2);
              plVar6 = local_80;
              if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
                plVar6 = (int64_t *)local_80[(uint64_t)(*(uint *)(lVar4 + 0x154) & 1) + 4];
              }
              (**(code **)(*plVar6 + 0x368))();
            }
            FUN_00277f20();
            FUN_00d50b20();
          }
          pVar7 = pVar7 + 1;
        } while ((int)pVar7 < *(int *)(lVar1 + 0xc));
      }
      FUN_0049cc10();
    }
  }
  return;
}

