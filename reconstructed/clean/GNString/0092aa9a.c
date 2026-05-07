// Function: FUN_0092aa9a
// Address: 0092aa9a
// Size: 727 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_0092aa9a(uint64_t param_1,uint64_t param_2,uint64_t param_3,void*param_4)

{
  int64_t *plVar1;
  int64_t *plVar2;
  int64_t lVar3;
  uint32_t uVar4;
  string *this;
  string *psVar5;
  int64_t arg1;
  int64_t this_ptr;
  void*local_c8;
  uint64_t local_c0;
  uint64_t local_b8;
  uint64_t local_b0;
  void*local_a8;
  int local_a0;
  uint64_t local_98;
  uint32_t local_90;
  uint16_t local_8c;
  uint8_t local_8a;
  uint16_t local_88;
  uint64_t local_80;
  uint64_t local_78;
  int64_t *local_70;
  uint64_t local_68;
  int64_t *local_60;
  uint64_t local_58;
  int64_t *local_50;
  uint64_t local_48;
  int64_t *local_40;
  
  this = (string *)(segment_command_00000020.segname + 8);
  local_c8 = &g_02517678;
  local_c0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  psVar5 = (string *)&g_0251cd00;
  local_a8 = &g_0251cd00;
  local_98 = 0;
  local_8c = 1;
  local_8a = 1;
  local_a0 = 1;
  local_90 = 0;
  local_88 = 0;
  local_80 = param_2;
  FUN_008911e2();
  std::string::operator=(this,psVar5);
  local_a0 = 2;
  if ((char *)param_4[1] != (char *)*param_4) {
    local_a0 = (int)*(char *)*param_4;
  }
  local_98 = *(void*)(arg1 + 0x60);
  local_88 = CONCAT11(1,(uint8_t)local_88);
  FUN_009b4e10();
  local_78 = *(void*)(this_ptr + 8);
  local_70 = *(int64_t **)(this_ptr + 0x10);
  if (local_70 != (int64_t *)0x0) {
    LOCK();
    local_70[1] = local_70[1] + 1;
    UNLOCK();
  }
  uVar4 = *(void*)(this_ptr + 0x68);
  local_68 = *(void*)(this_ptr + 0x70);
  local_60 = *(int64_t **)(this_ptr + 0x78);
  if (local_60 != (int64_t *)0x0) {
    LOCK();
    local_60[1] = local_60[1] + 1;
    UNLOCK();
  }
  FUN_0092bdb0(uVar4,&local_c8,&local_68,arg1);
  if (local_60 != (int64_t *)0x0) {
    LOCK();
    plVar1 = local_60 + 1;
    lVar3 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar3 == 0) {
      (**(code **)(*local_60 + 0x10))();
      std::__shared_weak_count::__release_weak();
    }
  }
  if (local_70 != (int64_t *)0x0) {
    LOCK();
    plVar1 = local_70 + 1;
    lVar3 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar3 == 0) {
      (**(code **)(*local_70 + 0x10))();
      std::__shared_weak_count::__release_weak();
    }
  }
  local_58 = local_48;
  local_50 = local_40;
  if (local_40 != (int64_t *)0x0) {
    LOCK();
    local_40[1] = local_40[1] + 1;
    UNLOCK();
  }
  FUN_009acf04(0,0,0);
  if (local_50 != (int64_t *)0x0) {
    LOCK();
    plVar1 = local_50 + 1;
    lVar3 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar3 == 0) {
      (**(code **)(*local_50 + 0x10))();
      std::__shared_weak_count::__release_weak();
    }
  }
  plVar1 = local_40;
  if (local_40 != (int64_t *)0x0) {
    LOCK();
    local_40[1] = local_40[1] + 1;
    UNLOCK();
  }
  FUN_009458d0(local_80,arg1,param_1,param_3);
  if (plVar1 != (int64_t *)0x0) {
    LOCK();
    plVar2 = plVar1 + 1;
    lVar3 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar3 == 0) {
      (**(code **)(*plVar1 + 0x10))();
      std::__shared_weak_count::__release_weak();
    }
  }
  FUN_009ad0f2();
  if (local_40 != (int64_t *)0x0) {
    LOCK();
    plVar1 = local_40 + 1;
    lVar3 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar3 == 0) {
      (**(code **)(*local_40 + 0x10))();
      std::__shared_weak_count::__release_weak();
    }
  }
  FUN_0094d0ec();
  FUN_00891d28();
  return;
}

