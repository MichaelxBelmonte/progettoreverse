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

