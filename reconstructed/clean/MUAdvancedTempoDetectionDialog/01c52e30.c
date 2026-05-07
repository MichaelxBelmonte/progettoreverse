// Function: FUN_01c52e30
// Address: 01c52e30
// Size: 508 bytes
// Class: MUAdvancedTempoDetectionDialog
// === MUAdvancedTempoDetectionDialog properties ===
//                   _highlightedBeatValuePoint
//                   _setCursorTimeDisabled
//                   _zoomToFitAverageTempoDisabled
//                   _skipZoomToFitAverageTempo


void FUN_01c52e30(void)

{
  int64_t this_ptr;
  int64_t local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  char local_40;
  int64_t local_38;
  char local_30;
  
  if (*(int64_t *)(this_ptr + 0x2c8) != 0) {
    FUN_00e34b70();
    local_30 = '\0';
    local_38 = 0;
    FUN_01c4f640();
  }
  if (*(int *)(this_ptr + 0x268) != 0) {
    *(void*)(this_ptr + 0x268) = 0;
    (**(code **)(**(int64_t **)(this_ptr + 0x158) + 0x478))();
    if (*(int64_t *)(this_ptr + 0x158) != 0) {
      *(void*)(this_ptr + 0x158) = 0;
      FUN_00d50b20();
    }
    if (*(int64_t *)(this_ptr + 0x270) != 0) {
      *(void*)(this_ptr + 0x270) = 0;
      FUN_00d50b20();
    }
    FUN_01e436c0();
    FUN_01c4d670();
  }
  FUN_00d403d0();
  FUN_00d50b00();
  local_68 = 0;
  local_60 = '\0';
  local_58 = 0;
  local_50 = '\0';
  FUN_00d41040(&local_58,&local_68);
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  if (this_ptr != 0) {
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  if (*(int64_t *)(this_ptr + 0x150) != 0) {
    FUN_00df2a30();
  }
  if (*(int64_t *)(this_ptr + 0x148) != 0) {
    *(void*)(this_ptr + 0x148) = 0;
    FUN_00d50b20();
  }
  if ((*(int64_t *)(this_ptr + 0x188) != 0) &&
     (FUN_01c51580(), *(int64_t *)(this_ptr + 0x188) != 0)) {
    *(void*)(this_ptr + 0x188) = 0;
    FUN_00d50b20();
  }
  if (*(int64_t *)(this_ptr + 0x160) != 0) {
    local_40 = '\0';
    local_48 = 0;
    FUN_01c8dab0();
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if (*(int64_t *)(this_ptr + 0x160) != 0) {
      *(void*)(this_ptr + 0x160) = 0;
      FUN_00d50b20();
    }
  }
  FUN_01e3b870();
  return;
}

