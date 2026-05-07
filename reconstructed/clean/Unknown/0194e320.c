// Function: FUN_0194e320
// Address: 0194e320
// Size: 1754 bytes
// Class: Unknown

void FUN_0194e320(int64_t *param_1,int64_t *param_2)

{
  int64_t lVar1;
  void *pvVar2;
  int64_t *plVar3;
  int64_t *plVar4;
  int64_t lVar5;
  void* in_ECX;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t local_c8;
  char local_c0;
  int64_t *local_b8;
  char local_b0;
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
  int64_t local_58;
  char local_50;
  int64_t *local_48;
  int64_t local_40;
  char local_38;
  
  lVar1 = *arg1;
  lVar5 = this_ptr[0xb1];
  if (lVar5 != lVar1) {
    local_48 = param_1;
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    this_ptr[0xb1] = lVar1;
    param_1 = local_48;
    if (lVar5 != 0) {
      FUN_00d50b20();
      param_1 = local_48;
    }
  }
  this_ptr[0xaf] = (int64_t)param_1;
  local_c8 = *param_2;
  local_c0 = '\0';
  (**(code **)(&UNK_00001848 + *this_ptr))(param_1,&local_c8);
  lVar1 = this_ptr[0xa8];
  lVar5 = lVar1;
  if (lVar1 == local_40) goto LAB_0194e41d;
  if (local_38 == '\0') {
    if (local_40 == 0) {
      lVar5 = 0;
      goto LAB_0194e3cf;
    }
    FUN_00d50b00();
    lVar1 = this_ptr[0xa8];
    this_ptr[0xa8] = local_40;
    lVar5 = local_40;
  }
  else {
    local_38 = '\0';
    lVar5 = local_40;
LAB_0194e3cf:
    this_ptr[0xa8] = lVar5;
  }
  in_ECX = (void*)lVar1;
  if (lVar1 != 0) {
    FUN_00d50b20();
    lVar5 = local_40;
  }
LAB_0194e41d:
  if ((local_38 != '\0') && (lVar5 != 0)) {
    FUN_00d50b20();
  }
  if ((local_c0 != '\0') && (local_c8 != 0)) {
    FUN_00d50b20();
  }
  pvVar2 = _pthread_getspecific(in_ECX);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012ccc90();
  plVar3 = (int64_t *)FUN_00e8fc40();
  FUN_000be3f0();
  (**(code **)(*plVar3 + 0x18))();
  plVar4 = (int64_t *)this_ptr[0xa9];
  if (plVar4 == plVar3) {
    FUN_00d50b20();
  }
  else {
    this_ptr[0xa9] = (int64_t)plVar3;
    if (plVar4 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  pvVar2 = _pthread_getspecific(in_ECX);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  local_50 = 0;
  lVar1 = this_ptr[0xa8];
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  local_50 = '\x01';
  local_58 = lVar1;
  FUN_01505960();
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  plVar4 = (int64_t *)FUN_00e8fc40();
  FUN_0013dd30();
  local_48 = plVar4;
  (**(code **)(*plVar4 + 0x18))();
  pvVar2 = _pthread_getspecific(in_ECX);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  local_b8 = local_48;
  local_b0 = '\0';
  FUN_01505730();
  if ((local_b0 != '\0') && (local_b8 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  pvVar2 = _pthread_getspecific(in_ECX);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012cb110();
  lVar1 = local_40;
  if ((((local_38 == '\0') && (local_40 != 0)) && (FUN_00d50b00(), local_38 != '\0')) &&
     (local_40 != 0)) {
    FUN_00d50b20();
  }
  pvVar2 = _pthread_getspecific(in_ECX);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e78c0();
  pvVar2 = _pthread_getspecific(in_ECX);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012c6d60(0);
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  pvVar2 = _pthread_getspecific(in_ECX);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e78c0();
  pvVar2 = _pthread_getspecific(in_ECX);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012c6cf0(0);
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  pvVar2 = _pthread_getspecific(in_ECX);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e7d10();
  pvVar2 = _pthread_getspecific(in_ECX);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_011f2610();
  pvVar2 = _pthread_getspecific(in_ECX);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  pvVar2 = _pthread_getspecific(in_ECX);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012cb110();
  pvVar2 = _pthread_getspecific(in_ECX);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e7d10();
  pvVar2 = _pthread_getspecific(in_ECX);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_011f2610();
  pvVar2 = _pthread_getspecific(in_ECX);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012a46e0();
  FUN_012a4680();
  if ((local_90 != '\0') && (local_98 != 0)) {
    FUN_00d50b20();
  }
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_a0 != '\0') && (local_a8 != 0)) {
    FUN_00d50b20();
  }
  local_60 = 0;
  lVar5 = this_ptr[0xa8];
  if (lVar5 != 0) {
    FUN_00d50b00();
  }
  local_60 = '\x01';
  local_68 = lVar5;
  (**(code **)(*this_ptr + 0xa08))();
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}

