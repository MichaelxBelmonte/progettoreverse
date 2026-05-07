// Function: FUN_001552e0
// Address: 001552e0
// Size: 2627 bytes
// Class: MUPercussivePitchSystem

int64_t * FUN_001552e0(void* param_1)

{
  int64_t lVar1;
  uint32_t uVar2;
  void *pvVar3;
  int64_t lVar4;
  int64_t lVar5;
  void* pVar6;
  int64_t lVar7;
  int64_t arg1;
  int64_t *this_ptr;
  bool bVar8;
  bool bVar9;
  int64_t local_f8;
  char local_f0;
  int64_t local_70;
  char local_68;
  int64_t local_50;
  
  FUN_00154c40();
  lVar5 = *(int64_t *)(arg1 + 0x88);
  if (lVar5 != 0) {
    FUN_00d50b00();
  }
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e6a50();
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e6160();
  lVar1 = *(int64_t *)(arg1 + 0x88);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  uVar2 = FUN_00d237a0();
  *(void*)(arg1 + 0xb0) = uVar2;
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if ((local_f0 != '\0') && (local_f8 != 0)) {
    FUN_00d50b20();
  }
  if (lVar5 != 0) {
    FUN_00d50b20();
  }
  lVar5 = *(int64_t *)(arg1 + 0x88);
  if (lVar5 != 0) {
    FUN_00d50b00();
  }
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e8920();
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012caf10();
  if (lVar1 == 0) {
    if (*(int64_t *)(arg1 + 0xa0) == 0) goto LAB_0015558b;
    *(void*)(arg1 + 0xa0) = 0;
LAB_00155554:
    FUN_00d50b20();
  }
  else {
    FUN_00d50b00();
    lVar4 = *(int64_t *)(arg1 + 0xa0);
    if (lVar4 != lVar1) {
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      *(int64_t *)(arg1 + 0xa0) = lVar1;
      if (lVar4 != 0) goto LAB_00155554;
    }
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
LAB_0015558b:
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if (lVar5 != 0) {
    FUN_00d50b20();
  }
  lVar5 = *(int64_t *)(arg1 + 0x90);
  if ((lVar5 == 0) || (FUN_00d50b00(), *(int64_t *)(arg1 + 0x90) == 0)) {
    bVar8 = true;
  }
  else {
    FUN_00d50b00();
    bVar8 = false;
  }
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0150fe30();
  if (!bVar8) {
    FUN_00d50b20();
  }
  if (lVar5 != 0) {
    FUN_00d50b20();
  }
  if (lVar5 == lVar1) {
    bVar8 = false;
    bVar9 = false;
    local_50 = 0;
  }
  else {
    lVar4 = FUN_00e8b990();
    if (lVar4 != 0) {
      FUN_00e8b990();
      FUN_00cb1f10();
      if (lVar1 != 0) {
        FUN_00e8b990();
        FUN_00cb1f10();
        FUN_00db3260();
      }
    }
    lVar4 = *(int64_t *)(arg1 + 0x90);
    if (lVar4 != 0) {
      FUN_00d50b00();
    }
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0150fe30();
    bVar8 = lVar1 != 0;
    lVar7 = lVar1;
    if (bVar8) {
      FUN_00d50b00();
    }
    pVar6 = (void*)lVar7;
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
    lVar4 = *(int64_t *)(arg1 + 0x90);
    if (lVar4 != 0) {
      FUN_00d50b00();
    }
    pvVar3 = _pthread_getspecific(pVar6);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0150fe10();
    bVar9 = lVar1 != 0;
    lVar7 = lVar1;
    if (bVar9) {
      FUN_00d50b00();
    }
    param_1 = (void*)lVar7;
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
    lVar4 = *(int64_t *)(arg1 + 0x90);
    if (lVar4 != 0) {
      FUN_00d50b00();
    }
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0150ce10();
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
    lVar4 = *(int64_t *)(arg1 + 0x90);
    if (lVar4 != 0) {
      FUN_00d50b00();
    }
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_015127c0();
    local_50 = lVar1;
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_002dc990();
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  FUN_00155070();
  if (*(int64_t *)(arg1 + 0xa0) != 0) {
    *(int64_t *)(arg1 + 0xa0) = 0;
    FUN_00d50b20();
  }
  if (lVar5 != lVar1) {
    lVar5 = *(int64_t *)(arg1 + 0x90);
    if (lVar5 != 0) {
      FUN_00d50b00();
    }
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0150ce10();
    if (lVar5 != 0) {
      FUN_00d50b20();
    }
    lVar5 = *(int64_t *)(arg1 + 0x90);
    if (lVar5 != 0) {
      FUN_00d50b00();
    }
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0150ceb0();
    if (lVar5 != 0) {
      FUN_00d50b20();
    }
    lVar5 = *(int64_t *)(arg1 + 0x90);
    if (lVar5 != 0) {
      FUN_00d50b00();
    }
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0150c7f0();
    if (lVar5 != 0) {
      FUN_00d50b20();
    }
    lVar5 = *(int64_t *)(arg1 + 0x90);
    if (lVar5 != 0) {
      FUN_00d50b00();
    }
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0150d0b0();
    if (lVar5 != 0) {
      FUN_00d50b20();
    }
    lVar5 = FUN_00e8b990();
    if (lVar5 != 0) {
      FUN_00e8b990();
      FUN_00cb1f10();
      if (lVar1 != 0) {
        FUN_00e8b990();
        FUN_00cb1f10();
        FUN_00db3270();
      }
    }
  }
  *this_ptr = lVar1;
  *(void*)(this_ptr + 1) = 1;
  if ((bVar8) && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((bVar9) && (local_50 != 0)) {
    FUN_00d50b20();
  }
  return this_ptr;
}

