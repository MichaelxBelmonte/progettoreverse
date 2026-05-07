// Function: FUN_01664ba0
// Address: 01664ba0
// Size: 768 bytes
// Class: MUElementAnalyzer


/* WARNING: Removing unreachable block (ram,0x01664e27) */
/* WARNING: Removing unreachable block (ram,0x01664e30) */
/* WARNING: Removing unreachable block (ram,0x01664e89) */
/* WARNING: Removing unreachable block (ram,0x01664e96) */
/* WARNING: Removing unreachable block (ram,0x01664d93) */
/* WARNING: Removing unreachable block (ram,0x01664d9c) */
/* WARNING: Removing unreachable block (ram,0x01664dce) */
/* WARNING: Removing unreachable block (ram,0x01664dd7) */

void FUN_01664ba0(pthread_key_t param_1)

{
  void *pvVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong unaff_RDI;
  undefined8 uVar4;
  longlong local_50;
  char local_48;
  longlong local_30;
  char local_28;
  
  if ((((*(longlong *)(unaff_RDI + 0xf0) == 0) || (*(double *)(unaff_RDI + 0xc0) <= 0.0)) ||
      (*(longlong *)(unaff_RDI + 0xd0) < 1)) || (*(int *)(unaff_RDI + 0xe0) == 0)) {
    uVar4 = FUN_01505340();
    if ((local_28 == '\0') && (local_30 != 0)) {
      uVar4 = FUN_00d50b00();
    }
    FUN_012ca6e0(uVar4,0);
    if ((local_28 == '\0') && (local_30 != 0)) {
      FUN_00d50b00();
    }
    pvVar1 = _pthread_getspecific(param_1);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01505960();
    FUN_01667210();
    if (local_30 != 0) {
      FUN_00d50b20();
      FUN_00d50b20();
    }
  }
  else {
    pvVar1 = _pthread_getspecific(param_1);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0124df30();
    if ((local_28 != '\0') && (local_30 != 0)) {
      FUN_00d50b20();
    }
    if (local_30 == 0) {
      plVar3 = *(longlong **)(unaff_RDI + 0xf0);
      pvVar1 = _pthread_getspecific(param_1);
      if (pvVar1 != (void *)0x0) {
        plVar3 = *(longlong **)(unaff_RDI + 0xf0);
        lVar2 = FUN_00e8b990();
        if (lVar2 != 0) {
          plVar3 = (longlong *)plVar3[(ulonglong)(*(uint *)(lVar2 + 0x154) & 1) + 4];
        }
      }
      (**(code **)(*plVar3 + 0x3d0))();
    }
    pvVar1 = _pthread_getspecific(param_1);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0124df10();
    pvVar1 = _pthread_getspecific(param_1);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0132c9b0(2,0);
    if ((local_28 == '\0') && (local_30 != 0)) {
      FUN_00d50b00();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    FUN_01667210();
    if (local_30 != 0) {
      FUN_00d50b20();
    }
  }
  return;
}


