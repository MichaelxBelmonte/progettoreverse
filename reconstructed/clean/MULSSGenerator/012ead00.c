// Function: FUN_012ead00
// Address: 012ead00
// Size: 983 bytes
// Class: MULSSGenerator

void* FUN_012ead00(double param_1,double param_2)

{
  bool bVar1;
  bool bVar2;
  code *pcVar3;
  char cVar4;
  void *pvVar5;
  int64_t lVar6;
  void*puVar7;
  void* in_ECX;
  void* pVar8;
  code *pcVar9;
  int64_t *arg1;
  void*this_ptr;
  int iVar10;
  int64_t lVar11;
  uint uVar12;
  uint64_t uVar13;
  double dVar14;
  int64_t local_40;
  char local_38;
  
  if ((char)arg1[0x28] != '\0') {
    (**(code **)(*arg1 + 0x1a0))();
  }
  lVar11 = arg1[0x27];
  if (lVar11 == 0) {
LAB_012eae20:
    pcVar3 = g_02572370;
    lVar11 = arg1[0x16];
    if (lVar11 == 0) {
      *(void*)(this_ptr + 1) = 0;
      puVar7 = (void*)0x0;
      goto LAB_012eb0cc;
    }
    if (*(int *)(lVar11 + 0xc) < 1) {
      bVar2 = false;
      puVar7 = (void*)0x0;
    }
    else {
      iVar10 = 0;
      puVar7 = (void*)0x0;
      bVar2 = false;
      pcVar9 = g_02572370;
      do {
        pvVar5 = _pthread_getspecific((void*)pcVar9);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        cVar4 = FUN_01275560(param_1,param_2);
        if (cVar4 != '\0') {
          if (puVar7 == (void*)0x0) {
            puVar7 = (void*)FUN_00e8fc40();
            FUN_00d4ff40();
            *puVar7 = &g_02572358;
            (*pcVar3)();
            bVar2 = true;
          }
          pcVar9 = 0x0;
          FUN_00d24b60(0,FUN_012e8c90,0);
        }
        iVar10 = iVar10 + 1;
      } while (iVar10 < *(int *)(lVar11 + 0xc));
    }
    FUN_001159b0();
    if (puVar7 != (void*)0x0) goto LAB_012eaffd;
    bVar1 = true;
    puVar7 = (void*)0x0;
    *(void*)(this_ptr + 1) = 0;
    if (bVar2) goto LAB_012eb0cc;
  }
  else {
    pvVar5 = _pthread_getspecific(in_ECX);
    if (pvVar5 != (void *)0x0) {
      lVar11 = arg1[0x27];
      lVar6 = FUN_00e8b990();
      if (lVar6 != 0) {
        lVar11 = *(int64_t *)(lVar11 + 0x20 + (uint64_t)(*(uint *)(lVar6 + 0x154) & 1) * 8);
      }
    }
    if (*(char *)(lVar11 + 0x38) == '\0') goto LAB_012eae20;
    puVar7 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    pVar8 = 0x2572358;
    *puVar7 = &g_02572358;
    (*g_02572370)();
    pvVar5 = _pthread_getspecific(pVar8);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar13 = FUN_015298a0(param_1,param_2);
    if (local_38 == '\0') {
      if (local_40 != 0) {
        uVar13 = FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    FUN_00d214d0(uVar13,*(void*)((int64_t)puVar7 + 0xc));
    if (local_40 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    bVar2 = true;
LAB_012eaffd:
    uVar12 = *(uint *)((int64_t)puVar7 + 0xc);
    if ((int)uVar12 < 1) {
      *(void*)(this_ptr + 1) = 0;
    }
    else {
      lVar11 = (uint64_t)uVar12 + 1;
      do {
        uVar12 = uVar12 - 1;
        pvVar5 = _pthread_getspecific(uVar12);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar14 = (double)FUN_01259520();
        if (param_1 + param_2 < dVar14) {
          FUN_00d23620();
        }
        lVar11 = lVar11 + -1;
      } while (1 < lVar11);
      *(void*)(this_ptr + 1) = 0;
    }
    bVar1 = false;
    if (bVar2) goto LAB_012eb0cc;
  }
  if (!bVar1) {
    FUN_00d50b00();
  }
LAB_012eb0cc:
  *this_ptr = puVar7;
  *(void*)(this_ptr + 1) = 1;
  return this_ptr;
}

