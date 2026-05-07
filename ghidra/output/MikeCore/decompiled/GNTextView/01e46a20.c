// Function: FUN_01e46a20
// Address: 01e46a20
// Size: 764 bytes
// Class: GNTextView


/* WARNING: Removing unreachable block (ram,0x01e46cf9) */
/* WARNING: Removing unreachable block (ram,0x01e46d02) */
/* WARNING: Removing unreachable block (ram,0x01e46cca) */
/* WARNING: Removing unreachable block (ram,0x01e46cd3) */
/* WARNING: Removing unreachable block (ram,0x01e46b10) */
/* WARNING: Removing unreachable block (ram,0x01e46b19) */
/* WARNING: Removing unreachable block (ram,0x01e46aba) */
/* WARNING: Removing unreachable block (ram,0x01e46ac3) */
/* WARNING: Removing unreachable block (ram,0x01e46c4c) */
/* WARNING: Removing unreachable block (ram,0x01e46c59) */
/* WARNING: Removing unreachable block (ram,0x01e46be5) */
/* WARNING: Removing unreachable block (ram,0x01e46bee) */

void FUN_01e46a20(void)

{
  bool bVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  undefined8 in_R9;
  undefined8 uVar9;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined8 in_XMM3_Qa;
  undefined4 uVar10;
  longlong local_40;
  char local_38;
  
  plVar4 = (longlong *)unaff_RSI[6];
  plVar3 = unaff_RSI;
  while (plVar2 = plVar4, plVar2 != (longlong *)0x0) {
    plVar4 = (longlong *)plVar2[6];
    plVar3 = plVar2;
    if ((longlong *)plVar2[6] == plVar2) {
      plVar4 = plVar2;
    }
  }
  cVar5 = (**(code **)(*plVar3 + 0x4b8))();
  if (cVar5 == '\0') {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
    return;
  }
  FUN_00d50b00();
  (**(code **)(*unaff_RSI + 0x7b0))();
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
      goto LAB_01e46ac8;
    }
LAB_01e46af5:
    bVar1 = true;
LAB_01e46b7d:
    (**(code **)(*unaff_RSI + 0x660))((int)DAT_023b19a0,0);
    if ((local_38 == '\0') && (local_40 != 0)) {
      FUN_00d50b00();
    }
    *unaff_RDI = local_40;
    *(undefined1 *)(unaff_RDI + 1) = 1;
    if (bVar1) goto LAB_01e46bb8;
  }
  else {
    if (local_40 == 0) goto LAB_01e46af5;
LAB_01e46ac8:
    cVar5 = FUN_01cf74d0();
    if (cVar5 == '\0') {
LAB_01e46b7a:
      bVar1 = false;
      goto LAB_01e46b7d;
    }
    FUN_01d3a560();
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
        goto LAB_01e46b1e;
      }
      goto LAB_01e46b7a;
    }
    if (local_40 == 0) goto LAB_01e46b7a;
LAB_01e46b1e:
    iVar6 = FUN_01d3a5a0();
    if (((iVar6 != 1) && (iVar6 = FUN_01d3a5a0(), iVar6 != 5)) &&
       (iVar6 = FUN_01d3a5a0(), iVar6 != 6)) {
LAB_01e46b72:
      FUN_00d50b20();
      goto LAB_01e46b7a;
    }
    FUN_01d3abf0();
    uVar9 = FUN_01e466c0();
    cVar5 = FUN_00d05410((int)uVar9,0,*(undefined8 *)(local_40 + 0x114),in_XMM3_Qa,uVar9,
                         extraout_XMM0_Dc);
    uVar10 = (undefined4)uVar9;
    if (cVar5 != '\0') goto LAB_01e46b72;
    FUN_01cf85d0(uVar10);
    (**(code **)(*unaff_RSI + 0x660))((int)DAT_02390108,0);
    if (local_38 == '\0') {
      if (local_40 == 0) goto LAB_01e46c63;
      FUN_00d50b00(uVar10);
    }
    else if (local_40 == 0) {
LAB_01e46c63:
      uVar9 = FUN_01e46ed0();
      uVar10 = extraout_XMM0_Dc_00;
      uVar7 = FUN_01d3b620();
      FUN_01d3b630();
      uVar8 = FUN_01d3b590();
      FUN_01d3c980((int)uVar9,uVar7,uVar8,in_R9,uVar9,uVar10);
      if ((local_40 != 0) && (local_38 == '\0')) {
        FUN_00d50b00();
      }
      FUN_01d3a5b0();
    }
    *unaff_RDI = local_40;
    *(undefined1 *)(unaff_RDI + 1) = 1;
    FUN_00d50b20();
  }
  FUN_00d50b20();
LAB_01e46bb8:
  FUN_00d50b20();
  return;
}


