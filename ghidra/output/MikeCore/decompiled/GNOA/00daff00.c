// Function: FUN_00daff00
// Address: 00daff00
// Size: 578 bytes
// Class: GNOA


undefined8 *
FUN_00daff00(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  undefined8 *unaff_RDI;
  bool bVar6;
  bool bVar7;
  undefined1 uVar8;
  longlong local_a0;
  char local_98;
  int local_54 [5];
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
      goto LAB_00daff63;
    }
  }
  else if (local_40 != (longlong *)0x0) {
LAB_00daff63:
    uVar8 = 0;
    iVar4 = FUN_00daed40();
    lVar5 = DAT_02782eb0;
    if (iVar4 == -1) {
      if (DAT_02782eb0 != 0) {
        FUN_00d50b00();
      }
      FUN_00cc78b0();
      if (lVar5 != 0) {
        FUN_00d50b20();
      }
    }
    lVar5 = FUN_00e83010();
    local_54[0] = iVar4;
    (**(code **)(*plVar2 + 0x380))(local_54,lVar5,param_3,param_4,uVar8);
    bVar6 = local_40 != (longlong *)0x0;
    bVar7 = iVar4 != local_54[0];
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    lVar1 = DAT_027815a8;
    if (bVar6 || bVar7) {
      if (DAT_027815a8 != 0) {
        FUN_00d50b00();
      }
      FUN_00cc78b0();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
    }
    *(undefined1 *)(lVar5 + iVar4) = 0;
    FUN_00d92e10();
    plVar3 = local_40;
    if (local_40 == (longlong *)0x0) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
      if (((local_38 == '\0') && (FUN_00d50b00(), local_38 != '\0')) &&
         (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    (**(code **)(*plVar2 + 0x368))();
    if ((local_98 != '\0') && (local_a0 != 0)) {
      FUN_00d50b20();
    }
    *(undefined1 *)(unaff_RDI + 1) = 0;
    if ((!bVar6) && (plVar3 != (longlong *)0x0)) {
      FUN_00d50b00();
    }
    *unaff_RDI = plVar3;
    *(undefined1 *)(unaff_RDI + 1) = 1;
    FUN_00d50b20();
    return unaff_RDI;
  }
  *(undefined1 *)(unaff_RDI + 1) = 0;
  *unaff_RDI = 0;
  return unaff_RDI;
}


