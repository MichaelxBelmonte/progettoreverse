// Function: FUN_00d8a4a0
// Address: 00d8a4a0
// Size: 1583 bytes
// Class: GNString


void FUN_00d8a4a0(undefined8 param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  char cVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  longlong *local_58;
  char local_50;
  longlong *local_40;
  
  puVar7 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar7 = &DAT_025795a8;
  FUN_00d500e0();
  iVar6 = *(int *)(unaff_RSI + 0x20);
  if (iVar6 == -1) {
    if (*(longlong *)(unaff_RSI + 0x10) == 0) goto LAB_00d8a56c;
    iVar6 = FUN_00e7dde0();
  }
  if (iVar6 == 0) {
LAB_00d8a56c:
    *unaff_RDI = puVar7;
    *(undefined1 *)(unaff_RDI + 1) = 1;
    return;
  }
  iVar6 = *(int *)(unaff_RSI + 0x20);
  if (iVar6 == -1) {
    if (*(longlong *)(unaff_RSI + 0x10) != 0) {
      iVar6 = FUN_00e7dde0();
      goto LAB_00d8a51d;
    }
LAB_00d8a579:
    bVar1 = false;
    local_40 = (longlong *)0x0;
  }
  else {
LAB_00d8a51d:
    if (iVar6 < 4) goto LAB_00d8a579;
    if ((((*(int *)(unaff_RSI + 0x20) == -1) && (*(longlong *)(unaff_RSI + 0x10) != 0)) &&
        (FUN_00e7dde0(), *(int *)(unaff_RSI + 0x20) == -1)) &&
       (*(longlong *)(unaff_RSI + 0x10) != 0)) {
      FUN_00e7dde0();
    }
    uVar8 = FUN_00e7b4e0();
    FUN_00d8e3d0(param_1,uVar8);
    lVar2 = DAT_027816d0;
    if (local_58 == (longlong *)0x0) {
      local_40 = (longlong *)0x0;
      bVar1 = false;
    }
    else {
      bVar1 = true;
      local_40 = local_58;
      if (local_50 == '\0') {
        FUN_00d50b00();
        lVar2 = DAT_027816d0;
      }
    }
    DAT_027816d0 = lVar2;
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    cVar4 = (**(code **)(*local_40 + 0x50))();
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    lVar2 = DAT_027816e0;
    if (cVar4 != '\0') {
      if ((*(int *)(unaff_RSI + 0x20) == -1) && (*(longlong *)(unaff_RSI + 0x10) != 0)) {
        FUN_00e7dde0();
      }
      uVar8 = FUN_00e7b4e0();
      FUN_00d8e3d0(param_1,uVar8);
      if ((local_50 == '\0') && (local_58 != (longlong *)0x0)) {
        FUN_00d50b00();
      }
      FUN_00d8dbf0();
      if (local_58 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      lVar2 = DAT_027816c8;
      if (DAT_027816c8 != 0) {
        FUN_00d50b00();
      }
      FUN_00d8dbf0();
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      goto LAB_00d8aa9f;
    }
    if (DAT_027816e0 != 0) {
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
      uVar8 = FUN_00e7b4e0();
      FUN_00d8e3d0(param_1,uVar8);
      if ((local_50 == '\0') && (local_58 != (longlong *)0x0)) {
        FUN_00d50b00();
      }
      FUN_00d8dbf0();
      if (local_58 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      lVar2 = DAT_027816d8;
      if (DAT_027816d8 != 0) {
        FUN_00d50b00();
      }
      FUN_00d8dbf0();
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      goto LAB_00d8aa9f;
    }
  }
  iVar6 = *(int *)(unaff_RSI + 0x20);
  if (iVar6 == -1) {
    if (*(longlong *)(unaff_RSI + 0x10) != 0) {
      iVar6 = FUN_00e7dde0();
      goto LAB_00d8a59d;
    }
  }
  else {
LAB_00d8a59d:
    if (1 < iVar6) {
      if ((((*(int *)(unaff_RSI + 0x20) == -1) && (*(longlong *)(unaff_RSI + 0x10) != 0)) &&
          (FUN_00e7dde0(), *(int *)(unaff_RSI + 0x20) == -1)) &&
         (*(longlong *)(unaff_RSI + 0x10) != 0)) {
        FUN_00e7dde0();
      }
      uVar8 = FUN_00e7b4e0();
      FUN_00d8e3d0(param_1,uVar8);
      if (local_58 == local_40) {
        if ((bVar1) || (local_58 == (longlong *)0x0)) {
          if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          bVar1 = true;
          if (local_50 == '\0') {
            FUN_00d50b00();
          }
        }
      }
      else if (local_50 == '\0') {
        if (local_58 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        if ((!bVar1) || (local_40 == (longlong *)0x0)) goto LAB_00d8a7d8;
        local_40 = local_58;
        FUN_00d50b20();
        bVar1 = true;
      }
      else if ((bVar1) && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
        local_40 = local_58;
        bVar1 = true;
      }
      else {
LAB_00d8a7d8:
        local_40 = local_58;
        bVar1 = true;
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
      if (cVar5 != '\0') {
        if ((*(int *)(unaff_RSI + 0x20) == -1) && (*(longlong *)(unaff_RSI + 0x10) != 0)) {
          FUN_00e7dde0();
        }
        uVar8 = FUN_00e7b4e0();
        FUN_00d8e3d0(param_1,uVar8);
        if ((local_50 == '\0') && (local_58 != (longlong *)0x0)) {
          FUN_00d50b00();
        }
        FUN_00d8dbf0();
        if (local_58 != (longlong *)0x0) {
          FUN_00d50b20();
        }
        goto LAB_00d8aa9f;
      }
    }
  }
  FUN_00d50b00();
  FUN_00d8dbf0();
  FUN_00d50b20();
  *(byte *)((longlong)puVar7 + 0x24) = *(byte *)((longlong)puVar7 + 0x24) & 0xfe;
LAB_00d8aa9f:
  *unaff_RDI = puVar7;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  if (!bVar1) {
    return;
  }
  if (local_40 == (longlong *)0x0) {
    return;
  }
  FUN_00d50b20();
  return;
}


