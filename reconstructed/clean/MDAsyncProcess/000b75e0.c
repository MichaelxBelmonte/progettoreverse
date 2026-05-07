// Function: FUN_000b75e0
// Address: 000b75e0
// Size: 2047 bytes
// Class: MDAsyncProcess

void FUN_000b75e0(float param_1,int64_t *param_2,uint64_t param_3,int64_t *param_4)

{
  int64_t *plVar1;
  int64_t *plVar2;
  char cVar3;
  char *pcVar4;
  int64_t lVar5;
  int iVar6;
  int64_t *arg1;
  void*this_ptr;
  int64_t **pplVar7;
  int iVar8;
  bool bVar9;
  uint32_t uVar10;
  float fVar11;
  float fVar12;
  int64_t local_108;
  char local_100;
  int64_t local_f8;
  char local_f0;
  float local_e4;
  int64_t *local_e0;
  char local_d8;
  int64_t *local_d0;
  char local_c8;
  int64_t *local_c0;
  char local_b8;
  float local_ac;
  float fVar13;
  float local_9c;
  int64_t *local_80;
  char local_78;
  int64_t *local_70;
  char local_68 [8];
  int64_t local_60;
  uint64_t local_58;
  int local_50;
  float local_44;
  char local_40 [8];
  char local_38 [8];
  
  local_ac = param_1;
  FUN_01e05950();
  plVar2 = local_70;
  local_40[0] = local_68[0];
  pcVar4 = local_40;
  if (local_68[0] != '\0') {
    pcVar4 = local_68;
  }
  *pcVar4 = '\0';
  if ((local_68[0] != '\0') && (local_70 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  local_44 = 0.0;
  if ((int64_t *)*param_4 != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)*param_4 + 0x990))();
    if (local_70 == (int64_t *)0x0) {
      bVar9 = false;
    }
    else {
      pplVar7 = &local_80;
      (**(code **)(*(int64_t *)*param_4 + 0x990))();
      plVar1 = local_80;
      FUN_00053ac0();
      if (plVar1 == (int64_t *)0x0) {
LAB_000b76cc:
        pplVar7 = (int64_t **)&g_02802688;
      }
      else {
        (**(code **)(*plVar1 + 0x360))();
        cVar3 = FUN_00e85ea0();
        if (cVar3 == '\0') goto LAB_000b76cc;
      }
      bVar9 = *pplVar7 != (int64_t *)0x0;
      if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    if ((local_68[0] != '\0') && (local_70 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (bVar9) {
      (**(code **)(*(int64_t *)*param_4 + 0x990))();
      local_44 = (float)FUN_00d459e0();
      if ((local_68[0] != '\0') && (local_70 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  lVar5 = *arg1;
  if (lVar5 != 0) {
    if (*(int *)(lVar5 + 0xc) == 1) {
      uVar10 = FUN_00d23310();
      plVar1 = local_70;
      pcVar4 = local_68;
      if (local_68[0] == '\0') {
        pcVar4 = local_38;
      }
      local_38[0] = local_68[0];
      *pcVar4 = '\0';
      if ((local_68[0] != '\0') && (local_70 != (int64_t *)0x0)) {
        uVar10 = FUN_00d50b20();
      }
      local_108 = *param_2;
      local_100 = '\0';
      pplVar7 = &local_80;
      (**(code **)(*plVar1 + 0x98))(uVar10,&local_108);
      plVar1 = local_80;
      FUN_00053ac0();
      if (plVar1 == (int64_t *)0x0) {
LAB_000b78ef:
        pplVar7 = (int64_t **)&g_02802688;
      }
      else {
        (**(code **)(*plVar1 + 0x360))();
        cVar3 = FUN_00e85ea0();
        if (cVar3 == '\0') goto LAB_000b78ef;
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
      if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_100 != '\0') && (local_108 != 0)) {
        FUN_00d50b20();
      }
      if (local_38[0] != '\0') {
        FUN_00d50b20();
      }
      if (plVar1 != (int64_t *)0x0) {
        local_44 = (float)FUN_00d459e0();
        if ((int64_t *)*param_4 != (int64_t *)0x0) {
          (**(code **)(*(int64_t *)*param_4 + 0x998))();
        }
        (**(code **)(*(int64_t *)*this_ptr + 0x998))();
        local_44 = local_44 / local_ac;
        (**(code **)(*(int64_t *)*this_ptr + 0x928))();
        if ((int64_t *)*param_4 != (int64_t *)0x0) {
          (**(code **)(*(int64_t *)*param_4 + 0x928))(local_44);
        }
        FUN_00d50b20();
      }
      goto LAB_000b7dd6;
    }
    if (*(int *)(lVar5 + 0xc) != 0) {
      local_68[0] = '\0';
      local_70 = (int64_t *)0x0;
      local_58 = 0xffffffff;
      local_50 = 0;
      local_44 = 0.0;
      local_9c = g_02391074;
      local_58._4_4_ = 0;
      iVar8 = 0;
      local_60 = lVar5;
      fVar13 = g_02391078;
      while( true ) {
        if (local_58._4_4_ != 0) {
          if (local_58._4_4_ < 1) {
            iVar6 = -local_58._4_4_;
          }
          else {
            iVar6 = (int)local_58 - local_58._4_4_;
            local_58 = CONCAT44(local_58._4_4_,iVar6);
            FUN_00d23690();
            local_50 = local_50 + local_58._4_4_;
            iVar6 = 0;
          }
          local_58 = CONCAT44(iVar6,(int)local_58);
        }
        lVar5 = (int64_t)(int)local_58;
        iVar6 = (int)local_58 + 1;
        local_58 = CONCAT44(local_58._4_4_,iVar6);
        if (*(int *)(local_60 + 0xc) <= iVar6) break;
        local_70 = *(int64_t **)(*(int64_t *)(local_60 + 0x10) + 8 + lVar5 * 8);
        local_f8 = *param_2;
        local_f0 = '\0';
        (**(code **)(*local_70 + 0x98))(*(int64_t *)(local_60 + 0x10),&local_f8);
        plVar1 = local_80;
        FUN_00053ac0();
        pplVar7 = (int64_t **)&g_02802688;
        if (plVar1 != (int64_t *)0x0) {
          (**(code **)(*plVar1 + 0x360))();
          cVar3 = FUN_00e85ea0();
          pplVar7 = &local_80;
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
        if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_f0 != '\0') && (local_f8 != 0)) {
          FUN_00d50b20();
        }
        if (plVar1 != (int64_t *)0x0) {
          local_e4 = (float)FUN_00d459e0();
          FUN_00d50b20();
          fVar12 = local_e4 / local_ac;
          fVar11 = fVar12;
          if (fVar13 <= fVar12) {
            fVar11 = fVar13;
          }
          local_44 = local_44 + fVar12;
          if (fVar12 <= local_9c) {
            fVar12 = local_9c;
          }
          iVar8 = iVar8 + 1;
          local_9c = fVar12;
          fVar13 = fVar11;
        }
      }
      FUN_00083b20();
      if (iVar8 != 0) {
        local_44 = local_44 / (float)iVar8;
      }
      (**(code **)(*(int64_t *)*this_ptr + 0x998))();
      plVar1 = (int64_t *)*this_ptr;
      if ((fVar13 != local_9c) || (NAN(fVar13) || NAN(local_9c))) {
        FUN_00e99dd0();
        local_c0 = local_70;
        local_b8 = 0;
        if (local_68[0] == '\0') {
          if (local_70 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_68[0] = '\0';
        }
        local_b8 = '\x01';
        (**(code **)(*plVar1 + 0x958))();
        if ((local_b8 != '\0') && (local_c0 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_68[0] != '\0') && (local_70 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((int64_t *)*param_4 != (int64_t *)0x0) {
          (**(code **)(*(int64_t *)*param_4 + 0x998))();
          if ((int64_t *)*param_4 != (int64_t *)0x0) {
            (**(code **)(*(int64_t *)*param_4 + 0x928))(local_44);
          }
        }
      }
      else {
        (**(code **)(*plVar2 + 0x378))();
        local_d0 = local_70;
        local_c8 = 0;
        if (local_68[0] == '\0') {
          if (local_70 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_68[0] = '\0';
        }
        local_c8 = '\x01';
        (**(code **)(*plVar1 + 0x958))();
        if ((local_c8 != '\0') && (local_d0 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_68[0] != '\0') && (local_70 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((int64_t *)*param_4 != (int64_t *)0x0) {
          (**(code **)(*(int64_t *)*param_4 + 0x998))();
          if ((int64_t *)*param_4 != (int64_t *)0x0) {
            (**(code **)(*(int64_t *)*param_4 + 0x928))(fVar13);
          }
        }
      }
      goto LAB_000b7dd6;
    }
  }
  if ((int64_t *)*param_4 != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)*param_4 + 0x998))();
    if ((int64_t *)*param_4 != (int64_t *)0x0) {
      (**(code **)(*(int64_t *)*param_4 + 0x928))(local_44);
    }
  }
  (**(code **)(*(int64_t *)*this_ptr + 0x998))();
  plVar1 = (int64_t *)*this_ptr;
  FUN_00e9aaa0();
  local_e0 = local_70;
  local_d8 = 0;
  if (local_68[0] == '\0') {
    if (local_70 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_68[0] = '\0';
  }
  local_d8 = '\x01';
  (**(code **)(*plVar1 + 0x958))();
  if ((local_d8 != '\0') && (local_e0 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_68[0] != '\0') && (local_70 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
LAB_000b7dd6:
  if ((local_40[0] != '\0') && (plVar2 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  return;
}

