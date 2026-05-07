// Function: FUN_004fa380
// Address: 004fa380
// Size: 1475 bytes
// Class: MULSSGenerator

void FUN_004fa380(void* param_1,uint64_t param_2)

{
  int64_t lVar1;
  void *pvVar2;
  char *pcVar3;
  void* pVar4;
  char *pcVar5;
  int64_t lVar6;
  int64_t *this_ptr;
  int64_t local_f8;
  char local_f0 [8];
  int64_t local_e8;
  char local_e0;
  int64_t local_d8;
  char local_d0;
  int64_t local_c8;
  char local_c0;
  int64_t local_b8;
  char local_b0;
  int64_t local_a8;
  char local_a0;
  int64_t local_98;
  char local_90;
  int64_t local_88;
  char local_80;
  uint64_t local_78;
  int64_t local_60;
  char local_58;
  int local_48;
  char local_38 [8];
  
  local_78 = param_2;
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e5ae0();
  lVar6 = *this_ptr;
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if (lVar6 != local_60) goto LAB_004fa4e8;
  local_e8 = *this_ptr;
  local_e0 = '\0';
  FUN_00243390();
  lVar6 = *this_ptr;
  if (lVar6 == local_60) {
    if (((char)this_ptr[1] != '\0') || (local_60 == 0)) goto LAB_004fa4ba;
    if (local_58 == '\0') {
      FUN_00d50b00();
      goto LAB_004fa4b5;
    }
LAB_004fa47a:
    *(void*)(this_ptr + 1) = 1;
    local_58 = '\0';
  }
  else {
    lVar1 = this_ptr[1];
    if (local_58 != '\0') {
      *this_ptr = local_60;
      if (((char)lVar1 != '\0') && (lVar6 != 0)) {
        FUN_00d50b20();
      }
      goto LAB_004fa47a;
    }
    if (local_60 != 0) {
      FUN_00d50b00();
    }
    *this_ptr = local_60;
    if (((char)lVar1 != '\0') && (lVar6 != 0)) {
      FUN_00d50b20();
    }
LAB_004fa4b5:
    *(void*)(this_ptr + 1) = 1;
LAB_004fa4ba:
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
  }
  if ((local_e0 != '\0') && (local_e8 != 0)) {
    FUN_00d50b20();
  }
LAB_004fa4e8:
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e7fb0();
  if ((local_58 == '\0') && (local_60 != 0)) {
    FUN_00d50b00();
  }
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e7fb0();
  if ((local_58 == '\0') && (local_60 != 0)) {
    FUN_00d50b00();
  }
  lVar6 = *this_ptr;
  if (lVar6 != 0) {
    local_48 = -1;
    while (local_48 = local_48 + 1, local_48 < *(int *)(lVar6 + 0xc)) {
      pVar4 = (void*)*(void*)(lVar6 + 0x10);
      pvVar2 = _pthread_getspecific(pVar4);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0125e930();
      pvVar2 = _pthread_getspecific(pVar4);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0152ebe0();
      local_38[0] = local_f0[0];
      pcVar5 = local_38;
      pcVar3 = local_f0;
      if (local_f0[0] == '\0') {
        pcVar3 = pcVar5;
      }
      *pcVar3 = '\0';
      if ((local_f0[0] != '\0') && (local_f8 != 0)) {
        FUN_00d50b20();
      }
      pVar4 = (void*)pcVar5;
      if ((local_d0 != '\0') && (local_d8 != 0)) {
        FUN_00d50b20();
      }
      pvVar2 = _pthread_getspecific(pVar4);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_c8 = local_f8;
      local_c0 = '\0';
      FUN_0150d560();
      if ((local_c0 != '\0') && (local_c8 != 0)) {
        FUN_00d50b20();
      }
      pvVar2 = _pthread_getspecific(pVar4);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_b8 = local_f8;
      local_b0 = '\0';
      FUN_0150d3a0();
      if ((local_b0 != '\0') && (local_b8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_38[0] != '\0') && (local_f8 != 0)) {
        FUN_00d50b20();
      }
    }
    FUN_001159b0();
    param_1 = (void*)lVar6;
  }
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  local_a8 = *this_ptr;
  local_a0 = '\0';
  FUN_012e6fe0();
  if ((local_a0 != '\0') && (local_a8 != 0)) {
    FUN_00d50b20();
  }
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  local_98 = *this_ptr;
  local_90 = '\0';
  FUN_012e6c30();
  if ((local_90 != '\0') && (local_98 != 0)) {
    FUN_00d50b20();
  }
  local_88 = *this_ptr;
  local_80 = '\0';
  FUN_01298d30();
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  if (local_60 != 0) {
    FUN_00d50b20();
    FUN_00d50b20();
  }
  return;
}

