// Function: FUN_016d20d0
// Address: 016d20d0
// Size: 722 bytes
// Class: Unknown


void FUN_016d20d0(int param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  ulonglong uVar2;
  longlong *unaff_RSI;
  longlong lVar3;
  longlong local_a8;
  undefined1 local_a0;
  undefined8 local_98;
  undefined1 local_90;
  longlong local_88;
  undefined1 local_80;
  ulonglong local_78;
  undefined1 local_70;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  longlong local_58;
  undefined4 local_4c;
  ulonglong local_48;
  ulonglong local_40;
  char local_38;
  
  lVar3 = *unaff_RSI;
  local_60 = param_2;
  local_5c = param_3;
  if (*(int *)(lVar3 + 0x10) != 0) {
    if (*(int *)(lVar3 + 0x18) != 0) {
      cVar1 = FUN_00e7c000();
      if (cVar1 != '\0') {
        return;
      }
      lVar3 = *unaff_RSI;
      if (*(int *)(lVar3 + 0x10) == 0) goto LAB_016d21ae;
    }
    if (*(int *)(lVar3 + 0x18) != 0) {
      local_58 = lVar3 + 0x14;
      cVar1 = FUN_00e7c000();
      if (((cVar1 == '\0') && (*(ulonglong *)(lVar3 + 0xc) >> 0x20 != 0)) &&
         (*(int *)(lVar3 + 0x18) != 0)) {
        local_4c = 2;
        local_40 = *(ulonglong *)(lVar3 + 0xc);
        FUN_00e7c260();
        local_48 = local_40;
        if (((local_40 >> 0x20 != 0) && (*(int *)(lVar3 + 0x18) != 0)) &&
           (cVar1 = FUN_00e7c020(), cVar1 == '\0')) {
          return;
        }
      }
    }
  }
LAB_016d21ae:
  uVar2 = *(ulonglong *)(*unaff_RSI + 0x14);
  if (*(int *)(*unaff_RSI + 0x10) == 0) {
    if (uVar2 >> 0x20 == 0) {
      return;
    }
  }
  else if (uVar2 >> 0x20 == 0) {
    local_40 = FUN_00e7bdb0();
    goto LAB_016d21fb;
  }
  local_48 = CONCAT44(local_48._4_4_,1);
  local_40 = uVar2;
  FUN_00e7c280();
LAB_016d21fb:
  local_48 = CONCAT44(local_48._4_4_,1);
  FUN_00e7c260();
  local_58 = FUN_016c46a0(0,0);
  local_a8 = *unaff_RSI;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  FUN_016d23e0(local_60,&local_a8,param_1,1);
  uVar2 = local_40;
  if ((local_38 == '\0') && (local_40 != 0)) {
    FUN_00d50b00();
  }
  if (*(int *)(uVar2 + 0xc) != 0) {
    local_88 = *unaff_RSI;
    local_80 = 0;
    FUN_016d4110();
    local_78 = uVar2;
    local_70 = 0;
    FUN_016d4550(param_1,0,(undefined1)local_5c);
    if (param_1 == 1) {
      lVar3 = *unaff_RSI;
      FUN_00e7bcc0();
      FUN_016cb850(local_58,0);
      local_40 = FUN_00e7cd00();
      local_64 = 1;
      FUN_00e7c280();
      uVar2 = local_40;
      local_48 = local_40;
      local_40 = FUN_00e7bdb0();
      if (((uVar2 >> 0x20 == 0) || (local_40 >> 0x20 == 0)) ||
         (cVar1 = FUN_00e7c000(), uVar2 = local_48, cVar1 == '\0')) {
        local_4c = 1;
        local_40 = uVar2;
        FUN_00e7c260();
        uVar2 = local_40;
      }
      else {
        uVar2 = FUN_00e7bdb0();
      }
      *(ulonglong *)(lVar3 + 0x14) = uVar2;
    }
  }
  FUN_00d50b20();
  return;
}


