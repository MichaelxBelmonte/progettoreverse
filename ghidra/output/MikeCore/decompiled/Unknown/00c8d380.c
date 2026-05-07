// Function: FUN_00c8d380
// Address: 00c8d380
// Size: 559 bytes
// Class: Unknown


undefined8 * FUN_00c8d380(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *unaff_RSI;
  int unaff_EDI;
  undefined4 uVar3;
  int iVar4;
  
  if (unaff_RSI == (undefined8 *)0x0) {
    unaff_RSI = (undefined8 *)FUN_00e99b60();
  }
  puVar1 = (undefined8 *)(*(code *)*unaff_RSI)();
  iVar4 = unaff_EDI + -1;
  if (unaff_EDI == 0) {
    iVar4 = 0;
  }
  uVar3 = 0x17;
  if ((((((0x16 < iVar4) && (uVar3 = 0x35, 0x34 < iVar4)) && (uVar3 = 0x65, 100 < iVar4)) &&
       (((uVar3 = 0xfb, 0xfa < iVar4 && (uVar3 = 0x1fd, 0x1fc < iVar4)) &&
        ((uVar3 = 0x3fd, 0x3fc < iVar4 &&
         ((uVar3 = 0x7f7, 0x7f6 < iVar4 && (uVar3 = 0xffd, 0xffc < iVar4)))))))) &&
      (((uVar3 = 0x1fff, 0x1ffe < iVar4 &&
        ((((((uVar3 = 0x3ffd, 0x3ffc < iVar4 && (uVar3 = 0x7fed, 0x7fec < iVar4)) &&
            (uVar3 = 0xfff1, 0xfff0 < iVar4)) &&
           ((uVar3 = 0x1ffff, 0x1fffe < iVar4 && (uVar3 = 0x3fffb, 0x3fffa < iVar4)))) &&
          ((uVar3 = 0x7ffff, 0x7fffe < iVar4 &&
           ((uVar3 = 0xffffd, 0xffffc < iVar4 && (uVar3 = 0x1ffff7, 0x1ffff6 < iVar4)))))) &&
         (uVar3 = 0x3ffffd, 0x3ffffc < iVar4)))) &&
       (((uVar3 = 0x7ffff1, 0x7ffff0 < iVar4 && (uVar3 = 0xfffffd, 0xfffffc < iVar4)) &&
        (uVar3 = 0x1ffffd9, 0x1ffffd8 < iVar4)))))) &&
     (((uVar3 = 0x3fffffb, 0x3fffffa < iVar4 && (uVar3 = 0x7ffffd9, 0x7ffffd8 < iVar4)) &&
      (uVar3 = 0xfffffc7, 0xfffffc6 < iVar4)))) {
    uVar3 = 0x3fffffdd;
    if (iVar4 < 0x1ffffffd) {
      uVar3 = 0x1ffffffd;
    }
  }
  uVar2 = (*(code *)*unaff_RSI)();
  *puVar1 = uVar2;
  *(undefined4 *)(puVar1 + 1) = uVar3;
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  puVar1[2] = FUN_00e8b620;
  puVar1[3] = FUN_00e8b680;
  puVar1[4] = unaff_RSI;
  return puVar1;
}


