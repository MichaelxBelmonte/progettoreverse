// Function: FUN_016908b0
// Address: 016908b0
// Size: 689 bytes
// Class: MUAraPlugInWrapperDelegate
// String references:
//   "MUAraPlugInWrapperDelegate"


/* WARNING: Removing unreachable block (ram,0x01690971) */
/* WARNING: Removing unreachable block (ram,0x01690939) */
/* WARNING: Removing unreachable block (ram,0x01690942) */
/* WARNING: Removing unreachable block (ram,0x01690b02) */
/* WARNING: Removing unreachable block (ram,0x01690b0b) */
/* WARNING: Removing unreachable block (ram,0x01690980) */
/* WARNING: Removing unreachable block (ram,0x016909a0) */
/* WARNING: Removing unreachable block (ram,0x01690982) */
/* WARNING: Removing unreachable block (ram,0x016909a2) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_016908b0(pthread_key_t param_1)

{
  longlong *plVar1;
  int iVar2;
  void *pvVar3;
  longlong lVar4;
  longlong lVar5;
  longlong unaff_RDI;
  longlong local_58;
  char local_50;
  int local_40;
  
  lVar5 = local_58;
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012c81e0();
  if (local_50 == '\0') {
    if (local_58 == 0) goto LAB_016909f2;
    FUN_00d50b00();
  }
  else if (local_58 == 0) goto LAB_016909f2;
  local_50 = '\0';
  local_58 = 0;
  local_40 = -1;
  while( true ) {
    lVar4 = (longlong)local_40;
    local_40 = local_40 + 1;
    if (*(int *)(lVar5 + 0xc) <= local_40) break;
    local_58 = *(longlong *)(*(longlong *)(lVar5 + 0x10) + 8 + lVar4 * 8);
    FUN_0168eff0();
  }
  FUN_00277f20();
  param_1 = (pthread_key_t)lVar5;
  FUN_00d50b20();
LAB_016909f2:
  plVar1 = *(longlong **)(unaff_RDI + 0x28);
  if ((DAT_02723560 == '\0') && (iVar2 = ___cxa_guard_acquire(), iVar2 != 0)) {
    _DAT_02723548 = "MUAraPlugInWrapperDelegate";
    DAT_02723558 = 0;
    _DAT_02723550 = 0;
    ___cxa_guard_release();
  }
  if (plVar1 == (longlong *)0x0) {
    lVar5 = 0;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    lVar5 = FUN_00e86120();
  }
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012c8f20();
  if (local_50 == '\0') {
    if (local_58 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_50 = '\0';
  }
  (**(code **)(*(longlong *)((longlong)plVar1 + lVar5) + 0x50))();
  if (local_58 != 0) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d23f50();
  return;
}


