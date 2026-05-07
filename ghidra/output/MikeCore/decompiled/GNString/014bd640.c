// Function: FUN_014bd640
// Address: 014bd640
// Size: 632 bytes
// Class: GNString


void FUN_014bd640(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  void *pvVar3;
  longlong lVar4;
  pthread_key_t in_ECX;
  longlong lVar5;
  longlong unaff_RDI;
  undefined4 uVar6;
  longlong local_40;
  char local_38;
  
  if (((*(longlong *)(unaff_RDI + 0x88) != 0) && (*(longlong *)(unaff_RDI + 0x48) != 0)) &&
     (*(longlong *)(unaff_RDI + 0x40) != 0)) {
    pvVar3 = _pthread_getspecific(in_ECX);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013eb920();
    if (local_38 != '\0') {
      FUN_00d50b20();
    }
    lVar5 = *(longlong *)(unaff_RDI + 0x88);
    pvVar3 = _pthread_getspecific(in_ECX);
    if (pvVar3 != (void *)0x0) {
      lVar5 = *(longlong *)(unaff_RDI + 0x88);
      lVar4 = FUN_00e8b990();
      if (lVar4 != 0) {
        lVar5 = *(longlong *)(lVar5 + 0x20 + (ulonglong)(*(uint *)(lVar4 + 0x154) & 1) * 8);
      }
    }
    uVar1 = *(undefined8 *)(lVar5 + 0x50);
    pvVar3 = _pthread_getspecific(in_ECX);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013eb920();
    if (local_38 != '\0') {
      FUN_00d50b20();
    }
    pvVar3 = _pthread_getspecific(in_ECX);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013eb920();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    pvVar3 = _pthread_getspecific(in_ECX);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013eb920();
    uVar2 = *(undefined8 *)(local_40 + 0x10);
    if (local_38 != '\0') {
      FUN_00d50b20();
    }
    uVar6 = FUN_014bd8e0(param_1,uVar1,uVar2);
    FUN_00d64850();
    *(undefined4 *)(unaff_RDI + 0x80) = uVar6;
    FUN_00d64910();
    return;
  }
  FUN_00d64850();
  *(undefined4 *)(unaff_RDI + 0x80) = 0x7fc00000;
  FUN_00d64910();
  return;
}


