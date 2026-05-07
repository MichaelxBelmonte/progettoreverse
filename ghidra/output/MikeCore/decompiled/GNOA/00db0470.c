// Function: FUN_00db0470
// Address: 00db0470
// Size: 538 bytes
// Class: GNOA


/* WARNING: Type propagation algorithm not settling */

void FUN_00db0470(undefined8 *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  undefined8 *unaff_RDI;
  bool bVar5;
  longlong local_98;
  char local_90;
  int local_58 [6];
  longlong *local_40;
  char local_38;
  
  (**(code **)(*(longlong *)*param_1 + 0x4d8))();
  plVar2 = local_40;
  if (local_38 == '\0') {
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b00();
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_00db04d3;
    }
  }
  else if (local_40 != (longlong *)0x0) {
LAB_00db04d3:
    iVar4 = FUN_00daed40();
    lVar1 = DAT_02782eb0;
    if (iVar4 == -1) {
      if (DAT_02782eb0 != 0) {
        FUN_00d50b00();
      }
      FUN_00cc78b0();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
    }
    local_58[1] = 0;
    FUN_00ccd540(local_58,local_58 + 1);
    bVar5 = local_40 != (longlong *)0x0;
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    lVar1 = DAT_027815a8;
    if (bVar5 || local_58[0] != 4) {
      if (DAT_027815a8 != 0) {
        FUN_00d50b00();
      }
      FUN_00cc78b0();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
    }
    FUN_00d46530();
    plVar3 = local_40;
    if (local_40 == (longlong *)0x0) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
      if (((local_38 == '\0') && (FUN_00d50b00(), local_38 != '\0')) &&
         (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    (**(code **)(*plVar2 + 0x368))();
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
    *(undefined1 *)(unaff_RDI + 1) = 0;
    if ((!bVar5) && (plVar3 != (longlong *)0x0)) {
      FUN_00d50b00();
    }
    *unaff_RDI = plVar3;
    *(undefined1 *)(unaff_RDI + 1) = 1;
    FUN_00d50b20();
    return;
  }
  *(undefined1 *)(unaff_RDI + 1) = 0;
  *unaff_RDI = 0;
  return;
}


