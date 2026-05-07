// Function: FUN_00c8d380
// Address: 00c8d380
// Size: 559 bytes
// Class: Unknown

void* FUN_00c8d380(void)

{
  void*puVar1;
  uint64_t uVar2;
  void*arg1;
  int unaff_EDI;
  uint32_t uVar3;
  int iVar4;
  
  if (arg1 == (void*)0x0) {
    arg1 = (void*)FUN_00e99b60();
  }
  puVar1 = (void*)(**arg1)();
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
  uVar2 = (**arg1)();
  *puVar1 = uVar2;
  *(void*)(puVar1 + 1) = uVar3;
  *(void*)((int64_t)puVar1 + 0xc) = 0;
  puVar1[2] = FUN_00e8b620;
  puVar1[3] = FUN_00e8b680;
  puVar1[4] = arg1;
  return puVar1;
}

