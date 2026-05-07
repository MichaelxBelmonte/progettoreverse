// Function: FUN_01c441c0
// Address: 01c441c0
// Size: 1019 bytes
// Class: MDMetaWindowController

double FUN_01c441c0(uint64_t param_1,void*param_2)

{
  int64_t lVar1;
  uint8_t uVar2;
  char cVar3;
  void *pvVar4;
  int64_t lVar5;
  void* in_ECX;
  int64_t lVar6;
  void*arg1;
  int64_t *this_ptr;
  bool bVar7;
  double dVar8;
  int64_t local_60;
  char local_58;
  double local_38;
  
  if (arg1 != (void*)0x0) {
    if (g_028b66e8 == 0) {
      bVar7 = true;
    }
    else {
      bVar7 = *(int *)(g_028b66e8 + 0x1c8) != 1;
    }
    *arg1 = bVar7;
  }
  if (*this_ptr == 0) {
    return g_02395720;
  }
  if (param_2 != (void*)0x0) {
    pvVar4 = _pthread_getspecific(in_ECX);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar2 = FUN_016c2730();
    *param_2 = uVar2;
  }
  if (g_028b66e8 == 0) goto LAB_01c44568;
  if ((arg1 != (void*)0x0) && (*(int *)(g_028b66e8 + 0x1c8) == 1)) {
    local_38 = *(double *)(g_028b66e8 + 0x188);
    if (local_38 != 0.0) {
      FUN_00d50b00();
    }
    pvVar4 = _pthread_getspecific(in_ECX);
    if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
      in_ECX = SUB84(local_38,0);
    }
    FUN_016d8300();
    if (local_60 == 0) {
      cVar3 = '\0';
    }
    else {
      lVar5 = *(int64_t *)(g_028b66e8 + 0x188);
      if (lVar5 != 0) {
        FUN_00d50b00();
      }
      pvVar4 = _pthread_getspecific(in_ECX);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      cVar3 = FUN_016c2730();
      if (lVar5 != 0) {
        FUN_00d50b20();
      }
    }
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if (local_38 != 0.0) {
      FUN_00d50b20();
    }
    if (cVar3 != '\0') {
      *arg1 = 1;
    }
  }
  lVar5 = *(int64_t *)(g_028b66e8 + 0x210);
  if (lVar5 != 0) {
    FUN_00d50b00();
  }
  cVar3 = FUN_016bf360();
  lVar6 = g_028b66e8;
  if (cVar3 == '\0') {
    if (*(int64_t *)(g_028b66e8 + 0x198) == 0) {
      bVar7 = true;
      goto LAB_01c444bc;
    }
    FUN_00d50b00();
    FUN_00d50b20();
    if (param_2 != (void*)0x0) {
      lVar1 = *(int64_t *)(g_028b66e8 + 0x188);
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      pvVar4 = _pthread_getspecific((void*)lVar6);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar2 = FUN_016c2730();
      *param_2 = uVar2;
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
    }
    lVar1 = *(int64_t *)(g_028b66e8 + 0x188);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    pvVar4 = _pthread_getspecific((void*)lVar6);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_38 = (double)FUN_016c9480(param_1);
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
LAB_01c44550:
    in_ECX = (void*)lVar6;
    bVar7 = false;
  }
  else {
    local_38 = *(double *)(g_028b66e8 + 0x288);
    if (0.0 < local_38) {
      if (param_2 != (void*)0x0) {
        *param_2 = 1;
      }
      goto LAB_01c44550;
    }
    pvVar4 = _pthread_getspecific((void*)g_028b66e8);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_38 = (double)FUN_016cdc10();
    bVar7 = false;
LAB_01c444bc:
    in_ECX = (void*)lVar6;
  }
  if (lVar5 != 0) {
    FUN_00d50b20();
  }
  if (!bVar7) {
    return local_38;
  }
LAB_01c44568:
  pvVar4 = _pthread_getspecific(in_ECX);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  dVar8 = (double)FUN_016c9480(param_1);
  return dVar8;
}

