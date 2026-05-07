// Function: FUN_0175f5f0
// Address: 0175f5f0
// Size: 537 bytes
// Class: Unknown

void FUN_0175f5f0(uint32_t param_1,void*param_2,uint32_t param_3,uint64_t param_4)

{
  char cVar1;
  int iVar2;
  void *pvVar3;
  int64_t lVar4;
  void* pVar5;
  void*in_RCX;
  int64_t lVar6;
  int64_t *arg1;
  uint64_t local_d0;
  uint8_t local_c8;
  uint64_t local_c0;
  uint8_t local_b8;
  int64_t local_b0;
  uint8_t local_a8;
  uint64_t local_a0;
  uint8_t local_98;
  uint64_t local_90;
  uint8_t local_88;
  int64_t local_80;
  uint8_t local_78;
  uint64_t local_70;
  uint8_t local_68;
  uint64_t local_60;
  uint8_t local_58;
  uint64_t local_50;
  uint32_t local_44;
  void*local_40;
  uint32_t local_34;
  
  lVar6 = *arg1;
  local_50 = param_4;
  local_44 = param_3;
  local_40 = in_RCX;
  local_34 = param_1;
  pvVar3 = _pthread_getspecific((void*)in_RCX);
  pVar5 = (void*)in_RCX;
  if (pvVar3 != (void *)0x0) {
    lVar6 = *arg1;
    lVar4 = FUN_00e8b990();
    if (lVar4 != 0) {
      lVar6 = *(int64_t *)(lVar6 + 0x20 + (uint64_t)(*(uint *)(lVar4 + 0x154) & 1) * 8);
    }
  }
  lVar6 = *(int64_t *)(lVar6 + 0x60);
  if (lVar6 != 0) {
    FUN_00d50b00();
  }
  pvVar3 = _pthread_getspecific(pVar5);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  cVar1 = FUN_01770870();
  if (cVar1 == '\0') {
    local_80 = *arg1;
    local_78 = 0;
    local_70 = *param_2;
    local_68 = 0;
    local_60 = *local_40;
    local_58 = 0;
    FUN_01764ec0(&local_60,&local_70,0);
  }
  else {
    pvVar3 = _pthread_getspecific(pVar5);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_017708f0();
    iVar2 = FUN_00e7d780();
    if (iVar2 == 0x4b0) {
      local_d0 = *param_2;
      local_c8 = 0;
      local_c0 = *local_40;
      local_b8 = 0;
      FUN_0175f840(local_34,&local_d0,(uint8_t)local_44,local_50);
    }
    else {
      local_b0 = *arg1;
      local_a8 = 0;
      local_a0 = *param_2;
      local_98 = 0;
      local_90 = *local_40;
      local_88 = 0;
      FUN_01764090(local_34,&local_a0,0);
    }
  }
  if (lVar6 != 0) {
    FUN_00d50b20();
  }
  return;
}

