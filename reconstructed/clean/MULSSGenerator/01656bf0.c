// Function: FUN_01656bf0
// Address: 01656bf0
// Size: 1454 bytes
// Class: MULSSGenerator

void***** FUN_01656bf0(void* param_1,int64_t param_2)

{
  bool bVar1;
  bool bVar2;
  void*****pppppuVar3;
  void *pvVar4;
  int64_t lVar5;
  void*****arg1;
  int64_t this_ptr;
  uint64_t uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  uint32_t local_8c;
  void****local_78;
  char local_70;
  double local_68;
  int64_t local_60;
  int64_t local_58;
  uint64_t local_50;
  uint64_t local_48;
  uint64_t local_40;
  int64_t local_38;
  
  local_38 = *(int64_t *)PTR____stack_chk_guard_024a9898;
  FUN_016557b0();
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012c8a10();
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01710460();
  local_60 = local_58;
  if ((char)local_50 == '\0') {
    if (local_58 != 0) {
      FUN_00d50b00();
      if (((char)local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    local_50 = local_50 & 0xffffffffffffff00;
  }
  if ((local_70 != '\0') && ((void*****)local_78 != (void*****)0x0)) {
    FUN_00d50b20();
  }
  if (local_60 == 0) {
    local_68 = g_0238fee8 / *(double *)(this_ptr + 0x68);
  }
  else {
    local_8c = 0xffffffff;
    pvVar4 = _pthread_getspecific(param_1);
    if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
      param_1 = (void*)local_60;
    }
    local_68 = (double)FUN_016c98e0();
    pvVar4 = _pthread_getspecific(param_1);
    if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
      param_1 = (void*)local_60;
    }
    local_58 = param_2;
    uVar6 = FUN_00e7b820();
    uVar6 = FUN_016c98e0(uVar6,&local_8c);
    local_68 = (double)FUN_016553c0(local_68);
    uVar6 = FUN_016553c0(uVar6);
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01650210();
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012caf10();
    lVar5 = local_58;
    if ((char)local_50 == '\0') {
      if (local_58 != 0) {
        FUN_00d50b00();
        if (((char)local_50 != '\0') && (local_58 != 0)) {
          FUN_00d50b20();
        }
      }
    }
    else {
      local_50 = local_50 & 0xffffffffffffff00;
    }
    if ((local_70 != '\0') && ((void*****)local_78 != (void*****)0x0)) {
      FUN_00d50b20();
    }
    local_58 = CONCAT44(local_58._4_4_,0xffffffff);
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    dVar7 = (double)FUN_016c25f0(local_68);
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_68 = (double)FUN_016c25f0(uVar6);
    dVar8 = (double)FUN_00e7c860();
    if (lVar5 != 0) {
      FUN_00d50b20();
    }
    local_68 = (local_68 - dVar7) / dVar8;
  }
  local_58 = FUN_00e7bcc0();
  local_50 = FUN_00e7bcc0();
  local_48 = FUN_00e7bcc0();
  local_40 = FUN_00e7bcc0();
  while (dVar7 = (double)FUN_00e7c860(), local_68 < dVar7) {
    local_78 = (void****)CONCAT44(local_78._4_4_,2);
    FUN_00e7c3c0();
    local_68 = local_68 + local_68;
  }
  while (dVar7 = (double)FUN_00e7c860(), dVar7 < local_68) {
    local_78 = (void****)CONCAT44(local_78._4_4_,2);
    FUN_00e7c2a0();
    local_68 = local_68 * g_023942d0;
  }
  dVar7 = (double)FUN_00e7c860();
  dVar8 = (double)FUN_00e7c860();
  dVar9 = (double)FUN_00e7c860();
  dVar10 = (double)FUN_00e7c860();
  dVar11 = (double)FUN_00e7c860();
  dVar12 = (double)FUN_00e7c860();
  if (((local_68 < SQRT(dVar7 * dVar8)) || (local_68 < SQRT(dVar9 * dVar10))) ||
     (local_68 < SQRT(dVar11 * dVar12))) {
    local_78 = arg1;
    FUN_00e7bac0();
    bVar2 = true;
    bVar1 = true;
    pppppuVar3 = (void*****)local_78;
  }
  else {
    bVar2 = false;
    bVar1 = false;
    pppppuVar3 = &local_78;
  }
  if (local_60 != 0) {
    FUN_00d50b20();
    bVar1 = bVar2;
  }
  if (bVar1) {
    arg1 = pppppuVar3;
  }
  if (*(int64_t *)PTR____stack_chk_guard_024a9898 == local_38) {
    return arg1;
  }
                      ___stack_chk_fail();
}

