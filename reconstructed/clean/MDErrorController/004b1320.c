// Function: FUN_004b1320
// Address: 004b1320
// Size: 1906 bytes
// Class: MDErrorController

uint64_t FUN_004b1320(int64_t *param_1,int param_2,int64_t *param_3,uint32_t param_4)

{
  int64_t *plVar1;
  bool bVar2;
  char cVar3;
  int64_t lVar4;
  int iVar5;
  char *pcVar6;
  int64_t **pplVar7;
  int iVar8;
  int64_t *arg1;
  int64_t lVar9;
  int64_t this_ptr;
  uint uVar10;
  int64_t *plVar11;
  char local_res8;
  char local_res10;
  int64_t local_150;
  uint8_t local_148;
  int64_t local_140;
  uint8_t local_138;
  int64_t local_128;
  char local_120;
  int64_t local_118;
  char local_110;
  int64_t *local_108;
  char local_100;
  int64_t local_f8;
  char local_f0;
  int64_t *local_e8;
  char local_e0;
  int64_t *local_d8;
  char local_d0;
  int64_t local_c8;
  char local_c0;
  int64_t *local_b8;
  char local_b0;
  int64_t local_a8;
  char local_a0;
  int64_t *local_98;
  int64_t *local_90;
  char local_88;
  int64_t *local_70;
  char local_68 [8];
  int64_t local_60;
  uint64_t local_58;
  int local_50;
  int64_t *local_48;
  int64_t *local_40;
  char local_38 [8];
  
  local_128 = *arg1;
  if (local_128 == 0) {
    return 0;
  }
  if (*(int *)(local_128 + 0xc) == 0) {
    return 0;
  }
  local_98 = (int64_t *)CONCAT44(local_98._4_4_,param_4);
  local_120 = '\0';
  local_150 = *param_1;
  local_148 = 0;
  local_140 = *param_3;
  local_138 = 0;
  local_40 = param_1;
  FUN_004b0830(&local_150,&local_128,local_res8,local_res10);
  plVar11 = (int64_t *)*arg1;
  if (plVar11 == local_70) {
    if (((char)arg1[1] == '\0') && (local_70 != (int64_t *)0x0)) {
      if (local_68[0] == '\0') {
        FUN_00d50b00();
      }
      goto LAB_004b1460;
    }
    if ((local_68[0] != '\0') && (local_70 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    lVar4 = arg1[1];
    if (local_68[0] == '\0') {
      if (local_70 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      *arg1 = (int64_t)local_70;
      if (((char)lVar4 != '\0') && (plVar11 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      *arg1 = (int64_t)local_70;
      if (((char)lVar4 != '\0') && (plVar11 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
LAB_004b1460:
    *(void*)(arg1 + 1) = 1;
  }
  if ((local_120 != '\0') && (local_128 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d23310();
  pcVar6 = local_38;
  if (local_68[0] != '\0') {
    pcVar6 = local_68;
  }
  local_38[0] = local_68[0];
  *pcVar6 = '\0';
  if ((local_68[0] != '\0') && (local_70 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  local_118 = *param_3;
  local_110 = '\0';
  pplVar7 = &local_90;
  (**(code **)(*local_70 + 0x98))();
  plVar11 = local_90;
  FUN_00053ac0();
  if (plVar11 == (int64_t *)0x0) {
LAB_004b1519:
    pplVar7 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar11 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 == '\0') goto LAB_004b1519;
  }
  plVar11 = *pplVar7;
  if (*(char *)(pplVar7 + 1) == '\0') {
    if (plVar11 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar7 + 1) = 0;
  }
  if ((local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_110 != '\0') && (local_118 != 0)) {
    FUN_00d50b20();
  }
  if (local_38[0] != '\0') {
    FUN_00d50b20();
  }
  if (plVar11 == (int64_t *)0x0) goto LAB_004b1a88;
  FUN_00d46530();
  local_48 = local_70;
  if ((((local_68[0] == '\0') && (local_70 != (int64_t *)0x0)) &&
      (FUN_00d50b00(), local_68[0] != '\0')) && (local_70 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (*arg1 != 0) {
    local_68[0] = '\0';
    local_70 = (int64_t *)0x0;
    local_58 = 0xffffffff;
    local_50 = 0;
    local_58._4_4_ = 0;
    local_60 = *arg1;
    while( true ) {
      if (local_58._4_4_ != 0) {
        if (local_58._4_4_ < 1) {
          iVar8 = -local_58._4_4_;
        }
        else {
          iVar8 = (int)local_58 - local_58._4_4_;
          local_58 = CONCAT44(local_58._4_4_,iVar8);
          FUN_00d23690();
          local_50 = local_50 + local_58._4_4_;
          iVar8 = 0;
        }
        local_58 = CONCAT44(iVar8,(int)local_58);
      }
      lVar4 = (int64_t)(int)local_58;
      iVar8 = (int)local_58 + 1;
      local_58 = CONCAT44(local_58._4_4_,iVar8);
      if (*(int *)(local_60 + 0xc) <= iVar8) break;
      local_70 = *(int64_t **)(*(int64_t *)(local_60 + 0x10) + 8 + lVar4 * 8);
      local_108 = local_48;
      local_100 = '\0';
      local_f8 = *param_3;
      local_f0 = '\0';
      (**(code **)(*local_70 + 0x90))(*(int64_t *)(local_60 + 0x10),&local_f8);
      if ((local_f0 != '\0') && (local_f8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_100 != '\0') && (local_108 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    FUN_00083b20();
  }
  if (param_2 != 0) {
    local_e0 = '\0';
    local_e8 = plVar11;
    cVar3 = (**(code **)(*local_48 + 0x50))();
    if ((local_e0 != '\0') && (local_e8 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (cVar3 != '\0') {
      FUN_00d46530();
      if (plVar11 != local_70) {
        plVar11 = local_70;
        if (local_68[0] != '\0') {
          FUN_00d50b20();
          goto LAB_004b178d;
        }
        if (local_70 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        FUN_00d50b20();
      }
      if ((local_68[0] != '\0') && (plVar11 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
LAB_004b178d:
  if ((((local_res10 != '\0') || ((char)local_98 != '\0')) && (iVar8 = FUN_00d45870(), iVar8 != 0))
     && ((local_res8 == '\0' && (lVar4 = *local_40, lVar4 != 0)))) {
    local_68[0] = '\0';
    local_50 = 0;
    local_58 = 0;
    local_98 = param_3;
    local_60 = lVar4;
    local_40 = plVar11;
    if (0 < *(int *)(lVar4 + 0xc)) {
      uVar10 = 0;
      do {
        plVar11 = *(int64_t **)(*(int64_t *)(lVar4 + 0x10) + (uint64_t)uVar10 * 8);
        local_d0 = '\0';
        local_d8 = plVar11;
        cVar3 = FUN_00d23d70();
        if ((local_d0 != '\0') && (local_d8 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (cVar3 == '\0') {
          iVar8 = *(int *)(*(int64_t *)(this_ptr + 0x10) + 0x18);
          iVar5 = iVar8 + 3;
          if (-1 < iVar8) {
            iVar5 = iVar8;
          }
          if (3 < iVar8) {
            iVar5 = iVar5 >> 2;
            lVar9 = 0;
            do {
              if (*(uint *)(*(int64_t *)(*(int64_t *)(this_ptr + 0x10) + 0x10) + lVar9 * 4) ==
                  uVar10) goto LAB_004b180c;
              lVar9 = lVar9 + 1;
            } while (iVar5 != (int)lVar9);
          }
          local_c8 = *local_98;
          local_c0 = '\0';
          (**(code **)(*plVar11 + 0x98))(iVar5,&local_c8);
          plVar1 = local_90;
          FUN_00053ac0();
          pplVar7 = (int64_t **)&g_02802688;
          if (plVar1 != (int64_t *)0x0) {
            (**(code **)(*plVar1 + 0x360))();
            cVar3 = FUN_00e85ea0();
            pplVar7 = &local_90;
            if (cVar3 == '\0') {
              pplVar7 = (int64_t **)&g_02802688;
            }
          }
          plVar1 = *pplVar7;
          if (*(char *)(pplVar7 + 1) == '\0') {
            if (plVar1 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            *(void*)(pplVar7 + 1) = 0;
          }
          if ((local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_c0 != '\0') && (local_c8 != 0)) {
            FUN_00d50b20();
          }
          if (plVar1 != (int64_t *)0x0) {
            iVar8 = FUN_00d45870();
            iVar5 = FUN_00d45870();
            bVar2 = 1 < iVar5;
            if (iVar8 < 2) {
              bVar2 = iVar8 == iVar5;
            }
            if (bVar2) {
              local_b8 = local_40;
              local_b0 = '\0';
              local_a8 = *local_98;
              local_a0 = '\0';
              (**(code **)(*plVar11 + 0x90))(iVar8 == iVar5,&local_a8);
              if ((local_a0 != '\0') && (local_a8 != 0)) {
                FUN_00d50b20();
              }
              if ((local_b0 != '\0') && (local_b8 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
            }
            FUN_00d50b20();
          }
        }
LAB_004b180c:
        uVar10 = uVar10 + 1;
        local_58 = CONCAT44(local_58._4_4_,uVar10);
      } while ((int)uVar10 < *(int *)(lVar4 + 0xc));
    }
    FUN_00083b20();
    plVar11 = local_40;
  }
  if ((param_2 == 0) && (*(int *)(*arg1 + 0xc) < 2)) {
    if (*(int64_t *)(this_ptr + 0x18) != 0) {
      *(void*)(this_ptr + 0x18) = 0;
      FUN_00d50b20();
    }
    *(void*)(this_ptr + 0x20) = 0xffffffffffffffff;
  }
  if (local_48 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
LAB_004b1a88:
  if (plVar11 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return 0;
}

