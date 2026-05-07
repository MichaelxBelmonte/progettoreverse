// Function: FUN_009cc4fb
// Address: 009cc4fb
// Size: 575 bytes
// Class: Unknown
// String references:
//   "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/NSt3__119basic_ostringstreamIcNS_11...

int64_t FUN_009cc4fb(void)

{
  uint64_t uVar1;
  uint64_t arg1;
  uint64_t uVar2;
  int64_t this_ptr;
  uint64_t uVar3;
  
  uVar1 = (arg1 / 3) * 3;
  uVar2 = arg1 % 3;
  if (uVar1 != 0) {
    uVar3 = 0;
    do {
      FUN_009ad920("ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/NSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE"
                   ,1);
      FUN_009ad920();
      FUN_009ad920();
      FUN_009ad920();
      uVar3 = uVar3 + 3;
    } while (uVar3 < uVar1);
  }
  if (uVar2 == 1) {
    FUN_009ad920();
    FUN_009ad920();
    FUN_009ad920();
  }
  else {
    if (uVar2 != 2) goto LAB_009cc717;
    FUN_009ad920(*(byte *)(this_ptr + 1 + uVar1) >> 4,1);
    FUN_009ad920();
    FUN_009ad920();
  }
  FUN_009ad920();
LAB_009cc717:
  return (arg1 / 3) * 4 + (uint64_t)(uVar2 != 0) * 4;
}

