// Function: FUN_01a451e0
// Address: 01a451e0
// Size: 1216 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x01a4558e) */
/* WARNING: Removing unreachable block (ram,0x01a45597) */
/* WARNING: Removing unreachable block (ram,0x01a452af) */
/* WARNING: Removing unreachable block (ram,0x01a452b8) */
/* WARNING: Removing unreachable block (ram,0x01a45279) */
/* WARNING: Removing unreachable block (ram,0x01a45282) */
/* WARNING: Removing unreachable block (ram,0x01a45301) */
/* WARNING: Removing unreachable block (ram,0x01a4530a) */
/* WARNING: Removing unreachable block (ram,0x01a45673) */
/* WARNING: Removing unreachable block (ram,0x01a4567c) */
/* WARNING: Removing unreachable block (ram,0x01a45428) */
/* WARNING: Removing unreachable block (ram,0x01a45435) */

void FUN_01a451e0(char param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  byte bVar3;
  byte bVar4;
  longlong *unaff_RSI;
  longlong local_f8;
  longlong *local_f0;
  longlong local_e8;
  char local_e0;
  longlong local_d8;
  char local_d0;
  longlong local_c8;
  char local_c0;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong *local_40;
  char local_38;
  
  FUN_01a58dc0();
  (**(code **)(*local_40 + 0xe20))();
  if ((local_68 == '\0') && (local_70 != 0)) {
    FUN_00d50b00();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  bVar3 = FUN_00d23d70();
  plVar1 = (longlong *)*param_2;
  local_f0 = param_2;
  bVar4 = FUN_00d23d70();
  if (((bVar3 & bVar4) == 0) && (param_1 == '\0')) {
    FUN_01a58dc0();
    (**(code **)(*plVar1 + 0xda0))();
    plVar1 = local_f0;
    FUN_01a58dc0();
    local_f8 = *plVar1;
    FUN_00083ea0(2,&local_f8);
    FUN_00790070();
    lVar2 = local_c8;
    if (local_c0 == '\0') {
      if (local_c8 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_c0 = '\0';
    }
    (**(code **)(*local_40 + 0xdb8))();
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    if ((local_c0 != '\0') && (local_c8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    if (bVar3 == 0) {
      FUN_01a58dc0();
      local_e8 = *unaff_RSI;
      local_e0 = '\0';
      FUN_0039e8b0();
      if (local_38 == '\0') {
        if (local_40 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      (**(code **)(*plVar1 + 0xdb8))();
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_e0 != '\0') && (local_e8 != 0)) {
        FUN_00d50b20();
      }
    }
    if (bVar4 == 0) {
      FUN_01a58dc0();
      local_d8 = *local_f0;
      local_d0 = '\0';
      FUN_0039e8b0();
      if (local_38 == '\0') {
        if (local_40 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      (**(code **)(*plVar1 + 0xdb8))();
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_d0 != '\0') && (local_d8 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  if (local_70 != 0) {
    FUN_00d50b20();
  }
  return;
}


