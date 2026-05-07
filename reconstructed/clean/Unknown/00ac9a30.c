// Function: FUN_00ac9a30
// Address: 00ac9a30
// Size: 507 bytes
// Class: Unknown

int FUN_00ac9a30(int64_t param_1,byte *param_2)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  int64_t lVar4;
  int64_t lVar5;
  int64_t lVar6;
  void *pvVar7;
  bool bVar8;
  int64_t arg1;
  byte *this_ptr;
  size_t sVar9;
  int64_t lVar10;
  int64_t lVar11;
  int64_t lVar12;
  void *pvVar13;
  void *pvVar14;
  
  lVar4 = *(int64_t *)(this_ptr + 0x18);
  lVar11 = *(int64_t *)(this_ptr + 0x20);
  lVar5 = *(int64_t *)(arg1 + 0x18);
  lVar10 = *(int64_t *)(arg1 + 0x20);
  lVar12 = lVar11;
  if ((lVar4 != lVar5) || (lVar6 = lVar4, lVar11 != lVar10)) {
    if (*(int64_t *)(param_2 + 0x18) == *(int64_t *)(param_1 + 0x18)) goto LAB_00ac9bd1;
    do {
      do {
        sVar9 = (size_t)lVar10;
        bVar1 = *param_2;
        if ((bVar1 & 1) == 0) {
          pvVar13 = (void *)(uint64_t)(bVar1 >> 1);
          bVar2 = *this_ptr;
          if ((bVar2 & 1) == 0) goto LAB_00ac9ab5;
LAB_00ac9ace:
          pvVar14 = *(void **)(this_ptr + 8);
        }
        else {
          pvVar13 = *(void **)(param_2 + 8);
          bVar2 = *this_ptr;
          if ((bVar2 & 1) != 0) goto LAB_00ac9ace;
LAB_00ac9ab5:
          pvVar14 = (void *)(uint64_t)(bVar2 >> 1);
        }
        pvVar7 = pvVar14;
        if (pvVar13 < pvVar14) {
          pvVar7 = pvVar13;
        }
        if (pvVar7 == (void *)0x0) {
LAB_00ac9b30:
          if (pvVar14 < pvVar13) {
            return -1;
          }
          if (pvVar7 != (void *)0x0) goto LAB_00ac9b60;
LAB_00ac9b80:
          if (pvVar13 < pvVar14) {
            return 1;
          }
        }
        else {
          iVar3 = _memcmp((void *)(uint64_t)bVar1,pvVar7,sVar9);
          if (iVar3 == 0) goto LAB_00ac9b30;
          if (iVar3 < 0) {
            return -1;
          }
LAB_00ac9b60:
          iVar3 = _memcmp((void *)(uint64_t)bVar1,pvVar7,sVar9);
          if (iVar3 == 0) goto LAB_00ac9b80;
          if (iVar3 < 0) {
            return 1;
          }
        }
        FUN_00acb370();
        FUN_00acb370();
        lVar4 = *(int64_t *)(this_ptr + 0x18);
        lVar11 = *(int64_t *)(this_ptr + 0x20);
        lVar5 = *(int64_t *)(arg1 + 0x18);
        lVar10 = *(int64_t *)(arg1 + 0x20);
        lVar12 = lVar11;
        if ((lVar4 == lVar5) && (lVar6 = lVar4, lVar11 == lVar10)) goto LAB_00ac9bdf;
      } while (*(int64_t *)(param_2 + 0x18) != *(int64_t *)(param_1 + 0x18));
LAB_00ac9bd1:
      lVar11 = lVar10;
      lVar6 = lVar5;
      lVar10 = lVar11;
    } while (*(int64_t *)(param_2 + 0x20) != *(int64_t *)(param_1 + 0x20));
  }
LAB_00ac9bdf:
  if (((lVar4 != lVar6 || lVar12 != lVar11) ||
      (*(int64_t *)(param_2 + 0x18) != *(int64_t *)(param_1 + 0x18))) ||
     (iVar3 = 0, *(int64_t *)(param_2 + 0x20) != *(int64_t *)(param_1 + 0x20))) {
    bVar8 = lVar4 != lVar6 || lVar12 != lVar11;
    iVar3 = (bVar8 - 1) + (uint)bVar8;
  }
  return iVar3;
}

