// Function: FUN_017658e0
// Address: 017658e0
// Size: 1558 bytes
// Class: Unknown

void* FUN_017658e0(void* param_1,int64_t *param_2)

{
  int64_t lVar1;
  int64_t lVar2;
  bool bVar3;
  char cVar4;
  void *pvVar5;
  int64_t lVar6;
  int64_t lVar7;
  void*puVar8;
  void* pVar9;
  int64_t lVar10;
  int64_t lVar11;
  int64_t *arg1;
  void*this_ptr;
  bool bVar12;
  int64_t lVar13;
  int64_t local_40;
  char local_38;
  
  lVar2 = local_40;
  lVar11 = *arg1;
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    lVar11 = *arg1;
    lVar6 = FUN_00e8b990();
    if (lVar6 != 0) {
      lVar11 = *(int64_t *)(lVar11 + 0x20 + (uint64_t)(*(uint *)(lVar6 + 0x154) & 1) * 8);
    }
  }
  lVar11 = *(int64_t *)(lVar11 + 0x60);
  if (lVar11 != 0) {
    FUN_00d50b00();
  }
  lVar6 = *arg1;
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    lVar6 = *arg1;
    lVar7 = FUN_00e8b990();
    if (lVar7 != 0) {
      lVar6 = *(int64_t *)(lVar6 + 0x20 + (uint64_t)(*(uint *)(lVar7 + 0x154) & 1) * 8);
    }
  }
  lVar6 = *(int64_t *)(lVar6 + 0x58);
  if (lVar6 != 0) {
    FUN_00d50b00();
  }
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01770f00();
  if ((local_38 == '\0') && (local_40 != 0)) {
    FUN_00d50b00();
  }
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01736e70();
  if ((local_38 == '\0') && (local_40 != 0)) {
    FUN_00d50b00();
  }
  puVar8 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar8 = &g_02572358;
  (*g_02572370)();
  if (*(int *)(local_40 + 0xc) < 1) {
    lVar7 = 0;
    bVar12 = false;
  }
  else {
    lVar13 = 0;
    bVar12 = false;
    lVar10 = 0;
    do {
      lVar1 = *(int64_t *)(*(int64_t *)(lVar2 + 0x10) + lVar13 * 8);
      lVar7 = lVar2;
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      pVar9 = (void*)lVar7;
      FUN_01779830();
      if (local_40 == lVar10) {
        lVar7 = lVar10;
        if ((!bVar12) && (local_40 != 0)) {
          if (local_38 != '\0') goto LAB_01765b43;
          FUN_00d50b00();
LAB_01765bb0:
          bVar12 = true;
          lVar7 = lVar10;
        }
        bVar3 = bVar12;
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        lVar7 = local_40;
        if (local_38 == '\0') {
          if (local_40 != 0) {
            FUN_00d50b00();
          }
          bVar3 = true;
          if ((bVar12) && (lVar10 != 0)) {
            FUN_00d50b20();
            lVar10 = local_40;
            goto LAB_01765bb0;
          }
        }
        else {
          if ((bVar12) && (lVar10 != 0)) {
            FUN_00d50b20();
          }
LAB_01765b43:
          bVar3 = true;
        }
      }
      bVar12 = bVar3;
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      pvVar5 = _pthread_getspecific(pVar9);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01779ad0();
      if (*param_2 == 0) {
        if (lVar13 == 0) {
          pvVar5 = _pthread_getspecific(pVar9);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01779a60(g_02390124);
        }
        else {
          lVar10 = lVar2;
          pvVar5 = _pthread_getspecific((void*)lVar2);
          pVar9 = (void*)lVar10;
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          cVar4 = FUN_01739620();
          if (cVar4 == '\0') {
            pvVar5 = _pthread_getspecific(pVar9);
            if (pvVar5 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_01779a60(0);
          }
          else {
            pvVar5 = _pthread_getspecific(pVar9);
            if (pvVar5 != (void *)0x0) {
              FUN_00e8b990();
            }
            cVar4 = FUN_01739960();
            if (cVar4 == '\0') {
              pvVar5 = _pthread_getspecific(0x2802558);
              if (pvVar5 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_01779a60(g_0239428c);
            }
            else {
              pvVar5 = _pthread_getspecific(0x2802558);
              if (pvVar5 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_01779a60(g_0239011c);
            }
          }
        }
      }
      else {
        pvVar5 = _pthread_getspecific(pVar9);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01779a60(*(void*)(*(int64_t *)(*param_2 + 0x10) + lVar13 * 4));
      }
      local_38 = '\0';
      FUN_00d21140();
      lVar13 = lVar13 + 1;
      lVar10 = lVar7;
      local_40 = lVar7;
    } while (lVar13 < *(int *)(lVar2 + 0xc));
  }
  *this_ptr = puVar8;
  *(void*)(this_ptr + 1) = 1;
  if ((bVar12) && (lVar7 != 0)) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  if (lVar6 != 0) {
    FUN_00d50b20();
  }
  if (lVar11 != 0) {
    FUN_00d50b20();
  }
  return this_ptr;
}

