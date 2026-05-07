// Function: FUN_0170ff60
// Address: 0170ff60
// Size: 831 bytes
// Class: MUSpectrumShaper


/* WARNING: Removing unreachable block (ram,0x0171027a) */
/* WARNING: Removing unreachable block (ram,0x017100ef) */
/* WARNING: Removing unreachable block (ram,0x017100fb) */
/* WARNING: Removing unreachable block (ram,0x017101fb) */
/* WARNING: Removing unreachable block (ram,0x01710204) */
/* WARNING: Removing unreachable block (ram,0x01710283) */

void FUN_0170ff60(pthread_key_t param_1)

{
  char cVar1;
  longlong *plVar2;
  void *pvVar3;
  longlong lVar4;
  longlong unaff_RDI;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  if (*(longlong *)(unaff_RDI + 0x78) != 0) {
    plVar2 = (longlong *)FUN_00e8fc40();
    FUN_0013dd30();
    (**(code **)(*plVar2 + 0x18))();
    pvVar3 = _pthread_getspecific(param_1);
    if ((pvVar3 == (void *)0x0) || (lVar4 = FUN_00e8b990(), lVar4 == 0)) {
      lVar4 = *(longlong *)(unaff_RDI + 0x78);
    }
    else {
      lVar4 = *(longlong *)(unaff_RDI + 0x78);
    }
    if (lVar4 != 0) {
      FUN_00d50b00();
    }
    FUN_0150c7f0();
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01313b00();
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_015058d0();
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    cVar1 = FUN_01512890();
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (cVar1 != '\0') {
      pvVar3 = _pthread_getspecific(param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01313b00();
      pvVar3 = _pthread_getspecific(param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_015058d0();
      pvVar3 = _pthread_getspecific(param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01512890();
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0150c7f0();
    FUN_00d50b20();
  }
  return;
}


