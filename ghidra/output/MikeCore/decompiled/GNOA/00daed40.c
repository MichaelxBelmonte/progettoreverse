// Function: FUN_00daed40
// Address: 00daed40
// Size: 742 bytes
// Class: GNOA
// String references:
//   "Cannot read magic."
//   "Unsupported file format: 'GNOA' missing"
//   "Archive chunk keys have to be 4 chars long."


undefined4 FUN_00daed40(undefined8 param_1)

{
  longlong lVar1;
  int iVar2;
  undefined8 *unaff_RSI;
  bool bVar3;
  bool bVar4;
  longlong local_c8;
  char local_c0;
  longlong local_b8;
  char local_b0;
  longlong local_a8;
  char local_a0;
  undefined1 local_85 [4];
  undefined1 local_81;
  longlong local_80;
  char local_78;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  int local_50;
  int local_4c;
  longlong local_48;
  char local_40;
  undefined4 local_38;
  int local_34;
  
  (**(code **)(*(longlong *)*unaff_RSI + 0x3a0))(param_1,0);
  if ((local_c0 != '\0') && (local_c8 != 0)) {
    FUN_00d50b20();
  }
  FUN_00ccd540(&local_50,&local_4c);
  bVar3 = local_48 != 0;
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  lVar1 = DAT_027815a8;
  if (bVar3 || local_50 != 4) {
    if (DAT_027815a8 != 0) {
      FUN_00d50b00();
    }
    local_80 = lVar1;
    local_78 = '\x01';
    FUN_00cc7b40();
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
  }
  lVar1 = DAT_02782ea8;
  if (local_4c != 0x474e4f41) {
    if (DAT_02782ea8 != 0) {
      FUN_00d50b00();
    }
    local_70 = lVar1;
    local_68 = '\x01';
    FUN_00cc7b40();
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
  }
  iVar2 = FUN_00d8c7a0();
  lVar1 = DAT_027815a8;
  if (iVar2 != 4) {
    if (DAT_027815a8 != 0) {
      FUN_00d50b00();
    }
    local_60 = lVar1;
    local_58 = '\x01';
    FUN_00cc7b40();
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
  }
  while( true ) {
    local_34 = 4;
    local_81 = 0;
    (**(code **)(*(longlong *)*unaff_RSI + 0x380))(&local_34,local_85);
    bVar3 = local_48 != 0;
    bVar4 = local_34 != 4;
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if (bVar3 || bVar4) break;
    FUN_00ccd540(&local_34,&local_38);
    bVar3 = local_48 != 0;
    bVar4 = local_34 != 4;
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if (bVar3 || bVar4) {
      return 0xffffffff;
    }
    FUN_00d8b910();
    iVar2 = FUN_00e7ddf0();
    if (iVar2 == 0) {
      return local_38;
    }
    (**(code **)(*(longlong *)*unaff_RSI + 0x390))();
    if ((local_b0 != '\0') && (local_b8 != 0)) {
      FUN_00d50b20();
    }
    (**(code **)(*(longlong *)*unaff_RSI + 0x3a0))();
    if ((local_a0 != '\0') && (local_a8 != 0)) {
      FUN_00d50b20();
    }
  }
  return 0xffffffff;
}


