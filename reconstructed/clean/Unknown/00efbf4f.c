// Function: FUN_00efbf4f
// Address: 00efbf4f
// Size: 1138 bytes
// Class: Unknown

uint64_t FUN_00efbf4f(uint32_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t uVar1;
  void *pvVar2;
  uint64_t uVar3;
  uint uVar4;
  uint64_t in_RCX;
  int64_t lVar5;
  uint uVar6;
  void*arg1;
  int64_t lVar7;
  int64_t this_ptr;
  int64_t lVar8;
  uint *puVar9;
  size_t sVar10;
  void*puVar11;
  int64_t lVar12;
  uint32_t extraout_XMM0_Da;
  
  if (param_2 < 7) {
    if (*(uint *)(this_ptr + 0xfc) < 7) {
      _ZSTD_ldm_skipSequences(in_RCX,*(void*)(this_ptr + 0xf4));
    }
    else {
      _ZSTD_ldm_skipRawSeqStoreBytes();
    }
    return 1;
  }
  *(void*)(this_ptr + 0x3b8) = *(void*)(this_ptr + 0x3b0);
  *(void*)(this_ptr + 0x3a8) = *(void*)(this_ptr + 0x3a0);
  *(void*)(this_ptr + 1000) = 0;
  lVar7 = *(int64_t *)(this_ptr + 0xc68);
  *(int64_t *)(this_ptr + 0xd60) = lVar7;
  *(void*)(this_ptr + 0xd68) = *(void*)(this_ptr + 0x128);
  uVar4 = (int)arg1 - *(int *)(this_ptr + 0xc80);
  if (*(int *)(this_ptr + 0xca4) + 0x180U < uVar4) {
    uVar6 = (uVar4 - *(int *)(this_ptr + 0xca4)) - 0x180;
    if (0xbf < uVar6) {
      uVar6 = 0xc0;
    }
    *(uint *)(this_ptr + 0xca4) = uVar4 - uVar6;
  }
  lVar12 = 1;
  if (*(uint *)(this_ptr + 0xc90) <= *(uint *)(this_ptr + 0xc94)) {
    if (*(int64_t *)(this_ptr + 0xd70) == 0) {
      lVar12 = 0;
    }
    else {
      lVar12 = 3 - (uint64_t)(*(int *)(*(int64_t *)(this_ptr + 0xd70) + 0x8c) == 0);
    }
  }
  lVar8 = *(int64_t *)(this_ptr + 0xc70);
  lVar5 = 0;
  do {
    *(void*)(&g_000015f0 + lVar5 * 4 + lVar8) =
         *(void*)(&g_000015f0 + lVar5 * 4 + lVar7);
    lVar5 = lVar5 + 1;
  } while (lVar5 != 3);
  if (*(uint64_t *)(this_ptr + 0xc48) < *(uint64_t *)(this_ptr + 0xc58)) {
    if (*(int *)(this_ptr + 0x198) != 0) {
      return 0xffffffffffffffd7;
    }
    sVar10 = *(size_t *)(this_ptr + 0x170);
  }
  else {
    if (*(int *)(this_ptr + 0x140) != 1) {
      if (*(int *)(this_ptr + 0x198) == 0) {
        uVar4 = *(int *)(this_ptr + 0xfc) - 3;
        puVar11 = (void*)(&g_02593690 + (uint64_t)uVar4 * 8 + lVar12 * 0x18);
        if (*(int *)(this_ptr + 0x170) != 1) {
          puVar11 = (void*)
                    (&g_02593550 + (int64_t)*(int *)(this_ptr + 0xfc) * 8 + lVar12 * 0x50);
        }
        if (2 < uVar4) {
          puVar11 = (void*)
                    (&g_02593550 + (int64_t)*(int *)(this_ptr + 0xfc) * 8 + lVar12 * 0x50);
        }
        *(void*)(this_ptr + 0xd98) = 0;
      }
      else {
        uVar1 = (**(code **)(&g_00001458 + this_ptr))
                          (param_1,*(void*)(&g_00001468 + this_ptr),param_2,0);
        uVar3 = 0xffffffffffffff96;
        param_1 = extraout_XMM0_Da;
        if (uVar1 - 1 < *(uint64_t *)(&g_00001468 + this_ptr)) {
          lVar7 = *(int64_t *)(&g_00001460 + this_ptr);
          lVar8 = (uVar1 - 1) * 0x10;
          if ((*(int *)(lVar7 + lVar8) != 0) || (*(int *)(lVar7 + 8 + lVar8) != 0)) {
            if (uVar1 == *(uint64_t *)(&g_00001468 + this_ptr)) goto LAB_00efc2cb;
            param_1 = 0;
            puVar11 = (void*)(lVar7 + uVar1 * 0x10);
            *puVar11 = 0;
            puVar11[1] = 0;
            uVar1 = uVar1 + 1;
          }
          uVar3 = uVar1;
          if (uVar3 < 0xffffffffffffff89) {
            if (uVar3 == 0) {
              lVar7 = 0;
              lVar12 = 0;
            }
            else {
              puVar9 = (uint *)(*(int64_t *)(&g_00001460 + this_ptr) + 8);
              lVar12 = 0;
              lVar7 = 0;
              uVar1 = uVar3;
              do {
                lVar12 = lVar12 + (uint64_t)puVar9[-1];
                lVar7 = lVar7 + (uint64_t)*puVar9;
                puVar9 = puVar9 + 4;
                uVar1 = uVar1 - 1;
              } while (uVar1 != 0);
            }
            if (param_2 < (uint64_t)(lVar7 + lVar12)) {
              return 0xffffffffffffff95;
            }
            uVar1 = _ZSTD_copySequencesToSeqStoreExplicitBlockDelim(uVar3);
            if (0xffffffffffffff88 < uVar1) {
              return uVar1;
            }
            *(void*)(this_ptr + 0xd98) = 0;
            return 0;
          }
        }
LAB_00efc2cb:
        if (*(int *)(this_ptr + 0x194) == 0) {
          return uVar3;
        }
        uVar4 = *(int *)(this_ptr + 0xfc) - 3;
        puVar11 = (void*)(&g_02593690 + (uint64_t)uVar4 * 8 + lVar12 * 0x18);
        if (*(int *)(this_ptr + 0x170) != 1) {
          puVar11 = (void*)
                    (&g_02593550 + (int64_t)*(int *)(this_ptr + 0xfc) * 8 + lVar12 * 0x50);
        }
        if (2 < uVar4) {
          puVar11 = (void*)
                    (&g_02593550 + (int64_t)*(int *)(this_ptr + 0xfc) * 8 + lVar12 * 0x50);
        }
        *(void*)(this_ptr + 0xd98) = 0;
        lVar8 = *(int64_t *)(this_ptr + 0xc70);
      }
      pvVar2 = (void *)(**puVar11)(param_1,&g_000015f0 + lVar8);
      sVar10 = (size_t)param_2;
      goto LAB_00efc341;
    }
    if (*(int *)(this_ptr + 0x198) != 0) {
      return 0xffffffffffffffd7;
    }
    uVar1 = _ZSTD_ldm_generateSequences
                      (0,this_ptr + 0x140,param_2,param_4,*(void*)(this_ptr + 0xc30),0,0,0,
                       *(void*)(this_ptr + 0xc38));
    if (0xffffffffffffff88 < uVar1) {
      return uVar1;
    }
    lVar8 = *(int64_t *)(this_ptr + 0xc70);
    sVar10 = *(size_t *)(this_ptr + 0x170);
  }
  arg1 = &g_000015f0 + lVar8;
  pvVar2 = (void *)_ZSTD_ldm_blockCompress(arg1,this_ptr + 0x3a0);
LAB_00efc341:
  _memcpy(arg1,pvVar2,sVar10);
  *(int64_t *)(this_ptr + 0x3b8) = *(int64_t *)(this_ptr + 0x3b8) + (int64_t)pvVar2;
  return 0;
}

