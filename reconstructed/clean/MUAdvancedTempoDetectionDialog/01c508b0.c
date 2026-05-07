// Function: FUN_01c508b0
// Address: 01c508b0
// Size: 1118 bytes
// Class: MUAdvancedTempoDetectionDialog
// === MUAdvancedTempoDetectionDialog properties ===
//                   _highlightedBeatValuePoint
//                   _setCursorTimeDisabled
//                   _zoomToFitAverageTempoDisabled
//                   _skipZoomToFitAverageTempo


void FUN_01c508b0(void* param_1)

{
  int64_t lVar1;
  void*puVar2;
  void *pvVar3;
  int64_t lVar4;
  uint64_t uVar5;
  int64_t *arg1;
  void*this_ptr;
  int64_t local_c0;
  char local_b8;
  int64_t local_b0;
  char local_a8;
  int64_t *local_a0;
  char local_98;
  int64_t local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  uint64_t local_50;
  int64_t local_48;
  char local_40;
  void*local_38;
  
  puVar2 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar2 = &g_0266c9c0;
  puVar2[2] = &g_0266cd48;
  puVar2[3] = 0;
  FUN_00d500e0();
  lVar1 = *arg1;
  puVar2[3] = lVar1;
  if (*(int64_t *)(lVar1 + 0x1a8) == 0) {
    if (*(int64_t *)(lVar1 + 0x198) == 0) goto LAB_01c50af2;
    FUN_00d50b00();
    FUN_00d50b20();
    lVar1 = *(int64_t *)(puVar2[3] + 0x198);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    lVar4 = FUN_00e8b990();
    if (lVar4 == 0) {
      local_50 = 0;
      lVar4 = 0;
    }
    else {
      uVar5 = FUN_00d50b00();
      local_50 = CONCAT71((int7)((uint64_t)uVar5 >> 8),1);
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  else {
    FUN_00d50b00();
    FUN_00d50b20();
    lVar1 = *(int64_t *)(puVar2[3] + 0x1a8);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    lVar4 = FUN_00e8b990();
    if (lVar4 == 0) {
      local_50 = 0;
      lVar4 = 0;
    }
    else {
      uVar5 = FUN_00d50b00();
      local_50 = CONCAT71((int7)((uint64_t)uVar5 >> 8),1);
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  if (lVar4 != 0) {
    local_c0 = 0;
    local_b8 = '\0';
    local_38 = puVar2;
    FUN_000be210();
    FUN_00e86210();
    local_b0 = g_026dc288;
    if (g_026dc288 != 0) {
      FUN_00d50b00();
    }
    local_a8 = '\x01';
    FUN_00c841b0();
    local_70 = local_48;
    local_68 = 0;
    if (local_40 == '\0') {
      if (local_48 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_40 = '\0';
    }
    local_68 = '\x01';
    FUN_00cbad30(&local_70,&local_c0,0x20);
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if ((local_a8 != '\0') && (local_b0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_b8 != '\0') && (local_c0 != 0)) {
      FUN_00d50b20();
    }
    local_98 = '\0';
    local_90 = 0;
    local_88 = '\0';
    local_a0 = puVar2 + 2;
    FUN_002771e0();
    FUN_00e86210();
    local_80 = g_026dc288;
    if (g_026dc288 != 0) {
      FUN_00d50b00();
    }
    local_78 = '\x01';
    FUN_00c841b0();
    puVar2 = local_38;
    local_60 = local_48;
    local_58 = 0;
    if (local_40 == '\0') {
      if (local_48 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_40 = '\0';
    }
    local_58 = '\x01';
    FUN_00cbad30(&local_60,&local_90,0x20);
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
    if ((local_98 != '\0') && (local_a0 != (int64_t *)0x0)) {
      (**(code **)(*local_a0 + 0x10))();
      FUN_00d50b20();
    }
    *this_ptr = puVar2;
    *(void*)(this_ptr + 1) = 1;
    if ((char)local_50 == '\0') {
      return;
    }
    FUN_00d50b20();
    return;
  }
LAB_01c50af2:
  *(void*)(this_ptr + 1) = 0;
  *this_ptr = 0;
  FUN_00d50b20();
  return;
}

