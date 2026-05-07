// Function: FUN_01246820
// Address: 01246820
// Size: 946 bytes
// Class: Unknown
// String references:
//   "%@ %@"

int64_t * FUN_01246820(void* param_1,int64_t *param_2)

{
  int64_t *plVar1;
  int64_t lVar2;
  char cVar3;
  void *pvVar4;
  int64_t lVar5;
  int64_t lVar6;
  int64_t arg1;
  int64_t *this_ptr;
  int64_t local_e0;
  int64_t local_d8;
  char local_d0;
  int64_t local_c8;
  char local_c0;
  int64_t local_b0;
  char local_a8;
  int64_t local_a0;
  char local_98;
  int64_t local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  int64_t local_50;
  char local_48;
  
  plVar1 = (int64_t *)*param_2;
  FUN_0013de80();
  if (plVar1 == (int64_t *)0x0) {
LAB_0124686c:
    param_2 = &g_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 == '\0') goto LAB_0124686c;
  }
  lVar6 = *param_2;
  lVar2 = param_2[1];
  if (((char)lVar2 == '\0') || (lVar6 == 0)) {
    if (lVar6 == 0) {
      *(void*)(this_ptr + 1) = 0;
      *this_ptr = 0;
      return this_ptr;
    }
  }
  else {
    FUN_00d50b00();
  }
  pvVar4 = _pthread_getspecific(param_1);
  if ((pvVar4 == (void *)0x0) || (lVar5 = FUN_00e8b990(), lVar5 == 0)) {
    lVar6 = *(int64_t *)(arg1 + 0x10);
  }
  else {
    param_1 = (void*)lVar6;
    lVar6 = *(int64_t *)(arg1 + 0x10);
  }
  if (lVar6 != 0) {
    FUN_00d50b00();
  }
  FUN_01738be0();
  if (lVar6 != 0) {
    FUN_00d50b20();
  }
  FUN_0177f010();
  FUN_01780260();
  if ((local_a8 == '\0') && (local_b0 != 0)) {
    FUN_00d50b00();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  FUN_016ab300();
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01736d70();
  if (local_78 == '\0') {
    if (local_80 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_78 = '\0';
  }
  FUN_016ac280();
  local_e0 = local_d8;
  FUN_00083ea0(2,&local_e0);
  FUN_00d8cb40();
  lVar6 = local_b0;
  if (local_b0 != local_50) {
    lVar6 = local_50;
    if (local_48 != '\0') {
      if (local_b0 != 0) {
        FUN_00d50b20();
      }
      goto LAB_01246ae1;
    }
    if (local_50 != 0) {
      FUN_00d50b00();
    }
    if (local_b0 != 0) {
      FUN_00d50b20();
    }
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
LAB_01246ae1:
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_d0 != '\0') && (local_d8 != 0)) {
    FUN_00d50b20();
  }
  if (local_80 != 0) {
    FUN_00d50b20();
  }
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  if ((local_c0 != '\0') && (local_c8 != 0)) {
    FUN_00d50b20();
  }
  *this_ptr = lVar6;
  *(void*)(this_ptr + 1) = 1;
  if ((char)lVar2 != '\0') {
    FUN_00d50b20();
  }
  return this_ptr;
}

