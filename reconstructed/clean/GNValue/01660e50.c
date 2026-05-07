// Function: FUN_01660e50
// Address: 01660e50
// Size: 1110 bytes
// Class: GNValue

void FUN_01660e50(int64_t param_1)

{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t lVar3;
  char cVar4;
  void *pvVar5;
  int64_t lVar6;
  void* pVar7;
  int iVar8;
  int64_t *arg1;
  int64_t this_ptr;
  int64_t *plVar9;
  int64_t local_80;
  char local_78;
  
  lVar2 = *(int64_t *)(this_ptr + 0xf0);
  if (lVar2 == 0) {
    if (*arg1 != 0) goto LAB_01660f76;
  }
  else {
    FUN_00d50b00();
    if (lVar2 == *arg1) goto LAB_01661291;
    FUN_01666660();
    pvVar5 = _pthread_getspecific((void*)param_1);
    if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
      param_1 = lVar2;
    }
    FUN_0164ced0();
    pvVar5 = _pthread_getspecific((void*)param_1);
    if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
      param_1 = lVar2;
    }
    FUN_0164cea0();
    *(void*)(this_ptr + 0x118) = 0x3f800000;
    FUN_016670f0();
    FUN_01667210();
LAB_01660f76:
    if (*arg1 != 0) {
      *(void*)(this_ptr + 200) = *(void*)(this_ptr + 0xc0);
      *(void*)(this_ptr + 0xd8) = *(void*)(this_ptr + 0xd0);
      *(void*)(this_ptr + 0xe4) = *(void*)(this_ptr + 0xe0);
      *(void*)(this_ptr + 0xe8) = 0;
      *(void*)(this_ptr + 0x106) = 0;
      pvVar5 = _pthread_getspecific((void*)param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      (**(code **)(*(int64_t *)(this_ptr + 0x90) + 0x10))();
      FUN_00d50b00();
      FUN_0164cea0();
      if ((int64_t *)(this_ptr + 0x90) != (int64_t *)0x0) {
        (**(code **)(*(int64_t *)(this_ptr + 0x90) + 0x10))();
        FUN_00d50b20();
      }
      pvVar5 = _pthread_getspecific((void*)param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_00e31390();
      FUN_0164ced0();
    }
    plVar1 = (int64_t *)(this_ptr + 0xf0);
    FUN_00d64850();
    lVar6 = *arg1;
    lVar3 = *plVar1;
    if (lVar3 != lVar6) {
      if (lVar6 != 0) {
        FUN_00d50b00();
      }
      *plVar1 = lVar6;
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
    }
    FUN_00d64910();
    if (*arg1 != 0) {
      pvVar5 = _pthread_getspecific((void*)param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0124df30();
      if ((local_78 != '\0') && (local_80 != 0)) {
        FUN_00d50b20();
      }
      if (local_80 == 0) {
        plVar9 = (int64_t *)*plVar1;
        pvVar5 = _pthread_getspecific((void*)param_1);
        if (pvVar5 != (void *)0x0) {
          plVar9 = (int64_t *)*plVar1;
          lVar6 = FUN_00e8b990();
          if (lVar6 != 0) {
            plVar9 = (int64_t *)plVar9[(uint64_t)(*(uint *)(lVar6 + 0x154) & 1) + 4];
          }
        }
        (**(code **)(*plVar9 + 0x3d0))();
      }
      FUN_01665fa0();
    }
    pVar7 = (void*)param_1;
    if (lVar2 != 0) {
      lVar6 = *(int64_t *)(this_ptr + 0xa8);
      if (lVar6 != 0) {
        for (iVar8 = 0; pVar7 = (void*)param_1, iVar8 < *(int *)(lVar6 + 0xc);
            iVar8 = iVar8 + 1) {
          pvVar5 = _pthread_getspecific(pVar7);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01652cd0();
        }
        FUN_0049cc10();
      }
      pvVar5 = _pthread_getspecific(pVar7);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_00d50130();
    }
    cVar4 = FUN_01733c10();
    if ((cVar4 == '\0') && (*(int64_t *)(this_ptr + 0xf0) != 0)) {
      FUN_016818b0();
    }
  }
  if (lVar2 == 0) {
    return;
  }
LAB_01661291:
  FUN_00d50b20();
  return;
}

