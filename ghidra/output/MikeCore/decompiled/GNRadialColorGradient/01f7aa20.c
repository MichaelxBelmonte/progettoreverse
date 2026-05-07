// Function: FUN_01f7aa20
// Address: 01f7aa20
// Size: 955 bytes
// Class: GNRadialColorGradient


/* WARNING: Removing unreachable block (ram,0x01f7ad98) */
/* WARNING: Removing unreachable block (ram,0x01f7ada1) */
/* WARNING: Removing unreachable block (ram,0x01f7acd1) */
/* WARNING: Removing unreachable block (ram,0x01f7acda) */
/* WARNING: Removing unreachable block (ram,0x01f7ac51) */
/* WARNING: Removing unreachable block (ram,0x01f7ac5a) */
/* WARNING: Removing unreachable block (ram,0x01f7aa7f) */
/* WARNING: Removing unreachable block (ram,0x01f7aa88) */
/* WARNING: Removing unreachable block (ram,0x01f7ac94) */
/* WARNING: Removing unreachable block (ram,0x01f7ac9d) */
/* WARNING: Removing unreachable block (ram,0x01f7ad03) */
/* WARNING: Removing unreachable block (ram,0x01f7ad0c) */
/* WARNING: Removing unreachable block (ram,0x01f7ad35) */
/* WARNING: Removing unreachable block (ram,0x01f7ad3e) */

undefined8 FUN_01f7aa20(undefined8 param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 uVar6;
  longlong *unaff_RDI;
  longlong lVar7;
  longlong local_38;
  char local_30;
  
  if (param_2 == 0) {
    return 1;
  }
  FUN_01d70da0();
  FUN_01d701d0();
  if (local_30 == '\0') {
    if (local_38 == 0) {
      return 1;
    }
    FUN_00d50b00();
  }
  else if (local_38 == 0) {
    return 1;
  }
  uVar6 = FUN_01d654a0();
  lVar5 = DAT_0277d5d0;
  lVar4 = DAT_0277d5c0;
  lVar3 = DAT_0277d5b8;
  lVar2 = DAT_0277d5b0;
  lVar1 = DAT_0277d5a8;
  lVar7 = local_38;
  switch(uVar6) {
  case 0:
    if (DAT_0277d5a8 != 0) {
      FUN_00d50b00();
    }
    FUN_00d306a0();
    if (local_38 == 0) {
      lVar7 = 0;
    }
    else if (local_30 == '\0') {
      FUN_00d50b00();
    }
    else {
      local_30 = '\0';
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    break;
  case 1:
    if (DAT_0277d5b8 != 0) {
      FUN_00d50b00();
    }
    FUN_00d306a0();
    if (local_38 == 0) {
      lVar7 = 0;
    }
    else if (local_30 == '\0') {
      FUN_00d50b00();
    }
    else {
      local_30 = '\0';
    }
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    break;
  case 2:
    if (DAT_0277d5b0 != 0) {
      FUN_00d50b00();
    }
    FUN_00d306a0();
    if (local_38 == 0) {
      lVar7 = 0;
    }
    else if (local_30 == '\0') {
      FUN_00d50b00();
    }
    else {
      local_30 = '\0';
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    break;
  case 3:
    if (DAT_0277d5c0 != 0) {
      FUN_00d50b00();
    }
    FUN_00d306a0();
    if (local_38 == 0) {
      lVar7 = 0;
    }
    else if (local_30 == '\0') {
      FUN_00d50b00();
    }
    else {
      local_30 = '\0';
    }
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
    break;
  case 4:
    if (DAT_0277d5d0 != 0) {
      FUN_00d50b00();
    }
    FUN_00d306a0();
    if (local_38 == 0) {
      lVar7 = 0;
    }
    else if (local_30 == '\0') {
      FUN_00d50b00();
    }
    else {
      local_30 = '\0';
    }
    if (lVar5 != 0) {
      FUN_00d50b20();
    }
    break;
  default:
    goto switchD_01f7aab1_default;
  }
  if (lVar7 == 0) {
switchD_01f7aab1_default:
    lVar7 = 0;
  }
  else {
    FUN_00d30620();
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    if (local_38 != lVar7) {
      FUN_00d30860();
      (**(code **)(*unaff_RDI + 0x5c0))();
    }
  }
  FUN_00d50b20();
  if (lVar7 != 0) {
    FUN_00d50b20();
  }
  return 1;
}


