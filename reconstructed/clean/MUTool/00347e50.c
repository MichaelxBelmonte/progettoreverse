// Function: FUN_00347e50
// Address: 00347e50
// Size: 949 bytes
// Class: MUTool

void FUN_00347e50(uint64_t param_1,int64_t *param_2)

{
  bool bVar1;
  char cVar2;
  void* pVar3;
  void *pvVar4;
  void*this_ptr;
  int64_t *plVar5;
  int64_t local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  int64_t *local_40;
  char local_38;
  
  plVar5 = local_40;
  if (*param_2 == 0) {
    FUN_012ca6e0(param_1,0);
    pVar3 = (void*)param_1;
    if (local_40 != (int64_t *)0x0) {
      bVar1 = true;
      if (local_38 == '\0') {
        FUN_00d50b00();
      }
      goto LAB_00347f30;
    }
  }
  else {
    pvVar4 = _pthread_getspecific((void*)param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    pVar3 = FUN_012e57e0();
    FUN_012c9e50(pVar3,0);
    if (local_40 != (int64_t *)0x0) {
      bVar1 = true;
      if (local_38 == '\0') {
        FUN_00d50b00();
      }
      goto LAB_00347f30;
    }
  }
  bVar1 = false;
  plVar5 = (int64_t *)0x0;
LAB_00347f30:
  FUN_01f27fe0();
  cVar2 = (**(code **)(*local_40 + 0x450))();
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar2 != '\0') {
    pvVar4 = _pthread_getspecific(pVar3);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    pvVar4 = _pthread_getspecific(pVar3);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012cb450();
    if (local_38 == '\0') {
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    FUN_012cb3e0();
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    pvVar4 = _pthread_getspecific(pVar3);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012cb110();
    pvVar4 = _pthread_getspecific(pVar3);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    pvVar4 = _pthread_getspecific(pVar3);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012cb110();
    pvVar4 = _pthread_getspecific(pVar3);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e8a60();
    if (local_78 == '\0') {
      if (local_80 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_78 = '\0';
    }
    FUN_012e89e0();
    if (local_80 != 0) {
      FUN_00d50b20();
    }
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  *(void*)(this_ptr + 1) = 0;
  if ((!bVar1) && (plVar5 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  *this_ptr = plVar5;
  *(void*)(this_ptr + 1) = 1;
  return;
}

