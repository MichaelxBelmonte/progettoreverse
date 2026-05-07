// Function: FUN_00223aa0
// Address: 00223aa0
// Size: 775 bytes
// Class: Unknown

void FUN_00223aa0(void* param_1)

{
  int64_t lVar1;
  void *pvVar2;
  int64_t lVar3;
  int64_t *arg1;
  int64_t this_ptr;
  int64_t local_a0;
  char local_98;
  int64_t local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  int64_t local_30;
  char local_28;
  
  lVar1 = *(int64_t *)(this_ptr + 0x180);
  lVar3 = *arg1;
  if (lVar1 == lVar3) {
    return;
  }
  if (lVar3 != 0) {
    FUN_00d50b00();
  }
  *(int64_t *)(this_ptr + 0x180) = lVar3;
  if (lVar1 != 0) {
    FUN_00d50b20();
    lVar3 = *(int64_t *)(this_ptr + 0x180);
  }
  if (lVar3 == 0) {
    if (*(int64_t *)(this_ptr + 0x110) == 0) {
      return;
    }
    *(void*)(this_ptr + 0x110) = 0;
    FUN_00d50b20();
    return;
  }
  FUN_00d50b00();
  local_a0 = g_026f6eb0;
  if (g_026f6eb0 != 0) {
    FUN_00d50b00();
  }
  local_98 = '\x01';
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  local_50 = FUN_00e8b990();
  local_48 = 0;
  if (local_50 != 0) {
    FUN_00d50b00();
  }
  local_48 = '\x01';
  FUN_000823a0();
  FUN_00e86210();
  local_90 = g_026f6eb8;
  if (g_026f6eb8 != 0) {
    FUN_00d50b00();
  }
  local_88 = '\x01';
  FUN_00c841b0();
  local_30 = local_80;
  local_28 = 0;
  if (local_78 == '\0') {
    if (local_80 != 0) {
      FUN_00d50b00();
    }
    lVar1 = *(int64_t *)(this_ptr + 0x180);
  }
  else {
    local_78 = '\0';
    lVar1 = *(int64_t *)(this_ptr + 0x180);
  }
  local_28 = '\x01';
  if (lVar1 != 0) {
    local_28 = '\x01';
    local_38 = 0;
    FUN_00d50b00();
  }
  local_38 = '\x01';
  local_40 = lVar1;
  FUN_000bfbc0(&local_50,&local_a0,0xa0,&local_30);
  lVar1 = *(int64_t *)(this_ptr + 0x110);
  lVar3 = lVar1;
  if (lVar1 == local_70) goto LAB_00223ced;
  if (local_68 == '\0') {
    if (local_70 == 0) {
      lVar3 = 0;
      goto LAB_00223ca2;
    }
    FUN_00d50b00();
    lVar1 = *(int64_t *)(this_ptr + 0x110);
    *(int64_t *)(this_ptr + 0x110) = local_70;
    lVar3 = local_70;
  }
  else {
    local_68 = '\0';
    lVar3 = local_70;
LAB_00223ca2:
    *(int64_t *)(this_ptr + 0x110) = lVar3;
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
    lVar3 = local_70;
  }
LAB_00223ced:
  if ((local_68 != '\0') && (lVar3 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_28 != '\0') && (local_30 != 0)) {
    FUN_00d50b20();
  }
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  if (this_ptr != 0) {
    FUN_00d50b20();
  }
  return;
}

