// Function: FUN_008192b0
// Address: 008192b0
// Size: 552 bytes
// Class: GNOutlineViewDataSource

void FUN_008192b0(void)

{
  code *pcVar1;
  int iVar2;
  void*puVar3;
  void*this_ptr;
  
  FUN_0006daf0();
  *this_ptr = &g_02667c00;
  this_ptr[2] = &g_026685c8;
  this_ptr[0x27] = &g_02668608;
  this_ptr[0x28] = &g_02668660;
  this_ptr[0x29] = &g_026686c8;
  this_ptr[0x2a] = &g_02668750;
  this_ptr[0x2b] = &g_026687f0;
  *(void*)(this_ptr + 0x2c) = 0;
  this_ptr[0x2d] = 0;
  this_ptr[0x2e] = 0;
  iVar2 = g_02802630;
  if (g_02802630 < 2) {
    this_ptr[0x2f] = 0;
  }
  else {
    puVar3 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar3 = &g_02572358;
    pcVar1 = g_02572370;
    (*g_02572370)();
    this_ptr[0x2e] = puVar3;
    iVar2 = g_02802630;
    this_ptr[0x2f] = 0;
    if (1 < iVar2) {
      puVar3 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar3 = &g_02572358;
      (*pcVar1)();
      this_ptr[0x2f] = puVar3;
      iVar2 = g_02802630;
    }
  }
  this_ptr[0x32] = 0;
  this_ptr[0x33] = 0;
  this_ptr[0x30] = 0;
  this_ptr[0x31] = 0;
  this_ptr[0x34] = 0;
  if (1 < iVar2) {
    puVar3 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar3 = &g_02572358;
    (*g_02572370)();
    this_ptr[0x34] = puVar3;
    iVar2 = g_02802630;
  }
  this_ptr[0x35] = 0;
  this_ptr[0x36] = 0;
  *(void*)(this_ptr + 0x37) = 0;
  this_ptr[0x38] = 0;
  *(void*)((int64_t)this_ptr + 0x1c5) = 0;
  this_ptr[0x3a] = 0;
  this_ptr[0x3b] = 0;
  this_ptr[0x3c] = 0;
  this_ptr[0x3d] = 0;
  this_ptr[0x3e] = 0;
  if (1 < iVar2) {
    puVar3 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar3 = &g_02572358;
    (*g_02572370)();
    this_ptr[0x3e] = puVar3;
  }
  this_ptr[0x3f] = 0;
  *(void*)(this_ptr + 0x40) = 0;
  return;
}

