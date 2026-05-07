// Function: FUN_01293ed0
// Address: 01293ed0
// Size: 1786 bytes
// Class: Unknown

void* FUN_01293ed0(int64_t *param_1,int64_t *param_2)

{
  uint64_t uVar1;
  uint64_t uVar2;
  int64_t *plVar3;
  int64_t lVar4;
  void *pvVar5;
  int64_t lVar6;
  uint64_t uVar7;
  int64_t lVar8;
  void*puVar9;
  uint64_t *puVar10;
  void* pVar11;
  int iVar12;
  int64_t *arg1;
  void*this_ptr;
  uint64_t uVar13;
  double dVar14;
  uint64_t local_e0;
  char local_d8;
  int64_t local_d0;
  char local_c8;
  uint64_t local_c0;
  char local_b8;
  void*local_b0;
  char local_a8;
  uint64_t local_a0;
  char local_98;
  double local_90;
  int64_t local_70;
  uint64_t local_68;
  int64_t local_60;
  uint64_t local_58;
  int local_50;
  int64_t *local_48;
  uint64_t local_40;
  char local_38;
  
  if (*param_2 != 0) {
    FUN_00c8e340();
  }
  if (*param_1 != 0) {
    FUN_00d216c0();
  }
  if ((*arg1 == 0) || (*(int *)(*arg1 + 0xc) == 0)) {
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
    return this_ptr;
  }
  plVar3 = (int64_t *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar3 + 0x18))();
  local_48 = plVar3;
  if (*arg1 != 0) {
    local_68._0_1_ = '\0';
    local_70 = 0;
    local_58 = 0xffffffff;
    local_50 = 0;
    local_58._4_4_ = 0;
    local_60 = *arg1;
    while( true ) {
      if (local_58._4_4_ != 0) {
        if (local_58._4_4_ < 1) {
          iVar12 = -local_58._4_4_;
        }
        else {
          iVar12 = (int)local_58 - local_58._4_4_;
          local_58 = CONCAT44(local_58._4_4_,iVar12);
          FUN_00d23690();
          local_50 = local_50 + local_58._4_4_;
          iVar12 = 0;
        }
        local_58 = CONCAT44(iVar12,(int)local_58);
      }
      lVar4 = (int64_t)(int)local_58;
      iVar12 = (int)local_58 + 1;
      local_58 = CONCAT44(local_58._4_4_,iVar12);
      if (*(int *)(local_60 + 0xc) <= iVar12) break;
      lVar6 = *(int64_t *)(local_60 + 0x10);
      lVar4 = *(int64_t *)(lVar6 + 8 + lVar4 * 8);
      local_70 = lVar4;
      pvVar5 = _pthread_getspecific((void*)lVar6);
      lVar8 = local_70;
      pVar11 = (void*)lVar6;
      if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar4 = lVar8, lVar6 != 0)) {
        lVar4 = *(int64_t *)(lVar8 + 0x20 + (uint64_t)(*(uint *)(lVar6 + 0x154) & 1) * 8);
      }
      if (*(int64_t *)(lVar4 + 0xd8) != 0) {
        pvVar5 = _pthread_getspecific(pVar11);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar13 = FUN_011ef490();
        uVar1 = local_40;
        if (local_38 == '\0') {
          if (local_40 != 0) {
            uVar13 = FUN_00d50b00();
            if ((local_38 != '\0') && (local_40 != 0)) {
              uVar13 = FUN_00d50b20();
            }
            goto LAB_012940b0;
          }
        }
        else if (local_40 != 0) {
LAB_012940b0:
          local_e0 = uVar1;
          local_d8 = '\0';
          dVar14 = (double)FUN_01294910(uVar13,&local_e0);
          uVar2 = local_40;
          if (local_38 == '\0') {
            if (((local_40 != 0) && (dVar14 = (double)FUN_00d50b00(), local_38 != '\0')) &&
               (local_40 != 0)) {
              dVar14 = (double)FUN_00d50b20();
            }
          }
          else {
            local_38 = '\0';
          }
          if ((local_d8 != '\0') && (local_e0 != 0)) {
            dVar14 = (double)FUN_00d50b20();
          }
          if (uVar2 == 0) {
LAB_0129418b:
            local_d0 = local_70;
            local_c8 = '\0';
            local_c0 = uVar1;
            local_b8 = '\0';
            FUN_012949c0(dVar14,&local_c0);
            if ((local_b8 != '\0') && (local_c0 != 0)) {
              FUN_00d50b20();
            }
            if ((local_c8 != '\0') && (local_d0 != 0)) {
              FUN_00d50b20();
            }
            if (uVar2 != 0) goto LAB_01293f90;
          }
          else {
            pvVar5 = _pthread_getspecific(pVar11);
            uVar7 = uVar2;
            if ((pvVar5 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
              uVar7 = *(uint64_t *)(uVar2 + 0x20 + (uint64_t)(*(uint *)(lVar4 + 0x154) & 1) * 8);
            }
            lVar4 = local_70;
            local_90 = *(double *)(uVar7 + 0xe8);
            pvVar5 = _pthread_getspecific(pVar11);
            lVar6 = local_70;
            if ((pvVar5 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar4 = lVar6, lVar8 != 0)) {
              lVar4 = *(int64_t *)(lVar6 + 0x20 + (uint64_t)(*(uint *)(lVar8 + 0x154) & 1) * 8);
            }
            dVar14 = local_90;
            if (*(double *)(lVar4 + 0xe8) <= local_90 && local_90 != *(double *)(lVar4 + 0xe8))
            goto LAB_0129418b;
LAB_01293f90:
            FUN_00d50b20();
          }
          FUN_00d50b20();
        }
      }
    }
    FUN_001159b0();
  }
  FUN_00c9fe20();
  lVar4 = local_70;
  local_40 = CONCAT71(local_40._1_7_,(char)local_68);
  puVar10 = &local_68;
  if ((char)local_68 == '\0') {
    puVar10 = &local_40;
  }
  *(void*)puVar10 = 0;
  if (((char)local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  iVar12 = *(int *)(lVar4 + 0xc);
  if ((char)local_40 != '\0') {
    FUN_00d50b20();
  }
  if (iVar12 == 0) {
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
    plVar3 = local_48;
    goto LAB_012945ba;
  }
  if (*param_2 != 0) {
    puVar9 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar9 = &g_02572358;
    (*g_02572370)();
    FUN_00d22760();
    if (local_48 != (int64_t *)0x0) {
      local_68._0_1_ = '\0';
      local_70 = 0;
      local_60 = local_48[2];
      local_58 = local_58 & 0xffffffff00000000;
      if (0 < *(int *)(local_60 + 0xc)) {
        iVar12 = 0;
        do {
          local_70 = *(int64_t *)(*(int64_t *)(local_60 + 0x10) + (int64_t)iVar12 * 8);
          FUN_01294a70((int64_t)iVar12,&local_70);
          uVar1 = local_a0;
          if (local_98 == '\0') {
            if (local_a0 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_98 = '\0';
          }
          local_40 = uVar1;
          local_38 = '\0';
          FUN_00d21140();
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
          if (uVar1 != 0) {
            FUN_00d50b20();
          }
          if ((local_98 != '\0') && (local_a0 != 0)) {
            FUN_00d50b20();
          }
          lVar4 = *param_2;
          local_a8 = '\0';
          local_b0 = puVar9;
          local_90 = (double)FUN_012912a0(0,0,0);
          iVar12 = *(int *)(lVar4 + 0x18);
          FUN_00c8e340(local_90,1);
          *(double *)(*(int64_t *)(lVar4 + 0x10) + (int64_t)iVar12) = local_90;
          if ((local_a8 != '\0') && (local_b0 != (void*)0x0)) {
            FUN_00d50b20();
          }
          FUN_00d216c0();
          iVar12 = (int)local_58 + 1;
          local_58 = CONCAT44(local_58._4_4_,iVar12);
        } while (iVar12 < *(int *)(local_60 + 0xc));
      }
      if (((char)local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      if (puVar9 == (void*)0x0) goto LAB_01294493;
    }
    FUN_00d50b20();
  }
LAB_01294493:
  lVar4 = *param_1;
  if (lVar4 != 0) {
    uVar13 = FUN_00ca1380();
    lVar6 = local_70;
    local_40 = CONCAT71(local_40._1_7_,(char)local_68);
    puVar10 = &local_68;
    if ((char)local_68 == '\0') {
      puVar10 = &local_40;
    }
    *(void*)puVar10 = 0;
    if (((char)local_68 != '\0') && (local_70 != 0)) {
      uVar13 = FUN_00d50b20();
    }
    if ((char)local_40 == '\0') {
      if (lVar6 != 0) {
        uVar13 = FUN_00d50b00();
      }
    }
    else {
      local_40 = local_40 & 0xffffffffffffff00;
    }
    local_68._0_1_ = '\0';
    local_70 = lVar6;
    FUN_00d214d0(uVar13,*(void*)(lVar4 + 0xc));
    if (((char)local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    if (lVar6 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_00c9fe20();
  lVar4 = local_70;
  puVar10 = &local_68;
  if ((char)local_68 == '\0') {
    puVar10 = &local_40;
  }
  local_40 = CONCAT71(local_40._1_7_,(char)local_68);
  *(void*)puVar10 = 0;
  if (((char)local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  plVar3 = local_48;
  if (((char)local_40 == '\0') && (lVar4 != 0)) {
    FUN_00d50b00();
  }
  FUN_01318520();
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
LAB_012945ba:
  if (plVar3 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return this_ptr;
}

