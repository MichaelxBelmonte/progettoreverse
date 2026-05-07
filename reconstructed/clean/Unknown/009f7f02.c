// Function: FUN_009f7f02
// Address: 009f7f02
// Size: 597 bytes
// Class: Unknown

void FUN_009f7f02(void)

{
  byte bVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  byte *arg1;
  uint64_t uVar4;
  uint uVar5;
  bool bVar6;
  
  bVar1 = *arg1;
  bVar6 = (bVar1 & 1) == 0;
  uVar4 = *(uint64_t *)(arg1 + 8);
  uVar2 = (uint64_t)(bVar1 >> 1);
  if (!bVar6) {
    uVar2 = uVar4;
  }
  if (uVar2 != 0) {
    uVar5 = 1;
    uVar2 = 0;
    do {
      uVar3 = (uint64_t)(bVar1 >> 1);
      if (!bVar6) {
        uVar3 = uVar4;
      }
      if (uVar5 == 1) {
        if (uVar3 - 1 == uVar2) {
          FUN_009f818a();
        }
        else {
          FUN_009f818a();
        }
      }
      else if (uVar3 - 1 == uVar2) {
        FUN_009f818a();
      }
      else {
        FUN_009f818a();
      }
      FUN_009f8316();
      FUN_009f8316();
      uVar2 = (uint64_t)uVar5;
      bVar1 = *arg1;
      bVar6 = (bVar1 & 1) == 0;
      uVar4 = *(uint64_t *)(arg1 + 8);
      uVar3 = (uint64_t)(bVar1 >> 1);
      if (!bVar6) {
        uVar3 = uVar4;
      }
      uVar5 = uVar5 + 1;
    } while (uVar2 < uVar3);
  }
  return;
}

