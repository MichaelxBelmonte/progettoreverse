// Function: FUN_00ef7cdb
// Address: 00ef7cdb
// Size: 572 bytes
// Class: Unknown

uint64_t FUN_00ef7cdb(uint64_t param_1,uint64_t param_2,uint64_t param_3)

{
  int iVar1;
  uint64_t uVar2;
  uint uVar3;
  int64_t arg1;
  
  if (arg1 != 0) {
    if ((((0x1ffff < param_3) && (param_3 != 0xffffffffffffffff)) &&
        ((uint64_t)(*(int64_t *)(arg1 + 8) * 6) <= param_3)) &&
       (*(int *)(&g_000017b4 + arg1) != 0)) {
      FUN_00ef4448(*(int64_t *)(arg1 + 8),param_3,3);
    }
    if (param_3 != 0xffffffffffffffff) {
      uVar3 = 0x80000;
      if (param_3 < 0x80000) {
        uVar3 = (uint)param_3;
      }
      if (1 < uVar3) {
        iVar1 = 0x1f;
        if (uVar3 - 1 != 0) {
          for (; uVar3 - 1 >> iVar1 == 0; iVar1 = iVar1 + -1) {
          }
        }
      }
    }
    uVar2 = FUN_00ef667c(0,0,0);
    return uVar2;
  }
  return 0xffffffffffffffe0;
}

