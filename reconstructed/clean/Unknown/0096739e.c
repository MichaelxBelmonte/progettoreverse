// Function: FUN_0096739e
// Address: 0096739e
// Size: 518 bytes
// Class: Unknown

uint FUN_0096739e(void)

{
  int iVar1;
  int64_t lVar2;
  uint64_t uVar3;
  int64_t lVar4;
  uint uVar5;
  uint *arg1;
  int64_t this_ptr;
  uint uVar6;
  uint64_t local_48;
  uint64_t uStack_40;
  
  iVar1 = *(int *)(this_ptr + 8);
  uVar5 = 0;
  switch(iVar1) {
  case 0:
    FUN_0096761c();
    break;
  case 1:
    lVar2 = 0;
    do {
      *(void*)((int64_t)&local_48 + lVar2) = *(void*)(this_ptr + 0x1ec + lVar2);
      *(void*)(this_ptr + 0x1ec + lVar2) = *(void*)((int64_t)arg1 + lVar2);
      lVar2 = lVar2 + 1;
    } while (lVar2 != 0x10);
    FUN_0096761c();
    *arg1 = *arg1 ^ (uint)local_48;
    arg1[1] = arg1[1] ^ local_48._4_4_;
    arg1[2] = arg1[2] ^ (uint)uStack_40;
    arg1[3] = arg1[3] ^ uStack_40._4_4_;
    uVar5 = 0;
    break;
  case 2:
  case 3:
  case 5:
    uVar6 = iVar1 - 1;
    uVar3 = 0;
    uVar5 = 0;
    do {
      uVar5 = (int)*(char *)(this_ptr + 0x1ec + uVar3) | uVar5 << 8;
      uVar3 = uVar3 + 1;
    } while (uVar6 != uVar3);
    local_48 = *(void*)(this_ptr + 0x1ec);
    uStack_40 = *(void*)(this_ptr + 500);
    if (iVar1 < 0x11) {
      lVar2 = (int64_t)(int)uVar6 + -1;
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
      *(void*)(this_ptr + 0x1ec + (int64_t)((0x11 - iVar1) + (int)uVar3)) =
           *(void*)((int64_t)arg1 + uVar3);
      *(byte *)((int64_t)arg1 + uVar3) =
           *(byte *)((int64_t)arg1 + uVar3) ^ *(byte *)((int64_t)&local_48 + uVar3);
      uVar3 = uVar3 + 1;
    } while (uVar6 != uVar3);
    break;
  case 10:
  case 0xb:
  case 0xd:
    uVar6 = iVar1 - 9;
    uVar3 = 0;
    uVar5 = 0;
    do {
      uVar5 = (int)*(char *)(this_ptr + 0x1ec + uVar3) | uVar5 << 8;
      uVar3 = uVar3 + 1;
    } while (uVar6 != uVar3);
    local_48 = *(void*)(this_ptr + 0x1ec);
    uStack_40 = *(void*)(this_ptr + 500);
    if (iVar1 < 0x19) {
      lVar2 = (int64_t)(int)uVar6 + -1;
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
      lVar2 = (int64_t)((0x19 - iVar1) + (int)uVar3);
      *(byte *)(this_ptr + 0x1ec + lVar2) =
           *(byte *)((int64_t)&local_48 + lVar2) ^ *(byte *)((int64_t)arg1 + uVar3);
      *(byte *)((int64_t)arg1 + uVar3) =
           *(byte *)((int64_t)arg1 + uVar3) ^ *(byte *)((int64_t)&local_48 + uVar3);
      uVar3 = uVar3 + 1;
    } while (uVar6 != uVar3);
    break;
  case 0xe:
  case 0xf:
  case 0x11:
  case 0x15:
  case 0x1d:
    FUN_00967000();
    uVar5 = 0;
    uVar3 = 0;
    do {
      *(byte *)((int64_t)arg1 + uVar3) =
           *(byte *)((int64_t)arg1 + uVar3) ^ *(byte *)(this_ptr + 0x1ec + uVar3);
      uVar3 = uVar3 + 1;
    } while (iVar1 - 0xd != uVar3);
  }
  return uVar5;
}

