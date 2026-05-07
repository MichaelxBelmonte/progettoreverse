// Function: FUN_013f8740
// Address: 013f8740
// Size: 2626 bytes
// Class: MUDataPointFunction

void* FUN_013f8740(uint8_t param_1,int64_t *param_2,uint64_t param_3,void *param_4)

{
  uint64_t uVar1;
  void*puVar2;
  void *pvVar3;
  int64_t lVar4;
  int64_t *plVar5;
  int64_t lVar6;
  int iVar7;
  void* pVar8;
  int64_t *plVar9;
  int64_t *plVar10;
  int iVar11;
  int64_t *arg1;
  void*this_ptr;
  int64_t *plVar12;
  int64_t lVar13;
  double dVar14;
  double dVar15;
  int64_t local_a8;
  char local_a0;
  uint32_t in_stack_ffffffffffffff78;
  uint32_t in_stack_ffffffffffffff7c;
  char local_80;
  int64_t local_58;
  code *local_50;
  int64_t local_48;
  uint64_t local_40;
  int local_38;
  
  puVar2 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  pVar8 = 0x25683c0;
  *puVar2 = &g_025683c0;
  (*g_025683d8)();
  FUN_00c92170();
  FUN_00c92160();
  pvVar3 = _pthread_getspecific(pVar8);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013f2b00();
  pvVar3 = _pthread_getspecific(pVar8);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013f2b00();
  FUN_00c8e7d0();
  if ((local_80 != '\0') && (CONCAT44(in_stack_ffffffffffffff7c,in_stack_ffffffffffffff78) != 0)) {
    FUN_00d50b20();
  }
  if (((char)local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  pvVar3 = _pthread_getspecific(pVar8);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013f2b00();
  iVar11 = *(int *)(local_58 + 0xc);
  pvVar3 = _pthread_getspecific(pVar8);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013f2b00();
  iVar7 = *(int *)(CONCAT44(in_stack_ffffffffffffff7c,in_stack_ffffffffffffff78) + 0xc);
  if (local_80 != '\0') {
    FUN_00d50b20();
  }
  if (((char)local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  if (iVar7 <= iVar11) {
    pvVar3 = _pthread_getspecific(pVar8);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013f2b00();
    lVar13 = local_58;
    if ((char)local_50 == '\0') {
      if (local_58 != 0) {
        FUN_00d50b00();
        if (((char)local_50 != '\0') && (local_58 != 0)) {
          FUN_00d50b20();
        }
        goto LAB_013f8ba7;
      }
    }
    else if (local_58 != 0) {
LAB_013f8ba7:
      local_50 = ((uint64_t)local_50 & 0xffffffffffffff00);
      local_58 = 0;
      local_48 = lVar13;
      local_40 = 0xffffffff;
      local_38 = 0;
      while( true ) {
        lVar13 = (int64_t)(int)local_40;
        iVar11 = (int)local_40 + 1;
        local_40 = CONCAT44(local_40._4_4_,iVar11);
        if (*(int *)(local_48 + 0xc) <= iVar11) break;
        lVar13 = *(int64_t *)(*(int64_t *)(local_48 + 0x10) + 8 + lVar13 * 8);
        local_58 = lVar13;
        pvVar3 = _pthread_getspecific((void*)*(int64_t *)(local_48 + 0x10));
        lVar6 = local_58;
        if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar13 = lVar6, lVar4 != 0)) {
          lVar13 = *(int64_t *)(lVar6 + 0x20 + (uint64_t)(*(uint *)(lVar4 + 0x154) & 1) * 8);
        }
        iVar11 = *(int *)(puVar2 + 3);
        FUN_00c8e340();
        *(void*)(puVar2[2] + (int64_t)iVar11) = *(void*)(lVar13 + 0x38);
        if (local_40._4_4_ != 0) {
          if (local_40 < 0) {
            iVar11 = -local_40._4_4_;
          }
          else {
            local_40 = CONCAT44(local_40._4_4_,(int)local_40 - local_40._4_4_);
            FUN_00d23690();
            local_38 = local_38 + local_40._4_4_;
            iVar11 = 0;
          }
          local_40 = CONCAT44(iVar11,(int)local_40);
        }
      }
      lVar13 = local_48;
      FUN_01a81420();
      pVar8 = (void*)lVar13;
      FUN_00d50b20();
    }
    pvVar3 = _pthread_getspecific(pVar8);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013f2b00();
    lVar13 = local_58;
    if ((char)local_50 == '\0') {
      if (local_58 == 0) goto LAB_013f8fbf;
      FUN_00d50b00();
      if (((char)local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
    }
    else if (local_58 == 0) goto LAB_013f8fbf;
    local_50 = ((uint64_t)local_50 & 0xffffffffffffff00);
    local_58 = 0;
    local_48 = lVar13;
    local_40 = 0xffffffff;
    local_38 = 0;
    local_40._4_4_ = 0;
    while( true ) {
      if (local_40._4_4_ != 0) {
        if (local_40._4_4_ < 1) {
          iVar11 = -local_40._4_4_;
        }
        else {
          iVar11 = (int)local_40 - local_40._4_4_;
          local_40 = CONCAT44(local_40._4_4_,iVar11);
          FUN_00d23690();
          local_38 = local_38 + local_40._4_4_;
          iVar11 = 0;
        }
        local_40 = CONCAT44(iVar11,(int)local_40);
      }
      lVar13 = (int64_t)(int)local_40;
      iVar11 = (int)local_40 + 1;
      local_40 = CONCAT44(local_40._4_4_,iVar11);
      if (*(int *)(local_48 + 0xc) <= iVar11) break;
      lVar13 = *(int64_t *)(*(int64_t *)(local_48 + 0x10) + 8 + lVar13 * 8);
      local_58 = lVar13;
      pvVar3 = _pthread_getspecific((void*)*(int64_t *)(local_48 + 0x10));
      lVar6 = local_58;
      if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar13 = lVar6, lVar4 != 0)) {
        lVar13 = *(int64_t *)(lVar6 + 0x20 + (uint64_t)(*(uint *)(lVar4 + 0x154) & 1) * 8);
      }
      iVar11 = *(int *)(puVar2 + 3);
      lVar6 = (int64_t)iVar11;
      iVar7 = iVar11 + 7;
      if (-1 < lVar6) {
        iVar7 = iVar11;
      }
      if (7 < lVar6) {
        iVar7 = iVar7 >> 3;
        lVar4 = 0;
        do {
          dVar14 = *(double *)(puVar2[2] + lVar4 * 8);
          if ((dVar14 == *(double *)(lVar13 + 0x38)) &&
             (!NAN(dVar14) && !NAN(*(double *)(lVar13 + 0x38)))) goto LAB_013f8ecf;
          lVar4 = lVar4 + 1;
        } while (iVar7 != (int)lVar4);
      }
      FUN_00c8e340(iVar7,1);
      *(void*)(puVar2[2] + lVar6) = *(void*)(lVar13 + 0x38);
LAB_013f8ecf:
    }
    FUN_01a81420();
    FUN_00d50b20();
    goto LAB_013f8fbf;
  }
  pvVar3 = _pthread_getspecific(pVar8);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013f2b00();
  lVar13 = local_58;
  if ((char)local_50 == '\0') {
    if (local_58 != 0) {
      FUN_00d50b00();
      if (((char)local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      goto LAB_013f8a27;
    }
  }
  else if (local_58 != 0) {
LAB_013f8a27:
    local_50 = ((uint64_t)local_50 & 0xffffffffffffff00);
    local_58 = 0;
    local_48 = lVar13;
    local_40 = 0xffffffff;
    local_38 = 0;
    while( true ) {
      lVar13 = (int64_t)(int)local_40;
      iVar11 = (int)local_40 + 1;
      local_40 = CONCAT44(local_40._4_4_,iVar11);
      if (*(int *)(local_48 + 0xc) <= iVar11) break;
      lVar13 = *(int64_t *)(*(int64_t *)(local_48 + 0x10) + 8 + lVar13 * 8);
      local_58 = lVar13;
      pvVar3 = _pthread_getspecific((void*)*(int64_t *)(local_48 + 0x10));
      lVar6 = local_58;
      if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar13 = lVar6, lVar4 != 0)) {
        lVar13 = *(int64_t *)(lVar6 + 0x20 + (uint64_t)(*(uint *)(lVar4 + 0x154) & 1) * 8);
      }
      iVar11 = *(int *)(puVar2 + 3);
      FUN_00c8e340();
      *(void*)(puVar2[2] + (int64_t)iVar11) = *(void*)(lVar13 + 0x38);
      if (local_40._4_4_ != 0) {
        if (local_40 < 0) {
          iVar11 = -local_40._4_4_;
        }
        else {
          local_40 = CONCAT44(local_40._4_4_,(int)local_40 - local_40._4_4_);
          FUN_00d23690();
          local_38 = local_38 + local_40._4_4_;
          iVar11 = 0;
        }
        local_40 = CONCAT44(iVar11,(int)local_40);
      }
    }
    lVar13 = local_48;
    FUN_01a81420();
    pVar8 = (void*)lVar13;
    FUN_00d50b20();
  }
  pvVar3 = _pthread_getspecific(pVar8);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013f2b00();
  lVar13 = local_58;
  if ((char)local_50 == '\0') {
    if (local_58 == 0) goto LAB_013f8fbf;
    FUN_00d50b00();
    if (((char)local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
  }
  else if (local_58 == 0) goto LAB_013f8fbf;
  local_50 = ((uint64_t)local_50 & 0xffffffffffffff00);
  local_58 = 0;
  local_48 = lVar13;
  local_40 = 0xffffffff;
  local_38 = 0;
  local_40._4_4_ = 0;
  while( true ) {
    if (local_40._4_4_ != 0) {
      if (local_40._4_4_ < 1) {
        iVar11 = -local_40._4_4_;
      }
      else {
        iVar11 = (int)local_40 - local_40._4_4_;
        local_40 = CONCAT44(local_40._4_4_,iVar11);
        FUN_00d23690();
        local_38 = local_38 + local_40._4_4_;
        iVar11 = 0;
      }
      local_40 = CONCAT44(iVar11,(int)local_40);
    }
    lVar13 = (int64_t)(int)local_40;
    iVar11 = (int)local_40 + 1;
    local_40 = CONCAT44(local_40._4_4_,iVar11);
    if (*(int *)(local_48 + 0xc) <= iVar11) break;
    lVar13 = *(int64_t *)(*(int64_t *)(local_48 + 0x10) + 8 + lVar13 * 8);
    local_58 = lVar13;
    pvVar3 = _pthread_getspecific((void*)*(int64_t *)(local_48 + 0x10));
    lVar6 = local_58;
    if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar13 = lVar6, lVar4 != 0)) {
      lVar13 = *(int64_t *)(lVar6 + 0x20 + (uint64_t)(*(uint *)(lVar4 + 0x154) & 1) * 8);
    }
    iVar11 = *(int *)(puVar2 + 3);
    lVar6 = (int64_t)iVar11;
    iVar7 = iVar11 + 7;
    if (-1 < lVar6) {
      iVar7 = iVar11;
    }
    if (7 < lVar6) {
      iVar7 = iVar7 >> 3;
      lVar4 = 0;
      do {
        dVar14 = *(double *)(puVar2[2] + lVar4 * 8);
        if ((dVar14 == *(double *)(lVar13 + 0x38)) &&
           (!NAN(dVar14) && !NAN(*(double *)(lVar13 + 0x38)))) goto LAB_013f8d6f;
        lVar4 = lVar4 + 1;
      } while (iVar7 != (int)lVar4);
    }
    FUN_00c8e340(iVar7,1);
    *(void*)(puVar2[2] + lVar6) = *(void*)(lVar13 + 0x38);
LAB_013f8d6f:
  }
  FUN_01a81420();
  FUN_00d50b20();
LAB_013f8fbf:
  local_58 = 0;
  local_50 = FUN_00e8b590;
  plVar9 = &local_58;
  _qsort_r(plVar9,8,0x1708ec0,param_4,
           (int *)CONCAT44(in_stack_ffffffffffffff7c,in_stack_ffffffffffffff78));
  local_58 = CONCAT44(local_58._4_4_,0xffffffff);
  plVar5 = (int64_t *)FUN_000bea40();
  (**(code **)(*plVar5 + 0x18))();
  if (7 < *(int *)(puVar2 + 3)) {
    lVar13 = 0;
    do {
      uVar1 = *(void*)(puVar2[2] + lVar13 * 8);
      pvVar3 = _pthread_getspecific((void*)plVar9);
      plVar12 = plVar5;
      if ((pvVar3 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
        plVar9 = plVar5;
        plVar12 = (int64_t *)plVar5[(uint64_t)(*(uint *)(lVar6 + 0x154) & 1) + 4];
      }
      plVar10 = (int64_t *)*arg1;
      pVar8 = (void*)plVar9;
      pvVar3 = _pthread_getspecific(pVar8);
      if (pvVar3 != (void *)0x0) {
        plVar10 = (int64_t *)*arg1;
        lVar6 = FUN_00e8b990();
        if (lVar6 != 0) {
          plVar10 = (int64_t *)plVar10[(uint64_t)(*(uint *)(lVar6 + 0x154) & 1) + 4];
        }
      }
      dVar14 = (double)(**(code **)(*plVar10 + 0x3d8))(uVar1,param_1);
      plVar9 = (int64_t *)*param_2;
      pvVar3 = _pthread_getspecific(pVar8);
      if (pvVar3 != (void *)0x0) {
        plVar9 = (int64_t *)*param_2;
        lVar6 = FUN_00e8b990();
        if (lVar6 != 0) {
          plVar9 = (int64_t *)plVar9[(uint64_t)(*(uint *)(lVar6 + 0x154) & 1) + 4];
        }
      }
      dVar15 = (double)(**(code **)(*plVar9 + 0x3d8))(uVar1,param_1);
      (**(code **)(*plVar12 + 0x418))(uVar1,dVar14 * dVar15);
      if ((local_a0 != '\0') && (local_a8 != 0)) {
        FUN_00d50b20();
      }
      iVar11 = *(int *)(puVar2 + 3);
      iVar7 = iVar11 + 7;
      if (-1 < iVar11) {
        iVar7 = iVar11;
      }
      plVar9 = (int64_t *)(uint64_t)(uint)(iVar7 >> 3);
      lVar13 = lVar13 + 1;
    } while ((int)lVar13 < iVar7 >> 3);
  }
  *this_ptr = plVar5;
  *(void*)(this_ptr + 1) = 1;
  FUN_00d50b20();
  return this_ptr;
}

