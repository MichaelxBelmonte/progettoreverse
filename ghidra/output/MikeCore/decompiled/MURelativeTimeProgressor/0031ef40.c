// Function: FUN_0031ef40
// Address: 0031ef40
// Size: 535 bytes
// Class: MURelativeTimeProgressor
// String references:
//   "MURelativeTimeProgressor"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_0031ef40(pthread_key_t param_1)

{
  double dVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  void *pvVar6;
  longlong *unaff_RDI;
  longlong **pplVar7;
  longlong *plVar8;
  ulonglong uVar9;
  longlong local_50;
  char local_48;
  longlong *local_40;
  char local_38;
  float local_2c;
  
  (**(code **)(*unaff_RDI + 0x438))();
  plVar8 = local_40;
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar8 == (longlong *)0x0) goto LAB_0031f06d;
  (**(code **)(*unaff_RDI + 0x438))();
  pplVar7 = &local_40;
  FUN_012d4ed0();
  plVar8 = local_40;
  if ((DAT_027ae7d0 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
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
  if (plVar8 == (longlong *)0x0) {
LAB_0031efd8:
    pplVar7 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar8 + 0x360))();
    cVar4 = FUN_00e85ea0();
    if (cVar4 == '\0') goto LAB_0031efd8;
  }
  plVar8 = *pplVar7;
  if (plVar8 == (longlong *)0x0) {
    bVar3 = true;
    bVar2 = true;
    plVar8 = (longlong *)0x0;
  }
  else {
    if (*(char *)(pplVar7 + 1) == '\0') {
      FUN_00d50b00();
    }
    else {
      *(undefined1 *)(pplVar7 + 1) = 0;
    }
    bVar3 = false;
    bVar2 = false;
  }
  if ((local_38 != '\0') && (bVar2 = bVar3, local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if (plVar8 != (longlong *)0x0) {
    pvVar6 = _pthread_getspecific(param_1);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    dVar1 = (double)FUN_0141ccc0();
    local_2c = (float)dVar1;
    if (bVar2) {
      return (ulonglong)(uint)local_2c;
    }
    FUN_00d50b20();
    return (ulonglong)(uint)local_2c;
  }
LAB_0031f06d:
  uVar9 = FUN_00324f30();
  return uVar9;
}


