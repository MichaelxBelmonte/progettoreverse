// Function: FUN_017936d0
// Address: 017936d0
// Size: 661 bytes
// Class: GNUni


void FUN_017936d0(undefined8 param_1,int param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong local_40;
  char local_38;
  
  cVar2 = FUN_01716a10();
  if (cVar2 == '\0') {
    cVar2 = FUN_017176e0();
    if (cVar2 == '\0') {
      if ((~*(ulonglong *)(*unaff_RSI + 0x18) & 0xf0000000000) == 0) {
        FUN_01715480();
        FUN_017939b0();
        if (local_40 != 0) {
          bVar1 = true;
          if (local_38 == '\0') {
            FUN_00d50b00();
          }
          goto LAB_017938e3;
        }
      }
      else {
        FUN_01715480();
        FUN_017939b0();
        if (local_40 != 0) {
          bVar1 = true;
          if (local_38 == '\0') {
            FUN_00d50b00();
          }
          goto LAB_017938e3;
        }
      }
    }
    else {
      FUN_01715480();
      FUN_017939b0();
      if (local_40 != 0) {
        bVar1 = true;
        if (local_38 == '\0') {
          FUN_00d50b00();
        }
        goto LAB_017938e3;
      }
    }
  }
  else {
    cVar2 = FUN_01717530();
    if (cVar2 == '\0') {
      if ((~*(ulonglong *)(*unaff_RSI + 0x18) & 0xf00000000000) == 0) {
        FUN_01715480();
        FUN_017939b0();
        if (local_40 != 0) {
          bVar1 = true;
          if (local_38 == '\0') {
            FUN_00d50b00();
          }
          goto LAB_017938e3;
        }
      }
      else if ((~*(ulonglong *)(*unaff_RSI + 0x18) & 0xf000000000) == 0) {
        FUN_01715480();
        FUN_017939b0();
        if (local_40 != 0) {
          bVar1 = true;
          if (local_38 == '\0') {
            FUN_00d50b00();
          }
          goto LAB_017938e3;
        }
      }
      else {
        FUN_01715480();
        FUN_017939b0();
        if (local_40 != 0) {
          bVar1 = true;
          if (local_38 == '\0') {
            FUN_00d50b00();
          }
          goto LAB_017938e3;
        }
      }
    }
    else {
      FUN_01715480();
      FUN_017939b0();
      if (local_40 != 0) {
        bVar1 = true;
        if (local_38 == '\0') {
          FUN_00d50b00();
        }
        goto LAB_017938e3;
      }
    }
  }
  local_40 = 0;
  bVar1 = false;
LAB_017938e3:
  if (param_2 == 1) {
    iVar3 = FUN_01717260();
    if (iVar3 == 0xb) {
      iVar3 = FUN_01717260();
      if (iVar3 != 0xb) {
        FUN_01715d40();
        FUN_01715d40();
      }
    }
  }
  *(undefined1 *)(unaff_RDI + 1) = 0;
  if ((!bVar1) && (local_40 != 0)) {
    FUN_00d50b00();
  }
  *unaff_RDI = local_40;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}


