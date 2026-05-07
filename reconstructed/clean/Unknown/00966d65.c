// Function: FUN_00966d65
// Address: 00966d65
// Size: 545 bytes
// Class: Unknown

uint FUN_00966d65(void)

{
  int iVar1;
  int64_t lVar2;
  uint64_t uVar3;
  int64_t lVar4;
  byte bVar5;
  uint uVar6;
  int64_t arg1;
  int64_t this_ptr;
  uint uVar7;
  uint64_t local_48;
  uint64_t local_40;
  int64_t local_38;
  
  local_38 = *(int64_t *)PTR____stack_chk_guard_024a9898;
  iVar1 = *(int *)(this_ptr + 8);
  uVar6 = 0;
  switch(iVar1) {
  case 0:
    FUN_00967000();
    break;
  case 1:
    lVar2 = 0;
    do {
      *(byte *)(arg1 + lVar2) =
           *(byte *)(arg1 + lVar2) ^ *(byte *)(this_ptr + 0x1ec + lVar2);
      lVar2 = lVar2 + 1;
    } while (lVar2 != 0x10);
    FUN_00967000();
    uVar6 = 0;
    lVar2 = 0;
    do {
      *(void*)(this_ptr + 0x1ec + lVar2) = *(void*)(arg1 + lVar2);
      lVar2 = lVar2 + 1;
    } while (lVar2 != 0x10);
    break;
  case 2:
  case 3:
  case 5:
    uVar7 = iVar1 - 1;
    uVar3 = 0;
    uVar6 = 0;
    do {
      uVar6 = (int)*(char *)(this_ptr + 0x1ec + uVar3) | uVar6 << 8;
      uVar3 = uVar3 + 1;
    } while (uVar7 != uVar3);
    local_48 = *(void*)(this_ptr + 0x1ec);
    local_40 = *(void*)(this_ptr + 500);
    if (iVar1 < 0x11) {
      lVar2 = (int64_t)(int)uVar7 + -1;
      lVar4 = 0;
      do {
        *(void*)(this_ptr + 0x1ec + lVar4) = *(void*)(this_ptr + 0x1ed + lVar2);
        lVar2 = lVar2 + 1;
        lVar4 = lVar4 + 1;
      } while (lVar2 < 0xf);
    }
    FUN_00967000();
    uVar3 = 0;
    do {
      bVar5 = *(byte *)(arg1 + uVar3) ^ *(byte *)((int64_t)&local_48 + uVar3);
      *(byte *)(arg1 + uVar3) = bVar5;
      *(byte *)(this_ptr + 0x1ec + (int64_t)((0x11 - iVar1) + (int)uVar3)) = bVar5;
      uVar3 = uVar3 + 1;
    } while (uVar7 != uVar3);
    break;
  case 10:
  case 0xb:
  case 0xd:
    uVar7 = iVar1 - 9;
    uVar3 = 0;
    uVar6 = 0;
    do {
      uVar6 = (int)*(char *)(this_ptr + 0x1ec + uVar3) | uVar6 << 8;
      uVar3 = uVar3 + 1;
    } while (uVar7 != uVar3);
    local_48 = *(void*)(this_ptr + 0x1ec);
    local_40 = *(void*)(this_ptr + 500);
    if (iVar1 < 0x19) {
      lVar2 = (int64_t)(int)uVar7 + -1;
      lVar4 = 0;
      do {
        *(void*)(this_ptr + 0x1ec + lVar4) = *(void*)(this_ptr + 0x1ed + lVar2);
        lVar2 = lVar2 + 1;
        lVar4 = lVar4 + 1;
      } while (lVar2 < 0xf);
    }
    FUN_00967000();
    uVar3 = 0;
    do {
      bVar5 = *(byte *)(arg1 + uVar3) ^ *(byte *)((int64_t)&local_48 + uVar3);
      *(byte *)(arg1 + uVar3) = bVar5;
      lVar2 = (int64_t)((0x19 - iVar1) + (int)uVar3);
      *(byte *)(this_ptr + 0x1ec + lVar2) = bVar5 ^ *(byte *)((int64_t)&local_48 + lVar2);
      uVar3 = uVar3 + 1;
    } while (uVar7 != uVar3);
    break;
  case 0xe:
  case 0xf:
  case 0x11:
  case 0x15:
  case 0x1d:
    FUN_00967000();
    uVar6 = 0;
    uVar3 = 0;
    do {
      *(byte *)(arg1 + uVar3) =
           *(byte *)(arg1 + uVar3) ^ *(byte *)(this_ptr + 0x1ec + uVar3);
      uVar3 = uVar3 + 1;
    } while (iVar1 - 0xd != uVar3);
  }
  if (*(int64_t *)PTR____stack_chk_guard_024a9898 == local_38) {
    return uVar6;
  }
                      ___stack_chk_fail();
}

