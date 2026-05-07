// Function: FUN_01a7d860
// Address: 01a7d860
// Size: 2843 bytes
// Class: Unknown

void FUN_01a7d860(double param_1)

{
  int iVar1;
  int64_t lVar2;
  void *pvVar3;
  int64_t lVar4;
  int64_t lVar5;
  void* in_ECX;
  void* pVar6;
  int64_t lVar7;
  int iVar8;
  bool bVar9;
  double dVar10;
  double dVar11;
  int64_t local_60;
  char local_58;
  int local_48;
  int64_t local_38;
  
  lVar2 = local_60;
  FUN_01a78a20();
  if (local_58 == '\0') {
    if (local_60 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_58 = '\0';
  }
  pvVar3 = _pthread_getspecific(in_ECX);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0126e7e0();
  if (local_58 == '\0') {
    if (local_60 == 0) goto LAB_01a7e3c2;
    FUN_00d50b00();
  }
  else if (local_60 == 0) goto LAB_01a7e3c2;
  pvVar3 = _pthread_getspecific(in_ECX);
  if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
    in_ECX = (void*)local_60;
  }
  FUN_013f2b00();
  if ((local_58 == '\0') && (local_60 != 0)) {
    FUN_00d50b00();
  }
  FUN_01a76f60();
  if ((local_58 == '\0') && (local_60 != 0)) {
    FUN_00d50b00();
  }
  lVar4 = **(int64_t **)(local_60 + 0x10);
  if (lVar4 != 0) {
    FUN_00d50b00();
  }
  iVar1 = *(int *)(local_60 + 0xc);
  if (param_1 < 0.0) {
    local_38 = **(int64_t **)(local_60 + 0x10);
    if (local_38 != 0) {
      FUN_00d50b00();
    }
    local_60 = 0;
    local_48 = -1;
    iVar8 = 0;
    while( true ) {
      local_58 = '\0';
      lVar5 = (int64_t)local_48;
      local_48 = local_48 + 1;
      if (*(int *)(lVar2 + 0xc) <= local_48) break;
      lVar7 = *(int64_t *)(lVar2 + 0x10);
      local_60 = *(int64_t *)(lVar7 + 8 + lVar5 * 8);
      pvVar3 = _pthread_getspecific((void*)lVar7);
      pVar6 = (void*)lVar7;
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar10 = (double)FUN_013faf20();
      pvVar3 = _pthread_getspecific(pVar6);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar11 = (double)FUN_013faf20();
      if (((dVar10 == dVar11) && (!NAN(dVar10) && !NAN(dVar11))) && (iVar8 < iVar1)) {
        pvVar3 = _pthread_getspecific(pVar6);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        pvVar3 = _pthread_getspecific(pVar6);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_013faed0();
        dVar10 = (double)FUN_0128e5a0();
        pvVar3 = _pthread_getspecific(pVar6);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        pvVar3 = _pthread_getspecific(pVar6);
        if ((pvVar3 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
          pVar6 = (void*)local_38;
        }
        dVar11 = (double)FUN_013faed0();
        dVar11 = (double)FUN_0128e5a0(dVar11 + g_0241c3a0);
        pvVar3 = _pthread_getspecific(pVar6);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        pvVar3 = _pthread_getspecific(pVar6);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        if (dVar11 <= dVar10 + param_1) {
          dVar11 = dVar10 + param_1;
        }
        FUN_0128e4b0(dVar11);
        FUN_013fae90();
        iVar8 = iVar8 + 1;
        if ((iVar8 < iVar1) &&
           (lVar5 = *(int64_t *)(*(int64_t *)(lVar2 + 0x10) + (int64_t)iVar8 * 8), lVar4 != lVar5
           )) {
          if (lVar5 != 0) {
            FUN_00d50b00();
          }
          bVar9 = lVar4 != 0;
          lVar4 = lVar5;
          if (bVar9) {
            FUN_00d50b20();
          }
        }
      }
      if (local_60 != local_38) {
        if (local_60 != 0) {
          FUN_00d50b00();
        }
        bVar9 = local_38 != 0;
        local_38 = local_60;
        if (bVar9) {
          FUN_00d50b20();
        }
      }
    }
    lVar5 = lVar2;
    FUN_01a81420();
    in_ECX = (void*)lVar5;
    if (local_38 != 0) {
      FUN_00d50b20();
    }
  }
  else if (local_60 != 0) {
    local_58 = '\0';
    local_60 = 0;
    local_48 = -1;
    iVar8 = 0;
    while( true ) {
      lVar5 = (int64_t)local_48;
      local_48 = local_48 + 1;
      if (*(int *)(lVar2 + 0xc) <= local_48) break;
      lVar7 = *(int64_t *)(lVar2 + 0x10);
      local_60 = *(int64_t *)(lVar7 + 8 + lVar5 * 8);
      pvVar3 = _pthread_getspecific((void*)lVar7);
      pVar6 = (void*)lVar7;
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar10 = (double)FUN_013faf20();
      pvVar3 = _pthread_getspecific(pVar6);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar11 = (double)FUN_013faf20();
      if ((dVar11 < dVar10) && (iVar8 < iVar1)) {
        pvVar3 = _pthread_getspecific(pVar6);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        pvVar3 = _pthread_getspecific(pVar6);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_013faed0();
        dVar10 = (double)FUN_0128e5a0();
        pvVar3 = _pthread_getspecific(pVar6);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        pvVar3 = _pthread_getspecific(pVar6);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar11 = (double)FUN_013faed0();
        dVar11 = (double)FUN_0128e5a0(dVar11 + g_0241c3a8);
        pvVar3 = _pthread_getspecific(pVar6);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        pvVar3 = _pthread_getspecific(pVar6);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        if (dVar10 + param_1 <= dVar11) {
          dVar11 = dVar10 + param_1;
        }
        FUN_0128e4b0(dVar11);
        FUN_013fae90();
        iVar8 = iVar8 + 1;
        if ((iVar8 < iVar1) &&
           (lVar5 = *(int64_t *)(*(int64_t *)(lVar2 + 0x10) + (int64_t)iVar8 * 8), lVar4 != lVar5
           )) {
          if (lVar5 != 0) {
            FUN_00d50b00();
          }
          bVar9 = lVar4 != 0;
          lVar4 = lVar5;
          if (bVar9) {
            FUN_00d50b20();
          }
        }
      }
    }
    lVar5 = lVar2;
    FUN_01a81420();
    in_ECX = (void*)lVar5;
  }
  pvVar3 = _pthread_getspecific(in_ECX);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0126de80();
  pvVar3 = _pthread_getspecific(in_ECX);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0125a5f0();
  FUN_0039e8b0();
  if (local_58 == '\0') {
    if (local_60 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_58 = '\0';
  }
  FUN_0152eef0();
  if (local_60 != 0) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  lVar5 = *(int64_t *)(lVar2 + 0x10);
  if (lVar5 != 0) {
    for (lVar7 = 0; lVar7 < *(int *)(lVar5 + 0xc); lVar7 = lVar7 + 1) {
      (**(code **)(**(int64_t **)(*(int64_t *)(lVar5 + 0x10) + lVar7 * 8) + 0x620))();
    }
    FUN_01a80d20();
  }
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
    FUN_00d50b20();
  }
  FUN_00d50b20();
LAB_01a7e3c2:
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  return;
}

