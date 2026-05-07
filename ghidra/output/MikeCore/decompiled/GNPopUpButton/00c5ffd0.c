// Function: FUN_00c5ffd0
// Address: 00c5ffd0
// Size: 864 bytes
// Class: GNPopUpButton


bool FUN_00c5ffd0(longlong *param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong *unaff_RDI;
  longlong lVar3;
  longlong local_128;
  char local_120;
  longlong local_d0;
  longlong local_c8;
  longlong local_c0;
  longlong *local_b8;
  longlong local_b0;
  longlong *local_a8;
  longlong local_a0;
  char local_98;
  longlong local_90;
  char local_88;
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
  
  local_a8 = param_1;
  (**(code **)(*unaff_RDI + 0x5d0))();
  lVar3 = *param_2;
  if ((local_120 != '\0') && (local_128 != 0)) {
    FUN_00d50b20();
  }
  if (lVar3 == local_128) {
    local_b8 = param_2;
    local_b0 = lVar3;
    (**(code **)(*unaff_RDI + 0x5d0))();
    local_a0 = *param_3;
    local_98 = '\0';
    local_90 = *local_a8;
    local_88 = '\0';
    (**(code **)(*unaff_RDI + 0x608))();
    local_50 = local_40;
    local_48 = 0;
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_48 = '\x01';
    FUN_00b324d0(0,&local_90,&local_50);
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
    if ((local_98 != '\0') && (local_a0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_120 != '\0') && (local_128 != 0)) {
      FUN_00d50b20();
    }
    lVar3 = DAT_027719d0;
    if (DAT_027719d0 != 0) {
      FUN_00d50b00();
    }
    lVar1 = DAT_0276ca98;
    if (DAT_0276ca98 != 0) {
      FUN_00d50b00();
    }
    local_d0 = lVar3;
    local_c8 = *local_a8;
    local_c0 = lVar1;
    FUN_002d73e0(&local_c8,&local_d0,&local_c0,4);
    FUN_000b4da0();
    lVar2 = local_40;
    if (local_38 == '\0') {
      if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38 = '\0';
    }
    FUN_002d10d0();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    FUN_00d403d0();
    local_80 = DAT_027719d8;
    if (DAT_027719d8 != 0) {
      FUN_00d50b00();
    }
    local_78 = '\x01';
    local_70 = *local_b8;
    local_68 = '\0';
    local_60 = lVar2;
    local_58 = '\0';
    FUN_00d40470(&local_60,&local_70,3,3);
    lVar3 = local_b0;
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    if ((local_120 != '\0') && (local_128 != 0)) {
      FUN_00d50b20();
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  return lVar3 == local_128;
}


