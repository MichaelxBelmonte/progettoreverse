// ===================================================================
// MUVoiceMapper — Complete reconstructed pseudocode
// 8 functions
// ===================================================================

// Registered properties (4):
//   MUBlockApproachHarmonization _approachHarmonization
//   MUVoicingMode   _mode
//   MUVoicePreTransposition _voicePreTransposition
//   MUBlockVoicingStructure _voicingStructure


// ============================================================
// 011db220
// ============================================================
// Function: FUN_011db220
// Address: 011db220
// Size: 5643 bytes
// Class: MUVoiceMapper
// String references:
//   "PNTestMatrixPoint"
// === MUVoiceMapper properties ===
//   MUBlockApproachHarmonization _approachHarmonization
//   MUVoicingMode   _mode
//   MUVoicePreTransposition _voicePreTransposition
//   MUBlockVoicingStructure _voicingStructure


void FUN_011db220(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_00d4ff80();
  *this_ptr = &g_025f37e8;
  *(void*)((int64_t)this_ptr + 0xc) = 0;
  // [STATIC_INIT: property registration]
  if (g_027ba7db == '\0') {
    FUN_011dc8c0();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 2) = 0;
  // [STATIC_INIT: property registration]
  if (g_027ba7db == '\0') {
    FUN_011dca30();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x14) = 0;
  // [STATIC_INIT: property registration]
  if (g_027ba7db == '\0') {
    FUN_011dcba0();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 3) = 0;
  // [STATIC_INIT: property registration]
  if (g_027ba7db == '\0') {
    FUN_011dcd10();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x1c) = 0;
  // [STATIC_INIT: property registration]
  if (g_027ba7db == '\0') {
    FUN_011dce80();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 4) = 0;
  // [STATIC_INIT: property registration]
  if (g_027ba7db == '\0') {
    FUN_011dcff0();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x24) = 0;
  // [STATIC_INIT: property registration]
  if (g_027ba7db == '\0') {
    FUN_011dd160();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 5) = 0;
  // [STATIC_INIT: property registration]
  if (g_027ba7db == '\0') {
    FUN_011dd2d0();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x2c) = 0;
  // [STATIC_INIT: property registration]
  if (g_027ba7db == '\0') {
    FUN_011dd440();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 6) = 0;
  // [STATIC_INIT: property registration]
  if (g_027ba7db == '\0') {
    FUN_011dd5b0();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x34) = 0;
  // [STATIC_INIT: property registration]
  if (g_027ba7db == '\0') {
    FUN_011dd720();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 7) = 0;
  // [STATIC_INIT: property registration]
  if (g_027ba7db == '\0') {
    FUN_011dd890();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x3c) = 0;
  // [STATIC_INIT: property registration]
  if (g_027ba7db == '\0') {
    FUN_011dda00();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 8) = 0;
  // [STATIC_INIT: property registration]
  if (g_027ba7db == '\0') {
    FUN_011ddb70();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x44) = 0;
  // [STATIC_INIT: property registration]
  if (g_027ba7db == '\0') {
    FUN_011ddce0();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 9) = 0;
  // [STATIC_INIT: property registration]
  if (g_027ba7db == '\0') {
    FUN_011dde50();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x4c) = 0;
  // [STATIC_INIT: property registration]
  if (g_027ba7db == '\0') {
    FUN_011ddfc0();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 10) = 0;
  // [STATIC_INIT: property registration]
  if (g_027ba7db == '\0') {
    FUN_011de130();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x54) = 0;
  // [STATIC_INIT: property registration]
  if (g_027ba7db == '\0') {
    FUN_011de2a0();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0xb) = 0;
  // [STATIC_INIT: property registration]
  if (g_027ba7db == '\0') {
    FUN_011de410();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x5c) = 0;
  // [STATIC_INIT: property registration]
  if (g_027ba7db == '\0') {
    FUN_011de580();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0xc) = 0;
  // [STATIC_INIT: property registration]
  if (g_027ba7db == '\0') {
    FUN_011de6f0();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 100) = 0;
  // [STATIC_INIT: property registration]
  if (g_027ba7db == '\0') {
    FUN_011de860();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0xd) = 0;
  // [STATIC_INIT: property registration]
  if (g_027ba7db == '\0') {
    FUN_011de9d0();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x6c) = 0;
  // [STATIC_INIT: property registration]
  if (g_027ba7db == '\0') {
    FUN_011deb40();
    FUN_00e87980();
  }
  FUN_011decb0();
  FUN_011def30();
  FUN_011df220();
  FUN_011df520();
  FUN_011df800();
  return;
}



