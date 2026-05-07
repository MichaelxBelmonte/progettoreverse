// Function: FUN_01367880
// Address: 01367880
// Size: 852 bytes
// Class: Unknown

void* FUN_01367880(uint64_t param_1,int64_t param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  void *pvVar6;
  int64_t lVar7;
  int64_t lVar8;
  void* pVar9;
  int64_t arg1;
  void*this_ptr;
  int64_t *plVar10;
  int64_t *plVar11;
  int64_t lVar12;
  int iVar13;
  int64_t *plVar14;
  int local_50;
  int64_t *local_48;
  
  lVar7 = *(int64_t *)(arg1 + 0xd0);
  if (*(int *)(lVar7 + 0xc) < 1) {
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
    *(void*)(this_ptr + 1) = 1;
  }
  else {
    iVar13 = 100000;
    lVar12 = 0;
    plVar14 = (int64_t *)0x0;
    bVar1 = false;
    local_48 = (int64_t *)0x0;
    lVar8 = 0;
    bVar3 = false;
    do {
      pVar9 = (void*)lVar8;
      plVar10 = *(int64_t **)(*(int64_t *)(lVar7 + 0x10) + lVar12 * 8);
      if (plVar14 == plVar10) {
        if ((!bVar1) && (plVar14 != (int64_t *)0x0)) {
          bVar1 = true;
          FUN_00d50b00();
        }
      }
      else {
        if (plVar10 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        if ((bVar1) && (plVar14 != (int64_t *)0x0)) {
          FUN_00d50b20();
          bVar1 = true;
          plVar14 = plVar10;
        }
        else {
          bVar1 = true;
          plVar14 = plVar10;
        }
      }
      pvVar6 = _pthread_getspecific(pVar9);
      plVar10 = plVar14;
      if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
        plVar10 = (int64_t *)plVar14[(uint64_t)(*(uint *)(lVar7 + 0x154) & 1) + 4];
      }
      lVar7 = (**(code **)(*plVar10 + 0x380))();
      plVar10 = local_48;
      bVar2 = bVar3;
      if (lVar7 < param_2) {
        pvVar6 = _pthread_getspecific(pVar9);
        plVar11 = plVar14;
        if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
          plVar11 = (int64_t *)plVar14[(uint64_t)(*(uint *)(lVar7 + 0x154) & 1) + 4];
        }
        lVar7 = (**(code **)(*plVar11 + 0x380))();
        pvVar6 = _pthread_getspecific(pVar9);
        plVar11 = plVar14;
        if ((pvVar6 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
          plVar11 = (int64_t *)plVar14[(uint64_t)(*(uint *)(lVar8 + 0x154) & 1) + 4];
        }
        lVar8 = (**(code **)(*plVar11 + 0x388))();
        if (param_2 < lVar8 + lVar7) {
          pvVar6 = _pthread_getspecific(pVar9);
          plVar11 = plVar14;
          if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
            plVar11 = (int64_t *)plVar14[(uint64_t)(*(uint *)(lVar7 + 0x154) & 1) + 4];
          }
          iVar4 = (**(code **)(*plVar11 + 0x380))();
          pvVar6 = _pthread_getspecific(pVar9);
          plVar11 = plVar14;
          if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
            plVar11 = (int64_t *)plVar14[(uint64_t)(*(uint *)(lVar7 + 0x154) & 1) + 4];
          }
          iVar5 = (**(code **)(*plVar11 + 0x390))();
          local_50 = (int)param_2;
          iVar5 = iVar5 + (iVar4 - local_50);
          iVar4 = -iVar5;
          if (0 < iVar5) {
            iVar4 = iVar5;
          }
          if (iVar4 < iVar13) {
            iVar13 = iVar4;
            if (local_48 == plVar14) {
              if (((bVar1) && (!bVar3)) && (plVar14 != (int64_t *)0x0)) {
                FUN_00d50b00();
                bVar2 = true;
              }
            }
            else {
              if ((bVar1) && (plVar14 != (int64_t *)0x0)) {
                FUN_00d50b00();
              }
              plVar10 = plVar14;
              bVar2 = bVar1;
              if ((bVar3) && (local_48 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
            }
          }
        }
      }
      local_48 = plVar10;
      lVar12 = lVar12 + 1;
      lVar7 = *(int64_t *)(arg1 + 0xd0);
      lVar8 = (int64_t)*(int *)(lVar7 + 0xc);
      bVar3 = bVar2;
    } while (lVar12 < lVar8);
    *(void*)(this_ptr + 1) = 0;
    if (bVar2) {
      *this_ptr = local_48;
      *(void*)(this_ptr + 1) = 1;
    }
    else if (local_48 == (int64_t *)0x0) {
      *this_ptr = 0;
      *(void*)(this_ptr + 1) = 1;
    }
    else {
      FUN_00d50b00();
      *this_ptr = local_48;
      *(void*)(this_ptr + 1) = 1;
    }
    if ((bVar1) && (plVar14 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  return this_ptr;
}

