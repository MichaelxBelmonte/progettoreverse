// Function: FUN_00f45540
// Address: 00f45540
// Size: 1634 bytes
// Class: Unknown

int FUN_00f45540(void)

{
  int iVar1;
  int64_t lVar2;
  bool bVar3;
  bool bVar4;
  int64_t lVar5;
  uint uVar6;
  uint uVar7;
  void *pvVar8;
  void *pvVar9;
  uint uVar10;
  uint64_t uVar11;
  void *pvVar12;
  size_t unaff_ESI;
  uint uVar13;
  int64_t *this_ptr;
  size_t sVar14;
  int64_t *plVar15;
  uint uVar16;
  
  lVar5 = *this_ptr;
  uVar7 = (uint)(this_ptr[3] - 5U);
  if ((uint64_t)*(uint *)(this_ptr + 10) < this_ptr[3] - 5U) {
    uVar7 = *(uint *)(this_ptr + 10);
  }
  iVar1 = *(int *)(lVar5 + 8);
  do {
    uVar6 = *(int *)((int64_t)this_ptr + 0x1734) + 0x2a >> 3;
    bVar3 = true;
    bVar4 = true;
    uVar10 = *(uint *)(lVar5 + 0x20) - uVar6;
    if (*(uint *)(lVar5 + 0x20) < uVar6) goto LAB_00f457ca;
    uVar16 = *(int *)((int64_t)this_ptr + 0xac) - (int)this_ptr[0x13];
    pvVar9 = (void *)(uint64_t)uVar16;
    uVar13 = *(uint *)(lVar5 + 8) + uVar16;
    uVar6 = 0xffff;
    if ((uint64_t)*(uint *)(lVar5 + 8) + (int64_t)pvVar9 < 0xffff) {
      uVar6 = uVar13;
    }
    if (uVar10 < uVar6) {
      uVar6 = uVar10;
    }
    if ((uVar6 < uVar7) &&
       (((bVar3 = bVar4, uVar6 == 0 && unaff_ESI != 4 || (unaff_ESI == 0)) || (uVar6 != uVar13))))
    goto LAB_00f457ca;
    bVar3 = uVar13 == uVar6;
    sVar14 = unaff_ESI;
    FUN_00f4b3c0(bVar3 && unaff_ESI == 4,0);
    *(char *)(this_ptr[5] + -4 + this_ptr[2]) = (char)uVar6;
    *(char *)(this_ptr[5] + -3 + this_ptr[2]) = (char)(uVar6 >> 8);
    *(char *)(this_ptr[5] + -2 + this_ptr[2]) = (char)~uVar6;
    pvVar8 = (void *)this_ptr[2];
    *(char *)(this_ptr[5] + -1 + (int64_t)pvVar8) = (char)(~uVar6 >> 8);
    lVar5 = *this_ptr;
    lVar2 = *(int64_t *)(lVar5 + 0x38);
    FUN_00f4b540();
    uVar10 = *(uint *)(lVar2 + 0x28);
    if (*(uint *)(lVar5 + 0x20) < *(uint *)(lVar2 + 0x28)) {
      uVar10 = *(uint *)(lVar5 + 0x20);
    }
    if (uVar10 != 0) {
      pvVar12 = (void *)(uint64_t)uVar10;
      _memcpy(pvVar8,pvVar12,sVar14);
      *(int64_t *)(lVar5 + 0x18) = *(int64_t *)(lVar5 + 0x18) + (int64_t)pvVar12;
      *(int64_t *)(lVar2 + 0x20) = *(int64_t *)(lVar2 + 0x20) + (int64_t)pvVar12;
      *(int64_t *)(lVar5 + 0x28) = *(int64_t *)(lVar5 + 0x28) + (int64_t)pvVar12;
      *(int *)(lVar5 + 0x20) = *(int *)(lVar5 + 0x20) - uVar10;
      plVar15 = (int64_t *)(lVar2 + 0x28);
      *plVar15 = *plVar15 - (int64_t)pvVar12;
      if (*plVar15 == 0) {
        *(void*)(lVar2 + 0x20) = *(void*)(lVar2 + 0x10);
      }
    }
    if (uVar16 != 0) {
      if (uVar6 < uVar16) {
        pvVar9 = (void *)(uint64_t)uVar6;
      }
      _memcpy(pvVar8,pvVar9,sVar14);
      lVar5 = *this_ptr;
      *(int64_t *)(lVar5 + 0x18) = *(int64_t *)(lVar5 + 0x18) + (int64_t)pvVar9;
      *(int *)(lVar5 + 0x20) = *(int *)(lVar5 + 0x20) - (int)pvVar9;
      *(int64_t *)(lVar5 + 0x28) = *(int64_t *)(lVar5 + 0x28) + (int64_t)pvVar9;
      this_ptr[0x13] = this_ptr[0x13] + (int64_t)pvVar9;
      uVar6 = uVar6 - (int)pvVar9;
    }
    if (uVar6 != 0) {
      pvVar8 = (void *)(uint64_t)uVar6;
      plVar15 = (int64_t *)*this_ptr;
      lVar5 = plVar15[3];
      uVar10 = *(uint *)(plVar15 + 1);
      pvVar9 = (void *)(uint64_t)uVar10;
      if (uVar6 < uVar10) {
        pvVar9 = pvVar8;
      }
      if ((int)pvVar9 != 0) {
        *(uint *)(plVar15 + 1) = uVar10 - (int)pvVar9;
        _memcpy(pvVar8,pvVar9,sVar14);
        if (*(int *)(plVar15[7] + 0x30) == 2) {
          lVar5 = FUN_00f43510();
LAB_00f4558a:
          plVar15[0xc] = lVar5;
        }
        else if (*(int *)(plVar15[7] + 0x30) == 1) {
          lVar5 = FUN_00f42bd0();
          goto LAB_00f4558a;
        }
        *plVar15 = *plVar15 + (int64_t)pvVar9;
        plVar15[2] = plVar15[2] + (int64_t)pvVar9;
        plVar15 = (int64_t *)*this_ptr;
        lVar5 = plVar15[3];
      }
      plVar15[3] = lVar5 + (int64_t)pvVar8;
      *(uint *)(plVar15 + 4) = (int)plVar15[4] - uVar6;
      plVar15[5] = plVar15[5] + (int64_t)pvVar8;
    }
    lVar5 = *this_ptr;
  } while (!bVar3 || unaff_ESI != 4);
  bVar3 = false;
LAB_00f457ca:
  uVar7 = iVar1 - *(int *)(lVar5 + 8);
  if (uVar7 == 0) {
    uVar6 = *(uint *)((int64_t)this_ptr + 0xac);
    uVar11 = (uint64_t)uVar6;
    if ((uint64_t)this_ptr[0x2e7] < uVar11) goto LAB_00f458fc;
  }
  else {
    uVar6 = *(uint *)(this_ptr + 10);
    if (uVar7 < uVar6) {
      pvVar9 = (void *)(this_ptr[0xd] - (uint64_t)*(uint *)((int64_t)this_ptr + 0xac));
      sVar14 = unaff_ESI;
      if (pvVar9 <= (void *)(uint64_t)uVar7) {
        uVar6 = *(uint *)((int64_t)this_ptr + 0xac) - uVar6;
        *(uint *)((int64_t)this_ptr + 0xac) = uVar6;
        _memcpy(pvVar9,(void *)(uint64_t)uVar6,unaff_ESI);
        if (*(uint *)(this_ptr + 0x2e5) < 2) {
          *(uint *)(this_ptr + 0x2e5) = *(uint *)(this_ptr + 0x2e5) + 1;
        }
        if (*(uint *)((int64_t)this_ptr + 0xac) < *(uint *)((int64_t)this_ptr + 0x172c)) {
          *(uint *)((int64_t)this_ptr + 0x172c) = *(uint *)((int64_t)this_ptr + 0xac);
        }
      }
      _memcpy(pvVar9,(void *)(uint64_t)uVar7,sVar14);
      uVar6 = *(int *)((int64_t)this_ptr + 0xac) + uVar7;
      *(uint *)((int64_t)this_ptr + 0xac) = uVar6;
      uVar10 = (int)this_ptr[10] - *(int *)((int64_t)this_ptr + 0x172c);
      if (uVar7 <= uVar10) {
        uVar10 = uVar7;
      }
      *(uint *)((int64_t)this_ptr + 0x172c) = uVar10 + *(int *)((int64_t)this_ptr + 0x172c);
    }
    else {
      *(void*)(this_ptr + 0x2e5) = 2;
      _memcpy((void *)(uint64_t)uVar7,(void *)(uint64_t)uVar6,unaff_ESI);
      uVar6 = *(uint *)(this_ptr + 10);
      *(uint *)((int64_t)this_ptr + 0xac) = uVar6;
      *(uint *)((int64_t)this_ptr + 0x172c) = uVar6;
    }
    uVar11 = (uint64_t)uVar6;
    this_ptr[0x13] = uVar11;
    if ((uint64_t)this_ptr[0x2e7] < uVar11) {
LAB_00f458fc:
      this_ptr[0x2e7] = uVar11;
    }
  }
  if (!bVar3) {
    return 3;
  }
  uVar7 = *(uint *)(*this_ptr + 8);
  pvVar9 = (void *)(uint64_t)uVar7;
  if (((unaff_ESI & 0xfffffffb) == 0) || (uVar7 != 0)) {
    uVar10 = (int)this_ptr[0xd] - uVar6;
    if (uVar10 < uVar7) {
      uVar7 = *(uint *)(this_ptr + 10);
      if ((int64_t)(uint64_t)uVar7 <= this_ptr[0x13]) {
        this_ptr[0x13] = this_ptr[0x13] - (uint64_t)uVar7;
        *(uint *)((int64_t)this_ptr + 0xac) = uVar6 - uVar7;
        _memcpy(pvVar9,(void *)(uint64_t)(uVar6 - uVar7),unaff_ESI);
        if (*(uint *)(this_ptr + 0x2e5) < 2) {
          *(uint *)(this_ptr + 0x2e5) = *(uint *)(this_ptr + 0x2e5) + 1;
        }
        uVar10 = uVar10 + (int)this_ptr[10];
        uVar6 = *(uint *)((int64_t)this_ptr + 0xac);
        if (uVar6 < *(uint *)((int64_t)this_ptr + 0x172c)) {
          *(uint *)((int64_t)this_ptr + 0x172c) = uVar6;
        }
      }
    }
  }
  else {
    if (this_ptr[0x13] == uVar11) {
      return 1;
    }
    uVar10 = (int)this_ptr[0xd] - uVar6;
  }
  plVar15 = (int64_t *)*this_ptr;
  uVar7 = *(uint *)(plVar15 + 1);
  if (uVar7 < uVar10) {
    uVar10 = uVar7;
  }
  if (uVar10 == 0) goto LAB_00f45a67;
  *(uint *)(plVar15 + 1) = uVar7 - uVar10;
  pvVar8 = (void *)(uint64_t)uVar10;
  _memcpy(pvVar9,pvVar8,unaff_ESI);
  if (*(int *)(plVar15[7] + 0x30) == 2) {
    lVar5 = FUN_00f43510();
LAB_00f45a25:
    plVar15[0xc] = lVar5;
  }
  else if (*(int *)(plVar15[7] + 0x30) == 1) {
    lVar5 = FUN_00f42bd0();
    goto LAB_00f45a25;
  }
  *plVar15 = *plVar15 + (int64_t)pvVar8;
  plVar15[2] = plVar15[2] + (int64_t)pvVar8;
  uVar6 = *(int *)((int64_t)this_ptr + 0xac) + uVar10;
  *(uint *)((int64_t)this_ptr + 0xac) = uVar6;
  uVar7 = (int)this_ptr[10] - *(int *)((int64_t)this_ptr + 0x172c);
  if (uVar10 <= uVar7) {
    uVar7 = uVar10;
  }
  *(uint *)((int64_t)this_ptr + 0x172c) = uVar7 + *(int *)((int64_t)this_ptr + 0x172c);
LAB_00f45a67:
  if ((uint64_t)this_ptr[0x2e7] < (uint64_t)uVar6) {
    this_ptr[0x2e7] = (uint64_t)uVar6;
  }
  uVar11 = this_ptr[3] - (uint64_t)(uint)(*(int *)((int64_t)this_ptr + 0x1734) + 0x2a >> 3);
  uVar7 = 0xffff;
  if (uVar11 < 0xffff) {
    uVar7 = (uint)uVar11;
  }
  uVar10 = *(uint *)(this_ptr + 10);
  if (uVar7 <= *(uint *)(this_ptr + 10)) {
    uVar10 = uVar7;
  }
  uVar6 = uVar6 - (int)this_ptr[0x13];
  if (uVar6 < uVar10) {
    if (uVar6 == 0 && unaff_ESI != 4) {
      return 0;
    }
    if (unaff_ESI == 0) {
      return 0;
    }
    if (*(int *)(*this_ptr + 8) != 0) {
      return 0;
    }
    if (uVar7 < uVar6) {
      return 0;
    }
  }
  uVar10 = uVar6;
  if (uVar7 < uVar6) {
    uVar10 = uVar7;
  }
  if (unaff_ESI == 4) {
    uVar7 = (uint)(uVar6 <= uVar7 && *(int *)(*this_ptr + 8) == 0);
  }
  else {
    uVar7 = 0;
  }
  pvVar9 = (void *)(uint64_t)uVar7;
  FUN_00f4b3c0(pvVar9,(uint64_t)uVar10);
  this_ptr[0x13] = this_ptr[0x13] + (uint64_t)uVar10;
  lVar5 = *this_ptr;
  lVar2 = *(int64_t *)(lVar5 + 0x38);
  FUN_00f4b540();
  uVar6 = *(uint *)(lVar2 + 0x28);
  if (*(uint *)(lVar5 + 0x20) < *(uint *)(lVar2 + 0x28)) {
    uVar6 = *(uint *)(lVar5 + 0x20);
  }
  if (uVar6 != 0) {
    pvVar8 = (void *)(uint64_t)uVar6;
    _memcpy(pvVar9,pvVar8,unaff_ESI);
    *(int64_t *)(lVar5 + 0x18) = *(int64_t *)(lVar5 + 0x18) + (int64_t)pvVar8;
    *(int64_t *)(lVar2 + 0x20) = *(int64_t *)(lVar2 + 0x20) + (int64_t)pvVar8;
    *(int64_t *)(lVar5 + 0x28) = *(int64_t *)(lVar5 + 0x28) + (int64_t)pvVar8;
    *(int *)(lVar5 + 0x20) = *(int *)(lVar5 + 0x20) - uVar6;
    plVar15 = (int64_t *)(lVar2 + 0x28);
    *plVar15 = *plVar15 - (int64_t)pvVar8;
    if (*plVar15 == 0) {
      *(void*)(lVar2 + 0x20) = *(void*)(lVar2 + 0x10);
    }
  }
  return uVar7 * 2;
}

