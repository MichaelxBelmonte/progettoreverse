// Function: FUN_002be070
// Address: 002be070
// Size: 982 bytes
// Class: MDEditorScrollView
// === MDEditorScrollView properties ===
//   MUScaleRulerViewDisplayMode _scaleRulerViewDisplayMode


void FUN_002be070(void)

{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t *plVar4;
  int64_t this_ptr;
  float fVar5;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  int64_t local_30;
  char local_28;
  
  FUN_00137ae0();
  FUN_01e40eb0();
  lVar2 = local_30;
  if ((local_28 != '\0') && (local_30 != 0)) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    (**(code **)(**(int64_t **)(this_ptr + 0xb8) + 0x478))();
  }
  plVar4 = (int64_t *)FUN_00e8fc40();
  FUN_0006daf0();
  *(void*)(plVar4 + 0x27) = 0;
  plVar4[0x2e] = 0;
  *(void*)(plVar4 + 0x2f) = 0;
  plVar4[0x30] = 0;
  *(void*)(plVar4 + 0x31) = 0;
  plVar4[0x28] = 0;
  plVar4[0x29] = 0;
  *(void*)(plVar4 + 0x2a) = 0;
  plVar4[0x2b] = 0;
  plVar4[0x2c] = 0;
  *(void*)((int64_t)plVar4 + 0x165) = 0;
  *(void*)((int64_t)plVar4 + 0x18c) = 0;
  *(void*)((int64_t)plVar4 + 0x194) = 0;
  *(void*)((int64_t)plVar4 + 0x199) = 0;
  plVar4[0x35] = 0;
  plVar4[0x36] = 0;
  plVar4[0x37] = 0;
  plVar4[0x38] = 0;
  *plVar4 = (int64_t)&g_02677e10;
  plVar4[2] = (int64_t)&g_026788e8;
  plVar4[0x39] = (int64_t)&g_02678928;
  *(void*)((int64_t)plVar4 + 500) = 0;
  *(void*)(plVar4 + 0x3f) = 0;
  plVar4[0x43] = 0;
  plVar4[0x3c] = 0;
  plVar4[0x3d] = 0;
  plVar4[0x3a] = 0;
  plVar4[0x3b] = 0;
  *(void*)(plVar4 + 0x3e) = 0;
  *(void*)((int64_t)plVar4 + 0x1fc) = 0;
  *(void*)((int64_t)plVar4 + 0x204) = 0;
  *(void*)((int64_t)plVar4 + 0x20c) = 0;
  (*g_02677e28)();
  FUN_01cef450();
  FUN_01cef490();
  lVar2 = g_02708ee0;
  if (g_02708ee0 != 0) {
    FUN_00d50b00();
  }
  (**(code **)(*plVar4 + 0xa10))();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  lVar2 = g_026fc8a8;
  if (g_026fc8a8 != 0) {
    FUN_00d50b00();
  }
  FUN_01d51a40();
  local_50 = local_30;
  local_48 = 0;
  if (local_28 == '\0') {
    if (local_30 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_28 = '\0';
  }
  local_48 = '\x01';
  FUN_01cef3b0();
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((local_28 != '\0') && (local_30 != 0)) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  lVar2 = g_026f6f70;
  if (g_026f6f70 != 0) {
    FUN_00d50b00();
  }
  lVar3 = g_026fc8b0;
  if (g_026fc8b0 != 0) {
    FUN_00d50b00();
  }
  local_70 = lVar3;
  local_68 = '\x01';
  local_60 = 0;
  local_58 = '\0';
  FUN_00d31230(&local_60,&local_70);
  local_40 = local_30;
  local_38 = 0;
  if (local_28 == '\0') {
    if (local_30 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_28 = '\0';
  }
  local_38 = '\x01';
  (**(code **)(*plVar4 + 0x6a8))();
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_28 != '\0') && (local_30 != 0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  fVar5 = (float)(**(code **)(**(int64_t **)(this_ptr + 0xb8) + 0x4d8))();
  (**(code **)(*plVar4 + 0x4d0))(fVar5 + g_023b18f0,g_023b1900);
  plVar1 = *(int64_t **)(this_ptr + 0xb8);
  if (plVar1 != plVar4) {
    FUN_00d50b00();
    *(int64_t **)(this_ptr + 0xb8) = plVar4;
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  FUN_00d50b20();
  return;
}

