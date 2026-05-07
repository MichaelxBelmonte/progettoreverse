// ===================================================================
// MUPart — Complete reconstructed pseudocode
// 3 functions
// ===================================================================

// Registered properties (2):
//   bool            _didRequestCacheValidation
//   bool            _isVoicingValid


// ============================================================
// 01183b10
// ============================================================
// Function: FUN_01183b10
// Address: 01183b10
// Size: 816 bytes
// Class: MUPart
// String references:
//   "bool"
//   "MUPart"
//   "_didRequestCacheValidation"
//   "MUNoteMappingGroup"
//   "MUNoteMapping"
//   "_partMapping"
//   "MUNoteMappingLine"
//   "_isVoicingValid"
// === MUPart properties ===
//   bool            _didRequestCacheValidation
//   bool            _isVoicingValid


void FUN_01183b10(void)

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
  *this_ptr = &g_02606ad8;
  this_ptr[7] = 0;
  lVar9 = FUN_01183780();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_01183fb0();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUPart");
  }
  this_ptr[8] = 0;
  lVar9 = FUN_01183780();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_011840a0();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "_partMapping";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUNoteMapping");
  }
  this_ptr[9] = 0;
  lVar9 = FUN_01183780();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_01184190();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "_partMapping";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUNoteMappingLine");
  }
  this_ptr[10] = 0;
  lVar9 = FUN_01183780();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_01184280();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "_partMapping";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUNoteMappingGroup");
  }
  FUN_01184370();
  FUN_01184450();
  *(void*)(this_ptr + 0xd) = 0;
  lVar9 = FUN_01183780();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x69) = 0;
  lVar9 = FUN_01183780();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  return;
}



// ============================================================
// 01508bf0
// ============================================================
// Function: FUN_01508bf0
// Address: 01508bf0
// Size: 708 bytes
// Class: MUPart
// === MUPart properties ===
//   bool            _didRequestCacheValidation
//   bool            _isVoicingValid


uint64_t FUN_01508bf0(void* param_1)

{
  uint64_t uVar1;
  char cVar2;
  void *pvVar3;
  int extraout_var;
  int extraout_var_00;
  uint64_t uVar4;
  void* pVar5;
  int64_t this_ptr;
  uint64_t local_58;
  int iStack_4c;
  int64_t local_40;
  char local_38;
  
  local_58 = *(uint64_t *)(this_ptr + 0x38);
  uVar1 = *(void*)(this_ptr + 0x40);
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0150ff70();
  if ((local_38 == '\0') && (local_40 != 0)) {
    FUN_00d50b00();
  }
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_016caaa0();
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_016caaa0();
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  pVar5 = 0;
  FUN_016c4630(0,1);
  pvVar3 = _pthread_getspecific(pVar5);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  pVar5 = 0;
  FUN_016c4630();
  FUN_00e7c260();
  iStack_4c = (int)((uint64_t)uVar1 >> 0x20);
  if (((((iStack_4c != 0) && (local_58 >> 0x20 != 0)) && (cVar2 = FUN_00e7c020(), cVar2 == '\0')) &&
      ((extraout_var_00 != 0 && (extraout_var != 0)))) && (cVar2 = FUN_00e7c020(), cVar2 != '\0')) {
    pvVar3 = _pthread_getspecific(pVar5);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar4 = FUN_016c4760();
    FUN_00e7b970();
    if ((uVar4 >> 0x20 != 0) && (cVar2 = FUN_00e7c6b0(), cVar2 == '\0')) {
      pvVar3 = _pthread_getspecific(pVar5);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_58 = FUN_016c4760();
    }
  }
  if (local_40 != 0) {
    FUN_00d50b20();
  }
  return local_58;
}



// ============================================================
// 015095d0
// ============================================================
// Function: FUN_015095d0
// Address: 015095d0
// Size: 599 bytes
// Class: MUPart
// String references:
//   "MUPart"
//   "_instrument"
//   "MUFretInstrument"
// === MUPart properties ===
//   bool            _didRequestCacheValidation
//   bool            _isVoicingValid


void FUN_015095d0(void)

{
  int iVar1;
  int64_t lVar2;
  char *pcVar3;
  uint32_t uVar4;
  int64_t local_30;
  int64_t local_28;
  
  if ((g_027c2a18 == '\0') && (iVar1 = ___cxa_guard_acquire(), iVar1 != 0)) {
    g_027c2968 = FUN_0151beb0();
    g_027c2950 = "MUFretInstrument";
    g_027c2958 = 0x50;
    g_027c2960 = FUN_0151c1e0;
    g_027c2970 = 0;
    ram_00000000027c2978 = 0;
    g_027c2980 = 0;
    ram_00000000027c2988 = 0;
    g_027c2990 = 0;
    ram_00000000027c2998 = 0;
    g_027c29a0 = 0;
    ram_00000000027c29a8 = 0;
    g_027c29b0 = 0;
    ram_00000000027c29b8 = 0;
    g_027c29c0 = 0;
    ram_00000000027c29c8 = 0;
    g_027c29d0 = 0;
    ram_00000000027c29d8 = 0;
    g_027c29e0 = 0;
    ram_00000000027c29e8 = 0;
    g_027c29f0 = 0;
    ram_00000000027c29f8 = 0;
    g_027c2a00 = 0;
    _ram_00000000027c2a08 = 0;
    g_027c2a10 = 0;
    ___cxa_guard_release();
  }
  if (g_027c2a0b == '\0') {
    FUN_01509470();
    FUN_00e87760();
    FUN_00d4ff40();
    FUN_00d50c00();
    FUN_00d4ff80();
    lVar2 = FUN_0151beb0();
    if (*(char *)(lVar2 + 0xbb) == '\0') {
      FUN_0151c0a0();
      iVar1 = FUN_00e7ddf0();
      pcVar3 = "_instrument";
      if (iVar1 == 0) {
        pcVar3 = (char *)0x0;
      }
      FUN_00e879c0(pcVar3,"MUPart");
    }
    FUN_0151c360();
    FUN_0151c5e0();
    FUN_00d50c00();
    uVar4 = FUN_00e87770();
    FUN_00e87920(uVar4,0);
    if (local_28 != 0) {
      FUN_00d50b20();
    }
    if (local_30 != 0) {
      FUN_00d50b20();
    }
    FUN_00d4ffa0();
    FUN_00d4ffa0();
  }
  return;
}

