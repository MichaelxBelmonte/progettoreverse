// ===================================================================
// MUNote — Complete reconstructed pseudocode
// 1 functions
// ===================================================================

// Registered properties (15):
//   bool            _relatesToChord
//   bool            _relatesToKey
//   bool            _relatesToNextNote
//   GNInt           _role
//                   _drawPath
//                   _visibleRect
//                   _connected
//                   _elementASC
//                   _showsLeftSeparator
//                   _feedbacksEditing
//                   _showsLeftDisjoinArrows
//                   _showsRightDisjoinArrows
//                   _selected
//                   _feedbackDisconnected
//                   _flagsDirty


// ============================================================
// 01180ab0
// ============================================================
// Function: FUN_01180ab0
// Address: 01180ab0
// Size: 964 bytes
// Class: MUNote
// String references:
//   "bool"
//   "MUNote"
//   "GNInt"
//   "_relatesToChord"
//   "_relatesToKey"
//   "_relatesToNextNote"
//   "_role"
// === MUNote properties ===
//   bool            _relatesToChord
//   bool            _relatesToKey
//   bool            _relatesToNextNote
//   GNInt           _role
//                   _drawPath
//                   _visibleRect
//                   _connected
//                   _elementASC
//                   _showsLeftSeparator
//                   _feedbacksEditing
//                   _showsLeftDisjoinArrows
//                   _showsRightDisjoinArrows
//                   _selected
//                   _feedbackDisconnected
//                   _flagsDirty


void FUN_01180ab0(void)

{
  uint32_t uVar1;
  uint32_t uVar2;
  uint32_t uVar3;
  uint32_t uVar4;
  uint32_t uVar5;
  uint32_t uVar6;
  uint32_t uVar7;
  int iVar8;
  int64_t lVar9;
  char *pcVar10;
  int64_t arg1;
  void*this_ptr;
  
  FUN_00d4ff80();
  *this_ptr = &g_02590538;
  uVar1 = *(void*)(arg1 + 0x14);
  uVar2 = *(void*)(arg1 + 0x18);
  uVar3 = *(void*)(arg1 + 0x1c);
  uVar4 = *(void*)(arg1 + 0x20);
  uVar5 = *(void*)(arg1 + 0x24);
  uVar6 = *(void*)(arg1 + 0x28);
  uVar7 = *(void*)(arg1 + 0x2c);
  *(void*)(this_ptr + 2) = *(void*)(arg1 + 0x10);
  *(void*)((int64_t)this_ptr + 0x14) = uVar1;
  *(void*)(this_ptr + 3) = uVar2;
  *(void*)((int64_t)this_ptr + 0x1c) = uVar3;
  *(void*)(this_ptr + 4) = uVar4;
  *(void*)((int64_t)this_ptr + 0x24) = uVar5;
  *(void*)(this_ptr + 5) = uVar6;
  *(void*)((int64_t)this_ptr + 0x2c) = uVar7;
  this_ptr[6] = *(void*)(arg1 + 0x30);
  *this_ptr = &g_025c2b00;
  *(void*)(this_ptr + 7) = 0;
  lVar9 = FUN_01180840();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x39) = 0;
  lVar9 = FUN_01180840();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x3a) = 0;
  lVar9 = FUN_01180840();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x3c) = 0;
  lVar9 = FUN_01180840();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_01180f10();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 8) = 0;
  lVar9 = FUN_01180840();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  this_ptr[9] = 0;
  lVar9 = FUN_01180840();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_01181080();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUNote");
  }
  this_ptr[10] = 0;
  lVar9 = FUN_01180840();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_01181170();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUNote");
  }
  return;
}

