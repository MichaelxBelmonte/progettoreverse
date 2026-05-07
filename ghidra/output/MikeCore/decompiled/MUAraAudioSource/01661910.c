// Function: FUN_01661910
// Address: 01661910
// Size: 723 bytes
// Class: MUAraAudioSource
// String references:
//   "_composition"
//   "MUAraAudioSource"


/* WARNING: Removing unreachable block (ram,0x0166193e) */
/* WARNING: Removing unreachable block (ram,0x01661947) */
/* WARNING: Removing unreachable block (ram,0x016619f6) */
/* WARNING: Removing unreachable block (ram,0x016619ff) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01661910(pthread_key_t param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  void *pvVar6;
  undefined8 *unaff_RSI;
  longlong **pplVar7;
  undefined4 uVar8;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  longlong *local_50;
  char local_48;
  longlong *local_40;
  char local_38;
  
  uVar8 = FUN_00d50f50();
  if ((DAT_0272a630 == '\0') &&
     (iVar4 = ___cxa_guard_acquire(), uVar8 = extraout_XMM0_Da_01, iVar4 != 0)) {
    _DAT_02708978 = FUN_0049c750();
    _DAT_02708960 = "MUAraAudioSource";
    _DAT_02708968 = 0x138;
    param_1 = 0x49c720;
    _DAT_02708970 = FUN_0049c720;
    _DAT_02708980 = 0;
    uRam0000000002708988 = 0;
    _DAT_02708990 = 0;
    uRam0000000002708998 = 0;
    _DAT_027089a0 = 0;
    uRam00000000027089a8 = 0;
    _DAT_027089b0 = 0;
    uRam00000000027089b8 = 0;
    _DAT_027089c0 = 0;
    uRam00000000027089c8 = 0;
    _DAT_027089d0 = 0;
    uRam00000000027089d8 = 0;
    _DAT_027089e0 = 0;
    uRam00000000027089e8 = 0;
    _DAT_027089f0 = 0;
    uRam00000000027089f8 = 0;
    _DAT_02708a00 = 0;
    uRam0000000002708a08 = 0;
    _DAT_02708a10 = 0;
    uRam0000000002708a18 = 0;
    _DAT_02708a20 = 0;
    uVar8 = ___cxa_guard_release();
  }
  lVar5 = FUN_00e85ef0(uVar8,1);
  if (lVar5 == 0) {
    FUN_00e858c0(extraout_XMM0_Da,1);
  }
  FUN_00d74120();
  plVar2 = local_40;
  if ((((local_38 == '\0') && (local_40 != (longlong *)0x0)) && (FUN_00d50b00(), local_38 != '\0'))
     && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  cVar3 = (**(code **)(*(longlong *)*unaff_RSI + 0x590))();
  if (cVar3 == '\0') goto LAB_01661b1d;
  local_50 = plVar2;
  local_48 = '\0';
  pplVar7 = &local_40;
  (**(code **)(*(longlong *)*unaff_RSI + 0x578))(extraout_XMM0_Da_00,&local_50);
  plVar1 = local_40;
  FUN_000be210();
  if (plVar1 == (longlong *)0x0) {
LAB_01661a57:
    pplVar7 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 == '\0') goto LAB_01661a57;
  }
  plVar1 = *pplVar7;
  if (*(char *)(pplVar7 + 1) == '\0') {
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar7 + 1) = 0;
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 != (longlong *)0x0) {
    pvVar6 = _pthread_getspecific(param_1);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01505de0();
    pvVar6 = _pthread_getspecific(param_1);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_00d50130();
    FUN_00d50b20();
  }
LAB_01661b1d:
  if (plVar2 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}


