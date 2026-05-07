// Function: FUN_00ef667c
// Address: 00ef667c
// Size: 1333 bytes
// Class: Unknown

uint64_t FUN_00ef667c(uint64_t param_1,int64_t param_2,size_t param_3,int64_t param_4)

{
  int iVar1;
  int64_t lVar2;
  int64_t lVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  void *pvVar7;
  int64_t lVar8;
  uint64_t uVar9;
  uint uVar10;
  uint64_t uVar11;
  void *pvVar12;
  void *pvVar13;
  int64_t this_ptr;
  size_t sVar14;
  int64_t lVar15;
  int64_t local_res8;
  void *local_res10;
  uint32_t local_res18;
  
  if (param_4 == 0) {
    uVar6 = FUN_00efa099(param_2,local_res10,0,local_res18);
joined_r0x00ef6768:
    if (0xffffffffffffff88 < uVar6) {
      return uVar6;
    }
    uVar6 = FUN_00efd2e4(this_ptr + 0x290,this_ptr + 0x3f0,this_ptr + 0xe0);
    if (uVar6 < 0xffffffffffffff89) {
      *(int *)(this_ptr + 0x280) = (int)uVar6;
      *(int64_t *)(this_ptr + 0x288) = param_2;
      return 0;
    }
    return uVar6;
  }
  param_2 = *(int64_t *)(param_4 + 8);
  if (((param_2 == 0) ||
      (((((void *)0x1ffff < local_res10 && (local_res10 != (void *)0xffffffffffffffff)) &&
        ((void *)(param_2 * 6) <= local_res10)) && (*(int *)(&g_000017b4 + param_4) != 0)))) ||
     (iVar1 = *(int *)(local_res8 + 0x44), iVar1 == 3)) {
    uVar6 = FUN_00efa099(param_2,local_res10,0,local_res18);
    goto joined_r0x00ef6768;
  }
  if (*(int *)(param_4 + 0xf4) != 0) {
LAB_00ef67dc:
    _memcpy(local_res10,section_000000b8.segname + 8,param_3);
    FUN_00ef423d(1,param_2);
    pvVar12 = (void *)0x0;
    sVar14 = 0;
    uVar6 = FUN_00efa099(0,local_res10,0,local_res18);
    if (0xffffffffffffff88 < uVar6) {
      return uVar6;
    }
    uVar6 = *(int64_t *)(param_4 + 0x68) - *(int64_t *)(param_4 + 0x70);
    uVar10 = (uint)uVar6;
    if (*(uint *)(param_4 + 0x80) != uVar10) {
      *(int64_t *)(this_ptr + 0xd70) = param_4 + 0x68;
      pvVar12 = (void *)(uint64_t)*(uint *)(this_ptr + 0xc90);
      if (*(uint *)(this_ptr + 0xc90) < uVar10) {
        *(uint64_t *)(this_ptr + 0xc78) = (uVar6 & 0xffffffff) + *(int64_t *)(this_ptr + 0xc80);
        *(uint *)(this_ptr + 0xc94) = uVar10;
        *(uint *)(this_ptr + 0xc90) = uVar10;
        pvVar12 = (void *)(uVar6 & 0xffffffff);
      }
      *(int *)(this_ptr + 0xca0) = (int)pvVar12;
    }
    *(void*)(this_ptr + 0x280) = *(void*)(&g_000017b0 + param_4);
    uVar9 = *(void*)(param_4 + 8);
    goto LAB_00ef6b7e;
  }
  if ((local_res10 == (void *)0xffffffffffffffff) ||
     (local_res10 <= *(void **)(&g_023e29d0 + (uint64_t)*(uint *)(param_4 + 0x180) * 8))) {
    if (iVar1 != 2) goto LAB_00ef693b;
  }
  else if (iVar1 == 1) {
LAB_00ef693b:
    if (*(int *)(local_res8 + 0x30) == 0) goto LAB_00ef67dc;
  }
  _memcpy(local_res10,section_000000b8.segname + 8,param_3);
  uVar11 = 0;
  uVar6 = FUN_00efa099(0,local_res10,1,local_res18,*(void*)(param_4 + 0x17c));
  if (0xffffffffffffff88 < uVar6) {
    return uVar6;
  }
  *(void*)(this_ptr + 0x2b0) = *(void*)(this_ptr + 0x2a0);
  iVar1 = *(int *)(param_4 + 0x180);
  if (iVar1 == 1) {
LAB_00ef69df:
    lVar15 = 0;
  }
  else {
    uVar10 = iVar1 - 3;
    uVar11 = (uint64_t)uVar10;
    if ((uVar10 < 3) && (*(int *)(&g_000017b8 + param_4) == 1)) goto LAB_00ef69df;
    uVar11 = (uint64_t)CONCAT31((int3)(uVar10 >> 8),*(byte *)(param_4 + 0x16c));
    lVar15 = 1L << (*(byte *)(param_4 + 0x16c) & 0x3f);
  }
  pvVar12 = (void *)CONCAT71((int7)(uVar11 >> 8),*(byte *)(param_4 + 0x170));
  pvVar13 = (void *)(1L << (*(byte *)(param_4 + 0x170) & 0x3f));
  lVar2 = *(int64_t *)(this_ptr + 0xce8);
  lVar3 = *(int64_t *)(param_4 + 0xd8);
  sVar14 = (size_t)param_4;
  if (iVar1 - 1U < 2) {
    pvVar7 = (void *)0x0;
    do {
      uVar10 = *(uint *)(lVar3 + (int64_t)pvVar7 * 4) >> 8;
      pvVar12 = (void *)(uint64_t)uVar10;
      *(uint *)(lVar2 + (int64_t)pvVar7 * 4) = uVar10;
      pvVar7 = (void *)((int64_t)pvVar7 + 1);
    } while (pvVar13 != pvVar7);
  }
  else {
    _memcpy(pvVar12,(void *)((int64_t)pvVar13 * 4),sVar14);
  }
  if ((*(int *)(this_ptr + 0xfc) != 1) &&
     ((2 < *(int *)(this_ptr + 0xfc) - 3U || (*(int *)(this_ptr + 0x170) != 1)))) {
    lVar2 = *(int64_t *)(this_ptr + 0xcf8);
    lVar3 = *(int64_t *)(param_4 + 0xe8);
    if (*(int *)(param_4 + 0x180) - 1U < 2) {
      if (lVar15 != 0) {
        lVar8 = 0;
        do {
          uVar10 = *(uint *)(lVar3 + lVar8 * 4) >> 8;
          pvVar12 = (void *)(uint64_t)uVar10;
          *(uint *)(lVar2 + lVar8 * 4) = uVar10;
          lVar8 = lVar8 + 1;
        } while (lVar15 != lVar8);
      }
    }
    else {
      _memcpy(pvVar12,(void *)(lVar15 << 2),sVar14);
    }
  }
  if ((*(int *)(param_4 + 0x180) - 3U < 3) && (*(int *)(&g_000017b8 + param_4) == 1)) {
    _memcpy(pvVar12,pvVar13,sVar14);
    *(void*)(this_ptr + 0xcd8) = *(void*)(param_4 + 200);
  }
  pvVar12 = (void *)(uint64_t)*(uint *)(this_ptr + 0xca8);
  lVar15 = param_4;
  ___bzero();
  sVar14 = (size_t)lVar15;
  if (*(uint64_t *)(this_ptr + 0x2b0) < *(uint64_t *)(this_ptr + 0x2a8)) {
    *(uint64_t *)(this_ptr + 0x2b0) = *(uint64_t *)(this_ptr + 0x2a8);
  }
  *(void*)(this_ptr + 0xc98) = *(void*)(param_4 + 0x88);
  uVar9 = *(void*)(param_4 + 0x68);
  uVar4 = *(void*)(param_4 + 0x70);
  uVar5 = *(void*)(param_4 + 0x80);
  *(void*)(this_ptr + 0xc88) = *(void*)(param_4 + 0x78);
  *(void*)(this_ptr + 0xc90) = uVar5;
  *(void*)(this_ptr + 0xc78) = uVar9;
  *(void*)(this_ptr + 0xc80) = uVar4;
  *(void*)(this_ptr + 0xca4) = *(void*)(param_4 + 0x94);
  *(void*)(this_ptr + 0xca0) = *(void*)(param_4 + 0x90);
  *(void*)(this_ptr + 0x280) = *(void*)(&g_000017b0 + param_4);
  uVar9 = *(void*)(param_4 + 8);
LAB_00ef6b7e:
  *(void*)(this_ptr + 0x288) = uVar9;
  _memcpy(pvVar12,&g_00001600,sVar14);
  return 0;
}

