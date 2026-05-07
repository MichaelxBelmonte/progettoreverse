// Function: FUN_015bb7e0
// Address: 015bb7e0
// Size: 1667 bytes
// Class: GNData
// === GNData properties ===
//   double          _firstSpectrumTime
//   double          _spectraTimeDistance


int FUN_015bb7e0(uint64_t param_1,int *param_2)

{
  int64_t lVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  void *pvVar6;
  int64_t lVar7;
  void* pVar8;
  int64_t *plVar9;
  int iVar10;
  int64_t *arg1;
  int64_t this_ptr;
  int iVar11;
  bool bVar12;
  int64_t local_98;
  char local_90;
  int64_t local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  int64_t local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  int64_t local_40;
  char local_38;
  
  if (*arg1 != 0) goto LAB_015bbcc3;
  pvVar6 = _pthread_getspecific((void*)param_1);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_017ed3a0();
  if (local_40 == 0) {
    bVar12 = false;
  }
  else {
    pvVar6 = _pthread_getspecific((void*)param_1);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_017ed3a0();
    pvVar6 = _pthread_getspecific((void*)param_1);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0123f310();
    if (local_68 == 0) {
      bVar12 = false;
    }
    else {
      pvVar6 = _pthread_getspecific((void*)param_1);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_017ed3a0();
      pvVar6 = _pthread_getspecific((void*)param_1);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0123f310();
      pvVar6 = _pthread_getspecific((void*)param_1);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012e7fb0();
      bVar12 = local_78 != 0;
      if ((local_70 != '\0') && (local_78 != 0)) {
        FUN_00d50b20();
      }
      if ((local_90 != '\0') && (local_98 != 0)) {
        FUN_00d50b20();
      }
      if ((local_80 != '\0') && (local_88 != 0)) {
        FUN_00d50b20();
      }
    }
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  pVar8 = (void*)param_1;
  if (bVar12) {
    pvVar6 = _pthread_getspecific(pVar8);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_017ed3a0();
    pvVar6 = _pthread_getspecific(pVar8);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0123f310();
    pvVar6 = _pthread_getspecific(pVar8);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e7fb0();
    pvVar6 = _pthread_getspecific(pVar8);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    param_1 = 0;
    FUN_01510360(0,0,0);
    lVar7 = *arg1;
    if (lVar7 == local_40) {
      if (((char)arg1[1] == '\0') && (local_40 != 0)) {
        if (local_38 != '\0') goto LAB_015bbb7f;
        FUN_00d50b00();
        goto LAB_015bbbb9;
      }
LAB_015bbbbd:
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      lVar1 = arg1[1];
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
        *arg1 = local_40;
        if (((char)lVar1 != '\0') && (lVar7 != 0)) {
          FUN_00d50b20();
        }
LAB_015bbbb9:
        *(void*)(arg1 + 1) = 1;
        goto LAB_015bbbbd;
      }
      *arg1 = local_40;
      if (((char)lVar1 != '\0') && (lVar7 != 0)) {
        FUN_00d50b20();
      }
LAB_015bbb7f:
      *(void*)(arg1 + 1) = 1;
      local_38 = '\0';
    }
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
  }
  if (*arg1 != 0) goto LAB_015bbcc3;
  FUN_0173ba80();
  lVar7 = *arg1;
  if (lVar7 == local_40) {
    if (((char)arg1[1] == '\0') && (local_40 != 0)) {
      if (local_38 != '\0') goto LAB_015bbc71;
      FUN_00d50b00();
      goto LAB_015bbca7;
    }
  }
  else {
    lVar1 = arg1[1];
    if (local_38 != '\0') {
      *arg1 = local_40;
      if (((char)lVar1 != '\0') && (lVar7 != 0)) {
        FUN_00d50b20();
      }
LAB_015bbc71:
      *(void*)(arg1 + 1) = 1;
      goto LAB_015bbcc3;
    }
    if (local_40 != 0) {
      FUN_00d50b00();
    }
    *arg1 = local_40;
    if (((char)lVar1 != '\0') && (lVar7 != 0)) {
      FUN_00d50b20();
    }
LAB_015bbca7:
    *(void*)(arg1 + 1) = 1;
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
LAB_015bbcc3:
  iVar11 = 0;
  do {
    plVar9 = (int64_t *)*arg1;
    pvVar6 = _pthread_getspecific((void*)param_1);
    if (pvVar6 != (void *)0x0) {
      plVar9 = (int64_t *)*arg1;
      lVar7 = FUN_00e8b990();
      if (lVar7 != 0) {
        plVar9 = (int64_t *)plVar9[(uint64_t)(*(uint *)(lVar7 + 0x154) & 1) + 4];
      }
    }
    iVar3 = (**(code **)(*plVar9 + 0x378))();
    if (iVar3 != -1000000) {
      plVar9 = (int64_t *)*arg1;
      pvVar6 = _pthread_getspecific((void*)param_1);
      if (pvVar6 != (void *)0x0) {
        plVar9 = (int64_t *)*arg1;
        lVar7 = FUN_00e8b990();
        if (lVar7 != 0) {
          plVar9 = (int64_t *)plVar9[(uint64_t)(*(uint *)(lVar7 + 0x154) & 1) + 4];
        }
      }
      cVar2 = (**(code **)(*plVar9 + 1000))();
      if (cVar2 != '\0') goto LAB_015bbd94;
    }
    iVar11 = iVar11 + 1;
  } while (iVar11 != 0xc);
  iVar11 = 0;
LAB_015bbd94:
  iVar4 = FUN_00e7d780(*(void*)(this_ptr + 0xa0));
  iVar3 = 0;
  if (0 < iVar4 + -1) {
    iVar3 = iVar4 + -1;
  }
  iVar3 = (iVar3 - iVar4) + 1;
  uVar5 = (uint)(iVar3 != 0);
  iVar3 = (iVar3 - uVar5) / 0xc + uVar5;
  iVar10 = iVar4 + iVar3 * 0xc;
  iVar4 = iVar4 + iVar3 * 0xc + -1;
  iVar3 = 0xb;
  if (iVar4 < 0xb) {
    iVar3 = iVar4;
  }
  uVar5 = (iVar10 - iVar3) + 10;
  iVar3 = ((uVar5 % 0xc - uVar5) + iVar10 + -1) * 7;
  iVar3 = iVar3 + (((uint)(iVar3 / 6 + (iVar3 >> 0x1f)) >> 1) - (iVar3 >> 0x1f)) * -0xc;
  if (param_2 != (int *)0x0) {
    *param_2 = iVar3;
  }
  iVar3 = iVar3 + iVar11;
  return iVar3 + (((uint)(iVar3 / 6 + (iVar3 >> 0x1f)) >> 1) - (iVar3 >> 0x1f)) * -0xc;
}

