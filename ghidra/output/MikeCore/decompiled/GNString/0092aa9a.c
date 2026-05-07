// Function: FUN_0092aa9a
// Address: 0092aa9a
// Size: 727 bytes
// Class: GNString


void FUN_0092aa9a(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined4 uVar4;
  string *this;
  string *psVar5;
  longlong unaff_RSI;
  longlong unaff_RDI;
  undefined *local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined *local_a8;
  int local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined2 local_8c;
  undefined1 local_8a;
  undefined2 local_88;
  undefined8 local_80;
  undefined8 local_78;
  longlong *local_70;
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  longlong *local_50;
  undefined8 local_48;
  longlong *local_40;
  
  this = (string *)(segment_command_00000020.segname + 8);
  local_c8 = &DAT_02517678;
  local_c0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  psVar5 = (string *)&DAT_0251cd00;
  local_a8 = &DAT_0251cd00;
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
  local_98 = *(undefined8 *)(unaff_RSI + 0x60);
  local_88 = CONCAT11(1,(undefined1)local_88);
  FUN_009b4e10();
  local_78 = *(undefined8 *)(unaff_RDI + 8);
  local_70 = *(longlong **)(unaff_RDI + 0x10);
  if (local_70 != (longlong *)0x0) {
    LOCK();
    local_70[1] = local_70[1] + 1;
    UNLOCK();
  }
  uVar4 = *(undefined4 *)(unaff_RDI + 0x68);
  local_68 = *(undefined8 *)(unaff_RDI + 0x70);
  local_60 = *(longlong **)(unaff_RDI + 0x78);
  if (local_60 != (longlong *)0x0) {
    LOCK();
    local_60[1] = local_60[1] + 1;
    UNLOCK();
  }
  FUN_0092bdb0(uVar4,&local_c8,&local_68,unaff_RSI);
  if (local_60 != (longlong *)0x0) {
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
  if (local_70 != (longlong *)0x0) {
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
  if (local_40 != (longlong *)0x0) {
    LOCK();
    local_40[1] = local_40[1] + 1;
    UNLOCK();
  }
  FUN_009acf04(0,0,0);
  if (local_50 != (longlong *)0x0) {
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
  if (local_40 != (longlong *)0x0) {
    LOCK();
    local_40[1] = local_40[1] + 1;
    UNLOCK();
  }
  FUN_009458d0(local_80,unaff_RSI,param_1,param_3);
  if (plVar1 != (longlong *)0x0) {
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
  if (local_40 != (longlong *)0x0) {
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


