// Function: FUN_009a86b0
// Address: 009a86b0
// Size: 562 bytes
// Class: Unknown

uint32_t FUN_009a86b0(void)

{
  int64_t lVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int64_t *this_ptr;
  uint32_t local_38;
  
  lVar1 = *this_ptr;
  if (((lVar1 == -0x8000000000000000) || (lVar1 == 0x7ffffffffffffffe)) ||
     (lVar1 == 0x7fffffffffffffff)) {
    FUN_0097f728();
  }
  else {
    iVar3 = (int)(lVar1 >> 0x3f);
    iVar2 = (int)(lVar1 / 86400000000) + iVar3;
    uVar4 = (iVar2 - iVar3) * 4 + 0x1f4b0U | 3;
    FUN_009a81f8((uint64_t)uVar4 / 0x23ab1,
                 (uint64_t)
                 ((((iVar2 + 0x7d2c) - iVar3) - ((uVar4 / 0x23ab1) * 0x23ab1 >> 2)) * 4 | 3) / 0x5b5
                );
    FUN_009a81f8();
    FUN_0097e070();
    FUN_00997550();
    local_38 = 0x221050;
  }
  return local_38;
}

