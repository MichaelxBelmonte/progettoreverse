// Function: FUN_01759b20
// Address: 01759b20
// Size: 831 bytes
// Class: Unknown

void FUN_01759b20(uint64_t param_1,char param_2)

{
  int64_t lVar1;
  void *pvVar2;
  int64_t *plVar3;
  void* pVar4;
  int64_t *arg1;
  void*this_ptr;
  uint64_t local_70;
  uint8_t local_68;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  local_40 = *arg1;
  local_38 = '\0';
  local_70 = 0;
  local_68 = 0;
  pVar4 = 1;
  FUN_01759fb0(g_023b26e8,g_02420c90,&local_70,1);
  if (local_58 == '\0') {
    if (local_60 != 0) {
      FUN_00d50b00();
      goto LAB_01759bb4;
    }
  }
  else if (local_60 != 0) {
LAB_01759bb4:
    if (param_2 == '\0') {
      pvVar2 = _pthread_getspecific(pVar4);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_017548e0();
    }
    plVar3 = (int64_t *)FUN_00e8fc40();
    FUN_0013dd30();
    (**(code **)(*plVar3 + 0x18))();
    pvVar2 = _pthread_getspecific(pVar4);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_50 = local_60;
    local_48 = '\0';
    FUN_0150bf50();
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    pvVar2 = _pthread_getspecific(pVar4);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01510030();
    lVar1 = local_40;
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      pvVar2 = _pthread_getspecific(pVar4);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01510030();
      pvVar2 = _pthread_getspecific(pVar4);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0124ae40();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
    pvVar2 = _pthread_getspecific(pVar4);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0150eb60();
    lVar1 = local_40;
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      pvVar2 = _pthread_getspecific(pVar4);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0150eb60();
      pvVar2 = _pthread_getspecific(pVar4);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_018232c0();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
    *this_ptr = plVar3;
    *(void*)(this_ptr + 1) = 1;
    FUN_00d50b20();
    return;
  }
  *(void*)(this_ptr + 1) = 0;
  *this_ptr = 0;
  return;
}

