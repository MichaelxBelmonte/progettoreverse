// Function: FUN_00957a95
// Address: 00957a95
// Size: 651 bytes
// Class: Unknown


bool FUN_00957a95(string *param_1,string *param_2,undefined1 param_3)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  string *psVar4;
  void *pvVar5;
  string *psVar6;
  longlong unaff_RSI;
  undefined8 uVar7;
  longlong local_res8;
  ulonglong local_870;
  longlong local_a0;
  longlong *local_98;
  undefined1 local_88 [16];
  byte local_78;
  undefined4 local_5c;
  undefined2 *local_58;
  string local_49;
  undefined2 *local_48;
  undefined2 *local_40;
  
  *(undefined4 *)(unaff_RSI + 8) = 0;
  local_48 = (undefined2 *)(unaff_RSI + 0x10);
  if ((*(byte *)(unaff_RSI + 0x10) & 1) == 0) {
    *local_48 = 0;
  }
  else {
    **(undefined1 **)(unaff_RSI + 0x20) = 0;
    *(undefined8 *)(unaff_RSI + 0x18) = 0;
  }
  local_58 = (undefined2 *)(unaff_RSI + 0x28);
  if ((*(byte *)(unaff_RSI + 0x28) & 1) == 0) {
    *local_58 = 0;
  }
  else {
    **(undefined1 **)(unaff_RSI + 0x38) = 0;
    *(undefined8 *)(unaff_RSI + 0x30) = 0;
  }
  local_40 = (undefined2 *)(unaff_RSI + 0x40);
  if ((*(byte *)(unaff_RSI + 0x40) & 1) == 0) {
    *local_40 = 0;
  }
  else {
    **(undefined1 **)(unaff_RSI + 0x50) = 0;
    *(undefined8 *)(unaff_RSI + 0x48) = 0;
  }
  psVar4 = param_1;
  psVar6 = param_2;
  FUN_00ab5baa();
  std::string::string(psVar4,psVar6);
  local_5c = SUB84(param_2,0);
  FUN_009cdd32();
  if ((local_870 & 1) != 0) {
    operator_delete(psVar4);
  }
  uVar7 = FUN_0097d480();
  FUN_00ac92d0(uVar7,0);
  if (local_88._0_4_ != 3) {
    psVar4 = (string *)local_88;
    local_88 = (undefined1  [16])0x0;
    psVar6 = &local_49;
    FUN_00abfd62();
    if (local_a0 != 0) {
      if (local_88._0_8_ == 0) {
        std::string::operator=(psVar4,psVar6);
      }
      else {
        std::string::operator=(psVar4,psVar6);
      }
    }
    if ((longlong *)local_88._8_8_ != (longlong *)0x0) {
      LOCK();
      plVar1 = (longlong *)(local_88._8_8_ + 8);
      lVar2 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar2 == 0) {
        (**(code **)(*(longlong *)local_88._8_8_ + 0x10))();
        std::__shared_weak_count::__release_weak();
      }
    }
    if (local_98 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_98 + 1;
      lVar2 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar2 == 0) {
        (**(code **)(*local_98 + 0x10))();
        std::__shared_weak_count::__release_weak();
      }
    }
  }
  pvVar5 = (void *)(ulonglong)(byte)local_5c;
  cVar3 = FUN_0097a7fa(pvVar5,0,param_1,param_3);
  if (local_res8 != 0) {
    FUN_008e2902();
  }
  FUN_008e3056();
  if ((local_78 & 1) != 0) {
    operator_delete(pvVar5);
  }
  FUN_00ab5c1a();
  return cVar3 != '\0' && *(int *)(unaff_RSI + 8) == 0;
}


