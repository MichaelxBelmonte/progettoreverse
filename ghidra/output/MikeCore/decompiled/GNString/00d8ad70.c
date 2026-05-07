// Function: FUN_00d8ad70
// Address: 00d8ad70
// Size: 1210 bytes
// Class: GNString


void FUN_00d8ad70(void)

{
  short sVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  char cVar5;
  short sVar6;
  int iVar7;
  undefined8 *puVar8;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  longlong *local_40;
  char local_38;
  
  puVar8 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar8 = &DAT_025795a8;
  FUN_00d500e0();
  iVar7 = *(int *)(unaff_RSI + 0x20);
  if (iVar7 == -1) {
    if (*(longlong *)(unaff_RSI + 0x10) == 0) goto LAB_00d8ae08;
    iVar7 = FUN_00e7dde0();
  }
  if (iVar7 == 0) {
LAB_00d8ae08:
    *unaff_RDI = puVar8;
    *(undefined1 *)(unaff_RDI + 1) = 1;
    return;
  }
  if ((((*(int *)(unaff_RSI + 0x20) == -1) && (*(longlong *)(unaff_RSI + 0x10) != 0)) &&
      (FUN_00e7dde0(), *(int *)(unaff_RSI + 0x20) == -1)) && (*(longlong *)(unaff_RSI + 0x10) != 0))
  {
    FUN_00e7dde0();
  }
  FUN_00e7b4e0();
  FUN_00d8e3d0();
  if ((local_38 == '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  lVar2 = DAT_026d7d98;
  if (DAT_026d7d98 != 0) {
    FUN_00d50b00();
  }
  cVar4 = (**(code **)(*local_40 + 0x50))();
  lVar3 = DAT_02781660;
  cVar5 = '\x01';
  if (cVar4 == '\0') {
    if (DAT_02781660 != 0) {
      FUN_00d50b00();
    }
    cVar5 = (**(code **)(*local_40 + 0x50))();
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  lVar2 = DAT_027816c8;
  if (cVar5 == '\0') {
    if (DAT_027816c8 != 0) {
      FUN_00d50b00();
    }
    cVar4 = (**(code **)(*local_40 + 0x50))();
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    lVar2 = DAT_027816d8;
    if (cVar4 != '\0') {
      if ((*(int *)(unaff_RSI + 0x20) == -1) && (*(longlong *)(unaff_RSI + 0x10) != 0)) {
        FUN_00e7dde0();
      }
      FUN_00e7b4e0();
      FUN_00d8e3d0();
      if ((local_38 == '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b00();
      }
      FUN_00d8dbf0();
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      lVar2 = DAT_027816d0;
      if (DAT_027816d0 != 0) {
        FUN_00d50b00();
      }
      FUN_00d8dbf0();
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      goto LAB_00d8af06;
    }
    if (DAT_027816d8 != 0) {
      FUN_00d50b00();
    }
    cVar4 = (**(code **)(*local_40 + 0x50))();
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    if (cVar4 != '\0') {
      if ((*(int *)(unaff_RSI + 0x20) == -1) && (*(longlong *)(unaff_RSI + 0x10) != 0)) {
        FUN_00e7dde0();
      }
      FUN_00e7b4e0();
      FUN_00d8e3d0();
      if ((local_38 == '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b00();
      }
      FUN_00d8dbf0();
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      lVar2 = DAT_027816e0;
      if (DAT_027816e0 != 0) {
        FUN_00d50b00();
      }
      FUN_00d8dbf0();
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      goto LAB_00d8af06;
    }
    FUN_00d50b00();
    FUN_00d8dbf0();
    FUN_00d50b20();
    if ((int)local_40[4] == -1) {
      cVar4 = FUN_00d8ca70();
      sVar6 = (short)cVar4;
    }
    else {
      sVar6 = *(short *)local_40[3];
    }
    lVar3 = DAT_02781660;
    lVar2 = DAT_026d7d98;
    sVar1 = sVar6 + -0x20;
    if (0x19 < (ushort)(sVar6 - 0x61U)) {
      sVar1 = sVar6;
    }
    if (sVar6 == sVar1) {
      if (DAT_02781660 != 0) {
        FUN_00d50b00();
      }
      FUN_00d8dbf0();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
    }
    else {
      if (DAT_026d7d98 != 0) {
        FUN_00d50b00();
      }
      FUN_00d8dbf0();
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
    }
  }
  else {
    FUN_00d50b00();
    FUN_00d8dbf0();
    FUN_00d50b20();
  }
  *(byte *)((longlong)puVar8 + 0x24) = *(byte *)((longlong)puVar8 + 0x24) & 0xfe;
LAB_00d8af06:
  *unaff_RDI = puVar8;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  FUN_00d50b20();
  return;
}


