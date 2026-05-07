// Function: FUN_00752a00
// Address: 00752a00
// Size: 1853 bytes
// Class: MUAudioIOSlot

void*
FUN_00752a00(void* param_1,int64_t *param_2,int64_t *param_3,int64_t *param_4)

{
  int64_t lVar1;
  int64_t lVar2;
  void*puVar3;
  char cVar4;
  int64_t *plVar5;
  void *pvVar6;
  int64_t *plVar7;
  void*puVar8;
  void* pVar9;
  int64_t *arg1;
  void*this_ptr;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t *local_40;
  char local_38;
  
  plVar5 = (int64_t *)FUN_00e8fc40();
  FUN_000830c0();
  (**(code **)(*plVar5 + 0x18))();
  lVar1 = *arg1;
  lVar2 = plVar5[0xf];
  if (lVar2 != lVar1) {
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    plVar5[0xf] = lVar1;
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  if (*param_2 != 0) {
    FUN_01552cd0();
    (**(code **)(*(int64_t *)*param_2 + 0x370))();
    if (local_48 == '\0') {
      if (local_50 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_48 = '\0';
    }
    cVar4 = (**(code **)(*local_40 + 0x50))();
    if (local_50 != 0) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (cVar4 != '\0') {
      (**(code **)(*plVar5 + 0x470))();
      goto LAB_00752bc7;
    }
  }
  (**(code **)(*plVar5 + 0x470))();
LAB_00752bc7:
  lVar1 = *param_3;
  lVar2 = plVar5[0x18];
  if (lVar2 != lVar1) {
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    plVar5[0x18] = lVar1;
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  (**(code **)(*plVar5 + 0x628))();
  pvVar6 = _pthread_getspecific(param_1);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_004a1110();
  pvVar6 = _pthread_getspecific(param_1);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01313ad0();
  pvVar6 = _pthread_getspecific(param_1);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012cb450();
  if (local_38 == '\0') {
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  FUN_0044c720();
  if (local_40 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  FUN_00753620();
  *(void*)(plVar5 + 0x2d) = 0;
  plVar7 = (int64_t *)FUN_00e8fc40();
  FUN_00039550();
  (**(code **)(*plVar7 + 0x18))();
  if (*param_4 != 0) {
    FUN_00cafd20();
  }
  (**(code **)(*plVar5 + 0x490))();
  if (*param_4 != 0) {
    FUN_00cb1fa0();
    (**(code **)(*plVar7 + 0x3c8))();
  }
  puVar8 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  pVar9 = 0x25f7058;
  *puVar8 = &g_025f7058;
  (*g_025f7070)();
  puVar3 = (void*)plVar5[0x26];
  if (puVar3 == puVar8) {
    FUN_00d50b20();
  }
  else {
    plVar5[0x26] = (int64_t)puVar8;
    if (puVar3 != (void*)0x0) {
      FUN_00d50b20();
    }
  }
  (**(code **)(*plVar5 + 0x628))();
  pvVar6 = _pthread_getspecific(pVar9);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_004a1110();
  pvVar6 = _pthread_getspecific(pVar9);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01313b00();
  pvVar6 = _pthread_getspecific(pVar9);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01505900();
  if (local_38 == '\0') {
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  FUN_001060d0();
  if (local_40 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  pvVar6 = _pthread_getspecific(pVar9);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_004a4cb0();
  FUN_006e32b0();
  if (local_38 == '\0') {
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  FUN_00108e20();
  if (local_40 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  *this_ptr = plVar5;
  *(void*)(this_ptr + 1) = 1;
  FUN_00d50b20();
  return this_ptr;
}

