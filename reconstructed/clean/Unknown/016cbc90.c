// Function: FUN_016cbc90
// Address: 016cbc90
// Size: 1342 bytes
// Class: Unknown

void FUN_016cbc90(void* param_1)

{
  char cVar1;
  int iVar2;
  int64_t *plVar3;
  void *pvVar4;
  int64_t lVar5;
  int64_t *arg1;
  void*this_ptr;
  int64_t *plVar6;
  int64_t local_78;
  char local_70;
  int64_t local_58;
  char local_50;
  int64_t local_40;
  char local_38;
  
  if (*arg1 == 0) {
    FUN_016c0a70();
  }
  else {
    plVar3 = (int64_t *)FUN_00e8fc40();
    FUN_0119c6b0();
    (**(code **)(*plVar3 + 0x18))();
    pvVar4 = _pthread_getspecific(param_1);
    plVar6 = plVar3;
    if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
      plVar6 = (int64_t *)plVar3[(uint64_t)(*(uint *)(lVar5 + 0x154) & 1) + 4];
    }
    FUN_018f9710();
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    FUN_00d64850();
    lVar5 = plVar6[10];
    if (lVar5 != local_40) {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
      plVar6[10] = local_40;
      if (lVar5 != 0) {
        FUN_00d50b20();
      }
    }
    FUN_00d64910();
    if (local_40 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    cVar1 = FUN_01526740();
    if (cVar1 == '\0') {
      FUN_00e7bcc0();
    }
    else {
      FUN_00e7bcc0();
    }
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_019012b0();
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_019079b0();
    FUN_01909ea0();
    if (local_50 == '\0') {
      if (local_58 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_50 = '\0';
    }
    FUN_00d21140();
    if (local_58 != 0) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    pvVar4 = _pthread_getspecific(param_1);
    plVar6 = plVar3;
    if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
      plVar6 = (int64_t *)plVar3[(uint64_t)(*(uint *)(lVar5 + 0x154) & 1) + 4];
    }
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01525bc0();
    if (local_50 == '\0') {
      if (local_58 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_50 = '\0';
    }
    FUN_0165b470();
    if (local_58 != 0) {
      FUN_00d50b00();
    }
    FUN_00d64850();
    lVar5 = plVar6[0xb];
    if (lVar5 != local_58) {
      if (local_58 != 0) {
        FUN_00d50b00();
      }
      plVar6[0xb] = local_58;
      if (lVar5 != 0) {
        FUN_00d50b20();
      }
    }
    FUN_00d64910();
    if (local_58 != 0) {
      FUN_00d50b20();
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    pvVar4 = _pthread_getspecific(param_1);
    plVar6 = plVar3;
    if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
      plVar6 = (int64_t *)plVar3[(uint64_t)(*(uint *)(lVar5 + 0x154) & 1) + 4];
    }
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    iVar2 = FUN_01526750();
    if ((int)plVar6[7] != iVar2) {
      FUN_00d64850();
      *(int *)(plVar6 + 7) = iVar2;
      FUN_00d64910();
    }
    *this_ptr = plVar3;
    *(void*)(this_ptr + 1) = 1;
  }
  return;
}

