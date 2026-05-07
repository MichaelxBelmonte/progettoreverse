// Function: FUN_01a7c220
// Address: 01a7c220
// Size: 2214 bytes
// Class: Unknown

void* FUN_01a7c220(uint64_t param_1)

{
  int64_t lVar1;
  bool bVar2;
  int iVar3;
  void *pvVar4;
  int64_t *plVar5;
  int64_t lVar6;
  void* pVar7;
  int64_t *in_RCX;
  int64_t *plVar8;
  void*this_ptr;
  uint64_t uVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  int64_t local_a8;
  char local_a0;
  int64_t local_98;
  char local_90;
  int64_t *local_40;
  char local_38;
  
  pvVar4 = _pthread_getspecific((void*)in_RCX);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar9 = FUN_0128e4b0(param_1);
  pvVar4 = _pthread_getspecific((void*)in_RCX);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0126e7e0();
  plVar5 = local_40;
  if (local_38 == '\0') {
    if (local_40 == (int64_t *)0x0) goto LAB_01a7c301;
    FUN_00d50b00();
  }
  else if (local_40 == (int64_t *)0x0) {
LAB_01a7c301:
    plVar5 = (int64_t *)FUN_011114e0();
    (**(code **)(*plVar5 + 0x18))();
    pvVar4 = _pthread_getspecific((void*)in_RCX);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013ef430(g_02391038,g_02391038);
    pvVar4 = _pthread_getspecific((void*)in_RCX);
    plVar8 = plVar5;
    if ((pvVar4 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
      plVar8 = (int64_t *)plVar5[(uint64_t)(*(uint *)(lVar6 + 0x154) & 1) + 4];
    }
    (**(code **)(*plVar8 + 0x418))(0,0);
    if ((local_a0 != '\0') && (local_a8 != 0)) {
      FUN_00d50b20();
    }
    pvVar4 = _pthread_getspecific((void*)in_RCX);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    pvVar4 = _pthread_getspecific((void*)in_RCX);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01264170();
    FUN_0128e4b0();
    pvVar4 = _pthread_getspecific((void*)in_RCX);
    plVar8 = plVar5;
    if ((pvVar4 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
      plVar8 = (int64_t *)plVar5[(uint64_t)(*(uint *)(lVar6 + 0x154) & 1) + 4];
    }
    (**(code **)(*plVar8 + 0x418))();
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
  }
  pvVar4 = _pthread_getspecific((void*)in_RCX);
  plVar8 = plVar5;
  if ((pvVar4 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
    plVar8 = (int64_t *)plVar5[(uint64_t)(*(uint *)(lVar6 + 0x154) & 1) + 4];
  }
  dVar10 = (double)(**(code **)(*plVar8 + 0x380))(uVar9);
  pvVar4 = _pthread_getspecific((void*)in_RCX);
  plVar8 = plVar5;
  if ((pvVar4 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
    plVar8 = (int64_t *)plVar5[(uint64_t)(*(uint *)(lVar6 + 0x154) & 1) + 4];
  }
  (**(code **)(*plVar8 + 0x378))();
  if ((local_38 == '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  pvVar4 = _pthread_getspecific((void*)in_RCX);
  plVar8 = local_40;
  if ((pvVar4 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
    in_RCX = local_40;
    plVar8 = (int64_t *)local_40[(uint64_t)(*(uint *)(lVar6 + 0x154) & 1) + 4];
  }
  pVar7 = (void*)in_RCX;
  dVar11 = (double)(**(code **)(*plVar8 + 0x380))(dVar10);
  pvVar4 = _pthread_getspecific(pVar7);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  dVar12 = (double)FUN_01264170();
  if ((((0.0 < dVar11) && (dVar11 < dVar12)) && (0.0 < dVar10)) && (dVar10 < dVar12)) {
    pvVar4 = _pthread_getspecific(pVar7);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    iVar3 = FUN_013f3690(dVar11);
    pvVar4 = _pthread_getspecific(pVar7);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013f2b00();
    lVar6 = *(int64_t *)(local_40[2] + (int64_t)iVar3 * 8);
    if (lVar6 != 0) {
      FUN_00d50b00();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    pvVar4 = _pthread_getspecific(pVar7);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013f2b00();
    lVar1 = *(int64_t *)(local_40[2] + 8 + (int64_t)iVar3 * 8);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    pvVar4 = _pthread_getspecific(pVar7);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    dVar12 = (double)FUN_013faed0();
    if (dVar11 <= dVar12 + g_0241c3a0) {
LAB_01a7c896:
      bVar2 = false;
    }
    else {
      pvVar4 = _pthread_getspecific(pVar7);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar12 = (double)FUN_013faed0();
      if (dVar12 + g_0241c3a8 <= dVar11) goto LAB_01a7c896;
      pvVar4 = _pthread_getspecific(pVar7);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar12 = (double)FUN_013faf20();
      if (dVar10 <= dVar12 + g_0241c3a0) goto LAB_01a7c896;
      pvVar4 = _pthread_getspecific(pVar7);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar12 = (double)FUN_013faf20();
      if (dVar12 + g_0241c3a8 <= dVar10) goto LAB_01a7c896;
      bVar2 = true;
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if (lVar6 != 0) {
      FUN_00d50b20();
    }
    if (bVar2) {
      pvVar4 = _pthread_getspecific(pVar7);
      plVar8 = plVar5;
      if ((pvVar4 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
        plVar8 = (int64_t *)plVar5[(uint64_t)(*(uint *)(lVar6 + 0x154) & 1) + 4];
      }
      (**(code **)(*plVar8 + 0x410))(dVar11,dVar10);
      if (local_40 == (int64_t *)0x0) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
        if (local_38 == '\0') {
          FUN_00d50b00();
          bVar2 = true;
        }
      }
      pvVar4 = _pthread_getspecific(pVar7);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0126de80();
      pvVar4 = _pthread_getspecific(pVar7);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0126dd90();
      pvVar4 = _pthread_getspecific(pVar7);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0125a5f0();
      *(void*)(this_ptr + 1) = 0;
      plVar8 = (int64_t *)0x0;
      if (bVar2) {
        plVar8 = local_40;
      }
      if (local_40 != (int64_t *)0x0 && !bVar2) {
        FUN_00d50b00();
        plVar8 = local_40;
      }
      goto LAB_01a7c8f5;
    }
  }
  *(void*)(this_ptr + 1) = 0;
  plVar8 = (int64_t *)0x0;
LAB_01a7c8f5:
  *this_ptr = plVar8;
  *(void*)(this_ptr + 1) = 1;
  if (local_40 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (plVar5 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return this_ptr;
}

