// Function: FUN_01700f60
// Address: 01700f60
// Size: 576 bytes
// Class: Unknown

uint64_t FUN_01700f60(void* param_1,int param_2)

{
  char cVar1;
  void *pvVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  void* pVar6;
  
  if (param_2 == 0) {
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar5 = FUN_01909dc0();
    return uVar5;
  }
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01909dc0();
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  pVar6 = 0;
  uVar3 = FUN_0165cf20(0,0);
  FUN_00e7c860();
  uVar4 = FUN_00e7cc50();
  if (((uVar4 >> 0x20 == 0) || (uVar3 >> 0x20 == 0)) || (cVar1 = FUN_00e7c000(), cVar1 == '\0')) {
    if (param_2 < 1) goto LAB_017010d3;
  }
  else if (param_2 < 1) {
    FUN_00e7c280();
    goto LAB_017010d3;
  }
  FUN_00e7c260();
LAB_017010d3:
  pvVar2 = _pthread_getspecific(pVar6);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar5 = FUN_0165d690();
  pvVar2 = _pthread_getspecific(pVar6);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01909dc0();
  FUN_00e7b970();
  return uVar5;
}

