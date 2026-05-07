// Function: FUN_016ccf50
// Address: 016ccf50
// Size: 1981 bytes
// Class: Unknown

uint64_t FUN_016ccf50(int64_t param_1,char param_2)

{
  int iVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  void *pvVar5;
  int64_t lVar6;
  void* pVar7;
  int64_t lVar8;
  int64_t lVar9;
  undefined7 uVar11;
  uint64_t uVar10;
  int iVar12;
  double local_88;
  double local_70;
  int64_t local_58;
  char local_50;
  int local_40;
  
  lVar9 = local_58;
  pvVar5 = _pthread_getspecific((void*)param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_018fbce0();
  iVar1 = *(int *)(local_58 + 0xc);
  if (local_50 != '\0') {
    FUN_00d50b20();
  }
  if (iVar1 == 0) {
LAB_016cd592:
    uVar10 = 0;
    goto LAB_016cd71f;
  }
  local_70 = 0.0;
  if (param_2 != '\0') {
    pvVar5 = _pthread_getspecific((void*)param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_018fbce0();
    if (local_50 == '\0') {
      if (local_58 != 0) {
        FUN_00d50b00();
        goto LAB_016cd062;
      }
LAB_016cd21f:
      local_70 = 0.0;
      lVar9 = param_1;
    }
    else {
      if (local_58 == 0) goto LAB_016cd21f;
LAB_016cd062:
      local_50 = '\0';
      local_58 = 0;
      local_40 = -1;
      local_70 = 0.0;
      while( true ) {
        lVar6 = (int64_t)local_40;
        local_40 = local_40 + 1;
        if (*(int *)(lVar9 + 0xc) <= local_40) break;
        lVar8 = *(int64_t *)(lVar9 + 0x10);
        local_58 = *(int64_t *)(lVar8 + 8 + lVar6 * 8);
        pvVar5 = _pthread_getspecific((void*)lVar8);
        pVar7 = (void*)lVar8;
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar3 = (double)FUN_01907950();
        pvVar5 = _pthread_getspecific(pVar7);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        pvVar5 = _pthread_getspecific(pVar7);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_019079b0();
        pvVar5 = _pthread_getspecific(pVar7);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar4 = (double)FUN_018fcb10();
        local_70 = local_70 + (dVar3 - dVar4);
      }
      FUN_000beb10();
      FUN_00d50b20();
    }
    pvVar5 = _pthread_getspecific((void*)lVar9);
    param_1 = lVar9;
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
      param_1 = lVar9;
    }
    FUN_018fbce0();
    iVar1 = *(int *)(local_58 + 0xc);
    if (local_50 != '\0') {
      FUN_00d50b20();
    }
    local_70 = local_70 / (double)iVar1;
  }
  lVar9 = local_58;
  pvVar5 = _pthread_getspecific((void*)param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_018fbce0();
  if (local_50 == '\0') {
    if (local_58 != 0) {
      FUN_00d50b00();
      goto LAB_016cd322;
    }
  }
  else if (local_58 != 0) {
LAB_016cd322:
    local_50 = '\0';
    local_58 = 0;
    local_40 = -1;
    do {
      lVar6 = (int64_t)local_40;
      local_40 = local_40 + 1;
      if (*(int *)(lVar9 + 0xc) <= local_40) {
        FUN_000beb10();
        FUN_00d50b20();
        param_1 = lVar9;
        goto LAB_016cd4f3;
      }
      lVar8 = *(int64_t *)(lVar9 + 0x10);
      local_58 = *(int64_t *)(lVar8 + 8 + lVar6 * 8);
      pvVar5 = _pthread_getspecific((void*)lVar8);
      pVar7 = (void*)lVar8;
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_88 = (double)FUN_01907950();
      pvVar5 = _pthread_getspecific(pVar7);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      pvVar5 = _pthread_getspecific(pVar7);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_019079b0();
      pvVar5 = _pthread_getspecific(pVar7);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar3 = (double)FUN_018fcb10();
    } while ((double)((uint64_t)((local_88 - local_70) - dVar3) & g_023908f0) < g_02391038);
    FUN_000beb10();
    FUN_00d50b20();
    goto LAB_016cd592;
  }
LAB_016cd4f3:
  pvVar5 = _pthread_getspecific((void*)param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  pvVar5 = _pthread_getspecific((void*)param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_018fbce0();
  uVar11 = (undefined7)((uint64_t)local_58 >> 8);
  if (local_50 == '\0') {
    if (local_58 != 0) {
      FUN_00d50b00();
      goto LAB_016cd5be;
    }
  }
  else if (local_58 != 0) {
LAB_016cd5be:
    iVar1 = 0;
    do {
      iVar12 = iVar1;
      iVar2 = *(int *)(local_58 + 0xc);
      if (iVar2 <= iVar12) break;
      pvVar5 = _pthread_getspecific((void*)param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_88 = (double)FUN_01907950();
      pvVar5 = _pthread_getspecific((void*)param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_019079b0();
      pvVar5 = _pthread_getspecific((void*)param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar3 = (double)FUN_018fcb10();
      iVar1 = iVar12 + 1;
    } while ((double)((uint64_t)((local_88 + local_70) - dVar3) & g_023908f0) < g_02391038);
    FUN_000beb10();
    uVar10 = CONCAT71(uVar11,iVar2 <= iVar12);
    FUN_00d50b20();
    goto LAB_016cd71f;
  }
  uVar10 = CONCAT71(uVar11,1);
LAB_016cd71f:
  return uVar10 & 0xffffffff;
}

