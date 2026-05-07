// Function: FUN_01c5c620
// Address: 01c5c620
// Size: 822 bytes
// Class: Unknown

void FUN_01c5c620(void* param_1)

{
  int64_t lVar1;
  int iVar2;
  void *pvVar3;
  int64_t lVar4;
  int64_t lVar5;
  int64_t this_ptr;
  int64_t unaff_R12;
  int64_t local_80;
  char local_78;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  lVar1 = *(int64_t *)(this_ptr + 0x198);
  if (lVar1 == 0) {
    unaff_R12 = *(int64_t *)(this_ptr + 0x1a8);
    if (unaff_R12 != 0) {
      FUN_00d50b00();
    }
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012cade0();
    pvVar3 = _pthread_getspecific(param_1);
    lVar5 = local_80;
    if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
      lVar5 = *(int64_t *)(local_80 + 0x20 + (uint64_t)(*(uint *)(lVar4 + 0x154) & 1) * 8);
    }
    FUN_01505900();
    lVar4 = local_40;
  }
  else {
    FUN_00d50b00();
    lVar5 = *(int64_t *)(this_ptr + 0x198);
    if (lVar5 != 0) {
      FUN_00d50b00();
    }
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0132d610();
    lVar4 = local_40;
  }
  local_40 = lVar4;
  if (local_38 == '\0') {
    if (((lVar4 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if (lVar1 == 0) {
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    if (unaff_R12 != 0) {
      FUN_00d50b20();
    }
  }
  else {
    if (lVar5 != 0) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  iVar2 = FUN_016c2e90();
  if (iVar2 < 2) {
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_016c1150();
  }
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_016f1a80();
  if (*(int64_t *)(this_ptr + 0x198) != 0) {
    FUN_00d50b00();
    FUN_00d50b20();
    FUN_00d403d0();
    lVar1 = g_027ebe30;
    if (g_027ebe30 != 0) {
      FUN_00d50b00();
    }
    local_58 = '\0';
    local_50 = 0;
    local_48 = '\0';
    local_60 = lVar4;
    FUN_00d40470(&local_50,&local_60,3,3);
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  return;
}

