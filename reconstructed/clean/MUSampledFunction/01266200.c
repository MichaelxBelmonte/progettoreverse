// Function: FUN_01266200
// Address: 01266200
// Size: 543 bytes
// Class: MUSampledFunction

double FUN_01266200(uint64_t param_1)

{
  double *pdVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  void *pvVar5;
  int64_t lVar6;
  int64_t lVar7;
  void* pVar8;
  int64_t lVar9;
  int64_t lVar10;
  char *pcVar11;
  int64_t lVar12;
  int64_t *this_ptr;
  int64_t lVar13;
  int64_t local_58;
  char local_50 [8];
  double local_40;
  char local_38 [8];
  
  FUN_00d23310();
  pVar8 = (void*)CONCAT71((int7)((uint64_t)param_1 >> 8),local_50[0]);
  pcVar11 = local_38;
  if (local_50[0] != '\0') {
    pcVar11 = local_50;
  }
  local_38[0] = local_50[0];
  *pcVar11 = '\0';
  if ((local_50[0] != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  pvVar5 = _pthread_getspecific(pVar8);
  if ((pvVar5 == (void *)0x0) || (lVar6 = FUN_00e8b990(), lVar6 == 0)) {
    local_40 = *(double *)(local_58 + 0xe8);
  }
  else {
    local_40 = *(double *)
                (*(int64_t *)(local_58 + 0x20 + (uint64_t)(*(uint *)(lVar6 + 0x154) & 1) * 8) +
                0xe8);
  }
  if ((local_38[0] != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  uVar2 = *(uint *)(*this_ptr + 0xc);
  if ((int)uVar2 < 2) {
    return local_40;
  }
  lVar9 = (uint64_t)uVar2 - 2;
  lVar13 = 0;
  lVar12 = 0;
  bVar4 = false;
  bVar3 = false;
  lVar6 = *(int64_t *)(*(int64_t *)(*this_ptr + 0x10) + 8);
  lVar10 = lVar9;
  if (lVar6 != 0) goto LAB_0126630f;
  do {
    lVar6 = lVar12;
    if ((!bVar4) && (lVar12 != 0)) {
      FUN_00d50b00();
      bVar4 = true;
    }
LAB_01266370:
    bVar3 = bVar4;
    lVar12 = lVar6;
    pvVar5 = _pthread_getspecific((void*)lVar10);
    if ((pvVar5 == (void *)0x0) || (lVar6 = FUN_00e8b990(), lVar6 == 0)) {
      if (*(double *)(lVar12 + 0xe8) <= local_40 && local_40 != *(double *)(lVar12 + 0xe8))
      goto LAB_012663c2;
    }
    else {
      pdVar1 = (double *)
               (*(int64_t *)(lVar12 + 0x20 + (uint64_t)(*(uint *)(lVar6 + 0x154) & 1) * 8) + 0xe8)
      ;
      if (*pdVar1 <= local_40 && local_40 != *pdVar1) {
LAB_012663c2:
        pvVar5 = _pthread_getspecific((void*)lVar10);
        lVar6 = lVar12;
        if ((pvVar5 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
          lVar6 = *(int64_t *)(lVar12 + 0x20 + (uint64_t)(*(uint *)(lVar7 + 0x154) & 1) * 8);
        }
        local_40 = *(double *)(lVar6 + 0xe8);
      }
    }
    if (lVar9 == lVar13) {
      if (!bVar3) {
        return local_40;
      }
      if (lVar12 == 0) {
        return local_40;
      }
      FUN_00d50b20();
      return local_40;
    }
    lVar13 = lVar13 + 1;
    lVar6 = *(int64_t *)(*(int64_t *)(*this_ptr + 0x10) + 8 + lVar13 * 8);
    bVar4 = bVar3;
  } while (lVar12 == lVar6);
LAB_0126630f:
  if (lVar6 != 0) {
    FUN_00d50b00();
  }
  bVar4 = true;
  if ((bVar3) && (lVar12 != 0)) {
    FUN_00d50b20();
  }
  goto LAB_01266370;
}

