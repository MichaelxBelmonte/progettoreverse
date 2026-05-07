// Function: FUN_0140db30
// Address: 0140db30
// Size: 1199 bytes
// Class: GNData


void FUN_0140db30(undefined8 param_1)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  longlong unaff_RDI;
  
  lVar1 = DAT_02704060;
  if (*(longlong *)(unaff_RDI + 0x20) == 0) {
    return;
  }
  if (DAT_02704060 != 0) {
    FUN_00d50b00();
  }
  FUN_0140cda0();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = DAT_02781708;
  if (DAT_02781708 != 0) {
    FUN_00d50b00();
  }
  cVar2 = FUN_0140cda0();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = DAT_027816f0;
  if (cVar2 != '\0') {
    uVar3 = 2;
    goto LAB_0140df74;
  }
  if (DAT_027816f0 != 0) {
    FUN_00d50b00();
  }
  cVar2 = FUN_0140cda0();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = DAT_02781700;
  if (cVar2 != '\0') {
    uVar3 = 1;
    goto LAB_0140df74;
  }
  if (DAT_02781700 != 0) {
    FUN_00d50b00();
  }
  cVar2 = FUN_0140cda0();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = DAT_02781710;
  if (cVar2 != '\0') {
    uVar3 = 3;
    goto LAB_0140df74;
  }
  if (DAT_02781710 != 0) {
    FUN_00d50b00();
  }
  cVar2 = FUN_0140cda0();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = DAT_027cc8a0;
  if (cVar2 != '\0') {
    uVar3 = 5;
    goto LAB_0140df74;
  }
  if (DAT_027cc8a0 != 0) {
    FUN_00d50b00();
  }
  cVar2 = FUN_0140cda0();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if (cVar2 == '\0') {
    lVar1 = *(longlong *)(unaff_RDI + 0x78);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    cVar2 = FUN_0140cda0();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    lVar1 = DAT_02781720;
    if (cVar2 == '\0') {
      if (DAT_02781720 != 0) {
        FUN_00d50b00();
      }
      cVar2 = FUN_0140cda0();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      if (cVar2 == '\0') {
        lVar1 = *(longlong *)(unaff_RDI + 0x80);
        if (lVar1 != 0) {
          FUN_00d50b00();
        }
        cVar2 = FUN_0140cda0();
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
        lVar1 = DAT_027cc890;
        if (cVar2 != '\0') {
          FUN_01715d40(param_1,6);
          uVar3 = 8;
          goto LAB_0140df74;
        }
        if (DAT_027cc890 != 0) {
          FUN_00d50b00();
        }
        cVar2 = FUN_0140cda0();
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
        if (cVar2 == '\0') {
          lVar1 = *(longlong *)(unaff_RDI + 0x88);
          if (lVar1 != 0) {
            FUN_00d50b00();
          }
          cVar2 = FUN_0140cda0();
          if (lVar1 != 0) {
            FUN_00d50b20();
          }
          lVar1 = DAT_02781738;
          if (cVar2 == '\0') {
            if (DAT_02781738 != 0) {
              FUN_00d50b00();
            }
            cVar2 = FUN_0140cda0();
            if (lVar1 != 0) {
              FUN_00d50b20();
            }
            if (cVar2 == '\0') {
              lVar1 = *(longlong *)(unaff_RDI + 0x90);
              if (lVar1 != 0) {
                FUN_00d50b00();
              }
              cVar2 = FUN_0140cda0();
              if (lVar1 != 0) {
                FUN_00d50b20();
              }
              if (cVar2 == '\0') {
                return;
              }
              FUN_01715d40(param_1,0xc);
            }
            else {
              FUN_01715d40(param_1,0xc);
            }
          }
          else {
            FUN_01715d40(param_1,10);
          }
          goto LAB_0140df6f;
        }
        FUN_01715d40(param_1,10);
      }
      else {
        FUN_01715d40(param_1,8);
      }
      goto LAB_0140dd36;
    }
  }
  else {
LAB_0140dd36:
    if (*(char *)(unaff_RDI + 0x29) != '\0') {
      return;
    }
  }
LAB_0140df6f:
  uVar3 = 6;
LAB_0140df74:
  FUN_01715d40(param_1,uVar3);
  return;
}


