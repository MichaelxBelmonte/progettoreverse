// Function: FUN_01a779a0
// Address: 01a779a0
// Size: 652 bytes
// Class: MUTimeHandleToolViewInfo


/* WARNING: Removing unreachable block (ram,0x01a77b10) */
/* WARNING: Removing unreachable block (ram,0x01a77b19) */
/* WARNING: Removing unreachable block (ram,0x01a77a64) */
/* WARNING: Removing unreachable block (ram,0x01a77a6d) */
/* WARNING: Removing unreachable block (ram,0x01a77aef) */
/* WARNING: Removing unreachable block (ram,0x01a77af4) */

longlong * FUN_01a779a0(pthread_key_t param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  void *pvVar5;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong lVar6;
  longlong local_78;
  char local_70;
  longlong local_68;
  char local_60;
  
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01266fe0();
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012f5210();
  lVar1 = *param_2;
  cVar4 = FUN_00d23d70();
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  if (cVar4 != '\0') {
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e5ae0();
    if (lVar1 != 0) {
      FUN_00d50b00();
      lVar6 = 0;
      while ((int)lVar6 < *(int *)(lVar1 + 0xc)) {
        lVar2 = *(longlong *)(*(longlong *)(lVar1 + 0x10) + lVar6 * 8);
        pvVar5 = _pthread_getspecific(param_1);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01274b60();
        lVar3 = *unaff_RSI;
        if ((local_60 != '\0') && (local_68 != 0)) {
          FUN_00d50b20();
        }
        lVar6 = lVar6 + 1;
        if (local_68 == lVar3) {
          *(undefined1 *)(unaff_RDI + 1) = 0;
          if (lVar2 != 0) {
            FUN_00d50b00();
          }
          *unaff_RDI = lVar2;
          *(undefined1 *)(unaff_RDI + 1) = 1;
          FUN_001159b0();
          FUN_00d50b20();
          return unaff_RDI;
        }
      }
      FUN_001159b0();
      FUN_00d50b20();
    }
  }
  *(undefined1 *)(unaff_RDI + 1) = 0;
  *unaff_RDI = 0;
  return unaff_RDI;
}


