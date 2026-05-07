// Function: FUN_00cc95f0
// Address: 00cc95f0
// Size: 531 bytes
// Class: GNBCFA
// String references:
//   "GNBCFA"


void FUN_00cc95f0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong *unaff_RSI;
  undefined8 *unaff_RDI;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  
  puVar2 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar2 = &DAT_0256d4f0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  puVar2[4] = 0;
  FUN_00d500e0();
  lVar1 = *unaff_RSI;
  lVar3 = puVar2[2];
  if (lVar3 != lVar1) {
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    puVar2[2] = lVar1;
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
  }
  (**(code **)(*(longlong *)*unaff_RSI + 0x4e0))();
  if (local_58 == '\0') {
    if (local_60 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_58 = '\0';
  }
  FUN_00daa700();
  lVar1 = puVar2[3];
  lVar3 = lVar1;
  if (lVar1 == local_50) goto LAB_00cc9723;
  lVar3 = local_50;
  if (local_48 == '\0') {
    if (local_50 == 0) {
      lVar3 = 0;
      goto LAB_00cc96de;
    }
    FUN_00d50b00();
    lVar1 = puVar2[3];
    puVar2[3] = local_50;
  }
  else {
    local_48 = '\0';
LAB_00cc96de:
    puVar2[3] = lVar3;
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
    lVar3 = local_50;
  }
LAB_00cc9723:
  if ((local_48 != '\0') && (lVar3 != 0)) {
    FUN_00d50b20();
  }
  if (local_60 != 0) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if (puVar2[3] != 0) {
    FUN_00daa970();
    FUN_00daa9c0();
    FUN_00daa990();
  }
  if (param_2 != 0) {
    FUN_00dac5e0();
  }
  puVar2[4] = param_2;
  if (puVar2[3] != 0) {
    FUN_00dab200(0,6);
    FUN_00daaf60();
    FUN_00daa9b0();
    FUN_00daaf60();
  }
  *unaff_RDI = puVar2;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}


