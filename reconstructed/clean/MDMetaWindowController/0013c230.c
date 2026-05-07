// Function: FUN_0013c230
// Address: 0013c230
// Size: 713 bytes
// Class: MDMetaWindowController

void FUN_0013c230(void* param_1)

{
  void *pvVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t *arg1;
  int64_t this_ptr;
  bool bVar4;
  int64_t local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  int64_t local_68;
  char local_60;
  int64_t local_48;
  char local_40;
  int64_t local_38;
  char local_30;
  
  lVar2 = *(int64_t *)(this_ptr + 200);
  lVar3 = *arg1;
  if (lVar2 == lVar3) {
    return;
  }
  if (lVar2 == 0) {
    lVar2 = 0;
    if (lVar3 != 0) goto LAB_0013c29a;
  }
  else {
    if (*(int64_t *)(this_ptr + 0x88) != 0) {
      *(void*)(this_ptr + 0x88) = 0;
      FUN_00d50b20();
      lVar3 = *arg1;
      lVar2 = *(int64_t *)(this_ptr + 200);
    }
    if (lVar2 != lVar3) {
LAB_0013c29a:
      if (lVar3 != 0) {
        FUN_00d50b00();
      }
      *(int64_t *)(this_ptr + 200) = lVar3;
      bVar4 = lVar2 != 0;
      lVar2 = lVar3;
      if (bVar4) {
        FUN_00d50b20();
        lVar2 = *(int64_t *)(this_ptr + 200);
      }
    }
  }
  if (lVar2 == 0) {
    return;
  }
  if (*(int64_t *)(this_ptr + 0xb8) == 0) {
    return;
  }
  pvVar1 = _pthread_getspecific(param_1);
  if (pvVar1 != (void *)0x0) {
    FUN_00e8b990();
  }
  lVar2 = FUN_00e8b990();
  if (lVar2 == 0) {
    return;
  }
  FUN_00d50b00();
  local_88 = g_026e37d0;
  if (g_026e37d0 != 0) {
    FUN_00d50b00();
  }
  local_80 = '\x01';
  pvVar1 = _pthread_getspecific(param_1);
  if (pvVar1 != (void *)0x0) {
    FUN_00e8b990();
  }
  local_48 = FUN_00e8b990();
  local_40 = 0;
  if (local_48 != 0) {
    FUN_00d50b00();
  }
  local_40 = '\x01';
  local_78 = 0;
  local_70 = '\0';
  local_30 = 0;
  lVar2 = *(int64_t *)(this_ptr + 200);
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  local_30 = '\x01';
  local_38 = lVar2;
  FUN_000bfbc0(&local_48,&local_88,0x20,&local_78);
  lVar2 = *(int64_t *)(this_ptr + 0x88);
  lVar3 = lVar2;
  if (lVar2 == local_68) goto LAB_0013c471;
  if (local_60 == '\0') {
    if (local_68 == 0) {
      lVar3 = 0;
      goto LAB_0013c426;
    }
    FUN_00d50b00();
    lVar2 = *(int64_t *)(this_ptr + 0x88);
    *(int64_t *)(this_ptr + 0x88) = local_68;
    lVar3 = local_68;
  }
  else {
    local_60 = '\0';
    lVar3 = local_68;
LAB_0013c426:
    *(int64_t *)(this_ptr + 0x88) = lVar3;
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
    lVar3 = local_68;
  }
LAB_0013c471:
  if ((local_60 != '\0') && (lVar3 != 0)) {
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  if (this_ptr != 0) {
    FUN_00d50b20();
  }
  return;
}

