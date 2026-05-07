// Function: FUN_01690310
// Address: 01690310
// Size: 611 bytes
// Class: MUAraPlugInWrapperDelegate
// String references:
//   "MUAraPlugInWrapperDelegate"


/* WARNING: Removing unreachable block (ram,0x016904b0) */
/* WARNING: Removing unreachable block (ram,0x016904b9) */
/* WARNING: Removing unreachable block (ram,0x016903e9) */
/* WARNING: Removing unreachable block (ram,0x0169034d) */
/* WARNING: Removing unreachable block (ram,0x01690356) */
/* WARNING: Removing unreachable block (ram,0x01690436) */
/* WARNING: Removing unreachable block (ram,0x0169043f) */
/* WARNING: Removing unreachable block (ram,0x0169048f) */
/* WARNING: Removing unreachable block (ram,0x01690494) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01690310(pthread_key_t param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  void *pvVar5;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  
  FUN_016948c0();
  lVar1 = *unaff_RSI;
  FUN_00d21140();
  plVar2 = *(longlong **)(unaff_RDI + 0x28);
  if ((DAT_02723560 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
    _DAT_02723548 = "MUAraPlugInWrapperDelegate";
    DAT_02723558 = 0;
    _DAT_02723550 = 0;
    ___cxa_guard_release();
  }
  if (plVar2 == (longlong *)0x0) {
    lVar4 = 0;
  }
  else {
    (**(code **)(*plVar2 + 0x360))();
    lVar4 = FUN_00e86120();
  }
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012c8f20();
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  (**(code **)(*(longlong *)((longlong)plVar2 + lVar4) + 0x48))();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012c81e0();
  if (lVar1 != 0) {
    FUN_00d50b00();
    for (iVar3 = 0; iVar3 < *(int *)(lVar1 + 0xc); iVar3 = iVar3 + 1) {
      FUN_0168f6a0();
    }
    FUN_00277f20();
    FUN_00d50b20();
  }
  return;
}


