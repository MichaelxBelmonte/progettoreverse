// Function: FUN_0130f200
// Address: 0130f200
// Size: 733 bytes
// Class: MUPerformanceRenderer
// String references:
//   "MUPerformanceRenderer"
//   "MUTrackRenderer"


/* WARNING: Removing unreachable block (ram,0x0130f2e6) */
/* WARNING: Removing unreachable block (ram,0x0130f2ef) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_0130f200(pthread_key_t param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  void *pvVar4;
  longlong *plVar5;
  longlong unaff_RDI;
  undefined8 unaff_R13;
  ulonglong uVar6;
  longlong *plVar7;
  
  uVar6 = CONCAT71((int7)((ulonglong)unaff_R13 >> 8),1);
  if (*(char *)(unaff_RDI + 0x16a) != '\0') goto LAB_0130f371;
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  cVar1 = FUN_0126cd60();
  if (cVar1 != '\0') goto LAB_0130f371;
  plVar5 = *(longlong **)(unaff_RDI + 0xa0);
  if ((DAT_027ab028 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
    _DAT_027aaf78 = FUN_010f2dd0();
    _DAT_027aaf60 = "MUPerformanceRenderer";
    _DAT_027aaf68 = 0x218;
    _DAT_027aaf70 = FUN_0118be20;
    _DAT_027aaf80 = 0;
    uRam00000000027aaf88 = 0;
    _DAT_027aaf90 = 0;
    uRam00000000027aaf98 = 0;
    _DAT_027aafa0 = 0;
    uRam00000000027aafa8 = 0;
    _DAT_027aafb0 = 0;
    uRam00000000027aafb8 = 0;
    _DAT_027aafc0 = 0;
    uRam00000000027aafc8 = 0;
    _DAT_027aafd0 = 0;
    uRam00000000027aafd8 = 0;
    _DAT_027aafe0 = 0;
    uRam00000000027aafe8 = 0;
    _DAT_027aaff0 = 0;
    uRam00000000027aaff8 = 0;
    _DAT_027ab000 = 0;
    uRam00000000027ab008 = 0;
    _DAT_027ab010 = 0;
    uRam00000000027ab018 = 0;
    _DAT_027ab020 = 0;
    ___cxa_guard_release();
  }
  plVar7 = (longlong *)(unaff_RDI + 0xa0);
  if (plVar5 == (longlong *)0x0) {
LAB_0130f2af:
    plVar5 = &DAT_02802688;
  }
  else {
    (**(code **)(*plVar5 + 0x360))();
    cVar1 = FUN_00e85ea0();
    plVar5 = plVar7;
    if (cVar1 == '\0') goto LAB_0130f2af;
  }
  if (*plVar5 != 0) {
    FUN_00d50b00();
    uVar2 = FUN_012da350();
    uVar6 = (ulonglong)uVar2;
    FUN_00d50b20();
    goto LAB_0130f371;
  }
  plVar5 = (longlong *)*plVar7;
  if ((DAT_027b87a8 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
    _DAT_027b86f8 = FUN_010f2dd0();
    _DAT_027b86e0 = "MUTrackRenderer";
    _DAT_027b86e8 = 0x180;
    _DAT_027b86f0 = FUN_011ce1c0;
    _DAT_027b8700 = 0;
    uRam00000000027b8708 = 0;
    _DAT_027b8710 = 0;
    uRam00000000027b8718 = 0;
    _DAT_027b8720 = 0;
    uRam00000000027b8728 = 0;
    _DAT_027b8730 = 0;
    uRam00000000027b8738 = 0;
    _DAT_027b8740 = 0;
    uRam00000000027b8748 = 0;
    _DAT_027b8750 = 0;
    uRam00000000027b8758 = 0;
    _DAT_027b8760 = 0;
    uRam00000000027b8768 = 0;
    _DAT_027b8770 = 0;
    uRam00000000027b8778 = 0;
    _DAT_027b8780 = 0;
    uRam00000000027b8788 = 0;
    _DAT_027b8790 = 0;
    uRam00000000027b8798 = 0;
    _DAT_027b87a0 = 0;
    ___cxa_guard_release();
  }
  if (plVar5 == (longlong *)0x0) {
LAB_0130f333:
    plVar7 = &DAT_02802688;
  }
  else {
    (**(code **)(*plVar5 + 0x360))();
    cVar1 = FUN_00e85ea0();
    if (cVar1 == '\0') goto LAB_0130f333;
  }
  if (*plVar7 == 0) {
    uVar6 = 0;
  }
  else {
    FUN_00d50b00();
    uVar2 = FUN_0130f200();
    uVar6 = (ulonglong)uVar2;
    FUN_00d50b20();
  }
LAB_0130f371:
  return uVar6 & 0xffffffff;
}