// ============================================================
// 011d59f0
// ============================================================
// Function: FUN_011d59f0
// Address: 011d59f0
// Size: 4618 bytes
// Class: MUVoiceMapper
// String references:
//   "MUVoiceMapper"
// === MUVoiceMapper properties ===
//   MUBlockApproachHarmonization _approachHarmonization
//   MUVoicingMode   _mode
//   MUVoicePreTransposition _voicePreTransposition
//   MUBlockVoicingStructure _voicingStructure


void FUN_011d59f0(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_01152110();
  *this_ptr = &g_025ef490;
  *(void*)(this_ptr + 9) = 0;
  // [STATIC_INIT: property registration]
  if (g_027b9983 == '\0') {
    FUN_011d6c50();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x4c) = 0;
  // [STATIC_INIT: property registration]
  if (g_027b9983 == '\0') {
    FUN_011d6e90();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 10) = 0;
  // [STATIC_INIT: property registration]
  if (g_027b9983 == '\0') {
    FUN_011d70f0();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x54) = 0;
  // [STATIC_INIT: property registration]
  if (g_027b9983 == '\0') {
    FUN_011d7330();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0xb) = 0;
  // [STATIC_INIT: property registration]
  if (g_027b9983 == '\0') {
    FUN_011d74a0();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x5c) = 0;
  // [STATIC_INIT: property registration]
  if (g_027b9983 == '\0') {
    FUN_011d76f0();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0xc) = 0;
  // [STATIC_INIT: property registration]
  if (g_027b9983 == '\0') {
    FUN_011d7860();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 100) = 0;
  // [STATIC_INIT: property registration]
  if (g_027b9983 == '\0') {
    FUN_011d7aa0();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0xd) = 0;
  // [STATIC_INIT: property registration]
  if (g_027b9983 == '\0') {
    FUN_011d7c10();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x6c) = 0;
  // [STATIC_INIT: property registration]
  if (g_027b9983 == '\0') {
    FUN_011d7d80();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0xe) = 0;
  // [STATIC_INIT: property registration]
  if (g_027b9983 == '\0') {
    FUN_011d7ef0();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x74) = 0;
  // [STATIC_INIT: property registration]
  if (g_027b9983 == '\0') {
    FUN_011d8060();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0xf) = 0;
  // [STATIC_INIT: property registration]
  if (g_027b9983 == '\0') {
    FUN_011d81d0();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x7c) = 0;
  // [STATIC_INIT: property registration]
  if (g_027b9983 == '\0') {
    FUN_011d8340();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0x10) = 0;
  // [STATIC_INIT: property registration]
  if (g_027b9983 == '\0') {
    FUN_011d84b0();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x84) = 0;
  // [STATIC_INIT: property registration]
  if (g_027b9983 == '\0') {
    FUN_011d8620();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0x11) = 0;
  // [STATIC_INIT: property registration]
  if (g_027b9983 == '\0') {
    FUN_011d8790();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x8c) = 0;
  // [STATIC_INIT: property registration]
  if (g_027b9983 == '\0') {
    FUN_011d8900();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0x12) = 0;
  // [STATIC_INIT: property registration]
  if (g_027b9983 == '\0') {
    FUN_011d8a70();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x94) = 0;
  // [STATIC_INIT: property registration]
  if (g_027b9983 == '\0') {
    FUN_011d8be0();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x95) = 0;
  // [STATIC_INIT: property registration]
  if (g_027b9983 == '\0') {
    FUN_011d8d50();
    FUN_00e87980();
  }
  return;
}



