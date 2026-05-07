// Function: FUN_012e57f0
// Address: 012e57f0
// Size: 570 bytes
// Class: MULSSGenerator
// String references:
//   "MULSSGenerator"


/* WARNING: Removing unreachable block (ram,0x012e58eb) */
/* WARNING: Removing unreachable block (ram,0x012e58f4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_012e57f0(pthread_key_t param_1)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  void *pvVar5;
  longlong unaff_RDI;
  longlong local_48;
  char local_40;
  
  if (*(int *)(unaff_RDI + 0x108) != 0) {
    return;
  }
  if (*(longlong *)(unaff_RDI + 0x58) != 0) {
    return;
  }
  plVar1 = *(longlong **)(unaff_RDI + 0x118);
  if ((DAT_0270c820 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
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
  lVar2 = DAT_02802688;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x360))();
    cVar3 = FUN_00e85ea0();
    lVar2 = DAT_02802688;
    if (cVar3 != '\0') {
      lVar2 = *(longlong *)(unaff_RDI + 0x118);
    }
  }
  if (lVar2 == 0) {
    return;
  }
  FUN_00d50b00();
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012c6cb0();
  if (local_40 == '\0') {
    if (local_48 == 0) goto LAB_012e596b;
    FUN_00d50b00();
  }
  else if (local_48 == 0) goto LAB_012e596b;
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  lVar2 = *(longlong *)(unaff_RDI + 0xb0);
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  FUN_017ecb00();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
LAB_012e596b:
  FUN_00d50b20();
  return;
}


