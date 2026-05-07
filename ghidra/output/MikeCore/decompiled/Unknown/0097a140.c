// Function: FUN_0097a140
// Address: 0097a140
// Size: 852 bytes
// Class: Unknown


void FUN_0097a140(undefined8 param_1,int *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  char cVar3;
  uint uVar4;
  longlong unaff_RSI;
  ulonglong unaff_RDI;
  
  cVar3 = (char)unaff_RDI;
  *(bool *)(unaff_RSI + 8) = (unaff_RDI & 0x11) != 0;
  *(bool *)(unaff_RSI + 9) = (unaff_RDI & 0x6e) != 0;
  uVar4 = (uint)unaff_RDI;
  *(char *)(unaff_RSI + 10) = (char)((uVar4 & 2) >> 1);
  *(bool *)(unaff_RSI + 0xb) = (unaff_RDI & 0xc) != 0;
  *(bool *)(unaff_RSI + 0xc) = (unaff_RDI & 0x60) != 0;
  *(undefined1 *)(unaff_RSI + 0xd) = 0;
  *(byte *)(unaff_RSI + 0xe) = (byte)((unaff_RDI & 0xffffffff) >> 7) & 1;
  *(bool *)(unaff_RSI + 0xf) = (unaff_RDI & 0xfd) != 0;
  *(bool *)(unaff_RSI + 0x10) = (unaff_RDI & 0x6c) != 0;
  uVar1 = unaff_RDI & 0x27;
  *(bool *)(unaff_RSI + 0x11) = uVar1 != 0;
  *(bool *)(unaff_RSI + 0x12) = uVar1 == unaff_RDI && uVar1 != 0;
  uVar2 = unaff_RDI & 0xd8;
  *(bool *)(unaff_RSI + 0x13) = uVar2 != 0;
  *(bool *)(unaff_RSI + 0x14) = uVar2 == unaff_RDI && uVar2 != 0;
  *(ulonglong *)(unaff_RSI + 0x18) = uVar1;
  *(ulonglong *)(unaff_RSI + 0x20) = uVar2;
  if ((unaff_RDI & 1) != 0) {
    FUN_0097a4b4();
  }
  if ((unaff_RDI & 2) != 0) {
    FUN_0097a4b4();
  }
  if ((unaff_RDI & 4) != 0) {
    FUN_0097a4b4();
  }
  if ((unaff_RDI & 0x20) != 0) {
    FUN_0097a4b4();
  }
  if ((unaff_RDI & 8) != 0) {
    FUN_0097a4b4();
  }
  if ((unaff_RDI & 0x40) != 0) {
    FUN_0097a4b4();
  }
  if ((unaff_RDI & 0x10) != 0) {
    FUN_0097a4b4();
  }
  if (cVar3 < '\0') {
    FUN_0097a4b4();
  }
  *(undefined1 *)(unaff_RSI + 0x40) = 0;
  if (param_2 != (int *)0x0) {
    if (*param_2 - 1U < 3) {
      uVar1 = *(ulonglong *)(&DAT_023ccba8 + (longlong)(int)(*param_2 - 1U) * 8);
    }
    else {
      uVar1 = 0;
    }
    *(bool *)(unaff_RSI + 0x40) = (uVar1 & unaff_RDI) != 0;
  }
  if (cVar3 < '\x01') {
    if (cVar3 < -0x28) {
      switch(uVar4 + 0x5c & 0xff) {
      case 0:
        *(undefined4 *)(unaff_RSI + 0x44) = 0x14;
        return;
      case 1:
        *(undefined4 *)(unaff_RSI + 0x44) = 0x15;
        return;
      case 2:
        *(undefined4 *)(unaff_RSI + 0x44) = 0x17;
        return;
      case 3:
        *(undefined4 *)(unaff_RSI + 0x44) = 0x18;
        return;
      }
      if (cVar3 == -0x80) {
        *(undefined4 *)(unaff_RSI + 0x44) = 0x13;
        return;
      }
    }
    else if (cVar3 < -0x12) {
      if (cVar3 == -0x28) {
        *(undefined4 *)(unaff_RSI + 0x44) = 5;
        return;
      }
      if (cVar3 == -0x14) {
        *(undefined4 *)(unaff_RSI + 0x44) = 0x16;
        return;
      }
    }
    else {
      if (cVar3 == -0x12) {
        *(undefined4 *)(unaff_RSI + 0x44) = 0x19;
        return;
      }
      if (cVar3 == -3) {
        *(undefined4 *)(unaff_RSI + 0x44) = 2;
        return;
      }
      if (cVar3 == -1) {
        *(undefined4 *)(unaff_RSI + 0x44) = 1;
        return;
      }
    }
  }
  else if (cVar3 < 'H') {
    if (cVar3 < '$') {
      if (cVar3 == '\x01') {
        *(undefined4 *)(unaff_RSI + 0x44) = 0xb;
        return;
      }
      if (cVar3 == '\x10') {
        *(undefined4 *)(unaff_RSI + 0x44) = 0xe;
        return;
      }
      if (cVar3 == '\x11') {
        *(undefined4 *)(unaff_RSI + 0x44) = 6;
        return;
      }
    }
    else {
      switch(uVar4 - 0x24 & 0xff) {
      case 0:
        *(undefined4 *)(unaff_RSI + 0x44) = 0xf;
        return;
      case 1:
        *(undefined4 *)(unaff_RSI + 0x44) = 9;
        return;
      case 2:
        *(undefined4 *)(unaff_RSI + 0x44) = 10;
        return;
      case 3:
        *(undefined4 *)(unaff_RSI + 0x44) = 4;
        return;
      }
    }
  }
  else if (cVar3 < 'n') {
    if (cVar3 == 'H') {
      *(undefined4 *)(unaff_RSI + 0x44) = 0xd;
      return;
    }
    if (cVar3 == 'l') {
      *(undefined4 *)(unaff_RSI + 0x44) = 7;
      return;
    }
  }
  else {
    if (cVar3 == 'n') {
      *(undefined4 *)(unaff_RSI + 0x44) = 3;
      return;
    }
    if (cVar3 == '}') {
      *(undefined4 *)(unaff_RSI + 0x44) = 0x1a;
      return;
    }
  }
  if (cVar3 == '\x7f') {
    *(undefined4 *)(unaff_RSI + 0x44) = 0x1b;
  }
  else {
    *(undefined4 *)(unaff_RSI + 0x44) = 0;
  }
  return;
}


