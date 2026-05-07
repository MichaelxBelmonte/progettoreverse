// Function: FUN_01951ef0
// Address: 01951ef0
// Size: 2846 bytes
// Class: MULSSGenerator

void FUN_01951ef0(void* param_1)

{
  int iVar1;
  void* pVar2;
  int64_t lVar3;
  void *pvVar4;
  int64_t lVar5;
  void* pVar6;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int local_48;
  int64_t lVar7;
  
  lVar3 = local_60;
  FUN_01948a20();
  if (local_58 == '\0') {
    if (local_60 == 0) {
      return;
    }
    FUN_00d50b00();
  }
  else if (local_60 == 0) {
    return;
  }
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e6a50();
  if ((local_58 == '\0') && (local_60 != 0)) {
    FUN_00d50b00();
  }
  pvVar4 = _pthread_getspecific(param_1);
  pVar2 = (void*)local_60;
  if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
    param_1 = pVar2;
  }
  FUN_012e6160();
  FUN_00d237a0();
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e7fb0();
  if (local_60 != 0) {
    FUN_00d50b00();
  }
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0150fe10();
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0150f380();
  pvVar4 = _pthread_getspecific(param_1);
  if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
    param_1 = pVar2;
  }
  FUN_012e68b0();
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e6160();
  if (local_60 != 0) {
    FUN_00d50b00();
    local_60 = 0;
    local_48 = -1;
    while( true ) {
      lVar5 = (int64_t)local_48;
      local_48 = local_48 + 1;
      if (*(int *)(lVar3 + 0xc) <= local_48) break;
      lVar7 = *(int64_t *)(lVar3 + 0x10);
      local_60 = *(int64_t *)(lVar7 + 8 + lVar5 * 8);
      pvVar4 = _pthread_getspecific((void*)lVar7);
      pVar6 = (void*)lVar7;
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      pvVar4 = _pthread_getspecific(pVar6);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012e5ae0();
      if (local_68 == '\0') {
        if (local_70 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_68 = '\0';
      }
      FUN_012edae0();
      if (local_70 != 0) {
        FUN_00d50b20();
      }
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
    }
    lVar5 = lVar3;
    FUN_000be170();
    param_1 = (void*)lVar5;
    FUN_00d50b20();
  }
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  pvVar4 = _pthread_getspecific(param_1);
  if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
    param_1 = pVar2;
  }
  FUN_012e5ae0();
  if (local_60 != 0) {
    FUN_00d50b00();
  }
  FUN_012edae0();
  if (local_60 != 0) {
    FUN_00d50b20();
  }
  (**(code **)(&UNK_00001850 + *this_ptr))();
  if (local_60 != 0) {
    FUN_00d50b00();
  }
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e6a50();
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e6160();
  iVar1 = *(int *)(local_60 + 0xc);
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if (iVar1 != 1) {
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e7fb0();
    if (local_60 != 0) {
      FUN_00d50b00();
    }
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e7fb0();
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0150fe10();
    if (local_60 != 0) {
      FUN_00d50b00();
    }
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    pvVar4 = _pthread_getspecific(param_1);
    if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
      param_1 = pVar2;
    }
    FUN_012e68b0();
    pvVar4 = _pthread_getspecific(param_1);
    if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
      param_1 = pVar2;
    }
    FUN_012e66e0();
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0150f380();
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0150f1c0();
    if (local_60 != 0) {
      FUN_00d50b20();
      FUN_00d50b20();
    }
  }
  (**(code **)(&UNK_00001668 + *this_ptr))();
  if (*arg1 == local_60) {
    (**(code **)(&g_00001680 + *this_ptr))();
  }
  if (local_60 != 0) {
    FUN_00d50b20();
  }
  if (lVar3 != 0) {
    FUN_00d50b20();
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}

