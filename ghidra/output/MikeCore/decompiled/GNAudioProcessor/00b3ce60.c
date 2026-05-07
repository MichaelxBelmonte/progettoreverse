// Function: FUN_00b3ce60
// Address: 00b3ce60
// Size: 629 bytes
// Class: GNAudioProcessor


/* WARNING: Removing unreachable block (ram,0x00b3cff4) */
/* WARNING: Removing unreachable block (ram,0x00b3cffd) */

void FUN_00b3ce60(undefined8 param_1,undefined4 param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong *local_38;
  char local_30;
  
  if (unaff_RDI[0x27] == *unaff_RSI) {
    return;
  }
  if ((longlong *)unaff_RDI[0x28] != (longlong *)0x0) {
    (**(code **)(*(longlong *)unaff_RDI[0x28] + 0x4d0))();
    FUN_00d50130();
    if (unaff_RDI[0x28] != 0) {
      unaff_RDI[0x28] = 0;
      FUN_00d50b20();
    }
  }
  lVar1 = *unaff_RSI;
  lVar2 = unaff_RDI[0x27];
  if (lVar2 != lVar1) {
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    unaff_RDI[0x27] = lVar1;
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  if ((longlong *)*unaff_RSI == (longlong *)0x0) {
    return;
  }
  (**(code **)(*(longlong *)*unaff_RSI + 0x4e0))();
  plVar3 = (longlong *)unaff_RDI[0x28];
  plVar4 = plVar3;
  if (plVar3 == local_38) goto LAB_00b3cf70;
  plVar4 = local_38;
  if (local_30 == '\0') {
    if (local_38 == (longlong *)0x0) {
      plVar4 = (longlong *)0x0;
      goto LAB_00b3cf25;
    }
    FUN_00d50b00();
    plVar3 = (longlong *)unaff_RDI[0x28];
    unaff_RDI[0x28] = (longlong)local_38;
  }
  else {
    local_30 = '\0';
LAB_00b3cf25:
    unaff_RDI[0x28] = (longlong)plVar4;
  }
  if (plVar3 != (longlong *)0x0) {
    FUN_00d50b20();
    plVar4 = local_38;
  }
LAB_00b3cf70:
  if ((local_30 != '\0') && (plVar4 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0x28] == 0) {
    plVar4 = (longlong *)FUN_00e8fc40();
    FUN_00afe870();
    (**(code **)(*plVar4 + 0x18))();
    plVar3 = (longlong *)unaff_RDI[0x28];
    if (plVar3 == plVar4) {
      FUN_00d50b20();
    }
    else {
      unaff_RDI[0x28] = (longlong)plVar4;
      if (plVar3 != (longlong *)0x0) {
        FUN_00d50b20();
      }
    }
    (**(code **)(*(longlong *)unaff_RDI[0x28] + 0x5c8))();
  }
  FUN_01e53c20();
  if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (local_38 == (longlong *)0x0) {
    (**(code **)(*(longlong *)unaff_RDI[0x28] + 0x4c0))();
  }
  FUN_01e53c20();
  (**(code **)(*local_38 + 0x4d8))();
  (**(code **)(*unaff_RDI + 0x4e8))(param_2);
  if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  plVar3 = (longlong *)unaff_RDI[0x28];
  FUN_00d50b00();
  FUN_01e3f820();
  (**(code **)(*plVar3 + 0x4c8))();
  if (unaff_RDI != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}


