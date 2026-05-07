// Function: FUN_01ca2ec0
// Address: 01ca2ec0
// Size: 674 bytes
// Class: GNValue
// String references:
//   "GNValue"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01ca2ec0(undefined8 param_1)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  void *pvVar5;
  pthread_key_t in_ECX;
  longlong **pplVar6;
  double dVar7;
  longlong local_50;
  char local_48;
  double local_40;
  longlong *local_38;
  char local_30;
  
  lVar2 = DAT_027ed440;
  local_40 = (double)param_1;
  if (DAT_027ed440 != 0) {
    param_1 = FUN_00d50b00();
  }
  local_50 = lVar2;
  local_48 = '\x01';
  pplVar6 = &local_38;
  FUN_01cacbe0(param_1,&local_50);
  plVar1 = local_38;
  if ((DAT_0270c850 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
    _DAT_026d4348 = FUN_00d4fe50();
    _DAT_026d4330 = "GNValue";
    _DAT_026d4338 = 0x18;
    in_ECX = 0x53cb0;
    _DAT_026d4340 = FUN_00053cb0;
    _DAT_026d4350 = 0;
    uRam00000000026d4358 = 0;
    _DAT_026d4360 = 0;
    uRam00000000026d4368 = 0;
    _DAT_026d4370 = 0;
    uRam00000000026d4378 = 0;
    _DAT_026d4380 = 0;
    uRam00000000026d4388 = 0;
    _DAT_026d4390 = 0;
    uRam00000000026d4398 = 0;
    _DAT_026d43a0 = 0;
    uRam00000000026d43a8 = 0;
    _DAT_026d43b0 = 0;
    uRam00000000026d43b8 = 0;
    _DAT_026d43c0 = 0;
    uRam00000000026d43c8 = 0;
    _DAT_026d43d0 = 0;
    uRam00000000026d43d8 = 0;
    _DAT_026d43e0 = 0;
    uRam00000000026d43e8 = 0;
    _DAT_026d43f0 = 0;
    ___cxa_guard_release();
  }
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 != '\0') goto LAB_01ca2f47;
  }
  pplVar6 = (longlong **)&DAT_02802688;
LAB_01ca2f47:
  plVar1 = *pplVar6;
  if (*(char *)(pplVar6 + 1) == '\0') {
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar6 + 1) = 0;
  }
  if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if (plVar1 != (longlong *)0x0) {
    FUN_00dd6320();
    FUN_01a8c310();
    pvVar5 = _pthread_getspecific(in_ECX);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_40 = (double)FUN_016c25f0(local_40);
    if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    dVar7 = (double)FUN_00e7c860();
    FUN_01a8c310();
    pvVar5 = _pthread_getspecific(in_ECX);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_40 = (double)FUN_016c26c0(local_40 - dVar7);
    if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  FUN_01a8fc90(local_40);
  return;
}


