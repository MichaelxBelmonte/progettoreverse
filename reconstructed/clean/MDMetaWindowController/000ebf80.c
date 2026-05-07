// Function: FUN_000ebf80
// Address: 000ebf80
// Size: 794 bytes
// Class: MDMetaWindowController

void FUN_000ebf80(void* param_1)

{
  void *pvVar1;
  int64_t lVar2;
  int64_t *arg1;
  int64_t this_ptr;
  int64_t lVar3;
  bool bVar4;
  int64_t local_a8;
  char local_a0;
  int64_t local_98;
  char local_90;
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
  
  lVar3 = *arg1;
  lVar2 = *(int64_t *)(this_ptr + 0xc0);
  if (lVar3 == lVar2) {
    return;
  }
  if (lVar2 == 0) {
    lVar2 = 0;
    if (lVar3 != 0) goto LAB_000ebfed;
  }
  else {
    if (*(int64_t *)(this_ptr + 0xa8) != 0) {
      *(void*)(this_ptr + 0xa8) = 0;
      FUN_00d50b20();
      lVar3 = *arg1;
      lVar2 = *(int64_t *)(this_ptr + 0xc0);
    }
    if (lVar2 != lVar3) {
LAB_000ebfed:
      if (lVar3 != 0) {
        FUN_00d50b00();
      }
      *(int64_t *)(this_ptr + 0xc0) = lVar3;
      bVar4 = lVar2 != 0;
      lVar2 = lVar3;
      if (bVar4) {
        FUN_00d50b20();
        lVar2 = *(int64_t *)(this_ptr + 0xc0);
      }
    }
  }
  if (lVar2 == 0) goto LAB_000ec27b;
  FUN_00d50b00();
  local_a8 = g_026defd0;
  if (g_026defd0 != 0) {
    FUN_00d50b00();
  }
  local_a0 = '\x01';
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
  FUN_000be210();
  FUN_00e86210();
  local_98 = g_026dc288;
  if (g_026dc288 != 0) {
    FUN_00d50b00();
  }
  local_90 = '\x01';
  FUN_00c841b0();
  local_38 = local_78;
  local_30 = 0;
  if (local_70 == '\0') {
    if (local_78 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_70 = '\0';
  }
  local_30 = '\x01';
  local_80 = '\0';
  local_88 = 0;
  FUN_000bfbc0(&local_48,&local_a8,0xa0,&local_38);
  lVar3 = *(int64_t *)(this_ptr + 0xa8);
  lVar2 = lVar3;
  if (lVar3 != local_68) {
    if (local_60 == '\0') {
      if (local_68 == 0) {
        lVar2 = 0;
        goto LAB_000ec188;
      }
      FUN_00d50b00();
      lVar3 = *(int64_t *)(this_ptr + 0xa8);
      *(int64_t *)(this_ptr + 0xa8) = local_68;
      lVar2 = local_68;
    }
    else {
      local_60 = '\0';
      lVar2 = local_68;
LAB_000ec188:
      *(int64_t *)(this_ptr + 0xa8) = lVar2;
    }
    if (lVar3 != 0) {
      FUN_00d50b20();
      lVar2 = local_68;
    }
  }
  if ((local_60 != '\0') && (lVar2 != 0)) {
    FUN_00d50b20();
  }
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  if ((local_90 != '\0') && (local_98 != 0)) {
    FUN_00d50b20();
  }
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if ((local_a0 != '\0') && (local_a8 != 0)) {
    FUN_00d50b20();
  }
  if (this_ptr != 0) {
    FUN_00d50b20();
  }
LAB_000ec27b:
  FUN_000ea330();
  return;
}

