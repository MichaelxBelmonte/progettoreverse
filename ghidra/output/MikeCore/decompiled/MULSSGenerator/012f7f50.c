// Function: FUN_012f7f50
// Address: 012f7f50
// Size: 989 bytes
// Class: MULSSGenerator
// String references:
//   "MULSSGenerator"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_012f7f50(pthread_key_t param_1)

{
  char cVar1;
  int iVar2;
  void *pvVar3;
  longlong lVar4;
  longlong **pplVar5;
  longlong lVar6;
  longlong unaff_RDI;
  longlong *plVar7;
  longlong *local_40;
  char local_38;
  
  *(int *)(unaff_RDI + 0x6c) = *(int *)(unaff_RDI + 0x6c) + 1;
  lVar6 = *(longlong *)(unaff_RDI + 0x58);
  if (lVar6 == 0) goto LAB_012f81c5;
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    lVar6 = *(longlong *)(unaff_RDI + 0x58);
    lVar4 = FUN_00e8b990();
    if (lVar4 != 0) {
      lVar6 = *(longlong *)(lVar6 + 0x20 + (ulonglong)(*(uint *)(lVar4 + 0x154) & 1) * 8);
    }
  }
  plVar7 = *(longlong **)(lVar6 + 0x118);
  if (plVar7 != (longlong *)0x0) {
    FUN_00d50b00();
  }
  local_38 = '\x01';
  local_40 = plVar7;
  if ((DAT_0270c820 == '\0') && (iVar2 = ___cxa_guard_acquire(), iVar2 != 0)) {
    _DAT_027e77e8 = FUN_0015ef90();
    _DAT_027e77d0 = "MULSSGenerator";
    _DAT_027e77d8 = 0x70;
    param_1 = 0x15ef30;
    _DAT_027e77e0 = FUN_0015ef30;
    _DAT_027e77f0 = 0;
    uRam00000000027e77f8 = 0;
    _DAT_027e7800 = 0;
    uRam00000000027e7808 = 0;
    _DAT_027e7810 = 0;
    uRam00000000027e7818 = 0;
    _DAT_027e7820 = 0;
    uRam00000000027e7828 = 0;
    _DAT_027e7830 = 0;
    uRam00000000027e7838 = 0;
    _DAT_027e7840 = 0;
    uRam00000000027e7848 = 0;
    _DAT_027e7850 = 0;
    uRam00000000027e7858 = 0;
    _DAT_027e7860 = 0;
    uRam00000000027e7868 = 0;
    _DAT_027e7870 = 0;
    uRam00000000027e7878 = 0;
    _DAT_027e7880 = 0;
    uRam00000000027e7888 = 0;
    _DAT_027e7890 = 0;
    ___cxa_guard_release();
  }
  if (plVar7 == (longlong *)0x0) {
LAB_012f7ff9:
    pplVar5 = &DAT_02802688;
    plVar7 = DAT_02802688;
    if (DAT_02802690 != '\0') goto LAB_012f8009;
LAB_012f801c:
    if (plVar7 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    (**(code **)(*plVar7 + 0x360))();
    cVar1 = FUN_00e85ea0();
    if (cVar1 == '\0') goto LAB_012f7ff9;
    pplVar5 = &local_40;
    plVar7 = local_40;
    if (local_38 == '\0') goto LAB_012f801c;
LAB_012f8009:
    *(undefined1 *)(pplVar5 + 1) = 0;
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar7 == (longlong *)0x0) goto LAB_012f81c5;
  plVar7 = *(longlong **)(unaff_RDI + 0x118);
  if (plVar7 != (longlong *)0x0) {
    FUN_00d50b00();
  }
  local_38 = '\x01';
  local_40 = plVar7;
  if ((DAT_0270c820 == '\0') && (iVar2 = ___cxa_guard_acquire(), iVar2 != 0)) {
    _DAT_027e77e8 = FUN_0015ef90();
    _DAT_027e77d0 = "MULSSGenerator";
    _DAT_027e77d8 = 0x70;
    param_1 = 0x15ef30;
    _DAT_027e77e0 = FUN_0015ef30;
    _DAT_027e77f0 = 0;
    uRam00000000027e77f8 = 0;
    _DAT_027e7800 = 0;
    uRam00000000027e7808 = 0;
    _DAT_027e7810 = 0;
    uRam00000000027e7818 = 0;
    _DAT_027e7820 = 0;
    uRam00000000027e7828 = 0;
    _DAT_027e7830 = 0;
    uRam00000000027e7838 = 0;
    _DAT_027e7840 = 0;
    uRam00000000027e7848 = 0;
    _DAT_027e7850 = 0;
    uRam00000000027e7858 = 0;
    _DAT_027e7860 = 0;
    uRam00000000027e7868 = 0;
    _DAT_027e7870 = 0;
    uRam00000000027e7878 = 0;
    _DAT_027e7880 = 0;
    uRam00000000027e7888 = 0;
    _DAT_027e7890 = 0;
    ___cxa_guard_release();
  }
  if (plVar7 == (longlong *)0x0) {
LAB_012f8094:
    pplVar5 = &DAT_02802688;
    plVar7 = DAT_02802688;
    if (DAT_02802690 != '\0') goto LAB_012f80a7;
LAB_012f80bd:
    if (plVar7 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    (**(code **)(*plVar7 + 0x360))();
    cVar1 = FUN_00e85ea0();
    if (cVar1 == '\0') goto LAB_012f8094;
    pplVar5 = &local_40;
    plVar7 = local_40;
    if (local_38 == '\0') goto LAB_012f80bd;
LAB_012f80a7:
    *(undefined1 *)(pplVar5 + 1) = 0;
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar7 != (longlong *)0x0) {
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012c6a80();
    FUN_012c6a20();
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012c6af0();
    FUN_012c6a90();
    FUN_00d50b20();
  }
  FUN_00d50b20();
LAB_012f81c5:
  *(int *)(unaff_RDI + 0x6c) = *(int *)(unaff_RDI + 0x6c) + -1;
  return;
}


