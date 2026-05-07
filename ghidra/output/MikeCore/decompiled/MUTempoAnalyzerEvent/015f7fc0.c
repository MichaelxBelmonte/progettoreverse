// Function: FUN_015f7fc0
// Address: 015f7fc0
// Size: 522 bytes
// Class: MUTempoAnalyzerEvent


void FUN_015f7fc0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  void *pvVar2;
  longlong lVar3;
  undefined8 *puVar4;
  pthread_key_t in_ECX;
  undefined4 unaff_ESI;
  undefined8 *unaff_RDI;
  undefined4 in_XMM4_Da;
  undefined4 in_XMM5_Da;
  
  puVar1 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar1 = &DAT_02514d30;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x54) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x5c) = 0;
  FUN_00d500e0();
  pvVar2 = _pthread_getspecific(in_ECX);
  puVar4 = puVar1;
  if ((pvVar2 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
    puVar4 = (undefined8 *)puVar1[(ulonglong)(*(uint *)(lVar3 + 0x154) & 1) + 4];
  }
  puVar4[7] = param_1;
  pvVar2 = _pthread_getspecific(in_ECX);
  puVar4 = puVar1;
  if ((pvVar2 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
    puVar4 = (undefined8 *)puVar1[(ulonglong)(*(uint *)(lVar3 + 0x154) & 1) + 4];
  }
  puVar4[8] = param_2;
  pvVar2 = _pthread_getspecific(in_ECX);
  puVar4 = puVar1;
  if ((pvVar2 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
    puVar4 = (undefined8 *)puVar1[(ulonglong)(*(uint *)(lVar3 + 0x154) & 1) + 4];
  }
  puVar4[9] = param_3;
  pvVar2 = _pthread_getspecific(in_ECX);
  puVar4 = puVar1;
  if ((pvVar2 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
    puVar4 = (undefined8 *)puVar1[(ulonglong)(*(uint *)(lVar3 + 0x154) & 1) + 4];
  }
  puVar4[10] = param_4;
  pvVar2 = _pthread_getspecific(in_ECX);
  puVar4 = puVar1;
  if ((pvVar2 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
    puVar4 = (undefined8 *)puVar1[(ulonglong)(*(uint *)(lVar3 + 0x154) & 1) + 4];
  }
  *(undefined4 *)(puVar4 + 0xb) = in_XMM4_Da;
  pvVar2 = _pthread_getspecific(in_ECX);
  puVar4 = puVar1;
  if ((pvVar2 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
    puVar4 = (undefined8 *)puVar1[(ulonglong)(*(uint *)(lVar3 + 0x154) & 1) + 4];
  }
  *(undefined4 *)((longlong)puVar4 + 0x5c) = in_XMM5_Da;
  pvVar2 = _pthread_getspecific(in_ECX);
  puVar4 = puVar1;
  if ((pvVar2 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
    puVar4 = (undefined8 *)puVar1[(ulonglong)(*(uint *)(lVar3 + 0x154) & 1) + 4];
  }
  *(undefined4 *)(puVar4 + 0xc) = unaff_ESI;
  *unaff_RDI = puVar1;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}


