// ===================================================================
// MDEditorViewAggregate — Complete reconstructed pseudocode
// 1 functions
// ===================================================================

// Registered properties (2):
//   bool            _isQuantizeTimePreviewEnabled
//   bool            _isCorrectPitchPreviewEnabled


// ============================================================
// 005ae980
// ============================================================
// Function: FUN_005ae980
// Address: 005ae980
// Size: 710 bytes
// Class: MDEditorViewAggregate
// String references:
//   "bool"
//   "MDEditorViewAggregate"
//   "MDSelectionController"
//   "_detectionEditorView"
//   "_isQuantizeTimePreviewEnabled"
//   "_isCorrectPitchPreviewEnabled"
// === MDEditorViewAggregate properties ===
//   bool            _isQuantizeTimePreviewEnabled
//   bool            _isCorrectPitchPreviewEnabled


void FUN_005ae980(void)

{
  int iVar1;
  int64_t lVar2;
  char *pcVar3;
  void*this_ptr;
  
  FUN_005a97a0();
  *this_ptr = &g_024e70f0;
  this_ptr[2] = &g_024e89d0;
  this_ptr[0x28] = &g_024e8a10;
  this_ptr[0x29] = &g_024e8a60;
  this_ptr[0x2a] = &g_024e8a90;
  this_ptr[0xc0] = 0;
  lVar2 = FUN_0034d920();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005aece0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "_detectionEditorView";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDSelectionController");
  }
  this_ptr[0xc1] = 0;
  lVar2 = FUN_0034d920();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005aedd0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDEditorViewAggregate");
  }
  *(void*)(this_ptr + 0xc2) = 0;
  lVar2 = FUN_0034d920();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005aeec0();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x614) = 0;
  lVar2 = FUN_0034d920();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005af030();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0xc3) = 0;
  lVar2 = FUN_0034d920();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x619) = 0;
  lVar2 = FUN_0034d920();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  return;
}

