// Function: FUN_00cae4c0
// Address: 00cae4c0
// Size: 992 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_00cae4c0(void)

{
  void*puVar1;
  int64_t *plVar2;
  code *pcVar3;
  code *pcVar4;
  code *pcVar5;
  char cVar6;
  void*puVar7;
  int64_t *plVar8;
  int64_t *this_ptr;
  
  FUN_00ddf820();
  if (g_0280253c == 0) {
    g_0280253c = 2;
  }
  puVar7 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar7 = &g_02572358;
  pcVar3 = g_02572370;
  (*g_02572370)();
  puVar1 = (void*)this_ptr[0x19];
  if (puVar1 == puVar7) {
    FUN_00d50b20();
  }
  else {
    this_ptr[0x19] = (int64_t)puVar7;
    if (puVar1 != (void*)0x0) {
      FUN_00d50b20();
    }
  }
  *(void*)((int64_t)this_ptr + 0xe1) = 1;
  puVar7 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar7 = &g_02578b00;
  pcVar5 = g_02578b18;
  (*g_02578b18)();
  puVar1 = (void*)this_ptr[4];
  if (puVar1 == puVar7) {
    FUN_00d50b20();
  }
  else {
    this_ptr[4] = (int64_t)puVar7;
    if (puVar1 != (void*)0x0) {
      FUN_00d50b20();
    }
  }
  FUN_00d7a0f0(0,1);
  puVar7 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar7 = &g_02578b00;
  (*pcVar5)();
  puVar1 = (void*)this_ptr[5];
  if (puVar1 == puVar7) {
    FUN_00d50b20();
  }
  else {
    this_ptr[5] = (int64_t)puVar7;
    if (puVar1 != (void*)0x0) {
      FUN_00d50b20();
    }
  }
  FUN_00d7a0f0(0,1);
  plVar8 = (int64_t *)FUN_00e8fc40();
  FUN_00065770();
  (**(code **)(*plVar8 + 0x18))();
  plVar2 = (int64_t *)this_ptr[8];
  if (plVar2 == plVar8) {
    FUN_00d50b20();
  }
  else {
    this_ptr[8] = (int64_t)plVar8;
    if (plVar2 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  puVar7 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar7 = &g_02578b00;
  (*pcVar5)();
  puVar1 = (void*)this_ptr[7];
  if (puVar1 == puVar7) {
    FUN_00d50b20();
  }
  else {
    this_ptr[7] = (int64_t)puVar7;
    if (puVar1 != (void*)0x0) {
      FUN_00d50b20();
    }
  }
  FUN_00d7a0f0(0,1);
  plVar8 = (int64_t *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar8 + 0x18))();
  plVar2 = (int64_t *)this_ptr[0xb];
  if (plVar2 == plVar8) {
    FUN_00d50b20();
  }
  else {
    this_ptr[0xb] = (int64_t)plVar8;
    if (plVar2 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  puVar7 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar7 = &g_025736a8;
  puVar7[3] = 0;
  *(void*)(puVar7 + 4) = 0;
  pcVar4 = g_025736c0;
  (*g_025736c0)();
  puVar1 = (void*)this_ptr[0x1b];
  if (puVar1 == puVar7) {
    FUN_00d50b20();
  }
  else {
    this_ptr[0x1b] = (int64_t)puVar7;
    if (puVar1 != (void*)0x0) {
      FUN_00d50b20();
    }
  }
  puVar7 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar7 = &g_025736a8;
  puVar7[3] = 0;
  *(void*)(puVar7 + 4) = 0;
  (*pcVar4)();
  puVar1 = (void*)this_ptr[0x29];
  if (puVar1 == puVar7) {
    FUN_00d50b20();
  }
  else {
    this_ptr[0x29] = (int64_t)puVar7;
    if (puVar1 != (void*)0x0) {
      FUN_00d50b20();
    }
  }
  this_ptr[0x14] = 0;
  cVar6 = (**(code **)(*this_ptr + 0x4e0))();
  if (cVar6 != '\0') {
    FUN_00cae8f0();
  }
  puVar7 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar7 = &g_02578b00;
  (*pcVar5)();
  puVar1 = (void*)this_ptr[0x1e];
  if (puVar1 == puVar7) {
    FUN_00d50b20();
  }
  else {
    this_ptr[0x1e] = (int64_t)puVar7;
    if (puVar1 != (void*)0x0) {
      FUN_00d50b20();
    }
  }
  FUN_00d7a0f0(0,1);
  this_ptr[0x2a] = 0;
  puVar7 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar7 = &g_02572358;
  (*pcVar3)();
  puVar1 = (void*)this_ptr[0x2b];
  if (puVar1 == puVar7) {
    FUN_00d50b20();
  }
  else {
    this_ptr[0x2b] = (int64_t)puVar7;
    if (puVar1 != (void*)0x0) {
      FUN_00d50b20();
    }
  }
  FUN_00d22760();
  return;
}

