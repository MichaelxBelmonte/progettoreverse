// ===================================================================
// GNOutlineViewDataSource — Complete reconstructed pseudocode
// 3 functions
// ===================================================================


// ============================================================
// 008196d0
// ============================================================
// Function: FUN_008196d0
// Address: 008196d0
// Size: 3126 bytes
// Class: GNOutlineViewDataSource
// String references:
//   "GNOutlineViewDataSource"
//   "GNTableViewDelegate"
//   "GNHeartbeatHandler"
//   "GNOutlineViewDelegate"
//   "GNBrowserDataSource"
//   "MUBrowserView"

void FUN_008196d0(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_000a32b0();
  this_ptr[0x27] = &g_026af280;
  // [STATIC_INIT: property registration]
  FUN_00e87c40();
  this_ptr[0x28] = &g_026af2d8;
  // [STATIC_INIT: property registration]
  FUN_00e87c40();
  this_ptr[0x29] = &g_02675300;
  // [STATIC_INIT: property registration]
  FUN_00e87c40();
  this_ptr[0x2a] = &g_02698580;
  // [STATIC_INIT: property registration]
  FUN_00e87c40();
  this_ptr[0x2b] = &g_024c8618;
  // [STATIC_INIT: property registration]
  FUN_00e87c40();
  *this_ptr = &g_02667c00;
  this_ptr[2] = &g_026685c8;
  this_ptr[0x27] = &g_02668608;
  this_ptr[0x28] = &g_02668660;
  this_ptr[0x29] = &g_026686c8;
  this_ptr[0x2a] = &g_02668750;
  this_ptr[0x2b] = &g_026687f0;
  *(void*)(this_ptr + 0x2c) = 0;
  // [STATIC_INIT: property registration]
  if (g_027e938b == '\0') {
    FUN_0081a5a0();
    FUN_00e87980();
  }
  FUN_0081a7d0();
  FUN_0081aac0();
  FUN_0081adb0();
  FUN_0081b0a0();
  FUN_0081b390();
  FUN_0081b680();
  FUN_0081b9e0();
  FUN_0081bcd0();
  FUN_0081bfc0();
  FUN_0081c240();
  *(void*)(this_ptr + 0x37) = 0;
  // [STATIC_INIT: property registration]
  if (g_027e938b == '\0') {
    FUN_0081c4c0();
    FUN_00e87980();
  }
  this_ptr[0x38] = 0;
  // [STATIC_INIT: property registration]
  if (g_027e938b == '\0') {
    FUN_0081c630();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0x39) = 0;
  // [STATIC_INIT: property registration]
  if (g_027e938b == '\0') {
    FUN_0081c7a0();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x1c9) = 0;
  // [STATIC_INIT: property registration]
  if (g_027e938b == '\0') {
    FUN_0081c910();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x1ca) = 0;
  // [STATIC_INIT: property registration]
  if (g_027e938b == '\0') {
    FUN_0081ca80();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x1cb) = 0;
  // [STATIC_INIT: property registration]
  if (g_027e938b == '\0') {
    FUN_0081cbf0();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x1cc) = 0;
  // [STATIC_INIT: property registration]
  if (g_027e938b == '\0') {
    FUN_0081cd60();
    FUN_00e87980();
  }
  FUN_0081ced0();
  FUN_0081d150();
  FUN_0081d440();
  FUN_0081d730();
  FUN_0081d9b0();
  FUN_0081dca0();
  *(void*)(this_ptr + 0x40) = 0;
  // [STATIC_INIT: property registration]
  if (g_027e938b == '\0') {
    FUN_0081df90();
    FUN_00e87980();
  }
  return;
}



// ============================================================
// 008192b0
// ============================================================
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



// ============================================================
// 001dead0
// ============================================================
// Function: FUN_001dead0
// Address: 001dead0
// Size: 845 bytes
// Class: GNOutlineViewDataSource
// String references:
//   "GNOutlineViewDataSource"
//   "GNTableViewDelegate"
//   "GNOutlineViewDelegate"
//   "GNOutlineViewAssoc"

void FUN_001dead0(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_001baad0();
  this_ptr[9] = &g_026af2d8;
  // [STATIC_INIT: property registration]
  FUN_00e87c40();
  this_ptr[10] = &g_026af280;
  // [STATIC_INIT: property registration]
  FUN_00e87c40();
  this_ptr[0xb] = &g_02698580;
  // [STATIC_INIT: property registration]
  FUN_00e87c40();
  *this_ptr = &g_0269ac60;
  this_ptr[9] = &g_0269b1f8;
  this_ptr[10] = &g_0269b260;
  this_ptr[0xb] = &g_0269b2b8;
  *(void*)(this_ptr + 0xc) = 0;
  // [STATIC_INIT: property registration]
  if (g_026ef57b == '\0') {
    FUN_001dee50();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x61) = 0;
  // [STATIC_INIT: property registration]
  if (g_026ef57b == '\0') {
    FUN_001defc0();
    FUN_00e87980();
  }
  return;
}

