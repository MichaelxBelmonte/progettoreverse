// Function: FUN_00c81410
// Address: 00c81410
// Size: 603 bytes
// Class: Unknown

void FUN_00c81410(int64_t param_1,int64_t *param_2,uint32_t param_3)

{
  int64_t lVar1;
  int64_t *plVar2;
  int64_t lVar3;
  void*puVar4;
  int64_t *arg1;
  void*this_ptr;
  bool bVar5;
  
  plVar2 = (int64_t *)FUN_00e8fc40();
  FUN_0002f270();
  (**(code **)(*plVar2 + 0x18))();
  lVar3 = *arg1;
  lVar1 = plVar2[2];
  if (lVar1 != lVar3) {
    if (lVar3 != 0) {
      FUN_00d50b00();
    }
    plVar2[2] = lVar3;
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  lVar3 = *param_2;
  lVar1 = plVar2[3];
  if (lVar1 != lVar3) {
    if (lVar3 != 0) {
      FUN_00d50b00();
    }
    plVar2[3] = lVar3;
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  plVar2[0x1b] = param_1;
  *(void*)((int64_t)plVar2 + 0x24) = param_3;
  *(void*)((int64_t)plVar2 + 0x49) = 1;
  if (*param_2 == 0) goto LAB_00c81552;
  FUN_00d8b910();
  lVar3 = FUN_00e87730();
  if (lVar3 == 0) {
    plVar2[0x13] = 0;
    lVar3 = 0;
LAB_00c81533:
    FUN_00d50b20();
  }
  else {
    lVar3 = FUN_00e86210();
    if (lVar3 != 0) {
      FUN_00d50b00();
    }
    lVar1 = plVar2[0x13];
    if (lVar1 != lVar3) {
      if (lVar3 == 0) {
        lVar3 = 0;
        plVar2[0x13] = 0;
      }
      else {
        FUN_00d50b00();
        plVar2[0x13] = lVar3;
      }
      if (lVar1 != 0) goto LAB_00c81533;
    }
  }
  if (*(int64_t *)(lVar3 + 0x50) != 0) {
    FUN_00c81710();
  }
  FUN_00d50b20();
LAB_00c81552:
  if ((g_028a71f0 == (void*)0x0) || (g_028a71f9 == '\0')) {
    FUN_00e8cb50();
    if (g_028a71f0 == (void*)0x0) {
      puVar4 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar4 = &g_02572358;
      (*g_02572370)();
      bVar5 = g_028a71f0 == (void*)0x0;
      g_028a71f0 = puVar4;
      if (((bVar5) || (FUN_00d50b20(), g_028a71f0 != (void*)0x0)) && (g_028a71f8 == '\0')
         ) {
        g_028a71f8 = '\x01';
        FUN_00e8cb90();
      }
      FUN_00d22760();
      g_028a71f9 = '\x01';
      FUN_00e8cb70();
    }
    else {
      g_028a71f9 = '\x01';
      FUN_00e8cb70();
    }
  }
  FUN_00d21140();
  *this_ptr = plVar2;
  *(void*)(this_ptr + 1) = 1;
  return;
}

