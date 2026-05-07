// Function: FUN_013f5760
// Address: 013f5760
// Size: 653 bytes
// Class: MUDataPointFunction

double FUN_013f5760(void)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  int64_t lVar6;
  void *pvVar7;
  void* pVar8;
  void* pVar9;
  uint64_t uVar10;
  int64_t this_ptr;
  int64_t lVar11;
  double dVar12;
  double dVar13;
  uint64_t local_58;
  int64_t local_48;
  double local_40;
  
  lVar6 = *(int64_t *)(this_ptr + 0x48);
  uVar1 = *(uint *)(lVar6 + 0xc);
  local_58 = (uint64_t)uVar1;
  local_40 = 0.0;
  if (1 < (int)uVar1) {
    uVar10 = (uint64_t)(uVar1 - 1);
    local_40 = 0.0;
    local_48 = 0;
    bVar2 = false;
    lVar11 = 0;
    bVar3 = false;
    while( true ) {
      pVar9 = (void*)uVar10;
      lVar6 = *(int64_t *)(*(int64_t *)(lVar6 + 0x10) + uVar10 * 8);
      pVar8 = pVar9;
      if (local_48 == lVar6) {
        lVar6 = local_48;
        bVar4 = bVar2;
        if ((!bVar2) && (local_48 != 0)) {
          FUN_00d50b00();
          bVar4 = true;
        }
      }
      else {
        if (lVar6 != 0) {
          FUN_00d50b00();
        }
        bVar4 = true;
        if ((bVar2) && (local_48 != 0)) {
          FUN_00d50b20();
        }
      }
      bVar2 = bVar4;
      local_48 = lVar6;
      uVar10 = (uint64_t)(pVar9 - 1);
      lVar6 = *(int64_t *)(*(int64_t *)(*(int64_t *)(this_ptr + 0x48) + 0x10) + uVar10 * 8);
      if (lVar11 == lVar6) {
        lVar6 = lVar11;
        bVar4 = bVar3;
        if ((!bVar3) && (lVar11 != 0)) {
          FUN_00d50b00();
          bVar4 = true;
        }
      }
      else {
        if (lVar6 != 0) {
          FUN_00d50b00();
        }
        bVar4 = true;
        if ((bVar3) && (lVar11 != 0)) {
          FUN_00d50b20();
        }
      }
      lVar11 = lVar6;
      pvVar7 = _pthread_getspecific(pVar8);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      cVar5 = FUN_013faf30();
      dVar12 = g_02391030;
      if (cVar5 != '\0') {
        pvVar7 = _pthread_getspecific(pVar8);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar12 = (double)FUN_013faed0();
        pvVar7 = _pthread_getspecific(pVar8);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar13 = (double)FUN_013faed0();
        dVar12 = dVar12 - dVar13;
      }
      local_40 = local_40 + dVar12;
      if ((int64_t)local_58 < 3) break;
      local_58 = local_58 - 1;
      lVar6 = *(int64_t *)(this_ptr + 0x48);
      bVar3 = bVar4;
    }
    if ((bVar4) && (lVar11 != 0)) {
      FUN_00d50b20();
    }
    if ((bVar2) && (local_48 != 0)) {
      FUN_00d50b20();
    }
  }
  return local_40;
}

