// Function: FUN_00d47510
// Address: 00d47510
// Size: 1001 bytes
// Class: GNList


/* WARNING: Removing unreachable block (ram,0x00d478b4) */
/* WARNING: Removing unreachable block (ram,0x00d478bd) */

void FUN_00d47510(void)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  char cVar6;
  char cVar7;
  undefined1 uVar8;
  int iVar9;
  int iVar10;
  undefined8 *unaff_RSI;
  longlong unaff_RDI;
  float fVar11;
  longlong local_e0;
  longlong *local_d8;
  char local_d0;
  
  lVar3 = DAT_02774da0;
  if (DAT_02774da0 != 0) {
    FUN_00d50b00();
  }
  iVar9 = FUN_00d90650();
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  lVar3 = DAT_0277ddb8;
  plVar1 = (longlong *)*unaff_RSI;
  if (iVar9 != -1) {
    iVar10 = FUN_00d8c7a0();
    fVar11 = (float)FUN_00d8d7b0();
    if (iVar10 - iVar9 < 8) {
      *(undefined1 *)(unaff_RDI + 0xc) = 0x66;
      *(float *)(unaff_RDI + 0x10) = fVar11;
      return;
    }
    *(undefined1 *)(unaff_RDI + 0xc) = 100;
    *(double *)(unaff_RDI + 0x10) = (double)fVar11;
    return;
  }
  if (DAT_0277ddb8 != 0) {
    FUN_00d50b00();
  }
  cVar6 = (**(code **)(*plVar1 + 0x50))();
  lVar2 = DAT_0275e480;
  cVar7 = '\x01';
  if (cVar6 == '\0') {
    plVar1 = (longlong *)*unaff_RSI;
    if (DAT_0275e480 != 0) {
      FUN_00d50b00();
    }
    cVar6 = (**(code **)(*plVar1 + 0x50))();
    lVar4 = DAT_0277ddc0;
    cVar7 = '\x01';
    if (cVar6 == '\0') {
      plVar1 = (longlong *)*unaff_RSI;
      if (DAT_0277ddc0 != 0) {
        FUN_00d50b00();
      }
      cVar6 = (**(code **)(*plVar1 + 0x50))();
      lVar5 = DAT_027e3c48;
      cVar7 = '\x01';
      if (cVar6 == '\0') {
        plVar1 = (longlong *)*unaff_RSI;
        if (DAT_027e3c48 != 0) {
          FUN_00d50b00();
        }
        cVar7 = (**(code **)(*plVar1 + 0x50))();
        if (lVar5 != 0) {
          FUN_00d50b20();
        }
      }
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  lVar3 = DAT_0277daf0;
  if (cVar7 != '\0') {
    *(undefined1 *)(unaff_RDI + 0xc) = 0x62;
    *(undefined1 *)(unaff_RDI + 0x10) = 1;
    return;
  }
  plVar1 = (longlong *)*unaff_RSI;
  if (DAT_0277daf0 != 0) {
    FUN_00d50b00();
  }
  cVar6 = (**(code **)(*plVar1 + 0x50))();
  lVar2 = DAT_02789050;
  cVar7 = '\x01';
  if (cVar6 == '\0') {
    plVar1 = (longlong *)*unaff_RSI;
    if (DAT_02789050 != 0) {
      FUN_00d50b00();
    }
    cVar6 = (**(code **)(*plVar1 + 0x50))();
    lVar4 = DAT_0277daf8;
    cVar7 = '\x01';
    if (cVar6 == '\0') {
      plVar1 = (longlong *)*unaff_RSI;
      if (DAT_0277daf8 != 0) {
        FUN_00d50b00();
      }
      cVar6 = (**(code **)(*plVar1 + 0x50))();
      lVar5 = DAT_02787960;
      cVar7 = '\x01';
      if (cVar6 == '\0') {
        plVar1 = (longlong *)*unaff_RSI;
        if (DAT_02787960 != 0) {
          FUN_00d50b00();
        }
        cVar7 = (**(code **)(*plVar1 + 0x50))();
        if (lVar5 != 0) {
          FUN_00d50b20();
        }
      }
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  if (cVar7 != '\0') {
    *(undefined1 *)(unaff_RDI + 0xc) = 0x62;
    *(undefined1 *)(unaff_RDI + 0x10) = 0;
    return;
  }
  FUN_00ddb860();
  cVar6 = (**(code **)(*local_d8 + 0x3f8))();
  if ((local_d0 != '\0') && (local_d8 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar6 == '\0') {
    local_e0 = 0;
  }
  else if ((int)local_e0 != local_e0) {
    *(longlong *)(unaff_RDI + 0x10) = local_e0;
    uVar8 = 0x6c;
    goto LAB_00d478e5;
  }
  *(int *)(unaff_RDI + 0x10) = (int)local_e0;
  uVar8 = 0x49;
LAB_00d478e5:
  *(undefined1 *)(unaff_RDI + 0xc) = uVar8;
  return;
}


