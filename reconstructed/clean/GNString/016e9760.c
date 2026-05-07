// Function: FUN_016e9760
// Address: 016e9760
// Size: 1057 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_016e9760(uint32_t param_1,int64_t *param_2,int64_t *param_3,uint64_t param_4)

{
  uint32_t uVar1;
  uint32_t uVar2;
  void*puVar3;
  uint64_t uVar4;
  void *pvVar5;
  void* pVar6;
  uint64_t in_RCX;
  char *pcVar7;
  int64_t *arg1;
  int64_t this_ptr;
  uint32_t uVar8;
  int64_t local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  uint64_t local_58;
  int64_t local_50;
  char local_48 [8];
  int64_t *local_40;
  char local_38 [8];
  
  pVar6 = (void*)in_RCX;
  local_58 = param_4;
  local_40 = param_2;
  if (param_4 >> 0x20 == 0) {
    if (*(int *)(*param_3 + 0xc) == 0) {
      if (*param_2 != 0) {
        pvVar5 = _pthread_getspecific(pVar6);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_58 = FUN_019079b0();
      }
    }
    else {
      FUN_00d23340();
      pVar6 = (void*)CONCAT71((int7)((uint64_t)in_RCX >> 8),local_48[0]);
      pcVar7 = local_38;
      if (local_48[0] != '\0') {
        pcVar7 = local_48;
      }
      local_38[0] = local_48[0];
      *pcVar7 = '\0';
      if ((local_48[0] != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      pvVar5 = _pthread_getspecific(pVar6);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_58 = FUN_019079b0();
      pVar6 = (void*)*(void*)(this_ptr + 0x68);
      FUN_00e7b820();
      if ((local_38[0] != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  puVar3 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar3 = &g_025fa538;
  uVar2 = _UNK_0239372c;
  uVar1 = _UNK_02393728;
  uVar8 = _UNK_02393724;
  *(void*)((int64_t)puVar3 + 0xc) = g_02393720;
  *(void*)(puVar3 + 2) = uVar8;
  *(void*)((int64_t)puVar3 + 0x14) = uVar1;
  *(void*)(puVar3 + 3) = uVar2;
  FUN_00d500e0();
  uVar4 = FUN_00e7bdb0();
  *(void*)((int64_t)puVar3 + 0x14) = uVar4;
  *(void*)((int64_t)puVar3 + 0xc) = uVar4;
  if (*arg1 == 0) {
    uVar4 = FUN_00e7bdb0();
  }
  else {
    pvVar5 = _pthread_getspecific(pVar6);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_019079b0();
    pvVar5 = _pthread_getspecific(pVar6);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    pVar6 = 0;
    FUN_0165cf20(0,0);
    FUN_00e7c860();
    uVar4 = FUN_00e7cc50();
  }
  *(void*)((int64_t)puVar3 + 0xc) = uVar4;
  if (*local_40 == 0) {
    uVar4 = FUN_00e7bdb0();
  }
  else {
    pvVar5 = _pthread_getspecific(pVar6);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_019079b0();
    pvVar5 = _pthread_getspecific(pVar6);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    pVar6 = 0;
    FUN_0165cf20(0,0);
    FUN_00e7c860();
    uVar4 = FUN_00e7cc50();
  }
  *(void*)((int64_t)puVar3 + 0x14) = uVar4;
  FUN_016d4110();
  pvVar5 = _pthread_getspecific(pVar6);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  local_80 = *local_40;
  local_78 = '\0';
  local_70 = *param_3;
  local_68 = '\0';
  uVar8 = FUN_019037a0(param_1,&local_80,&local_70);
  if ((local_68 != '\0') && (local_70 != 0)) {
    uVar8 = FUN_00d50b20();
  }
  if ((local_78 != '\0') && (local_80 != 0)) {
    uVar8 = FUN_00d50b20();
  }
  FUN_016e4c80(uVar8,local_58);
  FUN_00d50b20();
  return;
}

