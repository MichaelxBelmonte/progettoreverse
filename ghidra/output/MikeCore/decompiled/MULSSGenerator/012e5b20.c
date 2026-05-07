// Function: FUN_012e5b20
// Address: 012e5b20
// Size: 869 bytes
// Class: MULSSGenerator
// String references:
//   "MULSSGenerator"


/* WARNING: Removing unreachable block (ram,0x012e5c05) */
/* WARNING: Removing unreachable block (ram,0x012e5c0e) */
/* WARNING: Removing unreachable block (ram,0x012e5c7a) */
/* WARNING: Removing unreachable block (ram,0x012e5c83) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_012e5b20(pthread_key_t param_1)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  void *pvVar6;
  longlong unaff_RDI;
  longlong local_40;
  char local_38;
  
  plVar1 = *(longlong **)(unaff_RDI + 0x118);
  if ((DAT_0270c820 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
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
  lVar3 = DAT_02802688;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x360))();
    cVar4 = FUN_00e85ea0();
    lVar3 = DAT_02802688;
    if (cVar4 != '\0') {
      lVar3 = *(longlong *)(unaff_RDI + 0x118);
    }
  }
  if (lVar3 == 0) {
    return;
  }
  FUN_00d50b00();
  pvVar6 = _pthread_getspecific(param_1);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012c6cb0();
  if (local_38 == '\0') {
    if (local_40 == 0) goto LAB_012e5dc4;
    FUN_00d50b00();
  }
  else if (local_40 == 0) goto LAB_012e5dc4;
  pvVar6 = _pthread_getspecific(param_1);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_017eca70();
  if (local_38 == '\0') {
    if (local_40 == 0) goto LAB_012e5cf4;
    FUN_00d50b00();
LAB_012e5c88:
    pvVar6 = _pthread_getspecific(param_1);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    cVar4 = FUN_015bc3c0();
    if (cVar4 != '\0') {
      pvVar6 = _pthread_getspecific(param_1);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_015bc420();
      pvVar6 = _pthread_getspecific(param_1);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_015bc5a0();
    }
    pvVar6 = _pthread_getspecific(param_1);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    cVar4 = FUN_015bc3c0();
    if (cVar4 != '\0') {
      bVar2 = false;
      goto LAB_012e5d7d;
    }
LAB_012e5db4:
    FUN_00d50b20();
  }
  else {
    if (local_40 != 0) goto LAB_012e5c88;
LAB_012e5cf4:
    bVar2 = true;
LAB_012e5d7d:
    pvVar6 = _pthread_getspecific(param_1);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_017f5110();
    if (!bVar2) goto LAB_012e5db4;
  }
  FUN_00d50b20();
LAB_012e5dc4:
  FUN_00d50b20();
  return;
}


