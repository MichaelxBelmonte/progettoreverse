// Function: FUN_0150bf50
// Address: 0150bf50
// Size: 1109 bytes
// Class: MUPercussivePitchSystem


/* WARNING: Removing unreachable block (ram,0x0150c2a9) */
/* WARNING: Removing unreachable block (ram,0x0150c0d4) */
/* WARNING: Removing unreachable block (ram,0x0150c0dd) */
/* WARNING: Removing unreachable block (ram,0x0150c2f2) */
/* WARNING: Removing unreachable block (ram,0x0150c2fb) */

void FUN_0150bf50(pthread_key_t param_1)

{
  longlong *plVar1;
  void *pvVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  pthread_key_t pVar6;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  longlong local_70;
  char local_68;
  longlong local_40;
  char local_38;
  
  if (*unaff_RSI != 0) {
    if (*(longlong *)(unaff_RDI + 0x80) == 0) {
      plVar1 = (longlong *)FUN_00e8fc40();
      FUN_0124b580();
      (**(code **)(*plVar1 + 0x18))();
      FUN_0150ceb0();
      FUN_00d50b20();
    }
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0173b6f0();
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_00d51d20();
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    uVar3 = FUN_00e7bdb0();
    uVar4 = FUN_00e7bdb0();
    FUN_012502a0(uVar4,uVar3,1);
    pVar6 = (pthread_key_t)uVar4;
    if (local_40 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    pvVar2 = _pthread_getspecific(pVar6);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    plVar1 = (longlong *)*unaff_RSI;
    pvVar2 = _pthread_getspecific(pVar6);
    if (pvVar2 != (void *)0x0) {
      plVar1 = (longlong *)*unaff_RSI;
      lVar5 = FUN_00e8b990();
      if (lVar5 != 0) {
        plVar1 = (longlong *)plVar1[(ulonglong)(*(uint *)(lVar5 + 0x154) & 1) + 4];
      }
    }
    (**(code **)(*plVar1 + 0x3f0))();
    FUN_0124ae40();
    if (*(longlong *)(unaff_RDI + 0x78) == 0) {
      plVar1 = (longlong *)FUN_00e8fc40();
      FUN_0151f500();
      (**(code **)(*plVar1 + 0x18))();
      FUN_0150d0b0();
      FUN_00d50b20();
    }
    pvVar2 = _pthread_getspecific(pVar6);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    pvVar2 = _pthread_getspecific(pVar6);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0173b790();
    pvVar2 = _pthread_getspecific(pVar6);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_00d51d20();
    if (local_40 != 0) {
      FUN_00d50b00();
    }
    FUN_01822eb0();
    if (local_40 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    pvVar2 = _pthread_getspecific(pVar6);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    plVar1 = (longlong *)*unaff_RSI;
    pvVar2 = _pthread_getspecific(pVar6);
    if (pvVar2 != (void *)0x0) {
      plVar1 = (longlong *)*unaff_RSI;
      lVar5 = FUN_00e8b990();
      if (lVar5 != 0) {
        plVar1 = (longlong *)plVar1[(ulonglong)(*(uint *)(lVar5 + 0x154) & 1) + 4];
      }
    }
    (**(code **)(*plVar1 + 0x3f0))();
    FUN_018232c0();
  }
  return;
}


