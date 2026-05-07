// Function: FUN_00e0bbc0
// Address: 00e0bbc0
// Size: 1520 bytes
// Class: GNDistinction

uint64_t FUN_00e0bbc0(uint64_t param_1,int param_2)

{
  int64_t *plVar1;
  char cVar2;
  int iVar3;
  int64_t *plVar4;
  int64_t *plVar5;
  int64_t **pplVar6;
  int64_t **arg1;
  int64_t this_ptr;
  uint64_t uVar7;
  int64_t *local_80;
  char local_78;
  int64_t *local_70;
  int64_t *local_68;
  int64_t *local_60;
  char local_58;
  int64_t *local_50;
  char local_48 [8];
  int64_t local_40;
  int local_38;
  
  plVar4 = (int64_t *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar4 + 0x18))();
  plVar1 = (int64_t *)(*arg1)[2];
  local_70 = plVar4;
  if (plVar1 != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  local_48[0] = '\0';
  local_50 = plVar1;
  FUN_00ca1b70();
  if ((local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  plVar5 = (int64_t *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar5 + 0x18))();
  plVar1 = *(int64_t **)(this_ptr + 0x10);
  local_68 = plVar5;
  if (plVar1 != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  local_48[0] = '\0';
  local_50 = plVar1;
  FUN_00ca1b70();
  if ((local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  plVar1 = g_02781700;
  if ((*(int *)(this_ptr + 0x20) == 2) && ((int)(*arg1)[4] == 2)) {
    if (g_02781700 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    local_50 = plVar1;
    local_48[0] = '\0';
    FUN_00ca13a0();
    if ((local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    plVar1 = g_02781700;
    if (g_02781700 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    local_50 = plVar1;
    local_48[0] = '\0';
    FUN_00ca13a0();
    if ((local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  plVar5 = local_68;
  plVar1 = g_02781700;
  if (param_2 == 2) {
    if (*(int *)(this_ptr + 0x20) == 0) {
      if (0 < (int)(*arg1)[4]) {
LAB_00e0bdaa:
        if (g_02781700 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        local_50 = plVar1;
        local_48[0] = '\0';
        FUN_00ca13a0();
        if ((local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar1 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        plVar1 = g_02781700;
        if (g_02781700 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        local_50 = plVar1;
        local_48[0] = '\0';
        FUN_00ca13a0();
        if ((local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar1 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
      }
      goto LAB_00e0be3c;
    }
    if (0 < *(int *)(this_ptr + 0x20)) {
      if ((int)(*arg1)[4] == 0) goto LAB_00e0bdaa;
      goto LAB_00e0be3c;
    }
LAB_00e0be46:
    if ((int)(*arg1)[4] == 2) {
LAB_00e0be6a:
      plVar1 = g_027c20d8;
      if (g_027c20d8 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      local_50 = plVar1;
      local_48[0] = '\0';
      FUN_00ca13a0();
      if ((local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar1 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      plVar1 = g_027c20d8;
      if (g_027c20d8 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      local_50 = plVar1;
      local_48[0] = '\0';
      FUN_00ca13a0();
      if ((local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar1 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
    }
LAB_00e0befc:
    iVar3 = *(int *)(this_ptr + 0x20);
    if (2 < iVar3) goto LAB_00e0bf14;
    if ((int)(*arg1)[4] != 3) goto LAB_00e0bfbc;
  }
  else {
    if (1 < param_2 - 1U) goto LAB_00e0bfbc;
LAB_00e0be3c:
    iVar3 = *(int *)(this_ptr + 0x20);
    if (iVar3 < 2) goto LAB_00e0be46;
    if (iVar3 == 2) {
      if ((int)(*arg1)[4] < 2) goto LAB_00e0be6a;
      goto LAB_00e0befc;
    }
LAB_00e0bf14:
    if ((iVar3 != 3) || (2 < (int)(*arg1)[4])) goto LAB_00e0bfbc;
  }
  plVar1 = g_0276c080;
  if (g_0276c080 != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  local_50 = plVar1;
  local_48[0] = '\0';
  FUN_00ca13a0();
  if ((local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  plVar1 = g_0276c080;
  if (g_0276c080 != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  local_50 = plVar1;
  local_48[0] = '\0';
  FUN_00ca13a0();
  if ((local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
LAB_00e0bfbc:
  local_48[0] = '\0';
  local_50 = (int64_t *)0x0;
  local_40 = plVar5[2];
  local_38 = 0;
  if (0 < *(int *)(local_40 + 0xc)) {
    arg1 = &local_80;
    do {
      local_50 = *(int64_t **)(*(int64_t *)(local_40 + 0x10) + (int64_t)local_38 * 8);
      FUN_01da7840((int64_t)local_38,&local_50);
      plVar1 = local_60;
      if (local_58 == '\0') {
        if (local_60 != (int64_t *)0x0) {
          FUN_00d50b00();
          if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          goto LAB_00e0c060;
        }
LAB_00e0c17d:
        if ((local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        uVar7 = 0;
        goto LAB_00e0c198;
      }
      if (local_60 == (int64_t *)0x0) goto LAB_00e0c17d;
LAB_00e0c060:
      FUN_01da7840();
      local_80 = plVar1;
      local_78 = '\0';
      cVar2 = (**(code **)(*local_60 + 0x50))();
      if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      plVar4 = local_70;
      if (cVar2 == '\0') {
        FUN_00d50b20();
        plVar4 = local_70;
        goto LAB_00e0c17d;
      }
      local_60 = local_50;
      local_58 = '\0';
      FUN_00ca13a0();
      if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
      local_38 = local_38 + 1;
    } while (local_38 < *(int *)(local_40 + 0xc));
  }
  if ((local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00c9fe20();
  plVar1 = local_50;
  pplVar6 = &local_60;
  if (local_48[0] != '\0') {
    pplVar6 = (int64_t **)local_48;
  }
  local_60 = (int64_t *)CONCAT71(local_60._1_7_,local_48[0]);
  *(char *)pplVar6 = '\0';
  if ((local_48[0] != '\0') && (plVar1 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  uVar7 = CONCAT71((int7)((uint64_t)arg1 >> 8),*(int *)((int64_t)plVar1 + 0xc) == 0);
  if ((char)local_60 != '\0') {
    FUN_00d50b20();
  }
LAB_00e0c198:
  FUN_00d50b20();
  if (plVar4 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return uVar7 & 0xffffffff;
}

