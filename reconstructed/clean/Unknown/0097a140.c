// Function: FUN_0097a140
// Address: 0097a140
// Size: 852 bytes
// Class: Unknown

void FUN_0097a140(uint64_t param_1,int *param_2)

{
  uint64_t uVar1;
  uint64_t uVar2;
  char cVar3;
  uint uVar4;
  int64_t arg1;
  uint64_t this_ptr;
  
  cVar3 = (char)this_ptr;
  *(bool *)(arg1 + 8) = (this_ptr & 0x11) != 0;
  *(bool *)(arg1 + 9) = (this_ptr & 0x6e) != 0;
  uVar4 = (uint)this_ptr;
  *(char *)(arg1 + 10) = (char)((uVar4 & 2) >> 1);
  *(bool *)(arg1 + 0xb) = (this_ptr & 0xc) != 0;
  *(bool *)(arg1 + 0xc) = (this_ptr & 0x60) != 0;
  *(void*)(arg1 + 0xd) = 0;
  *(byte *)(arg1 + 0xe) = (byte)((this_ptr & 0xffffffff) >> 7) & 1;
  *(bool *)(arg1 + 0xf) = (this_ptr & 0xfd) != 0;
  *(bool *)(arg1 + 0x10) = (this_ptr & 0x6c) != 0;
  uVar1 = this_ptr & 0x27;
  *(bool *)(arg1 + 0x11) = uVar1 != 0;
  *(bool *)(arg1 + 0x12) = uVar1 == this_ptr && uVar1 != 0;
  uVar2 = this_ptr & 0xd8;
  *(bool *)(arg1 + 0x13) = uVar2 != 0;
  *(bool *)(arg1 + 0x14) = uVar2 == this_ptr && uVar2 != 0;
  *(uint64_t *)(arg1 + 0x18) = uVar1;
  *(uint64_t *)(arg1 + 0x20) = uVar2;
  if ((this_ptr & 1) != 0) {
    FUN_0097a4b4();
  }
  if ((this_ptr & 2) != 0) {
    FUN_0097a4b4();
  }
  if ((this_ptr & 4) != 0) {
    FUN_0097a4b4();
  }
  if ((this_ptr & 0x20) != 0) {
    FUN_0097a4b4();
  }
  if ((this_ptr & 8) != 0) {
    FUN_0097a4b4();
  }
  if ((this_ptr & 0x40) != 0) {
    FUN_0097a4b4();
  }
  if ((this_ptr & 0x10) != 0) {
    FUN_0097a4b4();
  }
  if (cVar3 < '\0') {
    FUN_0097a4b4();
  }
  *(void*)(arg1 + 0x40) = 0;
  if (param_2 != (int *)0x0) {
    if (*param_2 - 1U < 3) {
      uVar1 = *(uint64_t *)(&g_023ccba8 + (int64_t)(int)(*param_2 - 1U) * 8);
    }
    else {
      uVar1 = 0;
    }
    *(bool *)(arg1 + 0x40) = (uVar1 & this_ptr) != 0;
  }
  if (cVar3 < '\x01') {
    if (cVar3 < -0x28) {
      switch(uVar4 + 0x5c & 0xff) {
      case 0:
        *(void*)(arg1 + 0x44) = 0x14;
        return;
      case 1:
        *(void*)(arg1 + 0x44) = 0x15;
        return;
      case 2:
        *(void*)(arg1 + 0x44) = 0x17;
        return;
      case 3:
        *(void*)(arg1 + 0x44) = 0x18;
        return;
      }
      if (cVar3 == -0x80) {
        *(void*)(arg1 + 0x44) = 0x13;
        return;
      }
    }
    else if (cVar3 < -0x12) {
      if (cVar3 == -0x28) {
        *(void*)(arg1 + 0x44) = 5;
        return;
      }
      if (cVar3 == -0x14) {
        *(void*)(arg1 + 0x44) = 0x16;
        return;
      }
    }
    else {
      if (cVar3 == -0x12) {
        *(void*)(arg1 + 0x44) = 0x19;
        return;
      }
      if (cVar3 == -3) {
        *(void*)(arg1 + 0x44) = 2;
        return;
      }
      if (cVar3 == -1) {
        *(void*)(arg1 + 0x44) = 1;
        return;
      }
    }
  }
  else if (cVar3 < 'H') {
    if (cVar3 < '$') {
      if (cVar3 == '\x01') {
        *(void*)(arg1 + 0x44) = 0xb;
        return;
      }
      if (cVar3 == '\x10') {
        *(void*)(arg1 + 0x44) = 0xe;
        return;
      }
      if (cVar3 == '\x11') {
        *(void*)(arg1 + 0x44) = 6;
        return;
      }
    }
    else {
      switch(uVar4 - 0x24 & 0xff) {
      case 0:
        *(void*)(arg1 + 0x44) = 0xf;
        return;
      case 1:
        *(void*)(arg1 + 0x44) = 9;
        return;
      case 2:
        *(void*)(arg1 + 0x44) = 10;
        return;
      case 3:
        *(void*)(arg1 + 0x44) = 4;
        return;
      }
    }
  }
  else if (cVar3 < 'n') {
    if (cVar3 == 'H') {
      *(void*)(arg1 + 0x44) = 0xd;
      return;
    }
    if (cVar3 == 'l') {
      *(void*)(arg1 + 0x44) = 7;
      return;
    }
  }
  else {
    if (cVar3 == 'n') {
      *(void*)(arg1 + 0x44) = 3;
      return;
    }
    if (cVar3 == '}') {
      *(void*)(arg1 + 0x44) = 0x1a;
      return;
    }
  }
  if (cVar3 == '\x7f') {
    *(void*)(arg1 + 0x44) = 0x1b;
  }
  else {
    *(void*)(arg1 + 0x44) = 0;
  }
  return;
}

