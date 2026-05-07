// Function: FUN_01ef7380
// Address: 01ef7380
// Size: 1001 bytes
// Class: GNString


void FUN_01ef7380(undefined4 param_1,undefined4 param_2,longlong *param_3,undefined4 param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong *in_RCX;
  int in_EDX;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  undefined4 uVar3;
  undefined1 local_res8;
  undefined4 local_res10;
  undefined4 local_108;
  undefined4 local_f8;
  longlong local_e0;
  char local_d8;
  longlong local_d0;
  char local_c8;
  longlong local_c0;
  char local_b8;
  longlong local_b0;
  char local_a8;
  longlong local_a0;
  char local_98;
  longlong local_90;
  char local_88;
  int local_7c;
  longlong local_78;
  char local_70;
  longlong local_40;
  char local_38;
  
  local_108 = param_2;
  local_f8 = param_1;
  local_7c = in_EDX;
  if (in_EDX != 0x19) goto LAB_01ef7688;
  uVar3 = (**(code **)(*unaff_RDI + 0x548))();
  local_e0 = *param_3;
  if (local_e0 == 0) {
    (**(code **)(*unaff_RDI + 0x370))();
    lVar1 = *param_3;
    if (lVar1 == local_40) {
      if (((char)param_3[1] != '\0') || (local_40 == 0)) goto LAB_01ef74a2;
      if (local_38 == '\0') {
        FUN_00d50b00();
        goto LAB_01ef749a;
      }
LAB_01ef7463:
      *(undefined1 *)(param_3 + 1) = 1;
    }
    else {
      lVar2 = param_3[1];
      if (local_38 != '\0') {
        *param_3 = local_40;
        if (((char)lVar2 != '\0') && (lVar1 != 0)) {
          FUN_00d50b20();
        }
        goto LAB_01ef7463;
      }
      if (local_40 != 0) {
        FUN_00d50b00();
      }
      *param_3 = local_40;
      if (((char)lVar2 != '\0') && (lVar1 != 0)) {
        FUN_00d50b20();
      }
LAB_01ef749a:
      *(undefined1 *)(param_3 + 1) = 1;
LAB_01ef74a2:
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
    local_e0 = *param_3;
  }
  local_d8 = '\0';
  local_f8 = FUN_01cc2100(uVar3,&local_e0);
  if ((local_d8 != '\0') && (local_e0 != 0)) {
    FUN_00d50b20();
  }
  local_d0 = *param_3;
  local_c8 = '\0';
  FUN_01d48a10();
  if ((local_c8 != '\0') && (local_d0 != 0)) {
    FUN_00d50b20();
  }
  lVar1 = unaff_RDI[4];
  if (lVar1 == 0) {
    (**(code **)(*unaff_RDI + 0x490))(local_res8,0x19,local_res10);
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    FUN_01d488d0();
    if (local_40 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_70 = 0;
    FUN_00d50b00();
    local_70 = '\x01';
    local_78 = lVar1;
    FUN_01d488d0();
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
  }
  local_c0 = *in_RCX;
  local_b8 = '\0';
  (**(code **)(*(longlong *)*unaff_RSI + 0x3f8))(local_f8,param_2);
  local_108 = param_2;
  if ((local_b8 != '\0') && (local_c0 != 0)) {
    FUN_00d50b20();
  }
LAB_01ef7688:
  local_b0 = *unaff_RSI;
  local_a8 = '\0';
  local_a0 = *in_RCX;
  local_98 = '\0';
  local_90 = *param_3;
  local_88 = '\0';
  FUN_01cc1c20(local_f8,local_108,&local_90,param_4);
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_a8 != '\0') && (local_b0 != 0)) {
    FUN_00d50b20();
  }
  return;
}


