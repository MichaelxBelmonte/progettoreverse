// Function: FUN_01b9cc10
// Address: 01b9cc10
// Size: 555 bytes
// Class: GNValue

void FUN_01b9cc10(void* param_1,uint64_t param_2)

{
  int64_t *plVar1;
  int64_t lVar2;
  char cVar3;
  void *pvVar4;
  int64_t *arg1;
  int64_t this_ptr;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t local_40;
  
  FUN_01b7c310();
  if (*(char *)(this_ptr + 0x213) == '\0') {
    return;
  }
  plVar1 = (int64_t *)*arg1;
  FUN_0013de80();
  if (plVar1 == (int64_t *)0x0) {
LAB_01b9cc8d:
    arg1 = &g_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 == '\0') goto LAB_01b9cc8d;
  }
  lVar2 = arg1[1];
  if (((char)lVar2 == '\0') || (*arg1 == 0)) {
    if (*arg1 == 0) {
      return;
    }
  }
  else {
    FUN_00d50b00();
  }
  FUN_01b9c7d0();
  if (local_68 == '\0') {
    if (local_70 != 0) {
      FUN_00d50b00();
    }
    if (*(int64_t *)(this_ptr + 0x1f8) != 0) goto LAB_01b9cd06;
LAB_01b9cd96:
    local_58 = '\0';
    local_60 = 0;
  }
  else {
    local_68 = '\0';
    if (*(int64_t *)(this_ptr + 0x1f8) == 0) goto LAB_01b9cd96;
LAB_01b9cd06:
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01510b20(0,param_2,0,0);
    if (local_58 != '\0') {
      local_40 = local_60;
      local_58 = '\0';
      goto LAB_01b9cdbf;
    }
    if (local_60 != 0) {
      FUN_00d50b00();
      local_40 = local_60;
      goto LAB_01b9cdbf;
    }
  }
  local_40 = 0;
LAB_01b9cdbf:
  FUN_01b82620();
  if (local_40 != 0) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if (local_70 != 0) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if ((char)lVar2 != '\0') {
    FUN_00d50b20();
  }
  return;
}

