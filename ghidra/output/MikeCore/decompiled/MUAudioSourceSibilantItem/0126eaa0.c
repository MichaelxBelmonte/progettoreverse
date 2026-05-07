// Function: FUN_0126eaa0
// Address: 0126eaa0
// Size: 729 bytes
// Class: MUAudioSourceSibilantItem
// String references:
//   "MUAudioSourceSibilantItem"


/* WARNING: Removing unreachable block (ram,0x0126ed6e) */
/* WARNING: Removing unreachable block (ram,0x0126eb07) */
/* WARNING: Removing unreachable block (ram,0x0126eb30) */
/* WARNING: Removing unreachable block (ram,0x0126eb09) */
/* WARNING: Removing unreachable block (ram,0x0126eb32) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_0126eaa0(void)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  void *pvVar6;
  pthread_key_t pVar7;
  longlong lVar8;
  longlong **pplVar9;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  int local_50;
  longlong *local_40;
  char local_38;
  
  lVar1 = *(longlong *)(unaff_RSI + 0xe0);
  if (1 < *(int *)(lVar1 + 0xc)) {
    local_50 = -1;
LAB_0126eb03:
    while( true ) {
      lVar5 = (longlong)local_50;
      local_50 = local_50 + 1;
      if (*(int *)(lVar1 + 0xc) <= local_50) break;
      lVar8 = *(longlong *)(lVar1 + 0x10);
      lVar5 = *(longlong *)(lVar8 + 8 + lVar5 * 8);
      pvVar6 = _pthread_getspecific((pthread_key_t)lVar8);
      pVar7 = (pthread_key_t)lVar8;
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_011ef460();
      if (local_38 == '\0') goto LAB_0126ebb0;
      if (local_40 != (longlong *)0x0) goto LAB_0126ebe0;
    }
    FUN_0015edf0();
  }
  *(undefined1 *)(unaff_RDI + 1) = 0;
  *unaff_RDI = 0;
  return unaff_RDI;
LAB_0126ebb0:
  if (local_40 != (longlong *)0x0) {
    FUN_00d50b00();
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
LAB_0126ebe0:
    pvVar6 = _pthread_getspecific(pVar7);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013dd6a0();
    plVar2 = local_40;
    if ((DAT_027c0190 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
      _DAT_027910a8 = FUN_007ef2d0();
      _DAT_02791090 = "MUAudioSourceSibilantItem";
      _DAT_02791098 = 200;
      _DAT_027910a0 = FUN_01103980;
      _DAT_027910b0 = 0;
      uRam00000000027910b8 = 0;
      _DAT_027910c0 = 0;
      uRam00000000027910c8 = 0;
      _DAT_027910d0 = 0;
      uRam00000000027910d8 = 0;
      _DAT_027910e0 = 0;
      uRam00000000027910e8 = 0;
      _DAT_027910f0 = 0;
      uRam00000000027910f8 = 0;
      _DAT_02791100 = 0;
      uRam0000000002791108 = 0;
      _DAT_02791110 = 0;
      uRam0000000002791118 = 0;
      _DAT_02791120 = 0;
      uRam0000000002791128 = 0;
      _DAT_02791130 = 0;
      uRam0000000002791138 = 0;
      _DAT_02791140 = 0;
      uRam0000000002791148 = 0;
      _DAT_02791150 = 0;
      ___cxa_guard_release();
    }
    pplVar9 = (longlong **)&DAT_02802688;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x360))();
      cVar3 = FUN_00e85ea0();
      pplVar9 = &local_40;
      if (cVar3 == '\0') {
        pplVar9 = (longlong **)&DAT_02802688;
      }
    }
    plVar2 = *pplVar9;
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar2 != (longlong *)0x0) {
      *(undefined1 *)(unaff_RDI + 1) = 0;
      if (lVar5 != 0) {
        FUN_00d50b00();
      }
      *unaff_RDI = lVar5;
      *(undefined1 *)(unaff_RDI + 1) = 1;
      FUN_00d50b20();
      FUN_0015edf0();
      return unaff_RDI;
    }
    FUN_00d50b20();
  }
  goto LAB_0126eb03;
}


