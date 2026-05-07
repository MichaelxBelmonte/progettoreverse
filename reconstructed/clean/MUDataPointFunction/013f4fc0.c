// Function: FUN_013f4fc0
// Address: 013f4fc0
// Size: 1539 bytes
// Class: MUDataPointFunction

void FUN_013f4fc0(double param_1)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  void *pvVar6;
  int64_t lVar7;
  void*puVar8;
  void* pVar9;
  int64_t lVar10;
  uint uVar11;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t lVar12;
  int64_t lVar13;
  double dVar14;
  double dVar15;
  double local_80;
  uint64_t local_78;
  double local_70;
  double local_68;
  int64_t local_38;
  
  lVar7 = *arg1;
  if (*(int *)(lVar7 + 0xc) < 2) {
    return;
  }
  local_68 = 0.0;
  lVar13 = 1;
  local_38 = 0;
  bVar2 = false;
  lVar12 = 0;
  lVar10 = 0;
  bVar3 = false;
  do {
    pVar9 = (void*)lVar10;
    lVar7 = *(int64_t *)(*(int64_t *)(lVar7 + 0x10) + lVar13 * 8);
    if (local_38 == lVar7) {
      if ((!bVar2) && (local_38 != 0)) {
        bVar2 = true;
        FUN_00d50b00();
      }
    }
    else {
      if (lVar7 != 0) {
        FUN_00d50b00();
      }
      if ((bVar2) && (local_38 != 0)) {
        FUN_00d50b20();
        bVar2 = true;
        local_38 = lVar7;
      }
      else {
        bVar2 = true;
        local_38 = lVar7;
      }
    }
    lVar7 = *(int64_t *)(*(int64_t *)(*arg1 + 0x10) + -8 + lVar13 * 8);
    if (lVar12 == lVar7) {
      if ((!bVar3) && (lVar12 != 0)) {
        bVar3 = true;
        FUN_00d50b00();
      }
    }
    else {
      if (lVar7 != 0) {
        FUN_00d50b00();
      }
      if ((bVar3) && (lVar12 != 0)) {
        FUN_00d50b20();
        bVar3 = true;
        lVar12 = lVar7;
      }
      else {
        bVar3 = true;
        lVar12 = lVar7;
      }
    }
    pvVar6 = _pthread_getspecific(pVar9);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    cVar5 = FUN_013faf30();
    if (cVar5 == '\0') {
      pvVar6 = _pthread_getspecific(pVar9);
      if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
        pVar9 = (void*)local_38;
      }
      dVar15 = (double)FUN_013faed0();
      pvVar6 = _pthread_getspecific(pVar9);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar14 = (double)FUN_013faed0();
      local_68 = local_68 + (dVar15 - dVar14);
    }
    lVar13 = lVar13 + 1;
    lVar7 = *arg1;
    lVar10 = (int64_t)*(int *)(lVar7 + 0xc);
  } while (lVar13 < lVar10);
  if ((local_68 != 0.0) || (NAN(local_68))) {
    puVar8 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar8 = &g_02572358;
    (*g_02572370)();
    lVar7 = *arg1;
    uVar1 = *(uint *)(lVar7 + 0xc);
    local_78 = (uint64_t)uVar1;
    if (1 < (int)uVar1) {
      local_70 = 0.0;
      local_80 = local_68;
      lVar10 = lVar12;
      while( true ) {
        uVar11 = uVar1 - 1;
        lVar7 = *(int64_t *)(*(int64_t *)(lVar7 + 0x10) + (uint64_t)uVar11 * 8);
        if (local_38 == lVar7) {
          lVar7 = local_38;
          bVar4 = bVar2;
          if ((!bVar2) && (local_38 != 0)) {
            FUN_00d50b00();
            bVar4 = true;
          }
        }
        else {
          if (lVar7 != 0) {
            FUN_00d50b00(lVar7);
          }
          bVar4 = true;
          if ((bVar2) && (local_38 != 0)) {
            FUN_00d50b20();
          }
        }
        bVar2 = bVar4;
        local_38 = lVar7;
        pVar9 = uVar1 - 2;
        lVar12 = *(int64_t *)(*(int64_t *)(*arg1 + 0x10) + (uint64_t)pVar9 * 8);
        if (lVar10 == lVar12) {
          lVar12 = lVar10;
          bVar4 = bVar3;
          if ((!bVar3) && (lVar10 != 0)) {
            FUN_00d50b00();
            bVar4 = true;
          }
        }
        else {
          if (lVar12 != 0) {
            FUN_00d50b00();
          }
          bVar4 = true;
          if ((bVar3) && (lVar10 != 0)) {
            FUN_00d50b20();
          }
        }
        bVar3 = bVar4;
        pvVar6 = _pthread_getspecific(pVar9);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        cVar5 = FUN_013faf30();
        if (cVar5 == '\0') {
          pvVar6 = _pthread_getspecific(pVar9);
          if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
            pVar9 = (void*)local_38;
          }
          local_70 = (double)FUN_013faed0();
          pvVar6 = _pthread_getspecific(pVar9);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          dVar15 = (double)FUN_013faed0();
          local_70 = local_70 - dVar15;
        }
        lVar7 = *(int64_t *)(*(int64_t *)(this_ptr[9] + 0x10) + (uint64_t)uVar11 * 8);
        if (lVar7 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar7 != 0) {
          FUN_00d50b20();
        }
        (**(code **)(*this_ptr + 0x428))((local_80 * param_1) / local_68,0);
        FUN_00d23740();
        pvVar6 = _pthread_getspecific(pVar9);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        cVar5 = FUN_013faf30();
        if ((int64_t)local_78 < 3) break;
        if (cVar5 == '\0') {
          local_80 = local_80 - local_70;
        }
        local_78 = local_78 - 1;
        lVar7 = *arg1;
        lVar10 = lVar12;
        uVar1 = uVar11;
      }
      if (puVar8 == (void*)0x0) goto LAB_013f55d9;
    }
    FUN_00d50b20();
  }
LAB_013f55d9:
  if ((bVar3) && (lVar12 != 0)) {
    FUN_00d50b20();
  }
  if ((bVar2) && (local_38 != 0)) {
    FUN_00d50b20();
  }
  return;
}