// ============================================================
// 011d8f10
// ============================================================
// Function: FUN_011d8f10
// Address: 011d8f10
// Size: 1789 bytes
// Class: MUVoiceMapper
// String references:
//   "PNTestBinPeak"
// === MUVoiceMapper properties ===
//   MUBlockApproachHarmonization _approachHarmonization
//   MUVoicingMode   _mode
//   MUVoicePreTransposition _voicePreTransposition
//   MUBlockVoicingStructure _voicingStructure


void FUN_011d8f10(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_00d4ff80();
  *this_ptr = &g_025f3470;
  *(void*)((int64_t)this_ptr + 0xc) = 0;
  // [STATIC_INIT: property registration]
  if (g_027ba293 == '\0') {
    FUN_011d9640();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 2) = 0;
  // [STATIC_INIT: property registration]
  if (g_027ba293 == '\0') {
    FUN_011d97b0();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x14) = 0;
  // [STATIC_INIT: property registration]
  if (g_027ba293 == '\0') {
    FUN_011d9920();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 3) = 0;
  // [STATIC_INIT: property registration]
  if (g_027ba293 == '\0') {
    FUN_011d9a90();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x1c) = 0;
  // [STATIC_INIT: property registration]
  if (g_027ba293 == '\0') {
    FUN_011d9c00();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 4) = 0;
  // [STATIC_INIT: property registration]
  if (g_027ba293 == '\0') {
    FUN_011d9d70();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x24) = 0;
  // [STATIC_INIT: property registration]
  if (g_027ba293 == '\0') {
    FUN_011d9ee0();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 5) = 0;
  // [STATIC_INIT: property registration]
  if (g_027ba293 == '\0') {
    FUN_011da050();
    FUN_00e87980();
  }
  FUN_011da1c0();
  return;
}



// ============================================================
// 011da6c0
// ============================================================
// Function: FUN_011da6c0
// Address: 011da6c0
// Size: 700 bytes
// Class: MUVoiceMapper
// String references:
//   "PNTestBinPath"
// === MUVoiceMapper properties ===
//   MUBlockApproachHarmonization _approachHarmonization
//   MUVoicingMode   _mode
//   MUVoicePreTransposition _voicePreTransposition
//   MUBlockVoicingStructure _voicingStructure


void FUN_011da6c0(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_00d4ff80();
  *this_ptr = &g_025c6400;
  *(void*)((int64_t)this_ptr + 0xc) = 0;
  // [STATIC_INIT: property registration]
  if (g_027ba5eb == '\0') {
    FUN_011da9b0();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 2) = 0;
  // [STATIC_INIT: property registration]
  if (g_027ba5eb == '\0') {
    FUN_011dab20();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x14) = 0;
  // [STATIC_INIT: property registration]
  if (g_027ba5eb == '\0') {
    FUN_011dac90();
    FUN_00e87980();
  }
  FUN_011dae00();
  return;
}



// ============================================================
// 011d70f0
// ============================================================
// Function: FUN_011d70f0
// Address: 011d70f0
// Size: 529 bytes
// Class: MUVoiceMapper
// String references:
//   "MUVoiceMapper"
//   "MUBlockApproachHarmonization"
//   "_approachHarmonization"
// === MUVoiceMapper properties ===
//   MUBlockApproachHarmonization _approachHarmonization
//   MUVoicingMode   _mode
//   MUVoicePreTransposition _voicePreTransposition
//   MUBlockVoicingStructure _voicingStructure


void* FUN_011d70f0(void)

{
  int iVar1;
  
  // [STATIC_INIT: property registration]
  // [STATIC_INIT: property registration]
  FUN_00e876a0();
  // [STATIC_INIT: property registration]
      g_027b9b70 = "_approachHarmonization";
      g_027b9b78 = &g_027b98c8;
      g_027b9b80 = 0;
      g_027b9b88 = 0x6500;
      g_027b9b90 = "MUBlockApproachHarmonization";
      g_027b9b98 = &g_027b9c10;
      g_027b9ba0 = 0;
      ram_00000000027b9ba8 = 0;
      ___cxa_guard_release();
    }
  }
  return &g_027b9b70;
}



