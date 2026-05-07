// Function: FUN_01c4b180
// Address: 01c4b180
// Size: 557 bytes
// Class: MUAdvancedTempoDetectionDialog
// === MUAdvancedTempoDetectionDialog properties ===
//                   _highlightedBeatValuePoint
//                   _setCursorTimeDisabled
//                   _zoomToFitAverageTempoDisabled
//                   _skipZoomToFitAverageTempo


void FUN_01c4b180(void)

{
  bool bVar1;
  int64_t lVar2;
  int unaff_ESI;
  int64_t *this_ptr;
  int64_t local_28;
  char local_20;
  
  if (unaff_ESI == 1) {
    lVar2 = g_028b65f8;
    if (g_028b65f8 == 0) {
      FUN_01cfcdc0(g_0241f36c,g_023b3888,g_02394250,g_02394214);
      lVar2 = g_028b65f8;
      if (g_028b65f8 != local_28) {
        if (local_20 == '\0') {
          if (local_28 == 0) {
            lVar2 = 0;
          }
          else {
            FUN_00d50b00();
            lVar2 = local_28;
          }
        }
        else {
          local_20 = '\0';
          lVar2 = local_28;
        }
        bVar1 = g_028b65f8 != 0;
        g_028b65f8 = lVar2;
        if (bVar1) {
          FUN_00d50b20();
          lVar2 = local_28;
        }
      }
      if ((lVar2 != 0) && (g_028b6600 == '\0')) {
        g_028b6600 = '\x01';
        FUN_00e8cb90();
        lVar2 = local_28;
      }
      if ((local_20 != '\0') && (lVar2 != 0)) {
        FUN_00d50b20();
      }
      lVar2 = g_028b65f8;
      *(void*)(this_ptr + 1) = 0;
      goto joined_r0x01c4b383;
    }
  }
  else {
    lVar2 = g_028b6608;
    if (g_028b6608 == 0) {
      FUN_01cfc9f0(g_02390120,g_0239011c);
      lVar2 = g_028b6608;
      if (g_028b6608 != local_28) {
        if (local_20 == '\0') {
          if (local_28 == 0) {
            lVar2 = 0;
          }
          else {
            FUN_00d50b00();
            lVar2 = local_28;
          }
        }
        else {
          local_20 = '\0';
          lVar2 = local_28;
        }
        bVar1 = g_028b6608 != 0;
        g_028b6608 = lVar2;
        if (bVar1) {
          FUN_00d50b20();
          lVar2 = local_28;
        }
      }
      if ((lVar2 != 0) && (g_028b6610 == '\0')) {
        g_028b6610 = '\x01';
        FUN_00e8cb90();
        lVar2 = local_28;
      }
      if ((local_20 != '\0') && (lVar2 != 0)) {
        FUN_00d50b20();
      }
      lVar2 = g_028b6608;
      *(void*)(this_ptr + 1) = 0;
      goto joined_r0x01c4b383;
    }
  }
  *(void*)(this_ptr + 1) = 0;
joined_r0x01c4b383:
  if (lVar2 == 0) {
    lVar2 = 0;
  }
  else {
    FUN_00d50b00();
  }
  *this_ptr = lVar2;
  *(void*)(this_ptr + 1) = 1;
  return;
}

