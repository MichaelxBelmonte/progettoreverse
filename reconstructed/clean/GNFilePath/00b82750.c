// Function: FUN_00b82750
// Address: 00b82750
// Size: 2325 bytes
// Class: GNFilePath

void FUN_00b82750(uint64_t param_1,int param_2,uint32_t param_3,uint param_4)

{
  int64_t lVar1;
  int64_t *plVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  int64_t lVar6;
  uint32_t in_ECX;
  int64_t *plVar7;
  int64_t *arg1;
  int64_t this_ptr;
  uint64_t uVar8;
  int64_t *local_res8;
  int64_t local_d0;
  char local_c8;
  int64_t local_c0;
  char local_b8;
  int64_t local_b0;
  char local_a8;
  int64_t local_a0;
  char local_98;
  uint64_t local_90;
  int local_84;
  uint32_t local_80;
  uint32_t local_7c;
  int64_t local_60;
  char local_58;
  int64_t local_48;
  int64_t local_40;
  char local_38;
  
  uVar5 = (uint)((char)in_ECX == '\x02');
  if (param_4 != 1) {
    uVar5 = param_4;
  }
  *(uint *)(this_ptr + 0x50) = uVar5;
  lVar1 = *local_res8;
  local_90 = param_1;
  local_80 = in_ECX;
  if (lVar1 != 0) {
    lVar6 = *(int64_t *)(this_ptr + 0x40);
    if (lVar6 != lVar1) {
      FUN_00d50b00();
      *(int64_t *)(this_ptr + 0x40) = lVar1;
      if (lVar6 != 0) {
        FUN_00d50b20();
      }
    }
    uVar5 = *(uint *)(this_ptr + 0x50);
  }
  if (uVar5 == 1) {
    local_84 = 0;
    local_40 = *arg1;
    FUN_00b834c0(0,&local_84);
    if (local_58 == '\0') {
      if (local_60 != 0) {
        FUN_00d50b00();
        goto LAB_00b828d2;
      }
LAB_00b829d4:
      local_7c = 0;
      FUN_00b834c0(1,&local_7c);
      local_48 = local_60;
      if (local_60 == 0) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
        if (local_58 == '\0') {
          FUN_00d50b00();
        }
      }
      local_40 = *arg1;
      local_7c = 1;
      FUN_00b834c0(1,&local_7c);
      if (local_60 == 0) {
        bVar3 = false;
      }
      else if (local_58 == '\0') {
        FUN_00d50b00();
        bVar3 = true;
      }
      else {
        bVar3 = true;
      }
    }
    else {
      if (local_60 == 0) goto LAB_00b829d4;
LAB_00b828d2:
      if (local_84 == 0) {
        FUN_00d50b00();
        local_48 = *arg1;
        bVar3 = true;
        if (local_48 == 0) {
          bVar4 = false;
          local_48 = 0;
        }
        else if ((char)arg1[1] == '\0') {
          bVar4 = false;
        }
        else {
          bVar3 = true;
          FUN_00d50b00(local_48);
          bVar4 = true;
        }
      }
      else {
        lVar1 = *arg1;
        bVar3 = false;
        if ((lVar1 != 0) && ((char)arg1[1] != '\0')) {
          bVar3 = true;
          FUN_00d50b00();
        }
        bVar4 = true;
        FUN_00d50b00();
        local_48 = local_60;
        local_60 = lVar1;
      }
      FUN_00d50b20();
    }
    local_b8 = 0;
    lVar1 = *(int64_t *)(this_ptr + 0x40);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    local_b8 = '\x01';
    local_c0 = lVar1;
    FUN_00bb9c80(local_90,param_2,param_3,&local_c0);
    lVar1 = *(int64_t *)(this_ptr + 0x70);
    if (lVar1 != local_40) {
      if (local_40 == 0) {
        *(void*)(this_ptr + 0x70) = 0;
      }
      else {
        FUN_00d50b00();
        lVar1 = *(int64_t *)(this_ptr + 0x70);
        *(int64_t *)(this_ptr + 0x70) = local_40;
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
    }
    if ((local_b8 != '\0') && (local_c0 != 0)) {
      FUN_00d50b20();
    }
    local_a8 = 0;
    lVar1 = *(int64_t *)(this_ptr + 0x40);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    local_a8 = '\x01';
    local_b0 = lVar1;
    FUN_00bb9c80(local_90,param_2,param_3,&local_b0);
    lVar1 = *(int64_t *)(this_ptr + 0x88);
    if (lVar1 != local_40) {
      if (local_40 == 0) {
        *(void*)(this_ptr + 0x88) = 0;
      }
      else {
        FUN_00d50b00();
        lVar1 = *(int64_t *)(this_ptr + 0x88);
        *(int64_t *)(this_ptr + 0x88) = local_40;
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
    }
    local_38 = '\0';
    if ((local_a8 != '\0') && (local_b0 != 0)) {
      FUN_00d50b20();
    }
    lVar1 = *(int64_t *)(this_ptr + 0x58);
    if (lVar1 != local_48) {
      if (local_48 != 0) {
        FUN_00d50b00();
      }
      *(int64_t *)(this_ptr + 0x58) = local_48;
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
    }
    lVar1 = *(int64_t *)(this_ptr + 0x78);
    if (lVar1 != local_60) {
      if (local_60 != 0) {
        FUN_00d50b00();
      }
      *(int64_t *)(this_ptr + 0x78) = local_60;
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
    }
    if ((bVar3) && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if ((bVar4) && (local_48 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_98 = 0;
    lVar1 = *(int64_t *)(this_ptr + 0x40);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    local_98 = '\x01';
    local_a0 = lVar1;
    FUN_00bb9c80(local_90,param_2,param_3,&local_a0);
    lVar1 = *(int64_t *)(this_ptr + 0x70);
    lVar6 = lVar1;
    if (lVar1 != local_40) {
      lVar6 = local_40;
      if (local_38 == '\0') {
        if (local_40 == 0) {
          lVar6 = 0;
          goto LAB_00b82894;
        }
        FUN_00d50b00();
        lVar1 = *(int64_t *)(this_ptr + 0x70);
        *(int64_t *)(this_ptr + 0x70) = local_40;
      }
      else {
        local_38 = '\0';
LAB_00b82894:
        *(int64_t *)(this_ptr + 0x70) = lVar6;
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
        lVar6 = local_40;
      }
    }
    if ((local_38 != '\0') && (lVar6 != 0)) {
      FUN_00d50b20();
    }
    if ((local_98 != '\0') && (local_a0 != 0)) {
      FUN_00d50b20();
    }
  }
  lVar1 = g_02764880;
  if (*(int64_t *)(this_ptr + 0x70) == 0) {
    if (g_02764880 != 0) {
      FUN_00d50b00();
    }
    FUN_00cc78b0();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  *(void*)(this_ptr + 0x28) = local_80;
  *(void*)(this_ptr + 0x30) = local_90;
  *(void*)(this_ptr + 0x2c) = param_3;
  plVar2 = (int64_t *)*arg1;
  plVar7 = *(int64_t **)(this_ptr + 0x58);
  if (plVar7 == plVar2) {
LAB_00b82d95:
    *(int *)(this_ptr + 0x24) = param_2;
    plVar2 = plVar7;
  }
  else {
    if (plVar2 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    *(int64_t **)(this_ptr + 0x58) = plVar2;
    if (plVar7 != (int64_t *)0x0) {
      FUN_00d50b20();
      plVar7 = *(int64_t **)(this_ptr + 0x58);
      goto LAB_00b82d95;
    }
    *(int *)(this_ptr + 0x24) = param_2;
  }
  if (plVar2 == (int64_t *)0x0) goto joined_r0x00b82e56;
  (**(code **)(*plVar2 + 0x3c0))();
  lVar1 = *(int64_t *)(this_ptr + 0x60);
  lVar6 = lVar1;
  if (lVar1 != local_40) {
    lVar6 = local_40;
    if (local_38 == '\0') {
      if (local_40 == 0) {
        lVar6 = 0;
        goto LAB_00b82dd3;
      }
      FUN_00d50b00();
      lVar1 = *(int64_t *)(this_ptr + 0x60);
      *(int64_t *)(this_ptr + 0x60) = local_40;
    }
    else {
      local_38 = '\0';
LAB_00b82dd3:
      *(int64_t *)(this_ptr + 0x60) = lVar6;
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
      lVar6 = local_40;
    }
  }
  if ((local_38 != '\0') && (lVar6 != 0)) {
    FUN_00d50b20();
  }
  param_2 = *(int *)(this_ptr + 0x24);
joined_r0x00b82e56:
  if (param_2 != 10) {
    (**(code **)(*g_028a53a8 + 0x368))();
    uVar8 = FUN_00d50b00();
    local_c8 = 0;
    local_d0 = *(int64_t *)(this_ptr + 0x58);
    if (local_d0 != 0) {
      uVar8 = FUN_00d50b00();
    }
    local_c8 = '\x01';
    FUN_00b80860(uVar8,&local_d0);
    if ((local_c8 != '\0') && (local_d0 != 0)) {
      FUN_00d50b20();
    }
    if (this_ptr != 0) {
      FUN_00d50b20();
    }
    (**(code **)(*g_028a53a8 + 0x378))();
    (**(code **)(**(int64_t **)(this_ptr + 0x48) + 0x368))();
    FUN_00e31650();
    FUN_00b822a0();
    (**(code **)(**(int64_t **)(this_ptr + 0x48) + 0x378))();
  }
  return;
}

