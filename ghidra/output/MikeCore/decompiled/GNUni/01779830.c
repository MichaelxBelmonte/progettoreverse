// Function: FUN_01779830
// Address: 01779830
// Size: 509 bytes
// Class: GNUni


void FUN_01779830(pthread_key_t param_1)

{
  undefined8 *puVar1;
  void *pvVar2;
  longlong lVar3;
  undefined8 *unaff_RDI;
  undefined8 *puVar4;
  float fVar5;
  
  puVar1 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  puVar1[7] = 0;
  puVar1[8] = 0;
  *puVar1 = &DAT_025ff9e0;
  puVar1[0xc] = 0;
  *(undefined4 *)(puVar1 + 0xd) = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x56) = 0;
  FUN_00d500e0();
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01779ec0();
  FUN_01779ed0();
  pvVar2 = _pthread_getspecific(param_1);
  puVar4 = puVar1;
  if ((pvVar2 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
    puVar4 = (undefined8 *)puVar1[(ulonglong)(*(uint *)(lVar3 + 0x154) & 1) + 4];
  }
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  fVar5 = (float)FUN_01779ec0();
  if ((*(float *)(puVar4 + 0xd) != fVar5) || (NAN(*(float *)(puVar4 + 0xd)) || NAN(fVar5))) {
    FUN_00d64850();
    *(float *)(puVar4 + 0xd) = fVar5;
    FUN_00d64910();
  }
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01779f30();
  FUN_01779f40();
  *unaff_RDI = puVar1;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}


