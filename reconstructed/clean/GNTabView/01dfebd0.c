// Function: FUN_01dfebd0
// Address: 01dfebd0
// Size: 820 bytes
// Class: GNTabView
// === GNTabView properties ===
//   GNTabViewControlMode _controlMode


void FUN_01dfebd0(void)

{
  int64_t *plVar1;
  int64_t *plVar2;
  void*puVar3;
  void*puVar4;
  int unaff_ESI;
  int64_t *this_ptr;
  
  if ((int)this_ptr[0x2a] == unaff_ESI) {
    return;
  }
  if (((int64_t *)this_ptr[0x2c] != (int64_t *)0x0) &&
     ((**(code **)(*(int64_t *)this_ptr[0x2c] + 0x478))(), this_ptr[0x2c] != 0)) {
    this_ptr[0x2c] = 0;
    FUN_00d50b20();
  }
  *(int *)(this_ptr + 0x2a) = unaff_ESI;
  if (unaff_ESI == 3) {
    puVar3 = (void*)FUN_00e8fc40();
    FUN_0006daf0();
    *(void*)(puVar3 + 0x27) = 0;
    puVar3[0x2e] = 0;
    *(void*)(puVar3 + 0x2f) = 0;
    puVar3[0x30] = 0;
    *(void*)(puVar3 + 0x31) = 0;
    puVar3[0x28] = 0;
    puVar3[0x29] = 0;
    *(void*)(puVar3 + 0x2a) = 0;
    puVar3[0x2b] = 0;
    puVar3[0x2c] = 0;
    *(void*)((int64_t)puVar3 + 0x165) = 0;
    *(void*)((int64_t)puVar3 + 0x18c) = 0;
    *(void*)((int64_t)puVar3 + 0x194) = 0;
    *(void*)((int64_t)puVar3 + 0x199) = 0;
    puVar3[0x35] = 0;
    puVar3[0x36] = 0;
    puVar3[0x37] = 0;
    puVar3[0x38] = 0;
    *puVar3 = &g_026ab048;
    puVar3[2] = &g_026abb78;
    puVar3[0x3d] = 0;
    *(void*)((int64_t)puVar3 + 0x1d4) = 0;
    *(void*)((int64_t)puVar3 + 0x1dc) = 0;
    puVar3[0x39] = 0;
    puVar3[0x3a] = 0;
    (*g_026ab060)();
    puVar4 = (void*)this_ptr[0x2c];
    if (puVar4 == puVar3) {
      FUN_00d50b20();
    }
    else {
      this_ptr[0x2c] = (int64_t)puVar3;
      if (puVar4 != (void*)0x0) {
        FUN_00d50b20();
      }
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
    *puVar4 = &g_02677e10;
    puVar4[2] = &g_026788e8;
    puVar4[0x39] = &g_02678928;
    *(void*)((int64_t)puVar4 + 500) = 0;
    *(void*)(puVar4 + 0x3f) = 0;
    puVar4[0x43] = 0;
    puVar4[0x3c] = 0;
    puVar4[0x3d] = 0;
    puVar4[0x3a] = 0;
    puVar4[0x3b] = 0;
    *(void*)(puVar4 + 0x3e) = 0;
    *(void*)((int64_t)puVar4 + 0x1fc) = 0;
    *(void*)((int64_t)puVar4 + 0x204) = 0;
    *(void*)((int64_t)puVar4 + 0x20c) = 0;
    (*g_02677e28)();
    (**(code **)(*(int64_t *)this_ptr[0x2c] + 0xab8))();
    FUN_00d50b20();
  }
  else if (unaff_ESI == 2) {
    plVar2 = (int64_t *)FUN_00e8fc40();
    FUN_001e3c20();
    (**(code **)(*plVar2 + 0x18))();
    plVar1 = (int64_t *)this_ptr[0x2c];
    if (plVar1 == plVar2) {
      FUN_00d50b20();
    }
    else {
      this_ptr[0x2c] = (int64_t)plVar2;
      if (plVar1 == (int64_t *)0x0) goto LAB_01dfeead;
      FUN_00d50b20();
    }
  }
  plVar2 = (int64_t *)this_ptr[0x2c];
LAB_01dfeead:
  if (plVar2 != (int64_t *)0x0) {
    if (plVar2 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    (**(code **)(*this_ptr + 0x450))();
    if (plVar2 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    FUN_01dfef90();
    FUN_01dff100();
  }
  return;
}

