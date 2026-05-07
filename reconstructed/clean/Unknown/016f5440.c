// Function: FUN_016f5440
// Address: 016f5440
// Size: 591 bytes
// Class: Unknown

uint64_t FUN_016f5440(void* param_1)

{
  bool bVar1;
  void *pvVar2;
  uint64_t uVar3;
  void* pVar4;
  void*arg1;
  uint64_t extraout_XMM0_Qa;
  uint64_t extraout_XMM0_Qa_00;
  uint64_t extraout_XMM0_Qa_01;
  uint64_t uVar5;
  uint64_t local_60;
  uint8_t local_58;
  uint32_t local_4c;
  uint64_t local_48;
  int64_t local_40;
  char local_38;
  
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  local_48 = FUN_01909dc0();
  local_60 = *arg1;
  local_58 = 0;
  FUN_016ebbb0(extraout_XMM0_Qa,&local_60);
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
      goto LAB_016f54d8;
    }
  }
  else if (local_40 != 0) {
LAB_016f54d8:
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01909dc0();
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    pVar4 = 0;
    local_40 = FUN_0165cf20(0,0);
    FUN_00e7c860();
    local_40 = FUN_00e7cc50();
    local_4c = 1;
    FUN_00e7c280();
    pvVar2 = _pthread_getspecific(pVar4);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar3 = FUN_0165d690();
    bVar1 = false;
    uVar5 = extraout_XMM0_Qa_00;
    goto LAB_016f565b;
  }
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01901340();
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar3 = FUN_019079b0();
  uVar5 = extraout_XMM0_Qa_01;
  if ((local_38 != '\0') && (local_40 != 0)) {
    uVar5 = FUN_00d50b20();
  }
  bVar1 = true;
LAB_016f565b:
  local_48 = FUN_016cda80(uVar5,uVar3);
  if (!bVar1) {
    FUN_00d50b20();
  }
  return local_48;
}

