// Function: FUN_01519670
// Address: 01519670
// Size: 1590 bytes
// Class: MUPercussivePitchSystem

int64_t * FUN_01519670(int64_t *param_1,int64_t *param_2)

{
  int64_t *plVar1;
  bool bVar2;
  char cVar3;
  void *pvVar4;
  int64_t lVar5;
  int64_t *plVar6;
  int64_t lVar7;
  uint64_t uVar8;
  int64_t lVar9;
  int64_t *plVar10;
  int64_t arg1;
  int64_t *this_ptr;
  float fVar11;
  float fVar12;
  uint32_t uVar13;
  uint8_t local_78 [8];
  uint8_t local_70;
  int64_t local_40;
  char local_38;
  
  if (*param_2 == arg1) {
    *(void*)(this_ptr + 1) = 0;
    if (arg1 != 0) {
      FUN_00d50b00();
    }
    *this_ptr = arg1;
  }
  else {
    if (*(int64_t *)(arg1 + 0x78) == 0) {
      lVar7 = 0;
      lVar5 = arg1;
      do {
        lVar9 = *(int64_t *)(lVar5 + 0x50);
        if (lVar9 == 0) {
          bVar2 = true;
          goto LAB_015196c0;
        }
        pvVar4 = _pthread_getspecific((void*)param_1);
        if (pvVar4 != (void *)0x0) {
          lVar9 = *(int64_t *)(lVar5 + 0x50);
          lVar5 = FUN_00e8b990();
          if (lVar5 != 0) {
            lVar9 = *(int64_t *)(lVar9 + 0x20 + (uint64_t)(*(uint *)(lVar5 + 0x154) & 1) * 8);
          }
        }
        lVar5 = lVar9;
      } while (*(int64_t *)(lVar9 + 0x78) == 0);
      lVar7 = *(int64_t *)(lVar9 + 0x78);
    }
    else {
      lVar7 = *(int64_t *)(arg1 + 0x78);
    }
    if (lVar7 != 0) {
      FUN_00d50b00();
    }
    bVar2 = false;
LAB_015196c0:
    pvVar4 = _pthread_getspecific((void*)param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01822e80();
    pvVar4 = _pthread_getspecific((void*)param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    fVar11 = (float)FUN_01773e80();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (!bVar2 && lVar7 != 0) {
      FUN_00d50b20();
    }
    lVar7 = *param_2;
    if (lVar7 == 0) {
      fVar12 = (float)FUN_01773e50();
    }
    else {
      pvVar4 = _pthread_getspecific((void*)param_1);
      if (pvVar4 != (void *)0x0) {
        lVar7 = *param_2;
        lVar5 = FUN_00e8b990();
        if (lVar5 != 0) {
          lVar7 = *(int64_t *)(lVar7 + 0x20 + (uint64_t)(*(uint *)(lVar5 + 0x154) & 1) * 8);
        }
      }
      if (*(int64_t *)(lVar7 + 0x78) == 0) {
        lVar5 = 0;
        do {
          lVar9 = *(int64_t *)(lVar7 + 0x50);
          if (lVar9 == 0) {
            bVar2 = true;
            goto LAB_015197ce;
          }
          pvVar4 = _pthread_getspecific((void*)param_1);
          if (pvVar4 != (void *)0x0) {
            lVar9 = *(int64_t *)(lVar7 + 0x50);
            lVar7 = FUN_00e8b990();
            if (lVar7 != 0) {
              lVar9 = *(int64_t *)(lVar9 + 0x20 + (uint64_t)(*(uint *)(lVar7 + 0x154) & 1) * 8);
            }
          }
          lVar7 = lVar9;
        } while (*(int64_t *)(lVar9 + 0x78) == 0);
        lVar5 = *(int64_t *)(lVar9 + 0x78);
      }
      else {
        lVar5 = *(int64_t *)(lVar7 + 0x78);
      }
      if (lVar5 != 0) {
        FUN_00d50b00();
      }
      bVar2 = false;
LAB_015197ce:
      pvVar4 = _pthread_getspecific((void*)param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01822e80();
      pvVar4 = _pthread_getspecific((void*)param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      fVar12 = (float)FUN_01773e80();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if (!bVar2 && lVar5 != 0) {
        FUN_00d50b20();
      }
    }
    if (g_0239425c <= (float)((uint)(fVar12 - fVar11) & g_02390140)) {
      plVar6 = (int64_t *)FUN_00e8fc40();
      FUN_0013dd30();
      (**(code **)(*plVar6 + 0x18))();
      pvVar4 = _pthread_getspecific((void*)param_1);
      if ((pvVar4 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
        param_1 = plVar6;
      }
      if (arg1 != 0) {
        FUN_00d50b00();
      }
      local_38 = 0;
      uVar13 = FUN_01512be0();
      local_70 = 0;
      FUN_01513590(uVar13,0);
      local_38 = 0;
      FUN_01512890();
      if (arg1 != 0) {
        FUN_00d50b20();
      }
      local_38 = '\0';
      local_40 = 0;
      pvVar4 = _pthread_getspecific((void*)param_1);
      plVar1 = plVar6;
      if ((pvVar4 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
        param_1 = plVar6;
        plVar1 = (int64_t *)plVar6[(uint64_t)(*(uint *)(lVar7 + 0x154) & 1) + 4];
      }
      while( true ) {
        plVar10 = plVar1;
        if ((*(char *)((int64_t)plVar10 + 0xa1) == '\0') &&
           (pvVar4 = _pthread_getspecific((void*)param_1), pvVar4 == (void *)0x0)) {
          FUN_015104e0();
        }
        lVar7 = plVar10[0x12];
        if (lVar7 != 0) break;
        plVar1 = (int64_t *)plVar10[10];
        if (plVar1 == (int64_t *)0x0) {
          lVar7 = 0;
LAB_01519b79:
          while( true ) {
            pvVar4 = _pthread_getspecific((void*)param_1);
            if (pvVar4 != (void *)0x0) {
              FUN_00e8b990();
            }
            uVar8 = FUN_00e7bdb0();
            param_1 = (int64_t *)FUN_00e7bdb0();
            cVar3 = FUN_01252960(param_1,uVar8,&local_40,local_78);
            if (cVar3 == '\0') break;
            if (local_40 != 0) {
              pvVar4 = _pthread_getspecific((void*)param_1);
              if (pvVar4 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_01767a10(fVar12);
            }
          }
          *this_ptr = (int64_t)plVar6;
          *(void*)(this_ptr + 1) = 1;
          if (lVar7 != 0) {
            FUN_00d50b20();
          }
          if (local_38 == '\0') {
            return this_ptr;
          }
          if (local_40 == 0) {
            return this_ptr;
          }
          FUN_00d50b20();
          return this_ptr;
        }
        pvVar4 = _pthread_getspecific((void*)param_1);
        if (pvVar4 != (void *)0x0) {
          plVar1 = (int64_t *)plVar10[10];
          lVar7 = FUN_00e8b990();
          if (lVar7 != 0) {
            plVar1 = (int64_t *)plVar1[(uint64_t)(*(uint *)(lVar7 + 0x154) & 1) + 4];
          }
        }
      }
      FUN_00d50b00();
      goto LAB_01519b79;
    }
    *(void*)(this_ptr + 1) = 0;
    if (arg1 != 0) {
      FUN_00d50b00();
    }
    *this_ptr = arg1;
  }
  *(void*)(this_ptr + 1) = 1;
  return this_ptr;
}

