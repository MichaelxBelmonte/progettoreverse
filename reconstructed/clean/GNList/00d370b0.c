// Function: FUN_00d370b0
// Address: 00d370b0
// Size: 1058 bytes
// Class: GNList
// === GNList properties ===
//   GNInt           _archiveVersion
//   bool            _awakesObjectsAfterDecoding
//   bool            _isCancelled
//   GNInt           _currentObjectGraphIdx
//   GNInt           _predictedDecodedValuesIndex


void FUN_00d370b0(void *param_1,uint64_t param_2,size_t param_3)

{
  int iVar1;
  int64_t *plVar2;
  void *pvVar3;
  int64_t lVar4;
  char cVar5;
  uint64_t uVar6;
  void *pvVar7;
  void*arg1;
  int64_t this_ptr;
  void *local_40;
  char local_38;
  
  FUN_00d50cd0();
  cVar5 = (**(code **)(*(int64_t *)*arg1 + 0x380))();
  lVar4 = g_0277d7b8;
  if (cVar5 == '\0') {
    uVar6 = (**(code **)(*(int64_t *)*arg1 + 0x480))();
    *(void*)(this_ptr + 0x10) = uVar6;
    *(void*)(this_ptr + 0xc) = 1;
    uVar6 = (**(code **)(*(int64_t *)*arg1 + 0x480))();
    *(void*)(this_ptr + 0x18) = uVar6;
    *(void*)(this_ptr + 0xd) = 1;
    (**(code **)(*(int64_t *)*arg1 + 0x470))();
    pvVar3 = *(void **)(this_ptr + 0x20);
    pvVar7 = pvVar3;
    if (pvVar3 == local_40) goto LAB_00d372d8;
    pvVar7 = local_40;
    if (local_38 == '\0') {
      if (local_40 == (void *)0x0) {
        pvVar7 = (void *)0x0;
        goto LAB_00d37264;
      }
      FUN_00d50b00();
      pvVar3 = *(void **)(this_ptr + 0x20);
      *(void **)(this_ptr + 0x20) = local_40;
    }
    else {
      local_38 = '\0';
LAB_00d37264:
      *(void **)(this_ptr + 0x20) = pvVar7;
    }
    if (pvVar3 != (void *)0x0) {
      FUN_00d50b20();
      pvVar7 = local_40;
    }
LAB_00d372d8:
    if ((local_38 != '\0') && (pvVar7 != (void *)0x0)) {
      FUN_00d50b20();
    }
    (**(code **)(*(int64_t *)*arg1 + 0x470))();
    pvVar3 = *(void **)(this_ptr + 0x28);
    if (pvVar3 != local_40) {
      if (local_38 == '\0') {
        if (local_40 == (void *)0x0) {
          *(void*)(this_ptr + 0x28) = 0;
        }
        else {
          FUN_00d50b00();
          pvVar3 = *(void **)(this_ptr + 0x28);
          *(void **)(this_ptr + 0x28) = local_40;
        }
      }
      else {
        local_38 = '\0';
        *(void **)(this_ptr + 0x28) = local_40;
      }
      if (pvVar3 != (void *)0x0) {
        FUN_00d50b20();
      }
    }
    if (local_38 == '\0') {
      return;
    }
    if (local_40 == (void *)0x0) {
      return;
    }
    FUN_00d50b20();
    return;
  }
  plVar2 = (int64_t *)*arg1;
  if (g_0277d7b8 != 0) {
    FUN_00d50b00();
  }
  (**(code **)(*plVar2 + 0x580))();
  if (local_38 == '\0') {
    if (local_40 != (void *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  iVar1 = *(int *)((int64_t)local_40 + 0x18);
  FUN_00c8e340();
  *(void*)(*(int64_t *)((int64_t)local_40 + 0x10) + (int64_t)iVar1) = 0;
  iVar1 = *(int *)((int64_t)local_40 + 0x18);
  uVar6 = FUN_00e83010();
  _memcpy(param_1,(void *)(int64_t)iVar1,param_3);
  *(void*)(this_ptr + 0x10) = uVar6;
  *(void*)(this_ptr + 0xc) = 1;
  lVar4 = g_0277d7c0;
  plVar2 = (int64_t *)*arg1;
  if (g_0277d7c0 != 0) {
    FUN_00d50b00();
  }
  (**(code **)(*plVar2 + 0x578))();
  pvVar3 = *(void **)(this_ptr + 0x20);
  pvVar7 = pvVar3;
  if (pvVar3 == local_40) goto LAB_00d37382;
  pvVar7 = local_40;
  if (local_38 == '\0') {
    if (local_40 == (void *)0x0) {
      pvVar7 = (void *)0x0;
      goto LAB_00d371f4;
    }
    FUN_00d50b00();
    param_1 = *(void **)(this_ptr + 0x20);
    *(void **)(this_ptr + 0x20) = local_40;
  }
  else {
    local_38 = '\0';
LAB_00d371f4:
    *(void **)(this_ptr + 0x20) = pvVar7;
    param_1 = pvVar3;
  }
  if (param_1 != (void *)0x0) {
    FUN_00d50b20();
    pvVar7 = local_40;
  }
LAB_00d37382:
  if ((local_38 != '\0') && (pvVar7 != (void *)0x0)) {
    FUN_00d50b20();
  }
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  lVar4 = g_0277d7c8;
  plVar2 = (int64_t *)*arg1;
  if (g_0277d7c8 != 0) {
    FUN_00d50b00();
  }
  (**(code **)(*plVar2 + 0x580))();
  if ((local_38 != '\0') && (local_40 != (void *)0x0)) {
    FUN_00d50b20();
  }
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  iVar1 = *(int *)((int64_t)local_40 + 0x18);
  FUN_00c8e340();
  *(void*)(*(int64_t *)((int64_t)local_40 + 0x10) + (int64_t)iVar1) = 0;
  iVar1 = *(int *)((int64_t)local_40 + 0x18);
  FUN_00e83010();
  _memcpy(param_1,(void *)(int64_t)iVar1,param_3);
  FUN_00d376b0();
  *(void*)(this_ptr + 0xd) = 1;
  FUN_00d50b20();
  return;
}

