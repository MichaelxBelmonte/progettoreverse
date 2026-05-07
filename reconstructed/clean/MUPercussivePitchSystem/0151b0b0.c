// Function: FUN_0151b0b0
// Address: 0151b0b0
// Size: 900 bytes
// Class: MUPercussivePitchSystem

void FUN_0151b0b0(int64_t param_1)

{
  byte bVar1;
  int64_t lVar2;
  int64_t lVar3;
  void *pvVar4;
  int64_t this_ptr;
  int64_t *plVar5;
  int iVar6;
  int64_t *local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  int local_40;
  
  lVar3 = local_58;
  FUN_0151a950();
  if (local_50 == '\0') {
    if (local_58 != 0) {
      FUN_00d50b00();
      goto LAB_0151b0f5;
    }
  }
  else if (local_58 != 0) {
LAB_0151b0f5:
    local_50 = '\0';
    local_58 = 0;
    local_40 = -1;
    while( true ) {
      lVar2 = (int64_t)local_40;
      local_40 = local_40 + 1;
      if (*(int *)(lVar3 + 0xc) <= local_40) break;
      local_58 = *(int64_t *)(*(int64_t *)(lVar3 + 0x10) + 8 + lVar2 * 8);
      pvVar4 = _pthread_getspecific((void*)*(int64_t *)(lVar3 + 0x10));
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012e5b20();
    }
    FUN_000be170();
    FUN_00d50b20();
    param_1 = lVar3;
  }
  lVar3 = FUN_00e8b990();
  if (lVar3 != 0) {
    FUN_00e8b990();
    FUN_00cb1f10();
    if (local_58 == 0) {
      bVar1 = 1;
    }
    else {
      FUN_00e8b990();
      FUN_00cb1f10();
      bVar1 = FUN_00db6490();
      if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      bVar1 = bVar1 ^ 1;
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if (bVar1 == 0) goto LAB_0151b3d5;
  }
  FUN_0151a950();
  if (local_50 == '\0') {
    if (local_58 == 0) goto LAB_0151b3d5;
    FUN_00d50b00();
  }
  else if (local_58 == 0) goto LAB_0151b3d5;
  if (0 < *(int *)(local_58 + 0xc)) {
    iVar6 = 0;
    do {
      pvVar4 = _pthread_getspecific((void*)param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012f51f0();
      if (local_60 == '\0') {
        if (local_68 != (int64_t *)0x0) {
          FUN_00d50b00();
          goto LAB_0151b370;
        }
      }
      else if (local_68 != (int64_t *)0x0) {
LAB_0151b370:
        pvVar4 = _pthread_getspecific((void*)param_1);
        plVar5 = local_68;
        if ((pvVar4 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
          plVar5 = (int64_t *)local_68[(uint64_t)(*(uint *)(lVar3 + 0x154) & 1) + 4];
        }
        (**(code **)(*plVar5 + 0x370))();
        FUN_00d50b20();
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < *(int *)(local_58 + 0xc));
  }
  FUN_000be170();
  FUN_00d50b20();
LAB_0151b3d5:
  lVar3 = *(int64_t *)(this_ptr + 0x48);
  if (lVar3 != 0) {
    for (iVar6 = 0; iVar6 < *(int *)(lVar3 + 0xc); iVar6 = iVar6 + 1) {
      pvVar4 = _pthread_getspecific((void*)param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0151b0b0();
    }
    FUN_0131c770();
  }
  return;
}

