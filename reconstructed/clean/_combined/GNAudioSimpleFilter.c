// ===================================================================
// GNAudioSimpleFilter — Complete reconstructed pseudocode
// 2 functions
// ===================================================================

// Registered properties (1):
//   GNAudioSimpleFilterType _type


// ============================================================
// 00afd060
// ============================================================
// Function: FUN_00afd060
// Address: 00afd060
// Size: 1686 bytes
// Class: GNAudioSimpleFilter
// String references:
//   "GNAudioSimpleFilter"
// === GNAudioSimpleFilter properties ===
//   GNAudioSimpleFilterType _type


void FUN_00afd060(void)

{
  uint64_t uVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  int iVar8;
  int64_t arg1;
  void*this_ptr;
  
  FUN_005fea00();
  *this_ptr = &g_02547170;
  *(void*)(this_ptr + 0x12) = 0;
  // [STATIC_INIT: property registration]
  if (g_02756e5b == '\0') {
    FUN_00afd730();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x94) = 0;
  // [STATIC_INIT: property registration]
  if (g_02756e5b == '\0') {
    FUN_00afd960();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0x13) = 0;
  // [STATIC_INIT: property registration]
  if (g_02756e5b == '\0') {
    FUN_00afdad0();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x9c) = 0;
  // [STATIC_INIT: property registration]
  if (g_02756e5b == '\0') {
    FUN_00afdc40();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0x14) = 0;
  // [STATIC_INIT: property registration]
  if (g_02756e5b == '\0') {
    FUN_00afddb0();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0xa4) = 0;
  // [STATIC_INIT: property registration]
  if (g_02756e5b == '\0') {
    FUN_00afdf20();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0x15) = 0;
  // [STATIC_INIT: property registration]
  if (g_02756e5b == '\0') {
    FUN_00afe090();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0xfc) = *(void*)(arg1 + 0xfc);
  uVar1 = *(void*)(arg1 + 0xf4);
  *(void*)((int64_t)this_ptr + 0xec) = *(void*)(arg1 + 0xec);
  *(void*)((int64_t)this_ptr + 0xf4) = uVar1;
  uVar1 = *(void*)(arg1 + 0xac);
  uVar2 = *(void*)(arg1 + 0xb4);
  uVar3 = *(void*)(arg1 + 0xbc);
  uVar4 = *(void*)(arg1 + 0xc4);
  uVar5 = *(void*)(arg1 + 0xcc);
  uVar6 = *(void*)(arg1 + 0xd4);
  uVar7 = *(void*)(arg1 + 0xe4);
  *(void*)((int64_t)this_ptr + 0xdc) = *(void*)(arg1 + 0xdc);
  *(void*)((int64_t)this_ptr + 0xe4) = uVar7;
  *(void*)((int64_t)this_ptr + 0xcc) = uVar5;
  *(void*)((int64_t)this_ptr + 0xd4) = uVar6;
  *(void*)((int64_t)this_ptr + 0xbc) = uVar3;
  *(void*)((int64_t)this_ptr + 0xc4) = uVar4;
  *(void*)((int64_t)this_ptr + 0xac) = uVar1;
  *(void*)((int64_t)this_ptr + 0xb4) = uVar2;
  return;
}



// ============================================================
// 00afd730
// ============================================================
// Function: FUN_00afd730
// Address: 00afd730
// Size: 519 bytes
// Class: GNAudioSimpleFilter
// String references:
//   "_type"
//   "GNAudioSimpleFilter"
//   "GNAudioSimpleFilterType"
// === GNAudioSimpleFilter properties ===
//   GNAudioSimpleFilterType _type


void* FUN_00afd730(void)

{
  int iVar1;
  
  // [STATIC_INIT: property registration]
  // [STATIC_INIT: property registration]
  FUN_00e876a0();
  // [STATIC_INIT: property registration]
      g_02756e70 = "_type";
      g_02756e78 = &g_02756da0;
      g_02756e80 = 0;
      g_02756e88 = 0x6500;
      g_02756e90 = "GNAudioSimpleFilterType";
      g_02756e98 = &g_02756f10;
      g_02756ea0 = 0;
      ram_0000000002756ea8 = 0;
      ___cxa_guard_release();
    }
  }
  return &g_02756e70;
}

