// Function: FUN_0092a7ce
// Address: 0092a7ce
// Size: 592 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_0092a7ce(uint64_t param_1,uint64_t param_2,uint64_t param_3)

{
  int64_t *plVar1;
  int64_t lVar2;
  uint32_t uVar3;
  int64_t *plVar4;
  string *this;
  string *psVar5;
  int64_t arg1;
  int64_t this_ptr;
  void*local_b8;
  uint64_t local_b0;
  uint64_t local_a8;
  uint64_t local_a0;
  void*local_98;
  uint32_t local_90;
  uint64_t local_88;
  uint32_t local_80;
  uint16_t local_7c;
  uint8_t local_7a;
  uint16_t local_78;
  uint64_t local_60;
  int64_t *local_58;
  uint64_t local_40;
  int64_t *local_38;
  
  this = (string *)(segment_command_00000020.segname + 8);
  local_b8 = &g_02517678;
  local_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  psVar5 = (string *)&g_0251cd00;
  local_98 = &g_0251cd00;
  local_88 = 0;
  local_7c = 1;
  local_7a = 1;
  local_90 = 1;
  local_80 = 0;
  local_78 = 0;
  FUN_008911e2();
  std::string::operator=(this,psVar5);
  local_90 = 1;
  local_88 = *(void*)(arg1 + 0x60);
  local_78 = CONCAT11(1,(uint8_t)local_78);
  FUN_009b4e10();
  plVar4 = *(int64_t **)(this_ptr + 0x10);
  if (plVar4 != (int64_t *)0x0) {
    LOCK();
    plVar4[1] = plVar4[1] + 1;
    UNLOCK();
  }
  uVar3 = *(void*)(this_ptr + 0x68);
  local_40 = *(void*)(this_ptr + 0x70);
  local_38 = *(int64_t **)(this_ptr + 0x78);
  if (local_38 != (int64_t *)0x0) {
    LOCK();
    local_38[1] = local_38[1] + 1;
    UNLOCK();
  }
  FUN_00945108(uVar3,&local_b8,&local_40);
  if (local_38 != (int64_t *)0x0) {
    LOCK();
    plVar1 = local_38 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*local_38 + 0x10))();
      std::__shared_weak_count::__release_weak();
    }
  }
  if (plVar4 != (int64_t *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plVar4 + 0x10))();
      std::__shared_weak_count::__release_weak();
    }
  }
  if (local_58 != (int64_t *)0x0) {
    LOCK();
    local_58[1] = local_58[1] + 1;
    UNLOCK();
  }
  FUN_009451f8(param_2,arg1,param_1,param_3,local_60,local_58);
  if (local_58 != (int64_t *)0x0) {
    LOCK();
    plVar4 = local_58 + 1;
    lVar2 = *plVar4;
    *plVar4 = *plVar4 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*local_58 + 0x10))();
      std::__shared_weak_count::__release_weak();
    }
  }
  if (local_58 != (int64_t *)0x0) {
    LOCK();
    plVar4 = local_58 + 1;
    lVar2 = *plVar4;
    *plVar4 = *plVar4 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*local_58 + 0x10))();
      std::__shared_weak_count::__release_weak();
    }
  }
  FUN_0094d0ec();
  FUN_00891d28();
  return;
}

