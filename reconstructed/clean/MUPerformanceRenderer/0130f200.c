// Function: FUN_0130f200
// Address: 0130f200
// Size: 733 bytes
// Class: MUPerformanceRenderer
// String references:
//   "MUPerformanceRenderer"
//   "MUTrackRenderer"
// === MUPerformanceRenderer properties ===
//   MUSlaveTrackStartAndEndFadeMode _slaveTrackEndFadeMode
//   MUSlaveTrackStartAndEndFadeMode _slaveTrackStartFadeMode
//                   _soundFile
//   float**         _buffers
//                   _samples
//                   _proceededSamples
//                   _exportSetup
//                   _isReRunningExport
//                   _rerunExportOnClip
//                   _askOnClip
//                   _send
//                   _isCanceled
//                   _failed
//                   _currentIndex
//                   _originalFaderVolume
//                   _volumeScale
//                   _runsAlertPanel
//                   _isExportingMix
//                   _includeTails


uint64_t FUN_0130f200(void* param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  void *pvVar4;
  int64_t *plVar5;
  int64_t this_ptr;
  uint64_t unaff_R13;
  uint64_t uVar6;
  int64_t *plVar7;
  
  uVar6 = CONCAT71((int7)((uint64_t)unaff_R13 >> 8),1);
  if (*(char *)(this_ptr + 0x16a) != '\0') goto LAB_0130f371;
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  cVar1 = FUN_0126cd60();
  if (cVar1 != '\0') goto LAB_0130f371;
  plVar5 = *(int64_t **)(this_ptr + 0xa0);
  if ((g_027ab028 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
    g_027aaf78 = FUN_010f2dd0();
    g_027aaf60 = "MUPerformanceRenderer";
    g_027aaf68 = 0x218;
    g_027aaf70 = FUN_0118be20;
    g_027aaf80 = 0;
    ram_00000000027aaf88 = 0;
    g_027aaf90 = 0;
    ram_00000000027aaf98 = 0;
    g_027aafa0 = 0;
    ram_00000000027aafa8 = 0;
    g_027aafb0 = 0;
    ram_00000000027aafb8 = 0;
    g_027aafc0 = 0;
    ram_00000000027aafc8 = 0;
    g_027aafd0 = 0;
    ram_00000000027aafd8 = 0;
    g_027aafe0 = 0;
    ram_00000000027aafe8 = 0;
    g_027aaff0 = 0;
    ram_00000000027aaff8 = 0;
    g_027ab000 = 0;
    ram_00000000027ab008 = 0;
    g_027ab010 = 0;
    ram_00000000027ab018 = 0;
    g_027ab020 = 0;
    ___cxa_guard_release();
  }
  plVar7 = (int64_t *)(this_ptr + 0xa0);
  if (plVar5 == (int64_t *)0x0) {
LAB_0130f2af:
    plVar5 = &g_02802688;
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
    uVar6 = (uint64_t)uVar2;
    FUN_00d50b20();
    goto LAB_0130f371;
  }
  plVar5 = (int64_t *)*plVar7;
  if ((g_027b87a8 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
    g_027b86f8 = FUN_010f2dd0();
    g_027b86e0 = "MUTrackRenderer";
    g_027b86e8 = 0x180;
    g_027b86f0 = FUN_011ce1c0;
    g_027b8700 = 0;
    ram_00000000027b8708 = 0;
    g_027b8710 = 0;
    ram_00000000027b8718 = 0;
    g_027b8720 = 0;
    ram_00000000027b8728 = 0;
    g_027b8730 = 0;
    ram_00000000027b8738 = 0;
    g_027b8740 = 0;
    ram_00000000027b8748 = 0;
    g_027b8750 = 0;
    ram_00000000027b8758 = 0;
    g_027b8760 = 0;
    ram_00000000027b8768 = 0;
    g_027b8770 = 0;
    ram_00000000027b8778 = 0;
    g_027b8780 = 0;
    ram_00000000027b8788 = 0;
    g_027b8790 = 0;
    ram_00000000027b8798 = 0;
    g_027b87a0 = 0;
    ___cxa_guard_release();
  }
  if (plVar5 == (int64_t *)0x0) {
LAB_0130f333:
    plVar7 = &g_02802688;
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
    uVar6 = (uint64_t)uVar2;
    FUN_00d50b20();
  }
LAB_0130f371:
  return uVar6 & 0xffffffff;
}

