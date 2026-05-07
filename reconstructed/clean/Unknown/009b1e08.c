// Function: FUN_009b1e08
// Address: 009b1e08
// Size: 505 bytes
// Class: Unknown

void FUN_009b1e08(uint64_t param_1,int64_t param_2)

{
  uint64_t *puVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t *plVar4;
  uint64_t uVar5;
  int64_t lVar6;
  uint64_t uVar7;
  int64_t *plVar8;
  int64_t arg1;
  int64_t this_ptr;
  uint64_t uVar9;
  
  uVar5 = *(uint64_t *)(*(int64_t *)(arg1 + -8) + 0x38);
  lVar3 = *(int64_t *)(this_ptr + -8);
  puVar1 = (uint64_t *)(lVar3 + 0x38);
  if (uVar5 < 2) {
    *(void*)(lVar3 + 0x38) = 0;
    *(uint64_t **)(lVar3 + 0x40) = puVar1;
    *(int64_t *)(*(int64_t *)(this_ptr + -8) + 0x48) = *(int64_t *)(this_ptr + -8) + 0x38;
  }
  else {
    *puVar1 = *puVar1 & 0xfffffffffffffffe | uVar5 & 1;
    lVar3 = FUN_0098e5d8();
    *(uint64_t *)(*(int64_t *)(this_ptr + -8) + 0x38) =
         *(uint64_t *)(*(int64_t *)(this_ptr + -8) + 0x38) & 1 | lVar3 + 0x38U;
    lVar3 = FUN_0098e5d8();
    *(int64_t *)(*(int64_t *)(this_ptr + -8) + 0x40) = lVar3 + 0x38;
    lVar3 = FUN_0098e5d8();
    *(int64_t *)(*(int64_t *)(this_ptr + -8) + 0x48) = lVar3 + 0x38;
    if (*(int64_t *)(param_2 + 0x28) != 0) {
      plVar8 = *(int64_t **)(param_2 + 0x20);
      plVar4 = plVar8 + *(int64_t *)(param_2 + 0x28) * 2;
      do {
        lVar3 = *plVar8;
        lVar2 = plVar8[1];
        puVar1 = (uint64_t *)(lVar2 + 0x38);
        uVar5 = (uint64_t)((uint)*(void*)(lVar3 + 0x38) & 1);
        uVar7 = *(uint64_t *)(lVar2 + 0x38) & 0xfffffffffffffffe | uVar5;
        *(uint64_t *)(lVar2 + 0x38) = uVar7;
        uVar9 = *(uint64_t *)(lVar3 + 0x38) & 0xfffffffffffffffe;
        if (uVar9 == 0) {
          *puVar1 = uVar5;
        }
        else {
          lVar6 = FUN_0098e5d8(uVar7,param_2);
          *puVar1 = (uint64_t)((uint)*puVar1 & 1) | lVar6 + 0x38U;
          if (*(int64_t *)(uVar9 + 8) == lVar3 + 0x38) {
            *(uint64_t **)(lVar6 + 0x40) = puVar1;
          }
          else if (*(int64_t *)(uVar9 + 0x10) == lVar3 + 0x38) {
            *(uint64_t **)(lVar6 + 0x48) = puVar1;
          }
        }
        if (*(int64_t *)(lVar3 + 0x40) == 0) {
          *(void*)(lVar2 + 0x40) = 0;
        }
        if (*(int64_t *)(lVar3 + 0x48) == 0) {
          *(void*)(lVar2 + 0x48) = 0;
        }
        plVar8 = plVar8 + 2;
      } while (plVar8 != plVar4);
    }
  }
  FUN_0098e628();
  return;
}

