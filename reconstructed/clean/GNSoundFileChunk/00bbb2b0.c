// Function: FUN_00bbb2b0
// Address: 00bbb2b0
// Size: 1164 bytes
// Class: GNSoundFileChunk
// === GNSoundFileChunk properties ===
//                   _isLoop
//                   _beats
//                   _tonalKey
//                   _tonalGender
//                   _readBuffer
//                   _channelCount
//                   _bitsPerSample
//                   _isFloat
//                   _isLittleEndian


void FUN_00bbb2b0(uint64_t param_1)

{
  void*puVar1;
  int64_t lVar2;
  int64_t *plVar3;
  void*puVar4;
  int64_t lVar5;
  int64_t this_ptr;
  int64_t local_a8;
  char local_a0;
  int64_t local_98;
  char local_90;
  int64_t *local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  int64_t local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  char local_40;
  
  local_a0 = '\0';
  local_a8 = 0;
  FUN_01e56280(param_1,&local_a8);
  if ((local_a0 != '\0') && (local_a8 != 0)) {
    FUN_00d50b20();
  }
  FUN_01e5c730();
  FUN_01e5c680();
  plVar3 = (int64_t *)FUN_00e8fc40();
  FUN_0006daf0();
  *(void*)(plVar3 + 0x27) = 0;
  plVar3[0x2e] = 0;
  *(void*)(plVar3 + 0x2f) = 0;
  plVar3[0x30] = 0;
  *(void*)(plVar3 + 0x31) = 0;
  plVar3[0x28] = 0;
  plVar3[0x29] = 0;
  *(void*)(plVar3 + 0x2a) = 0;
  plVar3[0x2b] = 0;
  plVar3[0x2c] = 0;
  *(void*)((int64_t)plVar3 + 0x165) = 0;
  *(void*)((int64_t)plVar3 + 0x18c) = 0;
  *(void*)((int64_t)plVar3 + 0x194) = 0;
  *(void*)((int64_t)plVar3 + 0x199) = 0;
  plVar3[0x35] = 0;
  plVar3[0x36] = 0;
  plVar3[0x37] = 0;
  plVar3[0x38] = 0;
  *plVar3 = (int64_t)&g_02683800;
  plVar3[2] = (int64_t)&g_026842c8;
  plVar3[0x39] = 0;
  plVar3[0x3a] = 0;
  (*g_02683818)();
  (**(code **)(*plVar3 + 0x4d0))(g_023d90e0,g_023d90f0);
  local_98 = g_02765440;
  if (g_02765440 != 0) {
    FUN_00d50b00();
  }
  local_90 = '\x01';
  (**(code **)(*plVar3 + 0x958))();
  if ((local_90 != '\0') && (local_98 != 0)) {
    FUN_00d50b20();
  }
  local_80 = '\0';
  local_88 = plVar3;
  FUN_01e5c8b0();
  if ((local_80 != '\0') && (local_88 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  puVar4 = (void*)FUN_00e8fc40();
  FUN_0006daf0();
  *(void*)(puVar4 + 0x27) = 0;
  puVar4[0x2e] = 0;
  *(void*)(puVar4 + 0x2f) = 0;
  puVar4[0x30] = 0;
  *(void*)(puVar4 + 0x31) = 0;
  puVar4[0x28] = 0;
  puVar4[0x29] = 0;
  *(void*)(puVar4 + 0x2a) = 0;
  puVar4[0x2b] = 0;
  puVar4[0x2c] = 0;
  *(void*)((int64_t)puVar4 + 0x165) = 0;
  *(void*)((int64_t)puVar4 + 0x18c) = 0;
  *(void*)((int64_t)puVar4 + 0x194) = 0;
  *(void*)((int64_t)puVar4 + 0x199) = 0;
  puVar4[0x35] = 0;
  puVar4[0x36] = 0;
  puVar4[0x37] = 0;
  puVar4[0x38] = 0;
  *puVar4 = &g_02686ea8;
  puVar4[2] = &g_02687970;
  *(void*)(puVar4 + 0x39) = 0;
  (*g_02686ec0)();
  puVar1 = *(void**)(this_ptr + 0x80);
  if (puVar1 == puVar4) {
    FUN_00d50b20();
  }
  else {
    *(void**)(this_ptr + 0x80) = puVar4;
    if (puVar1 != (void*)0x0) {
      FUN_00d50b20();
    }
  }
  (**(code **)(**(int64_t **)(this_ptr + 0x80) + 0x4d0))(g_023d9100,g_023d9110);
  local_40 = 0;
  local_48 = *(int64_t *)(this_ptr + 0x80);
  if (local_48 != 0) {
    FUN_00d50b00();
  }
  local_40 = '\x01';
  FUN_01e5c8b0();
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(**(int64_t **)(this_ptr + 0x80) + 0x938))();
  (**(code **)(**(int64_t **)(this_ptr + 0x80) + 0x948))();
  (**(code **)(**(int64_t **)(this_ptr + 0x80) + 0x918))();
  FUN_01e5bc80(g_023d9120);
  local_78 = g_02765448;
  if (g_02765448 != 0) {
    FUN_00d50b00();
  }
  local_70 = '\x01';
  FUN_01e5a050();
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  lVar2 = g_02765450;
  if (g_02765450 != 0) {
    FUN_00d50b00();
  }
  local_68 = lVar2;
  local_60 = '\x01';
  FUN_00d50b00();
  FUN_01e1ea80((int)g_0238fee8,&stack0xffffffffffffffc8);
  lVar2 = *(int64_t *)(this_ptr + 0x90);
  lVar5 = lVar2;
  if (lVar2 == local_58) goto LAB_00bbb6dd;
  if (local_50 == '\0') {
    if (local_58 == 0) {
      lVar5 = 0;
      goto LAB_00bbb692;
    }
    FUN_00d50b00();
    lVar2 = *(int64_t *)(this_ptr + 0x90);
    *(int64_t *)(this_ptr + 0x90) = local_58;
    lVar5 = local_58;
  }
  else {
    local_50 = '\0';
    lVar5 = local_58;
LAB_00bbb692:
    *(int64_t *)(this_ptr + 0x90) = lVar5;
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
    lVar5 = local_58;
  }
LAB_00bbb6dd:
  if ((local_50 != '\0') && (lVar5 != 0)) {
    FUN_00d50b20();
  }
  if (this_ptr != 0) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  FUN_00bbb940();
  FUN_00d50b20();
  return;
}

