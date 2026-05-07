// Function: FUN_01c91010
// Address: 01c91010
// Size: 2024 bytes
// Class: MUSignatureEditorRulerView
// String references:
//   "%s %s %s\n"
//   "%@ %@ %@ (%I cores)\n\n"
//   "%I Note(s) of %I File(s)\n\n"
//   "Archiving"
//   "Unarchiving"
//   "Plain Rendering"
//   "Plain Rendering in Realtime"
//   "Editing Pitch"
//   "Edited Rendering"
//   "Edited Rendering in Realtime"
//   "Analyzing Audio"
// === MUSignatureEditorRulerView properties ===
//                   _primaryGridColor
//                   _secondaryGridColor
//                   _currentlyEditedSignatureStartQuarter
//                   _currentGrid
//                   _showDestinationGrid
//                   _destinationGrid
//                   _destinationAlpha
//                   _editTimelineMode
//                   _timelineHelper
//                   _runloopObserver
//                   _targetEditor
//                   _reassignsScalesAndChords
//                   _audioSourceElements
//                   _tempoEditorRulerView


void* FUN_01c91010(uint64_t param_1,int64_t *param_2)

{
  bool bVar1;
  bool bVar2;
  void*puVar3;
  int64_t *plVar4;
  void*puVar5;
  uint32_t uVar6;
  uint32_t uVar7;
  void*puVar8;
  int64_t lVar9;
  uint64_t uVar10;
  int64_t *plVar11;
  void*this_ptr;
  bool bVar12;
  uint8_t local_140 [8];
  uint8_t local_138 [8];
  int64_t *local_128;
  char local_120;
  int64_t local_118;
  char local_110;
  int64_t *local_108;
  char local_100;
  int64_t local_f8;
  char local_f0;
  int64_t *local_e8;
  char local_e0;
  int64_t local_d8;
  char local_d0;
  int64_t local_c8;
  char local_c0;
  int64_t local_b8;
  char local_b0;
  void*local_a8;
  char local_a0;
  void*local_98;
  uint local_90;
  uint32_t local_8c;
  int64_t local_88;
  uint64_t local_80;
  int64_t local_78;
  char local_70;
  int64_t local_68;
  char local_60;
  uint32_t local_58;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  plVar4 = g_028b7260;
  plVar11 = (int64_t *)*param_2;
  if (g_028b7260 != plVar11) {
    if (plVar11 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    g_028b7260 = plVar11;
    if (plVar4 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    plVar11 = (int64_t *)*param_2;
  }
  if ((plVar11 != (int64_t *)0x0) && (g_028b7268 == '\0')) {
    g_028b7268 = '\x01';
    FUN_00e8cb90();
  }
  puVar8 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar8 = &g_025795a8;
  (*g_025795c0)();
  if (g_028b7230 == puVar8) {
    bVar2 = false;
    bVar1 = false;
  }
  else {
    bVar2 = true;
    bVar1 = true;
    bVar12 = g_028b7230 != (void*)0x0;
    g_028b7230 = puVar8;
    if (bVar12) {
      FUN_00d50b20();
    }
  }
  if (g_028b7238 == '\0') {
    g_028b7238 = '\x01';
    FUN_00e8cb90();
    bVar1 = bVar2;
  }
  if (!bVar1) {
    FUN_00d50b20();
  }
  lVar9 = FUN_00003040();
  uVar10 = FUN_00003050();
  local_78 = FUN_00003060();
  local_90 = 3;
  local_98 = (void*)&g_02670858;
  local_88 = lVar9;
  local_80 = uVar10;
  FUN_00d94d80(&g_02670858,&local_98);
  FUN_00dec0e0();
  (**(code **)(*local_128 + 0x398))();
  FUN_00dec0e0();
  (**(code **)(*local_108 + 0x3a0))();
  FUN_00dec0e0();
  (**(code **)(*local_e8 + 0x3a8))();
  uVar6 = FUN_00da6b30();
  FUN_002bd7b0(local_138,local_140,4);
  local_98 = (void*)&g_02670890;
  local_58 = uVar6;
  FUN_00d94d80();
  local_98 = (void*)&g_025df260;
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  local_98 = (void*)&g_0253d630;
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  local_98 = &g_024c5048;
  if (((char)local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  if ((local_f0 != '\0') && (local_f8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_e0 != '\0') && (local_e8 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_110 != '\0') && (local_118 != 0)) {
    FUN_00d50b20();
  }
  if ((local_100 != '\0') && (local_108 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_120 != '\0') && (local_128 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(*(int64_t *)*param_2 + 0x9b0))();
  uVar6 = *(void*)((int64_t)local_98 + 0xc);
  if ((char)local_90 != '\0') {
    FUN_00d50b20();
  }
  (**(code **)(*g_028b7260 + 0x9b0))();
  local_50 = local_40;
  local_48 = 0;
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  local_48 = '\x01';
  local_d0 = '\0';
  local_d8 = 0;
  local_c8 = 0;
  local_c0 = '\0';
  FUN_01293ed0(&local_c8,&local_d8);
  puVar8 = local_98;
  if ((char)local_90 == '\0') {
    if (local_98 != (void*)0x0) {
      FUN_00d50b00();
      if (((char)local_90 != '\0') && (local_98 != (void*)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    local_90 = local_90 & 0xffffff00;
  }
  if ((local_c0 != '\0') && (local_c8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_d0 != '\0') && (local_d8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if (puVar8 == (void*)0x0) {
    uVar7 = 0;
  }
  else {
    uVar7 = *(void*)((int64_t)puVar8 + 0xc);
  }
  local_90 = 2;
  local_98 = (void*)&g_024c3df0;
  local_88 = CONCAT44(local_88._4_4_,uVar7);
  local_8c = uVar6;
  FUN_00d94d80(&g_024c3df0,&local_98);
  FUN_00da6ff0();
  FUN_01c90e10();
  FUN_01c90e10();
  FUN_01c90e10();
  FUN_01c90e10();
  FUN_01c90e10();
  FUN_01c90e10();
  FUN_01c90e10();
  FUN_01c90e10();
  FUN_00da7150();
  FUN_01ca6970();
  puVar5 = local_98;
  if (((char)local_90 == '\0') && (local_98 != (void*)0x0)) {
    FUN_00d50b00();
    if (((char)local_90 != '\0') && (local_98 != (void*)0x0)) {
      FUN_00d50b20();
    }
  }
  FUN_01ca5d90();
  local_a8 = g_028b7230;
  local_a0 = 0;
  if (g_028b7230 != (void*)0x0) {
    FUN_00d50b00();
  }
  lVar9 = g_026fceb8;
  local_a0 = '\x01';
  if (g_026fceb8 != 0) {
    FUN_00d50b00();
  }
  local_b8 = lVar9;
  local_b0 = '\x01';
  FUN_01ca93d0();
  if ((local_b0 != '\0') && (local_b8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_a0 != '\0') && (local_a8 != (void*)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d8c7d0();
  if (g_028b7250 != 0) {
    FUN_00d50130();
  }
  if (g_028b7250 != 0) {
    g_028b7250 = 0;
    FUN_00d50b20();
  }
  if (g_028b7260 != (int64_t *)0x0) {
    g_028b7260 = (int64_t *)0x0;
    FUN_00d50b20();
  }
  if (g_028b7240 != 0) {
    g_028b7240 = 0;
    FUN_00d50b20();
  }
  *(void*)(this_ptr + 1) = 0;
  puVar3 = g_028b7230;
  if (g_028b7230 != (void*)0x0) {
    FUN_00d50b00();
  }
  *this_ptr = puVar3;
  *(void*)(this_ptr + 1) = 1;
  if (puVar5 != (void*)0x0) {
    FUN_00d50b20();
  }
  if (puVar8 != (void*)0x0) {
    FUN_00d50b20();
  }
  return this_ptr;
}

