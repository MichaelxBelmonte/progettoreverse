// Function: FUN_00756200
// Address: 00756200
// Size: 1352 bytes
// Class: MUAudioIOSlot

void FUN_00756200(void* param_1)

{
  char cVar1;
  void *pvVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t *this_ptr;
  int64_t lVar5;
  bool bVar6;
  int64_t local_c0;
  char local_b8;
  int64_t local_b0;
  char local_a8;
  int64_t local_a0;
  char local_98;
  int64_t local_90;
  char local_88;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  if (this_ptr[0x21] != 0) {
    this_ptr[0x21] = 0;
    FUN_00d50b20();
  }
  (**(code **)(*this_ptr + 0x610))();
  if (*(int *)(local_40 + 0xc) == 0) {
    bVar6 = false;
  }
  else {
    (**(code **)(*this_ptr + 0x628))();
    bVar6 = local_50 != 0;
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if (!bVar6) {
    return;
  }
  cVar1 = FUN_00751ba0();
  if (cVar1 == '\0') {
    FUN_00757c60();
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012cb110();
    lVar5 = local_40;
    if (local_40 == 0) {
      lVar5 = 0;
      bVar6 = false;
    }
    else if (local_38 == '\0') {
      FUN_00d50b00();
      bVar6 = true;
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38 = '\0';
      bVar6 = true;
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    (**(code **)(*this_ptr + 0x628))();
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_004a11a0();
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01713a10();
    lVar5 = local_40;
    if (local_40 == 0) {
      lVar5 = 0;
      bVar6 = false;
    }
    else if (local_38 == '\0') {
      FUN_00d50b00();
      bVar6 = true;
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38 = '\0';
      bVar6 = true;
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_b8 != '\0') && (local_c0 != 0)) {
      FUN_00d50b20();
    }
  }
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  lVar3 = FUN_00e8b990();
  if (lVar3 == 0) goto LAB_0075671d;
  (**(code **)(*this_ptr + 0x498))();
  lVar3 = local_40;
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if (lVar3 == 0) goto LAB_0075671d;
  FUN_00d50b00();
  local_b0 = g_027296c0;
  if (g_027296c0 != 0) {
    FUN_00d50b00();
  }
  local_a8 = '\x01';
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  local_70 = FUN_00e8b990();
  local_68 = 0;
  if (local_70 != 0) {
    FUN_00d50b00();
  }
  local_68 = '\x01';
  FUN_000823a0();
  FUN_00e86210();
  local_a0 = g_026f6eb8;
  if (g_026f6eb8 != 0) {
    FUN_00d50b00();
  }
  local_98 = '\x01';
  FUN_00c841b0();
  local_60 = local_50;
  local_58 = 0;
  if (local_48 == '\0') {
    if (local_50 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_48 = '\0';
  }
  local_58 = '\x01';
  local_88 = '\0';
  local_90 = lVar5;
  FUN_000bfbc0(&local_70,&local_b0,0xa0,&local_60);
  lVar3 = this_ptr[0x21];
  lVar4 = lVar3;
  if (lVar3 != local_40) {
    if (local_38 == '\0') {
      if (local_40 == 0) {
        lVar4 = 0;
        goto LAB_00756627;
      }
      FUN_00d50b00();
      lVar3 = this_ptr[0x21];
      this_ptr[0x21] = local_40;
      lVar4 = local_40;
    }
    else {
      local_38 = '\0';
      lVar4 = local_40;
LAB_00756627:
      this_ptr[0x21] = lVar4;
    }
    if (lVar3 != 0) {
      FUN_00d50b20();
      lVar4 = local_40;
    }
  }
  if ((local_38 != '\0') && (lVar4 != 0)) {
    FUN_00d50b20();
  }
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if ((local_a8 != '\0') && (local_b0 != 0)) {
    FUN_00d50b20();
  }
  if (this_ptr != (int64_t *)0x0) {
    FUN_00d50b20();
  }
LAB_0075671d:
  if ((bVar6) && (lVar5 != 0)) {
    FUN_00d50b20();
  }
  return;
}

