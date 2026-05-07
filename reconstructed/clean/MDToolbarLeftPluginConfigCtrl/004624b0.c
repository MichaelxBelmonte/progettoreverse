// Function: FUN_004624b0
// Address: 004624b0
// Size: 502 bytes
// Class: MDToolbarLeftPluginConfigCtrl
// String references:
//   "MDToolbarLeftPluginConfigCtrl"
// === MDToolbarLeftPluginConfigCtrl properties ===
//                   _inspectorLeftButton
//                   _multiTrackButton
//                   _spectrumShaperButton
//                   _systemLoadView
//                   _playbackChangedObserver
//                   _jobWillRunNotification
//                   _jobProgressNotification
//                   _jobDidRunNotification
//                   _recordingDidStartNotification
//                   _recordingDidFinishNotification
//                   _selectedDocumentController
//                   _runningRecordings
//                   _groupCount


void FUN_004624b0(void)

{
  int iVar1;
  uint32_t uVar2;
  int64_t local_20;
  
  if ((g_02706eb0 == '\0') && (iVar1 = ___cxa_guard_acquire(), iVar1 != 0)) {
    g_02706e00 = FUN_00015ff0();
    g_02706de8 = "MDToolbarLeftPluginConfigCtrl";
    g_02706df0 = 0x90;
    g_02706df8 = FUN_0046f030;
    g_02706e08 = 0;
    ram_0000000002706e10 = 0;
    g_02706e18 = 0;
    ram_0000000002706e20 = 0;
    g_02706e28 = 0;
    ram_0000000002706e30 = 0;
    g_02706e38 = 0;
    ram_0000000002706e40 = 0;
    g_02706e48 = 0;
    ram_0000000002706e50 = 0;
    g_02706e58 = 0;
    ram_0000000002706e60 = 0;
    g_02706e68 = 0;
    ram_0000000002706e70 = 0;
    g_02706e78 = 0;
    ram_0000000002706e80 = 0;
    g_02706e88 = 0;
    ram_0000000002706e90 = 0;
    g_02706e98 = 0;
    _ram_0000000002706ea0 = 0;
    g_02706ea8 = 0;
    ___cxa_guard_release();
  }
  if (g_02706ea3 == '\0') {
    FUN_0005a900();
    FUN_00e87760();
    FUN_000161a0();
    FUN_00d50c00();
    FUN_0005aa20();
    FUN_0046f080();
    FUN_0046f360();
    FUN_0046f640();
    FUN_0046f920();
    FUN_00d50c00();
    FUN_00e87770();
    uVar2 = FUN_004a82e0();
    FUN_00e87920(uVar2,0);
    if (local_20 != 0) {
      FUN_00d50b20();
    }
    FUN_00015ea0();
    FUN_00015ea0();
  }
  return;
}

