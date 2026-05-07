// Function: FUN_01918f80
// Address: 01918f80
// Size: 508 bytes
// Class: GNUni


ulonglong FUN_01918f80(undefined8 param_1,byte param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  ulonglong uVar2;
  longlong *unaff_RDI;
  bool bVar3;
  longlong local_80;
  char local_78;
  longlong *local_60;
  char local_58;
  longlong *local_40;
  char local_38;
  longlong local_30;
  char local_28;
  
  FUN_01a58dc0();
  (**(code **)(*local_40 + 0xe30))();
  if (local_30 == 0) {
    bVar3 = true;
  }
  else {
    FUN_01a58dc0();
    (**(code **)(*local_60 + 0xe30))();
    bVar3 = *(int *)(local_80 + 0xc) == 0;
    if (local_78 != '\0') {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  if ((local_28 != '\0') && (local_30 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (bVar3) {
    uVar2 = 0;
  }
  else {
    FUN_01a58dc0();
    (**(code **)(*local_40 + 0xe30))();
    if (local_28 == '\0') {
      if (local_30 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_28 = '\0';
    }
    uVar1 = (**(code **)(*unaff_RDI + 0x488))();
    uVar2 = (ulonglong)uVar1;
    if (local_30 != 0) {
      FUN_00d50b20();
    }
    if ((local_28 != '\0') && (local_30 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (((byte)uVar1 & param_2) != 0) {
      FUN_01a58dc0();
      (**(code **)(*local_40 + 0xe30))();
      if (local_28 == '\0') {
        if (local_30 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_28 = '\0';
      }
      FUN_01918af0(param_1,0,param_3,param_4,1);
      if (local_30 != 0) {
        FUN_00d50b20();
      }
      if ((local_28 != '\0') && (local_30 != 0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      uVar2 = CONCAT71((int7)((ulonglong)local_30 >> 8),1);
    }
  }
  return uVar2 & 0xffffffff;
}


