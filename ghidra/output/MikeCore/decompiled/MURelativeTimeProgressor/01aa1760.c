// Function: FUN_01aa1760
// Address: 01aa1760
// Size: 509 bytes
// Class: MURelativeTimeProgressor
// String references:
//   "MURelativeTimeProgressor"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_01aa1760(pthread_key_t param_1)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  void *pvVar4;
  longlong **pplVar5;
  longlong *unaff_RDI;
  longlong local_40;
  char local_38;
  longlong *local_30;
  char local_28;
  double local_20;
  
  (**(code **)(*unaff_RDI + 0xf8))();
  plVar1 = local_30;
  if ((local_28 != '\0') && (local_30 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  local_20 = (double)CONCAT44(local_20._4_4_,DAT_02390d00);
  if (plVar1 == (longlong *)0x0) goto LAB_01aa18a5;
  (**(code **)(*unaff_RDI + 0xf8))();
  pplVar5 = &local_30;
  FUN_012d4ed0();
  plVar1 = local_30;
  if ((DAT_027ae7d0 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
    _DAT_02702338 = FUN_00018c10();
    _DAT_02702320 = "MURelativeTimeProgressor";
    _DAT_02702328 = 0x58;
    param_1 = 0x323950;
    _DAT_02702330 = FUN_00323950;
    _DAT_02702340 = 0;
    uRam0000000002702348 = 0;
    _DAT_02702350 = 0;
    uRam0000000002702358 = 0;
    _DAT_02702360 = 0;
    uRam0000000002702368 = 0;
    _DAT_02702370 = 0;
    uRam0000000002702378 = 0;
    _DAT_02702380 = 0;
    uRam0000000002702388 = 0;
    _DAT_02702390 = 0;
    uRam0000000002702398 = 0;
    _DAT_027023a0 = 0;
    uRam00000000027023a8 = 0;
    _DAT_027023b0 = 0;
    uRam00000000027023b8 = 0;
    _DAT_027023c0 = 0;
    uRam00000000027023c8 = 0;
    _DAT_027023d0 = 0;
    uRam00000000027023d8 = 0;
    _DAT_027023e0 = 0;
    ___cxa_guard_release();
  }
  if (plVar1 == (longlong *)0x0) {
LAB_01aa1801:
    pplVar5 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar2 = FUN_00e85ea0();
    if (cVar2 == '\0') goto LAB_01aa1801;
  }
  plVar1 = *pplVar5;
  if (*(char *)(pplVar5 + 1) == '\0') {
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar5 + 1) = 0;
  }
  if ((local_28 != '\0') && (local_30 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if (plVar1 != (longlong *)0x0) {
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_20 = (double)FUN_0141ccc0();
    FUN_00d50b20();
    local_20 = (double)(ulonglong)(uint)(float)local_20;
  }
LAB_01aa18a5:
  return (ulonglong)local_20 & 0xffffffff;
}


