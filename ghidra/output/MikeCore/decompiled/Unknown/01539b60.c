// Function: FUN_01539b60
// Address: 01539b60
// Size: 1751 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x0153a1b9) */
/* WARNING: Removing unreachable block (ram,0x0153a1c2) */
/* WARNING: Removing unreachable block (ram,0x0153a0fd) */
/* WARNING: Removing unreachable block (ram,0x0153a106) */
/* WARNING: Removing unreachable block (ram,0x0153a027) */
/* WARNING: Removing unreachable block (ram,0x0153a033) */
/* WARNING: Removing unreachable block (ram,0x01539eda) */
/* WARNING: Removing unreachable block (ram,0x01539ee6) */
/* WARNING: Removing unreachable block (ram,0x01539f42) */
/* WARNING: Removing unreachable block (ram,0x01539f4e) */
/* WARNING: Removing unreachable block (ram,0x0153a08f) */
/* WARNING: Removing unreachable block (ram,0x0153a09b) */
/* WARNING: Removing unreachable block (ram,0x0153a14e) */
/* WARNING: Removing unreachable block (ram,0x0153a157) */
/* WARNING: Removing unreachable block (ram,0x0153a1ea) */
/* WARNING: Removing unreachable block (ram,0x0153a1f3) */
/* WARNING: Removing unreachable block (ram,0x01539d1f) */
/* WARNING: Removing unreachable block (ram,0x01539d28) */

void FUN_01539b60(double param_1,double param_2)

{
  longlong *plVar1;
  void *pvVar2;
  longlong lVar3;
  undefined8 *puVar4;
  pthread_key_t in_ECX;
  pthread_key_t pVar5;
  longlong *plVar6;
  longlong *local_48;
  char local_40;
  
  plVar1 = (longlong *)FUN_00e8fc40();
  FUN_0006e3a0();
  (**(code **)(*plVar1 + 0x18))();
  pvVar2 = _pthread_getspecific(in_ECX);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012642b0(param_1);
  pvVar2 = _pthread_getspecific(in_ECX);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01259540();
  pvVar2 = _pthread_getspecific(in_ECX);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01264320(0);
  pvVar2 = _pthread_getspecific(in_ECX);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01264390(param_2 - param_1);
  pvVar2 = _pthread_getspecific(in_ECX);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  plVar1 = (longlong *)0x0;
  FUN_01510360(0,0,0);
  if ((local_40 == '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  pvVar2 = _pthread_getspecific((pthread_key_t)plVar1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  pvVar2 = _pthread_getspecific((pthread_key_t)plVar1);
  plVar6 = local_48;
  if ((pvVar2 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
    plVar1 = local_48;
    plVar6 = (longlong *)local_48[(ulonglong)(*(uint *)(lVar3 + 0x154) & 1) + 4];
  }
  pvVar2 = _pthread_getspecific((pthread_key_t)plVar1);
  plVar1 = local_48;
  if ((pvVar2 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
    plVar1 = (longlong *)local_48[(ulonglong)(*(uint *)(lVar3 + 0x154) & 1) + 4];
  }
  FUN_00b518d0();
  (**(code **)(*plVar1 + 0x378))();
  lVar3 = *plVar6;
  (**(code **)(lVar3 + 0x3a0))();
  pVar5 = (pthread_key_t)lVar3;
  FUN_012595a0();
  puVar4 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar4 = &DAT_025c07e8;
  puVar4[7] = 0;
  puVar4[8] = 0;
  puVar4[9] = 0;
  FUN_00d500e0();
  pvVar2 = _pthread_getspecific(pVar5);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012c7210(0);
  pvVar2 = _pthread_getspecific(pVar5);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012c7130();
  pvVar2 = _pthread_getspecific(pVar5);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01270260();
  puVar4 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar4 = &DAT_025c07e8;
  puVar4[7] = 0;
  puVar4[8] = 0;
  puVar4[9] = 0;
  FUN_00d500e0();
  pvVar2 = _pthread_getspecific(pVar5);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012c7210(param_2 - param_1);
  pvVar2 = _pthread_getspecific(pVar5);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012c7130();
  pvVar2 = _pthread_getspecific(pVar5);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01270260();
  pvVar2 = _pthread_getspecific(pVar5);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e6a70();
  puVar4 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  pVar5 = 0x2572358;
  *puVar4 = &DAT_02572358;
  (*DAT_02572370)();
  FUN_00d21140();
  pvVar2 = _pthread_getspecific(pVar5);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0150ddd0();
  FUN_00e7bdb0();
  FUN_01287c80();
  FUN_00d50b20();
  FUN_00d50b20();
  FUN_00d50b20();
  if (local_48 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}


