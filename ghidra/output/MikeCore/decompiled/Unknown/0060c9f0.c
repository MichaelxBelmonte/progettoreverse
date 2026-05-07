// Function: FUN_0060c9f0
// Address: 0060c9f0
// Size: 1105 bytes
// Class: Unknown
// String references:
//   "* %@"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0060c9f0(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 in_RDX;
  undefined8 *unaff_RSI;
  longlong *unaff_RDI;
  longlong *plVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  longlong local_d8;
  char local_d0;
  longlong local_c8;
  char local_c0;
  longlong *local_b8;
  char local_b0;
  undefined8 local_a8;
  longlong *local_90;
  char local_88;
  longlong *local_80;
  char local_78;
  longlong *local_70;
  char local_68;
  float local_5c;
  longlong *local_58;
  uint local_50;
  longlong local_48;
  char local_40;
  undefined4 local_34;
  
  fVar8 = (float)((ulonglong)param_2 >> 0x20);
  fVar7 = (float)param_2;
  local_a8 = in_RDX;
  uVar5 = (**(code **)(*unaff_RDI + 0x640))();
  plVar4 = local_70;
  local_c8 = DAT_02724b68;
  if (DAT_02724b68 != 0) {
    uVar5 = FUN_00d50b00();
  }
  local_c0 = '\x01';
  (**(code **)(*plVar4 + 0x3b0))(uVar5,&local_c8);
  local_80 = local_58;
  local_78 = 0;
  if ((char)local_50 == '\0') {
    if (local_58 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_50 = local_50 & 0xffffff00;
  }
  local_78 = '\x01';
  FUN_01d488d0();
  if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_50 != '\0') && (local_58 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_c0 != '\0') && (local_c8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  cVar2 = FUN_003a4f00();
  if (cVar2 == '\0') {
    uVar3 = FUN_003a4d00();
    plVar4 = local_58;
    if (local_58 == (longlong *)0x0) {
      local_34 = 0;
    }
    else {
      local_34 = (undefined4)CONCAT71((int7)((ulonglong)uVar3 >> 8),1);
      if ((char)local_50 == '\0') {
        FUN_00d50b00();
        if (((char)local_50 != '\0') && (local_58 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
  }
  else {
    uVar5 = FUN_003a4d00();
    local_50 = 1;
    local_58 = &DAT_024c5048;
    local_40 = 0;
    if (local_d8 != 0) {
      uVar5 = FUN_00d50b00();
    }
    local_48 = local_d8;
    local_40 = '\x01';
    uVar3 = FUN_00d8cb40(uVar5,&local_58);
    plVar4 = local_70;
    if (local_70 == (longlong *)0x0) {
      local_34 = 0;
    }
    else if (local_68 == '\0') {
      uVar3 = FUN_00d50b00();
      local_34 = (undefined4)CONCAT71((int7)((ulonglong)uVar3 >> 8),1);
      if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_68 = '\0';
      local_34 = (undefined4)CONCAT71((int7)((ulonglong)uVar3 >> 8),1);
    }
    local_58 = &DAT_024c5048;
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if ((local_d0 != '\0') && (local_d8 != 0)) {
      FUN_00d50b20();
    }
  }
  FUN_003a4de0();
  fVar6 = (float)(**(code **)(*unaff_RDI + 0xae0))();
  local_a8._0_4_ = fVar7;
  local_a8._4_4_ = fVar8;
  FUN_01d48370();
  fVar7 = local_a8._4_4_;
  if ((int)unaff_RDI[0x3e] == 0) {
    fVar6 = (fVar6 + _DAT_023945d0 * (float)local_a8) - _UNK_023945d4 * local_a8._4_4_;
    local_5c = DAT_02394290;
  }
  else if ((int)unaff_RDI[0x3e] == 2) {
    fVar6 = (fVar6 + _DAT_023945d0 * (float)local_a8) - _UNK_023945d4 * local_a8._4_4_;
    local_5c = DAT_02394294;
  }
  else {
    local_5c = 0.0;
    fVar7 = (float)local_a8;
    local_a8._0_4_ = local_a8._4_4_;
  }
  local_a8 = CONCAT44((float)local_a8,fVar7);
  (**(code **)(*(longlong *)*unaff_RSI + 0x370))(fVar7 * DAT_0239011c + fVar6);
  if ((local_5c != 0.0) || (NAN(local_5c))) {
    (**(code **)(*(longlong *)*unaff_RSI + 0x378))();
  }
  local_b0 = '\0';
  local_b8 = plVar4;
  (**(code **)(*(longlong *)*unaff_RSI + 0x3f8))(_DAT_023b5dd0 * (float)local_a8,0);
  if ((local_b0 != '\0') && (local_b8 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01d48390();
  FUN_003a4cd0();
  plVar1 = local_58;
  if (((char)local_50 != '\0') && (local_58 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 != (longlong *)0x0) {
    FUN_003a4cd0();
    local_90 = local_58;
    local_88 = 0;
    if ((char)local_50 == '\0') {
      if (local_58 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_50 = local_50 & 0xffffff00;
    }
    local_88 = '\x01';
    FUN_003a4be0();
    FUN_01d49070();
    if ((local_88 != '\0') && (local_90 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (((char)local_50 != '\0') && (local_58 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  if (((char)local_34 != '\0') && (plVar4 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  return;
}


