// Function: FUN_009f0cbe
// Address: 009f0cbe
// Size: 807 bytes
// Class: Unknown

void FUN_009f0cbe(void)

{
  uint uVar1;
  void*arg1;
  int *this_ptr;
  uint uVar2;
  uint64_t uVar3;
  int64_t lVar4;
  
  uVar1 = this_ptr[1];
  uVar3 = (uint64_t)(((uVar1 & 0x70) == 0x70) + 1);
  uVar2 = *this_ptr + uVar1;
  lVar4 = uVar3 * 0x80;
  ___bzero();
  *(void*)((int64_t)this_ptr + (uint64_t)uVar1 + 8) = 0x80;
  *(char *)((int64_t)this_ptr + lVar4 + 7) = (char)uVar2 * '\b';
  *(char *)((int64_t)this_ptr + lVar4 + 6) = (char)(uVar2 >> 5);
  *(char *)((int64_t)this_ptr + lVar4 + 5) = (char)(uVar2 >> 0xd);
  *(char *)(this_ptr + uVar3 * 0x20 + 1) = (char)(uVar2 >> 0x15);
  FUN_009eea0c();
  arg1[7] = (char)this_ptr[0x42];
  arg1[6] = *(void*)((int64_t)this_ptr + 0x109);
  arg1[5] = *(void*)((int64_t)this_ptr + 0x10a);
  arg1[4] = *(void*)((int64_t)this_ptr + 0x10b);
  arg1[3] = (char)this_ptr[0x43];
  arg1[2] = *(void*)((int64_t)this_ptr + 0x10d);
  arg1[1] = *(void*)((int64_t)this_ptr + 0x10e);
  *arg1 = *(void*)((int64_t)this_ptr + 0x10f);
  arg1[0xf] = (char)this_ptr[0x44];
  arg1[0xe] = *(void*)((int64_t)this_ptr + 0x111);
  arg1[0xd] = *(void*)((int64_t)this_ptr + 0x112);
  arg1[0xc] = *(void*)((int64_t)this_ptr + 0x113);
  arg1[0xb] = (char)this_ptr[0x45];
  arg1[10] = *(void*)((int64_t)this_ptr + 0x115);
  arg1[9] = *(void*)((int64_t)this_ptr + 0x116);
  arg1[8] = *(void*)((int64_t)this_ptr + 0x117);
  arg1[0x17] = (char)this_ptr[0x46];
  arg1[0x16] = *(void*)((int64_t)this_ptr + 0x119);
  arg1[0x15] = *(void*)((int64_t)this_ptr + 0x11a);
  arg1[0x14] = *(void*)((int64_t)this_ptr + 0x11b);
  arg1[0x13] = (char)this_ptr[0x47];
  arg1[0x12] = *(void*)((int64_t)this_ptr + 0x11d);
  arg1[0x11] = *(void*)((int64_t)this_ptr + 0x11e);
  arg1[0x10] = *(void*)((int64_t)this_ptr + 0x11f);
  arg1[0x1f] = (char)this_ptr[0x48];
  arg1[0x1e] = *(void*)((int64_t)this_ptr + 0x121);
  arg1[0x1d] = *(void*)((int64_t)this_ptr + 0x122);
  arg1[0x1c] = *(void*)((int64_t)this_ptr + 0x123);
  arg1[0x1b] = (char)this_ptr[0x49];
  arg1[0x1a] = *(void*)((int64_t)this_ptr + 0x125);
  arg1[0x19] = *(void*)((int64_t)this_ptr + 0x126);
  arg1[0x18] = *(void*)((int64_t)this_ptr + 0x127);
  arg1[0x27] = (char)this_ptr[0x4a];
  arg1[0x26] = *(void*)((int64_t)this_ptr + 0x129);
  arg1[0x25] = *(void*)((int64_t)this_ptr + 0x12a);
  arg1[0x24] = *(void*)((int64_t)this_ptr + 299);
  arg1[0x23] = (char)this_ptr[0x4b];
  arg1[0x22] = *(void*)((int64_t)this_ptr + 0x12d);
  arg1[0x21] = *(void*)((int64_t)this_ptr + 0x12e);
  arg1[0x20] = *(void*)((int64_t)this_ptr + 0x12f);
  arg1[0x2f] = (char)this_ptr[0x4c];
  arg1[0x2e] = *(void*)((int64_t)this_ptr + 0x131);
  arg1[0x2d] = *(void*)((int64_t)this_ptr + 0x132);
  arg1[0x2c] = *(void*)((int64_t)this_ptr + 0x133);
  arg1[0x2b] = (char)this_ptr[0x4d];
  arg1[0x2a] = *(void*)((int64_t)this_ptr + 0x135);
  arg1[0x29] = *(void*)((int64_t)this_ptr + 0x136);
  arg1[0x28] = *(void*)((int64_t)this_ptr + 0x137);
  arg1[0x37] = (char)this_ptr[0x4e];
  arg1[0x36] = *(void*)((int64_t)this_ptr + 0x139);
  arg1[0x35] = *(void*)((int64_t)this_ptr + 0x13a);
  arg1[0x34] = *(void*)((int64_t)this_ptr + 0x13b);
  arg1[0x33] = (char)this_ptr[0x4f];
  arg1[0x32] = *(void*)((int64_t)this_ptr + 0x13d);
  arg1[0x31] = *(void*)((int64_t)this_ptr + 0x13e);
  arg1[0x30] = *(void*)((int64_t)this_ptr + 0x13f);
  arg1[0x3f] = (char)this_ptr[0x50];
  arg1[0x3e] = *(void*)((int64_t)this_ptr + 0x141);
  arg1[0x3d] = *(void*)((int64_t)this_ptr + 0x142);
  arg1[0x3c] = *(void*)((int64_t)this_ptr + 0x143);
  arg1[0x3b] = (char)this_ptr[0x51];
  arg1[0x3a] = *(void*)((int64_t)this_ptr + 0x145);
  arg1[0x39] = *(void*)((int64_t)this_ptr + 0x146);
  arg1[0x38] = *(void*)((int64_t)this_ptr + 0x147);
  return;
}

