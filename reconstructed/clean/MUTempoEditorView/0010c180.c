// Function: FUN_0010c180
// Address: 0010c180
// Size: 523 bytes
// Class: MUTempoEditorView
// === MUTempoEditorView properties ===
//   MUTimelineToolMode _toolMode
//   MUTempoEditMode _tempoEditMode
//   MUEditTimelineMode _editTimelineMode


void FUN_0010c180(void)

{
  code *pcVar1;
  int iVar2;
  void*puVar3;
  void*this_ptr;
  
  FUN_0006daf0();
  *this_ptr = &g_0266bec8;
  this_ptr[2] = &g_0266c900;
  this_ptr[0x27] = &g_0266c940;
  this_ptr[0x28] = &g_0266c990;
  this_ptr[0x29] = 0;
  this_ptr[0x2a] = 0;
  this_ptr[0x2b] = 0;
  this_ptr[0x2c] = 0;
  this_ptr[0x2d] = 0;
  this_ptr[0x2e] = 0;
  this_ptr[0x2f] = 0;
  this_ptr[0x30] = 0;
  *(void*)((int64_t)this_ptr + 0x181) = 0;
  *(void*)((int64_t)this_ptr + 0x189) = 0;
  this_ptr[0x33] = 0;
  this_ptr[0x34] = 0;
  this_ptr[0x35] = 0;
  this_ptr[0x36] = 0;
  this_ptr[0x37] = 0;
  this_ptr[0x38] = 0;
  *(void*)((int64_t)this_ptr + 0x1c1) = 0;
  *(void*)((int64_t)this_ptr + 0x1c9) = 0;
  this_ptr[0x3b] = 0;
  this_ptr[0x3c] = 0;
  this_ptr[0x3d] = 0;
  this_ptr[0x3e] = 0;
  this_ptr[0x3f] = 0;
  if (g_02802630 < 2) {
    this_ptr[0x40] = 0;
    this_ptr[0x41] = 0;
  }
  else {
    puVar3 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar3 = &g_02572358;
    pcVar1 = g_02572370;
    (*g_02572370)();
    this_ptr[0x3f] = puVar3;
    iVar2 = g_02802630;
    this_ptr[0x40] = 0;
    if (iVar2 < 2) {
      this_ptr[0x41] = 0;
    }
    else {
      puVar3 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar3 = &g_02572358;
      (*pcVar1)();
      this_ptr[0x40] = puVar3;
      iVar2 = g_02802630;
      this_ptr[0x41] = 0;
      if (1 < iVar2) {
        puVar3 = (void*)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar3 = &g_02572358;
        (*g_02572370)();
        this_ptr[0x41] = puVar3;
      }
    }
  }
  this_ptr[0x42] = 0;
  *(void*)(this_ptr + 0x43) = 0;
  *(void*)((int64_t)this_ptr + 0x21c) = 0;
  *(void*)((int64_t)this_ptr + 0x224) = 0;
  *(void*)((int64_t)this_ptr + 0x229) = 0;
  *(void*)((int64_t)this_ptr + 0x231) = 0;
  *(void*)((int64_t)this_ptr + 0x23c) = 0;
  *(void*)((int64_t)this_ptr + 0x244) = 0;
  *(void*)((int64_t)this_ptr + 0x249) = 0;
  *(void*)((int64_t)this_ptr + 0x254) = 0;
  *(void*)((int64_t)this_ptr + 0x25c) = 0;
  *(void*)((int64_t)this_ptr + 0x264) = 0;
  this_ptr[0x4e] = 0;
  this_ptr[0x4f] = 0;
  this_ptr[0x50] = 0;
  this_ptr[0x51] = 0;
  this_ptr[0x52] = 0;
  this_ptr[0x53] = 0;
  *(void*)((int64_t)this_ptr + 0x29c) = 0;
  *(void*)((int64_t)this_ptr + 0x2a4) = 0;
  this_ptr[0x56] = 0;
  this_ptr[0x57] = 0;
  this_ptr[0x58] = 0;
  this_ptr[0x59] = 0;
  this_ptr[0x5a] = 0;
  this_ptr[0x5b] = 0;
  *(void*)((int64_t)this_ptr + 0x2df) = 0;
  return;
}

