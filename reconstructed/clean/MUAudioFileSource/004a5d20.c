// Function: FUN_004a5d20
// Address: 004a5d20
// Size: 1430 bytes
// Class: MUAudioFileSource

void FUN_004a5d20(int64_t *param_1,uint64_t param_2,int64_t *param_3)

{
  int64_t lVar1;
  void *pvVar2;
  void* pVar3;
  int64_t *plVar4;
  int64_t lVar5;
  int64_t *this_ptr;
  int64_t local_e0;
  char local_d8;
  int64_t local_80;
  char local_78;
  int64_t local_60;
  char local_58;
  int local_48;
  int64_t *local_38;
  
  plVar4 = param_1;
  if (*param_1 == 0) {
    pvVar2 = _pthread_getspecific((void*)param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e7fb0();
    lVar5 = *param_1;
    if (lVar5 == local_60) {
      if (((char)param_1[1] != '\0') || (local_60 == 0)) goto LAB_004a5e2e;
      if (local_58 == '\0') {
        FUN_00d50b00();
        goto LAB_004a5e27;
      }
    }
    else {
      lVar1 = param_1[1];
      if (local_58 == '\0') {
        if (local_60 != 0) {
          FUN_00d50b00();
        }
        *param_1 = local_60;
        if (((char)lVar1 != '\0') && (lVar5 != 0)) {
          FUN_00d50b20();
        }
LAB_004a5e27:
        local_38 = param_1 + 1;
        *(void*)local_38 = 1;
LAB_004a5e2e:
        if ((local_58 != '\0') && (local_60 != 0)) {
          FUN_00d50b20();
        }
        goto LAB_004a5e42;
      }
      *param_1 = local_60;
      if (((char)lVar1 != '\0') && (lVar5 != 0)) {
        FUN_00d50b20();
      }
    }
    local_38 = param_1 + 1;
    *(void*)local_38 = 1;
  }
LAB_004a5e42:
  pVar3 = (void*)plVar4;
  if (*param_3 != 0) goto LAB_004a5f38;
  pvVar2 = _pthread_getspecific(pVar3);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e7fb0();
  lVar5 = *param_3;
  if (lVar5 == local_60) {
    if (((char)param_3[1] != '\0') || (local_60 == 0)) goto LAB_004a5f24;
    if (local_58 == '\0') {
      FUN_00d50b00();
      goto LAB_004a5f1d;
    }
  }
  else {
    lVar1 = param_3[1];
    if (local_58 == '\0') {
      if (local_60 != 0) {
        FUN_00d50b00();
      }
      *param_3 = local_60;
      if (((char)lVar1 != '\0') && (lVar5 != 0)) {
        FUN_00d50b20();
      }
LAB_004a5f1d:
      local_38 = param_3 + 1;
      *(void*)local_38 = 1;
LAB_004a5f24:
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      goto LAB_004a5f38;
    }
    *param_3 = local_60;
    if (((char)lVar1 != '\0') && (lVar5 != 0)) {
      FUN_00d50b20();
    }
  }
  local_38 = param_3 + 1;
  *(void*)local_38 = 1;
LAB_004a5f38:
  lVar5 = *this_ptr;
  if (lVar5 != 0) {
    local_48 = -1;
    while (local_48 = local_48 + 1, local_48 < *(int *)(lVar5 + 0xc)) {
      pVar3 = (void*)*(void*)(lVar5 + 0x10);
      pvVar2 = _pthread_getspecific(pVar3);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0125e930();
      pvVar2 = _pthread_getspecific(pVar3);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0152ebe0();
      if (local_78 == '\0') {
        if (local_80 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_78 = '\0';
      }
      if ((local_d8 != '\0') && (local_e0 != 0)) {
        FUN_00d50b20();
      }
      pvVar2 = _pthread_getspecific(pVar3);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0150d560();
      pvVar2 = _pthread_getspecific(pVar3);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0150d3a0();
      if (local_80 != 0) {
        FUN_00d50b20();
      }
    }
    FUN_001159b0();
    pVar3 = (void*)lVar5;
  }
  pvVar2 = _pthread_getspecific(pVar3);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e6fe0();
  pvVar2 = _pthread_getspecific(pVar3);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e6c30();
  FUN_01298d30();
  return;
}

