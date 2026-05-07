// ===================================================================
// GNUpdateCheckController — Complete reconstructed pseudocode
// 4 functions
// ===================================================================

// Registered properties (3):
//                   _lastCheckField
//                   _statusField
//                   _checkTypePopup


// ============================================================
// 01d01400
// ============================================================
// Function: FUN_01d01400
// Address: 01d01400
// Size: 3618 bytes
// Class: GNUpdateCheckController
// === GNUpdateCheckController properties ===
//                   _lastCheckField
//                   _statusField
//                   _checkTypePopup


void FUN_01d01400(void)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t *plVar3;
  int64_t *this_ptr;
  int64_t local_340;
  char local_338;
  int64_t local_330;
  char local_328;
  int64_t local_320;
  char local_318;
  int64_t local_310;
  char local_308;
  int64_t local_300;
  char local_2f8;
  int64_t local_2f0;
  char local_2e8;
  int64_t local_2e0;
  char local_2d8;
  int64_t local_2d0;
  char local_2c8;
  int64_t local_2c0;
  char local_2b8;
  int64_t local_2b0;
  char local_2a8;
  int64_t local_2a0;
  char local_298;
  int64_t local_290;
  char local_288;
  int64_t local_280;
  char local_278;
  int64_t local_270;
  char local_268;
  int64_t local_260;
  char local_258;
  int64_t local_250;
  char local_248;
  int64_t local_240;
  char local_238;
  int64_t local_230;
  char local_228;
  int64_t local_220;
  char local_218;
  int64_t local_210;
  char local_208;
  int64_t local_200;
  char local_1f8;
  int64_t local_1f0;
  char local_1e8;
  int64_t local_1e0;
  char local_1d8;
  int64_t local_1d0;
  char local_1c8;
  int64_t local_1c0;
  char local_1b8;
  int64_t local_1b0;
  char local_1a8;
  int64_t local_1a0;
  char local_198;
  int64_t local_190;
  char local_188;
  int64_t local_180;
  char local_178;
  int64_t local_170;
  char local_168;
  int64_t local_160;
  char local_158;
  int64_t local_150;
  char local_148;
  int64_t local_140;
  char local_138;
  int64_t local_130;
  char local_128;
  int64_t *local_120;
  char local_118;
  int64_t local_30;
  char local_28;
  
  plVar3 = (int64_t *)FUN_00e8fc40();
  FUN_001d7da0();
  (**(code **)(*plVar3 + 0x18))();
  lVar2 = g_027f3318;
  if (g_027f3318 != 0) {
    FUN_00d50b00();
  }
  lVar1 = g_027ef480;
  if (g_027ef480 != 0) {
    FUN_00d50b00();
  }
  local_340 = lVar1;
  local_338 = '\x01';
  local_330 = 0;
  local_328 = '\0';
  FUN_00d31230(&local_330,&local_340);
  lVar1 = g_027e7ca0;
  if ((local_28 == '\0') && (local_30 != 0)) {
    FUN_00d50b00();
    lVar1 = g_027e7ca0;
  }
  g_027e7ca0 = lVar1;
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  local_318 = '\x01';
  local_310 = 0;
  local_308 = '\0';
  local_320 = lVar1;
  if (this_ptr != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  FUN_01d5da60(&local_310,&local_320,&stack0xfffffffffffffef0);
  if (this_ptr != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_308 != '\0') && (local_310 != 0)) {
    FUN_00d50b20();
  }
  if ((local_318 != '\0') && (local_320 != 0)) {
    FUN_00d50b20();
  }
  if (local_30 != 0) {
    FUN_00d50b20();
  }
  if ((local_328 != '\0') && (local_330 != 0)) {
    FUN_00d50b20();
  }
  if ((local_338 != '\0') && (local_340 != 0)) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  lVar2 = g_027f3318;
  if (g_027f3318 != 0) {
    FUN_00d50b00();
  }
  lVar1 = g_027ef488;
  local_300 = lVar2;
  local_2f8 = '\x01';
  if (g_027ef488 != 0) {
    FUN_00d50b00();
  }
  local_2f0 = lVar1;
  local_2e8 = '\x01';
  local_2e0 = 0;
  local_2d8 = '\0';
  FUN_00d31230(&local_2e0,&local_2f0);
  if (local_30 != 0) {
    FUN_00d50b00();
  }
  lVar2 = g_027f2a20;
  if (g_027f2a20 != 0) {
    FUN_00d50b00();
  }
  local_2c8 = '\x01';
  local_2c0 = 0;
  local_2b8 = '\0';
  local_2d0 = lVar2;
  if (this_ptr != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  FUN_01d5da60(&local_2c0,&local_2d0,&stack0xffffffffffffff00);
  if (this_ptr != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_2b8 != '\0') && (local_2c0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_2c8 != '\0') && (local_2d0 != 0)) {
    FUN_00d50b20();
  }
  if (local_30 != 0) {
    FUN_00d50b20();
  }
  if ((local_2d8 != '\0') && (local_2e0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_2e8 != '\0') && (local_2f0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_2f8 != '\0') && (local_300 != 0)) {
    FUN_00d50b20();
  }
  lVar2 = g_027f3318;
  if (g_027f3318 != 0) {
    FUN_00d50b00();
  }
  lVar1 = g_027ef490;
  local_2b0 = lVar2;
  local_2a8 = '\x01';
  if (g_027ef490 != 0) {
    FUN_00d50b00();
  }
  local_2a0 = lVar1;
  local_298 = '\x01';
  local_290 = 0;
  local_288 = '\0';
  FUN_00d31230(&local_290,&local_2a0);
  if (local_30 != 0) {
    FUN_00d50b00();
  }
  lVar2 = g_026de8c8;
  if (g_026de8c8 != 0) {
    FUN_00d50b00();
  }
  local_278 = '\x01';
  local_270 = 0;
  local_268 = '\0';
  local_280 = lVar2;
  if (this_ptr != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  FUN_01d5da60(&local_270,&local_280,&stack0xffffffffffffff10);
  if (this_ptr != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_268 != '\0') && (local_270 != 0)) {
    FUN_00d50b20();
  }
  if ((local_278 != '\0') && (local_280 != 0)) {
    FUN_00d50b20();
  }
  if (local_30 != 0) {
    FUN_00d50b20();
  }
  if ((local_288 != '\0') && (local_290 != 0)) {
    FUN_00d50b20();
  }
  if ((local_298 != '\0') && (local_2a0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_2a8 != '\0') && (local_2b0 != 0)) {
    FUN_00d50b20();
  }
  lVar2 = g_027f3318;
  if (g_027f3318 != 0) {
    FUN_00d50b00();
  }
  lVar1 = g_0276c290;
  local_260 = lVar2;
  local_258 = '\x01';
  if (g_0276c290 != 0) {
    FUN_00d50b00();
  }
  local_250 = lVar1;
  local_248 = '\x01';
  local_240 = 0;
  local_238 = '\0';
  FUN_00d31230(&local_240,&local_250);
  if (local_30 != 0) {
    FUN_00d50b00();
  }
  lVar2 = g_027ef498;
  if (g_027ef498 != 0) {
    FUN_00d50b00();
  }
  local_228 = '\x01';
  local_220 = 0;
  local_218 = '\0';
  local_230 = lVar2;
  if (this_ptr != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  FUN_01d5da60(&local_220,&local_230,&stack0xffffffffffffff20);
  if (this_ptr != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_218 != '\0') && (local_220 != 0)) {
    FUN_00d50b20();
  }
  if ((local_228 != '\0') && (local_230 != 0)) {
    FUN_00d50b20();
  }
  if (local_30 != 0) {
    FUN_00d50b20();
  }
  if ((local_238 != '\0') && (local_240 != 0)) {
    FUN_00d50b20();
  }
  if ((local_248 != '\0') && (local_250 != 0)) {
    FUN_00d50b20();
  }
  if ((local_258 != '\0') && (local_260 != 0)) {
    FUN_00d50b20();
  }
  FUN_01d5dc80();
  local_210 = g_027f3318;
  if (g_027f3318 != 0) {
    FUN_00d50b00();
  }
  lVar2 = g_027ef4a0;
  local_208 = '\x01';
  if (g_027ef4a0 != 0) {
    FUN_00d50b00();
  }
  local_200 = lVar2;
  local_1f8 = '\x01';
  local_1f0 = 0;
  local_1e8 = '\0';
  FUN_00d31230(&local_1f0,&local_200);
  if (local_30 != 0) {
    FUN_00d50b00();
  }
  lVar2 = g_027ef4a8;
  if (g_027ef4a8 != 0) {
    FUN_00d50b00();
  }
  local_1d8 = '\x01';
  local_1d0 = 0;
  local_1c8 = '\0';
  local_1e0 = lVar2;
  if (this_ptr != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  FUN_01d5da60(&local_1d0,&local_1e0,&stack0xffffffffffffff30);
  if (this_ptr != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_1c8 != '\0') && (local_1d0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_1d8 != '\0') && (local_1e0 != 0)) {
    FUN_00d50b20();
  }
  if (local_30 != 0) {
    FUN_00d50b20();
  }
  if ((local_1e8 != '\0') && (local_1f0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_1f8 != '\0') && (local_200 != 0)) {
    FUN_00d50b20();
  }
  if ((local_208 != '\0') && (local_210 != 0)) {
    FUN_00d50b20();
  }
  lVar2 = g_027f3318;
  if (g_027f3318 != 0) {
    FUN_00d50b00();
  }
  lVar1 = g_027ef4b0;
  local_1c0 = lVar2;
  local_1b8 = '\x01';
  if (g_027ef4b0 != 0) {
    FUN_00d50b00();
  }
  local_1b0 = lVar1;
  local_1a8 = '\x01';
  local_1a0 = 0;
  local_198 = '\0';
  FUN_00d31230(&local_1a0,&local_1b0);
  if (local_30 != 0) {
    FUN_00d50b00();
  }
  lVar2 = g_027ef4b8;
  if (g_027ef4b8 != 0) {
    FUN_00d50b00();
  }
  local_188 = '\x01';
  local_180 = 0;
  local_178 = '\0';
  local_190 = lVar2;
  if (this_ptr != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  FUN_01d5da60(&local_180,&local_190,&stack0xffffffffffffff40);
  if (this_ptr != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_178 != '\0') && (local_180 != 0)) {
    FUN_00d50b20();
  }
  if ((local_188 != '\0') && (local_190 != 0)) {
    FUN_00d50b20();
  }
  if (local_30 != 0) {
    FUN_00d50b20();
  }
  if ((local_198 != '\0') && (local_1a0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_1a8 != '\0') && (local_1b0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_1b8 != '\0') && (local_1c0 != 0)) {
    FUN_00d50b20();
  }
  lVar2 = g_027f3318;
  if (g_027f3318 != 0) {
    FUN_00d50b00();
  }
  lVar1 = g_027ef4c0;
  local_170 = lVar2;
  local_168 = '\x01';
  if (g_027ef4c0 != 0) {
    FUN_00d50b00();
  }
  local_160 = lVar1;
  local_158 = '\x01';
  local_150 = 0;
  local_148 = '\0';
  FUN_00d31230(&local_150,&local_160);
  if (local_30 != 0) {
    FUN_00d50b00();
  }
  lVar2 = g_027ef4c8;
  if (g_027ef4c8 != 0) {
    FUN_00d50b00();
  }
  local_138 = '\x01';
  local_130 = 0;
  local_128 = '\0';
  local_140 = lVar2;
  if (this_ptr != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  FUN_01d5da60(&local_130,&local_140,&stack0xffffffffffffff50);
  if (this_ptr != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_128 != '\0') && (local_130 != 0)) {
    FUN_00d50b20();
  }
  if ((local_138 != '\0') && (local_140 != 0)) {
    FUN_00d50b20();
  }
  if (local_30 != 0) {
    FUN_00d50b20();
  }
  if ((local_148 != '\0') && (local_150 != 0)) {
    FUN_00d50b20();
  }
  if ((local_158 != '\0') && (local_160 != 0)) {
    FUN_00d50b20();
  }
  if ((local_168 != '\0') && (local_170 != 0)) {
    FUN_00d50b20();
  }
  local_118 = '\0';
  local_120 = plVar3;
  (**(code **)(*this_ptr + 0x6e8))();
  if ((local_118 != '\0') && (local_120 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}



// ============================================================
// 01d00230
// ============================================================
// Function: FUN_01d00230
// Address: 01d00230
// Size: 770 bytes
// Class: GNUpdateCheckController
// === GNUpdateCheckController properties ===
//                   _lastCheckField
//                   _statusField
//                   _checkTypePopup


void FUN_01d00230(uint64_t param_1)

{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t lVar4;
  int iVar5;
  int64_t this_ptr;
  int64_t local_78;
  char local_70;
  int64_t local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  char local_40;
  int64_t local_38;
  char local_30;
  
  FUN_00d12ed0();
  lVar4 = local_38;
  if ((((local_30 == '\0') && (local_38 != 0)) && (FUN_00d50b00(), local_30 != '\0')) &&
     (local_38 != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(**(int64_t **)(this_ptr + 0x70) + 0x968))();
  (**(code **)(**(int64_t **)(this_ptr + 0x80) + 0x918))();
  FUN_00d6f370();
  lVar2 = g_027258d0;
  if (g_027258d0 != 0) {
    FUN_00d50b00();
  }
  iVar5 = FUN_00d708a0(param_1,1);
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  if (iVar5 == 0) {
    (**(code **)(**(int64_t **)(this_ptr + 0x80) + 0x918))();
  }
  FUN_00d6f370();
  lVar2 = g_02725a90;
  if (g_02725a90 != 0) {
    FUN_00d50b00();
  }
  iVar5 = FUN_00d708a0(param_1,1);
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  lVar3 = g_027ef278;
  lVar2 = g_027ef270;
  plVar1 = *(int64_t **)(this_ptr + 0x78);
  if (iVar5 == 0) {
    if (g_027ef278 != 0) {
      FUN_00d50b00();
    }
    local_68 = lVar3;
    local_60 = '\x01';
    FUN_01e57260(param_1,&local_68);
    local_48 = local_38;
    local_40 = 0;
    if (local_30 == '\0') {
      if (local_38 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_30 = '\0';
    }
    local_40 = '\x01';
    (**(code **)(*plVar1 + 0x968))();
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    if (g_027ef270 != 0) {
      FUN_00d50b00();
    }
    local_78 = lVar2;
    local_70 = '\x01';
    FUN_01e57260(param_1,&local_78);
    local_58 = local_38;
    local_50 = 0;
    if (local_30 == '\0') {
      if (local_38 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_30 = '\0';
    }
    local_50 = '\x01';
    (**(code **)(*plVar1 + 0x968))();
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
  }
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 01cffdc0
// ============================================================
// Function: FUN_01cffdc0
// Address: 01cffdc0
// Size: 679 bytes
// Class: GNUpdateCheckController
// String references:
//   "GNUpdateCheckController"
//   "handleCheckNow"
//   "handleTypeChanged"
// === GNUpdateCheckController properties ===
//                   _lastCheckField
//                   _statusField
//                   _checkTypePopup


void FUN_01cffdc0(void)

{
  int iVar1;
  
  // [STATIC_INIT: property registration]
      g_028b7968 = "handleCheckNow";
      g_028b7970 = &g_0270eab8;
      g_028b7978 = 0;
      g_028b7980 = &g_027ef280;
      g_028b7988 = FUN_01d00d90;
      g_028b7990 = 0x5c1;
      g_028b7998 = 0;
      ram_00000000028b79a0 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_028b79b0 = "handleTypeChanged";
      g_028b79b8 = &g_0270eab8;
      g_028b79c0 = 0;
      g_028b79c8 = &g_027ef280;
      g_028b79d0 = FUN_01d00d90;
      g_028b79d8 = 0x5c9;
      g_028b79e0 = 0;
      ram_00000000028b79e8 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  return;
}



// ============================================================
// 01d01000
// ============================================================
// Function: FUN_01d01000
// Address: 01d01000
// Size: 941 bytes
// Class: GNUpdateCheckController
// String references:
//   "handleCopy"
//   "handlePaste"
//   "handleCut"
//   "handleMakeSolid"
//   "handleMakeGradient"
//   "handleMakeGlossyGradient"
// === GNUpdateCheckController properties ===
//                   _lastCheckField
//                   _statusField
//                   _checkTypePopup


void FUN_01d01000(void)

{
  int iVar1;
  
  // [STATIC_INIT: property registration]
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
  FUN_00e87c70();
  return;
}

