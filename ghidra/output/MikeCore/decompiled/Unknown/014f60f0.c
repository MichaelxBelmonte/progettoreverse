// Function: FUN_014f60f0
// Address: 014f60f0
// Size: 1491 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x014f659b) */
/* WARNING: Removing unreachable block (ram,0x014f65a4) */
/* WARNING: Removing unreachable block (ram,0x014f6531) */
/* WARNING: Removing unreachable block (ram,0x014f653d) */
/* WARNING: Removing unreachable block (ram,0x014f65f8) */
/* WARNING: Removing unreachable block (ram,0x014f6601) */
/* WARNING: Removing unreachable block (ram,0x014f6140) */
/* WARNING: Removing unreachable block (ram,0x014f6149) */
/* WARNING: Removing unreachable block (ram,0x014f61b4) */
/* WARNING: Removing unreachable block (ram,0x014f61bd) */

undefined8 * FUN_014f60f0(pthread_key_t param_1,char param_2)

{
  void *pvVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *unaff_RSI;
  undefined8 *unaff_RDI;
  longlong *local_50;
  char local_48;
  
  (**(code **)(*unaff_RSI + 0x378))();
  if ((local_48 == '\0') && (local_50 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  pvVar1 = _pthread_getspecific(param_1);
  if ((pvVar1 != (void *)0x0) && (lVar2 = FUN_00e8b990(), lVar2 != 0)) {
    param_1 = (pthread_key_t)local_50;
  }
  FUN_0132d790();
  if ((local_48 == '\0') && (local_50 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  FUN_013fb320();
  pvVar1 = _pthread_getspecific(param_1);
  plVar3 = local_50;
  if ((pvVar1 != (void *)0x0) && (lVar2 = FUN_00e8b990(), lVar2 != 0)) {
    plVar3 = (longlong *)local_50[(ulonglong)(*(uint *)(lVar2 + 0x154) & 1) + 4];
  }
  (**(code **)(*plVar3 + 0x378))();
  if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  plVar3 = (longlong *)FUN_00e8fc40();
  FUN_010fe5f0();
  (**(code **)(*plVar3 + 0x18))();
  FUN_014c2f20();
  FUN_014c2f80();
  pvVar1 = _pthread_getspecific(param_1);
  if (pvVar1 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_014bb250();
  pvVar1 = _pthread_getspecific(param_1);
  if (pvVar1 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_014bb2b0();
  pvVar1 = _pthread_getspecific(param_1);
  if (pvVar1 != (void *)0x0) {
    FUN_00e8b990();
  }
  (**(code **)(*unaff_RSI + 0x3e0))();
  FUN_014bd3c0();
  pvVar1 = _pthread_getspecific(param_1);
  if (pvVar1 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_014bc170((int)unaff_RSI[0x12]);
  pvVar1 = _pthread_getspecific(param_1);
  if (pvVar1 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_014bcf80();
  pvVar1 = _pthread_getspecific(param_1);
  if (pvVar1 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_014bb8e0();
  pvVar1 = _pthread_getspecific(param_1);
  if (pvVar1 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_014bb930();
  pvVar1 = _pthread_getspecific(param_1);
  if (pvVar1 != (void *)0x0) {
    FUN_00e8b990();
  }
  lVar2 = unaff_RSI[0x21];
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  FUN_014c2990();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  pvVar1 = _pthread_getspecific(param_1);
  if (pvVar1 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_014cfcc0();
  if (param_2 != '\0') {
    pvVar1 = _pthread_getspecific(param_1);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_014ce440();
    pvVar1 = _pthread_getspecific(param_1);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_014ceed0();
    pvVar1 = _pthread_getspecific(param_1);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_014bfad0();
  }
  pvVar1 = _pthread_getspecific(param_1);
  plVar4 = plVar3;
  if ((pvVar1 != (void *)0x0) && (lVar2 = FUN_00e8b990(), lVar2 != 0)) {
    plVar4 = (longlong *)plVar3[(ulonglong)(*(uint *)(lVar2 + 0x154) & 1) + 4];
  }
  plVar4[0x19] = (longlong)unaff_RSI;
  unaff_RSI[0x29] = (longlong)plVar3;
  *unaff_RDI = plVar3;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  FUN_00d50b20();
  if (local_50 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return unaff_RDI;
}


