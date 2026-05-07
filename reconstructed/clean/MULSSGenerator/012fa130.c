// Function: FUN_012fa130
// Address: 012fa130
// Size: 1286 bytes
// Class: MULSSGenerator

void* FUN_012fa130(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  char cVar1;
  int64_t *plVar2;
  void *pvVar3;
  void* pVar4;
  uint64_t uVar5;
  int64_t lVar6;
  int64_t arg1;
  void*this_ptr;
  double dVar7;
  double dVar8;
  uint64_t local_98;
  uint64_t local_88;
  uint64_t local_80;
  int64_t local_78;
  char local_70;
  uint64_t local_68;
  uint64_t local_60;
  uint64_t local_58;
  uint64_t local_50;
  uint64_t local_48;
  char local_40;
  int64_t local_38;
  
  local_60 = param_1;
  local_58 = param_3;
  local_50 = param_4;
  plVar2 = (int64_t *)FUN_010eca10();
  (**(code **)(*plVar2 + 0x18))();
  FUN_012e8920();
  pvVar3 = _pthread_getspecific((void*)param_1);
  local_98 = param_1;
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
    local_98 = param_1;
  }
  FUN_012caf10();
  local_38 = local_48;
  if (local_40 == '\0') {
    if (((local_48 != 0) && (FUN_00d50b00(), local_40 != '\0')) && (local_48 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_40 = '\0';
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  if (local_58._4_4_ == 0) {
    pvVar3 = _pthread_getspecific((void*)local_98);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012f7cb0();
    local_98 = 0;
    local_58 = FUN_016cb9d0(0,4);
  }
  if (local_50._4_4_ == 0) {
    pvVar3 = _pthread_getspecific((void*)local_98);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    dVar7 = (double)FUN_012f7cb0();
    dVar8 = (double)FUN_012f7d90();
    local_98 = 0;
    local_50 = FUN_016cb9d0(dVar7 + dVar8,4);
  }
  local_70 = '\0';
  local_78 = 0;
  while( true ) {
    pvVar3 = _pthread_getspecific((void*)local_98);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar5 = local_50;
    cVar1 = FUN_01252960(local_50,local_58,&local_78,&local_68);
    pVar4 = (void*)uVar5;
    if (cVar1 == '\0') break;
    if ((local_68._4_4_ == 0) || ((local_58._4_4_ != 0 && (cVar1 = FUN_00e7c020(), cVar1 != '\0'))))
    {
      local_68 = local_58;
    }
    if ((local_88._4_4_ == 0) || ((local_50._4_4_ != 0 && (cVar1 = FUN_00e7c020(), cVar1 != '\0'))))
    {
      local_88 = local_50;
    }
    local_48 = local_68;
    if (*(int64_t *)(arg1 + 0x60) == 0) {
      lVar6 = 0;
      local_80 = local_68;
    }
    else {
      pvVar3 = _pthread_getspecific(pVar4);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_00e7c860();
      FUN_01656470();
      local_80 = FUN_00e7cd00();
      lVar6 = *(int64_t *)(arg1 + 0x60);
    }
    local_48 = local_88;
    local_98 = local_88;
    if (lVar6 != 0) {
      pvVar3 = _pthread_getspecific((void*)local_88);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_00e7c860();
      FUN_01656470();
      local_98 = FUN_00e7cd00();
    }
    uVar5 = local_98;
    if ((((int)(local_80 >> 0x20) != 0) && (uVar5 = local_98 >> 0x20, uVar5 != 0)) &&
       (cVar1 = FUN_00e7c000(), cVar1 != '\0')) {
      local_48 = local_68;
      local_80 = local_68;
      if (*(int64_t *)(arg1 + 0x60) != 0) {
        pvVar3 = _pthread_getspecific((void*)uVar5);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_00e7c860();
        FUN_01656470();
        local_80 = FUN_00e7cd00();
      }
      local_48 = local_80;
      FUN_00e7b820();
      local_98 = local_48;
    }
    pvVar3 = _pthread_getspecific((void*)uVar5);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_48 = local_78;
    local_40 = '\0';
    FUN_012502a0(local_98,local_80,0);
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
  }
  *this_ptr = plVar2;
  *(void*)(this_ptr + 1) = 1;
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  if (local_38 != 0) {
    FUN_00d50b20();
  }
  return this_ptr;
}

