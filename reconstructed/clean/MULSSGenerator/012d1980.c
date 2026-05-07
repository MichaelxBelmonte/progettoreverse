// Function: FUN_012d1980
// Address: 012d1980
// Size: 1130 bytes
// Class: MULSSGenerator

void FUN_012d1980(void)

{
  int64_t lVar1;
  char cVar2;
  int64_t *plVar3;
  void *pvVar4;
  int64_t lVar5;
  int64_t lVar6;
  int64_t lVar7;
  int64_t lVar8;
  void* pVar9;
  int64_t *arg1;
  int64_t this_ptr;
  int local_40;
  
  lVar1 = *(int64_t *)(this_ptr + 0x170);
  if (lVar1 == 0) {
    lVar1 = *arg1;
    lVar5 = *(int64_t *)(this_ptr + 0xf8);
    if (lVar5 != lVar1) {
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      *(int64_t *)(this_ptr + 0xf8) = lVar1;
      if (lVar5 != 0) {
        FUN_00d50b20();
      }
    }
    FUN_00d243f0();
  }
  else {
    lVar5 = *(int64_t *)(lVar1 + 0x10);
    if ((lVar5 != *arg1) ||
       (cVar2 = (**(code **)(**(int64_t **)(lVar1 + 0x18) + 0x50))(), cVar2 == '\0')) {
      pVar9 = (void*)lVar5;
      plVar3 = (int64_t *)FUN_00e8fc40();
      FUN_012dc5a0();
      (**(code **)(*plVar3 + 0x18))();
      lVar1 = *arg1;
      lVar5 = plVar3[2];
      if (lVar5 != lVar1) {
        if (lVar1 != 0) {
          FUN_00d50b00();
        }
        plVar3[2] = lVar1;
        if (lVar5 != 0) {
          FUN_00d50b20();
        }
      }
      FUN_00d243f0();
      if (*arg1 != 0) {
        pvVar4 = _pthread_getspecific(pVar9);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        lVar5 = FUN_00e8b990();
        lVar1 = plVar3[4];
        if (lVar1 != lVar5) {
          if (lVar5 != 0) {
            FUN_00d50b00();
          }
          plVar3[4] = lVar5;
          if (lVar1 != 0) {
            FUN_00d50b20();
          }
        }
        FUN_012d0a00();
      }
      lVar1 = *(int64_t *)(*(int64_t *)(this_ptr + 0x170) + 0x20);
      lVar5 = plVar3[4];
      if ((lVar5 != lVar1) && (lVar5 != 0)) {
        FUN_00cbceb0();
        (**(code **)(*(int64_t *)(this_ptr + 0xf0) + 0x10))();
        FUN_00d50b00();
        FUN_00cbc2c0();
        if ((int64_t *)(this_ptr + 0xf0) != (int64_t *)0x0) {
          (**(code **)(*(int64_t *)(this_ptr + 0xf0) + 0x10))();
          FUN_00d50b20();
        }
      }
      lVar6 = FUN_00e313b0();
      do {
        cVar2 = FUN_00e31450(3);
      } while (cVar2 == '\0');
      lVar7 = FUN_00e313b0();
      do {
        cVar2 = FUN_00e31450(1);
      } while (cVar2 == '\0');
      if (lVar7 != 0) {
        FUN_012d21a0();
        if (lVar7 != 0) {
          FUN_00d50b00();
          local_40 = -1;
          while( true ) {
            lVar8 = (int64_t)local_40;
            local_40 = local_40 + 1;
            if (*(int *)(lVar7 + 0xc) <= local_40) break;
            (**(code **)(**(int64_t **)(*(int64_t *)(lVar7 + 0x10) + 8 + lVar8 * 8) + 0x370))();
          }
          FUN_00540a20();
          FUN_00d50b20();
        }
        FUN_00d50b20();
      }
      if ((lVar1 != 0) && (lVar5 != lVar1)) {
        FUN_00cbcef0();
        (**(code **)(*(int64_t *)(this_ptr + 0xf0) + 0x10))();
        FUN_00d50b00();
        FUN_00cbc3f0();
        if ((int64_t *)(this_ptr + 0xf0) != (int64_t *)0x0) {
          (**(code **)(*(int64_t *)(this_ptr + 0xf0) + 0x10))();
          FUN_00d50b20();
        }
      }
      if (lVar6 != 0) {
        FUN_00d50b20();
      }
    }
  }
  return;
}

