// Function: FUN_01c4ae30
// Address: 01c4ae30
// Size: 706 bytes
// Class: MUAdvancedTempoDetectionDialog
// === MUAdvancedTempoDetectionDialog properties ===
//                   _highlightedBeatValuePoint
//                   _setCursorTimeDisabled
//                   _zoomToFitAverageTempoDisabled
//                   _skipZoomToFitAverageTempo


void FUN_01c4ae30(void)

{
  bool bVar1;
  int64_t lVar2;
  int unaff_ESI;
  int64_t *this_ptr;
  int64_t local_30;
  char local_28;
  
  if (unaff_ESI == 1) {
    lVar2 = g_028b6618;
    if (g_028b6618 == 0) {
      FUN_01cfcdc0(g_023b3888,g_023b294c,g_023945a0,g_02394214);
      lVar2 = g_028b6618;
      if (g_028b6618 != local_30) {
        if (local_28 == '\0') {
          if (local_30 == 0) {
            lVar2 = 0;
          }
          else {
            FUN_00d50b00();
            lVar2 = local_30;
          }
        }
        else {
          local_28 = '\0';
          lVar2 = local_30;
        }
        bVar1 = g_028b6618 != 0;
        g_028b6618 = lVar2;
        if (bVar1) {
          FUN_00d50b20();
          lVar2 = local_30;
        }
      }
      if ((lVar2 != 0) && (g_028b6620 == '\0')) {
        g_028b6620 = '\x01';
        FUN_00e8cb90();
        lVar2 = local_30;
      }
      if ((local_28 != '\0') && (lVar2 != 0)) {
        FUN_00d50b20();
      }
      lVar2 = g_028b6618;
      *(void*)(this_ptr + 1) = 0;
      goto joined_r0x01c4b0d9;
    }
  }
  else {
    lVar2 = g_028b6628;
    if (g_028b6628 == 0) {
      FUN_01c4b180();
      if (g_028b6628 != local_30) {
        lVar2 = g_028b6628;
        if (local_28 == '\0') {
          if (local_30 != 0) {
            FUN_00d50b00();
            lVar2 = g_028b6628;
          }
        }
        else {
          local_28 = '\0';
        }
        g_028b6628 = local_30;
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
      }
      if ((local_30 != 0) && (g_028b6630 == '\0')) {
        g_028b6630 = '\x01';
        FUN_00e8cb90();
      }
      if ((local_28 != '\0') && (local_30 != 0)) {
        FUN_00d50b20();
      }
      FUN_01cfcdc0(*(float *)(g_028b6628 + 0x10) * g_02390120,
                   *(float *)(g_028b6628 + 0x14) * g_02390120,
                   g_02390120 * *(float *)(g_028b6628 + 0x18),
                   *(void*)(g_028b6628 + 0x1c));
      lVar2 = g_028b6628;
      if (g_028b6628 != local_30) {
        if (local_28 == '\0') {
          if (local_30 == 0) {
            lVar2 = 0;
          }
          else {
            FUN_00d50b00();
            lVar2 = local_30;
          }
        }
        else {
          local_28 = '\0';
          lVar2 = local_30;
        }
        bVar1 = g_028b6628 != 0;
        g_028b6628 = lVar2;
        if (bVar1) {
          FUN_00d50b20();
          lVar2 = local_30;
        }
      }
      if ((lVar2 != 0) && (g_028b6630 == '\0')) {
        g_028b6630 = '\x01';
        FUN_00e8cb90();
        lVar2 = local_30;
      }
      if ((local_28 != '\0') && (lVar2 != 0)) {
        FUN_00d50b20();
      }
      lVar2 = g_028b6628;
      *(void*)(this_ptr + 1) = 0;
      goto joined_r0x01c4b0d9;
    }
  }
  *(void*)(this_ptr + 1) = 0;
joined_r0x01c4b0d9:
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