// ============================================================
// 011d7860
// ============================================================
// Function: FUN_011d7860
// Address: 011d7860
// Size: 532 bytes
// Class: MUVoiceMapper
// String references:
//   "MUVoiceMapper"
//   "MUVoicePreTransposition"
//   "_voicePreTransposition"
// === MUVoiceMapper properties ===
//   MUBlockApproachHarmonization _approachHarmonization
//   MUVoicingMode   _mode
//   MUVoicePreTransposition _voicePreTransposition
//   MUBlockVoicingStructure _voicingStructure


void* FUN_011d7860(void)

{
  int iVar1;
  
  // [STATIC_INIT: property registration]
  // [STATIC_INIT: property registration]
  FUN_00e876a0();
  // [STATIC_INIT: property registration]
      g_027b9d20 = "_voicePreTransposition";
      g_027b9d28 = &g_027b98c8;
      g_027b9d30 = 0;
      g_027b9d38 = 0x6500;
      g_027b9d40 = "MUVoicePreTransposition";
      g_027b9d48 = &g_027b9da8;
      g_027b9d50 = 0;
      ram_00000000027b9d58 = 0;
      ___cxa_guard_release();
    }
  }
  return &g_027b9d20;
}



// ============================================================
// 011d6e90
// ============================================================
// Function: FUN_011d6e90
// Address: 011d6e90
// Size: 561 bytes
// Class: MUVoiceMapper
// String references:
//   "MUVoiceMapper"
//   "MUBlockVoicingStructure"
//   "_voicingStructure"
// === MUVoiceMapper properties ===
//   MUBlockApproachHarmonization _approachHarmonization
//   MUVoicingMode   _mode
//   MUVoicePreTransposition _voicePreTransposition
//   MUBlockVoicingStructure _voicingStructure


void* FUN_011d6e90(void)

{
  int iVar1;
  
  // [STATIC_INIT: property registration]
  // [STATIC_INIT: property registration]
  FUN_00e876a0();
  // [STATIC_INIT: property registration]
      g_027b9a50 = "_voicingStructure";
      g_027b9a58 = &g_027b98c8;
      g_027b9a60 = 0;
      g_027b9a68 = 0x6500;
      g_027b9a70 = "MUBlockVoicingStructure";
      g_027b9a78 = &g_027b9b38;
      g_027b9a80 = 0;
      ram_00000000027b9a88 = 0;
      ___cxa_guard_release();
    }
  }
  return &g_027b9a50;
}



// ============================================================
// 011d6c50
// ============================================================
// Function: FUN_011d6c50
// Address: 011d6c50
// Size: 532 bytes
// Class: MUVoiceMapper
// String references:
//   "_mode"
//   "MUVoiceMapper"
//   "MUVoicingMode"
// === MUVoiceMapper properties ===
//   MUBlockApproachHarmonization _approachHarmonization
//   MUVoicingMode   _mode
//   MUVoicePreTransposition _voicePreTransposition
//   MUBlockVoicingStructure _voicingStructure


void* FUN_011d6c50(void)

{
  int iVar1;
  
  // [STATIC_INIT: property registration]
  // [STATIC_INIT: property registration]
  FUN_00e876a0();
  // [STATIC_INIT: property registration]
      g_027b9998 = "_mode";
      g_027b99a0 = &g_027b98c8;
      g_027b99a8 = 0;
      g_027b99b0 = 0x6500;
      g_027b99b8 = "MUVoicingMode";
      g_027b99c0 = &g_027b9a18;
      g_027b99c8 = 0;
      ram_00000000027b99d0 = 0;
      ___cxa_guard_release();
    }
  }
  return &g_027b9998;
}

