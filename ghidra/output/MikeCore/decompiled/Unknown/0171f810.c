// Function: FUN_0171f810
// Address: 0171f810
// Size: 1968 bytes
// Class: Unknown
// String references:
//   " %@"
//   "%@"


void FUN_0171f810(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  bool bVar3;
  bool bVar4;
  longlong lVar5;
  char cVar6;
  char cVar7;
  int iVar8;
  byte bVar9;
  undefined8 *unaff_RSI;
  longlong unaff_RDI;
  longlong *plVar10;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  double dVar11;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  undefined8 uVar12;
  undefined8 extraout_XMM0_Qa_03;
  undefined8 extraout_XMM0_Qa_04;
  undefined8 extraout_XMM0_Qa_05;
  undefined8 extraout_XMM0_Qa_06;
  undefined8 extraout_XMM0_Qa_07;
  undefined8 extraout_XMM0_Qa_08;
  longlong local_b8;
  char local_b0;
  longlong *local_58;
  longlong *local_50;
  uint local_48;
  longlong local_40;
  char local_38;
  
  iVar8 = FUN_00d8c7a0();
  if (iVar8 == 0) {
    bVar4 = false;
    plVar10 = (longlong *)0x0;
  }
  else {
    iVar8 = FUN_00d8c7a0();
    FUN_00d8f140(extraout_XMM0_Qa,iVar8 + -1);
    plVar10 = local_50;
    if (local_50 == (longlong *)0x0) {
      plVar10 = (longlong *)0x0;
      bVar4 = false;
    }
    else {
      bVar4 = true;
      if ((char)local_48 == '\0') {
        FUN_00d50b00();
        if (((char)local_48 != '\0') && (local_50 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
  }
  iVar8 = FUN_00d8c7a0();
  if (iVar8 == 0) {
    bVar3 = false;
    local_58 = (longlong *)0x0;
  }
  else {
    FUN_00d97ce0(extraout_XMM0_Qa_00,1);
    local_58 = local_50;
    if (local_50 == (longlong *)0x0) {
      local_58 = (longlong *)0x0;
      bVar3 = false;
    }
    else {
      bVar3 = true;
      if ((char)local_48 == '\0') {
        FUN_00d50b00();
        if (((char)local_48 != '\0') && (local_50 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
  }
  if (plVar10 != (longlong *)0x0) {
    FUN_00d93180();
    plVar2 = local_50;
    if ((char)local_48 == '\0') {
      if (local_50 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_48 = local_48 & 0xffffff00;
    }
    dVar11 = (double)FUN_00d9ba10();
    bVar9 = 0;
    if (((dVar11 == DAT_023934d0) && (bVar9 = 0, !NAN(dVar11) && !NAN(DAT_023934d0))) &&
       (local_58 != (longlong *)0x0)) {
      FUN_00d93180();
      if (local_b0 == '\0') {
        if (local_b8 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_b0 = '\0';
      }
      dVar11 = (double)FUN_00d9ba10();
      if (local_b8 != 0) {
        FUN_00d50b20();
      }
      if ((local_b0 != '\0') && (local_b8 != 0)) {
        FUN_00d50b20();
      }
      dVar11 = (double)-(ulonglong)(dVar11 == DAT_023934d0);
      bVar9 = SUB81(dVar11,0) & 1;
    }
    if (plVar2 != (longlong *)0x0) {
      dVar11 = (double)FUN_00d50b20();
    }
    if (((char)local_48 != '\0') && (local_50 != (longlong *)0x0)) {
      dVar11 = (double)FUN_00d50b20();
    }
    lVar1 = DAT_02781610;
    if (bVar9 != 0) {
      lVar1 = *param_2;
      local_48 = 1;
      local_50 = &DAT_024c5048;
      if (lVar1 != 0) {
        dVar11 = (double)FUN_00d50b00();
      }
      local_38 = '\x01';
      local_40 = lVar1;
      FUN_00d94d80(dVar11,&local_50);
      local_50 = &DAT_024c5048;
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      goto LAB_0171ff81;
    }
    if (DAT_02781610 != 0) {
      FUN_00d50b00();
    }
    cVar6 = (**(code **)(*plVar10 + 0x50))();
    lVar5 = DAT_02781610;
    cVar7 = '\0';
    uVar12 = extraout_XMM0_Qa_01;
    if ((cVar6 != '\0') && (local_58 != (longlong *)0x0)) {
      if (DAT_02781610 != 0) {
        FUN_00d50b00();
      }
      cVar7 = (**(code **)(*local_58 + 0x50))();
      uVar12 = extraout_XMM0_Qa_02;
      if (lVar5 != 0) {
        uVar12 = FUN_00d50b20();
      }
    }
    if (lVar1 != 0) {
      uVar12 = FUN_00d50b20();
    }
    if (cVar7 != '\0') {
      lVar1 = *param_2;
      local_48 = 1;
      local_50 = &DAT_024c5048;
      if (lVar1 != 0) {
        uVar12 = FUN_00d50b00();
      }
      local_38 = '\x01';
      local_40 = lVar1;
      FUN_00d94d80(uVar12,&local_50);
      local_50 = &DAT_024c5048;
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      goto LAB_0171ff81;
    }
  }
  plVar2 = (longlong *)*unaff_RSI;
  lVar1 = *(longlong *)(unaff_RDI + 0x40);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  cVar6 = (**(code **)(*plVar2 + 0x50))();
  lVar5 = DAT_02781610;
  cVar7 = '\0';
  uVar12 = extraout_XMM0_Qa_03;
  if ((cVar6 != '\0') && (local_58 != (longlong *)0x0)) {
    if (DAT_02781610 != 0) {
      FUN_00d50b00();
    }
    cVar7 = (**(code **)(*local_58 + 0x50))();
    uVar12 = extraout_XMM0_Qa_04;
    if (lVar5 != 0) {
      uVar12 = FUN_00d50b20();
    }
  }
  if (lVar1 != 0) {
    uVar12 = FUN_00d50b20();
  }
  lVar1 = DAT_027cd570;
  if (cVar7 == '\0') {
    if (plVar10 != (longlong *)0x0) {
      if (DAT_027cd570 != 0) {
        FUN_00d50b00();
      }
      cVar6 = (**(code **)(*plVar10 + 0x50))();
      lVar5 = DAT_027cd570;
      cVar7 = '\0';
      uVar12 = extraout_XMM0_Qa_05;
      if ((cVar6 != '\0') && (local_58 != (longlong *)0x0)) {
        if (DAT_027cd570 != 0) {
          FUN_00d50b00();
        }
        cVar7 = (**(code **)(*local_58 + 0x50))();
        uVar12 = extraout_XMM0_Qa_06;
        if (lVar5 != 0) {
          uVar12 = FUN_00d50b20();
        }
      }
      if (lVar1 != 0) {
        uVar12 = FUN_00d50b20();
      }
      if (cVar7 != '\0') {
        lVar1 = *param_2;
        local_48 = 1;
        local_50 = &DAT_024c5048;
        if (lVar1 != 0) {
          uVar12 = FUN_00d50b00();
        }
        local_38 = '\x01';
        local_40 = lVar1;
        FUN_00d94d80(uVar12,&local_50);
        local_50 = &DAT_024c5048;
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        goto LAB_0171ff81;
      }
    }
    plVar2 = (longlong *)*unaff_RSI;
    lVar1 = *(longlong *)(unaff_RDI + 0x40);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    cVar6 = (**(code **)(*plVar2 + 0x50))();
    lVar5 = DAT_027cd570;
    cVar7 = '\0';
    uVar12 = extraout_XMM0_Qa_07;
    if ((cVar6 != '\0') && (local_58 != (longlong *)0x0)) {
      if (DAT_027cd570 != 0) {
        FUN_00d50b00();
      }
      cVar7 = (**(code **)(*local_58 + 0x50))();
      uVar12 = extraout_XMM0_Qa_08;
      if (lVar5 != 0) {
        uVar12 = FUN_00d50b20();
      }
    }
    if (lVar1 != 0) {
      uVar12 = FUN_00d50b20();
    }
    if (cVar7 == '\0') {
      lVar1 = *param_2;
      local_48 = 1;
      local_50 = &DAT_024c5048;
      if (lVar1 != 0) {
        uVar12 = FUN_00d50b00();
      }
      local_38 = '\x01';
      local_40 = lVar1;
      FUN_00d94d80(uVar12,&local_50);
      local_50 = &DAT_024c5048;
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      lVar1 = *param_2;
      local_48 = 1;
      local_50 = &DAT_024c5048;
      if (lVar1 != 0) {
        uVar12 = FUN_00d50b00();
      }
      local_38 = '\x01';
      local_40 = lVar1;
      FUN_00d94d80(uVar12,&local_50);
      local_50 = &DAT_024c5048;
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    lVar1 = *param_2;
    local_48 = 1;
    local_50 = &DAT_024c5048;
    if (lVar1 != 0) {
      uVar12 = FUN_00d50b00();
    }
    local_38 = '\x01';
    local_40 = lVar1;
    FUN_00d94d80(uVar12,&local_50);
    local_50 = &DAT_024c5048;
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
LAB_0171ff81:
  if ((bVar3) && (local_58 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((bVar4) && (plVar10 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  return;
}


