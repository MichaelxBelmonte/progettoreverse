// ===================================================================
// MDErrorController — Complete reconstructed pseudocode
// 8 functions
// ===================================================================


// ============================================================
// 004b0830
// ============================================================
// Function: FUN_004b0830
// Address: 004b0830
// Size: 2035 bytes
// Class: MDErrorController

int64_t * FUN_004b0830(int64_t *param_1,int64_t *param_2,char param_3,char param_4)

{
  bool bVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int64_t *plVar7;
  int64_t lVar8;
  void*puVar9;
  int64_t *plVar10;
  int64_t lVar11;
  int64_t arg1;
  int64_t *this_ptr;
  int64_t lVar12;
  int64_t *local_res8;
  int64_t local_d8;
  char local_d0;
  int64_t *local_c8;
  char local_c0;
  int64_t *local_b8;
  char local_b0;
  int64_t *local_a8;
  char local_a0;
  int64_t local_98;
  char local_90;
  int64_t local_88;
  char local_80;
  int64_t *local_78;
  int64_t *local_70;
  int64_t local_68;
  int64_t local_60;
  uint64_t local_58;
  int local_50;
  int64_t *local_48;
  char local_40;
  undefined7 uStack_3f;
  char local_38;
  
  if ((*param_2 == 0) || (*(int *)(*param_2 + 0xc) == 0)) {
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
    return this_ptr;
  }
  local_48 = param_1;
  if (param_4 == '\0') {
    if (param_3 == '\0') {
      FUN_00d23310();
      plVar10 = local_70;
      plVar7 = (int64_t *)&local_40;
      if ((char)local_68 != '\0') {
        plVar7 = &local_68;
      }
      local_40 = (char)local_68;
      *(void*)plVar7 = 0;
      if (((char)local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      plVar7 = *(int64_t **)(arg1 + 0x18);
      if (plVar7 == plVar10) {
        if ((local_40 != '\0') && (plVar10 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        if ((local_40 == '\0') && (plVar10 != (int64_t *)0x0)) {
          FUN_00d50b00();
          plVar7 = *(int64_t **)(arg1 + 0x18);
        }
        *(int64_t **)(arg1 + 0x18) = plVar10;
        if (plVar7 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
      }
      FUN_00c8e340();
    }
    else {
      lVar8 = *(int64_t *)(arg1 + 0x18);
      if (lVar8 != 0) {
        lVar12 = *(int64_t *)(arg1 + 0x10);
        local_80 = 0;
        FUN_00d50b00();
        local_80 = '\x01';
        local_88 = lVar8;
        iVar6 = FUN_00d237a0();
        iVar5 = *(int *)(lVar12 + 0x18);
        lVar8 = (int64_t)iVar5;
        iVar4 = iVar5 + 3;
        if (-1 < lVar8) {
          iVar4 = iVar5;
        }
        if (3 < lVar8) {
          iVar4 = iVar4 >> 2;
          lVar11 = 0;
          do {
            if (*(int *)(*(int64_t *)(lVar12 + 0x10) + lVar11 * 4) == iVar6) goto LAB_004b0bd7;
            lVar11 = lVar11 + 1;
          } while (iVar4 != (int)lVar11);
        }
        FUN_00c8e340(iVar4,1);
        *(int *)(*(int64_t *)(lVar12 + 0x10) + lVar8) = iVar6;
LAB_004b0bd7:
        if ((local_80 != '\0') && (local_88 != 0)) {
          FUN_00d50b20();
        }
      }
      FUN_00d23310();
      plVar10 = local_70;
      plVar7 = (int64_t *)&local_40;
      if ((char)local_68 != '\0') {
        plVar7 = &local_68;
      }
      local_40 = (char)local_68;
      *(void*)plVar7 = 0;
      if (((char)local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      plVar7 = *(int64_t **)(arg1 + 0x18);
      if (plVar7 == plVar10) {
        if ((local_40 != '\0') && (plVar10 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        if ((local_40 == '\0') && (plVar10 != (int64_t *)0x0)) {
          FUN_00d50b00();
          plVar7 = *(int64_t **)(arg1 + 0x18);
        }
        *(int64_t **)(arg1 + 0x18) = plVar10;
        if (plVar7 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
      }
      iVar5 = *(int *)(*param_2 + 0xc);
      while (1 < iVar5) {
        FUN_00d23740();
        iVar5 = *(int *)(*param_2 + 0xc);
      }
      iVar5 = *(int *)(arg1 + 0x20);
      if ((-1 < iVar5) && (iVar4 = *(int *)(arg1 + 0x24), iVar5 <= iVar4)) {
        do {
          lVar8 = *(int64_t *)(arg1 + 0x10);
          iVar6 = *(int *)(lVar8 + 0x18);
          lVar12 = (int64_t)iVar6;
          iVar2 = iVar6 + 3;
          if (-1 < lVar12) {
            iVar2 = iVar6;
          }
          if (3 < lVar12) {
            lVar11 = 0;
            do {
              if (*(int *)(*(int64_t *)(lVar8 + 0x10) + lVar11 * 4) == iVar5) goto LAB_004b0d6e;
              lVar11 = lVar11 + 1;
            } while (iVar2 >> 2 != (int)lVar11);
          }
          FUN_00c8e340();
          *(int *)(*(int64_t *)(lVar8 + 0x10) + lVar12) = iVar5;
          iVar4 = *(int *)(arg1 + 0x24);
LAB_004b0d6e:
          bVar1 = iVar5 < iVar4;
          iVar5 = iVar5 + 1;
        } while (bVar1);
      }
    }
    *(void*)(arg1 + 0x20) = 0xffffffffffffffff;
    goto LAB_004b0f34;
  }
  FUN_00d23310();
  plVar10 = local_70;
  local_40 = (char)local_68;
  plVar7 = &local_68;
  if ((char)local_68 == '\0') {
    plVar7 = (int64_t *)&local_40;
  }
  *(void*)plVar7 = 0;
  if (((char)local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_40 == '\0') && (plVar10 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  local_78 = plVar10;
  iVar4 = FUN_00d237a0();
  iVar5 = *(int *)(arg1 + 0x20);
  if ((((iVar5 < 0) || (*(int *)(arg1 + 0x24) < iVar5)) || (iVar4 != iVar5)) ||
     (iVar4 != *(int *)(arg1 + 0x24))) {
    *(void*)(arg1 + 0x20) = 0xffffffff;
    if (*(int64_t *)(arg1 + 0x18) != 0) {
      FUN_00d50b00();
      FUN_00d50b20();
      lVar8 = *(int64_t *)(arg1 + 0x18);
      if (lVar8 != 0) {
        FUN_00d50b00();
      }
      iVar5 = FUN_00d237a0();
      *(int *)(arg1 + 0x20) = iVar5;
      if (lVar8 != 0) {
        FUN_00d50b20();
        iVar5 = *(int *)(arg1 + 0x20);
      }
      if (-1 < iVar5) goto LAB_004b0df0;
    }
    if ((*local_res8 != 0) && (*local_48 != 0)) {
      local_68._0_1_ = '\0';
      local_70 = (int64_t *)0x0;
      local_58 = 0xffffffff;
      local_50 = 0;
      local_58._4_4_ = 0;
      local_60 = *local_48;
      do {
        if (local_58._4_4_ != 0) {
          if (local_58._4_4_ < 1) {
            iVar5 = -local_58._4_4_;
          }
          else {
            iVar5 = (int)local_58 - local_58._4_4_;
            local_58 = CONCAT44(local_58._4_4_,iVar5);
            FUN_00d23690();
            local_50 = local_50 + local_58._4_4_;
            iVar5 = 0;
          }
          local_58 = CONCAT44(iVar5,(int)local_58);
        }
        lVar8 = (int64_t)(int)local_58;
        iVar5 = (int)local_58 + 1;
        local_58 = CONCAT44(local_58._4_4_,iVar5);
        if (*(int *)(local_60 + 0xc) <= iVar5) goto LAB_004b0dd1;
        local_70 = *(int64_t **)(*(int64_t *)(local_60 + 0x10) + 8 + lVar8 * 8);
        local_d8 = *local_res8;
        local_d0 = '\0';
        (**(code **)(*local_70 + 0x98))(*(int64_t *)(local_60 + 0x10),&local_d8);
        plVar7 = (int64_t *)CONCAT71(uStack_3f,local_40);
        FUN_00053ac0();
        plVar10 = &g_02802688;
        if (plVar7 != (int64_t *)0x0) {
          (**(code **)(*plVar7 + 0x360))();
          cVar3 = FUN_00e85ea0();
          plVar10 = (int64_t *)&local_40;
          if (cVar3 == '\0') {
            plVar10 = &g_02802688;
          }
        }
        lVar8 = *plVar10;
        if ((char)plVar10[1] == '\0') {
          if (lVar8 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          *(void*)(plVar10 + 1) = 0;
        }
        if ((local_38 != '\0') && (CONCAT71(uStack_3f,local_40) != 0)) {
          FUN_00d50b20();
        }
        if ((local_d0 != '\0') && (local_d8 != 0)) {
          FUN_00d50b20();
        }
        if (lVar8 != 0) {
          iVar5 = FUN_00d45870();
          if (iVar5 != 0) goto LAB_004b0dbf;
          FUN_00d50b20();
        }
      } while( true );
    }
    goto LAB_004b0de8;
  }
  goto LAB_004b0e51;
LAB_004b0dbf:
  *(int *)(arg1 + 0x20) = local_50 + (int)local_58;
  FUN_00d50b20();
LAB_004b0dd1:
  FUN_00083b20();
  if (*(int *)(arg1 + 0x20) < 0) {
LAB_004b0de8:
    *(void*)(arg1 + 0x20) = 0;
  }
LAB_004b0df0:
  local_c8 = local_78;
  local_c0 = '\0';
  iVar5 = FUN_00d237a0();
  *(int *)(arg1 + 0x24) = iVar5;
  if ((local_c0 != '\0') && (local_c8 != (int64_t *)0x0)) {
    FUN_00d50b20();
    iVar5 = *(int *)(arg1 + 0x24);
  }
  if (iVar5 < 0) {
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
    if (local_78 == (int64_t *)0x0) {
      return this_ptr;
    }
    FUN_00d50b20();
    return this_ptr;
  }
  if (iVar5 < *(int *)(arg1 + 0x20)) {
    *(int *)(arg1 + 0x24) = *(int *)(arg1 + 0x20);
    *(int *)(arg1 + 0x20) = iVar5;
  }
LAB_004b0e51:
  puVar9 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar9 = &g_02572358;
  (*g_02572370)();
  lVar8 = *param_2;
  *param_2 = (int64_t)puVar9;
  if (((char)param_2[1] != '\0') && (lVar8 != 0)) {
    FUN_00d50b20();
  }
  *(void*)(param_2 + 1) = 1;
  lVar8 = (int64_t)*(int *)(arg1 + 0x20);
  if (*(int *)(arg1 + 0x20) <= *(int *)(arg1 + 0x24)) {
    do {
      if (*(int *)(*local_48 + 0xc) <= lVar8) break;
      lVar12 = *(int64_t *)(*(int64_t *)(*local_48 + 0x10) + lVar8 * 8);
      local_90 = 0;
      if (lVar12 != 0) {
        FUN_00d50b00();
      }
      local_90 = '\x01';
      local_98 = lVar12;
      FUN_00d21140();
      if ((local_90 != '\0') && (local_98 != 0)) {
        FUN_00d50b20();
      }
      bVar1 = lVar8 < *(int *)(arg1 + 0x24);
      lVar8 = lVar8 + 1;
    } while (bVar1);
  }
  plVar10 = local_78;
  local_b8 = local_78;
  local_b0 = '\0';
  cVar3 = FUN_00d23d70();
  if ((local_b0 != '\0') && (local_b8 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar3 != '\0') {
    local_a8 = plVar10;
    local_a0 = '\0';
    FUN_00d240d0();
    if ((local_a0 != '\0') && (local_a8 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  if (plVar10 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
LAB_004b0f34:
  *(void*)(this_ptr + 1) = 0;
  lVar8 = *param_2;
  if ((char)param_2[1] == '\0') {
    if (lVar8 != 0) {
      FUN_00d50b00();
    }
    *this_ptr = lVar8;
    *(void*)(this_ptr + 1) = 1;
  }
  else {
    *this_ptr = lVar8;
    *(void*)(this_ptr + 1) = 1;
    *(void*)(param_2 + 1) = 0;
  }
  return this_ptr;
}



// ============================================================
// 004b1320
// ============================================================
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



// ============================================================
// 004afe20
// ============================================================
// Function: FUN_004afe20
// Address: 004afe20
// Size: 1763 bytes
// Class: MDErrorController

uint64_t FUN_004afe20(int64_t *param_1,int64_t *param_2,char param_3,uint param_4)

{
  int64_t *plVar1;
  int64_t *plVar2;
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
  char local_res8;
  int64_t local_130;
  uint8_t local_128;
  int64_t local_120;
  uint8_t local_118;
  int64_t *local_110;
  int64_t *local_108;
  char local_100;
  int64_t local_f0;
  char local_e8;
  int64_t local_e0;
  char local_d8;
  int64_t *local_d0;
  char local_c8;
  int64_t local_c0;
  char local_b8;
  int64_t *local_b0;
  char local_a8;
  int64_t *local_a0;
  char local_98;
  int64_t local_90;
  char local_88;
  uint local_7c;
  int64_t *local_78;
  int64_t *local_68;
  char local_60 [8];
  int64_t local_58;
  uint64_t local_50;
  int local_48;
  int64_t *local_40;
  char local_38 [8];
  
  local_f0 = *arg1;
  if (local_f0 == 0) {
    return 0;
  }
  if (*(int *)(local_f0 + 0xc) == 0) {
    return 0;
  }
  local_e8 = '\0';
  local_130 = *param_2;
  local_128 = 0;
  local_120 = *param_1;
  local_118 = 0;
  local_110 = param_2;
  local_7c = param_4;
  FUN_004b0830(&local_130,&local_f0,param_4 & 0xff,local_res8);
  plVar1 = (int64_t *)*arg1;
  local_78 = param_1;
  if (plVar1 == local_68) {
    if (((char)arg1[1] == '\0') && (local_68 != (int64_t *)0x0)) {
      if (local_60[0] == '\0') {
        FUN_00d50b00();
      }
      goto LAB_004aff56;
    }
    if ((local_60[0] != '\0') && (local_68 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    lVar4 = arg1[1];
    if (local_60[0] == '\0') {
      if (local_68 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      *arg1 = (int64_t)local_68;
      if (((char)lVar4 != '\0') && (plVar1 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      *arg1 = (int64_t)local_68;
      if (((char)lVar4 != '\0') && (plVar1 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
LAB_004aff56:
    *(void*)(arg1 + 1) = 1;
    param_1 = local_78;
  }
  if ((local_e8 != '\0') && (local_f0 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d23310();
  pcVar6 = local_38;
  if (local_60[0] != '\0') {
    pcVar6 = local_60;
  }
  local_38[0] = local_60[0];
  *pcVar6 = '\0';
  if ((local_60[0] != '\0') && (local_68 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  local_e0 = *param_1;
  local_d8 = '\0';
  pplVar7 = &local_108;
  (**(code **)(*local_68 + 0x98))();
  plVar1 = local_108;
  FUN_00053ac0();
  if (plVar1 == (int64_t *)0x0) {
LAB_004b0012:
    pplVar7 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 == '\0') goto LAB_004b0012;
  }
  plVar2 = local_78;
  plVar1 = *pplVar7;
  if (*(char *)(pplVar7 + 1) == '\0') {
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar7 + 1) = 0;
  }
  if ((local_100 != '\0') && (local_108 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_d8 != '\0') && (local_e0 != 0)) {
    FUN_00d50b20();
  }
  if (local_38[0] != '\0') {
    FUN_00d50b20();
  }
  if (plVar1 == (int64_t *)0x0) {
    return 0;
  }
  FUN_00d45ad0();
  FUN_00d46300();
  if ((((local_60[0] == '\0') && (local_68 != (int64_t *)0x0)) &&
      (FUN_00d50b00(), local_60[0] != '\0')) && (local_68 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  local_40 = plVar1;
  if (local_res8 == '\0') {
    lVar9 = *arg1;
    lVar4 = local_58;
    goto joined_r0x004b0119;
  }
  FUN_00d46300();
  if ((local_60[0] != '\0') && (local_68 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d46300();
  if (plVar1 == local_68) {
joined_r0x004b01b7:
    if ((local_60[0] != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    if (local_60[0] == '\0') {
      if (local_68 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      FUN_00d50b20();
      local_40 = local_68;
      goto joined_r0x004b01b7;
    }
    local_40 = local_68;
    FUN_00d50b20();
  }
  param_3 = '\x01';
  lVar9 = *arg1;
  lVar4 = local_58;
joined_r0x004b0119:
  local_58 = lVar9;
  if (local_58 != 0) {
    local_60[0] = '\0';
    local_50 = 0xffffffff;
    local_48 = 0;
    local_50._4_4_ = 0;
    while( true ) {
      if (local_50._4_4_ != 0) {
        if (local_50._4_4_ < 1) {
          iVar8 = -local_50._4_4_;
        }
        else {
          iVar8 = (int)local_50 - local_50._4_4_;
          local_50 = CONCAT44(local_50._4_4_,iVar8);
          FUN_00d23690();
          local_48 = local_48 + local_50._4_4_;
          iVar8 = 0;
        }
        local_50 = CONCAT44(iVar8,(int)local_50);
      }
      lVar4 = (int64_t)(int)local_50;
      iVar8 = (int)local_50 + 1;
      local_50 = CONCAT44(local_50._4_4_,iVar8);
      if (*(int *)(local_58 + 0xc) <= iVar8) break;
      local_d0 = local_68;
      local_c8 = '\0';
      local_c0 = *plVar2;
      local_b8 = '\0';
      (**(code **)(**(int64_t **)(*(int64_t *)(local_58 + 0x10) + 8 + lVar4 * 8) + 0x90))
                (*(int64_t *)(local_58 + 0x10),&local_c0);
      if ((local_b8 != '\0') && (local_c0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_c8 != '\0') && (local_d0 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    FUN_00083b20();
    lVar4 = local_58;
  }
  local_58 = lVar4;
  if ((((param_3 != '\0') && (cVar3 = FUN_00d45ad0(), cVar3 != '\0')) && ((char)local_7c == '\0'))
     && (lVar4 = *local_110, lVar4 != 0)) {
    local_60[0] = '\0';
    local_48 = 0;
    local_50 = 0;
    local_58 = lVar4;
    if (0 < *(int *)(lVar4 + 0xc)) {
      uVar10 = 0;
      do {
        plVar1 = *(int64_t **)(*(int64_t *)(lVar4 + 0x10) + (uint64_t)uVar10 * 8);
        local_a8 = '\0';
        local_b0 = plVar1;
        cVar3 = FUN_00d23d70();
        if ((local_a8 != '\0') && (local_b0 != (int64_t *)0x0)) {
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
                  uVar10) goto LAB_004b0380;
              lVar9 = lVar9 + 1;
            } while (iVar5 != (int)lVar9);
          }
          local_a0 = local_40;
          local_98 = '\0';
          local_90 = *local_78;
          local_88 = '\0';
          (**(code **)(*plVar1 + 0x90))(iVar5,&local_90);
          if ((local_88 != '\0') && (local_90 != 0)) {
            FUN_00d50b20();
          }
          if ((local_98 != '\0') && (local_a0 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
LAB_004b0380:
        uVar10 = uVar10 + 1;
        local_50 = CONCAT44(local_50._4_4_,uVar10);
      } while ((int)uVar10 < *(int *)(lVar4 + 0xc));
    }
    FUN_00083b20();
  }
  cVar3 = FUN_00d45ad0();
  if ((cVar3 == '\0') && (*(int *)(*arg1 + 0xc) < 2)) {
    if (*(int64_t *)(this_ptr + 0x18) != 0) {
      *(void*)(this_ptr + 0x18) = 0;
      FUN_00d50b20();
    }
    *(void*)(this_ptr + 0x20) = 0xffffffffffffffff;
  }
  if (local_68 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (local_40 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return 0;
}



// ============================================================
// 004ac670
// ============================================================
// Function: FUN_004ac670
// Address: 004ac670
// Size: 1501 bytes
// Class: MDErrorController

void FUN_004ac670(void)

{
  int64_t lVar1;
  int64_t lVar2;
  byte bVar3;
  uint64_t uVar4;
  int64_t this_ptr;
  uint64_t uVar5;
  double dVar6;
  int64_t local_100;
  char local_f8;
  int64_t local_f0;
  char local_e8;
  int64_t local_e0;
  char local_d8;
  int64_t local_d0;
  char local_c8;
  int64_t local_c0;
  char local_b8;
  int64_t local_b0;
  char local_a8;
  int64_t local_a0;
  char local_98;
  int64_t local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  if (*(int64_t **)(this_ptr + 0x70) != (int64_t *)0x0) {
    (**(code **)(**(int64_t **)(this_ptr + 0x70) + 0x920))();
    local_80 = local_40;
    local_78 = 0;
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_78 = '\x01';
    FUN_00292400();
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    uVar5 = (**(code **)(**(int64_t **)(this_ptr + 0x70) + 0x920))();
    local_100 = g_02708f20;
    if (g_02708f20 != 0) {
      uVar5 = FUN_00d50b00();
    }
    local_f8 = '\x01';
    FUN_01d5e6e0(uVar5,&local_100);
    lVar1 = local_40;
    if (local_38 == '\0') {
      if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38 = '\0';
    }
    if ((local_f8 != '\0') && (local_100 != 0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    lVar2 = g_027296a0;
    if (lVar1 != 0) {
      if (g_027296a0 != 0) {
        FUN_00d50b00();
      }
      lVar1 = g_026de5c0;
      local_f0 = lVar2;
      local_e8 = '\x01';
      if (g_026de5c0 != 0) {
        FUN_00d50b00();
      }
      local_e0 = lVar1;
      local_d8 = '\x01';
      local_d0 = 0;
      local_c8 = '\0';
      FUN_00d31230(&local_d0,&local_e0);
      local_70 = local_40;
      local_68 = 0;
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      local_68 = '\x01';
      FUN_01d64eb0();
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if ((local_c8 != '\0') && (local_d0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_d8 != '\0') && (local_e0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_e8 != '\0') && (local_f0 != 0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    lVar1 = g_02708e90;
    if (g_02708e90 != 0) {
      FUN_00d50b00();
    }
    dVar6 = (double)FUN_00e7d6f0();
    uVar4 = (uint64_t)(dVar6 * g_023907c0);
    dVar6 = dVar6 * g_023907c0 - g_023907c8;
    uVar5 = FUN_0071a120();
    if ((((local_38 == '\0') && (local_40 != 0)) && (uVar5 = FUN_00d50b00(), local_38 != '\0')) &&
       (local_40 != 0)) {
      uVar5 = FUN_00d50b20();
    }
    bVar3 = (byte)(((int64_t)dVar6 & (int64_t)uVar4 >> 0x3f | uVar4) / 3);
    local_50 = lVar1;
    local_48 = '\0';
    FUN_000175c0(uVar5,&local_50);
    lVar2 = local_40;
    if (local_38 == '\0') {
      if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38 = '\0';
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if (lVar2 != 0) {
      local_38 = '\0';
      local_40 = lVar2;
      bVar3 = FUN_00c70bc0();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    FUN_00d50b20();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if ((lVar2 != 0 & bVar3) != 0) {
      uVar5 = (**(code **)(**(int64_t **)(this_ptr + 0x70) + 0x920))();
      local_c0 = g_026de5e8;
      if (g_026de5e8 != 0) {
        uVar5 = FUN_00d50b00();
      }
      local_b8 = '\x01';
      FUN_01d5e6e0(uVar5,&local_c0);
      lVar1 = local_40;
      if (local_38 == '\0') {
        if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_38 = '\0';
      }
      if ((local_b8 != '\0') && (local_c0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      lVar2 = g_027296a0;
      if (lVar1 != 0) {
        if (g_027296a0 != 0) {
          FUN_00d50b00();
        }
        lVar1 = g_02708eb0;
        local_b0 = lVar2;
        local_a8 = '\x01';
        if (g_02708eb0 != 0) {
          FUN_00d50b00();
        }
        local_a0 = lVar1;
        local_98 = '\x01';
        local_90 = 0;
        local_88 = '\0';
        FUN_00d31230(&local_90,&local_a0);
        local_60 = local_40;
        local_58 = 0;
        if (local_38 == '\0') {
          if (local_40 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        local_58 = '\x01';
        FUN_01d64eb0();
        if ((local_58 != '\0') && (local_60 != 0)) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if ((local_88 != '\0') && (local_90 != 0)) {
          FUN_00d50b20();
        }
        if ((local_98 != '\0') && (local_a0 != 0)) {
          FUN_00d50b20();
        }
        if ((local_a8 != '\0') && (local_b0 != 0)) {
          FUN_00d50b20();
        }
        FUN_00d50b20();
      }
    }
  }
  return;
}



// ============================================================
// 004aeab0
// ============================================================
// Function: FUN_004aeab0
// Address: 004aeab0
// Size: 1880 bytes
// Class: MDErrorController

bool FUN_004aeab0(uint64_t param_1,char param_2,uint64_t param_3,RSA *param_4)

{
  int64_t lVar1;
  bool bVar2;
  int iVar3;
  int64_t lVar4;
  int iVar5;
  int iVar6;
  int64_t *plVar7;
  RSA *pRVar8;
  uchar *from;
  RSA *pRVar9;
  int64_t this_ptr;
  int iVar10;
  uint in_stack_ffffffffffffff18;
  void*local_58;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  lVar1 = *(int64_t *)(this_ptr + 0x80);
  if ((lVar1 != 0) && (param_2 != '\0')) {
    FUN_01ca6970();
    FUN_01ca5d90();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    plVar7 = (int64_t *)FUN_00e8fc40();
    FUN_00022d50();
    (**(code **)(*plVar7 + 0x18))();
    FUN_00e97840();
    lVar4 = g_027092b8;
    if ((local_48 == '\0') && (local_50 != 0)) {
      FUN_00d50b00();
      lVar4 = g_027092b8;
    }
    g_027092b8 = lVar4;
    if (lVar4 != 0) {
      FUN_00d50b00();
    }
    FUN_00ca0840();
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
    if (local_50 != 0) {
      FUN_00d50b20();
    }
    FUN_00e97870();
    local_40 = lVar4;
    if (lVar4 != 0) {
      FUN_00d50b00();
      local_40 = g_027092c0;
      in_stack_ffffffffffffff18 = in_stack_ffffffffffffff18 & 0xffffff00;
      if (g_027092c0 != 0) {
        FUN_00d50b00();
      }
      FUN_00ca0840();
      if (local_40 != 0) {
        FUN_00d50b20();
      }
      if (((char)in_stack_ffffffffffffff18 != '\0') && (lVar4 != 0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    FUN_00e97f30();
    if (local_40 != 0) {
      FUN_00d50b00();
      FUN_00d8cbf0();
      if (local_40 != 0) {
        FUN_00d50b00();
      }
      FUN_00170e00();
      pRVar9 = (RSA *)0x0;
      pRVar8 = (RSA *)_PEM_read_bio_RSA_PUBKEY(0,0);
      _BIO_free((BIO *)pRVar9);
      if (pRVar8 == (RSA *)0x0) {
LAB_004aeea1:
        local_58 = (void*)0x0;
      }
      else {
        iVar5 = _RSA_size(pRVar9);
        local_58 = (void*)FUN_00e8fc40();
        FUN_00d4ff40();
        pRVar9 = (RSA *)&g_025683c0;
        *local_58 = &g_025683c0;
        (*g_025683d8)();
        FUN_00c92170();
        _RSA_size(pRVar9);
        from = (uchar *)FUN_00e83010();
        if (0 < *(int *)(local_40 + 0x18)) {
          iVar10 = *(int *)(local_40 + 0x18);
          do {
            _RSA_size(pRVar9);
            ___bzero();
            iVar3 = iVar5 + -0xb;
            if (iVar10 < iVar5 + -0xb) {
              iVar3 = iVar10;
            }
            pRVar9 = pRVar8;
            iVar6 = _RSA_public_encrypt((int)pRVar8,from,(uchar *)((int64_t)&MACH_HEADER.magic + 1)
                                        ,param_4,in_stack_ffffffffffffff18);
            if (iVar6 == -1) {
              FUN_00e83070();
              _RSA_free(pRVar9);
              if (local_58 != (void*)0x0) {
                FUN_00d50b20();
              }
              goto LAB_004aeea1;
            }
            FUN_00c92190();
            iVar6 = iVar10 - iVar3;
            bVar2 = iVar3 <= iVar10;
            iVar10 = iVar6;
          } while (iVar6 != 0 && bVar2);
        }
        FUN_00e83070();
        _RSA_free(pRVar9);
      }
      if (local_40 != 0) {
        FUN_00d50b20();
      }
      lVar4 = g_027092c8;
      if (local_58 != (void*)0x0) {
        if (g_027092c8 != 0) {
          FUN_00d50b00();
        }
        local_40 = lVar4;
        FUN_00ca0840();
        if (lVar4 != 0) {
          FUN_00d50b20();
        }
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    FUN_00e978a0();
    if (local_40 != 0) {
      FUN_00e978a0();
      if (local_50 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_027092d0;
      local_40 = g_027092d0;
      if (g_027092d0 != 0) {
        FUN_00d50b00();
      }
      FUN_00ca0840();
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (local_50 != 0) {
        FUN_00d50b20();
      }
    }
    FUN_00ca91d0();
    if (local_50 != 0) {
      FUN_00d50b00();
    }
    FUN_00d93320();
    if (local_40 != 0) {
      FUN_00d50b00();
    }
    if (local_50 != 0) {
      FUN_00d50b20();
    }
    FUN_01ca6970();
    lVar4 = g_026fceb8;
    if (g_026fceb8 != 0) {
      FUN_00d50b00();
    }
    FUN_01ca93d0();
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
    if (local_40 != 0) {
      FUN_00d50b20();
    }
    if (plVar7 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  return lVar1 != 0;
}



// ============================================================
// 004ac180
// ============================================================
// Function: FUN_004ac180
// Address: 004ac180
// Size: 737 bytes
// Class: MDErrorController

void FUN_004ac180(uint64_t param_1,float param_2)

{
  int64_t lVar1;
  int64_t *plVar2;
  int64_t lVar3;
  int64_t this_ptr;
  uint64_t extraout_XMM0_Qb;
  uint8_t auVar4 [16];
  uint8_t auVar5 [16];
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  FUN_004aa180();
  plVar2 = (int64_t *)FUN_00e8fc40();
  FUN_0006daf0();
  *(void*)(plVar2 + 0x27) = 0;
  plVar2[0x2e] = 0;
  *(void*)(plVar2 + 0x2f) = 0;
  plVar2[0x30] = 0;
  *(void*)(plVar2 + 0x31) = 0;
  plVar2[0x28] = 0;
  plVar2[0x29] = 0;
  *(void*)(plVar2 + 0x2a) = 0;
  plVar2[0x2b] = 0;
  plVar2[0x2c] = 0;
  *(void*)((int64_t)plVar2 + 0x165) = 0;
  *(void*)((int64_t)plVar2 + 0x18c) = 0;
  *(void*)((int64_t)plVar2 + 0x194) = 0;
  *(void*)((int64_t)plVar2 + 0x199) = 0;
  plVar2[0x3c] = 0;
  plVar2[0x3d] = 0;
  *(void*)(plVar2 + 0x3e) = 0;
  plVar2[0x35] = 0;
  plVar2[0x36] = 0;
  plVar2[0x37] = 0;
  plVar2[0x38] = 0;
  plVar2[0x39] = 0;
  plVar2[0x3a] = 0;
  *(void*)(plVar2 + 0x3b) = 0;
  *plVar2 = (int64_t)&g_024c6e90;
  plVar2[2] = (int64_t)&g_024c7960;
  plVar2[0x3f] = 0;
  (*g_024c6ea8)();
  auVar5._0_8_ = FUN_01e3f820();
  auVar5._8_8_ = extraout_XMM0_Qb;
  auVar4._4_12_ = auVar5._4_12_;
  auVar4._0_4_ = (float)auVar5._0_8_ + param_2 + g_02390d00 + g_023b45d0;
  auVar5 = blendps(auVar4,g_023b45e0,0xe);
  (**(code **)(*plVar2 + 0x4d0))(auVar5._0_8_,g_023b45f0);
  (**(code **)(*plVar2 + 0x558))();
  FUN_01e3b6a0();
  (**(code **)(**(int64_t **)(this_ptr + 0x70) + 0x450))();
  (**(code **)(**(int64_t **)(this_ptr + 0x70) + 0x570))();
  FUN_01e534b0();
  FUN_00d50b00();
  local_70 = g_02703fe0;
  if (g_02703fe0 != 0) {
    FUN_00d50b00();
  }
  lVar1 = g_026fce70;
  local_68 = '\x01';
  if (g_026fce70 != 0) {
    FUN_00d50b00();
  }
  local_60 = lVar1;
  local_58 = '\x01';
  local_50 = 0;
  local_48 = '\0';
  FUN_000bf690(&local_60,&local_70,&local_50);
  lVar1 = *(int64_t *)(this_ptr + 0x78);
  lVar3 = lVar1;
  if (lVar1 == local_40) goto LAB_004ac3e7;
  if (local_38 == '\0') {
    if (local_40 == 0) {
      lVar3 = 0;
      goto LAB_004ac3a5;
    }
    FUN_00d50b00();
    lVar1 = *(int64_t *)(this_ptr + 0x78);
    *(int64_t *)(this_ptr + 0x78) = local_40;
    lVar3 = local_40;
  }
  else {
    local_38 = '\0';
    lVar3 = local_40;
LAB_004ac3a5:
    *(int64_t *)(this_ptr + 0x78) = lVar3;
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
    lVar3 = local_40;
  }
LAB_004ac3e7:
  if ((local_38 != '\0') && (lVar3 != 0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if (this_ptr != 0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}



// ============================================================
// 004ae680
// ============================================================
// Function: FUN_004ae680
// Address: 004ae680
// Size: 536 bytes
// Class: MDErrorController

void FUN_004ae680(uint64_t param_1)

{
  int64_t lVar1;
  int64_t this_ptr;
  int64_t local_98;
  char local_90;
  int64_t *local_88;
  char local_80;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  char local_40;
  int64_t local_38;
  char local_30;
  
  FUN_01e534b0();
  if (*(int64_t **)(this_ptr + 0x90) != (int64_t *)0x0) {
    (**(code **)(**(int64_t **)(this_ptr + 0x90) + 0x640))();
    (**(code **)(*local_88 + 0x370))();
    FUN_01d44a40(param_1,1);
    local_48 = local_38;
    local_40 = 0;
    if (local_30 == '\0') {
      if (local_38 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_30 = '\0';
    }
    local_40 = '\x01';
    FUN_01e12b60();
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
    if ((local_80 != '\0') && (local_88 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    lVar1 = *(int64_t *)(this_ptr + 0x70);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    FUN_01e125e0();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  if ((*(int64_t *)(this_ptr + 0x88) != 0) &&
     (lVar1 = *(int64_t *)(this_ptr + 0x78), lVar1 != 0)) {
    local_50 = 0;
    FUN_00d50b00();
    local_50 = '\x01';
    local_58 = lVar1;
    FUN_01e57260(param_1,&local_58);
    lVar1 = local_38;
    if (local_30 == '\0') {
      if (local_38 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_30 = '\0';
    }
    FUN_01e125e0();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
  }
  if (*(int64_t *)(this_ptr + 0x80) == 0) {
    (**(code **)(**(int64_t **)(this_ptr + 0x98) + 0x478))();
  }
  return;
}



// ============================================================
// 004addb0
// ============================================================
// Function: FUN_004addb0
// Address: 004addb0
// Size: 735 bytes
// Class: MDErrorController
// String references:
//   "handleClose"
//   "copyErrorDeatils"
//   "MDErrorController"

void FUN_004addb0(void)

{
  int iVar1;
  
  // [STATIC_INIT: property registration]
      g_02809668 = "handleClose";
      g_02809670 = &g_027092d8;
      g_02809678 = 0;
      g_02809680 = &g_027093a0;
      g_02809688 = FUN_004afa20;
      g_02809690 = 0x5c1;
      g_02809698 = 0;
      ram_00000000028096a0 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_028096b0 = "copyErrorDeatils";
      g_028096b8 = &g_027092d8;
      g_028096c0 = 0;
      g_028096c8 = &g_027093a0;
      g_028096d0 = FUN_004afa20;
      g_028096d8 = 0x5c9;
      g_028096e0 = 0;
      ram_00000000028096e8 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  return;
}

