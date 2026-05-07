// Function: FUN_00249410
// Address: 00249410
// Size: 989 bytes
// Class: GNFilePath

uint64_t FUN_00249410(void)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  uint64_t uVar4;
  void *pvVar5;
  int64_t lVar6;
  void* pVar7;
  uint64_t uVar8;
  int64_t this_ptr;
  int64_t *plVar9;
  bool bVar10;
  double dVar11;
  uint64_t uVar12;
  int64_t local_70;
  char local_68;
  uint64_t local_60;
  char local_58;
  uint64_t local_50;
  char local_48;
  int64_t *local_40;
  char local_38;
  
  uVar8 = g_026f6fa0;
  if (g_026f6fa0 != 0) {
    FUN_00d50b00();
  }
  dVar11 = (double)FUN_00e7d6f0();
  uVar4 = (uint64_t)(dVar11 * g_023907c0);
  dVar11 = dVar11 * g_023907c0 - g_023907c8;
  pVar7 = 0xaaaaaaab;
  uVar12 = FUN_0071a120();
  if ((((local_38 == '\0') && (local_40 != (int64_t *)0x0)) &&
      (uVar12 = FUN_00d50b00(), local_38 != '\0')) && (local_40 != (int64_t *)0x0)) {
    uVar12 = FUN_00d50b20();
  }
  bVar1 = (byte)(((int64_t)dVar11 & (int64_t)uVar4 >> 0x3f | uVar4) / 3);
  local_50 = uVar8;
  local_48 = '\0';
  FUN_000175c0(uVar12,&local_50);
  plVar9 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != (int64_t *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
       (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if (plVar9 != (int64_t *)0x0) {
    local_38 = '\0';
    local_40 = plVar9;
    bVar1 = FUN_00c70bc0();
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  FUN_00d50b20();
  if (uVar8 != 0) {
    FUN_00d50b20();
  }
  if (((plVar9 != (int64_t *)0x0 & bVar1) == 0) || (*(int *)(this_ptr + 0x198) == 1)) {
    uVar8 = 0;
    goto LAB_00249582;
  }
  if (*(int64_t *)(this_ptr + 0x1c0) == 0) {
LAB_002495d5:
    plVar9 = (int64_t *)0x0;
  }
  else {
    FUN_006f3f00();
    plVar9 = local_40;
    if (local_38 == '\0') {
      if (local_40 == (int64_t *)0x0) goto LAB_002495d5;
      FUN_00d50b00();
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  uVar3 = FUN_00788fb0();
  uVar8 = (uint64_t)uVar3;
  if (((char)uVar3 == '\0') && (*(int *)(this_ptr + 0x198) != 2)) {
    (**(code **)(*plVar9 + 0x628))();
    if (local_40 == (int64_t *)0x0) {
      bVar10 = false;
    }
    else {
      (**(code **)(*plVar9 + 0x628))();
      uVar8 = local_50;
      pvVar5 = _pthread_getspecific(pVar7);
      uVar4 = local_50;
      if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), uVar8 = uVar4, lVar6 != 0)) {
        uVar8 = *(uint64_t *)(uVar4 + 0x20 + (uint64_t)(*(uint *)(lVar6 + 0x154) & 1) * 8);
      }
      cVar2 = FUN_004a1190();
      if (cVar2 == '\0') {
        bVar10 = false;
      }
      else {
        (**(code **)(*plVar9 + 0x628))();
        pvVar5 = _pthread_getspecific(pVar7);
        uVar8 = local_60;
        if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
          uVar8 = *(uint64_t *)(local_60 + 0x20 + (uint64_t)(*(uint *)(lVar6 + 0x154) & 1) * 8);
        }
        FUN_004a11a0();
        bVar10 = local_70 != 0;
        if ((local_68 != '\0') && (local_70 != 0)) {
          FUN_00d50b20();
        }
        if ((local_58 != '\0') && (local_60 != 0)) {
          FUN_00d50b20();
        }
      }
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    uVar8 = CONCAT71((int7)(uVar8 >> 8),1);
    if (bVar10) {
      (**(code **)(*plVar9 + 0x628))();
      pvVar5 = _pthread_getspecific(pVar7);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_004a11a0();
      pvVar5 = _pthread_getspecific(pVar7);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar3 = FUN_0170f7f0();
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      uVar8 = (uint64_t)uVar3 ^ 1;
    }
  }
  else {
    uVar8 = (uint64_t)uVar3 ^ 1;
    if (plVar9 == (int64_t *)0x0) goto LAB_00249582;
  }
  FUN_00d50b20();
LAB_00249582:
  return uVar8 & 0xffffffff;
}

