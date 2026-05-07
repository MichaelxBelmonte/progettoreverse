// Function: FUN_00c68b40
// Address: 00c68b40
// Size: 514 bytes
// Class: Unknown

uint64_t FUN_00c68b40(uint64_t param_1,uint64_t param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  uint64_t uVar3;
  int64_t this_ptr;
  uint64_t uVar4;
  
  uVar4 = (uint64_t)param_3;
  iVar1 = (int)param_1;
  uVar2 = *(uint *)(&g_0000205c + this_ptr);
  FUN_00c667a0(param_1,0xc);
  FUN_00c667a0();
  if (uVar2 != param_3) {
    FUN_00c667a0();
  }
  switch((int)*(short *)(this_ptr + 8) << 0x1e | (int)*(short *)(this_ptr + 8) - 0x10U >> 2) {
  case 0:
    if (param_3 * iVar1 != 0) {
      uVar2 = 0;
      do {
        FUN_00c667a0();
        FUN_00c667a0();
        uVar2 = uVar2 + iVar1;
      } while (uVar2 < param_3 * iVar1);
    }
    break;
  case 1:
    FUN_00c6d170(*(void*)(this_ptr + 0x28),*(void*)(this_ptr + 0x20),uVar4,0);
    if (param_3 != 0) {
      uVar3 = 0;
      do {
        FUN_00c667a0();
        FUN_00c667a0();
        uVar3 = uVar3 + 1;
      } while (uVar4 != uVar3);
    }
    break;
  case 2:
    FUN_00c6d2a0(*(void*)(this_ptr + 0x28),*(void*)(this_ptr + 0x20),uVar4,0);
    if (param_3 != 0) {
      uVar3 = 0;
      do {
        FUN_00c667a0();
        FUN_00c667a0();
        uVar3 = uVar3 + 1;
      } while (uVar4 != uVar3);
    }
    break;
  case 4:
    if (param_3 * iVar1 != 0) {
      uVar2 = 0;
      do {
        FUN_00c667a0();
        FUN_00c667a0();
        uVar2 = uVar2 + iVar1;
      } while (uVar2 < param_3 * iVar1);
    }
  }
  return 0;
}

