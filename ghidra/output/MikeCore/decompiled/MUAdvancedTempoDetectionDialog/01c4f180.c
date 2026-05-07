// Function: FUN_01c4f180
// Address: 01c4f180
// Size: 765 bytes
// Class: MUAdvancedTempoDetectionDialog


void FUN_01c4f180(undefined8 param_1,char param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  void *pvVar4;
  pthread_key_t in_ECX;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 uVar7;
  undefined1 local_80 [8];
  undefined1 local_78;
  undefined1 local_70 [8];
  undefined1 local_68;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  local_60 = *unaff_RSI;
  local_58 = '\0';
  FUN_016cbba0();
  lVar2 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  lVar1 = *(longlong *)(unaff_RDI + 0x188);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  local_48 = '\x01';
  local_50 = lVar1;
  FUN_016cbba0();
  lVar1 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  pvVar4 = _pthread_getspecific(in_ECX);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_016ea7c0(param_1);
  FUN_01c67800();
  if ((param_2 == '\0') && (*(int *)(unaff_RDI + 0x1c8) != 1)) {
    FUN_01c44d20();
    lVar3 = local_40;
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_68 = 1;
    uVar5 = FUN_00e7bdb0();
    FUN_01c45410(uVar5,local_70);
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    uVar7 = 0;
    lVar6 = lVar2;
    uVar5 = FUN_01c44d20();
    lVar3 = local_40;
    if (local_38 == '\0') {
      if (local_40 != 0) {
        uVar5 = FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_78 = 1;
    FUN_01c44700(uVar5,local_80,param_3,param_4,lVar6,uVar7);
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  FUN_01c62c70();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  return;
}


