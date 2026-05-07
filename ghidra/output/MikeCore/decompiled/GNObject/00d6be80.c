// Function: FUN_00d6be80
// Address: 00d6be80
// Size: 674 bytes
// Class: GNObject


void FUN_00d6be80(void)

{
  longlong lVar1;
  short sVar2;
  int iVar3;
  longlong lVar4;
  longlong *unaff_RSI;
  char cVar5;
  bool bVar6;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  lVar4 = *unaff_RSI;
  if (lVar4 == 0) {
    FUN_00d8ede0();
    return;
  }
  cVar5 = (char)unaff_RSI[1];
  if (cVar5 != '\0') {
    FUN_00d50b00();
  }
  sVar2 = FUN_00d8cbc0();
  if (sVar2 == 0x2f) {
    FUN_00d8c7a0();
    FUN_00e7b4e0();
    FUN_00d8e3d0();
  }
  else {
    FUN_00d8c7a0();
    sVar2 = FUN_00d8cbc0();
    lVar1 = DAT_027259e0;
    if (sVar2 == 0x2f) {
      if (DAT_027259e0 != 0) {
        FUN_00d50b00();
      }
      iVar3 = FUN_00d90650();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      if (iVar3 == -1) {
        FUN_00d8c7a0();
        FUN_00e7b4e0();
        FUN_00d8e3d0();
        goto LAB_00d6c0fe;
      }
    }
    lVar1 = DAT_027259e0;
    if (DAT_027259e0 != 0) {
      FUN_00d50b00();
    }
    iVar3 = FUN_00d90650();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    lVar1 = DAT_027259e0;
    if (iVar3 == -1) {
      FUN_00d8c7a0();
      FUN_00e7b4e0();
      FUN_00d8e3d0();
    }
    else {
      if (DAT_027259e0 != 0) {
        FUN_00d50b00();
      }
      local_50 = lVar1;
      local_48 = '\x01';
      FUN_00d91000(1,&local_50);
      lVar1 = local_40;
      if (local_38 == '\0') {
        if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_38 = '\0';
      }
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      lVar1 = **(longlong **)(lVar1 + 0x10);
      if (lVar4 == lVar1) {
        if ((cVar5 == '\0') && (lVar1 != 0)) {
          cVar5 = '\x01';
          FUN_00d50b00();
        }
      }
      else {
        if (lVar1 != 0) {
          FUN_00d50b00();
        }
        bVar6 = cVar5 != '\0';
        lVar4 = lVar1;
        cVar5 = '\x01';
        if (bVar6) {
          FUN_00d50b20();
        }
      }
      FUN_00d8c7a0();
      FUN_00e7b4e0();
      FUN_00d8e3d0();
      FUN_00d50b20();
    }
  }
LAB_00d6c0fe:
  if ((cVar5 != '\0') && (lVar4 != 0)) {
    FUN_00d50b20();
  }
  return;
}


