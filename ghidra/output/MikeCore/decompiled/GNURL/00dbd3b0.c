// Function: FUN_00dbd3b0
// Address: 00dbd3b0
// Size: 534 bytes
// Class: GNURL
// String references:
//   "com.celemony.SecTrustEvaluate.%I"


ulonglong FUN_00dbd3b0(undefined8 param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong unaff_RDI;
  undefined8 *local_90;
  undefined4 local_88;
  int local_84;
  longlong local_80;
  char local_78;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  longlong local_30;
  char local_28;
  int local_1c;
  
  local_38 = 0;
  lVar1 = *(longlong *)(unaff_RDI + 0x10);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  local_38 = '\x01';
  local_40 = lVar1;
  FUN_00e1cfc0();
  _SecPolicyCreateSSL();
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  _SecTrustSetPolicies();
  _CFRelease();
  local_1c = 0;
  local_84 = _SecTrustEvaluate();
  local_70 = DAT_02783870;
  if (local_84 == 0) {
    uVar2 = CONCAT71((int7)((ulonglong)param_1 >> 8),1);
    if ((local_1c == 1) || (local_1c == 4)) goto LAB_00dbd5b8;
    if (DAT_02783870 != 0) {
      FUN_00d50b00();
    }
    lVar1 = DAT_02783878;
    local_68 = '\x01';
    if (DAT_02783878 != 0) {
      FUN_00d50b00();
    }
    local_60 = lVar1;
    local_58 = '\x01';
    FUN_00e972c0();
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_88 = 1;
    local_90 = &DAT_024cc6f0;
    FUN_00d8cb40(&DAT_024cc6f0,&local_90);
    local_30 = local_50;
    local_28 = 0;
    local_80 = DAT_02783868;
    if (local_48 == '\0') {
      if (local_50 != 0) {
        FUN_00d50b00();
        local_80 = DAT_02783868;
      }
    }
    else {
      local_48 = '\0';
    }
    local_28 = '\x01';
    DAT_02783868 = local_80;
    if (local_80 != 0) {
      local_28 = '\x01';
      FUN_00d50b00();
    }
    local_78 = '\x01';
    FUN_00e972c0();
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    if ((local_28 != '\0') && (local_30 != 0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
  }
  uVar2 = 0;
LAB_00dbd5b8:
  return uVar2 & 0xffffffff;
}


