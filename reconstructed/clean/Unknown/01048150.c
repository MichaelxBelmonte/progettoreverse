// Function: FUN_01048150
// Address: 01048150
// Size: 583 bytes
// Class: Unknown

void FUN_01048150(uint64_t param_1,int param_2,byte *param_3,int param_4)

{
  uint32_t uVar1;
  uint32_t uVar2;
  uint32_t uVar3;
  uint64_t uVar4;
  byte bVar5;
  byte bVar6;
  int iVar7;
  int64_t lVar8;
  byte *arg1;
  byte *this_ptr;
  byte bVar9;
  code *local_res8;
  uint32_t local_68;
  uint32_t uStack_64;
  uint32_t uStack_60;
  uint32_t uStack_5c;
  byte local_58 [32];
  int64_t local_38;
  
  local_38 = *(int64_t *)PTR____stack_chk_guard_024a9898;
  local_68 = *(void*)param_3;
  uStack_64 = *(void*)(param_3 + 4);
  uStack_60 = *(void*)(param_3 + 8);
  uStack_5c = *(void*)(param_3 + 0xc);
  (*local_res8)(local_68,param_1);
  bVar5 = *param_3 ^ *this_ptr;
  local_58[0] = *this_ptr;
  if (param_4 != 0) {
    local_58[0] = bVar5;
  }
  iVar7 = param_2 + 7;
  if (-1 < param_2) {
    iVar7 = param_2;
  }
  *arg1 = bVar5;
  if (param_2 % 8 == 0) {
    uVar4 = (uint64_t)(uint)(iVar7 >> 3);
    uVar1 = *(void*)((int64_t)&uStack_64 + uVar4);
    uVar2 = *(void*)((int64_t)&uStack_60 + uVar4);
    uVar3 = *(void*)(local_58 + (uVar4 - 4));
    *(void*)param_3 = *(void*)((int64_t)&local_68 + uVar4);
    *(void*)(param_3 + 4) = uVar1;
    *(void*)(param_3 + 8) = uVar2;
    *(void*)(param_3 + 0xc) = uVar3;
    lVar8 = *(int64_t *)PTR____stack_chk_guard_024a9898;
  }
  else {
    lVar8 = (int64_t)(iVar7 >> 3);
    bVar6 = (byte)(param_2 % 8);
    bVar5 = *(byte *)((int64_t)&local_68 + lVar8 + 1);
    bVar9 = 8 - bVar6;
    *param_3 = bVar5 >> (bVar9 & 0x1f) | *(char *)((int64_t)&local_68 + lVar8) << (bVar6 & 0x1f);
    param_3[1] = *(byte *)((int64_t)&local_68 + lVar8 + 2) >> (bVar9 & 0x1f) |
                 bVar5 << (bVar6 & 0x1f);
    param_3[2] = *(byte *)((int64_t)&local_68 + lVar8 + 3) >> (bVar9 & 0x1f) |
                 *(char *)((int64_t)&local_68 + lVar8 + 2) << (bVar6 & 0x1f);
    param_3[3] = *(byte *)((int64_t)&uStack_64 + lVar8) >> (bVar9 & 0x1f) |
                 *(char *)((int64_t)&local_68 + lVar8 + 3) << (bVar6 & 0x1f);
    param_3[4] = *(byte *)((int64_t)&uStack_64 + lVar8 + 1) >> (bVar9 & 0x1f) |
                 *(char *)((int64_t)&uStack_64 + lVar8) << (bVar6 & 0x1f);
    param_3[5] = *(byte *)((int64_t)&uStack_64 + lVar8 + 2) >> (bVar9 & 0x1f) |
                 *(char *)((int64_t)&uStack_64 + lVar8 + 1) << (bVar6 & 0x1f);
    param_3[6] = *(byte *)((int64_t)&uStack_64 + lVar8 + 3) >> (bVar9 & 0x1f) |
                 *(char *)((int64_t)&uStack_64 + lVar8 + 2) << (bVar6 & 0x1f);
    param_3[7] = *(byte *)((int64_t)&uStack_60 + lVar8) >> (bVar9 & 0x1f) |
                 *(char *)((int64_t)&uStack_64 + lVar8 + 3) << (bVar6 & 0x1f);
    param_3[8] = *(byte *)((int64_t)&uStack_60 + lVar8 + 1) >> (bVar9 & 0x1f) |
                 *(char *)((int64_t)&uStack_60 + lVar8) << (bVar6 & 0x1f);
    param_3[9] = *(byte *)((int64_t)&uStack_60 + lVar8 + 2) >> (bVar9 & 0x1f) |
                 *(char *)((int64_t)&uStack_60 + lVar8 + 1) << (bVar6 & 0x1f);
    param_3[10] = *(byte *)((int64_t)&uStack_60 + lVar8 + 3) >> (bVar9 & 0x1f) |
                  *(char *)((int64_t)&uStack_60 + lVar8 + 2) << (bVar6 & 0x1f);
    param_3[0xb] = local_58[lVar8 + -4] >> (bVar9 & 0x1f) |
                   *(char *)((int64_t)&uStack_60 + lVar8 + 3) << (bVar6 & 0x1f);
    param_3[0xc] = local_58[lVar8 + -3] >> (bVar9 & 0x1f) | local_58[lVar8 + -4] << (bVar6 & 0x1f);
    param_3[0xd] = local_58[lVar8 + -2] >> (bVar9 & 0x1f) | local_58[lVar8 + -3] << (bVar6 & 0x1f);
    param_3[0xe] = local_58[lVar8 + -1] >> (bVar9 & 0x1f) | local_58[lVar8 + -2] << (bVar6 & 0x1f);
    param_3[0xf] = local_58[lVar8] >> (bVar9 & 0x1f) | local_58[lVar8 + -1] << (bVar6 & 0x1f);
    lVar8 = *(int64_t *)PTR____stack_chk_guard_024a9898;
  }
  if (lVar8 == local_38) {
    return;
  }
                      ___stack_chk_fail();
}

