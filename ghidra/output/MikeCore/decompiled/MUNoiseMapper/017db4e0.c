// Function: FUN_017db4e0
// Address: 017db4e0
// Size: 710 bytes
// Class: MUNoiseMapper


ulonglong FUN_017db4e0(pthread_key_t param_1)

{
  char cVar1;
  void *pvVar2;
  longlong lVar3;
  int extraout_var;
  pthread_key_t extraout_var_00;
  pthread_key_t pVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  double dVar7;
  double dVar8;
  longlong local_38;
  char local_30;
  
  lVar6 = *unaff_RDI;
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    lVar6 = *unaff_RDI;
    lVar3 = FUN_00e8b990();
    if (lVar3 != 0) {
      lVar6 = *(longlong *)(lVar6 + 0x20 + (ulonglong)(*(uint *)(lVar3 + 0x154) & 1) * 8);
    }
  }
  lVar6 = *(longlong *)(lVar6 + 0x40);
  if (lVar6 != 0) {
    FUN_00d50b00();
  }
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01508530();
  if (lVar6 != 0) {
    FUN_00d50b20();
  }
  lVar6 = *unaff_RSI;
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    lVar6 = *unaff_RSI;
    lVar3 = FUN_00e8b990();
    if (lVar3 != 0) {
      lVar6 = *(longlong *)(lVar6 + 0x20 + (ulonglong)(*(uint *)(lVar3 + 0x154) & 1) * 8);
    }
  }
  lVar6 = *(longlong *)(lVar6 + 0x40);
  if (lVar6 != 0) {
    FUN_00d50b00();
  }
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01508530();
  if (lVar6 != 0) {
    FUN_00d50b20();
  }
  pVar4 = extraout_var_00;
  if ((extraout_var_00 != 0) && (extraout_var != 0)) {
    cVar1 = FUN_00e7c020();
    pVar4 = 0xffffffff;
    if (cVar1 != '\0') {
      return 0xffffffff;
    }
    if ((extraout_var_00 != 0) && (extraout_var != 0)) {
      cVar1 = FUN_00e7c020();
      pVar4 = 1;
      if (cVar1 != '\0') {
        return 1;
      }
    }
  }
  pvVar2 = _pthread_getspecific(pVar4);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_017db880();
  pvVar2 = _pthread_getspecific(pVar4);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  dVar7 = (double)FUN_0125a280();
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  pvVar2 = _pthread_getspecific(pVar4);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_017db880();
  pvVar2 = _pthread_getspecific(pVar4);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  dVar8 = (double)FUN_0125a280();
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  uVar5 = 0xffffffff;
  if (dVar8 <= dVar7) {
    uVar5 = (ulonglong)(dVar8 < dVar7);
  }
  return uVar5;
}


