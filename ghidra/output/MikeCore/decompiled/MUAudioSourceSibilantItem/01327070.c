// Function: FUN_01327070
// Address: 01327070
// Size: 964 bytes
// Class: MUAudioSourceSibilantItem


void FUN_01327070(pthread_key_t param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  void *pvVar3;
  pthread_key_t pVar4;
  longlong unaff_RDI;
  undefined4 uVar5;
  
  if (((*(longlong *)(unaff_RDI + 0x1f8) == 0) && (*(longlong *)(unaff_RDI + 0x200) == 0)) &&
     (*(longlong *)(unaff_RDI + 0x148) != 0)) {
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar2 = FUN_0141bab0();
    pVar4 = 0x132745c;
    uVar5 = DAT_02390124;
    param_1 = 0x132745c;
    switch(uVar2) {
    case 1:
      lVar1 = *(longlong *)(unaff_RDI + 0x148);
      pVar4 = 0x132745c;
      if (lVar1 != 0) {
        pVar4 = 0x132745c;
        FUN_00d50b00();
      }
      pvVar3 = _pthread_getspecific(pVar4);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0141bae0();
      uVar5 = DAT_0239011c;
      if (lVar1 != 0) {
        FUN_00d50b20();
        uVar5 = DAT_0239011c;
      }
      break;
    case 2:
      break;
    default:
      goto switchD_013273c1_caseD_3;
    }
  }
  else {
switchD_013273c1_caseD_3:
    pVar4 = param_1;
    uVar5 = DAT_0239011c;
  }
  pvVar3 = _pthread_getspecific(pVar4);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_015b2e00();
  pvVar3 = _pthread_getspecific(pVar4);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_015b2e80();
  pvVar3 = _pthread_getspecific(pVar4);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_015b2ec0();
  pvVar3 = _pthread_getspecific(pVar4);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_015b2f00();
  pvVar3 = _pthread_getspecific(pVar4);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_015b2f40(DAT_0239011c);
  pvVar3 = _pthread_getspecific(pVar4);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_015b2f80();
  pvVar3 = _pthread_getspecific(pVar4);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_015b2fc0(uVar5);
  pvVar3 = _pthread_getspecific(pVar4);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_015b3000(DAT_02390124);
  pvVar3 = _pthread_getspecific(pVar4);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_015b3060(DAT_02390124);
  return;
}


