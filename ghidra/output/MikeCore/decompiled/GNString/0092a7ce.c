// Function: FUN_0092a7ce
// Address: 0092a7ce
// Size: 592 bytes
// Class: GNString


void FUN_0092a7ce(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined4 uVar3;
  longlong *plVar4;
  string *this;
  string *psVar5;
  longlong unaff_RSI;
  longlong unaff_RDI;
  undefined *local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined *local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined2 local_7c;
  undefined1 local_7a;
  undefined2 local_78;
  undefined8 local_60;
  longlong *local_58;
  undefined8 local_40;
  longlong *local_38;
  
  this = (string *)(segment_command_00000020.segname + 8);
  local_b8 = &DAT_02517678;
  local_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  psVar5 = (string *)&DAT_0251cd00;
  local_98 = &DAT_0251cd00;
  local_88 = 0;
  local_7c = 1;
  local_7a = 1;
  local_90 = 1;
  local_80 = 0;
  local_78 = 0;
  FUN_008911e2();
  std::string::operator=(this,psVar5);
  local_90 = 1;
  local_88 = *(undefined8 *)(unaff_RSI + 0x60);
  local_78 = CONCAT11(1,(undefined1)local_78);
  FUN_009b4e10();
  plVar4 = *(longlong **)(unaff_RDI + 0x10);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar4[1] = plVar4[1] + 1;
    UNLOCK();
  }
  uVar3 = *(undefined4 *)(unaff_RDI + 0x68);
  local_40 = *(undefined8 *)(unaff_RDI + 0x70);
  local_38 = *(longlong **)(unaff_RDI + 0x78);
  if (local_38 != (longlong *)0x0) {
    LOCK();
    local_38[1] = local_38[1] + 1;
    UNLOCK();
  }
  FUN_00945108(uVar3,&local_b8,&local_40);
  if (local_38 != (longlong *)0x0) {
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
  if (plVar4 != (longlong *)0x0) {
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
  if (local_58 != (longlong *)0x0) {
    LOCK();
    local_58[1] = local_58[1] + 1;
    UNLOCK();
  }
  FUN_009451f8(param_2,unaff_RSI,param_1,param_3,local_60,local_58);
  if (local_58 != (longlong *)0x0) {
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
  if (local_58 != (longlong *)0x0) {
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


