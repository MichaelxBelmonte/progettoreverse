// Function: FUN_01de5660
// Address: 01de5660
// Size: 577 bytes
// Class: GNDictionary
// String references:
//   "%@%I"

void FUN_01de5660(void)

{
  uint uVar1;
  int64_t lVar2;
  int64_t this_ptr;
  uint64_t uVar3;
  int64_t local_98;
  char local_90;
  int64_t local_88;
  char local_80;
  int64_t local_58;
  char local_50;
  
  uVar1 = *(uint *)(*(int64_t *)(this_ptr + 0x160) + 0xc);
  if (0 < (int)uVar1) {
    uVar3 = 1;
    lVar2 = **(int64_t **)(*(int64_t *)(this_ptr + 0x160) + 0x10);
    while( true ) {
      if (lVar2 != 0) {
        FUN_00d50b00();
      }
      FUN_00d4efa0();
      FUN_00c82bb0();
      if (local_98 != 0) {
        FUN_00d50b00();
      }
      FUN_00d8cb40();
      if (local_50 == '\0') {
        if (local_58 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_50 = '\0';
      }
      FUN_00e3f850();
      if (local_58 != 0) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if (local_98 != 0) {
        FUN_00d50b20();
      }
      if ((local_90 != '\0') && (local_98 != 0)) {
        FUN_00d50b20();
      }
      if ((local_80 != '\0') && (local_88 != 0)) {
        FUN_00d50b20();
      }
      (**(code **)(**(int64_t **)
                     (*(int64_t *)(*(int64_t *)(this_ptr + 0x160) + 0x10) + -8 + uVar3 * 8) +
                  0x370))();
      FUN_00e3faa0();
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      if (uVar1 == uVar3) break;
      uVar3 = uVar3 + 1;
      lVar2 = *(int64_t *)(*(int64_t *)(*(int64_t *)(this_ptr + 0x160) + 0x10) + -8 + uVar3 * 8)
      ;
    }
  }
  return;
}

