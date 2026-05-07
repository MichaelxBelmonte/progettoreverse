// Function: FUN_012879b0
// Address: 012879b0
// Size: 551 bytes
// Class: Unknown

void FUN_012879b0(void)

{
  bool bVar1;
  void *pvVar2;
  int64_t lVar3;
  void* pVar4;
  bool bVar5;
  int64_t lVar6;
  int64_t *this_ptr;
  uint64_t uVar7;
  uint uVar8;
  
  lVar3 = *this_ptr;
  if (lVar3 != 0) {
    uVar8 = *(uint *)(lVar3 + 0xc);
    uVar7 = (uint64_t)uVar8;
    if ((int)uVar8 < 1) {
      bVar5 = false;
      lVar6 = 0;
    }
    else {
      lVar6 = 0;
      bVar5 = false;
      while( true ) {
        uVar8 = uVar8 - 1;
        lVar3 = *(int64_t *)(*(int64_t *)(lVar3 + 0x10) + (uint64_t)uVar8 * 8);
        pVar4 = uVar8;
        if (lVar6 == lVar3) {
          lVar3 = lVar6;
          bVar1 = bVar5;
          if ((!bVar5) && (lVar6 != 0)) {
            FUN_00d50b00();
            bVar1 = true;
          }
        }
        else {
          if (lVar3 != 0) {
            FUN_00d50b00();
          }
          bVar1 = true;
          if ((bVar5) && (lVar6 != 0)) {
            FUN_00d50b20();
          }
        }
        bVar5 = bVar1;
        lVar6 = lVar3;
        pvVar2 = _pthread_getspecific(pVar4);
        if ((pvVar2 == (void *)0x0) || (lVar3 = FUN_00e8b990(), lVar3 == 0)) {
          lVar3 = *(int64_t *)(lVar6 + 200);
        }
        else {
          lVar3 = *(int64_t *)
                   (*(int64_t *)(lVar6 + 0x20 + (uint64_t)(*(uint *)(lVar3 + 0x154) & 1) * 8) +
                   200);
        }
        if (lVar3 != 0) {
          FUN_00d50b00();
          FUN_00d50b20();
          pvVar2 = _pthread_getspecific(pVar4);
          if ((pvVar2 == (void *)0x0) || (lVar3 = FUN_00e8b990(), lVar3 == 0)) {
            lVar3 = *(int64_t *)(lVar6 + 200);
          }
          else {
            lVar3 = *(int64_t *)
                     (*(int64_t *)(lVar6 + 0x20 + (uint64_t)(*(uint *)(lVar3 + 0x154) & 1) * 8) +
                     200);
          }
          if (lVar3 != 0) {
            FUN_00d50b00();
          }
          pvVar2 = _pthread_getspecific(pVar4);
          if (pvVar2 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0152ec70();
          if (lVar3 != 0) {
            FUN_00d50b20();
          }
        }
        if ((int64_t)uVar7 < 2) break;
        uVar7 = uVar7 - 1;
        lVar3 = *this_ptr;
      }
    }
    FUN_0152f340();
    if ((bVar5) && (lVar6 != 0)) {
      FUN_00d50b20();
    }
  }
  return;
}

