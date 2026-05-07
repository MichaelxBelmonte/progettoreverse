// Function: FUN_01308ea0
// Address: 01308ea0
// Size: 2766 bytes
// Class: Unknown

void FUN_01308ea0(int64_t *param_1)

{
  int64_t *plVar1;
  int64_t lVar2;
  bool bVar3;
  void *pvVar4;
  int64_t lVar5;
  int64_t lVar6;
  int64_t lVar7;
  int64_t *plVar8;
  void* pVar9;
  int iVar10;
  int64_t *this_ptr;
  int local_a8;
  int64_t *local_68;
  char local_60;
  int local_50;
  
  lVar6 = this_ptr[0x1e];
  pvVar4 = _pthread_getspecific((void*)param_1);
  if (pvVar4 != (void *)0x0) {
    lVar6 = this_ptr[0x1e];
    lVar5 = FUN_00e8b990();
    if (lVar5 != 0) {
      lVar6 = *(int64_t *)(lVar6 + 0x20 + (uint64_t)(*(uint *)(lVar5 + 0x154) & 1) * 8);
    }
  }
  pVar9 = (void*)param_1;
  plVar1 = *(int64_t **)(lVar6 + 0x118);
  if (plVar1 == (int64_t *)0x0) {
LAB_01308f7e:
    if ((int64_t *)this_ptr[0x20] != (int64_t *)0x0) {
      (**(code **)(*(int64_t *)this_ptr[0x20] + 0x6c0))();
    }
  }
  else {
    FUN_00d50b00();
    if ((int64_t *)this_ptr[0x20] != (int64_t *)0x0) {
      (**(code **)(*(int64_t *)this_ptr[0x20] + 0x6b0))();
      if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      pVar9 = (void*)param_1;
      if (local_68 == plVar1) goto LAB_01308f7e;
    }
    pvVar4 = _pthread_getspecific((void*)param_1);
    plVar8 = plVar1;
    if ((pvVar4 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
      param_1 = plVar1;
      plVar8 = (int64_t *)plVar1[(uint64_t)(*(uint *)(lVar6 + 0x154) & 1) + 4];
    }
    pVar9 = (void*)param_1;
    (**(code **)(*plVar8 + 0x398))();
    if ((local_60 == '\0') && (local_68 != (int64_t *)0x0)) {
      FUN_00d50b00();
    }
    pvVar4 = _pthread_getspecific(pVar9);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e57e0();
    FUN_00b335a0();
    FUN_00b335d0();
    (**(code **)(*local_68 + 0x398))();
    (**(code **)(*this_ptr + 0x3a8))();
    lVar6 = *local_68;
    (**(code **)(lVar6 + 0x3a0))();
    pVar9 = (void*)lVar6;
    FUN_00d50b00();
    FUN_012dd9b0();
    if (this_ptr != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    (**(code **)(*local_68 + 0x368))();
    FUN_00ca0840();
    (**(code **)(*local_68 + 0x6c0))();
    FUN_00d50b20();
  }
  pvVar4 = _pthread_getspecific(pVar9);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e7d10();
  if (local_60 == '\0') {
    if (local_68 != (int64_t *)0x0) {
      FUN_00d50b00();
      goto LAB_01309220;
    }
LAB_013092a6:
    bVar3 = true;
    lVar6 = this_ptr[0x21];
joined_r0x013092b6:
    if (lVar6 != 0) {
      FUN_013e9e30();
    }
  }
  else {
    if (local_68 == (int64_t *)0x0) goto LAB_013092a6;
LAB_01309220:
    if (this_ptr[0x21] != 0) {
      FUN_013e9df0();
      if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      bVar3 = false;
      lVar6 = this_ptr[0x21];
      goto joined_r0x013092b6;
    }
    plVar8 = (int64_t *)FUN_00e8fc40();
    FUN_01312e30();
    (**(code **)(*plVar8 + 0x18))();
    pvVar4 = _pthread_getspecific(pVar9);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_011f0ad0();
    FUN_00b33530();
    pvVar4 = _pthread_getspecific(pVar9);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_011f0b20();
    FUN_00b335a0();
    FUN_00b335d0();
    (**(code **)(*plVar8 + 0x398))();
    (**(code **)(*this_ptr + 0x3a8))();
    lVar6 = *plVar8;
    (**(code **)(lVar6 + 0x3a0))();
    pVar9 = (void*)lVar6;
    FUN_00d50b00();
    FUN_012dd9b0();
    if (this_ptr != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    FUN_013e9010();
    (**(code **)(*plVar8 + 0x368))();
    FUN_00ca0840();
    FUN_013e9e30();
    FUN_00d50b20();
    bVar3 = false;
  }
  pvVar4 = _pthread_getspecific(pVar9);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e6160();
  if (local_60 == '\0') {
    if (local_68 == (int64_t *)0x0) goto LAB_013098ec;
    FUN_00d50b00();
  }
  else if (local_68 == (int64_t *)0x0) goto LAB_013098ec;
  local_50 = -1;
  while( true ) {
    lVar6 = (int64_t)local_50;
    local_50 = local_50 + 1;
    if (*(int *)((int64_t)local_68 + 0xc) <= local_50) break;
    lVar5 = local_68[2];
    lVar6 = *(int64_t *)(lVar5 + 8 + lVar6 * 8);
    lVar2 = this_ptr[0x1f];
    if (lVar2 == 0) {
LAB_013096fc:
      pVar9 = (void*)lVar5;
      plVar8 = (int64_t *)FUN_00e8fc40();
      FUN_011ce1f0();
      (**(code **)(*plVar8 + 0x18))();
      pvVar4 = _pthread_getspecific(pVar9);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012e57e0();
      FUN_00b33530();
      pvVar4 = _pthread_getspecific(pVar9);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012e57e0();
      FUN_00b335a0();
      (**(code **)(*this_ptr + 0x3a8))();
      (**(code **)(*plVar8 + 0x3a0))();
      FUN_00b335d0();
      (**(code **)(*plVar8 + 0x398))();
      FUN_00d50b00();
      FUN_012dd9b0();
      if (this_ptr != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      FUN_01308480();
      (**(code **)(*plVar8 + 0x368))();
      FUN_00ca0840();
      FUN_01308ea0();
      FUN_00d50b20();
    }
    else {
      local_a8 = -1;
      do {
        while( true ) {
          lVar5 = 0;
          lVar7 = (int64_t)local_a8;
          local_a8 = local_a8 + 1;
          if (*(int *)(lVar2 + 0xc) <= local_a8) {
            FUN_01312d90();
            goto LAB_013096fc;
          }
          lVar5 = *(int64_t *)(*(int64_t *)(*(int64_t *)(lVar2 + 0x10) + 8 + lVar7 * 8) + 0xf0);
          if (lVar5 == 0) break;
          FUN_00d50b00();
          FUN_00d50b20();
          if (lVar5 == lVar6) goto LAB_01309570;
        }
      } while (lVar6 != 0);
LAB_01309570:
      FUN_01312d90();
    }
  }
  FUN_000be170();
  FUN_00d50b20();
LAB_013098ec:
  lVar6 = this_ptr[0x1f];
  if (lVar6 != 0) {
    for (iVar10 = 0; iVar10 < *(int *)(lVar6 + 0xc); iVar10 = iVar10 + 1) {
      FUN_01308ea0();
    }
    FUN_01312d90();
  }
  if (!bVar3) {
    FUN_00d50b20();
  }
  if (plVar1 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}

