// Function: FUN_0116a4c0
// Address: 0116a4c0
// Size: 600 bytes
// Class: MUTrack
// === MUTrack properties ===
//   bool            _isDetectionPerformance
//   double          _location
//   double          _duration


void FUN_0116a4c0(void)

{
  code *pcVar1;
  int iVar2;
  void*puVar3;
  void*this_ptr;
  
  FUN_00d4ff40();
  this_ptr[0x1b] = 0;
  this_ptr[0x1c] = 0;
  *(void*)((int64_t)this_ptr + 0xc6) = 0;
  *(void*)((int64_t)this_ptr + 0xce) = 0;
  *(void*)((int64_t)this_ptr + 0xbc) = 0;
  *(void*)((int64_t)this_ptr + 0xc4) = 0;
  *(void*)((int64_t)this_ptr + 0xac) = 0;
  *(void*)((int64_t)this_ptr + 0xb4) = 0;
  *(void*)((int64_t)this_ptr + 0x9c) = 0;
  *(void*)((int64_t)this_ptr + 0xa4) = 0;
  *(void*)((int64_t)this_ptr + 0x8c) = 0;
  *(void*)((int64_t)this_ptr + 0x94) = 0;
  *(void*)((int64_t)this_ptr + 0x7c) = 0;
  *(void*)((int64_t)this_ptr + 0x84) = 0;
  *(void*)((int64_t)this_ptr + 0x6c) = 0;
  *(void*)((int64_t)this_ptr + 0x74) = 0;
  *(void*)((int64_t)this_ptr + 0x5c) = 0;
  *(void*)((int64_t)this_ptr + 100) = 0;
  *(void*)((int64_t)this_ptr + 0x4c) = 0;
  *(void*)((int64_t)this_ptr + 0x54) = 0;
  *(void*)((int64_t)this_ptr + 0x3c) = 0;
  *(void*)((int64_t)this_ptr + 0x44) = 0;
  *(void*)((int64_t)this_ptr + 0x2c) = 0;
  *(void*)((int64_t)this_ptr + 0x34) = 0;
  *(void*)((int64_t)this_ptr + 0x1c) = 0;
  *(void*)((int64_t)this_ptr + 0x24) = 0;
  *(void*)((int64_t)this_ptr + 0xc) = 0;
  *(void*)((int64_t)this_ptr + 0x14) = 0;
  *this_ptr = &g_025e3768;
  this_ptr[0x1d] = 0;
  this_ptr[0x1e] = 0;
  iVar2 = g_02802630;
  if (g_02802630 < 2) {
    this_ptr[0x1f] = 0;
  }
  else {
    puVar3 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar3 = &g_02572358;
    pcVar1 = g_02572370;
    (*g_02572370)();
    this_ptr[0x1e] = puVar3;
    iVar2 = g_02802630;
    this_ptr[0x1f] = 0;
    if (1 < iVar2) {
      puVar3 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar3 = &g_02572358;
      (*pcVar1)();
      this_ptr[0x1f] = puVar3;
      iVar2 = g_02802630;
    }
  }
  *(void*)(this_ptr + 0x20) = 0;
  this_ptr[0x21] = 0;
  this_ptr[0x22] = 0;
  if (iVar2 < 2) {
    this_ptr[0x23] = 0;
    this_ptr[0x24] = 0;
  }
  else {
    puVar3 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar3 = &g_02572358;
    pcVar1 = g_02572370;
    (*g_02572370)();
    this_ptr[0x22] = puVar3;
    iVar2 = g_02802630;
    this_ptr[0x23] = 0;
    if (iVar2 < 2) {
      this_ptr[0x24] = 0;
      this_ptr[0x25] = 0;
      return;
    }
    puVar3 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar3 = &g_02572358;
    (*pcVar1)();
    this_ptr[0x23] = puVar3;
    iVar2 = g_02802630;
    this_ptr[0x24] = 0;
    if (1 < iVar2) {
      puVar3 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar3 = &g_02572358;
      (*pcVar1)();
      this_ptr[0x24] = puVar3;
      iVar2 = g_02802630;
      this_ptr[0x25] = 0;
      if (iVar2 < 2) {
        return;
      }
      puVar3 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar3 = &g_02572358;
      (*pcVar1)();
      this_ptr[0x25] = puVar3;
      return;
    }
  }
  this_ptr[0x25] = 0;
  return;
}

