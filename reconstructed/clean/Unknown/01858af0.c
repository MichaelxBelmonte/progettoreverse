// Function: FUN_01858af0
// Address: 01858af0
// Size: 520 bytes
// Class: Unknown

int64_t * FUN_01858af0(uint64_t param_1,uint64_t param_2,void*param_3)

{
  void *pvVar1;
  void* pVar2;
  char *pcVar3;
  int64_t *this_ptr;
  uint64_t local_70;
  uint8_t local_68;
  uint8_t local_60 [8];
  uint8_t local_58 [8];
  int64_t local_48;
  char local_40 [8];
  char local_38 [8];
  
  FUN_0184b210();
  local_70 = *param_3;
  local_68 = 0;
  FUN_018516f0(param_1,param_2,1,&local_70);
  pVar2 = (void*)param_1;
  if ((local_40[0] == '\0') && (local_48 != 0)) {
    FUN_00d50b00();
  }
  if (param_2 >> 0x20 == 0) {
    pvVar1 = _pthread_getspecific(pVar2);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01252670(local_60,0,local_58,0);
    pcVar3 = local_38;
    if (local_40[0] != '\0') {
      pcVar3 = local_40;
    }
    local_38[0] = local_40[0];
    *pcVar3 = '\0';
    if ((local_40[0] != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if (local_48 != 0) {
      if (local_38[0] == '\0') {
        FUN_00d50b00();
      }
      goto LAB_01858caa;
    }
  }
  else {
    pvVar1 = _pthread_getspecific(pVar2);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012521f0(param_2,1,local_60,local_58);
    pcVar3 = local_38;
    if (local_40[0] != '\0') {
      pcVar3 = local_40;
    }
    local_38[0] = local_40[0];
    *pcVar3 = '\0';
    if ((local_40[0] != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if (local_48 != 0) {
      if (local_38[0] == '\0') {
        FUN_00d50b00();
      }
LAB_01858caa:
      *(void*)(this_ptr + 1) = 0;
      goto LAB_01858cd0;
    }
  }
  *(void*)(this_ptr + 1) = 0;
  if (local_48 != 0) {
    FUN_00d50b00();
  }
LAB_01858cd0:
  *this_ptr = local_48;
  *(void*)(this_ptr + 1) = 1;
  if (local_48 != 0) {
    FUN_00d50b20();
  }
  return this_ptr;
}

