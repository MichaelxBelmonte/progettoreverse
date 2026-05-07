// Function: FUN_016be890
// Address: 016be890
// Size: 568 bytes
// Class: MUAraContentReader
// === MUAraContentReader properties ===
//                   _playbackWrappers
//                   _previewWrappers
//                   _guiWrappers
//                   _isRestoringObjects
//                   _structureProblemFound
//                   _isHostEditingDocument
//                   _resetUndoWhenHostEndsEditing
//                   _documentDataChanged
//                   _didSimulateBeginEditing
//                   _trackSelectionDidChange
//                   _simulatedAra1RegionSequences
//                   _musicalContextData


void FUN_016be890(void)

{
  code *pcVar1;
  int iVar2;
  void*puVar3;
  void*this_ptr;
  
  FUN_00d4ff40();
  *this_ptr = &g_025f89b0;
  this_ptr[2] = &g_025f8d70;
  this_ptr[3] = 0;
  this_ptr[4] = 0;
  this_ptr[5] = 0;
  this_ptr[6] = 0;
  this_ptr[7] = 0;
  this_ptr[8] = 0;
  this_ptr[9] = 0;
  iVar2 = g_02802630;
  if (g_02802630 < 2) {
    this_ptr[10] = 0;
    this_ptr[0xb] = 0;
LAB_016bea35:
    this_ptr[0xc] = 0;
    this_ptr[0xd] = 0;
  }
  else {
    puVar3 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar3 = &g_02572358;
    pcVar1 = g_02572370;
    (*g_02572370)();
    this_ptr[9] = puVar3;
    iVar2 = g_02802630;
    this_ptr[10] = 0;
    if (iVar2 < 2) {
      this_ptr[0xb] = 0;
      this_ptr[0xc] = 0;
    }
    else {
      puVar3 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar3 = &g_02572358;
      (*pcVar1)();
      this_ptr[10] = puVar3;
      iVar2 = g_02802630;
      this_ptr[0xb] = 0;
      if (iVar2 < 2) goto LAB_016bea35;
      puVar3 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar3 = &g_02572358;
      (*pcVar1)();
      this_ptr[0xb] = puVar3;
      iVar2 = g_02802630;
      this_ptr[0xc] = 0;
      if (1 < iVar2) {
        puVar3 = (void*)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar3 = &g_02572358;
        (*pcVar1)();
        this_ptr[0xc] = puVar3;
        iVar2 = g_02802630;
        this_ptr[0xd] = 0;
        if (1 < iVar2) {
          puVar3 = (void*)FUN_00e8fc40();
          FUN_00d4ff40();
          *puVar3 = &g_02572358;
          (*g_02572370)();
          this_ptr[0xd] = puVar3;
          iVar2 = g_02802630;
        }
        goto LAB_016bea6f;
      }
    }
    this_ptr[0xd] = 0;
  }
LAB_016bea6f:
  this_ptr[0xf] = 0;
  *(void*)(this_ptr + 0xe) = 0;
  *(void*)((int64_t)this_ptr + 0x73) = 0;
  if (1 < iVar2) {
    puVar3 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar3 = &g_02572358;
    (*g_02572370)();
    this_ptr[0xf] = puVar3;
  }
  return;
}

