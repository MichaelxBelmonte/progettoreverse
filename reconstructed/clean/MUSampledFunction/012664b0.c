// Function: FUN_012664b0
// Address: 012664b0
// Size: 556 bytes
// Class: MUSampledFunction

double FUN_012664b0(uint64_t param_1)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  void *pvVar4;
  int64_t lVar5;
  int64_t lVar6;
  int64_t lVar7;
  void* pVar8;
  int64_t lVar9;
  char *pcVar10;
  int64_t lVar11;
  int64_t *this_ptr;
  int64_t lVar12;
  double dVar13;
  int64_t local_58;
  char local_50 [8];
  double local_40;
  char local_38 [8];
  
  FUN_00d23310();
  pVar8 = (void*)CONCAT71((int7)((uint64_t)param_1 >> 8),local_50[0]);
  pcVar10 = local_38;
  if (local_50[0] != '\0') {
    pcVar10 = local_50;
  }
  local_38[0] = local_50[0];
  *pcVar10 = '\0';
  if ((local_50[0] != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  pvVar4 = _pthread_getspecific(pVar8);
  lVar6 = local_58;
  if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
    lVar6 = *(int64_t *)(local_58 + 0x20 + (uint64_t)(*(uint *)(lVar5 + 0x154) & 1) * 8);
  }
  local_40 = *(double *)(lVar6 + 0xe8) + *(double *)(lVar6 + 0xf0);
  if ((local_38[0] != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  uVar1 = *(uint *)(*this_ptr + 0xc);
  if ((int)uVar1 < 2) {
    return local_40;
  }
  lVar9 = (uint64_t)uVar1 - 2;
  lVar12 = 0;
  lVar11 = 0;
  bVar3 = false;
  bVar2 = false;
  lVar6 = *(int64_t *)(*(int64_t *)(*this_ptr + 0x10) + 8);
  lVar5 = lVar9;
  if (lVar6 != 0) goto LAB_012665af;
  do {
    lVar6 = lVar11;
    if ((!bVar3) && (lVar11 != 0)) {
      FUN_00d50b00();
      bVar3 = true;
    }
    while( true ) {
      bVar2 = bVar3;
      lVar11 = lVar6;
      pvVar4 = _pthread_getspecific((void*)lVar5);
      if ((pvVar4 == (void *)0x0) || (lVar6 = FUN_00e8b990(), lVar6 == 0)) {
        dVar13 = *(double *)(lVar11 + 0xe8) + *(double *)(lVar11 + 0xf0);
      }
      else {
        lVar6 = *(int64_t *)(lVar11 + 0x20 + (uint64_t)(*(uint *)(lVar6 + 0x154) & 1) * 8);
        dVar13 = *(double *)(lVar6 + 0xe8) + *(double *)(lVar6 + 0xf0);
      }
      if (local_40 < dVar13) {
        pvVar4 = _pthread_getspecific((void*)lVar5);
        lVar6 = lVar11;
        if ((pvVar4 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
          lVar6 = *(int64_t *)(lVar11 + 0x20 + (uint64_t)(*(uint *)(lVar7 + 0x154) & 1) * 8);
        }
        local_40 = *(double *)(lVar6 + 0xe8) + *(double *)(lVar6 + 0xf0);
      }
      if (lVar9 == lVar12) {
        if (!bVar2) {
          return local_40;
        }
        if (lVar11 == 0) {
          return local_40;
        }
        FUN_00d50b20();
        return local_40;
      }
      lVar12 = lVar12 + 1;
      lVar6 = *(int64_t *)(*(int64_t *)(*this_ptr + 0x10) + 8 + lVar12 * 8);
      bVar3 = bVar2;
      if (lVar11 == lVar6) break;
LAB_012665af:
      if (lVar6 != 0) {
        FUN_00d50b00();
      }
      bVar3 = true;
      if ((bVar2) && (lVar11 != 0)) {
        FUN_00d50b20();
      }
    }
  } while( true );
}

