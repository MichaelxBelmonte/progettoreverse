// Function: FUN_01416f10
// Address: 01416f10
// Size: 1215 bytes
// Class: MUAmplitudeAnalyzer
// String references:
//   "MUAmplitudeAnalyzer"


/* WARNING: Removing unreachable block (ram,0x014172c0) */
/* WARNING: Removing unreachable block (ram,0x014172c9) */
/* WARNING: Removing unreachable block (ram,0x014173ae) */
/* WARNING: Removing unreachable block (ram,0x01417038) */
/* WARNING: Removing unreachable block (ram,0x01417041) */
/* WARNING: Removing unreachable block (ram,0x01417097) */
/* WARNING: Removing unreachable block (ram,0x014170c0) */
/* WARNING: Removing unreachable block (ram,0x01417099) */
/* WARNING: Removing unreachable block (ram,0x014170c2) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_01416f10(pthread_key_t param_1)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  void *pvVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong **pplVar7;
  longlong *unaff_RDI;
  bool bVar8;
  longlong *local_90;
  longlong *local_58;
  char local_50;
  int local_40;
  
  plVar6 = local_58;
  if ((DAT_028ace68 == (undefined8 *)0x0) || (DAT_028ace71 == '\0')) {
    FUN_00e8cb50();
    if (DAT_028ace68 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar3 = &DAT_025e01b8;
      FUN_00d500e0();
      bVar8 = DAT_028ace68 == (undefined8 *)0x0;
      DAT_028ace68 = puVar3;
      if (((bVar8) || (FUN_00d50b20(), DAT_028ace68 != (undefined8 *)0x0)) && (DAT_028ace70 == '\0')
         ) {
        DAT_028ace70 = '\x01';
        FUN_00e8cb90();
      }
      DAT_028ace71 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028ace71 = '\x01';
      FUN_00e8cb70();
    }
  }
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0124e0d0();
  if (local_50 == '\0') {
    if (local_58 == (longlong *)0x0) goto LAB_01417231;
    FUN_00d50b00();
  }
  else if (local_58 == (longlong *)0x0) goto LAB_01417231;
  local_58 = (longlong *)0x0;
  local_40 = -1;
  while( true ) {
    local_50 = '\0';
    lVar5 = (longlong)local_40;
    local_40 = local_40 + 1;
    if (*(int *)((longlong)plVar6 + 0xc) <= local_40) break;
    local_58 = *(longlong **)(plVar6[2] + 8 + lVar5 * 8);
    local_90 = local_58;
    if ((DAT_0272a440 == '\0') && (iVar2 = ___cxa_guard_acquire(), iVar2 != 0)) {
      _DAT_0272a390 = FUN_000fddb0();
      _DAT_0272a378 = "MUAmplitudeAnalyzer";
      _DAT_0272a380 = 0x90;
      _DAT_0272a388 = FUN_0079c0e0;
      _DAT_0272a398 = 0;
      uRam000000000272a3a0 = 0;
      _DAT_0272a3a8 = 0;
      _DAT_0272a420 = 0;
      uRam000000000272a428 = 0;
      _DAT_0272a430 = 0;
      DAT_0272a432 = 1;
      _DAT_0272a3b0 = 0;
      uRam000000000272a3b8 = 0;
      _DAT_0272a3c0 = 0;
      uRam000000000272a3c8 = 0;
      _DAT_0272a3d0 = 0;
      uRam000000000272a3d8 = 0;
      _DAT_0272a3e0 = 0;
      uRam000000000272a3e8 = 0;
      _DAT_0272a3f0 = 0;
      uRam000000000272a3f8 = 0;
      _DAT_0272a400 = 0;
      uRam000000000272a408 = 0;
      _DAT_0272a410 = 0;
      uRam000000000272a418 = 0;
      DAT_0272a43b = 0;
      _DAT_0272a433 = 0;
      ___cxa_guard_release();
    }
    pplVar7 = (longlong **)&DAT_02802688;
    if (local_58 != (longlong *)0x0) {
      (**(code **)(*local_58 + 0x360))();
      cVar1 = FUN_00e85ea0();
      pplVar7 = &local_90;
      if (cVar1 == '\0') {
        pplVar7 = (longlong **)&DAT_02802688;
      }
    }
    if (((*pplVar7 != (longlong *)0x0) && (cVar1 = FUN_00e34240(), cVar1 == '\0')) &&
       (cVar1 = FUN_00e34a50(), cVar1 == '\0')) {
      *(undefined1 *)(unaff_RDI + 1) = 0;
      if (local_58 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      *unaff_RDI = (longlong)local_58;
      *(undefined1 *)(unaff_RDI + 1) = 1;
      FUN_01418a70();
      FUN_00d50b20();
      return unaff_RDI;
    }
  }
  FUN_01418a70();
  param_1 = (pthread_key_t)plVar6;
  FUN_00d50b20();
LAB_01417231:
  plVar6 = (longlong *)FUN_00e8fc40();
  FUN_00d4ff40();
  *(undefined8 *)((longlong)plVar6 + 0x2f) = 0;
  *(undefined8 *)((longlong)plVar6 + 0x37) = 0;
  plVar6[4] = 0;
  plVar6[5] = 0;
  plVar6[8] = 0;
  plVar6[9] = 0;
  *(undefined8 *)((longlong)plVar6 + 0x49) = 0;
  *(undefined8 *)((longlong)plVar6 + 0x51) = 0;
  plVar6[0xc] = 0;
  plVar6[0xd] = 0;
  plVar6[0xe] = 0;
  *plVar6 = (longlong)&DAT_025dfd88;
  plVar6[2] = (longlong)&DAT_025e0148;
  plVar6[3] = (longlong)&DAT_025e0180;
  plVar6[0xf] = 0;
  plVar6[0x10] = 0;
  plVar6[0x11] = 0;
  FUN_00d500e0();
  FUN_013fb180();
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0124df30();
  if (local_50 == '\0') {
    if (local_58 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_50 = '\0';
  }
  FUN_013fb3d0();
  if (local_58 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(*plVar6 + 0x398))();
  *unaff_RDI = (longlong)plVar6;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return unaff_RDI;
}


