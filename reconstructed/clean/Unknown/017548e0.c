// Function: FUN_017548e0
// Address: 017548e0
// Size: 1415 bytes
// Class: Unknown

void FUN_017548e0(void* param_1)

{
  char cVar1;
  void *pvVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t lVar5;
  char unaff_SIL;
  int64_t this_ptr;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  cVar1 = FUN_0173ed60();
  if (cVar1 != '\0') {
    FUN_017517b0();
    if ((local_38 == '\0') && (local_40 != 0)) {
      FUN_00d50b00();
    }
    lVar4 = **(int64_t **)(local_40 + 0x10);
    if (lVar4 != 0) {
      FUN_00d50b00();
    }
    lVar5 = *(int64_t *)(this_ptr + 0x58);
    if (*(int *)(lVar4 + 0xc) == 0) {
      if (lVar5 != 0) {
        FUN_00d50b00();
      }
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_00d8ede0();
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      FUN_01735c40();
      if (local_40 != 0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if (lVar5 != 0) {
        FUN_00d50b20();
      }
      lVar4 = *(int64_t *)(this_ptr + 0x58);
      if (lVar4 != 0) {
        FUN_00d50b00();
      }
      pvVar2 = _pthread_getspecific(param_1);
      lVar5 = g_027e3c28;
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
        lVar5 = g_027e3c28;
      }
      g_027e3c28 = lVar5;
      if (lVar5 != 0) {
        FUN_00d50b00();
      }
      FUN_01735120();
      if (lVar5 != 0) {
        FUN_00d50b20();
      }
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
    }
    else {
      if (lVar5 != 0) {
        FUN_00d50b00();
      }
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_017aa5e0();
      pvVar2 = _pthread_getspecific(param_1);
      lVar4 = local_50;
      if ((pvVar2 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
        lVar4 = *(int64_t *)(local_50 + 0x20 + (uint64_t)(*(uint *)(lVar3 + 0x154) & 1) * 8);
      }
      lVar4 = *(int64_t *)(lVar4 + 0x58);
      if (lVar4 != 0) {
        FUN_00d50b00();
      }
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01736d70();
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      FUN_01735c40();
      if (local_40 != 0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      if (lVar5 != 0) {
        FUN_00d50b20();
      }
      lVar4 = *(int64_t *)(this_ptr + 0x58);
      if (lVar4 != 0) {
        FUN_00d50b00();
      }
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_017aa5e0();
      pvVar2 = _pthread_getspecific(param_1);
      lVar5 = local_50;
      if ((pvVar2 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
        lVar5 = *(int64_t *)(local_50 + 0x20 + (uint64_t)(*(uint *)(lVar3 + 0x154) & 1) * 8);
      }
      lVar5 = *(int64_t *)(lVar5 + 0x58);
      if (lVar5 != 0) {
        FUN_00d50b00();
      }
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01736da0();
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      FUN_01735120();
      if (local_40 != 0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if (lVar5 != 0) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
    }
    FUN_00d50b20();
    FUN_00d50b20();
  }
  if (unaff_SIL == '\0') {
    FUN_017551c0();
  }
  FUN_0174bd90();
  return;
}

