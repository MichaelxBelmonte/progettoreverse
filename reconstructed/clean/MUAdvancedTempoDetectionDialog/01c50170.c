// Function: FUN_01c50170
// Address: 01c50170
// Size: 560 bytes
// Class: MUAdvancedTempoDetectionDialog
// === MUAdvancedTempoDetectionDialog properties ===
//                   _highlightedBeatValuePoint
//                   _setCursorTimeDisabled
//                   _zoomToFitAverageTempoDisabled
//                   _skipZoomToFitAverageTempo


void FUN_01c50170(void)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t *arg1;
  int64_t this_ptr;
  int64_t lVar3;
  int64_t local_98;
  char local_90;
  int64_t local_88;
  char local_80;
  int64_t local_68;
  char local_60;
  int64_t local_48;
  char local_40;
  int64_t local_38;
  char local_30;
  
  lVar2 = *arg1;
  if (*(int64_t *)(this_ptr + 0x170) == lVar2) {
    return;
  }
  if (*(int64_t *)(this_ptr + 0x170) == 0) {
    lVar3 = 0;
    lVar1 = lVar3;
    if (lVar2 == 0) goto joined_r0x01c502bd;
  }
  else {
    FUN_00d403d0();
    FUN_00d50b00();
    local_98 = g_027ebc60;
    if (g_027ebc60 != 0) {
      FUN_00d50b00();
    }
    local_90 = '\x01';
    local_60 = 0;
    lVar2 = *(int64_t *)(this_ptr + 0x170);
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    local_60 = '\x01';
    local_68 = lVar2;
    FUN_00d41040(&local_68,&local_98);
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
    if (this_ptr != 0) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    lVar2 = *arg1;
    lVar3 = *(int64_t *)(this_ptr + 0x170);
    lVar1 = lVar3;
    if (lVar3 == lVar2) goto joined_r0x01c502bd;
  }
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  *(int64_t *)(this_ptr + 0x170) = lVar2;
  lVar1 = lVar2;
  if (lVar3 != 0) {
    FUN_00d50b20();
    lVar1 = *(int64_t *)(this_ptr + 0x170);
  }
joined_r0x01c502bd:
  if (lVar1 != 0) {
    FUN_00d403d0();
    FUN_00d50b00();
    local_88 = g_027ebc60;
    if (g_027ebc60 != 0) {
      FUN_00d50b00();
    }
    local_80 = '\x01';
    local_40 = 0;
    lVar2 = *(int64_t *)(this_ptr + 0x170);
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    local_40 = '\x01';
    local_48 = lVar2;
    FUN_00d41430(&local_48,&local_88);
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    if (this_ptr != 0) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
  }
  return;
}

