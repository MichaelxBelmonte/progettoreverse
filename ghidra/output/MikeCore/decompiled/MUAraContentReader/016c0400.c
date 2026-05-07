// Function: FUN_016c0400
// Address: 016c0400
// Size: 933 bytes
// Class: MUAraContentReader
// String references:
//   "%@|%I"
//   "%@|%I/%I"
//   "%@|%I+%I/%I"


void FUN_016c0400(pthread_key_t param_1)

{
  int iVar1;
  void *pvVar2;
  undefined4 uVar3;
  int local_88;
  int local_84;
  undefined8 *local_80;
  undefined4 local_78;
  longlong local_70;
  char local_68;
  int local_60;
  int local_5c;
  int local_58;
  longlong local_50;
  char local_48;
  longlong *local_40;
  char local_38;
  
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  iVar1 = FUN_0165db00(0,&local_88);
  local_60 = local_88 / local_84;
  local_88 = local_88 % local_84;
  if ((local_84 == 1) && (local_60 == 0)) {
    FUN_018c3210();
    uVar3 = (**(code **)(*local_40 + 0x378))((float)iVar1);
    local_70 = local_50;
    local_78 = 2;
    local_80 = &DAT_024c5048;
    local_68 = 0;
    if (local_50 != 0) {
      uVar3 = FUN_00d50b00();
    }
    local_68 = '\x01';
    local_80 = (undefined8 *)&DAT_025df2a0;
    local_60 = local_88;
    FUN_00d8cb40(uVar3,&local_80);
    local_80 = &DAT_024c5048;
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else if (local_60 == 0) {
    FUN_018c3210();
    uVar3 = (**(code **)(*local_40 + 0x378))((float)iVar1);
    local_70 = local_50;
    local_78 = 3;
    local_80 = &DAT_024c5048;
    local_68 = 0;
    if (local_50 != 0) {
      uVar3 = FUN_00d50b00();
    }
    local_5c = local_84 << 2;
    local_68 = '\x01';
    local_60 = local_88;
    local_80 = (undefined8 *)&DAT_02509758;
    FUN_00d8cb40(uVar3,&local_80);
    local_80 = &DAT_024c5048;
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else if (local_88 == 0) {
    FUN_018c3210();
    uVar3 = (**(code **)(*local_40 + 0x378))((float)iVar1);
    local_70 = local_50;
    local_78 = 2;
    local_80 = &DAT_024c5048;
    local_68 = 0;
    if (local_50 != 0) {
      uVar3 = FUN_00d50b00();
    }
    local_68 = '\x01';
    local_80 = (undefined8 *)&DAT_025df2a0;
    FUN_00d8cb40(uVar3,&local_80);
    local_80 = &DAT_024c5048;
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    FUN_018c3210();
    uVar3 = (**(code **)(*local_40 + 0x378))((float)iVar1);
    local_70 = local_50;
    local_78 = 4;
    local_80 = &DAT_024c5048;
    local_68 = 0;
    if (local_50 != 0) {
      uVar3 = FUN_00d50b00();
    }
    local_58 = local_84 << 2;
    local_68 = '\x01';
    local_5c = local_88;
    local_80 = (undefined8 *)&DAT_025fa8b0;
    FUN_00d8cb40(uVar3,&local_80);
    local_80 = &DAT_024c5048;
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  return;
}


