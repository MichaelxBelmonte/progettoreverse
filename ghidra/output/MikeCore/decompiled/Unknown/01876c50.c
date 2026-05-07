// Function: FUN_01876c50
// Address: 01876c50
// Size: 931 bytes
// Class: Unknown


void FUN_01876c50(undefined8 param_1,char param_2)

{
  longlong lVar1;
  int iVar2;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  bool bVar7;
  
  lVar4 = DAT_027e3bd8;
  if (DAT_027e3bd8 != 0) {
    FUN_00d50b00();
  }
  lVar1 = DAT_027e3bd8;
  lVar3 = DAT_027d6a68;
  iVar2 = *(int *)(unaff_RSI + 0x10);
  lVar5 = DAT_027d6a70;
  lVar6 = DAT_027e3be0;
  if (iVar2 == 0) {
    if (param_2 == '\0') {
      if (DAT_027e3bd8 != 0) {
        FUN_00d50b00();
      }
      if (lVar4 == lVar1) {
        if (lVar4 != 0) {
          FUN_00d50b20();
        }
      }
      else {
        if (lVar4 == 0) {
          iVar2 = *(int *)(unaff_RSI + 0x10);
          lVar4 = lVar1;
          lVar5 = DAT_027d6a70;
          lVar6 = DAT_027e3be0;
          goto joined_r0x01876fd3;
        }
        FUN_00d50b20();
        lVar4 = lVar1;
      }
    }
    else {
      if (DAT_027d6a68 != 0) {
        FUN_00d50b00();
      }
      if (lVar4 == lVar3) {
        if (lVar4 != 0) {
          FUN_00d50b20();
        }
      }
      else {
        if (lVar4 == 0) {
          iVar2 = *(int *)(unaff_RSI + 0x10);
          lVar4 = lVar3;
          lVar5 = DAT_027d6a70;
          lVar6 = DAT_027e3be0;
          goto joined_r0x01876fd3;
        }
        FUN_00d50b20();
        lVar4 = lVar3;
      }
    }
    iVar2 = *(int *)(unaff_RSI + 0x10);
    lVar5 = DAT_027d6a70;
    lVar6 = DAT_027e3be0;
  }
joined_r0x01876fd3:
  lVar3 = lVar4;
  DAT_027d6a70 = lVar5;
  DAT_027e3be0 = lVar6;
  if (iVar2 != 9) goto LAB_01876d92;
  if (param_2 == '\0') {
    if (lVar6 == 0) {
      if (lVar4 != 0) goto LAB_01876d7d;
    }
    else {
      FUN_00d50b00();
      if (lVar4 == lVar6) {
        FUN_00d50b20();
      }
      else {
LAB_01876d7d:
        lVar3 = lVar6;
        if (lVar4 != 0) {
          FUN_00d50b20();
        }
      }
    }
  }
  else if (lVar5 == 0) {
    if (lVar4 != 0) goto LAB_01876d66;
  }
  else {
    FUN_00d50b00();
    if (lVar4 == lVar5) {
      FUN_00d50b20();
    }
    else {
LAB_01876d66:
      lVar3 = lVar5;
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
    }
  }
LAB_01876d92:
  lVar4 = DAT_027d6a78;
  iVar2 = *(int *)(unaff_RSI + 0x10);
  if (iVar2 == 2) {
    if (DAT_027d6a78 == 0) {
      if (lVar3 != 0) goto LAB_01876dc3;
    }
    else {
      FUN_00d50b00();
      if (lVar3 == lVar4) {
        FUN_00d50b20();
      }
      else {
LAB_01876dc3:
        bVar7 = lVar3 != 0;
        lVar3 = lVar4;
        if (bVar7) {
          FUN_00d50b20();
        }
      }
    }
    iVar2 = *(int *)(unaff_RSI + 0x10);
  }
  lVar4 = DAT_027d6a80;
  if (iVar2 == 4) {
    if (DAT_027d6a80 == 0) {
      if (lVar3 != 0) goto LAB_01876e09;
      goto LAB_01876e19;
    }
    FUN_00d50b00();
    if (lVar3 == lVar4) {
      FUN_00d50b20();
      goto LAB_01876e19;
    }
LAB_01876e09:
    if (lVar3 != 0) {
      FUN_00d50b20();
      lVar3 = lVar4;
      goto LAB_01876e19;
    }
    iVar2 = *(int *)(unaff_RSI + 0x10);
    if (iVar2 == 5) goto LAB_01876e22;
joined_r0x01876e74:
    if (iVar2 != 7) goto LAB_01876ebc;
LAB_01876e76:
    lVar5 = DAT_027d6a90;
    if (DAT_027d6a90 == 0) {
      if (lVar4 != 0) goto LAB_01876e9e;
      goto LAB_01876ebc;
    }
    FUN_00d50b00();
    if (lVar4 == lVar5) {
      FUN_00d50b20();
      goto LAB_01876ebc;
    }
LAB_01876e9e:
    if (lVar4 != 0) {
      FUN_00d50b20();
      lVar4 = lVar5;
      goto LAB_01876ebc;
    }
    iVar2 = *(int *)(unaff_RSI + 0x10);
    if (iVar2 == 0xb) goto LAB_01876ec5;
joined_r0x01876f17:
    if (iVar2 != 0x18) goto LAB_01876f5f;
LAB_01876f19:
    lVar4 = DAT_027d6aa0;
    if (DAT_027d6aa0 == 0) {
      if (lVar5 != 0) goto LAB_01876f41;
      goto LAB_01876f5f;
    }
    FUN_00d50b00();
    if (lVar5 == lVar4) {
      FUN_00d50b20();
      goto LAB_01876f5f;
    }
LAB_01876f41:
    if (lVar5 != 0) {
      FUN_00d50b20();
      lVar5 = lVar4;
      goto LAB_01876f5f;
    }
    iVar2 = *(int *)(unaff_RSI + 0x10);
    lVar5 = DAT_027d6aa8;
  }
  else {
LAB_01876e19:
    lVar4 = lVar3;
    iVar2 = *(int *)(unaff_RSI + 0x10);
    if (iVar2 != 5) goto joined_r0x01876e74;
LAB_01876e22:
    lVar5 = DAT_027d6a88;
    if (DAT_027d6a88 == 0) {
      if (lVar4 != 0) goto LAB_01876e4a;
    }
    else {
      FUN_00d50b00();
      if (lVar4 == lVar5) {
        FUN_00d50b20();
      }
      else {
LAB_01876e4a:
        if (lVar4 == 0) {
          iVar2 = *(int *)(unaff_RSI + 0x10);
          lVar4 = lVar5;
          goto joined_r0x01876e74;
        }
        FUN_00d50b20();
        lVar4 = lVar5;
      }
    }
    if (*(int *)(unaff_RSI + 0x10) == 7) goto LAB_01876e76;
LAB_01876ebc:
    lVar5 = lVar4;
    iVar2 = *(int *)(unaff_RSI + 0x10);
    if (iVar2 != 0xb) goto joined_r0x01876f17;
LAB_01876ec5:
    lVar4 = DAT_027d6a98;
    if (DAT_027d6a98 == 0) {
      if (lVar5 != 0) goto LAB_01876eed;
    }
    else {
      FUN_00d50b00();
      if (lVar5 == lVar4) {
        FUN_00d50b20();
      }
      else {
LAB_01876eed:
        if (lVar5 == 0) {
          iVar2 = *(int *)(unaff_RSI + 0x10);
          lVar5 = lVar4;
          goto joined_r0x01876f17;
        }
        FUN_00d50b20();
        lVar5 = lVar4;
      }
    }
    if (*(int *)(unaff_RSI + 0x10) == 0x18) goto LAB_01876f19;
LAB_01876f5f:
    iVar2 = *(int *)(unaff_RSI + 0x10);
    lVar4 = lVar5;
    lVar5 = DAT_027d6aa8;
  }
  lVar6 = lVar4;
  DAT_027d6aa8 = lVar5;
  if (iVar2 == 0x24) {
    if (lVar5 == 0) {
      if (lVar4 == 0) goto LAB_01876faf;
    }
    else {
      FUN_00d50b00();
      if (lVar4 == lVar5) {
        FUN_00d50b20();
        goto LAB_01876faf;
      }
    }
    lVar6 = lVar5;
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
  }
LAB_01876faf:
  *unaff_RDI = lVar6;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}


