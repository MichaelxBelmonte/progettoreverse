// Function: FUN_01a8ff70
// Address: 01a8ff70
// Size: 1093 bytes
// Class: Unknown

uint64_t FUN_01a8ff70(void*param_1,int param_2,void*param_3,void*param_4)

{
  int64_t lVar1;
  void*puVar2;
  void *pvVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  void* pVar6;
  int64_t this_ptr;
  uint64_t extraout_XMM0_Qb;
  uint8_t auVar8 [16];
  uint8_t auVar9 [16];
  uint64_t local_88;
  void*local_80;
  void*local_78;
  uint64_t local_70;
  int local_64;
  uint64_t local_60;
  uint64_t local_58;
  uint64_t local_50;
  int local_44;
  uint64_t local_40;
  uint64_t local_38;
  double dVar7;
  
  local_64 = *(int *)(this_ptr + 0x3c);
  lVar1 = *(int64_t *)(this_ptr + 0x30);
  local_80 = param_3;
  local_78 = param_1;
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  pVar6 = (void*)param_1;
  pvVar3 = _pthread_getspecific(pVar6);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_016caaa0();
  pvVar3 = _pthread_getspecific(pVar6);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_016cae50(param_4,&local_88);
  pvVar3 = _pthread_getspecific((void*)param_4);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  local_50 = FUN_016caec0();
  pvVar3 = _pthread_getspecific((void*)param_4);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar4 = FUN_016caec0();
  local_38 = uVar4;
  FUN_00e7b970();
  FUN_00e7c3c0();
  local_60 = local_38;
  local_38 = local_88;
  FUN_00e7bdc0();
  local_40 = local_38;
  auVar8._0_8_ = (double)FUN_00e7c860();
  auVar8._8_8_ = extraout_XMM0_Qb;
  if (param_2 - 1U < 4) {
    param_4 = (void*)
              ((int64_t)&switchD_01a9011e::switchdataD_01a903f8 +
              (int64_t)(int)(&switchD_01a9011e::switchdataD_01a903f8)[param_2 - 1U]);
    switch(param_2) {
    case 2:
      auVar8 = roundsd(auVar8,auVar8,10);
      dVar7 = auVar8._0_8_;
      break;
    case 3:
      auVar8 = roundsd(auVar8,auVar8,0xb);
      dVar7 = auVar8._0_8_;
      break;
    case 4:
      auVar8._0_8_ = auVar8._0_8_ + g_023942d0;
    case 1:
      auVar8 = roundsd(auVar8,auVar8,9);
      dVar7 = auVar8._0_8_;
    }
  }
  else {
    auVar9._8_8_ = _UNK_023945b8 & extraout_XMM0_Qb | _UNK_023945c8;
    auVar9._0_8_ = (double)(g_023945b0 & (uint64_t)auVar8._0_8_ | g_023945c0) + auVar8._0_8_;
    auVar8 = roundsd(ZEXT816(0),auVar9,0xb);
    dVar7 = auVar8._0_8_;
  }
  local_44 = (int)dVar7;
  local_38 = local_60;
  local_70 = uVar4;
  FUN_00e7c2a0();
  local_40 = local_38;
  local_38 = local_50;
  FUN_00e7b820();
  pvVar3 = _pthread_getspecific((void*)param_4);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar4 = FUN_016c4760();
  pVar6 = (void*)param_4;
  if (local_78 != (void*)0x0) {
    if (local_44 == 0) {
      pvVar3 = _pthread_getspecific(pVar6);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_58 = FUN_016caec0();
      local_38 = local_50;
      FUN_00e7b970();
      FUN_00e7c3c0();
      local_40 = local_38;
      local_38 = local_50;
      FUN_00e7b970();
    }
    else {
      local_58 = CONCAT44(local_58._4_4_,local_44 + -1);
      local_38 = local_60;
      FUN_00e7c2a0();
      local_40 = local_38;
      local_38 = local_50;
      FUN_00e7b820();
    }
    pvVar3 = _pthread_getspecific(pVar6);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar5 = FUN_016c4760();
    *local_78 = uVar5;
    param_4 = local_78;
  }
  puVar2 = local_80;
  pVar6 = (void*)param_4;
  if (local_80 != (void*)0x0) {
    if (local_44 + 1 != local_64) {
      local_58 = CONCAT44(local_58._4_4_,local_44 + 1);
      local_38 = local_60;
      FUN_00e7c2a0();
      local_40 = local_38;
      local_38 = local_50;
      FUN_00e7b820();
      local_70 = local_38;
    }
    pvVar3 = _pthread_getspecific(pVar6);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar5 = FUN_016c4760();
    *puVar2 = uVar5;
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  return uVar4;
}

