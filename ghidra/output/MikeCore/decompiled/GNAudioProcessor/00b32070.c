// Function: FUN_00b32070
// Address: 00b32070
// Size: 672 bytes
// Class: GNAudioProcessor
// String references:
//   "editParameterAtIndex"
//   "vfII@"
//   "Edit %@"


void FUN_00b32070(undefined4 param_1,int param_2)

{
  longlong *plVar1;
  ulonglong *in_RCX;
  undefined4 unaff_ESI;
  longlong *unaff_RDI;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong local_b8;
  char local_b0;
  longlong local_98;
  char local_90;
  undefined8 *local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  ulonglong local_60;
  char local_58;
  undefined4 local_4c;
  longlong local_48;
  char local_40;
  undefined4 local_34;
  
  local_4c = param_1;
  if (((*in_RCX != 0) && (param_2 != 3)) && (param_2 != 2)) {
    local_34 = (**(code **)(*unaff_RDI + 0x458))();
    FUN_00d50b00();
    local_60 = *in_RCX;
    local_70 = 4;
    local_6c = local_34;
    local_68 = CONCAT44(param_2,unaff_ESI);
    local_78 = (undefined8 *)&DAT_02532338;
    local_58 = 0;
    local_34 = unaff_ESI;
    if (local_60 != 0) {
      FUN_00d50b00();
    }
    local_58 = '\x01';
    uVar2 = FUN_00db2930("vfII@","editParameterAtIndex",&local_78);
    uVar3 = local_34;
    local_78 = (undefined8 *)&DAT_02532338;
    if ((local_58 != '\0') && (local_60 != 0)) {
      uVar2 = FUN_00d50b20();
    }
    if (unaff_RDI != (longlong *)0x0) {
      uVar2 = FUN_00d50b20();
    }
    uVar3 = (**(code **)(*unaff_RDI + 0x478))(uVar2,uVar3);
    local_70 = 1;
    local_78 = &DAT_024c5048;
    local_60 = local_60 & 0xffffffffffffff00;
    if (local_b8 != 0) {
      uVar3 = FUN_00d50b00();
    }
    local_68 = local_b8;
    local_60 = CONCAT71(local_60._1_7_,1);
    FUN_00d8cb40(uVar3,&local_78);
    local_40 = 0;
    if (local_90 == '\0') {
      if (local_98 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_90 = '\0';
    }
    local_40 = '\x01';
    local_48 = local_98;
    FUN_00db3140();
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
    local_78 = &DAT_024c5048;
    if (((char)local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    unaff_ESI = local_34;
    if ((local_b0 != '\0') && (local_b8 != 0)) {
      FUN_00d50b20();
    }
  }
  plVar1 = (longlong *)unaff_RDI[8];
  if (plVar1 == (longlong *)0x0) {
    (**(code **)(*unaff_RDI + 0x450))(local_4c);
  }
  else {
    FUN_00d50b00();
    (**(code **)(*plVar1 + 0x18))(local_4c,unaff_ESI);
    if (unaff_RDI != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  return;
}


