// Function: FUN_016601d0
// Address: 016601d0
// Size: 585 bytes
// Class: GNValue
// String references:
//   "GNValue"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_016601d0(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  undefined8 *puVar4;
  void *pvVar5;
  pthread_key_t pVar6;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  
  plVar1 = (longlong *)*param_2;
  if ((DAT_0270c850 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
    _DAT_026d4348 = FUN_00d4fe50();
    _DAT_026d4330 = "GNValue";
    _DAT_026d4338 = 0x18;
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
    cVar2 = FUN_00e85ea0();
    if (cVar2 != '\0') goto LAB_01660226;
  }
  param_2 = &DAT_02802688;
LAB_01660226:
  if (*param_2 == 0) {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
  }
  else {
    puVar4 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *(undefined4 *)(puVar4 + 7) = 0;
    puVar4[8] = 0;
    puVar4[9] = 0;
    pVar6 = 0x2616568;
    *puVar4 = &DAT_02616568;
    puVar4[10] = 0;
    (*DAT_02616580)();
    pvVar5 = _pthread_getspecific(pVar6);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    if (unaff_RSI != 0) {
      FUN_00d50b00();
    }
    FUN_01822120();
    if (unaff_RSI != 0) {
      FUN_00d50b20();
    }
    pvVar5 = _pthread_getspecific(pVar6);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_00dd63c0();
    FUN_0190b370();
    *unaff_RDI = puVar4;
    *(undefined1 *)(unaff_RDI + 1) = 1;
  }
  return unaff_RDI;
}


