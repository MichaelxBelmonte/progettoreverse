// Function: FUN_00ca0840
// Address: 00ca0840
// Size: 546 bytes
// Class: GNDictionary

void FUN_00ca0840(void)

{
  int64_t lVar1;
  char cVar2;
  int iVar3;
  int64_t *arg1;
  int64_t this_ptr;
  uint64_t local_c0;
  uint8_t local_b8;
  
  if ((*arg1 != 0) || (cVar2 = FUN_00d24990(), cVar2 != '\0')) {
    if (*(int64_t *)(this_ptr + 0x20) == 0) {
      iVar3 = FUN_00d237a0();
    }
    else {
      FUN_019a54a0();
      if ((local_b8 != '\0') && (local_c0 != 0)) {
        FUN_00d50b20();
      }
      if (local_c0 == 0) {
        iVar3 = -1;
      }
      else {
        iVar3 = FUN_00d237a0();
      }
      FUN_019b43b0();
    }
    if (iVar3 == -1) {
      FUN_00d21140();
      FUN_00d21140();
    }
    else {
      lVar1 = *(int64_t *)(*(int64_t *)(this_ptr + 0x18) + 0x10);
      if (*(int64_t *)(lVar1 + (int64_t)iVar3 * 8) != *arg1) {
        FUN_00d233f0(lVar1,iVar3);
      }
    }
  }
  return;
}

