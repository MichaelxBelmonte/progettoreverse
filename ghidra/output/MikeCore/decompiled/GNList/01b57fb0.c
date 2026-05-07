// Function: FUN_01b57fb0
// Address: 01b57fb0
// Size: 1786 bytes
// Class: GNList


/* WARNING: Removing unreachable block (ram,0x01b5846c) */
/* WARNING: Removing unreachable block (ram,0x01b58475) */
/* WARNING: Removing unreachable block (ram,0x01b5825e) */
/* WARNING: Removing unreachable block (ram,0x01b58267) */
/* WARNING: Removing unreachable block (ram,0x01b5867b) */
/* WARNING: Removing unreachable block (ram,0x01b58684) */

undefined8 * FUN_01b57fb0(double param_1,undefined8 param_2,undefined8 param_3,double param_4)

{
  code *pcVar1;
  longlong *plVar2;
  void *pvVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  pthread_key_t in_ECX;
  undefined8 *unaff_RDI;
  double dVar6;
  double dVar7;
  
  plVar2 = (longlong *)FUN_011114e0();
  (**(code **)(*plVar2 + 0x18))();
  pvVar3 = _pthread_getspecific(in_ECX);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013ef430(DAT_0241d650,DAT_0241d650);
  puVar4 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  puVar4[0xb] = 0;
  puVar4[7] = 0;
  puVar4[8] = 0;
  *(undefined8 *)((longlong)puVar4 + 0x43) = 0;
  *(undefined8 *)((longlong)puVar4 + 0x4b) = 0;
  *puVar4 = &DAT_025e2f90;
  puVar4[0xc] = 0;
  puVar4[0xd] = 0;
  puVar4[0xe] = 0;
  puVar4[0xf] = 0;
  *(undefined1 *)(puVar4 + 0x10) = 0;
  pcVar1 = DAT_025e2fa8;
  (*DAT_025e2fa8)();
  pvVar3 = _pthread_getspecific(in_ECX);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013fae90(0);
  pvVar3 = _pthread_getspecific(in_ECX);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013faee0(param_1);
  pvVar3 = _pthread_getspecific(in_ECX);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0142c830(DAT_0241d658);
  pvVar3 = _pthread_getspecific(in_ECX);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  dVar6 = DAT_0241d658 * (param_4 - param_1);
  FUN_0142c880();
  pvVar3 = _pthread_getspecific(in_ECX);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0142c8d0(DAT_023934c8);
  pvVar3 = _pthread_getspecific(in_ECX);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  dVar7 = (param_4 - param_1) * DAT_023934c8;
  FUN_0142c920();
  pvVar3 = _pthread_getspecific(in_ECX);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013ecb30();
  puVar5 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  puVar5[0xb] = 0;
  puVar5[7] = 0;
  puVar5[8] = 0;
  *(undefined8 *)((longlong)puVar5 + 0x43) = 0;
  *(undefined8 *)((longlong)puVar5 + 0x4b) = 0;
  *puVar5 = &DAT_025e2f90;
  puVar5[0xc] = 0;
  puVar5[0xd] = 0;
  puVar5[0xe] = 0;
  puVar5[0xf] = 0;
  *(undefined1 *)(puVar5 + 0x10) = 0;
  (*pcVar1)();
  if (puVar4 == puVar5) {
    FUN_00d50b20();
  }
  else {
    FUN_00d50b20();
    puVar4 = puVar5;
  }
  pvVar3 = _pthread_getspecific(in_ECX);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013fae90(param_2);
  pvVar3 = _pthread_getspecific(in_ECX);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013faee0(param_3);
  pvVar3 = _pthread_getspecific(in_ECX);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0142c830(DAT_0241d658);
  pvVar3 = _pthread_getspecific(in_ECX);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0142c880(dVar6);
  pvVar3 = _pthread_getspecific(in_ECX);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0142c8d0(DAT_023934c8);
  pvVar3 = _pthread_getspecific(in_ECX);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0142c920(dVar7);
  pvVar3 = _pthread_getspecific(in_ECX);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013ecb30();
  puVar5 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  puVar5[0xb] = 0;
  puVar5[7] = 0;
  puVar5[8] = 0;
  *(undefined8 *)((longlong)puVar5 + 0x43) = 0;
  *(undefined8 *)((longlong)puVar5 + 0x4b) = 0;
  *puVar5 = &DAT_025e2f90;
  puVar5[0xc] = 0;
  puVar5[0xd] = 0;
  puVar5[0xe] = 0;
  puVar5[0xf] = 0;
  *(undefined1 *)(puVar5 + 0x10) = 0;
  (*pcVar1)();
  if (puVar5 == puVar4) {
    FUN_00d50b20();
  }
  else {
    FUN_00d50b20();
  }
  pvVar3 = _pthread_getspecific(in_ECX);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013fae90(DAT_0238fee8);
  pvVar3 = _pthread_getspecific(in_ECX);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013faee0(param_4);
  pvVar3 = _pthread_getspecific(in_ECX);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0142c830(DAT_0241d658);
  pvVar3 = _pthread_getspecific(in_ECX);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0142c880(dVar6);
  pvVar3 = _pthread_getspecific(in_ECX);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0142c8d0(DAT_023934c8);
  pvVar3 = _pthread_getspecific(in_ECX);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0142c920(dVar7);
  pvVar3 = _pthread_getspecific(in_ECX);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013ecb30();
  *unaff_RDI = plVar2;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  FUN_00d50b20();
  return unaff_RDI;
}


